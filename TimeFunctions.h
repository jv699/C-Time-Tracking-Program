struct TimeEntry {
    int hours;
    int minutes;
    char name[];
};

struct DaysTime {
    int date; //have date be a 8 number sequence and break it up i.e. 20240112 YearMoDa)
    char totalTime[5]; //store time as 8h00m or something similar. Always 5 chars
    struct TimeEntry *entries[]; //just want the address in memory of those TimeEntry Structs.
};

/*
  Take in a pointer to the address of the DaysTime struct, and append the pointer address of
  a new TimeEntry pointer. Does not need to return anything since everything is happening with pointers.
  It then performs the time calculation for total time.
*/
inline void addTimeEntry(struct TimeEntry *timeEntryPointer, struct DaysTime *daysTimePointer, int arrayElements) {
    *daysTimePointer->entries[arrayElements + 1] = *timeEntryPointer;


}