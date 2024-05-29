
// Generated from Polynomial.g4 by ANTLR 4.13.1


#include "PolynomialVisitor.h"

#include "PolynomialParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct PolynomialParserStaticData final {
  PolynomialParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PolynomialParserStaticData(const PolynomialParserStaticData&) = delete;
  PolynomialParserStaticData(PolynomialParserStaticData&&) = delete;
  PolynomialParserStaticData& operator=(const PolynomialParserStaticData&) = delete;
  PolynomialParserStaticData& operator=(PolynomialParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag polynomialParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PolynomialParserStaticData *polynomialParserStaticData = nullptr;

void polynomialParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (polynomialParserStaticData != nullptr) {
    return;
  }
#else
  assert(polynomialParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PolynomialParserStaticData>(
    std::vector<std::string>{
      "prog", "expr"
    },
    std::vector<std::string>{
      "", "'('", "')'", "", "';'", "", "", "", "'^'", "'*'", "'/'", "'SIN'", 
      "'COS'", "'+'", "'-'"
    },
    std::vector<std::string>{
      "", "", "", "INT", "SEP", "WS", "ERR", "VAR", "DEG", "MUL", "DIV", 
      "SIN", "COS", "ADD", "SUB"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,14,45,2,0,7,0,2,1,7,1,1,0,1,0,1,0,1,0,1,0,1,0,1,0,3,0,12,8,0,5,0,
  	14,8,0,10,0,12,0,17,9,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,3,1,26,8,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,40,8,1,10,1,12,1,43,9,1,
  	1,1,0,2,0,2,2,0,2,0,3,1,0,11,12,1,0,9,10,1,0,13,14,50,0,4,1,0,0,0,2,25,
  	1,0,0,0,4,5,6,0,-1,0,5,6,3,2,1,0,6,15,1,0,0,0,7,8,10,1,0,0,8,9,5,4,0,
  	0,9,11,3,0,0,0,10,12,5,0,0,1,11,10,1,0,0,0,11,12,1,0,0,0,12,14,1,0,0,
  	0,13,7,1,0,0,0,14,17,1,0,0,0,15,13,1,0,0,0,15,16,1,0,0,0,16,1,1,0,0,0,
  	17,15,1,0,0,0,18,19,6,1,-1,0,19,26,5,3,0,0,20,26,5,7,0,0,21,22,5,1,0,
  	0,22,23,3,2,1,0,23,24,5,2,0,0,24,26,1,0,0,0,25,18,1,0,0,0,25,20,1,0,0,
  	0,25,21,1,0,0,0,26,41,1,0,0,0,27,28,10,7,0,0,28,29,5,8,0,0,29,40,3,2,
  	1,8,30,31,10,6,0,0,31,32,7,0,0,0,32,40,3,2,1,7,33,34,10,5,0,0,34,35,7,
  	1,0,0,35,40,3,2,1,6,36,37,10,4,0,0,37,38,7,2,0,0,38,40,3,2,1,5,39,27,
  	1,0,0,0,39,30,1,0,0,0,39,33,1,0,0,0,39,36,1,0,0,0,40,43,1,0,0,0,41,39,
  	1,0,0,0,41,42,1,0,0,0,42,3,1,0,0,0,43,41,1,0,0,0,5,11,15,25,39,41
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  polynomialParserStaticData = staticData.release();
}

}

PolynomialParser::PolynomialParser(TokenStream *input) : PolynomialParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

PolynomialParser::PolynomialParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  PolynomialParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *polynomialParserStaticData->atn, polynomialParserStaticData->decisionToDFA, polynomialParserStaticData->sharedContextCache, options);
}

PolynomialParser::~PolynomialParser() {
  delete _interpreter;
}

const atn::ATN& PolynomialParser::getATN() const {
  return *polynomialParserStaticData->atn;
}

std::string PolynomialParser::getGrammarFileName() const {
  return "Polynomial.g4";
}

const std::vector<std::string>& PolynomialParser::getRuleNames() const {
  return polynomialParserStaticData->ruleNames;
}

const dfa::Vocabulary& PolynomialParser::getVocabulary() const {
  return polynomialParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PolynomialParser::getSerializedATN() const {
  return polynomialParserStaticData->serializedATN;
}


//----------------- ProgContext ------------------------------------------------------------------

PolynomialParser::ProgContext::ProgContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PolynomialParser::ProgContext::getRuleIndex() const {
  return PolynomialParser::RuleProg;
}

void PolynomialParser::ProgContext::copyFrom(ProgContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- MultlineProgContext ------------------------------------------------------------------

std::vector<PolynomialParser::ProgContext *> PolynomialParser::MultlineProgContext::prog() {
  return getRuleContexts<PolynomialParser::ProgContext>();
}

PolynomialParser::ProgContext* PolynomialParser::MultlineProgContext::prog(size_t i) {
  return getRuleContext<PolynomialParser::ProgContext>(i);
}

tree::TerminalNode* PolynomialParser::MultlineProgContext::SEP() {
  return getToken(PolynomialParser::SEP, 0);
}

tree::TerminalNode* PolynomialParser::MultlineProgContext::EOF() {
  return getToken(PolynomialParser::EOF, 0);
}

PolynomialParser::MultlineProgContext::MultlineProgContext(ProgContext *ctx) { copyFrom(ctx); }


std::any PolynomialParser::MultlineProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PolynomialVisitor*>(visitor))
    return parserVisitor->visitMultlineProg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- OneLineProgContext ------------------------------------------------------------------

PolynomialParser::ExprContext* PolynomialParser::OneLineProgContext::expr() {
  return getRuleContext<PolynomialParser::ExprContext>(0);
}

PolynomialParser::OneLineProgContext::OneLineProgContext(ProgContext *ctx) { copyFrom(ctx); }


std::any PolynomialParser::OneLineProgContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PolynomialVisitor*>(visitor))
    return parserVisitor->visitOneLineProg(this);
  else
    return visitor->visitChildren(this);
}

PolynomialParser::ProgContext* PolynomialParser::prog() {
   return prog(0);
}

PolynomialParser::ProgContext* PolynomialParser::prog(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PolynomialParser::ProgContext *_localctx = _tracker.createInstance<ProgContext>(_ctx, parentState);
  PolynomialParser::ProgContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 0;
  enterRecursionRule(_localctx, 0, PolynomialParser::RuleProg, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    _localctx = _tracker.createInstance<OneLineProgContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(5);
    expr(0);
    _ctx->stop = _input->LT(-1);
    setState(15);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<MultlineProgContext>(_tracker.createInstance<ProgContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleProg);
        setState(7);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(8);
        match(PolynomialParser::SEP);
        setState(9);
        prog(0);
        setState(11);
        _errHandler->sync(this);

        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx)) {
        case 1: {
          setState(10);
          match(PolynomialParser::EOF);
          break;
        }

        default:
          break;
        } 
      }
      setState(17);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

PolynomialParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t PolynomialParser::ExprContext::getRuleIndex() const {
  return PolynomialParser::RuleExpr;
}

void PolynomialParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ParensContext ------------------------------------------------------------------

PolynomialParser::ExprContext* PolynomialParser::ParensContext::expr() {
  return getRuleContext<PolynomialParser::ExprContext>(0);
}

PolynomialParser::ParensContext::ParensContext(ExprContext *ctx) { copyFrom(ctx); }


std::any PolynomialParser::ParensContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PolynomialVisitor*>(visitor))
    return parserVisitor->visitParens(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SinCosContext ------------------------------------------------------------------

std::vector<PolynomialParser::ExprContext *> PolynomialParser::SinCosContext::expr() {
  return getRuleContexts<PolynomialParser::ExprContext>();
}

PolynomialParser::ExprContext* PolynomialParser::SinCosContext::expr(size_t i) {
  return getRuleContext<PolynomialParser::ExprContext>(i);
}

tree::TerminalNode* PolynomialParser::SinCosContext::SIN() {
  return getToken(PolynomialParser::SIN, 0);
}

tree::TerminalNode* PolynomialParser::SinCosContext::COS() {
  return getToken(PolynomialParser::COS, 0);
}

PolynomialParser::SinCosContext::SinCosContext(ExprContext *ctx) { copyFrom(ctx); }


std::any PolynomialParser::SinCosContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PolynomialVisitor*>(visitor))
    return parserVisitor->visitSinCos(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MulDivContext ------------------------------------------------------------------

std::vector<PolynomialParser::ExprContext *> PolynomialParser::MulDivContext::expr() {
  return getRuleContexts<PolynomialParser::ExprContext>();
}

PolynomialParser::ExprContext* PolynomialParser::MulDivContext::expr(size_t i) {
  return getRuleContext<PolynomialParser::ExprContext>(i);
}

tree::TerminalNode* PolynomialParser::MulDivContext::MUL() {
  return getToken(PolynomialParser::MUL, 0);
}

tree::TerminalNode* PolynomialParser::MulDivContext::DIV() {
  return getToken(PolynomialParser::DIV, 0);
}

PolynomialParser::MulDivContext::MulDivContext(ExprContext *ctx) { copyFrom(ctx); }


std::any PolynomialParser::MulDivContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PolynomialVisitor*>(visitor))
    return parserVisitor->visitMulDiv(this);
  else
    return visitor->visitChildren(this);
}
//----------------- AddSubContext ------------------------------------------------------------------

std::vector<PolynomialParser::ExprContext *> PolynomialParser::AddSubContext::expr() {
  return getRuleContexts<PolynomialParser::ExprContext>();
}

PolynomialParser::ExprContext* PolynomialParser::AddSubContext::expr(size_t i) {
  return getRuleContext<PolynomialParser::ExprContext>(i);
}

tree::TerminalNode* PolynomialParser::AddSubContext::ADD() {
  return getToken(PolynomialParser::ADD, 0);
}

tree::TerminalNode* PolynomialParser::AddSubContext::SUB() {
  return getToken(PolynomialParser::SUB, 0);
}

PolynomialParser::AddSubContext::AddSubContext(ExprContext *ctx) { copyFrom(ctx); }


std::any PolynomialParser::AddSubContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PolynomialVisitor*>(visitor))
    return parserVisitor->visitAddSub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarContext ------------------------------------------------------------------

tree::TerminalNode* PolynomialParser::VarContext::VAR() {
  return getToken(PolynomialParser::VAR, 0);
}

PolynomialParser::VarContext::VarContext(ExprContext *ctx) { copyFrom(ctx); }


std::any PolynomialParser::VarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PolynomialVisitor*>(visitor))
    return parserVisitor->visitVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- DegContext ------------------------------------------------------------------

std::vector<PolynomialParser::ExprContext *> PolynomialParser::DegContext::expr() {
  return getRuleContexts<PolynomialParser::ExprContext>();
}

PolynomialParser::ExprContext* PolynomialParser::DegContext::expr(size_t i) {
  return getRuleContext<PolynomialParser::ExprContext>(i);
}

tree::TerminalNode* PolynomialParser::DegContext::DEG() {
  return getToken(PolynomialParser::DEG, 0);
}

PolynomialParser::DegContext::DegContext(ExprContext *ctx) { copyFrom(ctx); }


std::any PolynomialParser::DegContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PolynomialVisitor*>(visitor))
    return parserVisitor->visitDeg(this);
  else
    return visitor->visitChildren(this);
}
//----------------- IntContext ------------------------------------------------------------------

tree::TerminalNode* PolynomialParser::IntContext::INT() {
  return getToken(PolynomialParser::INT, 0);
}

PolynomialParser::IntContext::IntContext(ExprContext *ctx) { copyFrom(ctx); }


std::any PolynomialParser::IntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<PolynomialVisitor*>(visitor))
    return parserVisitor->visitInt(this);
  else
    return visitor->visitChildren(this);
}

PolynomialParser::ExprContext* PolynomialParser::expr() {
   return expr(0);
}

PolynomialParser::ExprContext* PolynomialParser::expr(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  PolynomialParser::ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, parentState);
  PolynomialParser::ExprContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, PolynomialParser::RuleExpr, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(25);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case PolynomialParser::INT: {
        _localctx = _tracker.createInstance<IntContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(19);
        match(PolynomialParser::INT);
        break;
      }

      case PolynomialParser::VAR: {
        _localctx = _tracker.createInstance<VarContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(20);
        match(PolynomialParser::VAR);
        break;
      }

      case PolynomialParser::T__0: {
        _localctx = _tracker.createInstance<ParensContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(21);
        match(PolynomialParser::T__0);
        setState(22);
        expr(0);
        setState(23);
        match(PolynomialParser::T__1);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(41);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(39);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<DegContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(27);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(28);
          antlrcpp::downCast<DegContext *>(_localctx)->op = match(PolynomialParser::DEG);
          setState(29);
          expr(8);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<SinCosContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(30);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(31);
          antlrcpp::downCast<SinCosContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PolynomialParser::SIN

          || _la == PolynomialParser::COS)) {
            antlrcpp::downCast<SinCosContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(32);
          expr(7);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MulDivContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(33);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(34);
          antlrcpp::downCast<MulDivContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PolynomialParser::MUL

          || _la == PolynomialParser::DIV)) {
            antlrcpp::downCast<MulDivContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(35);
          expr(6);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<AddSubContext>(_tracker.createInstance<ExprContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleExpr);
          setState(36);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(37);
          antlrcpp::downCast<AddSubContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!(_la == PolynomialParser::ADD

          || _la == PolynomialParser::SUB)) {
            antlrcpp::downCast<AddSubContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(38);
          expr(5);
          break;
        }

        default:
          break;
        } 
      }
      setState(43);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool PolynomialParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 0: return progSempred(antlrcpp::downCast<ProgContext *>(context), predicateIndex);
    case 1: return exprSempred(antlrcpp::downCast<ExprContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool PolynomialParser::progSempred(ProgContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool PolynomialParser::exprSempred(ExprContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 7);
    case 2: return precpred(_ctx, 6);
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

void PolynomialParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  polynomialParserInitialize();
#else
  ::antlr4::internal::call_once(polynomialParserOnceFlag, polynomialParserInitialize);
#endif
}
