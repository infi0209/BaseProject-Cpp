#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include <math.h>
FILE *ptr1,*ptr2;
int main() {
	
	int choice,week,hour,min,i = 0,j,car,count,min2,b,a[2000] = {},count1 = 0,aa[10]={},k;
	memset(a,0,sizeof(a));
    char temp;
    
    /*for(i = 0;i < 2000;i++)   {
    	a[i] = rand()%49+30; }
    	
    	for(i=1;i<=7;i++){
    	for(j=0;j<=6;j++){
    	    for(k=0;k<=3;k++){
    	    a[168*(i-1)+j*4+k]=rand()%5+10
			;
	}}}
	
	for(i=1;i<=7;i++){
    	for(j=7;j<=8;j++){
    	    for(k=0;k<=3;k++){
    	    a[168*(i-1)+j*4+k]=rand()%49+49
			;
	}}}
for(i=1;i<=7;i++){
    	for(j=12;j<=13;j++){
    	    for(k=0;k<=3;k++){
    	    a[168*(i-1)+j*4+k]=rand()%49+49
			;
	}}}	
	for(i=1;i<=7;i++){
    	for(j=17;j<=18;j++){
    	    for(k=0;k<=3;k++){
    	    a[168*(i-1)+j*4+k]=rand()%49+49
			;
	}}}	
	for(i=1;i<=7;i++){
    	for(j=22;j<=23;j++){
    	    for(k=0;k<=3;k++){
    	    a[168*(i-1)+j*4+k]=rand()%25+25
			;
	}}}	
		for(i=1;i<=7;i++){
    	for(j=6;j<7;j++){
    	    for(k=0;k<=3;k++){
    	    a[168*(i-1)+j*4+k]=rand()%25+25
			;
	}}}	*/
	
    
    ptr1 = fopen("data.txt","r");
    ptr2 = fopen("count.txt","r");
    
	while(!feof(ptr1)) {
		temp = getc(ptr1);
		
		if(temp == ' '||temp == -1) { 
			if(count1 == 2) {
			a[i-2] = a[i-2]*10 + a[i-1];
		    i--;            }
				
			count1 = 0;
				
			if(temp == -1)
			break; }
			
		else      {     
		a[i] = temp-48;
		i++;
		count1++; }     
		               }	
							
	fclose(ptr1);
	i=0;
	count1=0;
	
	
	while(!feof(ptr2)) {
		temp = getc(ptr2);
		if(temp == -1)   { 
			for(i = 0;i < count1;i++)                         {			
			aa[count1] = aa[i]*pow(10,count1-1-i)+aa[count1]; }
			aa[0]=aa[count1];
		    break;       }
				 
		aa[i] = temp-48;
		i++;
		count1++;      }
						
	fclose(ptr2);
	count = aa[0];
	
	B:printf("----*----*----*----*----*----\n");
	       
	while(1)                                    {
	printf("�п�J  1.�w������  2.�s�W���y�q�[�����  0.���� : ");
	
	scanf(" %d",&choice);
	
	if(choice >= 0&&choice <= 2)
	    break;
	    
	printf("��J0��2�H�~���ﶵ  �Э��s��J\n"); } 
	
	if(choice == 1) {
		while(1)                                    { 
		printf("�п�J���d�ߤ��(�P���@�ܬP����  �H�Ʀr��J) : ");
		
		scanf(" %d",&week);
		
		if(week >= 1&&week <= 7)
	    break;
	    
	    printf("��J1��7�H�~���ﶵ  �Э��s��J\n"); } 
	         
	    while(1)                                                { 
		printf("�п�J���d�߮ɶ�(�p�ɻP�����H�Ů�j�} �Ҧp�U��1�I15����13 15) : ");
		
		scanf(" %d %d",&hour,&min);
		
		if(hour >= 0&&hour <= 23) {
		    if(min >= 0&&min <= 59) 
	        break;                } 
	    
	    printf("�p��(0~23)�Τ���(0~59)��J���~  �Э��s��J\n"); } 

	    for(i = 1;i <= 4;i++)   {
	    	if(min < 15 * i) {
	    	min = i-1; 
			break;           }  
			                    }
	    	 	
	    printf("----------------------------------------\n");
	    printf("�ҿ�J���ɶ��e��@�p�ɪ����y�q�p�U :\n");
	    
	    for(i = 0;i < 9;i++) {
	    	if(min == 4) {
	    	hour++;
	    	min = 0;     }
			
			if(hour == 0) {
			    hour = 24;
			    week = week-1;
			    
			    if(week == 0)
				week = 7; }	 
			
			if(hour == 25) {
			    hour = 1;
			    week = week+1;
			    
			    if(week == 8)
				week = 1;  }
			
			if(i == 4)
			printf("---------------------\n");
			
			printf(" %02d:%02d ~ %02d:%d = %d\t",hour-1,min*15,hour-1,min*15+14,a[168*(week-1)+(hour-1)*4+min]); 
			
            for(j = 0;j <= ((a[168*(week-1)+(hour-1)*4+min]-1)/5);j++) {
            	printf("��");                                          }
        
		    printf("\n");  
		   
		    if(i == 4)
		    printf("---------------------\n");
				    	
		    min++;           }
		    goto B; }
		            
	
	if(choice == 2) {
		while(1)                                    { 
		printf("�п�J�[�������(�P���@�ܬP����  �H�Ʀr��J) : ");
		
		scanf(" %d",&week);
		
		if(week >= 1&&week <= 7)
	    break;
	    
	    printf("��J1��7�H�~���ﶵ  �Э��s��J\n"); } 
		
		while(1)                                                { 
		printf("�п�J�[�����ɶ��I(�p�ɻP�����H�Ů�j�} �Ҧp�U��1�I15����13 15) : ");
		
		scanf(" %d %d",&hour,&min);
		
		if(hour >= 0&&hour <= 23) {
		    if(min >= 0&&min <= 59) 
	    break;                    } 
	    
	    printf("�p��(0~23)�Τ���(0~59)��J���~  �Э��s��J\n"); } 
	    
	    min2 = min;

	    for(i = 1;i <= 4;i++)   {
	    	if(min < 15 * i) {
	    	min = i-1; 
			break;           }  
			                    }
			                    
		while(1)                                        { 	                    
		printf("�п�J���[���쪺���y�q(0~99) : ");
		
		scanf(" %d",&car);
		
		if(car >= 0&&car <= 99) 
	    break;                    
	    
	    printf("��J���Ʀr���b0~99����  �Э��s��J\n"); } 
			                    
		b = a[168*(week-1)+hour*4+min];	                                
		a[168*(week-1)+hour*4+min] =((a[168*(week-1)+hour*4+min] * count) + car) / (count+1);
		count++; 
		printf("----------------------------------------\n");
		printf("�K�[���� �쥻�P��%d��%02d:%02d����ɪ����y�q�w���ȥ�����%d �{�w�ܧ�%d\n",week,hour,min2,b,a[168*(week-1)+hour*4+min]); 
		goto B;     }	
		
	ptr1 = fopen("data.txt","w");
	
	for(i = 0;i < 2000;i++)   {
	fprintf(ptr1,"%d ",a[i]); }	
							
	fclose(ptr1);
	
	ptr2 = fopen("count.txt","w");
	
	fprintf(ptr2,"%d",count);	
							
	fclose(ptr2);
}
 
