#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int mid=0;
    int start=0;
    int end=4;
    int key=0;
    bool found = false;
    cout<<"Enter The Integer To Be Seartched ";
    cin>>key;
    while(start<end){
        mid = start +(end - start)/2;
        if (arr[mid]==key){
            found = true;
            break;
        }
        else if (arr[mid]>key){
            end = mid -1;
        }
        else if (arr[mid]<key){
            start = mid +1;
        }
        else{
            found = false;
        }
    }
    if(found){
        cout<<"The Value Is Found"<<endl;
    }
    else{
        cout<<"The Value Is Not Found"<<endl;
    }
    return 0;
}
