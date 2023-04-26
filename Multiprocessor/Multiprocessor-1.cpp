//1.WAP which illustrate the use of Method Overriding concept.

#include<iostream>
#include<string>
using namespace std;

class Perents{
	public:
		string g;
		void Setgift(){
			cout <<endl << "Enter Gift name : " ;
			cin >> g;
		}
};

class Child: public Perents{
	public:
		void Getgift(){
			cout <<endl <<g << " Wow.Wonderfull Gift " ;
			
		}
};

int main(){
    Child C;
    C.Setgift();
    C.Getgift();
	return 0;
}
