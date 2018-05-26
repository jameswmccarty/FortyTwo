#include <iostream>

/* 42 */

int main()
{
	struct DeepThought {
		static int answer(const char *question) {
			int solution = 0;
			while(*question) solution ^= *question++;
			return ++solution;
			}
	};

	std::cout << 
		DeepThought::answer("The answer to the Ultimate Question of Life, the Universe, and Everything") 
		 << std::endl;
}
