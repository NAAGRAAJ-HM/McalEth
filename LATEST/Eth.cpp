/******************************************************************************/
/* File   : Eth.cpp                                                           */
/* Author : NAGARAJA HM (c) since 1982. All rights reserved.                  */
/******************************************************************************/

/******************************************************************************/
/* #INCLUDES                                                                  */
/******************************************************************************/
#include "Module.hpp"
#include "infEth_EcuM.hpp"
#include "infEth_Dcm.hpp"
#include "infEth_SchM.hpp"

/******************************************************************************/
/* #DEFINES                                                                   */
/******************************************************************************/
#define ETH_AR_RELEASE_VERSION_MAJOR                                           4
#define ETH_AR_RELEASE_VERSION_MINOR                                           3

/******************************************************************************/
/* MACROS                                                                     */
/******************************************************************************/
#if(ETH_AR_RELEASE_VERSION_MAJOR != STD_AR_RELEASE_VERSION_MAJOR)
   #error "Incompatible ETH_AR_RELEASE_VERSION_MAJOR!"
#endif

#if(ETH_AR_RELEASE_VERSION_MINOR != STD_AR_RELEASE_VERSION_MINOR)
   #error "Incompatible ETH_AR_RELEASE_VERSION_MINOR!"
#endif

/******************************************************************************/
/* TYPEDEFS                                                                   */
/******************************************************************************/
class module_Eth:
      public abstract_module
{
   public:
      module_Eth(Std_TypeVersionInfo lVersionInfo) : abstract_module(lVersionInfo){
      }
      FUNC(void, ETH_CODE) InitFunction(
         CONSTP2CONST(CfgModule_TypeAbstract, ETH_CONFIG_DATA, ETH_APPL_CONST) lptrCfgModule
      );
      FUNC(void, ETH_CODE) DeInitFunction (void);
      FUNC(void, ETH_CODE) MainFunction   (void);
};

extern VAR(module_Eth, ETH_VAR) Eth;

/******************************************************************************/
/* CONSTS                                                                     */
/******************************************************************************/
CONSTP2VAR(infEcuMClient, ETH_VAR, ETH_CONST) gptrinfEcuMClient_Eth = &Eth;
CONSTP2VAR(infDcmClient,  ETH_VAR, ETH_CONST) gptrinfDcmClient_Eth  = &Eth;
CONSTP2VAR(infSchMClient, ETH_VAR, ETH_CONST) gptrinfSchMClient_Eth = &Eth;

/******************************************************************************/
/* PARAMS                                                                     */
/******************************************************************************/
#include "CfgEth.hpp"

/******************************************************************************/
/* OBJECTS                                                                    */
/******************************************************************************/
VAR(module_Eth, ETH_VAR) Eth(
   {
         ETH_AR_RELEASE_VERSION_MAJOR
      ,  ETH_AR_RELEASE_VERSION_MINOR
      ,  0x00
      ,  0xFF
      ,  0x01
      ,  '0'
      ,  '1'
      ,  '0'
   }
);

/******************************************************************************/
/* FUNCTIONS                                                                  */
/******************************************************************************/
FUNC(void, ETH_CODE) module_Eth::InitFunction(
   CONSTP2CONST(CfgModule_TypeAbstract, ETH_CONFIG_DATA, ETH_APPL_CONST) lptrCfgModule
){
#if(STD_ON == Eth_InitCheck)
   if(E_OK == IsInitDone){
#if(STD_ON == Eth_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      if(NULL_PTR == lptrCfgModule){
#if(STD_ON == Eth_DevErrorDetect)
         Det_ReportError(
         );
#endif
      }
      else{
// check lptrCfgModule for memory faults
// use PBcfg_Eth as back-up configuration
      }
      IsInitDone = E_OK;
#if(STD_ON == Eth_InitCheck)
   }
#endif
}

FUNC(void, ETH_CODE) module_Eth::DeInitFunction(void){
#if(STD_ON == Eth_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Eth_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
      IsInitDone = E_NOT_OK;
#if(STD_ON == Eth_InitCheck)
   }
#endif
}

FUNC(void, ETH_CODE) module_Eth::MainFunction(void){
#if(STD_ON == Eth_InitCheck)
   if(E_OK != IsInitDone){
#if(STD_ON == Eth_DevErrorDetect)
      Det_ReportError(
      );
#endif
   }
   else{
#endif
#if(STD_ON == Eth_InitCheck)
   }
#endif
}

class class_Eth_Unused{
   public:
      FUNC(void, ETH_CODE) GetControllerMode       (void);
      FUNC(void, ETH_CODE) SetControllerMode       (void);
      FUNC(void, ETH_CODE) GetPhysAddr             (void);
      FUNC(void, ETH_CODE) SetPhysAddr             (void);
      FUNC(void, ETH_CODE) UpdatePhysAddrFilter    (void);
      FUNC(void, ETH_CODE) ReadMii                 (void);
      FUNC(void, ETH_CODE) WriteMii                (void);
      FUNC(void, ETH_CODE) GetCounterValues        (void);
      FUNC(void, ETH_CODE) GetRxStatus             (void);
      FUNC(void, ETH_CODE) GetTxStatus             (void);
      FUNC(void, ETH_CODE) GetTxErrorCounterValues (void);
      FUNC(void, ETH_CODE) GetCurrentTime          (void);
      FUNC(void, ETH_CODE) EnableEgressTimeStamp   (void);
      FUNC(void, ETH_CODE) GetEgressTimeStamp      (void);
      FUNC(void, ETH_CODE) GetIngressTimeStamp     (void);
      FUNC(void, ETH_CODE) ProvideTxBuffer         (void);
      FUNC(void, ETH_CODE) Transit                 (void);
      FUNC(void, ETH_CODE) Recive                  (void);
      FUNC(void, ETH_CODE) TxConfirmation          (void);
};

FUNC(void, ETH_CODE) class_Eth_Unused::GetControllerMode(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::SetControllerMode(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetPhysAddr(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::SetPhysAddr(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::UpdatePhysAddrFilter(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::ReadMii(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::WriteMii(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetCounterValues(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetRxStatus(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetTxStatus(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetTxErrorCounterValues(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetCurrentTime(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::EnableEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetEgressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::GetIngressTimeStamp(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::ProvideTxBuffer(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::Transit(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::Recive(void){
}

FUNC(void, ETH_CODE) class_Eth_Unused::TxConfirmation(void){
}

/******************************************************************************/
/* EOF                                                                        */
/******************************************************************************/

