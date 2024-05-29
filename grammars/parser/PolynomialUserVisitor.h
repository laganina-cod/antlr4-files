#include <vector>
#include <iostream>
#include <cmath>
#include "antlr4-runtime.h"
#include "PolynomialBaseVisitor.h"
class PolynomialUserVisitor: public PolynomialBaseVisitor{
    std::vector <int> res;
    virtual std::any visitInt(PolynomialParser::IntContext* ctx) override{
        return std::stoi(ctx->INT()->getText());
    }
    virtual std::any visitAddSub(PolynomialParser::AddSubContext* ctx) override{
        int left= std::any_cast<int>(visit(ctx->expr(0)));
        int right= std::any_cast<int>(visit(ctx->expr(1)));
        std::cout<<"T<-"<<left<<ctx->op->getText()<<right<<std::endl;
        if(ctx->op->getType()==PolynomialParser::ADD) return left+right;
        else return left-right;
    }
    virtual std::any visitMulDiv(PolynomialParser::MulDivContext* ctx) override{
        int left= std::any_cast<int>(visit(ctx->expr(0)));
        int right= std::any_cast<int>(visit(ctx->expr(1)));
        std::cout<<"T<-"<<left<<ctx->op->getText()<<right<<std::endl;
        if(ctx->op->getType()==PolynomialParser::MUL) return left*right;
        else return static_cast<int>(left/right);
    }
    virtual std::any visitVar(PolynomialParser::VarContext* ctx) override{
        std::string str=ctx->VAR()->getText();
        for(int i=0;i<3;i++){
        if(str[0]==variables[i]){
            return variables_values[i];
        }
        }
        throw "please enter correct variable/values";
        return;
    }
    virtual std::any visitDeg(PolynomialParser::DegContext* ctx) override{
        int left= std::any_cast<int>(visit(ctx->expr(0)));
        int right= std::any_cast<int>(visit(ctx->expr(1)));
        std::cout<<"T<-"<<left<<ctx->op->getText()<<right<<std::endl;
        return static_cast<int>(pow(left,right));
    }
    virtual std::any visitParens(PolynomialParser::ParensContext* ctx) override{
        return visit(ctx->expr(0));
    }
    virtual std::any visitSinCos(PolynomialParser::SinCosContext* ctx) override{
        int left= std::any_cast<int>(visit(ctx->expr(0)));
        int right= std::any_cast<int>(visit(ctx->expr(1)));
        std::cout<<"T<-"<<left<<ctx->op->getText()<<right<<std::endl;
        if(ctx->op->getType()==PolynomialParser::SIN) return static_cast<int>(sin(right));
        else return static_cast<int>(cos(right));
    }
     virtual std::any visitOneLineProg(PolynomialParser::OneLineProgContext *ctx) override{
        std::cout<<"OneLineProg"<<std::endl;
        int val=std::any_cast<int>(visit(ctx->expr()));
        res.push_back(val);
        return val;
     }
     virtual std::any visitMultlineProg(PolynomialParser::MultlineProgContext *ctx) override{
        std::cout<<"MultLineProg"<<std::endl;
        std::vector<PolynomialParser::ProgContext*> arr_p=ctx->prog();
        for each(PolynomialParser::ProgContext* p in arr_p ){
            visit(p);
        }
        return &res;
     }


}