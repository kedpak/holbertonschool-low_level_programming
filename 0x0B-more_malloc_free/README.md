# Malloc in C
## Synopsis
This project will go over the malloc function and how it is utilized in C
## Description
The malloc function allocates requested memory and returns a pointer to it. If the request fails it returns NULL. 
## Examples
k = malloc(sizeof(char) * 5);\
In this example, we are using the malloc function to allocate the size of bytes in char (whihc is 1), and multiplying\
it by 5. In total 5 bytes of memory will be allocated. It is set inside the variable k. 