#include "day-of-year.hpp"

enum Months_Days {january = 31, february = 28, march = 31, april = 30, may = 31, june = 30, july = 31, august = 31, september = 30, october = 31, november = 31};
enum months_number {February = 2, March = 3, April = 4, May = 5, June = 6, July = 7, August = 8, September = 9, October = 10, November = 11, December = 12};

int dayOfYear(int month, int dayOfMonth, int year) {
    //int[13] months{0, 31, 28, 31, 30, 31,30,31,31};

    if(year%4==0 and month > February){
        dayOfMonth +=1;
        }
    if (month == February) {
        dayOfMonth += january;
    } else if (month == March) {
        dayOfMonth += january + february;
    } else if (month == April) {
        dayOfMonth += january + february + march;
    } else if (month == May) {
        dayOfMonth += january + february + march + april;
    } else if (month == June) {
        dayOfMonth += january + february + march + april + may;
    } else if (month == July) {
        dayOfMonth += january + february + march + april + may + june;
    } else if (month == August) {
        dayOfMonth += january + february + march + april + may + june + july;
    } else if (month == September) {
        dayOfMonth += january + february + march + april + may + june + july + august;
    } else if (month == October) {
        dayOfMonth += january + february + march + april + may + june + july + august + september;
    } else if (month == November) {
        dayOfMonth += january + february + march + april + may + june + july + august + september + october;
    } else if (month == December) {
        dayOfMonth += january + february + march + april + may + june + july + august + september + october + november;
    }

    return dayOfMonth;
}

