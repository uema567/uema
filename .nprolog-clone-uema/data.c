#include <string.h>
#include <ctype.h>
#include "npl.h"

//--------------list data type---------------------
  
car (int addr)
{
  



caar (int addr)
{
  



cdar (int addr)
{
  



cdr (int addr)
{
  



cddr (int addr)
{
  



cadr (int addr)
{
  



caddr (int addr)
{
  



cadddr (int addr)
{
  



caddddr (int addr)
{
  



cadddddr (int addr)
{
  



cadar (int addr)
{
  



cons (int car, int cdr)
{
  
  
  
  
  
  



wcons (int car, int cdr)
{
  
  
  
  
    {
      
    
  
  
  
  
  



assq (int sym, int lis)
{
  
    {
      
	
      
    
  



// assq1(foo,[foo/1,boo/2]) -> foo/1
  int
assq1 (int sym, int lis)
{
  
    {
      
	
      
    
  



// replace([b,4],[[a,1][b,2][c,3]]) -> [[1,a],[b,4],[c,3]]
  int
replace (int x, int lis)
{
  
  
  
    {
      
	
      
      
    
  



//if improper list return -1
  int
length (int addr)
{
  
  
    {
      
	
      
      
    
  



atom_length (int addr)
{
  
  
  
  
    
  
  
  
  
    {
      
	{
	  
	  
	
      
      else if (isUni2 (c))
	{
	  
	  
	
      
      else if (isUni3 (c))
	{
	  
	  
	
      
      else if (isUni4 (c))
	{
	  
	  
	
      
      else
	{
	  
	  
	
      
    
  



string_length (int addr)
{
  
  
  
  
    
  
  
  
  
    {
      
	{
	  
	  
	
      
      else if (isUni2 (c))
	{
	  
	  
	
      
      else if (isUni3 (c))
	{
	  
	  
	
      
      else if (isUni4 (c))
	{
	  
	  
	
      
      else
	{
	  
	  
	
      
    
  



list (int nest)
{
  
    
  
  else
    



//append!
  int
append1 (int x, int y)
{
  
  
    
  
  
    {
      
    
  
  



append (int x, int y)
{
  
    
  
  else
    



reverse (int x)
{
  
  
  
    {
      
      
    
  



listreverse (int x)
{
  
  
  
    {
      
      
      
    
  



last (int x)
{
  



addtail (int x, int y)
{
  



list1 (int x)
{
  



list2 (int x, int y)
{
  



list3 (int x1, int x2, int x3)
{
  



list4 (int x1, int x2, int x3, int x4)
{
  



list5 (int x1, int x2, int x3, int x4, int x5)
{
  



list6 (int x1, int x2, int x3, int x4, int x5, int x6)
{
  
	   (x1, cons (x2, cons (x3, cons (x4, cons (x5, cons (x6, NIL)))))));



list7 (int x1, int x2, int x3, int x4, int x5, int x6, int x7)
{
  
	   (x1,
	    cons (x2,
		  cons (x3,
			cons (x4, cons (x5, cons (x6, cons (x7, NIL))))))));



list8 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8)
{
  
	   (x1,
	    cons (x2,
		  cons (x3,
			cons (x4,
			      cons (x5,
				    cons (x6,
					  cons (x7, cons (x8, NIL)))))))));



list9 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9)
{
  
	   (x1,
	    cons (x2,
		  cons (x3,
			cons (x4,
			      cons (x5,
				    cons (x6,
					  cons (x7,
						cons (x8,
						      cons (x9, NIL))))))))));



list10 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8,
	int x9, int x10)
{
  
	   (x1,
	    cons (x2,
		  cons (x3,
			cons (x4,
			      cons (x5,
				    cons (x6,
					  cons (x7,
						cons (x8,
						      cons (x9,
							    cons (x10,
								  NIL)))))))))));



wlist1 (int x)
{
  



wlist2 (int x, int y)
{
  



wlist3 (int x1, int x2, int x3)
{
  



wlist4 (int x1, int x2, int x3, int x4)
{
  



wlist5 (int x1, int x2, int x3, int x4, int x5)
{
  



wlist6 (int x1, int x2, int x3, int x4, int x5, int x6)
{
  
	   (x1,
	    wcons (x2, wcons (x3, wcons (x4, wcons (x5, wcons (x6, NIL)))))));



wlist7 (int x1, int x2, int x3, int x4, int x5, int x6, int x7)
{
  
	   (x1,
	    cons (x2,
		  cons (x3,
			cons (x4, cons (x5, cons (x6, cons (x7, NIL))))))));



wlist8 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8)
{
  
	   (x1,
	    wcons (x2,
		   wcons (x3,
			  wcons (x4,
				 wcons (x5,
					wcons (x6,
					       wcons (x7,
						      wcons (x8, NIL)))))))));



wlist9 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8,
	int x9)
{
  
	   (x1,
	    wcons (x2,
		   wcons (x3,
			  wcons (x4,
				 wcons (x5,
					wcons (x6,
					       wcons (x7,
						      wcons (x8,
							     wcons (x9,
								    NIL))))))))));



wlist10 (int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8,
	 int x9, int x10)
{
  
	   (x1,
	    wcons (x2,
		   wcons (x3,
			  wcons (x4,
				 wcons (x5,
					wcons (x6,
					       wcons (x7,
						      wcons (x8,
							     wcons (x9,
								    wcons
								    (x10,
								     NIL)))))))))));



nth (int addr, int n)
{
  
    {
      
	
      
      
    
  



//check data type
  int
constantp (int addr)
{
  
    
  
  else if (!structurep (addr) && !variablep (addr))
    
  
  else
    



atom_constant_p (int addr)
{
  
    
  
  else if (GET_AUX (addr) == SIMP)
    
  
  else
    



// 'foo.pl' '123.23'
  int
atom_quote_p (int addr)
{
  
  
  
    
  
  else if (operatorp (addr))
    
  
  else if (GET_AUX (addr) == SYS)
    
  
  else if (anoymousp (addr))
    
  
  else if (variablep (addr))
    
  
  else if (user_operator_p (addr))
    
  
  else if (singlep (addr))
    {
      
      
	
      
	
      
	
      
	
      
      
	{
	  
	       (str[pos] == '_' || 
		|| 
		|| 
	       || str[pos] == ' ')
	    {
	      
	    
	  
	    
	  
	  else if (isUni3 (str[pos]))
	    
	  
	  else if (isUni4 (str[pos]))
	    
	  
	  else if (isUni5 (str[pos]))
	    
	  
	  else if (isUni6 (str[pos]))
	    
	  
	  else
	    
	
      
    
  
  else
    



numberp (int addr)
{
  
    
  
  else if (integerp (addr))
    
  
  else if (IS_OUTCELL (addr))
    
  
  else if (IS_FLOAT (addr) || IS_LONGNUM (addr) || IS_BIGXNUM (addr))
    
  
  else
    



integerp (int addr)
{
  
    
  
  else if (addr >= INT_FLAG)
    
  
  else if (addr < 0)
    
  
  else
    



bignump (int addr)
{
  
    
  
  else if (IS_BIGXNUM (addr))
    
  
  else
    



longnump (int addr)
{
  
    
  
  else if (IS_LONGNUM (addr))
    
  
  else
    



wide_integer_p (int addr)
{
  
    
  
  else
    



floatp (int addr)
{
  
    
  
  else if (IS_FLOAT (addr))
    
  
  else
    



stringp (int addr)
{
  
    
  
  else if (IS_STRING (addr))
    
  
  else
    



atomp (int addr)
{
  
    
  
  else if (singlep (addr) && !wide_variable_p (addr))
    
  
  else
    



atomicp (int addr)
{
  
    
  
  else if (numberp (addr))
    
  
  else
    



characterp (int addr)
{
  
    
  
  else
    



singlep (int addr)
{
  
    
  
  else if (IS_SINGLE (addr))
    
  
  else
    



streamp (int addr)
{
  
    
  
  else if (IS_STREAM (addr))
    
  
  else
    



structurep (int addr)
{
  
    
  
  else if (IS_STRUCT (addr) || IS_NIL (addr))
    
  
  else
    



// [1,2,3]
  int
listp (int addr)
{
  
    
  
  else
    



// (1,2,3).
  int
argumentsp (int addr)
{
  
       (!structurep (cadr (addr)) || 
	(operationp (cadr (addr)) && heavy999p (car (cadr (addr))))) && 
       (!structurep (caddr (addr)) || 
	(operationp (caddr (addr)) && heavy999p (car (caddr (addr))))))
    
  
  else if (structurep (addr) && 
	   (!structurep (cadr (addr)) || 
	    (structurep (cadr (addr)) && heavy999p (car (cadr (addr)))))
	   && 
    
  
  else
    



disjunctionp (int addr)
{
  
    
  
  else
    



conjunctionp (int addr)
{
  
    
  
  else
    



atmarkp (int addr)
{
  
    
  
  else
    



colonp (int addr)
{
  
    
  
  else
    



infix_operator_p (int addr)
{
  
    
  
  else if (operatorp (addr) || 
	   || 
    
  
  else
    



infixp (int addr)
{
  
    
  
  else
    



prefixp (int addr)
{
  
  
	 ((opt = GET_OPT (car (addr))) == FX || opt == FY))
    
  
  else
    



postfixp (int addr)
{
  
  
	 ((opt = GET_OPT (car (addr))) == XF || opt == YF))
    
  
  else
    



alphabeticalp (int addr)
{
  
  
    
  
  else
    {
      
      
	
      
      else
	
    



operatorp (int addr)
{
  
    
  
  else
    



user_operator_p (int addr)
{
  
    
  
  else
    



user_operation_p (int addr)
{
  
       && GET_AUX (car (addr)) == USER)
    
  
  else
    



notated_builtinp (int addr)
{
  
  
	 (GET_AUX (addr) == SYS || GET_AUX (addr) == OPE
	  || GET_AUX (addr) == COMP) && 
					  || 
					  || 
					  || 
					  || 
					  || 
					  || 
					  || 
					  || 
					  || 
    
  
  else
    



variablep (int addr)
{
  
    
  
  else if (singlep (addr) && GET_AUX (addr) == VAR)
    
  
  else
    



// variable + anoymous_variable
  int
wide_variable_p (int addr)
{
  
    
  
  else if (anoymousp (addr))
    
  
  else
    



alpha_variable_p (int addr)
{
  
    
  
  else
    



atom_variable_p (int addr)
{
  
    
  
  else
    



anoymousp (int addr)
{
  
    
  
  else
    



predicatep (int addr)
{
  
       && GET_AUX (car (addr)) == PRED)
    
  
  else if (IS_INCELL (addr) && GET_AUX (addr) == PRED)
    
  
  else
    



functionp (int addr)
{
  
       && GET_AUX (car (addr)) == FUNC)
    
  
  else if (IS_INCELL (addr) && GET_AUX (addr) == FUNC)
    
  
  else
    



termp (int addr)
{
  
       && GET_AUX (car (addr)) == PRED)
    
  
  else
    



atom_predicate_p (int addr)
{
  
    
  
  else
    



clausep (int addr)
{
  
       && 
    
  
  else
    



operationp (int addr)
{
  
       && 
    
  
  else
    



// e.g. -1 -p
  int
single_operation_p (int addr)
{
  
    
  
  else if (integerp (addr) && GET_INT (addr) < 0)
    
  
  else
    



builtinp (int addr)
{
  
       && 
    
  
  else if (IS_INCELL (addr) && GET_AUX (addr) == SYS)
    
  
  else
    



compiledp (int addr)
{
  
       && 
    
  
  else if (IS_INCELL (addr) && GET_AUX (addr) == COMP)
    
  
  else
    



compoundp (int addr)
{
  
    
  
  else
    



groundp (int addr)
{
  
    
  
  else if (wide_variable_p (addr))
    
  
  else if (atomp (addr))
    
  
  else if (groundp (cadr (addr)) && groundp (caddr (addr)))
    
  
  else
    
  



aliasp (int addr)
{
  
       && streamp (car (addr)))
    
  
  else
    



has_variable_p (int addr)
{
  
    
  
  else if (!structurep (addr))
    
      
  
    else
      
  
  else if (has_variable_p (car (addr)) || has_variable_p (cdr (addr)))
    
  
  else
    



has_value_p (int addr)
{
  
    
  
  else
    



has_no_value_p (int x)
{
  
    {
      
	
      
    
  



has_cut_p (int addr)
{
  
    
  
  else if (!conjunctionp (addr))
    
  
  else if (conjunctionp (addr) && cadr (addr) == CUT)
    
  
  else
    



dcgp (int addr)
{
  
    
  
  else
    



// for parser. if weight of operator is heavy than 999
  int
heavy999p (int addr)
{
  
    
  
  else
    



callablep (int addr)
{
  
    
  
  else if (numberp (addr))
    
  
  else if (atomp (addr))
    
  
  else if (predicatep (addr))
    
  
  else if (builtinp (addr))
    
  
  else if (compiledp (addr))
    
  
  else if (conjunctionp (addr))
    {
      
	
      
      else
	
    
  
  else if (disjunctionp (addr))
    {
      
	
      
      else
	
    
  
  else if (user_operation_p (addr))
    
  
  else
    



mixturep (int addr)
{
  
    
  
  else if (GET_OPT (addr) == FX_XFX || 
	   || 
	   || 
	   || 
	   || 
    
  
  else
    



get_1st_weight (int addr)
{
  



get_2nd_weight (int addr)
{
  



ifthenp (int addr)
{
  
    
  
  else
    



atom_codes_list_p (int addr)
{
  
    {
      
	
      
    
  



nullp (int addr)
{
  
    
  
  else
    



eqp (int addr1, int addr2)
{
  
    
  
  else if (numberp (addr1) && numberp (addr2))
    
      
  
    else
      
  
  else
    



// e.g. addr1 = makeatom("abc",SIMP); addr2 = makeatom("abc",SYS);
// then eqlp(addr1,addr2) = 1
  int
eqlp (int addr1, int addr2)
{
  
    
  
  else if (atomp (addr1) && atomp (addr2))
    {
      
	
      
      else
	
    
  
  else if (numberp (addr1) && numberp (addr2))
    {
      
	
      
      else
	
    
  
  else if (stringp (addr1) && stringp (addr2))
    {
      
	
      
      else
	
    
  
  else
    



equalp (int addr1, int addr2)
{
  
    
  
  else if (nullp (addr1) && !nullp (addr2))
    
  
  else if (!nullp (addr1) && nullp (addr2))
    
  
  else if (!structurep (addr1) && !structurep (addr2))
    
  
  else if (!structurep (addr1) && structurep (addr2))
    
  
  else if (structurep (addr1) && !structurep (addr2))
    
  
  else if (equalp (car (addr1), car (addr2))
	   && 
    
  
  else
    



streqp (int x, int y)
{
  
    
  
  else
    



memq (int x, int y)
{
  
    {
      
	
      
    
  



memberp (int x, int y)
{
  
    {
      
	
      
    
  



listremove (int x, int y)
{
  
    
  
  else if (eqlp (x, car (y)))
    
  
  else
    



remove_duplicate (int x)
{
  
    
  
  else if (memq (car (x), cdr (x)))
    
  
  else
    



/*
x1 is ignore
*/ 
  int
listremove3 (int x1, int x2, int x3, int ls)
{
  
    
  
  else if (equalp (x2, cadr (car (ls))) && 
    
  
  else
    



spypointp (int x)
{
  
  
    {
      
      
    
  
  else
    {
      
      
    
  
  
    
  
  else
    



leappointp (int x)
{
  
  
    {
      
      
    
  
  else
    {
      
      
    
  
  
    
  
  else
    



unique (int x)
{
  
  
  
    {
      
	
      
    
  



unicodep (char c)
{
  
    
  
  else
    



//-------for debug------------------
  void
cellprint (int addr)
{
  
    {
    
      printf ("FRE ");
      break;
    
      printf ("USE ");
      break;
    
  
    {
    
      printf ("EMP    ");
      break;
    
      printf ("INTN   ");
      break;
    
      printf ("FLTN   ");
      break;
    
      printf ("ATOM   ");
      break;
    
      printf ("STRUCT ");
      break;
    
  
  
  
  



//dump heap
  void
heapdump (int start, int end)
{
  
  
  
    {
      
      
    



//Prolog unification
  int
deref (int x)
{
  
  
    
  
  else if (!structurep (x))
    
  
  else
    {
      
      
      
    



deref1 (int x)
{
  
  
    {
    
      
	
      
      else if (variablep (res))
	{
	  
	  
	
      
      else if (structurep (res))
	
      
      else
	
    
  
  else
    
  



unify (int x, int y)
{
  
  
    
  
  else if (variablep (x) && !variablep (y))
    {
      
      
	{
	  
	  
	
      
      else
	
    
  
  else if (!variablep (x) && variablep (y))
    {
      
      
	{
	  
	  
	
      
      else
	
    
  
  else if (variablep (x) && variablep (y))
    {
      
      
      
	{
	  
	    {
	      
	    
	  
	  else if (x != y)
	    {			//ordinaly case
	      bindsym (x1, y1);
	      
	    
	  
	  else
	    {
	      
	      return (YES);
	    
	
      
      else if (variablep (x1) && !variablep (y1))
	{
	  
	  
	
      
      else if (!variablep (x1) && variablep (y1))
	{
	  
	  
	
      
      else
	{
	  
	
    
  
  else if (anoymousp (x) || anoymousp (y))
    {
      
    
  
  else if (constantp (x) && constantp (y))
    {
      
	
      
      else
	
    
  
  else if (stringp (x) && stringp (y))
    {
      
	
      
      else
	
    
  
  else if (nullp (x) && !nullp (y))
    
  
  else if (!nullp (x) && nullp (y))
    
  
  else if (structurep (x) && !structurep (y))
    
  
  else if (!structurep (x) && structurep (y))
    
  
  else if (listp (x) && !listp (y))
    
  
  else if (!listp (x) && listp (y))
    
  
  else if (unify (car (x), car (y)) == YES
	   && 
    
  
  else
    
  



//typed unify. x is a variable;
  int
unify_var (int x, int y)
{
  
  
    {
      
    
  
  else if (!variablep (y))
    {
      
      
	{
	  
	  
	
      
      else
	
    
  
  else if (variablep (y))
    {
      
      
      
	{
	  
	    {			//ordinaly case
	      bindsym (x1, y1);
	    
	  
	  else
	    {
	      
	    }
	  
	
      
      else if (variablep (x1) && !variablep (y1))
	{
	  
	  
	
      
      else if (!variablep (x1) && variablep (y1))
	{
	  
	  
	
      
      else
	{
	  
	
    
  



// typed unify. x is constant
  int
unify_const (int x, int y)
{
  
  
    {
      
	
      
      else
	
    
  
  else if (variablep (y))
    {
      
      
	{
	  
	  
	
      
      else
	{
	  
	
    
  
  else if (anoymousp (y))
    {
      
    
  



// typed unify. x is [] (empty list)
  int
unify_nil (int x, int y)
{
  
  
    
  
  else if (variablep (y))
    {
      
      
	{
	  
	  
	
      
      else if (y1 == NIL)
	
      
      else
	
    
  



//unbind to local-stack x
  void
unbind (int x)
{
  
  
    {
      
	{
	  
	
      
      else if (atom_variable_p (stack[i]))
	{
	  
	    {
	      
	    
	  
	  
	
      
      else
	
    
  



// link variable and variant
  void
assign_variant (int x)
{
  
    {
      
      
    



// release link variable and ariant
  void
release_variant (int x)
{
  
    {
      
      
    



sort (int x)
{
  
  
  
    {
      
      
    
  



insert (int x, int y)
{
  
    
  
  else if (sortsmaller (y, car (x)))
    
  
  else if (sorteqlp (y, car (x)))
    
  
  else
    



keysort (int x)
{
  
  
  
    {
      
      
    
  



keyinsert (int x, int y)
{
  
    
  
  else if (!(length (car (x)) == 3 && eqlp (caar (x), makeope ("-"))))
    
  
  else if (sortsmaller (cadr (y), cadr (car (x))))
    
  
  else
    
  



sortsmaller (int x, int y)
{
  
    
  
  else if (!variablep (x) && variablep (y))
    
  
  else if (variablep (x) && variablep (y))
    {
      
	
      
      else
	
    
  
  else
    



sorteqlp (int x, int y)
{
  
    
  
  else if (!variablep (x) && variablep (y))
    
  
  else if (variablep (x) && variablep (y))
    {
      
	
      
      else
	
    
  
  else
    



printenv (void)
{
  
  
    {
      
	{
	  
	  
	  
	
      
      else if (atom_variable_p (stack[i]))
	{
	  
	  
	  
	
    
  



add_data (int pred, int data)
{
  
  
    //set arity. e.g. GET_CDR(pred) == #[2,3]
    memoize_arity (data, pred);
  
  
    {
      
    
  
  else
    {
      
	{
	  
	
      
    
  
    



insert_data (int pred, int data)
{
  
    //set arity. e.g. GET_CDR(pred) == #[2,3]
    memoize_arity (data, pred);
  
  
    



/*
X -> call(X) e.g foo(X) :- X. -> foo(X) :- call(X).
atom without argument is converted to predicate
*/ 
  int
variable_to_call (int x)
{
  
    
  
  else if (variablep (x))
    
  
  else if (atomp (x) && GET_AUX (x) == SIMP && 
    
  
  else if (structurep (x) && (car (x) == AND || car (x) == OR))
    
	     (car (x), 
	      
  
  else if (structurep (x) && car (x) == DEFINE)
    {
      
	return (list2 (car (x), cadr (x)));
      
      else			// normal case foo(X) :- bar(X).
	return (list3 (car (x), cadr (x), variable_to_call (caddr (x))));
    
  
  else if (structurep (x) && car (x) == makeatom ("-->", OPE))
    
  
  else
    



concat_atom (int x, int y)
{
  
  
  
  
  
  
  



structure_to_list (int x)
{
  
  
  
  
    {
      
      
    
  
    
  



list_to_structure (int x)
{
  
  
  
  
    {
      
      
    
  



copy_term (int x)
{
  
  
    
  
  else if (variablep (x))
    
  
  else if (!structurep (x))
    
  
  else
    {
      
      
    
  



copy_heap (int x)
{
  
    
  
  else if (IS_ALPHA (x))
    
  
  else if (singlep (x))
    
  
  else if (numberp (x))
    
  
  else if (stringp (x))
    
  
  else if (listp (x))
    
  
  else
    
  



// v_001(vairant) -> _v001(atom-variable)
  int
alpha_to_variable (int x)
{
  
  
  
  
  



//transform from UTF-8 to unicode
  int
utf8_to_ucs4 (char *p)
{
  
  
  
  
    {
      
      
    
  
  else if (uc >= 0xc0 && uc <= 0xdf)
    {
      
      
      
      
      
      
      
    
  
  else if (uc >= 0xe0 && uc <= 0xef)
    {
      
      
      
      
      
      
      
      
      
      
      
    
  
  else if (uc >= 0xf0 && uc <= 0xf7)
    {
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
    
  
  else
    



//transform from Unicode to UTF-8
  void
ucs4_to_utf8 (int n, char *p)
{
  
  
    {
      
    
  
  else if (n <= 0x07ff)
    {
      
      
      
      
      
      
      
      
    
  
  else if (n <= 0xffff)
    {
      
      
      
      
      
      
      
      
      
      
      
      
      
    
  
  else if (n < 0x1fffff)
    {
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
      
    
  
  else
    {
      
    
  
  



ctrl_to_number (char c)
{
  
    
  
  else if (c == 't')
    
  
  else if (c == 'f')
    
  
  else if (c == 'r')
    
  
  else if (c == 'v')
    
  
  else if (c == 'a')
    
  
  else if (c == 'b')
    
  
  else
    
  



last_predicate (int x)
{
  
    
  
  else
    


