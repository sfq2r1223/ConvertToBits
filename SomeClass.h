#pragma once

#include <string>
#include <functional>
#include <vector>

class SomeClass final
{
public:
    SomeClass();
    SomeClass& operator=(const SomeClass&) = default;
    ~SomeClass() = default;

    std::vector<std::size_t>serialize   (const char* pathToFile);
    const char*             deserialize (const char* file);

    //setters
    int                     getInt() const;
    double                  getDouble() const;
    float                   getFloat() const;
    std::string             getStr() const;
    std::function<void()>   getFunction() const;
    std::vector<int>        getVecor() const;
    //getters
    void                    setInt       (int number);
    void                    setDouble    (double number);
    void                    setFloat     (float number);
    void                    setStr       (const std::string str);
    void                    setFunc      (std::function<void()> func);
    void                    setVec       (std::vector<int> vec);
    
    
private:
    int                         variableInt;
    double                      variableDouble;
    float                       variableFloat;
                                
    std::string                 variableStr;
    std::function<void()>       variableFunc;
    std::vector<int>            variableVector;
    std::vector<std::size_t>    binary;
};