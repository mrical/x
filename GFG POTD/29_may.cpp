vector<string> ans;
        for(auto x:Dictionary){
            int j=0;
            for(int i=0;i<x.length();i++){
                if(j<Pattern.length() and x[i]==Pattern[j])j++;
                else if(isupper(x[i]))break;
            }
            if(j==Pattern.length())ans.push_back(x);
        }
        if(ans.size()==0)ans.push_back("-1");
        return ans;
