// Rotate matrix by 90 degree clockwise
#include<iostream>
using namespace std;

void transposeMatrix(int arr[][3], int row, int col){
    for(int i=0;i<row; i++){
        for(int j=0; j<i; j++){
            swap(arr[i][j], arr[j][i]);
        }
    }
}

void reverse(int arr[][3], int n, int m){
    int s=0;
    int e=m-1;

    while(s<=e){
        for(int i=0;i<n;i++){
            swap(arr[i][s],arr[i][e]);
        }
        s++;
        e--;
    }
}

int main(){
    int arr[3][3];

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cin>>arr[row][col];
        }
    }
    cout<<" Before Reverse "<<endl;
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose Matrix : "<<endl;
    transposeMatrix(arr, 3, 3);
    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<"Transpose and Reverse: Rotated matrix"<<endl;
    reverse(arr, 3, 3);

    for(int row=0; row<3; row++){
        for(int col=0; col<3; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    return 0;
}