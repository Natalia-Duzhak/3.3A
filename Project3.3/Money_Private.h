//Money_Private.h
#pragma once
#include <iostream>
#include "Money.h"
#include <string>

using namespace std;
class Money_Private: private Money
{
public:
    using Money::getk500;
    using Money::getk200;
    using Money::getk100;
    using Money::getk50;
    using Money::getk20;
    using Money::getk10;
    using Money::getk5;
    using Money::getk2;
    using Money::getk1;
    using Money::getm50;
    using Money::getm25;

    using Money::setk500;
    using Money::setk200;
    using Money::setk100;
    using Money::setk50;
    using Money::setk20;
    using Money::setk10;
    using Money::setk5;
    using Money::setk2;
    using Money::setk1;
    using Money::setm50;
    using Money::setm25;

    Money_Private();
    Money_Private(int, int, int, int, int, int, int, int, int, double, double);
    Money_Private(const Money_Private&);

    operator string() const;

    Money_Private& operator ++();
    Money_Private& operator --();
    Money_Private operator ++(int);
    Money_Private operator --(int);

    Money_Private& operator = (const  Money_Private&);
    friend ostream& operator <<(ostream&, const Money_Private&);
    friend istream& operator >>(istream&,  Money_Private&);

    friend    Money_Private operator + (Money_Private&, Money_Private&);
    friend    Money_Private operator - (Money_Private&, Money_Private&);
    friend    Money_Private operator * (Money_Private&, Money_Private&);

};

