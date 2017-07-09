//
// Created by kasa2 on 5/19/2017.
//

#include "Student.hpp"

void Student::setName(string nameIn){
    name = nameIn;
}

void Student::setId(int idIn){
    id = idIn;
}

void Student::setGradDate(int gradDateIn){
    gradDate = gradDateIn;
}

string Student::getName(){
    return name;
}

int Student::getId(){
    return id;
}

int Student::getGradDate(){
    return gradDate;
}

void Student::print(){
    cout << name <<" "<< id <<" "<< gradDate;
}