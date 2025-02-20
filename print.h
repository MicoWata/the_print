#ifndef PRINT_H
#define PRINT_H

#include <stdbool.h>

#define FORMAT(T) _Generic((T), \
    /* String types */ \
    char*: "%s", \
    const char*: "%s", \
    unsigned char*: "%s", \
    /* Integer types */ \
    short: "%hi ", \
    unsigned short: "%hu ", \
    int: "%i ", \
    unsigned int: "%u ", \
    long: "%ld ", \
    unsigned long: "%lu ", \
    long long: "%lld ", \
    unsigned long long: "%llu ", \
    /* Character types */ \
    char: "%c ", \
    unsigned char: "%c ", \
    /* Float types */ \
    float: "%g ", \
    double: "%g ", \
    long double: "%Lg ", \
    /* Boolean */ \
    bool: "%d ", \
    /* Pointer types */ \
    void*: "%p ", \
    int*: "%p ", \
    char**: "%p ", \
    void**: "%p ")

#define PRINT1(A) printf(FORMAT(A), A)
#define PRINT2(A, ...) printf(FORMAT(A), A), PRINT1(__VA_ARGS__)
#define PRINT3(A, ...) printf(FORMAT(A), A), PRINT2(__VA_ARGS__)
#define PRINT4(A, ...) printf(FORMAT(A), A), PRINT3(__VA_ARGS__)
#define PRINT5(A, ...) printf(FORMAT(A), A), PRINT4(__VA_ARGS__)
#define PRINT6(A, ...) printf(FORMAT(A), A), PRINT5(__VA_ARGS__)
#define PRINT7(A, ...) printf(FORMAT(A), A), PRINT6(__VA_ARGS__)
#define PRINT8(A, ...) printf(FORMAT(A), A), PRINT7(__VA_ARGS__)
#define PRINT9(A, ...) printf(FORMAT(A), A), PRINT8(__VA_ARGS__)
#define PRINT10(A, ...) printf(FORMAT(A), A), PRINT9(__VA_ARGS__)
#define PRINT11(A, ...) printf(FORMAT(A), A), PRINT10(__VA_ARGS__)
#define PRINT12(A, ...) printf(FORMAT(A), A), PRINT11(__VA_ARGS__)
#define PRINT13(A, ...) printf(FORMAT(A), A), PRINT12(__VA_ARGS__)
#define PRINT14(A, ...) printf(FORMAT(A), A), PRINT13(__VA_ARGS__)
#define PRINT15(A, ...) printf(FORMAT(A), A), PRINT14(__VA_ARGS__)
#define PRINT16(A, ...) printf(FORMAT(A), A), PRINT15(__VA_ARGS__)
#define PRINT17(A, ...) printf(FORMAT(A), A), PRINT16(__VA_ARGS__)
#define PRINT18(A, ...) printf(FORMAT(A), A), PRINT17(__VA_ARGS__)
#define PRINT19(A, ...) printf(FORMAT(A), A), PRINT18(__VA_ARGS__)
#define PRINT20(A, ...) printf(FORMAT(A), A), PRINT19(__VA_ARGS__)
#define PRINT21(A, ...) printf(FORMAT(A), A), PRINT20(__VA_ARGS__)
#define PRINT22(A, ...) printf(FORMAT(A), A), PRINT21(__VA_ARGS__)
#define PRINT23(A, ...) printf(FORMAT(A), A), PRINT22(__VA_ARGS__)
#define PRINT24(A, ...) printf(FORMAT(A), A), PRINT23(__VA_ARGS__)
#define PRINT25(A, ...) printf(FORMAT(A), A), PRINT24(__VA_ARGS__)
#define PRINT26(A, ...) printf(FORMAT(A), A), PRINT25(__VA_ARGS__)
#define PRINT27(A, ...) printf(FORMAT(A), A), PRINT26(__VA_ARGS__)
#define PRINT28(A, ...) printf(FORMAT(A), A), PRINT27(__VA_ARGS__)
#define PRINT29(A, ...) printf(FORMAT(A), A), PRINT28(__VA_ARGS__)
#define PRINT30(A, ...) printf(FORMAT(A), A), PRINT29(__VA_ARGS__)
#define PRINT31(A, ...) printf(FORMAT(A), A), PRINT30(__VA_ARGS__)
#define PRINT32(A, ...) printf(FORMAT(A), A), PRINT31(__VA_ARGS__)

// Extended COUNT macro to support 32 arguments
#define COUNT(...) \
    AMOUNT(__VA_ARGS__, \
    32, 31, 30, 29, 28, 27, 26, 25, 24, 23, 22, 21, 20, \
    19, 18, 17, 16, 15, 14, 13, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1)

// Extended AMOUNT macro
#define AMOUNT( \
    A1, A2, A3, A4, A5, A6, A7, A8, A9, A10, A11, A12, A13, A14, A15, A16, \
    A17, A18, A19, A20, A21, A22, A23, A24, A25, A26, A27, A28, A29, A30, \
    A31, A32, N, ...) N

#define INDIRECTION(N) STRINGIFY(N)
#define STRINGIFY(N) PRINT ## N

#define print(...) INDIRECTION(COUNT(__VA_ARGS__))(__VA_ARGS__)

#endif
