#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    int i = 1;
    while(i<n){
        int temp = arr[i];
        int j = i-1;
        while(j>=0){
            if(arr[j]>temp){
                // Shift
                arr[j+1]= arr[j];
            }
            else{
                break;
            }
            j--;
        }
        i++;
        arr[j+1]=temp;
    }
}

int main(){

    int arr[] = {4,7,3,10,15,1};

    insertionSort(arr, 6);

    for(int i=0; i<6; i++){
        cout<<arr[i]<<" ";
    }
}