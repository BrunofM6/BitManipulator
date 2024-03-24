# BitManipulator
## Description
Small C program that manipulates bits through masks and interacts with a user given byte, and is capable of doing all the most important bit operations to it. It takes in three inputs, the action, an uint8_t and the index to operate on. Possible actions:
- h ->test if a certain bit is high;
- l ->test if a certain bit is low;
- r ->reset to 0 on a bit;
- s ->set to 1 on a bit;
- t ->toggle a bit. (invert)

### Note on how to run:
`./main <operation> <uint8_t> <idx> `

## C language:
We get two inputs into our main function:
- argc ->number of arguments passed to our program;
- argv ->array of pointers to characters, contains each argument, always initially treated as strings.
argv[0] is always program name that is executed on command line, so argc is minimum 1.
Also, we transform the second input into an int by dereferencing the second pointer and using stoi (string to integer).