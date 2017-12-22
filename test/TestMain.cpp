#include "../src/main.h"
#include <assert.h>

void testGetTriangleType() {
    assert(getTriangleType(3, 4, 5) == 0);
    assert(getTriangleType(5, 4, 3) == 0);
    assert(getTriangleType(3, 5, 5) == 1);
    assert(getTriangleType(3, 5, 6) == -1);
    assert(getTriangleType(3, 4, 8) == -2);
}

int main() {
    assert(addNumber(5, 2) == 7);
    testGetTriangleType();
    return 0;
}
