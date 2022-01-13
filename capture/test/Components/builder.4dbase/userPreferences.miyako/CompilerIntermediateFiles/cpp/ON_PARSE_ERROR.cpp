extern int32_t vERROR;
extern int32_t vERROR_20FORMULA;
extern int32_t vERROR_20LINE;
extern int32_t vERROR_20METHOD;
extern int32_t vOK;
extern Txt KComponents;
extern Txt KSEEK__END;
extern Txt K_2C;
extern Txt K_5B;
extern Txt K_5D;
extern Txt Kappend;
extern Txt KcallChain;
extern Txt Kcode;
extern Txt Kcompiler_2Elog;
extern Txt Kcreate;
extern Txt Kerror;
extern Txt Kexists;
extern Txt Kfile;
extern Txt Kfolder;
extern Txt Kformula;
extern Txt Kline;
extern Txt Kmessages;
extern Txt Kmethod;
extern Txt Knames;
extern Txt Kparent;
extern Txt KplatformPath;
extern Txt Kpush;
extern Txt Kreverse;
extern Txt Ksize;
extern Txt Kstack;
extern unsigned char D_proc_ON__PARSE__ERROR[];
void proc_ON__PARSE__ERROR( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_ON__PARSE__ERROR);
	if (!ctx->doingAbort) try {
		Long v0;
		Value_array_text lnames;
		Long v1;
		Long li;
		Variant llogFile;
		Obj lENUM;
		Value_array_text lmessages;
		Col lstack;
		Value_array_longint lcodes;
		Obj llog;
		Variant lmode;
		Num lsize;
		Time ldoc;
		{
			Obj t0;
			c.f.fLine=4;
			if (g->Call(ctx,(PCV[]){t0.cv(),Long(7).cv(),Ref((optyp)3).cv()},2,1567)) goto _0;
			g->Check(ctx);
			Variant t1;
			if (g->Call(ctx,(PCV[]){t1.cv(),t0.cv(),Kfolder.cv(),KComponents.cv()},3,1498)) goto _0;
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Kfile.cv(),Kcompiler_2Elog.cv()},3,1498)) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t2.cv(),llogFile.cv(),nullptr})) goto _0;
		}
		{
			Variant t3;
			c.f.fLine=6;
			if (g->GetMember(ctx,llogFile.cv(),Kexists.cv(),t3.cv())) goto _0;
			Bool t4;
			if (!g->GetValue(ctx,(PCV[]){t4.cv(),t3.cv(),nullptr})) goto _0;
			Bool t5;
			t5=!(t4.get());
			if (!(t5.get())) goto _2;
		}
		{
			Variant t6;
			c.f.fLine=7;
			if (g->GetMember(ctx,llogFile.cv(),Kparent.cv(),t6.cv())) goto _0;
			if (g->Call(ctx,(PCV[]){nullptr,t6.cv(),Kcreate.cv()},2,1500)) goto _0;
			g->Check(ctx);
		}
_2:
		{
			Variant t7;
			c.f.fLine=10;
			if (g->GetMember(ctx,llogFile.cv(),Ksize.cv(),t7.cv())) goto _0;
			Num t8;
			if (!g->GetValue(ctx,(PCV[]){t8.cv(),t7.cv(),nullptr})) goto _0;
			lsize=t8.get();
		}
		{
			Obj t9;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t9.cv(),Kcreate.cv(),Long(0).cv(),Kappend.cv(),Long(1).cv(),KSEEK__END.cv(),Long(2).cv()},6,1471)) goto _0;
			g->Check(ctx);
			lENUM=t9.get();
		}
		{
			Bool t10;
			t10=Equal(glob,0,lsize.get());
			if (!(t10.get())) goto _3;
		}
		{
			Variant t11;
			c.f.fLine=15;
			if (g->GetMember(ctx,llogFile.cv(),KplatformPath.cv(),t11.cv())) goto _0;
			Time t12;
			if (g->Call(ctx,(PCV[]){t12.cv(),t11.cv()},1,266)) goto _0;
			g->Check(ctx);
			ldoc=t12.get();
		}
		{
			Variant t13;
			c.f.fLine=16;
			if (g->GetMember(ctx,lENUM.cv(),Kcreate.cv(),t13.cv())) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t13.cv(),lmode.cv(),nullptr})) goto _0;
		}
		goto _4;
_3:
		{
			Variant t14;
			c.f.fLine=18;
			if (g->GetMember(ctx,llogFile.cv(),KplatformPath.cv(),t14.cv())) goto _0;
			Time t15;
			if (g->Call(ctx,(PCV[]){t15.cv(),t14.cv()},1,265)) goto _0;
			g->Check(ctx);
			ldoc=t15.get();
		}
		{
			Variant t16;
			c.f.fLine=19;
			if (g->GetMember(ctx,lENUM.cv(),Kappend.cv(),t16.cv())) goto _0;
			if (!g->SetValue(ctx,(PCV[]){t16.cv(),lmode.cv(),nullptr})) goto _0;
		}
_4:
		if (1!=Var<Long>(ctx,vOK).get()) goto _5;
		{
			Variant t18;
			c.f.fLine=25;
			if (g->GetMember(ctx,lENUM.cv(),Kcreate.cv(),t18.cv())) goto _0;
			Variant t19;
			if (!g->GetValue(ctx,(PCV[]){t19.cv(),lmode.cv(),nullptr})) goto _0;
			Bool t20;
			if (g->OperationOnAny(ctx,6,t19.cv(),t18.cv(),t20.cv())) goto _0;
			if (!(t20.get())) goto _7;
		}
		{
			Time t21;
			t21=ldoc.get();
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){nullptr,t21.cv(),K_5B.cv()},2,103)) goto _0;
			g->Check(ctx);
		}
		goto _6;
_7:
		{
			Variant t22;
			c.f.fLine=27;
			if (g->GetMember(ctx,lENUM.cv(),Kappend.cv(),t22.cv())) goto _0;
			Variant t23;
			if (!g->GetValue(ctx,(PCV[]){t23.cv(),lmode.cv(),nullptr})) goto _0;
			Bool t24;
			if (g->OperationOnAny(ctx,6,t23.cv(),t22.cv(),t24.cv())) goto _0;
			if (!(t24.get())) goto _8;
		}
		{
			Variant t25;
			c.f.fLine=28;
			if (g->GetMember(ctx,lENUM.cv(),KSEEK__END.cv(),t25.cv())) goto _0;
			Time t26;
			t26=ldoc.get();
			if (g->Call(ctx,(PCV[]){nullptr,t26.cv(),Num(-1).cv(),t25.cv()},3,482)) goto _0;
			g->Check(ctx);
		}
		{
			Time t27;
			t27=ldoc.get();
			c.f.fLine=29;
			if (g->Call(ctx,(PCV[]){nullptr,t27.cv(),K_2C.cv()},2,103)) goto _0;
			g->Check(ctx);
		}
		goto _6;
_8:
_6:
		{
			Ref t28;
			t28.setLocalRef(ctx,lnames.cv());
			c.f.fLine=32;
			if (g->Call(ctx,(PCV[]){nullptr,t28.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t29;
			t29.setLocalRef(ctx,lmessages.cv());
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){nullptr,t29.cv(),Long(0).cv()},2,222)) goto _0;
		}
		{
			Ref t30;
			t30.setLocalRef(ctx,lcodes.cv());
			c.f.fLine=34;
			if (g->Call(ctx,(PCV[]){nullptr,t30.cv(),Long(0).cv()},2,221)) goto _0;
		}
		{
			Ref t31;
			t31.setLocalRef(ctx,lmessages.cv());
			Ref t32;
			t32.setLocalRef(ctx,lnames.cv());
			Ref t33;
			t33.setLocalRef(ctx,lcodes.cv());
			c.f.fLine=35;
			if (g->Call(ctx,(PCV[]){nullptr,t33.cv(),t32.cv(),t31.cv()},3,1015)) goto _0;
			g->Check(ctx);
		}
		{
			Col t34;
			c.f.fLine=37;
			if (g->Call(ctx,(PCV[]){t34.cv()},0,1472)) goto _0;
			g->Check(ctx);
			lstack=t34.get();
		}
		{
			Col t35;
			c.f.fLine=38;
			if (g->Call(ctx,(PCV[]){t35.cv()},0,1662)) goto _0;
			g->Check(ctx);
			Variant t36;
			if (g->Call(ctx,(PCV[]){t36.cv(),t35.cv(),Kreverse.cv()},2,1498)) goto _0;
			Obj t37;
			if (g->Call(ctx,(PCV[]){t37.cv(),Kerror.cv(),Var<Long>(ctx,vERROR).cv(),Kline.cv(),Var<Long>(ctx,vERROR_20LINE).cv(),Kmethod.cv(),Var<Txt>(ctx,vERROR_20METHOD).cv(),Kformula.cv(),Var<Txt>(ctx,vERROR_20FORMULA).cv(),Kstack.cv(),lstack.cv(),KcallChain.cv(),t36.cv()},12,1471)) goto _0;
			llog=t37.get();
		}
		li=1;
		{
			Ref t38;
			t38.setLocalRef(ctx,lcodes.cv());
			Long t39;
			c.f.fLine=40;
			if (g->Call(ctx,(PCV[]){t39.cv(),t38.cv()},1,274)) goto _0;
			v0=t39.get();
		}
		goto _9;
_10:
		{
			Txt t40;
			t40=lmessages.arrayElem(li.get()).get();
			Txt t41;
			t41=t40.get();
			Txt t42;
			t42=lnames.arrayElem(li.get()).get();
			Txt t43;
			t43=t42.get();
			Long t44;
			t44=lcodes.arrayElem(li.get()).get();
			Obj t45;
			c.f.fLine=41;
			if (g->Call(ctx,(PCV[]){t45.cv(),Kcode.cv(),t44.cv(),Knames.cv(),t43.cv(),Kmessages.cv(),t41.cv()},6,1471)) goto _0;
			g->Check(ctx);
			if (g->Call(ctx,(PCV[]){nullptr,lstack.cv(),Kpush.cv(),t45.cv()},3,1500)) goto _0;
		}
		li=li.get()+1;
_9:
		if (li.get()<=v0.get()) goto _10;
		{
			Txt t48;
			c.f.fLine=44;
			if (g->Call(ctx,(PCV[]){t48.cv(),llog.cv(),Ref((optyp)3).cv()},2,1217)) goto _0;
			g->Check(ctx);
			Time t49;
			t49=ldoc.get();
			if (g->Call(ctx,(PCV[]){nullptr,t49.cv(),t48.cv()},2,103)) goto _0;
		}
		{
			Time t50;
			t50=ldoc.get();
			c.f.fLine=46;
			if (g->Call(ctx,(PCV[]){nullptr,t50.cv(),K_5D.cv()},2,103)) goto _0;
			g->Check(ctx);
		}
		{
			Time t51;
			t51=ldoc.get();
			c.f.fLine=47;
			if (g->Call(ctx,(PCV[]){nullptr,t51.cv()},1,267)) goto _0;
			g->Check(ctx);
		}
_5:
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
