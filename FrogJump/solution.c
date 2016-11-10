#include <stdio.h>

int solution(int X, int Y, int D) {
    // write your code in C99 (gcc 4.8.2)
	int distance = Y-X;
	int result=0;
	if(distance % D == 0){
		result = distance/D;
	}else{
		result = distance/D + 1;
	}
	return result;

}

int main(){

	printf("The frog needs to jump %d time(s).\n", solution(10,85,30) );

	return 0;

}
