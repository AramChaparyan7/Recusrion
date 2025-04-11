#include <stdio.h>
#define SIZE 10

int min(int *arr,int size){
	if(size>1){
		if(arr[size-1]<min(arr,size-1)){
			return arr[size-1];
		}else{
			return min(arr,size-1);
		}
	}
	return arr[size-1];
}

int max(int *arr,int size){
	if(size>1){
		if(arr[size-1]>max(arr,size-1)){
			return arr[size-1];
		}else{
			return max(arr,size-1);
		}
	}
	return arr[size-1];
}

int main(){
	int arr[SIZE]={};
	for(int i=0;i<SIZE;++i){
		scanf("%d",arr+i);
	}
	printf("%d %d\n",max(arr,SIZE),min(arr,SIZE));
	return 0;
}
