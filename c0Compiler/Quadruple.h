//
// Created by andyson on 18-11-30.
//

#ifndef C0COMPILER_QUADRUPLE_H
#define C0COMPILER_QUADRUPLE_H

#include <string>
#include <vector>
#include "Type.h"

using namespace std;

class Quadruple{
public:
    Quadruple();
    vector<Quad *> quadrupleList;

    void addQuadruple(Operator op, string dst, string src1, string src2, bool global = false);
    void output(FILE *qout);
    string newTemp();
    int length();
    void toString(Quad q, string &res);
    void combineVarDeclare();

private:
};


#endif //C0COMPILER_QUADRUPLE_H
