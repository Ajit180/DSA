#include <iostream>

using namespace std;

bool linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return true;
        }
    }
    return false;
}

int main() {
    int size, key;
    
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[size];
    
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    cout << "Enter the key to search: ";
    cin >> key;
    
    if (linearSearch(arr, size, key)) {
        cout << "Key is present in the array." << endl;
    } else {
        cout << "Key is not present in the array." << endl;
    }

    return 0;
}
