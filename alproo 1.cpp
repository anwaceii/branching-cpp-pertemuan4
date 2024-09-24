#include<iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int batas;
    cout << "Masukkan batas: ";
    cin >> batas;

    int jumlahGanjil = 0, jumlahGenap = 0, jumlahPrima = 0;
    cout << "Bilangan Ganjil:\n";
    cout << "Faktor\tBilangan\n";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 1) {
            jumlahGanjil++;
            cout << "1\t" << i << endl;
        }
    }

    cout << "Bilangan Genap:\n";
    cout << "Faktor Bilangan\n";
    for (int i = 1; i <= batas; i++) {
        if (i % 2 == 0) {
            jumlahGenap++;
            cout << "2\t" << i << endl;
        }
    }

    cout << "Bilangan Prima:\n";
    cout << "Faktor\tBilangan\n";
    for (int i = 2; i <= batas; i++) {
        if (isPrime(i)) {
            jumlahPrima++;
            cout << "1 " << i << "\t" << i << endl;
        }
    }

    cout << "Jumlah bilangan ganjil: " << jumlahGanjil << endl;
    cout << "Jumlah bilangan genap: " << jumlahGenap << endl;
    cout << "Jumlah bilangan prima: " << jumlahPrima << endl;

    return 0;
}
