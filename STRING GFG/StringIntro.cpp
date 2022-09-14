#include<iostream>
using namespace std;
#include<string.h>
int main(){
    // Concatination of string
    string str1 = "Ayush";
    string str2 = "Raja";
    cout<<str1+str2<<endl;


// copy string
    string str3 = "xyz";
    string str4;
    cout<< str3.length()<<endl; // xyz

    string str5 = "Hii Iam Ayush Raja am I a good Ayush Ayush";
    cout<<str5.substr(1,5)<<endl; // position 1(i) se leke 5(a) tk bich k space v count hoga


// Find a stirng in string
    int x = str5.find("Ayush");
    cout<<x<<endl;


// swap a string1 in string 2----->  here str2 = "Raja"  and str3 = "xyz"
    cout<<"Str2 : "<<str2<<"\tStr3: "<<str3<<endl;
    str2.swap(str3); // Now str2 = xyz and str3 = Raja
    cout<<str2<<"\t"<<str3<<endl;


// Push a Character at last using push back
    str3.push_back('L');
    str2.pop_back();
    cout<<str2<<"\t"<<str3<<endl;

// get line jb pura statement lena hota hai space input k saath
    cout<<"Now give input in getLine function :"<<endl;
    string str6;
    getline(cin,str6);
    cout<<str6;
}