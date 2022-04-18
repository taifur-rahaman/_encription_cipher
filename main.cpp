#include <iostream>
#include <string>

using namespace std;

int main(){
    string alphabet = {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ "};
    string key = {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr1"};

    cout << "Enter a text to encrypt: ";
    string user_text;
    getline(cin, user_text);

    string encrypt_text;

    // Encryption
    for(size_t i{0}; i < alphabet.length(); i++)
    {
        for(char c: user_text)
        {
            if (alphabet[i] == c)
            {
                encrypt_text.push_back(key[i]);
            }
        }
    }

    cout << "Encrypting...\nEncrypting...\nEncrypting..." << endl;
    cout << "Encryption Successful\n" << endl;
    cout << "Encrypted text : " << encrypt_text << endl;

    // Decryption
    // Code
}