<<<<<<< HEAD
=======
#include <cmath>
>>>>>>> f7f8d2d (Initial commit)
#include <iostream>
#include <vector>
#include <deque>
#include <list>
<<<<<<< HEAD
=======
#include <algorithm>
#include <random>
#include <ctime>
>>>>>>> f7f8d2d (Initial commit)

template <class Container, class T>
void insert_sorted(Container& container, const T& item) {
    const auto insert_pos = std::lower_bound(std::begin(container), std::end(container), item);
    container.insert(insert_pos, item);
}

template <class Container>
void printContainer(Container& container, std::string name) {
    std::cout << name << "\t";
    for (const auto& elem : container) {
        std::cout << elem << " ";
    }
    std::cout << std::endl;
}

<<<<<<< HEAD
=======
std::vector<float> operator-(const std::vector<float> &a, const std::vector<int> &b){

    if (a.size() != b.size())
        throw("a.size() != b.size()");
    std::vector<float> c(a.size());
    for(int i{0}; i < a.size(); ++i){
        c[i] = a[i] - static_cast<float>(b[i]);
        c[i] = sqrt(c[i]);
    }
    return c;
}

>>>>>>> f7f8d2d (Initial commit)
void task_1() {
    std::vector<int> vec_int{ 1,2,3,4,5 };
    insert_sorted(vec_int, 4);
    printContainer(vec_int, "vec_int");

    std::vector<float> vec_float{ 1.1,1.2,1.3,1.4,1.5 };
    insert_sorted(vec_float, 1.45);
    printContainer(vec_float, "vec_float");

    std::deque<int> deque_int{ 1,2,3,4,5 };
    insert_sorted(deque_int, 4);
    printContainer(deque_int, "deque_int");

    std::deque<float> deque_float{ 1.1,1.2,1.3,1.4,1.5 };
    insert_sorted(deque_float, 1.45);
    printContainer(deque_float, "deque_float");

    std::list<int> list_int{ 1,2,3,4,5 };
    insert_sorted(list_int, 4);
    printContainer(list_int, "list_int");

    std::list<float> list_float{ 1.1,1.2,1.3,1.4,1.5 };
    insert_sorted(list_float, 1.45);
    printContainer(list_float, "list_float");
}

int main()
{
<<<<<<< HEAD
    task_1();
=======
    //task_1();

    std::mt19937 gen(time(0));
    std::uniform_real_distribution<> urd(0, 100);

    std::vector<float> analogSignal(100);
    std::vector<int> digitalSignal(100);

    std::generate(analogSignal.begin(), analogSignal.end(), [&urd, &gen]() -> float{
        return urd(gen);
    });

    std::copy(analogSignal.begin(), analogSignal.end(), digitalSignal.begin());

    printContainer(analogSignal, "analog");
    printContainer(digitalSignal, "digital");

    std::vector<float> tmp(analogSignal.size());
    tmp = analogSignal - digitalSignal; //(a - b)^2

    auto sum = std::accumulate(tmp.begin(), tmp.end(), 0.0);

    std::cout << "Sum = " << sum;
>>>>>>> f7f8d2d (Initial commit)

}
