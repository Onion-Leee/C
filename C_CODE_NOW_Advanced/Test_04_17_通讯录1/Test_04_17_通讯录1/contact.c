#include "contact.h"

void CheckCapacity(Contact* pcon)
{
	if (pcon->sz == pcon->capacity)
	{
		//ÿ������˫��
		PeoInfo* ptr = realloc(pcon->data, (pcon->capacity * 2) * sizeof(PeoInfo));
		if (ptr != NULL)
		{
			pcon->data = ptr;
			pcon->capacity *= 2;
			printf("���ݳɹ�\n");
		}
	}
}
void DestroyContact(Contact* pcon)
{
	free(pcon->data);
	pcon->data = NULL;
	pcon->capacity = 0;
	pcon->sz = 0;
}
//��ʼ��ͨѶ¼
void InitContact(Contact* pcon)
{
	assert(pcon);
	pcon->sz = 0;
	//memset(pcon->data, 0, sizeof(pcon->data));
	pcon->data = (PeoInfo*)calloc(DEFAULT_SZ, sizeof(PeoInfo)); //����Ĭ�ϴ�С�����
	if (pcon->data == NULL) //�������Ƿ�ɹ�
	{
		printf("%s\n", strerror(errno));
		return;
	}
	pcon->capacity = DEFAULT_SZ;
}

//���
void ADD1(Contact* pcon)
{
	assert(pcon);
	CheckCapacity(pcon);
	printf("���������֣�");
	scanf("%s", pcon->data[pcon->sz].name);
	printf("���������䣺");
	scanf("%d", &(pcon->data[pcon->sz].age));
	printf("�������Ա�");
	scanf("%s", pcon->data[pcon->sz].sex);
	printf("������绰��");
	scanf("%s", pcon->data[pcon->sz].tele);
	printf("�������ַ��");
	scanf("%s", pcon->data[pcon->sz].addr);

	pcon->sz++;
	printf("���ӳɹ�\n");
}

//����1
static int SEARCH2(Contact* pcon, char name)
{
	int i = 0;
	assert(pcon);
	for (int i = 0; i < pcon->sz; i++)
	{
		if (0 == strcmp(pcon->data[i].name, name));
		{
			return i;
		}
	}
	//�Ҳ���
	return -1;
}

//ɾ��
void DEL1(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�ɾ��\n");
		return;
	}
	//ɾ��
	printf("������Ҫɾ�����˵�����:");
	scanf("%s", name);
	//ɾ��֮ǰ�Ȳ���
	pos = SEARCH2(pcon, name);
	if (pos == -1)
	{
		printf("Ҫɾ������Ŀ������\n");
		return;
	}
	//�Ƴ�
	for (i = pos; i < pcon->sz; i++)
	{
		pcon->data[i] = pcon->data[i + 1];
	}
	pcon->sz--;
	printf("ɾ���ɹ�\n");
}
//����ָ����ϵ����Ϣ
void SEARCH1(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);
	if (pcon->sz == 0)
	{
		printf("ͨѶ¼�ѿգ��޷�����\n");
		return;
	}
	//����
	printf("������Ҫ�����˵����� ��");
	scanf("%s", name);
	pos = SEARCH2(pcon, name);
	if (pos == -1)
	{
		printf("Ҫ���ҵ��˲�����\n");
		return;
	}
	printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data);
	pcon->data[pos].age;
	pcon->data[pos].sex;
	pcon->data[pos].tele;
	pcon->data[pos].addr;
}

//�޸�
void MODIFY1(Contact* pcon)
{
	int i = 0;
	char name[NAME_MAX] = { 0 };
	int pos = 0;
	assert(pcon);

	if (pcon->sz == 0)
	{
		printf("������Ҫ�޸ĵ���Ŀ��������");
		scanf("%s", name);
		//�޸�֮ǰ��Ҫ�Ȳ���
		pos = SEARCH2(pcon, name);
		if (pos == -1)
		{
			printf("Ҫ�޸ĵ���Ŀ������\n");
			return;
		}
		//ѯ��Ҫ�޸�ʲô
		printf("������Ҫ�޸�ʲô��Ϣ(1-����,2-����,3-�Ա�,4-�绰,5-��ַ)");
		int msg;
		scanf("%d", &msg);
		switch (msg)
		{
		case1:
			printf("�������µ�����:");
			scanf("%s", pcon->data[pos].name);
			break;
		case2:
			printf("�������µ�����:");
			scanf("%d", pcon->data[pos].age);
			break;
		case3:
			printf("�������µ��Ա�:");
			scanf("%s", pcon->data[pos].sex);
			break;
		case4:
			printf("�������µĵ绰:");
			scanf("%s", pcon->data[pos].tele);
			break;
		case5:
			printf("�������µĵ�ַ:");
			scanf("%s", pcon->data[pos].addr);
			break;
		default:
			printf("��������\n");
			return;
		}
		printf("�޸ĳɹ�\n");
	}
}

//��ʾ
void SHOW1(const Contact* pcon)
{
	int i = 0;
	assert(pcon);
	printf("%15s\t%5d\t%5s\t%12s\t%20s\n", "����", "����", "�Ա�", "�绰", "��ַ");
	for (i = 0; i < pcon->sz; i++)
	{
		printf("%15s\t%5d\t%5s\t%12s\t%20s\n", pcon->data);
		pcon->data[i].age;
		pcon->data[i].sex;
		pcon->data[i].tele;
		pcon->data[i].addr;
	}
}

//���
void CLEAR1(Contact* pcon)
{
	InitContact(pcon);
}

//����
void SORT1(Contact* pcon)
{
	int i = 0;
	int j = 0;
	PeoInfo tmp;
	for (int i = 0; i < pcon->sz - 1; i++)
	{
		for (j = 0; j < pcon->sz - 1 - i; j++)
		{
			if (0 < strcmp(pcon->data[j].name, pcon->data[j + 1].name))
			{
				tmp = pcon->data[j];
				pcon->data[j] = pcon->data[j + 1];
				pcon->data[j + 1] = tmp;
			}
		}
	}
}