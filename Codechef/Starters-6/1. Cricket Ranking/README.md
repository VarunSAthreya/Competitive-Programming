# [Cricket Ranking](https://www.codechef.com/START6C/problems/CRICRANK)

In a season, each player has three statistics: runs, wickets, and catches. Given the season stats of two players A and B, denoted by R, W, and C respectively, the person who is better than the other in the most statistics is regarded as the better overall player. Tell who is better amongst A and B. It is known that in each statistic, the players have different values.

## Input Format

-   The first line contains an integer T, the number of test cases. Then the test cases follow.
-   Each test case contains two lines of input.
-   The first line contains three integers R<sub>1</sub>, W<sub>1</sub>, C<sub>1</sub>, the stats for player A.
-   The second line contains three integers R<sub>2</sub>, W<sub>2</sub>, C<sub>2</sub>, the stats for player B.

## Output Format

For each test case, output in a single line "A" (without quotes) if player A is better than player B and "B" (without quotes) otherwise.

## Constraints

-   1 ≤ T ≤ 1000
-   0 ≤ R<sub>1</sub>,R<sub>2</sub> ≤ 500
-   0 ≤ W<sub>1</sub>,W<sub>2</sub> ≤ 20
-   0 ≤ C<sub>1</sub>,C<sub>2</sub> ≤ 20
-   R<sub>1</sub> ≠ R<sub>2</sub>
-   W<sub>1</sub> ≠ W<sub>2</sub>
-   C<sub>1</sub> ≠ C<sub>2</sub>

## Sample Input 1

```
3
0 1 2
2 3 4
10 10 10
8 8 8
10 0 10
0 10 0
```

## Sample Output 1

```
B
A
A
```

## Explanation

**Test Case 1:** Player B is better than A in all 3 fields.

**Test Case 2:** Player A is better than B in all 3 fields.

**Test Case 3:** Player A is better than B in runs scored and number of catches.
