#ifndef LOGICIMPL_H
#define LOGICIMPL_H

#include"ilogic.h"
class LogicImpl:public ILogic

{
public:
    LogicImpl();
    int add(int a, int b) override;
};

#endif // LOGICIMPL_H
