
// Generated from Polynomial.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "PolynomialParser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by PolynomialParser.
 */
class  PolynomialVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by PolynomialParser.
   */
    virtual std::any visitMultlineProg(PolynomialParser::MultlineProgContext *context) = 0;

    virtual std::any visitOneLineProg(PolynomialParser::OneLineProgContext *context) = 0;

    virtual std::any visitParens(PolynomialParser::ParensContext *context) = 0;

    virtual std::any visitSinCos(PolynomialParser::SinCosContext *context) = 0;

    virtual std::any visitMulDiv(PolynomialParser::MulDivContext *context) = 0;

    virtual std::any visitAddSub(PolynomialParser::AddSubContext *context) = 0;

    virtual std::any visitVar(PolynomialParser::VarContext *context) = 0;

    virtual std::any visitDeg(PolynomialParser::DegContext *context) = 0;

    virtual std::any visitInt(PolynomialParser::IntContext *context) = 0;


};

