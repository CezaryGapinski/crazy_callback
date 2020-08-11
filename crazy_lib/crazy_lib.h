#ifndef CRAZY_LIB_H
#define CRAZY_LIB_H

typedef enum {
    AEnum1,
    AEnum2,
} TAEnum;

typedef enum {
    BEnum1,
    BEnum2,
} TBEnum;

typedef struct
{
    TAEnum a;
    TBEnum b;
} TCrazyType;


int crazy_call(TCrazyType t);

#endif // CRAZY_LIB_H