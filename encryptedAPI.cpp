#include<iostream>
#include<string.h>
#include<localcharset.h>
#define TM 100
using namespace std;

void encryptyFunc(){
    char text[TM];
    char tmp;
    int i, key;

    cout << "Enter a message to encrypt: " << endl;
    cin >> text;
    cout << "Enter key: " << endl;
    cin >> key;

    for (i = 0; text[i] != '\0'; ++i){
        tmp = text[i];
        if(tmp >= 'a' && tmp  <= 'z'){
            tmp = tmp + key;

            if(tmp > 'z'){
                tmp = tmp - 'z' + 'a' - 1;
            }

            text[i] = tmp;
        }
        else if(tmp >= 'A' && tmp <= 'Z'){
            tmp = tmp + key;

            if(tmp > 'Z'){
                tmp = tmp - 'Z' + 'A' - 1;
            }

            text[i] = tmp;
        }
    }

    cout << "Encrypted message: " << text << endl;
}

void decryptFunc(){
    char text[TM];
    char tmp;
    int i, key;

    tmp = tmp + key;

    cout << "Enter a message to descrypt: " << endl;
    cin >> text;
    cout << "Enter key: " << endl;
    cin >> key;

    for(i = 0;text[i] != '\0';++i){
        tmp = text[i];
        if(tmp >= 'a' && tmp <= 'z'){
            tmp = tmp - key;

            if(tmp < 'a'){
                tmp = tmp + 'z' - 'a' + 1;
            }

            text[i] = tmp;
        }else if(tmp >= 'A' && tmp <= 'Z'){
            tmp = tmp - key;

            if(tmp < 'A'){
                tmp = tmp + 'Z' - 'A' + 1;
            }

            text[i] = tmp;
        }
    }
    cout << "Descrypted message: " << text << endl;
}

int main(void){

    setlocale(LC_COLLATE,"");
    int choice;

    cout << "Choose any one!" << endl;
    cout << "1.Encryption \t 2.Decryption" <<  endl;
    cin >> choice;

    switch(choice){
        case 1: encryptyFunc();
            break;
        case 2:  decryptFunc();
            break;
        default: cout << "Please select valid option";
            break;

    }

    system("pause");
    return 0;
}