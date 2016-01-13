# eecs230 lab2

We will go through a demonstration/review of the concepts you learned this past week.
Are there any quick questions about homework or lecture material?

--------------
Review
--------------

What/Why do you think will happen when we try these statements?

1. int double = 0;
2. double char = 2.5;
3. char mychar = ‘d’; mychar += 12;
4. unsigned int a = -1;
5. int pi = 3.14;
6. short num = 1e9;
7. string mystring = 5;

--------------
Exercises
--------------

Work on these exercises in groups of 2-3, then review/summarize as a class.

When approaching the solutions to these problems, think about what your program needs:
  - What is the problem you are solving?
  - What inputs and outputs are needed?
  - What data operations will you be performing?
  - What decisions are made in your function?

1. Write a program to test an integer value to determine if it is odd or even.
Output should be something like, “The value 4 is an even number.”

2. Write out a program that takes an operation followed by two operands and
outputs the result. For example: “+ 10 5.5” and “* 2 3”. Read the operation into a
string called “operation” and use an if-statement to figure out which operation the
user wants, and return the result. Read the operands into variables of type double.
Implement this for +, -, *, /.

3. Declare a enumerator-based variable named "friend_gender" and initialize its value to an enum state.
Also declare a string variable named "friend_name" and initialize it.
Prompt the user to enter a friend's name and an "m" if the friend is male
and an "f" if the friend is female.
Assign the value entered to the enum variable friend_gender.
Then use two if-statements to write the following:
  - If the friend is male, write "If you see friend_name please ask him to call me."
  - If the friend is female, write "If you see friend_name please ask her to call me."

4. Now, prompt the user to enter the age of the recipient and assign it to an int
variable age. Have your program write "I hear you just had a birthday and you are age
years old." If age is 0 or less or 110 or more, write an error "you're kidding!"

5. Now, make the following additions:
  - If the friend is under 12, write "Next year you will be age+1."
  - If the friend is 17, write "Next year you will be able to vote."
  - If the friend is over 70, write "I hope you are enjoying retirement."

6. Write a program that converts spelled-out numbers such as “zero” and “two” into digits,
such as 0 and 2. Do this for values 0-4. Write out, “not a number I know” if the user
enters something that doesn’t correspond to a value.

7. Write a program that prompts the user to enter four integer values, and then outputs
the values in numerical sequence separated by commas.
So, if the user enters the values “10 4 6”, the output should be “4, 6, 10”.
If two values are the same, they should just be ordered together.
So, the input “4 5 4” should give “4, 4, 5”.

8. Do the prior exercise, but with three string values.
So, if the user enters the values “Clippers, Suns, Bulls”,
the output should be “Bulls, Clippers, Suns.”
