#pragma once
#ifndef MYHEADER_H

#define STRING_SIZE 256

// -----------�⺻ ������ ����ü------------
struct date
{
    int year;
    int month;
    int day;
};

typedef struct _data
{
    struct date date;
    char str[STRING_SIZE];
    int money;
    char money_reason[STRING_SIZE];
} data;
// -----------------------------------------

// �Լ� ����
void insert_and_modify_2(data d[], int* size);          //2�����
void modify_3(data d[], int size, int index);           //3����� (���)
void Delete_4(data list[], int* size, int index);       //4�����
void money_quick_sort(data list[], int left, int right);//���� ���� ����
void date_quick_sort(data list[], int left, int right); //��¥ ���� ����
void print_data(const data d[], int size);              


// file in/out
int check_array_size_in_txt(const char* txt);           //�ؽ�Ʈ������ ������ �������� 
void save_info(const char* txt, data d[], int d_size);  //���� �迭�� ������ �ؽ�Ʈ ���Ͽ� ����
data read_torken_struct(int n);                         //�ؽ�Ʈ������ n��° ���� �о��

#endif