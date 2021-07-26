#pragma once
#include <string>
using namespace std;  
class Students {
public:
    // Установка имени студента
    void set_name(const string&);
    // Получение имени студента
    string get_name() const;
    // Установка фамилии студента
    void set_last_name(const string&);
    // Получение фамилии студента
    string get_last_name() const;
    // Установка промежуточных оценок
    void set_scores(const int[]);
    // Установка среднего балла
    void set_average_ball(float);
    // Получение среднего балла
    float get_average_ball() const;


private:
    // Промежуточные оценки
    int scores_[5];
    // Средний балл
    float average_ball_ = 0;
    // Имя
    string name_;
    // Фамилия
    string last_name_;
};

