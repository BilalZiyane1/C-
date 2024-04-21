#include <iostream>
using namespace std;

void sort(int *arr, int n) {
    int temp;
    for (int *i = arr; i < arr + n; i++) {
        for (int *j = i + 1; j < arr + n; j++) {
            if (*i > *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

int main() {
    int N;
    cout << "Enter the size of the array: ";
    cin >> N;

    int *T = new int[N];

    cout << "Enter the elements of the array: ";
    for (int *i = T; i < T+N; i++) {
        cin >> *i;
    }

    sort(T, N);

    cout << "The sorted array in ascending order: ";
    for (int *i = T; i < T+N; i++) {
        cout << *i << " ";
    }
    delete[] T;
    return 0;
}
