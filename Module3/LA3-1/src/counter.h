#pragma once
#include <iostream>

class Counter
{
    private:
        unsigned int count_;
    public:
        Counter() : count_(0) {}
        Counter(unsigned int count) : count_(count) {}
        ~Counter() {std::cout << "Lights fading\n";}
        // Setter & getter
        unsigned int count() {return count_;}
        void set_count(unsigned int count) {count_ = count;}
        // Operator overloads
        // void operator ++() {++count_;}
        Counter operator ++();
        Counter operator ++(int);
};

