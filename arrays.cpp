#include <iostream>

void recebe_array (int arr[]){
    arr[3] = 88;
}
void recebe_variavel (int variavel){
    variavel = 12;
}

int main(){
    int numeros[] = {11, 22, 33, 44, 55};

    //sizeoff
    std::cout << "\nO tamanho do array em bytes é: " << sizeof(numeros) << '\n';
    std::cout << "O tamanho do array[0] em bytes é: " << sizeof(numeros[0]) << '\n';
    std::cout << "Então o tamanho do array é: " << sizeof(numeros) / sizeof(numeros[0]) << "\n\n";

    // int variavel {66};
    // std::cout << "\nO valor da variável antes da função é: " << variavel << '\n';
    // recebe_variavel(variavel);
    // std::cout << "O valor da variável depois da função é: " << variavel << '\n';

    // //int multi[3][3] = {{5, 8 , 9}, {2, 7, 4}, {6, 0 , 1}};
    // std::cout << "\nO valor de array de posição 3 antes da função é: " << numeros[3] << '\n';
    // recebe_array( numeros );
    // std::cout << "O valor de array de posição 3 depois da função é: " << numeros[3] << "\n\n";
    return 0;
}
