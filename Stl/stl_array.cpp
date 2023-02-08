#include<iostream>
#include<array>

using namespace std;

int main(){
    // Static array
    array<int, 4> a = {2,4,5,6};
    int size = a.size();

    cout<<"The size of array is -->"<<size;

    cout<<"Element at second index -->"<<a.at(2);

    cout<<endl;

    cout<<a.empty()<<" "<<a.front()<<" "<<a.back()<<endl;



    
}