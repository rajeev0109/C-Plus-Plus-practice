#include<iostream>
using namespace std;

int max(int array[], int size){
    int max = INT32_MIN;

    for(int i=0; i<size; i++){

        if(array[i]>max){
            max = array[i];
        }

    }
    return max;
}
int min(int array[], int size){
    int min = INT32_MAX;

    for(int i=0; i<size; i++){

        if(array[i]<min){
            min = array[i];
        }

    }
    return min;
}

int main(){
    int n;
    cin>>n;

    int arr[10];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<max(arr, n)<<endl;
    cout<<min(arr, n)<<endl;

}