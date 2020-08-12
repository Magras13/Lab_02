#include <iostream>

using namespace std;

int main() {
    int rub_5, rub_2, rub_1, A;
    bool result = false;

    cout << "Input 5 rub quantity\n";
    cin >> rub_5;
    cout << "Input 2 rub quantity\n";
    cin >> rub_2;
    cout << "Input 1 rub quantity\n";
    cin >> rub_1;
    cout << "Input what you need collect\n";
    cin >> A;

    for (int i = 0; i <= rub_5; i++)
    {
        for (int j = 0; j <= rub_2; j++)
        {
            for (int k = 0; k <= rub_1; k++)
            {
                if (i * 5 + j * 2 + k == A)
                {
                    result = true;
                }
            }
        }
    }
    if (result == true)
        cout << "YES";
    else
        cout << "NO";
}