class Solution {
    public:
        int compress(vector<char>& chars) {
    
            int i=0;
            int ansIndex = 0;
            int n = chars.size();
    
            while(i<n){
                int j =i+1;
                while(j<n && chars[i]==chars[j]){
                    j++;
                }
                //yaha kab aaoge
                //ya toh vector poora traverse kardiya hoga
                //ya fhir new/different character encounter huwa hai
    
                //old char to store karlo
                chars[ansIndex++]=chars[i];//here first value stored and then it's incremnt the value
    
                int count = j-i;
                
                if(count>1){
                    //converting counting into single digit and saving in answer
                    string cnt = to_string(count);
                    for(char ch:cnt){
                        chars[ansIndex++]=ch;
                    }
                }
                i=j;
            }
            
        
        return ansIndex;
        }
        
    };