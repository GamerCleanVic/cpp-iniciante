#include <iostream>

int main(){
    double valor = 3.14;
    int numero = (int)valor;
    char letra = 'c';
    std::string palavra = "Algo";

    std::cout << "O valor de 'valor' é: "<< valor << "\n";
    std::cout << "O valor de 'numero' é: "<< numero << "\n";
    std::cout << "O valor de 'letra' é: "<< letra << "\n";

    numero = (int)letra;
    std::cout << "O valor de 'numero' é: "<< numero << "\n";
    numero = numero + letra;
    std::cout << "O valor de 'numero' é: "<< numero << "\n";
    std::cout << "O valor de 'palavra' é: "<< palavra << "\n";

    double outro = 9.87;
    int number = static_cast<int>( outro );
    outro = static_cast<double>( number );
    std::cout << "\nO valor de 'number' é: "<< number << '\n';
    std::cout << "O valor de 'outro' é: "<< outro << '\n';

    return 0;
}
