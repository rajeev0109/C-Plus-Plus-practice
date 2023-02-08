#include<iostream>
using namespace std;

void mergeSorted(int *arr, int s, int e){
    int mid = s+(e-s)/2;
    
    int len1 = mid - s + 1;
    int len2 = e - mid;

    // Creating two arrays to copy the values of sorted array
    int* first = new int[len1]; 
    int* second = new int[len2];
    // Copy values
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }
    mainArrayIndex = mid + 1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    int index1 = 0, index2 = 0;
    mainArrayIndex = s;

    // Merging two sorted array
    while(index1 < len1 && index2 < len2){
        if(first[index1]<second[index2]){
            arr[mainArrayIndex++] = first[index1++];
        }
        else{
            arr[mainArrayIndex++] = second[index2++];
        }
    }
    while(index1<len1){
        arr[mainArrayIndex++] = first[index1++];
    }
    while(index2<len2){
        arr[mainArrayIndex++] = second[index2++];
    }

    // Deleting the memory used of heap
    delete [] first;
    delete [] second;


}

void sortArray(int* arr, int s, int e){

    if(s>=e){
        return;
    }
    int mid = s+(e-s)/2;

    // Left wala part sort kro
    sortArray(arr, s, mid);

    // Right wala part sort kro
    sortArray(arr, mid+1, e);

    // Sorted array ko merge kr do
    mergeSorted(arr, s, e);

}

int main(){

    int arr[5] = {5,9,10,2,1};
    int size = 5;
    sortArray(arr, 0, size-1);
    for(int i=0;i<5; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    return 0;
}