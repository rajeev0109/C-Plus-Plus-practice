#include<iostream>
using namespace std;

bool isFound(int array[], int size, int key){
    for(int i=0; i<size; i++){
        if(key == array[i]){
            return true;
        }
    }
    return false;
}

int main(){
    int n, arr[10], ele;

    cout<<"Enter size: ";
    cin>>n;

    cout<<"Enter elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to search for: ";
    cin>>ele;


    if(isFound(arr, n, ele)){
        cout<<ele<<" is present.";
    }
    else{
        cout<<ele<<" is absent.";
    }
}