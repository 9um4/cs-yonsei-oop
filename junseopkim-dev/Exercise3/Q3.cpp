#include <iostream>

// 배열의 원소들의 합을 출력하고, 모든 원소의 값을 0으로 설정하는 함수
void processArray(int arr[], int length) {
    int sum = 0;
    for(int i = 0; i < length; ++i) {
        sum += arr[i]; // 원소들의 합을 계산
        arr[i] = 0;    // 원소의 값을 0으로 설정
    }
    std::cout << "Sum of all elements: " << sum << std::endl;
}

int main() {
    int a[5] = {1, 2, 3, 4, 5};

    processArray(a, 5);

    // 함수 호출 후 배열의 원소 출력
    std::cout << "Elements after function call:";
    for (int i = 0; i < 5; ++i) {
        std::cout << " " << a[i];
    }
    std::cout << std::endl;

    return 0;
}
