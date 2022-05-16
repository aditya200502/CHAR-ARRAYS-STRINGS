#include<bits/stdc++.h>
using namespace std;
int main(){

    char name[20];
    cout<<"enter your name::";
    cin>>name;
    cout<<"your name is::"<<name<<endl;
    name[2]='\0';
    cout<<"your name is::"<<name;
    return 0;
}