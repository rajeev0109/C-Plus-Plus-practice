#include<iostream>
using namespace std;

void bubbleSort(int arr[], int n)
{   
    for(int i=1; i<n; i++){// For round 1 to n-1
        bool swapped = false;
        for(int j=0; j<n-i; j++){// Processing element from 0th index to (n-1)th index
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                swapped = true;
            }
        }
        if(swapped == false){
            // No swapping done means the array is sorted
            break;
        }
    }
}

int main(){
    int arr[] = {10,7,8,14,9,20,4};

    bubbleSort(arr, 7);

    for(int i = 0; i<7; i++){
        cout<<arr[i]<<" ";
    }

}