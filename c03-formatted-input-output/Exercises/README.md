#### Question 1
```c
printf("%6d,%4d", 86, 1040);
//    86,1040
printf("%12.5e", 30.253);
//  3.0253e+01
printf("%.4f", 83.162);
//83.1620
printf("%-6.2g", .0000009979);
    //1e-06  
```

#### Question 2
See [02](./02_floats.c)

#### Question 3
- `"%d" == " %d"`, `scanf` skips whitespaces when matching decimal integers.
- `"%d-%d-%d" != "%d -%d -%d"`, the former will match exactly `-` with no whitespaces before the character, the latter will optionally match/allow whitespaces before `-`.
- `"%f" != "%f "`, the former will just match for a float while the latter will wait for another non-blank character before returning after matching the float. (the program "hangs" after entering the float)
- `"%f,%f" == %f, %f`, `scanf` skips whitespaces when matching floats.

#### Question 4
```c
scanf("%d%f%d", &i, &x, &j);

/* Input:
 * 10.3 5 6
 */

/* Result:
 * i == 10
 * x == 0.3
 * j == 5
 */
```

#### Question 5
```c
scanf("%f%d%f", &x, &i, &y);

/* Input:
 * 12.3 45.6 789
 */

/* Result:
 * x == 12.3
 * i == 45
 * y == 0.6
 */
```

#### Question 6
Change these two lines
```c
scanf("%d/%d", &num1, &denom1);
scanf("%d/%d", &num2, &denom2);
```
into
```c
scanf("%d /%d", &num1, &denom1);
scanf("%d /%d", &num2, &denom2);
```
Add a space before the `/` character to match zero or more spaces.