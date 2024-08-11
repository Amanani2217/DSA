class Solution {
public:
    int sum(int num1, int num2) {
        deque<int>d;
        d.push_back(num1);
        d.push_front(num2);
        d.push_front(d.front()+d.back());
        return d.at(0);
        return d.front();
    }
};