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
a. `"%d" == " %d"`, `scanf` skips whitespaces when matching decimal integers.
b. `"%d-%d-%d" != "%d -%d -%d"`, the former will match exactly `-` with no whitespaces before the character, the latter will optionally match/allow whitespaces before `-`.
c. `"%f" != "%f "`, the former will just match for a float while the latter will wait for another non-blank character before returning after matching the float. (the program "hangs" after entering the float)
d. `"%f,%f" == %f, %f`, `scanf` skips whitespaces when matching floats.