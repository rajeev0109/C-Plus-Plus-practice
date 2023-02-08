#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){
    int mid = s+(e-s)/2;
    if(s>e) return false;
    if(arr[mid]==k){
        return true;
    }
    else if(arr[mid]<k){
        return binarySearch(arr, mid + 1, e, k);
    }
    else{
        return binarySearch(arr, s, mid - 1, k);
    }
}

int main(){
    int arr[5] ={2,3,4,5,6};
    int size = 5;
    int key = 15;

    bool ans = binarySearch(arr, 0, size-1, key);
    if(ans) cout<<"found";
    else cout<<"Not found";
}