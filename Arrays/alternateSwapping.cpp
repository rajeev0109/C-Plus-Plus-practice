#include<iostream>
using namespace std;

void swappArrayElements(int array[], int size){
    // int first = 0;
    // int second = 1;
    // while(first<=size-2){
    //     swap(array[first],array[second]);
    //     first += 2;
    //     second += 2;
    // }


    for(int i=0; i<size; i+=2){
        if((i+1)<size){
            swap(array[i],array[i+1]);
        }
    }
    
    // Printing after swapping
    for(int i=0; i<size; i++){
        cout<<array[i]<<" ";
    }

}

int main(){
    int n;
    cout<<"Enter size: ";
    cin>>n;

    int arr[10];
    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Printing before swapping
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    swappArrayElements(arr, n);
}