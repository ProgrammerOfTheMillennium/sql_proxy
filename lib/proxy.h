#ifndef PROXY_H
#define PROXY_H

#include <memory>


namespace Proxy {

struct Element {

};



/// double linked list
class Proxy {
	using Elem = std::shared_ptr<Element>;
	const uint8_t deps;

//	std::shared_ptr<Node> parent;
	Elem elem; //second

public:
	std::shared_ptr<Element> left; //third
	std::shared_ptr<Element> right; //first

	Proxy(std::shared_ptr<Element> el, std::shared_ptr<Element> lt, std::shared_ptr<Element> rt) :
			deps(0), elem(el), left(lt), right(rt) {}
	Proxy() : deps(0), elem(nullptr), left(nullptr), right(nullptr) {}

};

}

#endif
