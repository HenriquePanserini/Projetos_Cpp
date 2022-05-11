#include <iostream>
#include <locale.h>

using namespace std;

int fatorial(int n);
int fibonacci(int n);

int main(void_t<>){
    setlocale(LC_COLLATE,"");
    int val, res;

    cout << "Digite valor: ";
    cin >> val;
    res =fatorial(val);
    cout << "Fatoria de " << val << ": " << res;

    cout << "\nFibonacci com " << val << " valores: ";
    for(int i=0;i<val;i++){
        cout << fibonacci(i+1) << " ";
    }

    cout << "\n";

}

int fatorial(int n){
    if(n == 0){
        return 1;
    }
    return n*fatorial(n-1);
}

int fibonacci(int n){
    if(n == 1 || n == 2){
        return 1;
    }else{
        return fibonacci(n-1)+fibonacci(n-2);
    }
}