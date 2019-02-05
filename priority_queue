#include <iostream>

using namespace std;


struct prio
{
    int item;
    int priority;
};
void swaped(prio *a, prio *b)
{
    prio temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
class priority
{

    int capacity;
    int queue_size;

public:
    int parent(int i) { return (i-1)/2;}
    int left(int i) { return (2*i)+1;}
    int right(int i) {return (2*i)+2;}
    struct prio *p;
    priority(int cap);
    void insert_into(int value, int priority);
    void heapify(int index, int s);
    int getHigest();
    void deleteHigest();
    void display();
};

priority::priority(int cap)
{
    capacity = cap;
    queue_size = 0;
     p = new prio[cap];
}

void priority::insert_into(int item, int priority)
{
    if(capacity == queue_size)
    {
        cout << "queue is full" << endl;
        return;
    }

    queue_size++;
    int i =  queue_size -1;
    p[i].item = item;
    p[i].priority = priority;
    while(i!=0 && p[parent(i)].priority < p[i].priority)
    {
        swaped(&p[parent(i)], &p[i]);
        i = parent(i);
    }

}
void priority::heapify(int index, int s)
{
    int largest = index;
    int r = right(index);
    int l = left(index);
    if(l < queue_size && p[index].priority <= p[l].priority)
        largest = l;
    if(r < queue_size && p[largest].priority <= p[r].priority)
       largest = r;
    if(index != largest)
    {
        swaped(&p[index],&p[largest]);
        heapify(largest,queue_size);
    }
}
int priority::getHigest()
{
    return p[0].item;
}
void priority::deleteHigest()
{
    int i = queue_size -1;
    swaped(&p[0],&p[i]);
    queue_size--;
    priority::heapify(0,queue_size);
}
void priority::display()
{
    for(int j = 0; j<queue_size;j++)
    {
        cout << p[j].item << "-" << p[j].priority << endl;
    }
}
int main()
{
    priority p1(5);
    p1.insert_into(5, 2);
    p1.insert_into(6, 1);
    p1.insert_into(7,3);
    p1.deleteHigest();
    p1.display();
    cout << endl;
    p1.insert_into(7,5);
    p1.display();

}


