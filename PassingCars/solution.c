#include <stdio.h>

int solution(int A[], int N) {
    // write your code in C99 (gcc 4.8.2)
    int i=0,j=0;
    int z[N];
    int ct_zero=0;
    int res=0;

    for(i=0;i<N;i++){
    	z[i]=-1;
    }

    for(i=0;i<N;i++){
    	if(A[i]==0){
    		z[j]=i;
    		j++;
    	}
    }
 
    for(i=0;i<N;i++){
    	if(z[i] == -1){
    		break;
    	}
    	ct_zero++;
    }

    for(i=0;i<N;i++){

    	if(z[i]!=-1){
    		res += N - (z[i]+1) - (ct_zero-(i+1)) ;
      		if(res>1000000000){
    			return -1;
    		}
    	}else{
    		break;
    	}
     }
    return res;
}

int main(){
	int a[5] ={0,1,0,1,1};
	printf("solution returns: %d\n",solution(a,5) );
	return 0;
}
