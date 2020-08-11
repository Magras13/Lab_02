#include <iostream>

using namespace std;

int main() {
    int rub_5, rub_2, rub_1, A;

    cout << "Input 5 rub quantity\n";
    cin >> rub_5;
    cout << "Input 2 rub quantity\n";
    cin >> rub_2;
    cout << "Input 1 rub quantity\n";
    cin >> rub_1;
    cout << "Input what you need collect\n";
    cin >> A;

    int five = A / 5;
    if (five >= rub_5)
        A -= rub_5 * 5;
    else
        A -= (rub_5 - five) * 5;

    if (A == 0) {
        cout << "YES";
        return 0;
    }
        
    int two = A / 2;
    if (two >= rub_2) 
        A -= rub_2 * 2;
    else
        A -= (rub_2 - two) * 2;

    if (A == 0) {
        cout << "YES";
        return 0;
    }

    int one = A / 1;
    if (one >= rub_1)
        A -= rub_1 * 1;
    else
        A -= (rub_1 - one) * 1;

    if (A == 0)
        cout << "YES";
    else
        cout << "NO";

}