//
//  hello.cpp
//  working
//
//  Created by Volodymyr Dotsenko on 10/18/18.
//  Copyright © 2018 Volodymyr Dotsenko. All rights reserved.
//

#include <cstdio>

int main(int argc, char ** argv){
    int i = 10;
    int *ip = &i;
    printf("Value of i=%d\n", i);
    printf("Value of ip=%p\n", ip);
    
    char ia[] = {'1', '2', '3', '4', '5', 0};
    
    printf("Value of ia=%s\n", ia);
    
    for(char c : ia){
        printf("Character is %c\n", c);
    }
    return 0;
}
