
// Boost Includes ==============================================================
#include <boost/python.hpp>
#include <boost/cstdint.hpp>

// Includes ====================================================================
#include <AAFTypes.h>
#include <AxBaseObj.h>
#include <AxBaseObjIter.h>
#include <AxComponent.h>
#include <AxContentStorage.h>
#include <AxDefObject.h>
#include <AxDescriptiveFramework.h>
#include <AxDictionary.h>
#include <AxEssence.h>
#include <AxEx.h>
#include <AxFile.h>
#include <AxHeader.h>
#include <AxHrMap.h>
#include <AxInit.h>
#include <AxIterator.h>
#include <AxKLVData.h>
#include <AxMetaDef.h>
#include <AxMob.h>
#include <AxMobSlot.h>
#include <AxObject.h>
#include <AxParameter.h>
#include <AxPluginMgr.h>
#include <AxProperty.h>
#include <AxPropertyValue.h>
#include <AxPropertyValueDump.h>
#include <AxStorageErrors.h>
#include <AxTaggedValue.h>
#include <AxTypes.h>
#include <AxUtil.h>
#include <query_interface.h>

// Using =======================================================================
using namespace boost::python;

// Declarations ================================================================

class SmartPointers {};
extern const char classname_ClassDef[] = "ClassDef";
extern const char classname_EssenceAccess[] = "EssenceAccess";
extern const char classname_File[] = "File";
extern const char classname_EssenceFormat[] = "EssenceFormat";
extern const char classname_MetaDefinition[] = "MetaDefinition";
extern const char classname_Property[] = "Property";
extern const char classname_PropertyDef[] = "PropertyDef";
extern const char classname_PropertyValue[] = "PropertyValue";
extern const char classname_IEnumAAFClassDefs[] = "IEnumAAFClassDefs";
extern const char classname_IEnumAAFCodecDefs[] = "IEnumAAFCodecDefs";
extern const char classname_IEnumAAFCodecFlavours[] = "IEnumAAFCodecFlavours";
extern const char classname_IEnumAAFComponents[] = "IEnumAAFComponents";
extern const char classname_IEnumAAFContainerDefs[] = "IEnumAAFContainerDefs";
extern const char classname_IEnumAAFControlPoints[] = "IEnumAAFControlPoints";
extern const char classname_IEnumAAFDataDefs[] = "IEnumAAFDataDefs";
extern const char classname_IEnumAAFIdentifications[] = "IEnumAAFIdentifications";
extern const char classname_IEnumAAFInterpolationDefs[] = "IEnumAAFInterpolationDefs";
extern const char classname_IEnumAAFOperationDefs[] = "IEnumAAFOperationDefs";
extern const char classname_IEnumAAFEssenceData[] = "IEnumAAFEssenceData";
extern const char classname_IEnumAAFKLVData[] = "IEnumAAFKLVData";
extern const char classname_IEnumAAFLoadedPlugins[] = "IEnumAAFLoadedPlugins";
extern const char classname_IEnumAAFLocators[] = "IEnumAAFLocators";
extern const char classname_IEnumAAFMobSlots[] = "IEnumAAFMobSlots";
extern const char classname_IEnumAAFMobs[] = "IEnumAAFMobs";
extern const char classname_IEnumAAFParameterDefs[] = "IEnumAAFParameterDefs";
extern const char classname_IEnumAAFParameters[] = "IEnumAAFParameters";
extern const char classname_IEnumAAFProperties[] = "IEnumAAFProperties";
extern const char classname_IEnumAAFPropertyDefs[] = "IEnumAAFPropertyDefs";
extern const char classname_IEnumAAFPropertyValues[] = "IEnumAAFPropertyValues";
extern const char classname_IEnumAAFPluginDefs[] = "IEnumAAFPluginDefs";
extern const char classname_IEnumAAFPluginLocators[] = "IEnumAAFPluginLocators";
extern const char classname_IEnumAAFSegments[] = "IEnumAAFSegments";
extern const char classname_IEnumAAFTaggedValues[] = "IEnumAAFTaggedValues";
extern const char classname_IEnumAAFTypeDefs[] = "IEnumAAFTypeDefs";
extern const char classname_RandomFile[] = "RandomFile";
extern const char classname_EssenceMultiAccess[] = "EssenceMultiAccess";
extern const char classname_IEnumAAFKLVDataDefs[] = "IEnumAAFKLVDataDefs";
extern const char classname_IEnumAAFTaggedValueDefs[] = "IEnumAAFTaggedValueDefs";
extern const char classname_IUnknown[] = "IUnknown";


// Module ======================================================================
void Export_pyste_src_AxSmartPointer()
{

scope smartpointers = class_<SmartPointers>("smartpointers");
class_< IAAFAIFCDescriptorSP > ("IAAFAIFCDescriptorSP")
.def("to_AIFCDescriptorSP", query_interface_pass_through<IAAFAIFCDescriptorSP > )
;
class_< IAAFClassDefSP > ("IAAFClassDefSP")
.def("to_ClassDefSP", query_interface_pass_through<IAAFClassDefSP > )
.def("GetClassName",PyGetClassName_from_string<IAAFClassDefSP, classname_ClassDef> )
;
class_< IAAFCodecDefSP > ("IAAFCodecDefSP")
.def("to_CodecDefSP", query_interface_pass_through<IAAFCodecDefSP > )
.def("GetClassName",PyGetClassName<IAAFCodecDef, AxCodecDef> )
;
class_< IAAFCommentMarkerSP > ("IAAFCommentMarkerSP")
.def("to_CommentMarkerSP", query_interface_pass_through<IAAFCommentMarkerSP > )
.def("to_DescriptiveMarkerSP", query_interface<IAAFCommentMarker, IAAFDescriptiveMarker > )
.def("GetClassName",PyGetClassName<IAAFCommentMarker, AxCommentMarker> )
;
class_< IAAFComponentSP > ("IAAFComponentSP")
.def("to_ComponentSP", query_interface_pass_through<IAAFComponentSP > )
.def("to_TransitionSP", query_interface<IAAFComponent, IAAFTransition > )
.def("to_SegmentSP", query_interface<IAAFComponent, IAAFSegment > )
.def("to_TimecodeSP", query_interface<IAAFComponent, IAAFTimecode > )
.def("to_SourceReferenceSP", query_interface<IAAFComponent, IAAFSourceReference > )
.def("to_SourceClipSP", query_interface<IAAFComponent, IAAFSourceClip > )
.def("to_EventSP", query_interface<IAAFComponent, IAAFEvent > )
.def("to_CommentMarkerSP", query_interface<IAAFComponent, IAAFCommentMarker > )
.def("to_DescriptiveMarkerSP", query_interface<IAAFComponent, IAAFDescriptiveMarker > )
.def("to_GPITriggerSP", query_interface<IAAFComponent, IAAFGPITrigger > )
.def("to_TimecodeStreamSP", query_interface<IAAFComponent, IAAFTimecodeStream > )
.def("to_TimecodeStream12MSP", query_interface<IAAFComponent, IAAFTimecodeStream12M > )
.def("to_FillerSP", query_interface<IAAFComponent, IAAFFiller > )
.def("to_NestedScopeSP", query_interface<IAAFComponent, IAAFNestedScope > )
.def("to_PulldownSP", query_interface<IAAFComponent, IAAFPulldown > )
.def("to_SequenceSP", query_interface<IAAFComponent, IAAFSequence > )
.def("to_EssenceGroupSP", query_interface<IAAFComponent, IAAFEssenceGroup > )
.def("to_OperationGroupSP", query_interface<IAAFComponent, IAAFOperationGroup > )
.def("to_ScopeReferenceSP", query_interface<IAAFComponent, IAAFScopeReference > )
.def("to_SelectorSP", query_interface<IAAFComponent, IAAFSelector > )
.def("to_EdgecodeSP", query_interface<IAAFComponent, IAAFEdgecode > )
.def("GetClassName",PyGetClassName<IAAFComponent, AxComponent> )
;
class_< IAAFCompositionMobSP > ("IAAFCompositionMobSP")
.def("to_CompositionMobSP", query_interface_pass_through<IAAFCompositionMobSP > )
.def("GetClassName",PyGetClassName<IAAFCompositionMob, AxCompositionMob> )
;
class_< IAAFCompositionMob2SP > ("IAAFCompositionMob2SP")
.def("to_CompositionMob2SP", query_interface_pass_through<IAAFCompositionMob2SP > )
.def("GetClassName",PyGetClassName<IAAFCompositionMob2, AxCompositionMob> )
;
class_< IAAFConstantValueSP > ("IAAFConstantValueSP")
.def("to_ConstantValueSP", query_interface_pass_through<IAAFConstantValueSP > )
.def("GetClassName",PyGetClassName<IAAFConstantValue, AxConstantValue> )
;
class_< IAAFContainerDefSP > ("IAAFContainerDefSP")
.def("to_ContainerDefSP", query_interface_pass_through<IAAFContainerDefSP > )
.def("GetClassName",PyGetClassName<IAAFContainerDef, AxContainerDef> )
;
class_< IAAFContentStorageSP > ("IAAFContentStorageSP")
.def("to_ContentStorageSP", query_interface_pass_through<IAAFContentStorageSP > )
.def("GetClassName",PyGetClassName<IAAFContentStorage, AxContentStorage> )
;
class_< IAAFControlPointSP > ("IAAFControlPointSP")
.def("to_ControlPointSP", query_interface_pass_through<IAAFControlPointSP > )
.def("GetClassName",PyGetClassName<IAAFControlPoint, AxControlPoint> )
;
class_< IAAFDataDefSP > ("IAAFDataDefSP")
.def("to_DataDefSP", query_interface_pass_through<IAAFDataDefSP > )
.def("GetClassName",PyGetClassName<IAAFDataDef, AxDataDef> )
;
class_< IAAFDefObjectSP > ("IAAFDefObjectSP")
.def("to_DefObjectSP", query_interface_pass_through<IAAFDefObjectSP > )
.def("to_KLVDataDefinitionSP", query_interface<IAAFDefObject, IAAFKLVDataDefinition > )
.def("to_CodecDefSP", query_interface<IAAFDefObject, IAAFCodecDef > )
.def("to_PluginDefSP", query_interface<IAAFDefObject, IAAFPluginDef > )
.def("to_ContainerDefSP", query_interface<IAAFDefObject, IAAFContainerDef > )
.def("to_InterpolationDefSP", query_interface<IAAFDefObject, IAAFInterpolationDef > )
.def("to_OperationDefSP", query_interface<IAAFDefObject, IAAFOperationDef > )
.def("to_DataDefSP", query_interface<IAAFDefObject, IAAFDataDef > )
.def("to_DataDef2SP", query_interface<IAAFDefObject, IAAFDataDef2 > )
.def("to_DataDef3SP", query_interface<IAAFDefObject, IAAFDataDef3 > )
.def("to_ParameterDefSP", query_interface<IAAFDefObject, IAAFParameterDef > )
.def("to_TaggedValueDefinitionSP", query_interface<IAAFDefObject, IAAFTaggedValueDefinition > )
.def("GetClassName",PyGetClassName<IAAFDefObject, AxDefObject> )
;
class_< IAAFPluginDefSP > ("IAAFPluginDefSP")
.def("to_PluginDefSP", query_interface_pass_through<IAAFPluginDefSP > )
.def("GetClassName",PyGetClassName<IAAFPluginDef, AxPluginDef> )
;
class_< IAAFDictionarySP > ("IAAFDictionarySP")
.def("to_DictionarySP", query_interface_pass_through<IAAFDictionarySP > )
.def("GetClassName",PyGetClassName<IAAFDictionary, AxDictionary> )
;
class_< IAAFEdgecodeSP > ("IAAFEdgecodeSP")
.def("to_EdgecodeSP", query_interface_pass_through<IAAFEdgecodeSP > )
.def("GetClassName",PyGetClassName<IAAFEdgecode, AxEdgecode> )
;
class_< IAAFOperationDefSP > ("IAAFOperationDefSP")
.def("to_OperationDefSP", query_interface_pass_through<IAAFOperationDefSP > )
.def("GetClassName",PyGetClassName<IAAFOperationDef, AxOperationDef> )
;
class_< IAAFEssenceAccessSP > ("IAAFEssenceAccessSP")
.def("to_EssenceAccessSP", query_interface_pass_through<IAAFEssenceAccessSP > )
.def("GetClassName",PyGetClassName_from_string<IAAFEssenceAccessSP, classname_EssenceAccess> )
;
class_< IAAFEssenceDataSP > ("IAAFEssenceDataSP")
.def("to_EssenceDataSP", query_interface_pass_through<IAAFEssenceDataSP > )
;
class_< IAAFEssenceDescriptorSP > ("IAAFEssenceDescriptorSP")
.def("to_EssenceDescriptorSP", query_interface_pass_through<IAAFEssenceDescriptorSP > )
.def("to_FileDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFFileDescriptor > )
.def("to_SoundDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFSoundDescriptor > )
.def("to_PCMDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFPCMDescriptor > )
.def("to_WAVEDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFWAVEDescriptor > )
.def("to_DigitalImageDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFDigitalImageDescriptor > )
.def("to_CDCIDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFCDCIDescriptor > )
.def("to_RGBADescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFRGBADescriptor > )
.def("to_PhysicalDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFPhysicalDescriptor > )
.def("to_ImportDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFImportDescriptor > )
.def("to_RecordingDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFRecordingDescriptor > )
.def("to_AuxiliaryDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFAuxiliaryDescriptor > )
.def("to_TapeDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFTapeDescriptor > )
.def("to_FilmDescriptorSP", query_interface<IAAFEssenceDescriptor, IAAFFilmDescriptor > )
.def("GetClassName",PyGetClassName<IAAFEssenceDescriptor, AxEssenceDescriptor> )
;
class_< IAAFEventSP > ("IAAFEventSP")
.def("to_EventSP", query_interface_pass_through<IAAFEventSP > )
.def("to_CommentMarkerSP", query_interface<IAAFEvent, IAAFCommentMarker > )
.def("to_DescriptiveMarkerSP", query_interface<IAAFEvent, IAAFDescriptiveMarker > )
.def("to_GPITriggerSP", query_interface<IAAFEvent, IAAFGPITrigger > )
.def("to_TimecodeStreamSP", query_interface<IAAFEvent, IAAFTimecodeStream > )
.def("to_TimecodeStream12MSP", query_interface<IAAFEvent, IAAFTimecodeStream12M > )
.def("GetClassName",PyGetClassName<IAAFEvent, AxEvent> )
;
class_< IAAFEventMobSlotSP > ("IAAFEventMobSlotSP")
.def("to_EventMobSlotSP", query_interface_pass_through<IAAFEventMobSlotSP > )
.def("GetClassName",PyGetClassName<IAAFEventMobSlot, AxEventMobSlot> )
;
class_< IAAFFileSP > ("IAAFFileSP")
.def("to_FileSP", query_interface_pass_through<IAAFFileSP > )
.def("to_RandomFileSP", query_interface<IAAFFile, IAAFRandomFile > )
.def("GetClassName",PyGetClassName_from_string<IAAFFileSP, classname_File> )
;
class_< IAAFFileDescriptorSP > ("IAAFFileDescriptorSP")
.def("to_FileDescriptorSP", query_interface_pass_through<IAAFFileDescriptorSP > )
.def("to_SoundDescriptorSP", query_interface<IAAFFileDescriptor, IAAFSoundDescriptor > )
.def("to_PCMDescriptorSP", query_interface<IAAFFileDescriptor, IAAFPCMDescriptor > )
.def("to_WAVEDescriptorSP", query_interface<IAAFFileDescriptor, IAAFWAVEDescriptor > )
.def("to_DigitalImageDescriptorSP", query_interface<IAAFFileDescriptor, IAAFDigitalImageDescriptor > )
.def("to_CDCIDescriptorSP", query_interface<IAAFFileDescriptor, IAAFCDCIDescriptor > )
.def("to_RGBADescriptorSP", query_interface<IAAFFileDescriptor, IAAFRGBADescriptor > )
.def("GetClassName",PyGetClassName<IAAFFileDescriptor, AxFileDescriptor> )
;
class_< IAAFFilmDescriptorSP > ("IAAFFilmDescriptorSP")
.def("to_FilmDescriptorSP", query_interface_pass_through<IAAFFilmDescriptorSP > )
.def("GetClassName",PyGetClassName<IAAFFilmDescriptor, AxFilmDescriptor> )
;
class_< IAAFDigitalImageDescriptorSP > ("IAAFDigitalImageDescriptorSP")
.def("to_DigitalImageDescriptorSP", query_interface_pass_through<IAAFDigitalImageDescriptorSP > )
.def("to_CDCIDescriptorSP", query_interface<IAAFDigitalImageDescriptor, IAAFCDCIDescriptor > )
.def("to_RGBADescriptorSP", query_interface<IAAFDigitalImageDescriptor, IAAFRGBADescriptor > )
.def("to_RGBADescriptor2SP", query_interface<IAAFDigitalImageDescriptor, IAAFRGBADescriptor2 > )
.def("GetClassName",PyGetClassName<IAAFDigitalImageDescriptor, AxDigitalImageDescriptor> )
;
class_< IAAFCDCIDescriptorSP > ("IAAFCDCIDescriptorSP")
.def("to_CDCIDescriptorSP", query_interface_pass_through<IAAFCDCIDescriptorSP > )
.def("GetClassName",PyGetClassName<IAAFCDCIDescriptor, AxCDCIDescriptor> )
;
class_< IAAFEssenceFormatSP > ("IAAFEssenceFormatSP")
.def("to_EssenceFormatSP", query_interface_pass_through<IAAFEssenceFormatSP > )
.def("GetClassName",PyGetClassName_from_string<IAAFEssenceFormatSP, classname_EssenceFormat> )
;
class_< IAAFEssenceGroupSP > ("IAAFEssenceGroupSP")
.def("to_EssenceGroupSP", query_interface_pass_through<IAAFEssenceGroupSP > )
.def("GetClassName",PyGetClassName<IAAFEssenceGroup, AxEssenceGroup> )
;
class_< IAAFFillerSP > ("IAAFFillerSP")
.def("to_FillerSP", query_interface_pass_through<IAAFFillerSP > )
.def("GetClassName",PyGetClassName<IAAFFiller, AxFiller> )
;
class_< IAAFFindSourceInfoSP > ("IAAFFindSourceInfoSP")
.def("to_FindSourceInfoSP", query_interface_pass_through<IAAFFindSourceInfoSP > )
;
class_< IAAFOperationGroupSP > ("IAAFOperationGroupSP")
.def("to_OperationGroupSP", query_interface_pass_through<IAAFOperationGroupSP > )
.def("GetClassName",PyGetClassName<IAAFOperationGroup, AxOperationGroup> )
;
class_< IAAFGPITriggerSP > ("IAAFGPITriggerSP")
.def("to_GPITriggerSP", query_interface_pass_through<IAAFGPITriggerSP > )
.def("GetClassName",PyGetClassName<IAAFGPITrigger, AxGPITrigger> )
;
class_< IAAFHeaderSP > ("IAAFHeaderSP")
.def("to_HeaderSP", query_interface_pass_through<IAAFHeaderSP > )
.def("GetClassName",PyGetClassName<IAAFHeader, AxHeader> )
;
class_< IAAFIdentificationSP > ("IAAFIdentificationSP")
.def("to_IdentificationSP", query_interface_pass_through<IAAFIdentificationSP > )
.def("GetClassName",PyGetClassName<IAAFIdentification, AxIdentification> )
;
class_< IAAFInterpolationDefSP > ("IAAFInterpolationDefSP")
.def("to_InterpolationDefSP", query_interface_pass_through<IAAFInterpolationDefSP > )
.def("GetClassName",PyGetClassName<IAAFInterpolationDef, AxInterpolationDef> )
;
class_< IAAFKLVDataSP > ("IAAFKLVDataSP")
.def("to_KLVDataSP", query_interface_pass_through<IAAFKLVDataSP > )
.def("GetClassName",PyGetClassName<IAAFKLVData, AxKLVData> )
;
class_< IAAFLocatorSP > ("IAAFLocatorSP")
.def("to_LocatorSP", query_interface_pass_through<IAAFLocatorSP > )
.def("to_NetworkLocatorSP", query_interface<IAAFLocator, IAAFNetworkLocator > )
.def("GetClassName",PyGetClassName<IAAFLocator, AxLocator> )
;
class_< IAAFMasterMobSP > ("IAAFMasterMobSP")
.def("to_MasterMobSP", query_interface_pass_through<IAAFMasterMobSP > )
.def("to_MasterMobExSP", query_interface<IAAFMasterMob, IAAFMasterMobEx > )
.def("GetClassName",PyGetClassName<IAAFMasterMob, AxMasterMob> )
;
class_< IAAFMasterMob2SP > ("IAAFMasterMob2SP")
.def("to_MasterMob2SP", query_interface_pass_through<IAAFMasterMob2SP > )
.def("to_MasterMobExSP", query_interface<IAAFMasterMob2, IAAFMasterMobEx > )
.def("GetClassName",PyGetClassName<IAAFMasterMob2, AxMasterMob> )
;
class_< IAAFMasterMobExSP > ("IAAFMasterMobExSP")
.def("to_MasterMobExSP", query_interface_pass_through<IAAFMasterMobExSP > )
.def("GetClassName",PyGetClassName<IAAFMasterMobEx, AxMasterMobEx> )
;
class_< IAAFMetaDefinitionSP > ("IAAFMetaDefinitionSP")
.def("to_MetaDefinitionSP", query_interface_pass_through<IAAFMetaDefinitionSP > )
.def("to_ClassDefSP", query_interface<IAAFMetaDefinition, IAAFClassDef > )
.def("to_PropertyDefSP", query_interface<IAAFMetaDefinition, IAAFPropertyDef > )
.def("to_TypeDefSP", query_interface<IAAFMetaDefinition, IAAFTypeDef > )
.def("to_TypeDefObjectRefSP", query_interface<IAAFMetaDefinition, IAAFTypeDefObjectRef > )
.def("to_TypeDefRecordSP", query_interface<IAAFMetaDefinition, IAAFTypeDefRecord > )
.def("to_TypeDefVariableArraySP", query_interface<IAAFMetaDefinition, IAAFTypeDefVariableArray > )
.def("to_TypeDefFixedArraySP", query_interface<IAAFMetaDefinition, IAAFTypeDefFixedArray > )
.def("to_TypeDefStrongObjRefSP", query_interface<IAAFMetaDefinition, IAAFTypeDefStrongObjRef > )
.def("to_TypeDefVariableArrayExSP", query_interface<IAAFMetaDefinition, IAAFTypeDefVariableArrayEx > )
.def("to_TypeDefEnumSP", query_interface<IAAFMetaDefinition, IAAFTypeDefEnum > )
.def("to_TypeDefIndirectSP", query_interface<IAAFMetaDefinition, IAAFTypeDefIndirect > )
.def("to_TypeDefOpaqueSP", query_interface<IAAFMetaDefinition, IAAFTypeDefOpaque > )
.def("to_TypeDefIntSP", query_interface<IAAFMetaDefinition, IAAFTypeDefInt > )
.def("to_TypeDefRenameSP", query_interface<IAAFMetaDefinition, IAAFTypeDefRename > )
.def("to_TypeDefStringSP", query_interface<IAAFMetaDefinition, IAAFTypeDefString > )
.def("to_TypeDefSetSP", query_interface<IAAFMetaDefinition, IAAFTypeDefSet > )
.def("to_TypeDefWeakObjRefSP", query_interface<IAAFMetaDefinition, IAAFTypeDefWeakObjRef > )
.def("to_TypeDefExtEnumSP", query_interface<IAAFMetaDefinition, IAAFTypeDefExtEnum > )
.def("to_TypeDefStreamSP", query_interface<IAAFMetaDefinition, IAAFTypeDefStream > )
.def("GetClassName",PyGetClassName_from_string<IAAFMetaDefinitionSP, classname_MetaDefinition> )
;
class_< IAAFMobSP > ("IAAFMobSP")
.def("to_MobSP", query_interface_pass_through<IAAFMobSP > )
.def("to_MasterMobSP", query_interface<IAAFMob, IAAFMasterMob > )
.def("to_MasterMob2SP", query_interface<IAAFMob, IAAFMasterMob2 > )
.def("to_MasterMobExSP", query_interface<IAAFMob, IAAFMasterMobEx > )
.def("to_SourceMobSP", query_interface<IAAFMob, IAAFSourceMob > )
.def("to_CompositionMobSP", query_interface<IAAFMob, IAAFCompositionMob > )
.def("to_CompositionMob2SP", query_interface<IAAFMob, IAAFCompositionMob2 > )
.def("GetClassName",PyGetClassName<IAAFMob, AxMob> )
;
class_< IAAFMobSlotSP > ("IAAFMobSlotSP")
.def("to_MobSlotSP", query_interface_pass_through<IAAFMobSlotSP > )
.def("to_TimelineMobSlotSP", query_interface<IAAFMobSlot, IAAFTimelineMobSlot > )
.def("to_TimelineMobSlot2SP", query_interface<IAAFMobSlot, IAAFTimelineMobSlot2 > )
.def("to_StaticMobSlotSP", query_interface<IAAFMobSlot, IAAFStaticMobSlot > )
.def("to_EventMobSlotSP", query_interface<IAAFMobSlot, IAAFEventMobSlot > )
.def("GetClassName",PyGetClassName<IAAFMobSlot, AxMobSlot> )
;
class_< IAAFNestedScopeSP > ("IAAFNestedScopeSP")
.def("to_NestedScopeSP", query_interface_pass_through<IAAFNestedScopeSP > )
.def("GetClassName",PyGetClassName<IAAFNestedScope, AxNestedScope> )
;
class_< IAAFNetworkLocatorSP > ("IAAFNetworkLocatorSP")
.def("to_NetworkLocatorSP", query_interface_pass_through<IAAFNetworkLocatorSP > )
.def("GetClassName",PyGetClassName<IAAFNetworkLocator, AxNetworkLocator> )
;
class_< IAAFObjectSP > ("IAAFObjectSP")
.def("to_ObjectSP", query_interface_pass_through<IAAFObjectSP > )
.def("to_ContentStorageSP", query_interface<IAAFObject, IAAFContentStorage > )
.def("to_LocatorSP", query_interface<IAAFObject, IAAFLocator > )
.def("to_NetworkLocatorSP", query_interface<IAAFObject, IAAFNetworkLocator > )
.def("to_HeaderSP", query_interface<IAAFObject, IAAFHeader > )
.def("to_Header2SP", query_interface<IAAFObject, IAAFHeader2 > )
.def("to_MobSP", query_interface<IAAFObject, IAAFMob > )
.def("to_Mob2SP", query_interface<IAAFObject, IAAFMob2 > )
.def("to_MasterMobSP", query_interface<IAAFObject, IAAFMasterMob > )
.def("to_MasterMobExSP", query_interface<IAAFObject, IAAFMasterMobEx > )
.def("to_SourceMobSP", query_interface<IAAFObject, IAAFSourceMob > )
.def("to_CompositionMobSP", query_interface<IAAFObject, IAAFCompositionMob > )
.def("to_EssenceDescriptorSP", query_interface<IAAFObject, IAAFEssenceDescriptor > )
.def("to_FileDescriptorSP", query_interface<IAAFObject, IAAFFileDescriptor > )
.def("to_SoundDescriptorSP", query_interface<IAAFObject, IAAFSoundDescriptor > )
.def("to_PCMDescriptorSP", query_interface<IAAFObject, IAAFPCMDescriptor > )
.def("to_WAVEDescriptorSP", query_interface<IAAFObject, IAAFWAVEDescriptor > )
.def("to_DigitalImageDescriptorSP", query_interface<IAAFObject, IAAFDigitalImageDescriptor > )
.def("to_CDCIDescriptorSP", query_interface<IAAFObject, IAAFCDCIDescriptor > )
.def("to_RGBADescriptorSP", query_interface<IAAFObject, IAAFRGBADescriptor > )
.def("to_PhysicalDescriptorSP", query_interface<IAAFObject, IAAFPhysicalDescriptor > )
.def("to_ImportDescriptorSP", query_interface<IAAFObject, IAAFImportDescriptor > )
.def("to_RecordingDescriptorSP", query_interface<IAAFObject, IAAFRecordingDescriptor > )
.def("to_AuxiliaryDescriptorSP", query_interface<IAAFObject, IAAFAuxiliaryDescriptor > )
.def("to_TapeDescriptorSP", query_interface<IAAFObject, IAAFTapeDescriptor > )
.def("to_FilmDescriptorSP", query_interface<IAAFObject, IAAFFilmDescriptor > )
.def("to_DescriptiveFrameworkSP", query_interface<IAAFObject, IAAFDescriptiveFramework > )
.def("to_IdentificationSP", query_interface<IAAFObject, IAAFIdentification > )
.def("to_DictionarySP", query_interface<IAAFObject, IAAFDictionary > )
.def("to_Dictionary2SP", query_interface<IAAFObject, IAAFDictionary2 > )
.def("to_ParameterSP", query_interface<IAAFObject, IAAFParameter > )
.def("to_VaryingValueSP", query_interface<IAAFObject, IAAFVaryingValue > )
.def("to_ConstantValueSP", query_interface<IAAFObject, IAAFConstantValue > )
.def("to_MobSlotSP", query_interface<IAAFObject, IAAFMobSlot > )
.def("to_TimelineMobSlotSP", query_interface<IAAFObject, IAAFTimelineMobSlot > )
.def("to_StaticMobSlotSP", query_interface<IAAFObject, IAAFStaticMobSlot > )
.def("to_EventMobSlotSP", query_interface<IAAFObject, IAAFEventMobSlot > )
.def("to_TaggedValueSP", query_interface<IAAFObject, IAAFTaggedValue > )
.def("to_KLVDataSP", query_interface<IAAFObject, IAAFKLVData > )
.def("to_ControlPointSP", query_interface<IAAFObject, IAAFControlPoint > )
.def("to_DefObjectSP", query_interface<IAAFObject, IAAFDefObject > )
.def("to_KLVDataDefinitionSP", query_interface<IAAFObject, IAAFKLVDataDefinition > )
.def("to_CodecDefSP", query_interface<IAAFObject, IAAFCodecDef > )
.def("to_PluginDefSP", query_interface<IAAFObject, IAAFPluginDef > )
.def("to_ContainerDefSP", query_interface<IAAFObject, IAAFContainerDef > )
.def("to_InterpolationDefSP", query_interface<IAAFObject, IAAFInterpolationDef > )
.def("to_OperationDefSP", query_interface<IAAFObject, IAAFOperationDef > )
.def("to_DataDefSP", query_interface<IAAFObject, IAAFDataDef > )
.def("to_ParameterDefSP", query_interface<IAAFObject, IAAFParameterDef > )
.def("to_TaggedValueDefinitionSP", query_interface<IAAFObject, IAAFTaggedValueDefinition > )
.def("to_ComponentSP", query_interface<IAAFObject, IAAFComponent > )
.def("to_Component2SP", query_interface<IAAFObject, IAAFComponent2 > )
.def("to_TransitionSP", query_interface<IAAFObject, IAAFTransition > )
.def("to_SegmentSP", query_interface<IAAFObject, IAAFSegment > )
.def("to_TimecodeSP", query_interface<IAAFObject, IAAFTimecode > )
.def("to_SourceReferenceSP", query_interface<IAAFObject, IAAFSourceReference > )
.def("to_SourceClipSP", query_interface<IAAFObject, IAAFSourceClip > )
.def("to_EventSP", query_interface<IAAFObject, IAAFEvent > )
.def("to_CommentMarkerSP", query_interface<IAAFObject, IAAFCommentMarker > )
.def("to_DescriptiveMarkerSP", query_interface<IAAFObject, IAAFDescriptiveMarker > )
.def("to_GPITriggerSP", query_interface<IAAFObject, IAAFGPITrigger > )
.def("to_TimecodeStreamSP", query_interface<IAAFObject, IAAFTimecodeStream > )
.def("to_TimecodeStream12MSP", query_interface<IAAFObject, IAAFTimecodeStream12M > )
.def("to_FillerSP", query_interface<IAAFObject, IAAFFiller > )
.def("to_NestedScopeSP", query_interface<IAAFObject, IAAFNestedScope > )
.def("to_PulldownSP", query_interface<IAAFObject, IAAFPulldown > )
.def("to_SequenceSP", query_interface<IAAFObject, IAAFSequence > )
.def("to_EssenceGroupSP", query_interface<IAAFObject, IAAFEssenceGroup > )
.def("to_OperationGroupSP", query_interface<IAAFObject, IAAFOperationGroup > )
.def("to_ScopeReferenceSP", query_interface<IAAFObject, IAAFScopeReference > )
.def("to_SelectorSP", query_interface<IAAFObject, IAAFSelector > )
.def("to_EdgecodeSP", query_interface<IAAFObject, IAAFEdgecode > )
.def("GetClassName",PyGetClassName<IAAFObject, AxObject> )
;
class_< IAAFParameterSP > ("IAAFParameterSP")
.def("to_ParameterSP", query_interface_pass_through<IAAFParameterSP > )
.def("to_VaryingValueSP", query_interface<IAAFParameter, IAAFVaryingValue > )
.def("to_ConstantValueSP", query_interface<IAAFParameter, IAAFConstantValue > )
.def("GetClassName",PyGetClassName<IAAFParameter, AxParameter> )
;
class_< IAAFParameterDefSP > ("IAAFParameterDefSP")
.def("to_ParameterDefSP", query_interface_pass_through<IAAFParameterDefSP > )
.def("GetClassName",PyGetClassName<IAAFParameterDef, AxParameterDef> )
;
class_< IAAFPropertySP > ("IAAFPropertySP")
.def("to_PropertySP", query_interface_pass_through<IAAFPropertySP > )
.def("GetClassName",PyGetClassName_from_string<IAAFPropertySP, classname_Property> )
;
class_< IAAFPropertyDefSP > ("IAAFPropertyDefSP")
.def("to_PropertyDefSP", query_interface_pass_through<IAAFPropertyDefSP > )
.def("GetClassName",PyGetClassName_from_string<IAAFPropertyDefSP, classname_PropertyDef> )
;
class_< IAAFPropertyValueSP > ("IAAFPropertyValueSP")
.def("to_PropertyValueSP", query_interface_pass_through<IAAFPropertyValueSP > )
.def("GetClassName",PyGetClassName_from_string<IAAFPropertyValueSP, classname_PropertyValue> )
;
class_< IAAFPluginManagerSP > ("IAAFPluginManagerSP")
.def("to_PluginManagerSP", query_interface_pass_through<IAAFPluginManagerSP > )
;
class_< IAAFPulldownSP > ("IAAFPulldownSP")
.def("to_PulldownSP", query_interface_pass_through<IAAFPulldownSP > )
.def("GetClassName",PyGetClassName<IAAFPulldown, AxPulldown> )
;
class_< IAAFRGBADescriptorSP > ("IAAFRGBADescriptorSP")
.def("to_RGBADescriptorSP", query_interface_pass_through<IAAFRGBADescriptorSP > )
.def("GetClassName",PyGetClassName<IAAFRGBADescriptor, AxRGBADescriptor> )
;
class_< IAAFScopeReferenceSP > ("IAAFScopeReferenceSP")
.def("to_ScopeReferenceSP", query_interface_pass_through<IAAFScopeReferenceSP > )
.def("GetClassName",PyGetClassName<IAAFScopeReference, AxScopeReference> )
;
class_< IAAFSegmentSP > ("IAAFSegmentSP")
.def("to_SegmentSP", query_interface_pass_through<IAAFSegmentSP > )
.def("to_TimecodeSP", query_interface<IAAFSegment, IAAFTimecode > )
.def("to_SourceReferenceSP", query_interface<IAAFSegment, IAAFSourceReference > )
.def("to_SourceClipSP", query_interface<IAAFSegment, IAAFSourceClip > )
.def("to_EventSP", query_interface<IAAFSegment, IAAFEvent > )
.def("to_CommentMarkerSP", query_interface<IAAFSegment, IAAFCommentMarker > )
.def("to_DescriptiveMarkerSP", query_interface<IAAFSegment, IAAFDescriptiveMarker > )
.def("to_GPITriggerSP", query_interface<IAAFSegment, IAAFGPITrigger > )
.def("to_TimecodeStreamSP", query_interface<IAAFSegment, IAAFTimecodeStream > )
.def("to_TimecodeStream12MSP", query_interface<IAAFSegment, IAAFTimecodeStream12M > )
.def("to_FillerSP", query_interface<IAAFSegment, IAAFFiller > )
.def("to_NestedScopeSP", query_interface<IAAFSegment, IAAFNestedScope > )
.def("to_PulldownSP", query_interface<IAAFSegment, IAAFPulldown > )
.def("to_SequenceSP", query_interface<IAAFSegment, IAAFSequence > )
.def("to_EssenceGroupSP", query_interface<IAAFSegment, IAAFEssenceGroup > )
.def("to_OperationGroupSP", query_interface<IAAFSegment, IAAFOperationGroup > )
.def("to_ScopeReferenceSP", query_interface<IAAFSegment, IAAFScopeReference > )
.def("to_SelectorSP", query_interface<IAAFSegment, IAAFSelector > )
.def("to_EdgecodeSP", query_interface<IAAFSegment, IAAFEdgecode > )
.def("GetClassName",PyGetClassName<IAAFSegment, AxSegment> )
;
class_< IAAFSelectorSP > ("IAAFSelectorSP")
.def("to_SelectorSP", query_interface_pass_through<IAAFSelectorSP > )
.def("GetClassName",PyGetClassName<IAAFSelector, AxSelector> )
;
class_< IAAFSequenceSP > ("IAAFSequenceSP")
.def("to_SequenceSP", query_interface_pass_through<IAAFSequenceSP > )
.def("GetClassName",PyGetClassName<IAAFSequence, AxSequence> )
;
class_< IAAFSourceClipSP > ("IAAFSourceClipSP")
.def("to_SourceClipSP", query_interface_pass_through<IAAFSourceClipSP > )
.def("GetClassName",PyGetClassName<IAAFSourceClip, AxSourceClip> )
;
class_< IAAFSourceMobSP > ("IAAFSourceMobSP")
.def("to_SourceMobSP", query_interface_pass_through<IAAFSourceMobSP > )
.def("GetClassName",PyGetClassName<IAAFSourceMob, AxSourceMob> )
;
class_< IAAFSourceReferenceSP > ("IAAFSourceReferenceSP")
.def("to_SourceReferenceSP", query_interface_pass_through<IAAFSourceReferenceSP > )
.def("to_SourceClipSP", query_interface<IAAFSourceReference, IAAFSourceClip > )
.def("GetClassName",PyGetClassName<IAAFSourceReference, AxSourceReference> )
;
class_< IAAFStaticMobSlotSP > ("IAAFStaticMobSlotSP")
.def("to_StaticMobSlotSP", query_interface_pass_through<IAAFStaticMobSlotSP > )
.def("GetClassName",PyGetClassName<IAAFStaticMobSlot, AxStaticMobSlot> )
;
class_< IAAFTapeDescriptorSP > ("IAAFTapeDescriptorSP")
.def("to_TapeDescriptorSP", query_interface_pass_through<IAAFTapeDescriptorSP > )
.def("GetClassName",PyGetClassName<IAAFTapeDescriptor, AxTapeDescriptor> )
;
class_< IAAFTaggedValueSP > ("IAAFTaggedValueSP")
.def("to_TaggedValueSP", query_interface_pass_through<IAAFTaggedValueSP > )
.def("GetClassName",PyGetClassName<IAAFTaggedValue, AxTaggedValue> )
;
class_< IAAFTextLocatorSP > ("IAAFTextLocatorSP")
.def("to_TextLocatorSP", query_interface_pass_through<IAAFTextLocatorSP > )
;
class_< IAAFTimecodeSP > ("IAAFTimecodeSP")
.def("to_TimecodeSP", query_interface_pass_through<IAAFTimecodeSP > )
.def("GetClassName",PyGetClassName<IAAFTimecode, AxTimecode> )
;
class_< IAAFTimelineMobSlotSP > ("IAAFTimelineMobSlotSP")
.def("to_TimelineMobSlotSP", query_interface_pass_through<IAAFTimelineMobSlotSP > )
.def("GetClassName",PyGetClassName<IAAFTimelineMobSlot, AxTimelineMobSlot> )
;
class_< IAAFTransitionSP > ("IAAFTransitionSP")
.def("to_TransitionSP", query_interface_pass_through<IAAFTransitionSP > )
.def("GetClassName",PyGetClassName<IAAFTransition, AxTransition> )
;
class_< IAAFTIFFDescriptorSP > ("IAAFTIFFDescriptorSP")
.def("to_TIFFDescriptorSP", query_interface_pass_through<IAAFTIFFDescriptorSP > )
;
class_< IAAFTimecodeStreamSP > ("IAAFTimecodeStreamSP")
.def("to_TimecodeStreamSP", query_interface_pass_through<IAAFTimecodeStreamSP > )
.def("to_TimecodeStream12MSP", query_interface<IAAFTimecodeStream, IAAFTimecodeStream12M > )
.def("GetClassName",PyGetClassName<IAAFTimecodeStream, AxTimecodeStream> )
;
class_< IAAFTimecodeStream12MSP > ("IAAFTimecodeStream12MSP")
.def("to_TimecodeStream12MSP", query_interface_pass_through<IAAFTimecodeStream12MSP > )
;
class_< IAAFTypeDefSP > ("IAAFTypeDefSP")
.def("to_TypeDefSP", query_interface_pass_through<IAAFTypeDefSP > )
.def("to_TypeDefObjectRefSP", query_interface<IAAFTypeDef, IAAFTypeDefObjectRef > )
.def("to_TypeDefRecordSP", query_interface<IAAFTypeDef, IAAFTypeDefRecord > )
.def("to_TypeDefVariableArraySP", query_interface<IAAFTypeDef, IAAFTypeDefVariableArray > )
.def("to_TypeDefFixedArraySP", query_interface<IAAFTypeDef, IAAFTypeDefFixedArray > )
.def("to_TypeDefStrongObjRefSP", query_interface<IAAFTypeDef, IAAFTypeDefStrongObjRef > )
.def("to_TypeDefVariableArrayExSP", query_interface<IAAFTypeDef, IAAFTypeDefVariableArrayEx > )
.def("to_TypeDefEnumSP", query_interface<IAAFTypeDef, IAAFTypeDefEnum > )
.def("to_TypeDefIndirectSP", query_interface<IAAFTypeDef, IAAFTypeDefIndirect > )
.def("to_TypeDefOpaqueSP", query_interface<IAAFTypeDef, IAAFTypeDefOpaque > )
.def("to_TypeDefIntSP", query_interface<IAAFTypeDef, IAAFTypeDefInt > )
.def("to_TypeDefRenameSP", query_interface<IAAFTypeDef, IAAFTypeDefRename > )
.def("to_TypeDefStringSP", query_interface<IAAFTypeDef, IAAFTypeDefString > )
.def("to_TypeDefSetSP", query_interface<IAAFTypeDef, IAAFTypeDefSet > )
.def("to_TypeDefWeakObjRefSP", query_interface<IAAFTypeDef, IAAFTypeDefWeakObjRef > )
.def("to_TypeDefExtEnumSP", query_interface<IAAFTypeDef, IAAFTypeDefExtEnum > )
.def("to_TypeDefStreamSP", query_interface<IAAFTypeDef, IAAFTypeDefStream > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefSP, AxTypeDef> )
;
class_< IAAFTypeDefCharacterSP > ("IAAFTypeDefCharacterSP")
.def("to_TypeDefCharacterSP", query_interface_pass_through<IAAFTypeDefCharacterSP > )
;
class_< IAAFTypeDefIndirectSP > ("IAAFTypeDefIndirectSP")
.def("to_TypeDefIndirectSP", query_interface_pass_through<IAAFTypeDefIndirectSP > )
.def("to_TypeDefOpaqueSP", query_interface<IAAFTypeDefIndirect, IAAFTypeDefOpaque > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefIndirectSP, AxTypeDefIndirect> )
;
class_< IAAFTypeDefIntSP > ("IAAFTypeDefIntSP")
.def("to_TypeDefIntSP", query_interface_pass_through<IAAFTypeDefIntSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefIntSP, AxTypeDefInt> )
;
class_< IAAFTypeDefRenameSP > ("IAAFTypeDefRenameSP")
.def("to_TypeDefRenameSP", query_interface_pass_through<IAAFTypeDefRenameSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefRenameSP, AxTypeDefRename> )
;
class_< IAAFTypeDefEnumSP > ("IAAFTypeDefEnumSP")
.def("to_TypeDefEnumSP", query_interface_pass_through<IAAFTypeDefEnumSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefEnumSP, AxTypeDefEnum> )
;
class_< IAAFTypeDefExtEnumSP > ("IAAFTypeDefExtEnumSP")
.def("to_TypeDefExtEnumSP", query_interface_pass_through<IAAFTypeDefExtEnumSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefExtEnumSP, AxTypeDefExtEnum> )
;
class_< IAAFTypeDefFixedArraySP > ("IAAFTypeDefFixedArraySP")
.def("to_TypeDefFixedArraySP", query_interface_pass_through<IAAFTypeDefFixedArraySP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefFixedArraySP, AxTypeDefFixedArray> )
;
class_< IAAFTypeDefRecordSP > ("IAAFTypeDefRecordSP")
.def("to_TypeDefRecordSP", query_interface_pass_through<IAAFTypeDefRecordSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefRecordSP, AxTypeDefRecord> )
;
class_< IAAFTypeDefSetSP > ("IAAFTypeDefSetSP")
.def("to_TypeDefSetSP", query_interface_pass_through<IAAFTypeDefSetSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefSetSP, AxTypeDefSet> )
;
class_< IAAFTypeDefStreamSP > ("IAAFTypeDefStreamSP")
.def("to_TypeDefStreamSP", query_interface_pass_through<IAAFTypeDefStreamSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefStreamSP, AxTypeDefStream> )
;
class_< IAAFTypeDefStringSP > ("IAAFTypeDefStringSP")
.def("to_TypeDefStringSP", query_interface_pass_through<IAAFTypeDefStringSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefStringSP, AxTypeDefString> )
;
class_< IAAFTypeDefStrongObjRefSP > ("IAAFTypeDefStrongObjRefSP")
.def("to_TypeDefStrongObjRefSP", query_interface_pass_through<IAAFTypeDefStrongObjRefSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefStrongObjRefSP, AxTypeDefStrongObjRef> )
;
class_< IAAFTypeDefWeakObjRefSP > ("IAAFTypeDefWeakObjRefSP")
.def("to_TypeDefWeakObjRefSP", query_interface_pass_through<IAAFTypeDefWeakObjRefSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefWeakObjRefSP, AxTypeDefWeakObjRef> )
;
class_< IAAFTypeDefObjectRefSP > ("IAAFTypeDefObjectRefSP")
.def("to_TypeDefObjectRefSP", query_interface_pass_through<IAAFTypeDefObjectRefSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefObjectRefSP, AxTypeDefObjRef> )
;
class_< IAAFTypeDefOpaqueSP > ("IAAFTypeDefOpaqueSP")
.def("to_TypeDefOpaqueSP", query_interface_pass_through<IAAFTypeDefOpaqueSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefOpaqueSP, AxTypeDefOpaque> )
;
class_< IAAFTypeDefVariableArraySP > ("IAAFTypeDefVariableArraySP")
.def("to_TypeDefVariableArraySP", query_interface_pass_through<IAAFTypeDefVariableArraySP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefVariableArraySP, AxTypeDefVariableArray> )
;
class_< IAAFVaryingValueSP > ("IAAFVaryingValueSP")
.def("to_VaryingValueSP", query_interface_pass_through<IAAFVaryingValueSP > )
.def("GetClassName",PyGetClassName<IAAFVaryingValue, AxVaryingValue> )
;
class_< IAAFWAVEDescriptorSP > ("IAAFWAVEDescriptorSP")
.def("to_WAVEDescriptorSP", query_interface_pass_through<IAAFWAVEDescriptorSP > )
.def("GetClassName",PyGetClassName<IAAFWAVEDescriptor, AxWAVEDescriptor> )
;
class_< IEnumAAFClassDefsSP > ("IEnumAAFClassDefsSP")
.def("to_IEnumAAFClassDefsSP", query_interface_pass_through<IEnumAAFClassDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFClassDefsSP, classname_IEnumAAFClassDefs> )
;
class_< IEnumAAFCodecDefsSP > ("IEnumAAFCodecDefsSP")
.def("to_IEnumAAFCodecDefsSP", query_interface_pass_through<IEnumAAFCodecDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFCodecDefsSP, classname_IEnumAAFCodecDefs> )
;
class_< IEnumAAFCodecFlavoursSP > ("IEnumAAFCodecFlavoursSP")
.def("to_IEnumAAFCodecFlavoursSP", query_interface_pass_through<IEnumAAFCodecFlavoursSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFCodecFlavoursSP, classname_IEnumAAFCodecFlavours> )
;
class_< IEnumAAFComponentsSP > ("IEnumAAFComponentsSP")
.def("to_IEnumAAFComponentsSP", query_interface_pass_through<IEnumAAFComponentsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFComponentsSP, classname_IEnumAAFComponents> )
;
class_< IEnumAAFContainerDefsSP > ("IEnumAAFContainerDefsSP")
.def("to_IEnumAAFContainerDefsSP", query_interface_pass_through<IEnumAAFContainerDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFContainerDefsSP, classname_IEnumAAFContainerDefs> )
;
class_< IEnumAAFControlPointsSP > ("IEnumAAFControlPointsSP")
.def("to_IEnumAAFControlPointsSP", query_interface_pass_through<IEnumAAFControlPointsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFControlPointsSP, classname_IEnumAAFControlPoints> )
;
class_< IEnumAAFDataDefsSP > ("IEnumAAFDataDefsSP")
.def("to_IEnumAAFDataDefsSP", query_interface_pass_through<IEnumAAFDataDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFDataDefsSP, classname_IEnumAAFDataDefs> )
;
class_< IEnumAAFIdentificationsSP > ("IEnumAAFIdentificationsSP")
.def("to_IEnumAAFIdentificationsSP", query_interface_pass_through<IEnumAAFIdentificationsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFIdentificationsSP, classname_IEnumAAFIdentifications> )
;
class_< IEnumAAFInterpolationDefsSP > ("IEnumAAFInterpolationDefsSP")
.def("to_IEnumAAFInterpolationDefsSP", query_interface_pass_through<IEnumAAFInterpolationDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFInterpolationDefsSP, classname_IEnumAAFInterpolationDefs> )
;
class_< IEnumAAFOperationDefsSP > ("IEnumAAFOperationDefsSP")
.def("to_IEnumAAFOperationDefsSP", query_interface_pass_through<IEnumAAFOperationDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFOperationDefsSP, classname_IEnumAAFOperationDefs> )
;
class_< IEnumAAFEssenceDataSP > ("IEnumAAFEssenceDataSP")
.def("to_IEnumAAFEssenceDataSP", query_interface_pass_through<IEnumAAFEssenceDataSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFEssenceDataSP, classname_IEnumAAFEssenceData> )
;
class_< IEnumAAFKLVDataSP > ("IEnumAAFKLVDataSP")
.def("to_IEnumAAFKLVDataSP", query_interface_pass_through<IEnumAAFKLVDataSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFKLVDataSP, classname_IEnumAAFKLVData> )
;
class_< IEnumAAFLoadedPluginsSP > ("IEnumAAFLoadedPluginsSP")
.def("to_IEnumAAFLoadedPluginsSP", query_interface_pass_through<IEnumAAFLoadedPluginsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFLoadedPluginsSP, classname_IEnumAAFLoadedPlugins> )
;
class_< IEnumAAFLocatorsSP > ("IEnumAAFLocatorsSP")
.def("to_IEnumAAFLocatorsSP", query_interface_pass_through<IEnumAAFLocatorsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFLocatorsSP, classname_IEnumAAFLocators> )
;
class_< IEnumAAFMobSlotsSP > ("IEnumAAFMobSlotsSP")
.def("to_IEnumAAFMobSlotsSP", query_interface_pass_through<IEnumAAFMobSlotsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFMobSlotsSP, classname_IEnumAAFMobSlots> )
;
class_< IEnumAAFMobsSP > ("IEnumAAFMobsSP")
.def("to_IEnumAAFMobsSP", query_interface_pass_through<IEnumAAFMobsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFMobsSP, classname_IEnumAAFMobs> )
;
class_< IEnumAAFParameterDefsSP > ("IEnumAAFParameterDefsSP")
.def("to_IEnumAAFParameterDefsSP", query_interface_pass_through<IEnumAAFParameterDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFParameterDefsSP, classname_IEnumAAFParameterDefs> )
;
class_< IEnumAAFParametersSP > ("IEnumAAFParametersSP")
.def("to_IEnumAAFParametersSP", query_interface_pass_through<IEnumAAFParametersSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFParametersSP, classname_IEnumAAFParameters> )
;
class_< IEnumAAFPropertiesSP > ("IEnumAAFPropertiesSP")
.def("to_IEnumAAFPropertiesSP", query_interface_pass_through<IEnumAAFPropertiesSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFPropertiesSP, classname_IEnumAAFProperties> )
;
class_< IEnumAAFPropertyDefsSP > ("IEnumAAFPropertyDefsSP")
.def("to_IEnumAAFPropertyDefsSP", query_interface_pass_through<IEnumAAFPropertyDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFPropertyDefsSP, classname_IEnumAAFPropertyDefs> )
;
class_< IEnumAAFPropertyValuesSP > ("IEnumAAFPropertyValuesSP")
.def("to_IEnumAAFPropertyValuesSP", query_interface_pass_through<IEnumAAFPropertyValuesSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFPropertyValuesSP, classname_IEnumAAFPropertyValues> )
;
class_< IEnumAAFPluginDefsSP > ("IEnumAAFPluginDefsSP")
.def("to_IEnumAAFPluginDefsSP", query_interface_pass_through<IEnumAAFPluginDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFPluginDefsSP, classname_IEnumAAFPluginDefs> )
;
class_< IEnumAAFPluginLocatorsSP > ("IEnumAAFPluginLocatorsSP")
.def("to_IEnumAAFPluginLocatorsSP", query_interface_pass_through<IEnumAAFPluginLocatorsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFPluginLocatorsSP, classname_IEnumAAFPluginLocators> )
;
class_< IEnumAAFSegmentsSP > ("IEnumAAFSegmentsSP")
.def("to_IEnumAAFSegmentsSP", query_interface_pass_through<IEnumAAFSegmentsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFSegmentsSP, classname_IEnumAAFSegments> )
;
class_< IEnumAAFTaggedValuesSP > ("IEnumAAFTaggedValuesSP")
.def("to_IEnumAAFTaggedValuesSP", query_interface_pass_through<IEnumAAFTaggedValuesSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFTaggedValuesSP, classname_IEnumAAFTaggedValues> )
;
class_< IEnumAAFTypeDefsSP > ("IEnumAAFTypeDefsSP")
.def("to_IEnumAAFTypeDefsSP", query_interface_pass_through<IEnumAAFTypeDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFTypeDefsSP, classname_IEnumAAFTypeDefs> )
;
class_< IAAFRawStorageSP > ("IAAFRawStorageSP")
.def("to_RawStorageSP", query_interface_pass_through<IAAFRawStorageSP > )
;
class_< IAAFRandomRawStorageSP > ("IAAFRandomRawStorageSP")
.def("to_RandomRawStorageSP", query_interface_pass_through<IAAFRandomRawStorageSP > )
;
class_< IAAFGetFileBitsSP > ("IAAFGetFileBitsSP")
.def("to_GetFileBitsSP", query_interface_pass_through<IAAFGetFileBitsSP > )
;
class_< IAAFSetFileBitsSP > ("IAAFSetFileBitsSP")
.def("to_SetFileBitsSP", query_interface_pass_through<IAAFSetFileBitsSP > )
;
class_< IAAFRandomFileSP > ("IAAFRandomFileSP")
.def("to_RandomFileSP", query_interface_pass_through<IAAFRandomFileSP > )
.def("GetClassName",PyGetClassName_from_string<IAAFRandomFileSP, classname_RandomFile> )
;
class_< IAAFEndianSP > ("IAAFEndianSP")
.def("to_EndianSP", query_interface_pass_through<IAAFEndianSP > )
;
class_< IAAFSearchSourceSP > ("IAAFSearchSourceSP")
.def("to_SearchSourceSP", query_interface_pass_through<IAAFSearchSourceSP > )
;
class_< IAAFEssenceMultiAccessSP > ("IAAFEssenceMultiAccessSP")
.def("to_EssenceMultiAccessSP", query_interface_pass_through<IAAFEssenceMultiAccessSP > )
.def("to_EssenceAccessSP", query_interface<IAAFEssenceMultiAccess, IAAFEssenceAccess > )
.def("GetClassName",PyGetClassName_from_string<IAAFEssenceMultiAccessSP, classname_EssenceMultiAccess> )
;
class_< IAAFTypeDefVariableArrayExSP > ("IAAFTypeDefVariableArrayExSP")
.def("to_TypeDefVariableArrayExSP", query_interface_pass_through<IAAFTypeDefVariableArrayExSP > )
.def("GetClassName",PyGetTypeCategory<IAAFTypeDefVariableArrayExSP, AxTypeDefVariableArrayEx> )
;
class_< IAAFAES3PCMDescriptorSP > ("IAAFAES3PCMDescriptorSP")
.def("to_AES3PCMDescriptorSP", query_interface_pass_through<IAAFAES3PCMDescriptorSP > )
;
class_< IAAFAuxiliaryDescriptorSP > ("IAAFAuxiliaryDescriptorSP")
.def("to_AuxiliaryDescriptorSP", query_interface_pass_through<IAAFAuxiliaryDescriptorSP > )
.def("GetClassName",PyGetClassName<IAAFAuxiliaryDescriptor, AxAuxiliaryDescriptor> )
;
class_< IAAFComponent2SP > ("IAAFComponent2SP")
.def("to_Component2SP", query_interface_pass_through<IAAFComponent2SP > )
.def("to_TransitionSP", query_interface<IAAFComponent2, IAAFTransition > )
.def("to_SegmentSP", query_interface<IAAFComponent2, IAAFSegment > )
.def("to_TimecodeSP", query_interface<IAAFComponent2, IAAFTimecode > )
.def("to_SourceReferenceSP", query_interface<IAAFComponent2, IAAFSourceReference > )
.def("to_SourceClipSP", query_interface<IAAFComponent2, IAAFSourceClip > )
.def("to_EventSP", query_interface<IAAFComponent2, IAAFEvent > )
.def("to_CommentMarkerSP", query_interface<IAAFComponent2, IAAFCommentMarker > )
.def("to_DescriptiveMarkerSP", query_interface<IAAFComponent2, IAAFDescriptiveMarker > )
.def("to_GPITriggerSP", query_interface<IAAFComponent2, IAAFGPITrigger > )
.def("to_TimecodeStreamSP", query_interface<IAAFComponent2, IAAFTimecodeStream > )
.def("to_TimecodeStream12MSP", query_interface<IAAFComponent2, IAAFTimecodeStream12M > )
.def("to_FillerSP", query_interface<IAAFComponent2, IAAFFiller > )
.def("to_NestedScopeSP", query_interface<IAAFComponent2, IAAFNestedScope > )
.def("to_PulldownSP", query_interface<IAAFComponent2, IAAFPulldown > )
.def("to_SequenceSP", query_interface<IAAFComponent2, IAAFSequence > )
.def("to_EssenceGroupSP", query_interface<IAAFComponent2, IAAFEssenceGroup > )
.def("to_OperationGroupSP", query_interface<IAAFComponent2, IAAFOperationGroup > )
.def("to_ScopeReferenceSP", query_interface<IAAFComponent2, IAAFScopeReference > )
.def("to_SelectorSP", query_interface<IAAFComponent2, IAAFSelector > )
.def("to_EdgecodeSP", query_interface<IAAFComponent2, IAAFEdgecode > )
.def("GetClassName",PyGetClassName<IAAFComponent2, AxComponent> )
;
class_< IAAFDataDef2SP > ("IAAFDataDef2SP")
.def("to_DataDef2SP", query_interface_pass_through<IAAFDataDef2SP > )
.def("GetClassName",PyGetClassName<IAAFDataDef2, AxDataDef> )
;
class_< IAAFDataDef3SP > ("IAAFDataDef3SP")
.def("to_DataDef3SP", query_interface_pass_through<IAAFDataDef3SP > )
.def("GetClassName",PyGetClassName<IAAFDataDef3, AxDataDef> )
;
class_< IAAFDescriptiveFrameworkSP > ("IAAFDescriptiveFrameworkSP")
.def("to_DescriptiveFrameworkSP", query_interface_pass_through<IAAFDescriptiveFrameworkSP > )
.def("GetClassName",PyGetClassName<IAAFDescriptiveFramework, AxDescriptiveFramework> )
;
class_< IAAFDescriptiveMarkerSP > ("IAAFDescriptiveMarkerSP")
.def("to_DescriptiveMarkerSP", query_interface_pass_through<IAAFDescriptiveMarkerSP > )
.def("GetClassName",PyGetClassName<IAAFDescriptiveMarker, AxDescriptiveMarker> )
;
class_< IAAFDictionary2SP > ("IAAFDictionary2SP")
.def("to_Dictionary2SP", query_interface_pass_through<IAAFDictionary2SP > )
.def("GetClassName",PyGetClassName<IAAFDictionary2, AxDictionary> )
;
class_< IAAFHeader2SP > ("IAAFHeader2SP")
.def("to_Header2SP", query_interface_pass_through<IAAFHeader2SP > )
.def("GetClassName",PyGetClassName<IAAFHeader2, AxHeader> )
;
class_< IAAFImportDescriptorSP > ("IAAFImportDescriptorSP")
.def("to_ImportDescriptorSP", query_interface_pass_through<IAAFImportDescriptorSP > )
.def("GetClassName",PyGetClassName<IAAFImportDescriptor, AxImportDescriptor> )
;
class_< IAAFKLVDataDefinitionSP > ("IAAFKLVDataDefinitionSP")
.def("to_KLVDataDefinitionSP", query_interface_pass_through<IAAFKLVDataDefinitionSP > )
.def("GetClassName",PyGetClassName<IAAFKLVDataDefinition, AxKLVDataDef> )
;
class_< IAAFMob2SP > ("IAAFMob2SP")
.def("to_Mob2SP", query_interface_pass_through<IAAFMob2SP > )
.def("to_MasterMobSP", query_interface<IAAFMob2, IAAFMasterMob > )
.def("to_MasterMob2SP", query_interface<IAAFMob2, IAAFMasterMob2 > )
.def("to_MasterMobExSP", query_interface<IAAFMob2, IAAFMasterMobEx > )
.def("to_SourceMobSP", query_interface<IAAFMob2, IAAFSourceMob > )
.def("to_CompositionMobSP", query_interface<IAAFMob2, IAAFCompositionMob > )
.def("to_CompositionMob2SP", query_interface<IAAFMob2, IAAFCompositionMob2 > )
.def("GetClassName",PyGetClassName<IAAFMob2, AxMob> )
;
class_< IAAFMultipleDescriptorSP > ("IAAFMultipleDescriptorSP")
.def("to_MultipleDescriptorSP", query_interface_pass_through<IAAFMultipleDescriptorSP > )
;
class_< IAAFPCMDescriptorSP > ("IAAFPCMDescriptorSP")
.def("to_PCMDescriptorSP", query_interface_pass_through<IAAFPCMDescriptorSP > )
.def("GetClassName",PyGetClassName<IAAFPCMDescriptor, AxPCMDescriptor> )
;
class_< IAAFPhysicalDescriptorSP > ("IAAFPhysicalDescriptorSP")
.def("to_PhysicalDescriptorSP", query_interface_pass_through<IAAFPhysicalDescriptorSP > )
.def("to_ImportDescriptorSP", query_interface<IAAFPhysicalDescriptor, IAAFImportDescriptor > )
.def("to_RecordingDescriptorSP", query_interface<IAAFPhysicalDescriptor, IAAFRecordingDescriptor > )
.def("to_AuxiliaryDescriptorSP", query_interface<IAAFPhysicalDescriptor, IAAFAuxiliaryDescriptor > )
.def("GetClassName",PyGetClassName<IAAFPhysicalDescriptor, AxPhysicalDescriptor> )
;
class_< IAAFRecordingDescriptorSP > ("IAAFRecordingDescriptorSP")
.def("to_RecordingDescriptorSP", query_interface_pass_through<IAAFRecordingDescriptorSP > )
.def("GetClassName",PyGetClassName<IAAFRecordingDescriptor, AxRecordingDescriptor> )
;
class_< IAAFRGBADescriptor2SP > ("IAAFRGBADescriptor2SP")
.def("to_RGBADescriptor2SP", query_interface_pass_through<IAAFRGBADescriptor2SP > )
.def("GetClassName",PyGetClassName<IAAFRGBADescriptor2, AxRGBADescriptor> )
;
class_< IAAFSoundDescriptorSP > ("IAAFSoundDescriptorSP")
.def("to_SoundDescriptorSP", query_interface_pass_through<IAAFSoundDescriptorSP > )
.def("to_PCMDescriptorSP", query_interface<IAAFSoundDescriptor, IAAFPCMDescriptor > )
.def("GetClassName",PyGetClassName<IAAFSoundDescriptor, AxSoundDescriptor> )
;
class_< IAAFTaggedValueDefinitionSP > ("IAAFTaggedValueDefinitionSP")
.def("to_TaggedValueDefinitionSP", query_interface_pass_through<IAAFTaggedValueDefinitionSP > )
.def("GetClassName",PyGetClassName<IAAFTaggedValueDefinition, AxTaggedValueDef> )
;
class_< IAAFTimelineMobSlot2SP > ("IAAFTimelineMobSlot2SP")
.def("to_TimelineMobSlot2SP", query_interface_pass_through<IAAFTimelineMobSlot2SP > )
.def("GetClassName",PyGetClassName<IAAFTimelineMobSlot2, AxTimelineMobSlot> )
;
class_< IEnumAAFKLVDataDefsSP > ("IEnumAAFKLVDataDefsSP")
.def("to_IEnumAAFKLVDataDefsSP", query_interface_pass_through<IEnumAAFKLVDataDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFKLVDataDefsSP, classname_IEnumAAFKLVDataDefs> )
;
class_< IEnumAAFTaggedValueDefsSP > ("IEnumAAFTaggedValueDefsSP")
.def("to_IEnumAAFTaggedValueDefsSP", query_interface_pass_through<IEnumAAFTaggedValueDefsSP > )
.def("GetClassName",PyGetClassName_from_string<IEnumAAFTaggedValueDefsSP, classname_IEnumAAFTaggedValueDefs> )
;
class_< IAAFBWFImportDescriptorSP > ("IAAFBWFImportDescriptorSP")
.def("to_BWFImportDescriptorSP", query_interface_pass_through<IAAFBWFImportDescriptorSP > )
;
class_< IAAFDataEssenceDescriptorSP > ("IAAFDataEssenceDescriptorSP")
.def("to_DataEssenceDescriptorSP", query_interface_pass_through<IAAFDataEssenceDescriptorSP > )
;
class_< IAAFDescriptiveClipSP > ("IAAFDescriptiveClipSP")
.def("to_DescriptiveClipSP", query_interface_pass_through<IAAFDescriptiveClipSP > )
;
class_< IAAFDescriptiveObjectSP > ("IAAFDescriptiveObjectSP")
.def("to_DescriptiveObjectSP", query_interface_pass_through<IAAFDescriptiveObjectSP > )
;
class_< IAAFMPEGVideoDescriptorSP > ("IAAFMPEGVideoDescriptorSP")
.def("to_MPEGVideoDescriptorSP", query_interface_pass_through<IAAFMPEGVideoDescriptorSP > )
;
class_< IAAFRIFFChunkSP > ("IAAFRIFFChunkSP")
.def("to_RIFFChunkSP", query_interface_pass_through<IAAFRIFFChunkSP > )
;
class_< IAAFPluginSP > ("IAAFPluginSP")
.def("to_IAAFPluginSP", query_interface_pass_through<IAAFPluginSP > )
;
class_< IAAFClassExtensionSP > ("IAAFClassExtensionSP")
.def("to_IAAFClassExtensionSP", query_interface_pass_through<IAAFClassExtensionSP > )
;
class_< IAAFEssenceStreamSP > ("IAAFEssenceStreamSP")
.def("to_IAAFEssenceStreamSP", query_interface_pass_through<IAAFEssenceStreamSP > )
;
class_< IAAFEssenceDataStreamSP > ("IAAFEssenceDataStreamSP")
.def("to_IAAFEssenceDataStreamSP", query_interface_pass_through<IAAFEssenceDataStreamSP > )
;
class_< IAAFEssenceCodecSP > ("IAAFEssenceCodecSP")
.def("to_IAAFEssenceCodecSP", query_interface_pass_through<IAAFEssenceCodecSP > )
;
class_< IAAFMultiEssenceCodecSP > ("IAAFMultiEssenceCodecSP")
.def("to_IAAFMultiEssenceCodecSP", query_interface_pass_through<IAAFMultiEssenceCodecSP > )
;
class_< IAAFEssenceContainerSP > ("IAAFEssenceContainerSP")
.def("to_IAAFEssenceContainerSP", query_interface_pass_through<IAAFEssenceContainerSP > )
;
class_< IAAFInterpolatorSP > ("IAAFInterpolatorSP")
.def("to_IAAFInterpolatorSP", query_interface_pass_through<IAAFInterpolatorSP > )
;
class_< IUnknownSP > ("IUnknownSP")
.def("to_IUnknownSP", query_interface_pass_through<IUnknownSP > )
.def("GetClassName",PyGetClassName_from_string<IUnknownSP, classname_IUnknown> )
;
}

