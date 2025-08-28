#include<iostream>
using namespace std;
int inversion(int arr[],int size);
int main(){
    int arr[10]={1,2,3,9,8,7,6,5,4,0};
    cout<< inversion(arr,10)<<endl;
    return 0;
}
int inversion(int arr[],int size){
    int count =0;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(arr[i]>arr[j]){
                count ++;
            }
        }
    }
    return count;
}
