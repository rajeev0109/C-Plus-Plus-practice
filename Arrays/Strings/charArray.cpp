#include<iostream>
using namespace std;
/*
bool checkPalindrome(char name[], int n){
    int s = 0, e = n-1;
    int isTrue = 0;
    while(s<=e){
        if(name[s]==name[e]){
            isTrue = 1;
        }
        else{
            isTrue = 0;
            break;
        }
        s++;
        e--;
    }
    return isTrue;
}
*/
char toLowecase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A'+'a';
        return temp;
    }
}
bool checkPalindrome(char name[], int n){
    int s = 0, e = n-1;
    while(s<=e){
        if( toLowecase(name[s]) != toLowecase(name[e]) ){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

void reverse(char name[], int n){
    int s=0, e = n-1;
    while(s<e){
        swap(name[s], name[e]);
        s++;
        e--;
    }
}

int numOfchar(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count ;
}

int main(){
    char name[20];
    cout<<"Enter Your name: ";
    cin>>name;

    // cout<<"Your name is: "<<name<<endl;
    int n=numOfchar(name);
    
    // cout<<"Number of character in your name is: "<<n<<endl;

    // reverse(name, n);
    // cout<<name;

    cout<<checkPalindrome(name, n);
    return 0;
}