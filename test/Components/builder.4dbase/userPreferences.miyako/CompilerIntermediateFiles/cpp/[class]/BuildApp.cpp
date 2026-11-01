extern Txt KFile;
extern Txt KObject;
extern Txt K__getSettings;
extern Txt Ksettings;
extern Txt KsettingsFile;
extern Txt kBfA8eqLh7qs;
extern unsigned char D_proc_BuildApp_3Aconstructor[];
void proc_BuildApp_3Aconstructor( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_BuildApp_3Aconstructor);
	if (!ctx->doingAbort) try {
		{
			Obj t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1709)) goto _0;
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),KFile.cv(),t1.cv())) goto _0;
			Obj t2;
			if (!g->GetValue(ctx,(PCV[]){t2.cv(),t1.cv(),nullptr})) goto _0;
			Bool t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t2.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t3.get())) goto _3;
		}
		{
			Obj t4;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1470)) goto _0;
			if (g->SetMember(ctx,t4.cv(),KsettingsFile.cv(),Parm<Obj>(inParams,inNbParam,1).cv())) goto _0;
		}
		goto _2;
_3:
		{
			Obj t5;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1709)) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),KObject.cv(),t6.cv())) goto _0;
			Obj t7;
			if (!g->GetValue(ctx,(PCV[]){t7.cv(),t6.cv(),nullptr})) goto _0;
			Bool t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t7.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t8.get())) goto _4;
		}
		{
			Obj t9;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1470)) goto _0;
			Variant t10;
			t10.setNull();
			if (g->SetMember(ctx,t9.cv(),KsettingsFile.cv(),t10.cv())) goto _0;
		}
		goto _2;
_4:
		{
			Obj t11;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Obj t12;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1470)) goto _0;
			Variant t13;
			if (g->Call(ctx,(PCV[]){t13.cv(),t12.cv(),kBfA8eqLh7qs.cv()},2,1498)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t11.cv(),KsettingsFile.cv(),t13.cv())) goto _0;
		}
_2:
		{
			Obj t14;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Obj t15;
			if (g->Call(ctx,(PCV[]){t15.cv()},0,1470)) goto _0;
			Obj t16;
			if (g->Call(ctx,(PCV[]){t16.cv()},0,1470)) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KsettingsFile.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),t15.cv(),K__getSettings.cv(),t17.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t14.cv(),Ksettings.cv(),t18.cv())) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K;
extern Txt K0;
extern Txt KArrayLicenseMac;
extern Txt KArrayLicenseWin;
extern Txt KItem;
extern Txt KLicenses;
extern Txt KR_2D;
extern Txt K_2Elicense4D;
extern Txt K_40;
extern Txt Kextension;
extern Txt Kfiles;
extern Txt Klicense4D;
extern Txt KlicenseTypes;
extern Txt Kname;
extern Txt Kparameters;
extern Txt Kpush;
extern Txt Kquery;
extern Txt Ksettings;
extern Txt ka7N$dypXuFg;
extern unsigned char D_proc_BuildApp_2EfindLicenses[];
void proc_BuildApp_2EfindLicenses( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_BuildApp_2EfindLicenses);
	if (!ctx->doingAbort) try {
		Variant llicenseType;
		Txt lversion;
		Col lfiles;
		Obj lfile;
		Obj lparams;
		Txt lversionCode;
		Obj l__4D__auto__iter__0;
		Obj l__4D__auto__iter__1;
		Obj l__4D__auto__iter__2;
		Txt lprefix;
		Long lbuild;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Ref t1;
			t1.setLocalRef(ctx,lbuild.cv());
			Txt t2;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv()},1,493)) goto _0;
			g->Check(ctx);
			lversion=t2.get();
		}
		{
			Txt t3;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t3.cv(),lversion.cv(),Long(3).cv(),Long(1).cv()},3,12)) goto _0;
			Bool t4;
			t4=g->CompareString(ctx,t3.get(),K0.get())!=0;
			if (!(t4.get())) goto _2;
		}
		lprefix=KR_2D.get();
		goto _3;
_2:
		lprefix=K.get();
_3:
		{
			Obj t5;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1471)) goto _0;
			g->Check(ctx);
			Obj t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),Kparameters.cv(),t5.cv()},2,1471)) goto _0;
			lparams=t6.get();
		}
		{
			Variant t7;
			c.f.fLine=16;
			if (g->GetMember(ctx,lparams.cv(),Kparameters.cv(),t7.cv())) goto _0;
			Col t8;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1472)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t7.cv(),KlicenseTypes.cv(),t8.cv())) goto _0;
		}
		{
			Variant t9;
			c.f.fLine=17;
			if (g->GetMember(ctx,lparams.cv(),Kparameters.cv(),t9.cv())) goto _0;
			if (g->SetMember(ctx,t9.cv(),Klicense4D.cv(),K_2Elicense4D.cv())) goto _0;
		}
		{
			Txt t10;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t10.cv(),lversion.cv(),Long(1).cv(),Long(2).cv()},3,12)) goto _0;
			g->AddString(t10.get(),K0.get(),lversionCode.get());
		}
		{
			Obj t12;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t12.cv(),Parm<Col>(inParams,inNbParam,1).cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__0=t12.get();
		}
_4:
		{
			Ref t13;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t13.cv(),llicenseType.cv(),nullptr})) goto _0;
			Bool t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),l__4D__auto__iter__0.cv(),t13.cv()},2,1511)) goto _0;
			if (!(t14.get())) goto _5;
		}
		{
			Variant t15;
			c.f.fLine=20;
			if (g->GetMember(ctx,lparams.cv(),Kparameters.cv(),t15.cv())) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),KlicenseTypes.cv(),t16.cv())) goto _0;
			Variant t17;
			if (!g->GetValue(ctx,(PCV[]){t17.cv(),llicenseType.cv(),nullptr})) goto _0;
			Variant t18;
			if (g->OperationOnAny(ctx,0,lprefix.cv(),t17.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->OperationOnAny(ctx,0,t18.cv(),lversionCode.cv(),t19.cv())) goto _0;
			Variant t20;
			if (g->OperationOnAny(ctx,0,t19.cv(),K_40.cv(),t20.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t16.cv(),Kpush.cv(),t20.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		goto _4;
_5:
		{
			Variant t21;
			t21.setNull();
			Obj t22;
			c.f.fLine=21;
			if (!g->GetValue(ctx,(PCV[]){t22.cv(),t21.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t22.get();
		}
		{
			Obj t23;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t23.cv(),Long(1).cv()},1,1567)) goto _0;
			g->Check(ctx);
			Variant t24;
			if (g->Call(ctx,(PCV[]){t24.cv(),t23.cv(),Kfiles.cv(),Long(8).cv()},3,1498)) goto _0;
			Variant t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv(),Kquery.cv(),ka7N$dypXuFg.cv(),lparams.cv()},4,1498)) goto _0;
			Col t26;
			if (!g->GetValue(ctx,(PCV[]){t26.cv(),t25.cv(),nullptr})) goto _0;
			lfiles=t26.get();
		}
		{
			Bool t27;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t27.cv()},0,1572)) goto _0;
			if (!(t27.get())) goto _7;
		}
		{
			Obj t28;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t28.cv(),lfiles.cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__1=t28.get();
		}
_8:
		{
			Ref t29;
			t29.setLocalRef(ctx,lfile.cv());
			Bool t30;
			if (g->Call(ctx,(PCV[]){t30.cv(),l__4D__auto__iter__1.cv(),t29.cv()},2,1511)) goto _0;
			if (!(t30.get())) goto _9;
		}
		{
			Obj t31;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t31.cv()},0,1470)) goto _0;
			Variant t32;
			if (g->GetMember(ctx,t31.cv(),Ksettings.cv(),t32.cv())) goto _0;
			Variant t33;
			if (g->GetMember(ctx,t32.cv(),KLicenses.cv(),t33.cv())) goto _0;
			Variant t34;
			if (g->GetMember(ctx,t33.cv(),KArrayLicenseMac.cv(),t34.cv())) goto _0;
			Variant t35;
			if (g->GetMember(ctx,t34.cv(),KItem.cv(),t35.cv())) goto _0;
			Txt t36;
			if (g->Call(ctx,(PCV[]){t36.cv(),Long(1).cv()},1,485)) goto _0;
			g->Check(ctx);
			Variant t37;
			if (g->GetMember(ctx,lfile.cv(),Kname.cv(),t37.cv())) goto _0;
			Variant t38;
			if (g->OperationOnAny(ctx,0,t36.cv(),t37.cv(),t38.cv())) goto _0;
			Variant t39;
			if (g->GetMember(ctx,lfile.cv(),Kextension.cv(),t39.cv())) goto _0;
			Variant t40;
			if (g->OperationOnAny(ctx,0,t38.cv(),t39.cv(),t40.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t35.cv(),Kpush.cv(),t40.cv()},3,1500)) goto _0;
		}
		goto _8;
_9:
		{
			Variant t41;
			t41.setNull();
			Obj t42;
			c.f.fLine=33;
			if (!g->GetValue(ctx,(PCV[]){t42.cv(),t41.cv(),nullptr})) goto _0;
			l__4D__auto__iter__1=t42.get();
		}
		goto _6;
_7:
		{
			Bool t43;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t43.cv()},0,1573)) goto _0;
			if (!(t43.get())) goto _10;
		}
		{
			Obj t44;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t44.cv(),lfiles.cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__2=t44.get();
		}
_11:
		{
			Ref t45;
			t45.setLocalRef(ctx,lfile.cv());
			Bool t46;
			if (g->Call(ctx,(PCV[]){t46.cv(),l__4D__auto__iter__2.cv(),t45.cv()},2,1511)) goto _0;
			if (!(t46.get())) goto _12;
		}
		{
			Obj t47;
			c.f.fLine=38;
			if (g->Call(ctx,(PCV[]){t47.cv()},0,1470)) goto _0;
			Variant t48;
			if (g->GetMember(ctx,t47.cv(),Ksettings.cv(),t48.cv())) goto _0;
			Variant t49;
			if (g->GetMember(ctx,t48.cv(),KLicenses.cv(),t49.cv())) goto _0;
			Variant t50;
			if (g->GetMember(ctx,t49.cv(),KArrayLicenseWin.cv(),t50.cv())) goto _0;
			Variant t51;
			if (g->GetMember(ctx,t50.cv(),KItem.cv(),t51.cv())) goto _0;
			Txt t52;
			if (g->Call(ctx,(PCV[]){t52.cv(),Long(1).cv()},1,485)) goto _0;
			g->Check(ctx);
			Variant t53;
			if (g->GetMember(ctx,lfile.cv(),Kname.cv(),t53.cv())) goto _0;
			Variant t54;
			if (g->OperationOnAny(ctx,0,t52.cv(),t53.cv(),t54.cv())) goto _0;
			Variant t55;
			if (g->GetMember(ctx,lfile.cv(),Kextension.cv(),t55.cv())) goto _0;
			Variant t56;
			if (g->OperationOnAny(ctx,0,t54.cv(),t55.cv(),t56.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t51.cv(),Kpush.cv(),t56.cv()},3,1500)) goto _0;
		}
		goto _11;
_12:
		{
			Variant t57;
			t57.setNull();
			Obj t58;
			c.f.fLine=39;
			if (!g->GetValue(ctx,(PCV[]){t58.cv(),t57.cv(),nullptr})) goto _0;
			l__4D__auto__iter__2=t58.get();
		}
		goto _6;
_10:
_6:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K_3A;
extern Txt Kparent;
extern Txt KplatformPath;
extern Txt Ksettings;
extern Txt kLa2ChQdcjpU;
extern Txt kmScCWfEpPp4;
extern unsigned char D_proc_BuildApp_2EgetPlatformDestinationFolder[];
void proc_BuildApp_2EgetPlatformDestinationFolder( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_BuildApp_2EgetPlatformDestinationFolder);
	if (!ctx->doingAbort) try {
		Txt lparentFolderPath;
		Txt lpath;
		Obj lsettings;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),Ksettings.cv(),t1.cv())) goto _0;
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
			if (g->GetMember(ctx,t4.cv(),Ksettings.cv(),t5.cv())) goto _0;
			Obj t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			lsettings=t6.get();
		}
		{
			Bool t7;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1573)) goto _0;
			if (!(t7.get())) goto _4;
		}
		{
			Variant t8;
			c.f.fLine=12;
			if (g->GetMember(ctx,lsettings.cv(),kmScCWfEpPp4.cv(),t8.cv())) goto _0;
			Txt t9;
			if (!g->GetValue(ctx,(PCV[]){t9.cv(),t8.cv(),nullptr})) goto _0;
			lpath=t9.get();
		}
		goto _3;
_4:
		{
			Bool t10;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1572)) goto _0;
			if (!(t10.get())) goto _5;
		}
		{
			Variant t11;
			c.f.fLine=14;
			if (g->GetMember(ctx,lsettings.cv(),kLa2ChQdcjpU.cv(),t11.cv())) goto _0;
			Txt t12;
			if (!g->GetValue(ctx,(PCV[]){t12.cv(),t11.cv(),nullptr})) goto _0;
			lpath=t12.get();
		}
		goto _3;
_5:
_3:
		{
			Txt t13;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t13.cv(),lpath.cv(),Long(1).cv(),Long(1).cv()},3,12)) goto _0;
			Bool t14;
			t14=g->CompareString(ctx,t13.get(),K_3A.get())==0;
			if (!(t14.get())) goto _6;
		}
		{
			Txt t15;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t15.cv(),Long(4).cv()},1,485)) goto _0;
			g->Check(ctx);
			Obj t16;
			if (g->Call(ctx,(PCV[]){t16.cv(),t15.cv(),Long(1).cv()},2,1567)) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),Kparent.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),Kparent.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->GetMember(ctx,t18.cv(),KplatformPath.cv(),t19.cv())) goto _0;
			Txt t20;
			if (!g->GetValue(ctx,(PCV[]){t20.cv(),t19.cv(),nullptr})) goto _0;
			lparentFolderPath=t20.get();
		}
		{
			Long t21;
			t21=lparentFolderPath.get().fLength;
			Long t22;
			t22=t21.get()-1;
			Txt t23;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t23.cv(),lparentFolderPath.cv(),Long(1).cv(),t22.cv()},3,12)) goto _0;
			lparentFolderPath=t23.get();
		}
		{
			Txt t24;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t24.cv(),lpath.cv(),Long(1).cv(),Long(1).cv()},3,232)) goto _0;
			Txt t25;
			g->AddString(lparentFolderPath.get(),t24.get(),t25.get());
			lparentFolderPath=t25.get();
		}
		{
			Obj t26;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t26.cv(),lparentFolderPath.cv(),Long(1).cv()},2,1567)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t26.get();
		}
		goto _7;
_6:
		{
			Obj t27;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t27.cv(),lpath.cv(),Long(1).cv()},2,1567)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t27.get();
		}
_7:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K;
extern Txt Kexists;
extern unsigned char D_proc_BuildApp_2EgetDefaultSettingsFile[];
void proc_BuildApp_2EgetDefaultSettingsFile( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_BuildApp_2EgetDefaultSettingsFile);
	if (!ctx->doingAbort) try {
		Txt lbuildSettingsFilePath;
		Obj lfile;
		new ( outResult) Obj();
		{
			Txt t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(20).cv(),Ref((optyp)3).cv()},2,1418)) goto _0;
			g->Check(ctx);
			lbuildSettingsFilePath=t0.get();
		}
		{
			Bool t1;
			t1=g->CompareString(ctx,lbuildSettingsFilePath.get(),K.get())!=0;
			if (!(t1.get())) goto _2;
		}
		{
			Obj t2;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t2.cv(),lbuildSettingsFilePath.cv(),Long(1).cv()},2,1566)) goto _0;
			g->Check(ctx);
			lfile=t2.get();
		}
		{
			Variant t3;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfile.cv(),Kexists.cv(),t3.cv())) goto _0;
			Bool t4;
			if (!g->GetValue(ctx,(PCV[]){t4.cv(),t3.cv(),nullptr})) goto _0;
			if (!(t4.get())) goto _3;
		}
		Res<Obj>(outResult)=lfile.get();
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KplatformPath;
extern Txt keSL$$AzGYwE;
extern unsigned char D_proc_BuildApp_2EopenProject[];
void proc_BuildApp_2EopenProject( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_BuildApp_2EopenProject);
	if (!ctx->doingAbort) try {
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Obj t1;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1470)) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),keSL$$AzGYwE.cv(),t2.cv())) goto _0;
			Variant t3;
			t3.setNull();
			Bool t4;
			if (g->OperationOnAny(ctx,7,t2.cv(),t3.cv(),t4.cv())) goto _0;
			if (!(t4.get())) goto _2;
		}
		{
			Obj t5;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),keSL$$AzGYwE.cv(),t6.cv())) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),KplatformPath.cv(),t7.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t7.cv(),Parm<Txt>(inParams,inNbParam,1).cv()},2,673)) goto _0;
			g->Check(ctx);
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern int32_t vOK;
extern Txt KCodeDesc;
extern Txt KCodeId;
extern Txt KLog;
extern Txt KMessage;
extern Txt KMessageType;
extern Txt KTarget;
extern Txt K_2E4DSettings;
extern Txt K_2Elog_2Exml;
extern Txt KcodeDesc;
extern Txt KcodeId;
extern Txt Kexists;
extern Txt Kfile;
extern Txt KgetText;
extern Txt Klog;
extern Txt Kmessage;
extern Txt KmessageType;
extern Txt KplatformPath;
extern Txt KsetText;
extern Txt Ksettings;
extern Txt Ksuccess;
extern Txt Ktarget;
extern Txt Kutf_2D8;
extern Txt kWDGUBt74k5U;
extern Txt keSL$$AzGYwE;
extern Txt ktQ_WvLya0EA;
extern unsigned char D_proc_BuildApp_2Ebuild[];
void proc_BuildApp_2Ebuild( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_BuildApp_2Ebuild);
	if (!ctx->doingAbort) try {
		Num v0;
		Txt ldom;
		Num v1;
		Num li;
		Variant lxml;
		Obj lfile;
		Txt lMessageType;
		Txt llogPath;
		Txt lBuildApplicationLog;
		Txt llog;
		Long lCodeId;
		Txt lUUID;
		Value_array_text lLogs;
		Txt lTarget;
		Txt lMessage;
		Txt lCodeDesc;
		Variant lsettingsFile;
		new ( outResult) Obj();
		{
			Bool t0;
			t0=false;
			Col t1;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1472)) goto _0;
			g->Check(ctx);
			Bool t2;
			t2=t0.get();
			Obj t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),Ksuccess.cv(),t2.cv(),Klog.cv(),t1.cv()},4,1471)) goto _0;
			Res<Obj>(outResult)=t3.get();
		}
		{
			Obj t4;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t4.cv(),Long(6).cv()},1,1567)) goto _0;
			g->Check(ctx);
			Variant t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv(),Kfile.cv(),ktQ_WvLya0EA.cv()},3,1498)) goto _0;
			Obj t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			lfile=t6.get();
		}
		{
			Variant t7;
			c.f.fLine=8;
			if (g->GetMember(ctx,lfile.cv(),Kexists.cv(),t7.cv())) goto _0;
			Bool t8;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),t7.cv(),nullptr})) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Variant t9;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t9.cv(),lfile.cv(),KgetText.cv()},2,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t9.cv(),lxml.cv(),nullptr})) goto _0;
		}
		{
			Obj t10;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1470)) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),Ksettings.cv(),t11.cv())) goto _0;
			Ref t12;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t12.cv(),lxml.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lxml.cv(),t12.cv(),t11.cv()},3,816)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t13;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1066)) goto _0;
			g->Check(ctx);
			lUUID=t13.get();
		}
		{
			Txt t14;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,486)) goto _0;
			g->Check(ctx);
			Obj t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv(),Long(1).cv()},2,1567)) goto _0;
			Txt t16;
			g->AddString(lUUID.get(),K_2E4DSettings.get(),t16.get());
			Variant t17;
			if (g->Call(ctx,(PCV[]){t17.cv(),t15.cv(),Kfile.cv(),t16.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t17.cv(),lsettingsFile.cv(),nullptr})) goto _0;
		}
		{
			Obj t18;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t18.cv()},0,1470)) goto _0;
			if (g->SetMember(ctx,t18.cv(),keSL$$AzGYwE.cv(),lsettingsFile.cv())) goto _0;
		}
		c.f.fLine=20;
		if (g->Call(ctx,(PCV[]){nullptr,lsettingsFile.cv(),KsetText.cv(),lxml.cv(),Kutf_2D8.cv(),Long(4).cv()},5,1500)) goto _0;
		g->Check(ctx);
		{
			Variant t19;
			c.f.fLine=22;
			if (g->GetMember(ctx,lsettingsFile.cv(),KplatformPath.cv(),t19.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t19.cv()},1,871)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t21;
			t21=1==Var<Long>(ctx,vOK).get();
			c.f.fLine=24;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t21.cv())) goto _0;
		}
		{
			Obj t22;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t22.cv(),Long(7).cv()},1,1567)) goto _0;
			g->Check(ctx);
			Txt t23;
			g->AddString(lUUID.get(),K_2Elog_2Exml.get(),t23.get());
			Variant t24;
			if (g->Call(ctx,(PCV[]){t24.cv(),t22.cv(),Kfile.cv(),t23.cv()},3,1498)) goto _0;
			Variant t25;
			if (g->GetMember(ctx,t24.cv(),KplatformPath.cv(),t25.cv())) goto _0;
			Txt t26;
			if (!g->GetValue(ctx,(PCV[]){t26.cv(),t25.cv(),nullptr})) goto _0;
			llogPath=t26.get();
		}
		{
			Long t27;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t27.cv(),llogPath.cv()},1,476)) goto _0;
			g->Check(ctx);
			if (1!=t27.get()) goto _3;
		}
		{
			Txt t29;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t29.cv(),llogPath.cv()},1,719)) goto _0;
			g->Check(ctx);
			ldom=t29.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _4;
		{
			Txt t31;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t31.cv(),ldom.cv(),kWDGUBt74k5U.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildApplicationLog=t31.get();
		}
		{
			Ref t32;
			t32.setLocalRef(ctx,lLogs.cv());
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){nullptr,t32.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t33;
			t33.setLocalRef(ctx,lLogs.cv());
			Txt t34;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t34.cv(),lBuildApplicationLog.cv(),KLog.cv(),t33.cv()},3,864)) goto _0;
			g->Check(ctx);
			llog=t34.get();
		}
		li=1;
		{
			Ref t35;
			t35.setLocalRef(ctx,lLogs.cv());
			Long t36;
			c.f.fLine=46;
			if (g->Call(ctx,(PCV[]){t36.cv(),t35.cv()},1,274)) goto _0;
			v0=t36.get();
		}
		goto _5;
_6:
		{
			Long t38;
			t38=(sLONG)lrint(li.get());
			Txt t39;
			t39=lLogs.arrayElem(t38.get()).get();
			llog=t39.get();
		}
		{
			Txt t40;
			c.f.fLine=50;
			if (g->Call(ctx,(PCV[]){t40.cv(),llog.cv(),KMessageType.cv()},2,864)) goto _0;
			g->Check(ctx);
			Ref t41;
			t41.setLocalRef(ctx,lMessageType.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t40.cv(),t41.cv()},2,731)) goto _0;
		}
		{
			Txt t42;
			c.f.fLine=51;
			if (g->Call(ctx,(PCV[]){t42.cv(),llog.cv(),KTarget.cv()},2,864)) goto _0;
			g->Check(ctx);
			Ref t43;
			t43.setLocalRef(ctx,lTarget.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t42.cv(),t43.cv()},2,731)) goto _0;
		}
		{
			Txt t44;
			c.f.fLine=52;
			if (g->Call(ctx,(PCV[]){t44.cv(),llog.cv(),KCodeDesc.cv()},2,864)) goto _0;
			g->Check(ctx);
			Ref t45;
			t45.setLocalRef(ctx,lCodeDesc.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t44.cv(),t45.cv()},2,731)) goto _0;
		}
		{
			Txt t46;
			c.f.fLine=53;
			if (g->Call(ctx,(PCV[]){t46.cv(),llog.cv(),KCodeId.cv()},2,864)) goto _0;
			g->Check(ctx);
			Ref t47;
			t47.setLocalRef(ctx,lCodeId.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t46.cv(),t47.cv()},2,731)) goto _0;
		}
		{
			Txt t48;
			c.f.fLine=54;
			if (g->Call(ctx,(PCV[]){t48.cv(),llog.cv(),KMessage.cv()},2,864)) goto _0;
			g->Check(ctx);
			Ref t49;
			t49.setLocalRef(ctx,lMessage.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t48.cv(),t49.cv()},2,731)) goto _0;
		}
		{
			Variant t50;
			c.f.fLine=56;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Klog.cv(),t50.cv())) goto _0;
			Num t51;
			t51=li.get()-1;
			Obj t52;
			if (g->Call(ctx,(PCV[]){t52.cv(),KmessageType.cv(),lMessageType.cv(),Ktarget.cv(),lTarget.cv(),KcodeDesc.cv(),lCodeDesc.cv(),KcodeId.cv(),lCodeId.cv(),Kmessage.cv(),lMessage.cv()},10,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t50.cv(),t51.cv(),t52.cv())) goto _0;
		}
		{
			Num t53;
			t53=li.get()+1;
			li=t53.get();
		}
_5:
		{
			Bool t54;
			t54=!GEqual(glob,v0.get(),li.get());
			if (!(t54.get())) goto _6;
		}
		c.f.fLine=60;
		if (g->Call(ctx,(PCV[]){nullptr,ldom.cv()},1,722)) goto _0;
		g->Check(ctx);
_4:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KFile;
extern Txt Kexists;
extern Txt Kfile;
extern Txt KgetText;
extern Txt KsetText;
extern Txt Ksettings;
extern Txt KsettingsFile;
extern Txt Kutf_2D8;
extern Txt ktQ_WvLya0EA;
extern unsigned char D_proc_BuildApp_2Esave[];
void proc_BuildApp_2Esave( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_BuildApp_2Esave);
	if (!ctx->doingAbort) try {
		Variant lxml;
		Obj lfile;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=4;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Ksettings.cv(),t1.cv())) goto _0;
			Variant t2;
			t2.setNull();
			Bool t3;
			if (g->OperationOnAny(ctx,7,t1.cv(),t2.cv(),t3.cv())) goto _0;
			if (!(t3.get())) goto _2;
		}
		{
			Obj t4;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t4.cv(),Long(6).cv()},1,1567)) goto _0;
			g->Check(ctx);
			Variant t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv(),Kfile.cv(),ktQ_WvLya0EA.cv()},3,1498)) goto _0;
			Obj t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			lfile=t6.get();
		}
		{
			Variant t7;
			c.f.fLine=10;
			if (g->GetMember(ctx,lfile.cv(),Kexists.cv(),t7.cv())) goto _0;
			Bool t8;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),t7.cv(),nullptr})) goto _0;
			if (!(t8.get())) goto _3;
		}
		{
			Variant t9;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t9.cv(),lfile.cv(),KgetText.cv()},2,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t9.cv(),lxml.cv(),nullptr})) goto _0;
		}
		{
			Obj t10;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1470)) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),Ksettings.cv(),t11.cv())) goto _0;
			Ref t12;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t12.cv(),lxml.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,lxml.cv(),t12.cv(),t11.cv()},3,816)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t13;
			c.f.fLine=16;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KsettingsFile.cv(),t13.cv())) goto _0;
			Obj t14;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1709)) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KFile.cv(),t15.cv())) goto _0;
			Obj t16;
			if (!g->GetValue(ctx,(PCV[]){t16.cv(),t15.cv(),nullptr})) goto _0;
			Obj t17;
			if (!g->GetValue(ctx,(PCV[]){t17.cv(),t13.cv(),nullptr})) goto _0;
			Bool t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),t17.cv(),t16.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t18.get())) goto _4;
		}
		{
			Variant t19;
			c.f.fLine=17;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KsettingsFile.cv(),t19.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t19.cv(),KsetText.cv(),lxml.cv(),Kutf_2D8.cv(),Long(4).cv()},5,1500)) goto _0;
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
extern int32_t vOK;
extern Txt K;
extern Txt KAdHocSign;
extern Txt KArrayLicenseMac;
extern Txt KArrayLicenseWin;
extern Txt KAutoUpdate;
extern Txt KBuildCompiled;
extern Txt KBuildComponent;
extern Txt KByAppName;
extern Txt KByAppPath;
extern Txt KCS;
extern Txt KClient;
extern Txt KClientComment;
extern Txt KClientCopyright;
extern Txt KClientCreator;
extern Txt KClientUpdateWin;
extern Txt KClientVersion;
extern Txt KCommon;
extern Txt KCommonComment;
extern Txt KCommonCopyright;
extern Txt KCommonCreator;
extern Txt KCommonVersion;
extern Txt KCurrentVers;
extern Txt KDataFilePath;
extern Txt KFile;
extern Txt KHardLink;
extern Txt KIPAddress;
extern Txt KInDbStruct;
extern Txt KIsOEM;
extern Txt KItem;
extern Txt KItemsCount;
extern Txt KLicenses;
extern Txt KMacCertificate;
extern Txt KMacSignature;
extern Txt KPackProject;
extern Txt KPortNumber;
extern Txt KRangeVersMax;
extern Txt KRangeVersMin;
extern Txt KRuntimeVL;
extern Txt KServer;
extern Txt KServerComment;
extern Txt KServerCopyright;
extern Txt KServerCreator;
extern Txt KServerIncludeIt;
extern Txt KServerMacFolder;
extern Txt KServerVersion;
extern Txt KServerWinFolder;
extern Txt KSignApplication;
extern Txt KSourcesFiles;
extern Txt KStartElevated;
extern Txt KVersioning;
extern Txt K_2FItemsCount;
extern Txt Kexists;
extern Txt KplatformPath;
extern Txt k$WnZYmYrI2U;
extern Txt k$_RJRn701s0;
extern Txt k$tP3GasfoHE;
extern Txt k0Sl7BH$bmaU;
extern Txt k0uDSTbP0wcQ;
extern Txt k1tSv_hEqbWc;
extern Txt k1zF9EmyIypY;
extern Txt k44xDYv03Qk4;
extern Txt k46VcR$LLNeg;
extern Txt k4VF6vImaDTc;
extern Txt k4pVWG9LrbvU;
extern Txt k4ubc_HT$zN0;
extern Txt k4y3zG60cH7g;
extern Txt k4yMnb1WDTho;
extern Txt k56NmzVgvaRc;
extern Txt k66cq1oR8F_Q;
extern Txt k6sCkZfS$kA4;
extern Txt k6vA6VWRWdlk;
extern Txt k7qFBVxbkv18;
extern Txt k94AAdQHgWzo;
extern Txt k9iETyf54yxo;
extern Txt kA14oHb97CG0;
extern Txt kAFDhHMMuyOM;
extern Txt kAJZKwESbGyw;
extern Txt kBRwJWWtnYLI;
extern Txt kCYuom1y2qVY;
extern Txt kClYRrVlpqDg;
extern Txt kCt5J6hTFwQw;
extern Txt kD5iRlupXqoU;
extern Txt kDKQUWmhrYjU;
extern Txt kDWsLR5f41Ro;
extern Txt kEtsloLTuEU0;
extern Txt kF4vr8N2EgqM;
extern Txt kFJotw55XS80;
extern Txt kFrHbpv1FezE;
extern Txt kFrTktrGYpe8;
extern Txt kFvxLAdgkwEo;
extern Txt kGeUyn9FOb4g;
extern Txt kGtAx6nYYUyo;
extern Txt kHK$q1TvQeKk;
extern Txt kIXGtq34IYUQ;
extern Txt kJGfBvN7uTt0;
extern Txt kJorNQnoATvM;
extern Txt kJx45KaS9wz4;
extern Txt kK4vrN9JVC4I;
extern Txt kLa2ChQdcjpU;
extern Txt kM2dq1gbaZ5s;
extern Txt kMkckEyWZbPA;
extern Txt kN044MF$qVaw;
extern Txt kNJ9VBswqXkE;
extern Txt kNN$1I0fBgy8;
extern Txt kNaGJYnhtyTs;
extern Txt kNqMU0qrZDSc;
extern Txt kNsd26Bvxo9g;
extern Txt kOO7LZHF4UVQ;
extern Txt kOgfN06mT$d0;
extern Txt kPchSt446cFE;
extern Txt kPzdRbnuXCp4;
extern Txt kQG6yntyhPJE;
extern Txt kR0SeY1sAmS0;
extern Txt kRi6IenAyX0Q;
extern Txt kSy5AqWPXJRQ;
extern Txt kUTIex1otMkE;
extern Txt kUzGhhv1KI$4;
extern Txt kVL_yjWOhjXw;
extern Txt kWX3PDDHqjJs;
extern Txt kWz8k3_83iGM;
extern Txt kXOQnYfgwyMc;
extern Txt kXxg$R1zT678;
extern Txt kY0n34rynznk;
extern Txt kYX5Kt0AbkkU;
extern Txt kZDHSQRlNv0I;
extern Txt k_TqQEI0wDFc;
extern Txt k_hUBhRbvfo0;
extern Txt kaDmB05K2jT4;
extern Txt kaVp2LmqlBmQ;
extern Txt kaYal5aOiRaI;
extern Txt kbmoXZlMq9pA;
extern Txt kcOOzfV3DMPs;
extern Txt kcrfmXa66a44;
extern Txt kcwcVz6b7uwo;
extern Txt kdScfkI$1UWc;
extern Txt keRwE7fOzNw4;
extern Txt kei6INo2lMuE;
extern Txt kfUKuMsOZ4H0;
extern Txt kf_qgiqMungA;
extern Txt kff00S1m3zpY;
extern Txt kg8bM9jvyXKM;
extern Txt ki5gubPidb1o;
extern Txt kilQiTIXd6Xg;
extern Txt kjKDCQGtjyBY;
extern Txt kjXwfW3ku5oc;
extern Txt klh1TULT9mLk;
extern Txt klrPwPCj4zhY;
extern Txt kmScCWfEpPp4;
extern Txt kms9g4Vg56T8;
extern Txt knNszo1ljhNg;
extern Txt ko9j0LdilpVQ;
extern Txt koJ2CJYSi$4Q;
extern Txt kp1NnJSuAS5A;
extern Txt kpcgglsGRHKg;
extern Txt kqB3IfbvTyA4;
extern Txt krJrIZjklfjY;
extern Txt krKly_Dk87oQ;
extern Txt ktFnlALI5wE4;
extern Txt kuA4xZNgGB$M;
extern Txt kv1azlAnZQQ4;
extern Txt kvhaASp1hevk;
extern Txt kvx6fecAuRn0;
extern Txt kx9IeBTqMrqY;
extern Txt kxT3JOXae8Mk;
extern Txt kxwF14QDxcX4;
extern Txt kyBqC4PuYWlo;
extern Txt kz2xy8C0tVI8;
extern Txt kz3e__znIs1s;
extern Txt kzIY6_Fii4f8;
extern unsigned char D_proc_BuildApp_2E__getSettings[];
void proc_BuildApp_2E__getSettings( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_BuildApp_2E__getSettings);
	if (!ctx->doingAbort) try {
		Txt lname;
		Txt lAdHocSign;
		Num v0;
		Txt lServerMacFolder;
		Value_array_text lnames;
		Txt ldom;
		Txt lRuntimeVLWinFolder;
		Txt lchild;
		Txt lBuildComponent;
		Value_array_object lDatabaseNames;
		Txt lClientMacIconForWinPath;
		Num v1;
		Num v2;
		Num li;
		Txt lRangeVersMax;
		Num lj;
		Txt lMacCompiledDatabaseToWinInclude;
		Num v3;
		Txt lPackProject;
		Num v6;
		Txt lClientMacIncludeIt;
		Txt lClientMacFolderToWin;
		Txt litemName;
		Num v4;
		Txt lMacSignature;
		Txt lBuildCompiled;
		Txt lHardLink;
		Txt lCurrentVers;
		Txt lIPAddress;
		Num v5;
		Txt lRuntimeVLMacFolder;
		Txt lClientMacIconForMacPath;
		Txt lClientWinIconForWinPath;
		Txt lRuntimeVLIncludeIt;
		Txt lServerSelectionAllowed;
		Txt lMacCertificate;
		Num v7;
		Txt lBuildApplicationSerialized;
		Txt lServerWinFolder;
		Txt lpath;
		Bool lboolValue;
		Txt lMacCompiledDatabaseToWin;
		Txt lBuildServerApplication;
		Txt lClientWinFolderToMac;
		Num v9;
		Txt lstringValue;
		Txt lToEmbedInClientWinFolder;
		Txt lRangeVersMin;
		Txt lPortNumber;
		Txt lItem;
		Txt lBuildCSUpgradeable;
		Txt lIncludeAssociatedFolders;
		Value_array_text litemNames;
		Txt lLastDataPathLookup;
		Txt lBuildApplicationLight;
		Txt lBuildV13ClientUpgrades;
		Txt lBuildWinDestFolder;
		Txt lparent;
		Txt lServerIconMacPath;
		Txt lClientWinIncludeIt;
		Num v11;
		Num v10;
		Txt lClientWinIconForMacPath;
		Txt lServerIncludeIt;
		Txt lUseStandardZipFormat;
		Txt lBuildApplicationName;
		Txt lIsOEM;
		Txt lToEmbedInClientMacFolder;
		Txt lBuildMacDestFolder;
		Txt lServerIconWinPath;
		Txt lItemsCount;
		Txt lClientWinFolderToWin;
		Num v8;
		Long lintValue;
		Value_array_text llinkModes;
		Txt lVersioning;
		Txt lClientMacFolderToMac;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			t1.setNull();
			Variant t2;
			t2.setNull();
			Variant t3;
			t3.setNull();
			Variant t4;
			t4.setNull();
			Bool t5;
			t5=false;
			Bool t6;
			t6=false;
			Bool t7;
			t7=false;
			Bool t8;
			t8=false;
			Bool t9;
			t9=false;
			goto _2;
_2:
			Obj t13;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t13.cv(),Long(0).cv(),(CV*)-1,nullptr,Long(1).cv(),Long(0).cv()},5,1597)) goto _0;
			g->Check(ctx);
			Col t14;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1472)) goto _0;
			Obj t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),KItemsCount.cv(),t13.cv(),KItem.cv(),t14.cv()},4,1471)) goto _0;
			goto _3;
_3:
			Obj t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),Long(0).cv(),(CV*)-1,nullptr,Long(2).cv(),Long(0).cv()},5,1597)) goto _0;
			Col t20;
			if (g->Call(ctx,(PCV[]){t20.cv()},0,1472)) goto _0;
			Obj t21;
			if (g->Call(ctx,(PCV[]){t21.cv(),KItemsCount.cv(),t19.cv(),KItem.cv(),t20.cv()},4,1471)) goto _0;
			goto _4;
_4:
			Obj t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),Long(0).cv(),(CV*)-1,nullptr,Long(3).cv(),Long(0).cv()},5,1597)) goto _0;
			Col t26;
			if (g->Call(ctx,(PCV[]){t26.cv()},0,1472)) goto _0;
			Obj t27;
			if (g->Call(ctx,(PCV[]){t27.cv(),KItemsCount.cv(),t25.cv(),KItem.cv(),t26.cv()},4,1471)) goto _0;
			Bool t28;
			t28=false;
			Bool t29;
			t29=true;
			Bool t30;
			t30=t29.get();
			Bool t31;
			t31=t28.get();
			Bool t32;
			t32=t9.get();
			Bool t33;
			t33=t8.get();
			Bool t34;
			t34=t7.get();
			Bool t35;
			t35=t6.get();
			Bool t36;
			t36=t5.get();
			Obj t37;
			if (g->Call(ctx,(PCV[]){t37.cv(),k1zF9EmyIypY.cv(),t1.cv(),kmScCWfEpPp4.cv(),t2.cv(),kLa2ChQdcjpU.cv(),t3.cv(),KDataFilePath.cv(),t4.cv(),k0uDSTbP0wcQ.cv(),t36.cv(),kWX3PDDHqjJs.cv(),t35.cv(),keRwE7fOzNw4.cv(),t34.cv(),KBuildComponent.cv(),t33.cv(),KBuildCompiled.cv(),t32.cv(),koJ2CJYSi$4Q.cv(),t15.cv(),kYX5Kt0AbkkU.cv(),t21.cv(),kcrfmXa66a44.cv(),t27.cv(),kR0SeY1sAmS0.cv(),t31.cv(),KPackProject.cv(),t30.cv()},28,1471)) goto _0;
			Res<Obj>(outResult)=t37.get();
		}
		{
			Variant t38;
			t38.setNull();
			Obj t39;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t39.cv(),KStartElevated.cv(),t38.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Variant t40;
			t40.setNull();
			Obj t41;
			if (g->Call(ctx,(PCV[]){t41.cv(),KStartElevated.cv(),t40.cv()},2,1471)) goto _0;
			Variant t42;
			t42.setNull();
			Obj t43;
			if (g->Call(ctx,(PCV[]){t43.cv(),KStartElevated.cv(),t42.cv()},2,1471)) goto _0;
			Obj t44;
			if (g->Call(ctx,(PCV[]){t44.cv(),KClient.cv(),t39.cv(),KClientUpdateWin.cv(),t41.cv(),KServer.cv(),t43.cv()},6,1471)) goto _0;
			Variant t45;
			t45.setNull();
			Obj t46;
			if (g->Call(ctx,(PCV[]){t46.cv(),KStartElevated.cv(),t45.cv()},2,1471)) goto _0;
			Obj t47;
			if (g->Call(ctx,(PCV[]){t47.cv(),KCS.cv(),t44.cv(),KRuntimeVL.cv(),t46.cv()},4,1471)) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KAutoUpdate.cv(),t47.cv())) goto _0;
		}
		{
			Bool t48;
			t48=false;
			Bool t49;
			t49=false;
			Bool t50;
			t50=false;
			Variant t51;
			t51.setNull();
			Variant t52;
			t52.setNull();
			Variant t53;
			t53.setNull();
			Variant t54;
			t54.setNull();
			Bool t55;
			t55=false;
			Variant t56;
			t56.setNull();
			Bool t57;
			t57=false;
			Bool t58;
			t58=t57.get();
			Bool t59;
			t59=t55.get();
			Bool t60;
			t60=t50.get();
			Bool t61;
			t61=t49.get();
			Bool t62;
			t62=t48.get();
			Obj t63;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t63.cv(),kDKQUWmhrYjU.cv(),t62.cv(),k6vA6VWRWdlk.cv(),t61.cv(),kei6INo2lMuE.cv(),t60.cv(),KIPAddress.cv(),t51.cv(),KPortNumber.cv(),t52.cv(),KHardLink.cv(),t53.cv(),KRangeVersMin.cv(),Long(1).cv(),KRangeVersMax.cv(),Long(1).cv(),KCurrentVers.cv(),Long(1).cv(),kZDHSQRlNv0I.cv(),t54.cv(),kD5iRlupXqoU.cv(),t59.cv(),kOO7LZHF4UVQ.cv(),t56.cv(),k9iETyf54yxo.cv(),t58.cv()},26,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t63.cv())) goto _0;
		}
		goto _5;
_5:
		{
			Obj t67;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t67.cv(),Long(0).cv(),(CV*)-1,nullptr,Long(4).cv(),Long(0).cv()},5,1597)) goto _0;
			g->Check(ctx);
			Col t68;
			if (g->Call(ctx,(PCV[]){t68.cv()},0,1472)) goto _0;
			Obj t69;
			if (g->Call(ctx,(PCV[]){t69.cv(),KItemsCount.cv(),t67.cv(),KItem.cv(),t68.cv()},4,1471)) goto _0;
			goto _6;
_6:
			Obj t73;
			if (g->Call(ctx,(PCV[]){t73.cv(),Long(0).cv(),(CV*)-1,nullptr,Long(5).cv(),Long(0).cv()},5,1597)) goto _0;
			Col t74;
			if (g->Call(ctx,(PCV[]){t74.cv()},0,1472)) goto _0;
			Obj t75;
			if (g->Call(ctx,(PCV[]){t75.cv(),KItemsCount.cv(),t73.cv(),KItem.cv(),t74.cv()},4,1471)) goto _0;
			Obj t76;
			if (g->Call(ctx,(PCV[]){t76.cv(),KArrayLicenseWin.cv(),t69.cv(),KArrayLicenseMac.cv(),t75.cv()},4,1471)) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KLicenses.cv(),t76.cv())) goto _0;
		}
		{
			Obj t77;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t77.cv(),kZDHSQRlNv0I.cv(),KByAppName.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KRuntimeVL.cv(),t77.cv())) goto _0;
		}
		{
			Variant t78;
			t78.setNull();
			Variant t79;
			t79.setNull();
			Variant t80;
			t80.setNull();
			Obj t81;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t81.cv(),KMacSignature.cv(),t78.cv(),KMacCertificate.cv(),t79.cv(),KAdHocSign.cv(),t80.cv()},6,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KSignApplication.cv(),t81.cv())) goto _0;
		}
		{
			Bool t82;
			t82=false;
			Variant t83;
			t83.setNull();
			Variant t84;
			t84.setNull();
			Variant t85;
			t85.setNull();
			Variant t86;
			t86.setNull();
			Bool t87;
			t87=false;
			Bool t88;
			t88=t87.get();
			Bool t89;
			t89=t82.get();
			Obj t90;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t90.cv(),kaYal5aOiRaI.cv(),t89.cv(),k56NmzVgvaRc.cv(),t83.cv(),kNqMU0qrZDSc.cv(),t84.cv(),kjXwfW3ku5oc.cv(),t85.cv(),k6sCkZfS$kA4.cv(),t86.cv(),KIsOEM.cv(),t88.cv()},12,1471)) goto _0;
			g->Check(ctx);
			Bool t91;
			t91=false;
			Variant t92;
			t92.setNull();
			Variant t93;
			t93.setNull();
			Bool t94;
			t94=false;
			Variant t95;
			t95.setNull();
			Variant t96;
			t96.setNull();
			Bool t97;
			t97=false;
			Variant t98;
			t98.setNull();
			Variant t99;
			t99.setNull();
			Variant t100;
			t100.setNull();
			Variant t101;
			t101.setNull();
			Variant t102;
			t102.setNull();
			Variant t103;
			t103.setNull();
			Variant t104;
			t104.setNull();
			Variant t105;
			t105.setNull();
			Variant t106;
			t106.setNull();
			Variant t107;
			t107.setNull();
			Bool t108;
			t108=false;
			Bool t109;
			t109=t108.get();
			Bool t110;
			t110=t97.get();
			Bool t111;
			t111=t94.get();
			Bool t112;
			t112=t91.get();
			Obj t113;
			if (g->Call(ctx,(PCV[]){t113.cv(),KServerIncludeIt.cv(),t112.cv(),KServerWinFolder.cv(),t92.cv(),KServerMacFolder.cv(),t93.cv(),kVL_yjWOhjXw.cv(),t111.cv(),kJx45KaS9wz4.cv(),t95.cv(),kilQiTIXd6Xg.cv(),t96.cv(),kJGfBvN7uTt0.cv(),t110.cv(),kpcgglsGRHKg.cv(),t98.cv(),klrPwPCj4zhY.cv(),t99.cv(),k$WnZYmYrI2U.cv(),t100.cv(),kf_qgiqMungA.cv(),t101.cv(),krJrIZjklfjY.cv(),t102.cv(),kaDmB05K2jT4.cv(),t103.cv(),kNJ9VBswqXkE.cv(),t104.cv(),kxT3JOXae8Mk.cv(),t105.cv(),k94AAdQHgWzo.cv(),t106.cv(),ktFnlALI5wE4.cv(),t107.cv(),KIsOEM.cv(),t109.cv()},36,1471)) goto _0;
			Obj t114;
			if (g->Call(ctx,(PCV[]){t114.cv(),KRuntimeVL.cv(),t90.cv(),KCS.cv(),t113.cv()},4,1471)) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t114.cv())) goto _0;
		}
		{
			Variant t115;
			t115.setNull();
			Variant t116;
			t116.setNull();
			Variant t117;
			t117.setNull();
			Variant t118;
			t118.setNull();
			Variant t119;
			t119.setNull();
			Variant t120;
			t120.setNull();
			Variant t121;
			t121.setNull();
			Variant t122;
			t122.setNull();
			Variant t123;
			t123.setNull();
			Variant t124;
			t124.setNull();
			Obj t125;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t125.cv(),KCommonVersion.cv(),t115.cv(),KCommonCopyright.cv(),t116.cv(),KCommonCreator.cv(),t117.cv(),KCommonComment.cv(),t118.cv(),kx9IeBTqMrqY.cv(),t119.cv(),kff00S1m3zpY.cv(),t120.cv(),kCYuom1y2qVY.cv(),t121.cv(),kHK$q1TvQeKk.cv(),t122.cv(),kCt5J6hTFwQw.cv(),t123.cv(),k66cq1oR8F_Q.cv(),t124.cv()},20,1471)) goto _0;
			g->Check(ctx);
			Variant t126;
			t126.setNull();
			Variant t127;
			t127.setNull();
			Variant t128;
			t128.setNull();
			Variant t129;
			t129.setNull();
			Variant t130;
			t130.setNull();
			Variant t131;
			t131.setNull();
			Variant t132;
			t132.setNull();
			Variant t133;
			t133.setNull();
			Variant t134;
			t134.setNull();
			Variant t135;
			t135.setNull();
			Obj t136;
			if (g->Call(ctx,(PCV[]){t136.cv(),kcOOzfV3DMPs.cv(),t126.cv(),kSy5AqWPXJRQ.cv(),t127.cv(),kFJotw55XS80.cv(),t128.cv(),k_hUBhRbvfo0.cv(),t129.cv(),kWz8k3_83iGM.cv(),t130.cv(),k4y3zG60cH7g.cv(),t131.cv(),kM2dq1gbaZ5s.cv(),t132.cv(),kFrHbpv1FezE.cv(),t133.cv(),kAFDhHMMuyOM.cv(),t134.cv(),kNN$1I0fBgy8.cv(),t135.cv()},20,1471)) goto _0;
			Variant t137;
			t137.setNull();
			Variant t138;
			t138.setNull();
			Variant t139;
			t139.setNull();
			Variant t140;
			t140.setNull();
			Variant t141;
			t141.setNull();
			Variant t142;
			t142.setNull();
			Variant t143;
			t143.setNull();
			Variant t144;
			t144.setNull();
			Variant t145;
			t145.setNull();
			Variant t146;
			t146.setNull();
			Obj t147;
			if (g->Call(ctx,(PCV[]){t147.cv(),KServerVersion.cv(),t137.cv(),KServerCopyright.cv(),t138.cv(),KServerCreator.cv(),t139.cv(),KServerComment.cv(),t140.cv(),kJorNQnoATvM.cv(),t141.cv(),klh1TULT9mLk.cv(),t142.cv(),kg8bM9jvyXKM.cv(),t143.cv(),kp1NnJSuAS5A.cv(),t144.cv(),kv1azlAnZQQ4.cv(),t145.cv(),kxwF14QDxcX4.cv(),t146.cv()},20,1471)) goto _0;
			Variant t148;
			t148.setNull();
			Variant t149;
			t149.setNull();
			Variant t150;
			t150.setNull();
			Variant t151;
			t151.setNull();
			Variant t152;
			t152.setNull();
			Variant t153;
			t153.setNull();
			Variant t154;
			t154.setNull();
			Variant t155;
			t155.setNull();
			Variant t156;
			t156.setNull();
			Variant t157;
			t157.setNull();
			Obj t158;
			if (g->Call(ctx,(PCV[]){t158.cv(),KClientVersion.cv(),t148.cv(),KClientCopyright.cv(),t149.cv(),KClientCreator.cv(),t150.cv(),KClientComment.cv(),t151.cv(),k4pVWG9LrbvU.cv(),t152.cv(),k$tP3GasfoHE.cv(),t153.cv(),kOgfN06mT$d0.cv(),t154.cv(),kPzdRbnuXCp4.cv(),t155.cv(),kzIY6_Fii4f8.cv(),t156.cv(),kUzGhhv1KI$4.cv(),t157.cv()},20,1471)) goto _0;
			Obj t159;
			if (g->Call(ctx,(PCV[]){t159.cv(),KCommon.cv(),t125.cv(),KRuntimeVL.cv(),t136.cv(),KServer.cv(),t147.cv(),KClient.cv(),t158.cv()},8,1471)) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KVersioning.cv(),t159.cv())) goto _0;
		}
		{
			Obj t160;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t160.cv()},0,1709)) goto _0;
			Variant t161;
			if (g->GetMember(ctx,t160.cv(),KFile.cv(),t161.cv())) goto _0;
			Obj t162;
			if (!g->GetValue(ctx,(PCV[]){t162.cv(),t161.cv(),nullptr})) goto _0;
			Bool t163;
			if (g->Call(ctx,(PCV[]){t163.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t162.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t163.get())) goto _7;
		}
		{
			Variant t164;
			c.f.fLine=43;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kexists.cv(),t164.cv())) goto _0;
			Bool t165;
			if (!g->GetValue(ctx,(PCV[]){t165.cv(),t164.cv(),nullptr})) goto _0;
			if (!(t165.get())) goto _8;
		}
		{
			Variant t166;
			c.f.fLine=45;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KplatformPath.cv(),t166.cv())) goto _0;
			Txt t167;
			if (!g->GetValue(ctx,(PCV[]){t167.cv(),t166.cv(),nullptr})) goto _0;
			lpath=t167.get();
		}
		{
			Ref t168;
			t168.setLocalRef(ctx,llinkModes.cv());
			c.f.fLine=51;
			if (g->Call(ctx,(PCV[]){nullptr,t168.cv(),Long(3).cv()},2,222)) goto _0;
		}
		{
			Txt t169;
			t169=KInDbStruct.get();
			llinkModes.arrayElem(1)=t169.get();
		}
		{
			Txt t170;
			t170=KByAppName.get();
			llinkModes.arrayElem(2)=t170.get();
		}
		{
			Txt t171;
			t171=KByAppPath.get();
			llinkModes.arrayElem(3)=t171.get();
		}
		{
			Txt t172;
			c.f.fLine=56;
			if (g->Call(ctx,(PCV[]){t172.cv(),lpath.cv()},1,719)) goto _0;
			g->Check(ctx);
			ldom=t172.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _9;
		{
			Txt t174;
			c.f.fLine=60;
			if (g->Call(ctx,(PCV[]){t174.cv(),ldom.cv(),kjKDCQGtjyBY.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildApplicationName=t174.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _10;
		{
			Ref t176;
			t176.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=63;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildApplicationName.cv(),t176.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=64;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),k1zF9EmyIypY.cv(),lstringValue.cv())) goto _0;
_10:
		{
			Txt t177;
			c.f.fLine=67;
			if (g->Call(ctx,(PCV[]){t177.cv(),ldom.cv(),kuA4xZNgGB$M.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildCompiled=t177.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _11;
		{
			Ref t179;
			t179.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=70;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildCompiled.cv(),t179.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t180;
			t180=lboolValue.get();
			c.f.fLine=71;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KBuildCompiled.cv(),t180.cv())) goto _0;
		}
_11:
		{
			Txt t181;
			c.f.fLine=74;
			if (g->Call(ctx,(PCV[]){t181.cv(),ldom.cv(),kvx6fecAuRn0.cv()},2,864)) goto _0;
			g->Check(ctx);
			lIncludeAssociatedFolders=t181.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _12;
		{
			Ref t183;
			t183.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=77;
			if (g->Call(ctx,(PCV[]){nullptr,lIncludeAssociatedFolders.cv(),t183.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t184;
			t184=lboolValue.get();
			c.f.fLine=78;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),keRwE7fOzNw4.cv(),t184.cv())) goto _0;
		}
_12:
		{
			Txt t185;
			c.f.fLine=81;
			if (g->Call(ctx,(PCV[]){t185.cv(),ldom.cv(),kcwcVz6b7uwo.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildComponent=t185.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _13;
		{
			Ref t187;
			t187.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=84;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildComponent.cv(),t187.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t188;
			t188=lboolValue.get();
			c.f.fLine=85;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KBuildComponent.cv(),t188.cv())) goto _0;
		}
_13:
		{
			Txt t189;
			c.f.fLine=88;
			if (g->Call(ctx,(PCV[]){t189.cv(),ldom.cv(),k$_RJRn701s0.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildApplicationSerialized=t189.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _14;
		{
			Ref t191;
			t191.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=91;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildApplicationSerialized.cv(),t191.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t192;
			t192=lboolValue.get();
			c.f.fLine=92;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),k0uDSTbP0wcQ.cv(),t192.cv())) goto _0;
		}
_14:
		{
			Txt t193;
			c.f.fLine=95;
			if (g->Call(ctx,(PCV[]){t193.cv(),ldom.cv(),kMkckEyWZbPA.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildApplicationLight=t193.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _15;
		{
			Ref t195;
			t195.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=98;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildApplicationLight.cv(),t195.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t196;
			t196=lboolValue.get();
			c.f.fLine=99;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kWX3PDDHqjJs.cv(),t196.cv())) goto _0;
		}
_15:
		{
			Txt t197;
			c.f.fLine=102;
			if (g->Call(ctx,(PCV[]){t197.cv(),ldom.cv(),kAJZKwESbGyw.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildMacDestFolder=t197.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _16;
		{
			Ref t199;
			t199.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=105;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildMacDestFolder.cv(),t199.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=106;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kLa2ChQdcjpU.cv(),lstringValue.cv())) goto _0;
_16:
		{
			Txt t200;
			c.f.fLine=109;
			if (g->Call(ctx,(PCV[]){t200.cv(),ldom.cv(),k44xDYv03Qk4.cv()},2,864)) goto _0;
			g->Check(ctx);
			lPackProject=t200.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _17;
		{
			Ref t202;
			t202.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=112;
			if (g->Call(ctx,(PCV[]){nullptr,lPackProject.cv(),t202.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t203;
			t203=lboolValue.get();
			c.f.fLine=113;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KPackProject.cv(),t203.cv())) goto _0;
		}
_17:
		{
			Txt t204;
			c.f.fLine=116;
			if (g->Call(ctx,(PCV[]){t204.cv(),ldom.cv(),kClYRrVlpqDg.cv()},2,864)) goto _0;
			g->Check(ctx);
			lUseStandardZipFormat=t204.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _18;
		{
			Ref t206;
			t206.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=119;
			if (g->Call(ctx,(PCV[]){nullptr,lUseStandardZipFormat.cv(),t206.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Bool t207;
			t207=lboolValue.get();
			c.f.fLine=120;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kR0SeY1sAmS0.cv(),t207.cv())) goto _0;
		}
_18:
		{
			Txt t208;
			c.f.fLine=123;
			if (g->Call(ctx,(PCV[]){t208.cv(),ldom.cv(),kRi6IenAyX0Q.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildWinDestFolder=t208.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _19;
		{
			Ref t210;
			t210.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=126;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildWinDestFolder.cv(),t210.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=127;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kmScCWfEpPp4.cv(),lstringValue.cv())) goto _0;
_19:
		{
			Txt t211;
			c.f.fLine=130;
			if (g->Call(ctx,(PCV[]){t211.cv(),ldom.cv(),kEtsloLTuEU0.cv()},2,864)) goto _0;
			g->Check(ctx);
			lRuntimeVLIncludeIt=t211.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _20;
		{
			Ref t213;
			t213.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=133;
			if (g->Call(ctx,(PCV[]){nullptr,lRuntimeVLIncludeIt.cv(),t213.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t214;
			c.f.fLine=134;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t214.cv())) goto _0;
			Variant t215;
			if (g->GetMember(ctx,t214.cv(),KRuntimeVL.cv(),t215.cv())) goto _0;
			Bool t216;
			t216=lboolValue.get();
			if (g->SetMember(ctx,t215.cv(),kaYal5aOiRaI.cv(),t216.cv())) goto _0;
		}
_20:
		{
			Txt t217;
			c.f.fLine=137;
			if (g->Call(ctx,(PCV[]){t217.cv(),ldom.cv(),kms9g4Vg56T8.cv()},2,864)) goto _0;
			g->Check(ctx);
			lRuntimeVLMacFolder=t217.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _21;
		{
			Ref t219;
			t219.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=140;
			if (g->Call(ctx,(PCV[]){nullptr,lRuntimeVLMacFolder.cv(),t219.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t220;
			c.f.fLine=141;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t220.cv())) goto _0;
			Variant t221;
			if (g->GetMember(ctx,t220.cv(),KRuntimeVL.cv(),t221.cv())) goto _0;
			if (g->SetMember(ctx,t221.cv(),kNqMU0qrZDSc.cv(),lstringValue.cv())) goto _0;
		}
_21:
		{
			Txt t222;
			c.f.fLine=144;
			if (g->Call(ctx,(PCV[]){t222.cv(),ldom.cv(),kBRwJWWtnYLI.cv()},2,864)) goto _0;
			g->Check(ctx);
			lRuntimeVLWinFolder=t222.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _22;
		{
			Ref t224;
			t224.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=147;
			if (g->Call(ctx,(PCV[]){nullptr,lRuntimeVLWinFolder.cv(),t224.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t225;
			c.f.fLine=148;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t225.cv())) goto _0;
			Variant t226;
			if (g->GetMember(ctx,t225.cv(),KRuntimeVL.cv(),t226.cv())) goto _0;
			if (g->SetMember(ctx,t226.cv(),k56NmzVgvaRc.cv(),lstringValue.cv())) goto _0;
		}
_22:
		{
			Txt t227;
			c.f.fLine=151;
			if (g->Call(ctx,(PCV[]){t227.cv(),ldom.cv(),kz2xy8C0tVI8.cv()},2,864)) goto _0;
			g->Check(ctx);
			lIsOEM=t227.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _23;
		{
			Ref t229;
			t229.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=154;
			if (g->Call(ctx,(PCV[]){nullptr,lIsOEM.cv(),t229.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t230;
			c.f.fLine=155;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t230.cv())) goto _0;
			Variant t231;
			if (g->GetMember(ctx,t230.cv(),KRuntimeVL.cv(),t231.cv())) goto _0;
			Bool t232;
			t232=lboolValue.get();
			if (g->SetMember(ctx,t231.cv(),KIsOEM.cv(),t232.cv())) goto _0;
		}
_23:
		{
			Txt t233;
			c.f.fLine=158;
			if (g->Call(ctx,(PCV[]){t233.cv(),ldom.cv(),kz2xy8C0tVI8.cv()},2,864)) goto _0;
			g->Check(ctx);
			lIsOEM=t233.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _24;
		{
			Ref t235;
			t235.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=161;
			if (g->Call(ctx,(PCV[]){nullptr,lIsOEM.cv(),t235.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t236;
			c.f.fLine=162;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t236.cv())) goto _0;
			Variant t237;
			if (g->GetMember(ctx,t236.cv(),KRuntimeVL.cv(),t237.cv())) goto _0;
			Bool t238;
			t238=lboolValue.get();
			if (g->SetMember(ctx,t237.cv(),KIsOEM.cv(),t238.cv())) goto _0;
		}
_24:
		{
			Txt t239;
			c.f.fLine=165;
			if (g->Call(ctx,(PCV[]){t239.cv(),ldom.cv(),kK4vrN9JVC4I.cv()},2,864)) goto _0;
			g->Check(ctx);
			lServerIncludeIt=t239.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _25;
		{
			Ref t241;
			t241.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=168;
			if (g->Call(ctx,(PCV[]){nullptr,lServerIncludeIt.cv(),t241.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t242;
			c.f.fLine=169;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t242.cv())) goto _0;
			Variant t243;
			if (g->GetMember(ctx,t242.cv(),KCS.cv(),t243.cv())) goto _0;
			Bool t244;
			t244=lboolValue.get();
			if (g->SetMember(ctx,t243.cv(),KServerIncludeIt.cv(),t244.cv())) goto _0;
		}
_25:
		{
			Txt t245;
			c.f.fLine=172;
			if (g->Call(ctx,(PCV[]){t245.cv(),ldom.cv(),kyBqC4PuYWlo.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientMacIncludeIt=t245.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _26;
		{
			Ref t247;
			t247.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=175;
			if (g->Call(ctx,(PCV[]){nullptr,lClientMacIncludeIt.cv(),t247.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t248;
			c.f.fLine=176;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t248.cv())) goto _0;
			Variant t249;
			if (g->GetMember(ctx,t248.cv(),KCS.cv(),t249.cv())) goto _0;
			Bool t250;
			t250=lboolValue.get();
			if (g->SetMember(ctx,t249.cv(),kJGfBvN7uTt0.cv(),t250.cv())) goto _0;
		}
_26:
		{
			Txt t251;
			c.f.fLine=179;
			if (g->Call(ctx,(PCV[]){t251.cv(),ldom.cv(),ko9j0LdilpVQ.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientWinIncludeIt=t251.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _27;
		{
			Ref t253;
			t253.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=182;
			if (g->Call(ctx,(PCV[]){nullptr,lClientWinIncludeIt.cv(),t253.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t254;
			c.f.fLine=183;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t254.cv())) goto _0;
			Variant t255;
			if (g->GetMember(ctx,t254.cv(),KCS.cv(),t255.cv())) goto _0;
			Bool t256;
			t256=lboolValue.get();
			if (g->SetMember(ctx,t255.cv(),kVL_yjWOhjXw.cv(),t256.cv())) goto _0;
		}
_27:
		{
			Txt t257;
			c.f.fLine=186;
			if (g->Call(ctx,(PCV[]){t257.cv(),ldom.cv(),k4yMnb1WDTho.cv()},2,864)) goto _0;
			g->Check(ctx);
			lServerMacFolder=t257.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _28;
		{
			Ref t259;
			t259.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=189;
			if (g->Call(ctx,(PCV[]){nullptr,lServerMacFolder.cv(),t259.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t260;
			c.f.fLine=190;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t260.cv())) goto _0;
			Variant t261;
			if (g->GetMember(ctx,t260.cv(),KCS.cv(),t261.cv())) goto _0;
			if (g->SetMember(ctx,t261.cv(),KServerMacFolder.cv(),lstringValue.cv())) goto _0;
		}
_28:
		{
			Txt t262;
			c.f.fLine=193;
			if (g->Call(ctx,(PCV[]){t262.cv(),ldom.cv(),kdScfkI$1UWc.cv()},2,864)) goto _0;
			g->Check(ctx);
			lServerWinFolder=t262.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _29;
		{
			Ref t264;
			t264.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=196;
			if (g->Call(ctx,(PCV[]){nullptr,lServerWinFolder.cv(),t264.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t265;
			c.f.fLine=197;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t265.cv())) goto _0;
			Variant t266;
			if (g->GetMember(ctx,t265.cv(),KCS.cv(),t266.cv())) goto _0;
			if (g->SetMember(ctx,t266.cv(),KServerWinFolder.cv(),lstringValue.cv())) goto _0;
		}
_29:
		{
			Txt t267;
			c.f.fLine=200;
			if (g->Call(ctx,(PCV[]){t267.cv(),ldom.cv(),kqB3IfbvTyA4.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientWinFolderToWin=t267.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _30;
		{
			Ref t269;
			t269.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=203;
			if (g->Call(ctx,(PCV[]){nullptr,lClientWinFolderToWin.cv(),t269.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t270;
			c.f.fLine=204;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t270.cv())) goto _0;
			Variant t271;
			if (g->GetMember(ctx,t270.cv(),KCS.cv(),t271.cv())) goto _0;
			if (g->SetMember(ctx,t271.cv(),kJx45KaS9wz4.cv(),lstringValue.cv())) goto _0;
		}
_30:
		{
			Txt t272;
			c.f.fLine=207;
			if (g->Call(ctx,(PCV[]){t272.cv(),ldom.cv(),kfUKuMsOZ4H0.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientWinFolderToMac=t272.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _31;
		{
			Ref t274;
			t274.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=210;
			if (g->Call(ctx,(PCV[]){nullptr,lClientWinFolderToMac.cv(),t274.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t275;
			c.f.fLine=211;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t275.cv())) goto _0;
			Variant t276;
			if (g->GetMember(ctx,t275.cv(),KCS.cv(),t276.cv())) goto _0;
			if (g->SetMember(ctx,t276.cv(),kilQiTIXd6Xg.cv(),lstringValue.cv())) goto _0;
		}
_31:
		{
			Txt t277;
			c.f.fLine=214;
			if (g->Call(ctx,(PCV[]){t277.cv(),ldom.cv(),kN044MF$qVaw.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientMacFolderToWin=t277.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _32;
		{
			Ref t279;
			t279.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=217;
			if (g->Call(ctx,(PCV[]){nullptr,lClientMacFolderToWin.cv(),t279.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t280;
			c.f.fLine=218;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t280.cv())) goto _0;
			Variant t281;
			if (g->GetMember(ctx,t280.cv(),KCS.cv(),t281.cv())) goto _0;
			if (g->SetMember(ctx,t281.cv(),kpcgglsGRHKg.cv(),lstringValue.cv())) goto _0;
		}
_32:
		{
			Txt t282;
			c.f.fLine=221;
			if (g->Call(ctx,(PCV[]){t282.cv(),ldom.cv(),kQG6yntyhPJE.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientMacFolderToMac=t282.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _33;
		{
			Ref t284;
			t284.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=224;
			if (g->Call(ctx,(PCV[]){nullptr,lClientMacFolderToMac.cv(),t284.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t285;
			c.f.fLine=225;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t285.cv())) goto _0;
			Variant t286;
			if (g->GetMember(ctx,t285.cv(),KCS.cv(),t286.cv())) goto _0;
			if (g->SetMember(ctx,t286.cv(),klrPwPCj4zhY.cv(),lstringValue.cv())) goto _0;
		}
_33:
		{
			Txt t287;
			c.f.fLine=228;
			if (g->Call(ctx,(PCV[]){t287.cv(),ldom.cv(),kPchSt446cFE.cv()},2,864)) goto _0;
			g->Check(ctx);
			lServerIconWinPath=t287.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _34;
		{
			Ref t289;
			t289.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=231;
			if (g->Call(ctx,(PCV[]){nullptr,lServerIconWinPath.cv(),t289.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t290;
			c.f.fLine=232;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t290.cv())) goto _0;
			Variant t291;
			if (g->GetMember(ctx,t290.cv(),KCS.cv(),t291.cv())) goto _0;
			if (g->SetMember(ctx,t291.cv(),k$WnZYmYrI2U.cv(),lstringValue.cv())) goto _0;
		}
_34:
		{
			Txt t292;
			c.f.fLine=235;
			if (g->Call(ctx,(PCV[]){t292.cv(),ldom.cv(),kNsd26Bvxo9g.cv()},2,864)) goto _0;
			g->Check(ctx);
			lServerIconMacPath=t292.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _35;
		{
			Ref t294;
			t294.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=238;
			if (g->Call(ctx,(PCV[]){nullptr,lServerIconMacPath.cv(),t294.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t295;
			c.f.fLine=239;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t295.cv())) goto _0;
			Variant t296;
			if (g->GetMember(ctx,t295.cv(),KCS.cv(),t296.cv())) goto _0;
			if (g->SetMember(ctx,t296.cv(),kf_qgiqMungA.cv(),lstringValue.cv())) goto _0;
		}
_35:
		{
			Txt t297;
			c.f.fLine=242;
			if (g->Call(ctx,(PCV[]){t297.cv(),ldom.cv(),kUTIex1otMkE.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientMacIconForMacPath=t297.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _36;
		{
			Ref t299;
			t299.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=245;
			if (g->Call(ctx,(PCV[]){nullptr,lClientMacIconForMacPath.cv(),t299.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t300;
			c.f.fLine=246;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t300.cv())) goto _0;
			Variant t301;
			if (g->GetMember(ctx,t300.cv(),KCS.cv(),t301.cv())) goto _0;
			if (g->SetMember(ctx,t301.cv(),krJrIZjklfjY.cv(),lstringValue.cv())) goto _0;
		}
_36:
		{
			Txt t302;
			c.f.fLine=249;
			if (g->Call(ctx,(PCV[]){t302.cv(),ldom.cv(),kGeUyn9FOb4g.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientWinIconForMacPath=t302.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _37;
		{
			Ref t304;
			t304.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=252;
			if (g->Call(ctx,(PCV[]){nullptr,lClientWinIconForMacPath.cv(),t304.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t305;
			c.f.fLine=253;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t305.cv())) goto _0;
			Variant t306;
			if (g->GetMember(ctx,t305.cv(),KCS.cv(),t306.cv())) goto _0;
			if (g->SetMember(ctx,t306.cv(),kaDmB05K2jT4.cv(),lstringValue.cv())) goto _0;
		}
_37:
		{
			Txt t307;
			c.f.fLine=256;
			if (g->Call(ctx,(PCV[]){t307.cv(),ldom.cv(),kNaGJYnhtyTs.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientMacIconForWinPath=t307.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _38;
		{
			Ref t309;
			t309.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=259;
			if (g->Call(ctx,(PCV[]){nullptr,lClientMacIconForWinPath.cv(),t309.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t310;
			c.f.fLine=260;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t310.cv())) goto _0;
			Variant t311;
			if (g->GetMember(ctx,t310.cv(),KCS.cv(),t311.cv())) goto _0;
			if (g->SetMember(ctx,t311.cv(),kNJ9VBswqXkE.cv(),lstringValue.cv())) goto _0;
		}
_38:
		{
			Txt t312;
			c.f.fLine=263;
			if (g->Call(ctx,(PCV[]){t312.cv(),ldom.cv(),kFvxLAdgkwEo.cv()},2,864)) goto _0;
			g->Check(ctx);
			lClientWinIconForWinPath=t312.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _39;
		{
			Ref t314;
			t314.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=266;
			if (g->Call(ctx,(PCV[]){nullptr,lClientWinIconForWinPath.cv(),t314.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t315;
			c.f.fLine=267;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t315.cv())) goto _0;
			Variant t316;
			if (g->GetMember(ctx,t315.cv(),KCS.cv(),t316.cv())) goto _0;
			if (g->SetMember(ctx,t316.cv(),kxT3JOXae8Mk.cv(),lstringValue.cv())) goto _0;
		}
_39:
		{
			Txt t317;
			c.f.fLine=270;
			if (g->Call(ctx,(PCV[]){t317.cv(),ldom.cv(),kz3e__znIs1s.cv()},2,864)) goto _0;
			g->Check(ctx);
			lToEmbedInClientMacFolder=t317.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _40;
		{
			Ref t319;
			t319.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=273;
			if (g->Call(ctx,(PCV[]){nullptr,lToEmbedInClientMacFolder.cv(),t319.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t320;
			c.f.fLine=274;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t320.cv())) goto _0;
			Variant t321;
			if (g->GetMember(ctx,t320.cv(),KCS.cv(),t321.cv())) goto _0;
			if (g->SetMember(ctx,t321.cv(),ktFnlALI5wE4.cv(),lstringValue.cv())) goto _0;
		}
_40:
		{
			Txt t322;
			c.f.fLine=277;
			if (g->Call(ctx,(PCV[]){t322.cv(),ldom.cv(),kDWsLR5f41Ro.cv()},2,864)) goto _0;
			g->Check(ctx);
			lToEmbedInClientWinFolder=t322.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _41;
		{
			Ref t324;
			t324.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=280;
			if (g->Call(ctx,(PCV[]){nullptr,lToEmbedInClientWinFolder.cv(),t324.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t325;
			c.f.fLine=281;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t325.cv())) goto _0;
			Variant t326;
			if (g->GetMember(ctx,t325.cv(),KCS.cv(),t326.cv())) goto _0;
			if (g->SetMember(ctx,t326.cv(),k94AAdQHgWzo.cv(),lstringValue.cv())) goto _0;
		}
_41:
		{
			Txt t327;
			c.f.fLine=284;
			if (g->Call(ctx,(PCV[]){t327.cv(),ldom.cv(),k7qFBVxbkv18.cv()},2,864)) goto _0;
			g->Check(ctx);
			lIsOEM=t327.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _42;
		{
			Ref t329;
			t329.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=287;
			if (g->Call(ctx,(PCV[]){nullptr,lIsOEM.cv(),t329.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t330;
			c.f.fLine=288;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSourcesFiles.cv(),t330.cv())) goto _0;
			Variant t331;
			if (g->GetMember(ctx,t330.cv(),KRuntimeVL.cv(),t331.cv())) goto _0;
			Bool t332;
			t332=lboolValue.get();
			if (g->SetMember(ctx,t331.cv(),KIsOEM.cv(),t332.cv())) goto _0;
		}
_42:
		{
			Txt t333;
			c.f.fLine=291;
			if (g->Call(ctx,(PCV[]){t333.cv(),ldom.cv(),ki5gubPidb1o.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildServerApplication=t333.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _43;
		{
			Ref t335;
			t335.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=294;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildServerApplication.cv(),t335.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t336;
			c.f.fLine=295;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t336.cv())) goto _0;
			Bool t337;
			t337=lboolValue.get();
			if (g->SetMember(ctx,t336.cv(),kDKQUWmhrYjU.cv(),t337.cv())) goto _0;
		}
_43:
		{
			Txt t338;
			c.f.fLine=298;
			if (g->Call(ctx,(PCV[]){t338.cv(),ldom.cv(),k1tSv_hEqbWc.cv()},2,864)) goto _0;
			g->Check(ctx);
			lLastDataPathLookup=t338.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _44;
		{
			Ref t340;
			t340.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=301;
			if (g->Call(ctx,(PCV[]){nullptr,lLastDataPathLookup.cv(),t340.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t341;
			t341.setLocalRef(ctx,llinkModes.cv());
			Long t342;
			c.f.fLine=302;
			if (g->Call(ctx,(PCV[]){t342.cv(),t341.cv(),lstringValue.cv()},2,230)) goto _0;
			if (-1==t342.get()) goto _45;
		}
		{
			Variant t344;
			c.f.fLine=303;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t344.cv())) goto _0;
			if (g->SetMember(ctx,t344.cv(),kZDHSQRlNv0I.cv(),lstringValue.cv())) goto _0;
		}
_45:
_44:
		{
			Txt t345;
			c.f.fLine=307;
			if (g->Call(ctx,(PCV[]){t345.cv(),ldom.cv(),kF4vr8N2EgqM.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildCSUpgradeable=t345.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _46;
		{
			Ref t347;
			t347.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=310;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildCSUpgradeable.cv(),t347.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t348;
			c.f.fLine=311;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t348.cv())) goto _0;
			Bool t349;
			t349=lboolValue.get();
			if (g->SetMember(ctx,t348.cv(),k6vA6VWRWdlk.cv(),t349.cv())) goto _0;
		}
_46:
		{
			Txt t350;
			c.f.fLine=314;
			if (g->Call(ctx,(PCV[]){t350.cv(),ldom.cv(),k_TqQEI0wDFc.cv()},2,864)) goto _0;
			g->Check(ctx);
			lCurrentVers=t350.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _47;
		{
			Ref t352;
			t352.setLocalRef(ctx,lintValue.cv());
			c.f.fLine=317;
			if (g->Call(ctx,(PCV[]){nullptr,lCurrentVers.cv(),t352.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		if (0>=lintValue.get()) goto _48;
		{
			Variant t354;
			c.f.fLine=319;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t354.cv())) goto _0;
			if (g->SetMember(ctx,t354.cv(),KCurrentVers.cv(),lintValue.cv())) goto _0;
		}
_48:
_47:
		{
			Txt t355;
			c.f.fLine=323;
			if (g->Call(ctx,(PCV[]){t355.cv(),ldom.cv(),k46VcR$LLNeg.cv()},2,864)) goto _0;
			g->Check(ctx);
			lHardLink=t355.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _49;
		{
			Ref t357;
			t357.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=326;
			if (g->Call(ctx,(PCV[]){nullptr,lHardLink.cv(),t357.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t358;
			c.f.fLine=327;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t358.cv())) goto _0;
			if (g->SetMember(ctx,t358.cv(),KHardLink.cv(),lstringValue.cv())) goto _0;
		}
_49:
		{
			Txt t359;
			c.f.fLine=330;
			if (g->Call(ctx,(PCV[]){t359.cv(),ldom.cv(),kFrTktrGYpe8.cv()},2,864)) goto _0;
			g->Check(ctx);
			lBuildV13ClientUpgrades=t359.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _50;
		{
			Ref t361;
			t361.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=333;
			if (g->Call(ctx,(PCV[]){nullptr,lBuildV13ClientUpgrades.cv(),t361.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t362;
			c.f.fLine=334;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t362.cv())) goto _0;
			Bool t363;
			t363=lboolValue.get();
			if (g->SetMember(ctx,t362.cv(),kei6INo2lMuE.cv(),t363.cv())) goto _0;
		}
_50:
		{
			Txt t364;
			c.f.fLine=337;
			if (g->Call(ctx,(PCV[]){t364.cv(),ldom.cv(),kaVp2LmqlBmQ.cv()},2,864)) goto _0;
			g->Check(ctx);
			lIPAddress=t364.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _51;
		{
			Ref t366;
			t366.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=340;
			if (g->Call(ctx,(PCV[]){nullptr,lIPAddress.cv(),t366.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t367;
			c.f.fLine=341;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t367.cv())) goto _0;
			if (g->SetMember(ctx,t367.cv(),KIPAddress.cv(),lstringValue.cv())) goto _0;
		}
_51:
		{
			Txt t368;
			c.f.fLine=344;
			if (g->Call(ctx,(PCV[]){t368.cv(),ldom.cv(),knNszo1ljhNg.cv()},2,864)) goto _0;
			g->Check(ctx);
			lPortNumber=t368.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _52;
		{
			Ref t370;
			t370.setLocalRef(ctx,lintValue.cv());
			c.f.fLine=347;
			if (g->Call(ctx,(PCV[]){nullptr,lPortNumber.cv(),t370.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t371;
			c.f.fLine=348;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t371.cv())) goto _0;
			if (g->SetMember(ctx,t371.cv(),KPortNumber.cv(),lintValue.cv())) goto _0;
		}
_52:
		{
			Txt t372;
			c.f.fLine=351;
			if (g->Call(ctx,(PCV[]){t372.cv(),ldom.cv(),krKly_Dk87oQ.cv()},2,864)) goto _0;
			g->Check(ctx);
			lRangeVersMin=t372.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _53;
		{
			Ref t374;
			t374.setLocalRef(ctx,lintValue.cv());
			c.f.fLine=354;
			if (g->Call(ctx,(PCV[]){nullptr,lRangeVersMin.cv(),t374.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		if (0>=lintValue.get()) goto _54;
		{
			Variant t376;
			c.f.fLine=356;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t376.cv())) goto _0;
			if (g->SetMember(ctx,t376.cv(),KRangeVersMin.cv(),lintValue.cv())) goto _0;
		}
_54:
_53:
		{
			Txt t377;
			c.f.fLine=360;
			if (g->Call(ctx,(PCV[]){t377.cv(),ldom.cv(),kXxg$R1zT678.cv()},2,864)) goto _0;
			g->Check(ctx);
			lRangeVersMax=t377.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _55;
		{
			Ref t379;
			t379.setLocalRef(ctx,lintValue.cv());
			c.f.fLine=363;
			if (g->Call(ctx,(PCV[]){nullptr,lRangeVersMax.cv(),t379.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		if (0>=lintValue.get()) goto _56;
		{
			Variant t381;
			c.f.fLine=365;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t381.cv())) goto _0;
			if (g->SetMember(ctx,t381.cv(),KRangeVersMax.cv(),lintValue.cv())) goto _0;
		}
_56:
_55:
		{
			Txt t382;
			c.f.fLine=369;
			if (g->Call(ctx,(PCV[]){t382.cv(),ldom.cv(),kGtAx6nYYUyo.cv()},2,864)) goto _0;
			g->Check(ctx);
			lServerSelectionAllowed=t382.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _57;
		{
			Ref t384;
			t384.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=372;
			if (g->Call(ctx,(PCV[]){nullptr,lServerSelectionAllowed.cv(),t384.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t385;
			c.f.fLine=373;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t385.cv())) goto _0;
			Bool t386;
			t386=lboolValue.get();
			if (g->SetMember(ctx,t385.cv(),kD5iRlupXqoU.cv(),t386.cv())) goto _0;
		}
_57:
		{
			Txt t387;
			c.f.fLine=376;
			if (g->Call(ctx,(PCV[]){t387.cv(),ldom.cv(),kXOQnYfgwyMc.cv()},2,864)) goto _0;
			g->Check(ctx);
			lMacCompiledDatabaseToWin=t387.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _58;
		{
			Ref t389;
			t389.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=379;
			if (g->Call(ctx,(PCV[]){nullptr,lMacCompiledDatabaseToWin.cv(),t389.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t390;
			c.f.fLine=380;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t390.cv())) goto _0;
			if (g->SetMember(ctx,t390.cv(),kOO7LZHF4UVQ.cv(),lstringValue.cv())) goto _0;
		}
_58:
		{
			Txt t391;
			c.f.fLine=383;
			if (g->Call(ctx,(PCV[]){t391.cv(),ldom.cv(),kA14oHb97CG0.cv()},2,864)) goto _0;
			g->Check(ctx);
			lMacCompiledDatabaseToWinInclude=t391.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _59;
		{
			Ref t393;
			t393.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=386;
			if (g->Call(ctx,(PCV[]){nullptr,lMacCompiledDatabaseToWinInclude.cv(),t393.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t394;
			c.f.fLine=387;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KCS.cv(),t394.cv())) goto _0;
			Bool t395;
			t395=lboolValue.get();
			if (g->SetMember(ctx,t394.cv(),k9iETyf54yxo.cv(),t395.cv())) goto _0;
		}
_59:
		{
			Txt t396;
			c.f.fLine=390;
			if (g->Call(ctx,(PCV[]){t396.cv(),ldom.cv(),k4VF6vImaDTc.cv()},2,864)) goto _0;
			g->Check(ctx);
			lMacSignature=t396.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _60;
		{
			Ref t398;
			t398.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=393;
			if (g->Call(ctx,(PCV[]){nullptr,lMacSignature.cv(),t398.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t399;
			c.f.fLine=394;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSignApplication.cv(),t399.cv())) goto _0;
			Bool t400;
			t400=lboolValue.get();
			if (g->SetMember(ctx,t399.cv(),KMacSignature.cv(),t400.cv())) goto _0;
		}
_60:
		{
			Txt t401;
			c.f.fLine=397;
			if (g->Call(ctx,(PCV[]){t401.cv(),ldom.cv(),k4ubc_HT$zN0.cv()},2,864)) goto _0;
			g->Check(ctx);
			lMacCertificate=t401.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _61;
		{
			Ref t403;
			t403.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=400;
			if (g->Call(ctx,(PCV[]){nullptr,lMacCertificate.cv(),t403.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t404;
			c.f.fLine=401;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSignApplication.cv(),t404.cv())) goto _0;
			if (g->SetMember(ctx,t404.cv(),KMacCertificate.cv(),lstringValue.cv())) goto _0;
		}
_61:
		{
			Txt t405;
			c.f.fLine=404;
			if (g->Call(ctx,(PCV[]){t405.cv(),ldom.cv(),kvhaASp1hevk.cv()},2,864)) goto _0;
			g->Check(ctx);
			lAdHocSign=t405.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _62;
		{
			Ref t407;
			t407.setLocalRef(ctx,lboolValue.cv());
			c.f.fLine=407;
			if (g->Call(ctx,(PCV[]){nullptr,lAdHocSign.cv(),t407.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t408;
			c.f.fLine=408;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KSignApplication.cv(),t408.cv())) goto _0;
			Bool t409;
			t409=lboolValue.get();
			if (g->SetMember(ctx,t408.cv(),KAdHocSign.cv(),t409.cv())) goto _0;
		}
_62:
		{
			Txt t410;
			c.f.fLine=411;
			if (g->Call(ctx,(PCV[]){t410.cv(),ldom.cv(),kY0n34rynznk.cv()},2,864)) goto _0;
			g->Check(ctx);
			lLastDataPathLookup=t410.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _63;
		{
			Ref t412;
			t412.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=414;
			if (g->Call(ctx,(PCV[]){nullptr,lLastDataPathLookup.cv(),t412.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t413;
			t413.setLocalRef(ctx,llinkModes.cv());
			Long t414;
			c.f.fLine=415;
			if (g->Call(ctx,(PCV[]){t414.cv(),t413.cv(),lstringValue.cv()},2,230)) goto _0;
			if (-1==t414.get()) goto _64;
		}
		{
			Variant t416;
			c.f.fLine=416;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KRuntimeVL.cv(),t416.cv())) goto _0;
			if (g->SetMember(ctx,t416.cv(),kZDHSQRlNv0I.cv(),lstringValue.cv())) goto _0;
		}
_64:
_63:
		{
			Ref t417;
			t417.setLocalRef(ctx,lnames.cv());
			c.f.fLine=420;
			if (g->Call(ctx,(PCV[]){nullptr,t417.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Variant t418;
			c.f.fLine=421;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KLicenses.cv(),t418.cv())) goto _0;
			Ref t419;
			t419.setLocalRef(ctx,lnames.cv());
			Obj t420;
			if (!g->GetValue(ctx,(PCV[]){t420.cv(),t418.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t420.cv(),t419.cv()},2,1232)) goto _0;
			g->Check(ctx);
		}
		li=1;
		{
			Ref t421;
			t421.setLocalRef(ctx,lnames.cv());
			Long t422;
			c.f.fLine=423;
			if (g->Call(ctx,(PCV[]){t422.cv(),t421.cv()},1,274)) goto _0;
			v0=t422.get();
		}
		goto _65;
_66:
		{
			Long t424;
			t424=(sLONG)lrint(li.get());
			Txt t425;
			t425=lnames.arrayElem(t424.get()).get();
			lname=t425.get();
		}
		{
			Txt t426;
			g->AddString(kIXGtq34IYUQ.get(),lname.get(),t426.get());
			Txt t427;
			g->AddString(t426.get(),K_2FItemsCount.get(),t427.get());
			Txt t428;
			c.f.fLine=425;
			if (g->Call(ctx,(PCV[]){t428.cv(),ldom.cv(),t427.cv()},2,864)) goto _0;
			g->Check(ctx);
			lItemsCount=t428.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _67;
		{
			Ref t430;
			t430.setLocalRef(ctx,lintValue.cv());
			c.f.fLine=429;
			if (g->Call(ctx,(PCV[]){nullptr,lItemsCount.cv(),t430.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t431;
			t431.setLocalRef(ctx,lDatabaseNames.cv());
			c.f.fLine=430;
			if (g->Call(ctx,(PCV[]){nullptr,t431.cv(),lintValue.cv()},2,1221)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t432;
			c.f.fLine=432;
			if (g->Call(ctx,(PCV[]){t432.cv(),lItemsCount.cv()},1,724)) goto _0;
			g->Check(ctx);
			lItem=t432.get();
		}
		lj=0;
		{
			Long t433;
			t433=lintValue.get()-1;
			v2=t433.get();
		}
		goto _68;
_69:
		{
			Ref t435;
			t435.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=434;
			if (g->Call(ctx,(PCV[]){nullptr,lItem.cv(),t435.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t436;
			c.f.fLine=435;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KLicenses.cv(),t436.cv())) goto _0;
			Variant t437;
			if (g->GetMember(ctx,t436.cv(),lname.cv(),t437.cv())) goto _0;
			Variant t438;
			if (g->GetMember(ctx,t437.cv(),KItem.cv(),t438.cv())) goto _0;
			Bool t439;
			t439=g->CompareString(ctx,lstringValue.get(),K.get())==0;
			Variant t440;
			t440.setNull();
			Bool t441;
			t441=t439.get();
			Variant t442;
			if (g->Call(ctx,(PCV[]){t442.cv(),t441.cv(),t440.cv(),lstringValue.cv()},3,955)) goto _0;
			if (g->SetMember(ctx,t438.cv(),lj.cv(),t442.cv())) goto _0;
		}
		{
			Txt t443;
			c.f.fLine=436;
			if (g->Call(ctx,(PCV[]){t443.cv(),lItem.cv()},1,724)) goto _0;
			g->Check(ctx);
			lItem=t443.get();
		}
		{
			Num t444;
			t444=lj.get()+1;
			lj=t444.get();
		}
_68:
		{
			Bool t445;
			t445=!GEqual(glob,v2.get(),lj.get());
			if (!(t445.get())) goto _69;
		}
_67:
		{
			Num t446;
			t446=li.get()+1;
			li=t446.get();
		}
_65:
		{
			Bool t447;
			t447=!GEqual(glob,v0.get(),li.get());
			if (!(t447.get())) goto _66;
		}
		{
			Ref t448;
			t448.setLocalRef(ctx,lnames.cv());
			c.f.fLine=441;
			if (g->Call(ctx,(PCV[]){nullptr,t448.cv(),Long(3).cv()},2,222)) goto _0;
		}
		{
			Txt t449;
			t449=koJ2CJYSi$4Q.get();
			lnames.arrayElem(1)=t449.get();
		}
		{
			Txt t450;
			t450=kYX5Kt0AbkkU.get();
			lnames.arrayElem(2)=t450.get();
		}
		{
			Txt t451;
			t451=kcrfmXa66a44.get();
			lnames.arrayElem(3)=t451.get();
		}
		li=1;
		{
			Ref t452;
			t452.setLocalRef(ctx,lnames.cv());
			Long t453;
			c.f.fLine=447;
			if (g->Call(ctx,(PCV[]){t453.cv(),t452.cv()},1,274)) goto _0;
			v4=t453.get();
		}
		goto _70;
_71:
		{
			Long t455;
			t455=(sLONG)lrint(li.get());
			Txt t456;
			t456=lnames.arrayElem(t455.get()).get();
			lname=t456.get();
		}
		{
			Txt t457;
			g->AddString(kbmoXZlMq9pA.get(),lname.get(),t457.get());
			Txt t458;
			g->AddString(t457.get(),K_2FItemsCount.get(),t458.get());
			Txt t459;
			c.f.fLine=449;
			if (g->Call(ctx,(PCV[]){t459.cv(),ldom.cv(),t458.cv()},2,864)) goto _0;
			g->Check(ctx);
			lItemsCount=t459.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _72;
		{
			Ref t461;
			t461.setLocalRef(ctx,lintValue.cv());
			c.f.fLine=451;
			if (g->Call(ctx,(PCV[]){nullptr,lItemsCount.cv(),t461.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t462;
			t462.setLocalRef(ctx,lDatabaseNames.cv());
			c.f.fLine=452;
			if (g->Call(ctx,(PCV[]){nullptr,t462.cv(),lintValue.cv()},2,1221)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t463;
			c.f.fLine=454;
			if (g->Call(ctx,(PCV[]){t463.cv(),lItemsCount.cv()},1,724)) goto _0;
			g->Check(ctx);
			lItem=t463.get();
		}
		lj=0;
		{
			Long t464;
			t464=lintValue.get()-1;
			v6=t464.get();
		}
		goto _73;
_74:
		{
			Ref t466;
			t466.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=456;
			if (g->Call(ctx,(PCV[]){nullptr,lItem.cv(),t466.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t467;
			c.f.fLine=457;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),lname.cv(),t467.cv())) goto _0;
			Variant t468;
			if (g->GetMember(ctx,t467.cv(),KItem.cv(),t468.cv())) goto _0;
			Bool t469;
			t469=g->CompareString(ctx,lstringValue.get(),K.get())==0;
			Variant t470;
			t470.setNull();
			Bool t471;
			t471=t469.get();
			Variant t472;
			if (g->Call(ctx,(PCV[]){t472.cv(),t471.cv(),t470.cv(),lstringValue.cv()},3,955)) goto _0;
			if (g->SetMember(ctx,t468.cv(),lj.cv(),t472.cv())) goto _0;
		}
		{
			Txt t473;
			c.f.fLine=458;
			if (g->Call(ctx,(PCV[]){t473.cv(),lItem.cv()},1,724)) goto _0;
			g->Check(ctx);
			lItem=t473.get();
		}
		{
			Num t474;
			t474=lj.get()+1;
			lj=t474.get();
		}
_73:
		{
			Bool t475;
			t475=!GEqual(glob,v6.get(),lj.get());
			if (!(t475.get())) goto _74;
		}
_72:
		{
			Num t476;
			t476=li.get()+1;
			li=t476.get();
		}
_70:
		{
			Bool t477;
			t477=!GEqual(glob,v4.get(),li.get());
			if (!(t477.get())) goto _71;
		}
		{
			Variant t478;
			c.f.fLine=463;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KVersioning.cv(),t478.cv())) goto _0;
			Ref t479;
			t479.setLocalRef(ctx,lnames.cv());
			Obj t480;
			if (!g->GetValue(ctx,(PCV[]){t480.cv(),t478.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t480.cv(),t479.cv()},2,1232)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t481;
			c.f.fLine=464;
			if (g->Call(ctx,(PCV[]){t481.cv(),ldom.cv(),k0Sl7BH$bmaU.cv()},2,864)) goto _0;
			g->Check(ctx);
			lVersioning=t481.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _75;
		li=1;
		{
			Ref t483;
			t483.setLocalRef(ctx,lnames.cv());
			Long t484;
			c.f.fLine=468;
			if (g->Call(ctx,(PCV[]){t484.cv(),t483.cv()},1,274)) goto _0;
			v8=t484.get();
		}
		goto _76;
_77:
		{
			Long t486;
			t486=(sLONG)lrint(li.get());
			Txt t487;
			t487=lnames.arrayElem(t486.get()).get();
			lname=t487.get();
		}
		{
			Txt t488;
			c.f.fLine=470;
			if (g->Call(ctx,(PCV[]){t488.cv(),lVersioning.cv(),lname.cv()},2,864)) goto _0;
			g->Check(ctx);
			lparent=t488.get();
		}
		{
			Ref t489;
			t489.setLocalRef(ctx,litemNames.cv());
			c.f.fLine=471;
			if (g->Call(ctx,(PCV[]){nullptr,t489.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Variant t490;
			c.f.fLine=472;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KVersioning.cv(),t490.cv())) goto _0;
			Variant t491;
			if (g->GetMember(ctx,t490.cv(),lname.cv(),t491.cv())) goto _0;
			Ref t492;
			t492.setLocalRef(ctx,litemNames.cv());
			Obj t493;
			if (!g->GetValue(ctx,(PCV[]){t493.cv(),t491.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t493.cv(),t492.cv()},2,1232)) goto _0;
			g->Check(ctx);
		}
		lj=1;
		{
			Ref t494;
			t494.setLocalRef(ctx,litemNames.cv());
			Long t495;
			c.f.fLine=473;
			if (g->Call(ctx,(PCV[]){t495.cv(),t494.cv()},1,274)) goto _0;
			v10=t495.get();
		}
		goto _78;
_79:
		{
			Long t497;
			t497=(sLONG)lrint(lj.get());
			Txt t498;
			t498=litemNames.arrayElem(t497.get()).get();
			litemName=t498.get();
		}
		{
			Txt t499;
			c.f.fLine=475;
			if (g->Call(ctx,(PCV[]){t499.cv(),lparent.cv(),litemName.cv()},2,864)) goto _0;
			g->Check(ctx);
			lchild=t499.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _80;
		{
			Ref t501;
			t501.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=477;
			if (g->Call(ctx,(PCV[]){nullptr,lchild.cv(),t501.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t502;
			c.f.fLine=478;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KVersioning.cv(),t502.cv())) goto _0;
			Variant t503;
			if (g->GetMember(ctx,t502.cv(),lname.cv(),t503.cv())) goto _0;
			if (g->SetMember(ctx,t503.cv(),litemName.cv(),lstringValue.cv())) goto _0;
		}
_80:
		{
			Num t504;
			t504=lj.get()+1;
			lj=t504.get();
		}
_78:
		{
			Bool t505;
			t505=!GEqual(glob,v10.get(),lj.get());
			if (!(t505.get())) goto _79;
		}
		{
			Num t506;
			t506=li.get()+1;
			li=t506.get();
		}
_76:
		{
			Bool t507;
			t507=!GEqual(glob,v8.get(),li.get());
			if (!(t507.get())) goto _77;
		}
_75:
		c.f.fLine=487;
		if (g->Call(ctx,(PCV[]){nullptr,ldom.cv()},1,722)) goto _0;
		g->Check(ctx);
_9:
_8:
_7:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
