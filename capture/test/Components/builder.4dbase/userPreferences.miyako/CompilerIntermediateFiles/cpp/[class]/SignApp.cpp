extern Txt K;
extern Txt KCONST;
extern Txt KENVIRONMENT;
extern Txt KFORCE;
extern Txt KInstallPath;
extern Txt KMECAB;
extern Txt KNO__OPTIONS;
extern Txt KREMOVE;
extern Txt K_2Edmg;
extern Txt KarchiveFormat;
extern Txt KascProvider;
extern Txt KcleanFirst;
extern Txt Kcom_2E4D_2E;
extern Txt KdeleteTempFiles;
extern Txt Kdestination;
extern Txt Kentitlements;
extern Txt KfindIdentity;
extern Txt Kforce;
extern Txt Kidentity;
extern Txt Klength;
extern Txt Kmecab;
extern Txt Kname;
extern Txt Kname_20_3D_3D_20_3A1;
extern Txt Koptions;
extern Txt Kpassword;
extern Txt Kplist;
extern Txt KprimaryBundleId;
extern Txt Kquery;
extern Txt Kremove;
extern Txt KremovePHP;
extern Txt KsetXcodePath;
extern Txt KsignApp;
extern Txt KsignComponents;
extern Txt KsignContents;
extern Txt KsignDatabase;
extern Txt KsignFrameworks;
extern Txt KsignHelpers;
extern Txt KsignMecab;
extern Txt KsignMobile;
extern Txt KsignPHP;
extern Txt KsignPlugins;
extern Txt KsignSASLPlugins;
extern Txt KsignUpdater;
extern Txt KsigningIdentity;
extern Txt Kusername;
extern Txt KversionID;
extern Txt k0_7UXXs8K0A;
extern Txt k7hR5$eCsG70;
extern Txt kAgif63ugXA8;
extern Txt kC0TqfYYvwvg;
extern Txt kNRMliVZpVn8;
extern Txt kh_yTjKon6Dk;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_3Aconstructor[];
void proc_SignApp_3Aconstructor( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_3Aconstructor);
	if (!ctx->doingAbort) try {
		Variant lidentity;
		{
			Variant t0;
			t0.setNull();
			Bool t1;
			c.f.fLine=2;
			if (g->OperationOnAny(ctx,7,Parm<Obj>(inParams,inNbParam,1).cv(),t0.cv(),t1.cv())) goto _0;
			if (!(t1.get())) goto _2;
		}
		{
			Obj t2;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1470)) goto _0;
			Variant t3;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kusername.cv(),t3.cv())) goto _0;
			if (g->SetMember(ctx,t2.cv(),Kusername.cv(),t3.cv())) goto _0;
		}
		{
			Obj t4;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1470)) goto _0;
			Variant t5;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpassword.cv(),t5.cv())) goto _0;
			if (g->SetMember(ctx,t4.cv(),Kpassword.cv(),t5.cv())) goto _0;
		}
		{
			Obj t6;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,1470)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KascProvider.cv(),t7.cv())) goto _0;
			if (g->SetMember(ctx,t6.cv(),KascProvider.cv(),t7.cv())) goto _0;
		}
		{
			Obj t8;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			if (g->SetMember(ctx,t8.cv(),KarchiveFormat.cv(),K_2Edmg.cv())) goto _0;
		}
		{
			Obj t9;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1470)) goto _0;
			if (g->SetMember(ctx,t9.cv(),KInstallPath.cv(),K.cv())) goto _0;
		}
		{
			Obj t10;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1470)) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),KfindIdentity.cv()},2,1498)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t10.cv(),Kidentity.cv(),t12.cv())) goto _0;
		}
		{
			Obj t13;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1470)) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),Kidentity.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),Klength.cv(),t15.cv())) goto _0;
			Bool t16;
			if (g->OperationOnAny(ctx,7,t15.cv(),Num(0).cv(),t16.cv())) goto _0;
			if (!(t16.get())) goto _3;
		}
		{
			Obj t17;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t17.cv()},0,1470)) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),Kidentity.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),t18.cv(),Kquery.cv(),Kname_20_3D_3D_20_3A1.cv(),kAgif63ugXA8.cv()},4,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t19.cv(),lidentity.cv(),nullptr})) goto _0;
		}
		{
			Variant t20;
			c.f.fLine=16;
			if (g->GetMember(ctx,lidentity.cv(),Klength.cv(),t20.cv())) goto _0;
			Bool t21;
			if (g->OperationOnAny(ctx,7,t20.cv(),Num(0).cv(),t21.cv())) goto _0;
			if (!(t21.get())) goto _4;
		}
		{
			Obj t22;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t22.cv()},0,1470)) goto _0;
			Variant t23;
			if (g->GetMember(ctx,lidentity.cv(),Long(0).cv(),t23.cv())) goto _0;
			Variant t24;
			if (g->GetMember(ctx,t23.cv(),Kname.cv(),t24.cv())) goto _0;
			if (g->SetMember(ctx,t22.cv(),KsigningIdentity.cv(),t24.cv())) goto _0;
		}
_4:
_3:
		{
			Obj t25;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t25.cv()},0,1470)) goto _0;
			Txt t26;
			if (g->Call(ctx,(PCV[]){t26.cv()},0,486)) goto _0;
			g->Check(ctx);
			Obj t27;
			if (g->Call(ctx,(PCV[]){t27.cv(),t26.cv(),Long(1).cv()},2,1567)) goto _0;
			if (g->SetMember(ctx,t25.cv(),Kdestination.cv(),t27.cv())) goto _0;
		}
		{
			Obj t28;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t28.cv()},0,1470)) goto _0;
			Obj t29;
			if (g->Call(ctx,(PCV[]){t29.cv()},0,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t28.cv(),KENVIRONMENT.cv(),t29.cv())) goto _0;
		}
		{
			Obj t30;
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){t30.cv()},0,1470)) goto _0;
			Obj t31;
			if (g->Call(ctx,(PCV[]){t31.cv()},0,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t30.cv(),KCONST.cv(),t31.cv())) goto _0;
		}
		{
			Obj t32;
			c.f.fLine=30;
			if (g->Call(ctx,(PCV[]){t32.cv()},0,1470)) goto _0;
			Variant t33;
			if (g->GetMember(ctx,t32.cv(),KCONST.cv(),t33.cv())) goto _0;
			Bool t34;
			t34=true;
			Bool t35;
			t35=t34.get();
			Obj t36;
			if (g->Call(ctx,(PCV[]){t36.cv(),Kforce.cv(),t35.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t33.cv(),KFORCE.cv(),t36.cv())) goto _0;
		}
		{
			Obj t37;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t37.cv()},0,1470)) goto _0;
			Variant t38;
			if (g->GetMember(ctx,t37.cv(),KCONST.cv(),t38.cv())) goto _0;
			Bool t39;
			t39=true;
			Bool t40;
			t40=t39.get();
			Obj t41;
			if (g->Call(ctx,(PCV[]){t41.cv(),Kremove.cv(),t40.cv()},2,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t38.cv(),KREMOVE.cv(),t41.cv())) goto _0;
		}
		{
			Obj t42;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t42.cv()},0,1470)) goto _0;
			Variant t43;
			if (g->GetMember(ctx,t42.cv(),KCONST.cv(),t43.cv())) goto _0;
			Bool t44;
			t44=true;
			Bool t45;
			t45=true;
			Bool t46;
			t46=t45.get();
			Bool t47;
			t47=t44.get();
			Obj t48;
			if (g->Call(ctx,(PCV[]){t48.cv(),Kforce.cv(),t47.cv(),Kmecab.cv(),t46.cv()},4,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t43.cv(),KMECAB.cv(),t48.cv())) goto _0;
		}
		{
			Obj t49;
			c.f.fLine=34;
			if (g->Call(ctx,(PCV[]){t49.cv()},0,1470)) goto _0;
			Variant t50;
			if (g->GetMember(ctx,t49.cv(),KCONST.cv(),t50.cv())) goto _0;
			Bool t51;
			t51=true;
			Bool t52;
			t52=t51.get();
			if (g->SetMember(ctx,t50.cv(),kC0TqfYYvwvg.cv(),t52.cv())) goto _0;
		}
		{
			Obj t53;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t53.cv()},0,1470)) goto _0;
			Variant t54;
			if (g->GetMember(ctx,t53.cv(),KCONST.cv(),t54.cv())) goto _0;
			Bool t55;
			t55=false;
			Bool t56;
			t56=t55.get();
			if (g->SetMember(ctx,t54.cv(),kvxjhw4AnKOk.cv(),t56.cv())) goto _0;
		}
		{
			Obj t57;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t57.cv()},0,1470)) goto _0;
			Variant t58;
			if (g->GetMember(ctx,t57.cv(),KCONST.cv(),t58.cv())) goto _0;
			Variant t59;
			t59.setNull();
			if (g->SetMember(ctx,t58.cv(),KNO__OPTIONS.cv(),t59.cv())) goto _0;
		}
		{
			Obj t60;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t60.cv()},0,1470)) goto _0;
			Txt t61;
			if (g->Call(ctx,(PCV[]){t61.cv()},0,1066)) goto _0;
			g->Check(ctx);
			Txt t62;
			if (g->Call(ctx,(PCV[]){t62.cv(),t61.cv()},1,14)) goto _0;
			if (g->SetMember(ctx,t60.cv(),KversionID.cv(),t62.cv())) goto _0;
		}
		{
			Obj t63;
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){t63.cv()},0,1470)) goto _0;
			Obj t64;
			if (g->Call(ctx,(PCV[]){t64.cv()},0,1470)) goto _0;
			Variant t65;
			if (g->GetMember(ctx,t64.cv(),KversionID.cv(),t65.cv())) goto _0;
			Variant t66;
			if (g->OperationOnAny(ctx,0,Kcom_2E4D_2E.cv(),t65.cv(),t66.cv())) goto _0;
			if (g->SetMember(ctx,t63.cv(),KprimaryBundleId.cv(),t66.cv())) goto _0;
		}
		{
			Obj t67;
			c.f.fLine=42;
			if (g->Call(ctx,(PCV[]){t67.cv()},0,1470)) goto _0;
			Obj t68;
			if (g->Call(ctx,(PCV[]){t68.cv()},0,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t67.cv(),Kentitlements.cv(),t68.cv())) goto _0;
		}
		{
			Obj t69;
			c.f.fLine=43;
			if (g->Call(ctx,(PCV[]){t69.cv()},0,1470)) goto _0;
			Obj t70;
			if (g->Call(ctx,(PCV[]){t70.cv()},0,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t69.cv(),Kplist.cv(),t70.cv())) goto _0;
		}
		{
			Long t71;
			t71=inNbExplicitParam;
			if (1>=t71.get()) goto _5;
		}
		{
			Bool t73;
			c.f.fLine=46;
			if (g->Call(ctx,(PCV[]){t73.cv(),Parm<Obj>(inParams,inNbParam,2).cv()},1,1297)) goto _0;
			g->Check(ctx);
			Bool t74;
			t74=t73.get();
			Bool t75;
			t75=!(t74.get());
			if (!(t75.get())) goto _6;
		}
		{
			Obj t76;
			c.f.fLine=47;
			if (g->Call(ctx,(PCV[]){t76.cv()},0,1470)) goto _0;
			if (g->SetMember(ctx,t76.cv(),Kplist.cv(),Parm<Obj>(inParams,inNbParam,2).cv())) goto _0;
		}
_6:
_5:
		{
			Obj t77;
			c.f.fLine=51;
			if (g->Call(ctx,(PCV[]){t77.cv()},0,1470)) goto _0;
			Obj t78;
			if (g->Call(ctx,(PCV[]){t78.cv()},0,1471)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,t77.cv(),Koptions.cv(),t78.cv())) goto _0;
		}
		{
			Obj t79;
			c.f.fLine=53;
			if (g->Call(ctx,(PCV[]){t79.cv()},0,1470)) goto _0;
			Variant t80;
			if (g->GetMember(ctx,t79.cv(),Koptions.cv(),t80.cv())) goto _0;
			Bool t81;
			t81=true;
			Bool t82;
			t82=t81.get();
			if (g->SetMember(ctx,t80.cv(),KsignApp.cv(),t82.cv())) goto _0;
		}
		{
			Obj t83;
			c.f.fLine=54;
			if (g->Call(ctx,(PCV[]){t83.cv()},0,1470)) goto _0;
			Variant t84;
			if (g->GetMember(ctx,t83.cv(),Koptions.cv(),t84.cv())) goto _0;
			Bool t85;
			t85=true;
			Bool t86;
			t86=t85.get();
			if (g->SetMember(ctx,t84.cv(),kNRMliVZpVn8.cv(),t86.cv())) goto _0;
		}
		{
			Obj t87;
			c.f.fLine=57;
			if (g->Call(ctx,(PCV[]){t87.cv()},0,1470)) goto _0;
			Variant t88;
			if (g->GetMember(ctx,t87.cv(),Koptions.cv(),t88.cv())) goto _0;
			Bool t89;
			t89=false;
			Bool t90;
			t90=t89.get();
			if (g->SetMember(ctx,t88.cv(),KsignFrameworks.cv(),t90.cv())) goto _0;
		}
		{
			Obj t91;
			c.f.fLine=58;
			if (g->Call(ctx,(PCV[]){t91.cv()},0,1470)) goto _0;
			Variant t92;
			if (g->GetMember(ctx,t91.cv(),Koptions.cv(),t92.cv())) goto _0;
			Bool t93;
			t93=false;
			Bool t94;
			t94=t93.get();
			if (g->SetMember(ctx,t92.cv(),k7hR5$eCsG70.cv(),t94.cv())) goto _0;
		}
		{
			Obj t95;
			c.f.fLine=60;
			if (g->Call(ctx,(PCV[]){t95.cv()},0,1470)) goto _0;
			Variant t96;
			if (g->GetMember(ctx,t95.cv(),Koptions.cv(),t96.cv())) goto _0;
			Bool t97;
			t97=true;
			Bool t98;
			t98=t97.get();
			if (g->SetMember(ctx,t96.cv(),KsignPlugins.cv(),t98.cv())) goto _0;
		}
		{
			Obj t99;
			c.f.fLine=61;
			if (g->Call(ctx,(PCV[]){t99.cv()},0,1470)) goto _0;
			Variant t100;
			if (g->GetMember(ctx,t99.cv(),Koptions.cv(),t100.cv())) goto _0;
			Bool t101;
			t101=true;
			Bool t102;
			t102=t101.get();
			if (g->SetMember(ctx,t100.cv(),KsignSASLPlugins.cv(),t102.cv())) goto _0;
		}
		{
			Obj t103;
			c.f.fLine=62;
			if (g->Call(ctx,(PCV[]){t103.cv()},0,1470)) goto _0;
			Variant t104;
			if (g->GetMember(ctx,t103.cv(),Koptions.cv(),t104.cv())) goto _0;
			Bool t105;
			t105=true;
			Bool t106;
			t106=t105.get();
			if (g->SetMember(ctx,t104.cv(),KsignPHP.cv(),t106.cv())) goto _0;
		}
		{
			Obj t107;
			c.f.fLine=63;
			if (g->Call(ctx,(PCV[]){t107.cv()},0,1470)) goto _0;
			Variant t108;
			if (g->GetMember(ctx,t107.cv(),Koptions.cv(),t108.cv())) goto _0;
			Bool t109;
			t109=true;
			Bool t110;
			t110=t109.get();
			if (g->SetMember(ctx,t108.cv(),KsignHelpers.cv(),t110.cv())) goto _0;
		}
		{
			Obj t111;
			c.f.fLine=64;
			if (g->Call(ctx,(PCV[]){t111.cv()},0,1470)) goto _0;
			Variant t112;
			if (g->GetMember(ctx,t111.cv(),Koptions.cv(),t112.cv())) goto _0;
			Bool t113;
			t113=true;
			Bool t114;
			t114=t113.get();
			if (g->SetMember(ctx,t112.cv(),KsignUpdater.cv(),t114.cv())) goto _0;
		}
		{
			Obj t115;
			c.f.fLine=65;
			if (g->Call(ctx,(PCV[]){t115.cv()},0,1470)) goto _0;
			Variant t116;
			if (g->GetMember(ctx,t115.cv(),Koptions.cv(),t116.cv())) goto _0;
			Bool t117;
			t117=true;
			Bool t118;
			t118=t117.get();
			if (g->SetMember(ctx,t116.cv(),KsignMobile.cv(),t118.cv())) goto _0;
		}
		{
			Obj t119;
			c.f.fLine=66;
			if (g->Call(ctx,(PCV[]){t119.cv()},0,1470)) goto _0;
			Variant t120;
			if (g->GetMember(ctx,t119.cv(),Koptions.cv(),t120.cv())) goto _0;
			Bool t121;
			t121=true;
			Bool t122;
			t122=t121.get();
			if (g->SetMember(ctx,t120.cv(),KsignMecab.cv(),t122.cv())) goto _0;
		}
		{
			Obj t123;
			c.f.fLine=67;
			if (g->Call(ctx,(PCV[]){t123.cv()},0,1470)) goto _0;
			Variant t124;
			if (g->GetMember(ctx,t123.cv(),Koptions.cv(),t124.cv())) goto _0;
			Bool t125;
			t125=true;
			Bool t126;
			t126=t125.get();
			if (g->SetMember(ctx,t124.cv(),KsignContents.cv(),t126.cv())) goto _0;
		}
		{
			Obj t127;
			c.f.fLine=68;
			if (g->Call(ctx,(PCV[]){t127.cv()},0,1470)) goto _0;
			Variant t128;
			if (g->GetMember(ctx,t127.cv(),Koptions.cv(),t128.cv())) goto _0;
			Bool t129;
			t129=true;
			Bool t130;
			t130=t129.get();
			if (g->SetMember(ctx,t128.cv(),KsignComponents.cv(),t130.cv())) goto _0;
		}
		{
			Obj t131;
			c.f.fLine=69;
			if (g->Call(ctx,(PCV[]){t131.cv()},0,1470)) goto _0;
			Variant t132;
			if (g->GetMember(ctx,t131.cv(),Koptions.cv(),t132.cv())) goto _0;
			Bool t133;
			t133=true;
			Bool t134;
			t134=t133.get();
			if (g->SetMember(ctx,t132.cv(),KsignDatabase.cv(),t134.cv())) goto _0;
		}
		{
			Obj t135;
			c.f.fLine=71;
			if (g->Call(ctx,(PCV[]){t135.cv()},0,1470)) goto _0;
			Variant t136;
			if (g->GetMember(ctx,t135.cv(),Koptions.cv(),t136.cv())) goto _0;
			Bool t137;
			t137=true;
			Bool t138;
			t138=t137.get();
			if (g->SetMember(ctx,t136.cv(),KdeleteTempFiles.cv(),t138.cv())) goto _0;
		}
		{
			Obj t139;
			c.f.fLine=72;
			if (g->Call(ctx,(PCV[]){t139.cv()},0,1470)) goto _0;
			Variant t140;
			if (g->GetMember(ctx,t139.cv(),Koptions.cv(),t140.cv())) goto _0;
			Bool t141;
			t141=true;
			Bool t142;
			t142=t141.get();
			if (g->SetMember(ctx,t140.cv(),KcleanFirst.cv(),t142.cv())) goto _0;
		}
		{
			Obj t143;
			c.f.fLine=73;
			if (g->Call(ctx,(PCV[]){t143.cv()},0,1470)) goto _0;
			Variant t144;
			if (g->GetMember(ctx,t143.cv(),Koptions.cv(),t144.cv())) goto _0;
			Bool t145;
			t145=false;
			Bool t146;
			t146=t145.get();
			if (g->SetMember(ctx,t144.cv(),KremovePHP.cv(),t146.cv())) goto _0;
		}
		{
			Obj t147;
			c.f.fLine=74;
			if (g->Call(ctx,(PCV[]){t147.cv()},0,1470)) goto _0;
			Variant t148;
			if (g->GetMember(ctx,t147.cv(),Koptions.cv(),t148.cv())) goto _0;
			Bool t149;
			t149=false;
			Bool t150;
			t150=t149.get();
			if (g->SetMember(ctx,t148.cv(),kh_yTjKon6Dk.cv(),t150.cv())) goto _0;
		}
		{
			Obj t151;
			c.f.fLine=75;
			if (g->Call(ctx,(PCV[]){t151.cv()},0,1470)) goto _0;
			Variant t152;
			if (g->GetMember(ctx,t151.cv(),Koptions.cv(),t152.cv())) goto _0;
			Bool t153;
			t153=true;
			Bool t154;
			t154=t153.get();
			if (g->SetMember(ctx,t152.cv(),k0_7UXXs8K0A.cv(),t154.cv())) goto _0;
		}
		{
			Obj t155;
			c.f.fLine=86;
			if (g->Call(ctx,(PCV[]){t155.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t155.cv(),KsetXcodePath.cv()},2,1500)) goto _0;
			g->Check(ctx);
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KFolder;
extern Txt K__removePHP;
extern Txt K__signApp;
extern Txt K__signBin;
extern Txt K__signComponents;
extern Txt K__signContents;
extern Txt K__signDatabase;
extern Txt K__signFrameworks;
extern Txt K__signHelpers;
extern Txt K__signMecab;
extern Txt K__signMobile;
extern Txt K__signPHP;
extern Txt K__signPlugins;
extern Txt K__signUpdater;
extern Txt KcleanFirst;
extern Txt KdeleteTempFiles;
extern Txt Kexists;
extern Txt Koptions;
extern Txt KremovePHP;
extern Txt KsignApp;
extern Txt KsignComponents;
extern Txt KsignContents;
extern Txt KsignDatabase;
extern Txt KsignFrameworks;
extern Txt KsignHelpers;
extern Txt KsignMecab;
extern Txt KsignMobile;
extern Txt KsignPHP;
extern Txt KsignPlugins;
extern Txt KsignSASLPlugins;
extern Txt KsignUpdater;
extern Txt KsigningIdentity;
extern Txt k0_7UXXs8K0A;
extern Txt k0glzxCw28F4;
extern Txt k7hR5$eCsG70;
extern Txt kHrkqHZS0kbg;
extern Txt kIIhdYH5AUBA;
extern Txt kImAy1x0iBU8;
extern Txt kNRMliVZpVn8;
extern Txt kcT5yqDCh$SI;
extern Txt kxEx1PP$uzAk;
extern unsigned char D_proc_SignApp_2Esign[];
void proc_SignApp_2Esign( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2Esign);
	if (!ctx->doingAbort) try {
		new ( outResult) Col();
		{
			Bool t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1572)) goto _0;
			if (!(t0.get())) goto _2;
		}
		{
			Obj t1;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1709)) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),KFolder.cv(),t2.cv())) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			Bool t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t3.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t4.get())) goto _3;
		}
		{
			Variant t5;
			c.f.fLine=4;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kexists.cv(),t5.cv())) goto _0;
			Bool t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			if (!(t6.get())) goto _4;
		}
		{
			Obj t7;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1470)) goto _0;
			Variant t8;
			if (g->GetMember(ctx,t7.cv(),KsigningIdentity.cv(),t8.cv())) goto _0;
			Variant t9;
			t9.setNull();
			Bool t10;
			if (g->OperationOnAny(ctx,7,t8.cv(),t9.cv(),t10.cv())) goto _0;
			if (!(t10.get())) goto _5;
		}
		{
			Col t11;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1472)) goto _0;
			g->Check(ctx);
			Res<Col>(outResult)=t11.get();
		}
		{
			Obj t12;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1470)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),Koptions.cv(),t13.cv())) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KsignApp.cv(),t14.cv())) goto _0;
			Bool t15;
			if (!g->GetValue(ctx,(PCV[]){t15.cv(),t14.cv(),nullptr})) goto _0;
			if (!(t15.get())) goto _6;
		}
		{
			Obj t16;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t16.cv()},0,1470)) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),Koptions.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),KdeleteTempFiles.cv(),t18.cv())) goto _0;
			Bool t19;
			if (!g->GetValue(ctx,(PCV[]){t19.cv(),t18.cv(),nullptr})) goto _0;
			if (!(t19.get())) goto _7;
		}
		{
			Obj t20;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t20.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t20.cv(),kHrkqHZS0kbg.cv(),Parm<Obj>(inParams,inNbParam,1).cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
_7:
		{
			Obj t21;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1470)) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),Koptions.cv(),t22.cv())) goto _0;
			Variant t23;
			if (g->GetMember(ctx,t22.cv(),KcleanFirst.cv(),t23.cv())) goto _0;
			Bool t24;
			if (!g->GetValue(ctx,(PCV[]){t24.cv(),t23.cv(),nullptr})) goto _0;
			if (!(t24.get())) goto _8;
		}
		{
			Obj t25;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t25.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t25.cv(),kxEx1PP$uzAk.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_8:
		{
			Obj t26;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t26.cv()},0,1470)) goto _0;
			Variant t27;
			if (g->GetMember(ctx,t26.cv(),Koptions.cv(),t27.cv())) goto _0;
			Variant t28;
			if (g->GetMember(ctx,t27.cv(),KsignHelpers.cv(),t28.cv())) goto _0;
			Bool t29;
			if (!g->GetValue(ctx,(PCV[]){t29.cv(),t28.cv(),nullptr})) goto _0;
			if (!(t29.get())) goto _9;
		}
		{
			Obj t30;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t30.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t30.cv(),K__signHelpers.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_9:
		{
			Obj t31;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t31.cv()},0,1470)) goto _0;
			Variant t32;
			if (g->GetMember(ctx,t31.cv(),Koptions.cv(),t32.cv())) goto _0;
			Variant t33;
			if (g->GetMember(ctx,t32.cv(),kNRMliVZpVn8.cv(),t33.cv())) goto _0;
			Bool t34;
			if (!g->GetValue(ctx,(PCV[]){t34.cv(),t33.cv(),nullptr})) goto _0;
			if (!(t34.get())) goto _10;
		}
		{
			Obj t35;
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){t35.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t35.cv(),kIIhdYH5AUBA.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_10:
		{
			Obj t36;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t36.cv()},0,1470)) goto _0;
			Variant t37;
			if (g->GetMember(ctx,t36.cv(),Koptions.cv(),t37.cv())) goto _0;
			Variant t38;
			if (g->GetMember(ctx,t37.cv(),KsignUpdater.cv(),t38.cv())) goto _0;
			Bool t39;
			if (!g->GetValue(ctx,(PCV[]){t39.cv(),t38.cv(),nullptr})) goto _0;
			if (!(t39.get())) goto _11;
		}
		{
			Obj t40;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t40.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t40.cv(),K__signUpdater.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_11:
		{
			Obj t41;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t41.cv()},0,1470)) goto _0;
			Variant t42;
			if (g->GetMember(ctx,t41.cv(),Koptions.cv(),t42.cv())) goto _0;
			Variant t43;
			if (g->GetMember(ctx,t42.cv(),KsignFrameworks.cv(),t43.cv())) goto _0;
			Bool t44;
			if (!g->GetValue(ctx,(PCV[]){t44.cv(),t43.cv(),nullptr})) goto _0;
			if (!(t44.get())) goto _12;
		}
		{
			Obj t45;
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){t45.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t45.cv(),K__signFrameworks.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_12:
		{
			Obj t46;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t46.cv()},0,1470)) goto _0;
			Variant t47;
			if (g->GetMember(ctx,t46.cv(),Koptions.cv(),t47.cv())) goto _0;
			Variant t48;
			if (g->GetMember(ctx,t47.cv(),KsignMobile.cv(),t48.cv())) goto _0;
			Bool t49;
			if (!g->GetValue(ctx,(PCV[]){t49.cv(),t48.cv(),nullptr})) goto _0;
			if (!(t49.get())) goto _13;
		}
		{
			Obj t50;
			c.f.fLine=36;
			if (g->Call(ctx,(PCV[]){t50.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t50.cv(),K__signMobile.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_13:
		{
			Obj t51;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t51.cv()},0,1470)) goto _0;
			Variant t52;
			if (g->GetMember(ctx,t51.cv(),Koptions.cv(),t52.cv())) goto _0;
			Variant t53;
			if (g->GetMember(ctx,t52.cv(),k7hR5$eCsG70.cv(),t53.cv())) goto _0;
			Bool t54;
			if (!g->GetValue(ctx,(PCV[]){t54.cv(),t53.cv(),nullptr})) goto _0;
			if (!(t54.get())) goto _14;
		}
		{
			Obj t55;
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){t55.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t55.cv(),kImAy1x0iBU8.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_14:
		{
			Obj t56;
			c.f.fLine=43;
			if (g->Call(ctx,(PCV[]){t56.cv()},0,1470)) goto _0;
			Variant t57;
			if (g->GetMember(ctx,t56.cv(),Koptions.cv(),t57.cv())) goto _0;
			Variant t58;
			if (g->GetMember(ctx,t57.cv(),k0_7UXXs8K0A.cv(),t58.cv())) goto _0;
			Bool t59;
			if (!g->GetValue(ctx,(PCV[]){t59.cv(),t58.cv(),nullptr})) goto _0;
			if (!(t59.get())) goto _15;
		}
		{
			Obj t60;
			c.f.fLine=44;
			if (g->Call(ctx,(PCV[]){t60.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t60.cv(),k0glzxCw28F4.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_15:
		{
			Obj t61;
			c.f.fLine=47;
			if (g->Call(ctx,(PCV[]){t61.cv()},0,1470)) goto _0;
			Variant t62;
			if (g->GetMember(ctx,t61.cv(),Koptions.cv(),t62.cv())) goto _0;
			Variant t63;
			if (g->GetMember(ctx,t62.cv(),KsignPlugins.cv(),t63.cv())) goto _0;
			Bool t64;
			if (!g->GetValue(ctx,(PCV[]){t64.cv(),t63.cv(),nullptr})) goto _0;
			if (!(t64.get())) goto _16;
		}
		{
			Obj t65;
			c.f.fLine=48;
			if (g->Call(ctx,(PCV[]){t65.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t65.cv(),K__signPlugins.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_16:
		{
			Obj t66;
			c.f.fLine=51;
			if (g->Call(ctx,(PCV[]){t66.cv()},0,1470)) goto _0;
			Variant t67;
			if (g->GetMember(ctx,t66.cv(),Koptions.cv(),t67.cv())) goto _0;
			Variant t68;
			if (g->GetMember(ctx,t67.cv(),KsignComponents.cv(),t68.cv())) goto _0;
			Bool t69;
			if (!g->GetValue(ctx,(PCV[]){t69.cv(),t68.cv(),nullptr})) goto _0;
			if (!(t69.get())) goto _17;
		}
		{
			Obj t70;
			c.f.fLine=52;
			if (g->Call(ctx,(PCV[]){t70.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t70.cv(),K__signComponents.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_17:
		{
			Obj t71;
			c.f.fLine=55;
			if (g->Call(ctx,(PCV[]){t71.cv()},0,1470)) goto _0;
			Variant t72;
			if (g->GetMember(ctx,t71.cv(),Koptions.cv(),t72.cv())) goto _0;
			Variant t73;
			if (g->GetMember(ctx,t72.cv(),KsignDatabase.cv(),t73.cv())) goto _0;
			Bool t74;
			if (!g->GetValue(ctx,(PCV[]){t74.cv(),t73.cv(),nullptr})) goto _0;
			if (!(t74.get())) goto _18;
		}
		{
			Obj t75;
			c.f.fLine=56;
			if (g->Call(ctx,(PCV[]){t75.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t75.cv(),K__signDatabase.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_18:
		{
			Obj t76;
			c.f.fLine=59;
			if (g->Call(ctx,(PCV[]){t76.cv()},0,1470)) goto _0;
			Variant t77;
			if (g->GetMember(ctx,t76.cv(),Koptions.cv(),t77.cv())) goto _0;
			Variant t78;
			if (g->GetMember(ctx,t77.cv(),KsignMecab.cv(),t78.cv())) goto _0;
			Bool t79;
			if (!g->GetValue(ctx,(PCV[]){t79.cv(),t78.cv(),nullptr})) goto _0;
			if (!(t79.get())) goto _19;
		}
		{
			Obj t80;
			c.f.fLine=60;
			if (g->Call(ctx,(PCV[]){t80.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t80.cv(),K__signMecab.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_19:
		{
			Obj t81;
			c.f.fLine=63;
			if (g->Call(ctx,(PCV[]){t81.cv()},0,1470)) goto _0;
			Variant t82;
			if (g->GetMember(ctx,t81.cv(),Koptions.cv(),t82.cv())) goto _0;
			Variant t83;
			if (g->GetMember(ctx,t82.cv(),KsignSASLPlugins.cv(),t83.cv())) goto _0;
			Bool t84;
			if (!g->GetValue(ctx,(PCV[]){t84.cv(),t83.cv(),nullptr})) goto _0;
			if (!(t84.get())) goto _20;
		}
		{
			Obj t85;
			c.f.fLine=64;
			if (g->Call(ctx,(PCV[]){t85.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t85.cv(),kcT5yqDCh$SI.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_20:
		{
			Obj t86;
			c.f.fLine=67;
			if (g->Call(ctx,(PCV[]){t86.cv()},0,1470)) goto _0;
			Variant t87;
			if (g->GetMember(ctx,t86.cv(),Koptions.cv(),t87.cv())) goto _0;
			Variant t88;
			if (g->GetMember(ctx,t87.cv(),KsignContents.cv(),t88.cv())) goto _0;
			Bool t89;
			if (!g->GetValue(ctx,(PCV[]){t89.cv(),t88.cv(),nullptr})) goto _0;
			if (!(t89.get())) goto _21;
		}
		{
			Obj t90;
			c.f.fLine=68;
			if (g->Call(ctx,(PCV[]){t90.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t90.cv(),K__signContents.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_21:
		{
			Obj t91;
			c.f.fLine=71;
			if (g->Call(ctx,(PCV[]){t91.cv()},0,1470)) goto _0;
			Variant t92;
			if (g->GetMember(ctx,t91.cv(),Koptions.cv(),t92.cv())) goto _0;
			Variant t93;
			if (g->GetMember(ctx,t92.cv(),KremovePHP.cv(),t93.cv())) goto _0;
			Bool t94;
			if (!g->GetValue(ctx,(PCV[]){t94.cv(),t93.cv(),nullptr})) goto _0;
			if (!(t94.get())) goto _22;
		}
		{
			Obj t95;
			c.f.fLine=72;
			if (g->Call(ctx,(PCV[]){t95.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t95.cv(),K__removePHP.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
		goto _23;
_22:
		{
			Obj t96;
			c.f.fLine=74;
			if (g->Call(ctx,(PCV[]){t96.cv()},0,1470)) goto _0;
			Variant t97;
			if (g->GetMember(ctx,t96.cv(),Koptions.cv(),t97.cv())) goto _0;
			Variant t98;
			if (g->GetMember(ctx,t97.cv(),KsignPHP.cv(),t98.cv())) goto _0;
			Bool t99;
			if (!g->GetValue(ctx,(PCV[]){t99.cv(),t98.cv(),nullptr})) goto _0;
			if (!(t99.get())) goto _24;
		}
		{
			Obj t100;
			c.f.fLine=75;
			if (g->Call(ctx,(PCV[]){t100.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t100.cv(),K__signPHP.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_24:
_23:
		{
			Obj t101;
			c.f.fLine=79;
			if (g->Call(ctx,(PCV[]){t101.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t101.cv(),K__signBin.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t102;
			c.f.fLine=81;
			if (g->Call(ctx,(PCV[]){t102.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t102.cv(),K__signApp.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Res<Col>(outResult).cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
_6:
_5:
_4:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K;
extern Txt KAccepted;
extern Txt KFile;
extern Txt KLogFileURL;
extern Txt KON__PARSE__ERROR;
extern Txt KRequestUUID;
extern Txt K__altool;
extern Txt K__staple;
extern Txt Kexists;
extern Txt Kfile;
extern Txt Kstatus;
extern Txt Ksuccess;
extern Txt k44qFMcS_Af0;
extern Txt kwz0u6uZbK7M;
extern unsigned char D_proc_SignApp_2Enotarize[];
void proc_SignApp_2Enotarize( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2Enotarize);
	if (!ctx->doingAbort) try {
		Num lstatusCode;
		Obj ljson;
		Txt lresponse;
		Bool lgotResult;
		new ( outResult) Obj();
		{
			Bool t0;
			t0=false;
			Bool t1;
			t1=false;
			Bool t2;
			t2=false;
			Bool t3;
			t3=t2.get();
			Bool t4;
			t4=t1.get();
			Bool t5;
			t5=t0.get();
			Obj t6;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t6.cv(),Ksuccess.cv(),t5.cv(),kwz0u6uZbK7M.cv(),t4.cv(),k44qFMcS_Af0.cv(),t3.cv()},6,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t6.get();
		}
		{
			Bool t7;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1572)) goto _0;
			if (!(t7.get())) goto _2;
		}
		{
			Obj t8;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1709)) goto _0;
			Variant t9;
			if (g->GetMember(ctx,t8.cv(),KFile.cv(),t9.cv())) goto _0;
			Obj t10;
			if (!g->GetValue(ctx,(PCV[]){t10.cv(),t9.cv(),nullptr})) goto _0;
			Bool t11;
			if (g->Call(ctx,(PCV[]){t11.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t10.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t11.get())) goto _3;
		}
		{
			Variant t12;
			c.f.fLine=6;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kexists.cv(),t12.cv())) goto _0;
			Bool t13;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),t12.cv(),nullptr})) goto _0;
			if (!(t13.get())) goto _4;
		}
		{
			Obj t14;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Obj t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),Kfile.cv(),Parm<Obj>(inParams,inNbParam,1).cv()},2,1471)) goto _0;
			g->Check(ctx);
			Variant t16;
			if (g->Call(ctx,(PCV[]){t16.cv(),t14.cv(),K__altool.cv(),t15.cv()},3,1498)) goto _0;
			Obj t17;
			if (!g->GetValue(ctx,(PCV[]){t17.cv(),t16.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t17.get();
		}
		{
			Bool t18;
			t18=false;
			lgotResult=t18.get();
		}
		{
			Variant t19;
			c.f.fLine=12;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t19.cv())) goto _0;
			Bool t20;
			if (!g->GetValue(ctx,(PCV[]){t20.cv(),t19.cv(),nullptr})) goto _0;
			if (!(t20.get())) goto _5;
		}
_6:
		{
			Obj t21;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1470)) goto _0;
			Variant t22;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KRequestUUID.cv(),t22.cv())) goto _0;
			Obj t23;
			if (g->Call(ctx,(PCV[]){t23.cv(),KRequestUUID.cv(),t22.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Variant t24;
			if (g->Call(ctx,(PCV[]){t24.cv(),t21.cv(),K__altool.cv(),t23.cv()},3,1498)) goto _0;
			Obj t25;
			if (!g->GetValue(ctx,(PCV[]){t25.cv(),t24.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t25.get();
		}
		{
			Variant t26;
			c.f.fLine=15;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t26.cv())) goto _0;
			Variant t27;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KLogFileURL.cv(),t27.cv())) goto _0;
			Variant t28;
			t28.setNull();
			Bool t29;
			if (g->OperationOnAny(ctx,7,t27.cv(),t28.cv(),t29.cv())) goto _0;
			Variant t30;
			if (g->OperationOnAny(ctx,8,t26.cv(),t29.cv(),t30.cv())) goto _0;
			Bool t31;
			if (!g->GetValue(ctx,(PCV[]){t31.cv(),t30.cv(),nullptr})) goto _0;
			if (!(t31.get())) goto _7;
		}
		{
			Bool t32;
			t32=true;
			lgotResult=t32.get();
		}
		{
			Variant t33;
			c.f.fLine=18;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KLogFileURL.cv(),t33.cv())) goto _0;
			Ref t34;
			t34.setLocalRef(ctx,lresponse.cv());
			Long t35;
			if (g->Call(ctx,(PCV[]){t35.cv(),t33.cv(),t34.cv()},2,1157)) goto _0;
			g->Check(ctx);
			lstatusCode=t35.get();
		}
		{
			Bool t37;
			t37=Equal(glob,200,lstatusCode.get());
			if (!(t37.get())) goto _8;
		}
		c.f.fLine=21;
		if (g->Call(ctx,(PCV[]){nullptr,KON__PARSE__ERROR.cv()},1,155)) goto _0;
		g->Check(ctx);
		{
			Variant t38;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t38.cv(),lresponse.cv(),Long(38).cv()},2,1218)) goto _0;
			g->Check(ctx);
			Obj t39;
			if (!g->GetValue(ctx,(PCV[]){t39.cv(),t38.cv(),nullptr})) goto _0;
			ljson=t39.get();
		}
		c.f.fLine=23;
		if (g->Call(ctx,(PCV[]){nullptr,K.cv()},1,155)) goto _0;
		g->Check(ctx);
		{
			Variant t40;
			c.f.fLine=24;
			if (g->GetMember(ctx,ljson.cv(),Kstatus.cv(),t40.cv())) goto _0;
			Bool t41;
			if (g->OperationOnAny(ctx,6,t40.cv(),KAccepted.cv(),t41.cv())) goto _0;
			Bool t42;
			t42=t41.get();
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),k44qFMcS_Af0.cv(),t42.cv())) goto _0;
		}
_8:
_7:
		{
			Bool t43;
			t43=lgotResult.get();
			Bool t44;
			t44=!(t43.get());
			if (!(t44.get())) goto _9;
		}
		{
			Long t45;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t45.cv()},0,322)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t45.cv(),Num(3600).cv()},2,323)) goto _0;
		}
_9:
		if (!(lgotResult.get())) goto _6;
		{
			Variant t46;
			c.f.fLine=32;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),k44qFMcS_Af0.cv(),t46.cv())) goto _0;
			Bool t47;
			if (!g->GetValue(ctx,(PCV[]){t47.cv(),t46.cv(),nullptr})) goto _0;
			if (!(t47.get())) goto _10;
		}
		{
			Obj t48;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t48.cv()},0,1470)) goto _0;
			Variant t49;
			if (g->Call(ctx,(PCV[]){t49.cv(),t48.cv(),K__staple.cv(),Parm<Obj>(inParams,inNbParam,1).cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t50;
			if (!g->GetValue(ctx,(PCV[]){t50.cv(),t49.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t50.get();
		}
		{
			Variant t51;
			c.f.fLine=34;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t51.cv())) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kwz0u6uZbK7M.cv(),t51.cv())) goto _0;
		}
_10:
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
extern Txt Kpath;
extern Txt Kstaple;
extern Txt Ksuccess;
extern Txt Kutf_2D8;
extern Txt k6Nsk9JOUrts;
extern Txt k8$iCHivjE6o;
extern Txt kZKmWsuJnk08;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2E__staple[];
void proc_SignApp_2E__staple( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__staple);
	if (!ctx->doingAbort) try {
		Long lpid;
		Blb lstdIn;
		Blb lstdOut;
		Blb lstdErr;
		new ( outResult) Obj();
		{
			Bool t0;
			t0=false;
			Bool t1;
			t1=t0.get();
			Obj t2;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t2.cv(),Ksuccess.cv(),t1.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t2.get();
		}
		c.f.fLine=7;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Variant t3;
			c.f.fLine=8;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t3.cv())) goto _0;
			Txt t4;
			if (!g->GetValue(ctx,(PCV[]){t4.cv(),t3.cv(),nullptr})) goto _0;
			Txt t5;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t4.cv()},t5.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t6;
			g->AddString(kZKmWsuJnk08.get(),t5.get(),t6.get());
			Ref t7;
			t7.setLocalRef(ctx,lpid.cv());
			Ref t8;
			t8.setLocalRef(ctx,lstdErr.cv());
			Ref t9;
			t9.setLocalRef(ctx,lstdOut.cv());
			Ref t10;
			t10.setLocalRef(ctx,lstdIn.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t6.cv(),t10.cv(),t9.cv(),t8.cv(),t7.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t11;
			t11.setLocalRef(ctx,lstdErr.cv());
			Long t12;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv()},1,605)) goto _0;
			if (0==t12.get()) goto _2;
		}
		{
			Ref t14;
			t14.setLocalRef(ctx,lstdErr.cv());
			Txt t15;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kstaple.cv(),t15.cv())) goto _0;
		}
		{
			Variant t16;
			c.f.fLine=12;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kstaple.cv(),t16.cv())) goto _0;
			Long t17;
			t17=1|2;
			Col t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),t16.cv(),K_0A.cv(),t17.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kstaple.cv(),t18.cv())) goto _0;
		}
		goto _3;
_2:
		{
			Ref t19;
			t19.setLocalRef(ctx,lstdOut.cv());
			Txt t20;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t20.cv(),t19.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kstaple.cv(),t20.cv())) goto _0;
		}
		{
			Variant t21;
			c.f.fLine=15;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kstaple.cv(),t21.cv())) goto _0;
			Bool t22;
			if (g->OperationOnAny(ctx,6,t21.cv(),k8$iCHivjE6o.cv(),t22.cv())) goto _0;
			Bool t23;
			t23=t22.get();
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t23.cv())) goto _0;
		}
		{
			Variant t24;
			c.f.fLine=16;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kstaple.cv(),t24.cv())) goto _0;
			Long t25;
			t25=1|2;
			Col t26;
			if (g->Call(ctx,(PCV[]){t26.cv(),t24.cv(),K_0A.cv(),t25.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kstaple.cv(),t26.cv())) goto _0;
		}
_3:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K;
extern Txt KDEVELOPER__DIR;
extern Txt KENVIRONMENT;
extern Txt KFile;
extern Txt KLogFile;
extern Txt KLogFileURL;
extern Txt KRequestUUID;
extern Txt KTRUE;
extern Txt K_0A;
extern Txt K_20_2D_2Dpassword_20;
extern Txt K_20_2D_2Dusername_20;
extern Txt K_28null_29;
extern Txt K__altool;
extern Txt KascProvider;
extern Txt Kfile;
extern Txt Khttps_3A_2F_2F_40;
extern Txt Kinfo;
extern Txt Kpassword;
extern Txt Kpath;
extern Txt KprimaryBundleId;
extern Txt Ksuccess;
extern Txt Kusername;
extern Txt Kutf_2D8;
extern Txt k2SINobGJxT0;
extern Txt k5uwS_DuRKPg;
extern Txt k6Nsk9JOUrts;
extern Txt kD3YcRK6zkzs;
extern Txt kRLotsr0$Cj0;
extern Txt kSUNG43haC9U;
extern Txt kX$2AgN669Jk;
extern Txt kX08djl7T5is;
extern Txt k_eokQUX820Y;
extern Txt kcp$ktTk7q6o;
extern Txt knZqCLZxfjxQ;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2E__altool[];
void proc_SignApp_2E__altool( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__altool);
	if (!ctx->doingAbort) try {
		Txt lcommand;
		Long li;
		Long lpid;
		Txt ljson;
		Txt linfo;
		Txt lkey;
		Blb lstdIn;
		Txt lDEVELOPER__DIR;
		Blb lstdOut;
		Blb lstdErr;
		Value_array_longint lpos;
		Value_array_longint llen;
		new ( outResult) Obj();
		{
			Bool t0;
			t0=false;
			Bool t1;
			t1=t0.get();
			Obj t2;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t2.cv(),Ksuccess.cv(),t1.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t2.get();
		}
		{
			Variant t3;
			c.f.fLine=5;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KRequestUUID.cv(),t3.cv())) goto _0;
			Long t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),t3.cv()},1,1509)) goto _0;
			Bool t5;
			t5=2==t4.get();
			if (!(t5.get())) goto _3;
		}
		{
			Variant t6;
			c.f.fLine=6;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KRequestUUID.cv(),t6.cv())) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KRequestUUID.cv(),t6.cv())) goto _0;
		}
		{
			Variant t7;
			c.f.fLine=7;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KRequestUUID.cv(),t7.cv())) goto _0;
			Variant t8;
			if (g->OperationOnAny(ctx,0,knZqCLZxfjxQ.cv(),t7.cv(),t8.cv())) goto _0;
			Txt t9;
			if (!g->GetValue(ctx,(PCV[]){t9.cv(),t8.cv(),nullptr})) goto _0;
			lcommand=t9.get();
		}
		goto _2;
_3:
		{
			Variant t10;
			c.f.fLine=8;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kfile.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1709)) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KFile.cv(),t12.cv())) goto _0;
			Obj t13;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),t12.cv(),nullptr})) goto _0;
			Obj t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t10.cv(),nullptr})) goto _0;
			Bool t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv(),t13.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t15.get())) goto _4;
		}
		{
			Variant t16;
			c.f.fLine=9;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kfile.cv(),t16.cv())) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),Kpath.cv(),t17.cv())) goto _0;
			Txt t18;
			if (!g->GetValue(ctx,(PCV[]){t18.cv(),t17.cv(),nullptr})) goto _0;
			Txt t19;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t18.cv()},t19.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(k5uwS_DuRKPg.get(),t19.get(),lcommand.get());
		}
		goto _2;
_4:
		lcommand=K.get();
_2:
		{
			Bool t21;
			t21=g->CompareString(ctx,lcommand.get(),K.get())!=0;
			if (!(t21.get())) goto _5;
		}
		{
			Obj t22;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t22.cv()},0,1470)) goto _0;
			Variant t23;
			if (g->GetMember(ctx,t22.cv(),KprimaryBundleId.cv(),t23.cv())) goto _0;
			Long t24;
			if (g->Call(ctx,(PCV[]){t24.cv(),t23.cv()},1,1509)) goto _0;
			Bool t25;
			t25=2==t24.get();
			if (!(t25.get())) goto _6;
		}
		{
			Txt t26;
			g->AddString(lcommand.get(),kX$2AgN669Jk.get(),t26.get());
			Obj t27;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t27.cv()},0,1470)) goto _0;
			Variant t28;
			if (g->GetMember(ctx,t27.cv(),KprimaryBundleId.cv(),t28.cv())) goto _0;
			Txt t29;
			if (!g->GetValue(ctx,(PCV[]){t29.cv(),t28.cv(),nullptr})) goto _0;
			Txt t30;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t29.cv()},t30.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t26.get(),t30.get(),lcommand.get());
		}
_6:
		{
			Obj t32;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t32.cv()},0,1470)) goto _0;
			Variant t33;
			if (g->GetMember(ctx,t32.cv(),KascProvider.cv(),t33.cv())) goto _0;
			Long t34;
			if (g->Call(ctx,(PCV[]){t34.cv(),t33.cv()},1,1509)) goto _0;
			Bool t35;
			t35=2==t34.get();
			if (!(t35.get())) goto _7;
		}
		{
			Txt t36;
			g->AddString(lcommand.get(),kcp$ktTk7q6o.get(),t36.get());
			Obj t37;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t37.cv()},0,1470)) goto _0;
			Variant t38;
			if (g->GetMember(ctx,t37.cv(),KascProvider.cv(),t38.cv())) goto _0;
			Txt t39;
			if (!g->GetValue(ctx,(PCV[]){t39.cv(),t38.cv(),nullptr})) goto _0;
			Txt t40;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t39.cv()},t40.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t36.get(),t40.get(),lcommand.get());
		}
_7:
		{
			Obj t42;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t42.cv()},0,1470)) goto _0;
			Variant t43;
			if (g->GetMember(ctx,t42.cv(),Kusername.cv(),t43.cv())) goto _0;
			Long t44;
			if (g->Call(ctx,(PCV[]){t44.cv(),t43.cv()},1,1509)) goto _0;
			Bool t45;
			t45=2==t44.get();
			if (!(t45.get())) goto _8;
		}
		{
			Txt t46;
			g->AddString(lcommand.get(),K_20_2D_2Dusername_20.get(),t46.get());
			Obj t47;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t47.cv()},0,1470)) goto _0;
			Variant t48;
			if (g->GetMember(ctx,t47.cv(),Kusername.cv(),t48.cv())) goto _0;
			Txt t49;
			if (!g->GetValue(ctx,(PCV[]){t49.cv(),t48.cv(),nullptr})) goto _0;
			Txt t50;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t49.cv()},t50.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t46.get(),t50.get(),lcommand.get());
		}
_8:
		{
			Obj t52;
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){t52.cv()},0,1470)) goto _0;
			Variant t53;
			if (g->GetMember(ctx,t52.cv(),Kpassword.cv(),t53.cv())) goto _0;
			Long t54;
			if (g->Call(ctx,(PCV[]){t54.cv(),t53.cv()},1,1509)) goto _0;
			Bool t55;
			t55=2==t54.get();
			if (!(t55.get())) goto _9;
		}
		{
			Txt t56;
			g->AddString(lcommand.get(),K_20_2D_2Dpassword_20.get(),t56.get());
			Obj t57;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t57.cv()},0,1470)) goto _0;
			Variant t58;
			if (g->GetMember(ctx,t57.cv(),Kpassword.cv(),t58.cv())) goto _0;
			Txt t59;
			if (!g->GetValue(ctx,(PCV[]){t59.cv(),t58.cv(),nullptr})) goto _0;
			Txt t60;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t59.cv()},t60.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t56.get(),t60.get(),lcommand.get());
		}
_9:
		{
			Obj t62;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t62.cv()},0,1470)) goto _0;
			Variant t63;
			if (g->GetMember(ctx,t62.cv(),KENVIRONMENT.cv(),t63.cv())) goto _0;
			Variant t64;
			if (g->GetMember(ctx,t63.cv(),KDEVELOPER__DIR.cv(),t64.cv())) goto _0;
			Variant t65;
			t65.setNull();
			Bool t66;
			if (g->OperationOnAny(ctx,7,t64.cv(),t65.cv(),t66.cv())) goto _0;
			if (!(t66.get())) goto _10;
		}
		{
			Obj t67;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t67.cv()},0,1470)) goto _0;
			Variant t68;
			if (g->GetMember(ctx,t67.cv(),KENVIRONMENT.cv(),t68.cv())) goto _0;
			Variant t69;
			if (g->GetMember(ctx,t68.cv(),KDEVELOPER__DIR.cv(),t69.cv())) goto _0;
			Txt t70;
			if (!g->GetValue(ctx,(PCV[]){t70.cv(),t69.cv(),nullptr})) goto _0;
			lDEVELOPER__DIR=t70.get();
		}
		c.f.fLine=30;
		if (g->Call(ctx,(PCV[]){nullptr,KDEVELOPER__DIR.cv(),lDEVELOPER__DIR.cv()},2,812)) goto _0;
		g->Check(ctx);
_10:
		c.f.fLine=36;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t71;
			t71.setLocalRef(ctx,lpid.cv());
			Ref t72;
			t72.setLocalRef(ctx,lstdErr.cv());
			Ref t73;
			t73.setLocalRef(ctx,lstdOut.cv());
			Ref t74;
			t74.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t74.cv(),t73.cv(),t72.cv(),t71.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t75;
			t75.setLocalRef(ctx,lstdErr.cv());
			Long t76;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t76.cv(),t75.cv()},1,605)) goto _0;
			if (0==t76.get()) goto _11;
		}
		{
			Ref t78;
			t78.setLocalRef(ctx,lstdErr.cv());
			Txt t79;
			c.f.fLine=42;
			if (g->Call(ctx,(PCV[]){t79.cv(),t78.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			linfo=t79.get();
		}
		{
			Long t80;
			t80=2|1;
			Col t81;
			c.f.fLine=43;
			if (g->Call(ctx,(PCV[]){t81.cv(),linfo.cv(),K_0A.cv(),t80.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kinfo.cv(),t81.cv())) goto _0;
		}
_11:
		{
			Ref t82;
			t82.setLocalRef(ctx,lstdOut.cv());
			Long t83;
			c.f.fLine=46;
			if (g->Call(ctx,(PCV[]){t83.cv(),t82.cv()},1,605)) goto _0;
			if (0==t83.get()) goto _12;
		}
		{
			Ref t85;
			t85.setLocalRef(ctx,lstdOut.cv());
			Txt t86;
			c.f.fLine=47;
			if (g->Call(ctx,(PCV[]){t86.cv(),t85.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			linfo=t86.get();
		}
		{
			Long t87;
			t87=2|1;
			Col t88;
			c.f.fLine=48;
			if (g->Call(ctx,(PCV[]){t88.cv(),linfo.cv(),K_0A.cv(),t87.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kinfo.cv(),t88.cv())) goto _0;
		}
_12:
		{
			Ref t89;
			t89.setLocalRef(ctx,lpos.cv());
			c.f.fLine=51;
			if (g->Call(ctx,(PCV[]){nullptr,t89.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t90;
			t90.setLocalRef(ctx,llen.cv());
			c.f.fLine=52;
			if (g->Call(ctx,(PCV[]){nullptr,t90.cv(),Long(0).cv()},2,221)) goto _0;
		}
		li=1;
		{
			Bool t91;
			t91=g->CompareString(ctx,linfo.get(),kRLotsr0$Cj0.get())==0;
			Bool t92;
			t92=t91.get();
			c.f.fLine=56;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t92.cv())) goto _0;
		}
		{
			Variant t93;
			c.f.fLine=58;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t93.cv())) goto _0;
			Bool t94;
			if (!g->GetValue(ctx,(PCV[]){t94.cv(),t93.cv(),nullptr})) goto _0;
			if (!(t94.get())) goto _13;
		}
_14:
		{
			Ref t95;
			t95.setLocalRef(ctx,llen.cv());
			Ref t96;
			t96.setLocalRef(ctx,lpos.cv());
			Bool t97;
			c.f.fLine=60;
			if (g->Call(ctx,(PCV[]){t97.cv(),k_eokQUX820Y.cv(),linfo.cv(),li.cv(),t96.cv(),t95.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t97.get())) goto _15;
		}
		{
			Long t98;
			t98=llen.arrayElem(1).get();
			Long t99;
			t99=lpos.arrayElem(1).get();
			Txt t100;
			c.f.fLine=61;
			if (g->Call(ctx,(PCV[]){t100.cv(),linfo.cv(),t99.cv(),t98.cv()},3,12)) goto _0;
			lkey=t100.get();
		}
		{
			Long t101;
			t101=llen.arrayElem(2).get();
			Long t102;
			t102=lpos.arrayElem(2).get();
			Txt t103;
			c.f.fLine=62;
			if (g->Call(ctx,(PCV[]){t103.cv(),linfo.cv(),t102.cv(),t101.cv()},3,12)) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),lkey.cv(),t103.cv())) goto _0;
		}
		{
			Variant t104;
			c.f.fLine=63;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),lkey.cv(),t104.cv())) goto _0;
			Bool t105;
			if (g->OperationOnAny(ctx,6,t104.cv(),K_28null_29.cv(),t105.cv())) goto _0;
			if (!(t105.get())) goto _16;
		}
		{
			Variant t106;
			t106.setNull();
			c.f.fLine=64;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),lkey.cv(),t106.cv())) goto _0;
		}
_16:
		li=lpos.arrayElem(2).get()+llen.arrayElem(2).get();
		goto _14;
_15:
		{
			Variant t108;
			c.f.fLine=68;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KRequestUUID.cv(),t108.cv())) goto _0;
			Variant t109;
			t109.setNull();
			Bool t110;
			if (g->OperationOnAny(ctx,7,t108.cv(),t109.cv(),t110.cv())) goto _0;
			if (!(t110.get())) goto _17;
		}
		{
			Variant t111;
			c.f.fLine=69;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KRequestUUID.cv(),t111.cv())) goto _0;
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KRequestUUID.cv(),t111.cv())) goto _0;
		}
_17:
		goto _18;
_13:
		{
			Bool t112;
			t112=g->CompareString(ctx,linfo.get(),kX08djl7T5is.get())==0;
			Bool t113;
			t113=t112.get();
			c.f.fLine=72;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t113.cv())) goto _0;
		}
		{
			Variant t114;
			c.f.fLine=73;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t114.cv())) goto _0;
			Bool t115;
			if (!g->GetValue(ctx,(PCV[]){t115.cv(),t114.cv(),nullptr})) goto _0;
			if (!(t115.get())) goto _19;
		}
_20:
		{
			Ref t116;
			t116.setLocalRef(ctx,llen.cv());
			Ref t117;
			t117.setLocalRef(ctx,lpos.cv());
			Bool t118;
			c.f.fLine=75;
			if (g->Call(ctx,(PCV[]){t118.cv(),k2SINobGJxT0.cv(),linfo.cv(),li.cv(),t117.cv(),t116.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t118.get())) goto _21;
		}
		{
			Long t119;
			t119=llen.arrayElem(1).get();
			Long t120;
			t120=lpos.arrayElem(1).get();
			Txt t121;
			c.f.fLine=76;
			if (g->Call(ctx,(PCV[]){t121.cv(),linfo.cv(),t120.cv(),t119.cv()},3,12)) goto _0;
			lkey=t121.get();
		}
		{
			Long t122;
			t122=llen.arrayElem(2).get();
			Long t123;
			t123=lpos.arrayElem(2).get();
			Txt t124;
			c.f.fLine=77;
			if (g->Call(ctx,(PCV[]){t124.cv(),linfo.cv(),t123.cv(),t122.cv()},3,12)) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),lkey.cv(),t124.cv())) goto _0;
		}
		{
			Variant t125;
			c.f.fLine=78;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),lkey.cv(),t125.cv())) goto _0;
			Bool t126;
			if (g->OperationOnAny(ctx,6,t125.cv(),K_28null_29.cv(),t126.cv())) goto _0;
			if (!(t126.get())) goto _22;
		}
		{
			Variant t127;
			t127.setNull();
			c.f.fLine=79;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),lkey.cv(),t127.cv())) goto _0;
		}
_22:
		li=lpos.arrayElem(2).get()+llen.arrayElem(2).get();
		goto _20;
_21:
		{
			Variant t129;
			c.f.fLine=83;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KLogFileURL.cv(),t129.cv())) goto _0;
			Variant t130;
			t130.setNull();
			Bool t131;
			if (g->OperationOnAny(ctx,7,t129.cv(),t130.cv(),t131.cv())) goto _0;
			if (!(t131.get())) goto _23;
		}
		{
			Variant t132;
			c.f.fLine=84;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KLogFileURL.cv(),t132.cv())) goto _0;
			Bool t133;
			if (g->OperationOnAny(ctx,6,t132.cv(),Khttps_3A_2F_2F_40.cv(),t133.cv())) goto _0;
			if (!(t133.get())) goto _24;
		}
		{
			Variant t134;
			c.f.fLine=85;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),KLogFileURL.cv(),t134.cv())) goto _0;
			Ref t135;
			t135.setLocalRef(ctx,lstdOut.cv());
			Long t136;
			if (g->Call(ctx,(PCV[]){t136.cv(),t134.cv(),t135.cv()},2,1157)) goto _0;
			g->Check(ctx);
			Bool t137;
			t137=200==t136.get();
			if (!(t137.get())) goto _25;
		}
		{
			Ref t138;
			t138.setLocalRef(ctx,lstdOut.cv());
			Txt t139;
			c.f.fLine=86;
			if (g->Call(ctx,(PCV[]){t139.cv(),t138.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			ljson=t139.get();
		}
		{
			Variant t140;
			c.f.fLine=87;
			if (g->Call(ctx,(PCV[]){t140.cv(),ljson.cv()},1,1218)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),KLogFile.cv(),t140.cv())) goto _0;
		}
_25:
_24:
_23:
		goto _26;
_19:
		{
			Ref t141;
			t141.setLocalRef(ctx,llen.cv());
			Ref t142;
			t142.setLocalRef(ctx,lpos.cv());
			Bool t143;
			c.f.fLine=93;
			if (g->Call(ctx,(PCV[]){t143.cv(),kSUNG43haC9U.cv(),linfo.cv(),Long(1).cv(),t142.cv(),t141.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t143.get())) goto _27;
		}
		{
			Long t144;
			t144=lpos.arrayElem(0).get()+llen.arrayElem(0).get();
			Txt t145;
			c.f.fLine=94;
			if (g->Call(ctx,(PCV[]){t145.cv(),linfo.cv(),t144.cv()},2,12)) goto _0;
			linfo=t145.get();
		}
		{
			Ref t146;
			t146.setLocalRef(ctx,llen.cv());
			Ref t147;
			t147.setLocalRef(ctx,lpos.cv());
			Bool t148;
			c.f.fLine=95;
			if (g->Call(ctx,(PCV[]){t148.cv(),kD3YcRK6zkzs.cv(),linfo.cv(),Long(1).cv(),t147.cv(),t146.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t148.get())) goto _28;
		}
		{
			Long t149;
			t149=llen.arrayElem(1).get();
			Long t150;
			t150=lpos.arrayElem(1).get();
			Txt t151;
			c.f.fLine=96;
			if (g->Call(ctx,(PCV[]){t151.cv(),linfo.cv(),t150.cv(),t149.cv()},3,12)) goto _0;
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KRequestUUID.cv(),t151.cv())) goto _0;
		}
		{
			Obj t152;
			c.f.fLine=98;
			if (g->Call(ctx,(PCV[]){t152.cv()},0,1470)) goto _0;
			Variant t153;
			if (g->Call(ctx,(PCV[]){t153.cv(),t152.cv(),K__altool.cv(),Parm<Obj>(inParams,inNbParam,1).cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t154;
			if (!g->GetValue(ctx,(PCV[]){t154.cv(),t153.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t154.get();
		}
_28:
_27:
_26:
_18:
_5:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KRequestUUID;
extern Txt K__altool;
extern unsigned char D_proc_SignApp_2EnotarizationInfo[];
void proc_SignApp_2EnotarizationInfo( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2EnotarizationInfo);
	if (!ctx->doingAbort) try {
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Obj t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),KRequestUUID.cv(),Parm<Txt>(inParams,inNbParam,1).cv()},2,1471)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t0.cv(),K__altool.cv(),t1.cv()},3,1498)) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t3.get();
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KFolder;
extern Txt K_2Edmg;
extern Txt K_2Ezip;
extern Txt KarchiveFormat;
extern Txt Kdestination;
extern Txt Kditto;
extern Txt Kexists;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt Khdiutil;
extern Txt Kname;
extern Txt Kpkgbuild;
extern Txt Ksuccess;
extern Txt KversionID;
extern unsigned char D_proc_SignApp_2Earchive[];
void proc_SignApp_2Earchive( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2Earchive);
	if (!ctx->doingAbort) try {
		Variant ldst;
		Obj larchive;
		new ( outResult) Obj();
		{
			Bool t0;
			t0=false;
			Bool t1;
			t1=t0.get();
			Obj t2;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t2.cv(),Ksuccess.cv(),t1.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t2.get();
		}
		{
			Bool t3;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1572)) goto _0;
			if (!(t3.get())) goto _2;
		}
		{
			Obj t4;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1709)) goto _0;
			Variant t5;
			if (g->GetMember(ctx,t4.cv(),KFolder.cv(),t5.cv())) goto _0;
			Obj t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			Bool t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t6.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t7.get())) goto _3;
		}
		{
			Variant t8;
			c.f.fLine=6;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kexists.cv(),t8.cv())) goto _0;
			Bool t9;
			if (!g->GetValue(ctx,(PCV[]){t9.cv(),t8.cv(),nullptr})) goto _0;
			if (!(t9.get())) goto _4;
		}
		{
			Obj t10;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1470)) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),Kdestination.cv(),t11.cv())) goto _0;
			Obj t12;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1470)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),KversionID.cv(),t13.cv())) goto _0;
			Variant t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),t11.cv(),Kfolder.cv(),t13.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t14.cv(),ldst.cv(),nullptr})) goto _0;
		}
		{
			Obj t15;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t15.cv()},0,1470)) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),KarchiveFormat.cv(),t16.cv())) goto _0;
			Bool t17;
			if (g->OperationOnAny(ctx,6,t16.cv(),K_2Edmg.cv(),t17.cv())) goto _0;
			if (!(t17.get())) goto _6;
		}
		{
			Obj t18;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t18.cv()},0,1470)) goto _0;
			Variant t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),t18.cv(),Khdiutil.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),ldst.cv()},4,1498)) goto _0;
			g->Check(ctx);
			Obj t20;
			if (!g->GetValue(ctx,(PCV[]){t20.cv(),t19.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t20.get();
		}
		goto _5;
_6:
		{
			Obj t21;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1470)) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),KarchiveFormat.cv(),t22.cv())) goto _0;
			Bool t23;
			if (g->OperationOnAny(ctx,6,t22.cv(),K_2Ezip.cv(),t23.cv())) goto _0;
			if (!(t23.get())) goto _7;
		}
		{
			Obj t24;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t24.cv()},0,1470)) goto _0;
			Variant t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv(),Kditto.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),ldst.cv()},4,1498)) goto _0;
			g->Check(ctx);
			Obj t26;
			if (!g->GetValue(ctx,(PCV[]){t26.cv(),t25.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t26.get();
		}
		goto _5;
_7:
		{
			Obj t27;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t27.cv()},0,1470)) goto _0;
			Variant t28;
			if (g->Call(ctx,(PCV[]){t28.cv(),t27.cv(),Kpkgbuild.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),ldst.cv()},4,1498)) goto _0;
			g->Check(ctx);
			Obj t29;
			if (!g->GetValue(ctx,(PCV[]){t29.cv(),t28.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t29.get();
		}
_5:
		{
			Variant t30;
			c.f.fLine=27;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t30.cv())) goto _0;
			Bool t31;
			if (!g->GetValue(ctx,(PCV[]){t31.cv(),t30.cv(),nullptr})) goto _0;
			if (!(t31.get())) goto _8;
		}
		{
			Obj t32;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t32.cv()},0,1470)) goto _0;
			Variant t33;
			if (g->GetMember(ctx,t32.cv(),Kdestination.cv(),t33.cv())) goto _0;
			Obj t34;
			if (g->Call(ctx,(PCV[]){t34.cv()},0,1470)) goto _0;
			Variant t35;
			if (g->GetMember(ctx,t34.cv(),KversionID.cv(),t35.cv())) goto _0;
			Variant t36;
			if (g->Call(ctx,(PCV[]){t36.cv(),t33.cv(),Kfolder.cv(),t35.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t37;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t37.cv())) goto _0;
			Obj t38;
			if (g->Call(ctx,(PCV[]){t38.cv()},0,1470)) goto _0;
			Variant t39;
			if (g->GetMember(ctx,t38.cv(),KarchiveFormat.cv(),t39.cv())) goto _0;
			Variant t40;
			if (g->OperationOnAny(ctx,0,t37.cv(),t39.cv(),t40.cv())) goto _0;
			Variant t41;
			if (g->Call(ctx,(PCV[]){t41.cv(),t36.cv(),Kfile.cv(),t40.cv()},3,1498)) goto _0;
			Obj t42;
			if (!g->GetValue(ctx,(PCV[]){t42.cv(),t41.cv(),nullptr})) goto _0;
			larchive=t42.get();
		}
		{
			Variant t43;
			c.f.fLine=31;
			if (g->GetMember(ctx,larchive.cv(),Kexists.cv(),t43.cv())) goto _0;
			Bool t44;
			if (!g->GetValue(ctx,(PCV[]){t44.cv(),t43.cv(),nullptr})) goto _0;
			if (!(t44.get())) goto _9;
		}
		c.f.fLine=32;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kfile.cv(),larchive.cv())) goto _0;
		goto _10;
_9:
		{
			Bool t45;
			t45=false;
			Bool t46;
			t46=t45.get();
			c.f.fLine=34;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t46.cv())) goto _0;
		}
_10:
_8:
_4:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KDatabase;
extern Txt KFORCE;
extern Txt KServer_20Database;
extern Txt K_2Edylib;
extern Txt K_2Ehtml;
extern Txt K_2Ejs;
extern Txt K_2Ejson;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kextension_20in_20_3A1;
extern Txt Kfiles;
extern Txt Kfolder;
extern Txt Kpush;
extern Txt Kquery;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signDatabase[];
void proc_SignApp_2E__signDatabase( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signDatabase);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj l__4D__auto__iter__0;
		Obj l__4D__auto__iter__1;
		Col lextensions;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Col t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),K_2Ehtml.cv(),K_2Ejson.cv(),K_2Ejs.cv(),K_2Edylib.cv()},4,1472)) goto _0;
			g->Check(ctx);
			lextensions=t1.get();
		}
		{
			Variant t2;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t2.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfolder.cv(),KDatabase.cv()},3,1498)) goto _0;
			Obj t4;
			if (!g->GetValue(ctx,(PCV[]){t4.cv(),t3.cv(),nullptr})) goto _0;
			lfolder=t4.get();
		}
		{
			Variant t5;
			c.f.fLine=11;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t5.cv())) goto _0;
			Bool t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			if (!(t6.get())) goto _2;
		}
		{
			Long t7;
			t7=1|8;
			Variant t8;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t8.cv(),lfolder.cv(),Kfiles.cv(),t7.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv(),Kquery.cv(),Kextension_20in_20_3A1.cv(),lextensions.cv()},4,1498)) goto _0;
			Obj t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t10.get();
		}
_3:
		{
			Ref t11;
			t11.setLocalRef(ctx,lfile.cv());
			Bool t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),l__4D__auto__iter__0.cv(),t11.cv()},2,1511)) goto _0;
			if (!(t12.get())) goto _4;
		}
		{
			Obj t13;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1470)) goto _0;
			Obj t14;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KCONST.cv(),t15.cv())) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),kvxjhw4AnKOk.cv(),t16.cv())) goto _0;
			Obj t17;
			if (g->Call(ctx,(PCV[]){t17.cv()},0,1470)) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),KCONST.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->GetMember(ctx,t18.cv(),KFORCE.cv(),t19.cv())) goto _0;
			Variant t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),t13.cv(),Kcodesign.cv(),lfile.cv(),t16.cv(),t19.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t20.cv()},3,1500)) goto _0;
		}
		goto _3;
_4:
		{
			Variant t21;
			t21.setNull();
			Obj t22;
			c.f.fLine=14;
			if (!g->GetValue(ctx,(PCV[]){t22.cv(),t21.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t22.get();
		}
_2:
		{
			Variant t23;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t23.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t24;
			if (g->Call(ctx,(PCV[]){t24.cv(),t23.cv(),Kfolder.cv(),KServer_20Database.cv()},3,1498)) goto _0;
			Obj t25;
			if (!g->GetValue(ctx,(PCV[]){t25.cv(),t24.cv(),nullptr})) goto _0;
			lfolder=t25.get();
		}
		{
			Variant t26;
			c.f.fLine=19;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t26.cv())) goto _0;
			Bool t27;
			if (!g->GetValue(ctx,(PCV[]){t27.cv(),t26.cv(),nullptr})) goto _0;
			if (!(t27.get())) goto _5;
		}
		{
			Long t28;
			t28=1|8;
			Variant t29;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t29.cv(),lfolder.cv(),Kfiles.cv(),t28.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t30;
			if (g->Call(ctx,(PCV[]){t30.cv(),t29.cv(),Kquery.cv(),Kextension_20in_20_3A1.cv(),lextensions.cv()},4,1498)) goto _0;
			Obj t31;
			if (g->Call(ctx,(PCV[]){t31.cv(),t30.cv()},1,1510)) goto _0;
			l__4D__auto__iter__1=t31.get();
		}
_6:
		{
			Ref t32;
			t32.setLocalRef(ctx,lfile.cv());
			Bool t33;
			if (g->Call(ctx,(PCV[]){t33.cv(),l__4D__auto__iter__1.cv(),t32.cv()},2,1511)) goto _0;
			if (!(t33.get())) goto _7;
		}
		{
			Obj t34;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t34.cv()},0,1470)) goto _0;
			Obj t35;
			if (g->Call(ctx,(PCV[]){t35.cv()},0,1470)) goto _0;
			Variant t36;
			if (g->GetMember(ctx,t35.cv(),KCONST.cv(),t36.cv())) goto _0;
			Variant t37;
			if (g->GetMember(ctx,t36.cv(),kvxjhw4AnKOk.cv(),t37.cv())) goto _0;
			Obj t38;
			if (g->Call(ctx,(PCV[]){t38.cv()},0,1470)) goto _0;
			Variant t39;
			if (g->GetMember(ctx,t38.cv(),KCONST.cv(),t39.cv())) goto _0;
			Variant t40;
			if (g->GetMember(ctx,t39.cv(),KFORCE.cv(),t40.cv())) goto _0;
			Variant t41;
			if (g->Call(ctx,(PCV[]){t41.cv(),t34.cv(),Kcodesign.cv(),lfile.cv(),t37.cv(),t40.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t41.cv()},3,1500)) goto _0;
		}
		goto _6;
_7:
		{
			Variant t42;
			t42.setNull();
			Obj t43;
			c.f.fLine=22;
			if (!g->GetValue(ctx,(PCV[]){t43.cv(),t42.cv(),nullptr})) goto _0;
			l__4D__auto__iter__1=t43.get();
		}
_5:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KComponents;
extern Txt KContents;
extern Txt KPlugins;
extern Txt Kdelete;
extern Txt Kexists;
extern Txt Kfolder;
extern Txt Kfolders;
extern unsigned char D_proc_SignApp_2E__removeComponentPlugins[];
void proc_SignApp_2E__removeComponentPlugins( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__removeComponentPlugins);
	if (!ctx->doingAbort) try {
		Variant lplugins;
		Obj lfile;
		Variant lcomponent;
		Obj l__4D__auto__iter__0;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KComponents.cv()},3,1498)) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			lfolder=t3.get();
		}
		{
			Variant t4;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t4.cv(),lfolder.cv(),Kfolders.cv()},2,1498)) goto _0;
			g->Check(ctx);
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t5.get();
		}
_2:
		{
			Ref t6;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t6.cv(),lcomponent.cv(),nullptr})) goto _0;
			Bool t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),l__4D__auto__iter__0.cv(),t6.cv()},2,1511)) goto _0;
			if (!(t7.get())) goto _3;
		}
		{
			Variant t8;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t8.cv(),lcomponent.cv(),Kfolder.cv(),KPlugins.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t8.cv(),lplugins.cv(),nullptr})) goto _0;
		}
		{
			Variant t9;
			c.f.fLine=11;
			if (g->GetMember(ctx,lplugins.cv(),Kexists.cv(),t9.cv())) goto _0;
			Bool t10;
			if (!g->GetValue(ctx,(PCV[]){t10.cv(),t9.cv(),nullptr})) goto _0;
			if (!(t10.get())) goto _4;
		}
		c.f.fLine=12;
		if (g->Call(ctx,(PCV[]){nullptr,lplugins.cv(),Kdelete.cv(),Long(1).cv()},3,1500)) goto _0;
		g->Check(ctx);
_4:
		goto _2;
_3:
		{
			Variant t11;
			t11.setNull();
			Obj t12;
			c.f.fLine=14;
			if (!g->GetValue(ctx,(PCV[]){t12.cv(),t11.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t12.get();
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KContents;
extern Txt KMac;
extern Txt KResources;
extern Txt Kdelete;
extern Txt Kfolder;
extern Txt Kphp;
extern unsigned char D_proc_SignApp_2E__removePHP[];
void proc_SignApp_2E__removePHP( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__removePHP);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfolder.cv(),Kphp.cv()},3,1498)) goto _0;
			Variant t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),t3.cv(),Kfolder.cv(),KMac.cv()},3,1498)) goto _0;
			Obj t5;
			if (!g->GetValue(ctx,(PCV[]){t5.cv(),t4.cv(),nullptr})) goto _0;
			lfolder=t5.get();
		}
		c.f.fLine=8;
		if (g->Call(ctx,(PCV[]){nullptr,lfolder.cv(),Kdelete.cv(),Long(1).cv()},3,1500)) goto _0;
		g->Check(ctx);
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KREMOVE;
extern Txt Kcodesign;
extern Txt Kfolder;
extern Txt Kfolders;
extern Txt Koptions;
extern Txt Kpush;
extern Txt KsignApp;
extern Txt kC0TqfYYvwvg;
extern Txt kNRMliVZpVn8;
extern Txt klt4OKJiJpKY;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__removeSignature[];
void proc_SignApp_2E__removeSignature( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__removeSignature);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Variant lcomponent;
		Obj l__4D__auto__iter__0;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Obj t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1470)) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),Koptions.cv(),t2.cv())) goto _0;
			Variant t3;
			if (g->GetMember(ctx,t2.cv(),KsignApp.cv(),t3.cv())) goto _0;
			Bool t4;
			if (!g->GetValue(ctx,(PCV[]){t4.cv(),t3.cv(),nullptr})) goto _0;
			if (!(t4.get())) goto _2;
		}
		{
			Obj t5;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Obj t6;
			if (g->Call(ctx,(PCV[]){t6.cv()},0,1470)) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),KCONST.cv(),t7.cv())) goto _0;
			Variant t8;
			if (g->GetMember(ctx,t7.cv(),kC0TqfYYvwvg.cv(),t8.cv())) goto _0;
			Obj t9;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1470)) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),KCONST.cv(),t10.cv())) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),KREMOVE.cv(),t11.cv())) goto _0;
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t5.cv(),Kcodesign.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t8.cv(),t11.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t12.cv()},3,1500)) goto _0;
		}
		{
			Obj t13;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1470)) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),Koptions.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),kNRMliVZpVn8.cv(),t15.cv())) goto _0;
			Bool t16;
			if (!g->GetValue(ctx,(PCV[]){t16.cv(),t15.cv(),nullptr})) goto _0;
			if (!(t16.get())) goto _3;
		}
		{
			Variant t17;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t17.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),t17.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Obj t19;
			if (!g->GetValue(ctx,(PCV[]){t19.cv(),t18.cv(),nullptr})) goto _0;
			lfolder=t19.get();
		}
		{
			Variant t20;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t20.cv(),lfolder.cv(),Kfolders.cv()},2,1498)) goto _0;
			g->Check(ctx);
			Obj t21;
			if (g->Call(ctx,(PCV[]){t21.cv(),t20.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t21.get();
		}
_4:
		{
			Ref t22;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t22.cv(),lcomponent.cv(),nullptr})) goto _0;
			Bool t23;
			if (g->Call(ctx,(PCV[]){t23.cv(),l__4D__auto__iter__0.cv(),t22.cv()},2,1511)) goto _0;
			if (!(t23.get())) goto _5;
		}
		{
			Obj t24;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t24.cv()},0,1470)) goto _0;
			Obj t25;
			if (g->Call(ctx,(PCV[]){t25.cv()},0,1470)) goto _0;
			Variant t26;
			if (g->GetMember(ctx,t25.cv(),KCONST.cv(),t26.cv())) goto _0;
			Variant t27;
			if (g->GetMember(ctx,t26.cv(),kvxjhw4AnKOk.cv(),t27.cv())) goto _0;
			Obj t28;
			if (g->Call(ctx,(PCV[]){t28.cv()},0,1470)) goto _0;
			Variant t29;
			if (g->GetMember(ctx,t28.cv(),KCONST.cv(),t29.cv())) goto _0;
			Variant t30;
			if (g->GetMember(ctx,t29.cv(),KREMOVE.cv(),t30.cv())) goto _0;
			Variant t31;
			if (g->Call(ctx,(PCV[]){t31.cv(),t24.cv(),Kcodesign.cv(),lcomponent.cv(),t27.cv(),t30.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t31.cv()},3,1500)) goto _0;
		}
		goto _4;
_5:
		{
			Variant t32;
			t32.setNull();
			Obj t33;
			c.f.fLine=14;
			if (!g->GetValue(ctx,(PCV[]){t33.cv(),t32.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t33.get();
		}
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KComponents;
extern Txt KContents;
extern Txt KFORCE;
extern Txt K_2Edylib;
extern Txt K_2Ehtml;
extern Txt K_2Ejs;
extern Txt K_2Ejson;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kextension_20in_20_3A1;
extern Txt Kfiles;
extern Txt Kfolder;
extern Txt Kpush;
extern Txt Kquery;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signComponents[];
void proc_SignApp_2E__signComponents( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signComponents);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj l__4D__auto__iter__0;
		Col lextensions;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KComponents.cv()},3,1498)) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			lfolder=t3.get();
		}
		{
			Col t4;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t4.cv(),K_2Ehtml.cv(),K_2Ejson.cv(),K_2Ejs.cv(),K_2Edylib.cv()},4,1472)) goto _0;
			g->Check(ctx);
			lextensions=t4.get();
		}
		{
			Variant t5;
			c.f.fLine=11;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t5.cv())) goto _0;
			Bool t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			if (!(t6.get())) goto _2;
		}
		{
			Long t7;
			t7=1|8;
			Variant t8;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t8.cv(),lfolder.cv(),Kfiles.cv(),t7.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv(),Kquery.cv(),Kextension_20in_20_3A1.cv(),lextensions.cv()},4,1498)) goto _0;
			Obj t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t10.get();
		}
_3:
		{
			Ref t11;
			t11.setLocalRef(ctx,lfile.cv());
			Bool t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),l__4D__auto__iter__0.cv(),t11.cv()},2,1511)) goto _0;
			if (!(t12.get())) goto _4;
		}
		{
			Obj t13;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1470)) goto _0;
			Obj t14;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KCONST.cv(),t15.cv())) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),kvxjhw4AnKOk.cv(),t16.cv())) goto _0;
			Obj t17;
			if (g->Call(ctx,(PCV[]){t17.cv()},0,1470)) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),KCONST.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->GetMember(ctx,t18.cv(),KFORCE.cv(),t19.cv())) goto _0;
			Variant t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),t13.cv(),Kcodesign.cv(),lfile.cv(),t16.cv(),t19.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t20.cv()},3,1500)) goto _0;
		}
		goto _3;
_4:
		{
			Variant t21;
			t21.setNull();
			Obj t22;
			c.f.fLine=14;
			if (!g->GetValue(ctx,(PCV[]){t22.cv(),t21.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t22.get();
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K4D_20Helper;
extern Txt K4D_20Helper_2Eapp;
extern Txt KCONST;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KFrameworks;
extern Txt KLibraries;
extern Txt KMacOS;
extern Txt KNO__OPTIONS;
extern Txt Kcodesign;
extern Txt Kdelete;
extern Txt Kexists;
extern Txt Kfile;
extern Txt Kfiles;
extern Txt Kfolder;
extern Txt Kfolders;
extern Txt Kpush;
extern Txt kAJwh$jikBz4;
extern Txt kB2835QN6nTA;
extern Txt kC0TqfYYvwvg;
extern Txt kF_HwE1Tn_Qw;
extern Txt kNW2sq3rSMbU;
extern Txt kTlD6W9IEBXc;
extern Txt kaKn3dVqUVMA;
extern Txt kd8uhfw6NDow;
extern Txt klt4OKJiJpKY;
extern Txt kuia0OvPGsiY;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signNativeComponents[];
void proc_SignApp_2E__signNativeComponents( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signNativeComponents);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Variant lcomponent;
		Obj l__4D__auto__iter__0;
		Obj l__4D__auto__iter__1;
		Txt lfrom;
		Txt lto;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfolder.cv(),kTlD6W9IEBXc.cv()},3,1498)) goto _0;
			Variant t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),t3.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kfolder.cv(),K4D_20Helper_2Eapp.cv()},3,1498)) goto _0;
			Variant t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),t6.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),t7.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Obj t9;
			if (!g->GetValue(ctx,(PCV[]){t9.cv(),t8.cv(),nullptr})) goto _0;
			lfolder=t9.get();
		}
		{
			Variant t10;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t10.cv())) goto _0;
			Bool t11;
			if (!g->GetValue(ctx,(PCV[]){t11.cv(),t10.cv(),nullptr})) goto _0;
			if (!(t11.get())) goto _2;
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,lfolder.cv(),Kdelete.cv(),Long(1).cv()},3,1500)) goto _0;
		g->Check(ctx);
		{
			Variant t12;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t12.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t13;
			if (g->Call(ctx,(PCV[]){t13.cv(),t12.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Variant t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),t13.cv(),Kfolder.cv(),kTlD6W9IEBXc.cv()},3,1498)) goto _0;
			Variant t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t16;
			if (g->Call(ctx,(PCV[]){t16.cv(),t15.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Variant t17;
			if (g->Call(ctx,(PCV[]){t17.cv(),t16.cv(),Kfolder.cv(),K4D_20Helper_2Eapp.cv()},3,1498)) goto _0;
			Variant t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),t17.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),t18.cv(),Kfolder.cv(),KMacOS.cv()},3,1498)) goto _0;
			Variant t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),t19.cv(),Kfile.cv(),K4D_20Helper.cv()},3,1498)) goto _0;
			Obj t21;
			if (!g->GetValue(ctx,(PCV[]){t21.cv(),t20.cv(),nullptr})) goto _0;
			lfile=t21.get();
		}
		lfrom=kaKn3dVqUVMA.get();
		lto=kB2835QN6nTA.get();
		{
			Obj t22;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t22.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t22.cv(),kuia0OvPGsiY.cv(),lfile.cv(),lfrom.cv(),lto.cv(),Parm<Col>(inParams,inNbParam,2).cv()},6,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t23;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t23.cv()},0,1470)) goto _0;
			Obj t24;
			if (g->Call(ctx,(PCV[]){t24.cv()},0,1470)) goto _0;
			Variant t25;
			if (g->GetMember(ctx,t24.cv(),KCONST.cv(),t25.cv())) goto _0;
			Variant t26;
			if (g->GetMember(ctx,t25.cv(),kvxjhw4AnKOk.cv(),t26.cv())) goto _0;
			Obj t27;
			if (g->Call(ctx,(PCV[]){t27.cv()},0,1470)) goto _0;
			Variant t28;
			if (g->GetMember(ctx,t27.cv(),KCONST.cv(),t28.cv())) goto _0;
			Variant t29;
			if (g->GetMember(ctx,t28.cv(),KFORCE.cv(),t29.cv())) goto _0;
			Variant t30;
			if (g->Call(ctx,(PCV[]){t30.cv(),t23.cv(),Kcodesign.cv(),lfile.cv(),t26.cv(),t29.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t30.cv()},3,1500)) goto _0;
		}
_2:
		{
			Variant t31;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t31.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t32;
			if (g->Call(ctx,(PCV[]){t32.cv(),t31.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Variant t33;
			if (g->Call(ctx,(PCV[]){t33.cv(),t32.cv(),Kfolder.cv(),kTlD6W9IEBXc.cv()},3,1498)) goto _0;
			Variant t34;
			if (g->Call(ctx,(PCV[]){t34.cv(),t33.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t35;
			if (g->Call(ctx,(PCV[]){t35.cv(),t34.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Variant t36;
			if (g->Call(ctx,(PCV[]){t36.cv(),t35.cv(),Kfolder.cv(),kNW2sq3rSMbU.cv()},3,1498)) goto _0;
			Obj t37;
			if (!g->GetValue(ctx,(PCV[]){t37.cv(),t36.cv(),nullptr})) goto _0;
			lfolder=t37.get();
		}
		{
			Variant t38;
			c.f.fLine=20;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t38.cv())) goto _0;
			Bool t39;
			if (!g->GetValue(ctx,(PCV[]){t39.cv(),t38.cv(),nullptr})) goto _0;
			if (!(t39.get())) goto _3;
		}
		{
			Obj t40;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t40.cv()},0,1470)) goto _0;
			Obj t41;
			if (g->Call(ctx,(PCV[]){t41.cv()},0,1470)) goto _0;
			Variant t42;
			if (g->GetMember(ctx,t41.cv(),KCONST.cv(),t42.cv())) goto _0;
			Variant t43;
			if (g->GetMember(ctx,t42.cv(),kC0TqfYYvwvg.cv(),t43.cv())) goto _0;
			Obj t44;
			if (g->Call(ctx,(PCV[]){t44.cv()},0,1470)) goto _0;
			Variant t45;
			if (g->GetMember(ctx,t44.cv(),KCONST.cv(),t45.cv())) goto _0;
			Variant t46;
			if (g->GetMember(ctx,t45.cv(),KFORCE.cv(),t46.cv())) goto _0;
			Variant t47;
			if (g->Call(ctx,(PCV[]){t47.cv(),t40.cv(),Kcodesign.cv(),lfolder.cv(),t43.cv(),t46.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t47.cv()},3,1500)) goto _0;
		}
_3:
		{
			Variant t48;
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){t48.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t49;
			if (g->Call(ctx,(PCV[]){t49.cv(),t48.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Variant t50;
			if (g->Call(ctx,(PCV[]){t50.cv(),t49.cv(),Kfolder.cv(),kTlD6W9IEBXc.cv()},3,1498)) goto _0;
			Variant t51;
			if (g->Call(ctx,(PCV[]){t51.cv(),t50.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t52;
			if (g->Call(ctx,(PCV[]){t52.cv(),t51.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Variant t53;
			if (g->Call(ctx,(PCV[]){t53.cv(),t52.cv(),Kfolder.cv(),kF_HwE1Tn_Qw.cv()},3,1498)) goto _0;
			Obj t54;
			if (!g->GetValue(ctx,(PCV[]){t54.cv(),t53.cv(),nullptr})) goto _0;
			lfolder=t54.get();
		}
		{
			Variant t55;
			c.f.fLine=26;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t55.cv())) goto _0;
			Bool t56;
			if (!g->GetValue(ctx,(PCV[]){t56.cv(),t55.cv(),nullptr})) goto _0;
			if (!(t56.get())) goto _4;
		}
		{
			Obj t57;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t57.cv()},0,1470)) goto _0;
			Obj t58;
			if (g->Call(ctx,(PCV[]){t58.cv()},0,1470)) goto _0;
			Variant t59;
			if (g->GetMember(ctx,t58.cv(),KCONST.cv(),t59.cv())) goto _0;
			Variant t60;
			if (g->GetMember(ctx,t59.cv(),kC0TqfYYvwvg.cv(),t60.cv())) goto _0;
			Obj t61;
			if (g->Call(ctx,(PCV[]){t61.cv()},0,1470)) goto _0;
			Variant t62;
			if (g->GetMember(ctx,t61.cv(),KCONST.cv(),t62.cv())) goto _0;
			Variant t63;
			if (g->GetMember(ctx,t62.cv(),KFORCE.cv(),t63.cv())) goto _0;
			Variant t64;
			if (g->Call(ctx,(PCV[]){t64.cv(),t57.cv(),Kcodesign.cv(),lfolder.cv(),t60.cv(),t63.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t64.cv()},3,1500)) goto _0;
		}
_4:
		{
			Variant t65;
			c.f.fLine=30;
			if (g->Call(ctx,(PCV[]){t65.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t66;
			if (g->Call(ctx,(PCV[]){t66.cv(),t65.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Variant t67;
			if (g->Call(ctx,(PCV[]){t67.cv(),t66.cv(),Kfolder.cv(),kTlD6W9IEBXc.cv()},3,1498)) goto _0;
			Variant t68;
			if (g->Call(ctx,(PCV[]){t68.cv(),t67.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t69;
			if (g->Call(ctx,(PCV[]){t69.cv(),t68.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Variant t70;
			if (g->Call(ctx,(PCV[]){t70.cv(),t69.cv(),Kfolder.cv(),kAJwh$jikBz4.cv()},3,1498)) goto _0;
			Obj t71;
			if (!g->GetValue(ctx,(PCV[]){t71.cv(),t70.cv(),nullptr})) goto _0;
			lfolder=t71.get();
		}
		{
			Variant t72;
			c.f.fLine=32;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t72.cv())) goto _0;
			Bool t73;
			if (!g->GetValue(ctx,(PCV[]){t73.cv(),t72.cv(),nullptr})) goto _0;
			if (!(t73.get())) goto _5;
		}
		{
			Obj t74;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t74.cv()},0,1470)) goto _0;
			Obj t75;
			if (g->Call(ctx,(PCV[]){t75.cv()},0,1470)) goto _0;
			Variant t76;
			if (g->GetMember(ctx,t75.cv(),KCONST.cv(),t76.cv())) goto _0;
			Variant t77;
			if (g->GetMember(ctx,t76.cv(),kC0TqfYYvwvg.cv(),t77.cv())) goto _0;
			Obj t78;
			if (g->Call(ctx,(PCV[]){t78.cv()},0,1470)) goto _0;
			Variant t79;
			if (g->GetMember(ctx,t78.cv(),KCONST.cv(),t79.cv())) goto _0;
			Variant t80;
			if (g->GetMember(ctx,t79.cv(),KFORCE.cv(),t80.cv())) goto _0;
			Variant t81;
			if (g->Call(ctx,(PCV[]){t81.cv(),t74.cv(),Kcodesign.cv(),lfolder.cv(),t77.cv(),t80.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t81.cv()},3,1500)) goto _0;
		}
_5:
		{
			Variant t82;
			c.f.fLine=36;
			if (g->Call(ctx,(PCV[]){t82.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t83;
			if (g->Call(ctx,(PCV[]){t83.cv(),t82.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Variant t84;
			if (g->Call(ctx,(PCV[]){t84.cv(),t83.cv(),Kfolder.cv(),kTlD6W9IEBXc.cv()},3,1498)) goto _0;
			Variant t85;
			if (g->Call(ctx,(PCV[]){t85.cv(),t84.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t86;
			if (g->Call(ctx,(PCV[]){t86.cv(),t85.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Variant t87;
			if (g->Call(ctx,(PCV[]){t87.cv(),t86.cv(),Kfolder.cv(),K4D_20Helper_2Eapp.cv()},3,1498)) goto _0;
			Obj t88;
			if (!g->GetValue(ctx,(PCV[]){t88.cv(),t87.cv(),nullptr})) goto _0;
			lfolder=t88.get();
		}
		{
			Variant t89;
			c.f.fLine=38;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t89.cv())) goto _0;
			Bool t90;
			if (!g->GetValue(ctx,(PCV[]){t90.cv(),t89.cv(),nullptr})) goto _0;
			if (!(t90.get())) goto _6;
		}
		{
			Obj t91;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t91.cv()},0,1470)) goto _0;
			Obj t92;
			if (g->Call(ctx,(PCV[]){t92.cv()},0,1470)) goto _0;
			Variant t93;
			if (g->GetMember(ctx,t92.cv(),KCONST.cv(),t93.cv())) goto _0;
			Variant t94;
			if (g->GetMember(ctx,t93.cv(),kC0TqfYYvwvg.cv(),t94.cv())) goto _0;
			Obj t95;
			if (g->Call(ctx,(PCV[]){t95.cv()},0,1470)) goto _0;
			Variant t96;
			if (g->GetMember(ctx,t95.cv(),KCONST.cv(),t96.cv())) goto _0;
			Variant t97;
			if (g->GetMember(ctx,t96.cv(),KFORCE.cv(),t97.cv())) goto _0;
			Variant t98;
			if (g->Call(ctx,(PCV[]){t98.cv(),t91.cv(),Kcodesign.cv(),lfolder.cv(),t94.cv(),t97.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t98.cv()},3,1500)) goto _0;
		}
_6:
		{
			Variant t99;
			c.f.fLine=43;
			if (g->Call(ctx,(PCV[]){t99.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t100;
			if (g->Call(ctx,(PCV[]){t100.cv(),t99.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Variant t101;
			if (g->Call(ctx,(PCV[]){t101.cv(),t100.cv(),Kfolder.cv(),kTlD6W9IEBXc.cv()},3,1498)) goto _0;
			Variant t102;
			if (g->Call(ctx,(PCV[]){t102.cv(),t101.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t103;
			if (g->Call(ctx,(PCV[]){t103.cv(),t102.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Variant t104;
			if (g->Call(ctx,(PCV[]){t104.cv(),t103.cv(),Kfolder.cv(),kd8uhfw6NDow.cv()},3,1498)) goto _0;
			Variant t105;
			if (g->Call(ctx,(PCV[]){t105.cv(),t104.cv(),Kfolder.cv(),KLibraries.cv()},3,1498)) goto _0;
			Obj t106;
			if (!g->GetValue(ctx,(PCV[]){t106.cv(),t105.cv(),nullptr})) goto _0;
			lfolder=t106.get();
		}
		{
			Long t107;
			t107=1|8;
			Variant t108;
			c.f.fLine=44;
			if (g->Call(ctx,(PCV[]){t108.cv(),lfolder.cv(),Kfiles.cv(),t107.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t109;
			if (g->Call(ctx,(PCV[]){t109.cv(),t108.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t109.get();
		}
_7:
		{
			Ref t110;
			t110.setLocalRef(ctx,lfile.cv());
			Bool t111;
			if (g->Call(ctx,(PCV[]){t111.cv(),l__4D__auto__iter__0.cv(),t110.cv()},2,1511)) goto _0;
			if (!(t111.get())) goto _8;
		}
		{
			Obj t112;
			c.f.fLine=45;
			if (g->Call(ctx,(PCV[]){t112.cv()},0,1470)) goto _0;
			Obj t113;
			if (g->Call(ctx,(PCV[]){t113.cv()},0,1470)) goto _0;
			Variant t114;
			if (g->GetMember(ctx,t113.cv(),KCONST.cv(),t114.cv())) goto _0;
			Variant t115;
			if (g->GetMember(ctx,t114.cv(),kvxjhw4AnKOk.cv(),t115.cv())) goto _0;
			Obj t116;
			if (g->Call(ctx,(PCV[]){t116.cv()},0,1470)) goto _0;
			Variant t117;
			if (g->GetMember(ctx,t116.cv(),KCONST.cv(),t117.cv())) goto _0;
			Variant t118;
			if (g->GetMember(ctx,t117.cv(),KFORCE.cv(),t118.cv())) goto _0;
			Variant t119;
			if (g->Call(ctx,(PCV[]){t119.cv(),t112.cv(),Kcodesign.cv(),lfile.cv(),t115.cv(),t118.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t119.cv()},3,1500)) goto _0;
		}
		goto _7;
_8:
		{
			Variant t120;
			t120.setNull();
			Obj t121;
			c.f.fLine=46;
			if (!g->GetValue(ctx,(PCV[]){t121.cv(),t120.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t121.get();
		}
		{
			Variant t122;
			c.f.fLine=49;
			if (g->Call(ctx,(PCV[]){t122.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t123;
			if (g->Call(ctx,(PCV[]){t123.cv(),t122.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Variant t124;
			if (g->Call(ctx,(PCV[]){t124.cv(),t123.cv(),Kfolder.cv(),kTlD6W9IEBXc.cv()},3,1498)) goto _0;
			Variant t125;
			if (g->Call(ctx,(PCV[]){t125.cv(),t124.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t126;
			if (g->Call(ctx,(PCV[]){t126.cv(),t125.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Variant t127;
			if (g->Call(ctx,(PCV[]){t127.cv(),t126.cv(),Kfolder.cv(),kd8uhfw6NDow.cv()},3,1498)) goto _0;
			Obj t128;
			if (!g->GetValue(ctx,(PCV[]){t128.cv(),t127.cv(),nullptr})) goto _0;
			lfolder=t128.get();
		}
		{
			Obj t129;
			c.f.fLine=50;
			if (g->Call(ctx,(PCV[]){t129.cv()},0,1470)) goto _0;
			Obj t130;
			if (g->Call(ctx,(PCV[]){t130.cv()},0,1470)) goto _0;
			Variant t131;
			if (g->GetMember(ctx,t130.cv(),KCONST.cv(),t131.cv())) goto _0;
			Variant t132;
			if (g->GetMember(ctx,t131.cv(),kvxjhw4AnKOk.cv(),t132.cv())) goto _0;
			Obj t133;
			if (g->Call(ctx,(PCV[]){t133.cv()},0,1470)) goto _0;
			Variant t134;
			if (g->GetMember(ctx,t133.cv(),KCONST.cv(),t134.cv())) goto _0;
			Variant t135;
			if (g->GetMember(ctx,t134.cv(),KFORCE.cv(),t135.cv())) goto _0;
			Variant t136;
			if (g->Call(ctx,(PCV[]){t136.cv(),t129.cv(),Kcodesign.cv(),lfolder.cv(),t132.cv(),t135.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t136.cv()},3,1500)) goto _0;
		}
		{
			Variant t137;
			c.f.fLine=53;
			if (g->Call(ctx,(PCV[]){t137.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t138;
			if (g->Call(ctx,(PCV[]){t138.cv(),t137.cv(),Kfolder.cv(),klt4OKJiJpKY.cv()},3,1498)) goto _0;
			Obj t139;
			if (!g->GetValue(ctx,(PCV[]){t139.cv(),t138.cv(),nullptr})) goto _0;
			lfolder=t139.get();
		}
		{
			Variant t140;
			c.f.fLine=54;
			if (g->Call(ctx,(PCV[]){t140.cv(),lfolder.cv(),Kfolders.cv()},2,1498)) goto _0;
			g->Check(ctx);
			Obj t141;
			if (g->Call(ctx,(PCV[]){t141.cv(),t140.cv()},1,1510)) goto _0;
			l__4D__auto__iter__1=t141.get();
		}
_9:
		{
			Ref t142;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t142.cv(),lcomponent.cv(),nullptr})) goto _0;
			Bool t143;
			if (g->Call(ctx,(PCV[]){t143.cv(),l__4D__auto__iter__1.cv(),t142.cv()},2,1511)) goto _0;
			if (!(t143.get())) goto _10;
		}
		{
			Obj t144;
			c.f.fLine=55;
			if (g->Call(ctx,(PCV[]){t144.cv()},0,1470)) goto _0;
			Obj t145;
			if (g->Call(ctx,(PCV[]){t145.cv()},0,1470)) goto _0;
			Variant t146;
			if (g->GetMember(ctx,t145.cv(),KCONST.cv(),t146.cv())) goto _0;
			Variant t147;
			if (g->GetMember(ctx,t146.cv(),kvxjhw4AnKOk.cv(),t147.cv())) goto _0;
			Obj t148;
			if (g->Call(ctx,(PCV[]){t148.cv()},0,1470)) goto _0;
			Variant t149;
			if (g->GetMember(ctx,t148.cv(),KCONST.cv(),t149.cv())) goto _0;
			Variant t150;
			if (g->GetMember(ctx,t149.cv(),KNO__OPTIONS.cv(),t150.cv())) goto _0;
			Variant t151;
			if (g->Call(ctx,(PCV[]){t151.cv(),t144.cv(),Kcodesign.cv(),lcomponent.cv(),t147.cv(),t150.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t151.cv()},3,1500)) goto _0;
		}
		goto _9;
_10:
		{
			Variant t152;
			t152.setNull();
			Obj t153;
			c.f.fLine=56;
			if (!g->GetValue(ctx,(PCV[]){t153.cv(),t152.cv(),nullptr})) goto _0;
			l__4D__auto__iter__1=t153.get();
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KResources;
extern Txt K_2Edylib;
extern Txt K_2Ehtml;
extern Txt K_2Ejs;
extern Txt K_2Ejson;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kextension_20in_20_3A1;
extern Txt Kfiles;
extern Txt Kfolder;
extern Txt Kpush;
extern Txt Kquery;
extern Txt kLhXBWmh5zFM;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signInternalComponents[];
void proc_SignApp_2E__signInternalComponents( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signInternalComponents);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj l__4D__auto__iter__0;
		Col lextensions;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfolder.cv(),kLhXBWmh5zFM.cv()},3,1498)) goto _0;
			Obj t4;
			if (!g->GetValue(ctx,(PCV[]){t4.cv(),t3.cv(),nullptr})) goto _0;
			lfolder=t4.get();
		}
		{
			Col t5;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t5.cv(),K_2Ehtml.cv(),K_2Ejson.cv(),K_2Ejs.cv(),K_2Edylib.cv()},4,1472)) goto _0;
			g->Check(ctx);
			lextensions=t5.get();
		}
		{
			Variant t6;
			c.f.fLine=11;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t6.cv())) goto _0;
			Bool t7;
			if (!g->GetValue(ctx,(PCV[]){t7.cv(),t6.cv(),nullptr})) goto _0;
			if (!(t7.get())) goto _2;
		}
		{
			Long t8;
			t8=1|8;
			Variant t9;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t9.cv(),lfolder.cv(),Kfiles.cv(),t8.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv(),Kquery.cv(),Kextension_20in_20_3A1.cv(),lextensions.cv()},4,1498)) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv(),t10.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t11.get();
		}
_3:
		{
			Ref t12;
			t12.setLocalRef(ctx,lfile.cv());
			Bool t13;
			if (g->Call(ctx,(PCV[]){t13.cv(),l__4D__auto__iter__0.cv(),t12.cv()},2,1511)) goto _0;
			if (!(t13.get())) goto _4;
		}
		{
			Obj t14;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Obj t15;
			if (g->Call(ctx,(PCV[]){t15.cv()},0,1470)) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),KCONST.cv(),t16.cv())) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),kvxjhw4AnKOk.cv(),t17.cv())) goto _0;
			Obj t18;
			if (g->Call(ctx,(PCV[]){t18.cv()},0,1470)) goto _0;
			Variant t19;
			if (g->GetMember(ctx,t18.cv(),KCONST.cv(),t19.cv())) goto _0;
			Variant t20;
			if (g->GetMember(ctx,t19.cv(),KFORCE.cv(),t20.cv())) goto _0;
			Variant t21;
			if (g->Call(ctx,(PCV[]){t21.cv(),t14.cv(),Kcodesign.cv(),lfile.cv(),t17.cv(),t20.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t21.cv()},3,1500)) goto _0;
		}
		goto _3;
_4:
		{
			Variant t22;
			t22.setNull();
			Obj t23;
			c.f.fLine=14;
			if (!g->GetValue(ctx,(PCV[]){t23.cv(),t22.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t23.get();
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KPlugins;
extern Txt KResources;
extern Txt K_2Ebundle;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kextension_20_3D_3D_20_3A1;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt Kfolders;
extern Txt Kmanifest_2Ejson;
extern Txt KmoveTo;
extern Txt Kparent;
extern Txt Kpush;
extern Txt Kquery;
extern Txt kC0TqfYYvwvg;
extern Txt kh_yTjKon6Dk;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signPlugins[];
void proc_SignApp_2E__signPlugins( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signPlugins);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj l__4D__auto__iter__0;
		Variant lplugin;
		Variant lmanifest;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KPlugins.cv()},3,1498)) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			lfolder=t3.get();
		}
		{
			Variant t4;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t4.cv())) goto _0;
			Bool t5;
			if (!g->GetValue(ctx,(PCV[]){t5.cv(),t4.cv(),nullptr})) goto _0;
			if (!(t5.get())) goto _2;
		}
		{
			Variant t6;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t6.cv(),lfolder.cv(),Kfolders.cv()},2,1498)) goto _0;
			g->Check(ctx);
			Variant t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),t6.cv(),Kquery.cv(),Kextension_20_3D_3D_20_3A1.cv(),K_2Ebundle.cv()},4,1498)) goto _0;
			Obj t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),t7.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t8.get();
		}
_3:
		{
			Ref t9;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t9.cv(),lplugin.cv(),nullptr})) goto _0;
			Bool t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),l__4D__auto__iter__0.cv(),t9.cv()},2,1511)) goto _0;
			if (!(t10.get())) goto _4;
		}
		{
			Variant t11;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t11.cv(),lplugin.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv(),Kfile.cv(),Kmanifest_2Ejson.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t12.cv(),lmanifest.cv(),nullptr})) goto _0;
		}
		{
			Variant t13;
			c.f.fLine=12;
			if (g->GetMember(ctx,lmanifest.cv(),Kexists.cv(),t13.cv())) goto _0;
			Bool t14;
			if (!g->GetValue(ctx,(PCV[]){t14.cv(),t13.cv(),nullptr})) goto _0;
			if (!(t14.get())) goto _5;
		}
		{
			Obj t15;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t15.cv()},0,1470)) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),kh_yTjKon6Dk.cv(),t16.cv())) goto _0;
			Bool t17;
			if (!g->GetValue(ctx,(PCV[]){t17.cv(),t16.cv(),nullptr})) goto _0;
			if (!(t17.get())) goto _6;
		}
		{
			Variant t18;
			c.f.fLine=14;
			if (g->GetMember(ctx,lmanifest.cv(),Kparent.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),t18.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,lmanifest.cv(),KmoveTo.cv(),t19.cv()},3,1500)) goto _0;
		}
		goto _7;
_6:
		{
			Obj t20;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t20.cv()},0,1470)) goto _0;
			Obj t21;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1470)) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),KCONST.cv(),t22.cv())) goto _0;
			Variant t23;
			if (g->GetMember(ctx,t22.cv(),kC0TqfYYvwvg.cv(),t23.cv())) goto _0;
			Obj t24;
			if (g->Call(ctx,(PCV[]){t24.cv()},0,1470)) goto _0;
			Variant t25;
			if (g->GetMember(ctx,t24.cv(),KCONST.cv(),t25.cv())) goto _0;
			Variant t26;
			if (g->GetMember(ctx,t25.cv(),KFORCE.cv(),t26.cv())) goto _0;
			Variant t27;
			if (g->Call(ctx,(PCV[]){t27.cv(),t20.cv(),Kcodesign.cv(),lmanifest.cv(),t23.cv(),t26.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t27.cv()},3,1500)) goto _0;
		}
_7:
_5:
		{
			Obj t28;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t28.cv()},0,1470)) goto _0;
			Obj t29;
			if (g->Call(ctx,(PCV[]){t29.cv()},0,1470)) goto _0;
			Variant t30;
			if (g->GetMember(ctx,t29.cv(),KCONST.cv(),t30.cv())) goto _0;
			Variant t31;
			if (g->GetMember(ctx,t30.cv(),kvxjhw4AnKOk.cv(),t31.cv())) goto _0;
			Obj t32;
			if (g->Call(ctx,(PCV[]){t32.cv()},0,1470)) goto _0;
			Variant t33;
			if (g->GetMember(ctx,t32.cv(),KCONST.cv(),t33.cv())) goto _0;
			Variant t34;
			if (g->GetMember(ctx,t33.cv(),KFORCE.cv(),t34.cv())) goto _0;
			Variant t35;
			if (g->Call(ctx,(PCV[]){t35.cv(),t28.cv(),Kcodesign.cv(),lplugin.cv(),t31.cv(),t34.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t35.cv()},3,1500)) goto _0;
		}
		goto _3;
_4:
		{
			Variant t36;
			t36.setNull();
			Obj t37;
			c.f.fLine=20;
			if (!g->GetValue(ctx,(PCV[]){t37.cv(),t36.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t37.get();
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KFrameworks;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kfolder;
extern Txt Kfolders;
extern Txt Kpush;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signFrameworks[];
void proc_SignApp_2E__signFrameworks( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signFrameworks);
	if (!ctx->doingAbort) try {
		Variant lframework;
		Obj lfile;
		Obj l__4D__auto__iter__0;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			lfolder=t3.get();
		}
		{
			Variant t4;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t4.cv())) goto _0;
			Bool t5;
			if (!g->GetValue(ctx,(PCV[]){t5.cv(),t4.cv(),nullptr})) goto _0;
			if (!(t5.get())) goto _2;
		}
		{
			Variant t6;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t6.cv(),lfolder.cv(),Kfolders.cv()},2,1498)) goto _0;
			g->Check(ctx);
			Obj t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),t6.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t7.get();
		}
_3:
		{
			Ref t8;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t8.cv(),lframework.cv(),nullptr})) goto _0;
			Bool t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),l__4D__auto__iter__0.cv(),t8.cv()},2,1511)) goto _0;
			if (!(t9.get())) goto _4;
		}
		{
			Obj t10;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1470)) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KCONST.cv(),t12.cv())) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),kvxjhw4AnKOk.cv(),t13.cv())) goto _0;
			Obj t14;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KCONST.cv(),t15.cv())) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),KFORCE.cv(),t16.cv())) goto _0;
			Variant t17;
			if (g->Call(ctx,(PCV[]){t17.cv(),t10.cv(),Kcodesign.cv(),lframework.cv(),t13.cv(),t16.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t17.cv()},3,1500)) goto _0;
		}
		goto _3;
_4:
		{
			Variant t18;
			t18.setNull();
			Obj t19;
			c.f.fLine=12;
			if (!g->GetValue(ctx,(PCV[]){t19.cv(),t18.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t19.get();
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KCodeResources;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KInfo;
extern Txt KPkgInfo;
extern Txt K_2Eplist;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kfiles;
extern Txt Kfolder;
extern Txt Kpush;
extern Txt Kquery;
extern Txt kd4U_W6IC7bg;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signContents[];
void proc_SignApp_2E__signContents( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signContents);
	if (!ctx->doingAbort) try {
		Col lnames;
		Obj lfile;
		Obj l__4D__auto__iter__0;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Col t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),KPkgInfo.cv(),KCodeResources.cv()},2,1472)) goto _0;
			g->Check(ctx);
			lnames=t1.get();
		}
		{
			Variant t2;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t2.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			lfolder=t3.get();
		}
		{
			Variant t4;
			c.f.fLine=11;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t4.cv())) goto _0;
			Bool t5;
			if (!g->GetValue(ctx,(PCV[]){t5.cv(),t4.cv(),nullptr})) goto _0;
			if (!(t5.get())) goto _2;
		}
		{
			Variant t6;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t6.cv(),lfolder.cv(),Kfiles.cv(),Long(8).cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),t6.cv(),Kquery.cv(),kd4U_W6IC7bg.cv(),lnames.cv(),KInfo.cv(),K_2Eplist.cv()},6,1498)) goto _0;
			Obj t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),t7.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t8.get();
		}
_3:
		{
			Ref t9;
			t9.setLocalRef(ctx,lfile.cv());
			Bool t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),l__4D__auto__iter__0.cv(),t9.cv()},2,1511)) goto _0;
			if (!(t10.get())) goto _4;
		}
		{
			Obj t11;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Obj t12;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1470)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),KCONST.cv(),t13.cv())) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),kvxjhw4AnKOk.cv(),t14.cv())) goto _0;
			Obj t15;
			if (g->Call(ctx,(PCV[]){t15.cv()},0,1470)) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),KCONST.cv(),t16.cv())) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KFORCE.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),t11.cv(),Kcodesign.cv(),lfile.cv(),t14.cv(),t17.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t18.cv()},3,1500)) goto _0;
		}
		goto _3;
_4:
		{
			Variant t19;
			t19.setNull();
			Obj t20;
			c.f.fLine=14;
			if (!g->GetValue(ctx,(PCV[]){t20.cv(),t19.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t20.get();
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KMECAB;
extern Txt KResources;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kfolder;
extern Txt Kmecab;
extern Txt Kmecab_2Ebundle;
extern Txt Kpush;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signMecab[];
void proc_SignApp_2E__signMecab( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signMecab);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfolder.cv(),Kmecab.cv()},3,1498)) goto _0;
			Variant t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),t3.cv(),Kfolder.cv(),Kmecab_2Ebundle.cv()},3,1498)) goto _0;
			Obj t5;
			if (!g->GetValue(ctx,(PCV[]){t5.cv(),t4.cv(),nullptr})) goto _0;
			lfolder=t5.get();
		}
		{
			Variant t6;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t6.cv())) goto _0;
			Bool t7;
			if (!g->GetValue(ctx,(PCV[]){t7.cv(),t6.cv(),nullptr})) goto _0;
			if (!(t7.get())) goto _2;
		}
		{
			Obj t8;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			Obj t9;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1470)) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),KCONST.cv(),t10.cv())) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),kvxjhw4AnKOk.cv(),t11.cv())) goto _0;
			Obj t12;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1470)) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),KCONST.cv(),t13.cv())) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KMECAB.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t8.cv(),Kcodesign.cv(),lfolder.cv(),t11.cv(),t14.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t15.cv()},3,1500)) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KSASL_20Plugins;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt Kpush;
extern Txt kvxjhw4AnKOk;
extern Txt ky8nPcJPMecg;
extern unsigned char D_proc_SignApp_2E__signSASLPlugins[];
void proc_SignApp_2E__signSASLPlugins( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signSASLPlugins);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KSASL_20Plugins.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfile.cv(),ky8nPcJPMecg.cv()},3,1498)) goto _0;
			Obj t4;
			if (!g->GetValue(ctx,(PCV[]){t4.cv(),t3.cv(),nullptr})) goto _0;
			lfile=t4.get();
		}
		{
			Variant t5;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfile.cv(),Kexists.cv(),t5.cv())) goto _0;
			Bool t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			if (!(t6.get())) goto _2;
		}
		{
			Obj t7;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1470)) goto _0;
			Obj t8;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			Variant t9;
			if (g->GetMember(ctx,t8.cv(),KCONST.cv(),t9.cv())) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),kvxjhw4AnKOk.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KCONST.cv(),t12.cv())) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),KFORCE.cv(),t13.cv())) goto _0;
			Variant t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),t7.cv(),Kcodesign.cv(),lfile.cv(),t10.cv(),t13.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t14.cv()},3,1500)) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KMac;
extern Txt KResources;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt Kphp;
extern Txt Kphp_2Dfcgi_2D4d;
extern Txt Kpush;
extern Txt kC0TqfYYvwvg;
extern unsigned char D_proc_SignApp_2E__signPHP[];
void proc_SignApp_2E__signPHP( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signPHP);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfolder.cv(),Kphp.cv()},3,1498)) goto _0;
			Variant t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),t3.cv(),Kfolder.cv(),KMac.cv()},3,1498)) goto _0;
			Variant t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv(),Kfile.cv(),Kphp_2Dfcgi_2D4d.cv()},3,1498)) goto _0;
			Obj t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			lfile=t6.get();
		}
		{
			Variant t7;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfile.cv(),Kexists.cv(),t7.cv())) goto _0;
			Bool t8;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),t7.cv(),nullptr})) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1470)) goto _0;
			Obj t10;
			if (g->Call(ctx,(PCV[]){t10.cv()},0,1470)) goto _0;
			Variant t11;
			if (g->GetMember(ctx,t10.cv(),KCONST.cv(),t11.cv())) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),kC0TqfYYvwvg.cv(),t12.cv())) goto _0;
			Obj t13;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1470)) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KCONST.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KFORCE.cv(),t15.cv())) goto _0;
			Variant t16;
			if (g->Call(ctx,(PCV[]){t16.cv(),t9.cv(),Kcodesign.cv(),lfile.cv(),t12.cv(),t15.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t16.cv()},3,1500)) goto _0;
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KResources;
extern Txt Kbin;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kfiles;
extern Txt Kfolder;
extern Txt Kpush;
extern Txt kC0TqfYYvwvg;
extern unsigned char D_proc_SignApp_2E__signBin[];
void proc_SignApp_2E__signBin( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signBin);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj l__4D__auto__iter__0;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfolder.cv(),Kbin.cv()},3,1498)) goto _0;
			Obj t4;
			if (!g->GetValue(ctx,(PCV[]){t4.cv(),t3.cv(),nullptr})) goto _0;
			lfolder=t4.get();
		}
		{
			Variant t5;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t5.cv())) goto _0;
			Bool t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			if (!(t6.get())) goto _2;
		}
		{
			Long t7;
			t7=1|8;
			Variant t8;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t8.cv(),lfolder.cv(),Kfiles.cv(),t7.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t9.get();
		}
_3:
		{
			Ref t10;
			t10.setLocalRef(ctx,lfile.cv());
			Bool t11;
			if (g->Call(ctx,(PCV[]){t11.cv(),l__4D__auto__iter__0.cv(),t10.cv()},2,1511)) goto _0;
			if (!(t11.get())) goto _4;
		}
		{
			Obj t12;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1470)) goto _0;
			Obj t13;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1470)) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KCONST.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),kC0TqfYYvwvg.cv(),t15.cv())) goto _0;
			Obj t16;
			if (g->Call(ctx,(PCV[]){t16.cv()},0,1470)) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KCONST.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),KFORCE.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),t12.cv(),Kcodesign.cv(),lfile.cv(),t15.cv(),t18.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t19.cv()},3,1500)) goto _0;
		}
		goto _3;
_4:
		{
			Variant t20;
			t20.setNull();
			Obj t21;
			c.f.fLine=12;
			if (!g->GetValue(ctx,(PCV[]){t21.cv(),t20.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t21.get();
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KHelperTool;
extern Txt KInstallTool;
extern Txt KInstallTool_2Eapp;
extern Txt KLaunchServices;
extern Txt KLibrary;
extern Txt KMacOS;
extern Txt Kcodesign;
extern Txt Kcom_2E4D_2EHelper;
extern Txt Kexists;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt Kpush;
extern Txt kC0TqfYYvwvg;
extern unsigned char D_proc_SignApp_2E__signHelpers[];
void proc_SignApp_2E__signHelpers( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signHelpers);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KMacOS.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfile.cv(),KHelperTool.cv()},3,1498)) goto _0;
			Obj t4;
			if (!g->GetValue(ctx,(PCV[]){t4.cv(),t3.cv(),nullptr})) goto _0;
			lfile=t4.get();
		}
		{
			Variant t5;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfile.cv(),Kexists.cv(),t5.cv())) goto _0;
			Bool t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			if (!(t6.get())) goto _2;
		}
		{
			Obj t7;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1470)) goto _0;
			Obj t8;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			Variant t9;
			if (g->GetMember(ctx,t8.cv(),KCONST.cv(),t9.cv())) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),kC0TqfYYvwvg.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1470)) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KCONST.cv(),t12.cv())) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),KFORCE.cv(),t13.cv())) goto _0;
			Variant t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),t7.cv(),Kcodesign.cv(),lfile.cv(),t10.cv(),t13.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t14.cv()},3,1500)) goto _0;
		}
_2:
		{
			Variant t15;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t15.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t16;
			if (g->Call(ctx,(PCV[]){t16.cv(),t15.cv(),Kfolder.cv(),KMacOS.cv()},3,1498)) goto _0;
			Variant t17;
			if (g->Call(ctx,(PCV[]){t17.cv(),t16.cv(),Kfile.cv(),KInstallTool.cv()},3,1498)) goto _0;
			Obj t18;
			if (!g->GetValue(ctx,(PCV[]){t18.cv(),t17.cv(),nullptr})) goto _0;
			lfile=t18.get();
		}
		{
			Variant t19;
			c.f.fLine=15;
			if (g->GetMember(ctx,lfile.cv(),Kexists.cv(),t19.cv())) goto _0;
			Bool t20;
			if (!g->GetValue(ctx,(PCV[]){t20.cv(),t19.cv(),nullptr})) goto _0;
			if (!(t20.get())) goto _3;
		}
		{
			Obj t21;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1470)) goto _0;
			Obj t22;
			if (g->Call(ctx,(PCV[]){t22.cv()},0,1470)) goto _0;
			Variant t23;
			if (g->GetMember(ctx,t22.cv(),KCONST.cv(),t23.cv())) goto _0;
			Variant t24;
			if (g->GetMember(ctx,t23.cv(),kC0TqfYYvwvg.cv(),t24.cv())) goto _0;
			Obj t25;
			if (g->Call(ctx,(PCV[]){t25.cv()},0,1470)) goto _0;
			Variant t26;
			if (g->GetMember(ctx,t25.cv(),KCONST.cv(),t26.cv())) goto _0;
			Variant t27;
			if (g->GetMember(ctx,t26.cv(),KFORCE.cv(),t27.cv())) goto _0;
			Variant t28;
			if (g->Call(ctx,(PCV[]){t28.cv(),t21.cv(),Kcodesign.cv(),lfile.cv(),t24.cv(),t27.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t28.cv()},3,1500)) goto _0;
		}
_3:
		{
			Variant t29;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t29.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t30;
			if (g->Call(ctx,(PCV[]){t30.cv(),t29.cv(),Kfolder.cv(),KMacOS.cv()},3,1498)) goto _0;
			Variant t31;
			if (g->Call(ctx,(PCV[]){t31.cv(),t30.cv(),Kfolder.cv(),KInstallTool_2Eapp.cv()},3,1498)) goto _0;
			Variant t32;
			if (g->Call(ctx,(PCV[]){t32.cv(),t31.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t33;
			if (g->Call(ctx,(PCV[]){t33.cv(),t32.cv(),Kfolder.cv(),KLibrary.cv()},3,1498)) goto _0;
			Variant t34;
			if (g->Call(ctx,(PCV[]){t34.cv(),t33.cv(),Kfolder.cv(),KLaunchServices.cv()},3,1498)) goto _0;
			Variant t35;
			if (g->Call(ctx,(PCV[]){t35.cv(),t34.cv(),Kfile.cv(),Kcom_2E4D_2EHelper.cv()},3,1498)) goto _0;
			Obj t36;
			if (!g->GetValue(ctx,(PCV[]){t36.cv(),t35.cv(),nullptr})) goto _0;
			lfile=t36.get();
		}
		{
			Variant t37;
			c.f.fLine=21;
			if (g->GetMember(ctx,lfile.cv(),Kexists.cv(),t37.cv())) goto _0;
			Bool t38;
			if (!g->GetValue(ctx,(PCV[]){t38.cv(),t37.cv(),nullptr})) goto _0;
			if (!(t38.get())) goto _4;
		}
		{
			Obj t39;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t39.cv()},0,1470)) goto _0;
			Obj t40;
			if (g->Call(ctx,(PCV[]){t40.cv()},0,1470)) goto _0;
			Variant t41;
			if (g->GetMember(ctx,t40.cv(),KCONST.cv(),t41.cv())) goto _0;
			Variant t42;
			if (g->GetMember(ctx,t41.cv(),kC0TqfYYvwvg.cv(),t42.cv())) goto _0;
			Obj t43;
			if (g->Call(ctx,(PCV[]){t43.cv()},0,1470)) goto _0;
			Variant t44;
			if (g->GetMember(ctx,t43.cv(),KCONST.cv(),t44.cv())) goto _0;
			Variant t45;
			if (g->GetMember(ctx,t44.cv(),KFORCE.cv(),t45.cv())) goto _0;
			Variant t46;
			if (g->Call(ctx,(PCV[]){t46.cv(),t39.cv(),Kcodesign.cv(),lfile.cv(),t42.cv(),t45.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t46.cv()},3,1500)) goto _0;
		}
_4:
		{
			Variant t47;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t47.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t48;
			if (g->Call(ctx,(PCV[]){t48.cv(),t47.cv(),Kfolder.cv(),KMacOS.cv()},3,1498)) goto _0;
			Variant t49;
			if (g->Call(ctx,(PCV[]){t49.cv(),t48.cv(),Kfolder.cv(),KInstallTool_2Eapp.cv()},3,1498)) goto _0;
			Obj t50;
			if (!g->GetValue(ctx,(PCV[]){t50.cv(),t49.cv(),nullptr})) goto _0;
			lfolder=t50.get();
		}
		{
			Variant t51;
			c.f.fLine=27;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t51.cv())) goto _0;
			Bool t52;
			if (!g->GetValue(ctx,(PCV[]){t52.cv(),t51.cv(),nullptr})) goto _0;
			if (!(t52.get())) goto _5;
		}
		{
			Obj t53;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t53.cv()},0,1470)) goto _0;
			Obj t54;
			if (g->Call(ctx,(PCV[]){t54.cv()},0,1470)) goto _0;
			Variant t55;
			if (g->GetMember(ctx,t54.cv(),KCONST.cv(),t55.cv())) goto _0;
			Variant t56;
			if (g->GetMember(ctx,t55.cv(),kC0TqfYYvwvg.cv(),t56.cv())) goto _0;
			Obj t57;
			if (g->Call(ctx,(PCV[]){t57.cv()},0,1470)) goto _0;
			Variant t58;
			if (g->GetMember(ctx,t57.cv(),KCONST.cv(),t58.cv())) goto _0;
			Variant t59;
			if (g->GetMember(ctx,t58.cv(),KFORCE.cv(),t59.cv())) goto _0;
			Variant t60;
			if (g->Call(ctx,(PCV[]){t60.cv(),t53.cv(),Kcodesign.cv(),lfolder.cv(),t56.cv(),t59.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t60.cv()},3,1500)) goto _0;
		}
_5:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KContents;
extern Txt KFORCE;
extern Txt KFrameworks;
extern Txt KResources;
extern Txt KUpdater;
extern Txt KUpdater_2Eapp;
extern Txt Kcodesign;
extern Txt Kexists;
extern Txt Kfiles;
extern Txt Kfolder;
extern Txt Kpush;
extern Txt kC0TqfYYvwvg;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signUpdater[];
void proc_SignApp_2E__signUpdater( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signUpdater);
	if (!ctx->doingAbort) try {
		Obj lfile;
		Obj l__4D__auto__iter__0;
		Obj lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfolder.cv(),KUpdater.cv()},3,1498)) goto _0;
			Variant t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),t3.cv(),Kfolder.cv(),KUpdater_2Eapp.cv()},3,1498)) goto _0;
			Variant t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kfolder.cv(),KFrameworks.cv()},3,1498)) goto _0;
			Obj t7;
			if (!g->GetValue(ctx,(PCV[]){t7.cv(),t6.cv(),nullptr})) goto _0;
			lfolder=t7.get();
		}
		{
			Variant t8;
			c.f.fLine=9;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t8.cv())) goto _0;
			Bool t9;
			if (!g->GetValue(ctx,(PCV[]){t9.cv(),t8.cv(),nullptr})) goto _0;
			if (!(t9.get())) goto _2;
		}
		{
			Long t10;
			t10=1|8;
			Variant t11;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t11.cv(),lfolder.cv(),Kfiles.cv(),t10.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t12.get();
		}
_3:
		{
			Ref t13;
			t13.setLocalRef(ctx,lfile.cv());
			Bool t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),l__4D__auto__iter__0.cv(),t13.cv()},2,1511)) goto _0;
			if (!(t14.get())) goto _4;
		}
		{
			Obj t15;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t15.cv()},0,1470)) goto _0;
			Obj t16;
			if (g->Call(ctx,(PCV[]){t16.cv()},0,1470)) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KCONST.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),kvxjhw4AnKOk.cv(),t18.cv())) goto _0;
			Obj t19;
			if (g->Call(ctx,(PCV[]){t19.cv()},0,1470)) goto _0;
			Variant t20;
			if (g->GetMember(ctx,t19.cv(),KCONST.cv(),t20.cv())) goto _0;
			Variant t21;
			if (g->GetMember(ctx,t20.cv(),KFORCE.cv(),t21.cv())) goto _0;
			Variant t22;
			if (g->Call(ctx,(PCV[]){t22.cv(),t15.cv(),Kcodesign.cv(),lfile.cv(),t18.cv(),t21.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t22.cv()},3,1500)) goto _0;
		}
		goto _3;
_4:
		{
			Variant t23;
			t23.setNull();
			Obj t24;
			c.f.fLine=12;
			if (!g->GetValue(ctx,(PCV[]){t24.cv(),t23.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t24.get();
		}
_2:
		{
			Variant t25;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t25.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t26;
			if (g->Call(ctx,(PCV[]){t26.cv(),t25.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t27;
			if (g->Call(ctx,(PCV[]){t27.cv(),t26.cv(),Kfolder.cv(),KUpdater.cv()},3,1498)) goto _0;
			Variant t28;
			if (g->Call(ctx,(PCV[]){t28.cv(),t27.cv(),Kfolder.cv(),KUpdater_2Eapp.cv()},3,1498)) goto _0;
			Obj t29;
			if (!g->GetValue(ctx,(PCV[]){t29.cv(),t28.cv(),nullptr})) goto _0;
			lfolder=t29.get();
		}
		{
			Variant t30;
			c.f.fLine=17;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t30.cv())) goto _0;
			Bool t31;
			if (!g->GetValue(ctx,(PCV[]){t31.cv(),t30.cv(),nullptr})) goto _0;
			if (!(t31.get())) goto _5;
		}
		{
			Obj t32;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t32.cv()},0,1470)) goto _0;
			Obj t33;
			if (g->Call(ctx,(PCV[]){t33.cv()},0,1470)) goto _0;
			Variant t34;
			if (g->GetMember(ctx,t33.cv(),KCONST.cv(),t34.cv())) goto _0;
			Variant t35;
			if (g->GetMember(ctx,t34.cv(),kC0TqfYYvwvg.cv(),t35.cv())) goto _0;
			Obj t36;
			if (g->Call(ctx,(PCV[]){t36.cv()},0,1470)) goto _0;
			Variant t37;
			if (g->GetMember(ctx,t36.cv(),KCONST.cv(),t37.cv())) goto _0;
			Variant t38;
			if (g->GetMember(ctx,t37.cv(),KFORCE.cv(),t38.cv())) goto _0;
			Variant t39;
			if (g->Call(ctx,(PCV[]){t39.cv(),t32.cv(),Kcodesign.cv(),lfolder.cv(),t35.cv(),t38.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t39.cv()},3,1500)) goto _0;
		}
_5:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KBuild;
extern Txt KCONST;
extern Txt KCarthage;
extern Txt KContents;
extern Txt KDWARF;
extern Txt KFORCE;
extern Txt KMac;
extern Txt KREMOVE;
extern Txt KResources;
extern Txt K_2EdSYM;
extern Txt K_2Eframework;
extern Txt K_2Ezip;
extern Txt KcleanFirst;
extern Txt Kcodesign;
extern Txt Kcreate;
extern Txt Kditto;
extern Txt Kexists;
extern Txt Kextension_20_3D_3D_20_3A1;
extern Txt Kextension_20in_20_3A1;
extern Txt Kfiles;
extern Txt Kfolder;
extern Txt Kfolders;
extern Txt KiOS;
extern Txt Kname;
extern Txt Koptions;
extern Txt Kpush;
extern Txt Kquery;
extern Txt Kscripts;
extern Txt Ksdk;
extern Txt KtvOS;
extern Txt KwatchOS;
extern Txt k5$CqFDLys1s;
extern Txt kC0TqfYYvwvg;
extern Txt khdQz7HR5LKw;
extern Txt kvxjhw4AnKOk;
extern unsigned char D_proc_SignApp_2E__signMobile[];
void proc_SignApp_2E__signMobile( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signMobile);
	if (!ctx->doingAbort) try {
		Variant lplatformFolder;
		Variant lframework;
		Variant lplatform;
		Obj lfile;
		Obj l__4D__auto__iter__0;
		Obj l__4D__auto__iter__1;
		Obj l__4D__auto__iter__2;
		Obj l__4D__auto__iter__3;
		Obj l__4D__auto__iter__4;
		Obj l__4D__auto__iter__5;
		Col lextensions;
		Variant ltemporaryFolder;
		Col lplatforms;
		Variant lfolder;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Variant t1;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t1.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),Kfolder.cv(),khdQz7HR5LKw.cv()},3,1498)) goto _0;
			Variant t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),t3.cv(),Kfolder.cv(),k5$CqFDLys1s.cv()},3,1498)) goto _0;
			Variant t5;
			if (g->Call(ctx,(PCV[]){t5.cv(),t4.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kfolder.cv(),Kscripts.cv()},3,1498)) goto _0;
			Long t7;
			t7=1|8;
			Variant t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),t6.cv(),Kfiles.cv(),t7.cv()},3,1498)) goto _0;
			Obj t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv()},1,1510)) goto _0;
			l__4D__auto__iter__0=t9.get();
		}
_2:
		{
			Ref t10;
			t10.setLocalRef(ctx,lfile.cv());
			Bool t11;
			if (g->Call(ctx,(PCV[]){t11.cv(),l__4D__auto__iter__0.cv(),t10.cv()},2,1511)) goto _0;
			if (!(t11.get())) goto _3;
		}
		{
			Obj t12;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t12.cv()},0,1470)) goto _0;
			Obj t13;
			if (g->Call(ctx,(PCV[]){t13.cv()},0,1470)) goto _0;
			Variant t14;
			if (g->GetMember(ctx,t13.cv(),KCONST.cv(),t14.cv())) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),kC0TqfYYvwvg.cv(),t15.cv())) goto _0;
			Obj t16;
			if (g->Call(ctx,(PCV[]){t16.cv()},0,1470)) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KCONST.cv(),t17.cv())) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),KFORCE.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),t12.cv(),Kcodesign.cv(),lfile.cv(),t15.cv(),t18.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t19.cv()},3,1500)) goto _0;
		}
		goto _2;
_3:
		{
			Variant t20;
			t20.setNull();
			Obj t21;
			c.f.fLine=8;
			if (!g->GetValue(ctx,(PCV[]){t21.cv(),t20.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t21.get();
		}
		{
			Variant t22;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t22.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t23;
			if (g->Call(ctx,(PCV[]){t23.cv(),t22.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t24;
			if (g->Call(ctx,(PCV[]){t24.cv(),t23.cv(),Kfolder.cv(),khdQz7HR5LKw.cv()},3,1498)) goto _0;
			Variant t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv(),Kfolder.cv(),k5$CqFDLys1s.cv()},3,1498)) goto _0;
			Variant t26;
			if (g->Call(ctx,(PCV[]){t26.cv(),t25.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t27;
			if (g->Call(ctx,(PCV[]){t27.cv(),t26.cv(),Kfolder.cv(),Ksdk.cv()},3,1498)) goto _0;
			Long t28;
			t28=1|8;
			Variant t29;
			if (g->Call(ctx,(PCV[]){t29.cv(),t27.cv(),Kfiles.cv(),t28.cv()},3,1498)) goto _0;
			Obj t30;
			if (g->Call(ctx,(PCV[]){t30.cv(),t29.cv()},1,1510)) goto _0;
			l__4D__auto__iter__1=t30.get();
		}
_4:
		{
			Ref t31;
			t31.setLocalRef(ctx,lfile.cv());
			Bool t32;
			if (g->Call(ctx,(PCV[]){t32.cv(),l__4D__auto__iter__1.cv(),t31.cv()},2,1511)) goto _0;
			if (!(t32.get())) goto _5;
		}
		{
			Obj t33;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t33.cv()},0,1470)) goto _0;
			Obj t34;
			if (g->Call(ctx,(PCV[]){t34.cv()},0,1470)) goto _0;
			Variant t35;
			if (g->GetMember(ctx,t34.cv(),KCONST.cv(),t35.cv())) goto _0;
			Variant t36;
			if (g->GetMember(ctx,t35.cv(),kvxjhw4AnKOk.cv(),t36.cv())) goto _0;
			Obj t37;
			if (g->Call(ctx,(PCV[]){t37.cv()},0,1470)) goto _0;
			Variant t38;
			if (g->GetMember(ctx,t37.cv(),KCONST.cv(),t38.cv())) goto _0;
			Variant t39;
			if (g->GetMember(ctx,t38.cv(),KFORCE.cv(),t39.cv())) goto _0;
			Variant t40;
			if (g->Call(ctx,(PCV[]){t40.cv(),t33.cv(),Kcodesign.cv(),lfile.cv(),t36.cv(),t39.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t40.cv()},3,1500)) goto _0;
		}
		goto _4;
_5:
		{
			Variant t41;
			t41.setNull();
			Obj t42;
			c.f.fLine=12;
			if (!g->GetValue(ctx,(PCV[]){t42.cv(),t41.cv(),nullptr})) goto _0;
			l__4D__auto__iter__1=t42.get();
		}
		{
			Col t43;
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){t43.cv(),KiOS.cv(),KtvOS.cv(),KwatchOS.cv(),KMac.cv()},4,1472)) goto _0;
			g->Check(ctx);
			lplatforms=t43.get();
		}
		{
			Col t44;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t44.cv(),K_2Eframework.cv(),K_2EdSYM.cv()},2,1472)) goto _0;
			g->Check(ctx);
			lextensions=t44.get();
		}
		{
			Variant t45;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t45.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t46;
			if (g->Call(ctx,(PCV[]){t46.cv(),t45.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t47;
			if (g->Call(ctx,(PCV[]){t47.cv(),t46.cv(),Kfolder.cv(),khdQz7HR5LKw.cv()},3,1498)) goto _0;
			Variant t48;
			if (g->Call(ctx,(PCV[]){t48.cv(),t47.cv(),Kfolder.cv(),k5$CqFDLys1s.cv()},3,1498)) goto _0;
			Variant t49;
			if (g->Call(ctx,(PCV[]){t49.cv(),t48.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t50;
			if (g->Call(ctx,(PCV[]){t50.cv(),t49.cv(),Kfolder.cv(),Ksdk.cv()},3,1498)) goto _0;
			Long t51;
			t51=1|8;
			Variant t52;
			if (g->Call(ctx,(PCV[]){t52.cv(),t50.cv(),Kfiles.cv(),t51.cv()},3,1498)) goto _0;
			Variant t53;
			if (g->Call(ctx,(PCV[]){t53.cv(),t52.cv(),Kquery.cv(),Kextension_20_3D_3D_20_3A1.cv(),K_2Ezip.cv()},4,1498)) goto _0;
			Obj t54;
			if (g->Call(ctx,(PCV[]){t54.cv(),t53.cv()},1,1510)) goto _0;
			l__4D__auto__iter__5=t54.get();
		}
_6:
		{
			Ref t55;
			t55.setLocalRef(ctx,lfile.cv());
			Bool t56;
			if (g->Call(ctx,(PCV[]){t56.cv(),l__4D__auto__iter__5.cv(),t55.cv()},2,1511)) goto _0;
			if (!(t56.get())) goto _7;
		}
		{
			Txt t57;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t57.cv()},0,486)) goto _0;
			g->Check(ctx);
			Obj t58;
			if (g->Call(ctx,(PCV[]){t58.cv(),t57.cv(),Long(1).cv()},2,1567)) goto _0;
			Txt t59;
			if (g->Call(ctx,(PCV[]){t59.cv()},0,1066)) goto _0;
			Variant t60;
			if (g->Call(ctx,(PCV[]){t60.cv(),t58.cv(),Kfolder.cv(),t59.cv()},3,1498)) goto _0;
			Variant t61;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t61.cv())) goto _0;
			Variant t62;
			if (g->Call(ctx,(PCV[]){t62.cv(),t60.cv(),Kfolder.cv(),t61.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t62.cv(),ltemporaryFolder.cv(),nullptr})) goto _0;
		}
		c.f.fLine=19;
		if (g->Call(ctx,(PCV[]){nullptr,ltemporaryFolder.cv(),Kcreate.cv()},2,1500)) goto _0;
		g->Check(ctx);
		{
			Obj t63;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t63.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t63.cv(),Kditto.cv(),lfile.cv(),ltemporaryFolder.cv()},4,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t64;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t64.cv(),lplatforms.cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__4=t64.get();
		}
_8:
		{
			Ref t65;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t65.cv(),lplatform.cv(),nullptr})) goto _0;
			Bool t66;
			if (g->Call(ctx,(PCV[]){t66.cv(),l__4D__auto__iter__4.cv(),t65.cv()},2,1511)) goto _0;
			if (!(t66.get())) goto _9;
		}
		{
			Variant t67;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t67.cv(),ltemporaryFolder.cv(),Kfolder.cv(),KCarthage.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t68;
			if (g->Call(ctx,(PCV[]){t68.cv(),t67.cv(),Kfolder.cv(),KBuild.cv()},3,1498)) goto _0;
			Variant t69;
			if (g->Call(ctx,(PCV[]){t69.cv(),t68.cv(),Kfolder.cv(),lplatform.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t69.cv(),lplatformFolder.cv(),nullptr})) goto _0;
		}
		{
			Variant t70;
			c.f.fLine=23;
			if (g->GetMember(ctx,lplatformFolder.cv(),Kexists.cv(),t70.cv())) goto _0;
			Bool t71;
			if (!g->GetValue(ctx,(PCV[]){t71.cv(),t70.cv(),nullptr})) goto _0;
			if (!(t71.get())) goto _10;
		}
		{
			Variant t72;
			c.f.fLine=24;
			if (g->Call(ctx,(PCV[]){t72.cv(),lplatformFolder.cv(),Kfolders.cv()},2,1498)) goto _0;
			g->Check(ctx);
			Variant t73;
			if (g->Call(ctx,(PCV[]){t73.cv(),t72.cv(),Kquery.cv(),Kextension_20in_20_3A1.cv(),lextensions.cv()},4,1498)) goto _0;
			Obj t74;
			if (g->Call(ctx,(PCV[]){t74.cv(),t73.cv()},1,1510)) goto _0;
			l__4D__auto__iter__3=t74.get();
		}
_11:
		{
			Ref t75;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t75.cv(),lframework.cv(),nullptr})) goto _0;
			Bool t76;
			if (g->Call(ctx,(PCV[]){t76.cv(),l__4D__auto__iter__3.cv(),t75.cv()},2,1511)) goto _0;
			if (!(t76.get())) goto _12;
		}
		{
			Obj t77;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t77.cv()},0,1470)) goto _0;
			Variant t78;
			if (g->GetMember(ctx,t77.cv(),Koptions.cv(),t78.cv())) goto _0;
			Variant t79;
			if (g->GetMember(ctx,t78.cv(),KcleanFirst.cv(),t79.cv())) goto _0;
			Bool t80;
			if (!g->GetValue(ctx,(PCV[]){t80.cv(),t79.cv(),nullptr})) goto _0;
			if (!(t80.get())) goto _13;
		}
		{
			Obj t81;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t81.cv()},0,1470)) goto _0;
			Obj t82;
			if (g->Call(ctx,(PCV[]){t82.cv()},0,1470)) goto _0;
			Variant t83;
			if (g->GetMember(ctx,t82.cv(),KCONST.cv(),t83.cv())) goto _0;
			Variant t84;
			if (g->GetMember(ctx,t83.cv(),kC0TqfYYvwvg.cv(),t84.cv())) goto _0;
			Obj t85;
			if (g->Call(ctx,(PCV[]){t85.cv()},0,1470)) goto _0;
			Variant t86;
			if (g->GetMember(ctx,t85.cv(),KCONST.cv(),t86.cv())) goto _0;
			Variant t87;
			if (g->GetMember(ctx,t86.cv(),KREMOVE.cv(),t87.cv())) goto _0;
			Variant t88;
			if (g->Call(ctx,(PCV[]){t88.cv(),t81.cv(),Kcodesign.cv(),lframework.cv(),t84.cv(),t87.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t88.cv()},3,1500)) goto _0;
		}
_13:
		{
			Variant t89;
			c.f.fLine=28;
			if (g->Call(ctx,(PCV[]){t89.cv(),lframework.cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t90;
			if (g->Call(ctx,(PCV[]){t90.cv(),t89.cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			Variant t91;
			if (g->Call(ctx,(PCV[]){t91.cv(),t90.cv(),Kfolder.cv(),KDWARF.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t91.cv(),lfolder.cv(),nullptr})) goto _0;
		}
		{
			Variant t92;
			c.f.fLine=29;
			if (g->GetMember(ctx,lfolder.cv(),Kexists.cv(),t92.cv())) goto _0;
			Bool t93;
			if (!g->GetValue(ctx,(PCV[]){t93.cv(),t92.cv(),nullptr})) goto _0;
			if (!(t93.get())) goto _14;
		}
		{
			Long t94;
			t94=1|8;
			Variant t95;
			c.f.fLine=30;
			if (g->Call(ctx,(PCV[]){t95.cv(),lfolder.cv(),Kfiles.cv(),t94.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t96;
			if (g->Call(ctx,(PCV[]){t96.cv(),t95.cv()},1,1510)) goto _0;
			l__4D__auto__iter__2=t96.get();
		}
_15:
		{
			Ref t97;
			t97.setLocalRef(ctx,lfile.cv());
			Bool t98;
			if (g->Call(ctx,(PCV[]){t98.cv(),l__4D__auto__iter__2.cv(),t97.cv()},2,1511)) goto _0;
			if (!(t98.get())) goto _16;
		}
		{
			Obj t99;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t99.cv()},0,1470)) goto _0;
			Obj t100;
			if (g->Call(ctx,(PCV[]){t100.cv()},0,1470)) goto _0;
			Variant t101;
			if (g->GetMember(ctx,t100.cv(),KCONST.cv(),t101.cv())) goto _0;
			Variant t102;
			if (g->GetMember(ctx,t101.cv(),kC0TqfYYvwvg.cv(),t102.cv())) goto _0;
			Obj t103;
			if (g->Call(ctx,(PCV[]){t103.cv()},0,1470)) goto _0;
			Variant t104;
			if (g->GetMember(ctx,t103.cv(),KCONST.cv(),t104.cv())) goto _0;
			Variant t105;
			if (g->GetMember(ctx,t104.cv(),KFORCE.cv(),t105.cv())) goto _0;
			Variant t106;
			if (g->Call(ctx,(PCV[]){t106.cv(),t99.cv(),Kcodesign.cv(),lfile.cv(),t102.cv(),t105.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t106.cv()},3,1500)) goto _0;
		}
		goto _15;
_16:
		{
			Variant t107;
			t107.setNull();
			Obj t108;
			c.f.fLine=32;
			if (!g->GetValue(ctx,(PCV[]){t108.cv(),t107.cv(),nullptr})) goto _0;
			l__4D__auto__iter__2=t108.get();
		}
		{
			Obj t109;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t109.cv()},0,1470)) goto _0;
			Obj t110;
			if (g->Call(ctx,(PCV[]){t110.cv()},0,1470)) goto _0;
			Variant t111;
			if (g->GetMember(ctx,t110.cv(),KCONST.cv(),t111.cv())) goto _0;
			Variant t112;
			if (g->GetMember(ctx,t111.cv(),kC0TqfYYvwvg.cv(),t112.cv())) goto _0;
			Obj t113;
			if (g->Call(ctx,(PCV[]){t113.cv()},0,1470)) goto _0;
			Variant t114;
			if (g->GetMember(ctx,t113.cv(),KCONST.cv(),t114.cv())) goto _0;
			Variant t115;
			if (g->GetMember(ctx,t114.cv(),KFORCE.cv(),t115.cv())) goto _0;
			Variant t116;
			if (g->Call(ctx,(PCV[]){t116.cv(),t109.cv(),Kcodesign.cv(),lframework.cv(),t112.cv(),t115.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t116.cv()},3,1500)) goto _0;
		}
_14:
		goto _11;
_12:
		{
			Variant t117;
			t117.setNull();
			Obj t118;
			c.f.fLine=35;
			if (!g->GetValue(ctx,(PCV[]){t118.cv(),t117.cv(),nullptr})) goto _0;
			l__4D__auto__iter__3=t118.get();
		}
_10:
		goto _8;
_9:
		{
			Variant t119;
			t119.setNull();
			Obj t120;
			c.f.fLine=37;
			if (!g->GetValue(ctx,(PCV[]){t120.cv(),t119.cv(),nullptr})) goto _0;
			l__4D__auto__iter__4=t120.get();
		}
		{
			Obj t121;
			c.f.fLine=38;
			if (g->Call(ctx,(PCV[]){t121.cv()},0,1470)) goto _0;
			Bool t122;
			t122=true;
			Bool t123;
			t123=t122.get();
			if (g->Call(ctx,(PCV[]){nullptr,t121.cv(),Kditto.cv(),ltemporaryFolder.cv(),lfile.cv(),t123.cv()},5,1500)) goto _0;
			g->Check(ctx);
		}
		goto _6;
_7:
		{
			Variant t124;
			t124.setNull();
			Obj t125;
			c.f.fLine=39;
			if (!g->GetValue(ctx,(PCV[]){t125.cv(),t124.cv(),nullptr})) goto _0;
			l__4D__auto__iter__5=t125.get();
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KCONST;
extern Txt KNO__OPTIONS;
extern Txt Kcodesign;
extern Txt Kpush;
extern Txt kC0TqfYYvwvg;
extern unsigned char D_proc_SignApp_2E__signApp[];
void proc_SignApp_2E__signApp( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__signApp);
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
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1470)) goto _0;
			Variant t3;
			if (g->GetMember(ctx,t2.cv(),KCONST.cv(),t3.cv())) goto _0;
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),kC0TqfYYvwvg.cv(),t4.cv())) goto _0;
			Obj t5;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),KCONST.cv(),t6.cv())) goto _0;
			Variant t7;
			if (g->GetMember(ctx,t6.cv(),KNO__OPTIONS.cv(),t7.cv())) goto _0;
			Variant t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),t1.cv(),Kcodesign.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t4.cv(),t7.cv()},5,1498)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,2).cv(),Kpush.cv(),t8.cv()},3,1500)) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KFolder;
extern Txt K_2Ecstemp;
extern Txt Kdelete;
extern Txt Kextension_20_3D_3D_20_3A1;
extern Txt Kfiles;
extern Txt Kquery;
extern unsigned char D_proc_SignApp_2E__deleteTempFiles[];
void proc_SignApp_2E__deleteTempFiles( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__deleteTempFiles);
	if (!ctx->doingAbort) try {
		Variant lfiles;
		Variant lfile;
		Obj l__4D__auto__iter__0;
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
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1709)) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),KFolder.cv(),t2.cv())) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			Bool t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t3.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t4.get())) goto _2;
		}
		{
			Variant t5;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t5.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfiles.cv(),Long(1).cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv(),Kquery.cv(),Kextension_20_3D_3D_20_3A1.cv(),K_2Ecstemp.cv()},4,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t6.cv(),lfiles.cv(),nullptr})) goto _0;
		}
		{
			Obj t7;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t7.cv(),lfiles.cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__0=t7.get();
		}
_3:
		{
			Ref t8;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t8.cv(),lfile.cv(),nullptr})) goto _0;
			Bool t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),l__4D__auto__iter__0.cv(),t8.cv()},2,1511)) goto _0;
			if (!(t9.get())) goto _4;
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,lfile.cv(),Kdelete.cv()},2,1500)) goto _0;
		g->Check(ctx);
		goto _3;
_4:
		{
			Variant t10;
			t10.setNull();
			Obj t11;
			c.f.fLine=11;
			if (!g->GetValue(ctx,(PCV[]){t11.cv(),t10.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t11.get();
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K;
extern Txt KNO;
extern Txt k12r2u6v9iUA;
extern Txt kDw5ZZpAxXjU;
extern Txt kLItgW_8dB5I;
extern Txt kN0AHAdtpS2s;
extern Txt kW5bEBx$jxso;
extern Txt kXOuIvTYvEtU;
extern Txt kocXh8guVLBg;
extern Txt kocirC89sOPc;
extern Txt kvEE9WVBpbp0;
extern Txt kz7m_XxPY16k;
extern unsigned char D_proc_SignApp_2E__copyDefaultProperties[];
void proc_SignApp_2E__copyDefaultProperties( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__copyDefaultProperties);
	if (!ctx->doingAbort) try {
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t0.get();
		}
		c.f.fLine=5;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kvEE9WVBpbp0.cv(),KNO.cv())) goto _0;
		c.f.fLine=6;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kN0AHAdtpS2s.cv(),K.cv())) goto _0;
		c.f.fLine=7;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kDw5ZZpAxXjU.cv(),K.cv())) goto _0;
		c.f.fLine=8;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kz7m_XxPY16k.cv(),K.cv())) goto _0;
		c.f.fLine=9;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kocirC89sOPc.cv(),K.cv())) goto _0;
		c.f.fLine=10;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kocXh8guVLBg.cv(),K.cv())) goto _0;
		c.f.fLine=11;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kLItgW_8dB5I.cv(),K.cv())) goto _0;
		c.f.fLine=12;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kXOuIvTYvEtU.cv(),K.cv())) goto _0;
		c.f.fLine=13;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kW5bEBx$jxso.cv(),K.cv())) goto _0;
		c.f.fLine=14;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),k12r2u6v9iUA.cv(),K.cv())) goto _0;
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt k0Rq85tgzVY8;
extern Txt k6MXqg9EUzCw;
extern Txt kE5JXS20q2lc;
extern Txt kEPZiR7NE0WA;
extern Txt kFurnmfhVZA8;
extern Txt kMP5yjaJFVn8;
extern Txt kMfyoIVFI6Hs;
extern Txt kSU1JsWX95HQ;
extern Txt kWnpWQbOaR9g;
extern Txt k_npLrkPHZkA;
extern Txt koEZG3jhm8tA;
extern Txt kwuymuQs6EvU;
extern Txt kxK_J84Gt$HU;
extern Txt ky54myQV6INw;
extern Txt kzmvPROCF4tU;
extern unsigned char D_proc_SignApp_2E__copyDefaultEntitlements[];
void proc_SignApp_2E__copyDefaultEntitlements( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__copyDefaultEntitlements);
	if (!ctx->doingAbort) try {
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t0.get();
		}
		{
			Bool t1;
			t1=true;
			Bool t2;
			t2=t1.get();
			c.f.fLine=8;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kFurnmfhVZA8.cv(),t2.cv())) goto _0;
		}
		{
			Bool t3;
			t3=true;
			Bool t4;
			t4=t3.get();
			c.f.fLine=9;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kMP5yjaJFVn8.cv(),t4.cv())) goto _0;
		}
		{
			Bool t5;
			t5=true;
			Bool t6;
			t6=t5.get();
			c.f.fLine=10;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kEPZiR7NE0WA.cv(),t6.cv())) goto _0;
		}
		{
			Bool t7;
			t7=true;
			Bool t8;
			t8=t7.get();
			c.f.fLine=11;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kxK_J84Gt$HU.cv(),t8.cv())) goto _0;
		}
		{
			Bool t9;
			t9=true;
			Bool t10;
			t10=t9.get();
			c.f.fLine=12;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kWnpWQbOaR9g.cv(),t10.cv())) goto _0;
		}
		{
			Bool t11;
			t11=true;
			Bool t12;
			t12=t11.get();
			c.f.fLine=13;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),k6MXqg9EUzCw.cv(),t12.cv())) goto _0;
		}
		{
			Bool t13;
			t13=true;
			Bool t14;
			t14=t13.get();
			c.f.fLine=14;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kzmvPROCF4tU.cv(),t14.cv())) goto _0;
		}
		{
			Bool t15;
			t15=true;
			Bool t16;
			t16=t15.get();
			c.f.fLine=15;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kMfyoIVFI6Hs.cv(),t16.cv())) goto _0;
		}
		{
			Bool t17;
			t17=true;
			Bool t18;
			t18=t17.get();
			c.f.fLine=16;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kSU1JsWX95HQ.cv(),t18.cv())) goto _0;
		}
		{
			Bool t19;
			t19=true;
			Bool t20;
			t20=t19.get();
			c.f.fLine=17;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kE5JXS20q2lc.cv(),t20.cv())) goto _0;
		}
		{
			Bool t21;
			t21=true;
			Bool t22;
			t22=t21.get();
			c.f.fLine=18;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),k0Rq85tgzVY8.cv(),t22.cv())) goto _0;
		}
		{
			Bool t23;
			t23=true;
			Bool t24;
			t24=t23.get();
			c.f.fLine=19;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),ky54myQV6INw.cv(),t24.cv())) goto _0;
		}
		{
			Bool t25;
			t25=true;
			Bool t26;
			t26=t25.get();
			c.f.fLine=20;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),kwuymuQs6EvU.cv(),t26.cv())) goto _0;
		}
		{
			Bool t27;
			t27=true;
			Bool t28;
			t28=t27.get();
			c.f.fLine=21;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),k_npLrkPHZkA.cv(),t28.cv())) goto _0;
		}
		{
			Bool t29;
			t29=true;
			Bool t30;
			t30=t29.get();
			c.f.fLine=22;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),koEZG3jhm8tA.cv(),t30.cv())) goto _0;
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K;
extern Txt KTRUE;
extern Txt K_0A;
extern Txt K_27;
extern Txt K_27_20;
extern Txt Kpath;
extern Txt Kpush;
extern Txt Ksuccess;
extern Txt Kutf_2D8;
extern Txt k6Nsk9JOUrts;
extern Txt kGq0c4hlZQc4;
extern Txt kKic07$EJFW0;
extern Txt kln$OyXaV5E8;
extern Txt kuia0OvPGsiY;
extern unsigned char D_proc_SignApp_2Einstall__name__tool[];
void proc_SignApp_2Einstall__name__tool( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2Einstall__name__tool);
	if (!ctx->doingAbort) try {
		Obj lstatus;
		Txt lcommand;
		Long lpid;
		Blb lstdIn;
		Blb lstdOut;
		Blb lstdErr;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Bool t1;
			t1=false;
			Bool t2;
			t2=t1.get();
			Obj t3;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t3.cv(),Ksuccess.cv(),t2.cv()},2,1471)) goto _0;
			g->Check(ctx);
			lstatus=t3.get();
		}
		{
			Bool t4;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1572)) goto _0;
			if (!(t4.get())) goto _2;
		}
		{
			Bool t5;
			t5=g->CompareString(ctx,Parm<Txt>(inParams,inNbParam,3).get(),K.get())==0;
			if (!(t5.get())) goto _3;
		}
		{
			Txt t6;
			g->AddString(kGq0c4hlZQc4.get(),K_27.get(),t6.get());
			Txt t7;
			g->AddString(t6.get(),Parm<Txt>(inParams,inNbParam,2).get(),t7.get());
			Txt t8;
			g->AddString(t7.get(),K_27_20.get(),t8.get());
			Txt t9;
			g->AddString(t8.get(),K_27.get(),t9.get());
			Variant t10;
			c.f.fLine=9;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t10.cv())) goto _0;
			Variant t11;
			if (g->OperationOnAny(ctx,0,t9.cv(),t10.cv(),t11.cv())) goto _0;
			Variant t12;
			if (g->OperationOnAny(ctx,0,t11.cv(),K_27.cv(),t12.cv())) goto _0;
			Txt t13;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),t12.cv(),nullptr})) goto _0;
			lcommand=t13.get();
		}
		goto _4;
_3:
		lcommand=kKic07$EJFW0.get();
		{
			Txt t14;
			g->AddString(lcommand.get(),K_27.get(),t14.get());
			Txt t15;
			g->AddString(t14.get(),Parm<Txt>(inParams,inNbParam,2).get(),t15.get());
			Txt t16;
			g->AddString(t15.get(),K_27_20.get(),t16.get());
			Txt t17;
			g->AddString(t16.get(),K_27.get(),t17.get());
			Txt t18;
			g->AddString(t17.get(),Parm<Txt>(inParams,inNbParam,3).get(),t18.get());
			Txt t19;
			g->AddString(t18.get(),K_27_20.get(),t19.get());
			Txt t20;
			g->AddString(t19.get(),K_27.get(),t20.get());
			Variant t21;
			c.f.fLine=12;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t21.cv())) goto _0;
			Variant t22;
			if (g->OperationOnAny(ctx,0,t20.cv(),t21.cv(),t22.cv())) goto _0;
			Variant t23;
			if (g->OperationOnAny(ctx,0,t22.cv(),K_27.cv(),t23.cv())) goto _0;
			Txt t24;
			if (!g->GetValue(ctx,(PCV[]){t24.cv(),t23.cv(),nullptr})) goto _0;
			lcommand=t24.get();
		}
_4:
		c.f.fLine=18;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t25;
			t25.setLocalRef(ctx,lpid.cv());
			Ref t26;
			t26.setLocalRef(ctx,lstdErr.cv());
			Ref t27;
			t27.setLocalRef(ctx,lstdOut.cv());
			Ref t28;
			t28.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t28.cv(),t27.cv(),t26.cv(),t25.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t29;
			t29.setLocalRef(ctx,lstdErr.cv());
			Long t30;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t30.cv(),t29.cv()},1,605)) goto _0;
			if (0==t30.get()) goto _5;
		}
		{
			Ref t32;
			t32.setLocalRef(ctx,lstdErr.cv());
			Txt t33;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t33.cv(),t32.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,lstatus.cv(),kuia0OvPGsiY.cv(),t33.cv())) goto _0;
		}
		{
			Variant t34;
			c.f.fLine=23;
			if (g->GetMember(ctx,lstatus.cv(),kuia0OvPGsiY.cv(),t34.cv())) goto _0;
			Bool t35;
			if (g->OperationOnAny(ctx,6,t34.cv(),kln$OyXaV5E8.cv(),t35.cv())) goto _0;
			Bool t36;
			t36=t35.get();
			if (g->SetMember(ctx,lstatus.cv(),Ksuccess.cv(),t36.cv())) goto _0;
		}
		{
			Variant t37;
			c.f.fLine=24;
			if (g->GetMember(ctx,lstatus.cv(),kuia0OvPGsiY.cv(),t37.cv())) goto _0;
			Long t38;
			t38=1|2;
			Col t39;
			if (g->Call(ctx,(PCV[]){t39.cv(),t37.cv(),K_0A.cv(),t38.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,lstatus.cv(),kuia0OvPGsiY.cv(),t39.cv())) goto _0;
		}
		goto _6;
_5:
		{
			Bool t40;
			t40=true;
			Bool t41;
			t41=t40.get();
			c.f.fLine=26;
			if (g->SetMember(ctx,lstatus.cv(),Ksuccess.cv(),t41.cv())) goto _0;
		}
_6:
		c.f.fLine=29;
		if (g->Call(ctx,(PCV[]){nullptr,Parm<Col>(inParams,inNbParam,4).cv(),Kpush.cv(),lstatus.cv()},3,1500)) goto _0;
		g->Check(ctx);
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K;
extern Txt KFile;
extern Txt KFolder;
extern Txt KInstallPath;
extern Txt KTRUE;
extern Txt K_0A;
extern Txt K_20;
extern Txt K_20_2D_2Didentifier_20;
extern Txt K_2Epkg;
extern Txt K_2F;
extern Txt K_2FApplications;
extern Txt Kcp_20_2DR_20;
extern Txt Kcreate;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt Kidentity;
extern Txt Klength;
extern Txt Kmkdir_20payload;
extern Txt Kname;
extern Txt Kname_20_3D_3D_20_3A1;
extern Txt Kparent;
extern Txt Kpath;
extern Txt Kpayload;
extern Txt Kpkgbuild;
extern Txt KplatformPath;
extern Txt KprimaryBundleId;
extern Txt Kquery;
extern Txt Ksuccess;
extern Txt Kutf_2D8;
extern Txt k$6$J2NdTKeg;
extern Txt k6Nsk9JOUrts;
extern Txt k6ljeFF63G3Y;
extern Txt kITK2i7EaVsw;
extern Txt kNXRBf7MoS1g;
extern Txt kTnEE7ajasDs;
extern Txt kl31q4DzX3CY;
extern Txt kxm4R$uLjZ1U;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2Epkgbuild[];
void proc_SignApp_2Epkgbuild( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2Epkgbuild);
	if (!ctx->doingAbort) try {
		Variant lpayloadFolder;
		Variant lidentity;
		Txt lcommand;
		Txt lsigningIdentity;
		Long lpid;
		Txt linstallLocation;
		Blb lstdIn;
		Blb lstdOut;
		Obj lthis;
		Blb lstdErr;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			lthis=t0.get();
		}
		{
			Bool t1;
			t1=false;
			Bool t2;
			t2=t1.get();
			Obj t3;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t3.cv(),Ksuccess.cv(),t2.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t3.get();
		}
		{
			Bool t4;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1572)) goto _0;
			if (!(t4.get())) goto _2;
		}
		{
			Obj t5;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1709)) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),KFile.cv(),t6.cv())) goto _0;
			Obj t7;
			if (!g->GetValue(ctx,(PCV[]){t7.cv(),t6.cv(),nullptr})) goto _0;
			Bool t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t7.cv()},2,1731)) goto _0;
			g->Check(ctx);
			Obj t9;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1709)) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),KFolder.cv(),t10.cv())) goto _0;
			Obj t11;
			if (!g->GetValue(ctx,(PCV[]){t11.cv(),t10.cv(),nullptr})) goto _0;
			Bool t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t11.cv()},2,1731)) goto _0;
			Bool t13;
			t13=t8.get()||t12.get();
			if (!(t13.get())) goto _3;
		}
		{
			Obj t14;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1709)) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),KFolder.cv(),t15.cv())) goto _0;
			Obj t16;
			if (!g->GetValue(ctx,(PCV[]){t16.cv(),t15.cv(),nullptr})) goto _0;
			Bool t17;
			if (g->Call(ctx,(PCV[]){t17.cv(),Parm<Obj>(inParams,inNbParam,2).cv(),t16.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t17.get())) goto _5;
		}
		{
			Variant t18;
			c.f.fLine=12;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->OperationOnAny(ctx,0,t18.cv(),K_2Epkg.cv(),t19.cv())) goto _0;
			Variant t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),Parm<Obj>(inParams,inNbParam,2).cv(),Kfile.cv(),t19.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t21;
			if (!g->GetValue(ctx,(PCV[]){t21.cv(),t20.cv(),nullptr})) goto _0;
			Parm<Obj>(inParams,inNbParam,2)=t21.get();
		}
		goto _4;
_5:
		{
			Obj t22;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t22.cv()},0,1709)) goto _0;
			Variant t23;
			if (g->GetMember(ctx,t22.cv(),KFile.cv(),t23.cv())) goto _0;
			Obj t24;
			if (!g->GetValue(ctx,(PCV[]){t24.cv(),t23.cv(),nullptr})) goto _0;
			Bool t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),Parm<Obj>(inParams,inNbParam,2).cv(),t24.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t25.get())) goto _6;
		}
		{
			Variant t26;
			c.f.fLine=14;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kparent.cv(),t26.cv())) goto _0;
			Variant t27;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kname.cv(),t27.cv())) goto _0;
			Variant t28;
			if (g->OperationOnAny(ctx,0,t27.cv(),K_2Epkg.cv(),t28.cv())) goto _0;
			Variant t29;
			if (g->Call(ctx,(PCV[]){t29.cv(),t26.cv(),Kfile.cv(),t28.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t30;
			if (!g->GetValue(ctx,(PCV[]){t30.cv(),t29.cv(),nullptr})) goto _0;
			Parm<Obj>(inParams,inNbParam,2)=t30.get();
		}
		goto _4;
_6:
		{
			Variant t31;
			c.f.fLine=16;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kparent.cv(),t31.cv())) goto _0;
			Variant t32;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kname.cv(),t32.cv())) goto _0;
			Variant t33;
			if (g->OperationOnAny(ctx,0,t32.cv(),K_2Epkg.cv(),t33.cv())) goto _0;
			Variant t34;
			if (g->Call(ctx,(PCV[]){t34.cv(),t31.cv(),Kfile.cv(),t33.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t35;
			if (!g->GetValue(ctx,(PCV[]){t35.cv(),t34.cv(),nullptr})) goto _0;
			Parm<Obj>(inParams,inNbParam,2)=t35.get();
		}
_4:
		{
			Obj t36;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t36.cv()},0,1470)) goto _0;
			Variant t37;
			if (g->GetMember(ctx,t36.cv(),Kidentity.cv(),t37.cv())) goto _0;
			Variant t38;
			if (g->GetMember(ctx,t37.cv(),Klength.cv(),t38.cv())) goto _0;
			Bool t39;
			if (g->OperationOnAny(ctx,7,t38.cv(),Num(0).cv(),t39.cv())) goto _0;
			if (!(t39.get())) goto _7;
		}
		{
			Obj t40;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t40.cv()},0,1470)) goto _0;
			Variant t41;
			if (g->GetMember(ctx,t40.cv(),Kidentity.cv(),t41.cv())) goto _0;
			Variant t42;
			if (g->Call(ctx,(PCV[]){t42.cv(),t41.cv(),Kquery.cv(),Kname_20_3D_3D_20_3A1.cv(),kTnEE7ajasDs.cv()},4,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t42.cv(),lidentity.cv(),nullptr})) goto _0;
		}
		{
			Variant t43;
			c.f.fLine=22;
			if (g->GetMember(ctx,lidentity.cv(),Klength.cv(),t43.cv())) goto _0;
			Bool t44;
			if (g->OperationOnAny(ctx,7,t43.cv(),Num(0).cv(),t44.cv())) goto _0;
			if (!(t44.get())) goto _8;
		}
		{
			Variant t45;
			c.f.fLine=23;
			if (g->GetMember(ctx,lidentity.cv(),Long(0).cv(),t45.cv())) goto _0;
			Variant t46;
			if (g->GetMember(ctx,t45.cv(),Kname.cv(),t46.cv())) goto _0;
			Txt t47;
			if (!g->GetValue(ctx,(PCV[]){t47.cv(),t46.cv(),nullptr})) goto _0;
			lsigningIdentity=t47.get();
		}
_8:
_7:
		linstallLocation=K_2FApplications.get();
		{
			Obj t48;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t48.cv()},0,1470)) goto _0;
			Variant t49;
			if (g->GetMember(ctx,t48.cv(),KInstallPath.cv(),t49.cv())) goto _0;
			Bool t50;
			if (g->OperationOnAny(ctx,7,t49.cv(),K.cv(),t50.cv())) goto _0;
			if (!(t50.get())) goto _9;
		}
		{
			Txt t51;
			g->AddString(linstallLocation.get(),K_2F.get(),t51.get());
			Obj t52;
			c.f.fLine=30;
			if (g->Call(ctx,(PCV[]){t52.cv()},0,1470)) goto _0;
			Variant t53;
			if (g->GetMember(ctx,t52.cv(),KInstallPath.cv(),t53.cv())) goto _0;
			Variant t54;
			if (g->OperationOnAny(ctx,0,t51.cv(),t53.cv(),t54.cv())) goto _0;
			Txt t55;
			if (!g->GetValue(ctx,(PCV[]){t55.cv(),t54.cv(),nullptr})) goto _0;
			linstallLocation=t55.get();
		}
_9:
		{
			Variant t56;
			c.f.fLine=33;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kparent.cv(),t56.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t56.cv(),Kcreate.cv()},2,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t57;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t57.cv()},0,486)) goto _0;
			g->Check(ctx);
			Obj t58;
			if (g->Call(ctx,(PCV[]){t58.cv(),t57.cv(),Long(1).cv()},2,1567)) goto _0;
			Txt t59;
			if (g->Call(ctx,(PCV[]){t59.cv()},0,1066)) goto _0;
			Variant t60;
			if (g->Call(ctx,(PCV[]){t60.cv(),t58.cv(),Kfolder.cv(),t59.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t60.cv(),lpayloadFolder.cv(),nullptr})) goto _0;
		}
		c.f.fLine=36;
		if (g->Call(ctx,(PCV[]){nullptr,lpayloadFolder.cv(),Kcreate.cv()},2,1500)) goto _0;
		g->Check(ctx);
		lcommand=Kmkdir_20payload.get();
		{
			Variant t61;
			c.f.fLine=43;
			if (g->GetMember(ctx,lpayloadFolder.cv(),KplatformPath.cv(),t61.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t61.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t62;
			t62.setLocalRef(ctx,lpid.cv());
			Ref t63;
			t63.setLocalRef(ctx,lstdErr.cv());
			Ref t64;
			t64.setLocalRef(ctx,lstdOut.cv());
			Ref t65;
			t65.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=44;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t65.cv(),t64.cv(),t63.cv(),t62.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t66;
			c.f.fLine=46;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t66.cv())) goto _0;
			Txt t67;
			if (!g->GetValue(ctx,(PCV[]){t67.cv(),t66.cv(),nullptr})) goto _0;
			Txt t68;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t67.cv()},t68.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t69;
			g->AddString(Kcp_20_2DR_20.get(),t68.get(),t69.get());
			Txt t70;
			g->AddString(t69.get(),K_20.get(),t70.get());
			Variant t71;
			if (g->Call(ctx,(PCV[]){t71.cv(),lpayloadFolder.cv(),Kfolder.cv(),Kpayload.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t72;
			if (g->GetMember(ctx,t71.cv(),Kpath.cv(),t72.cv())) goto _0;
			Txt t73;
			if (!g->GetValue(ctx,(PCV[]){t73.cv(),t72.cv(),nullptr})) goto _0;
			Txt t74;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t73.cv()},t74.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t70.get(),t74.get(),lcommand.get());
		}
		c.f.fLine=48;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t76;
			t76.setLocalRef(ctx,lpid.cv());
			Ref t77;
			t77.setLocalRef(ctx,lstdErr.cv());
			Ref t78;
			t78.setLocalRef(ctx,lstdOut.cv());
			Ref t79;
			t79.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=49;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t79.cv(),t78.cv(),t77.cv(),t76.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		lcommand=kl31q4DzX3CY.get();
		{
			Variant t80;
			c.f.fLine=53;
			if (g->GetMember(ctx,lpayloadFolder.cv(),KplatformPath.cv(),t80.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t80.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t81;
			t81.setLocalRef(ctx,lpid.cv());
			Ref t82;
			t82.setLocalRef(ctx,lstdErr.cv());
			Ref t83;
			t83.setLocalRef(ctx,lstdOut.cv());
			Ref t84;
			t84.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=54;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t84.cv(),t83.cv(),t82.cv(),t81.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		lcommand=kxm4R$uLjZ1U.get();
		{
			Variant t85;
			c.f.fLine=58;
			if (g->GetMember(ctx,lpayloadFolder.cv(),KplatformPath.cv(),t85.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t85.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t86;
			t86.setLocalRef(ctx,lpid.cv());
			Ref t87;
			t87.setLocalRef(ctx,lstdErr.cv());
			Ref t88;
			t88.setLocalRef(ctx,lstdOut.cv());
			Ref t89;
			t89.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=59;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t89.cv(),t88.cv(),t87.cv(),t86.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t90;
			g->AddString(k$6$J2NdTKeg.get(),lsigningIdentity.get(),t90.get());
			Txt t91;
			g->AddString(t90.get(),kITK2i7EaVsw.get(),t91.get());
			Txt t92;
			t92=linstallLocation.get();
			Txt t93;
			c.f.fLine=61;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t92.cv()},t93.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t94;
			g->AddString(t91.get(),t93.get(),t94.get());
			Txt t95;
			g->AddString(t94.get(),k6ljeFF63G3Y.get(),t95.get());
			Variant t96;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kpath.cv(),t96.cv())) goto _0;
			Txt t97;
			if (!g->GetValue(ctx,(PCV[]){t97.cv(),t96.cv(),nullptr})) goto _0;
			Txt t98;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t97.cv()},t98.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t99;
			g->AddString(t95.get(),t98.get(),t99.get());
			Txt t100;
			g->AddString(t99.get(),K_20_2D_2Didentifier_20.get(),t100.get());
			Obj t101;
			if (g->Call(ctx,(PCV[]){t101.cv()},0,1470)) goto _0;
			Variant t102;
			if (g->GetMember(ctx,t101.cv(),KprimaryBundleId.cv(),t102.cv())) goto _0;
			Variant t103;
			if (g->OperationOnAny(ctx,0,t100.cv(),t102.cv(),t103.cv())) goto _0;
			Txt t104;
			if (!g->GetValue(ctx,(PCV[]){t104.cv(),t103.cv(),nullptr})) goto _0;
			lcommand=t104.get();
		}
		{
			Variant t105;
			c.f.fLine=63;
			if (g->GetMember(ctx,lpayloadFolder.cv(),KplatformPath.cv(),t105.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t105.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t106;
			t106.setLocalRef(ctx,lpid.cv());
			Ref t107;
			t107.setLocalRef(ctx,lstdErr.cv());
			Ref t108;
			t108.setLocalRef(ctx,lstdOut.cv());
			Ref t109;
			t109.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=64;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t109.cv(),t108.cv(),t107.cv(),t106.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t110;
			t110.setLocalRef(ctx,lstdErr.cv());
			Long t111;
			c.f.fLine=66;
			if (g->Call(ctx,(PCV[]){t111.cv(),t110.cv()},1,605)) goto _0;
			if (0==t111.get()) goto _10;
		}
		{
			Ref t113;
			t113.setLocalRef(ctx,lstdErr.cv());
			Txt t114;
			c.f.fLine=67;
			if (g->Call(ctx,(PCV[]){t114.cv(),t113.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kpkgbuild.cv(),t114.cv())) goto _0;
		}
		{
			Variant t115;
			c.f.fLine=68;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kpkgbuild.cv(),t115.cv())) goto _0;
			Long t116;
			t116=1|2;
			Col t117;
			if (g->Call(ctx,(PCV[]){t117.cv(),t115.cv(),K_0A.cv(),t116.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kpkgbuild.cv(),t117.cv())) goto _0;
		}
		goto _11;
_10:
		{
			Ref t118;
			t118.setLocalRef(ctx,lstdOut.cv());
			Long t119;
			c.f.fLine=70;
			if (g->Call(ctx,(PCV[]){t119.cv(),t118.cv()},1,605)) goto _0;
			if (0==t119.get()) goto _12;
		}
		{
			Ref t121;
			t121.setLocalRef(ctx,lstdOut.cv());
			Txt t122;
			c.f.fLine=71;
			if (g->Call(ctx,(PCV[]){t122.cv(),t121.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kpkgbuild.cv(),t122.cv())) goto _0;
		}
		{
			Variant t123;
			c.f.fLine=72;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kpkgbuild.cv(),t123.cv())) goto _0;
			Long t124;
			t124=1|2;
			Col t125;
			if (g->Call(ctx,(PCV[]){t125.cv(),t123.cv(),K_0A.cv(),t124.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kpkgbuild.cv(),t125.cv())) goto _0;
		}
_12:
		{
			Bool t126;
			t126=true;
			Bool t127;
			t127=t126.get();
			c.f.fLine=74;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t127.cv())) goto _0;
		}
_11:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern int32_t vOK;
extern Txt K;
extern Txt KFile;
extern Txt KFolder;
extern Txt KON__PARSE__ERROR;
extern Txt KTRUE;
extern Txt K_0A;
extern Txt K_20;
extern Txt K_2Edmg;
extern Txt K_2Ezip;
extern Txt Kcreate;
extern Txt Kdelete;
extern Txt Kexists;
extern Txt Kextension;
extern Txt Kfile;
extern Txt Khdiutil;
extern Txt Kname;
extern Txt Kparent;
extern Txt Kpath;
extern Txt Kpush;
extern Txt Ksuccess;
extern Txt Kutf_2D8;
extern Txt k6Nsk9JOUrts;
extern Txt kKd1qoKEA1cI;
extern Txt kmcZhn1EfWl0;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2Ehdiutil[];
void proc_SignApp_2Ehdiutil( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2Ehdiutil);
	if (!ctx->doingAbort) try {
		Num v0;
		Txt ldom;
		Bool lunzip;
		Num v1;
		Txt lcommand;
		Num li;
		Long lpid;
		Txt linfo;
		Blb lstdIn;
		Txt lpath;
		Value_array_text lstrings;
		Blb lstdOut;
		Obj lthis;
		Blb lstdErr;
		Txt lstring;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			lthis=t0.get();
		}
		{
			Bool t1;
			t1=false;
			Bool t2;
			t2=t1.get();
			Obj t3;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t3.cv(),Ksuccess.cv(),t2.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t3.get();
		}
		{
			Bool t4;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1572)) goto _0;
			if (!(t4.get())) goto _2;
		}
		{
			Variant t5;
			c.f.fLine=8;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t5.cv())) goto _0;
			Bool t6;
			if (g->OperationOnAny(ctx,6,t5.cv(),K_2Ezip.cv(),t6.cv())) goto _0;
			lunzip=t6.get();
		}
		{
			Obj t7;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1709)) goto _0;
			Variant t8;
			if (g->GetMember(ctx,t7.cv(),KFile.cv(),t8.cv())) goto _0;
			Obj t9;
			if (!g->GetValue(ctx,(PCV[]){t9.cv(),t8.cv(),nullptr})) goto _0;
			Bool t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t9.cv()},2,1731)) goto _0;
			g->Check(ctx);
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1709)) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KFolder.cv(),t12.cv())) goto _0;
			Obj t13;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),t12.cv(),nullptr})) goto _0;
			Bool t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t13.cv()},2,1731)) goto _0;
			Bool t15;
			t15=t10.get()||t14.get();
			if (!(t15.get())) goto _3;
		}
		{
			Obj t16;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t16.cv()},0,1709)) goto _0;
			Variant t17;
			if (g->GetMember(ctx,t16.cv(),KFolder.cv(),t17.cv())) goto _0;
			Obj t18;
			if (!g->GetValue(ctx,(PCV[]){t18.cv(),t17.cv(),nullptr})) goto _0;
			Bool t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),Parm<Obj>(inParams,inNbParam,2).cv(),t18.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t19.get())) goto _5;
		}
		{
			Variant t20;
			c.f.fLine=14;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t20.cv())) goto _0;
			Variant t21;
			if (g->OperationOnAny(ctx,0,t20.cv(),K_2Edmg.cv(),t21.cv())) goto _0;
			Variant t22;
			if (g->Call(ctx,(PCV[]){t22.cv(),Parm<Obj>(inParams,inNbParam,2).cv(),Kfile.cv(),t21.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t23;
			if (!g->GetValue(ctx,(PCV[]){t23.cv(),t22.cv(),nullptr})) goto _0;
			Parm<Obj>(inParams,inNbParam,2)=t23.get();
		}
		goto _4;
_5:
		{
			Obj t24;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t24.cv()},0,1709)) goto _0;
			Variant t25;
			if (g->GetMember(ctx,t24.cv(),KFile.cv(),t25.cv())) goto _0;
			Obj t26;
			if (!g->GetValue(ctx,(PCV[]){t26.cv(),t25.cv(),nullptr})) goto _0;
			Bool t27;
			if (g->Call(ctx,(PCV[]){t27.cv(),Parm<Obj>(inParams,inNbParam,2).cv(),t26.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t27.get())) goto _6;
		}
		{
			Variant t28;
			c.f.fLine=16;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kparent.cv(),t28.cv())) goto _0;
			Variant t29;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kname.cv(),t29.cv())) goto _0;
			Variant t30;
			if (g->OperationOnAny(ctx,0,t29.cv(),K_2Edmg.cv(),t30.cv())) goto _0;
			Variant t31;
			if (g->Call(ctx,(PCV[]){t31.cv(),t28.cv(),Kfile.cv(),t30.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t32;
			if (!g->GetValue(ctx,(PCV[]){t32.cv(),t31.cv(),nullptr})) goto _0;
			Parm<Obj>(inParams,inNbParam,2)=t32.get();
		}
		goto _4;
_6:
		{
			Variant t33;
			c.f.fLine=18;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kparent.cv(),t33.cv())) goto _0;
			Variant t34;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kname.cv(),t34.cv())) goto _0;
			Variant t35;
			if (g->OperationOnAny(ctx,0,t34.cv(),K_2Edmg.cv(),t35.cv())) goto _0;
			Variant t36;
			if (g->Call(ctx,(PCV[]){t36.cv(),t33.cv(),Kfile.cv(),t35.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t37;
			if (!g->GetValue(ctx,(PCV[]){t37.cv(),t36.cv(),nullptr})) goto _0;
			Parm<Obj>(inParams,inNbParam,2)=t37.get();
		}
_4:
		{
			Variant t38;
			c.f.fLine=25;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kexists.cv(),t38.cv())) goto _0;
			Bool t39;
			if (!g->GetValue(ctx,(PCV[]){t39.cv(),t38.cv(),nullptr})) goto _0;
			if (!(t39.get())) goto _7;
		}
		c.f.fLine=26;
		if (g->Call(ctx,(PCV[]){nullptr,Parm<Obj>(inParams,inNbParam,2).cv(),Kdelete.cv(),Long(1).cv()},3,1500)) goto _0;
		g->Check(ctx);
		goto _8;
_7:
		{
			Variant t40;
			c.f.fLine=29;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kparent.cv(),t40.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t40.cv(),Kcreate.cv()},2,1500)) goto _0;
			g->Check(ctx);
		}
_8:
		{
			Variant t41;
			c.f.fLine=33;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t41.cv())) goto _0;
			Txt t42;
			if (!g->GetValue(ctx,(PCV[]){t42.cv(),t41.cv(),nullptr})) goto _0;
			Txt t43;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t42.cv()},t43.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t44;
			g->AddString(kmcZhn1EfWl0.get(),t43.get(),t44.get());
			Txt t45;
			g->AddString(t44.get(),K_20.get(),t45.get());
			Variant t46;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kpath.cv(),t46.cv())) goto _0;
			Txt t47;
			if (!g->GetValue(ctx,(PCV[]){t47.cv(),t46.cv(),nullptr})) goto _0;
			Txt t48;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t47.cv()},t48.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t45.get(),t48.get(),lcommand.get());
		}
		c.f.fLine=34;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t50;
			t50.setLocalRef(ctx,lpid.cv());
			Ref t51;
			t51.setLocalRef(ctx,lstdErr.cv());
			Ref t52;
			t52.setLocalRef(ctx,lstdOut.cv());
			Ref t53;
			t53.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t53.cv(),t52.cv(),t51.cv(),t50.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t54;
			t54.setLocalRef(ctx,lstdErr.cv());
			Long t55;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t55.cv(),t54.cv()},1,605)) goto _0;
			if (0!=t55.get()) goto _9;
		}
		{
			Bool t57;
			t57=true;
			Bool t58;
			t58=t57.get();
			c.f.fLine=38;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t58.cv())) goto _0;
		}
		{
			Ref t59;
			t59.setLocalRef(ctx,lstdOut.cv());
			Txt t60;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t60.cv(),t59.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			linfo=t60.get();
		}
		c.f.fLine=40;
		if (g->Call(ctx,(PCV[]){nullptr,KON__PARSE__ERROR.cv()},1,155)) goto _0;
		g->Check(ctx);
		{
			Ref t61;
			t61.setLocalRef(ctx,linfo.cv());
			Txt t62;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t62.cv(),t61.cv()},1,720)) goto _0;
			g->Check(ctx);
			ldom=t62.get();
		}
		c.f.fLine=42;
		if (g->Call(ctx,(PCV[]){nullptr,K.cv()},1,155)) goto _0;
		g->Check(ctx);
		if (1!=Var<Long>(ctx,vOK).get()) goto _10;
		{
			Ref t64;
			t64.setLocalRef(ctx,lstrings.cv());
			c.f.fLine=44;
			if (g->Call(ctx,(PCV[]){nullptr,t64.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t65;
			t65.setLocalRef(ctx,lstrings.cv());
			Txt t66;
			c.f.fLine=46;
			if (g->Call(ctx,(PCV[]){t66.cv(),ldom.cv(),kKd1qoKEA1cI.cv(),t65.cv()},3,864)) goto _0;
			g->Check(ctx);
			lstring=t66.get();
		}
		{
			Col t67;
			c.f.fLine=47;
			if (g->Call(ctx,(PCV[]){t67.cv()},0,1472)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Khdiutil.cv(),t67.cv())) goto _0;
		}
		li=1;
		{
			Ref t68;
			t68.setLocalRef(ctx,lstrings.cv());
			Long t69;
			c.f.fLine=48;
			if (g->Call(ctx,(PCV[]){t69.cv(),t68.cv()},1,274)) goto _0;
			v0=t69.get();
		}
		goto _11;
_12:
		{
			Long t71;
			t71=(sLONG)lrint(li.get());
			Txt t72;
			t72=lstrings.arrayElem(t71.get()).get();
			lstring=t72.get();
		}
		{
			Ref t73;
			t73.setLocalRef(ctx,lpath.cv());
			c.f.fLine=50;
			if (g->Call(ctx,(PCV[]){nullptr,lstring.cv(),t73.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t74;
			c.f.fLine=51;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Khdiutil.cv(),t74.cv())) goto _0;
			Variant t75;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t75.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t74.cv(),Kpush.cv(),t75.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Num t76;
			t76=li.get()+1;
			li=t76.get();
		}
_11:
		{
			Bool t77;
			t77=!GEqual(glob,v0.get(),li.get());
			if (!(t77.get())) goto _12;
		}
		c.f.fLine=53;
		if (g->Call(ctx,(PCV[]){nullptr,ldom.cv()},1,722)) goto _0;
		g->Check(ctx);
_10:
		goto _13;
_9:
		{
			Ref t78;
			t78.setLocalRef(ctx,lstdErr.cv());
			Txt t79;
			c.f.fLine=56;
			if (g->Call(ctx,(PCV[]){t79.cv(),t78.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Khdiutil.cv(),t79.cv())) goto _0;
		}
		{
			Variant t80;
			c.f.fLine=57;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Khdiutil.cv(),t80.cv())) goto _0;
			Long t81;
			t81=1|2;
			Col t82;
			if (g->Call(ctx,(PCV[]){t82.cv(),t80.cv(),K_0A.cv(),t81.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Khdiutil.cv(),t82.cv())) goto _0;
		}
_13:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KFile;
extern Txt KFolder;
extern Txt KTRUE;
extern Txt K_0A;
extern Txt K_20;
extern Txt K_2Ezip;
extern Txt Kditto;
extern Txt Kditto_20_2Dc_20_2Dk_20;
extern Txt Kditto_20_2Dx_20_2Dk_20;
extern Txt Kextension;
extern Txt Kfile;
extern Txt Kname;
extern Txt Kparent;
extern Txt Kpath;
extern Txt Ksuccess;
extern Txt Kutf_2D8;
extern Txt k6Nsk9JOUrts;
extern Txt kltu0ef0IyAA;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2Editto[];
void proc_SignApp_2Editto( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2Editto);
	if (!ctx->doingAbort) try {
		Bool lunzip;
		Txt lcommand;
		Long lpid;
		Blb lstdIn;
		Blb lstdOut;
		Obj lthis;
		Blb lstdErr;
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			lthis=t0.get();
		}
		{
			Bool t1;
			t1=false;
			Bool t2;
			t2=t1.get();
			Obj t3;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t3.cv(),Ksuccess.cv(),t2.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t3.get();
		}
		{
			Bool t4;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t4.cv()},0,1572)) goto _0;
			if (!(t4.get())) goto _2;
		}
		{
			Variant t5;
			c.f.fLine=8;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t5.cv())) goto _0;
			Bool t6;
			if (g->OperationOnAny(ctx,6,t5.cv(),K_2Ezip.cv(),t6.cv())) goto _0;
			lunzip=t6.get();
		}
		{
			Obj t7;
			c.f.fLine=10;
			if (g->Call(ctx,(PCV[]){t7.cv()},0,1709)) goto _0;
			Variant t8;
			if (g->GetMember(ctx,t7.cv(),KFile.cv(),t8.cv())) goto _0;
			Obj t9;
			if (!g->GetValue(ctx,(PCV[]){t9.cv(),t8.cv(),nullptr})) goto _0;
			Bool t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t9.cv()},2,1731)) goto _0;
			g->Check(ctx);
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1709)) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KFolder.cv(),t12.cv())) goto _0;
			Obj t13;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),t12.cv(),nullptr})) goto _0;
			Bool t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t13.cv()},2,1731)) goto _0;
			Bool t15;
			t15=t10.get()||t14.get();
			if (!(t15.get())) goto _3;
		}
		{
			Variant t16;
			c.f.fLine=12;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t16.cv())) goto _0;
			Bool t17;
			if (g->OperationOnAny(ctx,6,t16.cv(),K_2Ezip.cv(),t17.cv())) goto _0;
			lunzip=t17.get();
		}
		{
			Bool t18;
			t18=lunzip.get();
			Bool t19;
			t19=!(t18.get());
			if (!(t19.get())) goto _4;
		}
		{
			Obj t20;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t20.cv()},0,1709)) goto _0;
			Variant t21;
			if (g->GetMember(ctx,t20.cv(),KFolder.cv(),t21.cv())) goto _0;
			Obj t22;
			if (!g->GetValue(ctx,(PCV[]){t22.cv(),t21.cv(),nullptr})) goto _0;
			Bool t23;
			if (g->Call(ctx,(PCV[]){t23.cv(),Parm<Obj>(inParams,inNbParam,2).cv(),t22.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t23.get())) goto _6;
		}
		{
			Variant t24;
			c.f.fLine=18;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t24.cv())) goto _0;
			Variant t25;
			if (g->OperationOnAny(ctx,0,t24.cv(),K_2Ezip.cv(),t25.cv())) goto _0;
			Variant t26;
			if (g->Call(ctx,(PCV[]){t26.cv(),Parm<Obj>(inParams,inNbParam,2).cv(),Kfile.cv(),t25.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t27;
			if (!g->GetValue(ctx,(PCV[]){t27.cv(),t26.cv(),nullptr})) goto _0;
			Parm<Obj>(inParams,inNbParam,2)=t27.get();
		}
		goto _5;
_6:
		{
			Obj t28;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t28.cv()},0,1709)) goto _0;
			Variant t29;
			if (g->GetMember(ctx,t28.cv(),KFile.cv(),t29.cv())) goto _0;
			Obj t30;
			if (!g->GetValue(ctx,(PCV[]){t30.cv(),t29.cv(),nullptr})) goto _0;
			Bool t31;
			if (g->Call(ctx,(PCV[]){t31.cv(),Parm<Obj>(inParams,inNbParam,2).cv(),t30.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t31.get())) goto _7;
		}
		{
			Variant t32;
			c.f.fLine=20;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kparent.cv(),t32.cv())) goto _0;
			Variant t33;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kname.cv(),t33.cv())) goto _0;
			Variant t34;
			if (g->OperationOnAny(ctx,0,t33.cv(),K_2Ezip.cv(),t34.cv())) goto _0;
			Variant t35;
			if (g->Call(ctx,(PCV[]){t35.cv(),t32.cv(),Kfile.cv(),t34.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t36;
			if (!g->GetValue(ctx,(PCV[]){t36.cv(),t35.cv(),nullptr})) goto _0;
			Parm<Obj>(inParams,inNbParam,2)=t36.get();
		}
		goto _5;
_7:
		{
			Variant t37;
			c.f.fLine=22;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kparent.cv(),t37.cv())) goto _0;
			Variant t38;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kname.cv(),t38.cv())) goto _0;
			Variant t39;
			if (g->OperationOnAny(ctx,0,t38.cv(),K_2Ezip.cv(),t39.cv())) goto _0;
			Variant t40;
			if (g->Call(ctx,(PCV[]){t40.cv(),t37.cv(),Kfile.cv(),t39.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t41;
			if (!g->GetValue(ctx,(PCV[]){t41.cv(),t40.cv(),nullptr})) goto _0;
			Parm<Obj>(inParams,inNbParam,2)=t41.get();
		}
_5:
_4:
		if (!(lunzip.get())) goto _8;
		{
			Variant t42;
			c.f.fLine=33;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t42.cv())) goto _0;
			Txt t43;
			if (!g->GetValue(ctx,(PCV[]){t43.cv(),t42.cv(),nullptr})) goto _0;
			Txt t44;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t43.cv()},t44.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t45;
			g->AddString(Kditto_20_2Dx_20_2Dk_20.get(),t44.get(),t45.get());
			Txt t46;
			g->AddString(t45.get(),K_20.get(),t46.get());
			Variant t47;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kpath.cv(),t47.cv())) goto _0;
			Txt t48;
			if (!g->GetValue(ctx,(PCV[]){t48.cv(),t47.cv(),nullptr})) goto _0;
			Txt t49;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t48.cv()},t49.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t46.get(),t49.get(),lcommand.get());
		}
		c.f.fLine=34;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t51;
			t51.setLocalRef(ctx,lpid.cv());
			Ref t52;
			t52.setLocalRef(ctx,lstdErr.cv());
			Ref t53;
			t53.setLocalRef(ctx,lstdOut.cv());
			Ref t54;
			t54.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t54.cv(),t53.cv(),t52.cv(),t51.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		goto _9;
_8:
		if (!(Parm<Bool>(inParams,inNbParam,3).get())) goto _10;
		{
			Variant t55;
			c.f.fLine=39;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t55.cv())) goto _0;
			Txt t56;
			if (!g->GetValue(ctx,(PCV[]){t56.cv(),t55.cv(),nullptr})) goto _0;
			Txt t57;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t56.cv()},t57.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t58;
			g->AddString(Kditto_20_2Dc_20_2Dk_20.get(),t57.get(),t58.get());
			Txt t59;
			g->AddString(t58.get(),K_20.get(),t59.get());
			Variant t60;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kpath.cv(),t60.cv())) goto _0;
			Txt t61;
			if (!g->GetValue(ctx,(PCV[]){t61.cv(),t60.cv(),nullptr})) goto _0;
			Txt t62;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t61.cv()},t62.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t59.get(),t62.get(),lcommand.get());
		}
		c.f.fLine=40;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t64;
			t64.setLocalRef(ctx,lpid.cv());
			Ref t65;
			t65.setLocalRef(ctx,lstdErr.cv());
			Ref t66;
			t66.setLocalRef(ctx,lstdOut.cv());
			Ref t67;
			t67.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t67.cv(),t66.cv(),t65.cv(),t64.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		goto _11;
_10:
		{
			Variant t68;
			c.f.fLine=44;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t68.cv())) goto _0;
			Txt t69;
			if (!g->GetValue(ctx,(PCV[]){t69.cv(),t68.cv(),nullptr})) goto _0;
			Txt t70;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t69.cv()},t70.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t71;
			g->AddString(kltu0ef0IyAA.get(),t70.get(),t71.get());
			Txt t72;
			g->AddString(t71.get(),K_20.get(),t72.get());
			Variant t73;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),Kpath.cv(),t73.cv())) goto _0;
			Txt t74;
			if (!g->GetValue(ctx,(PCV[]){t74.cv(),t73.cv(),nullptr})) goto _0;
			Txt t75;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t74.cv()},t75.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t72.get(),t75.get(),lcommand.get());
		}
		c.f.fLine=45;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t77;
			t77.setLocalRef(ctx,lpid.cv());
			Ref t78;
			t78.setLocalRef(ctx,lstdErr.cv());
			Ref t79;
			t79.setLocalRef(ctx,lstdOut.cv());
			Ref t80;
			t80.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=46;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t80.cv(),t79.cv(),t78.cv(),t77.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
_11:
		{
			Ref t81;
			t81.setLocalRef(ctx,lstdErr.cv());
			Long t82;
			c.f.fLine=49;
			if (g->Call(ctx,(PCV[]){t82.cv(),t81.cv()},1,605)) goto _0;
			if (0==t82.get()) goto _12;
		}
		{
			Ref t84;
			t84.setLocalRef(ctx,lstdErr.cv());
			Txt t85;
			c.f.fLine=50;
			if (g->Call(ctx,(PCV[]){t85.cv(),t84.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kditto.cv(),t85.cv())) goto _0;
		}
		{
			Variant t86;
			c.f.fLine=51;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kditto.cv(),t86.cv())) goto _0;
			Long t87;
			t87=1|2;
			Col t88;
			if (g->Call(ctx,(PCV[]){t88.cv(),t86.cv(),K_0A.cv(),t87.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kditto.cv(),t88.cv())) goto _0;
		}
		goto _13;
_12:
		{
			Ref t89;
			t89.setLocalRef(ctx,lstdOut.cv());
			Long t90;
			c.f.fLine=53;
			if (g->Call(ctx,(PCV[]){t90.cv(),t89.cv()},1,605)) goto _0;
			if (0==t90.get()) goto _14;
		}
		{
			Ref t92;
			t92.setLocalRef(ctx,lstdOut.cv());
			Txt t93;
			c.f.fLine=54;
			if (g->Call(ctx,(PCV[]){t93.cv(),t92.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kditto.cv(),t93.cv())) goto _0;
		}
		{
			Variant t94;
			c.f.fLine=55;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kditto.cv(),t94.cv())) goto _0;
			Long t95;
			t95=1|2;
			Col t96;
			if (g->Call(ctx,(PCV[]){t96.cv(),t94.cv(),K_0A.cv(),t95.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kditto.cv(),t96.cv())) goto _0;
		}
_14:
		{
			Bool t97;
			t97=true;
			Bool t98;
			t98=t97.get();
			c.f.fLine=57;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t98.cv())) goto _0;
		}
_13:
_9:
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt K;
extern Txt K1_2E0;
extern Txt KContents;
extern Txt KFolder;
extern Txt KInfo_2Eplist;
extern Txt KON__PARSE__ERROR;
extern Txt KResources;
extern Txt KTRUE;
extern Txt K_0A;
extern Txt K_20;
extern Txt K_20_2D_2Dsign_20;
extern Txt K_2D_2Dforce_20;
extern Txt K_40signed_40;
extern Txt K__clean;
extern Txt Kapp;
extern Txt Kcodesign;
extern Txt Kcreate;
extern Txt Kdict;
extern Txt Kentitlements;
extern Txt Kexists;
extern Txt Kextension;
extern Txt Kfalse;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt Kforce;
extern Txt Kkey;
extern Txt Klocal;
extern Txt Kmecab;
extern Txt Kname;
extern Txt Kparent;
extern Txt Kpath;
extern Txt KplatformPath;
extern Txt Kplist;
extern Txt Kremove;
extern Txt KsigningIdentity;
extern Txt Kstring;
extern Txt Ksuccess;
extern Txt Ktrue;
extern Txt Kutf_2D8;
extern Txt Kversion;
extern Txt k0PRYWzDJOxQ;
extern Txt k1Yq0t6Q$INY;
extern Txt k5ilklSRgQLQ;
extern Txt k6Nsk9JOUrts;
extern Txt kFhCWv3RGpdA;
extern Txt kM6ytXZqG53o;
extern Txt kNXRBf7MoS1g;
extern Txt kPU128yYOV7Y;
extern Txt kRFadbNtv9R0;
extern Txt kRa5p_fTsGBU;
extern Txt kUmXp4ya$_sk;
extern Txt kg$97alub$MA;
extern Txt kniYEUUPuHPs;
extern Txt kyz$Xvsj2mmU;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2Ecodesign[];
void proc_SignApp_2Ecodesign( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2Ecodesign);
	if (!ctx->doingAbort) try {
		Variant lentitlements;
		Txt ldom;
		Txt lbundleType;
		Txt lkeyName;
		Txt ldoctype;
		Txt lcommand;
		Long li;
		Txt lvalue;
		Long lpid;
		Variant lkey;
		Blb lstdIn;
		Variant linfoPlistFile;
		Obj l__4D__auto__iter__0;
		Obj l__4D__auto__iter__1;
		Obj l__4D__auto__iter__2;
		Variant lentitlementsFile;
		Variant lentitlementsFolder;
		Variant lkeys;
		Blb lstdOut;
		Txt ldict;
		Txt lresourcesPath;
		Blb lstdErr;
		Variant lresourcesFolder;
		new ( outResult) Obj();
		{
			Bool t0;
			t0=false;
			Bool t1;
			t1=t0.get();
			Obj t2;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t2.cv(),Ksuccess.cv(),t1.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t2.get();
		}
		{
			Obj t3;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1470)) goto _0;
			Variant t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),t3.cv(),kRFadbNtv9R0.cv()},2,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t4.cv(),lkeys.cv(),nullptr})) goto _0;
		}
		{
			Obj t5;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t5.cv()},0,1470)) goto _0;
			Variant t6;
			if (g->GetMember(ctx,t5.cv(),Kplist.cv(),t6.cv())) goto _0;
			Variant t7;
			t7.setNull();
			Bool t8;
			if (g->OperationOnAny(ctx,7,t6.cv(),t7.cv(),t8.cv())) goto _0;
			if (!(t8.get())) goto _2;
		}
		{
			Obj t9;
			c.f.fLine=7;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1470)) goto _0;
			Variant t10;
			if (g->GetMember(ctx,t9.cv(),Kplist.cv(),t10.cv())) goto _0;
			Obj t11;
			if (g->Call(ctx,(PCV[]){t11.cv(),t10.cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__0=t11.get();
		}
_3:
		{
			Ref t12;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t12.cv(),lkey.cv(),nullptr})) goto _0;
			Bool t13;
			if (g->Call(ctx,(PCV[]){t13.cv(),l__4D__auto__iter__0.cv(),t12.cv()},2,1511)) goto _0;
			if (!(t13.get())) goto _4;
		}
		{
			Obj t14;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),Kplist.cv(),t15.cv())) goto _0;
			Variant t16;
			if (g->GetMember(ctx,t15.cv(),lkey.cv(),t16.cv())) goto _0;
			if (g->SetMember(ctx,lkeys.cv(),lkey.cv(),t16.cv())) goto _0;
		}
		goto _3;
_4:
		{
			Variant t17;
			t17.setNull();
			Obj t18;
			c.f.fLine=9;
			if (!g->GetValue(ctx,(PCV[]){t18.cv(),t17.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t18.get();
		}
_2:
		{
			Obj t19;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t19.cv()},0,1470)) goto _0;
			Variant t20;
			if (g->Call(ctx,(PCV[]){t20.cv(),t19.cv(),kyz$Xvsj2mmU.cv()},2,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t20.cv(),lentitlements.cv(),nullptr})) goto _0;
		}
		if (!(Parm<Bool>(inParams,inNbParam,2).get())) goto _5;
		{
			Obj t21;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t21.cv()},0,1470)) goto _0;
			Variant t22;
			if (g->GetMember(ctx,t21.cv(),Kentitlements.cv(),t22.cv())) goto _0;
			Obj t23;
			if (g->Call(ctx,(PCV[]){t23.cv(),t22.cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__1=t23.get();
		}
_6:
		{
			Ref t24;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t24.cv(),lkey.cv(),nullptr})) goto _0;
			Bool t25;
			if (g->Call(ctx,(PCV[]){t25.cv(),l__4D__auto__iter__1.cv(),t24.cv()},2,1511)) goto _0;
			if (!(t25.get())) goto _7;
		}
		{
			Obj t26;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t26.cv()},0,1470)) goto _0;
			Variant t27;
			if (g->GetMember(ctx,t26.cv(),Kentitlements.cv(),t27.cv())) goto _0;
			Variant t28;
			if (g->GetMember(ctx,t27.cv(),lkey.cv(),t28.cv())) goto _0;
			if (g->SetMember(ctx,lentitlements.cv(),lkey.cv(),t28.cv())) goto _0;
		}
		goto _6;
_7:
		{
			Variant t29;
			t29.setNull();
			Obj t30;
			c.f.fLine=17;
			if (!g->GetValue(ctx,(PCV[]){t30.cv(),t29.cv(),nullptr})) goto _0;
			l__4D__auto__iter__1=t30.get();
		}
_5:
		{
			Obj t31;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t31.cv()},0,1709)) goto _0;
			Variant t32;
			if (g->GetMember(ctx,t31.cv(),KFolder.cv(),t32.cv())) goto _0;
			Obj t33;
			if (!g->GetValue(ctx,(PCV[]){t33.cv(),t32.cv(),nullptr})) goto _0;
			Bool t34;
			if (g->Call(ctx,(PCV[]){t34.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t33.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t34.get())) goto _8;
		}
		{
			Variant t35;
			c.f.fLine=29;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t35.cv())) goto _0;
			Variant t36;
			if (g->Call(ctx,(PCV[]){t36.cv(),t35.cv(),Long(2).cv()},2,12)) goto _0;
			Txt t37;
			if (!g->GetValue(ctx,(PCV[]){t37.cv(),t36.cv(),nullptr})) goto _0;
			lbundleType=t37.get();
		}
		{
			Variant t38;
			c.f.fLine=30;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t38.cv())) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),lbundleType.cv(),t38.cv())) goto _0;
		}
		{
			Variant t39;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t39.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KContents.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t40;
			if (g->Call(ctx,(PCV[]){t40.cv(),t39.cv(),Kfile.cv(),KInfo_2Eplist.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t40.cv(),linfoPlistFile.cv(),nullptr})) goto _0;
		}
		{
			Variant t41;
			c.f.fLine=35;
			if (g->GetMember(ctx,linfoPlistFile.cv(),Kexists.cv(),t41.cv())) goto _0;
			Bool t42;
			if (!g->GetValue(ctx,(PCV[]){t42.cv(),t41.cv(),nullptr})) goto _0;
			Bool t43;
			t43=!(t42.get());
			if (!(t43.get())) goto _9;
		}
		{
			Variant t44;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t44.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t44.cv(),lresourcesFolder.cv(),nullptr})) goto _0;
		}
		{
			Variant t45;
			c.f.fLine=38;
			if (g->GetMember(ctx,lresourcesFolder.cv(),KplatformPath.cv(),t45.cv())) goto _0;
			Ref t46;
			t46.setLocalRef(ctx,lresourcesPath.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t45.cv(),t46.cv()},2,695)) goto _0;
			g->Check(ctx);
		}
		{
			Obj t47;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t47.cv(),lresourcesPath.cv(),Long(1).cv()},2,1567)) goto _0;
			g->Check(ctx);
			Variant t48;
			if (g->Call(ctx,(PCV[]){t48.cv(),t47.cv(),Kfile.cv(),KInfo_2Eplist.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t48.cv(),linfoPlistFile.cv(),nullptr})) goto _0;
		}
_9:
		{
			Variant t49;
			c.f.fLine=42;
			if (g->GetMember(ctx,linfoPlistFile.cv(),Kexists.cv(),t49.cv())) goto _0;
			Bool t50;
			if (!g->GetValue(ctx,(PCV[]){t50.cv(),t49.cv(),nullptr})) goto _0;
			Bool t51;
			t51=!(t50.get());
			if (!(t51.get())) goto _10;
		}
		{
			Variant t52;
			c.f.fLine=44;
			if (g->Call(ctx,(PCV[]){t52.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),Kfolder.cv(),KResources.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t52.cv(),lresourcesFolder.cv(),nullptr})) goto _0;
		}
		{
			Variant t53;
			c.f.fLine=45;
			if (g->Call(ctx,(PCV[]){t53.cv(),lresourcesFolder.cv(),Kfile.cv(),KInfo_2Eplist.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t53.cv(),linfoPlistFile.cv(),nullptr})) goto _0;
		}
_10:
		{
			Variant t54;
			c.f.fLine=48;
			if (g->GetMember(ctx,linfoPlistFile.cv(),Kexists.cv(),t54.cv())) goto _0;
			Variant t55;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kmecab.cv(),t55.cv())) goto _0;
			Bool t56;
			if (g->Call(ctx,(PCV[]){t56.cv(),t55.cv()},1,1537)) goto _0;
			Variant t57;
			if (g->OperationOnAny(ctx,8,t54.cv(),t56.cv(),t57.cv())) goto _0;
			Bool t58;
			if (!g->GetValue(ctx,(PCV[]){t58.cv(),t57.cv(),nullptr})) goto _0;
			if (!(t58.get())) goto _11;
		}
		{
			Obj t59;
			c.f.fLine=49;
			if (g->Call(ctx,(PCV[]){t59.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t59.cv(),kFhCWv3RGpdA.cv(),linfoPlistFile.cv(),lkeys.cv(),Res<Obj>(outResult).cv()},5,1500)) goto _0;
			g->Check(ctx);
		}
_11:
		{
			Variant t60;
			c.f.fLine=52;
			if (g->GetMember(ctx,linfoPlistFile.cv(),Kexists.cv(),t60.cv())) goto _0;
			Bool t61;
			t61=g->CompareString(ctx,lbundleType.get(),Kapp.get())==0;
			Variant t62;
			if (g->OperationOnAny(ctx,8,t60.cv(),t61.cv(),t62.cv())) goto _0;
			Bool t63;
			if (!g->GetValue(ctx,(PCV[]){t63.cv(),t62.cv(),nullptr})) goto _0;
			if (!(t63.get())) goto _12;
		}
		{
			Obj t64;
			c.f.fLine=53;
			if (g->Call(ctx,(PCV[]){t64.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t64.cv(),k1Yq0t6Q$INY.cv(),linfoPlistFile.cv(),lkeys.cv(),Res<Obj>(outResult).cv()},5,1500)) goto _0;
			g->Check(ctx);
		}
_12:
_8:
		{
			Variant t65;
			c.f.fLine=58;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kremove.cv(),t65.cv())) goto _0;
			Bool t66;
			if (g->Call(ctx,(PCV[]){t66.cv(),t65.cv()},1,1537)) goto _0;
			if (!(t66.get())) goto _13;
		}
		{
			Obj t67;
			c.f.fLine=59;
			if (g->Call(ctx,(PCV[]){t67.cv()},0,1470)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t67.cv(),K__clean.cv(),Parm<Obj>(inParams,inNbParam,1).cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t68;
			c.f.fLine=60;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t68.cv())) goto _0;
			Variant t69;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t69.cv())) goto _0;
			Variant t70;
			if (g->OperationOnAny(ctx,0,t68.cv(),t69.cv(),t70.cv())) goto _0;
			Txt t71;
			if (!g->GetValue(ctx,(PCV[]){t71.cv(),t70.cv(),nullptr})) goto _0;
			Txt t72;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t71.cv()},t72.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(k0PRYWzDJOxQ.get(),t72.get(),lcommand.get());
		}
		goto _14;
_13:
		{
			Bool t74;
			t74=false;
			Bool t75;
			t75=t74.get();
			Obj t76;
			c.f.fLine=63;
			if (g->Call(ctx,(PCV[]){t76.cv(),Ksuccess.cv(),t75.cv()},2,1471)) goto _0;
			g->Check(ctx);
			Res<Obj>(outResult)=t76.get();
		}
		{
			Variant t77;
			c.f.fLine=65;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Klocal.cv(),t77.cv())) goto _0;
			Bool t78;
			if (g->Call(ctx,(PCV[]){t78.cv(),t77.cv()},1,1537)) goto _0;
			if (!(t78.get())) goto _15;
		}
		lcommand=kPU128yYOV7Y.get();
		goto _16;
_15:
		lcommand=kM6ytXZqG53o.get();
_16:
		{
			Variant t79;
			c.f.fLine=71;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kforce.cv(),t79.cv())) goto _0;
			Bool t80;
			if (g->Call(ctx,(PCV[]){t80.cv(),t79.cv()},1,1537)) goto _0;
			if (!(t80.get())) goto _17;
		}
		{
			Txt t81;
			g->AddString(lcommand.get(),K_2D_2Dforce_20.get(),t81.get());
			lcommand=t81.get();
		}
_17:
		{
			Bool t82;
			t82=Parm<Bool>(inParams,inNbParam,2).get();
			Bool t83;
			t83=!(t82.get());
			if (!(t83.get())) goto _18;
		}
		{
			Txt t84;
			g->AddString(lcommand.get(),K_20_2D_2Dsign_20.get(),t84.get());
			Obj t85;
			c.f.fLine=77;
			if (g->Call(ctx,(PCV[]){t85.cv()},0,1470)) goto _0;
			Variant t86;
			if (g->GetMember(ctx,t85.cv(),KsigningIdentity.cv(),t86.cv())) goto _0;
			Txt t87;
			if (!g->GetValue(ctx,(PCV[]){t87.cv(),t86.cv(),nullptr})) goto _0;
			Txt t88;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t87.cv()},t88.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t89;
			g->AddString(t84.get(),t88.get(),t89.get());
			Txt t90;
			g->AddString(t89.get(),K_20.get(),t90.get());
			Variant t91;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t91.cv())) goto _0;
			Variant t92;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t92.cv())) goto _0;
			Variant t93;
			if (g->OperationOnAny(ctx,0,t91.cv(),t92.cv(),t93.cv())) goto _0;
			Txt t94;
			if (!g->GetValue(ctx,(PCV[]){t94.cv(),t93.cv(),nullptr})) goto _0;
			Txt t95;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t94.cv()},t95.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t90.get(),t95.get(),lcommand.get());
		}
		goto _19;
_18:
		{
			Txt t97;
			c.f.fLine=82;
			if (g->Call(ctx,(PCV[]){t97.cv()},0,486)) goto _0;
			g->Check(ctx);
			Obj t98;
			if (g->Call(ctx,(PCV[]){t98.cv(),t97.cv(),Long(1).cv()},2,1567)) goto _0;
			Txt t99;
			if (g->Call(ctx,(PCV[]){t99.cv()},0,1066)) goto _0;
			Variant t100;
			if (g->Call(ctx,(PCV[]){t100.cv(),t98.cv(),Kfolder.cv(),t99.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t100.cv(),lentitlementsFolder.cv(),nullptr})) goto _0;
		}
		c.f.fLine=83;
		if (g->Call(ctx,(PCV[]){nullptr,lentitlementsFolder.cv(),Kcreate.cv()},2,1500)) goto _0;
		g->Check(ctx);
		{
			Variant t101;
			c.f.fLine=84;
			if (g->Call(ctx,(PCV[]){t101.cv(),lentitlementsFolder.cv(),Kfile.cv(),kniYEUUPuHPs.cv()},3,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t101.cv(),lentitlementsFile.cv(),nullptr})) goto _0;
		}
		{
			Txt t102;
			c.f.fLine=86;
			if (g->Call(ctx,(PCV[]){t102.cv(),Kplist.cv()},1,861)) goto _0;
			g->Check(ctx);
			ldom=t102.get();
		}
		{
			Txt t103;
			c.f.fLine=87;
			if (g->Call(ctx,(PCV[]){t103.cv(),ldom.cv(),Long(10).cv(),kUmXp4ya$_sk.cv()},3,1080)) goto _0;
			g->Check(ctx);
			ldoctype=t103.get();
		}
		c.f.fLine=88;
		if (g->Call(ctx,(PCV[]){nullptr,ldom.cv(),Kversion.cv(),K1_2E0.cv()},3,866)) goto _0;
		g->Check(ctx);
		{
			Txt t104;
			c.f.fLine=89;
			if (g->Call(ctx,(PCV[]){t104.cv(),ldom.cv(),Kdict.cv()},2,865)) goto _0;
			g->Check(ctx);
			ldict=t104.get();
		}
		{
			Obj t105;
			c.f.fLine=90;
			if (g->Call(ctx,(PCV[]){t105.cv(),lentitlements.cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__2=t105.get();
		}
_20:
		{
			Ref t106;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t106.cv(),lkey.cv(),nullptr})) goto _0;
			Bool t107;
			if (g->Call(ctx,(PCV[]){t107.cv(),l__4D__auto__iter__2.cv(),t106.cv()},2,1511)) goto _0;
			if (!(t107.get())) goto _21;
		}
		{
			Variant t108;
			c.f.fLine=92;
			if (g->GetMember(ctx,lentitlements.cv(),lkey.cv(),t108.cv())) goto _0;
			Long t109;
			if (g->Call(ctx,(PCV[]){t109.cv(),t108.cv()},1,1509)) goto _0;
			Bool t110;
			t110=2==t109.get();
			if (!(t110.get())) goto _23;
		}
		{
			Txt t111;
			c.f.fLine=93;
			if (g->Call(ctx,(PCV[]){t111.cv(),ldict.cv(),Kkey.cv()},2,865)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t111.cv(),lkey.cv()},2,868)) goto _0;
		}
		{
			Txt t112;
			c.f.fLine=94;
			if (g->Call(ctx,(PCV[]){t112.cv(),ldict.cv(),Kstring.cv()},2,865)) goto _0;
			g->Check(ctx);
			Variant t113;
			if (g->GetMember(ctx,lkeys.cv(),lkey.cv(),t113.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t112.cv(),t113.cv()},2,868)) goto _0;
		}
		goto _22;
_23:
		{
			Variant t114;
			c.f.fLine=95;
			if (g->GetMember(ctx,lentitlements.cv(),lkey.cv(),t114.cv())) goto _0;
			Long t115;
			if (g->Call(ctx,(PCV[]){t115.cv(),t114.cv()},1,1509)) goto _0;
			Bool t116;
			t116=6==t115.get();
			if (!(t116.get())) goto _24;
		}
		{
			Txt t117;
			c.f.fLine=96;
			if (g->Call(ctx,(PCV[]){t117.cv(),ldict.cv(),Kkey.cv()},2,865)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t117.cv(),lkey.cv()},2,868)) goto _0;
		}
		{
			Variant t118;
			c.f.fLine=97;
			if (g->GetMember(ctx,lentitlements.cv(),lkey.cv(),t118.cv())) goto _0;
			Bool t119;
			if (g->Call(ctx,(PCV[]){t119.cv(),t118.cv()},1,1537)) goto _0;
			if (!(t119.get())) goto _25;
		}
		{
			Txt t120;
			c.f.fLine=98;
			if (g->Call(ctx,(PCV[]){t120.cv(),ldict.cv(),Ktrue.cv()},2,865)) goto _0;
			g->Check(ctx);
			lvalue=t120.get();
		}
		goto _26;
_25:
		{
			Txt t121;
			c.f.fLine=100;
			if (g->Call(ctx,(PCV[]){t121.cv(),ldict.cv(),Kfalse.cv()},2,865)) goto _0;
			g->Check(ctx);
			lvalue=t121.get();
		}
_26:
		goto _22;
_24:
_22:
		goto _20;
_21:
		{
			Variant t122;
			t122.setNull();
			Obj t123;
			c.f.fLine=105;
			if (!g->GetValue(ctx,(PCV[]){t123.cv(),t122.cv(),nullptr})) goto _0;
			l__4D__auto__iter__2=t123.get();
		}
		c.f.fLine=107;
		if (g->Call(ctx,(PCV[]){nullptr,KON__PARSE__ERROR.cv()},1,155)) goto _0;
		g->Check(ctx);
		{
			Variant t124;
			c.f.fLine=108;
			if (g->GetMember(ctx,lentitlementsFile.cv(),KplatformPath.cv(),t124.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,ldom.cv(),t124.cv()},2,862)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=109;
		if (g->Call(ctx,(PCV[]){nullptr,K.cv()},1,155)) goto _0;
		g->Check(ctx);
		c.f.fLine=111;
		if (g->Call(ctx,(PCV[]){nullptr,ldom.cv()},1,722)) goto _0;
		g->Check(ctx);
		{
			Variant t125;
			c.f.fLine=113;
			if (g->GetMember(ctx,lentitlementsFile.cv(),Kparent.cv(),t125.cv())) goto _0;
			Variant t126;
			if (g->GetMember(ctx,t125.cv(),KplatformPath.cv(),t126.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t126.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=114;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Variant t127;
			c.f.fLine=115;
			if (g->GetMember(ctx,lentitlementsFile.cv(),Kname.cv(),t127.cv())) goto _0;
			Variant t128;
			if (g->GetMember(ctx,lentitlementsFile.cv(),Kextension.cv(),t128.cv())) goto _0;
			Variant t129;
			if (g->OperationOnAny(ctx,0,t127.cv(),t128.cv(),t129.cv())) goto _0;
			Txt t130;
			if (!g->GetValue(ctx,(PCV[]){t130.cv(),t129.cv(),nullptr})) goto _0;
			Txt t131;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t130.cv()},t131.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t132;
			g->AddString(kRa5p_fTsGBU.get(),t131.get(),t132.get());
			Ref t133;
			t133.setLocalRef(ctx,lpid.cv());
			Ref t134;
			t134.setLocalRef(ctx,lstdErr.cv());
			Ref t135;
			t135.setLocalRef(ctx,lstdOut.cv());
			Ref t136;
			t136.setLocalRef(ctx,lstdIn.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t132.cv(),t136.cv(),t135.cv(),t134.cv(),t133.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t137;
			g->AddString(lcommand.get(),k5ilklSRgQLQ.get(),t137.get());
			Variant t138;
			c.f.fLine=117;
			if (g->GetMember(ctx,lentitlementsFile.cv(),Kpath.cv(),t138.cv())) goto _0;
			Txt t139;
			if (!g->GetValue(ctx,(PCV[]){t139.cv(),t138.cv(),nullptr})) goto _0;
			Txt t140;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t139.cv()},t140.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t141;
			g->AddString(t137.get(),t140.get(),t141.get());
			Txt t142;
			g->AddString(t141.get(),K_20_2D_2Dsign_20.get(),t142.get());
			Obj t143;
			if (g->Call(ctx,(PCV[]){t143.cv()},0,1470)) goto _0;
			Variant t144;
			if (g->GetMember(ctx,t143.cv(),KsigningIdentity.cv(),t144.cv())) goto _0;
			Txt t145;
			if (!g->GetValue(ctx,(PCV[]){t145.cv(),t144.cv(),nullptr})) goto _0;
			Txt t146;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t145.cv()},t146.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t147;
			g->AddString(t142.get(),t146.get(),t147.get());
			Txt t148;
			g->AddString(t147.get(),K_20.get(),t148.get());
			Variant t149;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t149.cv())) goto _0;
			Variant t150;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t150.cv())) goto _0;
			Variant t151;
			if (g->OperationOnAny(ctx,0,t149.cv(),t150.cv(),t151.cv())) goto _0;
			Txt t152;
			if (!g->GetValue(ctx,(PCV[]){t152.cv(),t151.cv(),nullptr})) goto _0;
			Txt t153;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t152.cv()},t153.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t148.get(),t153.get(),lcommand.get());
		}
		c.f.fLine=119;
		if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kentitlements.cv(),lentitlements.cv())) goto _0;
_19:
_14:
		{
			Variant t155;
			c.f.fLine=125;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kparent.cv(),t155.cv())) goto _0;
			Variant t156;
			if (g->GetMember(ctx,t155.cv(),KplatformPath.cv(),t156.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t156.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=126;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t157;
			t157.setLocalRef(ctx,lstdOut.cv());
			g->Clear(ctx, t157.ref());
		}
		{
			Ref t158;
			t158.setLocalRef(ctx,lstdErr.cv());
			g->Clear(ctx, t158.ref());
		}
		{
			Ref t159;
			t159.setLocalRef(ctx,lpid.cv());
			Ref t160;
			t160.setLocalRef(ctx,lstdErr.cv());
			Ref t161;
			t161.setLocalRef(ctx,lstdOut.cv());
			Ref t162;
			t162.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=131;
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t162.cv(),t161.cv(),t160.cv(),t159.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t163;
			t163.setLocalRef(ctx,lstdErr.cv());
			Long t164;
			c.f.fLine=133;
			if (g->Call(ctx,(PCV[]){t164.cv(),t163.cv()},1,605)) goto _0;
			if (0==t164.get()) goto _27;
		}
		{
			Ref t166;
			t166.setLocalRef(ctx,lstdErr.cv());
			Txt t167;
			c.f.fLine=134;
			if (g->Call(ctx,(PCV[]){t167.cv(),t166.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kcodesign.cv(),t167.cv())) goto _0;
		}
		{
			Variant t168;
			c.f.fLine=135;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kcodesign.cv(),t168.cv())) goto _0;
			Bool t169;
			if (g->OperationOnAny(ctx,6,t168.cv(),kg$97alub$MA.cv(),t169.cv())) goto _0;
			Bool t170;
			t170=t169.get();
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t170.cv())) goto _0;
		}
		{
			Variant t171;
			c.f.fLine=136;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t171.cv())) goto _0;
			Variant t172;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kcodesign.cv(),t172.cv())) goto _0;
			Bool t173;
			if (g->OperationOnAny(ctx,6,t172.cv(),K_40signed_40.cv(),t173.cv())) goto _0;
			Variant t174;
			if (g->OperationOnAny(ctx,9,t171.cv(),t173.cv(),t174.cv())) goto _0;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t174.cv())) goto _0;
		}
		{
			Variant t175;
			c.f.fLine=137;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kcodesign.cv(),t175.cv())) goto _0;
			Long t176;
			t176=1|2;
			Col t177;
			if (g->Call(ctx,(PCV[]){t177.cv(),t175.cv(),K_0A.cv(),t176.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kcodesign.cv(),t177.cv())) goto _0;
		}
		goto _28;
_27:
		{
			Bool t178;
			t178=true;
			Bool t179;
			t179=t178.get();
			c.f.fLine=139;
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Ksuccess.cv(),t179.cv())) goto _0;
		}
_28:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern int32_t vOK;
extern Txt K;
extern Txt KFile;
extern Txt KON__PARSE__ERROR;
extern Txt KTRUE;
extern Txt K_0A;
extern Txt K_20;
extern Txt Kcodesign;
extern Txt Kextension;
extern Txt Kname;
extern Txt Kparent;
extern Txt KplatformPath;
extern Txt Kplist;
extern Txt Kremove;
extern Txt KsigningIdentity;
extern Txt Ksuccess;
extern Txt Kutf_2D8;
extern Txt k6Nsk9JOUrts;
extern Txt k94rHuiUr1Z8;
extern Txt kNXRBf7MoS1g;
extern Txt kRa5p_fTsGBU;
extern Txt kbrxnXKXSDXg;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2E__lowercaseExecutableName[];
void proc_SignApp_2E__lowercaseExecutableName( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__lowercaseExecutableName);
	if (!ctx->doingAbort) try {
		Txt ldom;
		Txt lcommand;
		Variant lpid;
		Txt ldomKey;
		Blb lstdIn;
		Variant loptions;
		Txt lstringValue;
		Blb lstdOut;
		Blb lstdErr;
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
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1709)) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),KFile.cv(),t2.cv())) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			Bool t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t3.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t4.get())) goto _2;
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,KON__PARSE__ERROR.cv()},1,155)) goto _0;
		g->Check(ctx);
		{
			Variant t5;
			c.f.fLine=11;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KplatformPath.cv(),t5.cv())) goto _0;
			Txt t6;
			if (g->Call(ctx,(PCV[]){t6.cv(),t5.cv()},1,719)) goto _0;
			g->Check(ctx);
			ldom=t6.get();
		}
		c.f.fLine=12;
		if (g->Call(ctx,(PCV[]){nullptr,K.cv()},1,155)) goto _0;
		g->Check(ctx);
		if (1!=Var<Long>(ctx,vOK).get()) goto _3;
		{
			Txt t8;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t8.cv(),ldom.cv(),k94rHuiUr1Z8.cv()},2,864)) goto _0;
			g->Check(ctx);
			ldomKey=t8.get();
		}
		if (1!=Var<Long>(ctx,vOK).get()) goto _4;
		{
			Txt t10;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t10.cv(),ldomKey.cv()},1,724)) goto _0;
			g->Check(ctx);
			ldomKey=t10.get();
		}
		{
			Ref t11;
			t11.setLocalRef(ctx,lstringValue.cv());
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){nullptr,ldomKey.cv(),t11.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Txt t12;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t12.cv(),lstringValue.cv(),Ref((optyp)3).cv()},2,14)) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,ldomKey.cv(),t12.cv()},2,868)) goto _0;
			g->Check(ctx);
		}
_4:
		c.f.fLine=23;
		if (g->Call(ctx,(PCV[]){nullptr,KON__PARSE__ERROR.cv()},1,155)) goto _0;
		g->Check(ctx);
		{
			Variant t13;
			c.f.fLine=24;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KplatformPath.cv(),t13.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,ldom.cv(),t13.cv()},2,862)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=25;
		if (g->Call(ctx,(PCV[]){nullptr,K.cv()},1,155)) goto _0;
		g->Check(ctx);
		if (1!=Var<Long>(ctx,vOK).get()) goto _5;
		{
			Bool t15;
			t15=true;
			Bool t16;
			t16=t15.get();
			c.f.fLine=29;
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Ksuccess.cv(),t16.cv())) goto _0;
		}
		{
			Variant t17;
			c.f.fLine=30;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KplatformPath.cv(),t17.cv())) goto _0;
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kplist.cv(),t17.cv())) goto _0;
		}
		{
			Variant t18;
			c.f.fLine=32;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kparent.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->GetMember(ctx,t18.cv(),KplatformPath.cv(),t19.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t19.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=33;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Variant t20;
			c.f.fLine=34;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t20.cv())) goto _0;
			Variant t21;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t21.cv())) goto _0;
			Variant t22;
			if (g->OperationOnAny(ctx,0,t20.cv(),t21.cv(),t22.cv())) goto _0;
			Txt t23;
			if (!g->GetValue(ctx,(PCV[]){t23.cv(),t22.cv(),nullptr})) goto _0;
			Txt t24;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t23.cv()},t24.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t25;
			g->AddString(kRa5p_fTsGBU.get(),t24.get(),t25.get());
			Ref t26;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t26.cv(),lpid.cv(),nullptr})) goto _0;
			Ref t27;
			t27.setLocalRef(ctx,lstdErr.cv());
			Ref t28;
			t28.setLocalRef(ctx,lstdOut.cv());
			Ref t29;
			t29.setLocalRef(ctx,lstdIn.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t25.cv(),t29.cv(),t28.cv(),t27.cv(),t26.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t30;
			c.f.fLine=36;
			if (g->GetMember(ctx,loptions.cv(),Kremove.cv(),t30.cv())) goto _0;
			Bool t31;
			if (g->Call(ctx,(PCV[]){t31.cv(),t30.cv()},1,1537)) goto _0;
			Bool t32;
			t32=t31.get();
			Bool t33;
			t33=!(t32.get());
			if (!(t33.get())) goto _6;
		}
		{
			Obj t34;
			c.f.fLine=38;
			if (g->Call(ctx,(PCV[]){t34.cv()},0,1470)) goto _0;
			Variant t35;
			if (g->GetMember(ctx,t34.cv(),KsigningIdentity.cv(),t35.cv())) goto _0;
			Txt t36;
			if (!g->GetValue(ctx,(PCV[]){t36.cv(),t35.cv(),nullptr})) goto _0;
			Txt t37;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t36.cv()},t37.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t38;
			g->AddString(kbrxnXKXSDXg.get(),t37.get(),t38.get());
			Txt t39;
			g->AddString(t38.get(),K_20.get(),t39.get());
			Variant t40;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t40.cv())) goto _0;
			Variant t41;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t41.cv())) goto _0;
			Variant t42;
			if (g->OperationOnAny(ctx,0,t40.cv(),t41.cv(),t42.cv())) goto _0;
			Txt t43;
			if (!g->GetValue(ctx,(PCV[]){t43.cv(),t42.cv(),nullptr})) goto _0;
			Txt t44;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t43.cv()},t44.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t39.get(),t44.get(),lcommand.get());
		}
		{
			Variant t46;
			c.f.fLine=40;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kparent.cv(),t46.cv())) goto _0;
			Variant t47;
			if (g->GetMember(ctx,t46.cv(),KplatformPath.cv(),t47.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t47.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=41;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t48;
			c.f.fLine=42;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t48.cv(),lpid.cv(),nullptr})) goto _0;
			Ref t49;
			t49.setLocalRef(ctx,lstdErr.cv());
			Ref t50;
			t50.setLocalRef(ctx,lstdOut.cv());
			Ref t51;
			t51.setLocalRef(ctx,lstdIn.cv());
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t51.cv(),t50.cv(),t49.cv(),t48.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t52;
			t52.setLocalRef(ctx,lstdErr.cv());
			Long t53;
			c.f.fLine=44;
			if (g->Call(ctx,(PCV[]){t53.cv(),t52.cv()},1,605)) goto _0;
			if (0==t53.get()) goto _7;
		}
		{
			Ref t55;
			t55.setLocalRef(ctx,lstdErr.cv());
			Txt t56;
			c.f.fLine=45;
			if (g->Call(ctx,(PCV[]){t56.cv(),t55.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kcodesign.cv(),t56.cv())) goto _0;
		}
		{
			Variant t57;
			c.f.fLine=46;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kcodesign.cv(),t57.cv())) goto _0;
			Long t58;
			t58=1|2;
			Col t59;
			if (g->Call(ctx,(PCV[]){t59.cv(),t57.cv(),K_0A.cv(),t58.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kcodesign.cv(),t59.cv())) goto _0;
		}
_7:
_6:
_5:
		c.f.fLine=51;
		if (g->Call(ctx,(PCV[]){nullptr,ldom.cv()},1,722)) goto _0;
		g->Check(ctx);
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern int32_t vOK;
extern Txt K;
extern Txt KFile;
extern Txt KON__PARSE__ERROR;
extern Txt KTRUE;
extern Txt K_0A;
extern Txt K_20;
extern Txt K_2Fplist_2Fdict;
extern Txt Kcodesign;
extern Txt Kextension;
extern Txt Kfalse;
extern Txt Kkey;
extern Txt Kname;
extern Txt Kparent;
extern Txt KplatformPath;
extern Txt Kplist;
extern Txt Kremove;
extern Txt KsigningIdentity;
extern Txt Kstring;
extern Txt Ksuccess;
extern Txt Ktrue;
extern Txt Kutf_2D8;
extern Txt k6Nsk9JOUrts;
extern Txt kNXRBf7MoS1g;
extern Txt kRa5p_fTsGBU;
extern Txt kbrxnXKXSDXg;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2E__updateProperties[];
void proc_SignApp_2E__updateProperties( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__updateProperties);
	if (!ctx->doingAbort) try {
		Num v0;
		Txt ldom;
		Num v1;
		Variant lkeyName;
		Txt lcommand;
		Num li;
		Txt lvalue;
		Variant lpid;
		Txt ldomKey;
		Variant lkey;
		Value_array_text ldomKeys;
		Blb lstdIn;
		Variant loptions;
		Obj l__4D__auto__iter__0;
		Blb lstdOut;
		Txt ldict;
		Blb lstdErr;
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
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1709)) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),KFile.cv(),t2.cv())) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			Bool t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t3.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t4.get())) goto _2;
		}
		{
			Variant t5;
			c.f.fLine=8;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KplatformPath.cv(),t5.cv())) goto _0;
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kplist.cv(),t5.cv())) goto _0;
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,KON__PARSE__ERROR.cv()},1,155)) goto _0;
		g->Check(ctx);
		{
			Variant t6;
			c.f.fLine=11;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KplatformPath.cv(),t6.cv())) goto _0;
			Txt t7;
			if (g->Call(ctx,(PCV[]){t7.cv(),t6.cv()},1,719)) goto _0;
			g->Check(ctx);
			ldom=t7.get();
		}
		c.f.fLine=12;
		if (g->Call(ctx,(PCV[]){nullptr,K.cv()},1,155)) goto _0;
		g->Check(ctx);
		if (1!=Var<Long>(ctx,vOK).get()) goto _3;
		{
			Txt t9;
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){t9.cv(),ldom.cv(),K_2Fplist_2Fdict.cv()},2,864)) goto _0;
			g->Check(ctx);
			ldict=t9.get();
		}
		{
			Ref t10;
			t10.setLocalRef(ctx,ldomKeys.cv());
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){nullptr,t10.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t11;
			t11.setLocalRef(ctx,ldomKeys.cv());
			Txt t12;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t12.cv(),ldict.cv(),Kkey.cv(),t11.cv()},3,864)) goto _0;
			g->Check(ctx);
			ldomKey=t12.get();
		}
		li=1;
		{
			Ref t13;
			t13.setLocalRef(ctx,ldomKeys.cv());
			Long t14;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t14.cv(),t13.cv()},1,274)) goto _0;
			v0=t14.get();
		}
		goto _4;
_5:
		{
			Long t16;
			t16=(sLONG)lrint(li.get());
			Txt t17;
			t17=ldomKeys.arrayElem(t16.get()).get();
			ldomKey=t17.get();
		}
		{
			Ref t18;
			c.f.fLine=24;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t18.cv(),lkeyName.cv(),nullptr})) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,ldomKey.cv(),t18.cv()},2,731)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t19;
			c.f.fLine=25;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),lkeyName.cv(),t19.cv())) goto _0;
			Variant t20;
			t20.setNull();
			Bool t21;
			if (g->OperationOnAny(ctx,7,t19.cv(),t20.cv(),t21.cv())) goto _0;
			if (!(t21.get())) goto _6;
		}
		{
			Txt t22;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t22.cv(),ldomKey.cv()},1,724)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t22.cv()},1,869)) goto _0;
		}
		c.f.fLine=27;
		if (g->Call(ctx,(PCV[]){nullptr,ldomKey.cv()},1,869)) goto _0;
		g->Check(ctx);
_6:
		{
			Num t23;
			t23=li.get()+1;
			li=t23.get();
		}
_4:
		{
			Bool t24;
			t24=!GEqual(glob,v0.get(),li.get());
			if (!(t24.get())) goto _5;
		}
		{
			Obj t25;
			c.f.fLine=31;
			if (g->Call(ctx,(PCV[]){t25.cv(),Parm<Obj>(inParams,inNbParam,2).cv()},1,1510)) goto _0;
			g->Check(ctx);
			l__4D__auto__iter__0=t25.get();
		}
_7:
		{
			Ref t26;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t26.cv(),lkey.cv(),nullptr})) goto _0;
			Bool t27;
			if (g->Call(ctx,(PCV[]){t27.cv(),l__4D__auto__iter__0.cv(),t26.cv()},2,1511)) goto _0;
			if (!(t27.get())) goto _8;
		}
		{
			Variant t28;
			c.f.fLine=33;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),lkey.cv(),t28.cv())) goto _0;
			Long t29;
			if (g->Call(ctx,(PCV[]){t29.cv(),t28.cv()},1,1509)) goto _0;
			Bool t30;
			t30=2==t29.get();
			if (!(t30.get())) goto _10;
		}
		{
			Txt t31;
			c.f.fLine=34;
			if (g->Call(ctx,(PCV[]){t31.cv(),ldict.cv(),Kkey.cv()},2,865)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t31.cv(),lkey.cv()},2,868)) goto _0;
		}
		{
			Txt t32;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t32.cv(),ldict.cv(),Kstring.cv()},2,865)) goto _0;
			g->Check(ctx);
			Variant t33;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),lkey.cv(),t33.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t32.cv(),t33.cv()},2,868)) goto _0;
		}
		goto _9;
_10:
		{
			Variant t34;
			c.f.fLine=36;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),lkey.cv(),t34.cv())) goto _0;
			Long t35;
			if (g->Call(ctx,(PCV[]){t35.cv(),t34.cv()},1,1509)) goto _0;
			Bool t36;
			t36=6==t35.get();
			if (!(t36.get())) goto _11;
		}
		{
			Txt t37;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t37.cv(),ldict.cv(),Kkey.cv()},2,865)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t37.cv(),lkey.cv()},2,868)) goto _0;
		}
		{
			Variant t38;
			c.f.fLine=38;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,2).cv(),lkey.cv(),t38.cv())) goto _0;
			Bool t39;
			if (g->Call(ctx,(PCV[]){t39.cv(),t38.cv()},1,1537)) goto _0;
			if (!(t39.get())) goto _12;
		}
		{
			Txt t40;
			c.f.fLine=39;
			if (g->Call(ctx,(PCV[]){t40.cv(),ldict.cv(),Ktrue.cv()},2,865)) goto _0;
			g->Check(ctx);
			lvalue=t40.get();
		}
		goto _13;
_12:
		{
			Txt t41;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t41.cv(),ldict.cv(),Kfalse.cv()},2,865)) goto _0;
			g->Check(ctx);
			lvalue=t41.get();
		}
_13:
		goto _9;
_11:
_9:
		goto _7;
_8:
		{
			Variant t42;
			t42.setNull();
			Obj t43;
			c.f.fLine=46;
			if (!g->GetValue(ctx,(PCV[]){t43.cv(),t42.cv(),nullptr})) goto _0;
			l__4D__auto__iter__0=t43.get();
		}
		c.f.fLine=48;
		if (g->Call(ctx,(PCV[]){nullptr,KON__PARSE__ERROR.cv()},1,155)) goto _0;
		g->Check(ctx);
		{
			Variant t44;
			c.f.fLine=49;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KplatformPath.cv(),t44.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,ldom.cv(),t44.cv()},2,862)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=50;
		if (g->Call(ctx,(PCV[]){nullptr,K.cv()},1,155)) goto _0;
		g->Check(ctx);
		if (1!=Var<Long>(ctx,vOK).get()) goto _14;
		{
			Bool t46;
			t46=true;
			Bool t47;
			t47=t46.get();
			c.f.fLine=54;
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Ksuccess.cv(),t47.cv())) goto _0;
		}
		{
			Variant t48;
			c.f.fLine=56;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kparent.cv(),t48.cv())) goto _0;
			Variant t49;
			if (g->GetMember(ctx,t48.cv(),KplatformPath.cv(),t49.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t49.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=57;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Variant t50;
			c.f.fLine=58;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t50.cv())) goto _0;
			Variant t51;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t51.cv())) goto _0;
			Variant t52;
			if (g->OperationOnAny(ctx,0,t50.cv(),t51.cv(),t52.cv())) goto _0;
			Txt t53;
			if (!g->GetValue(ctx,(PCV[]){t53.cv(),t52.cv(),nullptr})) goto _0;
			Txt t54;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t53.cv()},t54.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t55;
			g->AddString(kRa5p_fTsGBU.get(),t54.get(),t55.get());
			Ref t56;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t56.cv(),lpid.cv(),nullptr})) goto _0;
			Ref t57;
			t57.setLocalRef(ctx,lstdErr.cv());
			Ref t58;
			t58.setLocalRef(ctx,lstdOut.cv());
			Ref t59;
			t59.setLocalRef(ctx,lstdIn.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t55.cv(),t59.cv(),t58.cv(),t57.cv(),t56.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Variant t60;
			c.f.fLine=60;
			if (g->GetMember(ctx,loptions.cv(),Kremove.cv(),t60.cv())) goto _0;
			Bool t61;
			if (g->Call(ctx,(PCV[]){t61.cv(),t60.cv()},1,1537)) goto _0;
			Bool t62;
			t62=t61.get();
			Bool t63;
			t63=!(t62.get());
			if (!(t63.get())) goto _15;
		}
		{
			Obj t64;
			c.f.fLine=62;
			if (g->Call(ctx,(PCV[]){t64.cv()},0,1470)) goto _0;
			Variant t65;
			if (g->GetMember(ctx,t64.cv(),KsigningIdentity.cv(),t65.cv())) goto _0;
			Txt t66;
			if (!g->GetValue(ctx,(PCV[]){t66.cv(),t65.cv(),nullptr})) goto _0;
			Txt t67;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t66.cv()},t67.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t68;
			g->AddString(kbrxnXKXSDXg.get(),t67.get(),t68.get());
			Txt t69;
			g->AddString(t68.get(),K_20.get(),t69.get());
			Variant t70;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kname.cv(),t70.cv())) goto _0;
			Variant t71;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kextension.cv(),t71.cv())) goto _0;
			Variant t72;
			if (g->OperationOnAny(ctx,0,t70.cv(),t71.cv(),t72.cv())) goto _0;
			Txt t73;
			if (!g->GetValue(ctx,(PCV[]){t73.cv(),t72.cv(),nullptr})) goto _0;
			Txt t74;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t73.cv()},t74.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			g->AddString(t69.get(),t74.get(),lcommand.get());
		}
		{
			Variant t76;
			c.f.fLine=64;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kparent.cv(),t76.cv())) goto _0;
			Variant t77;
			if (g->GetMember(ctx,t76.cv(),KplatformPath.cv(),t77.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t77.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=65;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t78;
			c.f.fLine=66;
			if (!g->CastPointerToRef(ctx,7,(PCV[]){t78.cv(),lpid.cv(),nullptr})) goto _0;
			Ref t79;
			t79.setLocalRef(ctx,lstdErr.cv());
			Ref t80;
			t80.setLocalRef(ctx,lstdOut.cv());
			Ref t81;
			t81.setLocalRef(ctx,lstdIn.cv());
			if (g->Call(ctx,(PCV[]){nullptr,lcommand.cv(),t81.cv(),t80.cv(),t79.cv(),t78.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t82;
			t82.setLocalRef(ctx,lstdErr.cv());
			Long t83;
			c.f.fLine=68;
			if (g->Call(ctx,(PCV[]){t83.cv(),t82.cv()},1,605)) goto _0;
			if (0==t83.get()) goto _16;
		}
		{
			Ref t85;
			t85.setLocalRef(ctx,lstdErr.cv());
			Txt t86;
			c.f.fLine=69;
			if (g->Call(ctx,(PCV[]){t86.cv(),t85.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kcodesign.cv(),t86.cv())) goto _0;
		}
		{
			Variant t87;
			c.f.fLine=70;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kcodesign.cv(),t87.cv())) goto _0;
			Long t88;
			t88=1|2;
			Col t89;
			if (g->Call(ctx,(PCV[]){t89.cv(),t87.cv(),K_0A.cv(),t88.cv()},3,1554)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Parm<Obj>(inParams,inNbParam,3).cv(),Kcodesign.cv(),t89.cv())) goto _0;
		}
_16:
_15:
_14:
		c.f.fLine=74;
		if (g->Call(ctx,(PCV[]){nullptr,ldom.cv()},1,722)) goto _0;
		g->Check(ctx);
_3:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KFolder;
extern Txt KTRUE;
extern Txt KplatformPath;
extern Txt Kxattr_20_2Dcr_20_2E;
extern Txt k6Nsk9JOUrts;
extern Txt kNXRBf7MoS1g;
extern unsigned char D_proc_SignApp_2E__clean[];
void proc_SignApp_2E__clean( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2E__clean);
	if (!ctx->doingAbort) try {
		Blb lstdIn;
		Blb lstdOut;
		Blb lstdErr;
		Txt lCURRENT__DIRECTORY;
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
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1709)) goto _0;
			Variant t2;
			if (g->GetMember(ctx,t1.cv(),KFolder.cv(),t2.cv())) goto _0;
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			Bool t4;
			if (g->Call(ctx,(PCV[]){t4.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t3.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t4.get())) goto _2;
		}
		{
			Variant t5;
			c.f.fLine=10;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),KplatformPath.cv(),t5.cv())) goto _0;
			Txt t6;
			if (!g->GetValue(ctx,(PCV[]){t6.cv(),t5.cv(),nullptr})) goto _0;
			lCURRENT__DIRECTORY=t6.get();
		}
		c.f.fLine=13;
		if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),lCURRENT__DIRECTORY.cv()},2,812)) goto _0;
		g->Check(ctx);
		c.f.fLine=14;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t7;
			t7.setLocalRef(ctx,lstdErr.cv());
			Ref t8;
			t8.setLocalRef(ctx,lstdOut.cv());
			Ref t9;
			t9.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){nullptr,Kxattr_20_2Dcr_20_2E.cv(),t9.cv(),t8.cv(),t7.cv()},4,811)) goto _0;
			g->Check(ctx);
		}
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KDEVELOPER__DIR;
extern Txt KENVIRONMENT;
extern Txt KFolder;
extern Txt Kexists;
extern Txt Kpath;
extern unsigned char D_proc_SignApp_2EsetXcodePath[];
void proc_SignApp_2EsetXcodePath( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2EsetXcodePath);
	if (!ctx->doingAbort) try {
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1470)) goto _0;
			Res<Obj>(outResult)=t0.get();
		}
		{
			Long t1;
			t1=inNbExplicitParam;
			if (0!=t1.get()) goto _3;
		}
		{
			Obj t3;
			c.f.fLine=6;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1470)) goto _0;
			Variant t4;
			if (g->GetMember(ctx,t3.cv(),KENVIRONMENT.cv(),t4.cv())) goto _0;
			Variant t5;
			t5.setNull();
			if (g->SetMember(ctx,t4.cv(),KDEVELOPER__DIR.cv(),t5.cv())) goto _0;
		}
		goto _2;
_3:
		{
			Variant t6;
			t6.setNull();
			Bool t7;
			c.f.fLine=7;
			if (g->OperationOnAny(ctx,6,Parm<Obj>(inParams,inNbParam,1).cv(),t6.cv(),t7.cv())) goto _0;
			if (!(t7.get())) goto _4;
		}
		{
			Obj t8;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t8.cv()},0,1470)) goto _0;
			Variant t9;
			if (g->GetMember(ctx,t8.cv(),KENVIRONMENT.cv(),t9.cv())) goto _0;
			Variant t10;
			t10.setNull();
			if (g->SetMember(ctx,t9.cv(),KDEVELOPER__DIR.cv(),t10.cv())) goto _0;
		}
		goto _2;
_4:
		{
			Obj t11;
			c.f.fLine=9;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1709)) goto _0;
			Variant t12;
			if (g->GetMember(ctx,t11.cv(),KFolder.cv(),t12.cv())) goto _0;
			Obj t13;
			if (!g->GetValue(ctx,(PCV[]){t13.cv(),t12.cv(),nullptr})) goto _0;
			Bool t14;
			if (g->Call(ctx,(PCV[]){t14.cv(),Parm<Obj>(inParams,inNbParam,1).cv(),t13.cv()},2,1731)) goto _0;
			g->Check(ctx);
			if (!(t14.get())) goto _5;
		}
		{
			Variant t15;
			c.f.fLine=10;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kexists.cv(),t15.cv())) goto _0;
			Bool t16;
			if (!g->GetValue(ctx,(PCV[]){t16.cv(),t15.cv(),nullptr})) goto _0;
			if (!(t16.get())) goto _6;
		}
		{
			Obj t17;
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){t17.cv()},0,1470)) goto _0;
			Variant t18;
			if (g->GetMember(ctx,t17.cv(),KENVIRONMENT.cv(),t18.cv())) goto _0;
			Variant t19;
			if (g->GetMember(ctx,Parm<Obj>(inParams,inNbParam,1).cv(),Kpath.cv(),t19.cv())) goto _0;
			if (g->SetMember(ctx,t18.cv(),KDEVELOPER__DIR.cv(),t19.cv())) goto _0;
		}
_6:
		goto _2;
_5:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KTRUE;
extern Txt K_28_3Fm_29_5E_2E_2B_24;
extern Txt K_2Eapp;
extern Txt K_5E_2E_2B_24;
extern Txt Kextension;
extern Txt Klength;
extern Txt Kmdfind_20;
extern Txt Kpath;
extern Txt Kpath_20_3D_3D_20_3A1;
extern Txt Kpaths;
extern Txt Kpush;
extern Txt Kquery;
extern Txt Kutf_2D8;
extern Txt Kxcode_2Dselect_20_2Dp;
extern Txt k6Nsk9JOUrts;
extern Txt kXkznAtTapNE;
extern Txt kZtA7m5y3xUk;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2EgetXcodePath[];
void proc_SignApp_2EgetXcodePath( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2EgetXcodePath);
	if (!ctx->doingAbort) try {
		Num li;
		Long lpid;
		Txt lpaths;
		Blb lstdIn;
		Txt lpath;
		Blb lstdOut;
		Blb lstdErr;
		Long lpos;
		Long llen;
		new ( outResult) Obj();
		{
			Variant t0;
			t0.setNull();
			Col t1;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1472)) goto _0;
			g->Check(ctx);
			Obj t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),Kpath.cv(),t0.cv(),Kpaths.cv(),t1.cv()},4,1471)) goto _0;
			Res<Obj>(outResult)=t2.get();
		}
		{
			Bool t3;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t3.cv()},0,1572)) goto _0;
			if (!(t3.get())) goto _2;
		}
		c.f.fLine=10;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t4;
			t4.setLocalRef(ctx,lpid.cv());
			Ref t5;
			t5.setLocalRef(ctx,lstdErr.cv());
			Ref t6;
			t6.setLocalRef(ctx,lstdOut.cv());
			Ref t7;
			t7.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=11;
			if (g->Call(ctx,(PCV[]){nullptr,Kxcode_2Dselect_20_2Dp.cv(),t7.cv(),t6.cv(),t5.cv(),t4.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t8;
			t8.setLocalRef(ctx,lstdOut.cv());
			Txt t9;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			lpath=t9.get();
		}
		{
			Ref t10;
			t10.setLocalRef(ctx,llen.cv());
			Ref t11;
			t11.setLocalRef(ctx,lpos.cv());
			Bool t12;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t12.cv(),K_5E_2E_2B_24.cv(),lpath.cv(),Long(1).cv(),t11.cv(),t10.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t12.get())) goto _3;
		}
		{
			Txt t13;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t13.cv(),lpath.cv(),lpos.cv(),llen.cv()},3,12)) goto _0;
			lpath=t13.get();
		}
		{
			Obj t14;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t14.cv(),lpath.cv()},1,1567)) goto _0;
			g->Check(ctx);
			if (g->SetMember(ctx,Res<Obj>(outResult).cv(),Kpath.cv(),t14.cv())) goto _0;
		}
		{
			Variant t15;
			c.f.fLine=21;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kpaths.cv(),t15.cv())) goto _0;
			Variant t16;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kpath.cv(),t16.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t15.cv(),Kpush.cv(),t16.cv()},3,1500)) goto _0;
			g->Check(ctx);
		}
_3:
		c.f.fLine=26;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Txt t17;
			t17=kXkznAtTapNE.get();
			Txt t18;
			c.f.fLine=27;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t17.cv()},t18.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t19;
			g->AddString(Kmdfind_20.get(),t18.get(),t19.get());
			Ref t20;
			t20.setLocalRef(ctx,lpid.cv());
			Ref t21;
			t21.setLocalRef(ctx,lstdErr.cv());
			Ref t22;
			t22.setLocalRef(ctx,lstdOut.cv());
			Ref t23;
			t23.setLocalRef(ctx,lstdIn.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t19.cv(),t23.cv(),t22.cv(),t21.cv(),t20.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t24;
			t24.setLocalRef(ctx,lstdOut.cv());
			Txt t25;
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){t25.cv(),t24.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			lpaths=t25.get();
		}
		li=1;
_4:
		{
			Ref t26;
			t26.setLocalRef(ctx,llen.cv());
			Ref t27;
			t27.setLocalRef(ctx,lpos.cv());
			Bool t28;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t28.cv(),K_28_3Fm_29_5E_2E_2B_24.cv(),lpaths.cv(),li.cv(),t27.cv(),t26.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t28.get())) goto _5;
		}
		{
			Txt t29;
			c.f.fLine=34;
			if (g->Call(ctx,(PCV[]){t29.cv(),lpaths.cv(),lpos.cv(),llen.cv()},3,12)) goto _0;
			lpath=t29.get();
		}
		{
			Obj t30;
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){t30.cv(),lpath.cv()},1,1547)) goto _0;
			g->Check(ctx);
			Variant t31;
			if (g->GetMember(ctx,t30.cv(),Kextension.cv(),t31.cv())) goto _0;
			Bool t32;
			if (g->OperationOnAny(ctx,6,t31.cv(),K_2Eapp.cv(),t32.cv())) goto _0;
			if (!(t32.get())) goto _6;
		}
		{
			Txt t33;
			g->AddString(lpath.get(),kZtA7m5y3xUk.get(),t33.get());
			lpath=t33.get();
		}
		{
			Variant t34;
			c.f.fLine=37;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kpaths.cv(),t34.cv())) goto _0;
			Variant t35;
			if (g->Call(ctx,(PCV[]){t35.cv(),t34.cv(),Kquery.cv(),Kpath_20_3D_3D_20_3A1.cv(),lpath.cv()},4,1498)) goto _0;
			g->Check(ctx);
			Variant t36;
			if (g->GetMember(ctx,t35.cv(),Klength.cv(),t36.cv())) goto _0;
			Bool t37;
			if (g->OperationOnAny(ctx,6,t36.cv(),Num(0).cv(),t37.cv())) goto _0;
			if (!(t37.get())) goto _7;
		}
		{
			Variant t38;
			c.f.fLine=38;
			if (g->GetMember(ctx,Res<Obj>(outResult).cv(),Kpaths.cv(),t38.cv())) goto _0;
			Obj t39;
			if (g->Call(ctx,(PCV[]){t39.cv(),lpath.cv()},1,1567)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,t38.cv(),Kpush.cv(),t39.cv()},3,1500)) goto _0;
		}
_7:
_6:
		{
			Long t40;
			t40=lpos.get()+llen.get();
			li=t40.get();
		}
		goto _4;
_5:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
extern Txt KTRUE;
extern Txt K_20_2Dp_20;
extern Txt Kbin;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt KgetXcodePath;
extern Txt KiTMSTransporter;
extern Txt Kid;
extern Txt Klength;
extern Txt KlongName;
extern Txt Kparent;
extern Txt Kpassword;
extern Txt Kpath;
extern Txt Kpaths;
extern Txt KplatformPath;
extern Txt Kpush;
extern Txt KshortName;
extern Txt Kusername;
extern Txt Kusr;
extern Txt Kutf_2D8;
extern Txt k6Nsk9JOUrts;
extern Txt k9YcO5UeEoEY;
extern Txt kEPK6JiiX8zU;
extern Txt kMFjHPAa7t4w;
extern Txt kNXRBf7MoS1g;
extern Txt kseQg1lWUSAM;
Asm4d_Proc proc_ESCAPE__PARAM;
extern unsigned char D_proc_SignApp_2ElistProviders[];
void proc_SignApp_2ElistProviders( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2ElistProviders);
	if (!ctx->doingAbort) try {
		Variant lXcode;
		Long li;
		Long lpid;
		Txt linfo;
		Blb lstdIn;
		Variant liTMSTransporter;
		Blb lstdOut;
		Blb lstdErr;
		Value_array_longint lpos;
		Value_array_longint llen;
		new ( outResult) Col();
		{
			Col t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1472)) goto _0;
			g->Check(ctx);
			Res<Col>(outResult)=t0.get();
		}
		{
			Bool t1;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1572)) goto _0;
			if (!(t1.get())) goto _2;
		}
		{
			Obj t2;
			c.f.fLine=5;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1470)) goto _0;
			Variant t3;
			if (g->Call(ctx,(PCV[]){t3.cv(),t2.cv(),KgetXcodePath.cv()},2,1498)) goto _0;
			g->Check(ctx);
			if (!g->SetValue(ctx,(PCV[]){t3.cv(),lXcode.cv(),nullptr})) goto _0;
		}
		{
			Variant t4;
			c.f.fLine=6;
			if (g->GetMember(ctx,lXcode.cv(),Kpaths.cv(),t4.cv())) goto _0;
			Variant t5;
			if (g->GetMember(ctx,t4.cv(),Klength.cv(),t5.cv())) goto _0;
			Bool t6;
			if (g->OperationOnAny(ctx,7,t5.cv(),Num(0).cv(),t6.cv())) goto _0;
			if (!(t6.get())) goto _3;
		}
		{
			Variant t7;
			c.f.fLine=7;
			if (g->GetMember(ctx,lXcode.cv(),Kpath.cv(),t7.cv())) goto _0;
			Variant t8;
			if (g->Call(ctx,(PCV[]){t8.cv(),t7.cv(),Kfolder.cv(),Kusr.cv()},3,1498)) goto _0;
			g->Check(ctx);
			Variant t9;
			if (g->Call(ctx,(PCV[]){t9.cv(),t8.cv(),Kfolder.cv(),Kbin.cv()},3,1498)) goto _0;
			Variant t10;
			if (g->Call(ctx,(PCV[]){t10.cv(),t9.cv(),Kfile.cv(),KiTMSTransporter.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t10.cv(),liTMSTransporter.cv(),nullptr})) goto _0;
		}
		{
			Bool t11;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t11.cv()},0,1572)) goto _0;
			if (!(t11.get())) goto _4;
		}
		{
			Variant t12;
			c.f.fLine=11;
			if (g->GetMember(ctx,liTMSTransporter.cv(),Kparent.cv(),t12.cv())) goto _0;
			Variant t13;
			if (g->GetMember(ctx,t12.cv(),KplatformPath.cv(),t13.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,kNXRBf7MoS1g.cv(),t13.cv()},2,812)) goto _0;
			g->Check(ctx);
		}
		c.f.fLine=12;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Obj t14;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t14.cv()},0,1470)) goto _0;
			Variant t15;
			if (g->GetMember(ctx,t14.cv(),Kusername.cv(),t15.cv())) goto _0;
			Txt t16;
			if (!g->GetValue(ctx,(PCV[]){t16.cv(),t15.cv(),nullptr})) goto _0;
			Txt t17;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t16.cv()},t17.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t18;
			g->AddString(kEPK6JiiX8zU.get(),t17.get(),t18.get());
			Txt t19;
			g->AddString(t18.get(),K_20_2Dp_20.get(),t19.get());
			Obj t20;
			if (g->Call(ctx,(PCV[]){t20.cv()},0,1470)) goto _0;
			Variant t21;
			if (g->GetMember(ctx,t20.cv(),Kpassword.cv(),t21.cv())) goto _0;
			Txt t22;
			if (!g->GetValue(ctx,(PCV[]){t22.cv(),t21.cv(),nullptr})) goto _0;
			Txt t23;
			proc_ESCAPE__PARAM(glob,ctx,1,1,(PCV[]){t22.cv()},t23.cv());
			if (ctx->checkPendingErrors) g->CheckErr(ctx,0);
			if (ctx->doingAbort) goto _0;
			Txt t24;
			g->AddString(t19.get(),t23.get(),t24.get());
			Ref t25;
			t25.setLocalRef(ctx,lpid.cv());
			Ref t26;
			t26.setLocalRef(ctx,lstdErr.cv());
			Ref t27;
			t27.setLocalRef(ctx,lstdOut.cv());
			Ref t28;
			t28.setLocalRef(ctx,lstdIn.cv());
			if (g->Call(ctx,(PCV[]){nullptr,t24.cv(),t28.cv(),t27.cv(),t26.cv(),t25.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t29;
			t29.setLocalRef(ctx,lstdOut.cv());
			Txt t30;
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){t30.cv(),t29.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			linfo=t30.get();
		}
		{
			Ref t31;
			t31.setLocalRef(ctx,lpos.cv());
			c.f.fLine=17;
			if (g->Call(ctx,(PCV[]){nullptr,t31.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t32;
			t32.setLocalRef(ctx,llen.cv());
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){nullptr,t32.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t33;
			t33.setLocalRef(ctx,llen.cv());
			Ref t34;
			t34.setLocalRef(ctx,lpos.cv());
			Bool t35;
			c.f.fLine=20;
			if (g->Call(ctx,(PCV[]){t35.cv(),kseQg1lWUSAM.cv(),linfo.cv(),Long(1).cv(),t34.cv(),t33.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t35.get())) goto _5;
		}
		{
			Long t36;
			t36=lpos.arrayElem(1).get()+llen.arrayElem(1).get();
			Txt t37;
			c.f.fLine=21;
			if (g->Call(ctx,(PCV[]){t37.cv(),linfo.cv(),t36.cv()},2,12)) goto _0;
			linfo=t37.get();
		}
		{
			Ref t38;
			t38.setLocalRef(ctx,llen.cv());
			Ref t39;
			t39.setLocalRef(ctx,lpos.cv());
			Bool t40;
			c.f.fLine=22;
			if (g->Call(ctx,(PCV[]){t40.cv(),k9YcO5UeEoEY.cv(),linfo.cv(),Long(1).cv(),t39.cv(),t38.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t40.get())) goto _6;
		}
		{
			Long t41;
			t41=lpos.arrayElem(1).get()+llen.arrayElem(1).get();
			Txt t42;
			c.f.fLine=23;
			if (g->Call(ctx,(PCV[]){t42.cv(),linfo.cv(),t41.cv()},2,12)) goto _0;
			linfo=t42.get();
		}
		li=1;
_7:
		{
			Ref t43;
			t43.setLocalRef(ctx,llen.cv());
			Ref t44;
			t44.setLocalRef(ctx,lpos.cv());
			Bool t45;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t45.cv(),kMFjHPAa7t4w.cv(),linfo.cv(),li.cv(),t44.cv(),t43.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t45.get())) goto _8;
		}
		{
			Long t46;
			t46=llen.arrayElem(1).get();
			Long t47;
			t47=lpos.arrayElem(1).get();
			Txt t48;
			c.f.fLine=27;
			if (g->Call(ctx,(PCV[]){t48.cv(),linfo.cv(),t47.cv(),t46.cv()},3,12)) goto _0;
			Long t49;
			t49=llen.arrayElem(2).get();
			Long t50;
			t50=lpos.arrayElem(2).get();
			Txt t51;
			if (g->Call(ctx,(PCV[]){t51.cv(),linfo.cv(),t50.cv(),t49.cv()},3,12)) goto _0;
			Long t52;
			t52=llen.arrayElem(3).get();
			Long t53;
			t53=lpos.arrayElem(3).get();
			Txt t54;
			if (g->Call(ctx,(PCV[]){t54.cv(),linfo.cv(),t53.cv(),t52.cv()},3,12)) goto _0;
			Obj t55;
			if (g->Call(ctx,(PCV[]){t55.cv(),Kid.cv(),t48.cv(),KshortName.cv(),t51.cv(),KlongName.cv(),t54.cv()},6,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Res<Col>(outResult).cv(),Kpush.cv(),t55.cv()},3,1500)) goto _0;
		}
		li=lpos.arrayElem(3).get()+llen.arrayElem(3).get();
		goto _7;
_8:
_6:
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
extern Txt Kid;
extern Txt Kname;
extern Txt Kpush;
extern Txt Kutf_2D8;
extern Txt k6Nsk9JOUrts;
extern Txt ka06I$dcDbWE;
extern Txt ko7WGIEDuIq4;
extern unsigned char D_proc_SignApp_2EfindIdentity[];
void proc_SignApp_2EfindIdentity( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_SignApp_2EfindIdentity);
	if (!ctx->doingAbort) try {
		Long li;
		Long lpid;
		Txt linfo;
		Blb lstdIn;
		Blb lstdOut;
		Blb lstdErr;
		Value_array_longint lpos;
		Value_array_longint llen;
		new ( outResult) Col();
		{
			Col t0;
			c.f.fLine=2;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1472)) goto _0;
			g->Check(ctx);
			Res<Col>(outResult)=t0.get();
		}
		{
			Bool t1;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t1.cv()},0,1572)) goto _0;
			if (!(t1.get())) goto _2;
		}
		c.f.fLine=7;
		if (g->Call(ctx,(PCV[]){nullptr,k6Nsk9JOUrts.cv(),KTRUE.cv()},2,812)) goto _0;
		g->Check(ctx);
		{
			Ref t2;
			t2.setLocalRef(ctx,lpid.cv());
			Ref t3;
			t3.setLocalRef(ctx,lstdErr.cv());
			Ref t4;
			t4.setLocalRef(ctx,lstdOut.cv());
			Ref t5;
			t5.setLocalRef(ctx,lstdIn.cv());
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){nullptr,ko7WGIEDuIq4.cv(),t5.cv(),t4.cv(),t3.cv(),t2.cv()},5,811)) goto _0;
			g->Check(ctx);
		}
		{
			Ref t6;
			t6.setLocalRef(ctx,lstdOut.cv());
			Txt t7;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t7.cv(),t6.cv(),Kutf_2D8.cv()},2,1012)) goto _0;
			g->Check(ctx);
			linfo=t7.get();
		}
		{
			Ref t8;
			t8.setLocalRef(ctx,lpos.cv());
			c.f.fLine=14;
			if (g->Call(ctx,(PCV[]){nullptr,t8.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t9;
			t9.setLocalRef(ctx,llen.cv());
			c.f.fLine=15;
			if (g->Call(ctx,(PCV[]){nullptr,t9.cv(),Long(0).cv()},2,221)) goto _0;
		}
		li=1;
_3:
		{
			Ref t10;
			t10.setLocalRef(ctx,llen.cv());
			Ref t11;
			t11.setLocalRef(ctx,lpos.cv());
			Bool t12;
			c.f.fLine=18;
			if (g->Call(ctx,(PCV[]){t12.cv(),ka06I$dcDbWE.cv(),linfo.cv(),li.cv(),t11.cv(),t10.cv()},5,1019)) goto _0;
			g->Check(ctx);
			if (!(t12.get())) goto _4;
		}
		{
			Long t13;
			t13=llen.arrayElem(2).get();
			Long t14;
			t14=lpos.arrayElem(2).get();
			Txt t15;
			c.f.fLine=19;
			if (g->Call(ctx,(PCV[]){t15.cv(),linfo.cv(),t14.cv(),t13.cv()},3,12)) goto _0;
			Long t16;
			t16=llen.arrayElem(3).get();
			Long t17;
			t17=lpos.arrayElem(3).get();
			Txt t18;
			if (g->Call(ctx,(PCV[]){t18.cv(),linfo.cv(),t17.cv(),t16.cv()},3,12)) goto _0;
			Obj t19;
			if (g->Call(ctx,(PCV[]){t19.cv(),Kid.cv(),t15.cv(),Kname.cv(),t18.cv()},4,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,Res<Col>(outResult).cv(),Kpush.cv(),t19.cv()},3,1500)) goto _0;
		}
		li=lpos.arrayElem(3).get()+llen.arrayElem(3).get();
		goto _3;
_4:
_2:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
