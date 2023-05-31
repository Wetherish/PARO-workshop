
#include "../include/Letters_lib.hpp"
#include "string"

int Letters(std::string word)
{
    int score = 0;
    for(int i=0; word.length(); i++)
    {
        score += checkword(char(word[i]));
    }
}
int checkword(char letter) {
    int score = 0;
    if(letter == 'a' or letter == 'A' or letter == 'e' or letter == 'E' or letter == 'i' or letter ==  'I' or letter ==  'o' or letter ==  'O' or letter ==  'u' or letter == 'U' or letter == 'l' or letter == 'L'
       or letter == 'n' or letter ==  'N' or letter == 'r' or letter == 'R' or letter ==  's' or letter ==  'S' or letter == 't' or letter ==  'T')
    {
        score += 1;
    }

    if(letter == 'D' or letter == 'd' or letter == 'G' or letter == 'g'){
        score += 2;
    }

    if(letter == 'B' or letter == 'b' or letter == 'C' or letter == 'c' or letter == 'M' or letter == 'm' or letter == 'P' or letter == 'p'){
        score += 3;
    }

    if(letter == 'F' or letter == 'f' or letter == 'H' or letter == 'h' or letter == 'V' or letter == 'v' or letter == 'W' or letter == 'w' or letter == 'Y' or letter == 'y'){
        score += 4;
    }

    if(letter == 'K' or letter == 'k'){
        score += 5;
    }

    if(letter == 'J' or letter == 'j' or letter == 'X' or letter == 'x'){
        score += 8;
    }
    if(letter == 'q' or letter == 'Q' or letter == 'z' or letter == 'Z'){
        score += 10;
    }
    return score;
}


