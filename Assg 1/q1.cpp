#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    for(int i=0; i<s.length(); i++){
        if(i%2!=0) s[i]='#';
    }
    cout << "Output: " << s ;
    return 0;
}