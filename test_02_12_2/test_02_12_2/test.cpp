//#include <stdio.h>
//
//void display(int arr[],int size)
//{
//	for(int i=1;i<size;i++)
//		printf("%d ",arr[i]);
//	printf("\n");
//}
//
////ϣ������
//void ShellSort(int arr[],int size)
//{
//	int i,j,dk;
//	for(int dk=size/2;dk>=1;dk=dk/2)
//	{
//		for(int i=dk+1;i<=size;i++)
//		{
//			if(arr[i]<arr[i-dk])
//			{
//				arr[0]=arr[i];
//				for(int j=i-dk;j>0 && arr[0]<arr[i];j-=dk)
//					arr[j+dk]=arr[j];
//				arr[j+dk]=arr[0];
//			}
//		}
//	}
//}
//
//int main()
//{
//	int arr[]={0,5,4,3,2,1};
//	int size=sizeof(arr)/sizeof(arr[0]);
//	display(arr,size);
//	ShellSort(arr,size);
//	display(arr,size);
//	
//	
//
//	return 0;
//}
//�������򡪡�����ϣ�����򣨲��ȶ����ռ临�Ӷ�ΪO(1)���ʱ�临�Ӷ�ΪO(n^2)��
#include <stdio.h>
#include <stdlib.h>

//ϣ�������㷨
void ShellSort(int arr[], int len) {
    int d, i, j;
    //arr[0]ֻ���ݴ浥Ԫ�������ڱ�����j<=0ʱ����ʾ�������λ��
    for (d = len / 2; d >= 1; d /= 2) {         //�����仯��ÿ��ȡһ��
        for (i = d + 1; i <= len; ++i) {        //��ÿ���ӱ�ĵڶ���Ԫ�ؿ�ʼ����ֱ�Ӳ�������
            if (arr[i] < arr[i - d]) {          //��arr[i]��������������
                arr[0] = arr[i];                //��arr[i]�ݴ���arr[0]��
                for (j = i - d; j > 0 && arr[0] < arr[j]; j -= d)
                    arr[j + d] = arr[j];        //��¼���ƣ����Ҳ���λ��
                arr[j + d] = arr[0];            //����
            }
        }
    }
}

int main() {
    //�����е�0��λ�õ�ֵ������Чֵ��
    int arr[] = {0, 49, 38, 65, 97, 76, 13, 27, 49};
    int len = sizeof(arr) / sizeof(int);
    //ϣ������
    ShellSort(arr, len);
    //��������Ľ��������
    printf("ϣ��������Ϊ��");
    for (int i = 1; i < len; ++i) {
        printf("%d ", arr[i]);
    }
    return 0;
}
