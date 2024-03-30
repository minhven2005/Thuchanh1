#include <iostream>
using namespace std;
int findX(int arr[], int n, int x) {
    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            return i;
        }
    }
    return -1;
}

int main() {
    const int MAX_SIZE = 100;
    int arr[MAX_SIZE];
    int n, x;

    cout << "Nhap kich thuoc cua mang:\n ";
    cin >> n;

    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i) {
        cout << "arr[" << i << "]: ";
        cin >> arr[i];
    }

    cout << "Nhap so can tim: ";
    cin >> x;

    int index = findX(arr, n, x);

    if (index != -1) {
        cout << "So " << x << " duoc tim thay tai chi so " << index << " trong mang." << endl;
    } else {
        cout << "Khong tim thay so" << x << " trong mang." << endl;
    }

    return 0;
}
