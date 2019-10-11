class Solution {
public:
    struct Node {
        int priority;
        char c;
    };

    static bool custom_compare(const Node& l, const Node& r){
        return l.priority < r.priority;
    }

    string customSortString(string S, string T) {
        if(S.size() == 0) { return T; }
        unordered_map<char, Node> pm;
        for (size_t i = 0; i < S.size(); i++) {
            Node node;
            node.priority = i;
            node.c = S[i];
            pm.insert(make_pair(S[i], node));
        }

        vector<Node> cn;
        for (size_t i =0; i < T.size(); i++) {
            auto iter = pm.find(T[i]);
            if (iter != pm.end()) {
                cn.push_back(iter->second);
            }
            else{
                Node node;
                node.c = T[i];
                node.priority = 29;
                cn.push_back(node);
            }
        }

        std::sort(cn.begin(), cn.end(), custom_compare);

        string ans;
        for (auto& n : cn) {
            ans += n.c;
        }

        return ans;
    }
};