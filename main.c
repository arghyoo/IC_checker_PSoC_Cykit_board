/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include "project.h"
#define on     1
#define off     0
#include <stdio.h>

void anD(void)
{
CYBIT inA;
    CYBIT inB;
    CYBIT out1_1,out1_2,out1_3,out1_4;
    CYBIT out2_1,out2_2,out2_3,out2_4;
    CYBIT out3_1,out3_2,out3_3,out3_4;
    CYBIT out4_1,out4_2,out4_3,out4_4;
    
    CYBIT outp1,outp2,outp3,outp4;
    CYBIT outA_1,outB_1,outC_1,outD_1;
    CYBIT outA_2,outB_2,outC_2,outD_2;
    CYBIT outA_3,outB_3,outC_3,outD_3;
    CYBIT outA_4,outB_4,outC_4,outD_4;
    CYBIT ch1,ch2,ch3,ch4, ch;
    
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("IC checking AND 7408");
    CyDelay(2000);
   
//    for(;;)
//    {
    
//////////////////////////////////////////////////////////////////////////////////////////////////////// 
    
    inA=off;
    inB=off;
    outp1=(inA && inB);
    Pin_1_Write(off);
    Pin_2_Write(off);
    Pin_4_Write(off);
    Pin_5_Write(off);
    Pin_13_Write(off);
    Pin_12_Write(off);
    Pin_10_Write(off);
    Pin_9_Write(off);
    out1_1=Pin_3_Read();
    out1_2=Pin_6_Read();
    out1_3=Pin_11_Read();
    out1_4=Pin_8_Read();

        
    Pin_4_Write(out1_1);
    CyDelay(20);
        
    if(outp1==out1_1){
           outA_1=on;
    }
    else{
           outA_1=off;       
    }
    if(outp1==out1_2){
           outA_2=on;
    }
    else{
           outA_2=off;       
    }
    if(outp1==out1_3){
           outA_3=on;
    }
    else{
           outA_3=off;       
    }
    if(outp1==out1_4){
           outA_4=on;
    }
    else{
           outA_4=off;       
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
        
        
        inA=off;
        inB=on;
        outp2=(inA && inB);
        Pin_1_Write(off);
        Pin_2_Write(on);
        Pin_4_Write(off);
        Pin_5_Write(on);
        Pin_13_Write(off);
        Pin_12_Write(on);
        Pin_10_Write(off);
        Pin_9_Write(on);
        CyDelay(20);
        out2_1=Pin_3_Read();
        out2_2=Pin_6_Read();
        out2_3=Pin_11_Read();
        out2_4=Pin_8_Read();
    
        
        
        Pin_4_Write(out2_1);
     CyDelay(20);
        
    if(outp2==out2_1){
           outB_1=on;
    }
    else{
           outB_1=off;       
    }
    if(outp2==out2_2){
           outB_2=on;
    }
    else{
           outB_2=off;       
    }
    if(outp2==out2_3){
           outB_3=on;
    }
    else{
           outB_3=off;       
    }
    if(outp2==out2_4){
           outB_4=on;
    }
    else{
           outB_4=off;       
    }
    
     ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    inA=on;
    inB=off;
    outp3=(inA && inB);
    
    Pin_1_Write(on);
    Pin_2_Write(off);
    Pin_4_Write(on);
    Pin_5_Write(off);
    Pin_13_Write(on);
    Pin_12_Write(off);
    Pin_10_Write(on);
    Pin_9_Write(off);
   
    CyDelay(20);
    out3_1=Pin_3_Read();
    out3_2=Pin_6_Read();
    out3_3=Pin_11_Read();
    out3_4=Pin_8_Read();
    
    Pin_4_Write(out3_1);
    if(outp3==out3_1){
           outC_1=on;
    }
    else{
           outC_1=off;       
    }
    if(outp3==out3_2){
           outC_2=on;
    }
    else{
           outC_2=off;       
    }
    if(outp3==out3_3){
           outC_3=on;
    }
    else{
           outC_3=off;       
    }
    if(outp3==out3_4){
           outC_4=on;
    }
    else{
           outC_4=off;       
    }
 
     
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    inA=on;
    inB=on;
    outp4=(inA && inB);
    Pin_1_Write(on);
    Pin_2_Write(on);
    Pin_4_Write(on);
    Pin_5_Write(on);
    Pin_13_Write(on);
    Pin_12_Write(on);
    Pin_10_Write(on);
    Pin_9_Write(on);
    
    CyDelay(20);
    out4_1=Pin_3_Read();
    out4_2=Pin_6_Read();
    out4_3=Pin_11_Read();
    out4_4=Pin_8_Read();
    Pin_4_Write(out4_1);
    
    Pin_4_Write(out4_1);
    
    CyDelay(20);
    if(outp4==out4_1){
           outD_1=on;
    }
    else{
           outD_1=off;       
    }
    if(outp4==out4_2){
           outD_2=on;
    }
    else{
           outD_2=off;       
    }
    if(outp4==out4_3){
           outD_3=on;
    }
    else{
           outD_3=off;       
    }
    if(outp4==out4_4){
           outD_4=on;
    }
    else{
           outD_4=off;       
    }
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    
    ch1=(outA_1 && outB_1 && outC_1 && outD_1 );
    ch2=(outA_2 && outB_2 && outC_2 && outD_2 );
    ch3=(outA_3 && outB_3 && outC_3 && outD_3 );
    ch4=(outA_4 && outB_4 && outC_4 && outD_4 );
    ch = (ch1 && ch2 && ch3 && ch4);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
if(ch==on)
    {
        LCD_Position(1,5);

        LCD_PrintString("Working");
    }
    else if(ch== off)
    {
        LCD_Position(1,5);
       

        LCD_PrintString("Not Working");
    }
    
    
//}
}


////////////////////////////////////////////////////////////////

//////////////////////////////////////////////////////////////////

void noR(void)
{
    CYBIT inA;
    CYBIT inB;
    CYBIT out1_1,out1_2,out1_3,out1_4;
    CYBIT out2_1,out2_2,out2_3,out2_4;
    CYBIT out3_1,out3_2,out3_3,out3_4;
    CYBIT out4_1,out4_2,out4_3,out4_4;
    
    CYBIT outp1,outp2,outp3,outp4;
    CYBIT outA_1,outB_1,outC_1,outD_1;
    CYBIT outA_2,outB_2,outC_2,outD_2;
    CYBIT outA_3,outB_3,outC_3,outD_3;
    CYBIT outA_4,outB_4,outC_4,outD_4;
    CYBIT ch1,ch2,ch3,ch4, ch;
    

 LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Checking NOR 7402");
    CyDelay(2000);
//////////////////////////////////////////////////////////////////////////////////////////////////////// 
    
    inA=off;
    inB=off;
    outp1=!(inA || inB);
    Pin_2_Write(off);
    Pin_3_Write(off);
    Pin_5_Write(off);
    Pin_6_Write(off);
    Pin_11_Write(off);
    Pin_12_Write(off);
    Pin_8_Write(off);
    Pin_9_Write(off);
    out1_1=Pin_1_Read();
    out1_2=Pin_4_Read();
    out1_3=Pin_13_Read();
    out1_4=Pin_10_Read();

        
    Pin_5_Write(out1_1);
    CyDelay(20);
        
    if(outp1==out1_1){
           outA_1=on;
    }
    else{
           outA_1=off;       
    }
    if(outp1==out1_2){
           outA_2=on;
    }
    else{
           outA_2=off;       
    }
    if(outp1==out1_3){
           outA_3=on;
    }
    else{
           outA_3=off;       
    }
    if(outp1==out1_4){
           outA_4=on;
    }
    else{
           outA_4=off;       
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
        
        
        inA=off;
        inB=on;
        outp2=!(inA || inB);
        Pin_2_Write(off);
        Pin_3_Write(on);
        Pin_5_Write(off);
        Pin_6_Write(on);
        Pin_11_Write(off);
        Pin_12_Write(on);
        Pin_8_Write(off);
        Pin_9_Write(on);
        CyDelay(20);
        out2_1=Pin_1_Read();
        out2_2=Pin_4_Read();
        out2_3=Pin_13_Read();
        out2_4=Pin_10_Read();
    
        
        
        Pin_5_Write(out2_1);
     CyDelay(20);
        
    if(outp2==out2_1){
           outB_1=on;
    }
    else{
           outB_1=off;       
    }
    if(outp2==out2_2){
           outB_2=on;
    }
    else{
           outB_2=off;       
    }
    if(outp2==out2_3){
           outB_3=on;
    }
    else{
           outB_3=off;       
    }
    if(outp2==out2_4){
           outB_4=on;
    }
    else{
           outB_4=off;       
    }
    
     ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    inA=on;
    inB=off;
    outp3=!(inA || inB);
    
    Pin_2_Write(on);
    Pin_3_Write(off);
    Pin_5_Write(on);
    Pin_6_Write(off);
    Pin_11_Write(on);
    Pin_12_Write(off);
    Pin_8_Write(on);
    Pin_9_Write(off);
   
    CyDelay(20);
    out3_1=Pin_1_Read();
    out3_2=Pin_4_Read();
    out3_3=Pin_13_Read();
    out3_4=Pin_10_Read();
    
    Pin_5_Write(out3_1);
    if(outp3==out3_1){
           outC_1=on;
    }
    else{
           outC_1=off;       
    }
    if(outp3==out3_2){
           outC_2=on;
    }
    else{
           outC_2=off;       
    }
    if(outp3==out3_3){
           outC_3=on;
    }
    else{
           outC_3=off;       
    }
    if(outp3==out3_4){
           outC_4=on;
    }
    else{
           outC_4=off;       
    }
 
    
     
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    inA=on;
    inB=on;
    outp4=!(inA || inB);
    Pin_2_Write(on);
    Pin_3_Write(on);
    Pin_5_Write(on);
    Pin_6_Write(on);
    Pin_11_Write(on);
    Pin_12_Write(on);
    Pin_8_Write(on);
    Pin_9_Write(on);
    
    CyDelay(20);
    out4_1=Pin_1_Read();
    out4_2=Pin_4_Read();
    out4_3=Pin_13_Read();
    out4_4=Pin_10_Read();
    
    
    Pin_5_Write(out4_1);
    
    CyDelay(20);
    if(outp4==out4_1){
           outD_1=on;
    }
    else{
           outD_1=off;       
    }
    if(outp4==out4_2){
           outD_2=on;
    }
    else{
           outD_2=off;       
    }
    if(outp4==out4_3){
           outD_3=on;
    }
    else{
           outD_3=off;       
    }
    if(outp4==out4_4){
           outD_4=on;
    }
    else{
           outD_4=off;       
    }
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    
    ch1=(outA_1 && outB_1 && outC_1 && outD_1 );
    ch2=(outA_2 && outB_2 && outC_2 && outD_2 );
    ch3=(outA_3 && outB_3 && outC_3 && outD_3 );
    ch4=(outA_4 && outB_4 && outC_4 && outD_4 );
    ch = (ch1 && ch2 && ch3 && ch4);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
if(ch==on)
    {   
        LCD_ClearDisplay();
        LCD_Position(1,5);

        LCD_PrintString("Working");
    }
    else if(ch== off)
    {
        LCD_ClearDisplay();
        LCD_Position(1,5);
        LCD_PrintString("Not Working");
    }
    
    
//}
}

////////////////////////////////////////

///////////////////////////////////////////////////////////////////////

void noT(void)
{
    CYBIT in;
    CYBIT out1_1,out1_2,out1_3,out1_4,out1_5,out1_6;
    CYBIT out2_1,out2_2,out2_3,out2_4,out2_5,out2_6;
    CYBIT out3_1,out3_2,out3_3,out3_4,out3_5,out3_6;
    CYBIT out4_1,out4_2,out4_3,out4_4,out4_5,out4_6;
    
    CYBIT outp1,outp2;
    CYBIT outA_1,outA_2,outA_3,outA_4,outA_5,outA_6;
    CYBIT outB_1,outB_2,outB_3,outB_4,outB_5,outB_6;

    CYBIT ch1,ch2,ch3,ch4,ch5,ch6, ch;
    
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Checking NOT 7404");
    CyDelay(2000);
   
//    for(;;)
//    {
    
//////////////////////////////////////////////////////////////////////////////////////////////////////// 
    
    in=off;
    outp1=!in;
    Pin_1_Write(off);
    Pin_3_Write(off);
    Pin_5_Write(off);
    Pin_13_Write(off);
    Pin_11_Write(off);
    Pin_9_Write(off);
    out1_1=Pin_2_Read();
    out1_2=Pin_4_Read();
    out1_3=Pin_6_Read();
    out1_4=Pin_12_Read();
    out1_5=Pin_10_Read();
    out1_6=Pin_8_Read();

        
    Pin_3_Write(out1_1);
    CyDelay(20);
        
    if(outp1==out1_1){
           outA_1=on;
    }
    else{
           outA_1=off;       
    }
    if(outp1==out1_2){
           outA_2=on;
    }
    else{
           outA_2=off;       
    }
    if(outp1==out1_3){
           outA_3=on;
    }
    else{
           outA_3=off;       
    }
    if(outp1==out1_4){
           outA_4=on;
    }
    else{
           outA_4=off;       
    }
    
     if(outp1==out1_5){
           outA_5=on;
    }
    else{
           outA_5=off;       
    }
    
     if(outp1==out1_6){
           outA_6=on;
    }
    else{
           outA_6=off;       
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
        
        
    in=on;
    outp2=!in;
    Pin_1_Write(on);
    Pin_3_Write(on);
    Pin_5_Write(on);
    Pin_13_Write(on);
    Pin_11_Write(on);
    Pin_9_Write(on);
    out2_1=Pin_2_Read();
    out2_2=Pin_4_Read();
    out2_3=Pin_6_Read();
    out2_4=Pin_12_Read();
    out2_5=Pin_10_Read();
    out2_6=Pin_8_Read();
    
        
        
        Pin_3_Write(out2_1);
     CyDelay(20);
        
    if(outp2==out2_1){
           outB_1=on;
    }
    else{
           outB_1=off;       
    }
    if(outp2==out2_2){
           outB_2=on;
    }
    else{
           outB_2=off;       
    }
    if(outp2==out2_3){
           outB_3=on;
    }
    else{
           outB_3=off;       
    }
    if(outp2==out2_4){
           outB_4=on;
    }
    else{
           outB_4=off;       
    }
    
    if(outp2==out2_5){
           outB_5=on;
    }
    else{
           outB_5=off;       
    }
    
    if(outp2==out2_6){
           outB_6=on;
    }
    else{
           outB_6=off;       
    }
    

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    
    ch1=(outA_1 && outB_1);
    ch2=(outA_2 && outB_2);
    ch3=(outA_3 && outB_3);
    ch4=(outA_4 && outB_4);
    ch5=(outA_5 && outB_5);
    ch6=(outA_6 && outB_6);
    ch = (ch1 && ch2 && ch3 && ch4 && ch5 && ch6);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
if(ch==on)
    {
        LCD_ClearDisplay();
        LCD_Position(1,5);

        LCD_PrintString("Working");
    }
    else if(ch== off)
    {
        LCD_ClearDisplay();
        LCD_Position(1,5);
       

        LCD_PrintString("Not Working");
    }
    
    
//}
}


//////////////////////////////////////////////////////////

///////////////////////////////////////////////////////////

void oR(void)
{
    CYBIT inA;
    CYBIT inB;
    CYBIT out1_1,out1_2,out1_3,out1_4;
    CYBIT out2_1,out2_2,out2_3,out2_4;
    CYBIT out3_1,out3_2,out3_3,out3_4;
    CYBIT out4_1,out4_2,out4_3,out4_4;
    
    CYBIT outp1,outp2,outp3,outp4;
    CYBIT outA_1,outB_1,outC_1,outD_1;
    CYBIT outA_2,outB_2,outC_2,outD_2;
    CYBIT outA_3,outB_3,outC_3,outD_3;
    CYBIT outA_4,outB_4,outC_4,outD_4;
    CYBIT ch1,ch2,ch3,ch4, ch;
    
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Checking OR 7432");
    CyDelay(2000);
   
//    for(;;)
//    {
    
//////////////////////////////////////////////////////////////////////////////////////////////////////// 
    
    inA=off;
    inB=off;
    outp1=(inA || inB);
    Pin_1_Write(off);
    Pin_2_Write(off);
    Pin_4_Write(off);
    Pin_5_Write(off);
    Pin_13_Write(off);
    Pin_12_Write(off);
    Pin_10_Write(off);
    Pin_9_Write(off);
    out1_1=Pin_3_Read();
    out1_2=Pin_6_Read();
    out1_3=Pin_11_Read();
    out1_4=Pin_8_Read();

        
    Pin_4_Write(out1_1);
    CyDelay(20);
        
    if(outp1==out1_1){
           outA_1=on;
    }
    else{
           outA_1=off;       
    }
    if(outp1==out1_2){
           outA_2=on;
    }
    else{
           outA_2=off;       
    }
    if(outp1==out1_3){
           outA_3=on;
    }
    else{
           outA_3=off;       
    }
    if(outp1==out1_4){
           outA_4=on;
    }
    else{
           outA_4=off;       
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
        
        
        inA=off;
        inB=on;
        outp2=(inA || inB);
        Pin_1_Write(off);
        Pin_2_Write(on);
        Pin_4_Write(off);
        Pin_5_Write(on);
        Pin_13_Write(off);
        Pin_12_Write(on);
        Pin_10_Write(off);
        Pin_9_Write(on);
        CyDelay(20);
        out2_1=Pin_3_Read();
        out2_2=Pin_6_Read();
        out2_3=Pin_11_Read();
        out2_4=Pin_8_Read();
    
        
        
        Pin_4_Write(out2_1);
     CyDelay(20);
        
    if(outp2==out2_1){
           outB_1=on;
    }
    else{
           outB_1=off;       
    }
    if(outp2==out2_2){
           outB_2=on;
    }
    else{
           outB_2=off;       
    }
    if(outp2==out2_3){
           outB_3=on;
    }
    else{
           outB_3=off;       
    }
    if(outp2==out2_4){
           outB_4=on;
    }
    else{
           outB_4=off;       
    }
    
     ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    inA=on;
    inB=off;
    outp3=(inA || inB);
    
    Pin_1_Write(on);
    Pin_2_Write(off);
    Pin_4_Write(on);
    Pin_5_Write(off);
    Pin_13_Write(on);
    Pin_12_Write(off);
    Pin_10_Write(on);
    Pin_9_Write(off);
   
    CyDelay(20);
    out3_1=Pin_3_Read();
    out3_2=Pin_6_Read();
    out3_3=Pin_11_Read();
    out3_4=Pin_8_Read();
    
    Pin_4_Write(out3_1);
    if(outp3==out3_1){
           outC_1=on;
    }
    else{
           outC_1=off;       
    }
    if(outp3==out3_2){
           outC_2=on;
    }
    else{
           outC_2=off;       
    }
    if(outp3==out3_3){
           outC_3=on;
    }
    else{
           outC_3=off;       
    }
    if(outp3==out3_4){
           outC_4=on;
    }
    else{
           outC_4=off;       
    }
 
    
     
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    inA=on;
    inB=on;
    outp4=(inA || inB);
    Pin_1_Write(on);
    Pin_2_Write(on);
    Pin_4_Write(on);
    Pin_5_Write(on);
    Pin_13_Write(on);
    Pin_12_Write(on);
    Pin_10_Write(on);
    Pin_9_Write(on);
    
    CyDelay(20);
    out4_1=Pin_3_Read();
    out4_2=Pin_6_Read();
    out4_3=Pin_11_Read();
    out4_4=Pin_8_Read();
    Pin_4_Write(out4_1);
    
    Pin_4_Write(out4_1);
    
    CyDelay(20);
    if(outp4==out4_1){
           outD_1=on;
    }
    else{
           outD_1=off;       
    }
    if(outp4==out4_2){
           outD_2=on;
    }
    else{
           outD_2=off;       
    }
    if(outp4==out4_3){
           outD_3=on;
    }
    else{
           outD_3=off;       
    }
    if(outp4==out4_4){
           outD_4=on;
    }
    else{
           outD_4=off;       
    }
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    
    ch1=(outA_1 && outB_1 && outC_1 && outD_1 );
    ch2=(outA_2 && outB_2 && outC_2 && outD_2 );
    ch3=(outA_3 && outB_3 && outC_3 && outD_3 );
    ch4=(outA_4 && outB_4 && outC_4 && outD_4 );
    ch = (ch1 && ch2 && ch3 && ch4);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
if(ch==on)
    {
        LCD_ClearDisplay();
        LCD_Position(1,5);

        LCD_PrintString("Working");
    }
    else if(ch== off)
    {
        LCD_ClearDisplay();
        LCD_Position(1,5);
       

        LCD_PrintString("Not Working");
    }
    
    
//}
}








////////////////////////////////////////////////////

//////////////////////////////////////////////////////
void nanD(void)
{

CYBIT inA;
    CYBIT inB;
    CYBIT out1_1,out1_2,out1_3,out1_4;
    CYBIT out2_1,out2_2,out2_3,out2_4;
    CYBIT out3_1,out3_2,out3_3,out3_4;
    CYBIT out4_1,out4_2,out4_3,out4_4;
    
    CYBIT outp1,outp2,outp3,outp4;
    CYBIT outA_1,outB_1,outC_1,outD_1;
    CYBIT outA_2,outB_2,outC_2,outD_2;
    CYBIT outA_3,outB_3,outC_3,outD_3;
    CYBIT outA_4,outB_4,outC_4,outD_4;
    CYBIT ch1,ch2,ch3,ch4, ch;
    
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Checking NAND 7400");
    CyDelay(2000);
   
//    for(;;)
//    {
    
//////////////////////////////////////////////////////////////////////////////////////////////////////// 
    
    inA=off;
    inB=off;
    outp1=!(inA && inB);
    Pin_1_Write(off);
    Pin_2_Write(off);
    Pin_4_Write(off);
    Pin_5_Write(off);
    Pin_13_Write(off);
    Pin_12_Write(off);
    Pin_10_Write(off);
    Pin_9_Write(off);
    out1_1=Pin_3_Read();
    out1_2=Pin_6_Read();
    out1_3=Pin_11_Read();
    out1_4=Pin_8_Read();

        
    Pin_4_Write(out1_1);
    CyDelay(20);
        
    if(outp1==out1_1){
           outA_1=on;
    }
    else{
           outA_1=off;       
    }
    if(outp1==out1_2){
           outA_2=on;
    }
    else{
           outA_2=off;       
    }
    if(outp1==out1_3){
           outA_3=on;
    }
    else{
           outA_3=off;       
    }
    if(outp1==out1_4){
           outA_4=on;
    }
    else{
           outA_4=off;       
    }
    
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
        
        
        inA=off;
        inB=on;
        outp2=!(inA && inB);
        Pin_1_Write(off);
        Pin_2_Write(on);
        Pin_4_Write(off);
        Pin_5_Write(on);
        Pin_13_Write(off);
        Pin_12_Write(on);
        Pin_10_Write(off);
        Pin_9_Write(on);
        CyDelay(20);
        out2_1=Pin_3_Read();
        out2_2=Pin_6_Read();
        out2_3=Pin_11_Read();
        out2_4=Pin_8_Read();
    
        
        
        Pin_4_Write(out2_1);
     CyDelay(20);
        
    if(outp2==out2_1){
           outB_1=on;
    }
    else{
           outB_1=off;       
    }
    if(outp2==out2_2){
           outB_2=on;
    }
    else{
           outB_2=off;       
    }
    if(outp2==out2_3){
           outB_3=on;
    }
    else{
           outB_3=off;       
    }
    if(outp2==out2_4){
           outB_4=on;
    }
    else{
           outB_4=off;       
    }
    
     ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    inA=on;
    inB=off;
    outp3=!(inA && inB);
    
    Pin_1_Write(on);
    Pin_2_Write(off);
    Pin_4_Write(on);
    Pin_5_Write(off);
    Pin_13_Write(on);
    Pin_12_Write(off);
    Pin_10_Write(on);
    Pin_9_Write(off);
   
    CyDelay(20);
    out3_1=Pin_3_Read();
    out3_2=Pin_6_Read();
    out3_3=Pin_11_Read();
    out3_4=Pin_8_Read();
    
    Pin_4_Write(out3_1);
    if(outp3==out3_1){
           outC_1=on;
    }
    else{
           outC_1=off;       
    }
    if(outp3==out3_2){
           outC_2=on;
    }
    else{
           outC_2=off;       
    }
    if(outp3==out3_3){
           outC_3=on;
    }
    else{
           outC_3=off;       
    }
    if(outp3==out3_4){
           outC_4=on;
    }
    else{
           outC_4=off;       
    }
 
    
     
    /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
    inA=on;
    inB=on;
    outp4=!(inA && inB);
    Pin_1_Write(on);
    Pin_2_Write(on);
    Pin_4_Write(on);
    Pin_5_Write(on);
    Pin_13_Write(on);
    Pin_12_Write(on);
    Pin_10_Write(on);
    Pin_9_Write(on);
    
    CyDelay(20);
    out4_1=Pin_3_Read();
    out4_2=Pin_6_Read();
    out4_3=Pin_11_Read();
    out4_4=Pin_8_Read();
   
    
    Pin_4_Write(out4_1);
    
    CyDelay(20);
    if(outp4==out4_1){
           outD_1=on;
    }
    else{
           outD_1=off;       
    }
    if(outp4==out4_2){
           outD_2=on;
    }
    else{
           outD_2=off;       
    }
    if(outp4==out4_3){
           outD_3=on;
    }
    else{
           outD_3=off;       
    }
    if(outp4==out4_4){
           outD_4=on;
    }
    else{
           outD_4=off;       
    }
    
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////    
    
    ch1=(outA_1 && outB_1 && outC_1 && outD_1 );
    ch2=(outA_2 && outB_2 && outC_2 && outD_2 );
    ch3=(outA_3 && outB_3 && outC_3 && outD_3 );
    ch4=(outA_4 && outB_4 && outC_4 && outD_4 );
    ch = (ch1 && ch2 && ch3 && ch4);

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    
if(ch==on)
    {
        LCD_ClearDisplay();
        LCD_Position(1,5);

        LCD_PrintString("Working");
    }
    else if(ch== off)
    {
        LCD_ClearDisplay();
        LCD_Position(1,5);
       

        LCD_PrintString("Not Working");
    }
    
    
//}
}



////////////////////////////////////////////////

////////////////////////////////////////////////






//
//
//
//int main(void)
//{
//    CyGlobalIntEnable; /* Enable global interrupts. */
//     LCD_Start();
//    LCD_Position(0,0);
//    LCD_PrintString("IC Test : Enter");
//    LCD_Position(1,0);
//     LCD_PrintString("SW3->&  SW4->Nand");
//    CyDelay(5000);
//    
//    //anD();
//    
//    
//    
//
//    for(;;)
//    {
//       if(sw1_Read() == 0)
//        {
//            anD();
//        }
//        else if(sw2_Read() == 0)
//        {
//            nanD();
//        }
//        
//        
//        
//        
//        else{
//             LCD_Position(1,2);
//            LCD_ClearDisplay();
//          LCD_PrintString("No selection");
//        CyDelay(2000);
//        }
//        
//    
//}
//}

    
//    nanD();
//    oR();
//    noR();
//    noT();

/* [] END OF FILE */

////////////////////////////////////////////////////

///////////////////////////////////////////////////

int main(void)
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    LCD_Start();
    LCD_Position(0,0);
    LCD_PrintString("Welcome: IC Tester");
    LCD_Position(1,0);
    LCD_PrintString("IIIT Guwahati");
    CyDelay(4000);
    LCD_ClearDisplay();
    LCD_PrintString("Embedded Lab Proj");
    
    LCD_Position(1,0);
   LCD_PrintString("2101041 & 2101043");
   
    CyDelay(4000);
    
    LCD_ClearDisplay();
     LCD_PrintString("Press Switch 1: ");
    LCD_Position(1,0);
    LCD_PrintString("To navigate ");
    CyDelay(4000);
    
    
    anD();
    
    
    int count=1;

    for(;;)
    {
       
    if(sw1_Read() == 0)
        {
            if(count<5)      
                {
                     count =count+1;
                
                }
        else if(count==5)

            {
                count=1;
            }
        }   
         else if(sw2_Read() == 0)
         {
             nanD();
         }
        
        if(count==1){

            LCD_Position(0,0);
            LCD_PrintString("7408 Selected");
            LCD_Position(1,0);
            LCD_PrintString("Press Switch");
            if(sw2_Read() == 0)
            {
                LCD_ClearDisplay();
             anD();
            }
             
        if(count==2){

            LCD_Position(0,0);
            LCD_PrintString("7432 Selected");
            LCD_Position(1,0);
            LCD_PrintString("Press Switch");
            if(sw2_Read() == 0)
            {
                LCD_ClearDisplay();
             oR();
            }
        }
        if(count==3){

            LCD_Position(0,0);
            LCD_PrintString("7400 Selected");
            LCD_Position(1,0);
            LCD_PrintString("Press Switch");
            if(sw2_Read() == 0)
            {
              LCD_ClearDisplay();  
             nanD();
            }
        }
        if(count==4){

            LCD_Position(0,0);
            LCD_PrintString("7402 Selected");
            LCD_Position(1,0);
            LCD_PrintString("Press Switch");
            if(sw2_Read() == 0)
            {
             LCD_ClearDisplay();
             noR();
            }
        }
        if(count==5){

            LCD_Position(0,0);
            LCD_PrintString("7404 Selected");
            LCD_Position(1,0);
            LCD_PrintString("Press Switch");
            if(sw2_Read() == 0)
            {
                LCD_ClearDisplay();
             noT();
            }
        }   
        
    }
}
}
