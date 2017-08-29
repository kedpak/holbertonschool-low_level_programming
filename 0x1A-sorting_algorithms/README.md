# Sorting Algorithms and Big 0 Notation

## Synopsis
Practice problems for sorting algorithms in C.

This project utilizes four different sorting algorithms (bubble, insertion, selection, quick sort) and their Big 0 runtimes.

## Description
A sorting algorithm is an algorithm that sorts elements of a list to a speicific type of order. 

Big-O represents an equation that returns the runtime of an algorithm. 


## Tasks

### Bubble Sort

Write a function that sorts an array of integers in ascending order using the Bubble sort algorithm

* Prototype: void bubble_sort(int *array, size_t size);
* You're expected to print the array after each time you swap two elements (See example below)
Write in the file 0-O, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### Insertion Sort

Write a function that sorts a doubly linked list of integers in ascending order using the Insertion sort algorithm

* Prototype: void insertion_sort_list(listint_t **list);
* You are not allowed to modify the integer n of a node. You have to swap the nodes themselves.
* You're expected to print the list after each time you swap two elements (See example below)
Write in the file 1-O, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### Selection Sort

Write a function that sorts an array of integers in ascending order using the Selection sort algorithm

* Prototype: void selection_sort(int *array, size_t size);
* You're expected to print the array after each time you swap two elements (See example below)
Write in the file 2-O, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case

### Quick Sort

Write a function that sorts an array of integers in ascending order using the Quick sort algorithm

* Prototype: void quick_sort(int *array, size_t size);
* You must implement the Lomuto partition scheme.
* The pivot should always be the last element of the partition being sorted.
* You're expected to print the array after each time you swap two elements (See example below)
Write in the file 3-O, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

* in the best case
* in the average case
* in the worst case