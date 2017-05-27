# Variadic Functions in C
## Sypnosis
In this project, the variadic function will be implemented to showcase how to utilize them. 
## Description
Variadic functions take a variable number of arguments. This means that the intitial amount of arguments that are passed through the function are unknown. The amount can fluctuate and is therefore flexible. The printf function is a great example that uses a variable number of arguments, since the amount of arguments passed through a printf can be different on each occasion. The variadic functions are defined inside the header <stdarg.h>.
## Examples
There are four function macros that are used for variadic functions. 

`va_start`
va_start enables access to variad function arguments

`va_arg`
va_arg accesses the next variadic function argument

`va_copy`
makes a copy of the variadic function arguments

`va_end`
va_end ends traversal of variadic function arguments

There is one type called va_list that holds the information needed by the macros stated above
`va_list`