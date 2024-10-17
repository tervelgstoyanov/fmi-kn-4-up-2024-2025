#include <iostream>

int main()
{
    /* Initializing the input,
       it is important the numbers to be int
       cause the difference between the timestamps
       could be negative */
    int hours1, mins1, secs1,
        hours2, mins2, secs2;
    std::cin >> hours1 >> mins1 >> secs1
             >> hours2 >> mins2 >> secs2;

    /* Calculating the seconds from the beginning of each day */
    int time_in_seconds1 = secs1 + mins1 * 60 + hours1 * 3600,
        time_in_seconds2 = secs2 + mins2 * 60 + hours2 * 3600;
    
    /* Calculating the time from timestamp1 to timestamp2,
       sorry for the ternary operator
       but I prefer for readability instead funny expressions
       (there could be written one as an exercise for the reader ;) ) */
    int time_between = (
        time_in_seconds2 - time_in_seconds1 >= 0 ?
        time_in_seconds2 - time_in_seconds1 :
        /* if the difference is negative
           we must add the number of seconds in a whole day */
        time_in_seconds2 - time_in_seconds1 + 24 * 3600
    );

    /* Printing the answer in the wanted format */
    std::cout
        << time_between / 3600 << "h "
        << (time_between % 3600) / 60 << "m "
        << (time_between % 60) << "s\n";
    
    return 0;
}