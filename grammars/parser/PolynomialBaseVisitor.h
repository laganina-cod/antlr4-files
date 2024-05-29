
// Generated from Polynomial.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "PolynomialVisitor.h"


/**
 * This class provides an empty implementation of PolynomialVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  PolynomialBaseVisitor : public PolynomialVisitor {
public:

  virtual std::any visitMultlineProg(PolynomialParser::MultlineProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOneLineProg(PolynomialParser::OneLineProgContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitParens(PolynomialParser::ParensContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitSinCos(PolynomialParser::SinCosContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMulDiv(PolynomialParser::MulDivContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAddSub(PolynomialParser::AddSubContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitVar(PolynomialParser::VarContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDeg(PolynomialParser::DegContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitInt(PolynomialParser::IntContext *ctx) override {
    return visitChildren(ctx);
  }


};

