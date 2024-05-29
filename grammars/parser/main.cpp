#include <iostream>
#include "antlr4-runtime.h"
#include "PolynomialUserVisitor.h"
#include "PolynomialParser.h"
#include "PolynomialLexer.h"
#include <string>
#include <sstream>

char variables[3];
int variables_values[3];
int main(){
std::string expr="5+7*x^6+1SINy+1COSz;x";
variables={'x','y','z'};
variables_values={2,0,0};
std::stringstream stream(expr);
antlr4::ANTLRInputStream input(stream);
PolynomialLexer lexer(&input);
antlr4::CommonTokenStream tokens(&lexer);
PolynomialParser parser(&tokens);
PolynomialUserVisitor visitor;
visitor.visit(parser.prog());
std::cout<<"Result :"<<std::endl;
if((visitor.res[0]==454)&&(visitor.res[1]==2)){
    std::cout<<"passed"<<std::endl;
}
else{
    std::cout<<"no passed"<<std::endl;
}
}
