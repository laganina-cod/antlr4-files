
// Generated from Polynomial.g4 by ANTLR 4.13.1


#include "PolynomialLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct PolynomialLexerStaticData final {
  PolynomialLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  PolynomialLexerStaticData(const PolynomialLexerStaticData&) = delete;
  PolynomialLexerStaticData(PolynomialLexerStaticData&&) = delete;
  PolynomialLexerStaticData& operator=(const PolynomialLexerStaticData&) = delete;
  PolynomialLexerStaticData& operator=(PolynomialLexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag polynomiallexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
PolynomialLexerStaticData *polynomiallexerLexerStaticData = nullptr;

void polynomiallexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (polynomiallexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(polynomiallexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<PolynomialLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "INT", "SEP", "WS", "ERR", "VAR", "DEG", "MUL", "DIV", 
      "SIN", "COS", "ADD", "SUB"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
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
  	4,0,14,75,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,
  	1,0,1,1,1,1,1,2,4,2,35,8,2,11,2,12,2,36,1,3,1,3,1,4,4,4,42,8,4,11,4,12,
  	4,43,1,4,1,4,1,5,1,5,4,5,50,8,5,11,5,12,5,51,1,5,1,5,1,6,1,6,1,7,1,7,
  	1,8,1,8,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,13,
  	1,13,0,0,14,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,23,12,
  	25,13,27,14,1,0,5,1,0,48,57,2,0,9,10,13,13,1,0,1072,1103,1,0,1040,1071,
  	1,0,97,122,77,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,
  	0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,
  	0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,1,29,1,0,0,0,3,31,
  	1,0,0,0,5,34,1,0,0,0,7,38,1,0,0,0,9,41,1,0,0,0,11,47,1,0,0,0,13,55,1,
  	0,0,0,15,57,1,0,0,0,17,59,1,0,0,0,19,61,1,0,0,0,21,63,1,0,0,0,23,67,1,
  	0,0,0,25,71,1,0,0,0,27,73,1,0,0,0,29,30,5,40,0,0,30,2,1,0,0,0,31,32,5,
  	41,0,0,32,4,1,0,0,0,33,35,7,0,0,0,34,33,1,0,0,0,35,36,1,0,0,0,36,34,1,
  	0,0,0,36,37,1,0,0,0,37,6,1,0,0,0,38,39,5,59,0,0,39,8,1,0,0,0,40,42,7,
  	1,0,0,41,40,1,0,0,0,42,43,1,0,0,0,43,41,1,0,0,0,43,44,1,0,0,0,44,45,1,
  	0,0,0,45,46,6,4,0,0,46,10,1,0,0,0,47,49,7,2,0,0,48,50,7,3,0,0,49,48,1,
  	0,0,0,50,51,1,0,0,0,51,49,1,0,0,0,51,52,1,0,0,0,52,53,1,0,0,0,53,54,6,
  	5,0,0,54,12,1,0,0,0,55,56,7,4,0,0,56,14,1,0,0,0,57,58,5,94,0,0,58,16,
  	1,0,0,0,59,60,5,42,0,0,60,18,1,0,0,0,61,62,5,47,0,0,62,20,1,0,0,0,63,
  	64,5,83,0,0,64,65,5,73,0,0,65,66,5,78,0,0,66,22,1,0,0,0,67,68,5,67,0,
  	0,68,69,5,79,0,0,69,70,5,83,0,0,70,24,1,0,0,0,71,72,5,43,0,0,72,26,1,
  	0,0,0,73,74,5,45,0,0,74,28,1,0,0,0,4,0,36,43,51,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  polynomiallexerLexerStaticData = staticData.release();
}

}

PolynomialLexer::PolynomialLexer(CharStream *input) : Lexer(input) {
  PolynomialLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *polynomiallexerLexerStaticData->atn, polynomiallexerLexerStaticData->decisionToDFA, polynomiallexerLexerStaticData->sharedContextCache);
}

PolynomialLexer::~PolynomialLexer() {
  delete _interpreter;
}

std::string PolynomialLexer::getGrammarFileName() const {
  return "Polynomial.g4";
}

const std::vector<std::string>& PolynomialLexer::getRuleNames() const {
  return polynomiallexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& PolynomialLexer::getChannelNames() const {
  return polynomiallexerLexerStaticData->channelNames;
}

const std::vector<std::string>& PolynomialLexer::getModeNames() const {
  return polynomiallexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& PolynomialLexer::getVocabulary() const {
  return polynomiallexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView PolynomialLexer::getSerializedATN() const {
  return polynomiallexerLexerStaticData->serializedATN;
}

const atn::ATN& PolynomialLexer::getATN() const {
  return *polynomiallexerLexerStaticData->atn;
}




void PolynomialLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  polynomiallexerLexerInitialize();
#else
  ::antlr4::internal::call_once(polynomiallexerLexerOnceFlag, polynomiallexerLexerInitialize);
#endif
}
