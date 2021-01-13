#include<iostream>
using namespace std;

class complex{
    private:
        int real;
        int imaginary;

    public:
        complex(int r,int i){
            real = r;
            imaginary = i;
        }

        complex operator + (complex const &obj){
            complex result;
            result.real = real + obj.real;
            result.imaginary = imaginary + obj.imaginary;
            return result;
        }

        void printResult(){
            cout << real << " + i" << imaginary << endl;
        }
};

int main(){

    complex c1(4,5);
    complex c2(5,6);
    complex c3 = c1 + c2;
    c3.printResult();

    return 0;

}