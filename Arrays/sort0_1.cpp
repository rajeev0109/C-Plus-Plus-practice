#include<iostream>
using namespace std;

void printArray(int array[], int size){
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void sortArray(int array[], int size){
    int left = 0;
    int right = size-1;
    while(left<right){
        while(array[left]==0 && left<right){
            left++;
        }
        while(array[right]==1 && left<right){
            right--;
        }
        swap(array[left], array[right]);
        left++;
        right--;
    }
}

int main(){
    int arr[8] = {0,0,1,1,1,0,0,1};

    sortArray(arr,8);
    printArray(arr,8);
}