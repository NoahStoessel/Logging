#include "src/logging.hpp"

/*
Todays Tasks

Refactor code


*/

int main()
{
    while (1) {
        Log::info("Example Information");
        Log::note("Example Note");
        Log::warn("Example Warning");
        Log::error("Example Error");
        Log::panic("Example Panic");
	Log::test("Example fail", false);
	Log::test("Example test", true);
    }
}
