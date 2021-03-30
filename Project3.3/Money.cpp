//Money.cpp
#include "Money.h"

#include <iostream>
#include <math.h>
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h> 
#include <sstream> 
#include <iomanip>
#include <cmath>

using namespace std;


void Money::setk500(int value)
{
    if (value > 0)
        k500 = value;
    else
        k500 = 0;
}
void Money::setk200(int value)
{
    if (value > 0)
        k200 = value;
    else
        k200 = 0;
}
void Money::setk100(int value)
{
    if (value > 0)
        k100 = value;
    else
        k100 = 0;
}
void Money::setk50(int value)
{
    if (value > 0)
        k50 = value;
    else
        k50 = 0;
}
void Money::setk20(int value)
{
    if (value > 0)
        k20 = value;
    else
        k20 = 0;
}
void Money::setk10(int value)
{
    if (value > 0)
        k10 = value;
    else
        k10 = 0;
}
void Money::setk5(int value)
{
    if (value > 0)
        k5 = value;
    else
        k5 = 0;
}
void Money::setk2(int value)
{
    if (value > 0)
        k2 = value;
    else
        k2 = 0;
}
void Money::setk1(int value)
{
    if (value > 0)
        k1 = value;
    else
        k1 = 0;
}
void Money::setm50(double value)
{
    if (value > 0)
        m50 = value;
    else
        m50 = 0;
}
void Money::setm25(double value)
{
    if (value > 0)
        m25 = value;
    else
        m25 = 0;
}
Money::Money()
    : k500(0), k200(0), k100(0), k50(0), k20(0), k10(0), k5(0), k2(0), k1(0), m50(0), m25(0)
{}
Money::Money(int k500, int k200, int k100, int k50, int k20, int k10, int k5, int k2, int k1, double m50, double m25)
{
    setk500(k500);
    setk200(k200);
    setk100(k100);
    setk50(k50);
    setk20(k20);
    setk10(k10);
    setk5(k5);
    setk2(k2);
    setk1(k1);
    setm50(m50);
    setm25(m25);
}
Money::Money(const Money& t)
{
    *this = t;
}
Money::operator string() const
{
    double s = k500 * 500 + k200 * 200 + k100 * 100 + k50 * 50 + k20 * 20 + k10 * 10 + k5 * 5 + k2 * 2 + k1 * 1 + m50 * 0.5 + m25 * 0.25;
    stringstream sstr;
    sstr << s << "грн.";
    return sstr.str();
}
ostream& operator <<(ostream& out, const Money& a)
{
    out << string(a) << endl;
    return out;
}
istream& operator >>(istream& in, Money& a)
{
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 500 : ";
    in >> a.k500;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 200 : ";
    in >> a.k200;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 100 : ";
    in >> a.k100;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 50 : ";
    in >> a.k50;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 20 : ";
    in >> a.k20;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 10 : ";
    in >> a.k10;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 5 : ";
    in >> a.k5;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 2 : ";
    in >> a.k2;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть ном≥налом 1 : ";
    in >> a.k1;
    cout << endl;

    cout << "¬вед≥ть к≥льк≥сть коп≥йок ном≥налом 50 : ";
    in >> a.m50;
    cout << endl;
    cout << "¬вед≥ть к≥льк≥сть коп≥йок ном≥налом 25 : ";
    in >> a.m25;

    return in;
}
double Money::AN()
{
    return k500;
}

