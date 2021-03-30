//Money_Public.h
#pragma once
#include <iostream>
#include "Money.h"
#include <string>

class Money_Public: public Money
{
public:
    Money_Public();
    Money_Public(int, int, int, int, int, int, int, int, int, double, double);
    Money_Public(const Money_Public&);

    operator string() const;

    Money_Public& operator ++();
    Money_Public& operator --();
    Money_Public operator ++(int);
    Money_Public operator --(int);

    Money_Public& operator = (const  Money_Public&);
    friend ostream& operator <<(ostream&, const Money_Public&);
    friend istream& operator >>(istream&, Money_Public&);

    friend    Money_Public operator + (Money_Public&, Money_Public&);
    friend    Money_Public operator - (Money_Public&, Money_Public&);
    friend    Money_Public operator * (Money_Public&, Money_Public&);
};

