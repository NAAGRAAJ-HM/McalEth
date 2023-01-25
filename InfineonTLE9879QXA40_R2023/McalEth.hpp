#pragma once
/******************************************************************************/
/* File   : McalEth.hpp                                                       */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "infMcalEth_ServiceNvM_Types.hpp"
#include "CfgMcalEth.hpp"
#include "McalEth_core.hpp"
#include "infMcalEth_Exp.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_McalEth:
      INTERFACES_EXPORTED_MCALETH
      public abstract_module
   ,  public class_McalEth_Functionality
{
   private:
/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
      const ConstMcalEth_Type* lptrConst = (ConstMcalEth_Type*)NULL_PTR;

   public:
/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
      FUNC(void, MCALETH_CODE) InitFunction(
            CONSTP2CONST(ConstModule_TypeAbstract, MCALETH_CONST,       MCALETH_APPL_CONST) lptrConstModule
         ,  CONSTP2CONST(CfgModule_TypeAbstract,   MCALETH_CONFIG_DATA, MCALETH_APPL_CONST) lptrCfgModule
      );
      FUNC(void, MCALETH_CODE) DeInitFunction (void);
      FUNC(void, MCALETH_CODE) MainFunction   (void);
      MCALETH_CORE_FUNCTIONALITIES
};

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
extern VAR(module_McalEth, MCALETH_VAR) McalEth;

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

