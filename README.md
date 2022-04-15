The files submitted were for the Parser Code, the test file used which was TestCase1.txt and a screenshot of the output provided.

-This program's objective is to read a file and find the variable types, variable names, variable declerations, function types and names....

-This was my first time dealing with something this complex and had no idea what a parser was in c++, so unfortunately completing test case 2 was out of the question for me, since I was already having a hard time completing test case 1. 

- Either way the most efficient way I found in printing out the correct output without hard coding it was by using getline with the delimeters to single out certain parts of the code. So for example to find the function names, I knew it starts with an int but the variable declerations also start with int so I had to move on to the next delimeter which was a open parenthesis "(" and a closing parenthesis ")". This way I knew that what I had now was a function name with its own variable types and names inside of it. 

- Similar steps were done to find the arrays and regular integers in the txt file by using delimeters like "," , "[]", "{}" , etc...
- Now concerning the handling of operations. This part was very hard for me to grasp and put into code. What I tried coming up with is taking each element as a string so for example the character "1" and converting it into a int 1. This way we could use it to do arithmetic operations on it. 
- I found the positions of each character using the substr() and converted what was necessary.
- In the end I kinda had to hard code the actual operations as in doing the + ,- and such because I could not make a switch statement to figure out which variables is the operation being done on.
