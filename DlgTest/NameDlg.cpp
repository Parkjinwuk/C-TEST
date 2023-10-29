// NameDlg.cpp: 구현 파일
//

#include "pch.h"
#include "DlgTest.h"
#include "afxdialogex.h"
#include "NameDlg.h"


// CNameDlg 대화 상자

IMPLEMENT_DYNAMIC(CNameDlg, CDialogEx)

CNameDlg::CNameDlg(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
	, m_strName(_T(""))
	, m_nAge(0)
	, m_bLicense(FALSE)
	, m_nJob(0)
	, m_nResidence(0)
{

}

CNameDlg::~CNameDlg()
{
}

void CNameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
	DDX_Text(pDX, IDC_EDIT2, m_strName);
	DDV_MaxChars(pDX, m_strName, 10);
	DDX_Text(pDX, IDC_EDIT3, m_nAge);
	DDV_MinMaxInt(pDX, m_nAge, 0, 100);
	DDX_Check(pDX, IDC_CHECK1, m_bLicense);
	DDX_Radio(pDX, IDC_RADIO1, m_nJob);
	DDX_Radio(pDX, IDC_RADIO5, m_nResidence);
}


BEGIN_MESSAGE_MAP(CNameDlg, CDialogEx)
	ON_BN_CLICKED(IDC_RADIO2, &CNameDlg::OnBnClickedRadio2)
	ON_BN_CLICKED(IDC_RADIO1, &CNameDlg::OnBnClickedRadio1)
	ON_BN_CLICKED(IDC_RADIO4, &CNameDlg::OnBnClickedRadio4)
	ON_BN_CLICKED(IDC_RADIO6, &CNameDlg::OnBnClickedRadio6)
	ON_BN_CLICKED(IDC_RADIO5, &CNameDlg::OnBnClickedRadio5)
	ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN1, &CNameDlg::OnDeltaposSpin1)
END_MESSAGE_MAP()


// CNameDlg 메시지 처리기


void CNameDlg::OnBnClickedRadio2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CNameDlg::OnBnClickedRadio1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CNameDlg::OnBnClickedRadio4()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CNameDlg::OnBnClickedRadio6()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CNameDlg::OnBnClickedRadio5()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
}


void CNameDlg::OnDeltaposSpin1(NMHDR* pNMHDR, LRESULT* pResult)
{
	LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	*pResult = 0;
}
