// Machine generated IDispatch wrapper class(es) created with Add Class from Typelib Wizard

#import "D:\\GeAn\\39.0-腾龙汽车-签名工具\\FoxitPDFSDK_AX_Pro.OCX" no_namespace
// CDFoxitPDFSDKEvents wrapper class

class CDFoxitPDFSDKEvents : public COleDispatchDriver
{
public:
	CDFoxitPDFSDKEvents(){} // Calls COleDispatchDriver default constructor
	CDFoxitPDFSDKEvents(LPDISPATCH pDispatch) : COleDispatchDriver(pDispatch) {}
	CDFoxitPDFSDKEvents(const CDFoxitPDFSDKEvents& dispatchSrc) : COleDispatchDriver(dispatchSrc) {}

	// Attributes
public:

	// Operations
public:


	// _DFoxitPDFSDKEvents methods
public:
	void BeforeDraw(long dc)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x1, DISPATCH_METHOD, VT_EMPTY, NULL, parms, dc);
	}
	void AfterDraw(long dc)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x2, DISPATCH_METHOD, VT_EMPTY, NULL, parms, dc);
	}
	void OnZoomChange()
	{
		InvokeHelper(0x3, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void OnPageChange()
	{
		InvokeHelper(0x4, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void OnOpenPassword(BSTR * Password, BOOL * cancel)
	{
		static BYTE parms[] = VTS_PBSTR VTS_PBOOL ;
		InvokeHelper(0x5, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Password, cancel);
	}
	void OnHyperLink(LPCTSTR linktype, LPCTSTR linkdata, LPDISPATCH dest, BOOL * cancel)
	{
		static BYTE parms[] = VTS_BSTR VTS_BSTR VTS_DISPATCH VTS_PBOOL ;
		InvokeHelper(0x6, DISPATCH_METHOD, VT_EMPTY, NULL, parms, linktype, linkdata, dest, cancel);
	}
	void OnSearchProgress(long pageNumber, long PageCount)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x7, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pageNumber, PageCount);
	}
	void OnOpenDocument(LPCTSTR FilePath)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x8, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FilePath);
	}
	void CustomFileGetSize(long * size)
	{
		static BYTE parms[] = VTS_PI4 ;
		InvokeHelper(0x9, DISPATCH_METHOD, VT_EMPTY, NULL, parms, size);
	}
	void CustomFileGetBlock(long pos, long pBuf, long size)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xa, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pos, pBuf, size);
	}
	void OnContextMenuIndex(short nIndex)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0xb, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex);
	}
	void OnDocumentChange()
	{
		InvokeHelper(0xc, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void OnClick(long hWnd, long ClientX, long ClientY, BOOL * bRet)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_PBOOL ;
		InvokeHelper(0xd, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hWnd, ClientX, ClientY, bRet);
	}
	void OnDbClick(long hWnd, long ClientX, long ClientY)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xe, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hWnd, ClientX, ClientY);
	}
	void OnRButtonClick(long hWnd, long ClientX, long ClientY)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0xf, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hWnd, ClientX, ClientY);
	}
	void OnCloseDocument(LPCTSTR FilePath)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x10, DISPATCH_METHOD, VT_EMPTY, NULL, parms, FilePath);
	}
	void OnOpenFile(short Error)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x11, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Error);
	}
	void OnDownLoadFinish()
	{
		InvokeHelper(0x12, DISPATCH_METHOD, VT_EMPTY, NULL, NULL);
	}
	void FormFieldError(long nErrorCode)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x13, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nErrorCode);
	}
	void OnFilePathInvalidate(LPCTSTR WarnString)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x14, DISPATCH_METHOD, VT_EMPTY, NULL, parms, WarnString);
	}
	void OnShowSavePrompt(BOOL * bShow, short * nResult)
	{
		static BYTE parms[] = VTS_PBOOL VTS_PI2 ;
		InvokeHelper(0x15, DISPATCH_METHOD, VT_EMPTY, NULL, parms, bShow, nResult);
	}
	void OnErrorOccurred(LPCTSTR lpszErrorMsg)
	{
		static BYTE parms[] = VTS_BSTR ;
		InvokeHelper(0x16, DISPATCH_METHOD, VT_EMPTY, NULL, parms, lpszErrorMsg);
	}
	void OnUploadFinish(short nRetCode)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x17, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nRetCode);
	}
	void OnTextHyperLink(LPCTSTR csUrl, BOOL * cancel)
	{
		static BYTE parms[] = VTS_BSTR VTS_PBOOL ;
		InvokeHelper(0x18, DISPATCH_METHOD, VT_EMPTY, NULL, parms, csUrl, cancel);
	}
	void OnAddMenuItemAction(BSTR * pMenuItem)
	{
		static BYTE parms[] = VTS_PBSTR ;
		InvokeHelper(0x19, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pMenuItem);
	}
	void OnExcuteMenuItem(LPCTSTR sMenuItem, BOOL * bResult)
	{
		static BYTE parms[] = VTS_BSTR VTS_PBOOL ;
		InvokeHelper(0x1a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, sMenuItem, bResult);
	}
	void OnDoGoToRAction(LPCTSTR sFilePath, LPDISPATCH dest)
	{
		static BYTE parms[] = VTS_BSTR VTS_DISPATCH ;
		InvokeHelper(0x1b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, sFilePath, dest);
	}
	void OnErrorOccured(long errorCode, LPCTSTR errMsg)
	{
		static BYTE parms[] = VTS_I4 VTS_BSTR ;
		InvokeHelper(0x1c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, errorCode, errMsg);
	}
	void OnAnnotCreated(long pageIndex, long AnnotIndex)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x1d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pageIndex, AnnotIndex);
	}
	void OnAnnotDeleted(long pageIndex, long AnnotIndex)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x1e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pageIndex, AnnotIndex);
	}
	void OnAnnotModified(long pageIndex, long AnnotIndex)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x1f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pageIndex, AnnotIndex);
	}
	void OnAnnotReplyCreated(long pageIndex, long AnnotIndex, LPCTSTR replyNM)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR ;
		InvokeHelper(0x20, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pageIndex, AnnotIndex, replyNM);
	}
	void OnAnnotReplyDeleted(long pageIndex, long AnnotIndex, LPCTSTR replyNM)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR ;
		InvokeHelper(0x21, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pageIndex, AnnotIndex, replyNM);
	}
	void OnAnnotReplyModified(long pageIndex, long AnnotIndex, LPCTSTR replyNM)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_BSTR ;
		InvokeHelper(0x22, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pageIndex, AnnotIndex, replyNM);
	}
	void OnAnnotLButtonDown(LPDISPATCH Annot, float x, float y, BOOL * bDefault)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R4 VTS_R4 VTS_PBOOL ;
		InvokeHelper(0x23, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot, x, y, bDefault);
	}
	void OnAnnotPosChanged(LPDISPATCH Annot, float x, float y)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R4 VTS_R4 ;
		InvokeHelper(0x24, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot, x, y);
	}
	void OnAnnotLButtonUp(LPDISPATCH Annot, float x, float y, BOOL * bDefault)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R4 VTS_R4 VTS_PBOOL ;
		InvokeHelper(0x25, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot, x, y, bDefault);
	}
	void OnAnnotRButtonDown(LPDISPATCH Annot, float x, float y, BOOL * bDefault)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R4 VTS_R4 VTS_PBOOL ;
		InvokeHelper(0x26, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot, x, y, bDefault);
	}
	void OnAnnotRButtonUp(LPDISPATCH Annot, float x, float y, BOOL * bDefault)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R4 VTS_R4 VTS_PBOOL ;
		InvokeHelper(0x27, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot, x, y, bDefault);
	}
	void OnAnnotLButtonDbClick(LPDISPATCH Annot, float x, float y, BOOL * bDefault)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R4 VTS_R4 VTS_PBOOL ;
		InvokeHelper(0x28, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot, x, y, bDefault);
	}
	void OnAnnotMoving(LPDISPATCH Annot, float x, float y, BOOL * bDefault)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_R4 VTS_R4 VTS_PBOOL ;
		InvokeHelper(0x29, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot, x, y, bDefault);
	}
	void OnAnnotMouseEnter(LPDISPATCH Annot)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x2a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot);
	}
	void OnAnnotMouseExit(LPDISPATCH Annot)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x2b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, Annot);
	}
	void OnSetSignatureInfo(LPDISPATCH pSignature)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x2c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pSignature);
	}
	void OnSigning(LPDISPATCH pSignature)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x2d, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pSignature);
	}
	void OnVerifying(LPDISPATCH pSignature)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x2e, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pSignature);
	}
	void OnShowSignaturePropertyDialog(LPDISPATCH pSignature, BOOL * bShowProperty)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_PBOOL ;
		InvokeHelper(0x2f, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pSignature, bShowProperty);
	}
	void CreateImpression(long index)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x30, DISPATCH_METHOD, VT_EMPTY, NULL, parms, index);
	}
	void OnFetchAsyncFileData(long offset, long size, long curdownidx)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 ;
		InvokeHelper(0x31, DISPATCH_METHOD, VT_EMPTY, NULL, parms, offset, size, curdownidx);
	}
	void OnCurPageIndexChanged(long curPageIdx, long newPageIdx)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 ;
		InvokeHelper(0x32, DISPATCH_METHOD, VT_EMPTY, NULL, parms, curPageIdx, newPageIdx);
	}
	void OnSigContextMenuIndex(short nIndex, LPDISPATCH SignatureField)
	{
		static BYTE parms[] = VTS_I2 VTS_DISPATCH ;
		InvokeHelper(0x33, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, SignatureField);
	}
	void OnPagesContextMenuIndex(short nIndex, VARIANT * pageArray)
	{
		static BYTE parms[] = VTS_I2 VTS_PVARIANT ;
		InvokeHelper(0x34, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex, pageArray);
	}
	void OnBookmarkContextMenuIndex(short nIndex)
	{
		static BYTE parms[] = VTS_I2 ;
		InvokeHelper(0x35, DISPATCH_METHOD, VT_EMPTY, NULL, parms, nIndex);
	}
	void OnFormFieldClick(LPDISPATCH pClickedField)
	{
		static BYTE parms[] = VTS_DISPATCH ;
		InvokeHelper(0x36, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pClickedField);
	}
	void OnFormFieldKeyDown(LPDISPATCH pFormField, long * nKey)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_PI4 ;
		InvokeHelper(0x37, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pFormField, nKey);
	}
	void OnFormFieldKeyUp(LPDISPATCH pFormField, long * nKey)
	{
		static BYTE parms[] = VTS_DISPATCH VTS_PI4 ;
		InvokeHelper(0x38, DISPATCH_METHOD, VT_EMPTY, NULL, parms, pFormField, nKey);
	}
	void OnSetFocus(long hWnd)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x39, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hWnd);
	}
	void OnKillFocus(long hWnd)
	{
		static BYTE parms[] = VTS_I4 ;
		InvokeHelper(0x3a, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hWnd);
	}
	void OnDbClickEx(long hWnd, long ClientX, long ClientY, BOOL * bRet)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_PBOOL ;
		InvokeHelper(0x3b, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hWnd, ClientX, ClientY, bRet);
	}
	void OnRButtonClickEx(long hWnd, long ClientX, long ClientY, BOOL * bRet)
	{
		static BYTE parms[] = VTS_I4 VTS_I4 VTS_I4 VTS_PBOOL ;
		InvokeHelper(0x3c, DISPATCH_METHOD, VT_EMPTY, NULL, parms, hWnd, ClientX, ClientY, bRet);
	}

	// _DFoxitPDFSDKEvents properties
public:

};
