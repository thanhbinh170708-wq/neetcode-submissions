class Solution {
public:
    int evalRPN(vector<string>& tokens) {
    int n = tokens.size();
    vector<int> a;
    for (int i = 0; i< n; i++)
    {
        if (tokens[i] != "+" && tokens[i] != "-" && tokens[i] != "*" && tokens[i] != "/")
        {
            a.push_back(stoi(tokens[i]));
        }
        else if (tokens[i] == "+")
        {
            int temp = a[a.size()-1] + a[a.size()-2];
            a.pop_back();
            a.pop_back();
            a.push_back(temp);
        }
        else if (tokens[i] == "*")
        {
            int temp = a[a.size()-1] * a[a.size()-2];
            a.pop_back();
            a.pop_back();
            a.push_back(temp);
        }
        else if (tokens[i] == "/")
        {
            int temp = a[a.size()-2] / a[a.size()-1];
            a.pop_back();
            a.pop_back();
            a.push_back(temp);
        }
        else if (tokens[i] == "-")
        {
            int temp = a[a.size()-2] - a[a.size()-1];
            a.pop_back();
            a.pop_back();
            a.push_back(temp);
        }

    }
    return a[0];
    }
};
