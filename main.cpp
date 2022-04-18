#include <iostream>
#include <string.h>
#include <cstring>


using namespace std;

int main() {
    string alphabet = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key = {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr1"};

    cout << "Enter a text to encrypt: ";
    string user_text;
    getline(cin, user_text);

    string encrypt_text;

    // Encryption
    for(size_t i{0}; i < alphabet.length(); i++)
    {
        for (char c: user_text) {
            if (alphabet[i] == c) {
                encrypt_text.push_back(key[i]);
            }
        }
    }

    cout << "Encrypting...\nEncrypting...\nEncrypting..." << endl;
    cout << "Encryption Successful\n" << endl;
    cout << "Encrypted text : " << encrypt_text << endl;

    int choice;
    cout << "\nDo you want to decrypt the text?\n1. Yes\n2. No\nEnter your choice: ";
    cin >> choice;

    if (choice == 1) {
        // Decryption
        cout << "\nDecrypted Text" << endl;

        string decrypted_text;
        for (size_t i{0}; i < key.length(); i++) {
            for (char c: encrypt_text) {
                if (key[i] == c) {
                    char temp = (alphabet[i]);
                    decrypted_text += temp;
                }
            }
        }

        // Rearranging index

        string main_text;

        for (size_t i{0}; i < user_text.length(); i++)
        {
            for (char c: decrypted_text)
            {
                if(user_text[i] == c)
                {
                    main_text.push_back(c);
                    break;
                }
            }
        }

        cout << "\nThe encrypted text: " << encrypt_text << endl;
        cout << "The decrypted text: " << main_text << endl;
    }
}