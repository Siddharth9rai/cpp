#include <iostream>
using namespace std;

int main() {
    int N, n;
    cin >> N;

    int arr[N];

    // INPUT
    for (int i = 0; i < N; i++) {
        cin >> n;
        arr[i] = n;
    }

    // OUTPUT
    int size = sizeof(arr) / sizeof(int); // SIZE OF ARRAY

    // char chA[] = {'a', 'b'};
    // int inA[] = {1, 2, 3};
    // cout << sizeof(chA) << endl;
    // cout << sizeof(inA) << endl;
    // cout << sizeof(int) << endl;

    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}