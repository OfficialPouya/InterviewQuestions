/*
Write a function solution thanksgiving extreme as consisting of N characters returns the alphabetically smallest string they can be obtained by removing exactly one letter from S

Input: str = "abcda"  
Output: abca
One can remove 'd' to get "abca" which is 
the lexicographically smallest string possible. 
*/

string solution(string &S) {
    // write your code in C++14 (g++ 6.2.0)
    int length = S.length();
    string ret = "";
    for(int z=0; z<length-1; z++){
        if(S[z]>S[z+1]){
            for(int x = 0; x<length; x++){
                if (z!=x){ret += S[x];}
            }
            return ret;
        }
    }
    ret = S.substr(0.,length-1);
    return ret;
}
