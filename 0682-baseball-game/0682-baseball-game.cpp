class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> s;

        for(int i = 0; i < operations.size(); i++) {

            if(operations[i] != "C" && operations[i] != "D" && operations[i] != "+") {
                int num = stoi(operations[i]);
                s.push(num);
            }
            else if(operations[i] == "C") {
                s.pop();
            }
            else if(operations[i] == "D") {
                s.push(s.top() * 2);
            }
            else if(operations[i] == "+") {
                int a = s.top();
                s.pop();

                int b = s.top();

                s.push(a);
                s.push(a + b);
            }
        }

        int sum = 0;

        while(!s.empty()) {
            sum += s.top();
            s.pop();
        }

        return sum;
    }
};