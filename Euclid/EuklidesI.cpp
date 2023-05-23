#include<iostream>

using namespace std;

int EuI(int n1, int b);

int main() {
    int n1, n2;

    cout << "Enter numbers: "<<endl;
    cin >> n1 >> n2;

    cout << EuI(n1, n2) << endl;

    return 0;
}
int EuI(int n1, int n2) {
    while (n1 != n2) {
        if (n1 > n2) {
            n1 -= n2;
        }
        else {
            n2 -= n1;
        }
        return n1;
    }
}