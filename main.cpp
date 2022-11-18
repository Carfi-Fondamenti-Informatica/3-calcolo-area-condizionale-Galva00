#include <iostream>
using namespace std;

int main() {
    int opzione=0;
    float a=0, b=0;
    cin >> a >> b >> opzione;
    if (-1<opzione and opzione<3) {
        switch (opzione) {
            case 0: cout << (a*b)/2 <<endl;
            break;
            case 1: cout << a*a <<endl;
            break;
            case 2: cout << a*b <<endl;
            break;
        }
    } else  {
        cout <<  "opzione non valida" <<endl;
    }
   return 0;
}
