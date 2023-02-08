#include<iostream>
using namespace std;

int counter(int x){

    int count = 0;
    while(x!=0){
        if(x&1){
            count ++;
        }
        x>>=1;
    }
    // while(y!=0){
    //     if(y&1){
    //         count ++;
    //     }
    //     y>>=1;
    // }
    return count;

}

int setBits(int x, int y){
    int total_1 = counter(x) + counter(y);
    return total_1;

}


int main(){
    int m, n;
    cin>>m>>n;

    cout<<"Total 1 bits are: "<<setBits(m, n)<<endl;

    return 0;
}