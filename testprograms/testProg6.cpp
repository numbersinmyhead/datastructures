#include <algorithm>
#include <stdio.h>
#include <string.h>
#include <string>

using namespace std;
using namespace string;

iterator contains(char c, string s1) {
    iterator i = find(s1.begin(), s1.end(), c);
    if (i != s1.end())
        return i;
    else
        return NULL;
}



int anagram ( const string s1, const string s2) {
    for( int i = 0; i < s1.size(); i++) {
        iterator i = s2.find(s1[i]);
        if (i != s2.end())
            s2.erase(i);
        else
            return false;
    }
    return s2.size()==0;
}

int main (int argc, char *argv[] ){
    printf("%d",anagram(argv[1],argv[2]));
}


