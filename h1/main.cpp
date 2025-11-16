#include <iostream>
#include <stdexcept>
#include <iomanip>

using namespace std;

// ei palauta mitään, vain tulostaa summan
void calcSum(int a, int b) {
    cout << "Summa: " << a + b << endl;
}

// ei palauta mitään, vain tulostaa osamäärän
void calcDiv(int a, int b) {
    if (b == 0) {
        cout << "Virhe: jakaja ei saa olla nolla!" << endl;
    } else {
        cout << "Osamäärä: " << fixed << setprecision(2) << (float)a / b << endl;
    }
}

// palauttaa summan
int retSum(int a, int b) {
    return a + b;
}

// palauttaa osamäärän, jos jakaja nolla → runtime error
float retDiv(int a, int b) {
    if (b == 0) {
        throw runtime_error("jakaja ei saa olla nolla!");
    }
    return (float)a / b;
}

int main() {
    int a, b;

    cout << "Anna ensimmäinen kokonaisluku: ";
    cin >> a;
    cout << "Anna toinen kokonaisluku: ";
    cin >> b;

    // kutsutaan funktioita, jotka tulostavat itse
    calcSum(a, b);
    calcDiv(a, b);

    // kutsutaan funktioita, jotka palauttavat arvot
    int summa = retSum(a, b);
    cout << "retSum palautti: " << summa << endl;

    float result;
    try {
        result = retDiv(a, b);
        cout << a << "/" << b << " = " << fixed << setprecision(2) << result << endl;
    } catch (runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    return 0;
}
