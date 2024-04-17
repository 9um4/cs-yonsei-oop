#include <iostream>
using namespace std;

int arraySum(int arr[], int size);

//int arraySum(int *arr, int size);

//int arraySum(int(&arr)[]);

int main(){
    int arr[5] = {1, 2, 3, 4, 5};

    cout << "The sum of array is : " << arraySum(arr, 5) << endl;

    for (int i = 0; i < sizeof(arr) / sizeof(int); i++) {
        cout << "arr[" << i << "] : " << arr[i] << endl;
    }
    return 0;
}


int arraySum(int arr[], int size) {
    int result = 0;

    for (int i = 0; i < size; i++) {
        result += arr[i];
        arr[i] = 0;
    }
    
    return result;
}

/*
int arraySum(int *arr, int size) {
    int result = 0;

    for (int i = 0; i < size; i++) {
        result += arr[i];
    }
    
    return result;
}
*/