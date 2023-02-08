#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    
    string s;
    cout<<"Enter the string: ";
    getline(cin, s);
    cout<<"You have entered: "<<s<<endl;

    // cout<<str.length();


    
    int start = 0;
    int p = 0;
    for (int i = 0; i <= s.length(); i++)
    {
        if (s[p] == ' ' || s[p] == '\0')
        {
            int end = p - 1;
            while (start <= end)
            {
                swap(s[start],s[end]);
                start++;
                end--;
            }
            start=p+1;
        }
        p++;
    }
    cout<<s;

    return 0;
}