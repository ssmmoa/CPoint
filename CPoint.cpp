#include "iostream"
#include "CPoint.h"
#include <stdio.h>
#include <stdlib.h>
#include <cmath>


using namespace std;


CPoint::CPoint(int x, int y, int z)
{
    m_x = x;
    m_y = y;
    m_z = z;
}

CPoint::CPoint(const CPoint& Opoint)
{
    m_x = Opoint.m_x;
    m_y = Opoint.m_y;
    m_z = Opoint.m_z;
}
CPoint::~CPoint()
{
    cout << "destructor" << endl;
}

void CPoint::setx(int x)
{
    m_x = x;
}

void CPoint::sety(int y)
{
    m_y = y;
}

void CPoint::setz(int z)
{
    m_z = z;
}

int CPoint::norm()
{
    // AB = racine(x² + y² + z²)
    int ab;

    ab = sqrt(pow(m_x,2)+pow(m_y,2)+pow(m_z,2));

    return ab;

}

void CPoint::negatif()
{
    m_x = - m_x;
    m_y = -m_y;
    m_z = -m_z;
}

void CPoint::print()
{
    cout << "x = " << m_x << "; y = " << m_y << "; z = " << m_z << endl;
}
