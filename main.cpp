#include "iostream"
#include "CPoint.h"
#include <stdio.h>
#include <stdlib.h>

using namespace std;


int main()
{
    CPoint Opoint1;

    Opoint1.print();
    Opoint1.setx(2);
    Opoint1.sety(8);
    Opoint1.setz(7);
    Opoint1.print();

    CPoint Opoint2(Opoint1);
    Opoint2.print();

    CPoint Opoint3(10,15,14);
    int ab;
    ab = Opoint3.norm();
    cout << "Distance du point a l'origine :" << ab << endl;

    Opoint3.print();
    Opoint3.negatif();
    Opoint3.print();

    return 0;
}
