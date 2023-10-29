// DlgTest.cpp: 구현 파일
//

#include "pch.h"
#include "MExDlg.h"
#include "afxdialogex.h"
#include "DlgTest.h"



// CDlgTest 대화 상자

IMPLEMENT_DYNAMIC(CDlgTest, CDialogEx)

CDlgTest::CDlgTest(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIGTEST, pParent)
	, m_bCheckButton(FALSE)
	, m_strEdit(_T(""))
{

}

CDlgTest::~CDlgTest()
{
}

void CDlgTest::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Check(pDX, IDC_CHECK1, m_bCheckButton);
	DDX_Text(pDX, IDC_EDIT1, m_strEdit);
	DDX_Control(pDX, IDC_LIST1, m_ListBox);
	DDX_Control(pDX, IDC_COMBO1, m_ComboBox);
	DDX_Control(pDX, IDC_SLIDER1, m_Slider);
}


BEGIN_MESSAGE_MAP(CDlgTest, CDialogEx)
	ON_BN_CLICKED(IDC_CHECK1, &CDlgTest::OnBnClickedCheck1)
	ON_BN_CLICKED(IDC_RADIO1, &CDlgTest::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO2, &CDlgTest::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_BUTTON1, &CDlgTest::OnBnClickedButton1)
	ON_EN_CHANGE(IDC_EDIT1, &CDlgTest::OnEnChangeEdit1)
	ON_CBN_SELCHANGE(IDC_COMBO1, &CDlgTest::OnSelchangeCombo1)
	ON_LBN_SELCHANGE(IDC_LIST1, &CDlgTest::OnSelchangeList1)
	ON_NOTIFY(NM_CUSTOMDRAW, IDC_SLIDER1, &CDlgTest::OnNMCustomdrawSlider1)
	ON_EN_CHANGE(IDC_SLIDER_EDIT, &CDlgTest::OnEnChangeSliderEdit)
	ON_EN_CHANGE(IDC_EDIT_SPIN, &CDlgTest::OnEnChangeEditSpin)
	ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN1, &CDlgTest::OnDeltaposSpin1)
END_MESSAGE_MAP()


// CDlgTest 메시지 처리기


void CDlgTest::OnBnClickedCheck1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	UpdateData(TRUE);
	CString message;
	message.Format(_T("Check button press value:%d"),m_bCheckButton);
	AfxMessageBox(message);

}

void CDlgTest::OnBnClickedRadio1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	AfxMessageBox(_T("Radio Button 1 Press"));	
}


void CDlgTest::OnBnClickedRadio2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	AfxMessageBox(_T("Radio Button 2 Press"));
}

void CDlgTest::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	AfxMessageBox(_T("Button 1 Press"));
}


void CDlgTest::OnEnChangeEdit1()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

void CDlgTest::OnEnChangeEdit3()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}

BOOL CDlgTest::OnInitDialog()
{
	CDialog::OnInitDialog();
	m_strEdit = _T("Hello Everyone!! AIOT Intel Class!!");
	UpdateData(FALSE);
	spin_value = 0;

	CString data;
	for (int i = 1; i < 11; i++)
	{
		data.Format(_T("List data%d"), i);
		m_ListBox.AddString(data);
		data.Format(_T("Combo data%d"), i);
		m_ComboBox.AddString(data);
	}
	m_Slider.SetRange(2000, 2300, TRUE);
	m_Slider.SetPos(2023);


	return TRUE;
}


void CDlgTest::OnSelchangeCombo1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	int num = m_ComboBox.GetCurSel();
	CString data;
	m_ComboBox.GetLBText(num, data);
	AfxMessageBox(data);

}


void CDlgTest::OnSelchangeList1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	int num = m_ListBox.GetCurSel();//Search the current position
	CString data;
	m_ListBox.GetText(num, data);//get character at select position
	AfxMessageBox(data);//output message box
}


void CDlgTest::OnEnChangeEdit4()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgTest::OnNMCustomdrawSlider1(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMCUSTOMDRAW pNMCD = reinterpret_cast<LPNMCUSTOMDRAW>(pNMHDR);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	int position;
	position = m_Slider.GetPos();
	SetDlgItemInt(IDC_SLIDER_EDIT, position);
	*pResult = 0;
}


void CDlgTest::OnEnChangeSliderEdit()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgTest::OnEnChangeEditSpin()
{
	// TODO:  RICHEDIT 컨트롤인 경우, 이 컨트롤은
	// CDialogEx::OnInitDialog() 함수를 재지정 
	//하고 마스크에 OR 연산하여 설정된 ENM_CHANGE 플래그를 지정하여 CRichEditCtrl().SetEventMask()를 호출하지 않으면
	// 이 알림 메시지를 보내지 않습니다.

	// TODO:  여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CDlgTest::OnDeltaposSpin1(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.

	if (pNMUpDown->iDelta < 0) {
		spin_value++;
	}
	else {
		spin_value--;
	}
	SetDlgItemInt(IDC_EDIT_SPIN, spin_value);
	*pResult = 0;
}
