string removeConsecutiveCharacter(string S)
    {   
        string str;
        stack <char> st;
        st.push(S[0]);
        for(int i=1;i<S.size();i++){
                if(!st.empty() and st.top()!=S[i]){
                    st.push(S[i]);
                }
            }
        while(!st.empty()){
            str.push_back(st.top());
            st.pop();
        }
        reverse(str.begin(),str.end());
        return str;    
        }