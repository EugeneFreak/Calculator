//kalculator

#include <iostream>

using namespace std;



int main()
{
    double x, y;
    string z;
    cin >> x;
    cin >> z;
    cin >> y;
    if (z == "+") {
        cout << "= " << x + y << endl;
    }
    else if (z == "-") {
        cout << "= " << x - y << endl;
    }
    else if (z == "*") {
        cout << "= " << x * y << endl;
    }
    else if (z == "/" && y == 0) {
        cout << "Division by zero" << endl;
    }
    else if (z == "/") {
        cout << "= " << x / y << endl;
    }
    else {
        cout << "Unknown operation: " << z << endl;
    }
}