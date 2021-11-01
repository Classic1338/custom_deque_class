//Custom datatypes MUST have a default constructor, otherwise it'll error!
struct test_t {
	test_t() = default;
	test_t(int a, int b, int c) :
	a(a),
	b(b),
	c(c) 
	{}

	int a;
	int b;
	int c;
};

template <typename T>
class deque {
public:
	T get_front() {
		return item[0];
	}

	T get_back() {
		return item[get_size()];
	}

	T at(int index) {
		if (index >= size) {
			printf("index out of range! \n");

			return item[index];
		}

		return item[index];
	}

	void push_back(T data) {
		item[size] = data;
		size++;
	}

	void pop_back() {
		item[size - 1] = {};
		size--;
	}

	size_t get_size() {
		return size - 1;
	}

	size_t get_length() {
		return size;
	}

	void force_size(size_t max_size) {
		if (size > max_size) {
			pop_back();
		}
	}
private:
	int size = 0;
	T item[];
};