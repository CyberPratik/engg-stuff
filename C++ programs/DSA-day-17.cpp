#include <iostream>
#include <vector>
using namespace std;

vector<int> primeFactorization(int N) {
    vector<int> factors;

    // Function to find smallest prime factor
    for (int i = 2; i * i <= N; i++) {
        if (N % i == 0) {
            factors.push_back(i);
            vector<int> subFactors = primeFactorization(N / i);
            factors.insert(factors.end(), subFactors.begin(), subFactors.end());
            return factors;
        }
    }

    // If no factor found, N is prime
    factors.push_back(N);
    return factors;
}

int main() {
    int N;
    
    // Input from the user
    cout << "Enter a number for prime factorization: ";
    cin >> N;

    vector<int> factors = primeFactorization(N);

    // Output the factors
    cout << "Prime factors of " << N << " are: ";
    for (int factor : factors) {
        cout << factor << " ";
    }
    cout << endl;

    return 0;
}
