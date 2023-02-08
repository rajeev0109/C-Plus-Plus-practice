#include<iostream>
using namespace std;

bool isFound(int arr[][3], int target, int rows, int cols){
    for(int row=0; row<rows; row++){
        for(int col=0; col<cols; col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

void printRowSum(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum += arr[i][j];
        }
    }
}

int main(){

    int arr[3][3];

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter the element for Search: ";
    cin>>target;

    if(isFound(arr, target, 3, 3)){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"Yes"<<endl;
    }


    return 0;
}