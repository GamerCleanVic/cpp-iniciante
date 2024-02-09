#include <iostream>
#include <string>
#define HELLO "Hello, constant"
using namespace std;

int main(){
    const string hello = "Hello constant, again!";

    //Sem códigos de scape
    cout << "Constant Macro HELLO: " << HELLO << endl;
    cout << "Constant literal hello: " << hello << endl;


    //Com o código de scape /n
    cout << "\nConstant Macro HELLO: \n" << HELLO << endl;
    cout << "Constant literal hello: \n" << hello << endl;

    //Com o código de scape \r
    cout << "\nConstant Macro HELLO (com \\r): \r" << HELLO << endl;
    cout << "Constant literal hello(com \\r): \r" << hello << endl;

    //Com o código de scape \t
    cout << "\nConstant Macro HELLO (com \\t): \t" << HELLO << endl;
    cout << "Constant literal hello(com \\t): \t" << hello << endl;

    //Com o código de scape \v
    cout << "\nConstant Macro HELLO (com \\v): \v" << HELLO << endl;
    cout << "Constant literal hello(com \\v): \v" << hello << endl;

    //Com o código de scape \v
    cout << "\nConstant Macro HELLO (com \\b): \b" << HELLO << endl;
    cout << "Constant literal hello(com \\b): \b" << hello << endl;

    //Com o código de scape \v
    cout << "\nConstant Macro HELLO (com \\f): \f" << HELLO << endl;
    cout << "Constant literal hello(com \\f): \f" << hello << endl;

    //Com o código de scape \v
    cout << "\nConstant Macro HELLO (com \\a): \a" << HELLO << endl;
    cout << "Constant literal hello(com \\a): \a" << hello << endl;

    return 0;
}
