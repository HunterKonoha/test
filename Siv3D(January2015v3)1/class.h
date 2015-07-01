#include <string>

class Base {
public:
	Base() {};
	virtual ~Base() {};
	std::string Call() {
		return this->Draw();
	};
	virtual std::string Draw() {
		return "Call Base Draw()";
	};
};

class Drivide :public Base {
public:
	Drivide() {
	};
	~Drivide() {};
	std::string Draw() override {
		return "Call Derive Draw()";
	}
};