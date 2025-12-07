#include <iostream>
#include "ClassB.h"
#include "ClassA1.h"
#include "ClassA2.h"
using namespace std;

int main()
{
    // Osoitin harjoitus
    int a = 5;
    cout << "a:n arvo on: " << a << " ja osoite on: " << &a << endl;

    int *pointerA = &a;
    cout << "Pointerin osoittama osoite on: " << pointerA << endl;
    cout << "Pointerin osoittaman muistipaikan arvo on: " << *pointerA << endl;

    // Referenssi harjoitus
    int &refA = a;
    cout << "refA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on: " << refA << endl;

    int b = 6;
    // pointerA voidaan siirtää osoittamaan b:tä:
    pointerA = &b;
    cout << "Pointer nyt osoittaa osoitteeseen: " << pointerA << endl;

    // refA EI voida vaihtaa myöhemmin -> seuraava ei ole sallittu:
    // refA = b; // Tämä MUUTTAA arvoa, ei osoitetta!

    cout << endl;

    // Olio argumenttina (kopiointi)
    ClassB objB;
    objB.setInfo("Olion B asettama info");

    ClassA1 objA1(objB);
    objA1.setBinfo("Olion objA1 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA1: " << objA1.getBinfo() << endl << endl;

    // Referenssi argumenttina (ei kopioida)
    ClassB &refB = objB;
    ClassA2 objA2(refB);

    objA2.setBinfo("Olion A2 asettama info");

    cout << "objB: " << objB.getInfo() << endl;
    cout << "objA2: " << objA2.getBinfo() << endl;

    return 0;
}
