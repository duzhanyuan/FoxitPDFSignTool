// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CDFoxitPDFSDK wrapper class

class CDFoxitPDFSDK : public COleDispatchDriver
{
public:
	CDFoxitPDFSDK(){} // Calls COleDispatchDriver default constructor
	CDFoxitPDFSDK(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDFoxitPDFSDK(const CDFoxitPDFSDK& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// _DFoxitPDFSDK methods
public:
	BOOL OpenFile(LPCTSTR file_path, LPCTSTR Password)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0xf, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, file_path, Password);
		return result;
	}
	void ShowToolbarButton(short nIndex, BOOL bShow)
	{
		static BYTE parms[] = VTS_I2 VTS_BOOL ;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, bShow);
	}
	void ShowStatusBar(BOOL bShow)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bShow);
	}
	void ShowToolBar(BOOL bShow)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bShow);
	}
	void GoToPage(long page_index)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, parms, page_index);
	}
	void UnLockActiveX(LPCTSTR lisence_id, LPCTSTR unlock_code)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x15, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lisence_id, unlock_code);
	}
	void CloseFile()
	{
		InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL OpenMemFile(long pBuffer, long size, LPCTSTR Password)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR ;
		InvokeHelper(0x17, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pBuffer, size, Password);
		return result;
	}
	BOOL FindNext(BOOL bSearchDown)
	{
		BOOL result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x18, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bSearchDown);
		return result;
	}
	LPDISPATCH GetOutlineFirstChild(LPDISPATCH outline)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x19, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, outline);
		return result;
	}
	LPDISPATCH GetOutlineNextSibling(LPDISPATCH outline)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x1a, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, outline);
		return result;
	}
	LPDISPATCH FindFileFirst(LPCTSTR file_path, LPCTSTR search_string, BOOL bMatchCase, BOOL bMatchWholeWord)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BOOL VTS_BOOL ;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, file_path, search_string, bMatchCase, bMatchWholeWord);
		return result;
	}
	LPDISPATCH FindFileNext()
	{
		LPDISPATCH result;
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL GoForwardStack()
	{
		BOOL result;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL GoBackwardStack()
	{
		BOOL result;
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void SetLayoutShowMode(long nShowMode, short nFacingCount)
	{
		static BYTE parms[] = VTS_I4 VTS_I2 ;
		InvokeHelper(0x20, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nShowMode, nFacingCount);
	}
	BOOL ExistForwardStack()
	{
		BOOL result;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL ExistBackwardStack()
	{
		BOOL result;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void PrintWithDialog()
	{
		InvokeHelper(0x23, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SetFileStreamOption(BOOL bFileStream)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x24, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bFileStream);
	}
	short CountTools()
	{
		short result;
		InvokeHelper(0x25, DISPATCH_METHOD, VT_I2, (void*)&result, NULL);
		return result;
	}
	CString GetToolByIndex(short nIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x26, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, nIndex);
		return result;
	}
	LPDISPATCH OpenFileForPrinter(LPCTSTR file_path)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x27, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, file_path);
		return result;
	}
	void Highlight(long nPageIndex, float left, float top, float right, float bottom)
	{
		static BYTE parms[] = VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x28, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nPageIndex, left, top, right, bottom);
	}
	void RemoveAllHighlight()
	{
		InvokeHelper(0x29, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL ConvertPageCoordToClientCoord(long nPageIndex, float PageX, float PageY, long * pnClientX, long * pnClientY)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_R4 VTS_R4 VTS_PI4 VTS_PI4 ;
		InvokeHelper(0x2a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nPageIndex, PageX, PageY, pnClientX, pnClientY);
		return result;
	}
	BOOL ExportFormToFDFFile(LPCTSTR FDFFileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x2b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FDFFileName);
		return result;
	}
	BOOL ImportFormFromFDFFile(LPCTSTR FDFFileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x2c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FDFFileName);
		return result;
	}
	void SaveAs(LPCTSTR FileName)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x2d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FileName);
	}
	void Save()
	{
		InvokeHelper(0x2e, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	BOOL FindFirst(LPCTSTR search_string, BOOL bMatchCase, BOOL bMatchWholeWord)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BOOL VTS_BOOL ;
		InvokeHelper(0x2f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, search_string, bMatchCase, bMatchWholeWord);
		return result;
	}
	void SearchAndHighlightAllTextOnPage(LPCTSTR searchstring, BOOL bMatchCase, BOOL bMatchWholeWord, long PageNo)
	{
		static BYTE parms[] = VTS_BSTR VTS_BOOL VTS_BOOL VTS_I4 ;
		InvokeHelper(0x30, DISPATCH_METHOD, VT_EMPTY, NULL, parms, searchstring, bMatchCase, bMatchWholeWord, PageNo);
	}
	void ShowTitleBar(BOOL bShow)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x31, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bShow);
	}
	BOOL OpenCustomFile(LPCTSTR Password)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x32, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Password);
		return result;
	}
	void ShowFormFieldsMessageBar(BOOL bShow)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x33, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bShow);
	}
	CString GetPageText(long nPageIndex)
	{
		CString result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x36, DISPATCH_METHOD, VT_BSTR, (void*)&result, parms, nPageIndex);
		return result;
	}
	BOOL AddImageObject(long nPageIndex, float left, float bottom, float Width, float Height, LPCTSTR BmpFileName, short alpha, short Rotate)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_BSTR VTS_I2 VTS_I2 ;
		InvokeHelper(0x37, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nPageIndex, left, bottom, Width, Height, BmpFileName, alpha, Rotate);
		return result;
	}
	BOOL FindFormFieldsTextFirst(LPCTSTR searchstring, BOOL bMatchCase)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BOOL ;
		InvokeHelper(0x38, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, searchstring, bMatchCase);
		return result;
	}
	BOOL FindFormFieldsTextNext()
	{
		BOOL result;
		InvokeHelper(0x39, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL SubmitForm(LPCTSTR csDestination)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x3a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, csDestination);
		return result;
	}
	BOOL OpenBuffer(VARIANT& Buffer, long size, LPCTSTR Password)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_BSTR ;
		InvokeHelper(0x3b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &Buffer, size, Password);
		return result;
	}
	BOOL ExportAnnotsToFDFFile(LPCTSTR FDFFileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x3c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FDFFileName);
		return result;
	}
	BOOL ImportAnnotsFromFDFFile(LPCTSTR FDFFileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x3d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FDFFileName);
		return result;
	}
	short CountHyperLinks(short nPageIndex)
	{
		short result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x3e, DISPATCH_METHOD, VT_I2, (void*)&result, parms, nPageIndex);
		return result;
	}
	void HighlightHyperLink(short nPageIndex, short nLinkIndex)
	{
		static BYTE parms[] = VTS_I2 VTS_I2 ;
		InvokeHelper(0x3f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nPageIndex, nLinkIndex);
	}
	BOOL GetHyperLinkRect(short nPageIndex, short nIndex, float * top, float * left, float * bottom, float * right)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_PR4 VTS_PR4 VTS_PR4 VTS_PR4 ;
		InvokeHelper(0x40, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nPageIndex, nIndex, top, left, bottom, right);
		return result;
	}
	BOOL GetHyperLinkInfo(short nPageIndex, short nIndex, BSTR * linktype, BSTR * linkdata, LPDISPATCH * linkdest)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 VTS_I2 VTS_PBSTR VTS_PBSTR VTS_PDISPATCH ;
		InvokeHelper(0x41, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nPageIndex, nIndex, linktype, linkdata, linkdest);
		return result;
	}
	CString GetSelectedText()
	{
		CString result;
		InvokeHelper(0x42, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void ShowDocumentInfoDialog()
	{
		InvokeHelper(0x43, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void ShowDocJsDialog()
	{
		InvokeHelper(0x44, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SetContextMenuString(LPCTSTR string)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x45, DISPATCH_METHOD, VT_EMPTY, NULL, parms, string);
	}
	LPUNKNOWN SaveToStream()
	{
		LPUNKNOWN result;
		InvokeHelper(0x46, DISPATCH_METHOD, VT_UNKNOWN, (void*)&result, NULL);
		return result;
	}
	void ShowJsConsoleDialog()
	{
		InvokeHelper(0x47, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SetViewRect(float left, float top, float Width, float Height)
	{
		static BYTE parms[] = VTS_R4 VTS_R4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x48, DISPATCH_METHOD, VT_EMPTY, NULL, parms, left, top, Width, Height);
	}
	void ShowAllPopup(BOOL bShow)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x4c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bShow);
	}
	void SetCurrentLanguage(short LanguageID)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x4f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, LanguageID);
	}
	BOOL RunJScript(LPCTSTR csJS)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x50, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, csJS);
		return result;
	}
	long GetDocPermissions()
	{
		long result;
		InvokeHelper(0x51, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetVisibleLeftTopPage()
	{
		long result;
		InvokeHelper(0x52, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	BOOL OpenStream(LPUNKNOWN Stream, LPCTSTR Password)
	{
		BOOL result;
		static BYTE parms[] = VTS_UNKNOWN VTS_BSTR ;
		InvokeHelper(0x53, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Stream, Password);
		return result;
	}
	void SetBDrawAnnot(BOOL bDrawAnnot)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x54, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bDrawAnnot);
	}
	BOOL IsDualPage(short pageIndex)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x55, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pageIndex);
		return result;
	}
	BOOL AddWaterMark(short page, LPCTSTR string, float left, float bottom, short FontSize, unsigned long FontColor, short textmode, short alpha, short Rotate)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 VTS_BSTR VTS_R4 VTS_R4 VTS_I2 VTS_UI4 VTS_I2 VTS_I2 VTS_I2 ;
		InvokeHelper(0x56, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, page, string, left, bottom, FontSize, FontColor, textmode, alpha, Rotate);
		return result;
	}
	BOOL ExportPagesToPDF(LPCTSTR lpszPDFFileName, LPCTSTR lpszPageRangeString)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x58, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, lpszPDFFileName, lpszPageRangeString);
		return result;
	}
	long GetBitmap(short nPageIndex, long pixelWidth, long pixelHeight, float rectLeft, float rectTop, float rectRight, float rectBottom, long PixelFormat)
	{
		long result;
		static BYTE parms[] = VTS_I2 VTS_I4 VTS_I4 VTS_R4 VTS_R4 VTS_R4 VTS_R4 VTS_I4 ;
		InvokeHelper(0x59, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nPageIndex, pixelWidth, pixelHeight, rectLeft, rectTop, rectRight, rectBottom, PixelFormat);
		return result;
	}
	float GetPageHeight(short nPageIndex)
	{
		float result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x5a, DISPATCH_METHOD, VT_R4, (void*)&result, parms, nPageIndex);
		return result;
	}
	float GetPageWidth(short nPageIndex)
	{
		float result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x5b, DISPATCH_METHOD, VT_R4, (void*)&result, parms, nPageIndex);
		return result;
	}
	void GoToNextPage()
	{
		InvokeHelper(0x5c, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void GoToPrevPage()
	{
		InvokeHelper(0x5d, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SetCurrentLanguageByString(LPCTSTR FileName)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x5f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FileName);
	}
	void EnableHyperLink(BOOL bEnable)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x60, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bEnable);
	}
	BOOL SetLogFile(LPCTSTR FilePath)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x61, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FilePath);
		return result;
	}
	BOOL ConvertClientCoordToPageCoord(long nClientX, long nClientY, long * pnPageIndex, float * pPageX, float * pPageY)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_PI4 VTS_PR4 VTS_PR4 ;
		InvokeHelper(0x62, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nClientX, nClientY, pnPageIndex, pPageX, pPageY);
		return result;
	}
	void SetFacingCoverLeft(BOOL bLeft)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x63, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bLeft);
	}
	void GoToSearchResult(LPDISPATCH FindResult)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x64, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FindResult);
	}
	void ScrollView(long dx, long dy)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x65, DISPATCH_METHOD, VT_EMPTY, NULL, parms, dx, dy);
	}
	void GoToPagePos(long nPageIndex, float PageX, float PageY)
	{
		static BYTE parms[] = VTS_I4 VTS_R4 VTS_R4 ;
		InvokeHelper(0x66, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nPageIndex, PageX, PageY);
	}
	void GoToPageDest(LPDISPATCH Link_Dest)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x67, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Link_Dest);
	}
	LPDISPATCH GetCurrentForm()
	{
		LPDISPATCH result;
		InvokeHelper(0x68, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL EnableToolTip(BOOL bEnable)
	{
		BOOL result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x69, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bEnable);
		return result;
	}
	BOOL OpenFtpFile(LPCTSTR ftpName, LPCTSTR userName, LPCTSTR userPassword, long port, LPCTSTR FilePath, LPCTSTR filePassword, BOOL Passive)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4 VTS_BSTR VTS_BSTR VTS_BOOL ;
		InvokeHelper(0x6a, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, ftpName, userName, userPassword, port, FilePath, filePassword, Passive);
		return result;
	}
	BOOL UploadCurFileToFTP(LPCTSTR ftpName, LPCTSTR userName, LPCTSTR userPassword, long port, LPCTSTR FilePath)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_I4 VTS_BSTR ;
		InvokeHelper(0x6b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, ftpName, userName, userPassword, port, FilePath);
		return result;
	}
	LPDISPATCH GetPageAnnots(long pageIndex)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x6c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, pageIndex);
		return result;
	}
	LPDISPATCH GetFormatTool()
	{
		LPDISPATCH result;
		InvokeHelper(0x6d, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL SetPDFMeasureUnit(short nType)
	{
		BOOL result;
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x6e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nType);
		return result;
	}
	void GetScrollLocation(long * HPos, long * VPos)
	{
		static BYTE parms[] = VTS_PI4 VTS_PI4 ;
		InvokeHelper(0x6f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HPos, VPos);
	}
	void SetCurrentWnd(long hWnd)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x70, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hWnd);
	}
	BOOL SetUserPassword(LPCTSTR lpszNewValue)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x71, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, lpszNewValue);
		return result;
	}
	BOOL SetUserPermission(long dwPermission)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x72, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, dwPermission);
		return result;
	}
	BOOL SetOwnerPassword(LPCTSTR lpszNewValue)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x73, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, lpszNewValue);
		return result;
	}
	BOOL ShowNavigationPanels(BOOL bShow)
	{
		BOOL result;
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x74, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bShow);
		return result;
	}
	long GetCurrentWnd()
	{
		long result;
		InvokeHelper(0x75, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetCtrlInstance()
	{
		long result;
		InvokeHelper(0x76, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void GetLayoutShowMode(short * pnShowMode, short * pnFacingCount)
	{
		static BYTE parms[] = VTS_PI2 VTS_PI2 ;
		InvokeHelper(0x77, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pnShowMode, pnFacingCount);
	}
	BOOL GetPanelStatus()
	{
		BOOL result;
		InvokeHelper(0x78, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void UnLockActiveXEx(LPCTSTR strLicense)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x79, DISPATCH_METHOD, VT_EMPTY, NULL, parms, strLicense);
	}
	long GetPageTextW(long nPageIndex, long * pBuffer, long * nBuflen)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_PI4 VTS_PI4 ;
		InvokeHelper(0x7a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nPageIndex, pBuffer, nBuflen);
		return result;
	}
	BOOL ShowNavPanelByString(LPCTSTR lpszPanelName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x7b, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, lpszPanelName);
		return result;
	}
	BOOL FindFirstEx(VARIANT& search_string, BOOL bMatchCase, BOOL bMatchWholeWord)
	{
		BOOL result;
		static BYTE parms[] = VTS_VARIANT VTS_BOOL VTS_BOOL ;
		InvokeHelper(0x7c, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, &search_string, bMatchCase, bMatchWholeWord);
		return result;
	}
	void SetModulePath(LPCTSTR lpFolderName)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x7d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lpFolderName);
	}
	LPDISPATCH FindFileFirstEx(LPCTSTR file_path, LPCTSTR Password, VARIANT& search_string, BOOL bMatchCase, BOOL bMatchWholeWord)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_VARIANT VTS_BOOL VTS_BOOL ;
		InvokeHelper(0x7e, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, file_path, Password, &search_string, bMatchCase, bMatchWholeWord);
		return result;
	}
	BOOL ConvertClientCoordToPageCoordEx(long nClientX, long nClientY, VARIANT * pnPageIndex, VARIANT * pPageX, VARIANT * pPageY)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_PVARIANT VTS_PVARIANT VTS_PVARIANT ;
		InvokeHelper(0x80, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nClientX, nClientY, pnPageIndex, pPageX, pPageY);
		return result;
	}
	void GetScrollLocationEx(VARIANT * HPos, VARIANT * VPos)
	{
		static BYTE parms[] = VTS_PVARIANT VTS_PVARIANT ;
		InvokeHelper(0x81, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HPos, VPos);
	}
	BOOL SetCrashLog(LPCTSTR FilePath)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x82, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, FilePath);
		return result;
	}
	LPDISPATCH OpenMemFileForPrinter(long Buffer, long size)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x83, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, Buffer, size);
		return result;
	}
	long GetSelectedTextEx(long * pBuffer, long nBuflen)
	{
		long result;
		static BYTE parms[] = VTS_PI4 VTS_I4 ;
		InvokeHelper(0x84, DISPATCH_METHOD, VT_I4, (void*)&result, parms, pBuffer, nBuflen);
		return result;
	}
	BOOL RemoveEvaluationMark()
	{
		BOOL result;
		InvokeHelper(0x85, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL CheckOwnerPassword(LPCTSTR lpszPermPsw)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x86, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, lpszPermPsw);
		return result;
	}
	BOOL ExportAnnotsToFDFFileEx(long pageIndex, LPCTSTR FDFFileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BSTR ;
		InvokeHelper(0x87, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pageIndex, FDFFileName);
		return result;
	}
	BOOL ImportAnnotsFromFDFFileEx(long pageIndex, LPCTSTR FDFFileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BSTR ;
		InvokeHelper(0x88, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pageIndex, FDFFileName);
		return result;
	}
	LPDISPATCH GetPDFSignatureMgr()
	{
		LPDISPATCH result;
		InvokeHelper(0x89, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	long GetLastSigModuleError()
	{
		long result;
		InvokeHelper(0x8a, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	void ForceRefresh()
	{
		InvokeHelper(0x8b, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	CString GetLastSigModuleErrMsg()
	{
		CString result;
		InvokeHelper(0x8c, DISPATCH_METHOD, VT_BSTR, (void*)&result, NULL);
		return result;
	}
	void ShowContextMenu(BOOL bShow)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0x8d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bShow);
	}
	BOOL SetPageRotate(long page_index, long Rotate)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x8e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, page_index, Rotate);
		return result;
	}
	BOOL SetPageCropBox(long pageIndex, float left, float top, long right, long bottom)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_R4 VTS_R4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x8f, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pageIndex, left, top, right, bottom);
		return result;
	}
	BOOL InsertPage(long nInsertAt, LPCTSTR lpszPDFFileName, LPCTSTR lpszPssword, LPCTSTR lpszPageRangeString)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BSTR VTS_BSTR ;
		InvokeHelper(0x90, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nInsertAt, lpszPDFFileName, lpszPssword, lpszPageRangeString);
		return result;
	}
	BOOL DeletePage(long pageIndex, long count)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x91, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pageIndex, count);
		return result;
	}
	BOOL SwapPage(long pageIndex1, long pageIndex2)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x92, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pageIndex1, pageIndex2);
		return result;
	}
	BOOL SetPageIndex(long pageOldIndex, long pageNewIndex)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x93, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pageOldIndex, pageNewIndex);
		return result;
	}
	BOOL FlattenPage(long pageIndex)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x94, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pageIndex);
		return result;
	}
	BOOL InsertNewPage(long nPageIndex, long nPageWidth, long nPageHeight)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x95, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nPageIndex, nPageWidth, nPageHeight);
		return result;
	}
	long GetBarcodeBitmap(LPCTSTR Contents, short format, long moduleHSize, long moduleVSize, short ecLevel)
	{
		long result;
		static BYTE parms[] = VTS_BSTR VTS_I2 VTS_I4 VTS_I4 VTS_I2 ;
		InvokeHelper(0x96, DISPATCH_METHOD, VT_I4, (void*)&result, parms, Contents, format, moduleHSize, moduleVSize, ecLevel);
		return result;
	}
	LPDISPATCH FindMemFileFirst(VARIANT& Buffer, long filesize, LPCTSTR Password, LPCTSTR search_string, BOOL bMatchCase, BOOL bMatchWholeWord)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_VARIANT VTS_I4 VTS_BSTR VTS_BSTR VTS_BOOL VTS_BOOL ;
		InvokeHelper(0x97, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, &Buffer, filesize, Password, search_string, bMatchCase, bMatchWholeWord);
		return result;
	}
	void FindClose()
	{
		InvokeHelper(0x98, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	long GetSelectedRectsCount()
	{
		long result;
		InvokeHelper(0x99, DISPATCH_METHOD, VT_I4, (void*)&result, NULL);
		return result;
	}
	long GetSelectedRectByIndex(long nIndex, long * nPageIndex, float * left, float * bottom, float * right, float * top)
	{
		long result;
		static BYTE parms[] = VTS_I4 VTS_PI4 VTS_PR4 VTS_PR4 VTS_PR4 VTS_PR4 ;
		InvokeHelper(0x9a, DISPATCH_METHOD, VT_I4, (void*)&result, parms, nIndex, nPageIndex, left, bottom, right, top);
		return result;
	}
	LPDISPATCH FindPageFirst(long nPageIndex, LPCTSTR search_string, BOOL bMatchCase, BOOL bMatchWholeWord)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BOOL VTS_BOOL ;
		InvokeHelper(0x9b, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, nPageIndex, search_string, bMatchCase, bMatchWholeWord);
		return result;
	}
	LPDISPATCH FindPageNext()
	{
		LPDISPATCH result;
		InvokeHelper(0x9c, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, NULL);
		return result;
	}
	BOOL ConvertPDFPageToImage(LPCTSTR pdfFile, long lnPageIndex, LPCTSTR ImageFilePath, long lnImageWidth, long lnImageHeight)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_BSTR VTS_I4 VTS_I4 ;
		InvokeHelper(0x9d, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pdfFile, lnPageIndex, ImageFilePath, lnImageWidth, lnImageHeight);
		return result;
	}
	BOOL ImportImageToPdf(LPCTSTR pdfFilePath, long indext, LPCTSTR ImageFilePath)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_I4 VTS_BSTR ;
		InvokeHelper(0x9e, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, pdfFilePath, indext, ImageFilePath);
		return result;
	}
	BOOL OpenFileAsync(LPCTSTR strURL, LPCTSTR strPDFPassword, LPCTSTR strUserName, LPCTSTR strUserPassword)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR VTS_BSTR ;
		InvokeHelper(0xa2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, strURL, strPDFPassword, strUserName, strUserPassword);
		return result;
	}
	void SetAsyncFileLen(long lnSize)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xa3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lnSize);
	}
	BOOL OpenAsyncFile(LPCTSTR strPDFPassword)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xa4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, strPDFPassword);
		return result;
	}
	BOOL SetAsyncFileData(long lnFileBuffer, long offset, long size)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xa5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, lnFileBuffer, offset, size);
		return result;
	}
	LPDISPATCH LoadPDFTextDoc(LPCTSTR FilePath, LPCTSTR filePass)
	{
		LPDISPATCH result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR ;
		InvokeHelper(0xa6, DISPATCH_METHOD, VT_DISPATCH, (void*)&result, parms, FilePath, filePass);
		return result;
	}
	BOOL ExtractTextFromPDF(LPCTSTR srcPDFPath, LPCTSTR srcFilePass, LPCTSTR destPath)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_BSTR ;
		InvokeHelper(0xa7, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, srcPDFPath, srcFilePass, destPath);
		return result;
	}
	void SetSigContextMenuString(LPCTSTR string)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xa8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, string);
	}
	void ReleaseResource()
	{
		InvokeHelper(0xa9, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void SetSearchHighlightFillColor(unsigned long FillColor, short alpha)
	{
		static BYTE parms[] = VTS_UI4 VTS_I2 ;
		InvokeHelper(0xaa, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FillColor, alpha);
	}
	long GetPageRotation(long page_index)
	{
		long result;
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xab, DISPATCH_METHOD, VT_I4, (void*)&result, parms, page_index);
		return result;
	}
	void EnableBookmarkEdit(BOOL bEdit)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xad, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bEdit);
	}
	void SetPagesContextMenuString(LPCTSTR string)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xae, DISPATCH_METHOD, VT_EMPTY, NULL, parms, string);
	}
	void SetBookmarkContextMenuString(LPCTSTR string)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xaf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, string);
	}
	void ShowStdPagesContextMenu(short nIndex, BOOL bShow)
	{
		static BYTE parms[] = VTS_I2 VTS_BOOL ;
		InvokeHelper(0xb0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, bShow);
	}
	void ShowStdBookmarkContextMenu(short nIndex, BOOL bShow)
	{
		static BYTE parms[] = VTS_I2 VTS_BOOL ;
		InvokeHelper(0xb1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, bShow);
	}
	void EnableNightMode(BOOL bNightMode)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xb2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bNightMode);
	}
	void SetSelectTextHighlightColor(unsigned long HighLihgtColor, short Alpah)
	{
		static BYTE parms[] = VTS_UI4 VTS_I2 ;
		InvokeHelper(0xb3, DISPATCH_METHOD, VT_EMPTY, NULL, parms, HighLihgtColor, Alpah);
	}
	BOOL FindPageFirstEx(long nPageIndex, LPCTSTR search_string, BOOL bMatchCase, BOOL bMatchWholeWord)
	{
		BOOL result;
		static BYTE parms[] = VTS_I4 VTS_BSTR VTS_BOOL VTS_BOOL ;
		InvokeHelper(0xb4, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, nPageIndex, search_string, bMatchCase, bMatchWholeWord);
		return result;
	}
	BOOL FindPageNextEx(BOOL bSearchDown, BOOL bNextPage)
	{
		BOOL result;
		static BYTE parms[] = VTS_BOOL VTS_BOOL ;
		InvokeHelper(0xb5, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bSearchDown, bNextPage);
		return result;
	}
	void PrintPopupAnnot(BOOL bPrint)
	{
		static BYTE parms[] = VTS_BOOL ;
		InvokeHelper(0xb6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bPrint);
	}
	BOOL IsUnLocked()
	{
		BOOL result;
		InvokeHelper(0xb7, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	void SetShowSavePrompt(BOOL bShow, short Result)
	{
		static BYTE parms[] = VTS_BOOL VTS_I2 ;
		InvokeHelper(0xb8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bShow, Result);
	}
	BOOL SetBackgroudColor(unsigned long Color)
	{
		BOOL result;
		static BYTE parms[] = VTS_UI4 ;
		InvokeHelper(0xb9, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, Color);
		return result;
	}
	void SetDisplayBackgroundColor(long clrArgb)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0xba, DISPATCH_METHOD, VT_EMPTY, NULL, parms, clrArgb);
	}
	BOOL AddPrintMark(LPCTSTR string, float center_x, float center_y, LPCTSTR FontName, short lfCharSet, short FontSize, unsigned long FontColor, short textmode, short alpha, short Rotate)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR VTS_R4 VTS_R4 VTS_BSTR VTS_I2 VTS_I2 VTS_UI4 VTS_I2 VTS_I2 VTS_I2 ;
		InvokeHelper(0xbb, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, string, center_x, center_y, FontName, lfCharSet, FontSize, FontColor, textmode, alpha, Rotate);
		return result;
	}
	void ReleasePageAnnots(LPDISPATCH pageAnnots)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0xbc, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pageAnnots);
	}
	BOOL ExportFormToXMLFile(LPCTSTR XMLFileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xbd, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, XMLFileName);
		return result;
	}
	BOOL ImportFormFromXMLFile(LPCTSTR XMLFileName)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xbe, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, XMLFileName);
		return result;
	}
	void SetSignedImageParams(LPCTSTR bstImagePath, float fWidth, float fHeight)
	{
		static BYTE parms[] = VTS_BSTR VTS_R4 VTS_R4 ;
		InvokeHelper(0xbf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstImagePath, fWidth, fHeight);
	}
	void SetDateImageParams(LPCTSTR bstImagePath, float fWidth, float fHeight)
	{
		static BYTE parms[] = VTS_BSTR VTS_R4 VTS_R4 ;
		InvokeHelper(0xc0, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bstImagePath, fWidth, fHeight);
	}
	BOOL IsSDImageExist()
	{
		BOOL result;
		InvokeHelper(0xc1, DISPATCH_METHOD, VT_BOOL, (void*)&result, NULL);
		return result;
	}
	BOOL ComposeImageAndSaveAs(LPCTSTR bstFilePath)
	{
		BOOL result;
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0xc2, DISPATCH_METHOD, VT_BOOL, (void*)&result, parms, bstFilePath);
		return result;
	}
	void AboutBox()
	{
		InvokeHelper(DISPID_ABOUTBOX, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}

	// _DFoxitPDFSDK properties
public:
	long GetPageCount()
	{
		long result;
		GetProperty(0x2, VT_I4, (void*)&result);
		return result;
	}
	void SetPageCount(long propVal)
	{
		SetProperty(0x2, VT_I4, propVal);
	}
	long GetCurPage()
	{
		long result;
		GetProperty(0x3, VT_I4, (void*)&result);
		return result;
	}
	void SetCurPage(long propVal)
	{
		SetProperty(0x3, VT_I4, propVal);
	}
	short GetRotate()
	{
		short result;
		GetProperty(0x4, VT_I2, (void*)&result);
		return result;
	}
	void SetRotate(short propVal)
	{
		SetProperty(0x4, VT_I2, propVal);
	}
	long GetZoomLevel()
	{
		long result;
		GetProperty(0x5, VT_I4, (void*)&result);
		return result;
	}
	void SetZoomLevel(long propVal)
	{
		SetProperty(0x5, VT_I4, propVal);
	}
	IPDFPrinter * GetPrinter()
	{
		IPDFPrinter * result;
		GetProperty(0x6, VT_DISPATCH, (void*)&result);
		return result;
	}
	void SetPrinter(IPDFPrinter * propVal)
	{
		SetProperty(0x6, VT_DISPATCH, propVal);
	}
	CString GetCurrentTool()
	{
		CString result;
		GetProperty(0x7, VT_BSTR, (void*)&result);
		return result;
	}
	void SetCurrentTool(CString propVal)
	{
		SetProperty(0x7, VT_BSTR, propVal);
	}
	short GetFormFieldsHighlightAlpha()
	{
		short result;
		GetProperty(0x8, VT_I2, (void*)&result);
		return result;
	}
	void SetFormFieldsHighlightAlpha(short propVal)
	{
		SetProperty(0x8, VT_I2, propVal);
	}
	unsigned long GetFormFieldsHighlightColor()
	{
		unsigned long result;
		GetProperty(0x9, VT_UI4, (void*)&result);
		return result;
	}
	void SetFormFieldsHighlightColor(unsigned long propVal)
	{
		SetProperty(0x9, VT_UI4, propVal);
	}
	IPDFDocumentInfo * GetDocumentInfo()
	{
		IPDFDocumentInfo * result;
		GetProperty(0xa, VT_DISPATCH, (void*)&result);
		return result;
	}
	void SetDocumentInfo(IPDFDocumentInfo * propVal)
	{
		SetProperty(0xa, VT_DISPATCH, propVal);
	}
	BOOL GetbHighlightFormFields()
	{
		BOOL result;
		GetProperty(0xb, VT_BOOL, (void*)&result);
		return result;
	}
	void SetbHighlightFormFields(BOOL propVal)
	{
		SetProperty(0xb, VT_BOOL, propVal);
	}
	BOOL GetbHasFormFields()
	{
		BOOL result;
		GetProperty(0xc, VT_BOOL, (void*)&result);
		return result;
	}
	void SetbHasFormFields(BOOL propVal)
	{
		SetProperty(0xc, VT_BOOL, propVal);
	}
	CString GetPassword()
	{
		CString result;
		GetProperty(0x1, VT_BSTR, (void*)&result);
		return result;
	}
	void SetPassword(CString propVal)
	{
		SetProperty(0x1, VT_BSTR, propVal);
	}
	CString GetFilePath()
	{
		CString result;
		GetProperty(0xd, VT_BSTR, (void*)&result);
		return result;
	}
	void SetFilePath(CString propVal)
	{
		SetProperty(0xd, VT_BSTR, propVal);
	}
	CString GetActiveXVersion()
	{
		CString result;
		GetProperty(0xe, VT_BSTR, (void*)&result);
		return result;
	}
	void SetActiveXVersion(CString propVal)
	{
		SetProperty(0xe, VT_BSTR, propVal);
	}

};
