#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int i=0; int j=s.size()-1;
    bool flag=true; // true -> palindrome
    while(i<j){
        if(s[i]!=s[j]){
            flag=false;
            break;
        }
        i++;
        j--;
    }
    
    if(flag==true) cout << "String is Palindrome";
    else cout << "String is not Palindrome";
    return 0;
}