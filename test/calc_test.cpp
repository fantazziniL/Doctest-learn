#define DOCTEST_CONFIG_IMPLEMENT  // REQUIRED: Enable custom main()
#include <doctest.h>

#include "Calculator.hpp"

TEST_CASE("testing the factorial function") {
    CHECK( Calculator::sum(2,3) == 5 );
}

int main(int argc, char **argv) {
    doctest::Context context;

    // BEGIN:: PLATFORMIO REQUIRED OPTIONS
    context.setOption("success", true);     // Report successful tests
    context.setOption("no-exitcode", true); // Do not return non-zero code on failed test case
    // END:: PLATFORMIO REQUIRED OPTIONS

    context.applyCommandLine(argc, argv);
    return context.run();
}

