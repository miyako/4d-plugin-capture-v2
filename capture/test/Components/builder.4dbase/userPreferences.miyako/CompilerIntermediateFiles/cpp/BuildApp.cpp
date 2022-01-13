extern Txt KBuildApp;
extern Txt Knew;
extern unsigned char D_proc_BUILDAPP[];
void proc_BUILDAPP( Asm4d_globals *glob, tProcessGlobals *ctx, int32_t inNbExplicitParam, int32_t inNbParam, PCV inParams[], CV *outResult)
{
	CallChain c(ctx,D_proc_BUILDAPP);
	if (!ctx->doingAbort) try {
		new ( outResult) Obj();
		{
			Obj t0;
			c.f.fLine=3;
			if (g->Call(ctx,(PCV[]){t0.cv()},0,1710)) goto _0;
			Variant t1;
			if (g->GetMember(ctx,t0.cv(),KBuildApp.cv(),t1.cv())) goto _0;
			Variant t2;
			if (g->Call(ctx,(PCV[]){t2.cv(),t1.cv(),Knew.cv(),Parm<Obj>(inParams,inNbParam,1).cv()},3,1498)) goto _0;
			g->Check(ctx);
			Obj t3;
			if (!g->GetValue(ctx,(PCV[]){t3.cv(),t2.cv(),nullptr})) goto _0;
			Res<Obj>(outResult)=t3.get();
		}
_0:
_1:
;
	} catch( Asm4d_error e) { g->Error( ctx, e); }

}
