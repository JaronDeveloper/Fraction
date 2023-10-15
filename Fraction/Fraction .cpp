#include <iostream>

class Fraction
{
private:
	int numerator_ = 0;
	int denominator_ = 0;

public:
	Fraction() = default;

	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;			
	}

	bool operator == (Fraction other) {
		int result = this->numerator_ * other.denominator_;// +this->denominator_ * this->denominator_;
		int result1 = this->denominator_ * other.numerator_;// + other.denominator_ * other.denominator_;
		if (result == result1) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator != (Fraction other) {
		int result = this->numerator_ * other.denominator_;// +this->denominator_ * this->denominator_;
		int result1 = this->denominator_ * other.numerator_;// + other.denominator_ * other.denominator_;
		if (result != result1) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator < (Fraction other) {
		int result = this->numerator_ * other.denominator_;// +this->denominator_ * this->denominator_;
		int result1 = this->denominator_ * other.numerator_;// + other.denominator_ * other.denominator_;
		if (result < result1) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator > (Fraction other) {
		int result = this->numerator_ * other.denominator_;// +this->denominator_ * this->denominator_;
		int result1 = this->denominator_ * other.numerator_;// + other.denominator_ * other.denominator_;
		if (result > result1) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator <= (Fraction other) {
		int result = this->numerator_ * other.denominator_;// +this->denominator_ * this->denominator_;
		int result1 = this->denominator_ * other.numerator_;// + other.denominator_ * other.denominator_;
		if (result <= result1) {
			return true;
		}
		else {
			return false;
		}
	}

	bool operator >= (Fraction other) {
		int result = this->numerator_ * other.denominator_;// +this->denominator_ * this->denominator_;
		int result1 = this->denominator_ * other.numerator_;// + other.denominator_ * other.denominator_;
		if (result >= result1) {
			return true;
		}
		else {
			return false;
		}
	}
};
 
int main()
{
	Fraction f1(4, 3);	
	Fraction f2(6, 11);
	
	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';	
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	
	return 0;
}
