#include<iostream>
using namespace std;
// For more than 1 repeating elements
void findDuplicates(int array[], int size){
    int ele[size];

    for(int i=0; i<size; i++){
        int count = 1;
        for(int j=i+1; j<size; j++){
            if(array[i] == array[j]){
                count ++;

                ele[j] = -1; // marked visited
            }
        }
        if(ele[i]!=(-1)){
            ele[i] = count;
        }
    }
    cout<<"Duplicate elements: ";
    for(int i=0; i<size; i++){
        if(ele[i]!=(-1) && ele[i] > 1){
            cout<<array[i]<<" ";
        }
    }   
}

int main(){

    int n, arr[1000];
    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    findDuplicates(arr, n);


    return 0;
}