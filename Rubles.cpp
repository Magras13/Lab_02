#include <iostream>

using namespace std;

int main() {
    int rub_5, rub_2, rub_1, res_5,res_2,res_1, A;
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
                    res_5 = i;
                    res_2 = j;
                    rex_3 = k;
                    result = true;
                }
            }
        }
    }
    if (result == true)
        cout << "YES you need "<< res_5 << " five rub coin(s) and " << res_2 << " two rub coin(s) and " << res_1 << " one rub coin(s)";
    else
        cout << "NO";
}