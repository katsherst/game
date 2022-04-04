#pragma once
#include <iostream>
#include <vector>
#include <string>
using namespace std;
class animal {
public:
	int cost;
	string vid;
	string p;
	animal() {
		vid;
		cost;
	}
	virtual string golos() const { return p; };
};
class cat :public animal {
public:
	cat() {
		vid = "cat";
		cost = 100;
	}
	virtual string golos() const {
		return "Meow! ";
	};
};
class duck :public animal {
public:
	duck() {
		vid = "duck";
		cost = 75;
	}
	virtual string golos() const {
		return "Quack! ";
	};
};
class cow :public animal {
public:
	cow() {
		vid = "cow";
		cost = 300;
	}
	virtual string golos() const {
		return "Moo!  ";
	};
};
class sheep :public animal {
public:
	sheep() {
		vid = "sheep";
		cost = 250;
	}
	virtual string golos() const {
		return "Baa! ";
	};
};
class dog :public animal {
public:
	dog() {
		vid = "dog";
		cost = 150;
	}
	virtual string golos() const {
		return "Woof! ";
	};
};
class mouse :public animal {
public:
	mouse() {
		vid = "mouse";
		cost = 25;
	}
	virtual string golos() const {
		return "Iiii! ";
	};
};
class parrot :public animal {
public:
	parrot() {
		vid = "parrot";
		cost = 50;
	}
	virtual string golos() const {
		return "I am a parrot! ";
	};
};
class pig :public animal {
public:
	pig() {
		vid = "pig";
		cost = 350;
	}
	virtual string golos() const {
		return "Oink! ";
	};
};
class donkey :public animal {
public:
	donkey() {
		vid = "donkey";
		cost = 200;
	}
	virtual string golos() const {
		return "Hi-hah! ";
	};
};
class horse :public animal {
public:
	horse() {
		vid = "horse";
		cost = 400;
	}
	virtual string golos() const {
		return "Neigh! ";
	};
};
class goose :public animal {
public:
	goose() {
		vid = "goose";
		cost = 125;
	}
	virtual string golos() const {
		return "Ga-ga! ";
	};
};
class pokupki {
public:
	vector <animal*> my_animals;
	int money;
};
