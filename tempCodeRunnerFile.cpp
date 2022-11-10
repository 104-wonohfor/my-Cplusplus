#include<iostream>
using namespace std;

void swap(int *a,int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int partition(int arr[],int l,int h){
    h= 0;
	int x=arr[h];
	int i=l-1;
	for(int j=l; j<=h-1; j++){
		if(arr[j]<=x){
			i++;
			swap(&arr[i],&arr[j]);
		}
	}
	swap(&arr[i+1],&arr[h]);
	return(i+1);
}
void quicksort(int arr[],int l,int h){
	if(l<h){
		int p=partition(arr,l,h);
		quicksort(arr,l,p-1);
		quicksort(arr,p+1,h);
	}
}
int main(){
    #define n 10
    int arrayA[n] = {7,5,9,19,12,5,2,5,5,10};
    partition(arrayA,0,n);
    quicksort(arrayA,0,n);
    cout<<"\narrayA: ";
        for (int k = 0; k < n; k++){
        cout<<arrayA[k]<<" ";
        }
}