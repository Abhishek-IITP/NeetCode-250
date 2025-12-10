class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
        int i =0;
        int j =0;
        while(i<word.length() &&  j< abbr.length()){
            char wordChar = word[i];
            char abbrChar = abbr[j];
            if(isdigit(abbrChar)){
                if(abbrChar== '0') return false;
                int curr =0;
                while(j<abbr.length()&& isdigit(abbr[j])){
                    curr = curr * 10 + (abbr[j] -'0');
                    j=j+1;
                }
                i= i+curr;

            }
            else{
                if(wordChar != abbrChar){
                    return false;
                }
                i++;
                j++;
            }
        }
        return i == word.length() && j == abbr.length();
    }
};