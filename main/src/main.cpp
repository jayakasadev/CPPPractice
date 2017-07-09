#include "main.hpp"
#include "objs/Student.hpp"

float cubeVolume(float side){
    return pow(side, 3);
}

float sphereVolume(float radius){
    return (4 / 3.0) * M_PI * pow(radius, 3);
}

float coneVolume(float radius, float height){
    return M_PI * pow(radius, 2) * (height / 3);
}

int main() {
    cout << "Hello, World!" << endl;

    //Dimension of the cube
    float cubeSide = 5.4;
    //Dimension of sphere
    float sphereRadius = 2.33;
    //Dimensions of cone
    float coneRadius = 7.65;
    float coneHeight = 14;

    cout << cubeVolume(cubeSide) << endl;
    cout << sphereVolume(sphereRadius) << endl;
    cout << coneVolume(coneRadius, coneHeight) << endl;

    Student s1;
    s1.setName("Jaya");
    s1.setId(1);
    s1.setGradDate(2);

    cout << s1.getName() << endl;
    cout << s1.getId() << endl;
    cout << s1.getGradDate() << endl;
    s1.print();

    int a = 54;
    int b = 89;
    float f1 = 7.8;
    float f2 = 9.1;
    char c1 = 'f';
    char c2 = 'h';

    string s2 = "Bots are fun";
    string s3 = "Bots are fun";

    //Wow! We can use one function for different variable types
    cout<<"\nIntegers compared: "<<findSmaller(a,b);
    cout<<"\nFloats compared: "<<findSmaller(f1,f2);
    cout<<"\nChars compared: "<<findSmaller(c1,c2);
    cout<<"\nStrings compared: "<<findSmaller(s3, s2);

    return 0;
}

template <typename T>
T findSmaller(T  input1,T  input2)
{
    if(input1 < input2)
        return input1;
    else
        return input2;
}