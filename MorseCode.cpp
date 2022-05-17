/*FACULTY OF COMPUTERS AND ARTIFICIAL INTELLIGENCE, CAIRO UNIVERSITY
Author :Abdelrhman sayed ali
Program Name: Morse code.c plus plus*/
#include <iostream>
#include <string>
#include <cstring>
#include <map>
#include <algorithm>
#include <sstream>//istringstream ...>>> input string stream
using namespace std;


void Decyrption()
{ 
    std ::map<char, string>cipher
    {
        {'a', ".-"},
        {'b', "-..."},
        {'c', "-.-."},
        {'d', "-.."},
        {'e', "."},
        {'f', "..-."},
        {'g', "--."},
        {'h', "...."},
        {'i', ".."},
        {'j', ".---"},
        {'k', "-.-"},
        {'l', ".-.."},
        {'m', "--"},
        {'n', "-."},
        {'o', "---"},
        {'p', ".--."},
        {'q', "--.-"},
        {'r', ".-."},
        {'s', "..."},
        {'t', "-"},
        {'u', "..-"},
        {'v', "...-"},
        {'w', ".--"},
        {'x', "-..-"},
        {'y', "-.--"},
        {'z', "--.."},
    };
    string EncyrptedText, token;
    istringstream scin("");
     
    cout << "\n\nPlease enter the code from (map!) to decyrpted it : " << endl;
    getline(cin, EncyrptedText);
    

    scin.str(EncyrptedText);
    scin >> token;
   
    while (scin)
    {
        for(char letter = 97; letter < 123; letter++)
            {
                if(cipher[letter] == token)
                {
                    cout << letter ;
                }


            
            
            }
            scin >> token;
    }

} 

void Encyrption()
{
    string Text;
    
    std ::map<char, string>cipher
    {
        {'a', ".-"},
        {'b', "-..."},
        {'c', "-.-."},
        {'d', "-.."},
        {'e', "."},
        {'f', "..-."},
        {'g', "--."},
        {'h', "...."},
        {'i', ".."},
        {'j', ".---"},
        {'k', "-.-"},
        {'l', ".-.."},
        {'m', "--"},
        {'n', "-."},
        {'o', "---"},
        {'p', ".--."},
        {'q', "--.-"},
        {'r', ".-."},
        {'s', "..."},
        {'t', "-"},
        {'u', "..-"},
        {'v', "...-"},
        {'w', ".--"},
        {'x', "-..-"},
        {'y', "-.--"},
        {'z', "--.."},
        {'@', "....."},
    };

    cout << "\n\nPlease enter the text to cipher it : " << endl;
    
    getline(cin, Text);
      

    
    transform(Text.begin(),Text.end(),Text.begin(),::tolower);
    cout << Text << endl;
    cout << "\n\nThe Encyrption Text is : \n" ;
    for(char letter: Text)
    {
        cout << cipher[letter] << " ";

    }


}




int main()
{
    system("cls");
    cout<<"                          //>>>>>Welcome, User in This Morse Code<<<<<<//"<<endl;
 
    //Loop to check the choice of user
    while (true)
        {
            int choice  ;
           
            cout<<endl<<"\n       **LIST OF CHOICES**";
            cout<<"\n1)Encryption text\n"<<"2)Decryption text\n"<<"3)Exit\n";
             if (!cin)
                {
                    cin.clear();
                    cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
            cout<<"\n\nPlease, Enter the choice of list :"<<endl;
            cin>>choice ;
            cin.ignore();
            if (choice == 1)
                {
                    system("cls");//To clean screen
                    Encyrption();
                     cout <<"\n\n---------------------------------------------------------------------------\n";
                     cout << "***************************************************************************\n";
                    continue;

                }
            else if (choice == 2)
                {
                    system("cls");
                    Decyrption();
                     cout <<"\n---------------------------------------------------------------------------\n";
                     cout << "***************************************************************************\n";
                    continue;

                }
            else if(choice == 3)
                {
                    cout<<"\n          ****Thank you to use this program****\n"<<endl;
                    break;

                }
            else
                {
                    system("cls");
                    cout<<"\n          **Please, Enter from list**"<<endl;
                    continue;
                }



        }
    
}






