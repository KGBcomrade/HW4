#include <iostream>
#include <cstdint>

using namespace std;

class Eratosthenes {
	private:
		uint8_t *sieve;
		size_t size;
	public:
		/*
		 * Calculates maxNum first prime numbers using sieve of Eratosthenes
		 */
		Eratosthenes(int maxNum) {
			this->size = maxNum / 8 + (maxNum % 8 != 0 ? 1 : 0);
			this->sieve = new uint8_t[size];
			for(int i = 0; i < size; i++)
				sieve[i] = 0;
			for(int i = 2; i < maxNum; i++)
				if((sieve[i / 8] & (1 << (i % 8))) == 0)
					for(int p = 2* i; p < maxNum; p += i)
						sieve[p / 8] |= (1 << (p % 8));
		}
		~Eratosthenes() {
			delete[] sieve;
		}
		//returns true if i is a prime number
		bool isPrime(unsigned int i) {
			return (sieve[i / 8] & (1 << (i % 8))) == 0;
		}
};


int main() {
	int maxN;
	cout << "Enter max number:" << endl;
	cin >> maxN;
	int n;
	Eratosthenes e(maxN);
	cout << "Enter number to check (-1 to quit)" << endl;
	cin >> n;
	while(n >= 0) {
		cout << (e.isPrime(n) ? "prime" : "composite") << endl;
		cin >> n;
	}


	return 0;
}
