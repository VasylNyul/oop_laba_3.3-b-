#include "Pair.h"

#include <sstream>


Pair::Pair()
{
	first = 0;
	second = 0;
}

Pair::Pair(long a, unsigned short b)
{
	first = a;
	second = b;
}

Pair::Pair(const Pair& f)
{
	first = f.first;
	second = f.second;
}

Pair::operator string()const
{
	stringstream ss;

	ss << "Zufra = " << first << "," << second << endl;

	return ss.str();
}

Pair& Pair::operator++()
{
	first++;
	return *this;
}

Pair& Pair::operator--()
{
	first--;
	return *this;
}

Pair Pair::operator++(int)
{
	Pair t(*this);
	second++;
	return t;
}

Pair Pair::operator--(int)
{
	Pair t(*this);
	second--;
	return t;
}

ostream& operator << (ostream& out, const Pair& f)
{
	out << string(f);
	return out;
}

istream& operator >> (istream& in, Pair& f)
{
	cout << "Zila chastuna = "; in >> f.first;
	cout << "Drobova chastuna = "; in >> f.second;

	return in;
}

bool operator < (Pair& f, Pair& s)
{
	return f.first < s.first || f.first == s.first && f.second < s.second;
}

bool operator == (Pair& f, Pair& s)
{
	return f.first == s.first && f.second == s.second;
}

bool operator > (Pair& f, Pair& s)
{
	return f.first > s.first || f.first == s.first && f.second > s.second;
}
bool operator <= (Pair& f, Pair& s)
{
	return !(f.first < s.first || f.first == s.first && f.second < s.second);
}

bool operator != (Pair& f, Pair& s)
{
	return !(f.first == s.first && f.second == s.second);
}

bool operator >= (Pair& f, Pair& s)
{
	return !(f.first > s.first || f.first == s.first && f.second > s.second);
}