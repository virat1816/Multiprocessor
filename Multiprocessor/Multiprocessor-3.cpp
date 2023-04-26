#include<iostream>
#include<string.h>
using namespace std;
class ClassUser{
	private:
		int a;
	public:
		void set(int a1){
			a=a1;
		}
		void get(){
		 cout<<a<<endl;
		}
	ClassUser operator ++ (){
		ClassUser ans;
		 ans.a=++a;
		 return ans;
	}
};
class ClassBeer{
	private:
		int b;
	public:
		void set(int b1){
			b=b1;
		}
		void get(){
		 cout<<b<<endl;
		}

	ClassBeer operator -- (){
		ClassBeer asn;
		 asn.b=--b;
		 return asn;
	}
};
int main(){
	ClassUser obj1,obj2;
	cout<<"Increment"<<endl;
	obj1.set(63);
	obj1.get();
	obj2 = ++obj1;
	obj2.get();
	cout<<endl;

	ClassBeer ob1,ob2;
	cout<<"Decrement"<<endl;
	ob1.set(63);
	ob1.get();
	ob2 = --ob1;
	ob2.get();

	return 0;

}
