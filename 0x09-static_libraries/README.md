# Static Library:

- What is a static library, how does it work, how to create one, and how to use it
- Basic usage of ar, ranlib, nm
## Creating Static Library: :computer:
### Commands :pen:
#### ar -t libmy.a
#### nm libmy.a 
## Task 2 
### Automated: :car:
- #!/bin/bash
- gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -c *.c
- ar -rc liball.a *.o
