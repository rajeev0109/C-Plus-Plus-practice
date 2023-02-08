#include<iostream>
using namespace std;

int main(){
    int rows, cols;
    cin>>rows>>cols;
// Creating array dynamically
    int** arr = new int* [rows];
    for(int i=0; i<rows; i++){
        arr[i]= new int [cols];
    }
// Taking input 
    for(int i=0;i<rows; i++){
        for(int j=0; j<cols; j++){
            cin>>arr[i][j];
        }
    }
// Printing array
    for(int i=0;i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

// Deleting array manually
    for(int i=0;i<rows; i++){
        delete []arr[i];
    }
    delete []arr;
// printing after deletion --> Prints some garbage value because elements are deleted
    for(int i=0;i<rows; i++){
        for(int j=0; j<cols; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }
    return 0;
}