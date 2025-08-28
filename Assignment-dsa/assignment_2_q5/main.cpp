#include<iostream>
using namespace std;
void diognal(int arr[],int size);
void  tridigonal(int arr[],int size);
void uppertriangular(int arr2[],int size);
void lowertriangular(int arr2[],int size);
void symmetric(int arr2[],int size);
int main(){
    int arr[5]={1,2,3,4,5};
    int size = sizeof(arr)/sizeof(int);
    cout<<"Diognal Matrix :-"<<endl;
    diognal(arr,size);
    
    cout<<"Tridiognal Matrix :-"<<endl;
    int arr1[13]={1,2,3,4,5,6,7,8,9,10,11,12,13};
    size = sizeof(arr1)/sizeof(int);
    tridigonal(arr1,size);
    
    cout<<"UpperTriangular Matrix :-"<<endl;
    int arr2[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    size = sizeof(arr2)/sizeof(int);
    uppertriangular(arr2,size);
    
    
    cout<<"LowerTriangular Matrix :-"<<endl;
    size = sizeof(arr2)/sizeof(int);
    lowertriangular(arr2,size);
    
    
    cout<<"Symmetric Matrix :-"<<endl;
    size = sizeof(arr2)/sizeof(int);
    symmetric(arr2,size);
    
    return 0;
}
void diognal(int arr[],int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if(i==j){
                cout<<arr[i];
            }
            else{
                cout<<0;
            }
            cout<<" ";
        }
        cout<<endl;
    }
}
void  tridigonal(int arr[],int size){
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i==j){
                cout<<arr[j]<<"  ";
            }
            else if(i+1==j){
                cout<<arr[j+4]<<"  ";
                
            }
            else if(i==j+1){
                cout<<arr[j+9]<<" ";
                
            }
            else{
                cout<<0<<"  ";
            }
        }
        cout<<endl;
        
    }
}
void uppertriangular(int arr2[],int size){
    int k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i<=j){
                cout<<arr2[k];
                k++;
                if(k>=10){
                    cout<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                cout<<0<<"  ";
            }
        }
        cout<<endl;
    }
}
void lowertriangular(int arr2[],int size){
    int k=0;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(i>=j){
                cout<<arr2[k];
                k++;
                if(k>=10){
                    cout<<" ";
                }
                else{
                    cout<<"  ";
                }
            }
            else{
                cout<<0<<"  ";
            }
        }
        cout<<endl;
    }
}
void symmetric(int arr2[], int n) {
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(i >= j) {
                int index = i * (i + 1) / 2 + j;
                cout << arr2[index] << "\t";
            } else {
                int index = j * (j + 1) / 2 + i;
                cout << arr2[index] << "\t";
            }
        }
        cout << endl;
    }
}
