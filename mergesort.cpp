#include<stdio.h>

//5. MERGE SORT

void merge(int arr[], int L, int M, int R){
	//nL = panjang dari left arr
	int nL = M-L+1; //3 - 0 + 1 = 4
	int nR = R-M; //7 - 3 = 4
	
	int i=0, j=0, k=L;
	
	int left[nL], right[nR];
	for(int i=0; i<nL; i++){ //i yang di sini lokal ke loop, beda sama i di atas
		left[i]=arr[L+i];
	}
	for(int i=0; i<nR; i++){ //i yang di sini juga lokal ke loop ini
		right[i]=arr[M+1+i];
	}
	while(i<nL && j<nR){
		if(left[i]<=right[j]){
			arr[k]=left[i];
			i++;
			k++;
		}else{
			arr[k] = right[j];
			j++;
			k++;
		}
	}
	while(i < nL){ //jika yang tersisa itu di left sub array
		arr[k] = left[i];
		i++;
		k++;
	}
	while(j < nR){ //jika yang tersisa itu di right sub array
		arr[k] = right[j];
		j++;
		k++;
	}
}
void mergeSort(int arr[], int L, int R){
	if(L<R){
		int M=(L+R)/2;
		mergeSort(arr, L, M); //rekursif kiri
		mergeSort(arr, M+1, R); //rekursif kanan
		merge(arr, L, M, R);
	}
}

int main(){
	int arr[] = {2,4,1,6,8,5,3,7};
	int N = sizeof(arr)/sizeof(arr[0]);
	mergeSort(arr, 0, N-1);
	
	for(int i=0; i<N; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
