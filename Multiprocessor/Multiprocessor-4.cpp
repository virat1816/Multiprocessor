#include<iostream>
#include<string.h>
using namespace std;
class calculate {
public:
    void get(int a, int b) {
        cout << "2 arguments Result: " << a / b << endl;
    }
    void get(int a, int b, int c) {
        cout << "3 arguments Result: " << a - b - c << endl;
    }
};
class Add : public calculate{
public:
    void multi(int a, int b, int c, int d) {
        cout << "4 arguments Result: " << a * b * c * d << endl;
    }
    void multi(int a, int b, int c, int d, int e) {
        cout << "5 arguments Result: " << a + b + c + d + e << endl;
    }
};

int main(){
    calculate cal;
    cal.get(8,2);
    cal.get(9,5,3); 
    Add obj;
    obj.multi(2,2,2,2); 
    obj.multi(1,1,1,1,1); 

    return 0;
}
