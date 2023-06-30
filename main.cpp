#include <iostream>
#include <string>
#include <vector>
#include "cab.h"
#include "aggregator.h"
#include "payment.h"

using namespace std;

int main()
{
    cout << "------------Cab Aggregator System-------------" << endl;
    CabAggregator cabAggregator;

    cabAggregator.createCab(Cab("ABC123", "Raj"));
    cabAggregator.createCab(Cab("BCD234", "Sam"));
    cabAggregator.createCab(Cab("CDE345", "Ver"));

    cabAggregator.availableCab();

    Payment payment(500); 

    string cabNumber = "ABC123";
    int fare = 200;

    cabAggregator.bookCab(cabNumber);
    payment.payAmount(fare);
    payment.makePayment(payment.checkBalance(0, fare), fare);
    cabAggregator.doneCab(cabNumber);

    cabAggregator.availableCab();

    return 0;
}
