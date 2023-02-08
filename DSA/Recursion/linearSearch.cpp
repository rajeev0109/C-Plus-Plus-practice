#include<iostream>
using namespace std;

bool linearSearch(int arr[], int n, int k){
    if(n==0) return false;

    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1, n-1, k);
        return remainingPart;
    }
}

int main(){
    int arr[5] ={2,3,4,5,6};
    int size = 5;
    int key = 2;

    if(linearSearch(arr, size, key)) cout<<" Found "<<endl;
    else cout<<" Not found"<<endl;

}