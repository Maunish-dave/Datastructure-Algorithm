#include <iostream>

using namespace std;
void swaped(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
class Heap{
  private:
      int heap_size;
      int capacity;
      int *harr;
  public:
    Heap(int capacity);
    int parent(int i) { return (i-1)/2;}
    int left(int i) { return (2*i)+1;}
    int right(int i) { return (2 *i) + 2;}
    void heapify(int index, int n);
    void heap_insert(int value);
    void heap_sort();
    void display();

};

Heap::Heap(int cap){
   heap_size = 0;
   capacity = cap;
   harr = new int[cap];
}

void Heap::heapify(int i,int n)
{
    int l = left(i);
    int r = right(i);
    int biggest = i;
    if(l < n && harr[l] > harr[i])
        biggest = l;
    if(r < n && harr[r] > harr[biggest])
        biggest  = r;
    if(i!=biggest){
        swaped(&harr[i],&harr[biggest]);
        heapify(biggest, n);
    }
}

void Heap::heap_insert(int value)
{
    if(capacity == heap_size)
    {
        cout << "heap is full" << endl;
        return;
    }
    heap_size++;
    int i = heap_size -1;
    harr[i] = value;
    while(i!= 0 && harr[i] > harr[parent(i)])
    {
       swaped(&harr[i],&harr[parent(i)]);
       i = parent(i);
    }
}
void Heap::display()
{
    for(int i = 0;i < heap_size; i++)
    {
        cout << harr[i] << " ";
    }
    cout << endl;
}

/* sorting mechanism of heap sort */
void Heap::heap_sort()
{
    for(int i = heap_size/2 -1; i >=0 ; i--)
        Heap::heapify(i, heap_size);

    for(int i = heap_size-1; i >= 0; i--)
    {
        swaped(&harr[i],&harr[0]);

        Heap::heapify(0, i);
    }
}


int main()
{
    Heap h1(7);
    h1.heap_insert(23);
    h1.heap_insert(65);
        h1.heap_insert(1);
            h1.heap_insert(97);
    h1.heap_insert(3);
    h1.heap_insert(4);
    h1.display();
    h1.heap_sort();
    h1.display();

}




