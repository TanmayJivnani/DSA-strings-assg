#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int cnt=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] =='a' || s[i] =='A') continue;
        if(s[i] =='e' || s[i] =='E') continue;
        if(s[i] =='i' || s[i] =='I') continue;
        if(s[i] =='o' || s[i] =='O') continue;
        if(s[i] =='u' || s[i] =='U') continue;
        if(s[i] == ' ' || s[i] =='.' || s[i] ==',' || s[i] ==';') continue;
        cnt++;
    }
    cout << "Count OF Consonants: " << cnt ;
    return 0;
}