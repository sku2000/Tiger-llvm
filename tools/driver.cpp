#include "llvm/Support/InitLLVM.h"
#include "llvm/Support/raw_ostream.h"
#include "Tiger.h"

int main(int argc_, const char **argv_) {
  llvm::InitLLVM X(argc_, argv_);
  llvm::outs() << "Hello, I am Tigerlang " << tigerlang::getTigerlangVersion()
               << "\n";
}