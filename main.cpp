#include <cstdlib>
#include <iostream>

using namespace std;
int main(int argc, char *argv[])
{
    char ss;

    do {
        cout<<"Enter arithmetic operation: number / * - + number"<<endl;

        float x, y, r;
        char o;

        cin>>x;
        cin>>o;
        cin>>y;

        switch (o) {
            case '+':
                r = x + y;
                break;
            case '-':
                r = x - y;
                break;
            case '*':
                r = x * y;
                break;
            case '/':
                r = x / y;
                break;
        }

        cout<<x<<o<<y<<"="<<r<<endl;

        cout<<"Contuine ?(y/n)"<<endl;
        cin>>ss;
    } while (ss == 'y');
    return EXIT_SUCCESS;
}