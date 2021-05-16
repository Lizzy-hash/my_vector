//
// Created by elizk on 16.05.2021.
//

#include <iostream>
#include "my_vector.h"


int main(){
    my_vector tab;

    tab.push_back(6);
    tab.push_back(9);

    std::cout<<"Size: "<<tab.size()<<std::endl;

    for(int i = 0; i < tab.size(); i++)
        std::cout<<tab[i]<<" ";

    std::cout<<std::endl;

    tab.push_back(12);
    tab.push_back(34);

    std::cout<<"Size: "<<tab.size()<<std::endl;

    for(int i = 0; i < tab.size(); i++)
        std::cout<<tab[i]<<" ";


    return 0;
}

