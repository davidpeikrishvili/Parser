//David Peikrishvili
//This program parses the given source code from a txt format and computes it.
//Retunrs variable names, values, and declerations.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string tokens,tags,delimeter,tags2,ending,tags3;
string tokens2,token2_tag;
string idk;
//Start of Function FunctionName()
void FunctionName()
{
ifstream in_file("TestCase1.txt"); //Reading from txt
string db_line;
getline(in_file,db_line);
stringstream ss(db_line);
while(getline(ss,tokens,' '))  //Splitting till the delimeter reaches the character " space".
{
    while(getline(ss,delimeter,'(')) //Splitting till the delimeter reaches the character "(".
    {
        while(getline(ss,ending,')')) //Splitting till the delimeter reaches the character ")".
        {
        //if the first position is an "i" then we know its a decleration of the function name.
        // The integer variables also start with int, but since we already found out the fact that we have it in between ( and ) we know its not an initialized variable.
        if(ending[0] == 'i') 
         {
        tags = tokens.substr(0); //Removing opening bracket or removing the first token.
        tags2 = delimeter.substr(0);
        tags3 = ending.substr(0);
        std::cout<<"Function Name is : "<<tags2<<endl;
        std::cout<<"Function return type is : "<<tags<<endl;
        std::cout<<"Function variable names are: "<<tags3<<endl;
         }
        }//End of while
    }//End of while
}//End of while
in_file.close();
} //End of FunctionName Function

//This function finds the values of both of the arrays given.
void DeclaredArrays()
{
ifstream myFileStream("TestCase1.txt"); //Reading from txt
string array_pos, array_name, line;
    while (getline(myFileStream,line))
    {
        stringstream ss(line); //stores in line
        while(getline(ss,array_name,'{')) //Splitting till the delimeter reaches the character "{".
        {
        if(getline(ss,array_pos,'}')) //Splitting till the delimeter reaches the character "}".
        {
            //Since the program finds both of the { } it knows its an array so it prints the values listed.
            std::cout<<"Declared Values for Array :" <<array_pos<<endl;
        }
        }
        
    } //End while loop
}//End of DeclaredArrays() Function.

// This functions finds the initial values of each integer in the source code.
// Prints out their names and values.
void InitialValues()
{
ifstream myFileStream("TestCase1.txt"); //Reading from txt
string var_name, line,var_name2;
   while(getline(myFileStream,line))
    {
    stringstream ss(line); //stores in line
    int firstpos = line.find('=');
    int secondpos = line.find(',');
    if(firstpos >= 1 && secondpos >= 1)
    {
     while(getline(ss,var_name,' ')) //Splitting till the delimeter reaches the character "space".
     {
         while(getline(ss,var_name2,',')) //Splitting till the delimeter reaches the character ","
        {
                if(line.find('[') != line.npos) // Since I'm not trying to prase arrays in this function, ignore all lines wiht the array declaration.
                {
                ss.ignore(1,'\n');
                }
                else //If it's a regular decleration of an int then just proceed.
                {
                tags = var_name2[0]; //Takes the first value which is the variable name.
                tags2 =var_name2[2]; //Takes the second value which is the variable value.
                std::cout<<"Variable Name: " << tags<<", Initial Value:  "<<tags2<<endl;
                }       
        } //End while loop
     } //End while loop
    } //End if loop
    }//End while loop
}// End of InitialValues() Function.

//In this Function the program should convert the strings/chars into integers.
//With those integers we can then preform certain operations.
void Arithmetic()
{
    //Declaring variables needed for this.
string input,tags3,tags4,tags5,tags6,tags7,tags8;
string input_2,tags_1,tags_2,tags_3,tags_4,tags_5,tags_6;
int a,b,c,d,f,g;
int eq;
ifstream myFileStream("TestCase1.txt"); //Reading from txt
string var_name, line,var_name2;
   while(getline(myFileStream,line))
    {
    stringstream ss(line); //stores in line
    int firstpos = line.find('=');
    int secondpos = line.find(',');
    if(firstpos >= 1 && secondpos >= 1)
    {
     while(getline(ss,var_name,' ')) //Splitting till the delimeter reaches the character "space".
     {
         while(getline(ss,var_name2,',')) //Splitting till the delimeter reaches the character ","
        {
                if(line.find('[') != line.npos) // Since I'm not trying to prase arrays in this function, ignore all lines wiht the array declaration.
                {
                ss.ignore(1,'\n');
                }
                else //If it's a regular decleration of an int then just proceed.
                {
                tags = var_name2[0]; //Takes the first value which is the variable name.
                tags2 =var_name2[2]; //Takes the second value which is the variable value.
                stringstream ll(tags);
                stringstream xx(tags2);
                //For Variable names
                while(getline(ll,input,'\n'))
                {
                    if(input[0] == 'a')
                    {
                        tags3 = input.substr(0); //Finding the location of only "a"
                    }
                    if(input[0] =='b')
                    {
                        tags4 = input.substr(0,1); //Finding the location of only "b"
                    }
                    if(input[0] == 'c')
                    {
                        tags5 = input.substr(0,2); //Finding the location of only "c"
                    }
                    if(input[0] == 'd')
                    {
                        tags6 = input.substr(0,3); //Finding the location of only "d"
                    }
                    if(input[0] == 'f')
                    {
                        tags7 = input.substr(0,4); //Finding the location of only "f"
                    }
                    if(input[0] == 'g')
                    {
                        tags8 = input.substr(0,5);//Finding the location of only "g"
                    }
                }
                //For Integers
                while(getline(xx,input_2,'\n'))
                {
                    
                    if(input_2[0] == '1')
                    {
                        tags_1 = input_2.substr(0); //Finding the location of only "1"
                        a = std::stoi(tags_1); //Convert string into a integer.
                      
                    }
                    if(input_2[0] == '2')
                    {
                        tags_2 = input_2.substr(0,1); //Finding the location of only "2"
                        b = std::stoi(tags_2); //Convert string into a integer.
                        
                    }
                    if(input_2[0] == '3')
                    {
                        tags_3 = input_2.substr(0,2); //Finding the location of only "3"
                        c = std::stoi(tags_3); //Convert string into a integer.
                        break;
                    }
                    if(input_2[0] == '4')
                    {
                        tags_4 = input_2.substr(0,3);//Finding the location of only "4"
                        d = std::stoi(tags_4);
                        break;
                    
                    }
                    if(input_2[0] == '8')
                    {
                        tags_5 = input_2.substr(0,4); //Finding the location of only "8"
                        f = std::stoi(tags_5); //Convert string into a integer.
                        break;
                    }
                    if(input_2[0] == '9')
                    {
                        tags_6 = input_2.substr(0,5); //Finding the location of only "9"
                        g = std::stoi(tags_6); //Convert string into a integer.
                        break;
                    }   
                   
                }
                
                }       
        } //End while loop
     } //End while loop
    } //End if loop
    }//End while loop
    //Preform the operations.
   std::cout<<"Value of a after the arithmetic operation is : "<<c+b<<endl;
   std::cout<<"Value of d after the arithmetic operation is : "<<a*g<<endl;
   std::cout<<"Value of f after the arithmetic opeartion is : "<<d-a<<endl; 
   std::cout<<"Value of i after the arithmetic opeartion is : "<< f+a<<endl;
}// End of InitialValues() Function.














// Main to test code
int main()
{
    FunctionName();
    DeclaredArrays();
    InitialValues();
    Arithmetic();
}


