#include <iostream>
using namespace std;
int main()
{
    
    int num1;
    int num2;
    cin >> num1;
    cin >> num2;
    int sum = num1 + num2;
    int subt = abs(num1 - num2);
    int mult = num1 * num2;
    int div;
    if (num1 > num2) {
        div = num1 / num2;
    }
    else {
        div = num2 / num1;
    }
    if (sum > subt && sum > mult && sum > div) {
        cout << sum;
    }
    else if (subt > sum && subt > mult && subt > mult) {
        cout << subt;
    }
    else if (mult > sum && mult > subt && mult > div) {
        cout << mult;
    }
    else {
        cout << div;
    }
}

