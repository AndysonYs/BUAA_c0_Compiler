//
// Created by andyson on 18-12-28.
//

#ifndef C0COMPILER_OPTIMIZER_H
#define C0COMPILER_OPTIMIZER_H

#include "Quadruple.h"
#include <vector>

class Optimizer {
public:
    static Optimizer &getOptimizer(Quadruple theOriginQuadruple, Quadruple theOptimizedQuadruple);  // 单例设计模式
    bool constantCombinationOption;
    bool globalRegisterOption;
    bool blockPublicExpressionOption;

    void optimize();

private:
    Quadruple &originQuadruple;
    Quadruple &optimizedQuadruple;
    vector<int> functionEntry;
    vector<int> basicBlockEntry;
    int currentEntry;
    int currentExit;

    void globalRegisterOptimize();
    void blockPublicExpressionOptimize();
    void constantCombinationOptimize();

    void splitIntoFunction();
    void splitIntoBasicBlock();
    Optimizer(Quadruple theQuadruple, Quadruple theOptimizedQuadruple);
};


#endif //C0COMPILER_OPTIMIZER_H
