int numUniqueEmails(vector<string>& emails) {
        for(int i=0; i<emails.size(); i++){
            bool beforeDomain = true;
            bool skip = false;
            string s;
            for(auto i:emails[i]){
                if(i == '@'){ 
                    skip = false; 
                    beforeDomain = false;
                    s.push_back(i); 
                }
                else if(i == '+' && beforeDomain){
                    skip = true;
                }
                else if(i == '.' && beforeDomain){
                    continue;
                }
                else if(!skip){
                    s.push_back(i);                    
                }
            }
            emails[i] = s;
        }
        
        set<string> uniqueEmails;
        
        for(auto i:emails){
            uniqueEmails.insert(i);
        }
        return uniqueEmails.size();
    }
