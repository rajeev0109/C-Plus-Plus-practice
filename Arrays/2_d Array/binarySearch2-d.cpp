#include<iostream>
using namespace std;

bool binarySearch(int arr[][4], int n, int m, int target){
    int s=0, e=n*m-1;
    int mid=s+(e-s)/2;
    while(s<=e){
        if(arr[mid/m][mid%m]==target){
            return 1;
        }
        if(arr[mid/m][mid%m]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return 0;
}

int main(){
    int arr[4][4];
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

    for(int row=0; row<4; row++){
        for(int col=0; col<4; col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    int target;
    cout<<"Enter element to search: "<<endl;
    cin>>target;
    cout<<binarySearch(arr, 4, 4, 8);
    return 0;
}