#include <iostream>
using namespace std;

//////////////////////// BLUEPRINT //////////////////////////
class Car {
private:
	int price;
public:
	char *name;
	int seats;
	int mileage;

	// 1. Default Constructor
	Car() {
		name = NULL;
		cout << "Inside Default Constructor" << endl;
	}
	// 2. Parameterized Constructor
	Car(char *n, int p, int s, int m) {
		cout << "Inside Parameterized Constructor" << endl;
		name = new char[strlen(n) + 1];
		strcpy(name, n);
		price = p;
		mileage = m;
		seats = s;
	}

	// 4. Copy Constructor
	Car(Car &X) {
		cout << "Inside Copy Constructor" << endl;
		name = new char[strlen(X.name) + 1];
		strcpy(name, X.name);
		// name = X.name;
		price = X.price;
		seats = X.seats;
		mileage = X.mileage;
	}

	// 5. Copy Assignment Operator
	void operator=(Car X) {
		cout << "Inside Copy Assignment operator" << endl;
		if (name != NULL) {
			delete []name;
		}
		name = new char[strlen(X.name) + 1];

		strcpy(name, X.name);
		price = X.price;
		seats = X.seats + 100;
		mileage = X.mileage;
	}

	/// Operator Overloading : D += C
	void operator += (Car X) {
		char * temp = name;
		name = new char[strlen(name) + strlen(X.name) + 1];
		strcpy(name, temp);
		strcat(name, X.name);
		delete []temp;

		price += X.price;
		mileage += X.mileage;
		seats += X.seats;
	}
	// A>B
	bool operator>(Car X) {
		if (price == X.price) {
			return mileage > X.mileage;
		}
		else {
			return price > X.price;
		}
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

	// Setter for price
	void setPrice(int p) {
		if (p > 100 and p < 150) {
			price = p;
		}
		else {
			price = 120;
		}
	}

	// Getter for price
	int getPrice() {
		return price;
	}

	void setName(char *a) {
		if (name != NULL) {
			delete []name;
		}
		name = new char[strlen(a) + 1];
		strcpy(name, a);
	}
};
//////////////////////// BLUEPRINT //////////////////////////

int main() {

	Car A;
	// BMW, 2, 6,10
	// A.name = "BMW"; // Incorrect in case of array
	// A.name[0] = 'B';
	// A.name[1] = 'M';
	// A.name[2] = 'W';
	// A.name[3] = '\0';
	A.setName("BMW");
	// A.price = 10;
	A.setPrice(10);
	A.seats = 2;
	A.mileage = 6;

	Car B("Maruti", 20, 5, 10);
	// Car C("Audi", 10, 3, 8);
	Car C(B);
	Car D(B);

	// Copy Assignment Operator
	// D += C;
	// strcpy(B.name, "Maruti");
	// B.seats = 5;
	// B.mileage = 10;
	// B.price = 20;
	// B.price = -100;
	// D.name[0] = 'B';
	D += B;
	// B.setPrice(2000);
	// cout << B.getPrice() << endl;
	if (A > B) {
		cout << "A, B se Achi gaadi hai" << endl;
	}
	else {
		cout << "B, A se Achi gaadi hai" << endl;

	}
	A.print();
	B.print();
	C.print();
	D.print();
	return 0;
}
















