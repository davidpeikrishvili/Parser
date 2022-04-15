The files submitted were for the Parser Code, the test file used which was TestCase1.txt and a screenshot of the output provided.

-This program's objective is to read a file and find the variable types, variable names, variable declerations, function types and names....

-This was my first time dealing with something this complex and had no idea what a parser was in c++, so unfortunately completing test case 2 was out of the question for me, since I was already having a hard time completing test case 1. 

- Either way the most efficient way I found in printing out the correct output without hard coding it was by using getline with the delimeters to single out certain parts of the code. So for example to find the function names, I knew it starts with an int but the variable declerations also start with int so I had to move on to the next delimeter which was a open parenthesis "(" and a closing parenthesis ")". This way I knew that what I had now was a function name with its own variable types and names inside of it. 

- Similar steps were done to find the arrays and regular integers in the txt file by using delimeters like "," , "[]", "{}" , etc...
- 
