# [Mod Equality](https://www.codechef.com/COOK131B/problems/MODEQUAL)

You are given N non-negative integers A<sub>1</sub>,A<sub>2</sub>,…,A<sub>N</sub>. You are allowed to perform following operation any number of times:

-   Choose any valid index i (1 ≤ i ≤ N) and a positive integer M>0 and replace A<sub>i</sub>modM with A<sub>i</sub>modM. That is, replace A<sub>i</sub>modM with its remainder when divided by M, which is a value between 0 and M−1, inclusive.
-   M does not need to be same between different operations.

Find the minimum number of operations to make all the array elements **equal**.

**Note:** Since the input and output are large, prefer using fast input-output methods.

## Input Format

-   The first line contains an integer T - the number of test cases. Then T test cases follow.
-   The first line of each test case contains an integer N - the size of array.
-   The second line contains N integers A<sub>1</sub>,A<sub>2</sub>,…,A<sub>N</sub> - the elements of the array.

## Output Format

For each test, print one line containing an integer which denotes minimum number of operations performed to make all the elements equal.

## Constraints

-   1 ≤ T ≤ 10<sup>4</sup>
-   1 ≤ N ≤ 10<sup>5</sup>
-   0 ≤ Ai ≤ 2⋅10<sup>9</sup>
-   It is guaranteed that the sum of N over all test cases does not exceed 10<sup>6</sup>.

## Sample Input 1

```
2
3
2 1 3
3
1 1 3
```

## Sample Output 1

```
3
1
```

## Explanation

In first test case, we can make all the elements equal by following operations:

-   Take i = 1 and M = 2 and do A<sub>1</sub>: = A<sub>1</sub>mod2 = 0.
-   Take i = 2 and M = 1 and do A<sub>2</sub>: = A<sub>2</sub>mod1 = 0.
-   Take i = 3 and M = 3 and do A<sub>3</sub>: = A<sub>3</sub>mod3 = 0.
    After these 3 operations we have all the elements equal to zero.

In second test case, we can perform following operation:

-   Choose i = 3 and M = 2 and do A3: = A3mod2 = 1.
    After this operation all the elements are 1.
