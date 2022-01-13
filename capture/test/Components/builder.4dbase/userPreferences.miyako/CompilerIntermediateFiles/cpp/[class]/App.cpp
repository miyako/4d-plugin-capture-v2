extern Txt KFile;
extern Txt KFolder;
extern Txt Kapp;
extern Txt KexecutableFile;
extern Txt Kexists;
extern Txt KisPackage;
extern Txt krYyd68qD0uU;
extern unsigned char D_proc_App_3Aconstructor[];
void proc_App_3Aconstructor( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_App_3Aconstructor);
	if (!ctx->doingAbort) try {
		{
			Bool t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1572)) goto _0;
			if (!(t0.get())) goto _3;
		}
		{
			Obj t1;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1709)) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),KFolder.cv(),t2.cv())) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			Bool t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t3.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t4.get())) goto _5;
		}
		{
			Variant t5;
			c.f.fLine=6;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KisPackage.cv(),t5.cv())) goto _0;
			Bool t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			if (!(t6.get())) goto _6;
		}
		{
			Variant t7;
			c.f.fLine=7;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kexists.cv(),t7.cv())) goto _0;
			Bool t8;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),t7.cv(),nullptr})) goto _0;
			if (!(t8.get())) goto _7;
		}
		{
			Obj t9;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1470)) goto _0;
			if (g->SetMember(ctx,t9.cv(),Kapp.cv(),Parm<Obj>(inParams,inNbParam,1).cv())) goto _0;
		}
		{
			Obj t10;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1470)) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),krYyd68qD0uU.cv()},2,1498)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t10.cv(),KexecutableFile.cv(),t12.cv())) goto _0;
		}
_7:
_6:
		goto _4;
_5:
		{
			Obj t13;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1709)) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KFile.cv(),t14.cv())) goto _0;
			Obj t15;
			if (!g->GetValue(ctx,(PCV[]){t15.cv(),t14.cv(),nullptr})) goto _0;
			Bool t16;
			if (g->Call(ctx,(PCV[]){t16.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t15.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t16.get())) goto _8;
		}
		{
			Variant t17;
			c.f.fLine=13;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kexists.cv(),t17.cv())) goto _0;
			Bool t18;
			if (!g->GetValue(ctx,(PCV[]){t18.cv(),t17.cv(),nullptr})) goto _0;
			if (!(t18.get())) goto _9;
		}
		{
			Obj t19;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t19.cv()},0,1470)) goto _0;
			if (g->SetMember(ctx,t19.cv(),KexecutableFile.cv(),Parm<Obj>(inParams,inNbParam,1).cv())) goto _0;
		}
_9:
		goto _4;
_8:
_4:
		goto _2;
_3:
		{
			Bool t20;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t20.cv()},0,1573)) goto _0;
			if (!(t20.get())) goto _10;
		}
		{
			Obj t21;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1709)) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),KFile.cv(),t22.cv())) goto _0;
			Obj t23;
			if (!g->GetValue(ctx,(PCV[]){t23.cv(),t22.cv(),nullptr})) goto _0;
			Bool t24;
			if (g->Call(ctx,(PCV[]){t24.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t23.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t24.get())) goto _12;
		}
		{
			Variant t25;
			c.f.fLine=20;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kexists.cv(),t25.cv())) goto _0;
			Bool t26;
			if (!g->GetValue(ctx,(PCV[]){t26.cv(),t25.cv(),nullptr})) goto _0;
			if (!(t26.get())) goto _13;
		}
		{
			Obj t27;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t27.cv()},0,1470)) goto _0;
			if (g->SetMember(ctx,t27.cv(),KexecutableFile.cv(),Parm<Obj>(inParams,inNbParam,1).cv())) goto _0;
		}
_13:
		goto _11;
_12:
_11:
		goto _2;
_10:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern int32_t vOK;
extern Txt K;
extern Txt KContents;
extern Txt KInfo_2Eplist;
extern Txt KMacOS;
extern Txt KON__PARSE__ERROR;
extern Txt Kapp;
extern Txt Kexists;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt KplatformPath;
extern Txt k94rHuiUr1Z8;
extern unsigned char D_proc_App_2E__getBundleExecutable[];
void proc_App_2E__getBundleExecutable( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_App_2E__getBundleExecutable);
	if (!ctx->doingAbort) try {
		Txt ldom;
		Txt ldomKey;
		Txt lstringValue;
		Obj lplistFile;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Kapp.cv(),t1.cv())) goto _0;
			Variant t2;
			t2.setNull();
			Bool t3;
			if (g->OperationOnAny(ctx,7,t1.cv(),t2.cv(),t3.cv())) goto _0;
			if (!(t3.get())) goto _2;
		}
		{
			Obj t4;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1470)) goto _0;
			Variant t5;
			if (g->GetMember(ctx,t4.cv(),Kapp.cv(),t5.cv())) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),t6.cv(),Kfile.cv(),KInfo_2Eplist.cv()},3,1498)) goto _0;
			Obj t8;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),t7.cv(),nullptr})) goto _0;
			lplistFile=t8.get();
		}
		{
			Variant t9;
			c.f.fLine=8;
			if (g->GetMember(ctx,lplistFile.cv(),Kexists.cv(),t9.cv())) goto _0;
			Bool t10;
			if (!g->GetValue(ctx,(PCV[]){t10.cv(),t9.cv(),nullptr})) goto _0;
			if (!(t10.get())) goto _3;
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,KON__PARSE__ERROR.cv()},1,155)) goto _0;
		g->Check(ctx);
		{
			Variant t11;
			c.f.fLine=11;
			if (g->GetMember(ctx,lplistFile.cv(),KplatformPath.cv(),t11.cv())) goto _0;
			Txt t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv()},1,719)) goto _0;
			g->Check(ctx);
			ldom=t12.get();
		}
		c.f.fLine=12;
		if (g->Call(ctx,(PCV[]){nullptr,K.cv()},1,155)) goto _0;
		g->Check(ctx);
		if (1!=Var<Long>(ctx,vOK).get()) goto _4;
		{
			Txt t14;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t14.cv(),ldom.cv(),k94rHuiUr1Z8.cv()},2,864)) goto _0;
			g->Check(ctx);
			ldomKey=t14.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _5;
		{
			Txt t16;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t16.cv(),ldomKey.cv()},1,724)) goto _0;
			g->Check(ctx);
			Ref t17;
			t17.setLocalRef(ctx,lstringValue.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t16.cv(),t17.cv()},2,731)) goto _0;
		}
		{
			Obj t18;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t18.cv()},0,1470)) goto _0;
			Variant t19;
			if (g->GetMember(ctx,t18.cv(),Kapp.cv(),t19.cv())) goto _0;
			Variant t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),t19.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t21;
			if (g->Call(ctx,(PCV[]){t21.cv(),t20.cv(),Kfolder.cv(),KMacOS.cv()},3,1498)) goto _0;
			Variant t22;
			if (g->Call(ctx,(PCV[]){t22.cv(),t21.cv(),Kfile.cv(),lstringValue.cv()},3,1498)) goto _0;
			Obj t23;
			if (!g->GetValue(ctx,(PCV[]){t23.cv(),t22.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t23.get();
		}
_5:
_4:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KTRUE;
extern Txt K_0A;
extern Txt K_0D_0A;
extern Txt K_20;
extern Txt K_2Ebat;
extern Txt K_2Eexe;
extern Txt Kcmd_2Eexe_20_2FC;
extern Txt KexecutableFile;
extern Txt Kextension;
extern Txt Kjoin;
extern Txt Kpath;
extern Txt KstdErr;
extern Txt KstdOut;
extern Txt Ktrue;
extern Txt Kunshift;
extern Txt Kutf_2D16le;
extern Txt Kutf_2D8;
extern Txt k6Nsk9JOUrts;
extern Txt kB$4yjFhOioQ;
extern Txt kgzFhD_9QbLw;
extern Txt kq9xyN57tDUc;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_App_2Eopen[];
void proc_App_2Eopen( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_App_2Eopen);
	if (!ctx->doingAbort) try {
		Txt lcommand;
		Blb lstdIn;
		Txt lencoding;
		Txt lEOL;
		Blb lstdOut;
		Blb lstdErr;
		new ( outResult) Obj();
		{
			Variant t0;
			t0.setNull();
			Bool t1;
			c.f.fLine=2;
			if (g->OperationOnAny(ctx,6,Parm<Col>(inParams,inNbParam,1).cv(),t0.cv(),t1.cv())) goto _0;
			if (!(t1.get())) goto _2;
		}
		{
			Col t2;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1472)) goto _0;
			g->Check(ctx);
			Parm<Col>(inParams,inNbParam,1)=t2.get();
		}
_2:
		{
			Bool t3;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1572)) goto _0;
			if (!(t3.get())) goto _4;
		}
		{
			Obj t4;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1470)) goto _0;
			Variant t5;
			if (g->GetMember(ctx,t4.cv(),KexecutableFile.cv(),t5.cv())) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),Kpath.cv(),t6.cv())) goto _0;
			Txt t7;
			if (!g->GetValue(ctx,(PCV[]){t7.cv(),t6.cv(),nullptr})) goto _0;
			Txt t8;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t7.cv()},t8.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,1).cv(),Kunshift.cv(),t8.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t9;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t9.cv(),Parm<Col>(inParams,inNbParam,1).cv(),Kjoin.cv(),K_20.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Txt t10;
			if (!g->GetValue(ctx,(PCV[]){t10.cv(),t9.cv(),nullptr})) goto _0;
			lcommand=t10.get();
		}
		goto _3;
_4:
		{
			Bool t11;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1573)) goto _0;
			if (!(t11.get())) goto _5;
		}
		{
			Variant t12;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t12.cv(),Parm<Col>(inParams,inNbParam,1).cv(),Kjoin.cv(),K_20.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Txt t13;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),t12.cv(),nullptr})) goto _0;
			Txt t14;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t13.cv()},t14.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Col t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv()},1,1472)) goto _0;
			Parm<Col>(inParams,inNbParam,1)=t15.get();
		}
		{
			Obj t16;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t16.cv()},0,1470)) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KexecutableFile.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),Kpath.cv(),t18.cv())) goto _0;
			Txt t19;
			if (!g->GetValue(ctx,(PCV[]){t19.cv(),t18.cv(),nullptr})) goto _0;
			Txt t20;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t19.cv()},t20.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,1).cv(),Kunshift.cv(),t20.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t21;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1470)) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),KexecutableFile.cv(),t22.cv())) goto _0;
			Variant t23;
			if (g->GetMember(ctx,t22.cv(),Kextension.cv(),t23.cv())) goto _0;
			Bool t24;
			if (g->OperationOnAny(ctx,6,t23.cv(),K_2Ebat.cv(),t24.cv())) goto _0;
			if (!(t24.get())) goto _7;
		}
		c.f.fLine=15;
		if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,1).cv(),Kunshift.cv(),kgzFhD_9QbLw.cv()},3,1500)) goto _0;
		g->Check(ctx);
		goto _6;
_7:
		{
			Obj t25;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t25.cv()},0,1470)) goto _0;
			Variant t26;
			if (g->GetMember(ctx,t25.cv(),KexecutableFile.cv(),t26.cv())) goto _0;
			Variant t27;
			if (g->GetMember(ctx,t26.cv(),Kextension.cv(),t27.cv())) goto _0;
			Bool t28;
			if (g->OperationOnAny(ctx,6,t27.cv(),K_2Eexe.cv(),t28.cv())) goto _0;
			if (!(t28.get())) goto _8;
		}
		c.f.fLine=17;
		if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,1).cv(),Kunshift.cv(),kq9xyN57tDUc.cv()},3,1500)) goto _0;
		g->Check(ctx);
		goto _6;
_8:
		c.f.fLine=19;
		if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,1).cv(),Kunshift.cv(),Kcmd_2Eexe_20_2FC.cv()},3,1500)) goto _0;
		g->Check(ctx);
_6:
		{
			Variant t29;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t29.cv(),Parm<Col>(inParams,inNbParam,1).cv(),Kjoin.cv(),K_20.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Txt t30;
			if (!g->GetValue(ctx,(PCV[]){t30.cv(),t29.cv(),nullptr})) goto _0;
			lcommand=t30.get();
		}
		goto _3;
_5:
_3:
		c.f.fLine=25;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Bool t31;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t31.cv()},0,1573)) goto _0;
			if (!(t31.get())) goto _9;
		}
		c.f.fLine=27;
		if (g->Call(ctx,(PCV[]){nullptr,kB$4yjFhOioQ.cv(),Ktrue.cv()},2,812)) goto _0;
		g->Check(ctx);
_9:
		{
			Ref t32;
			t32.setLocalRef(ctx,lstdErr.cv());
			Ref t33;
			t33.setLocalRef(ctx,lstdOut.cv());
			Ref t34;
			t34.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t34.cv(),t33.cv(),t32.cv()},4,811)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t35;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t35.cv()},0,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t35.get();
		}
		{
			Bool t36;
			c.f.fLine=34;
			if (g->Call(ctx,(PCV[]){t36.cv()},0,1572)) goto _0;
			if (!(t36.get())) goto _11;
		}
		lencoding=Kutf_2D8.get();
		lEOL=K_0A.get();
		goto _10;
_11:
		{
			Bool t37;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t37.cv()},0,1573)) goto _0;
			if (!(t37.get())) goto _12;
		}
		lencoding=Kutf_2D16le.get();
		lEOL=K_0D_0A.get();
		goto _10;
_12:
_10:
		{
			Ref t38;
			t38.setLocalRef(ctx,lstdOut.cv());
			Txt t39;
			c.f.fLine=42;
			if (g->Call(ctx,(PCV[]){t39.cv(),t38.cv(),lencoding.cv()},2,1012)) goto _0;
			g->Check(ctx);
			Col t40;
			if (g->Call(ctx,(PCV[]){t40.cv(),t39.cv(),lEOL.cv()},2,1554)) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KstdOut.cv(),t40.cv())) goto _0;
		}
		{
			Ref t41;
			t41.setLocalRef(ctx,lstdErr.cv());
			Txt t42;
			c.f.fLine=43;
			if (g->Call(ctx,(PCV[]){t42.cv(),t41.cv(),lencoding.cv()},2,1012)) goto _0;
			g->Check(ctx);
			Col t43;
			if (g->Call(ctx,(PCV[]){t43.cv(),t42.cv(),lEOL.cv()},2,1554)) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KstdErr.cv(),t43.cv())) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt Kutf_2D8;
extern unsigned char D_proc_App_2EencodeObject[];
void proc_App_2EencodeObject( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_App_2EencodeObject);
	if (!ctx->doingAbort) try {
		Blb ldata;
		Txt ljson;
		new ( outResult) Txt();
		{
			Variant t0;
			t0.setNull();
			Bool t1;
			c.f.fLine=2;
			if (g->OperationOnAny(ctx,7,Parm<Obj>(inParams,inNbParam,1).cv(),t0.cv(),t1.cv())) goto _0;
			if (!(t1.get())) goto _2;
		}
		{
			Txt t2;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t2.cv(),Parm<Obj>(inParams,inNbParam,1).cv()},1,1217)) goto _0;
			g->Check(ctx);
			ljson=t2.get();
		}
		{
			Ref t3;
			t3.setLocalRef(ctx,ldata.cv());
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,ljson.cv(),Kutf_2D8.cv(),t3.cv()},3,1011)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t4;
			t4.setLocalRef(ctx,Res<Txt>(outResult).cv());
			Ref t5;
			t5.setLocalRef(ctx,ldata.cv());
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){nullptr,t5.cv(),t4.cv()},2,895)) goto _0;
			g->Check(ctx);
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
