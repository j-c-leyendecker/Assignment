#include<iostream>
using namespace std;

void Transpose(int row,int col,int arr[][5]);
void addition(int row,int col,int arr[][5],int arr1[][5]);
void multiplication(int row,int col,int arr[][5],int arr1[][5]);

int main(){
    int arr[5][5] = {
        {1,0,0,0,0},
        {0,0,0,0,0},
        {0,0,0,0,0},
        {0,0,3,0,0},
        {0,0,0,2,0}};
    
    int arr1[5][5] = {
        {0,0,0,1,0},
        {0,0,0,0,0},
        {7,0,0,0,0},
        {0,0,0,0,0},
        {0,9,0,0,0}};
  
    int row = 5;
    int col = 5;

    cout << "----------Transpose---------\n";
    Transpose(row, col, arr);

    cout << "----------Addition---------\n";
    addition(row, col, arr, arr1);

    cout << "----------Multiplication---------\n";
    multiplication(row, col, arr, arr1);

    return 0;
}

void Transpose(int row,int col,int arr[][5]){
    cout<<"Row\tColumn\tValue"<<endl;
    for(int i = 0; i < col; i++){
        for(int j = 0; j < row; j++){
            if(arr[j][i]!=0){
                cout<<i+1<<"\t\t"<<j+1<<"\t\t"<<arr[j][i]<<endl;
            }
        }
       
    }
}

void addition(int row,int col,int arr[][5],int arr1[][5]){
    cout<<"Row\tColumn\tValue"<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            if(arr[i][j]+arr1[i][j]!=0){
                cout<<j+1<<"\t\t"<<i+1<<"\t\t"<<arr[i][j]+arr1[i][j]<<endl;
            }
        }
    }
}

void multiplication(int row,int col,int arr[][5],int arr1[][5]){
    int result[5][5] = {0};
    cout<<"Row\tColumn\tValue"<<endl;
    for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){
            for(int k = 0; k < col; k++){
                result[i][j] += arr[i][k] * arr1[k][j];
            }
            if(result[i][j]!=0){
                cout<<i+1<<"\t\t"<<j+1<<"\t\t"<<result[i][j]<<endl;
            }
        }
    }
}

