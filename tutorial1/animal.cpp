//
//  animal.cpp
//  working
//
//  Created by Volodymyr Dotsenko on 10/21/18.
//  Copyright © 2018 Volodymyr Dotsenko. All rights reserved.
//

#include <cstdio>
#include <string>

using namespace std;

const string unk = "unknown";
const string clone_prefix = "clone-";

class Animal {
    string _type = "";
    string _name = "";
    string _sound = "";
    Animal();
public:
    Animal(const string & type, const string & name, const string & sound);
    Animal(const Animal &);
    
    ~Animal();
    
    Animal & operator=(const Animal &);
    
    void print() const;
};

Animal::Animal(const string & type, const string & name, const string & sound)
: _type(type), _name(name), _sound(sound){
    puts("with args constructor");
}

Animal::Animal(const Animal & a){
    puts("copy constructor");
    _name = clone_prefix + a._name;
    _type = a._type;
    _sound = a._sound;
}

Animal::~Animal(){
    printf("destructor: %s the %s\n", _name.c_str(), _type.c_str());
}

Animal & Animal::operator=(const Animal & o){
    puts("copy operator");
    if(this != &o){
        _name = clone_prefix + o._name;
        _type = o._type;
        _sound = o._sound;
    }
    return *this;
}

void Animal::print() const {
    printf("%s the %s says %s\n", _name.c_str(), _type.c_str(), _sound.c_str());
}

int main(int argc, char** argv){
    Animal a("type", "name", "sound");
    a.print();
    
    Animal b=a;
    b.print();
    
    Animal c("type1", "name1", "sound1");
    c=b;
    c.print();
}
