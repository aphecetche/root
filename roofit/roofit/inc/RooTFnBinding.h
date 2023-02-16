/*****************************************************************************
 * Project: RooFit                                                           *
 *                                                                           *
  * This code was autogenerated by RooClassFactory                            *
 *****************************************************************************/

#ifndef ROOTFNBINDING
#define ROOTFNBINDING

#include "RooAbsReal.h"
#include "RooListProxy.h"
class TF1 ;
class TF2 ;
class TF3 ;

class RooTFnBinding : public RooAbsReal {
public:
  RooTFnBinding() : _func(nullptr) {}
  RooTFnBinding(const char *name, const char *title, TF1* func, const RooArgList& list);
  RooTFnBinding(const char *name, const char *title, TF1* func, const RooArgList& list, const RooArgList& plist);
  RooTFnBinding(const RooTFnBinding& other, const char* name=nullptr) ;
  TObject* clone(const char* newname) const override { return new RooTFnBinding(*this,newname); }
  inline ~RooTFnBinding() override { }

  void printArgs(std::ostream& os) const override ;

  const RooArgList& observables() const { return _olist;}
  const RooArgList& parameters() const { return _plist; }
  const TF1& function() const { return *_func; }

protected:

  RooListProxy _olist ;
  RooListProxy _plist ;
  TF1* _func ;

  double evaluate() const override ;

private:

  ClassDefOverride(RooTFnBinding,1) // RooAbsReal binding to ROOT TF[123] functions
};


namespace RooFit {

RooAbsReal* bindFunction(TF1* func,RooAbsReal& x) ;
RooAbsReal* bindFunction(TF2* func,RooAbsReal& x, RooAbsReal& y) ;
RooAbsReal* bindFunction(TF3* func,RooAbsReal& x, RooAbsReal& y, RooAbsReal& z) ;

RooAbsReal* bindFunction(TF1* func,RooAbsReal& x, const RooArgList& params) ;
RooAbsReal* bindFunction(TF2* func,RooAbsReal& x, RooAbsReal& y, const RooArgList& params) ;
RooAbsReal* bindFunction(TF3* func,RooAbsReal& x, RooAbsReal& y, RooAbsReal& z, const RooArgList& params) ;

}


#endif
