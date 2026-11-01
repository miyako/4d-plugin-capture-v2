extern Txt K_22;
extern Txt K_26_7C_3C_3E_28_29_25_5E_22_20;
extern Txt K_5C;
extern Txt K_5C_22;
extern Txt kLLQF6tmrvJ4;
extern unsigned char D_proc_ESCAPE__PARAM[];
void proc_ESCAPE__PARAM( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_ESCAPE__PARAM);
	if (!ctx->doingAbort) try {
		Long v0;
		Long v1;
		Txt lmetacharacters;
		Bool lshoudQuote;
		Long v2;
		Long li;
		Long v3;
		Txt lmetacharacter;
		Txt lparam;
		Num llen;
		new ( outResult) Txt();
		{
			Long t0;
			t0=inNbExplicitParam;
			if (0==t0.get()) goto _2;
		}
		lparam=Parm<Txt>(inParams,inNbParam,1).get();
		{
			Bool t2;
			c.f.fLine=8;
			if (g->Call(ctx,(PCV[]){t2.cv()},0,1572)) goto _0;
			if (!(t2.get())) goto _4;
		}
		lmetacharacters=kLLQF6tmrvJ4.get();
		li=1;
		{
			Long t3;
			t3=lmetacharacters.get().fLength;
			v0=t3.get();
		}
		goto _5;
_6:
		{
			Txt t4;
			c.f.fLine=12;
			if (g->Call(ctx,(PCV[]){t4.cv(),lmetacharacters.cv(),li.cv(),Long(1).cv()},3,12)) goto _0;
			lmetacharacter=t4.get();
		}
		{
			Txt t5;
			g->AddString(K_5C.get(),lmetacharacter.get(),t5.get());
			Txt t6;
			c.f.fLine=13;
			if (g->Call(ctx,(PCV[]){t6.cv(),lparam.cv(),lmetacharacter.cv(),t5.cv(),Ref((optyp)3).cv()},4,233)) goto _0;
			lparam=t6.get();
		}
		li=li.get()+1;
_5:
		if (li.get()<=v0.get()) goto _6;
		goto _3;
_4:
		{
			Bool t9;
			c.f.fLine=16;
			if (g->Call(ctx,(PCV[]){t9.cv()},0,1573)) goto _0;
			if (!(t9.get())) goto _7;
		}
		{
			Bool t10;
			t10=false;
			lshoudQuote=t10.get();
		}
		lmetacharacters=K_26_7C_3C_3E_28_29_25_5E_22_20.get();
		{
			Long t11;
			t11=lmetacharacters.get().fLength;
			llen=t11.get();
		}
		li=1;
		v2=(sLONG)lrint(llen.get());
		goto _8;
_9:
		{
			Txt t14;
			c.f.fLine=25;
			if (g->Call(ctx,(PCV[]){t14.cv(),lmetacharacters.cv(),li.cv(),Long(1).cv()},3,12)) goto _0;
			lmetacharacter=t14.get();
		}
		{
			Long t15;
			c.f.fLine=26;
			if (g->Call(ctx,(PCV[]){t15.cv(),lmetacharacter.cv(),lparam.cv(),Ref((optyp)3).cv()},3,15)) goto _0;
			Bool t16;
			t16=0!=t15.get();
			lshoudQuote=lshoudQuote.get()||t16.get();
		}
		if (!(lshoudQuote.get())) goto _10;
		li=(sLONG)lrint(llen.get());
_10:
		li=li.get()+1;
_8:
		if (li.get()<=v2.get()) goto _9;
		if (!(lshoudQuote.get())) goto _11;
		{
			Long t21;
			t21=lparam.get().fLength;
			Txt t22;
			c.f.fLine=33;
			if (g->Call(ctx,(PCV[]){t22.cv(),lparam.cv(),t21.cv()},2,12)) goto _0;
			Bool t23;
			t23=g->CompareString(ctx,t22.get(),K_5C.get())==0;
			if (!(t23.get())) goto _12;
		}
		{
			Txt t24;
			g->AddString(K_22.get(),lparam.get(),t24.get());
			g->AddString(t24.get(),K_5C_22.get(),lparam.get());
		}
		goto _13;
_12:
		{
			Txt t26;
			g->AddString(K_22.get(),lparam.get(),t26.get());
			g->AddString(t26.get(),K_22.get(),lparam.get());
		}
_13:
_11:
		goto _3;
_7:
_3:
_2:
		Res<Txt>(outResult)=lparam.get();
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
