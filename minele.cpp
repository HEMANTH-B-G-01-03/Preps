#include<stdio.h>
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main (){

    string str;
    getline(cin,str);

    for(char& c : str){
        tolower(c);
    }

    unordered_set<char> set;

    for(char c :str){
        set.insert(c);
    }

    string res="";
    for(char c='a';c<='z';c++){
        if(set.find(c)==set.end()){
            res+=c;
        }
    }
    cout<<res<<endl;

}