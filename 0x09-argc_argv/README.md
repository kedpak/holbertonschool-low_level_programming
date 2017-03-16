# argc and argv in C
## Synopsis
This project will go over the argc and argv agruments in the main function. 
## Description
argc and argv are the only arguments that are ever passed through the main function. It is utilized when there are arguments \
passed through the command line. argc represents the number of arguments that will be passed, while argv is the array \
of arguments. Typically argv is a one-dimensional array of strings.
## Examples
`int main(int argc, char *argv[])`\
The above is an example of how a main function with the argc/argv parameters would be declared.\
`./args Hello World!`\
In this example, we have a three input arguments, therfore the integer passed through the argc argument is 3.\
The two strings "Hello" and "World!" are a part of the array of pointers that is passed through the argv argument.
