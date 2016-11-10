#include <stdio.h>
 
int solution(int X, int A[], int N) {
    // write your code in C99 (gcc 4.8.2)
   int i;
   int B[X];
   int ct=0;
   int res=0;

   for(i=0;i<X;i++){
   		B[i]=-1;
   }

	for(i=0;i<N;i++){
		if(A[i]>0 && A[i]<X+1){
			if(B[A[i]-1] == -1){
				B[A[i]-1] = i;
				ct ++;
				res = i;
			}
		}
	}

	for(i=0;i<X;i++){
		if(B[i]==-1){
			return -1;
		}
	}
	return res;

}

int main(){

	int A[8] = {1,3,1,4,2,3,5,4};
	printf("solution returns: %d\n", solution(5,A,8));
	return 0;
}
