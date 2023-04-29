#pragma once
#include <iostream>
using namespace std;
#include <string>

class Student
{
public:
    int m_id;
    int m_age;
    string m_name;
    int m_major;

    virtual void showInfo() = 0;
    virtual string getMajor() = 0;
};

class SeStudent : public Student
{
public:
    SeStudent(int id, int age, string name, int major)
    {
        this->m_id = id;
        this->m_age = age;
        this->m_name = name;
        this->m_major = major;
    }
    void showInfo()
    {
        cout << "学生学号：" << m_id << endl;
        cout << "学生年龄：" << m_age << endl;
        cout << "学生姓名：" << m_name << endl;
        cout << "学生专业：" << this->getMajor() << endl;
    }

    string getMajor()
    {
        return "软件";
    }
};

class CsStudent : public Student
{
public:
    CsStudent(int id, int age, string name, int major)
    {
        this->m_id = id;
        this->m_age = age;
        this->m_name = name;
        this->m_major = major;
    }
    void showInfo()
    {
        cout << "学生学号：" << m_id << endl;
        cout << "学生年龄：" << m_age << endl;
        cout << "学生姓名：" << m_name << endl;
        cout << "学生专业：" << this->getMajor() << endl;
    }

    string getMajor()
    {
        return "计科";
    }
};

class HackStudent : public Student
{
public:
    HackStudent(int id, int age, string name, int major)
    {
        this->m_id = id;
        this->m_age = age;
        this->m_name = name;
        this->m_major = major;
    }
    void showInfo()
    {
        cout << "学生学号：" << m_id << endl;
        cout << "学生年龄：" << m_age << endl;
        cout << "学生姓名：" << m_name << endl;
        cout << "学生专业：" << this->getMajor() << endl;
        cout << "骇客强者果然恐怖如斯！！！" << endl;
    }

    string getMajor()
    {
        return "骇客";
    }
};
