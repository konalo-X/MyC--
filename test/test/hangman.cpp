//
//  hangman.cpp
//  test
//
//  Created by XiongGuang on 16/9/2.
//  Copyright © 2016年 XiongGuang. All rights reserved.
//

#include <stdio.h>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <cctype>

using std::string;

const int NUM=26;
const string wordlist[NUM]={"apiary","beetle","cereal",
        "danger","ensign","florid","garage","health",
        "insult","jackal","keeper","loaner","manage",
        "nonce","onset","plaid","quilt","remote","stolid",
    "train","useful","valid","whence","xenon","yearn","zippy"};
int main()
{
    using std::cout;
    using std::cin;
    using std::tolower;
    using std::endl;
    std::srand(time(0));
    char play;
    cout<<"will you play a word game? <y/n> ";
    cin>>play;
    play=tolower(play);
    while (play=='y') {
        string target=wordlist[std::rand()%NUM];
        int length=target.length();
        string attempt=string(length,'-');
        string badchars;
        int guesses=6;
        cout<<"Guess my secret word.it has "<<length<<" letters,and you guess\n"
        <<"one letter at a time,you get "<<guesses<<" wrong guesses.\n";
        cout<<"your word: "<<attempt<<endl;
        
        while (guesses>0&&attempt!=target) {
            char letter;
            cout<<"Guess a letter: ";
            cin>>letter;
            
            //find() 如果找到就返回 int 位置数 找不到返回 npos
            if (badchars.find(letter)!=string::npos||attempt.find(letter)!=string::npos) {
                cout<<"you already guessed that ,try again.\n";
                continue;
            }
            int loc=target.find(letter);
            if (loc==string::npos) {
                cout<<"Oh ,bad guess! \n";
                --guesses;
                badchars+=letter;//add to string
            }
            else
            {
                cout<<"good guess!\n";
                attempt[loc]=letter;
                loc=target.find(letter,loc+1);
                while (loc!=string::npos) {
                    attempt[loc]=letter;
                    loc=target.find(letter,loc+1);
                }
            }
            cout<<"your word: "<<attempt<<endl;
            if (attempt!=target) {
                if (badchars.length()>0)
                    cout<<"bad choices: "<<badchars<<endl;
                    cout<<guesses<<"bad guesses left\n";
                
            }
            
        }
        if (guesses>0) {
            cout<<"That's right! \n";
        }
        else
            cout<<"Sorry ,the word is "<<target<<".\n";
        cout<<"Will your play another> <y/n> ";
        cin>>play;
        play=tolower(play);
    }
    cout<<"Bye!\n";
}