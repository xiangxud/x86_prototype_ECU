/**********************************************************************************
 * ファイル名      : test_api.h
 * システム名      : x86 プロトタイプＥＣＵ OPE-RA Ver2.0
 * サブシステム名  : TEST API
 * プログラム名    : ヘッダー
 * CPU TYPE        : 
 * バージョン      : Ver1.00
 * --------------------------------------------------------------------------------
 * 作成者          : 
 * 作成部署        : 
 * 作成日付        : 2009年11月11日 新規作成
 * 更新履歴        : 
 **********************************************************************************/
#ifndef	_CATS_TEST_API_H_
#define _CATS_TEST_API_H_

#define API_OK 0
#define API_NG 1
#define API_BUSY 2

/***********************************************************************************
* MODULE         : FncTESTReadScratch
* NOTE           : スクラッチレジスタの読み込み機能です。
***********************************************************************************/
int FncTESTReadScratch ( unsigned int * );

/***********************************************************************************
* MODULE         : FncTESTWriteScratch
* NOTE           : スクラッチレジスタの書き込み機能です。
***********************************************************************************/
int FncTESTWriteScratch ( unsigned int );

/***********************************************************************************
* MODULE         : FncTESTGetFPGAVer
* NOTE           : FPGAバージョン取得機能です。
***********************************************************************************/
int FncTESTGetFPGAVer ( unsigned int * );


#endif // _CATS_TEST_API_H_
