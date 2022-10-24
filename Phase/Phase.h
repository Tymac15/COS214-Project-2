#ifndef PHASE_H
#define PHASE_H
#include <string>

class Phase
{
public:
    Phase();
    virtual ~Phase(){}; 
    virtual Phase* handleChange(double)=0; 
    virtual int attackMethod()=0;
    std::string getPhase(); 

protected:
    

};

#endif