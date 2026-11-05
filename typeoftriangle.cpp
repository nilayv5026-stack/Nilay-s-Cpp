#include <bits/stdc++.h>

using namespace std;

int main() {
        // your code goes here
        int a, b, c;
        cin >> a >> b >> c;
        if (a == b && b == c) {
            cout << "equavalent triangle";
        }
        else if (a == b || b == c || a == c) {
            cout << "isoceles triangle ";
        }
        else {
                cout << "scalene gtriangle ";
            }
            return 0;
       