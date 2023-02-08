#include<iostream>
using namespace std;

void occurenceCounter(int array[], int size){
    int fr[10];
    int visited = -1;

    for (int i=0; i<size; i++){
        int count = 1;
        for(int j=i+1; j<size; j++){
            if(array[i] == array[j]){
                count ++;
                // Marking elements to avoid counting again
                fr[j] = visited;
            }
        }
        if(fr[i]!=visited){
            fr[i] = count;
        }
    }
    for(int i=0; i<size; i++){
        if(fr[i]!=visited){
            cout<<array[i]<<" appears "<<fr[i]<<" times"<<endl;
        }
    }
}

int main(){

    int n, arr[10];
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    occurenceCounter(arr, n);

    return 0;
}