#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str;
    char stack[17];
    int top = -1;

    getline(cin, str);

    cout<<"Original string: "<<str<<endl;

    for(int i=0;i<str.size();i++){
        stack[i] = str[i];
        top++;
    }

    str = "";

    while(top!=-1){

        str += stack[top];
        top--;
    }

    cout<<"Reversed string: "<<str<<endl;

    return 0;
}
