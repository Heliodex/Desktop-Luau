#ifndef _ADDER_H_
#define _ADDER_H_

class Adder
{
public:
	Adder() : _v(0){};
	void Add(int v);
	int Get();

private:
	int _v;
};

#endif // _ADDER_H_
