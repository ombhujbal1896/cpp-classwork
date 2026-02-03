#include <iostream>
using namespace std;


class Patient
{
private:
    float billingAmount;
    char appointmentDate[20];

public:
    Patient()
    {
        billingAmount = 0;
        appointmentDate[0] = '\0';
    }

    Patient(float amt, char date[])
    {
        billingAmount = amt;
        int i = 0;
        while (date[i] != '\0')
        {
            appointmentDate[i] = date[i];
            i++;
        }
        appointmentDate[i] = '\0';
    }

    Patient(Patient &p)
    {
        billingAmount = p.billingAmount;
        int i = 0;
        while (p.appointmentDate[i] != '\0')
        {
            appointmentDate[i] = p.appointmentDate[i];
            i++;
        }
        appointmentDate[i] = '\0';
    }

    void display()
    {
        cout << billingAmount << endl;
        cout << appointmentDate << endl;
    }
};

int main()
{
    Patient p1;
    Patient p2(3000, "10-02-2026");
    Patient p3(p2);

    p1.display();
    p2.display();
    p3.display();

    return 0;
}