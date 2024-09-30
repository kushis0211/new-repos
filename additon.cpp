#include<iostream>
using namespace std;
class complex
{
    int r,i;
public:
    void accept();
    void display() const;
    void add(complex &p,complex &q);
    complex add(const complex &p)const;
};
void complex::accept()
{
    cout<<"enter r and i value:";
    cin>>this->r;
    cin>>this->i;
}
void complex:: add(complex &p, complex &q)
{
   r=p.r+q.r;
   i=p.i+q.i;
}
void complex:: display() const
{
    cout<<r<<"+i"<<i;
}
complex complex::add(const complex &p)const  //we shouldnt change the value of c1
{
    complex t;
    t.r=r+(p.r);
    t.i=i+(p.i);

}
int main()
{
    complex c1,c2,c3;
    c1.accept();
    c2.accept();
    c3=c1.add(c2);
    c3.display();
    return 0;
}