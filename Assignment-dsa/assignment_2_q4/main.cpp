#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main(){
    string a ="hello ";
    string b ="bro";
    string c = a+b;//concanation of strings
    string d="";
    cout<<"The Concanated Arry Is: "<<c<<endl;
    reverse(c.begin(),c.end());//reversing strings
    cout<<"The Reversed Arry Is: "<<c<<endl;

                                //removing vowles
    for(int i=0;i<c.length();i++){
        if(c[i]=='a'||c[i]=='e'||c[i]=='i'||c[i]=='o'||c[i]=='u'){
            continue;
        }
        else{
            d=d+c[i];
        }
    }
    cout<<"The Vouwel Removed String Is: "<<d;
    cout<<endl;
                                //sorting sting
   sort(c.begin(),c.end());

    cout<<"The Sorted Arry Is: "<<c<<endl;


    string e ="";
    for(int i=0;i<c.length();i++){
        e += static_cast<char>(toupper(c[i]));
    }

    cout<<"The Capital Arry Is: "<<e<<endl;
    e ="";
    for(int i=0;i<c.length();i++){
        e += static_cast<char>(tolower(c[i]));
    }

    cout<<"The Lowercase Arry Is: "<<e<<endl;



    return 0;
}
