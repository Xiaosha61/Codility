#include <stdio.h>

int equi(int a[], int n){
	long long int i=0;
	int sum=0;
	int lowersum=0;
	int highersum=0;

	for(i=0;i<n;i++){
 		sum += a[i];
	}


 
	for(i=0;i<n;i++){
		if(i>0){
			lowersum += a[i-1];
		}

		if(i==1){
			printf("%d\n", lowersum);
		}

		if(lowersum == sum - a[i] - lowersum){
			return i;
		}
	}
	return -1;

}

int main()
{
	int  A[8]={-1,3,-4,5,1,-6,2,1};

	printf("The equilibrium index is: %d\n",equi(A,8));

	return 0;

} 
