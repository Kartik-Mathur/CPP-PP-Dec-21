#include <iostream>
using namespace std;

//////////////////////// BLUEPRINT //////////////////////////
class Car {
public:
	char name[100];
	int seats;
	int mileage;
	int price;

	// 1. Default Constructor
	Car() {
		cout << "Inside Default Constructor" << endl;
	}
	// 2. Parameterized Constructor
	Car(char *n, int p, int s, int m) {
		cout << "Inside Parameterized Constructor" << endl;
		strcpy(name, n);
		price = p;
		mileage = m;
		seats = s;
	}

	// 4. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor" << endl;
		strcpy(name, X.name);
		price = X.price;
		seats = X.seats;
		mileage = X.mileage;
	}

	// 5. Copy Assignment Operator
	void operator=(Car X) {
		cout << "Inside Copy Assignment operator" << endl;
		strcpy(name, "Ferrari");
		price = X.price;
		seats = X.seats + 100;
		mileage = X.mileage;
	}

	/// Operator Overloading : D += C
	void operator += (Car X) {
		strcat(name, X.name);
		price += X.price;
		mileage += X.mileage;
		seats += X.seats;
	}


	// 6. Destructor
	~Car() {
		cout << "Deleting car: " << name << endl;
	}

	void print() {
		cout << "Name : " << name << endl;
		cout << "Price : " << price << endl;
		cout << "Mileage : " << mileage << endl;
		cout << "Seats : " << seats << endl << endl;
	}

	//3. Parameterized Constructor-2
	// Car(int p, int m, char *x) {
	// 	cout << "Inside Parameterized Constructor-2" << endl;
	// 	strcpy(name, x);
	// 	price = p;
	// 	mileage = m;
	// 	seats = 3;
	// }

};
//////////////////////// BLUEPRINT //////////////////////////

int main() {

	Car A;
	// BMW, 2, 6,10
	// A.name = "BMW"; // Incorrect in case of array
	A.name[0] = 'B';
	A.name[1] = 'M';
	A.name[2] = 'W';
	A.name[3] = '\0';
	A.price = 10;
	A.seats = 2;
	A.mileage = 6;

	Car B("Maruti", 20, 5, 10);
	Car C("Audi", 10, 3, 8);

	Car D(B);

	// Copy Assignment Operator
	D += C;
	// strcpy(B.name, "Maruti");
	// B.seats = 5;
	// B.mileage = 10;
	// B.price = 20;

	A.print();
	B.print();
	C.print();
	D.print();
	return 0;
}
















