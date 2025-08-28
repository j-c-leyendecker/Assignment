#include <iostream>
using namespace std;

struct arr {
    int* a;
    int size;
    int length;
};

void create(struct arr* a1);
void fill_array(struct arr* a1);
void display(struct arr* a1);
void Delete(struct arr* a1);
int Linear_search(struct arr* a1);
int main() {
    bool running = true;
    struct arr a1 = { NULL, 0, 0 };
    int choice = 0;

    while (running) {
        cout << "\n----------- MENU -----------\n";
        cout << "1. CREATE ARRAY\n";
        cout << "2. FILL ARRAY ELEMENTS\n";
        cout << "3. DISPLAY ARRAY\n";
        cout << "4. DELETE ELEMENT (BY INDEX)\n";
        cout << "5. LINEAR SEARCH ELEMENT\n";
        cout << "6. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                create(&a1);
                break;
            case 2:
                fill_array(&a1);
                break;
            case 3:
                display(&a1);
                break;
            case 4:
                Delete(&a1);
                break;
            case 5: {
                int index = Linear_search(&a1);
                if (index != -1)
                    cout << "Value found at index: " << index << endl;
                else
                    cout << "Value not found.\n";
                break;
            }
            case 6:
                running = false;
                break;
            default:
                cout << "Invalid option. Try again.\n";
        }
    }

    delete[] a1.a;
    return 0;
}

void create(struct arr* a1) {
    cout << "Enter the size of the array: ";
    cin >> a1->size;
    a1->a = new int[a1->size];
    a1->length = 0;
    cout << "Array created with size " << a1->size << ".\n";
}

void fill_array(struct arr* a1) {
    cout << "Enter number of elements to fill (≤ size): ";
    int n;
    cin >> n;

    if (n > a1->size) {
        cout << "Can't insert more than array size.\n";
        return;
    }

    a1->length = n;
    cout << "Enter " << n << " elements:\n";
    for (int i = 0; i < n; i++) {
        cin >> a1->a[i];
    }
}

void display(struct arr* a1) {
    cout << "Array: [ ";
    for (int i = 0; i < a1->length; i++) {
        cout << a1->a[i] << " ";
    }
    cout << "]\n";
}

void Delete(struct arr* a1) {
    int index;
    cout << "Enter the index to delete (0 to " << a1->length - 1 << "): ";
    cin >> index;

    if (index < 0 || index >= a1->length) {
        cout << "Invalid index.\n";
        return;
    }

    for (int i = index; i < a1->length - 1; i++) {
        a1->a[i] = a1->a[i + 1];
    }
    a1->length--;
    cout << "Element at index " << index << " deleted.\n";
}

int Linear_search(struct arr* a1) {
    int key;
    cout << "Enter value to search: ";
    cin >> key;

    for(int i=0;i<a1->length;i++){
        if(a1->a[i]==key){
            return i;
        }
    }
    return -1;
}


