#include <iostream>

using namespace std;

void main()
{
	//�ݺ���
	//3����
	//for , while ,do while

	//�ݺ��Ѵ�.
	//�ݺ��ϱ� ���ؼ� ������� ����

	//����
	for (int i = 0; i < 1000; i++)
	{

	}
	// =>1000�� �ݺ��Ѵ�
	// �ַ� for���� [i=0;i++]�� ����
	//���������鿡��
	//�ڵ带 ���� �ѱ۷� �ؼ��ϴ� ����
	//�� 1000�� �ݺ��ϴ� �ڵ屸��
	//���̰� �������ִ� �迭�̶� ���� ���� ����


	//while��
	//bool isGamePlaying = true;
	//while (isGamePlaying == true)
	//{
	//	cout << "������ �����Ͻðٽ��ϱ�?(0 : ��, �׿� : �ƴϿ�)" << endl;
	//	int choice;
	//	cin >> choice;
	//	if (choice == 0)
	//	{
	//		isGamePlaying = false;
	//	}
	//}


	// while (���ǽ�)
	//  {
	//     ���౸��
	//  }


	//while�� �׷� ���� �������°�>
	//�츮�� �ѱ۷� �ؼ�������,~~�Ѵ� ���� �̶�� �����̳��� while�� ��

	//for���� =>�� ��
	//while���� => ~~�ϴ� ����


	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//}

	int i = 0;
	while (i < 10)
	{
		cout << i << endl;
		i++;
	}

	// ��¥ ���־Ⱦ��̴� �ݺ���
	//do while

	//do
	//{
	//	���౸��
	//}while(���ǽ�);

	//while���� �������� ���ϳ��ִ�.
	//������ 1���� �����Ѵ�.
	//���ǽ��� ��ġ�ϴ� ��ġ���� �ʴ�

	int choice = 0;
	do
	{
		cout << "�޼�(0)�� ������(1)�߿� �������ּ���." << endl;
		cin >> choice;
	}while(2)

}