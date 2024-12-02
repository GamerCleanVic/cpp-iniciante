#include <iostream>

int main(){
    std::string palavra;
    std::cout << "\nDigite uma letra: ";
    std::getline( std::cin, palavra );
    std::cout << "A letra que você digitou foi: " << palavra << '\n';
    return 0;
}
