#include <iostream>
int main()
{
    int choice;
    std::cout<<"menu: "<<std::endl;
    std::cout<<"1-print hello"<<std::endl;
    std::cout<<"2-print world"<<std::endl;
    std::cout<<"3-Exit"<<std::endl;
    std::cin>>choice;
    switch (choice)
    {
    case 1:
        std::cout<<"-print hello"<<std::endl;
        break;
    case 2:    
        std::cout<<"-print world"<<std::endl;
        break;
    case 3:
            std::cout<<"3-Exit"<<std::endl;
            break;
    default:

            std::cout<<"Invalid choice"<<std::endl;
        break;
    }

}