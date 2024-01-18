#include<iostream>

int main(){
    char caracter{'a'};
    std::cout << "O valor de a é: " << caracter << '\n';
    std::cout << "O valor direto para MAIÚSCULO de a é: " << toupper(caracter) << '\n';

    caracter = toupper(caracter);
    std::cout << "O valor de a agora é o maiúsculo: " << caracter << '\n';
    return 0;
}
