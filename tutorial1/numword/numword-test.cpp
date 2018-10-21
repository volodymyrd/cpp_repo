//
//  numword-test.cpp
//  working
//
//  Created by Volodymyr Dotsenko on 10/21/18.
//  Copyright © 2018 Volodymyr Dotsenko. All rights reserved.
//

#include <cstdio>
#include "numword.hpp"

int main(int argc, char** argv) {
    
    bw::numword nw;
    
    uint64_t n;
    
    n = 0; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 3; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 10; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 11; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 47; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 73; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 205; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 215; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 255; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 998; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 1000; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 1492; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 10012; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 15123; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 25123; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 125123; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 1000000; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 5325723; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    n = 997234567129; printf("n is %llu, %s\n", n, nw.words(n).c_str());
    
    for(uint64_t i = 0; i <= 200; i++){
        printf("n is %llu, %s\n", i, nw.words(i).c_str());
    }
}
