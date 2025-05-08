#include <javaToCPP.h>
#include "madlib.h"

int main(int argc, char *argv[]) {
    Madlib madlib(true);

    madlib.playMadlib();

    std::cout << madlib.getMadlibString() << std::endl;

    return 0;
}
