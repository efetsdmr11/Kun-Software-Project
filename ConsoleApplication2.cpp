#include <iostream>
using namespace std;

int main()
{
    cout << "This program is Prime numbers between x and x+L" << endl;

    cout << "Please enter a number x: " << endl;
    int x;
    cin >> x;

    cout << "Please Enter a number between 1 and 1000: " << endl;
    int L;
    cin >> L;

    bool primeFound = false;

    for (int num = x; num <= x + L; num++) {
        bool isPrime = true;
        if (num <= 1) {
            isPrime = false;
        }
        else {
            for (int i = 2; i * i <= num; i++) {
                if (num % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }
        if (isPrime) {
            primeFound = true; 
            cout << num << " ";
        }
    }
    cout << endl;
    if (!primeFound) {
        cout << "There is no prime number between " << x << " and " << x + L << endl;
    }  
}
    


  
