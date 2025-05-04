#include "Date.h"
#include "Date_impl.h"
#include <memory>

Date::Date(int day, int month, int year)
{
    // Allocate an implementation object
    pImpl = std::make_unique<Date_impl>(day, month, year);
}

Date::~Date() = default;
Date::Date(Date &&) noexcept = default;
Date &Date::operator=(Date &&) noexcept = default;

// Functions just call the implementation functions
void Date::set_day(int day) { pImpl->set_day(day); }

void Date::print() { pImpl->print(); }
