#include<iostream>
using namespace std;

int sumElements(int array[], int size){
    int sum = 0;
    for(int i=0; i<size; i++){
        sum += array[i];
    }
    
    return sum;

}

int main(){
    int n, arr[10];

    cout<<"Enter Size: ";
    cin>>n;

    cout<<"Enter Elements: ";
    for (int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<sumElements(arr, n);
    
}