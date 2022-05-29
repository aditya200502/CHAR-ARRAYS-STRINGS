#include<bits/stdc++.h>
using namespace std;
int main(){

    char name [20];
    cout<<"enter the name::";
    cin>>name;
    //For length
    int count =0;
    for(int i=0; name[i] != '\0';i++){
        count ++;
    }
    int s=0,e=count-1;
    while (s<=e)
    {
        swap(name[s++],name[e--]);
    }
    cout<<"the reverse string is::"<<name;
    return 0;
}