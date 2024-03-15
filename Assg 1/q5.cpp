#include<iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    getline(cin,s);
    int n=s.length();
    long int num=0;
    int mult=1;
    for(int i=n-1; i>=0; i--){  // from units place backwards
        num+=(s[i]-48)*mult;
        mult*=10;
    }
    cout << "Num: " << num;
    return 0;
}