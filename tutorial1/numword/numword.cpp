//
//  numword.cpp
//  working
//
//  Created by Volodymyr Dotsenko on 10/21/18.
//  Copyright © 2018 Volodymyr Dotsenko. All rights reserved.
//

#include <cstdio>

#include "numword.hpp"

using namespace std;
using namespace bw;

const string numword::words(uint64_t n) {
    string value = "";
    for(;;) {
        int k = 1;
        if(n < 20){
            value += _units[(n)];
        } else if(n < 100) {
            k = 10;
            value += _tens[(n/k)];
        } else if(n < 1000) {
            k = 100;
            value += _units[(n / k)] + " hundred";
        } else if(n < 1000000) {
            k = 1000;
            value += words(n / k) + "thousand";
        } else if(n < 1000000000) {
            k = 1000000;
            value += words(n / k) + "million";
        }
        else if(n < 1000000000000) {
            k = 1000000000;
            value += words(n / k) + "billion";
        }
        value += " ";
        if((n %= k) == 0){
            break;
        }
    }
    return value;
}


