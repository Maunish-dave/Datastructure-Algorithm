#include <iostream>
#include <vector>
#include <typeinfo>
using namespace std;

struct employee
{
    char *name;
    int phone;
};
int  hash_fun(employee *e)
{
    return e->phone%10;
}

class Hash
{
private:
    int H;

public:
     vector <employee> *h;
    Hash(int i);
    void hash_insert(employee p);
    void hash_get(employee p);

};

Hash::Hash(int i)
{
    H = i;
    h = new vector <employee>[i];

}
void Hash::hash_insert(employee p)
{
    int key = hash_fun(&p);
    h[key].push_back(p);

}
void Hash::hash_get(employee p)
{
    int key = hash_fun(&p);

    vector <employee> :: iterator i;
    for(i = h[key].begin(); i != h[key].end();++i)
    {

        if(i->phone == p.phone)
        {
            cout << "name- " << i->name << " ";
                  cout << "phone- " << i->phone << endl;
        }

    }
}
int main()
{
   Hash c(10);
   employee a;
   a.name = "maunish";
   a.phone = 12345;

   employee b;
   b.name = "dharmik";
   b.phone = 13455;

   employee d;
   d.name = "hrushikesh";
   d.phone = 19345;

   c.hash_insert(a);
    c.hash_insert(b);
    c.hash_insert(d);

   c.hash_get(b);


}
