#ifndef SCodeInstUtil__H
#define SCodeInstUtil__H
#include "meta/meta_modelica.h"
#include "util/modelica.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>
#ifdef __cplusplus
extern "C" {
#endif
extern struct record_description SCode_ClassDef_PARTS__desc;
extern struct record_description SCode_Each_NOT__EACH__desc;
extern struct record_description SCode_Element_CLASS__desc;
extern struct record_description SCode_Element_EXTENDS__desc;
extern struct record_description SCode_Encapsulated_NOT__ENCAPSULATED__desc;
extern struct record_description SCode_Final_NOT__FINAL__desc;
extern struct record_description SCode_Mod_MOD__desc;
extern struct record_description SCode_Mod_REDECL__desc;
extern struct record_description SCode_Partial_NOT__PARTIAL__desc;
extern struct record_description SCode_Restriction_R__ENUMERATION__desc;
extern struct record_description SCode_SubMod_NAMEMOD__desc;
extern struct record_description SCodeDump_SCodeDumpOptions_OPTIONS__desc;
#define boxptr_SCodeInstUtil_makeEnumComponents omc_SCodeInstUtil_makeEnumComponents
#define boxptr_SCodeInstUtil_makeEnumParts omc_SCodeInstUtil_makeEnumParts
DLLExport
modelica_metatype omc_SCodeInstUtil_expandEnumeration(threadData_t *threadData, modelica_string _n, modelica_metatype _l, modelica_metatype _prefixes, modelica_metatype _cmt, modelica_metatype _info);
#define boxptr_SCodeInstUtil_expandEnumeration omc_SCodeInstUtil_expandEnumeration
static const MMC_DEFSTRUCTLIT(boxvar_lit_SCodeInstUtil_expandEnumeration,2,0) {(void*) boxptr_SCodeInstUtil_expandEnumeration,0}};
#define boxvar_SCodeInstUtil_expandEnumeration MMC_REFSTRUCTLIT(boxvar_lit_SCodeInstUtil_expandEnumeration)
DLLExport
modelica_metatype omc_SCodeInstUtil_expandEnumerationClass(threadData_t *threadData, modelica_metatype _inElement);
#define boxptr_SCodeInstUtil_expandEnumerationClass omc_SCodeInstUtil_expandEnumerationClass
static const MMC_DEFSTRUCTLIT(boxvar_lit_SCodeInstUtil_expandEnumerationClass,2,0) {(void*) boxptr_SCodeInstUtil_expandEnumerationClass,0}};
#define boxvar_SCodeInstUtil_expandEnumerationClass MMC_REFSTRUCTLIT(boxvar_lit_SCodeInstUtil_expandEnumerationClass)
DLLExport
modelica_metatype omc_SCodeInstUtil_expandEnumerationMod(threadData_t *threadData, modelica_metatype _inMod);
#define boxptr_SCodeInstUtil_expandEnumerationMod omc_SCodeInstUtil_expandEnumerationMod
static const MMC_DEFSTRUCTLIT(boxvar_lit_SCodeInstUtil_expandEnumerationMod,2,0) {(void*) boxptr_SCodeInstUtil_expandEnumerationMod,0}};
#define boxvar_SCodeInstUtil_expandEnumerationMod MMC_REFSTRUCTLIT(boxvar_lit_SCodeInstUtil_expandEnumerationMod)
#define boxptr_SCodeInstUtil_removeSelfReferenceFromSubMod omc_SCodeInstUtil_removeSelfReferenceFromSubMod
DLLExport
modelica_metatype omc_SCodeInstUtil_removeSelfReferenceFromMod(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _inCref);
#define boxptr_SCodeInstUtil_removeSelfReferenceFromMod omc_SCodeInstUtil_removeSelfReferenceFromMod
static const MMC_DEFSTRUCTLIT(boxvar_lit_SCodeInstUtil_removeSelfReferenceFromMod,2,0) {(void*) boxptr_SCodeInstUtil_removeSelfReferenceFromMod,0}};
#define boxvar_SCodeInstUtil_removeSelfReferenceFromMod MMC_REFSTRUCTLIT(boxvar_lit_SCodeInstUtil_removeSelfReferenceFromMod)
#define boxptr_SCodeInstUtil_removeReferenceInBinding omc_SCodeInstUtil_removeReferenceInBinding
#define boxptr_SCodeInstUtil_makeElementsIntoSubMods omc_SCodeInstUtil_makeElementsIntoSubMods
DLLExport
modelica_metatype omc_SCodeInstUtil_addRedeclareAsElementsToExtends(threadData_t *threadData, modelica_metatype _inElements, modelica_metatype _redeclareElements);
#define boxptr_SCodeInstUtil_addRedeclareAsElementsToExtends omc_SCodeInstUtil_addRedeclareAsElementsToExtends
static const MMC_DEFSTRUCTLIT(boxvar_lit_SCodeInstUtil_addRedeclareAsElementsToExtends,2,0) {(void*) boxptr_SCodeInstUtil_addRedeclareAsElementsToExtends,0}};
#define boxvar_SCodeInstUtil_addRedeclareAsElementsToExtends MMC_REFSTRUCTLIT(boxvar_lit_SCodeInstUtil_addRedeclareAsElementsToExtends)
DLLExport
modelica_metatype omc_SCodeInstUtil_removeNonConstantBindingsKeepRedeclares(threadData_t *threadData, modelica_metatype _inMod, modelica_boolean _onlyRedeclares);
DLLExport
modelica_metatype boxptr_SCodeInstUtil_removeNonConstantBindingsKeepRedeclares(threadData_t *threadData, modelica_metatype _inMod, modelica_metatype _onlyRedeclares);
static const MMC_DEFSTRUCTLIT(boxvar_lit_SCodeInstUtil_removeNonConstantBindingsKeepRedeclares,2,0) {(void*) boxptr_SCodeInstUtil_removeNonConstantBindingsKeepRedeclares,0}};
#define boxvar_SCodeInstUtil_removeNonConstantBindingsKeepRedeclares MMC_REFSTRUCTLIT(boxvar_lit_SCodeInstUtil_removeNonConstantBindingsKeepRedeclares)
#define boxptr_SCodeInstUtil_constantBindingOrNone omc_SCodeInstUtil_constantBindingOrNone
#ifdef __cplusplus
}
#endif
#endif
