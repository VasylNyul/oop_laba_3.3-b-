#pragma once
#include <iostream>
#include <string>

using namespace std;

class Pair
{
private:
	long first;
	unsigned short second;
public:
	int get_a() const { return first; };
	int get_b() const { return second; };
	void set_a(unsigned int value) { first = value; }
	void set_b(unsigned int value) { second = value; }

	Pair();
	Pair(long, unsigned short);
	Pair(const Pair&);

	operator string() const;

	Pair& operator ++();
	Pair& operator --();
	Pair operator ++(int);
	Pair operator --(int);
	
	friend ostream& operator <<(ostream&, const Pair&);
	friend istream& operator >>(istream&, Pair&);

	friend bool operator < (Pair&, Pair&);
	friend bool operator == (Pair&, Pair&);
	friend bool operator > (Pair&, Pair&);
	friend bool operator <= (Pair&, Pair&);
	friend bool operator != (Pair&, Pair&);
	friend bool operator >= (Pair&, Pair&);
};

