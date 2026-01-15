#include <iostream>
using namespace std;


int encrypt(int msg, int key) {
    return msg ^ key;
}


int decrypt(int encryptedMsg, int key) {
    return encryptedMsg ^ key;
}

int main() {
    int message, key;

   
    cout << "Enter Secret Message (Integer): ";
    cin >> message;

    cout << "Enter Encryption Key: ";
    cin >> key;

    cout << "\n--- SECURITY LOG ---\n";

  
    int encrypted = encrypt(message, key);
    cout << "[+] Encrypting...\n";
    cout << "Encrypted Message: " << encrypted << endl;

    
    int decrypted = decrypt(encrypted, key);
    cout << "\n[+] Decrypting...\n";
    cout << "Decrypted Message: " << decrypted << endl;

    cout << "\n[+] Analysis:\n";
    if ((message & 1) == 0)
        cout << "The original message was EVEN (Checked using Bitwise &)" << endl;
    else
        cout << "The original message was ODD (Checked using Bitwise &)" << endl;

    return 0;
}
