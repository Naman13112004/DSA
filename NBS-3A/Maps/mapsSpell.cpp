#include <bits/stdc++.h>
using namespace std;

string spell_1_to_19(map<int, string> &spell, int n)
{
    spell[1] = "one";
    spell[2] = "two";
    spell[3] = "three";
    spell[4] = "four";
    spell[5] = "five";
    spell[6] = "six";
    spell[7] = "seven";
    spell[8] = "eight";
    spell[9] = "nine";
    spell[10] = "ten";
    spell[11] = "eleven";
    spell[12] = "twelve";
    spell[13] = "thirteen";
    spell[14] = "fourteen";
    spell[15] = "fifteen";
    spell[16] = "sixteen";
    spell[17] = "seventeen";
    spell[18] = "eighteen";
    spell[19] = "nineteen";

    return spell[n];
}

string spell_20_to_99(map<int, string> &spell, int n)
{
    spell[20] = "twenty";
    spell[30] = "thirty";
    spell[40] = "forty";
    spell[50] = "fifty";
    spell[60] = "sixty";
    spell[70] = "seventy";
    spell[80] = "eighty";
    spell[90] = "ninety";

    int n1 = (n/10)*10;
    int n2 = n-n1;

    return spell[n1] + " " + spell_1_to_19(spell, n2);
}

string spell_100_to_999(map<int, string> &spell, int n)
{
    spell[100] = "one hundred";
    spell[200] = "two hundred";
    spell[300] = "three hundred";
    spell[400] = "four hundred";
    spell[500] = "five hundred";
    spell[600] = "six hundred";
    spell[700] = "seven hundred";
    spell[800] = "eight hundred";
    spell[900] = "nine hundred";

    int n1 = (n/100)*100;
    int n2 = n-n1;

    return spell[n1] + " and " + spell_20_to_99(spell, n2);
}

string spell_1000_to_9999(map<int, string> &spell, int n)
{
    spell[1000] = "one thousand";
    spell[2000] = "two thousand";
    spell[3000] = "three thousand";
    spell[4000] = "four thousand";
    spell[5000] = "five thousand";
    spell[6000] = "six thousand";
    spell[7000] = "seven thousand";
    spell[8000] = "eight thousand";
    spell[9000] = "nine thousand";

    int n1 = (n/1000)*1000;
    int n2 = n-n1;

    return spell[n1] + " " + spell_100_to_999(spell, n2);
}

string spell_10000_to_99999(map<int, string> &spell, int n)
{
    int n1 = n/1000;
    int n2 = n-(n1*1000);
    if(n1 < 20){
        return spell_1_to_19(spell, n1) + " thousand " + spell_100_to_999(spell, n2);
    }
    else{
        return spell_20_to_99(spell, n1) + " thousand " + spell_100_to_999(spell, n2);
    }
}

string spell_100000_to_9999999(map<int, string> &spell, int n)
{
    int n1 = n/100000;
    int n2 = n-(n1*100000);
    if(n1 < 20){
        return spell_1_to_19(spell, n1) + " lakh " + spell_10000_to_99999(spell, n2);
    }
    else{
        return spell_20_to_99(spell, n1) + " lakh " + spell_10000_to_99999(spell, n2);
    }
}

string spell_10000000_to_999999999(map<int, string> &spell, int n)
{
    int n1 = n/10000000;
    int n2 = n-(n1*10000000);
    if(n1 < 20){
        return spell_1_to_19(spell, n1) + " crore " + spell_100000_to_9999999(spell, n2);
    }
    else{
        return spell_20_to_99(spell, n1) + " crore " + spell_100000_to_9999999(spell, n2);
    }
}


void create_map()
{
    map<int, string> spell;
    cout << spell_10000000_to_999999999(spell, 123);
}

int main()
{
    create_map();
    return 0;
}