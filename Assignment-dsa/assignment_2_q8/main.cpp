#include<iostream>
using namespace std;

int unique(int arr[], int size);

int main() {
    int arr[10] = {1, 2, 2, 4, 5, 5, 7, 8, 8, 9};
   cout<<"The number of unique elements are: " <<unique(arr, 10)<<endl;
    return 0;
}

int unique(int arr[], int size) {
    int maxVal = INT_MIN;
    int count=0;

    for (int i = 0; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    int* freq = new int[maxVal + 1]();

   
    for (int i = 0; i < size; i++) {
        freq[arr[i]]++;
    }

    for (int i = 0; i <= maxVal; i++) {
        if (freq[i] == 1) {
            count++;
        }
    }

    delete[] freq;
    return count;
}

