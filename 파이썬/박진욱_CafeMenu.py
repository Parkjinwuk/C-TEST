menu_list =  { 1 :"카페_아메리카노 Short 3600",
               2 :"카페_아메리카노 Tall 4100",
               3 :"카페_라떼 Short 4100",
               4 :"카페_라떼 Tall 4600",
               5 :"카푸치노 Short 4100",
               6 :"카푸치노 Tall 4600",
               7 :"카페모카 Short 4100",
               8 :"카페모카 Tall 4600",
               9 :"카라멜_마키아또 Short 5100",
               10 :"카라멜_마키아또 Tall 5600",
               11 :"스타벅스_돌체_라떼 Short 5100",
               12 :"스타벅스_돌체_라떼 Tall 5600"
             }

def selectmenu():
    print("\n========CAFE MENU 리스트========\n")
    for k in menu_list.keys() :
        print('[%d] %s' %(k, menu_list[k]))
    print("\n")

def ordermenu():
    total_price = 0
    while True:
        enter_menu = input(str(list(menu_list.keys())) +
            "메뉴를 골라주세요 (0 입력시 총 금액, -1 입력시 영업 종료 ) >>> ")
        if(enter_menu == "1") :
            total_price += 3600
        elif(enter_menu == "2") :
            total_price += 4100
        elif(enter_menu == "3") :
            total_price += 4100
        elif(enter_menu == "4") :
            total_price += 4600
        elif(enter_menu == "5") :
            total_price += 4100
        elif(enter_menu == "6") :
            total_price += 4600
        elif(enter_menu == "7") :
            total_price += 4100
        elif(enter_menu == "8") :
            total_price += 4600
        elif(enter_menu == "9") :
            total_price += 5100
        elif(enter_menu == "10") :
            total_price += 5600
        elif(enter_menu == "11") :
            total_price += 5100
        elif(enter_menu == "12") :
            total_price += 5600
        elif(enter_menu == "0") :
            print("총 계산 금액은 %d원 입니다." %total_price)
        elif(enter_menu == "-1") :
            break
        else :
            print("그런 메뉴는 없습니다.")

## 메인 코드 ##
selectmenu()
ordermenu()
print("\n 이용해주셔서 감사합니다")
