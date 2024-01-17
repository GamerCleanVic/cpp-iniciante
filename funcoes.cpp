#include<iostream>

int soma(int x, int y){
    std::cout << x << " + " << y << " = " << x+y << '\n';
    return 0;
}

int main(){
    int x{2}, y{5};
    return soma(x, y);
}
