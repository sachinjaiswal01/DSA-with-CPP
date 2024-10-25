# Quic Sort
Quick sort is a divide and conquer algorithm in which we choose a pivot point and partition the array into two parts i.e, left and right.
The left part contains the numbers smaller than the pivot element and the right part contains the numbers larger than the pivot element.
Then we recursively sort the left and right parts of the array.

## Question Links: 
Quick Sort: https://bit.ly/3qZ6LEC

## in-place sorting technique ?
Yes,
This means it sorts the array by modifying the input data without requiring additional significant memory, except for a small amount of stack space for recursive calls. Quick Sort achieves this by partitioning the array around a pivot and recursively sorting the subarrays.
#### that's why qucki sort preferd over merge sort in array.

## Stable ?
No,
Stability in sorting means that if two elements have equal keys, their relative 
### order is preserved
after sorting.
In Quick Sort, elements with the same value might be swapped across the pivot during partitioning, changing their original order.


# Time complexity
Avg - O(nlogn)
Best - O(nlogn)
worst - o(n^2)

# Space complexity
o(n)