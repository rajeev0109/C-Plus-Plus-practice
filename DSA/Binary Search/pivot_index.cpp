// Find pivot element in rotated sorted array
// Pivot is the point where graph changes its direction
#include<iostream>
using namespace std;

int findPivot(int array[], int size){
    int s = 0;
    int e = size-1;

    int mid = s+(e-s)/2;

    while(s<e){
        if(array[mid]>=array[0]){
            s = mid + 1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return s;
}


int main(){

    // int arr[5] = {17,1,3,8,10};
    int arr[3] = {2,4,1};

    cout<<findPivot(arr, 3);


    return 0;
}