// CPP_GTLN.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

int main() {
    int arr[MAX_SIZE];
    int n;

    cout << "Nhap so luong phan tu cua mang (toi da " << MAX_SIZE << " phan tu): ";
    cin >> n;

    if (n <= 0 || n > MAX_SIZE) {
        cout << "So luong phan tu khong hop le.\n";
        return 1;
    }
    cout << "Nhap cac phan tu cua mang:\n";
    for (int i = 0; i < n; ++i) {
        cout << "Phan tu thu " << i + 1 << ": ";
        cin >> arr[i];
    }
    cout << "Cac phan tu cua mang la:\n";
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
