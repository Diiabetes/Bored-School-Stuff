#include <iostream>
using namespace std;

//After th=46, Fn exceeds the integer's range and every result following after th=46 is incorrect.

//Fn=F(n-1)+F(n-2)
//Fn=[n1]+[n2]

class fibonacciSequence {
    public:
        int n1=-1;
        int n2=1;
        int Fn;
        
        void fibonacciNumbers(int thInput=0) {
            cout << "To the th of what number do you want to perform the operation?" << endl;
            cin >> thInput;
            
            for (int th=0; th<=thInput; th=th+1) {          //int th=0; while th<=thInput; add 1 to th.
                Fn=n1+n2;                                   //Fn=[n1]+[n2]
                cout << "F(" << th << ")=" << Fn << endl;   //F[th]=Fn
                n1=n2;                                      //n1=[n2]
                n2=Fn;                                      //n2[Fn]
            }
        }
};

int main() {
    fibonacciSequence fibonacci;
    fibonacci.fibonacciNumbers();

    return 0;
}
