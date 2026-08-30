## Introduction to time complexity

Time complexity is a way to measure how long an algorithm takes to run as the amount of input data increases. Think of it as a method for figuring out how fast or slow an algorithm is.

There are multiple ways to measure time complexity of an algorithm:

    1.Best case
    2.Average case
    3.Worst case

 We use a special notation called `“Big O notation”` to talk about worst-case time complexity.

### Finding time complexity 

To find out time complexity of an algorithm, we look at the number of operations performed based on the input size.

Let's take a look at the below code:
```
a = 1
b = 2
print(a + b)

```
Thus, for the above example, we have time complexity as `O(1) + O(1) + O(1) = 3 * O(1)`

### Rule 1 - Ignore the constants
When calculating time complexity, we ignore the constant values because they don’t matter when the input size becomes large.

Thus `O(1), 5 * O(1), 8 * O(1)` are all `O(1)`

Why ignore constants in time complexity?

