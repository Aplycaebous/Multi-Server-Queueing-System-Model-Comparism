#include <iostream>
using namespace std;

#include "scheduler.h"
#include "server.h"
#include "serviceFacility.h"

int main ()
{
    Scheduler *sch = new Scheduler ();
    sch->initialize ();

    ServiceFacility* serviceFacility = new ServiceFacility (50,10,10);

    sch->run ();

    serviceFacility->generateReport();

    return 0;
}
