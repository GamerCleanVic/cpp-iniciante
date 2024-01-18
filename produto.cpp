#include <iostream>

int produto(int, int);

int main(){
    std::cout <<"A multiplicação = "<<produto(3,5)<< '\n';
}

int produto(int valor1, int valor2){
    return valor1 * valor2;
}
