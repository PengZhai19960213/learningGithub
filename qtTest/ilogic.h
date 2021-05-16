#ifndef ILOGIC_H
#define ILOGIC_H


class ILogic
{
public:
    ILogic();
    virtual int add(int a,int b)=0;
    virtual ~ILogic();
};

#endif // ILOGIC_H
