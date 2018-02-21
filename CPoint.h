#ifndef CPOINT_H_INCLUDED
#define CPOINT_H_INCLUDED

#include "iostream"
#include <stdio.h>
#include <stdlib.h>

using namespace std;

/*

Implémenter une classe CPoint pour représenter des points dans un espace à trois dimensions (x,
y ,z).
Inclure
    - un constructeur par défaut,
    - un constructeur par copie,
    - une fonction negate () qui transforme un point en son opposé,
    - une fonction norm () qui retourne la distance d'un point par rapport à l'origine (0, 0, 0),
        AB = racine(x² + y² + z²)
    - une fonction print ()
    - le destructeur

Les données membres doivent être private tandis que les fonctions doivent quant à elles être
public.

*/

class CPoint
	{
	private:		 // données membres

    int m_x;
    int m_y;
    int m_z;
    static const int origine = 0;

	public: 		 // fonctions membres

	CPoint() : m_x (0),m_y (0), m_z (0) {}; //c'tor par défaut
	CPoint(int x, int y, int z);
	CPoint(const CPoint& Opoint);   // c'tor par copie
    ~CPoint();  // destructeur

    void setx(int x);
    void sety(int y);
    void setz(int z);

    int norm();
    void negatif();
    void print();



	};


#endif // CPOINT_H_INCLUDED
