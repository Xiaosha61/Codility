#include <stdio.h>

int solution(int A, int B, int K) {
    // write your code in C99 (gcc 4.8.2)
    if(A%K == 0){
    	return B/K - A/K +1;
    }else{
    	return B/K - A/K;
    }

}

int main(){

	printf("solution returns: %d\n", solution(6,11,2));
	return 0;
}
