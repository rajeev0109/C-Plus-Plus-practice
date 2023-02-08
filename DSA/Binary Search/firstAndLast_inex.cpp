#include<iostream>
using namespace std;

int firstOcc(int array[], int size, int key){
    int s = 0, e = size-1, ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(key == array[mid]){
            ans = mid;
            e = mid-1;
        }
        else if(key>array[mid]){// Right me jaao
            s = mid + 1;
        }
        else if(key<array[mid]){// Left me jaao
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans; 
}
int lastOcc(int array[], int size, int key){
    int s = 0, e = size-1, ans = -1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(key == array[mid]){
            ans = mid;
            s = mid+1;
        }
        else if(key>array[mid]){// Right me jaao
            s = mid + 1;
        }
        else if(key<array[mid]){// Left me jaao
            e = mid -1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}

int main(){
    int arr[6] = {1, 4, 6, 6, 6, 6};

    cout<<"First Occurence of 6 is: "<<firstOcc(arr, 6, 6)<<endl;
    cout<<"First Occurence of 6 is: "<<lastOcc(arr, 6, 6)<<endl;

    cout<<"Number of Occurence: "<<lastOcc(arr, 6, 6) - firstOcc(arr, 6, 6) + 1 << endl;

    return 0;
}