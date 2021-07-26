#pragma once
#include <string>
using namespace std;  
class Students {
public:
    // ��������� ����� ��������
    void set_name(const string&);
    // ��������� ����� ��������
    string get_name() const;
    // ��������� ������� ��������
    void set_last_name(const string&);
    // ��������� ������� ��������
    string get_last_name() const;
    // ��������� ������������� ������
    void set_scores(const int[]);
    // ��������� �������� �����
    void set_average_ball(float);
    // ��������� �������� �����
    float get_average_ball() const;


private:
    // ������������� ������
    int scores_[5];
    // ������� ����
    float average_ball_ = 0;
    // ���
    string name_;
    // �������
    string last_name_;
};

