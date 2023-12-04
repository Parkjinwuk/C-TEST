def preprocess(decompose):
    jump = -1
    discrete = 0
    preprocessed = []
    for i, char in enumerate(decompose):
        if i < jump:
            continue
        criteria = i + 3
        total_size = 0
        if i + 2 == len(decompose):
            discrete = 2
            total_size = 2
        
        elif i + 3 == len(decompose):
            discrete = 3
            total_size = 3

        elif i + 4 == len(decompose):
            discrete = 2
            total_size = 4

        elif criteria < len(decompose) and isMoeum(decompose[i + 3]) == True:
            # 2, 3
            if(i + 5 == len(decompose)) or (i +4 < len(decompose)
                and isMoeum(decompose[i + 5]) == False):
                discrete = 2
                tota_size = 5

            # 2, 2
            else:
                discrete = 2
                total_size = 4

        else:
            if(i+6 == len(decompose)):
                discrete = 3
                total_size = 6

            # 3, 2
            elif (i+5 == len(decompose)) or (i+4<len(decompose)
                    and isMoeum(decompose[i+6]) == True):
                discrete = 3
                total_size = 5

            # 3, 3
            else:
                discrete = 3
                total_size = 6

        buf1 = []
        bif2 = []
        for j in range(discrete):
            buf1.append(decompose[i+j])
        for j in range(total_size - discrete):
            buf2.append(decompose[i+j+discrete])
        if len(buf1) !=0 :
            preprocessed.append(buf1)
        if len(buf2) !=0 :
            preprocessed.append(buf2)
        jump = (i+total_size)
    return preprocessed
