class Solution {
  public:
    void reverseStack(stack<int> &st) {
    
        if(st.empty())
        {
            return;
        }
        int temp= st.top();
        st.pop();
        reverseStack(st);
        insertatbottom(st,temp);
    }
    void insertatbottom(stack<int> &st, int temp)
    {
        if(st.empty())
        {
            st.push(temp);
            return;
        }
        int val=st.top();
        st.pop();
        insertatbottom(st,temp);
        st.push(val);
    }
};