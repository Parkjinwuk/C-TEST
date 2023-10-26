/*
#include <iostream>
#include <fstream>
using namespace std;

int main() {
	char name[10], dept[20];
	int sid;
	cout << "이름>>";
	cin >> name;
	cout << "학번(숫자로)>>";
	cin >> sid;
	cout << "학과>>";
	cin >> dept;

	ofstream fout("c:\\temp\\student.txt");
	if (!fout) {
		cout << "c:\\temp\\student.txt 파일을 열 수 없다";
		return 0;
	}

	fout << name << endl;
	fout << sid << endl;
	fout << dept << endl;

	fout.close();
}
*/


// C에서 엑셀파일 처리[53번 정답]
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX_PEOPLE 10
#define MAX_DATA 100

int main(int argc, char* argv[]) {

    char str_tmp[MAX_DATA], name[MAX_PEOPLE + 1][20], num[MAX_PEOPLE + 1], * p;
    int kor[MAX_PEOPLE + 1], eng[MAX_PEOPLE + 1], math[MAX_PEOPLE + 1], sci[MAX_PEOPLE + 1], role[MAX_PEOPLE + 1], acc[MAX_PEOPLE + 1];
    int i = 0, sum[MAX_PEOPLE + 1], avg[MAX_PEOPLE + 1], rank[MAX_PEOPLE + 1], var[MAX_PEOPLE + 1], s, j = 0, k = 0;
    double std[MAX_PEOPLE + 1];
    FILE* pFile, * outFile;
    char* temp;
    char t1[10], t2[10], t3[10], t4[10], t5[10], t6[10], t7[10], t8[10], t9[10], t10[10], t11[10], t12[10];

    pFile = fopen("sungjuk.csv", "r");
    outFile = fopen("Trans.csv", "w");

    if (pFile != NULL)
    {
        i = 0, sum[0] = sum[1] = 0;
        while (!feof(pFile))
        {
            fgets(str_tmp, MAX_DATA, pFile);
            printf(" %d data : %s ", i, str_tmp);
            //printf("===============================================\n");
            if (i >= 1)
            {
                s = 0; j = 0; sum[i] = 0;
                p = strtok(str_tmp, ",");   // ,기준으로  끊어서 구분

                // printf("%s, ", p);  // number
                num[i] = atoi(p);

                p = strtok(NULL, ",");
                // printf("%s, ", p); // name
                sprintf(name[i], "%s", p);

                p = strtok(NULL, ",");
                //  printf("%s, ", p); // kor
                kor[i] = atoi(p);
                sum[i] += atoi(p);

                p = strtok(NULL, ",");
                // printf("%s, ", p); // ENG
                eng[i] = atoi(p);
                sum[i] += atoi(p);

                p = strtok(NULL, ",");
                //   printf("%s, ", p); // MATH
                math[i] = atoi(p);
                sum[i] += atoi(p);


                p = strtok(NULL, ",");
                //   printf("%s, ", p); // scienc
                sci[i] = atoi(p);
                sum[i] += atoi(p);


                p = strtok(NULL, ",");
                //  printf("%s, ", p); // role
                role[i] = atoi(p);
                sum[i] += atoi(p);

                p = strtok(NULL, ",");
                //   printf("%s, ", p); // acc
                acc[i] = atoi(p);
                sum[i] += atoi(p);

                avg[i] = sum[i] / 6;
                // 표준편차, 분산 알고리즘 추가 
                var[i] = (pow(kor[i] - avg[i], 2) + pow(eng[i] - avg[i], 2) + pow(math[i] - avg[i], 2) + pow(sci[i] - avg[i], 2) + pow(role[i] - avg[i], 2) + pow(acc[i] - avg[i], 2)) / 6;
                std[i] = sqrt(var[i]);

                p = strtok(NULL, ",");
                //   printf("sum= %d ave=%d var=%d std=%.2lf", sum[i], avg[i], var[i], std[i]);
                //   printf("\n====================================================================\n");

            }
            // printf("sum[%d] =%d \n", i, sum[i]);
            i++;

            if (i > MAX_PEOPLE) break;
        }
        /*
              for(i=1;i<=MAX_PEOPLE;i++)
       {
       if(i==1) sum[1]=k;
       printf("sum[%d] =%d \n", i, sum[i]);
       }
       */        // 석차메기기 개선  (오류있음) 

       /*
       for (i = 1; i <= MAX_PEOPLE; i++)
         {
             s = 1;
             for (int j = 1; j <= 10; j++)
             {
                 if (sum[i] < sum[j]) s++;
             }
             rank[i] = s;
             printf("%2d %s = rank %2d\n", i, name[i], rank[i]);
         }
         */

        for (i = 1; i <= MAX_PEOPLE; i++) {
            rank[i] = 1;

            for (int j = 1; j <= MAX_PEOPLE; j++) {
                if (sum[i] < sum[j]) {
                    rank[i]++;
                }
            }

            //printf("%2d %s = rank %2d\n", i, name[i], rank[i]);
        }

        ////////////////////////
        /*   for(i=1;i<=MAX_PEOPLE;i++)
        {
        printf("%d =%d \n", i, sum[i]);
        }
        */ ////////////////////////////////
        //csv 저장용 파일생성   
        printf("\n=============================================================================\n");
        printf("Num| name | kor| eng | math| sci | role| acc | sum | avg | rank| var | std  |\n");

        sprintf(str_tmp, "학번,성명,국어,영어,수학,과학,윤리,회계, 총점,평균,석차,분산,표준편차\n");
        fputs(str_tmp, outFile);

        for (i = 1; i <= MAX_PEOPLE; i++)
        {
            printf("%2d |%s| %3d| %3d | %3d | %3d | %3d | %3d | %3d | %3d | %3d | %3d | %.2lf|\n",
                i, name[i], kor[i], eng[i], math[i], sci[i], role[i], acc[i], sum[i], avg[i], rank[i], var[i], std[i]);
            // to csv format    // visual studio가 되면서 itoa가 아닌 itoa_s를 써야함.
            _itoa_s(i, t1, 10);
            //    printf("%s", &t1);
            _itoa_s(kor[i], t2, 10);
            _itoa_s(eng[i], t3, 10);
            _itoa_s(math[i], t4, 10);
            _itoa_s(sci[i], t5, 10);
            _itoa_s(role[i], t6, 10);
            _itoa_s(acc[i], t7, 10);
            _itoa_s(sum[i], t8, 10);
            _itoa_s(avg[i], t9, 10);
            _itoa_s(rank[i], t10, 10);
            _itoa_s(var[i], t11, 10);
            _itoa_s(std[i], t12, 10);
            sprintf(str_tmp, "%s,%s, %s,%s,%s,%s,%s,%s, %s,%s,%s,%s, %.2lf\n",
                t1, name[i], t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, std[i]);
            fputs(str_tmp, outFile);

        }
    }
    fclose(pFile);
    fclose(outFile);
    return 0;
}