#pragma once
#ifndef MYHEADER_H

#define STRING_SIZE 256

// -----------기본 데이터 구조체------------
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

// 함수 선언
void insert_and_modify_2(data d[], int* size);          //2번기능
void modify_3(data d[], int size, int index);           //3번기능 (취소)
void Delete_4(data list[], int* size, int index);       //4번기능
void money_quick_sort(data list[], int left, int right);//지출 기준 정렬
void date_quick_sort(data list[], int left, int right); //날짜 기준 정렬
void print_data(const data d[], int size);              


// file in/out
int check_array_size_in_txt(const char* txt);           //텍스트파일의 내용이 몇줄인지 
void save_info(const char* txt, data d[], int d_size);  //현재 배열의 내용을 텍스트 파일에 저장
data read_torken_struct(int n);                         //텍스트파일의 n번째 줄을 읽어옴

#endif