#include "crazy_lib.h"

int (*callback)(TAEnum a, TBEnum b);

static int return_value(TAEnum a, TBEnum b)
{
    return a + b;
}

int crazy_call(TCrazyType t)
{
    if (t.a == AEnum2 && t.b == BEnum2)
        callback = return_value;

    callback(t.a, t.b);
}

// gcc -fshort-enums -c crazy_lib.c -o crazy_lib.o
// ar rcs libcrazy.a crazy_lib.o
