#pragma once
#include "afxdialogex.h"


// CDlgTest 대화 상자

class CDlgTest : public CDialogEx
{
	DECLARE_DYNAMIC(CDlgTest)

public:
	CDlgTest(CWnd* pParent = nullptr);   // 표준 생성자입니다.
	BOOL OnInitDialog(); //추가
	virtual ~CDlgTest();
	int spin_value;

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_DIGTEST };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 지원입니다.

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedRadio2();
	afx_msg void OnBnClickedCheck1();
	afx_msg void OnBnClickedRadio1();
	afx_msg void OnBnClickedButton1();
	BOOL m_bCheckButton;
	afx_msg void OnEnChangeEdit3();
	afx_msg void OnEnChangeEdit1();
	CString m_strEdit;

	afx_msg void OnSelchangeCombo1();
	afx_msg void OnSelchangeList1();
	CListBox m_ListBox;
	CComboBox m_ComboBox;
	afx_msg void OnEnChangeEdit4();
	afx_msg void OnNMCustomdrawSlider1(NMHDR* pNMHDR, LRESULT* pResult);
	CSliderCtrl m_Slider;
	afx_msg void OnEnChangeSliderEdit();
	afx_msg void OnEnChangeEditSpin();
	afx_msg void OnDeltaposSpin1(NMHDR* pNMHDR, LRESULT* pResult);
};
