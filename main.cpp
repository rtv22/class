#include <iostream>

using namespace std;

class A{
public:
	void A::publicprint();
protected:
	void A::protectedprint();
private:
	void A::privateprint();
};

void A::publicprint(){
	cout << "public" << endl;
}

void A::protectedprint(){
	cout << "protected" << endl;
}

void A::privateprint(){
	cout << "private" << endl;
}

class B : public A{

};
class C : protected A{

};
class D : private A{

};

int main(){
	A a;
	B b;
	C c;
	D d;

	cout << "protected A: " << endl;
	a.publicprint();
	//a.protectedprint();
	//a.privateprint();
	cout << "public B: " << endl;
	b.publicprint();
	//b.priveteprint();
	//b.protectedprint();
	cout << "protected C: " << endl;
	//c.publicprint();
	//c.privateprint();
	//c.protectedprint();
	cout << "private D: " << endl;
	//d.publicprint();
	//d.privateprint();
	//d.protectedprint();
	system("pause");
}
