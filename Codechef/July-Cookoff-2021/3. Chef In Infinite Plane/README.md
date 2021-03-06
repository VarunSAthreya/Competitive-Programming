# [Chef In Infinite Plane](https://www.codechef.com/COOK131C/problems/CHFPLN)

Chef has an integer sequence A<sub>1</sub>,A<sub>2</sub>,…,A<sub>N</sub>. For each index i (1 ≤ i ≤ N), Chef needs to divide Ai into two positive integers x and y such that x+y=Ai, then place this as a point (x,y) in the infinite 2-dimensional coordinate plane. Help Chef to find the maximum number of distinct points that can be put in the plane, if he optimally splits the values Ai. Note that Chef can only perform one split for each index.

**Note:** Please use fast input/output methods for this problem.

## Input Format

-   The first line contains a single integer T - the number of test cases. The description of T test cases follows.
-   The first line of each test case contains a single integer N.
-   The second line contains N integers A<sub>1</sub>,A<sub>2</sub>,…,A<sub>N</sub>.

## Output Format

For each test case, print a single line containing one integer — the maximum number of distinct points there can be in the infinite plane.

## Constraints

-   1 ≤ T ≤ 10
-   1 ≤ N ≤ 2⋅10<sup>5</sup>
-   2 ≤ Ai ≤ 10<sup>5</sup>

## Sample Input 1

```
2
6
2 2 4 4 2 6
2
16 8
```

## Sample Output 1

```
4
2
```

## Explanation

**Test Case 1:** Chef can divide A1 as (1,1), A2 as (1,1), A3 as (1,3), A4 as (2,2), A5 as (1,1), A6 as (2,4). Ignoring duplicates, there are 4 distinct points, which is the maximum possible.

**Test Case 2:** Chef can divide A1 as (8,8), A2 as (4,4).
