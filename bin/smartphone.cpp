/**
 * @file smartphone.cpp
 *
 * @version 01.01 2020-11-5
 *
 * @brief https://training.olinfo.it/#/task/ois_smartphone/statement
 *
 * @ingroup smartphone
 * (Note: this needs exactly one @defgroup somewhere)
 *
 * @author Castellani Davide
 *
 * Contact: contacts@castellanidavide.it
 *
 */

// Includes
#include <bits/stdc++.h>
using namespace std;

// Variabiles
long N, actual, actual_price, result;

// Main code
int main()
{
    // Cncomment the following lines if you want to read/write from files
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);

    // Input
    cin >> N;
    actual_price = 0;
    result = 0;
    for (int i = 0; i < N; ++i)
    {
        cin >> actual;
        if (actual > actual_price)
        {
            actual_price = actual;
            result += actual_price;
        }
    }

    // Output
    cout << result;

    // End
    return 0;
}
