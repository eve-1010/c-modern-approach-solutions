#### Question 1
See [01](./01_hello_world.c)

#### Question 2
**Directives**:
`#include <stdio.h>`

**Statements**:
3 printf calls  
`return 0;`

**Output**:
```
Parkinson's Law:
Works expands so as to fill the time
available for its completion.
```
#### Question 3
See [03](./03_dweight.c)

#### Question 4
See [04](./04_no_init.c)

#### Question 5
`100_bottles` is not a legal identifier because it begins with a digit.

#### Question 6
Why is it not a good idea for an identifier to contain more than one adjacent underscore? (like `current__balance`)  
It confuses the eyes. It makes it hard to tell exactly how many underscores are there in an identifier. This might lead to inconsistencies when refering to this identifier throughout the program (eg `current_balance`, `current___balance`).

#### Question 7
Keywords in C:
`for` and `while`

#### Question 8
How many tokens are there in this statement `answer=(3*q-p*p)/3;`

```
1. answer
2. =
3. (
4. 3
5. *
6. q
7. -
8. p
9. *
10. p
11. )
12. /
13. 3
14. ;
```

14 tokens

#### Question 9
`answer = (3 * q - p * p) / 3;`

#### Question 10
See [10](./10_obfuscated_dweight.c)