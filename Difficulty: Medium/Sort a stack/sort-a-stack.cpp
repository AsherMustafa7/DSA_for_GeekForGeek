class Solution {
  public:
    void sortStack(stack<int> &st) 
    {
        if(st.empty())
        {
            return;
        }
        int temp=st.top();
        st.pop();
        sortStack(st);
        inserts(st,temp);
    }
    void inserts(stack<int>&st, int temp)
    {
        if(st.empty())
        {
            st.push(temp);
            return;
        }
        if(st.top()<=temp)
        {
            st.push(temp);
            return;
        }
        int val=st.top();
        st.pop();
        inserts(st,temp);
        inserts(st,val);
    }
};
