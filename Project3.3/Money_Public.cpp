//Money_Public.ccp
#include "Money_Public.h"
#include <sstream> 
#include <iostream>
#include <string>

using namespace std;



Money_Public::Money_Public()
    : Money(0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0)
{}
Money_Public::Money_Public(int k500 = 0, int k200 = 0, int k100 = 0, int k50 = 0, int k20 = 0, int k10 = 0, int k5 = 0, int k2 = 0, int k1 = 0, double m50 = 0, double m25 = 0)
    : Money(k500, k200, k100, k50, k20, k10, k5, k2, k1, m50, m25)
{}

Money_Public::Money_Public(const Money_Public& a)
    : Money(a.getk500(), a.getk200(), a.getk100(), a.getk50(), a.getk20(), a.getk10(), a.getk5(), a.getk2(), a.getk1(), a.getm50(), a.getm25())
{}
Money_Public::operator string() const
{
    double s = getk500() * 500 + getk200() * 200 + getk100() * 100 + getk50() * 50 + getk20() * 20 + getk10() * 10 + getk5() * 5 + getk2() * 2 + getk1() * 1 + getm50() * 0.5 + getm25() * 0.25;
    stringstream sstr;
    sstr << s << "ãğí.";
    return sstr.str();
}
Money_Public& Money_Public::operator ++()
{
    this->setk500(this->getk500() + 1);
    return *this;
}
Money_Public& Money_Public::operator --()
{
    this->setk500(this->getk500() - 1);
    return *this;
}
Money_Public Money_Public::operator ++(int)
{
    Money_Public tmp(*this);
    this->setk200(this->getk200() + 1);
    return tmp;
}
Money_Public Money_Public::operator --(int)
{
    Money_Public tmp(*this);
    this->setk200(this->getk200() + 1);
    return tmp;
}
Money_Public& Money_Public::operator = (const Money_Public& a)
{
    Money(a.getk500(), a.getk200(), a.getk100(), a.getk50(), a.getk20(), a.getk10(), a.getk5(), a.getk2(), a.getk1(), a.getm50(), a.getm25());

    return *this;

}
ostream& operator <<(ostream& out, const Money_Public& a)
{
    out << string(a) << endl;
    return out;
}
istream& operator >>(istream& in, Money_Public& a)
{
    int k500, k200, k100, k50, k20, k10, k5, k2, k1;
    double m50, m25;
    cout << "Ââåä³òü ê³ëüê³ñòü íîì³íàëîì 500 : ";
    in >> k500;
    cout << endl;
    cout << "Ââåä³òü ê³ëüê³ñòü íîì³íàëîì 200 : ";
    in >> k200;
    cout << endl;
    cout << "Ââåä³òü ê³ëüê³ñòü íîì³íàëîì 100 : ";
    in >> k100;
    cout << endl;
    cout << "Ââåä³òü ê³ëüê³ñòü íîì³íàëîì 50 : ";
    in >> k50;
    cout << endl;
    cout << "Ââåä³òü ê³ëüê³ñòü íîì³íàëîì 20 : ";
    in >> k20;
    cout << endl;
    cout << "Ââåä³òü ê³ëüê³ñòü íîì³íàëîì 10 : ";
    in >> k10;
    cout << endl;
    cout << "Ââåä³òü ê³ëüê³ñòü íîì³íàëîì 5 : ";
    in >> k5;
    cout << endl;
    cout << "Ââåä³òü ê³ëüê³ñòü íîì³íàëîì 2 : ";
    in >> k2;
    cout << endl;
    cout << "Ââåä³òü ê³ëüê³ñòü íîì³íàëîì 1 : ";
    in >> k1;
    cout << endl;

    cout << "Ââåä³òü ê³ëüê³ñòü êîï³éîê íîì³íàëîì 50 : ";
    in >> m50;
    cout << endl;
    cout << "Ââåä³òü ê³ëüê³ñòü êîï³éîê íîì³íàëîì 25 : ";
    in >> m25;
    a.setk500(k500), a.setk200(k200), a.setk100(k100), a.setk50(k50), a.setk20(k20), a.setk10(k10), a.setk5(k5), a.setk2(k2), a.setk1(k1), a.setm50(m50), a.setm25(m25);

    return in;
}

Money_Public operator + (Money_Public& b, Money_Public& a)
{
    Money_Public t(b.getk500() + a.getk500(), b.getk200() + a.getk200(), b.getk100() + a.getk100(), b.getk50() + a.getk50(), b.getk20() + a.getk20(), b.getk10() + a.getk10(), b.getk5() + a.getk5(), b.getk2() + a.getk2(), b.getk1() + a.getk1(), b.getm50() + a.getm50(), b.getm25() + a.getm25());

    return t;
}
Money_Public operator - (Money_Public& b, Money_Public& a)
{
    Money_Public t(b.getk500() - a.getk500(), b.getk200() - a.getk200(), b.getk100() - a.getk100(), b.getk50() - a.getk50(), b.getk20() - a.getk20(), b.getk10() - a.getk10(), b.getk5() - a.getk5(), b.getk2() - a.getk2(), b.getk1() - a.getk1(), b.getm50() - a.getm50(), b.getm25() - a.getm25());
    
    return t;
}
Money_Public operator * (Money_Public& b, Money_Public& a)
{
    double N = 2.65;
    Money_Public t((b.getk500() + a.getk500()) * N * 1., (b.getk200() + a.getk200()) * N * 1., (b.getk100() + a.getk100()) * N * 1., (b.getk50() + a.getk50()) * N * 1., (b.getk20() + a.getk20()) * N * 1., (b.getk10() + a.getk10()) * N * 1., (b.getk5() + a.getk5()) * N * 1., (b.getk2() + a.getk2()) * N * 1., (b.getk1() + a.getk1()) * N * 1., (b.getm50() + a.getm50()) * N * 1., (b.getm25() + a.getm25()) * N * 1.);

    return t;
}

