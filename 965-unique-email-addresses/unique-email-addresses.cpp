class Solution {
public:
    string filterEmail(const string& email){
        char flag = '%';
        string local = "";
        string domain = "";
        
        for(const char& ch:email){
            if(flag != '@'){
                if(ch == '+' or ch == '@') flag = ch;
            }
            
            if(flag == '%'){
                if(ch != '.') local += ch;
            }

            if(flag == '@'){
                domain += ch;
            }
        }

        return local + domain;

    }

    int numUniqueEmails(vector<string>& emails) {
        
        unordered_set<string> uniqEmails;

        for(const string& email:emails){
            uniqEmails.insert(filterEmail(email));
        }

        return uniqEmails.size();
    }
};