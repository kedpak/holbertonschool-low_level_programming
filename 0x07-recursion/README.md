# Recursion in C
## Synopsis
This project will go over the the usage of recursion in C, why recursion is useful, how it is utilized.
## Description
Recursion is repeating items in a similar fashion. A function in C can be recursive, which means that function is calling itself inside of the function. Recursive functions are useful for many circumstances such as calculating factorials and other mathematical problems. 
## Example
`int factorial(unsigned int num)
{
	if (num <= 1)
	{	
		return (1);
	}
	return num * factorial(num - 1);
}`

In the above example, we have a factorial function that calls itself in the return statement. Each instance of a call, the variable num is being multiplied by the return value of the factorial function minus one. This recursion will continue until num is equal to one. 
