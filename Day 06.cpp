#include <iostream>
using namespace std;


int decimalToBinary(int n)
{
    int binary = 0;
    int place = 1;

    while (n > 0)
    {
        int rem = n % 2;
        binary = binary + rem * place;
        place = place * 10;
        n = n / 2;
    }
    return binary;
}


int binaryToDecimal(int n)
{
    int decimal = 0;
    int base = 1;

    while (n > 0)
    {
        int digit = n % 10;
        decimal = decimal + digit * base;
        base = base * 2;
        n = n / 10;
    }
    return decimal;
}

int main()
{
    int choice, number;

    cout << "--- SPY-COM SYSTEM ---" << endl;
    cout << "1. Encrypt Passcode (Dec -> Bin)" << endl;
    cout << "2. Decrypt Signal (Bin -> Dec)" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    if (choice == 1)
    {
        cout << "Enter Passcode: ";
        cin >> number;
        cout << "ENCRYPTED BINARY: " << decimalToBinary(number);
    }
    else if (choice == 2)
    {
        cout << "Enter Binary Signal: ";
        cin >> number;
        cout << "DECRYPTED DECIMAL: " << binaryToDecimal(number);
    }
    else
    {
        cout << "Invalid Choice!";
    }

    return 0;
}
