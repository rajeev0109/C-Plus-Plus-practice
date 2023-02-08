#include<iostream>
using namespace std;

void printArray(int arr[], int size){
    cout<<"Printing the array"<<endl;
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<"Printing DONE";
}

int main(){

    // Declaring an array
    int arr[10];

    // initialising every element with 2, if we donot initialise the element of array then there will be a garbage value stored in them.
    for(int i = 0; i<10; i++){
        arr[i] = 2;
    }

    // printing to check all the elements
    printArray(arr, 10);

    return 0;
}