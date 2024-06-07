class Solution {
public:
    string replaceWords(vector<string>& dict, string sent) {
        
        // sort(dict.begin() , dict.end());

        int n = sent.size();

        int i = 0;

        vector<string> v;

        string temp ;

        while(i < n)
        {
            if(sent[i] != ' ') {temp += sent[i]; i++;}
            else {v.push_back(temp) ; temp = ""; i++;}
        }

        v.push_back(temp);

        for(auto i : dict)
        {
            int sz = i.size();

            for(int j = 0 ; j < v.size() ; j++)
            {
                string curr = v[j].substr(0, sz);

                if(curr == i) {v[j] = curr;}
            }
        }

        string res = "";

        for(auto i : v)
        {
            res += i;
            res += " ";
        }

        res.pop_back();

        return res;
    }
};