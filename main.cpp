#include <iostream>

using namespace std;

int main()
{
    cout << "membuat deret fibbonacci < 100" << endl;
    cout << endl;

    //fn=fn1+fn2
    int n =12 ;//12 merupakan banyaknya jumlah deret
    cout << "deret < 100" << endl;
    int fn ;
    int fn1 = 1;
    int fn2 = 0;
    for (int i = 1; i <= n ; i++) {
        if(i == 1){
            cout << fn2 << endl;
        }
        else if (i == 2){
            cout << fn1 << endl;
        }
        else {
            fn=fn1+fn2;
            fn2=fn1;
            fn1=fn;
            cout << fn << endl;
        }

    }
    return 0;
}
