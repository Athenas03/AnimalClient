#include <iostream>
#include <string>
#include <list>      //  List for my data structure 
using namespace std;

//   classes for animal, turtle, cat, dog,and cow


class Animal {

protected:
    string name;
public:
    Animal() { name = "unknown"; }

    void setName(string x) { name = x; }

    string getName() const { return name; }

    // virtual function
    virtual void Sound() const {

        cout << "Animal can't talk." << endl;
    }
};

class Turtle : public Animal {
public:
    Turtle() { name = "unknown"; }
    void Sound() const override {

        cout << "hiss." << endl;
    }
};

class Cat : public Animal {
public:
    Cat() { name = "unknown"; }
    void Sound() const override {
        cout << "meow." << endl;
    }
};

class Dog : public Animal {
public:
    Dog() { name = "unknown"; }
    void Sound() const override {
        cout << "vov-vov." << endl;
    }
};

class Cow : public Animal {
public:
    Cow() { name = "unknown"; }
    void Sound() const override {
        cout << "moo." << endl;
    }
};


  //function for the waiting line
void printQueue(const list<Animal*>& q) {
    cout << "Animal Clinic <= ";

    for (auto* a : q) {
        cout << a->getName();
        if (a != q.back()) cout << ", ";
    }
    cout << endl;
}

   // Main function 


int main() {
    list<Animal*> line;  

    // Time point 1: queue is empty
    cout << "Time point 1:" << endl;
    printQueue(line);
    cout << endl;

    // Time point 2: The first animal arrives and waits for service
    Turtle* t1 = new Turtle();
    t1->setName("Sam");
    line.push_back(t1);
   
    cout << "Time point 2:" << endl;
    printQueue(line);
    cout << endl;

    // Next, a cat comes to the waiting line
    Cat* c1 = new Cat();
    c1->setName("Nick");
    line.push_back(c1);
    cout << "Time point 3:" << endl;
    printQueue(line);
    cout << endl;

    // Time point 4: dog squeezes between the turtle and cat
    Dog* d1 = new Dog();
    d1->setName("Jeff");

    auto it = line.begin();
    ++it;  
    line.insert(it, d1);

    cout << "Time point 4:" << endl;
    printQueue(line);
    cout << endl;

    // Time point 5: A cow comes and joins the waiting queue at its end.
    Cow* w1 = new Cow();
    w1->setName("Anna");
    line.push_back(w1);

    cout << "Time point 5:" << endl;
    printQueue(line);
    cout << endl;

    // Time point 6: Finally, the turtle gets served and leaves.
    line.pop_front();  

    cout << "Time point 6:" << endl;
    printQueue(line);
    cout << endl;

    return 0;
}

