# C - Search Algorithms

## Description

* What is a search algorithm
* What is a linear search
* What is a binary search
* What is the best search algorithm to use depending on your needs

## Tasks

### 0. Linear search

Write a function that searches for a value in an array of integers using the Linear search algorithm

* Prototype : int linear_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the first index where value is located
* If value is not present in array or if array is NULL, your function must return -1
* Every time you compare a value in the array to the value you are searching, you have to print this value (see example below)

### 1. Binary search 

Write a function that searches for a value in a sorted array of integers using the Binary search algorithm

* Prototype : int binary_search(int *array, size_t size, int value);
* Where array is a pointer to the first element of the array to search in
* size is the number of elements in array
* And value is the value to search for
* Your function must return the index where value is located
* You can assume that array will be sorted in ascending order
* You can assume that value won't appear more than once in array
* If value is not present in array or if array is NULL, your function must return -1
* Every time you split the array, you have to print the new array (or subarray) you're searching in (See example)