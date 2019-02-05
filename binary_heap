#include <iostream>

using namespace std;


class Heap
{
   private:
      int capacity;
      int heap_size;
      int *harr;
   public:
    Heap(int capacity);
    int parent(int i) { return (i-1)/2;}
    int left(int i) {return (2*i) +1;}
    int right(int i) { return (2*i)+2;}
    void heap_insert(int value);
    void display(){
      for(int i = 0;i<heap_size;i++){
        cout << harr[i] << " ";
      }
    }

};
void swaped(int *a, int *b){
   int temp = *a;
   *a = *b;
   *b = temp;
}
Heap::Heap(int cap){
    heap_size = 0;
  capacity = cap;
  harr = new int[cap];
}

void Heap::heap_insert(int value)
{
    if(heap_size == capacity){
        cout << "Heap is full" << endl;
        return;
    }
    heap_size++;
    int i = heap_size -1;
    harr[i] = value;
    while(i!=0 && harr[parent(i)]>harr[i]){
        swaped(&harr[i],&harr[parent(i)]);
        i = parent(i);
    }
}


int main(){
 Heap h1(7);
 h1.heap_insert(1);
 h1.heap_insert(32);
 h1.heap_insert(67);
 h1.heap_insert(45);
 h1.heap_insert(3);
 h1.heap_insert(2);
  h1.heap_insert(0);
 h1.display();

}
