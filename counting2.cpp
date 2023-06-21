#include <iostream>
using namespace std;

int main() {
    int start, end, count_by;

    cout << "Enter the starting number: ";
    cin >> start;

    cout << "Enter the ending number: ";
    cin >> end;

    cout << "Enter the count increment: ";
    cin >> count_by;

    for (int num = start; num <= end; num += count_by) {
        cout << num << endl;
    }

    return 0;
}