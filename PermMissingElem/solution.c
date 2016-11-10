#include <stdio.h>

int solution(int A[], int N){

	long long int sum = 0; // if no one is missing.
	long long int sum_real=0; // someone is missing.
	int i=0;
	int res;

	// (N+1)*(N+2) is likely to overflow.
	if((N+1)%2 == 0){
		sum = (N+1)/2;
		sum *= (N+2);
	}else{
		sum = (N+2)/2;
		sum *= (N+1);
	}

	for(i=0;i<N;i++){
		sum_real +=(long long int) A[i];
	}

	res = (int)sum-sum_real;
	return res;
}

int main(){

	int a[4] = {2,3,1,5};

	printf("%d\n", solution(a,4));

	return 0;
}
