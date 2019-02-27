//
//  main.cpp
//  Test
//
//  Created by Hamed Mirlohi on 2/25/19.
//  Copyright © 2019 Hamed Mirlohi. All rights reserved.
//

#include <iostream>

bool prime_number(const int&& number)
{
    if(number == 2 || number == 3 || number == 5 || number == 7 || number == 11 || number == 13)
        return true;
    
    else if(number % 2 == 0 || number % 3 == 0 || number % 5 == 0 || number % 7 == 0 ||
       number % 11 == 0 || number % 13 == 0)
        return false;
    
    else
        return true;
}

int main()
{
    
    std::cout<<"15 prime?: "<<prime_number(15)<<std::endl;
    std::cout<<"17 prime?: "<<prime_number(17)<<std::endl;
}
