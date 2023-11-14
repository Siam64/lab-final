#include <iostream>
using namespace std;

class ManchesterUnited
{
private:
    int coach;
    int player;
public:

    void getData(int n1,int n2)
    {
        coach =n1;
        player= n2;
    }
    void increament()
    {
        coach++;
        player++;

    }
    int display()
    {
        return coach+player;
    }
};

int main()
{
    ManchesterUnited ronaldo,fernandes;

    ronaldo.getData(4,5);
    fernandes.getData(5,6);

    cout<<"Before increament ";
    if(ronaldo.display()>fernandes.display())
    {
        cout<<"Ronaldo is greater";
    }
    else if(ronaldo.display()<fernandes.display())
    {
        cout<<"Fernandes is greater";
    }
    else if(ronaldo.display()==fernandes.display())
    {
        cout<<"Both are equal";
    }
    ronaldo.increament();

    cout<<endl;
    cout<<"After increament ";
    if(ronaldo.display()>fernandes.display())
    {
        cout<<"Ronaldo is greater";
    }
    else if(ronaldo.display()<fernandes.display())
    {
        cout<<"Fernandes is greater";
    }
    else if(ronaldo.display()==fernandes.display())
    {
        cout<<"Both are equal";
    }


    return 0;
}
