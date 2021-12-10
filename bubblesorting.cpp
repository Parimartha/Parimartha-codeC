#include <stdio.h>

//sorting - cara kita mengurutkan data data
	//dalam suatu ruutan data
	
//	tipe:
//O(n^2)---time complexity
// TLE time limit excedeed
//		bubble sort
//		insertion sort
//		selection sort
//	
//		merger sort
//		quick sort

void bubbleSort (int arr[], int size){
	for(int i=0;i<size-1;i++){
		
		for(int j=0;j<size-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	for (int i=0;i<size;i++){
		printf("%d ", arr[i]);
	}
}

int main (){
	int arr[]= {5,1,4,2,8};
	int size = 5;
	bubbleSort(arr,size);
	
	return 0;
}
