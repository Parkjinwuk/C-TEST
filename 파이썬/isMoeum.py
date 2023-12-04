def isMoeum(char):
    moeum = ['ㅏ','ㅑ','ㅓ','ㅕ','ㅗ','ㅛ','ㅜ',
             'ㅠ','ㅡ','ㅣ','ㅔ','ㅐ','ㅒ','ㅖ','ㅘ','ㅚ',
             'ㅝ','ㅞ','ㅟ','ㅢ','ㅙ']
    if char in moeum:
        return True
    else:
        return False
