//
//  numword.hpp
//  working
//
//  Created by Volodymyr Dotsenko on 10/21/18.
//  Copyright © 2018 Volodymyr Dotsenko. All rights reserved.
//

#ifndef numword_hpp
#define numword_hpp

#include <string>

using namespace std;

namespace bw {
    static const char * errnum = "error";

    static const string _units[] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine", "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"
    };
    
    static const string _tens[] = {
        errnum, errnum, "twenty", "thirty", "forty", "fifty", "sixty", "seventy", "eighty", "ninty",
    };
    
    class numword {
    public:
        const string words(uint64_t n);
    };
};

#endif /* numword_hpp */
