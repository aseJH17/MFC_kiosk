// NewDialog.cpp: 구현 파일
//

#include "pch.h"
#include "MFCApplication5.h"
#include "NewDialog.h"
#include "afxdialogex.h"


// NewDialog 대화 상자

IMPLEMENT_DYNAMIC(NewDialog, CDialogEx)

NewDialog::NewDialog(CWnd* pParent /*=nullptr*/)
	: CDialogEx(IDD_DIALOG1, pParent)
{

}

NewDialog::~NewDialog()
{
}

void NewDialog::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}


BEGIN_MESSAGE_MAP(NewDialog, CDialogEx)
	ON_BN_CLICKED(IDC_SET, &NewDialog::OnBnClickedButton2)
	ON_BN_CLICKED(IDC_SOLO, &NewDialog::OnBnClickedButton1)
END_MESSAGE_MAP()


// NewDialog 메시지 처리기


void NewDialog::OnBnClickedButton2()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}


void NewDialog::OnBnClickedButton1()
{
	// TODO: 여기에 컨트롤 알림 처리기 코드를 추가합니다.
	CDialogEx::OnOK();
}
