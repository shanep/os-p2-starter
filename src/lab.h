/*
 * Update this header with the header provided by the project specification
*/
#ifndef LAB_H
#define LAB_H
#include <stdlib.h>
#include <stdbool.h>
#include <lab_export.h>

#ifdef __cplusplus
extern "C"
{
#endif
    /**
     * @brief Adds to numbers together
     *
     * @param a the first number
     * @param b the second number
     * @return the result
     */
    LAB_EXPORT int add(int a, int b);

    /**
     * @brief Entry point for the main function
     *
     * @param argc The argument count
     * @param argv The argument array
     * @return The exit code
     */
    LAB_EXPORT int go(int argc, char **argv);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
