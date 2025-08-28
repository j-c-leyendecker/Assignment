#include<iostream>
using namespace std;
int main(){
    int arr[8]={1,3,4,5,6,7,8,9};
    //linear time
    for(int i=0;i<8;i++){
        if((i+1)!=arr[i]){
            cout<<"Missing Element From Linear Time: "<<arr[i]-1<<endl;
            break;
        }
    }
    //Binary Search;
    
    int s=0;
    int e=7;
    int mid=0;
   while(s<=e){
       mid= (s+e)/2;
       if(arr[mid]-mid!=1){
           e = mid-1;
       }
       else{
           s=mid+1;
       }
        
    }
    cout<<"Missing Element From Binary Search: "<<s+1<<endl;
    
    return 0;
}
