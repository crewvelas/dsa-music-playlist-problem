#include <iostream>
using namespace std;

struct Music *current = NULL;
struct Music *first = NULL;
struct Music *last = NULL;
int count = 0;

struct Music {
    struct Music *previous;
    struct Music *next;
    string data;
};

void add(string data) {

    struct Music *music = new Music;
    music->previous = NULL;
    music->next = NULL;
    music->data = data;


    if(first == NULL) {
        first = music;
        last = music;
        return;
    }

    last->next = music;
    music->previous = last;
    music->next = first;

    first->previous = music;
}

int main() {

    add("test1");
    add("test2");
    add("test3");

    cout<<first->data<<endl;
    cout<<first->next->data<<endl;
    cout<<first->previous->data<<endl;

    cout<<current->data<<endl;
    return 0;
}

// 1. Add

// 2. Next

// 3. Previous

// 4. Exit

// ?. Reposition