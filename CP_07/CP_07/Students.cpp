#include "Students.h"
#include "iostream"
void Students::set_name(const string& student_name)
{
    Students::name_ = student_name;
}

// Получение имени студента
string Students::get_name() const
{
    return Students::name_;
}

// Установка фамилии студента
void Students::set_last_name(const string& student_last_name)
{
    Students::last_name_ = student_last_name;
}

// Получение фамилии студента
string Students::get_last_name() const
{
    return Students::last_name_;
}

// Установка промежуточных оценок
void Students::set_scores(const int scores[])
{
    for (int i = 0; i < 5; ++i) {
        Students::scores_[i] = scores[i];
    }
}

// Установка среднего балла
void Students::set_average_ball(const float ball)
{
    Students::average_ball_ = ball;
}

// Получение среднего балла
float Students::get_average_ball() const
{
    return Students::average_ball_;
}
// Деструктор
~Students()
{
    cout << "Memory has been cleaned. Good bye." << endl;
}