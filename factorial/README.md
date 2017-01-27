#Factorial Calculator

###Description
This program calculates the factorial value of a given number.
(The input must be a positive integer)

###Usage
1. Compile the factorial.c program.
```
gcc factorial.c -o factorial
```

2. Run the program by typing following command into a command line:
```
factorial
```

3. Enter a number after the following prompt:
```
Enter a number (enter quit to quit):
```
(Enter only a positive number, without spaces)

4. Enter `quit` to quit the program

###Output
The output will be shown as:
```
n = n * (n - 1) * (n - 2) ... * 1 = result
```

If the entered number is 5, the output will be:
```
5 = 5 * 4 * 3 * 2 * 1 = 120
```

###Errors
Entering a negative number:
```
Invalid Input: Please enter a positive integer
```

Entering a non-integer value:
```
Invalid Input: Please enter an integer
```
