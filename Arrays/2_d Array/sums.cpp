#include<iostream>
using namespace std;

void printRowSum(int arr[][3], int rows, int cols){
    for(int i=0; i<rows; i++){
        int sum = 0;
        for(int j=0; j<cols; j++){
            sum += arr[i][j];
        }
        cout<<sum<<" ";
    }
}

void printColSum(int arr[][3], int rows, int cols){
    for(int i=0; i<cols; i++){
        int sum = 0;
        for(int j=0; j<rows; j++){
            sum += arr[j][i];
        }
        cout<<sum<<" ";
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

    printColSum(arr, 3, 3);


    return 0;
}