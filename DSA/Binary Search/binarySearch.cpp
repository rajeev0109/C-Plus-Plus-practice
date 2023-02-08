#include<iostream>
using namespace std;

// complexity = O(log n)

int binarySearch(int array[], int size, int key){
    int start = 0, end = size-1;

    int mid = start + (end-start)/2;

    while(start<=end){
        if(key == array[mid]){
            return mid;
        }
        
        if(key>array[mid]){
            start = mid + 1;
        }
        else{// key<array[mid]
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}

int main(){
    int evenArray[10] = {1, 5, 9, 11, 14, 16, 18, 20, 25, 40};

    int oddArray[9] = {2, 6, 9, 10, 15, 17, 19, 20, 33};

    cout<<binarySearch(evenArray, 10, 20)<<endl;
    cout<<binarySearch(oddArray, 9, 20)<<endl;

}