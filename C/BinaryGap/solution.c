#include <stdio.h>

int solution(int N){

	int remainer=0;
	int counting=0; // 1:have met a 1, now is counting length of 0s.
	int length=0;
	int maxgap=0;

	do{
		remainer=N%2;
		N=N/2;  
		printf("%d\n", remainer);
   		if(remainer==1){
			if(counting ==1){
				if(length>maxgap){
					maxgap = length;
				}
				length = 0;
				continue;
			}
			counting = 1;
		}
		if(remainer==0 && counting== 1){
			length++;
		}

	}while(N!=0); 

	return maxgap;

}

int main(){
	long int N=5;
	printf("The binary gap of %ld is %d\n", N, solution(N) );
	return 0;
}
