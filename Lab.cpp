#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cout << "Введіть розмір масиву: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }
    cout << "Інвертований масив:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
