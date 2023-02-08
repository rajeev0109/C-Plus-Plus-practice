#include<iostream>
using namespace std;

void reverseArr(int array[], int size){

    int start = 0;
    int end = size-1;
    while(start<end){
        swap(array[start], array[end]);
        start += 1;
        end -= 1;
    }


    cout<<"After reversing: ";
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }
}

int main(){
    int n, arr[10];
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Before reversing: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    reverseArr(arr, n);

}