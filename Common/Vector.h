//
// Created by macie on 21/02/2024.
//

#ifndef CPP_VECTOR_H
#define CPP_VECTOR_H

#include <vector>
#include <string>

using namespace std;

class Vector {
private:
    vector<double> components;
public:
    explicit Vector(vector<double> components);

    vector<double> getComponents() { return components; }

    double operator*(Vector other);

    Vector operator+(Vector other);

    Vector operator*(double scalar);

    string toString(int precision);

    Vector ReLU();

    double getComponent(int index);

    int getSize() { return components.size(); }

    double addEntry(double d);
};


#endif //CPP_VECTOR_H
