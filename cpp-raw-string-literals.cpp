#include <iostream>

int main() {
  std::cout << "c++ raw string literals test" << std::endl;

  std::string lineBreak = "************************************************************************************n";
  std::string lineBuffer = "*                                                                                  *n";
  std::string helpMessage =
                "nn" + lineBreak + lineBuffer + 
R"(* Welcome to Approval Tests.
* 
* You have forgotten to configure your test framework for Approval Tests.
* 
* To do this in Catch, add the following to your main.cpp:
* 
*     #define APPROVALS_CATCH
*     #include "ApprovalTests.hpp"
* 
* To do this in Google Test, add the following to your main.cpp:
* 
*     #define APPROVALS_GOOGLETEST
*     #include "ApprovalTests.hpp"
* 
* For more information, please visit:
* https://github.com/approvals/ApprovalTests.cpp/blob/master/doc/GettingStarted.md
)" +
   lineBuffer + lineBreak + 'n';

   std::cout << helpMessage << std::endl;

   return 0;
}
