#include <iostream>

int main() {
    //Salutations
    std::cout << "Hello, World!" << std::endl;
    std::cout<<"Entrer votre Nom "<<std::endl;
    std::string nom;
    std::cin>>nom;
    std::cout<<"bonjour "<<nom<<std::endl;
    //double
    int age;
    std::cout<<"Entrer votre age "<<std::endl;
    std::cin>>age;
    std::cout<<"le Double de votre age est "<<2*age<<std::endl;
    return 0;
}