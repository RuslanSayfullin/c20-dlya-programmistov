#include <iostream>
#include <map>

class LazyFibonacci {
public:
    int operator()(int n) {
        if (n <= 1) {
            return n;
        }

        auto it = memo.find(n);
        if (it != memo.end()) {
            return it-> second;
        }

        int result = (*this)(n - 1) + (*this)(n - 2);
        memo[n] = result;
        return result;
    }

private:
    std::map<int, int> memo;
};

int main() {
    LazyFibonacci fib;
    std::cout << "Fibonacci(10): " << fib(10) << std::endl;
    return 0;
}