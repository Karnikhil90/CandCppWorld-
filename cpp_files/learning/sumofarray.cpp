#include <iostream>
using namespace std;
template <size_t size>
int sum(int (&arr)[size] ) {
    int result = 0;
    for (int i = 0; i < size; ++i) {
        result += arr[i];
    }
    return result;
}

int main() {
    int numbers[] = {12, 18, 8, 13, 37, 9, 19, 56, 2, 7, 9, 22};
    // int size = sizeof(numbers) / sizeof(numbers[0]); // Calculate the size of the array
    int res = sum(numbers); // Pass the size of the array
    cout << "The answer = " << res << endl;
    return 0;
}
