extern Txt K4DOE;
extern Txt K4D_20v;
extern Txt K4UOE;
extern Txt KAdHocSign;
extern Txt KImages;
extern Txt KIsOEM;
extern Txt KItem;
extern Txt KMacSignature;
extern Txt KRuntimeVL;
extern Txt KSignApplication;
extern Txt KSourcesFiles;
extern Txt K_2E;
extern Txt K_2Eapp;
extern Txt Karchive;
extern Txt Kbuild;
extern Txt Kbuilder;
extern Txt Kdgw2_2Eicns;
extern Txt Kfile;
extern Txt KfindLicenses;
extern Txt Kfolder;
extern Txt Klibrary;
extern Txt Knotarize;
extern Txt Kpassword;
extern Txt KplatformPath;
extern Txt Kpush;
extern Txt Ksettings;
extern Txt Ksign;
extern Txt Ksuccess;
extern Txt Kusername;
extern Txt k0uDSTbP0wcQ;
extern Txt k1zF9EmyIypY;
extern Txt k23E8lYlYUlU;
extern Txt k50VXbjZi85k;
extern Txt k6sCkZfS$kA4;
extern Txt k8WXSBzkOc5E;
extern Txt kHBUFlTxDkWg;
extern Txt kLa2ChQdcjpU;
extern Txt kNqMU0qrZDSc;
extern Txt kPMGyPakFooE;
extern Txt kaYal5aOiRaI;
extern Txt kcrfmXa66a44;
extern Txt kv1LViOymuz0;
Asm4d_Proc proc_BUILDAPP;
Asm4d_Proc proc_SIGNAPP;
extern unsigned char D_proc_TEST__BUILDER[];
void proc_TEST__BUILDER( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_TEST__BUILDER);
	if (!ctx->doingAbort) try {
		Variant lstatus;
		Txt lversion;
		Obj lapplicationsFolder;
		Obj lcredentials;
		Txt lfolderName;
		Variant llibraryImagesFolder;
		Variant lapp;
		Obj lsignApp;
		Variant lstatuses;
		Variant lbuild;
		Obj lbuildApp;
		Obj lresourcesFolder;
		{
			Obj t0;
			c.f.fLine=1;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1471)) goto _0;
			g->Check(ctx);
			Obj t1;
			proc_BUILDAPP(glob,ctx,1,1,(PCV[]){t0.cv()},t1.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lbuildApp=t1.get();
		}
		{
			Col t2;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t2.cv(),K4DOE.cv(),K4UOE.cv()},2,1472)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,lbuildApp.cv(),KfindLicenses.cv(),t2.cv()},3,1500)) goto _0;
		}
		{
			Obj t3;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t3.cv(),Long(116).cv()},1,1567)) goto _0;
			g->Check(ctx);
			lapplicationsFolder=t3.get();
		}
		{
			Txt t4;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t4.cv(),Long(6).cv()},1,485)) goto _0;
			g->Check(ctx);
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv(),Long(1).cv()},2,1567)) goto _0;
			lresourcesFolder=t5.get();
		}
		{
			Variant t6;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t6.cv(),lresourcesFolder.cv(),Kfolder.cv(),KImages.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),t6.cv(),Kfolder.cv(),Klibrary.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t7.cv(),llibraryImagesFolder.cv(),nullptr})) goto _0;
		}
		{
			Ref t8;
			c.f.fLine=9;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t8.cv(),lbuild.cv(),nullptr})) goto _0;
			Txt t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv()},1,493)) goto _0;
			g->Check(ctx);
			lversion=t9.get();
		}
		{
			Txt t10;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t10.cv(),lversion.cv(),Long(1).cv(),Long(2).cv()},3,12)) goto _0;
			Txt t11;
			g->AddString(K4D_20v.get(),t10.get(),t11.get());
			Txt t12;
			g->AddString(t11.get(),K_2E.get(),t12.get());
			Txt t13;
			if (g->Call(ctx,(PCV[]){t13.cv(),lversion.cv(),Long(4).cv(),Long(1).cv()},3,12)) goto _0;
			g->AddString(t12.get(),t13.get(),lfolderName.get());
		}
		{
			Variant t15;
			c.f.fLine=12;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t15.cv())) goto _0;
			if (g->SetMember(ctx,t15.cv(),k1zF9EmyIypY.cv(),k8WXSBzkOc5E.cv())) goto _0;
		}
		{
			Variant t16;
			c.f.fLine=13;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t16.cv())) goto _0;
			Bool t17;
			t17=true;
			Bool t18;
			t18=t17.get();
			if (g->SetMember(ctx,t16.cv(),k0uDSTbP0wcQ.cv(),t18.cv())) goto _0;
		}
		{
			Variant t19;
			c.f.fLine=15;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t19.cv())) goto _0;
			Txt t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),Long(15).cv()},1,487)) goto _0;
			g->Check(ctx);
			Txt t21;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1066)) goto _0;
			Txt t22;
			g->AddString(t20.get(),t21.get(),t22.get());
			if (g->SetMember(ctx,t19.cv(),kLa2ChQdcjpU.cv(),t22.cv())) goto _0;
		}
		{
			Variant t23;
			c.f.fLine=17;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t23.cv())) goto _0;
			Variant t24;
			if (g->GetMember(ctx,t23.cv(),KSourcesFiles.cv(),t24.cv())) goto _0;
			Variant t25;
			if (g->GetMember(ctx,t24.cv(),KRuntimeVL.cv(),t25.cv())) goto _0;
			Bool t26;
			t26=true;
			Bool t27;
			t27=t26.get();
			if (g->SetMember(ctx,t25.cv(),kaYal5aOiRaI.cv(),t27.cv())) goto _0;
		}
		{
			Variant t28;
			c.f.fLine=18;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t28.cv())) goto _0;
			Variant t29;
			if (g->GetMember(ctx,t28.cv(),KSourcesFiles.cv(),t29.cv())) goto _0;
			Variant t30;
			if (g->GetMember(ctx,t29.cv(),KRuntimeVL.cv(),t30.cv())) goto _0;
			Variant t31;
			if (g->Call(ctx,(PCV[]){t31.cv(),lapplicationsFolder.cv(),Kfolder.cv(),lfolderName.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t32;
			if (g->Call(ctx,(PCV[]){t32.cv(),t31.cv(),Kfolder.cv(),kHBUFlTxDkWg.cv()},3,1498)) goto _0;
			Variant t33;
			if (g->GetMember(ctx,t32.cv(),KplatformPath.cv(),t33.cv())) goto _0;
			if (g->SetMember(ctx,t30.cv(),kNqMU0qrZDSc.cv(),t33.cv())) goto _0;
		}
		{
			Variant t34;
			c.f.fLine=19;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t34.cv())) goto _0;
			Variant t35;
			if (g->GetMember(ctx,t34.cv(),KSourcesFiles.cv(),t35.cv())) goto _0;
			Variant t36;
			if (g->GetMember(ctx,t35.cv(),KRuntimeVL.cv(),t36.cv())) goto _0;
			Variant t37;
			if (g->Call(ctx,(PCV[]){t37.cv(),llibraryImagesFolder.cv(),Kfile.cv(),Kdgw2_2Eicns.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t38;
			if (g->GetMember(ctx,t37.cv(),KplatformPath.cv(),t38.cv())) goto _0;
			if (g->SetMember(ctx,t36.cv(),k6sCkZfS$kA4.cv(),t38.cv())) goto _0;
		}
		{
			Variant t39;
			c.f.fLine=20;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t39.cv())) goto _0;
			Variant t40;
			if (g->GetMember(ctx,t39.cv(),KSourcesFiles.cv(),t40.cv())) goto _0;
			Variant t41;
			if (g->GetMember(ctx,t40.cv(),KRuntimeVL.cv(),t41.cv())) goto _0;
			Bool t42;
			t42=true;
			Bool t43;
			t43=t42.get();
			if (g->SetMember(ctx,t41.cv(),KIsOEM.cv(),t43.cv())) goto _0;
		}
		{
			Variant t44;
			c.f.fLine=22;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t44.cv())) goto _0;
			Variant t45;
			if (g->GetMember(ctx,t44.cv(),KSignApplication.cv(),t45.cv())) goto _0;
			Bool t46;
			t46=false;
			Bool t47;
			t47=t46.get();
			if (g->SetMember(ctx,t45.cv(),KMacSignature.cv(),t47.cv())) goto _0;
		}
		{
			Variant t48;
			c.f.fLine=23;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t48.cv())) goto _0;
			Variant t49;
			if (g->GetMember(ctx,t48.cv(),KSignApplication.cv(),t49.cv())) goto _0;
			Bool t50;
			t50=false;
			Bool t51;
			t51=t50.get();
			if (g->SetMember(ctx,t49.cv(),KAdHocSign.cv(),t51.cv())) goto _0;
		}
		{
			Variant t52;
			c.f.fLine=25;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t52.cv())) goto _0;
			Variant t53;
			if (g->GetMember(ctx,t52.cv(),kcrfmXa66a44.cv(),t53.cv())) goto _0;
			Variant t54;
			if (g->GetMember(ctx,t53.cv(),KItem.cv(),t54.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t54.cv(),Kpush.cv(),Kbuilder.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t55;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t55.cv(),lbuildApp.cv(),Kbuild.cv()},2,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t55.cv(),lstatus.cv(),nullptr})) goto _0;
		}
		{
			Variant t56;
			c.f.fLine=29;
			if (g->GetMember(ctx,lstatus.cv(),Ksuccess.cv(),t56.cv())) goto _0;
			Bool t57;
			if (!g->GetValue(ctx,(PCV[]){t57.cv(),t56.cv(),nullptr})) goto _0;
			if (!(t57.get())) goto _2;
		}
		{
			Variant t58;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t58.cv(),lbuildApp.cv(),k50VXbjZi85k.cv()},2,1498)) goto _0;
			g->Check(ctx);
			Variant t59;
			if (g->Call(ctx,(PCV[]){t59.cv(),t58.cv(),Kfolder.cv(),kv1LViOymuz0.cv()},3,1498)) goto _0;
			Variant t60;
			if (g->GetMember(ctx,lbuildApp.cv(),Ksettings.cv(),t60.cv())) goto _0;
			Variant t61;
			if (g->GetMember(ctx,t60.cv(),k1zF9EmyIypY.cv(),t61.cv())) goto _0;
			Variant t62;
			if (g->OperationOnAny(ctx,0,t61.cv(),K_2Eapp.cv(),t62.cv())) goto _0;
			Variant t63;
			if (g->Call(ctx,(PCV[]){t63.cv(),t59.cv(),Kfolder.cv(),t62.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t63.cv(),lapp.cv(),nullptr})) goto _0;
		}
		{
			Obj t64;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t64.cv()},0,1471)) goto _0;
			g->Check(ctx);
			lcredentials=t64.get();
		}
		c.f.fLine=34;
		if (g->SetMember(ctx,lcredentials.cv(),Kusername.cv(),kPMGyPakFooE.cv())) goto _0;
		c.f.fLine=35;
		if (g->SetMember(ctx,lcredentials.cv(),Kpassword.cv(),k23E8lYlYUlU.cv())) goto _0;
		{
			Obj t65;
			t65=lcredentials.get();
			Obj t66;
			c.f.fLine=37;
			proc_SIGNAPP(glob,ctx,1,1,(PCV[]){t65.cv()},t66.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			lsignApp=t66.get();
		}
		{
			Variant t67;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t67.cv(),lsignApp.cv(),Ksign.cv(),lapp.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t67.cv(),lstatuses.cv(),nullptr})) goto _0;
		}
		{
			Variant t68;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t68.cv(),lsignApp.cv(),Karchive.cv(),lapp.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t68.cv(),lstatus.cv(),nullptr})) goto _0;
		}
		{
			Variant t69;
			c.f.fLine=43;
			if (g->GetMember(ctx,lstatus.cv(),Ksuccess.cv(),t69.cv())) goto _0;
			Bool t70;
			if (!g->GetValue(ctx,(PCV[]){t70.cv(),t69.cv(),nullptr})) goto _0;
			if (!(t70.get())) goto _3;
		}
		{
			Variant t71;
			c.f.fLine=44;
			if (g->GetMember(ctx,lstatus.cv(),Kfile.cv(),t71.cv())) goto _0;
			Variant t72;
			if (g->Call(ctx,(PCV[]){t72.cv(),lsignApp.cv(),Knotarize.cv(),t71.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t72.cv(),lstatus.cv(),nullptr})) goto _0;
		}
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
