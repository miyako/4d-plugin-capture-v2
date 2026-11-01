extern Txt Kproject;
extern unsigned char D_proc_Console_3Aconstructor[];
void proc_Console_3Aconstructor( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Console_3Aconstructor);
	if (!ctx->doingAbort) try {
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			if (g->SetMember(ctx,t0.cv(),Kproject.cv(),Parm<Obj>(inParams,inNbParam,1).cv())) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K_0A;
extern unsigned char D_proc_Console_2EprintInformation[];
void proc_Console_2EprintInformation( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Console_2EprintInformation);
	if (!ctx->doingAbort) try {
		{
			Txt t0;
			g->AddString(Parm<Txt>(inParams,inNbParam,1).get(),K_0A.get(),t0.get());
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){nullptr,Long(6).cv(),t0.cv(),Long(0).cv()},3,667)) goto _0;
			g->Check(ctx);
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K_0A;
extern unsigned char D_proc_Console_2EprintWarning[];
void proc_Console_2EprintWarning( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Console_2EprintWarning);
	if (!ctx->doingAbort) try {
		{
			Txt t0;
			g->AddString(Parm<Txt>(inParams,inNbParam,1).get(),K_0A.get(),t0.get());
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){nullptr,Long(6).cv(),t0.cv(),Long(1).cv()},3,667)) goto _0;
			g->Check(ctx);
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K_0A;
extern unsigned char D_proc_Console_2EprintError[];
void proc_Console_2EprintError( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Console_2EprintError);
	if (!ctx->doingAbort) try {
		{
			Txt t0;
			g->AddString(Parm<Txt>(inParams,inNbParam,1).get(),K_0A.get(),t0.get());
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){nullptr,Long(6).cv(),t0.cv(),Long(2).cv()},3,667)) goto _0;
			g->Check(ctx);
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K_3A_3Aendgroup_3A_3A;
extern Txt Kerrors;
extern Txt Klength;
extern Txt Kprint;
extern Txt k9NjkCBC7DS8;
extern Txt kyy8MJIZiZlc;
extern unsigned char D_proc_Console_2EprintErrors[];
void proc_Console_2EprintErrors( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Console_2EprintErrors);
	if (!ctx->doingAbort) try {
		Obj l__4D__auto__iter__0;
		Obj lerror;
		{
			Variant t0;
			t0.setNull();
			Bool t1;
			c.f.fLine=2;
			if (g->OperationOnAny(ctx,7,Parm<Obj>(inParams,inNbParam,1).cv(),t0.cv(),t1.cv())) goto _0;
			if (!(t1.get())) goto _2;
		}
		{
			Variant t2;
			c.f.fLine=3;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kerrors.cv(),t2.cv())) goto _0;
			Variant t3;
			t3.setNull();
			Bool t4;
			if (g->OperationOnAny(ctx,7,t2.cv(),t3.cv(),t4.cv())) goto _0;
			if (!(t4.get())) goto _3;
		}
		{
			Variant t5;
			c.f.fLine=4;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kerrors.cv(),t5.cv())) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),Klength.cv(),t6.cv())) goto _0;
			Bool t7;
			if (g->OperationOnAny(ctx,5,t6.cv(),Num(0).cv(),t7.cv())) goto _0;
			if (!(t7.get())) goto _4;
		}
		{
			Obj t8;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t8.cv(),k9NjkCBC7DS8.cv(),kyy8MJIZiZlc.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t9;
			c.f.fLine=7;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kerrors.cv(),t9.cv())) goto _0;
			Obj t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__0=t10.get();
		}
_5:
		{
			Ref t11;
			t11.setLocalRef(ctx,lerror.cv());
			Bool t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),l__4D__auto__iter__0.cv(),t11.cv()},2,1511)) goto _0;
			if (!(t12.get())) goto _6;
		}
		{
			Obj t13;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t13.cv(),Kprint.cv(),lerror.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		goto _5;
_6:
		{
			Variant t14;
			t14.setNull();
			Obj t15;
			c.f.fLine=9;
			if (!g->GetValue(ctx,(PCV[]){t15.cv(),t14.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t15.get();
		}
		{
			Obj t16;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t16.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t16.cv(),k9NjkCBC7DS8.cv(),K_3A_3Aendgroup_3A_3A.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
_4:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K_2Csuccess_3D;
extern Txt K_3A_3A;
extern Txt K_3A_3Aendgroup_3A_3A;
extern Txt K_3A_3Aproject_3D;
extern Txt Kpath;
extern Txt Kproject;
extern Txt k9NjkCBC7DS8;
extern Txt kzujOHtS1Uk0;
extern unsigned char D_proc_Console_2EprintStatus[];
void proc_Console_2EprintStatus( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Console_2EprintStatus);
	if (!ctx->doingAbort) try {
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t0.cv(),k9NjkCBC7DS8.cv(),kzujOHtS1Uk0.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t1;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1470)) goto _0;
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1470)) goto _0;
			Variant t3;
			if (g->GetMember(ctx,t2.cv(),Kproject.cv(),t3.cv())) goto _0;
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kpath.cv(),t4.cv())) goto _0;
			Variant t5;
			if (g->OperationOnAny(ctx,0,K_3A_3Aproject_3D.cv(),t4.cv(),t5.cv())) goto _0;
			Variant t6;
			if (g->OperationOnAny(ctx,0,t5.cv(),K_2Csuccess_3D.cv(),t6.cv())) goto _0;
			Bool t7;
			t7=Parm<Bool>(inParams,inNbParam,1).get();
			Txt t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),t7.cv()},1,10)) goto _0;
			Variant t9;
			if (g->OperationOnAny(ctx,0,t6.cv(),t8.cv(),t9.cv())) goto _0;
			Variant t10;
			if (g->OperationOnAny(ctx,0,t9.cv(),K_3A_3A.cv(),t10.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t1.cv(),k9NjkCBC7DS8.cv(),t10.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t11;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t11.cv(),k9NjkCBC7DS8.cv(),K_3A_3Aendgroup_3A_3A.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K;
extern Txt K_2Cline_3D;
extern Txt K_3A_3A;
extern Txt Kcode;
extern Txt Kfile;
extern Txt Kfile_3D;
extern Txt KisError;
extern Txt KlineInFile;
extern Txt Kmessage;
extern Txt Kparent;
extern Txt Kpath;
extern Txt KplatformPath;
extern Txt KprintError;
extern Txt KprintWarning;
extern Txt Kproject;
extern unsigned char D_proc_Console_2Eprint[];
void proc_Console_2Eprint( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_Console_2Eprint);
	if (!ctx->doingAbort) try {
		Txt lfile;
		Txt lrelativePath;
		{
			Variant t0;
			c.f.fLine=4;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kcode.cv(),t0.cv())) goto _0;
			Variant t1;
			t1.setNull();
			Bool t2;
			if (g->OperationOnAny(ctx,7,t0.cv(),t1.cv(),t2.cv())) goto _0;
			if (!(t2.get())) goto _2;
		}
		{
			Variant t3;
			c.f.fLine=5;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kcode.cv(),t3.cv())) goto _0;
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),Kfile.cv(),t4.cv())) goto _0;
			Variant t5;
			if (g->GetMember(ctx,t4.cv(),KplatformPath.cv(),t5.cv())) goto _0;
			Obj t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Long(1).cv()},2,1566)) goto _0;
			g->Check(ctx);
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),Kpath.cv(),t7.cv())) goto _0;
			Obj t8;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			Variant t9;
			if (g->GetMember(ctx,t8.cv(),Kproject.cv(),t9.cv())) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kparent.cv(),t10.cv())) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),Kpath.cv(),t11.cv())) goto _0;
			Txt t12;
			if (!g->GetValue(ctx,(PCV[]){t12.cv(),t11.cv(),nullptr})) goto _0;
			Txt t13;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),t7.cv(),nullptr})) goto _0;
			Txt t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),t13.cv(),t12.cv(),K.cv(),Long(1).cv(),Ref((optyp)3).cv()},5,233)) goto _0;
			lrelativePath=t14.get();
		}
		{
			Txt t15;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t15.cv(),lrelativePath.cv()},1,10)) goto _0;
			Txt t16;
			g->AddString(Kfile_3D.get(),t15.get(),t16.get());
			Txt t17;
			g->AddString(t16.get(),K_2Cline_3D.get(),t17.get());
			Variant t18;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KlineInFile.cv(),t18.cv())) goto _0;
			Txt t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),t18.cv()},1,10)) goto _0;
			g->AddString(t17.get(),t19.get(),lfile.get());
		}
		goto _3;
_2:
		lfile=K.get();
_3:
		{
			Variant t21;
			c.f.fLine=11;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KisError.cv(),t21.cv())) goto _0;
			Bool t22;
			if (g->Call(ctx,(PCV[]){t22.cv(),t21.cv()},1,1537)) goto _0;
			if (!(t22.get())) goto _4;
		}
		{
			Obj t23;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t23.cv()},0,1470)) goto _0;
			Txt t24;
			g->AddString(K_3A_3A.get(),lfile.get(),t24.get());
			Txt t25;
			g->AddString(t24.get(),K_3A_3A.get(),t25.get());
			Variant t26;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kmessage.cv(),t26.cv())) goto _0;
			Txt t27;
			if (g->Call(ctx,(PCV[]){t27.cv(),t26.cv()},1,10)) goto _0;
			Txt t28;
			g->AddString(t25.get(),t27.get(),t28.get());
			if (g->Call(ctx,(PCV[]){nullptr,t23.cv(),KprintError.cv(),t28.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		goto _5;
_4:
		{
			Obj t29;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t29.cv()},0,1470)) goto _0;
			Txt t30;
			g->AddString(K_3A_3A.get(),lfile.get(),t30.get());
			Txt t31;
			g->AddString(t30.get(),K_3A_3A.get(),t31.get());
			Variant t32;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kmessage.cv(),t32.cv())) goto _0;
			Txt t33;
			if (g->Call(ctx,(PCV[]){t33.cv(),t32.cv()},1,10)) goto _0;
			Txt t34;
			g->AddString(t31.get(),t33.get(),t34.get());
			if (g->Call(ctx,(PCV[]){nullptr,t29.cv(),KprintWarning.cv(),t34.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
_5:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
