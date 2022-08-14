#ifndef TIGER_H
#define TIGER_H

#include "Version.inc"
#include <string>

#define GENTOKEN(name)  class name : Token {\
    public:\
        void getToken(TigerContext context);\
};  

namespace tigerlang {

class TigerContext;
class Token {};

GENTOKEN(SpaceToken)
GENTOKEN(LetToken)
GENTOKEN(InToken)
GENTOKEN(EndToken)

class IntToken : Token {
private:
  int num;

public:
  void getToken(TigerContext context);
};

class TigerContext {
private:
  const char *buffer;

public:
    std::string getTigerlangVersion();
};

Token getToken(TigerContext context);
} // namespace tigerlang
#endif