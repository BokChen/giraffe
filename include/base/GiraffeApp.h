#ifndef GIRAFFEAPP_H
#define GIRAFFEAPP_H

#include "MooseApp.h"

class GiraffeApp;

template<>
InputParameters validParams<GiraffeApp>();

class GiraffeApp : public MooseApp
{
public:
  GiraffeApp(InputParameters parameters);
  virtual ~GiraffeApp();

  static void registerApps();
  static void registerObjects(Factory & factory);
  static void associateSyntax(Syntax & syntax, ActionFactory & action_factory);
};

#endif /* GIRAFFEAPP_H */
