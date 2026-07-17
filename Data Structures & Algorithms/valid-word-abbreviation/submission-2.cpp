class Solution {
public:
    bool validWordAbbreviation(string word, string abbr) {
            bool res = true;
            int i = 0;
            int j = 0;
            while(j < word.size() && i < abbr.size()){
                if(isalpha(abbr[i])){
                    if(abbr[i] != word[j]){
                        res = false;
                        break;
                    }
                    i++;
                    j++;
                }
                else if (isdigit(abbr[i])){
                    int num = abbr[i]-'0';
                    if(num == 0){
                        res = false;
                        break;
                    } 
                    i++;    
                    while(i < abbr.size() && isdigit(abbr[i])){
                        num *= 10;
                        num += abbr[i] -'0';
                        i++;
                    }
                    j+= num;

                }
            }
            res = i == abbr.size() && j == word.size();
            return res;
        }

};