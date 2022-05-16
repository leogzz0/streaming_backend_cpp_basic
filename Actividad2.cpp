// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.

#include <iostream>
using namespace std;

class A {
public:
	int x;

protected:
	int y;

private:
	int z;
};

class B : public A {
	// x is public
	// y is protected
	// z is not accessible from B
};

class C : protected A {
	// x is protected
	// y is protected
	// z is not accessible from C
};

class D : private A // 'private' is default for classes
{
	// x is private
	// y is private
	// z is not accessible from D
};

main() {
    A objetoA;
	B objetoB;
	C objetoC;
	D objetoD;
	
	objetoA.x = 50;
	objetoB.x =100;
	// como x es privada en el objeto c y d o se puede acceder a ellos y saldra un error en estos
	// objetoC.x = 150;
	// objetoD.x = 200;

	cout << "ObjetoA.x = " << objetoA.x << endl << "ObjetoB.x = " << objetoB.x << endl;

}
