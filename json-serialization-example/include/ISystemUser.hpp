#ifndef ISYSTEMUSER_H
#define ISYSTEMUSER_H
#include <iostream>
using namespace std;

class ISystemUser 
{
    private:
        string user;
        string area;
        int DNI;
        string name;
        string Email;
    public:
        virtual void setDNI(int DNI) = 0;
        virtual void setName(string name) = 0;
        virtual void setEmail(string Email) = 0;
};

#endif