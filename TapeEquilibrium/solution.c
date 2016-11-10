#include <stdio.h>

int absolute(int a, int b){
	int res;
	if(a >= b){
		res = a-b;
	}else{
		res = b-a;
	}
	return res;
}

int solution(int A[], int N){
	int i=0;

	int sum_left = A[0];
	int sum_right = 0;
	int diff;
	int res;

	for(i=1;i<N;i++){
		sum_right += A[i];
	}

	diff = absolute(sum_left,sum_right);
	res = diff;

	for(i=1; i<=N-2; i++){
		sum_left += A[i];
		sum_right -= A[i];
		diff = absolute(sum_left,sum_right);
		if(diff<res){
			res = diff;
		}
	}

	return res;

}

int main(){

	int a[5] = {3,1,2,4,3};
	printf("%d\n", solution(a,5));
	return 0;
}
