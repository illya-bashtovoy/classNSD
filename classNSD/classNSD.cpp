/*
	Реалізуйте клас NSD, в private зберігає два цілих числа.
	Реалізуйте конструктор за замовчування, який надає значення двох змінним 1;
	Реалізуйте конструктор, який приймає два  цілочисельних значення і обчислює НСД двох чисел;
	Реалізуйте функцію, яка обчислює НСК.
	Реалізуйте функцію, яка виводить два числа.
*/

#include <iostream>

using namespace std;


class NSD {
private:
	int a, b;
	int lcd, lcm;
public:
	NSD() {
		a = 1;  b = 1;
	}
	NSD(int A, int B);

	void LCM();
	void Print();
};


int main()
{
	NSD A(15, 35);
	A.Print();
	A.LCM(); 
}


NSD::NSD(int A, int B) {
	this->a = A;
	this->b = B;

	while (A != B) {
		if (A > B) {
			A -= B; lcd = A;
		}
		else {
			B -= A; lcd = B;
		}
	}
}


void  NSD::Print() {
	cout << "\ta = " << a << endl;
	cout << "\tb = " << b << endl;
}


void NSD::LCM() {
	lcm = (a * b) / lcd;
	cout << "\tLCM= " << lcm << endl;
	cout << "\tLSD= " << lcd << endl;
}