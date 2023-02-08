#include<iostream>
using namespace std;

void printWave(int arr[][3], int rows, int cols){
    for(int j=0; j<cols; j++){
        if(j&1){
            // Odd col
            for(int i=rows-1; i>=0; i--){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            // Even col
            for(int i=0; i<rows; i++){
                cout<<arr[i][j]<<" ";
            }
        }
    }
}

void printSpiral(int arr[][3], int rows, int cols){
    int count =0;
    int total = rows*cols;

    // index initialisation
    int startingRow = 0;
    int endingRow = rows - 1;
    int startingCol = 0;
    int endingCol = cols - 1;

    while(count<total){
        // Starting row ko print kr do
        for(int i=startingCol; count<total && i<=endingCol; i++){
            cout<<arr[startingRow][i]<<" ";
            count++;
        }
        startingRow++;

        // Ending col ko print kr lo
        for(int i=startingRow; count<total && i<=endingRow; i++){
            cout<<arr[i][endingCol]<<" ";
            count++;
        }
        endingCol--;

        // Ending row ko print kr lo
        for(int i=endingCol; count<total && i>=startingCol; i--){
            cout<<arr[endingRow][i]<<" ";
            count++;
        }
        endingRow--;

        // Starting col ko print kr lo
        for(int i=endingRow; count<total && i>=startingRow; i--){
            cout<<arr[i][startingCol]<<" ";
            count++;
        }
        startingCol++;
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

    printSpiral(arr, 3, 3);
    return 0;
}