#include<iostream>
#include<algorithm>
using namespace std;

void deletion(int arr[], int &size, int position);
void display(int arr[], int size);

int main(){
    int arr[5] = {1, 1, 3, 4, 4};
    int size = sizeof(arr) / sizeof(int);

    sort(arr, arr + size);

    for(int i = 0; i < size - 1; i++){
        if(arr[i] == arr[i + 1]){
            deletion(arr, size, i);
            i--; 
        }
    }

    display(arr, size);
    return 0;
}

void deletion(int arr[], int &size, int position){
    for(int i = position; i < size - 1; i++){
        arr[i] = arr[i + 1];
    }
    size--;
}

void display(int arr[], int size){
    cout << "[";
    for(int i = 0; i < size; i++){
        cout << arr[i];
        if(i < size - 1) cout << ", ";
    }
    cout << "]" << endl;
}

