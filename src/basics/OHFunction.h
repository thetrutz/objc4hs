@interface OHFunction : NSObject {
	id   obj;
	SEL  sel;
	id  par1;
	id  par2;
	int parCnt;
}

+withObj:(id)object sel:(SEL)selector;
+withObj:(id)object sel:(SEL)selector par:(id)parameter;
+withObj:(id)object sel:(SEL)selector par1:(id)parameter1 par2:parameter2;

-(id)call;
// TODO add support for "call" with multiple parameters
-(void)addPar:(id)parameter;
-(OHFunction *)par:(id)parameter;

-(OHFunction *)semicolon:(OHFunction *)g;
// TODO add support for pipelining aka >>=

@end
