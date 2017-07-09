#include <iostream>
using namespace std;

class Student {
    // by listing class private members first, I can skip explicitly declaring them private
    // private:
        // use std::string  if i don't  have using namespace std
        string name;
        int id;
        int gradDate;
    public:
        void setName(string nameIn);
        void setId(int idIn);
        void setGradDate(int dateIn);
        string getName();
        int getId();
        int getGradDate();
        void print();

};

