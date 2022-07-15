//Function to reverse words in a given string.

    string reverseWords(string S) 
    { 
        string res = "";
        stack <string> st;
        int n = S.size();
        
        for(int i = 0; i < n; i++)
        {
            if(S[i] != '.')
              res += S[i];
            
            else
            {
                st.push(res);
                res = "";
            }
        }
        st.push(res);
        res = "";
        
        while(!st.empty())
        {
            res += st.top();
            st.pop();
            
            if(!st.empty())
              res += ".";
        }
        return res;
    } 
