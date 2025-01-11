#include <iostream>
#include "Employer.h"
#include "Figures.h"
using namespace std;

void Show(Employer* emp) {
	emp->Show();
}

void Show(Figures* fig) {
	fig->Show();
}

int main() {
	/*worker w(10);
	manager m(20);
	president p(30);

	Show(&w);
	Show(&m);
	Show(&p);*/

	Circle* c = new Circle(5);
	pramougolnik* pr = new pramougolnik(5, 10);
	pramokutniytreykutnik* pt = new pramokutniytreykutnik(5, 10, 15);
	trapeziya* t = new trapeziya(5, 10, 15, 20);

	const int size = 4;
	Figures* fig[size] {c,pr,pt,t};
	for (size_t i = 0; i < size; i++)
	{
		Show(fig[i]);
		cout << "Area is " << fig[i]->Area() << endl;

	}

	for (size_t i = 0; i < size; i++)
	{
		delete fig[i];
	}

	return 0;
}