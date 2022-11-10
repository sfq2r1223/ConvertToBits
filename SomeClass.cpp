#include "SomeClass.h"

#include <charconv>
#include <fstream>
#include <iostream>

SomeClass::SomeClass(){}

std::vector<std::size_t> SomeClass::serialize(const char* pathToFile)
{
    std::ifstream fin(pathToFile);
    
    unsigned char c;
    while(fin.read(reinterpret_cast<char*>(&c),0x01))
        for (int i = 0; i < 8; ++i)
            binary.at(i) = ((c>>i) & 0x01);//
    fin.close();
    
    return binary;
}

// const char* SomeClass::deserialize(const std::string& file)
// {
//     
// }

//setters

void SomeClass::setInt(int number)
{
    this->variableInt = number;
}

void SomeClass::setDouble(double number)
{
     this->variableDouble = number;
}

void SomeClass::setFloat(float number)
{
    this->variableFloat = number;
}

void SomeClass::setStr(const std::string str)
{
    this->variableStr = str;
}

void SomeClass::setFunc(std::function<void()> func)
{
    this->variableFunc = func;
}

void SomeClass::setVec(std::vector<int> vec)
{
    this->variableVector = variableVector;
}

//getters

int SomeClass::getInt() const
{
    return variableInt;
}

double SomeClass::getDouble() const
{
    return variableDouble;
}

float SomeClass::getFloat() const
{
    return variableFloat;
}

std::string SomeClass::getStr() const
{
    return variableStr;
}

std::function<void()> SomeClass::getFunction() const
{
    return variableFunc;
}

std::vector<int> SomeClass::getVecor() const
{
    return variableVector;
}





