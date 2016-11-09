#include <stdio.h>

//https://gist.github.com/mycodeschool/9678029
#include <stdlib.h>

void Merge(int *A,int *L,int leftCount,int *R,int rightCount) {
   int i,j,k;

   i = 0; j = 0; k =0;

   while(i<leftCount && j< rightCount) {
      if(L[i]  < R[j]) A[k++] = L[i++];
      else A[k++] = R[j++];
   }
   while(i < leftCount) A[k++] = L[i++];
   while(j < rightCount) A[k++] = R[j++];
}

// Recursive function to sort an array of integers. 
void MergeSort(int *A,int n) {
   int mid,i, *L, *R;
   if(n < 2) return; // base condition. If the array has less than two element, do nothing. 

   mid = n/2;  // find the mid index. 
   L = (int*)malloc(mid*sizeof(int)); 
   R = (int*)malloc((n- mid)*sizeof(int)); 
   
   for(i = 0;i<mid;i++) L[i] = A[i]; // creating left subarray
   for(i = mid;i<n;i++) R[i-mid] = A[i]; // creating right subarray

   MergeSort(L,mid);  // sorting the left subarray
   MergeSort(R,n-mid);  // sorting the right subarray
   Merge(A,L,mid,R,n-mid);  // Merging L and R into A as sorted list.
        free(L);
        free(R);
}

int solution(int A[], int N) {
    // write your code in C99 (gcc 4.8.2)
    int i=0;
    int ref;
    int ct=1;
    MergeSort(A,N);

    if(N==0){
    	return 0;
    }else{
    	ref=A[0];
    }


    for(i=0;i<N;i++){
     	if(ref != A[i]){
    		ct++;
    		ref = A[i];
    	}
     }

    return ct;
}

int main(){
	int a[6]= {2,1,1,2,3,1};
	printf("%d\n", solution(a, 6) );
	return 0;
}
