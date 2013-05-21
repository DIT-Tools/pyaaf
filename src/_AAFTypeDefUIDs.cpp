
// Boost Includes ==============================================================
#include <boost/python.hpp>
#include <boost/cstdint.hpp>

// Includes ====================================================================
#include <AAFTypeDefUIDs.h>

// Using =======================================================================
using namespace boost::python;

// Declarations ================================================================

class TypeDefUID {};


// Module ======================================================================
void Export_pyste_src_AAFTypeDefUIDs()
{
 
    scope TypeDefUID_scope = class_<TypeDefUID>("TypeDefUID");
    TypeDefUID_scope.attr("FileDescriptorStrongReferenceVector") = kAAFTypeID_FileDescriptorStrongReferenceVector;
    TypeDefUID_scope.attr("ClassDefinitionStrongReference") = kAAFTypeID_ClassDefinitionStrongReference;
    TypeDefUID_scope.attr("DescriptiveObjectStrongReferenceVector") = kAAFTypeID_DescriptiveObjectStrongReferenceVector;
    TypeDefUID_scope.attr("UInt64") = kAAFTypeID_UInt64;
    TypeDefUID_scope.attr("IdentificationStrongReferenceVector") = kAAFTypeID_IdentificationStrongReferenceVector;
    TypeDefUID_scope.attr("CodecDefinitionWeakReference") = kAAFTypeID_CodecDefinitionWeakReference;
    TypeDefUID_scope.attr("ChannelStatusModeType") = kAAFTypeID_ChannelStatusModeType;
    TypeDefUID_scope.attr("Indirect") = kAAFTypeID_Indirect;
    TypeDefUID_scope.attr("EssenceDataStrongReferenceSet") = kAAFTypeID_EssenceDataStrongReferenceSet;
    TypeDefUID_scope.attr("ParameterDefinitionStrongReference") = kAAFTypeID_ParameterDefinitionStrongReference;
    TypeDefUID_scope.attr("ComponentStrongReferenceVector") = kAAFTypeID_ComponentStrongReferenceVector;
    TypeDefUID_scope.attr("UserDataModeArray") = kAAFTypeID_UserDataModeArray;
    TypeDefUID_scope.attr("UsageType") = kAAFTypeID_UsageType;
    TypeDefUID_scope.attr("Boolean") = kAAFTypeID_Boolean;
    TypeDefUID_scope.attr("EssenceDataStrongReference") = kAAFTypeID_EssenceDataStrongReference;
    TypeDefUID_scope.attr("DataDefinitionStrongReferenceSet") = kAAFTypeID_DataDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("ClassDefinitionWeakReference") = kAAFTypeID_ClassDefinitionWeakReference;
    TypeDefUID_scope.attr("FadeType") = kAAFTypeID_FadeType;
    TypeDefUID_scope.attr("KLVDataStrongReference") = kAAFTypeID_KLVDataStrongReference;
    TypeDefUID_scope.attr("LayoutType") = kAAFTypeID_LayoutType;
    TypeDefUID_scope.attr("Character") = kAAFTypeID_Character;
    TypeDefUID_scope.attr("PositionType") = kAAFTypeID_PositionType;
    TypeDefUID_scope.attr("MobStrongReferenceSet") = kAAFTypeID_MobStrongReferenceSet;
    TypeDefUID_scope.attr("KLVDataDefinitionStrongReferenceSet") = kAAFTypeID_KLVDataDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("UserDataModeType") = kAAFTypeID_UserDataModeType;
    TypeDefUID_scope.attr("SourceReferenceStrongReferenceVector") = kAAFTypeID_SourceReferenceStrongReferenceVector;
    TypeDefUID_scope.attr("String") = kAAFTypeID_String;
    TypeDefUID_scope.attr("TaggedValueStrongReference") = kAAFTypeID_TaggedValueStrongReference;
    TypeDefUID_scope.attr("OperationDefinitionStrongReferenceSet") = kAAFTypeID_OperationDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("DataDefinitionStrongReference") = kAAFTypeID_DataDefinitionStrongReference;
    TypeDefUID_scope.attr("StringArray") = kAAFTypeID_StringArray;
    TypeDefUID_scope.attr("CodecDefinitionStrongReference") = kAAFTypeID_CodecDefinitionStrongReference;
    TypeDefUID_scope.attr("TypeDefinitionStrongReferenceSet") = kAAFTypeID_TypeDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("TitleAlignmentType") = kAAFTypeID_TitleAlignmentType;
    TypeDefUID_scope.attr("UInt8Array8") = kAAFTypeID_UInt8Array8;
    TypeDefUID_scope.attr("ClassDefinitionStrongReferenceSet") = kAAFTypeID_ClassDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("Rational") = kAAFTypeID_Rational;
    TypeDefUID_scope.attr("AUIDSet") = kAAFTypeID_AUIDSet;
    TypeDefUID_scope.attr("RGBAComponentKind") = kAAFTypeID_RGBAComponentKind;
    TypeDefUID_scope.attr("EssenceDescriptorStrongReference") = kAAFTypeID_EssenceDescriptorStrongReference;
    TypeDefUID_scope.attr("InterpolationDefinitionStrongReference") = kAAFTypeID_InterpolationDefinitionStrongReference;
    TypeDefUID_scope.attr("EdgeType") = kAAFTypeID_EdgeType;
    TypeDefUID_scope.attr("Int64Array") = kAAFTypeID_Int64Array;
    TypeDefUID_scope.attr("ElectroSpatialFormulation") = kAAFTypeID_ElectroSpatialFormulation;
    TypeDefUID_scope.attr("RGBALayout") = kAAFTypeID_RGBALayout;
    TypeDefUID_scope.attr("PropertyDefinitionStrongReference") = kAAFTypeID_PropertyDefinitionStrongReference;
    TypeDefUID_scope.attr("JPEGTableIDType") = kAAFTypeID_JPEGTableIDType;
    TypeDefUID_scope.attr("PropertyDefinitionWeakReferenceSet") = kAAFTypeID_PropertyDefinitionWeakReferenceSet;
    TypeDefUID_scope.attr("TaggedValueDefinitionStrongReference") = kAAFTypeID_TaggedValueDefinitionStrongReference;
    TypeDefUID_scope.attr("VersionType") = kAAFTypeID_VersionType;
    TypeDefUID_scope.attr("ParameterStrongReferenceVector") = kAAFTypeID_ParameterStrongReferenceVector;
    TypeDefUID_scope.attr("PluginDefinitionStrongReferenceSet") = kAAFTypeID_PluginDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("PropertyDefinitionWeakReference") = kAAFTypeID_PropertyDefinitionWeakReference;
    TypeDefUID_scope.attr("OperationGroupStrongReference") = kAAFTypeID_OperationGroupStrongReference;
    TypeDefUID_scope.attr("MobWeakReference") = kAAFTypeID_MobWeakReference;
    TypeDefUID_scope.attr("TypeDefinitionStrongReference") = kAAFTypeID_TypeDefinitionStrongReference;
    TypeDefUID_scope.attr("KLVDataStrongReferenceVector") = kAAFTypeID_KLVDataStrongReferenceVector;
    TypeDefUID_scope.attr("ContainerDefinitionWeakReference") = kAAFTypeID_ContainerDefinitionWeakReference;
    TypeDefUID_scope.attr("PluginDefinitionStrongReference") = kAAFTypeID_PluginDefinitionStrongReference;
    TypeDefUID_scope.attr("LocatorStrongReference") = kAAFTypeID_LocatorStrongReference;
    TypeDefUID_scope.attr("DescriptiveObjectStrongReference") = kAAFTypeID_DescriptiveObjectStrongReference;
    TypeDefUID_scope.attr("PluginCategoryType") = kAAFTypeID_PluginCategoryType;
    TypeDefUID_scope.attr("TimeStamp") = kAAFTypeID_TimeStamp;
    TypeDefUID_scope.attr("Int16") = kAAFTypeID_Int16;
    TypeDefUID_scope.attr("PhaseFrameType") = kAAFTypeID_PhaseFrameType;
    TypeDefUID_scope.attr("ScanningDirectionType") = kAAFTypeID_ScanningDirectionType;
    TypeDefUID_scope.attr("SourceReferenceStrongReference") = kAAFTypeID_SourceReferenceStrongReference;
    TypeDefUID_scope.attr("UInt32") = kAAFTypeID_UInt32;
    TypeDefUID_scope.attr("UInt16") = kAAFTypeID_UInt16;
    TypeDefUID_scope.attr("TypeDefinitionWeakReference") = kAAFTypeID_TypeDefinitionWeakReference;
    TypeDefUID_scope.attr("EditHintType") = kAAFTypeID_EditHintType;
    TypeDefUID_scope.attr("CodecDefinitionStrongReferenceSet") = kAAFTypeID_CodecDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("LocatorStrongReferenceVector") = kAAFTypeID_LocatorStrongReferenceVector;
    TypeDefUID_scope.attr("ProductVersion") = kAAFTypeID_ProductVersion;
    TypeDefUID_scope.attr("OperationDefinitionWeakReferenceVector") = kAAFTypeID_OperationDefinitionWeakReferenceVector;
    TypeDefUID_scope.attr("FilmType") = kAAFTypeID_FilmType;
    TypeDefUID_scope.attr("Int32Array") = kAAFTypeID_Int32Array;
    TypeDefUID_scope.attr("NetworkLocatorStrongReference") = kAAFTypeID_NetworkLocatorStrongReference;
    TypeDefUID_scope.attr("DataDefinitionWeakReference") = kAAFTypeID_DataDefinitionWeakReference;
    TypeDefUID_scope.attr("OperationDefinitionStrongReference") = kAAFTypeID_OperationDefinitionStrongReference;
    TypeDefUID_scope.attr("IdentificationStrongReference") = kAAFTypeID_IdentificationStrongReference;
    TypeDefUID_scope.attr("FieldNumber") = kAAFTypeID_FieldNumber;
    TypeDefUID_scope.attr("Opaque") = kAAFTypeID_Opaque;
    TypeDefUID_scope.attr("ParameterDefinitionWeakReference") = kAAFTypeID_ParameterDefinitionWeakReference;
    TypeDefUID_scope.attr("PluginDefinitionWeakReferenceSet") = kAAFTypeID_PluginDefinitionWeakReferenceSet;
    TypeDefUID_scope.attr("TaggedValueDefinitionStrongReferenceSet") = kAAFTypeID_TaggedValueDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("MobStrongReference") = kAAFTypeID_MobStrongReference;
    TypeDefUID_scope.attr("DescriptiveObjectStrongReferenceSet") = kAAFTypeID_DescriptiveObjectStrongReferenceSet;
    TypeDefUID_scope.attr("KLVDataDefinitionStrongReference") = kAAFTypeID_KLVDataDefinitionStrongReference;
    TypeDefUID_scope.attr("PluginDefinitionWeakReference") = kAAFTypeID_PluginDefinitionWeakReference;
    TypeDefUID_scope.attr("TimeStruct") = kAAFTypeID_TimeStruct;
    TypeDefUID_scope.attr("TapeFormatType") = kAAFTypeID_TapeFormatType;
    TypeDefUID_scope.attr("DataValue") = kAAFTypeID_DataValue;
    TypeDefUID_scope.attr("RIFFChunkStrongReferenceVector") = kAAFTypeID_RIFFChunkStrongReferenceVector;
    TypeDefUID_scope.attr("ControlPointStrongReferenceVector") = kAAFTypeID_ControlPointStrongReferenceVector;
    TypeDefUID_scope.attr("UInt8Array12") = kAAFTypeID_UInt8Array12;
    TypeDefUID_scope.attr("TransferCharacteristicType") = kAAFTypeID_TransferCharacteristicType;
    TypeDefUID_scope.attr("PulldownKindType") = kAAFTypeID_PulldownKindType;
    TypeDefUID_scope.attr("ParameterStrongReference") = kAAFTypeID_ParameterStrongReference;
    TypeDefUID_scope.attr("InterpolationDefinitionWeakReference") = kAAFTypeID_InterpolationDefinitionWeakReference;
    TypeDefUID_scope.attr("SegmentStrongReference") = kAAFTypeID_SegmentStrongReference;
    TypeDefUID_scope.attr("RIFFChunkStrongReference") = kAAFTypeID_RIFFChunkStrongReference;
    TypeDefUID_scope.attr("ComponentStrongReference") = kAAFTypeID_ComponentStrongReference;
    TypeDefUID_scope.attr("Int64") = kAAFTypeID_Int64;
    TypeDefUID_scope.attr("SignalStandardType") = kAAFTypeID_SignalStandardType;
    TypeDefUID_scope.attr("ContentScanningType") = kAAFTypeID_ContentScanningType;
    TypeDefUID_scope.attr("ParameterDefinitionStrongReferenceSet") = kAAFTypeID_ParameterDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("TCSource") = kAAFTypeID_TCSource;
    TypeDefUID_scope.attr("CodingEquationsType") = kAAFTypeID_CodingEquationsType;
    TypeDefUID_scope.attr("ContentStorageStrongReference") = kAAFTypeID_ContentStorageStrongReference;
    TypeDefUID_scope.attr("EmphasisType") = kAAFTypeID_EmphasisType;
    TypeDefUID_scope.attr("TaggedValueStrongReferenceVector") = kAAFTypeID_TaggedValueStrongReferenceVector;
    TypeDefUID_scope.attr("OperationCategoryType") = kAAFTypeID_OperationCategoryType;
    TypeDefUID_scope.attr("TypeDefinitionWeakReferenceVector") = kAAFTypeID_TypeDefinitionWeakReferenceVector;
    TypeDefUID_scope.attr("LengthType") = kAAFTypeID_LengthType;
    TypeDefUID_scope.attr("ParameterDefinitionWeakReferenceSet") = kAAFTypeID_ParameterDefinitionWeakReferenceSet;
    TypeDefUID_scope.attr("MobSlotStrongReference") = kAAFTypeID_MobSlotStrongReference;
    TypeDefUID_scope.attr("FileDescriptorStrongReference") = kAAFTypeID_FileDescriptorStrongReference;
    TypeDefUID_scope.attr("ColorSitingType") = kAAFTypeID_ColorSitingType;
    TypeDefUID_scope.attr("UInt8") = kAAFTypeID_UInt8;
    TypeDefUID_scope.attr("PositionArray") = kAAFTypeID_PositionArray;
    TypeDefUID_scope.attr("DateStruct") = kAAFTypeID_DateStruct;
    TypeDefUID_scope.attr("DescriptiveFrameworkStrongReference") = kAAFTypeID_DescriptiveFrameworkStrongReference;
    TypeDefUID_scope.attr("PulldownDirectionType") = kAAFTypeID_PulldownDirectionType;
    TypeDefUID_scope.attr("AuxBitsModeType") = kAAFTypeID_AuxBitsModeType;
    TypeDefUID_scope.attr("SourceClipStrongReference") = kAAFTypeID_SourceClipStrongReference;
    TypeDefUID_scope.attr("DataDefinitionWeakReferenceSet") = kAAFTypeID_DataDefinitionWeakReferenceSet;
    TypeDefUID_scope.attr("MobIDType") = kAAFTypeID_MobIDType;
    TypeDefUID_scope.attr("AlphaTransparencyType") = kAAFTypeID_AlphaTransparencyType;
    TypeDefUID_scope.attr("MobSlotStrongReferenceVector") = kAAFTypeID_MobSlotStrongReferenceVector;
    TypeDefUID_scope.attr("UInt8Array") = kAAFTypeID_UInt8Array;
    TypeDefUID_scope.attr("Int8") = kAAFTypeID_Int8;
    TypeDefUID_scope.attr("InterpolationDefinitionStrongReferenceSet") = kAAFTypeID_InterpolationDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("AUIDArray") = kAAFTypeID_AUIDArray;
    TypeDefUID_scope.attr("UInt32Array") = kAAFTypeID_UInt32Array;
    TypeDefUID_scope.attr("Int32") = kAAFTypeID_Int32;
    TypeDefUID_scope.attr("UInt32Set") = kAAFTypeID_UInt32Set;
    TypeDefUID_scope.attr("AUID") = kAAFTypeID_AUID;
    TypeDefUID_scope.attr("Stream") = kAAFTypeID_Stream;
    TypeDefUID_scope.attr("ContainerDefinitionStrongReference") = kAAFTypeID_ContainerDefinitionStrongReference;
    TypeDefUID_scope.attr("VideoSignalType") = kAAFTypeID_VideoSignalType;
    TypeDefUID_scope.attr("OperationDefinitionWeakReference") = kAAFTypeID_OperationDefinitionWeakReference;
    TypeDefUID_scope.attr("PropertyDefinitionStrongReferenceSet") = kAAFTypeID_PropertyDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("TapeCaseType") = kAAFTypeID_TapeCaseType;
    TypeDefUID_scope.attr("ColorPrimariesType") = kAAFTypeID_ColorPrimariesType;
    TypeDefUID_scope.attr("DataDefinitionWeakReferenceVector") = kAAFTypeID_DataDefinitionWeakReferenceVector;
    TypeDefUID_scope.attr("SegmentStrongReferenceVector") = kAAFTypeID_SegmentStrongReferenceVector;
    TypeDefUID_scope.attr("ProductReleaseType") = kAAFTypeID_ProductReleaseType;
    TypeDefUID_scope.attr("ChannelStatusModeArray") = kAAFTypeID_ChannelStatusModeArray;
    TypeDefUID_scope.attr("ControlPointStrongReference") = kAAFTypeID_ControlPointStrongReference;
    TypeDefUID_scope.attr("ContainerDefinitionStrongReferenceSet") = kAAFTypeID_ContainerDefinitionStrongReferenceSet;
    TypeDefUID_scope.attr("RGBAComponent") = kAAFTypeID_RGBAComponent;
    TypeDefUID_scope.attr("ReferenceType") = kAAFTypeID_ReferenceType;
    TypeDefUID_scope.attr("DictionaryStrongReference") = kAAFTypeID_DictionaryStrongReference;
}

