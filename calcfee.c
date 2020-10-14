#include <stdio.h>
#include <string.h>
int main() {
    char temp[100],curr[10];
    int isfee=0;
    double fee=0,trans=0;
    printf("使用键盘模拟EOF或输入Quit来结束输入\n");
    printf("------------------------------------\n");
    printf("支持的输入：\n");
    printf("ElecFee:查询电费；FeeDetail：查询明细\n");
    printf("ToCurrancy：汇率换算（美，日，欧）\n");
    printf("外币汇率基于2019年10月29日23：35数据\n");
    printf("------------------------------------\n");
    while(scanf("%s",temp)!=EOF){
        if(strcmp(temp,"ElecFee")==0){
            scanf("%lf",&fee);
            isfee=1;
            if(fee<=2760){
                printf("%.1lf RMB\n",fee*0.538);
            }else if(fee<=4800) {
                printf("%.1lf RMB\n", 2760 * 0.538 + (fee - 2760) * 0.558);
            }else{
                printf("%.1lf RMB\n", 2760*0.538+(4800-2760)*0.558+(fee-4800)*0.838);
            }
        }else if(strcmp(temp,"FeeDetail")==0){
            if(!isfee){
                printf("非法输入！未输入度数!\n");
                continue;
            }
            if(fee<=2760){
                printf("%.1f * 0.538 = %.1f\n",fee,fee*0.538);
            }else if(fee<=4800) {
                printf("2760 * 0.538 + (%.1f - 2760) * 0.558 = %.1f\n", fee, 2760 * 0.538 + (fee - 2760) * 0.558);
            }else{
                printf("2760 * 0.538 + (4800 - 2760) * 0.558 + (%.1f - 4800) * 0.838 = %.1f\n",fee, 2760*0.538+(4800-2760)*0.558+(fee-4800)*0.838);
            }
        }else if(strcmp(temp,"ToCurrancy")==0){
            scanf("%s",curr);
            if(!isfee){
                printf("非法输入！未输入用电量!\n");
                continue;
            }
            if(strcmp(curr,"USD")==0){
                trans=7.0658;
                printf("%.1f RMB = %.1f USD\n",fee,fee/trans);
            }else if(strcmp(curr,"JPY")==0){
                trans=0.06488;
                printf("%.1f RMB = %.1f JPY\n",fee,fee/trans);
            }else if(strcmp(curr,"EUR")==0){
                trans=7.8443;
                printf("%.1f RMB = %.1f EUR\n",fee,fee/trans);
            }
        }else if(strcmp(temp,"Quit")==0){
            printf("Bye!");
            return 0;
        } else{
            printf("非法输入！\n");
        }
    }
    return 0;
}
