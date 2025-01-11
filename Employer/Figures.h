#pragma once
using namespace std;
#include <iostream>

class Figures {
public:
	virtual void Show() = 0;
	virtual double Area() = 0;
	virtual ~Figures() {
		cout << "Figures destructor" << endl;
	}
};

class Circle : public Figures {
protected:
	double radius;
public:
	Circle(double r) {
		radius = r;
	}
	void Show() {
		cout << "Circle radius is " << radius << endl;
	}
	double Area() {
		return 3.14 * radius * radius;
	}
	~Circle() {
		cout << "Circle destructor" << endl;
	}
};

class pramougolnik : public Figures {
protected:
	double a;
	double b;
public:
	pramougolnik(double a, double b) {
		this->a = a;
		this->b = b;
	}
	void Show() {
		cout << "pramougolnik a is " << a << " b is " << b << " area is " << endl;
	}
	double Area() {
		return a * b;
	}
	~pramougolnik() {
		cout << "pramougolnik destructor" << endl;
	}
};

class pramokutniytreykutnik : public Figures {
protected:
	double a;
	double b;
	double c;
public:
	pramokutniytreykutnik(double a, double b, double c) {
		this->a = a;
		this->b = b;
		this->c = c;
	}
	void Show() {
		cout << "pramokutniytreykutnik a is " << a << " b is " << b << " c is " << c << endl;
	}
	double Area() {
		return (a + b) / 2;
	}
	~pramokutniytreykutnik() {
		cout << "pramokutniytreykutnik destructor" << endl;
	}
};

class trapeziya : public Figures {
protected:
	double a;
	double b;
	double c;
	double d;
public:
	trapeziya(double a, double b, double c, double d) {
		this->a = a;
		this->b = b;
		this->c = c;
		this->d = d;
	}
	void Show() {
		cout << "trapeziya a is " << a << " b is " << b << " c is " << c << " d is " << d << endl;
	}
	double Area() {
		return (a + b) / 2;
	}
	~trapeziya() {
		cout << "trapeziya destructor" << endl;
	}
};