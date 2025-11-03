#include <iostream>
#include <cmath> 
#include <Windows.h>
using namespace std;

int main() { 
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

    int n;
    cout << "Введіть n: ";
    cin >> n;

    double sum = 0;

    for (int k = 1; k <= n; k++) {
        sum += pow(k, k);  
    }

    cout << "Сума pow(k,k) від 1 до " << n << " = " << sum << endl;

    return 0;
}