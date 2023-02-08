#include<iostream>
using namespace std;

char getMax(string s){
    int arr[26]={0};
    for(int i=0; i<s.size(); i++){
        int index = 0;
        if(s[i]>='a' && s[i]<='z'){
            index = s[i]-'a';
        }
        else{
            index = s[i]-'A';
        }
        arr[index]++;
    }
    int max=-1, ans = 0;
    for(int i=0; i<26; i++){
        if(arr[i]>max){
            ans = i;
            max = arr[i];
        }
    }
    char finalAnswer = 'a' + ans;
    return finalAnswer;
    
}

int main(){
    string s;
    cin>>s;

    cout<<getMax(s);



    return 0;
}