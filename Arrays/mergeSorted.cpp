#include<iostream>
using namespace std;

void mergeSort(int arr1[], int a, int arr2[], int b, int arr[]){

    int i=0, j=0, k=0;
    while(i<a && j<b){
        if(arr1[i]<arr2[j]){
            arr[k++]=arr1[i++];
        }
        else{
            arr[k++]=arr2[j++];
        }
    }

    while(i<a){
        arr[k++]=arr1[i++];
    }
    while(j<b){
        arr[k++]=arr2[j++];

    }
}

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}

int main(){
    int arr1[5] = {2, 3, 6, 7, 9};
    int arr2[3] = {1, 4, 8};

    int arr[8] ={0};

    mergeSort(arr1, 5, arr2, 3, arr);
    printArray(arr, 8);
}