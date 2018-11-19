#pragma once
#include "basic.h"

//�� �ڵ忡�� ���� ���� ����//

//ĳ���� ����ڽ� ����
#define start_x 170
#define start_y 150
#define end_x 280
#define end_y 270
#define size_x 450
#define size_y 450
#define nete_y 700

class Ch //ĳ����
{
public:
	int x;
	int y = 480;

	//�ൿ����
	int left = 0;
	int right = 0;
	int up = 0;
	int play = 0; //0.����x 1.���ڵ� 2.���ڵ�
	int plays = 0; //�̹����� �� ��
	int charge_now = 0; //������
	int charge_what = 0; //�� ���������� 1.���ڵ� 2.���ڵ�
	int charge = 0; //�����ܰ�
	int crash = 0; //0���� 20���� �浹 �ð�

	int skill = 0; //1.��ų1 2.��ų2  ����� �Ͻ�����
	int skill1 = 0; //1.���� 2.�½��޽� 3.�� 4.��

	int gravity = 0; //�߷�
	float skill_gauge = 0;//��ų ������ 3�� �ִ�

	//�̹�������
	int run_sp = 0;
	int ready_sp = 0;
	int jump_sp = 0;
	int play1_sp = 0;
	int play1_charge_sp = 0;
	int skill1_sp = 0;
};

Ch ch1;
Ch ch2;


class Ball //��
{
public:
	int x = -100;
	int y = -100;

	int move = 0; //0.���� 1.���� 2.������
	float gravity = 0; //�߷�
	float speed; //�ӵ�
	int delta; //�߷ºб�, ��������

	//�浹 �ð��� ���� ���
	float play1_gravity(int charge, int crash)
	{
		if(charge == 1)
			return 9 + (crash / 20 * 4);
		if (charge == 2)
			return 11 + (crash / 20 * 4);
		if (charge == 3)
			return 13 + (crash / 20 * 4);
	}
	float play1_speed(int charge, int crash)
	{
		if (charge == 1)
			return 35 - (crash / 20 * 6);
		if (charge == 2)
			return 39 - (crash / 20 * 6);
		if (charge == 3)
			return 44 - (crash / 20 * 6);
	}
	float play2_gravity(int charge, int crash)
	{
		if (charge == 1)
			return 14 + (crash / 20 * 4);
		if (charge == 2)
			return 16 + (crash / 20 * 4);
		if (charge == 3)
			return 18 + (crash / 20 * 4);
	}
	float play2_speed(int charge, int crash)
	{
		if (charge == 1)
			return 28 - (crash / 20 * 6);
		if (charge == 2)
			return 32 - (crash / 20 * 6);
		if (charge == 3)
			return 37 - (crash / 20 * 6);
	}
};

Ball ball;


int ai_charge = 0;
int ai_skill1 = 0;
int ai_serve = 50; // ai���� ���ð�

int score_1 = 0;
int score_2 = 0;
int set_score_1 = 0;
int set_score_2 = 0;
int turn = 0; //0.���� 1.������
int play_mod = 1; //0.�޴� 1.1�ο� 2.2�ο�

int ball_pa_sp = 0;
int ball_pa_x = 0;
int ball_pa_y = 0;
int ball_pa2_sp = 0;
int ball_pa2_x = 0;//��ų��
int ball_pa2_y = 0;//��ų��

int perfect_pa_sp = 0;
int perfect_pa_x = 0;
int perfect_pa_y = 0;

int background = 0; //0.�޴� 1.����

int button1_sp = 0;
int button2_sp = 0;
int button3_sp = 0;
int button4_sp = 0;


int how1_sp = 0;
int how2_sp = 0;

int wins_sp = 0;// 1.���ʽ� 2.�����ʽ�