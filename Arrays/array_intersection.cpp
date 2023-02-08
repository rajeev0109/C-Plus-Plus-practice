#include<iostream>
using namespace std;

void arrayIntersection(int array1[], int size1, int array2[], int size2){

    // int resArray[1000];
    for(int i=0; i<size1; i++){
        int key = array1[i];
        for(int j=0; j<size2; j++){
            if(key == array2[j]){
                cout<<array2[j]<<" ";

                array2[j]= -1;
            }
        }
    }
}

int main(){
    int size1, arr1[1000];
    int size2, arr2[1000];

    cout<<"Enter size of first array: ";
    cin>>size1;

    cout<<"Enter the elements of first array: ";
    for(int i=0; i<size1; i++){
        cin>>arr1[i];
    }

    cout<<"Enter size of second array: ";
    cin>>size2;

    cout<<"Enter the elements of second array: ";
    for(int i=0; i<size2; i++){
        cin>>arr2[i];
    }

    arrayIntersection(arr1, size1, arr2, size2);
}