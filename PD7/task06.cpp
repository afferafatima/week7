#include <iostream>
using namespace std;
void totalpatients(int period); // function returning value of treated and untreated patients
main()
{
    int period; // number of days for observation
    cout << "Enter number of days for observation : ";
    cin >> period;
    totalpatients(period);
}
void totalpatients(int period)
{
    int p_arrived; // p is for patients
    int p_treated = 0;
    int p_untreated = 0;
    int doctors = 7;     // variable for doctors at start of session
    int p_remaining = 0; // remaining patients per day
    for (int day = 1; day <= period; day++)
    {
        cout << "Enter Number of arrived patients on day " << day << " : ";
        cin >> p_arrived;

        if (p_arrived > doctors)
        {
            p_treated = doctors + p_treated;
            p_untreated = p_untreated + (p_arrived - doctors);
        }
        if (p_arrived <= doctors)
        {
            p_treated = p_arrived + p_treated;
        }
        if (day % 2 == 0)
        {
            if (p_untreated > 0)
            {
                doctors = doctors + 1;
            }
        }
    }
    cout << "Treated patients : " << p_treated << endl;
    cout << "Untreated patients : " << p_untreated << endl;
}
