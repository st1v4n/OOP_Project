#include "Date.h"

void Date::print() const
{
	std::cout << day << '.' << month << '.' << year << std::endl;
}

void Date::setDate(const Date& newDate)
{
	day = newDate.day;
	month = newDate.month;
	year = newDate.year;
}

void Date::setDate(uint16_t day, uint16_t month, int32_t year)
{
	if (month < (int)Months::JANUARY || month > (int)Months::DECEMBER)throw std::logic_error("Invalid month!");
	uint16_t maxDays = getDays(month, year);
	if (day < 1 || day > maxDays)throw std::logic_error("Invalid day!");
	this->day = day;
	this->month = month;
	this->year = year;

}

const Date& Date::getDate() const
{
	return *this;
}

uint16_t Date::getDay() const
{
	return day;
}

uint16_t Date::getMonth() const
{
	return month;
}

int32_t Date::getYear() const
{
	return year;
}

bool operator!=(const Date& date1, const Date& date2)
{
	return (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year);
}

uint16_t Date::getRemaining(const Date& end)
{
	Date start(*this);
	uint16_t count = 0;
	while (start != end) {
		//
		//
		//
	}
	return count;
}


