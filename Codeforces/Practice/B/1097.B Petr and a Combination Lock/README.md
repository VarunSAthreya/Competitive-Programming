# [1097.B Petr and a Combination Lock](https://codeforces.com/problemset/problem/1097/B)

-   time limit per test: 1 second
-   memory limit per test: 256 megabytes
-   input: standard input
-   output: standard output

Petr has just bought a new car. He's just arrived at the most known Petersburg's petrol station to refuel it when he suddenly discovered that the petrol tank is secured with a combination lock! The lock has a scale of 360 degrees and a pointer which initially points at zero:

![1](https://espresso.codeforces.com/13b9223256038b68e54be700f46943f507ee6484.png)

Petr called his car dealer, who instructed him to rotate the lock's wheel exactly n times. The i-th rotation should be ai degrees, either clockwise or counterclockwise, and after all n rotations the pointer should again point at zero.

This confused Petr a little bit as he isn't sure which rotations should be done clockwise and which should be done counterclockwise. As there are many possible ways of rotating the lock, help him and find out whether there exists at least one, such that after all n rotations the pointer will point at zero again.

## Input

The first line contains one integer n (1 ≤ n ≤ 15) — the number of rotations.

Each of the following n lines contains one integer ai (1 ≤ a<sub>i</sub> ≤ 180) — the angle of the i-th rotation in degrees.

## Output

If it is possible to do all the rotations so that the pointer will point at zero after all of them are performed, print a single word "YES". Otherwise, print "NO". Petr will probably buy a new car in this case.

You can print each letter in any case (upper or lower).

## Examples

**Input**

```
3
10
20
30
```

**Output**

```
YES
```

**Input**

```
3
10
10
10
```

**Output**

```
NO
```

**Input**

```
3
120
120
120
```

**Output**

```
YES
```
