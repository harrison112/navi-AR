﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct VirtualFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R, typename T1, typename T2, typename T3>
struct VirtualFuncInvoker3
{
	typedef R (*Func)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
	}
};
template <typename R>
struct GenericVirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs>
struct Action_1_t50A1540EA73609CB8D3B72EE418EEFE3BFD8F892;
// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel>
struct Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53;
// System.Action`1<UnityEngine.UIElements.IPanel>
struct Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6;
// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2;
// System.Action`1<UnityEngine.Material>
struct Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA;
// System.Action`1<UnityEngine.UIElements.MeshGenerationContext>
struct Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B;
// System.Action`1<Vuforia.ObserverBehaviour>
struct Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799;
// System.Action`2<UnityEngine.UIElements.VisualElement,System.Object>
struct Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2;
// System.Action`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A;
// System.Action`3<UnityEngine.XR.ARCore.ArSession,UnityEngine.XR.ARCore.ArConfig,System.IntPtr>
struct Action_3_t9E9F00CC6AC96764CAB10CF74EBB4050022802E3;
// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry>
struct BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7;
// Vuforia.VuEngine/CreateControllerDelegate`1<System.Object>
struct CreateControllerDelegate_1_t0EFF3A593F0A0BC5FC5CC4B18D9430E7FB8B6D56;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuAnchorObservationInfo>
struct CreateStructDelegate_1_t4BADA369CEF902626AEAE2C31531EEB2B626816F;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuAreaTargetObservationTargetInfo>
struct CreateStructDelegate_1_tAA3D3BB1131C306B4A25758848325061CE76FBED;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuCloudImageTargetObservationTargetInfo>
struct CreateStructDelegate_1_tB451F16FCBD015F1DF8442EF8A6E3A514875BA6C;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuCylinderTargetObservationTargetInfo>
struct CreateStructDelegate_1_tFBC8CE520AE865303AD475D8F0438F91A50C1B44;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuIlluminationObservationInfo>
struct CreateStructDelegate_1_tF45AB3692FE6F8A4415AC89848A892F3A031A879;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuImageTargetObservationTargetInfo>
struct CreateStructDelegate_1_t240D566F743F448A1A6AA369E7E016B4EEA0C03D;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuMeshObservationInfo>
struct CreateStructDelegate_1_t3EDAA16AD9DD5B771784752145396A9B804BDBD7;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuModelTargetObservationStateInfo>
struct CreateStructDelegate_1_t740074CFC233D096F98BA627F6C40488DFCC4FD2;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuModelTargetObservationTargetInfo>
struct CreateStructDelegate_1_t464A4064C663996E35CDD4FE99394922891E8737;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuMultiTargetObservationTargetInfo>
struct CreateStructDelegate_1_tA7153E42E755017370C102D50E073B15E30479CB;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuValidationAreaObservationTargetInfo>
struct CreateStructDelegate_1_t0A2FADE9465A1B770F9CA2E1F587F3A2D0336848;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuValidationAreaObservationTrainingInfo>
struct CreateStructDelegate_1_t5307CDE64C29A8E83E4021A3D0D2070B1B02D3B7;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuValidationAreaObservationValidationInfo>
struct CreateStructDelegate_1_t4DB130F0417ECF57ED0339FBB74DCBA3ACD32C4D;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuVirtualButtonObservationInfo>
struct CreateStructDelegate_1_t6A358525972DB69F85A1355F5FA4209D9813D11C;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuVuMarkObservationInfo>
struct CreateStructDelegate_1_tEC00F17F9804B9DD6895037C6A3A770B82AD141B;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuVuMarkObservationInstanceInfo>
struct CreateStructDelegate_1_t4FAC0D9B72B2A0CCCE7B77BEEB0ED3D5D8BB992D;
// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuVuMarkObservationTemplateInfo>
struct CreateStructDelegate_1_t630E530516EF2B0D93DA69D9AD22811C64BEF666;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue>
struct Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData>
struct Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Single,System.Single>
struct Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2;
// System.Func`2<UnityEngine.UIElements.VisualElement,System.Object>
struct Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3;
// System.Func`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227;
// System.Func`4<System.Object,System.Object,System.Single,System.Object>
struct Func_4_t20528E18B451AECBBF66363BFFF0BE47D521318F;
// System.Func`4<UnityEngine.UIElements.Experimental.StyleValues,UnityEngine.UIElements.Experimental.StyleValues,System.Single,UnityEngine.UIElements.Experimental.StyleValues>
struct Func_4_t93A2D1B3300415C1167923C629725F6A8758E6B5;
// Vuforia.ValueAccessUtils/GetEnumValueDelegate`1<System.Int32Enum>
struct GetEnumValueDelegate_1_t21C015BB53B4CCE3507575146E1CE8954FE0242C;
// Vuforia.ValueAccessUtils/GetPrimitiveValueDelegate`1<System.Single>
struct GetPrimitiveValueDelegate_1_tA35FE0538F103A4BB82726377AB10102D3D13B3E;
// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<System.Int32Enum>
struct GetStructValueDelegate_1_t141CF561DEBE35266AAFE540879CFF0FE754AD25;
// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuAABB>
struct GetStructValueDelegate_1_t7BC5E5CCB5B786A43822574669C41229AD14CAD7;
// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuMatrix44F>
struct GetStructValueDelegate_1_t210459A1813A4BBB054A38CFC1CF0A86DB5CA5C3;
// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuRectangle>
struct GetStructValueDelegate_1_t96BD6A6AFF1D36ECDEBF69C4A9B1890056380926;
// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuValidationAreaCaptureProgressInfo>
struct GetStructValueDelegate_1_t65E2D9522057F09C33C54B03517ACB7BDBCA0538;
// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuValidationAreaCaptureUploadProgressInfo>
struct GetStructValueDelegate_1_t2B9C3AF3091CB736958B4E8014627978CA87492A;
// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuVector2F>
struct GetStructValueDelegate_1_t1B019E7DFD8544999D65820DAF508147DA05DDAC;
// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuVector3F>
struct GetStructValueDelegate_1_tA83C9577CF452182A12892D6F984A9A8BA2E9428;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D;
// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader>
struct HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F;
// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.IVuObserver>
struct IDictionary_2_tB9E0E59186D311A90565ADCFA615B47F1D922BD2;
// System.Collections.Generic.IDictionary`2<System.Type,Vuforia.IVuEngineConfig>
struct IDictionary_2_tB0314DBAE3E6F926B8D08EA76713F9AA574C2274;
// System.Collections.Generic.IDictionary`2<System.Type,Vuforia.VuController>
struct IDictionary_2_tF0FBA164C91E7B487CAD1984F10301308A7A88D7;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_t49C2F44B68A54E1D7F267F9CC6AEAE8497D42901;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t3950A1C72D0704C9A5D08F255CB6BE1525EDC4A9;
// System.Collections.Generic.IEqualityComparer`1<System.Type>
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
// System.Collections.Generic.IList`1<Vuforia.VuMeshObservationBlock>
struct IList_1_t014DDC88E845E54828905D4E14E32730251F6A11;
// System.Collections.Generic.IList`1<Vuforia.VuState>
struct IList_1_t584D9204058D75EFFA64798E69DE2A27029D282D;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Type,UnityEngine.ISubsystem>
struct KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7;
// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>>
struct List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260;
// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate>
struct List_1_t96E9133B70FB6765E6B138E810D33E18901715DA;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry>
struct List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC;
// System.Collections.Generic.List`1<System.String>
struct List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD;
// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet>
struct List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F;
// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement>
struct List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95;
// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader>
struct List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822;
// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry>
struct List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<System.Object>>
struct ObjectPool_1_t8AC25F7642B86DC900C1E5BB4FF5DDB43900D6F4;
// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>>
struct ObjectPool_1_t048E004E7532AED8FD10569876C6065B7527D2AE;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB;
// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct Promise_1_tEB030C5C1AAFDF29A82B6F24D644CFB095675E8A;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.InheritedData>
struct RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.LayoutData>
struct RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.RareData>
struct RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransformData>
struct RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.TransitionData>
struct RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9;
// UnityEngine.UIElements.StyleDataRef`1/RefCounted<UnityEngine.UIElements.VisualData>
struct RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<System.Object>
struct ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B;
// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,UnityEngine.ISubsystem>
struct ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD;
// System.Collections.Generic.Dictionary`2/Entry<System.Type,UnityEngine.ISubsystem>[]
struct EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338;
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// UnityEngine.UIElements.ComputedTransitionProperty[]
struct ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82;
// System.DateTime[]
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E;
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
// UnityEngine.UIElements.IVisualTreeUpdater[]
struct IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8;
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
// System.Type[]
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
// System.Action
struct Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0;
// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
// System.AsyncCallback
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303;
// System.Reflection.Binder
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
// UnityEngine.UIElements.ContextualMenuManager
struct ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// UnityEngine.UIElements.ElementUnderPointer
struct ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904;
// UnityEngine.UIElements.EventCallbackRegistry
struct EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8;
// UnityEngine.UIElements.HierarchyEvent
struct HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705;
// Vuforia.IAnchorProvider
struct IAnchorProvider_tA9B4CA01ECE6B5B05C97148D717B4FEA6FE351E8;
// System.IAsyncResult
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
// UnityEngine.UIElements.ICursorManager
struct ICursorManager_t78B026DED2559C62810B21C54C5F882457073A8B;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// Vuforia.Internal.Core.IEngine
struct IEngine_t1840136F87C8826E605686CEB7FDA35D257A8C0C;
// Vuforia.IHitTestProvider
struct IHitTestProvider_tF44E562823A50A24916C1F67EE3464366541DA01;
// Vuforia.IObserverRegistry
struct IObserverRegistry_tF348538635CECA2D834952442BB63123A2C411A1;
// UnityEngine.ISubsystem
struct ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67;
// UnityEngine.UIElements.IVisualTreeUpdater
struct IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06;
// System.Xml.IXmlNamespaceResolver
struct IXmlNamespaceResolver_t5B384C1DCF0750B44E124D640E4F041DB19B7FD1;
// Vuforia.IlluminationData
struct IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4;
// Vuforia.Internal.Observers.IlluminationObserver
struct IlluminationObserver_tA729E3319116926147EBF12E4BD612A190A81BC4;
// UnityEngine.UIElements.InlineStyleAccess
struct InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// System.Reflection.MemberFilter
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
// UnityEngine.UIElements.UIR.MeshHandle
struct MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Vuforia.ObservationManager
struct ObservationManager_t99938AFA7E9803564F4E20B3E0B9BB3B0C0E251C;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110;
// System.Text.RegularExpressions.Regex
struct Regex_tE773142C2BE45C5D362B0F815AFF831707A51772;
// UnityEngine.UIElements.UIR.RenderChainCommand
struct RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727;
// UnityEngine.UIElements.RepaintData
struct RepaintData_t90534752135661579EC254884F550545D001B5EA;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// UnityEngine.UIElements.StyleValueCollection
struct StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377;
// UnityEngine.UIElements.StyleVariableContext
struct StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527;
// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5;
// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455;
// System.Type
struct Type_t;
// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115;
// UnityEngine.UIElements.VisualTreeAsset
struct VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB;
// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// Vuforia.VuEngine
struct VuEngine_t1F34A373F1915ADEC0EF00456B2A186075AEB8F8;
// Vuforia.VuEngineConfigSet
struct VuEngineConfigSet_t1C698EDCA615DE5201BA070ABA21BD81877D7F61;
// Vuforia.VuObservation
struct VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631;
// Vuforia.World
struct World_t0332C3F77BBFBA826A13D263DAED199D01BCE050;
// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC;
// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3;
// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry
struct XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary
struct XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487;
// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA;
// System.Xml.Schema.XmlSchemaType
struct XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF;
// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E;
// UnityEngine.Yoga.YogaConfig
struct YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345;
// UnityEngine.Yoga.YogaNode
struct YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536;
// UnityEngine.UIElements.VisualElement/CustomStyleAccess
struct CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1;
// UnityEngine.UIElements.VisualElement/TypeData
struct TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A;
// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449;
// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider
struct Provider_t61633418FFAF45215D3806DAC7FA2291A72D1EF4;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tB0314DBAE3E6F926B8D08EA76713F9AA574C2274_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDictionary_2_tF0FBA164C91E7B487CAD1984F10301308A7A88D7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IObserverRegistry_tF348538635CECA2D834952442BB63123A2C411A1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueAccessUtils_GetPrimitiveValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE40252724FBB00D77B6F444DAEA7FD9DFA9A8C8C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueAccessUtils_GetStructValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB4050643DEBC8E06E17E08536FFDE9F4EB7549A7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueAccessUtils_GetStructValue_TisVuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738_mBDFB63723D88C7A0A74C9C8F352B103D9B1C3EC9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueAccessUtils_GetStructValue_TisVuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6_mAA499FA731312A8D889789169527C126CAAB1099_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueAccessUtils_GetStructValue_TisVuRectangle_tF116AD9398807162DC41E049E74AE3959861CDE3_m7E9F538E09283C7965CF0FEDB81046A09151CFC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueAccessUtils_GetStructValue_TisVuValidationAreaCaptureProgressInfo_t3DCC9260358D938AA7D06D1A1A5538F5C06F9810_m324832E8995B5048B58E522DC81C35BBB6BD3823_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueAccessUtils_GetStructValue_TisVuValidationAreaCaptureUploadProgressInfo_t7440BB52FFF00C3F7E13AB128C5B5D2EE1D43242_mEE9FAD93893F808B9470B7927F80AA436BBEA952_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueAccessUtils_GetStructValue_TisVuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8_mA9851B00EC3E60A6D54CE959BA8AD3D5E73E68AE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ValueAccessUtils_GetStructValue_TisVuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5_m979461A819AD0D8788AD5CB9525977523CA480E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mE154678655BCC91DEF9066CD3778B90EF9BBD1F8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRObjectTrackingSubsystem_Register_TisRuntimeObject_mEFF29A08454562CD313544172844155FC3DA8484_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D118A226E3D45EB1BC15C4F2AEB976705308BF4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m99A4774DEB96BD43741B9249AD1CF60E5AC3041B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0FEC0B412584118A8218E74FF6A40750FCA7731E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m741061ECF72D03FE980D0689C01D2805626E3ABD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDB139D3F3CD2D932CBA962A3C8D5C3954CD4AC3F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mE8E459BC06698DB7B14CFFDE30C3B573AE30B718_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m5D8B7D428A5F63BF226AE0F4F532986BA7991ADC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA0B7EDEC4FB783CA5C528BD35AC09FE99A737138_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m570EA7BE13782F59FC9603040D1937DC0577BADB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com;
struct ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001;
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1;
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E;
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C;
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913;
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6;
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Vuforia.World/<>c__30`1<System.Object>
struct U3CU3Ec__30_1_tE3EC5F18092BCC33760D3E196E766A0300A26F46  : public RuntimeObject
{
};

struct U3CU3Ec__30_1_tE3EC5F18092BCC33760D3E196E766A0300A26F46_StaticFields
{
	// Vuforia.World/<>c__30`1<T> Vuforia.World/<>c__30`1::<>9
	U3CU3Ec__30_1_tE3EC5F18092BCC33760D3E196E766A0300A26F46* ___U3CU3E9_0;
	// System.Func`2<T,System.Boolean> Vuforia.World/<>c__30`1::<>9__30_0
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___U3CU3E9__30_0_1;
};

// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t25553CF3849BFB9FBDD56557F4026165D68A89D7* ____entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::_count
	int32_t ____count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeList
	int32_t ____freeList_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::_freeCount
	int32_t ____freeCount_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::_version
	int32_t ____version_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::_comparer
	RuntimeObject* ____comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_keys
	KeyCollection_tE6ECA4C3A9983994E88973EEAA9A17BD28C334F7* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_tA17812F6E5394531761CCFD8ED2676AB6F2AF2CD* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE  : public RuntimeObject
{
};

struct EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields
{
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___Value_0;
};

// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t068F5201D923072F46716204841D21328FE6218D  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_t5B6221310D92CD3EFED99B5A41997E4715E36338* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t3C47F63E24BEB9FCE2DC6309E027F238DC5C5E37* ____siInfo_14;
};

// System.Collections.Generic.List`1<System.Boolean>
struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Byte>
struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.DateTime>
struct List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.DateTimeOffset>
struct List_1_t78D17974730334A3A9B24E41C74B9F638882BE13  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t78D17974730334A3A9B24E41C74B9F638882BE13_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Decimal>
struct List_1_t3B9A886482AE1A521B03F1658F080A2585035C35  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t3B9A886482AE1A521B03F1658F080A2585035C35_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Double>
struct List_1_t495F03F47D827883530F951D563C0BB7340E5995  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t495F03F47D827883530F951D563C0BB7340E5995_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int16>
struct List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int32>
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Int64>
struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tF9D88C946600C782EE786A252258C0AA97BD019A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.SByte>
struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.Single>
struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.TimeSpan>
struct List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt16>
struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t44EF1B9C71532303037AAC259AD8D405401724D8_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt32>
struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<System.UInt64>
struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_emptyArray_5;
};

// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tFCEF942AC56CEEEEF243A16089184E53958046D4* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<System.Object>
struct ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_StartTimeMs
	int64_t ___m_StartTimeMs_0;
	// System.Int32 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_DurationMs
	int32_t ___m_DurationMs_1;
	// System.Func`2<System.Single,System.Single> UnityEngine.UIElements.Experimental.ValueAnimation`1::<easingCurve>k__BackingField
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___U3CeasingCurveU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<isRunning>k__BackingField
	bool ___U3CisRunningU3Ek__BackingField_3;
	// System.Action UnityEngine.UIElements.Experimental.ValueAnimation`1::<onAnimationCompleted>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConAnimationCompletedU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<autoRecycle>k__BackingField
	bool ___U3CautoRecycleU3Ek__BackingField_5;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<recycled>k__BackingField
	bool ___U3CrecycledU3Ek__BackingField_6;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.Experimental.ValueAnimation`1::<owner>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CownerU3Ek__BackingField_8;
	// System.Action`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<valueUpdated>k__BackingField
	Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2* ___U3CvalueUpdatedU3Ek__BackingField_9;
	// System.Func`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<initialValue>k__BackingField
	Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3* ___U3CinitialValueU3Ek__BackingField_10;
	// System.Func`4<T,T,System.Single,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<interpolator>k__BackingField
	Func_4_t20528E18B451AECBBF66363BFFF0BE47D521318F* ___U3CinterpolatorU3Ek__BackingField_11;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::_from
	RuntimeObject* ____from_12;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::fromValueSet
	bool ___fromValueSet_13;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::<to>k__BackingField
	RuntimeObject* ___U3CtoU3Ek__BackingField_14;
};

struct ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t8AC25F7642B86DC900C1E5BB4FF5DDB43900D6F4* ___sObjectPool_7;
};

// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0  : public RuntimeObject
{
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t20D8E5AAFC2EB2518FCABBF40465855E797FF0D8* ___m_jclass_2;
};

struct AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_StaticFields
{
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;
};

// UnityEngine.UIElements.CallbackEventHandler
struct CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4  : public RuntimeObject
{
	// UnityEngine.UIElements.EventCallbackRegistry UnityEngine.UIElements.CallbackEventHandler::m_CallbackRegistry
	EventCallbackRegistry_tE18297C3F7E535BD82EDA83EC6D6DAA386226B85* ___m_CallbackRegistry_0;
};

// UnityEngine.CustomYieldInstruction
struct CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617  : public RuntimeObject
{
};

// System.Linq.Expressions.Expression
struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785  : public RuntimeObject
{
};

struct Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785_StaticFields
{
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_tB695739D50653F4D4C3DA03BCF07CC868196FB15* ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t3592A9BE3B1E812BCE8A13D901156E74C707DBB7* ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t0F3FDA57EE333DF8B8C1F3FB944E4E19C5DDCFC7* ___s_legacyCtorSupportTable_2;
};

// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590  : public RuntimeObject
{
};

// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
};

// System.String
struct String_t  : public RuntimeObject
{
	// System.Int32 System.String::_stringLength
	int32_t ____stringLength_4;
	// System.Char System.String::_firstChar
	Il2CppChar ____firstChar_5;
};

struct String_t_StaticFields
{
	// System.String System.String::Empty
	String_t* ___Empty_6;
};

// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t* ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider
struct SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5  : public RuntimeObject
{
	// System.String UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<id>k__BackingField
	String_t* ___U3CidU3Ek__BackingField_0;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<providerType>k__BackingField
	Type_t* ___U3CproviderTypeU3Ek__BackingField_1;
	// System.Type UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider::<subsystemTypeOverride>k__BackingField
	Type_t* ___U3CsubsystemTypeOverrideU3Ek__BackingField_2;
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider
struct SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242  : public RuntimeObject
{
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<running>k__BackingField
	bool ___U3CrunningU3Ek__BackingField_0;
	// UnityEngine.SubsystemsImplementation.SubsystemProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider::<providerBase>k__BackingField
	SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455* ___U3CproviderBaseU3Ek__BackingField_1;
};

// Vuforia.ValueAccessUtils
struct ValueAccessUtils_t74CDA6BC0B7424515CF749898B3E760F62F616D2  : public RuntimeObject
{
};

// System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};

// System.Numerics.Vector
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualTreeUpdater
struct VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9  : public RuntimeObject
{
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualTreeUpdater::m_Panel
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___m_Panel_0;
	// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray UnityEngine.UIElements.VisualTreeUpdater::m_UpdaterArray
	UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* ___m_UpdaterArray_1;
};

// System.Threading.Volatile
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};

// Vuforia.World
struct World_t0332C3F77BBFBA826A13D263DAED199D01BCE050  : public RuntimeObject
{
	// Vuforia.Internal.Core.IEngine Vuforia.World::mEngine
	RuntimeObject* ___mEngine_0;
	// Vuforia.IObserverRegistry Vuforia.World::mObserverRegistry
	RuntimeObject* ___mObserverRegistry_1;
	// Vuforia.Internal.Observers.IlluminationObserver Vuforia.World::mIlluminationObserver
	IlluminationObserver_tA729E3319116926147EBF12E4BD612A190A81BC4* ___mIlluminationObserver_2;
	// Vuforia.IAnchorProvider Vuforia.World::<AnchorProvider>k__BackingField
	RuntimeObject* ___U3CAnchorProviderU3Ek__BackingField_3;
	// Vuforia.IHitTestProvider Vuforia.World::<HitTestProvider>k__BackingField
	RuntimeObject* ___U3CHitTestProviderU3Ek__BackingField_4;
	// System.Action Vuforia.World::OnStateUpdated
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___OnStateUpdated_5;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.World::OnObserverCreated
	Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799* ___OnObserverCreated_6;
	// System.Action`1<Vuforia.ObserverBehaviour> Vuforia.World::OnObserverDestroyed
	Action_1_t49AD19663F9D6070EBF5FD37F8BEA43810805799* ___OnObserverDestroyed_7;
	// Vuforia.IlluminationData Vuforia.World::<IlluminationData>k__BackingField
	IlluminationData_t907CE8A9106AC295312099ACA9EF74970E3AE7D4* ___U3CIlluminationDataU3Ek__BackingField_8;
};

// System.Xml.Schema.XmlValueConverter
struct XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E  : public RuntimeObject
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_tA796944DDB1B1459DF68C9FFA518F452C81364F3  : public RuntimeObject
{
};

// UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray
struct UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449  : public RuntimeObject
{
	// UnityEngine.UIElements.IVisualTreeUpdater[] UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::m_VisualTreeUpdaters
	IVisualTreeUpdaterU5BU5D_t9E9D948BC4F327DA519FEB2BCEC12FB7FD7C59E8* ___m_VisualTreeUpdaters_0;
};

// System.Collections.Generic.List`1/Enumerator<System.Object>
struct Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// Unity.Collections.NativeArray`1<System.Int32>
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD 
{
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;
};

// System.Nullable`1<System.Int32>
struct Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// System.Nullable`1<System.Int32Enum>
struct Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	int32_t ___value_1;
};

// UnityEngine.XR.ARSubsystems.Promise`1<System.Int32Enum>
struct Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	int32_t ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.XR.ARSubsystems.Promise`1<System.Object>
struct Promise_1_tEB030C5C1AAFDF29A82B6F24D644CFB095675E8A  : public CustomYieldInstruction_t6B81A50D5D210C1ACAAE247FB53B65CDFFEB7617
{
	// T UnityEngine.XR.ARSubsystems.Promise`1::<result>k__BackingField
	RuntimeObject* ___U3CresultU3Ek__BackingField_0;
	// System.Boolean UnityEngine.XR.ARSubsystems.Promise`1::m_Complete
	bool ___m_Complete_1;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData>
struct StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t6B975CD3D06E8D955346FC0D66E8F6E449D49A44* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData>
struct StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t0E133AD36715877AE1CE72539A0199B4D3AA8CD1* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData>
struct StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t81BCBAE57D930C934CF7A439452D65303AC6A8CD* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData>
struct StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t78303B1CD3D08C664ABB15EBD7C882DA3E06CF7D* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData>
struct StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_tA9FB4D63A1064BD322AFDFCD70319CB384C057D9* ___m_Ref_0;
};

// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData>
struct StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC 
{
	// UnityEngine.UIElements.StyleDataRef`1/RefCounted<T> UnityEngine.UIElements.StyleDataRef`1::m_Ref
	RefCounted_t812D790A2C787F18230F9234F6C9B84D4AC1A85A* ___m_Ref_0;
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t17328DA23166A3BC7ED05AB2892C8919956D2B87  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider`2<UnityEngine.XR.ARSubsystems.XRParticipantSubsystem,UnityEngine.XR.ARSubsystems.XRParticipantSubsystem/Provider>
struct SubsystemDescriptorWithProvider_2_t309038BEBEC1FDE6F2E5F74255C98E9DEEEB3E02  : public SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRSessionSubsystem>
struct SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F  : public SubsystemProvider_tE1865B8FE698C81A59AED35E0E536BD53F402455
{
};

// UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3<UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct SubsystemWithProvider_3_t693F578840ABD33CBE8E7DDDE7909BDDFDAB272F  : public SubsystemWithProvider_tC72E35EE2D413A4B0635B058154BABF265F31242
{
	// TSubsystemDescriptor UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<subsystemDescriptor>k__BackingField
	XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* ___U3CsubsystemDescriptorU3Ek__BackingField_2;
	// TProvider UnityEngine.SubsystemsImplementation.SubsystemWithProvider`3::<provider>k__BackingField
	Provider_t61633418FFAF45215D3806DAC7FA2291A72D1EF4* ___U3CproviderU3Ek__BackingField_3;
};

// UnityEngine.UIElements.UIR.BMPAlloc
struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 
{
	// System.Int32 UnityEngine.UIElements.UIR.BMPAlloc::page
	int32_t ___page_1;
	// System.UInt16 UnityEngine.UIElements.UIR.BMPAlloc::pageLine
	uint16_t ___pageLine_2;
	// System.Byte UnityEngine.UIElements.UIR.BMPAlloc::bitIndex
	uint8_t ___bitIndex_3;
	// UnityEngine.UIElements.UIR.OwnedState UnityEngine.UIElements.UIR.BMPAlloc::ownedState
	uint8_t ___ownedState_4;
};

struct BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30_StaticFields
{
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.BMPAlloc::Invalid
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___Invalid_0;
};

// System.Boolean
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;
};

struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;
};

// System.Byte
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;
};

// System.Char
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;
};

struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	// System.Byte[] System.Char::s_categoryForLatin1
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1_3;
};

// UnityEngine.Color
struct Color_tD001788D726C3A7F1379BEED0260B9591F440C1F 
{
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;
};

// System.DateTime
struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D 
{
	// System.UInt64 System.DateTime::_dateData
	uint64_t ____dateData_46;
};

struct DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_StaticFields
{
	// System.Int32[] System.DateTime::s_daysToMonth365
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth365_30;
	// System.Int32[] System.DateTime::s_daysToMonth366
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___s_daysToMonth366_31;
	// System.DateTime System.DateTime::MinValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MinValue_32;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___MaxValue_33;
	// System.DateTime System.DateTime::UnixEpoch
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ___UnixEpoch_34;
};

// System.Decimal
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Decimal::flags
			int32_t ___flags_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_9_OffsetPadding[4];
			// System.Int32 System.Decimal::hi
			int32_t ___hi_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_9_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_10_OffsetPadding[8];
			// System.Int32 System.Decimal::lo
			int32_t ___lo_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_10_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_11_OffsetPadding[12];
			// System.Int32 System.Decimal::mid
			int32_t ___mid_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_11_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_12_OffsetPadding[8];
			// System.UInt64 System.Decimal::ulomidLE
			uint64_t ___ulomidLE_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_12_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_12_forAlignmentOnly;
		};
	};
};

struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	// System.Decimal System.Decimal::Zero
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero_3;
	// System.Decimal System.Decimal::One
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One_4;
	// System.Decimal System.Decimal::MinusOne
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne_5;
	// System.Decimal System.Decimal::MaxValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue_6;
	// System.Decimal System.Decimal::MinValue
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue_7;
};

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
};

// UnityEngine.UIElements.Focusable
struct Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0  : public CallbackEventHandler_t99E35735225B4ACEAD1BA981632FD2D46E9CB2B4
{
	// System.Boolean UnityEngine.UIElements.Focusable::<focusable>k__BackingField
	bool ___U3CfocusableU3Ek__BackingField_1;
	// System.Int32 UnityEngine.UIElements.Focusable::<tabIndex>k__BackingField
	int32_t ___U3CtabIndexU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Focusable::m_DelegatesFocus
	bool ___m_DelegatesFocus_3;
	// System.Boolean UnityEngine.UIElements.Focusable::m_ExcludeFromFocusRing
	bool ___m_ExcludeFromFocusRing_4;
	// System.Boolean UnityEngine.UIElements.Focusable::isIMGUIContainer
	bool ___isIMGUIContainer_5;
};

// System.Int16
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
};

// System.Int64
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;
};

// System.IntPtr
struct IntPtr_t 
{
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;
};

struct IntPtr_t_StaticFields
{
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;
};

// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ____body_3;
};

// UnityEngine.Matrix4x4
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	// System.Single UnityEngine.Matrix4x4::m00
	float ___m00_0;
	// System.Single UnityEngine.Matrix4x4::m10
	float ___m10_1;
	// System.Single UnityEngine.Matrix4x4::m20
	float ___m20_2;
	// System.Single UnityEngine.Matrix4x4::m30
	float ___m30_3;
	// System.Single UnityEngine.Matrix4x4::m01
	float ___m01_4;
	// System.Single UnityEngine.Matrix4x4::m11
	float ___m11_5;
	// System.Single UnityEngine.Matrix4x4::m21
	float ___m21_6;
	// System.Single UnityEngine.Matrix4x4::m31
	float ___m31_7;
	// System.Single UnityEngine.Matrix4x4::m02
	float ___m02_8;
	// System.Single UnityEngine.Matrix4x4::m12
	float ___m12_9;
	// System.Single UnityEngine.Matrix4x4::m22
	float ___m22_10;
	// System.Single UnityEngine.Matrix4x4::m32
	float ___m32_11;
	// System.Single UnityEngine.Matrix4x4::m03
	float ___m03_12;
	// System.Single UnityEngine.Matrix4x4::m13
	float ___m13_13;
	// System.Single UnityEngine.Matrix4x4::m23
	float ___m23_14;
	// System.Single UnityEngine.Matrix4x4::m33
	float ___m33_15;
};

struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::zeroMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix_16;
	// UnityEngine.Matrix4x4 UnityEngine.Matrix4x4::identityMatrix
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix_17;
};

// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110  : public Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785
{
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;
};

// UnityEngine.PropertyName
struct PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 
{
	// System.Int32 UnityEngine.PropertyName::id
	int32_t ___id_0;
};

// UnityEngine.Rect
struct Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D 
{
	// System.Single UnityEngine.Rect::m_XMin
	float ___m_XMin_0;
	// System.Single UnityEngine.Rect::m_YMin
	float ___m_YMin_1;
	// System.Single UnityEngine.Rect::m_Width
	float ___m_Width_2;
	// System.Single UnityEngine.Rect::m_Height
	float ___m_Height_3;
};

// System.Numerics.Register
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Byte System.Numerics.Register::byte_0
			uint8_t ___byte_0_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_1_OffsetPadding[1];
			// System.Byte System.Numerics.Register::byte_1
			uint8_t ___byte_1_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_2_OffsetPadding[2];
			// System.Byte System.Numerics.Register::byte_2
			uint8_t ___byte_2_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_3_OffsetPadding[3];
			// System.Byte System.Numerics.Register::byte_3
			uint8_t ___byte_3_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_4_OffsetPadding[4];
			// System.Byte System.Numerics.Register::byte_4
			uint8_t ___byte_4_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_5_OffsetPadding[5];
			// System.Byte System.Numerics.Register::byte_5
			uint8_t ___byte_5_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_6_OffsetPadding[6];
			// System.Byte System.Numerics.Register::byte_6
			uint8_t ___byte_6_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_7_OffsetPadding[7];
			// System.Byte System.Numerics.Register::byte_7
			uint8_t ___byte_7_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_8_OffsetPadding[8];
			// System.Byte System.Numerics.Register::byte_8
			uint8_t ___byte_8_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_9_OffsetPadding[9];
			// System.Byte System.Numerics.Register::byte_9
			uint8_t ___byte_9_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_10_OffsetPadding[10];
			// System.Byte System.Numerics.Register::byte_10
			uint8_t ___byte_10_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_11_OffsetPadding[11];
			// System.Byte System.Numerics.Register::byte_11
			uint8_t ___byte_11_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_12_OffsetPadding[12];
			// System.Byte System.Numerics.Register::byte_12
			uint8_t ___byte_12_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_13_OffsetPadding[13];
			// System.Byte System.Numerics.Register::byte_13
			uint8_t ___byte_13_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_14_OffsetPadding[14];
			// System.Byte System.Numerics.Register::byte_14
			uint8_t ___byte_14_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_15_OffsetPadding[15];
			// System.Byte System.Numerics.Register::byte_15
			uint8_t ___byte_15_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.SByte System.Numerics.Register::sbyte_0
			int8_t ___sbyte_0_16;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_16_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_17_OffsetPadding[1];
			// System.SByte System.Numerics.Register::sbyte_1
			int8_t ___sbyte_1_17;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_17_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_17_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_18_OffsetPadding[2];
			// System.SByte System.Numerics.Register::sbyte_2
			int8_t ___sbyte_2_18;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_18_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_18_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_19_OffsetPadding[3];
			// System.SByte System.Numerics.Register::sbyte_3
			int8_t ___sbyte_3_19;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_19_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_19_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_20_OffsetPadding[4];
			// System.SByte System.Numerics.Register::sbyte_4
			int8_t ___sbyte_4_20;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_20_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_20_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_21_OffsetPadding[5];
			// System.SByte System.Numerics.Register::sbyte_5
			int8_t ___sbyte_5_21;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_21_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_21_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_22_OffsetPadding[6];
			// System.SByte System.Numerics.Register::sbyte_6
			int8_t ___sbyte_6_22;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_22_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_22_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_23_OffsetPadding[7];
			// System.SByte System.Numerics.Register::sbyte_7
			int8_t ___sbyte_7_23;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_23_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_23_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_24_OffsetPadding[8];
			// System.SByte System.Numerics.Register::sbyte_8
			int8_t ___sbyte_8_24;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_24_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_24_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_25_OffsetPadding[9];
			// System.SByte System.Numerics.Register::sbyte_9
			int8_t ___sbyte_9_25;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_25_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_25_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_26_OffsetPadding[10];
			// System.SByte System.Numerics.Register::sbyte_10
			int8_t ___sbyte_10_26;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_26_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_26_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_27_OffsetPadding[11];
			// System.SByte System.Numerics.Register::sbyte_11
			int8_t ___sbyte_11_27;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_27_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_27_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_28_OffsetPadding[12];
			// System.SByte System.Numerics.Register::sbyte_12
			int8_t ___sbyte_12_28;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_28_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_28_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_29_OffsetPadding[13];
			// System.SByte System.Numerics.Register::sbyte_13
			int8_t ___sbyte_13_29;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_29_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_29_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_30_OffsetPadding[14];
			// System.SByte System.Numerics.Register::sbyte_14
			int8_t ___sbyte_14_30;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_30_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_30_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_31_OffsetPadding[15];
			// System.SByte System.Numerics.Register::sbyte_15
			int8_t ___sbyte_15_31;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_31_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_31_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt16 System.Numerics.Register::uint16_0
			uint16_t ___uint16_0_32;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_32_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_33_OffsetPadding[2];
			// System.UInt16 System.Numerics.Register::uint16_1
			uint16_t ___uint16_1_33;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_33_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_33_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_34_OffsetPadding[4];
			// System.UInt16 System.Numerics.Register::uint16_2
			uint16_t ___uint16_2_34;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_34_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_34_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_35_OffsetPadding[6];
			// System.UInt16 System.Numerics.Register::uint16_3
			uint16_t ___uint16_3_35;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_35_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_35_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_36_OffsetPadding[8];
			// System.UInt16 System.Numerics.Register::uint16_4
			uint16_t ___uint16_4_36;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_36_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_36_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_37_OffsetPadding[10];
			// System.UInt16 System.Numerics.Register::uint16_5
			uint16_t ___uint16_5_37;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_37_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_37_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_38_OffsetPadding[12];
			// System.UInt16 System.Numerics.Register::uint16_6
			uint16_t ___uint16_6_38;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_38_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_38_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_39_OffsetPadding[14];
			// System.UInt16 System.Numerics.Register::uint16_7
			uint16_t ___uint16_7_39;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_39_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_39_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int16 System.Numerics.Register::int16_0
			int16_t ___int16_0_40;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_40_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_41_OffsetPadding[2];
			// System.Int16 System.Numerics.Register::int16_1
			int16_t ___int16_1_41;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_41_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_41_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_42_OffsetPadding[4];
			// System.Int16 System.Numerics.Register::int16_2
			int16_t ___int16_2_42;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_42_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_42_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_43_OffsetPadding[6];
			// System.Int16 System.Numerics.Register::int16_3
			int16_t ___int16_3_43;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_43_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_43_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_44_OffsetPadding[8];
			// System.Int16 System.Numerics.Register::int16_4
			int16_t ___int16_4_44;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_44_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_44_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_45_OffsetPadding[10];
			// System.Int16 System.Numerics.Register::int16_5
			int16_t ___int16_5_45;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_45_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_45_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_46_OffsetPadding[12];
			// System.Int16 System.Numerics.Register::int16_6
			int16_t ___int16_6_46;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_46_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_46_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_47_OffsetPadding[14];
			// System.Int16 System.Numerics.Register::int16_7
			int16_t ___int16_7_47;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_47_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_47_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt32 System.Numerics.Register::uint32_0
			uint32_t ___uint32_0_48;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_48_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_49_OffsetPadding[4];
			// System.UInt32 System.Numerics.Register::uint32_1
			uint32_t ___uint32_1_49;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_49_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_49_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_50_OffsetPadding[8];
			// System.UInt32 System.Numerics.Register::uint32_2
			uint32_t ___uint32_2_50;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_50_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_50_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_51_OffsetPadding[12];
			// System.UInt32 System.Numerics.Register::uint32_3
			uint32_t ___uint32_3_51;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_51_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_51_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int32 System.Numerics.Register::int32_0
			int32_t ___int32_0_52;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_52_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_53_OffsetPadding[4];
			// System.Int32 System.Numerics.Register::int32_1
			int32_t ___int32_1_53;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_53_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_53_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_54_OffsetPadding[8];
			// System.Int32 System.Numerics.Register::int32_2
			int32_t ___int32_2_54;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_54_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_54_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_55_OffsetPadding[12];
			// System.Int32 System.Numerics.Register::int32_3
			int32_t ___int32_3_55;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_55_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_55_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.UInt64 System.Numerics.Register::uint64_0
			uint64_t ___uint64_0_56;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_56_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_57_OffsetPadding[8];
			// System.UInt64 System.Numerics.Register::uint64_1
			uint64_t ___uint64_1_57;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_57_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_57_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Int64 System.Numerics.Register::int64_0
			int64_t ___int64_0_58;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_58_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_59_OffsetPadding[8];
			// System.Int64 System.Numerics.Register::int64_1
			int64_t ___int64_1_59;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_59_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_59_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Single System.Numerics.Register::single_0
			float ___single_0_60;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_60_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_61_OffsetPadding[4];
			// System.Single System.Numerics.Register::single_1
			float ___single_1_61;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_61_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_61_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_62_OffsetPadding[8];
			// System.Single System.Numerics.Register::single_2
			float ___single_2_62;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_62_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_62_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_63_OffsetPadding[12];
			// System.Single System.Numerics.Register::single_3
			float ___single_3_63;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_63_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_63_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			// System.Double System.Numerics.Register::double_0
			double ___double_0_64;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_64_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_65_OffsetPadding[8];
			// System.Double System.Numerics.Register::double_1
			double ___double_1_65;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_65_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_65_forAlignmentOnly;
		};
	};
};

// System.SByte
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A 
{
	// UnityEngine.UIElements.StyleValueCollection UnityEngine.UIElements.Experimental.StyleValues::m_StyleValues
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_pinvoke
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};
// Native definition for COM marshalling of UnityEngine.UIElements.Experimental.StyleValues
struct StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_marshaled_com
{
	StyleValueCollection_t5ADC08D23E648FBE78F2C161494786E6C83E1377* ___m_StyleValues_0;
};

// System.TimeSpan
struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A 
{
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;
};

struct TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_StaticFields
{
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A ___MinValue_21;
};

// System.UInt16
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// System.UInt64
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;
};

// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};

// Vuforia.VuAnchorObservationInfo
struct VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF 
{
	// System.Int32 Vuforia.VuAnchorObservationInfo::anchorId
	int32_t ___anchorId_0;
};

// Vuforia.VuCloudImageTargetObservationTargetInfo
struct VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F 
{
	// System.String Vuforia.VuCloudImageTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuCloudImageTargetObservationTargetInfo::name
	String_t* ___name_1;
	// System.String Vuforia.VuCloudImageTargetObservationTargetInfo::metadata
	String_t* ___metadata_2;
	// System.Byte Vuforia.VuCloudImageTargetObservationTargetInfo::trackingRating
	uint8_t ___trackingRating_3;
};
// Native definition for P/Invoke marshalling of Vuforia.VuCloudImageTargetObservationTargetInfo
struct VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	char* ___metadata_2;
	uint8_t ___trackingRating_3;
};
// Native definition for COM marshalling of Vuforia.VuCloudImageTargetObservationTargetInfo
struct VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___metadata_2;
	uint8_t ___trackingRating_3;
};

// Vuforia.VuMatrix44F
struct VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 
{
	// System.Single Vuforia.VuMatrix44F::m0
	float ___m0_0;
	// System.Single Vuforia.VuMatrix44F::m1
	float ___m1_1;
	// System.Single Vuforia.VuMatrix44F::m2
	float ___m2_2;
	// System.Single Vuforia.VuMatrix44F::m3
	float ___m3_3;
	// System.Single Vuforia.VuMatrix44F::m4
	float ___m4_4;
	// System.Single Vuforia.VuMatrix44F::m5
	float ___m5_5;
	// System.Single Vuforia.VuMatrix44F::m6
	float ___m6_6;
	// System.Single Vuforia.VuMatrix44F::m7
	float ___m7_7;
	// System.Single Vuforia.VuMatrix44F::m8
	float ___m8_8;
	// System.Single Vuforia.VuMatrix44F::m9
	float ___m9_9;
	// System.Single Vuforia.VuMatrix44F::m10
	float ___m10_10;
	// System.Single Vuforia.VuMatrix44F::m11
	float ___m11_11;
	// System.Single Vuforia.VuMatrix44F::m12
	float ___m12_12;
	// System.Single Vuforia.VuMatrix44F::m13
	float ___m13_13;
	// System.Single Vuforia.VuMatrix44F::m14
	float ___m14_14;
	// System.Single Vuforia.VuMatrix44F::m15
	float ___m15_15;
};

// Vuforia.VuMeshObservationInfo
struct VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 
{
	// System.Collections.Generic.IList`1<Vuforia.VuMeshObservationBlock> Vuforia.VuMeshObservationInfo::meshes
	RuntimeObject* ___meshes_0;
};
// Native definition for P/Invoke marshalling of Vuforia.VuMeshObservationInfo
struct VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863_marshaled_pinvoke
{
	RuntimeObject* ___meshes_0;
};
// Native definition for COM marshalling of Vuforia.VuMeshObservationInfo
struct VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863_marshaled_com
{
	RuntimeObject* ___meshes_0;
};

// Vuforia.VuModelTargetObservationStateInfo
struct VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 
{
	// System.String Vuforia.VuModelTargetObservationStateInfo::stateName
	String_t* ___stateName_0;
};
// Native definition for P/Invoke marshalling of Vuforia.VuModelTargetObservationStateInfo
struct VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539_marshaled_pinvoke
{
	char* ___stateName_0;
};
// Native definition for COM marshalling of Vuforia.VuModelTargetObservationStateInfo
struct VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539_marshaled_com
{
	Il2CppChar* ___stateName_0;
};

// Vuforia.VuValidationAreaCaptureProgressInfo
struct VuValidationAreaCaptureProgressInfo_t3DCC9260358D938AA7D06D1A1A5538F5C06F9810 
{
	// System.Int64 Vuforia.VuValidationAreaCaptureProgressInfo::NumSamplesCaptured
	int64_t ___NumSamplesCaptured_0;
};

// Vuforia.VuValidationAreaCaptureUploadProgressInfo
struct VuValidationAreaCaptureUploadProgressInfo_t7440BB52FFF00C3F7E13AB128C5B5D2EE1D43242 
{
	// System.Int64 Vuforia.VuValidationAreaCaptureUploadProgressInfo::NumSamplesUploaded
	int64_t ___NumSamplesUploaded_0;
	// System.Int64 Vuforia.VuValidationAreaCaptureUploadProgressInfo::NumSamplesTotal
	int64_t ___NumSamplesTotal_1;
	// System.Int64 Vuforia.VuValidationAreaCaptureUploadProgressInfo::NumBytesUploaded
	int64_t ___NumBytesUploaded_2;
	// System.Int64 Vuforia.VuValidationAreaCaptureUploadProgressInfo::NumBytesTotal
	int64_t ___NumBytesTotal_3;
};

// Vuforia.VuValidationAreaObservationTrainingInfo
struct VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED 
{
	// Vuforia.VuValidationAreaTrainingStatus Vuforia.VuValidationAreaObservationTrainingInfo::trainingStatus
	int32_t ___trainingStatus_0;
};

// Vuforia.VuValidationAreaObservationValidationInfo
struct VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 
{
	// System.String Vuforia.VuValidationAreaObservationValidationInfo::labelName
	String_t* ___labelName_0;
	// System.Single Vuforia.VuValidationAreaObservationValidationInfo::confidence
	float ___confidence_1;
	// System.Int64 Vuforia.VuValidationAreaObservationValidationInfo::timestamp
	int64_t ___timestamp_2;
};
// Native definition for P/Invoke marshalling of Vuforia.VuValidationAreaObservationValidationInfo
struct VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860_marshaled_pinvoke
{
	char* ___labelName_0;
	float ___confidence_1;
	int64_t ___timestamp_2;
};
// Native definition for COM marshalling of Vuforia.VuValidationAreaObservationValidationInfo
struct VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860_marshaled_com
{
	Il2CppChar* ___labelName_0;
	float ___confidence_1;
	int64_t ___timestamp_2;
};

// Vuforia.VuVector2F
struct VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 
{
	// System.Single Vuforia.VuVector2F::x
	float ___x_0;
	// System.Single Vuforia.VuVector2F::y
	float ___y_1;
};

// Vuforia.VuVector3F
struct VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 
{
	// System.Single Vuforia.VuVector3F::x
	float ___x_0;
	// System.Single Vuforia.VuVector3F::y
	float ___y_1;
	// System.Single Vuforia.VuVector3F::z
	float ___z_2;
};

// Vuforia.VuVector4F
struct VuVector4F_tD36A0D6B5C1492D847703BD2D57FD4B2FDA14245 
{
	// System.Single Vuforia.VuVector4F::x
	float ___x_0;
	// System.Single Vuforia.VuVector4F::y
	float ___y_1;
	// System.Single Vuforia.VuVector4F::z
	float ___z_2;
	// System.Single Vuforia.VuVector4F::w
	float ___w_3;
};

// Vuforia.VuVirtualButtonObservationInfo
struct VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C 
{
	// Vuforia.VuVirtualButtonState Vuforia.VuVirtualButtonObservationInfo::state
	int32_t ___state_0;
};

// Vuforia.VuVuMarkObservationInfo
struct VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 
{
	// System.Int32 Vuforia.VuVuMarkObservationInfo::id
	int32_t ___id_0;
};

// Vuforia.VuVuMarkObservationInstanceInfo
struct VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 
{
	// Vuforia.VuMarkInstanceIdType Vuforia.VuVuMarkObservationInstanceInfo::dataType
	int32_t ___dataType_0;
	// System.Byte[] Vuforia.VuVuMarkObservationInstanceInfo::buffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buffer_1;
	// System.UInt64 Vuforia.VuVuMarkObservationInstanceInfo::numericValue
	uint64_t ___numericValue_2;
};
// Native definition for P/Invoke marshalling of Vuforia.VuVuMarkObservationInstanceInfo
struct VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519_marshaled_pinvoke
{
	int32_t ___dataType_0;
	Il2CppSafeArray/*NONE*/* ___buffer_1;
	uint64_t ___numericValue_2;
};
// Native definition for COM marshalling of Vuforia.VuVuMarkObservationInstanceInfo
struct VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519_marshaled_com
{
	int32_t ___dataType_0;
	Il2CppSafeArray/*NONE*/* ___buffer_1;
	uint64_t ___numericValue_2;
};

// UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14 
{
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidLow
	uint64_t ___m_GuidLow_0;
	// System.UInt64 UnityEngine.XR.ARSubsystems.XRReferenceObject::m_GuidHigh
	uint64_t ___m_GuidHigh_1;
	// System.String UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Name
	String_t* ___m_Name_2;
	// System.Collections.Generic.List`1<UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry> UnityEngine.XR.ARSubsystems.XRReferenceObject::m_Entries
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_pinvoke
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	char* ___m_Name_2;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};
// Native definition for COM marshalling of UnityEngine.XR.ARSubsystems.XRReferenceObject
struct XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14_marshaled_com
{
	uint64_t ___m_GuidLow_0;
	uint64_t ___m_GuidHigh_1;
	Il2CppChar* ___m_Name_2;
	List_1_tC0E7595725AFEF62394C64B77712190FBAC6C2C5* ___m_Entries_3;
};

// System.Xml.Schema.XmlBaseConverter
struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D  : public XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E
{
	// System.Xml.Schema.XmlSchemaType System.Xml.Schema.XmlBaseConverter::schemaType
	XmlSchemaType_t36630F421D730DDFA33CBA5BA6548094ABF40DDF* ___schemaType_0;
	// System.Xml.Schema.XmlTypeCode System.Xml.Schema.XmlBaseConverter::typeCode
	int32_t ___typeCode_1;
	// System.Type System.Xml.Schema.XmlBaseConverter::clrTypeDefault
	Type_t* ___clrTypeDefault_2;
};

struct XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D_StaticFields
{
	// System.Type System.Xml.Schema.XmlBaseConverter::ICollectionType
	Type_t* ___ICollectionType_3;
	// System.Type System.Xml.Schema.XmlBaseConverter::IEnumerableType
	Type_t* ___IEnumerableType_4;
	// System.Type System.Xml.Schema.XmlBaseConverter::IListType
	Type_t* ___IListType_5;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectArrayType
	Type_t* ___ObjectArrayType_6;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringArrayType
	Type_t* ___StringArrayType_7;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueArrayType
	Type_t* ___XmlAtomicValueArrayType_8;
	// System.Type System.Xml.Schema.XmlBaseConverter::DecimalType
	Type_t* ___DecimalType_9;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int32Type
	Type_t* ___Int32Type_10;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int64Type
	Type_t* ___Int64Type_11;
	// System.Type System.Xml.Schema.XmlBaseConverter::StringType
	Type_t* ___StringType_12;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlAtomicValueType
	Type_t* ___XmlAtomicValueType_13;
	// System.Type System.Xml.Schema.XmlBaseConverter::ObjectType
	Type_t* ___ObjectType_14;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteType
	Type_t* ___ByteType_15;
	// System.Type System.Xml.Schema.XmlBaseConverter::Int16Type
	Type_t* ___Int16Type_16;
	// System.Type System.Xml.Schema.XmlBaseConverter::SByteType
	Type_t* ___SByteType_17;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt16Type
	Type_t* ___UInt16Type_18;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt32Type
	Type_t* ___UInt32Type_19;
	// System.Type System.Xml.Schema.XmlBaseConverter::UInt64Type
	Type_t* ___UInt64Type_20;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathItemType
	Type_t* ___XPathItemType_21;
	// System.Type System.Xml.Schema.XmlBaseConverter::DoubleType
	Type_t* ___DoubleType_22;
	// System.Type System.Xml.Schema.XmlBaseConverter::SingleType
	Type_t* ___SingleType_23;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeType
	Type_t* ___DateTimeType_24;
	// System.Type System.Xml.Schema.XmlBaseConverter::DateTimeOffsetType
	Type_t* ___DateTimeOffsetType_25;
	// System.Type System.Xml.Schema.XmlBaseConverter::BooleanType
	Type_t* ___BooleanType_26;
	// System.Type System.Xml.Schema.XmlBaseConverter::ByteArrayType
	Type_t* ___ByteArrayType_27;
	// System.Type System.Xml.Schema.XmlBaseConverter::XmlQualifiedNameType
	Type_t* ___XmlQualifiedNameType_28;
	// System.Type System.Xml.Schema.XmlBaseConverter::UriType
	Type_t* ___UriType_29;
	// System.Type System.Xml.Schema.XmlBaseConverter::TimeSpanType
	Type_t* ___TimeSpanType_30;
	// System.Type System.Xml.Schema.XmlBaseConverter::XPathNavigatorType
	Type_t* ___XPathNavigatorType_31;
};

// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_tBB429CD29D6F765D173E93E0F638CBF47BCE9A69* ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ____hoistedParameters_1;
};

// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536  : public ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590
{
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tEF46B4EA472A35123947A8DF4F68C3E8A5F0C4FD* ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tF030A9AC78837B1C2F9CD54B43F7A04D85A8D92D* ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* ____shadowedVars_2;
};

// UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement/Hierarchy::m_Owner
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};
// Native definition for COM marshalling of UnityEngine.UIElements.VisualElement/Hierarchy
struct Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_Owner_1;
};

// System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	// System.Object modreq(System.Runtime.CompilerServices.IsVolatile) System.Threading.Volatile/VolatileObject::Value
	RuntimeObject* ___Value_0;
};
// Native definition for P/Invoke marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value_0;
};
// Native definition for COM marshalling of System.Threading.Volatile/VolatileObject
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value_0;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities
struct Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B 
{
	union
	{
		struct
		{
		};
		uint8_t Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B__padding[1];
	};
};

// UnityEngine.XR.ARCore.ARCorePromise`1<System.Int32Enum>
struct ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21  : public Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB
{
};

struct ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21_StaticFields
{
	// System.Int32 UnityEngine.XR.ARCore.ARCorePromise`1::s_LastFrameUpdated
	int32_t ___s_LastFrameUpdated_2;
};

// UnityEngine.XR.ARCore.ARCorePromise`1<System.Object>
struct ARCorePromise_1_t2681D98D8056B9B45A6EA53E2881D96B3A561328  : public Promise_1_tEB030C5C1AAFDF29A82B6F24D644CFB095675E8A
{
};

struct ARCorePromise_1_t2681D98D8056B9B45A6EA53E2881D96B3A561328_StaticFields
{
	// System.Int32 UnityEngine.XR.ARCore.ARCorePromise`1::s_LastFrameUpdated
	int32_t ___s_LastFrameUpdated_2;
};

// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7  : public LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E
{
};

// System.Nullable`1<Vuforia.VuAnchorObservationInfo>
struct Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF ___value_1;
};

// System.Nullable`1<Vuforia.VuCloudImageTargetObservationTargetInfo>
struct Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F ___value_1;
};

// System.Nullable`1<Vuforia.VuMeshObservationInfo>
struct Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 ___value_1;
};

// System.Nullable`1<Vuforia.VuModelTargetObservationStateInfo>
struct Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 ___value_1;
};

// System.Nullable`1<Vuforia.VuValidationAreaObservationTrainingInfo>
struct Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED ___value_1;
};

// System.Nullable`1<Vuforia.VuValidationAreaObservationValidationInfo>
struct Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 ___value_1;
};

// System.Nullable`1<Vuforia.VuVirtualButtonObservationInfo>
struct Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C ___value_1;
};

// System.Nullable`1<Vuforia.VuVuMarkObservationInfo>
struct Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 ___value_1;
};

// System.Nullable`1<Vuforia.VuVuMarkObservationInstanceInfo>
struct Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 ___value_1;
};

// UnityEngine.XR.ARSubsystems.TrackingSubsystem`4<UnityEngine.XR.ARSubsystems.XRTrackedObject,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem/Provider>
struct TrackingSubsystem_4_t6A91F435DD4C8BB231D67E80B74B66C53BC4299A  : public SubsystemWithProvider_3_t693F578840ABD33CBE8E7DDDE7909BDDFDAB272F
{
};

// UnityEngine.UIElements.Experimental.ValueAnimation`1<UnityEngine.UIElements.Experimental.StyleValues>
struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC  : public RuntimeObject
{
	// System.Int64 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_StartTimeMs
	int64_t ___m_StartTimeMs_0;
	// System.Int32 UnityEngine.UIElements.Experimental.ValueAnimation`1::m_DurationMs
	int32_t ___m_DurationMs_1;
	// System.Func`2<System.Single,System.Single> UnityEngine.UIElements.Experimental.ValueAnimation`1::<easingCurve>k__BackingField
	Func_2_t2A7432CC4F64D0DF6D8629208B154CF139B39AF2* ___U3CeasingCurveU3Ek__BackingField_2;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<isRunning>k__BackingField
	bool ___U3CisRunningU3Ek__BackingField_3;
	// System.Action UnityEngine.UIElements.Experimental.ValueAnimation`1::<onAnimationCompleted>k__BackingField
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___U3ConAnimationCompletedU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<autoRecycle>k__BackingField
	bool ___U3CautoRecycleU3Ek__BackingField_5;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::<recycled>k__BackingField
	bool ___U3CrecycledU3Ek__BackingField_6;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.Experimental.ValueAnimation`1::<owner>k__BackingField
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___U3CownerU3Ek__BackingField_8;
	// System.Action`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<valueUpdated>k__BackingField
	Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___U3CvalueUpdatedU3Ek__BackingField_9;
	// System.Func`2<UnityEngine.UIElements.VisualElement,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<initialValue>k__BackingField
	Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___U3CinitialValueU3Ek__BackingField_10;
	// System.Func`4<T,T,System.Single,T> UnityEngine.UIElements.Experimental.ValueAnimation`1::<interpolator>k__BackingField
	Func_4_t93A2D1B3300415C1167923C629725F6A8758E6B5* ___U3CinterpolatorU3Ek__BackingField_11;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::_from
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ____from_12;
	// System.Boolean UnityEngine.UIElements.Experimental.ValueAnimation`1::fromValueSet
	bool ___fromValueSet_13;
	// T UnityEngine.UIElements.Experimental.ValueAnimation`1::<to>k__BackingField
	StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___U3CtoU3Ek__BackingField_14;
};

struct ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC_StaticFields
{
	// UnityEngine.UIElements.ObjectPool`1<UnityEngine.UIElements.Experimental.ValueAnimation`1<T>> UnityEngine.UIElements.Experimental.ValueAnimation`1::sObjectPool
	ObjectPool_1_t048E004E7532AED8FD10569876C6065B7527D2AE* ___sObjectPool_7;
};

// System.Numerics.Vector`1<System.UInt16>
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes_4;
};

// System.Numerics.Vector`1<System.UInt64>
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	// System.Numerics.Register System.Numerics.Vector`1::register
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register_0;
};

struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	// System.Int32 System.Numerics.Vector`1::s_count
	int32_t ___s_count_1;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_zero
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero_2;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_one
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one_3;
	// System.Numerics.Vector`1<T> System.Numerics.Vector`1::s_allOnes
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes_4;
};

// UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C 
{
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.InheritedData> UnityEngine.UIElements.ComputedStyle::inheritedData
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.LayoutData> UnityEngine.UIElements.ComputedStyle::layoutData
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.RareData> UnityEngine.UIElements.ComputedStyle::rareData
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransformData> UnityEngine.UIElements.ComputedStyle::transformData
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.TransitionData> UnityEngine.UIElements.ComputedStyle::transitionData
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	// UnityEngine.UIElements.StyleDataRef`1<UnityEngine.UIElements.VisualData> UnityEngine.UIElements.ComputedStyle::visualData
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.ComputedStyle::yogaNode
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.UIElements.StyleSheets.StylePropertyValue> UnityEngine.UIElements.ComputedStyle::customProperties
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	// System.Int64 UnityEngine.UIElements.ComputedStyle::matchingRulesHash
	int64_t ___matchingRulesHash_8;
	// System.Single UnityEngine.UIElements.ComputedStyle::dpiScaling
	float ___dpiScaling_9;
	// UnityEngine.UIElements.ComputedTransitionProperty[] UnityEngine.UIElements.ComputedStyle::computedTransitions
	ComputedTransitionPropertyU5BU5D_t25B9E78F5276CDA297C8215C316452CAB8219E82* ___computedTransitions_10;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_pinvoke
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_pinvoke* ___computedTransitions_10;
};
// Native definition for COM marshalling of UnityEngine.UIElements.ComputedStyle
struct ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C_marshaled_com
{
	StyleDataRef_1_tBB9987581539847AE5CCA2EA2349E05CDC9127FA ___inheritedData_0;
	StyleDataRef_1_t5330A6F4EAC0EAB88E3B9849D866AA23BB6BE5F4 ___layoutData_1;
	StyleDataRef_1_tF773E9CBC6DC0FEB38DF95A6F3F47AC49AE045B3 ___rareData_2;
	StyleDataRef_1_t1D59CCAB740BE6B330D5B5FDA9F67391800200B3 ___transformData_3;
	StyleDataRef_1_t6A7B146DD79EDF7F42CD8CCF3E411B40AA729B8E ___transitionData_4;
	StyleDataRef_1_t9CB834B90E638D92A3BE5123B0D3989697AA87FC ___visualData_5;
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___yogaNode_6;
	Dictionary_2_t645C7B1DAE2D839B52A5E387C165CE13D5465B00* ___customProperties_7;
	int64_t ___matchingRulesHash_8;
	float ___dpiScaling_9;
	ComputedTransitionProperty_tD8E4D8EB5DD69E063944F27A48D9263F4F1354E1_marshaled_com* ___computedTransitions_10;
};

// System.DateTimeOffset
struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 
{
	// System.DateTime System.DateTimeOffset::_dateTime
	DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D ____dateTime_3;
	// System.Int16 System.DateTimeOffset::_offsetMinutes
	int16_t ____offsetMinutes_4;
};

struct DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_StaticFields
{
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___MaxValue_1;
	// System.DateTimeOffset System.DateTimeOffset::UnixEpoch
	DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 ___UnixEpoch_2;
};

// System.Delegate
struct Delegate_t  : public RuntimeObject
{
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject* ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.IntPtr System.Delegate::interp_method
	intptr_t ___interp_method_7;
	// System.IntPtr System.Delegate::interp_invoke_impl
	intptr_t ___interp_invoke_impl_8;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t* ___method_info_9;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t* ___original_method_info_10;
	// System.DelegateData System.Delegate::data
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_12;
};
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	intptr_t ___interp_method_7;
	intptr_t ___interp_invoke_impl_8;
	MethodInfo_t* ___method_info_9;
	MethodInfo_t* ___original_method_info_10;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data_11;
	int32_t ___method_is_virtual_12;
};

// System.Exception
struct Exception_t  : public RuntimeObject
{
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t* ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject* ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject* ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips_15;
	// System.Int32 System.Exception::caught_in_unmanaged
	int32_t ___caught_in_unmanaged_16;
};

struct Exception_t_StaticFields
{
	// System.Object System.Exception::s_EDILock
	RuntimeObject* ___s_EDILock_0;
};
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager_13;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
	int32_t ___caught_in_unmanaged_16;
};

// System.Runtime.InteropServices.GCHandle
struct GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC 
{
	// System.IntPtr System.Runtime.InteropServices.GCHandle::handle
	intptr_t ___handle_0;
};

// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;
};

struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_StaticFields
{
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 
{
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearDepthStencil
	bool ___clearDepthStencil_0;
	// System.Boolean UnityEngine.UIElements.PanelClearSettings::clearColor
	bool ___clearColor_1;
	// UnityEngine.Color UnityEngine.UIElements.PanelClearSettings::color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_pinvoke
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};
// Native definition for COM marshalling of UnityEngine.UIElements.PanelClearSettings
struct PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7_marshaled_com
{
	int32_t ___clearDepthStencil_0;
	int32_t ___clearColor_1;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___color_2;
};

// Unity.Profiling.ProfilerMarker
struct ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD 
{
	// System.IntPtr Unity.Profiling.ProfilerMarker::m_Ptr
	intptr_t ___m_Ptr_0;
};

// UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 
{
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prev
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::next
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::groupTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::boneTransformAncestor
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextDirty
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::hierarchyDepth
	int32_t ___hierarchyDepth_6;
	// UnityEngine.UIElements.UIR.RenderDataDirtyTypes UnityEngine.UIElements.UIR.RenderChainVEData::dirtiedValues
	int32_t ___dirtiedValues_7;
	// System.UInt32 UnityEngine.UIElements.UIR.RenderChainVEData::dirtyID
	uint32_t ___dirtyID_8;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::firstClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	// UnityEngine.UIElements.UIR.RenderChainCommand UnityEngine.UIElements.UIR.RenderChainVEData::lastClosingCommand
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isInChain
	bool ___isInChain_13;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::isHierarchyHidden
	bool ___isHierarchyHidden_14;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::localFlipsWinding
	bool ___localFlipsWinding_15;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::worldFlipsWinding
	bool ___worldFlipsWinding_16;
	// UnityEngine.UIElements.UIR.Implementation.ClipMethod UnityEngine.UIElements.UIR.RenderChainVEData::clipMethod
	int32_t ___clipMethod_17;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenStencilRef
	int32_t ___childrenStencilRef_18;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::childrenMaskDepth
	int32_t ___childrenMaskDepth_19;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::disableNudging
	bool ___disableNudging_20;
	// System.Boolean UnityEngine.UIElements.UIR.RenderChainVEData::usesLegacyText
	bool ___usesLegacyText_21;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::data
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	// UnityEngine.UIElements.UIR.MeshHandle UnityEngine.UIElements.UIR.RenderChainVEData::closingData
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.UIR.RenderChainVEData::verticesSpace
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVStart
	int32_t ___displacementUVStart_25;
	// System.Int32 UnityEngine.UIElements.UIR.RenderChainVEData::displacementUVEnd
	int32_t ___displacementUVEnd_26;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::transformID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::clipRectID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::opacityID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::textCoreSettingsID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderLeftColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderTopColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderRightColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::borderBottomColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	// UnityEngine.UIElements.UIR.BMPAlloc UnityEngine.UIElements.UIR.RenderChainVEData::tintColorID
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	// System.Single UnityEngine.UIElements.UIR.RenderChainVEData::compositeOpacity
	float ___compositeOpacity_37;
	// UnityEngine.Color UnityEngine.UIElements.UIR.RenderChainVEData::backgroundColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::prevText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.UIR.RenderChainVEData::nextText
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.UIR.RenderChainTextEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textEntries
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	// UnityEngine.UIElements.UIR.BasicNode`1<UnityEngine.UIElements.UIR.TextureEntry> UnityEngine.UIElements.UIR.RenderChainVEData::textures
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for P/Invoke marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_pinvoke
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};
// Native definition for COM marshalling of UnityEngine.UIElements.UIR.RenderChainVEData
struct RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847_marshaled_com
{
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prev_0;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___next_1;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___groupTransformAncestor_2;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___boneTransformAncestor_3;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevDirty_4;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextDirty_5;
	int32_t ___hierarchyDepth_6;
	int32_t ___dirtiedValues_7;
	uint32_t ___dirtyID_8;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstCommand_9;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastCommand_10;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___firstClosingCommand_11;
	RenderChainCommand_t4F70E36AF4BC3645C8F9C822B7A3ACE9CB815727* ___lastClosingCommand_12;
	int32_t ___isInChain_13;
	int32_t ___isHierarchyHidden_14;
	int32_t ___localFlipsWinding_15;
	int32_t ___worldFlipsWinding_16;
	int32_t ___clipMethod_17;
	int32_t ___childrenStencilRef_18;
	int32_t ___childrenMaskDepth_19;
	int32_t ___disableNudging_20;
	int32_t ___usesLegacyText_21;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___data_22;
	MeshHandle_tC1E9A7ECCFDAEFDE064B8D58B35B9CEE5A70A22E* ___closingData_23;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___verticesSpace_24;
	int32_t ___displacementUVStart_25;
	int32_t ___displacementUVEnd_26;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___transformID_27;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___clipRectID_28;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___opacityID_29;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___textCoreSettingsID_30;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___backgroundColorID_31;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderLeftColorID_32;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderTopColorID_33;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderRightColorID_34;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___borderBottomColorID_35;
	BMPAlloc_t29DA9D09157B8BAD2D5643711A53A5F11D216D30 ___tintColorID_36;
	float ___compositeOpacity_37;
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___backgroundColor_38;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___prevText_39;
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___nextText_40;
	List_1_t3ADC2CEE608F7E0043EBE4FD425E6C9AE43E19CC* ___textEntries_41;
	BasicNode_1_t7B4D545DCD6949B2E1C85D63DF038E44602F7DDB* ___textures_42;
};

// System.RuntimeTypeHandle
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;
};

// Vuforia.VuAABB
struct VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 
{
	// Vuforia.VuVector3F Vuforia.VuAABB::center
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___center_0;
	// Vuforia.VuVector3F Vuforia.VuAABB::extent
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___extent_1;
};

// Vuforia.VuController
struct VuController_t0E0C6E2A1AE9E9807712554C20C0A0B8B3BB5672  : public RuntimeObject
{
	// Vuforia.VuEngine Vuforia.VuController::mEngine
	VuEngine_t1F34A373F1915ADEC0EF00456B2A186075AEB8F8* ___mEngine_0;
	// System.IntPtr Vuforia.VuController::mNativeHandle
	intptr_t ___mNativeHandle_1;
};

// Vuforia.VuEngine
struct VuEngine_t1F34A373F1915ADEC0EF00456B2A186075AEB8F8  : public RuntimeObject
{
	// System.IntPtr Vuforia.VuEngine::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// System.Collections.Generic.IList`1<Vuforia.VuState> Vuforia.VuEngine::mStates
	RuntimeObject* ___mStates_1;
	// Vuforia.ObservationManager Vuforia.VuEngine::mObservationManager
	ObservationManager_t99938AFA7E9803564F4E20B3E0B9BB3B0C0E251C* ___mObservationManager_2;
	// System.Collections.Generic.IDictionary`2<System.Type,Vuforia.VuController> Vuforia.VuEngine::mControllers
	RuntimeObject* ___mControllers_3;
	// System.Collections.Generic.IDictionary`2<System.Int32,Vuforia.IVuObserver> Vuforia.VuEngine::mObservers
	RuntimeObject* ___mObservers_4;
};

// Vuforia.VuEngineConfigSet
struct VuEngineConfigSet_t1C698EDCA615DE5201BA070ABA21BD81877D7F61  : public RuntimeObject
{
	// System.IntPtr Vuforia.VuEngineConfigSet::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// System.Collections.Generic.IDictionary`2<System.Type,Vuforia.IVuEngineConfig> Vuforia.VuEngineConfigSet::mConfigs
	RuntimeObject* ___mConfigs_1;
};

// Vuforia.VuIlluminationObservationInfo
struct VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 
{
	// System.Nullable`1<System.Int32> Vuforia.VuIlluminationObservationInfo::ambientIntensity
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___ambientIntensity_1;
	// System.Nullable`1<System.Int32> Vuforia.VuIlluminationObservationInfo::ambientColorTemperature
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___ambientColorTemperature_2;
	// System.Single Vuforia.VuIlluminationObservationInfo::intensityCorrection
	float ___intensityCorrection_3;
	// Vuforia.VuVector4F Vuforia.VuIlluminationObservationInfo::colorCorrection
	VuVector4F_tD36A0D6B5C1492D847703BD2D57FD4B2FDA14245 ___colorCorrection_4;
};
// Native definition for P/Invoke marshalling of Vuforia.VuIlluminationObservationInfo
struct VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588_marshaled_pinvoke
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___ambientIntensity_1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___ambientColorTemperature_2;
	float ___intensityCorrection_3;
	VuVector4F_tD36A0D6B5C1492D847703BD2D57FD4B2FDA14245 ___colorCorrection_4;
};
// Native definition for COM marshalling of Vuforia.VuIlluminationObservationInfo
struct VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588_marshaled_com
{
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___ambientIntensity_1;
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___ambientColorTemperature_2;
	float ___intensityCorrection_3;
	VuVector4F_tD36A0D6B5C1492D847703BD2D57FD4B2FDA14245 ___colorCorrection_4;
};

// Vuforia.VuObservation
struct VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631  : public RuntimeObject
{
	// System.IntPtr Vuforia.VuObservation::mNativeHandle
	intptr_t ___mNativeHandle_0;
	// System.Nullable`1<System.Int32> Vuforia.VuObservation::mObserverId
	Nullable_1_tCF32C56A2641879C053C86F273C0C6EC1B40BC28 ___mObserverId_1;
};

// Vuforia.VuRectangle
struct VuRectangle_tF116AD9398807162DC41E049E74AE3959861CDE3 
{
	// Vuforia.VuVector2F Vuforia.VuRectangle::topLeftCorner
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___topLeftCorner_0;
	// Vuforia.VuVector2F Vuforia.VuRectangle::bottomRightCorner
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___bottomRightCorner_1;
};

// Vuforia.VuValidationAreaObservationTargetInfo
struct VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B 
{
	// System.String Vuforia.VuValidationAreaObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuValidationAreaObservationTargetInfo::name
	String_t* ___name_1;
	// Vuforia.VuMatrix44F Vuforia.VuValidationAreaObservationTargetInfo::poseOffset
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_2;
	// Vuforia.VuVector2F Vuforia.VuValidationAreaObservationTargetInfo::size
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___size_3;
};
// Native definition for P/Invoke marshalling of Vuforia.VuValidationAreaObservationTargetInfo
struct VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_2;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___size_3;
};
// Native definition for COM marshalling of Vuforia.VuValidationAreaObservationTargetInfo
struct VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_2;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___size_3;
};

// UnityEngine.XR.ARSubsystems.XRFaceMesh
struct XRFaceMesh_t6B92499E6ECFF17A9BDCC6E531A79395795E2CD4 
{
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Vertices
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Vertices_0;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector3> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Normals
	NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD ___m_Normals_1;
	// Unity.Collections.NativeArray`1<System.Int32> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_Indices
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___m_Indices_2;
	// Unity.Collections.NativeArray`1<UnityEngine.Vector2> UnityEngine.XR.ARSubsystems.XRFaceMesh::m_UVs
	NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 ___m_UVs_3;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor
struct XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3  : public SubsystemDescriptorWithProvider_2_t17328DA23166A3BC7ED05AB2892C8919956D2B87
{
	// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::<capabilities>k__BackingField
	Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___U3CcapabilitiesU3Ek__BackingField_3;
};

// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor
struct XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE  : public SubsystemDescriptorWithProvider_2_t309038BEBEC1FDE6F2E5F74255C98E9DEEEB3E02
{
	// UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::<capabilities>k__BackingField
	int32_t ___U3CcapabilitiesU3Ek__BackingField_3;
};

// System.Xml.Schema.XmlListConverter
struct XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA  : public XmlBaseConverter_tB935E170055CCB49F182D426AC09B2D4C0DA919D
{
	// System.Xml.Schema.XmlValueConverter System.Xml.Schema.XmlListConverter::atomicConverter
	XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* ___atomicConverter_32;
};

// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t0D7436E7EFA82C29EF9482B1C801F64458C343A8  : public SubsystemProvider_1_t7F23470F737E4D41A109340894B9E2BB7F170781
{
};

// UnityEngine.XR.ARSubsystems.XRSessionSubsystem/Provider
struct Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5  : public SubsystemProvider_1_t3658388B98982F8E02C6339B8BE817B81E919B6F
{
};

// System.Nullable`1<Vuforia.VuIlluminationObservationInfo>
struct Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 ___value_1;
};

// System.Nullable`1<Vuforia.VuValidationAreaObservationTargetInfo>
struct Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B ___value_1;
};

// UnityEngine.UIElements.BaseVisualElementPanel
struct BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303  : public RuntimeObject
{
	// System.Action`1<UnityEngine.UIElements.BaseVisualElementPanel> UnityEngine.UIElements.BaseVisualElementPanel::panelDisposed
	Action_1_tF0C1AFCCE9CE63382F43540DC0DA04A8939A8A53* ___panelDisposed_0;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_Scale
	float ___m_Scale_1;
	// UnityEngine.Yoga.YogaConfig UnityEngine.UIElements.BaseVisualElementPanel::yogaConfig
	YogaConfig_tE8B56F99460C291C1F7F46DBD8BAC9F0B653A345* ___yogaConfig_2;
	// System.Single UnityEngine.UIElements.BaseVisualElementPanel::m_PixelsPerPoint
	float ___m_PixelsPerPoint_3;
	// UnityEngine.UIElements.PanelClearSettings UnityEngine.UIElements.BaseVisualElementPanel::<clearSettings>k__BackingField
	PanelClearSettings_tA3D8EE9A4864781CE3E5FED5225C6FB37ED66EE7 ___U3CclearSettingsU3Ek__BackingField_4;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<duringLayoutPhase>k__BackingField
	bool ___U3CduringLayoutPhaseU3Ek__BackingField_5;
	// UnityEngine.UIElements.RepaintData UnityEngine.UIElements.BaseVisualElementPanel::<repaintData>k__BackingField
	RepaintData_t90534752135661579EC254884F550545D001B5EA* ___U3CrepaintDataU3Ek__BackingField_6;
	// UnityEngine.UIElements.ICursorManager UnityEngine.UIElements.BaseVisualElementPanel::<cursorManager>k__BackingField
	RuntimeObject* ___U3CcursorManagerU3Ek__BackingField_7;
	// UnityEngine.UIElements.ContextualMenuManager UnityEngine.UIElements.BaseVisualElementPanel::<contextualMenuManager>k__BackingField
	ContextualMenuManager_tEE3B1F33FFFD180705467CA625AEBA0F5D63154B* ___U3CcontextualMenuManagerU3Ek__BackingField_8;
	// System.Boolean UnityEngine.UIElements.BaseVisualElementPanel::<disposed>k__BackingField
	bool ___U3CdisposedU3Ek__BackingField_9;
	// UnityEngine.UIElements.ElementUnderPointer UnityEngine.UIElements.BaseVisualElementPanel::m_TopElementUnderPointers
	ElementUnderPointer_tB43AD64F79C6F06829D8B90318AF1A6BBE9C1904* ___m_TopElementUnderPointers_10;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardShaderChanged_11;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::standardWorldSpaceShaderChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___standardWorldSpaceShaderChanged_12;
	// System.Action UnityEngine.UIElements.BaseVisualElementPanel::atlasChanged
	Action_tD00B0A84D7945E50C2DFFC28EFEE6ED44ED2AD07* ___atlasChanged_13;
	// System.Action`1<UnityEngine.Material> UnityEngine.UIElements.BaseVisualElementPanel::updateMaterial
	Action_1_t996DFD52B4BDA6CBE8058C13167C4D2B8C612CAA* ___updateMaterial_14;
	// UnityEngine.UIElements.HierarchyEvent UnityEngine.UIElements.BaseVisualElementPanel::hierarchyChanged
	HierarchyEvent_tB23E4347BC47656A014CA104A5B1DDC172A2A705* ___hierarchyChanged_15;
	// System.Action`1<UnityEngine.UIElements.IPanel> UnityEngine.UIElements.BaseVisualElementPanel::beforeUpdate
	Action_1_tE55F8AC1EEC45D0C976E56B2950D65EC814C06E6* ___beforeUpdate_16;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates_13;
};
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_13;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_13;
};

// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_pinvoke : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A_marshaled_com : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Type
struct Type_t  : public MemberInfo_t
{
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl_8;
};

struct Type_t_StaticFields
{
	// System.Reflection.Binder modreq(System.Runtime.CompilerServices.IsVolatile) System.Type::s_defaultBinder
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder_0;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_1;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes_2;
	// System.Object System.Type::Missing
	RuntimeObject* ___Missing_3;
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute_4;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName_5;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase_6;
};

// UnityEngine.UIElements.VisualElement
struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115  : public Focusable_t39F2BAF0AF6CA465BC2BEDAF9B5B2CF379B846D0
{
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.runningAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_runningAnimationCountU3Ek__BackingField_6;
	// System.Int32 UnityEngine.UIElements.VisualElement::<UnityEngine.UIElements.IStylePropertyAnimations.completedAnimationCount>k__BackingField
	int32_t ___U3CUnityEngine_UIElements_IStylePropertyAnimations_completedAnimationCountU3Ek__BackingField_7;
	// System.String UnityEngine.UIElements.VisualElement::m_Name
	String_t* ___m_Name_12;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::m_ClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___m_ClassList_13;
	// System.Collections.Generic.List`1<System.Collections.Generic.KeyValuePair`2<UnityEngine.PropertyName,System.Object>> UnityEngine.UIElements.VisualElement::m_PropertyBag
	List_1_t60F39D768DAD2345527AD3EE73FAB2667DF4F260* ___m_PropertyBag_14;
	// UnityEngine.UIElements.VisualElementFlags UnityEngine.UIElements.VisualElement::m_Flags
	int32_t ___m_Flags_15;
	// System.String UnityEngine.UIElements.VisualElement::m_ViewDataKey
	String_t* ___m_ViewDataKey_16;
	// UnityEngine.UIElements.RenderHints UnityEngine.UIElements.VisualElement::m_RenderHints
	int32_t ___m_RenderHints_17;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastLayout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastLayout_18;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::lastPseudoPadding
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___lastPseudoPadding_19;
	// UnityEngine.UIElements.UIR.RenderChainVEData UnityEngine.UIElements.VisualElement::renderChainData
	RenderChainVEData_t582DE9DA38C6B608A9A38286FCF6FA70398B5847 ___renderChainData_20;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_Layout
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_Layout_21;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_BoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_BoundingBox_22;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldBoundingBox
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldBoundingBox_23;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformCache_24;
	// UnityEngine.Matrix4x4 UnityEngine.UIElements.VisualElement::m_WorldTransformInverseCache
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___m_WorldTransformInverseCache_25;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClip
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClip_26;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::m_WorldClipMinusGroup
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___m_WorldClipMinusGroup_27;
	// System.Boolean UnityEngine.UIElements.VisualElement::m_WorldClipIsInfinite
	bool ___m_WorldClipIsInfinite_28;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::triggerPseudoMask
	int32_t ___triggerPseudoMask_30;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::dependencyPseudoMask
	int32_t ___dependencyPseudoMask_31;
	// UnityEngine.UIElements.PseudoStates UnityEngine.UIElements.VisualElement::m_PseudoStates
	int32_t ___m_PseudoStates_32;
	// System.Int32 UnityEngine.UIElements.VisualElement::<containedPointerIds>k__BackingField
	int32_t ___U3CcontainedPointerIdsU3Ek__BackingField_33;
	// UnityEngine.UIElements.PickingMode UnityEngine.UIElements.VisualElement::<pickingMode>k__BackingField
	int32_t ___U3CpickingModeU3Ek__BackingField_34;
	// UnityEngine.Yoga.YogaNode UnityEngine.UIElements.VisualElement::<yogaNode>k__BackingField
	YogaNode_t4B5B593220CCB315B5A60CB48BA4795636F04DDA* ___U3CyogaNodeU3Ek__BackingField_35;
	// UnityEngine.UIElements.ComputedStyle UnityEngine.UIElements.VisualElement::m_Style
	ComputedStyle_t8B08CCCEE20525528B3FFDAC6D3F58F101AAF54C ___m_Style_36;
	// UnityEngine.UIElements.StyleVariableContext UnityEngine.UIElements.VisualElement::variableContext
	StyleVariableContext_tF74F2787CE1F6BEBBFBFF0771CF493AC9E403527* ___variableContext_37;
	// System.Int32 UnityEngine.UIElements.VisualElement::inheritedStylesHash
	int32_t ___inheritedStylesHash_38;
	// System.UInt32 UnityEngine.UIElements.VisualElement::controlid
	uint32_t ___controlid_39;
	// System.Int32 UnityEngine.UIElements.VisualElement::imguiContainerDescendantCount
	int32_t ___imguiContainerDescendantCount_40;
	// System.Boolean UnityEngine.UIElements.VisualElement::<enabledSelf>k__BackingField
	bool ___U3CenabledSelfU3Ek__BackingField_41;
	// System.Action`1<UnityEngine.UIElements.MeshGenerationContext> UnityEngine.UIElements.VisualElement::<generateVisualContent>k__BackingField
	Action_1_t3DC3411926243F1DB9C330F8E105B904E38C1A0B* ___U3CgenerateVisualContentU3Ek__BackingField_42;
	// Unity.Profiling.ProfilerMarker UnityEngine.UIElements.VisualElement::k_GenerateVisualContentMarker
	ProfilerMarker_tA256E18DA86EDBC5528CE066FC91C96EE86501AD ___k_GenerateVisualContentMarker_43;
	// UnityEngine.UIElements.VisualElement/RenderTargetMode UnityEngine.UIElements.VisualElement::m_SubRenderTargetMode
	int32_t ___m_SubRenderTargetMode_44;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::m_defaultMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_defaultMaterial_46;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.Experimental.IValueAnimationUpdate> UnityEngine.UIElements.VisualElement::m_RunningAnimations
	List_1_t96E9133B70FB6765E6B138E810D33E18901715DA* ___m_RunningAnimations_47;
	// UnityEngine.UIElements.VisualElement/Hierarchy UnityEngine.UIElements.VisualElement::<hierarchy>k__BackingField
	Hierarchy_t4CF226F0EDE9C117C51C505730FC80641B1F1677 ___U3ChierarchyU3Ek__BackingField_49;
	// System.Boolean UnityEngine.UIElements.VisualElement::<isRootVisualContainer>k__BackingField
	bool ___U3CisRootVisualContainerU3Ek__BackingField_50;
	// System.Boolean UnityEngine.UIElements.VisualElement::<cacheAsBitmap>k__BackingField
	bool ___U3CcacheAsBitmapU3Ek__BackingField_51;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_PhysicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_PhysicalParent_52;
	// UnityEngine.UIElements.VisualElement UnityEngine.UIElements.VisualElement::m_LogicalParent
	VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115* ___m_LogicalParent_53;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::m_Children
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___m_Children_55;
	// UnityEngine.UIElements.BaseVisualElementPanel UnityEngine.UIElements.VisualElement::<elementPanel>k__BackingField
	BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* ___U3CelementPanelU3Ek__BackingField_56;
	// UnityEngine.UIElements.VisualTreeAsset UnityEngine.UIElements.VisualElement::m_VisualTreeAssetSource
	VisualTreeAsset_tFB5BF81F0780A412AE5A7C2C552B3EEA64EA2EEB* ___m_VisualTreeAssetSource_57;
	// UnityEngine.UIElements.InlineStyleAccess UnityEngine.UIElements.VisualElement::inlineStyleAccess
	InlineStyleAccess_t5CA7877999C9442491A220AE50D605C84D09A165* ___inlineStyleAccess_59;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.StyleSheet> UnityEngine.UIElements.VisualElement::styleSheetList
	List_1_tEA16F82F7871418E28EB6F551D77A8AD9F2E337F* ___styleSheetList_60;
	// UnityEngine.UIElements.VisualElement/TypeData UnityEngine.UIElements.VisualElement::m_TypeData
	TypeData_t01D670B4E71B5571B38C7412B1E652A47D6AF66A* ___m_TypeData_64;
};

struct VisualElement_t2667F9D19E62C7A315927506C06F223AB9234115_StaticFields
{
	// System.UInt32 UnityEngine.UIElements.VisualElement::s_NextId
	uint32_t ___s_NextId_8;
	// System.Collections.Generic.List`1<System.String> UnityEngine.UIElements.VisualElement::s_EmptyClassList
	List_1_tF470A3BE5C1B5B68E1325EF3F109D172E60BD7CD* ___s_EmptyClassList_9;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::userDataPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___userDataPropertyKey_10;
	// System.String UnityEngine.UIElements.VisualElement::disabledUssClassName
	String_t* ___disabledUssClassName_11;
	// UnityEngine.Rect UnityEngine.UIElements.VisualElement::s_InfiniteRect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___s_InfiniteRect_29;
	// UnityEngine.Material UnityEngine.UIElements.VisualElement::s_runtimeMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_runtimeMaterial_45;
	// System.Collections.Generic.List`1<UnityEngine.UIElements.VisualElement> UnityEngine.UIElements.VisualElement::s_EmptyList
	List_1_t6115BBE78FE9310B180A2027321DF46F2A06AC95* ___s_EmptyList_54;
	// UnityEngine.UIElements.VisualElement/CustomStyleAccess UnityEngine.UIElements.VisualElement::s_CustomStyleAccess
	CustomStyleAccess_t170C852102B4D09FB478B620A75B14D096F9F2B1* ___s_CustomStyleAccess_58;
	// System.Text.RegularExpressions.Regex UnityEngine.UIElements.VisualElement::s_InternalStyleSheetPath
	Regex_tE773142C2BE45C5D362B0F815AFF831707A51772* ___s_InternalStyleSheetPath_61;
	// UnityEngine.PropertyName UnityEngine.UIElements.VisualElement::tooltipPropertyKey
	PropertyName_tE4B4AAA58AF3BF2C0CD95509EB7B786F096901C2 ___tooltipPropertyKey_62;
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.UIElements.VisualElement/TypeData> UnityEngine.UIElements.VisualElement::s_TypeData
	Dictionary_2_t4055F6540F36F21F9FEDAFB92D8E0089B38EBBC8* ___s_TypeData_63;
};

// Vuforia.VuAreaTargetObservationTargetInfo
struct VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 
{
	// System.String Vuforia.VuAreaTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuAreaTargetObservationTargetInfo::name
	String_t* ___name_1;
	// Vuforia.VuVector3F Vuforia.VuAreaTargetObservationTargetInfo::size
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___size_2;
	// Vuforia.VuAABB Vuforia.VuAreaTargetObservationTargetInfo::bbox
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_3;
	// System.Boolean Vuforia.VuAreaTargetObservationTargetInfo::requiresExternalPositions
	bool ___requiresExternalPositions_4;
	// Vuforia.VuMatrix44F Vuforia.VuAreaTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_5;
};
// Native definition for P/Invoke marshalling of Vuforia.VuAreaTargetObservationTargetInfo
struct VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___size_2;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_3;
	int32_t ___requiresExternalPositions_4;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_5;
};
// Native definition for COM marshalling of Vuforia.VuAreaTargetObservationTargetInfo
struct VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___size_2;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_3;
	int32_t ___requiresExternalPositions_4;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_5;
};

// Vuforia.VuCylinderTargetObservationTargetInfo
struct VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 
{
	// System.String Vuforia.VuCylinderTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuCylinderTargetObservationTargetInfo::name
	String_t* ___name_1;
	// System.Single Vuforia.VuCylinderTargetObservationTargetInfo::sideLength
	float ___sideLength_2;
	// System.Single Vuforia.VuCylinderTargetObservationTargetInfo::topDiameter
	float ___topDiameter_3;
	// System.Single Vuforia.VuCylinderTargetObservationTargetInfo::bottomDiameter
	float ___bottomDiameter_4;
	// Vuforia.VuAABB Vuforia.VuCylinderTargetObservationTargetInfo::bbox
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_5;
	// Vuforia.VuMatrix44F Vuforia.VuCylinderTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_6;
};
// Native definition for P/Invoke marshalling of Vuforia.VuCylinderTargetObservationTargetInfo
struct VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	float ___sideLength_2;
	float ___topDiameter_3;
	float ___bottomDiameter_4;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_5;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_6;
};
// Native definition for COM marshalling of Vuforia.VuCylinderTargetObservationTargetInfo
struct VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	float ___sideLength_2;
	float ___topDiameter_3;
	float ___bottomDiameter_4;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_5;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_6;
};

// Vuforia.VuImageTargetObservationTargetInfo
struct VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC 
{
	// System.String Vuforia.VuImageTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuImageTargetObservationTargetInfo::name
	String_t* ___name_1;
	// Vuforia.VuVector2F Vuforia.VuImageTargetObservationTargetInfo::size
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___size_2;
	// Vuforia.VuAABB Vuforia.VuImageTargetObservationTargetInfo::bbox
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_3;
	// Vuforia.VuMatrix44F Vuforia.VuImageTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_4;
};
// Native definition for P/Invoke marshalling of Vuforia.VuImageTargetObservationTargetInfo
struct VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___size_2;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_3;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_4;
};
// Native definition for COM marshalling of Vuforia.VuImageTargetObservationTargetInfo
struct VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___size_2;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_3;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_4;
};

// Vuforia.VuModelTargetObservationTargetInfo
struct VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D 
{
	// System.String Vuforia.VuModelTargetObservationTargetInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuModelTargetObservationTargetInfo::name
	String_t* ___name_1;
	// Vuforia.VuVector3F Vuforia.VuModelTargetObservationTargetInfo::size
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___size_2;
	// Vuforia.VuAABB Vuforia.VuModelTargetObservationTargetInfo::bbox
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_3;
	// System.String Vuforia.VuModelTargetObservationTargetInfo::activeGuideViewName
	String_t* ___activeGuideViewName_4;
	// Vuforia.VuModelTargetTrackingMode Vuforia.VuModelTargetObservationTargetInfo::trackingMode
	int32_t ___trackingMode_5;
	// Vuforia.VuMotionHint Vuforia.VuModelTargetObservationTargetInfo::motionHint
	int32_t ___motionHint_6;
	// Vuforia.VuTrackingOptimization Vuforia.VuModelTargetObservationTargetInfo::trackingOptimization
	int32_t ___trackingOptimization_7;
	// Vuforia.VuMatrix44F Vuforia.VuModelTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_8;
	// System.String Vuforia.VuModelTargetObservationTargetInfo::activeStateName
	String_t* ___activeStateName_9;
};
// Native definition for P/Invoke marshalling of Vuforia.VuModelTargetObservationTargetInfo
struct VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___size_2;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_3;
	char* ___activeGuideViewName_4;
	int32_t ___trackingMode_5;
	int32_t ___motionHint_6;
	int32_t ___trackingOptimization_7;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_8;
	char* ___activeStateName_9;
};
// Native definition for COM marshalling of Vuforia.VuModelTargetObservationTargetInfo
struct VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___size_2;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_3;
	Il2CppChar* ___activeGuideViewName_4;
	int32_t ___trackingMode_5;
	int32_t ___motionHint_6;
	int32_t ___trackingOptimization_7;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_8;
	Il2CppChar* ___activeStateName_9;
};

// Vuforia.VuMultiTargetObservationTargetInfo
struct VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA 
{
	// System.String Vuforia.VuMultiTargetObservationTargetInfo::name
	String_t* ___name_0;
	// Vuforia.VuVector3F Vuforia.VuMultiTargetObservationTargetInfo::size
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___size_1;
	// Vuforia.VuAABB Vuforia.VuMultiTargetObservationTargetInfo::bbox
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_2;
	// Vuforia.VuMatrix44F Vuforia.VuMultiTargetObservationTargetInfo::poseOffset
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_3;
};
// Native definition for P/Invoke marshalling of Vuforia.VuMultiTargetObservationTargetInfo
struct VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA_marshaled_pinvoke
{
	char* ___name_0;
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___size_1;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_2;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_3;
};
// Native definition for COM marshalling of Vuforia.VuMultiTargetObservationTargetInfo
struct VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA_marshaled_com
{
	Il2CppChar* ___name_0;
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ___size_1;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_2;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_3;
};

// Vuforia.VuVuMarkObservationTemplateInfo
struct VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF 
{
	// System.String Vuforia.VuVuMarkObservationTemplateInfo::uniqueId
	String_t* ___uniqueId_0;
	// System.String Vuforia.VuVuMarkObservationTemplateInfo::name
	String_t* ___name_1;
	// System.String Vuforia.VuVuMarkObservationTemplateInfo::userData
	String_t* ___userData_2;
	// Vuforia.VuVector2F Vuforia.VuVuMarkObservationTemplateInfo::size
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___size_3;
	// Vuforia.VuVector2F Vuforia.VuVuMarkObservationTemplateInfo::origin
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___origin_4;
	// Vuforia.VuAABB Vuforia.VuVuMarkObservationTemplateInfo::bbox
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_5;
	// Vuforia.VuMatrix44F Vuforia.VuVuMarkObservationTemplateInfo::poseOffset
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_6;
};
// Native definition for P/Invoke marshalling of Vuforia.VuVuMarkObservationTemplateInfo
struct VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF_marshaled_pinvoke
{
	char* ___uniqueId_0;
	char* ___name_1;
	char* ___userData_2;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___size_3;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___origin_4;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_5;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_6;
};
// Native definition for COM marshalling of Vuforia.VuVuMarkObservationTemplateInfo
struct VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF_marshaled_com
{
	Il2CppChar* ___uniqueId_0;
	Il2CppChar* ___name_1;
	Il2CppChar* ___userData_2;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___size_3;
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ___origin_4;
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ___bbox_5;
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ___poseOffset_6;
};

// UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem
struct XRObjectTrackingSubsystem_t0094478B41F73E26F73943C09ECD134874B68ED5  : public TrackingSubsystem_4_t6A91F435DD4C8BB231D67E80B74B66C53BC4299A
{
	// UnityEngine.XR.ARSubsystems.XRReferenceObjectLibrary UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::m_Library
	XRReferenceObjectLibrary_t035F7FE264C24BC98A58CA2F24D047BB99BC8487* ___m_Library_4;
};

// UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider
struct ARCoreProvider_tD2E93A65CCD3E86D401DF128FD49F8B050F21492  : public Provider_t0E03563C43D7DC05CCBFBE3C117052E76FD76AD5
{
	// System.Runtime.InteropServices.GCHandle UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_ProviderHandle
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___m_ProviderHandle_1;
	// System.Action`3<UnityEngine.XR.ARCore.ArSession,UnityEngine.XR.ARCore.ArConfig,System.IntPtr> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_SetConfigurationCallback
	Action_3_t9E9F00CC6AC96764CAB10CF74EBB4050022802E3* ___m_SetConfigurationCallback_2;
	// System.Action`1<UnityEngine.XR.ARCore.ARCoreBeforeSetConfigurationEventArgs> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::beforeSetConfiguration
	Action_1_t50A1540EA73609CB8D3B72EE418EEFE3BFD8F892* ___beforeSetConfiguration_3;
	// System.IntPtr UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::m_RenderEventFunc
	intptr_t ___m_RenderEventFunc_5;
};

// System.Action`1<System.IntPtr>
struct Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.UIElements.VisualElement,System.Object>
struct Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2  : public MulticastDelegate_t
{
};

// System.Action`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A  : public MulticastDelegate_t
{
};

// Vuforia.VuEngine/CreateControllerDelegate`1<System.Object>
struct CreateControllerDelegate_1_t0EFF3A593F0A0BC5FC5CC4B18D9430E7FB8B6D56  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuAnchorObservationInfo>
struct CreateStructDelegate_1_t4BADA369CEF902626AEAE2C31531EEB2B626816F  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuAreaTargetObservationTargetInfo>
struct CreateStructDelegate_1_tAA3D3BB1131C306B4A25758848325061CE76FBED  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuCloudImageTargetObservationTargetInfo>
struct CreateStructDelegate_1_tB451F16FCBD015F1DF8442EF8A6E3A514875BA6C  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuCylinderTargetObservationTargetInfo>
struct CreateStructDelegate_1_tFBC8CE520AE865303AD475D8F0438F91A50C1B44  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuIlluminationObservationInfo>
struct CreateStructDelegate_1_tF45AB3692FE6F8A4415AC89848A892F3A031A879  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuImageTargetObservationTargetInfo>
struct CreateStructDelegate_1_t240D566F743F448A1A6AA369E7E016B4EEA0C03D  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuMeshObservationInfo>
struct CreateStructDelegate_1_t3EDAA16AD9DD5B771784752145396A9B804BDBD7  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuModelTargetObservationStateInfo>
struct CreateStructDelegate_1_t740074CFC233D096F98BA627F6C40488DFCC4FD2  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuModelTargetObservationTargetInfo>
struct CreateStructDelegate_1_t464A4064C663996E35CDD4FE99394922891E8737  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuMultiTargetObservationTargetInfo>
struct CreateStructDelegate_1_tA7153E42E755017370C102D50E073B15E30479CB  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuValidationAreaObservationTargetInfo>
struct CreateStructDelegate_1_t0A2FADE9465A1B770F9CA2E1F587F3A2D0336848  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuValidationAreaObservationTrainingInfo>
struct CreateStructDelegate_1_t5307CDE64C29A8E83E4021A3D0D2070B1B02D3B7  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuValidationAreaObservationValidationInfo>
struct CreateStructDelegate_1_t4DB130F0417ECF57ED0339FBB74DCBA3ACD32C4D  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuVirtualButtonObservationInfo>
struct CreateStructDelegate_1_t6A358525972DB69F85A1355F5FA4209D9813D11C  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuVuMarkObservationInfo>
struct CreateStructDelegate_1_tEC00F17F9804B9DD6895037C6A3A770B82AD141B  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuVuMarkObservationInstanceInfo>
struct CreateStructDelegate_1_t4FAC0D9B72B2A0CCCE7B77BEEB0ED3D5D8BB992D  : public MulticastDelegate_t
{
};

// Vuforia.VuObservation/CreateStructDelegate`1<Vuforia.VuVuMarkObservationTemplateInfo>
struct CreateStructDelegate_1_t630E530516EF2B0D93DA69D9AD22811C64BEF666  : public MulticastDelegate_t
{
};

// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.VisualElement,System.Object>
struct Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3  : public MulticastDelegate_t
{
};

// System.Func`2<UnityEngine.UIElements.VisualElement,UnityEngine.UIElements.Experimental.StyleValues>
struct Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetEnumValueDelegate`1<System.Int32Enum>
struct GetEnumValueDelegate_1_t21C015BB53B4CCE3507575146E1CE8954FE0242C  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetPrimitiveValueDelegate`1<System.Single>
struct GetPrimitiveValueDelegate_1_tA35FE0538F103A4BB82726377AB10102D3D13B3E  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<System.Int32Enum>
struct GetStructValueDelegate_1_t141CF561DEBE35266AAFE540879CFF0FE754AD25  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuAABB>
struct GetStructValueDelegate_1_t7BC5E5CCB5B786A43822574669C41229AD14CAD7  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuMatrix44F>
struct GetStructValueDelegate_1_t210459A1813A4BBB054A38CFC1CF0A86DB5CA5C3  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuRectangle>
struct GetStructValueDelegate_1_t96BD6A6AFF1D36ECDEBF69C4A9B1890056380926  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuValidationAreaCaptureProgressInfo>
struct GetStructValueDelegate_1_t65E2D9522057F09C33C54B03517ACB7BDBCA0538  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuValidationAreaCaptureUploadProgressInfo>
struct GetStructValueDelegate_1_t2B9C3AF3091CB736958B4E8014627978CA87492A  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuVector2F>
struct GetStructValueDelegate_1_t1B019E7DFD8544999D65820DAF508147DA05DDAC  : public MulticastDelegate_t
{
};

// Vuforia.ValueAccessUtils/GetStructValueDelegate`1<Vuforia.VuVector3F>
struct GetStructValueDelegate_1_tA83C9577CF452182A12892D6F984A9A8BA2E9428  : public MulticastDelegate_t
{
};

// System.Nullable`1<Vuforia.VuAreaTargetObservationTargetInfo>
struct Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 ___value_1;
};

// System.Nullable`1<Vuforia.VuCylinderTargetObservationTargetInfo>
struct Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 ___value_1;
};

// System.Nullable`1<Vuforia.VuImageTargetObservationTargetInfo>
struct Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC ___value_1;
};

// System.Nullable`1<Vuforia.VuModelTargetObservationTargetInfo>
struct Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D ___value_1;
};

// System.Nullable`1<Vuforia.VuMultiTargetObservationTargetInfo>
struct Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA ___value_1;
};

// System.Nullable`1<Vuforia.VuVuMarkObservationTemplateInfo>
struct Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC 
{
	// System.Boolean System.Nullable`1::hasValue
	bool ___hasValue_0;
	// T System.Nullable`1::value
	VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF ___value_1;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.XR.Management.XRLoader
struct XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// UnityEngine.XR.Management.XRManagerSettings
struct XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_InitializationComplete
	bool ___m_InitializationComplete_4;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_RequiresSettingsUpdate
	bool ___m_RequiresSettingsUpdate_5;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticLoading
	bool ___m_AutomaticLoading_6;
	// System.Boolean UnityEngine.XR.Management.XRManagerSettings::m_AutomaticRunning
	bool ___m_AutomaticRunning_7;
	// System.Collections.Generic.List`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_Loaders
	List_1_tA1A04BD6B1EE83992AE369D5DB31A028E9B57822* ___m_Loaders_8;
	// System.Collections.Generic.HashSet`1<UnityEngine.XR.Management.XRLoader> UnityEngine.XR.Management.XRManagerSettings::m_RegisteredLoaders
	HashSet_1_t174593AE6599738C19A33586587D63534CED9F0F* ___m_RegisteredLoaders_9;
	// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::<activeLoader>k__BackingField
	XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* ___U3CactiveLoaderU3Ek__BackingField_10;
};

// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry
struct XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
};

// System.ArgumentNullException
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};

// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC  : public XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976
{
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* ___m_SubsystemInstanceMap_4;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Boolean[]
struct BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4  : public RuntimeArray
{
	ALIGN_FIELD (8) bool m_Items[1];

	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.DateTime[]
struct DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1  : public RuntimeArray
{
	ALIGN_FIELD (8) DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D m_Items[1];

	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D value)
	{
		m_Items[index] = value;
	}
};
// System.DateTimeOffset[]
struct DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E  : public RuntimeArray
{
	ALIGN_FIELD (8) DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 m_Items[1];

	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4 value)
	{
		m_Items[index] = value;
	}
};
// System.Decimal[]
struct DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615  : public RuntimeArray
{
	ALIGN_FIELD (8) Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F m_Items[1];

	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F value)
	{
		m_Items[index] = value;
	}
};
// System.Double[]
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE  : public RuntimeArray
{
	ALIGN_FIELD (8) double m_Items[1];

	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB  : public RuntimeArray
{
	ALIGN_FIELD (8) int16_t m_Items[1];

	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C  : public RuntimeArray
{
	ALIGN_FIELD (8) int32_t m_Items[1];

	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D  : public RuntimeArray
{
	ALIGN_FIELD (8) int64_t m_Items[1];

	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.SByte[]
struct SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913  : public RuntimeArray
{
	ALIGN_FIELD (8) int8_t m_Items[1];

	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C  : public RuntimeArray
{
	ALIGN_FIELD (8) float m_Items[1];

	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.TimeSpan[]
struct TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6  : public RuntimeArray
{
	ALIGN_FIELD (8) TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A m_Items[1];

	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A value)
	{
		m_Items[index] = value;
	}
};
// System.UInt16[]
struct UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83  : public RuntimeArray
{
	ALIGN_FIELD (8) uint16_t m_Items[1];

	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA  : public RuntimeArray
{
	ALIGN_FIELD (8) uint32_t m_Items[1];

	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299  : public RuntimeArray
{
	ALIGN_FIELD (8) uint64_t m_Items[1];

	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001  : public RuntimeArray
{
	ALIGN_FIELD (8) AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* m_Items[1];

	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB  : public RuntimeArray
{
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C  : public RuntimeArray
{
	ALIGN_FIELD (8) ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* m_Items[1];

	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<System.Int32Enum>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuAnchorObservationInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m68659E9B6E199B179AF3008FBC77269223E12035_gshared_inline (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuAnchorObservationInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mD8CEA78B219EFD20813B36125B66F4EF64A71BC7_gshared (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* __this, VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuAnchorObservationInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF Nullable_1_get_Value_m175C06F4BF0901DD40281BE2BF54D9CE82D372A2_gshared (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuAreaTargetObservationTargetInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m24E40FB5B40D3DE59FF730575C490000DEDB0180_gshared_inline (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuAreaTargetObservationTargetInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mEAB2313BF7188D3F26C171C2F31119898FB9E1F8_gshared (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* __this, VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuAreaTargetObservationTargetInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 Nullable_1_get_Value_mE4F0AD65D60A8374FD621BAFF234A627B3F527B9_gshared (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuCloudImageTargetObservationTargetInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m77763F09827A2FE01D25EE6CC3344B8F5C936821_gshared_inline (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuCloudImageTargetObservationTargetInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mA833CEE0B2ED8C4D9715D69D8094AA31181F27FC_gshared (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* __this, VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuCloudImageTargetObservationTargetInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F Nullable_1_get_Value_m5D05FAACC131748578E56AF09D3C334C4A06BB46_gshared (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuCylinderTargetObservationTargetInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mE4C1883655C69E82A340495CF4BE3A0E9D53556F_gshared_inline (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuCylinderTargetObservationTargetInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m856274D802B3648296EDB608E4E7293DDB247A92_gshared (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* __this, VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuCylinderTargetObservationTargetInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 Nullable_1_get_Value_mBDFECDEBA12FBCF0AAB2AB9EFE735837ED984949_gshared (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuIlluminationObservationInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9E39BA295A126DE86ACAEA1C2CA48E74789D6465_gshared_inline (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuIlluminationObservationInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mE1CC9AC367EEB8838FB82AE072AFFAB964A0C705_gshared (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* __this, VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuIlluminationObservationInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 Nullable_1_get_Value_m85F863A48A43349578311E723BBA1D1C87E8BC01_gshared (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuImageTargetObservationTargetInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB06603851D1FA7317BD9612819AA44A8819D53BB_gshared_inline (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuImageTargetObservationTargetInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m5E74EB32833C0B00E64C6AAB7645F689B5BD7BCC_gshared (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* __this, VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuImageTargetObservationTargetInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC Nullable_1_get_Value_mDE60A0BFAB55A77BD2C28CE3EF2197AF21DC461F_gshared (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuMeshObservationInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mABAF20C163C6203D9E0939628971AA3D97023DE2_gshared_inline (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuMeshObservationInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m1DF0D9DAB7FF14880E13EF1978B3DBCE51232E60_gshared (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* __this, VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuMeshObservationInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 Nullable_1_get_Value_m9BCDBBB61CE97F0A4FD31985593E2CD20AF5FD7B_gshared (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuModelTargetObservationStateInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m709BF9548B1BF19959A1EF6468E6BE0877D38A12_gshared_inline (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuModelTargetObservationStateInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m0B0BE9EF7A03A05C4E2962E2CDCD0AEAF819EF24_gshared (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* __this, VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuModelTargetObservationStateInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 Nullable_1_get_Value_m6A2F6EBED60CB3B30AC7CBF9112DCC56F94D8F78_gshared (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuModelTargetObservationTargetInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1C04D7CB1766F8BB54DDE95660D48D180857928_gshared_inline (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuModelTargetObservationTargetInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m2641A49148D0537B42F073708B7BA3AE99069FFC_gshared (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* __this, VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuModelTargetObservationTargetInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D Nullable_1_get_Value_m07372153BBFD5345D7B78C3014A6A2A48E3B26BE_gshared (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuMultiTargetObservationTargetInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mF08B15984D4124884FADB24FFB9DFE1F2BC9F335_gshared_inline (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuMultiTargetObservationTargetInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m8F167C2162DA44021B13280C6C1C906CDECDDDCA_gshared (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* __this, VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuMultiTargetObservationTargetInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA Nullable_1_get_Value_m120491333A5B599D5DEEE9D55668A0D8BCB1576C_gshared (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuValidationAreaObservationTargetInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1741B43207EC063AE9A71F7F675513C528DCAF9E_gshared_inline (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuValidationAreaObservationTargetInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m199CEAB4AD51C5E270F96D1F8CFFCF1E442B5ACA_gshared (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* __this, VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuValidationAreaObservationTargetInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B Nullable_1_get_Value_m5A10E4D1F28A975EA94968EED4BD4B6A1610A2F9_gshared (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuValidationAreaObservationTrainingInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mBD79FFC769064FDA55DF8C807072F1A804E44E7B_gshared_inline (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuValidationAreaObservationTrainingInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mE33D7D58467595A5F21110C4FAE209A8D107C372_gshared (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* __this, VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuValidationAreaObservationTrainingInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED Nullable_1_get_Value_m4A7907D3B3DFE173695A7E4934B6BDA50AEA6B41_gshared (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuValidationAreaObservationValidationInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD019096B51EAF8491D25A9FD726F699CFD58D3AB_gshared_inline (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuValidationAreaObservationValidationInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mAD9A1EFB57A30A7BA1F8773FD768BAEB1B736A96_gshared (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* __this, VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuValidationAreaObservationValidationInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 Nullable_1_get_Value_mD3B57BE271C72003BA54AA7AE82A50E27BA60C59_gshared (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuVirtualButtonObservationInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m117FBA6ABEEECFD1CB3B0B949E38D419F624BE52_gshared_inline (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuVirtualButtonObservationInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_mC61BD92D5FEA9DBEE1415ADDDF93043320AF62DA_gshared (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* __this, VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuVirtualButtonObservationInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C Nullable_1_get_Value_m2645033B881A367BED1B897A67E33FEE27088AA7_gshared (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuVuMarkObservationInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA069BABA222DBC5642A85E34D280EBE5B02D74AE_gshared_inline (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuVuMarkObservationInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m200FB9E3CE3B285829E26CB1B9E3241CA3FD97F0_gshared (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* __this, VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuVuMarkObservationInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 Nullable_1_get_Value_mCE723867FACF515DE5E685CA6483887ECD0CB323_gshared (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuVuMarkObservationInstanceInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m36097ED2550D367B01E649CAED7826B4463533C4_gshared_inline (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuVuMarkObservationInstanceInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m7599B990A7FB1FE6110D2587E3B0C6CFAC5264F3_gshared (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* __this, VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuVuMarkObservationInstanceInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 Nullable_1_get_Value_m5AA5B0FF5A83F4D4DC3786DA74FE8895C75EDC87_gshared (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* __this, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<Vuforia.VuVuMarkObservationTemplateInfo>::get_HasValue()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2A82D51003825E59CB150365B54EAE49218217FA_gshared_inline (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* __this, const RuntimeMethod* method) ;
// System.Void System.Nullable`1<Vuforia.VuVuMarkObservationTemplateInfo>::.ctor(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Nullable_1__ctor_m328A5841731ECB9304C899B87A2C56B4A05E9F0A_gshared (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* __this, VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF ___value0, const RuntimeMethod* method) ;
// T System.Nullable`1<Vuforia.VuVuMarkObservationTemplateInfo>::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF Nullable_1_get_Value_m695027E830AEC400234BC3D4DEEAFB1517B12918_gshared (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* __this, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method) ;
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Object,System.Object>::set_Item(TKey,TValue)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::ContainsKey(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::Remove(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Dictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method) ;
// T UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___capacity0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared (HashSet_1_t2F33BEB06EEA4A872E2FAF464382422AA39AE885* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;

// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F (Exception_t* __this, String_t* ___message0, const RuntimeMethod* method) ;
// UnityEngine.UIElements.IVisualTreeUpdater UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::get_Item(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UIElements.VisualTreeUpdater/UpdaterArray::set_Item(UnityEngine.UIElements.VisualTreeUpdatePhase,UnityEngine.UIElements.IVisualTreeUpdater)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11 (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* __this, int32_t ___phase0, RuntimeObject* ___value1, const RuntimeMethod* method) ;
// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___handle0, const RuntimeMethod* method) ;
// System.Boolean System.Nullable`1<System.Int32Enum>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<System.Int32Enum>::.ctor(T)
inline void Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, int32_t ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14*, int32_t, const RuntimeMethod*))Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<System.Int32Enum>::get_Value()
inline int32_t Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60 (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14*, const RuntimeMethod*))Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuAnchorObservationInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m68659E9B6E199B179AF3008FBC77269223E12035_inline (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4*, const RuntimeMethod*))Nullable_1_get_HasValue_m68659E9B6E199B179AF3008FBC77269223E12035_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuAnchorObservationInfo>::.ctor(T)
inline void Nullable_1__ctor_mD8CEA78B219EFD20813B36125B66F4EF64A71BC7 (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* __this, VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4*, VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF, const RuntimeMethod*))Nullable_1__ctor_mD8CEA78B219EFD20813B36125B66F4EF64A71BC7_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuAnchorObservationInfo>::get_Value()
inline VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF Nullable_1_get_Value_m175C06F4BF0901DD40281BE2BF54D9CE82D372A2 (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* __this, const RuntimeMethod* method)
{
	return ((  VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF (*) (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4*, const RuntimeMethod*))Nullable_1_get_Value_m175C06F4BF0901DD40281BE2BF54D9CE82D372A2_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuAreaTargetObservationTargetInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m24E40FB5B40D3DE59FF730575C490000DEDB0180_inline (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C*, const RuntimeMethod*))Nullable_1_get_HasValue_m24E40FB5B40D3DE59FF730575C490000DEDB0180_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuAreaTargetObservationTargetInfo>::.ctor(T)
inline void Nullable_1__ctor_mEAB2313BF7188D3F26C171C2F31119898FB9E1F8 (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* __this, VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C*, VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8, const RuntimeMethod*))Nullable_1__ctor_mEAB2313BF7188D3F26C171C2F31119898FB9E1F8_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuAreaTargetObservationTargetInfo>::get_Value()
inline VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 Nullable_1_get_Value_mE4F0AD65D60A8374FD621BAFF234A627B3F527B9 (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* __this, const RuntimeMethod* method)
{
	return ((  VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 (*) (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C*, const RuntimeMethod*))Nullable_1_get_Value_mE4F0AD65D60A8374FD621BAFF234A627B3F527B9_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuCloudImageTargetObservationTargetInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m77763F09827A2FE01D25EE6CC3344B8F5C936821_inline (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7*, const RuntimeMethod*))Nullable_1_get_HasValue_m77763F09827A2FE01D25EE6CC3344B8F5C936821_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuCloudImageTargetObservationTargetInfo>::.ctor(T)
inline void Nullable_1__ctor_mA833CEE0B2ED8C4D9715D69D8094AA31181F27FC (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* __this, VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7*, VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F, const RuntimeMethod*))Nullable_1__ctor_mA833CEE0B2ED8C4D9715D69D8094AA31181F27FC_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuCloudImageTargetObservationTargetInfo>::get_Value()
inline VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F Nullable_1_get_Value_m5D05FAACC131748578E56AF09D3C334C4A06BB46 (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* __this, const RuntimeMethod* method)
{
	return ((  VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F (*) (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7*, const RuntimeMethod*))Nullable_1_get_Value_m5D05FAACC131748578E56AF09D3C334C4A06BB46_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuCylinderTargetObservationTargetInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_mE4C1883655C69E82A340495CF4BE3A0E9D53556F_inline (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639*, const RuntimeMethod*))Nullable_1_get_HasValue_mE4C1883655C69E82A340495CF4BE3A0E9D53556F_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuCylinderTargetObservationTargetInfo>::.ctor(T)
inline void Nullable_1__ctor_m856274D802B3648296EDB608E4E7293DDB247A92 (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* __this, VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639*, VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196, const RuntimeMethod*))Nullable_1__ctor_m856274D802B3648296EDB608E4E7293DDB247A92_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuCylinderTargetObservationTargetInfo>::get_Value()
inline VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 Nullable_1_get_Value_mBDFECDEBA12FBCF0AAB2AB9EFE735837ED984949 (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* __this, const RuntimeMethod* method)
{
	return ((  VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 (*) (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639*, const RuntimeMethod*))Nullable_1_get_Value_mBDFECDEBA12FBCF0AAB2AB9EFE735837ED984949_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuIlluminationObservationInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m9E39BA295A126DE86ACAEA1C2CA48E74789D6465_inline (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2*, const RuntimeMethod*))Nullable_1_get_HasValue_m9E39BA295A126DE86ACAEA1C2CA48E74789D6465_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuIlluminationObservationInfo>::.ctor(T)
inline void Nullable_1__ctor_mE1CC9AC367EEB8838FB82AE072AFFAB964A0C705 (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* __this, VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2*, VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588, const RuntimeMethod*))Nullable_1__ctor_mE1CC9AC367EEB8838FB82AE072AFFAB964A0C705_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuIlluminationObservationInfo>::get_Value()
inline VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 Nullable_1_get_Value_m85F863A48A43349578311E723BBA1D1C87E8BC01 (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* __this, const RuntimeMethod* method)
{
	return ((  VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 (*) (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2*, const RuntimeMethod*))Nullable_1_get_Value_m85F863A48A43349578311E723BBA1D1C87E8BC01_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuImageTargetObservationTargetInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB06603851D1FA7317BD9612819AA44A8819D53BB_inline (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804*, const RuntimeMethod*))Nullable_1_get_HasValue_mB06603851D1FA7317BD9612819AA44A8819D53BB_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuImageTargetObservationTargetInfo>::.ctor(T)
inline void Nullable_1__ctor_m5E74EB32833C0B00E64C6AAB7645F689B5BD7BCC (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* __this, VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804*, VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC, const RuntimeMethod*))Nullable_1__ctor_m5E74EB32833C0B00E64C6AAB7645F689B5BD7BCC_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuImageTargetObservationTargetInfo>::get_Value()
inline VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC Nullable_1_get_Value_mDE60A0BFAB55A77BD2C28CE3EF2197AF21DC461F (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* __this, const RuntimeMethod* method)
{
	return ((  VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC (*) (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804*, const RuntimeMethod*))Nullable_1_get_Value_mDE60A0BFAB55A77BD2C28CE3EF2197AF21DC461F_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuMeshObservationInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_mABAF20C163C6203D9E0939628971AA3D97023DE2_inline (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC*, const RuntimeMethod*))Nullable_1_get_HasValue_mABAF20C163C6203D9E0939628971AA3D97023DE2_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuMeshObservationInfo>::.ctor(T)
inline void Nullable_1__ctor_m1DF0D9DAB7FF14880E13EF1978B3DBCE51232E60 (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* __this, VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC*, VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863, const RuntimeMethod*))Nullable_1__ctor_m1DF0D9DAB7FF14880E13EF1978B3DBCE51232E60_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuMeshObservationInfo>::get_Value()
inline VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 Nullable_1_get_Value_m9BCDBBB61CE97F0A4FD31985593E2CD20AF5FD7B (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* __this, const RuntimeMethod* method)
{
	return ((  VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 (*) (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC*, const RuntimeMethod*))Nullable_1_get_Value_m9BCDBBB61CE97F0A4FD31985593E2CD20AF5FD7B_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuModelTargetObservationStateInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m709BF9548B1BF19959A1EF6468E6BE0877D38A12_inline (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2*, const RuntimeMethod*))Nullable_1_get_HasValue_m709BF9548B1BF19959A1EF6468E6BE0877D38A12_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuModelTargetObservationStateInfo>::.ctor(T)
inline void Nullable_1__ctor_m0B0BE9EF7A03A05C4E2962E2CDCD0AEAF819EF24 (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* __this, VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2*, VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539, const RuntimeMethod*))Nullable_1__ctor_m0B0BE9EF7A03A05C4E2962E2CDCD0AEAF819EF24_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuModelTargetObservationStateInfo>::get_Value()
inline VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 Nullable_1_get_Value_m6A2F6EBED60CB3B30AC7CBF9112DCC56F94D8F78 (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* __this, const RuntimeMethod* method)
{
	return ((  VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 (*) (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2*, const RuntimeMethod*))Nullable_1_get_Value_m6A2F6EBED60CB3B30AC7CBF9112DCC56F94D8F78_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuModelTargetObservationTargetInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_mB1C04D7CB1766F8BB54DDE95660D48D180857928_inline (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE*, const RuntimeMethod*))Nullable_1_get_HasValue_mB1C04D7CB1766F8BB54DDE95660D48D180857928_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuModelTargetObservationTargetInfo>::.ctor(T)
inline void Nullable_1__ctor_m2641A49148D0537B42F073708B7BA3AE99069FFC (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* __this, VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE*, VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D, const RuntimeMethod*))Nullable_1__ctor_m2641A49148D0537B42F073708B7BA3AE99069FFC_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuModelTargetObservationTargetInfo>::get_Value()
inline VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D Nullable_1_get_Value_m07372153BBFD5345D7B78C3014A6A2A48E3B26BE (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* __this, const RuntimeMethod* method)
{
	return ((  VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D (*) (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE*, const RuntimeMethod*))Nullable_1_get_Value_m07372153BBFD5345D7B78C3014A6A2A48E3B26BE_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuMultiTargetObservationTargetInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_mF08B15984D4124884FADB24FFB9DFE1F2BC9F335_inline (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD*, const RuntimeMethod*))Nullable_1_get_HasValue_mF08B15984D4124884FADB24FFB9DFE1F2BC9F335_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuMultiTargetObservationTargetInfo>::.ctor(T)
inline void Nullable_1__ctor_m8F167C2162DA44021B13280C6C1C906CDECDDDCA (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* __this, VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD*, VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA, const RuntimeMethod*))Nullable_1__ctor_m8F167C2162DA44021B13280C6C1C906CDECDDDCA_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuMultiTargetObservationTargetInfo>::get_Value()
inline VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA Nullable_1_get_Value_m120491333A5B599D5DEEE9D55668A0D8BCB1576C (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* __this, const RuntimeMethod* method)
{
	return ((  VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA (*) (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD*, const RuntimeMethod*))Nullable_1_get_Value_m120491333A5B599D5DEEE9D55668A0D8BCB1576C_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuValidationAreaObservationTargetInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m1741B43207EC063AE9A71F7F675513C528DCAF9E_inline (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573*, const RuntimeMethod*))Nullable_1_get_HasValue_m1741B43207EC063AE9A71F7F675513C528DCAF9E_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuValidationAreaObservationTargetInfo>::.ctor(T)
inline void Nullable_1__ctor_m199CEAB4AD51C5E270F96D1F8CFFCF1E442B5ACA (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* __this, VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573*, VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B, const RuntimeMethod*))Nullable_1__ctor_m199CEAB4AD51C5E270F96D1F8CFFCF1E442B5ACA_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuValidationAreaObservationTargetInfo>::get_Value()
inline VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B Nullable_1_get_Value_m5A10E4D1F28A975EA94968EED4BD4B6A1610A2F9 (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* __this, const RuntimeMethod* method)
{
	return ((  VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B (*) (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573*, const RuntimeMethod*))Nullable_1_get_Value_m5A10E4D1F28A975EA94968EED4BD4B6A1610A2F9_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuValidationAreaObservationTrainingInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_mBD79FFC769064FDA55DF8C807072F1A804E44E7B_inline (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB*, const RuntimeMethod*))Nullable_1_get_HasValue_mBD79FFC769064FDA55DF8C807072F1A804E44E7B_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuValidationAreaObservationTrainingInfo>::.ctor(T)
inline void Nullable_1__ctor_mE33D7D58467595A5F21110C4FAE209A8D107C372 (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* __this, VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB*, VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED, const RuntimeMethod*))Nullable_1__ctor_mE33D7D58467595A5F21110C4FAE209A8D107C372_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuValidationAreaObservationTrainingInfo>::get_Value()
inline VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED Nullable_1_get_Value_m4A7907D3B3DFE173695A7E4934B6BDA50AEA6B41 (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* __this, const RuntimeMethod* method)
{
	return ((  VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED (*) (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB*, const RuntimeMethod*))Nullable_1_get_Value_m4A7907D3B3DFE173695A7E4934B6BDA50AEA6B41_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuValidationAreaObservationValidationInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_mD019096B51EAF8491D25A9FD726F699CFD58D3AB_inline (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93*, const RuntimeMethod*))Nullable_1_get_HasValue_mD019096B51EAF8491D25A9FD726F699CFD58D3AB_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuValidationAreaObservationValidationInfo>::.ctor(T)
inline void Nullable_1__ctor_mAD9A1EFB57A30A7BA1F8773FD768BAEB1B736A96 (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* __this, VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93*, VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860, const RuntimeMethod*))Nullable_1__ctor_mAD9A1EFB57A30A7BA1F8773FD768BAEB1B736A96_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuValidationAreaObservationValidationInfo>::get_Value()
inline VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 Nullable_1_get_Value_mD3B57BE271C72003BA54AA7AE82A50E27BA60C59 (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* __this, const RuntimeMethod* method)
{
	return ((  VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 (*) (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93*, const RuntimeMethod*))Nullable_1_get_Value_mD3B57BE271C72003BA54AA7AE82A50E27BA60C59_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuVirtualButtonObservationInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m117FBA6ABEEECFD1CB3B0B949E38D419F624BE52_inline (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6*, const RuntimeMethod*))Nullable_1_get_HasValue_m117FBA6ABEEECFD1CB3B0B949E38D419F624BE52_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuVirtualButtonObservationInfo>::.ctor(T)
inline void Nullable_1__ctor_mC61BD92D5FEA9DBEE1415ADDDF93043320AF62DA (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* __this, VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6*, VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C, const RuntimeMethod*))Nullable_1__ctor_mC61BD92D5FEA9DBEE1415ADDDF93043320AF62DA_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuVirtualButtonObservationInfo>::get_Value()
inline VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C Nullable_1_get_Value_m2645033B881A367BED1B897A67E33FEE27088AA7 (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* __this, const RuntimeMethod* method)
{
	return ((  VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C (*) (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6*, const RuntimeMethod*))Nullable_1_get_Value_m2645033B881A367BED1B897A67E33FEE27088AA7_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuVuMarkObservationInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_mA069BABA222DBC5642A85E34D280EBE5B02D74AE_inline (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8*, const RuntimeMethod*))Nullable_1_get_HasValue_mA069BABA222DBC5642A85E34D280EBE5B02D74AE_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuVuMarkObservationInfo>::.ctor(T)
inline void Nullable_1__ctor_m200FB9E3CE3B285829E26CB1B9E3241CA3FD97F0 (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* __this, VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8*, VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34, const RuntimeMethod*))Nullable_1__ctor_m200FB9E3CE3B285829E26CB1B9E3241CA3FD97F0_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuVuMarkObservationInfo>::get_Value()
inline VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 Nullable_1_get_Value_mCE723867FACF515DE5E685CA6483887ECD0CB323 (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* __this, const RuntimeMethod* method)
{
	return ((  VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 (*) (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8*, const RuntimeMethod*))Nullable_1_get_Value_mCE723867FACF515DE5E685CA6483887ECD0CB323_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuVuMarkObservationInstanceInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m36097ED2550D367B01E649CAED7826B4463533C4_inline (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093*, const RuntimeMethod*))Nullable_1_get_HasValue_m36097ED2550D367B01E649CAED7826B4463533C4_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuVuMarkObservationInstanceInfo>::.ctor(T)
inline void Nullable_1__ctor_m7599B990A7FB1FE6110D2587E3B0C6CFAC5264F3 (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* __this, VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093*, VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519, const RuntimeMethod*))Nullable_1__ctor_m7599B990A7FB1FE6110D2587E3B0C6CFAC5264F3_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuVuMarkObservationInstanceInfo>::get_Value()
inline VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 Nullable_1_get_Value_m5AA5B0FF5A83F4D4DC3786DA74FE8895C75EDC87 (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* __this, const RuntimeMethod* method)
{
	return ((  VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 (*) (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093*, const RuntimeMethod*))Nullable_1_get_Value_m5AA5B0FF5A83F4D4DC3786DA74FE8895C75EDC87_gshared)(__this, method);
}
// System.Boolean System.Nullable`1<Vuforia.VuVuMarkObservationTemplateInfo>::get_HasValue()
inline bool Nullable_1_get_HasValue_m2A82D51003825E59CB150365B54EAE49218217FA_inline (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC*, const RuntimeMethod*))Nullable_1_get_HasValue_m2A82D51003825E59CB150365B54EAE49218217FA_gshared_inline)(__this, method);
}
// System.Void System.Nullable`1<Vuforia.VuVuMarkObservationTemplateInfo>::.ctor(T)
inline void Nullable_1__ctor_m328A5841731ECB9304C899B87A2C56B4A05E9F0A (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* __this, VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF ___value0, const RuntimeMethod* method)
{
	((  void (*) (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC*, VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF, const RuntimeMethod*))Nullable_1__ctor_m328A5841731ECB9304C899B87A2C56B4A05E9F0A_gshared)(__this, ___value0, method);
}
// T System.Nullable`1<Vuforia.VuVuMarkObservationTemplateInfo>::get_Value()
inline VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF Nullable_1_get_Value_m695027E830AEC400234BC3D4DEEAFB1517B12918 (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* __this, const RuntimeMethod* method)
{
	return ((  VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF (*) (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC*, const RuntimeMethod*))Nullable_1_get_Value_m695027E830AEC400234BC3D4DEEAFB1517B12918_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<System.Int32>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0 (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::Dispose()
inline void NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, const RuntimeMethod*))NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<System.Int32>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, const RuntimeMethod*))NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5 (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector3>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::Dispose()
inline void NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, const RuntimeMethod*))NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector3>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0 (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// System.Void System.ArgumentNullException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___paramName0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
inline void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419 (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Int32 System.String::Compare(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t String_Compare_mA1B6FACF0E4A9B45FFECF215BF15A040C2DA9A34 (String_t* ___strA0, String_t* ___strB1, bool ___ignoreCase2, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::set_Item(TKey,TValue)
inline void Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_set_Item_m1A840355E8EDAECEA9D0C6F5E51B248FAA449CBD_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
inline bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::ContainsKey(TKey)
inline bool Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_ContainsKey_m703047C213F7AB55C9DC346596287773A1F670CD_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::Remove(TKey)
inline bool Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, const RuntimeMethod*))Dictionary_2_Remove_m5C7C45E75D951A75843F3F7AADD56ECD64F6BC86_gshared)(__this, ___key0, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>::TryGetValue(TKey,TValue&)
inline bool Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682 (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* __this, Type_t* ___key0, RuntimeObject** ___value1, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*, Type_t*, RuntimeObject**, const RuntimeMethod*))Dictionary_2_TryGetValue_mD15380A4ED7CDEE99EA45881577D26BA9CE1B849_gshared)(__this, ___key0, ___value1, method);
}
// UnityEngine.XR.Management.XRLoader UnityEngine.XR.Management.XRManagerSettings::get_activeLoader()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* __this, String_t* ___id0, Type_t* ___providerType1, Type_t* ___subsystemTypeOverride2, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___capabilities3, const RuntimeMethod* method) ;
// System.Void UnityEngine.SubsystemsImplementation.SubsystemDescriptorStore::RegisterDescriptor(UnityEngine.SubsystemsImplementation.SubsystemDescriptorWithProvider)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F (SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5* ___descriptor0, const RuntimeMethod* method) ;
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::.ctor(System.String,System.Type,System.Type,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3 (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* __this, String_t* ___subsystemId0, Type_t* ___providerType1, Type_t* ___subsystemTypeOverride2, int32_t ___capabilities3, const RuntimeMethod* method) ;
// UnityEngine.XR.ARSubsystems.XRReferenceObjectEntry UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA* XRReferenceObject_FindEntry_mFF9C29CCCDF7BA08B307B787DF83EF8F27B6017C (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, Type_t* ___type0, const RuntimeMethod* method) ;
// T UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry<System.Object>()
inline RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31 (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*, const RuntimeMethod*))XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared)(__this, method);
}
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D (Type_t* ___t0, const RuntimeMethod* method) ;
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB (intptr_t ___array0, const RuntimeMethod* method) ;
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3 (intptr_t ___array0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method) ;
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F (intptr_t ___str0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D (intptr_t ___localref0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* __this, intptr_t ___jobject0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B (RuntimeObject* ___obj0, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetFieldID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75 (intptr_t ___javaClass0, String_t* ___fieldName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method) ;
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D (StringBuilder_t* __this, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1 (StringBuilder_t* __this, Il2CppChar ___value0, const RuntimeMethod* method) ;
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::Alloc(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6 (RuntimeObject* ___value0, const RuntimeMethod* method) ;
// System.IntPtr System.Runtime.InteropServices.GCHandle::ToIntPtr(System.Runtime.InteropServices.GCHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC ___value0, const RuntimeMethod* method) ;
// System.Void System.Action`1<System.IntPtr>::Invoke(T)
inline void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method)
{
	((  void (*) (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2*, intptr_t, const RuntimeMethod*))Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline)(__this, ___obj0, method);
}
// System.Runtime.InteropServices.GCHandle System.Runtime.InteropServices.GCHandle::FromIntPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF (intptr_t ___value0, const RuntimeMethod* method) ;
// System.Object System.Runtime.InteropServices.GCHandle::get_Target()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// System.Void System.Runtime.InteropServices.GCHandle::Free()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3 (GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC* __this, const RuntimeMethod* method) ;
// T[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, int32_t, const RuntimeMethod*))List_1__ctor_m76CBBC3E2F0583F5AD30CE592CEA1225C06A0428_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline void List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9 (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, RuntimeObject* ___parameters0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))HashSet_1__ctor_m9132EE1422BAA45E44B7FFF495F378790D36D90E_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69 (HashSet_1_t068F5201D923072F46716204841D21328FE6218D* __this, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, const RuntimeMethod*))HashSet_1_Add_m2CD7657B3459B61DD4BBA47024AC71F7D319658B_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(T)
inline void Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, HashSet_1_t068F5201D923072F46716204841D21328FE6218D* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, HashSet_1_t068F5201D923072F46716204841D21328FE6218D*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t068F5201D923072F46716204841D21328FE6218D* Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5 (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t068F5201D923072F46716204841D21328FE6218D* (*) (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// T Vuforia.ValueAccessUtils::GetPrimitiveValue<System.Single>(System.IntPtr,Vuforia.ValueAccessUtils/GetPrimitiveValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float ValueAccessUtils_GetPrimitiveValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE40252724FBB00D77B6F444DAEA7FD9DFA9A8C8C_gshared (intptr_t ___nativeHandle0, GetPrimitiveValueDelegate_1_tA35FE0538F103A4BB82726377AB10102D3D13B3E* ___callback1, const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		GetPrimitiveValueDelegate_1_tA35FE0538F103A4BB82726377AB10102D3D13B3E* L_0 = ___callback1;
		intptr_t L_1 = ___nativeHandle0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetPrimitiveValueDelegate_1_tA35FE0538F103A4BB82726377AB10102D3D13B3E*, intptr_t, float*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueAccessUtils_GetPrimitiveValue_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mE40252724FBB00D77B6F444DAEA7FD9DFA9A8C8C_RuntimeMethod_var)));
	}

IL_0016:
	{
		float L_4 = V_0;
		return L_4;
	}
}
// T Vuforia.ValueAccessUtils::GetStructValue<System.Int32Enum>(System.IntPtr,Vuforia.ValueAccessUtils/GetStructValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ValueAccessUtils_GetStructValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB4050643DEBC8E06E17E08536FFDE9F4EB7549A7_gshared (intptr_t ___nativeHandle0, GetStructValueDelegate_1_t141CF561DEBE35266AAFE540879CFF0FE754AD25* ___callback1, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		GetStructValueDelegate_1_t141CF561DEBE35266AAFE540879CFF0FE754AD25* L_0 = ___callback1;
		intptr_t L_1 = ___nativeHandle0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetStructValueDelegate_1_t141CF561DEBE35266AAFE540879CFF0FE754AD25*, intptr_t, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueAccessUtils_GetStructValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mB4050643DEBC8E06E17E08536FFDE9F4EB7549A7_RuntimeMethod_var)));
	}

IL_0016:
	{
		int32_t L_4 = V_0;
		return L_4;
	}
}
// T Vuforia.ValueAccessUtils::GetStructValue<Vuforia.VuAABB>(System.IntPtr,Vuforia.ValueAccessUtils/GetStructValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 ValueAccessUtils_GetStructValue_TisVuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738_mBDFB63723D88C7A0A74C9C8F352B103D9B1C3EC9_gshared (intptr_t ___nativeHandle0, GetStructValueDelegate_1_t7BC5E5CCB5B786A43822574669C41229AD14CAD7* ___callback1, const RuntimeMethod* method) 
{
	VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetStructValueDelegate_1_t7BC5E5CCB5B786A43822574669C41229AD14CAD7* L_0 = ___callback1;
		intptr_t L_1 = ___nativeHandle0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetStructValueDelegate_1_t7BC5E5CCB5B786A43822574669C41229AD14CAD7*, intptr_t, VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueAccessUtils_GetStructValue_TisVuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738_mBDFB63723D88C7A0A74C9C8F352B103D9B1C3EC9_RuntimeMethod_var)));
	}

IL_0016:
	{
		VuAABB_tBF8ABA143EBB3E1715EDE17B7EC021FA7122F738 L_4 = V_0;
		return L_4;
	}
}
// T Vuforia.ValueAccessUtils::GetStructValue<Vuforia.VuMatrix44F>(System.IntPtr,Vuforia.ValueAccessUtils/GetStructValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 ValueAccessUtils_GetStructValue_TisVuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6_mAA499FA731312A8D889789169527C126CAAB1099_gshared (intptr_t ___nativeHandle0, GetStructValueDelegate_1_t210459A1813A4BBB054A38CFC1CF0A86DB5CA5C3* ___callback1, const RuntimeMethod* method) 
{
	VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetStructValueDelegate_1_t210459A1813A4BBB054A38CFC1CF0A86DB5CA5C3* L_0 = ___callback1;
		intptr_t L_1 = ___nativeHandle0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetStructValueDelegate_1_t210459A1813A4BBB054A38CFC1CF0A86DB5CA5C3*, intptr_t, VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueAccessUtils_GetStructValue_TisVuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6_mAA499FA731312A8D889789169527C126CAAB1099_RuntimeMethod_var)));
	}

IL_0016:
	{
		VuMatrix44F_tC75A0AF8524BED265F800A953806F30FA28B8DE6 L_4 = V_0;
		return L_4;
	}
}
// T Vuforia.ValueAccessUtils::GetStructValue<Vuforia.VuRectangle>(System.IntPtr,Vuforia.ValueAccessUtils/GetStructValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuRectangle_tF116AD9398807162DC41E049E74AE3959861CDE3 ValueAccessUtils_GetStructValue_TisVuRectangle_tF116AD9398807162DC41E049E74AE3959861CDE3_m7E9F538E09283C7965CF0FEDB81046A09151CFC2_gshared (intptr_t ___nativeHandle0, GetStructValueDelegate_1_t96BD6A6AFF1D36ECDEBF69C4A9B1890056380926* ___callback1, const RuntimeMethod* method) 
{
	VuRectangle_tF116AD9398807162DC41E049E74AE3959861CDE3 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetStructValueDelegate_1_t96BD6A6AFF1D36ECDEBF69C4A9B1890056380926* L_0 = ___callback1;
		intptr_t L_1 = ___nativeHandle0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetStructValueDelegate_1_t96BD6A6AFF1D36ECDEBF69C4A9B1890056380926*, intptr_t, VuRectangle_tF116AD9398807162DC41E049E74AE3959861CDE3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueAccessUtils_GetStructValue_TisVuRectangle_tF116AD9398807162DC41E049E74AE3959861CDE3_m7E9F538E09283C7965CF0FEDB81046A09151CFC2_RuntimeMethod_var)));
	}

IL_0016:
	{
		VuRectangle_tF116AD9398807162DC41E049E74AE3959861CDE3 L_4 = V_0;
		return L_4;
	}
}
// T Vuforia.ValueAccessUtils::GetStructValue<Vuforia.VuValidationAreaCaptureProgressInfo>(System.IntPtr,Vuforia.ValueAccessUtils/GetStructValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuValidationAreaCaptureProgressInfo_t3DCC9260358D938AA7D06D1A1A5538F5C06F9810 ValueAccessUtils_GetStructValue_TisVuValidationAreaCaptureProgressInfo_t3DCC9260358D938AA7D06D1A1A5538F5C06F9810_m324832E8995B5048B58E522DC81C35BBB6BD3823_gshared (intptr_t ___nativeHandle0, GetStructValueDelegate_1_t65E2D9522057F09C33C54B03517ACB7BDBCA0538* ___callback1, const RuntimeMethod* method) 
{
	VuValidationAreaCaptureProgressInfo_t3DCC9260358D938AA7D06D1A1A5538F5C06F9810 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetStructValueDelegate_1_t65E2D9522057F09C33C54B03517ACB7BDBCA0538* L_0 = ___callback1;
		intptr_t L_1 = ___nativeHandle0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetStructValueDelegate_1_t65E2D9522057F09C33C54B03517ACB7BDBCA0538*, intptr_t, VuValidationAreaCaptureProgressInfo_t3DCC9260358D938AA7D06D1A1A5538F5C06F9810*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueAccessUtils_GetStructValue_TisVuValidationAreaCaptureProgressInfo_t3DCC9260358D938AA7D06D1A1A5538F5C06F9810_m324832E8995B5048B58E522DC81C35BBB6BD3823_RuntimeMethod_var)));
	}

IL_0016:
	{
		VuValidationAreaCaptureProgressInfo_t3DCC9260358D938AA7D06D1A1A5538F5C06F9810 L_4 = V_0;
		return L_4;
	}
}
// T Vuforia.ValueAccessUtils::GetStructValue<Vuforia.VuValidationAreaCaptureUploadProgressInfo>(System.IntPtr,Vuforia.ValueAccessUtils/GetStructValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuValidationAreaCaptureUploadProgressInfo_t7440BB52FFF00C3F7E13AB128C5B5D2EE1D43242 ValueAccessUtils_GetStructValue_TisVuValidationAreaCaptureUploadProgressInfo_t7440BB52FFF00C3F7E13AB128C5B5D2EE1D43242_mEE9FAD93893F808B9470B7927F80AA436BBEA952_gshared (intptr_t ___nativeHandle0, GetStructValueDelegate_1_t2B9C3AF3091CB736958B4E8014627978CA87492A* ___callback1, const RuntimeMethod* method) 
{
	VuValidationAreaCaptureUploadProgressInfo_t7440BB52FFF00C3F7E13AB128C5B5D2EE1D43242 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetStructValueDelegate_1_t2B9C3AF3091CB736958B4E8014627978CA87492A* L_0 = ___callback1;
		intptr_t L_1 = ___nativeHandle0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetStructValueDelegate_1_t2B9C3AF3091CB736958B4E8014627978CA87492A*, intptr_t, VuValidationAreaCaptureUploadProgressInfo_t7440BB52FFF00C3F7E13AB128C5B5D2EE1D43242*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueAccessUtils_GetStructValue_TisVuValidationAreaCaptureUploadProgressInfo_t7440BB52FFF00C3F7E13AB128C5B5D2EE1D43242_mEE9FAD93893F808B9470B7927F80AA436BBEA952_RuntimeMethod_var)));
	}

IL_0016:
	{
		VuValidationAreaCaptureUploadProgressInfo_t7440BB52FFF00C3F7E13AB128C5B5D2EE1D43242 L_4 = V_0;
		return L_4;
	}
}
// T Vuforia.ValueAccessUtils::GetStructValue<Vuforia.VuVector2F>(System.IntPtr,Vuforia.ValueAccessUtils/GetStructValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 ValueAccessUtils_GetStructValue_TisVuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8_mA9851B00EC3E60A6D54CE959BA8AD3D5E73E68AE_gshared (intptr_t ___nativeHandle0, GetStructValueDelegate_1_t1B019E7DFD8544999D65820DAF508147DA05DDAC* ___callback1, const RuntimeMethod* method) 
{
	VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetStructValueDelegate_1_t1B019E7DFD8544999D65820DAF508147DA05DDAC* L_0 = ___callback1;
		intptr_t L_1 = ___nativeHandle0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetStructValueDelegate_1_t1B019E7DFD8544999D65820DAF508147DA05DDAC*, intptr_t, VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueAccessUtils_GetStructValue_TisVuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8_mA9851B00EC3E60A6D54CE959BA8AD3D5E73E68AE_RuntimeMethod_var)));
	}

IL_0016:
	{
		VuVector2F_t79CCE33CCEFEED608BEE3AAA2C00C8AB4FF9E1B8 L_4 = V_0;
		return L_4;
	}
}
// T Vuforia.ValueAccessUtils::GetStructValue<Vuforia.VuVector3F>(System.IntPtr,Vuforia.ValueAccessUtils/GetStructValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 ValueAccessUtils_GetStructValue_TisVuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5_m979461A819AD0D8788AD5CB9525977523CA480E4_gshared (intptr_t ___nativeHandle0, GetStructValueDelegate_1_tA83C9577CF452182A12892D6F984A9A8BA2E9428* ___callback1, const RuntimeMethod* method) 
{
	VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		GetStructValueDelegate_1_tA83C9577CF452182A12892D6F984A9A8BA2E9428* L_0 = ___callback1;
		intptr_t L_1 = ___nativeHandle0;
		NullCheck(L_0);
		int32_t L_2;
		L_2 = ((  int32_t (*) (GetStructValueDelegate_1_tA83C9577CF452182A12892D6F984A9A8BA2E9428*, intptr_t, VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, (&V_0), il2cpp_rgctx_method(method->rgctx_data, 1));
		if (L_2)
		{
			goto IL_0016;
		}
	}
	{
		Exception_t* L_3 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral129542A27B8936E5A98FF1A8D5731533853C07E7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ValueAccessUtils_GetStructValue_TisVuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5_m979461A819AD0D8788AD5CB9525977523CA480E4_RuntimeMethod_var)));
	}

IL_0016:
	{
		VuVector3F_t0D8184FEC600D512E82695E2BE073109B24E62D5 L_4 = V_0;
		return L_4;
	}
}
// System.Numerics.Vector`1<System.UInt64> System.Numerics.Vector::AsVectorUInt64<System.UInt16>(System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mB1290EF33E80A390B04A3A61E2ED8039C7C1D527_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___value0, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___value0;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
// System.Numerics.Vector`1<T> System.Numerics.Vector::Equals<System.UInt16>(System.Numerics.Vector`1<T>,System.Numerics.Vector`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mDF58FEA5BFA35E22ED8C525BA9EE0B508F567406_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___left0, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___right1, const RuntimeMethod* method) 
{
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___left0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___right1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<System.Object>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* VisualElement_StartAnimation_TisRuntimeObject_mFBD42C4DE9E16FE6E43F9B7717A2ECC761B98902_gshared (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* ___anim0, Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3* ___fromValueGetter1, RuntimeObject* ___to2, int32_t ___durationMs3, Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2* ___onValueChanged4, const RuntimeMethod* method) 
{
	ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* V_0 = NULL;
	{
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_0 = ___anim0;
		Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3* L_1 = ___fromValueGetter1;
		NullCheck(L_0);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, Func_2_t9AAA83BE20528E7FBB1DCCFF8E9640E7061D5BE3*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_2 = ___anim0;
		RuntimeObject* L_3 = ___to2;
		NullCheck(L_2);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_4 = ___anim0;
		int32_t L_5 = ___durationMs3;
		NullCheck(L_4);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_6 = ___anim0;
		Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2* L_7 = ___onValueChanged4;
		NullCheck(L_6);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, Action_2_t481D6C6BCDB085CB7BE1AA1DBD81F4DC0C04D1F2*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_8 = ___anim0;
		NullCheck(L_8);
		((  void (*) (ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_9 = ___anim0;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_tF3671ECA2C7631382409A777D0358001E0815F7B* L_10 = V_0;
		return L_10;
	}
}
// UnityEngine.UIElements.Experimental.ValueAnimation`1<T> UnityEngine.UIElements.VisualElement::StartAnimation<UnityEngine.UIElements.Experimental.StyleValues>(UnityEngine.UIElements.Experimental.ValueAnimation`1<T>,System.Func`2<UnityEngine.UIElements.VisualElement,T>,T,System.Int32,System.Action`2<UnityEngine.UIElements.VisualElement,T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* VisualElement_StartAnimation_TisStyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A_mADB9C50790E47B4253CE04BC5B8F7A83CCAF68ED_gshared (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* ___anim0, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* ___fromValueGetter1, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A ___to2, int32_t ___durationMs3, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* ___onValueChanged4, const RuntimeMethod* method) 
{
	ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* V_0 = NULL;
	{
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_0 = ___anim0;
		Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227* L_1 = ___fromValueGetter1;
		NullCheck(L_0);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, Func_2_t87FB5A45506EB8DF671CF8BEB31A0FD5A00FA227*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_2 = ___anim0;
		StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A L_3 = ___to2;
		NullCheck(L_2);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, StyleValues_t4AED947A53B84B62EF2B589A40B74911CA77D11A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_4 = ___anim0;
		int32_t L_5 = ___durationMs3;
		NullCheck(L_4);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_6 = ___anim0;
		Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A* L_7 = ___onValueChanged4;
		NullCheck(L_6);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, Action_2_tCFAD9DC5CF83678682A1102DCD1B12DE9FCA395A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_8 = ___anim0;
		NullCheck(L_8);
		((  void (*) (ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_8, il2cpp_rgctx_method(method->rgctx_data, 5));
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_9 = ___anim0;
		V_0 = L_9;
		goto IL_002d;
	}

IL_002d:
	{
		ValueAnimation_1_t639ABF37111B0184CCB3DE2F577E466F04B28FAC* L_10 = V_0;
		return L_10;
	}
}
// System.Void UnityEngine.UIElements.VisualTreeUpdater::SetUpdater<System.Object>(UnityEngine.UIElements.VisualTreeUpdatePhase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void VisualTreeUpdater_SetUpdater_TisRuntimeObject_m8476DF92DC347257A6AFCA48272BE51985407784_gshared (VisualTreeUpdater_tFDE7D9F9A146A26B2ED69565B7BD142B416AB9C9* __this, int32_t ___phase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_0 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_1 = ___phase0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = UpdaterArray_get_Item_m6DADA11557BD3FE2E6680F3C1F6F828DB4EE255C(L_0, L_1, NULL);
		RuntimeObject* L_3 = L_2;
		G_B1_0 = L_3;
		if (L_3)
		{
			G_B2_0 = L_3;
			goto IL_0013;
		}
	}
	{
		goto IL_0019;
	}

IL_0013:
	{
		NullCheck((RuntimeObject*)G_B2_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)G_B2_0);
	}

IL_0019:
	{
		RuntimeObject* L_4;
		L_4 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_1 = L_4;
		BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* L_5 = (BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303*)__this->___m_Panel_0;
		NullCheck((RuntimeObject*)(V_1));
		InterfaceActionInvoker1< BaseVisualElementPanel_tE3811F3D1474B72CB6CD5BCEECFF5B5CBEC1E303* >::Invoke(0 /* System.Void UnityEngine.UIElements.IVisualTreeUpdater::set_panel(UnityEngine.UIElements.BaseVisualElementPanel) */, IVisualTreeUpdater_t4AF1E0B23A6AEFF024F1AC23815089B2495C7F06_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1), L_5);
		RuntimeObject* L_6 = V_1;
		V_0 = L_6;
		UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449* L_7 = (UpdaterArray_tF8D43D2A3598E7C17ABB5308E83FDECF1F36A449*)__this->___m_UpdaterArray_1;
		int32_t L_8 = ___phase0;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_7);
		UpdaterArray_set_Item_m2961BC09E3C22E6D3887BB8E48A367BAEF847A11(L_7, L_8, (RuntimeObject*)L_9, NULL);
		return;
	}
}
// T System.Threading.Volatile::Read<System.Object>(T&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_m1BB143C73CA3A7A5B880A663FEE10E149F0F274F_gshared (RuntimeObject** ___location0, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = (RuntimeObject*)L_1->___Value_0;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
// System.Void System.Threading.Volatile::Write<System.Object>(T&,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mB9B6B04771AC33604CEAD0611ADB13B54869254B_gshared (RuntimeObject** ___location0, RuntimeObject* ___value1, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___location0;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___value1;
		il2cpp_codegen_memory_barrier();
		L_1->___Value_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value_0), (void*)L_2);
		return;
	}
}
// T Vuforia.VuEngine::GetController<System.Object>(Vuforia.VuEngine/CreateControllerDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuEngine_GetController_TisRuntimeObject_mC2AF05F9C39EC19B40F93B784C0355FB8B5A0E8E_gshared (VuEngine_t1F34A373F1915ADEC0EF00456B2A186075AEB8F8* __this, CreateControllerDelegate_1_t0EFF3A593F0A0BC5FC5CC4B18D9430E7FB8B6D56* ___createControllerDelegate0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tF0FBA164C91E7B487CAD1984F10301308A7A88D7_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	VuController_t0E0C6E2A1AE9E9807712554C20C0A0B8B3BB5672* V_0 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___mControllers_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, Type_t*, VuController_t0E0C6E2A1AE9E9807712554C20C0A0B8B3BB5672** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,Vuforia.VuController>::TryGetValue(TKey,TValue&) */, IDictionary_2_tF0FBA164C91E7B487CAD1984F10301308A7A88D7_il2cpp_TypeInfo_var, L_0, L_2, (&V_0));
		if (L_3)
		{
			goto IL_003c;
		}
	}
	{
		CreateControllerDelegate_1_t0EFF3A593F0A0BC5FC5CC4B18D9430E7FB8B6D56* L_4 = ___createControllerDelegate0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = ((  RuntimeObject* (*) (CreateControllerDelegate_1_t0EFF3A593F0A0BC5FC5CC4B18D9430E7FB8B6D56*, VuEngine_t1F34A373F1915ADEC0EF00456B2A186075AEB8F8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_4, __this, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = (VuController_t0E0C6E2A1AE9E9807712554C20C0A0B8B3BB5672*)L_5;
		RuntimeObject* L_6 = (RuntimeObject*)__this->___mControllers_3;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		VuController_t0E0C6E2A1AE9E9807712554C20C0A0B8B3BB5672* L_9 = V_0;
		NullCheck(L_6);
		InterfaceActionInvoker2< Type_t*, VuController_t0E0C6E2A1AE9E9807712554C20C0A0B8B3BB5672* >::Invoke(5 /* System.Void System.Collections.Generic.IDictionary`2<System.Type,Vuforia.VuController>::Add(TKey,TValue) */, IDictionary_2_tF0FBA164C91E7B487CAD1984F10301308A7A88D7_il2cpp_TypeInfo_var, L_6, L_8, L_9);
	}

IL_003c:
	{
		VuController_t0E0C6E2A1AE9E9807712554C20C0A0B8B3BB5672* L_10 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_10, il2cpp_rgctx_data(method->rgctx_data, 3)));
	}
}
// T Vuforia.VuEngineConfigSet::GetConfig<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* VuEngineConfigSet_GetConfig_TisRuntimeObject_m37D1645EF63E71221C59BB36D5D3F301ADFA6256_gshared (VuEngineConfigSet_t1C698EDCA615DE5201BA070ABA21BD81877D7F61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDictionary_2_tB0314DBAE3E6F926B8D08EA76713F9AA574C2274_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___mConfigs_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		NullCheck(L_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker2< bool, Type_t*, RuntimeObject** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Type,Vuforia.IVuEngineConfig>::TryGetValue(TKey,TValue&) */, IDictionary_2_tB0314DBAE3E6F926B8D08EA76713F9AA574C2274_il2cpp_TypeInfo_var, L_0, L_2, (&V_0));
		if (!L_3)
		{
			goto IL_0020;
		}
	}
	{
		RuntimeObject* L_4 = V_0;
		return ((RuntimeObject*)Castclass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 1)));
	}

IL_0020:
	{
		il2cpp_codegen_initobj((&V_1), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_1;
		return L_5;
	}
}
// T Vuforia.VuObservation::GetEnumValue<System.Int32Enum>(System.Nullable`1<T>&,Vuforia.ValueAccessUtils/GetEnumValueDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t VuObservation_GetEnumValue_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m883685D260709FCA597446546BB80B3FD966C665_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* ___enumValue0, GetEnumValueDelegate_1_t21C015BB53B4CCE3507575146E1CE8954FE0242C* ___callback1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* L_0 = ___enumValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* L_2 = ___enumValue0;
		intptr_t L_3 = (intptr_t)__this->___mNativeHandle_0;
		GetEnumValueDelegate_1_t21C015BB53B4CCE3507575146E1CE8954FE0242C* L_4 = ___callback1;
		int32_t L_5;
		L_5 = ((  int32_t (*) (intptr_t, GetEnumValueDelegate_1_t21C015BB53B4CCE3507575146E1CE8954FE0242C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 1));
		Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m5100B58428BDAD8C79F3D8576B0C2E1D4F3924EB((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14*)L_2 = L_6;
	}

IL_001f:
	{
		Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* L_7 = ___enumValue0;
		int32_t L_8;
		L_8 = Nullable_1_get_Value_m0E81D9B6F2BA5FA17AA4366C5179CD09524FCB60(L_7, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuAnchorObservationInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF VuObservation_GetStructValue_TisVuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF_m32463C3B4A2D6C3B6AC7A7ECC1D822B6B75D84AB_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* ___infoValue0, CreateStructDelegate_1_t4BADA369CEF902626AEAE2C31531EEB2B626816F* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m68659E9B6E199B179AF3008FBC77269223E12035_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* L_2 = ___infoValue0;
		CreateStructDelegate_1_t4BADA369CEF902626AEAE2C31531EEB2B626816F* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF L_5;
		L_5 = ((  VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF (*) (CreateStructDelegate_1_t4BADA369CEF902626AEAE2C31531EEB2B626816F*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mD8CEA78B219EFD20813B36125B66F4EF64A71BC7((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4*)L_2 = L_6;
	}

IL_001f:
	{
		Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* L_7 = ___infoValue0;
		VuAnchorObservationInfo_t992EE41E6137D5E954F9D67431E32C381AE02ADF L_8;
		L_8 = Nullable_1_get_Value_m175C06F4BF0901DD40281BE2BF54D9CE82D372A2(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuAreaTargetObservationTargetInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 VuObservation_GetStructValue_TisVuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8_mF14817241B96ECEAE1033AAB7B9CC75F36FA6C1F_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* ___infoValue0, CreateStructDelegate_1_tAA3D3BB1131C306B4A25758848325061CE76FBED* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m24E40FB5B40D3DE59FF730575C490000DEDB0180_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* L_2 = ___infoValue0;
		CreateStructDelegate_1_tAA3D3BB1131C306B4A25758848325061CE76FBED* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 L_5;
		L_5 = ((  VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 (*) (CreateStructDelegate_1_tAA3D3BB1131C306B4A25758848325061CE76FBED*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mEAB2313BF7188D3F26C171C2F31119898FB9E1F8((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C*)L_2)->___value_1))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C*)L_2)->___value_1))->___name_1), (void*)NULL);
		#endif
	}

IL_001f:
	{
		Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* L_7 = ___infoValue0;
		VuAreaTargetObservationTargetInfo_tCE7D509D755C8A57C2A3E29ED92CB34A22DA64A8 L_8;
		L_8 = Nullable_1_get_Value_mE4F0AD65D60A8374FD621BAFF234A627B3F527B9(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuCloudImageTargetObservationTargetInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F VuObservation_GetStructValue_TisVuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F_mBE6508A06E9C08BD9F8922841C6E18A7D5EE4AF4_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* ___infoValue0, CreateStructDelegate_1_tB451F16FCBD015F1DF8442EF8A6E3A514875BA6C* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m77763F09827A2FE01D25EE6CC3344B8F5C936821_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* L_2 = ___infoValue0;
		CreateStructDelegate_1_tB451F16FCBD015F1DF8442EF8A6E3A514875BA6C* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F L_5;
		L_5 = ((  VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F (*) (CreateStructDelegate_1_tB451F16FCBD015F1DF8442EF8A6E3A514875BA6C*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mA833CEE0B2ED8C4D9715D69D8094AA31181F27FC((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7*)L_2)->___value_1))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7*)L_2)->___value_1))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7*)L_2)->___value_1))->___metadata_2), (void*)NULL);
		#endif
	}

IL_001f:
	{
		Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* L_7 = ___infoValue0;
		VuCloudImageTargetObservationTargetInfo_tA5722359C01D4BA60FB0E90466A3A00759F8552F L_8;
		L_8 = Nullable_1_get_Value_m5D05FAACC131748578E56AF09D3C334C4A06BB46(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuCylinderTargetObservationTargetInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 VuObservation_GetStructValue_TisVuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196_m8618B46030A758308666A5D679B3EA70F8CFD2E4_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* ___infoValue0, CreateStructDelegate_1_tFBC8CE520AE865303AD475D8F0438F91A50C1B44* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mE4C1883655C69E82A340495CF4BE3A0E9D53556F_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* L_2 = ___infoValue0;
		CreateStructDelegate_1_tFBC8CE520AE865303AD475D8F0438F91A50C1B44* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 L_5;
		L_5 = ((  VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 (*) (CreateStructDelegate_1_tFBC8CE520AE865303AD475D8F0438F91A50C1B44*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m856274D802B3648296EDB608E4E7293DDB247A92((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639*)L_2)->___value_1))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639*)L_2)->___value_1))->___name_1), (void*)NULL);
		#endif
	}

IL_001f:
	{
		Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* L_7 = ___infoValue0;
		VuCylinderTargetObservationTargetInfo_t09B88E331A4D64498520D1F0DACE3824CE155196 L_8;
		L_8 = Nullable_1_get_Value_mBDFECDEBA12FBCF0AAB2AB9EFE735837ED984949(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuIlluminationObservationInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 VuObservation_GetStructValue_TisVuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588_m2C2A8BC58C9730C4FEC5A7CB92CF9D975DAE67A5_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* ___infoValue0, CreateStructDelegate_1_tF45AB3692FE6F8A4415AC89848A892F3A031A879* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m9E39BA295A126DE86ACAEA1C2CA48E74789D6465_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* L_2 = ___infoValue0;
		CreateStructDelegate_1_tF45AB3692FE6F8A4415AC89848A892F3A031A879* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 L_5;
		L_5 = ((  VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 (*) (CreateStructDelegate_1_tF45AB3692FE6F8A4415AC89848A892F3A031A879*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mE1CC9AC367EEB8838FB82AE072AFFAB964A0C705((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2*)L_2 = L_6;
	}

IL_001f:
	{
		Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* L_7 = ___infoValue0;
		VuIlluminationObservationInfo_tACC60DB06AFE0921FA86B03BA92B631955318588 L_8;
		L_8 = Nullable_1_get_Value_m85F863A48A43349578311E723BBA1D1C87E8BC01(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuImageTargetObservationTargetInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC VuObservation_GetStructValue_TisVuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC_mFCE141133758B93FF67B4A2FE18CE44D364CF182_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* ___infoValue0, CreateStructDelegate_1_t240D566F743F448A1A6AA369E7E016B4EEA0C03D* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB06603851D1FA7317BD9612819AA44A8819D53BB_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* L_2 = ___infoValue0;
		CreateStructDelegate_1_t240D566F743F448A1A6AA369E7E016B4EEA0C03D* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC L_5;
		L_5 = ((  VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC (*) (CreateStructDelegate_1_t240D566F743F448A1A6AA369E7E016B4EEA0C03D*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m5E74EB32833C0B00E64C6AAB7645F689B5BD7BCC((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804*)L_2)->___value_1))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804*)L_2)->___value_1))->___name_1), (void*)NULL);
		#endif
	}

IL_001f:
	{
		Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* L_7 = ___infoValue0;
		VuImageTargetObservationTargetInfo_t080329AC4C25613825B482DEEE364CD37930FCDC L_8;
		L_8 = Nullable_1_get_Value_mDE60A0BFAB55A77BD2C28CE3EF2197AF21DC461F(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuMeshObservationInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 VuObservation_GetStructValue_TisVuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863_mBA4620A4D09BF02CCC7EB65080BE961E5AE24202_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* ___infoValue0, CreateStructDelegate_1_t3EDAA16AD9DD5B771784752145396A9B804BDBD7* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mABAF20C163C6203D9E0939628971AA3D97023DE2_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* L_2 = ___infoValue0;
		CreateStructDelegate_1_t3EDAA16AD9DD5B771784752145396A9B804BDBD7* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 L_5;
		L_5 = ((  VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 (*) (CreateStructDelegate_1_t3EDAA16AD9DD5B771784752145396A9B804BDBD7*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m1DF0D9DAB7FF14880E13EF1978B3DBCE51232E60((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC*)L_2)->___value_1))->___meshes_0), (void*)NULL);
	}

IL_001f:
	{
		Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* L_7 = ___infoValue0;
		VuMeshObservationInfo_t17B8971862B18EE83FE90575CDD2B841B7F21863 L_8;
		L_8 = Nullable_1_get_Value_m9BCDBBB61CE97F0A4FD31985593E2CD20AF5FD7B(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuModelTargetObservationStateInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 VuObservation_GetStructValue_TisVuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539_m96538FE8A49A5D0AE5FF240FF15E9F3D8DF039AF_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* ___infoValue0, CreateStructDelegate_1_t740074CFC233D096F98BA627F6C40488DFCC4FD2* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m709BF9548B1BF19959A1EF6468E6BE0877D38A12_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* L_2 = ___infoValue0;
		CreateStructDelegate_1_t740074CFC233D096F98BA627F6C40488DFCC4FD2* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 L_5;
		L_5 = ((  VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 (*) (CreateStructDelegate_1_t740074CFC233D096F98BA627F6C40488DFCC4FD2*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m0B0BE9EF7A03A05C4E2962E2CDCD0AEAF819EF24((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2*)L_2)->___value_1))->___stateName_0), (void*)NULL);
	}

IL_001f:
	{
		Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* L_7 = ___infoValue0;
		VuModelTargetObservationStateInfo_t666552B708DC28D2B4403221691C349801D49539 L_8;
		L_8 = Nullable_1_get_Value_m6A2F6EBED60CB3B30AC7CBF9112DCC56F94D8F78(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuModelTargetObservationTargetInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D VuObservation_GetStructValue_TisVuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D_m5235A2F9E2AD5BC006EBA3B8B69E1EC6DB7BD163_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* ___infoValue0, CreateStructDelegate_1_t464A4064C663996E35CDD4FE99394922891E8737* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mB1C04D7CB1766F8BB54DDE95660D48D180857928_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* L_2 = ___infoValue0;
		CreateStructDelegate_1_t464A4064C663996E35CDD4FE99394922891E8737* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D L_5;
		L_5 = ((  VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D (*) (CreateStructDelegate_1_t464A4064C663996E35CDD4FE99394922891E8737*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m2641A49148D0537B42F073708B7BA3AE99069FFC((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE*)L_2)->___value_1))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE*)L_2)->___value_1))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE*)L_2)->___value_1))->___activeGuideViewName_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE*)L_2)->___value_1))->___activeStateName_9), (void*)NULL);
		#endif
	}

IL_001f:
	{
		Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* L_7 = ___infoValue0;
		VuModelTargetObservationTargetInfo_tD46229257539FC5D4D8C13E82B31A2F6E2C1BA0D L_8;
		L_8 = Nullable_1_get_Value_m07372153BBFD5345D7B78C3014A6A2A48E3B26BE(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuMultiTargetObservationTargetInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA VuObservation_GetStructValue_TisVuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA_mA171CFD922AA9D2364FDA69EF55491FAF9E17C14_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* ___infoValue0, CreateStructDelegate_1_tA7153E42E755017370C102D50E073B15E30479CB* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mF08B15984D4124884FADB24FFB9DFE1F2BC9F335_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* L_2 = ___infoValue0;
		CreateStructDelegate_1_tA7153E42E755017370C102D50E073B15E30479CB* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA L_5;
		L_5 = ((  VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA (*) (CreateStructDelegate_1_tA7153E42E755017370C102D50E073B15E30479CB*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m8F167C2162DA44021B13280C6C1C906CDECDDDCA((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD*)L_2)->___value_1))->___name_0), (void*)NULL);
	}

IL_001f:
	{
		Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* L_7 = ___infoValue0;
		VuMultiTargetObservationTargetInfo_t4D90ADE4A864D67940C51CC53BDAB37B9299A7FA L_8;
		L_8 = Nullable_1_get_Value_m120491333A5B599D5DEEE9D55668A0D8BCB1576C(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuValidationAreaObservationTargetInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B VuObservation_GetStructValue_TisVuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B_mD3D6F7888DD755F95D20F11FFC2B2C88281F262F_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* ___infoValue0, CreateStructDelegate_1_t0A2FADE9465A1B770F9CA2E1F587F3A2D0336848* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m1741B43207EC063AE9A71F7F675513C528DCAF9E_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* L_2 = ___infoValue0;
		CreateStructDelegate_1_t0A2FADE9465A1B770F9CA2E1F587F3A2D0336848* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B L_5;
		L_5 = ((  VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B (*) (CreateStructDelegate_1_t0A2FADE9465A1B770F9CA2E1F587F3A2D0336848*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m199CEAB4AD51C5E270F96D1F8CFFCF1E442B5ACA((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573*)L_2)->___value_1))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573*)L_2)->___value_1))->___name_1), (void*)NULL);
		#endif
	}

IL_001f:
	{
		Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* L_7 = ___infoValue0;
		VuValidationAreaObservationTargetInfo_t6984711B80994818B2F4DD43148F2CC7B626679B L_8;
		L_8 = Nullable_1_get_Value_m5A10E4D1F28A975EA94968EED4BD4B6A1610A2F9(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuValidationAreaObservationTrainingInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED VuObservation_GetStructValue_TisVuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED_m1B8A304E64BE474C246A74B5343F5A3108D9BBDA_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* ___infoValue0, CreateStructDelegate_1_t5307CDE64C29A8E83E4021A3D0D2070B1B02D3B7* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mBD79FFC769064FDA55DF8C807072F1A804E44E7B_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* L_2 = ___infoValue0;
		CreateStructDelegate_1_t5307CDE64C29A8E83E4021A3D0D2070B1B02D3B7* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED L_5;
		L_5 = ((  VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED (*) (CreateStructDelegate_1_t5307CDE64C29A8E83E4021A3D0D2070B1B02D3B7*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mE33D7D58467595A5F21110C4FAE209A8D107C372((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB*)L_2 = L_6;
	}

IL_001f:
	{
		Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* L_7 = ___infoValue0;
		VuValidationAreaObservationTrainingInfo_t5375FAD9710D495F771AB3AD59B4EDB800C086ED L_8;
		L_8 = Nullable_1_get_Value_m4A7907D3B3DFE173695A7E4934B6BDA50AEA6B41(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuValidationAreaObservationValidationInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 VuObservation_GetStructValue_TisVuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860_m2DC81B8B9AE5049DB8A9ECD867BCA21FAFA618B3_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* ___infoValue0, CreateStructDelegate_1_t4DB130F0417ECF57ED0339FBB74DCBA3ACD32C4D* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mD019096B51EAF8491D25A9FD726F699CFD58D3AB_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* L_2 = ___infoValue0;
		CreateStructDelegate_1_t4DB130F0417ECF57ED0339FBB74DCBA3ACD32C4D* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 L_5;
		L_5 = ((  VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 (*) (CreateStructDelegate_1_t4DB130F0417ECF57ED0339FBB74DCBA3ACD32C4D*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mAD9A1EFB57A30A7BA1F8773FD768BAEB1B736A96((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93*)L_2)->___value_1))->___labelName_0), (void*)NULL);
	}

IL_001f:
	{
		Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* L_7 = ___infoValue0;
		VuValidationAreaObservationValidationInfo_tFFA4F6D02658485AFD2F6D2634320D67B60B3860 L_8;
		L_8 = Nullable_1_get_Value_mD3B57BE271C72003BA54AA7AE82A50E27BA60C59(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuVirtualButtonObservationInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C VuObservation_GetStructValue_TisVuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C_m7BACB51B62C65C0F4EFEB39E49F5B56E568C3D10_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* ___infoValue0, CreateStructDelegate_1_t6A358525972DB69F85A1355F5FA4209D9813D11C* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m117FBA6ABEEECFD1CB3B0B949E38D419F624BE52_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* L_2 = ___infoValue0;
		CreateStructDelegate_1_t6A358525972DB69F85A1355F5FA4209D9813D11C* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C L_5;
		L_5 = ((  VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C (*) (CreateStructDelegate_1_t6A358525972DB69F85A1355F5FA4209D9813D11C*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_mC61BD92D5FEA9DBEE1415ADDDF93043320AF62DA((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6*)L_2 = L_6;
	}

IL_001f:
	{
		Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* L_7 = ___infoValue0;
		VuVirtualButtonObservationInfo_tC428FA16E3DC275D3964E3EEDE53EC139FECF27C L_8;
		L_8 = Nullable_1_get_Value_m2645033B881A367BED1B897A67E33FEE27088AA7(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuVuMarkObservationInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 VuObservation_GetStructValue_TisVuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34_m2E0EE1ED807B0B5BDE354844586719BD4A267BA3_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* ___infoValue0, CreateStructDelegate_1_tEC00F17F9804B9DD6895037C6A3A770B82AD141B* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_mA069BABA222DBC5642A85E34D280EBE5B02D74AE_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* L_2 = ___infoValue0;
		CreateStructDelegate_1_tEC00F17F9804B9DD6895037C6A3A770B82AD141B* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 L_5;
		L_5 = ((  VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 (*) (CreateStructDelegate_1_tEC00F17F9804B9DD6895037C6A3A770B82AD141B*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m200FB9E3CE3B285829E26CB1B9E3241CA3FD97F0((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8*)L_2 = L_6;
	}

IL_001f:
	{
		Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* L_7 = ___infoValue0;
		VuVuMarkObservationInfo_t1368EB7F12FB0CE19B3631E43975A8B9DFEC0B34 L_8;
		L_8 = Nullable_1_get_Value_mCE723867FACF515DE5E685CA6483887ECD0CB323(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuVuMarkObservationInstanceInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 VuObservation_GetStructValue_TisVuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519_mE874F587656F32DB9C542CF3CF62795B7C857B46_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* ___infoValue0, CreateStructDelegate_1_t4FAC0D9B72B2A0CCCE7B77BEEB0ED3D5D8BB992D* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m36097ED2550D367B01E649CAED7826B4463533C4_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* L_2 = ___infoValue0;
		CreateStructDelegate_1_t4FAC0D9B72B2A0CCCE7B77BEEB0ED3D5D8BB992D* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 L_5;
		L_5 = ((  VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 (*) (CreateStructDelegate_1_t4FAC0D9B72B2A0CCCE7B77BEEB0ED3D5D8BB992D*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093 L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m7599B990A7FB1FE6110D2587E3B0C6CFAC5264F3((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093*)L_2)->___value_1))->___buffer_1), (void*)NULL);
	}

IL_001f:
	{
		Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* L_7 = ___infoValue0;
		VuVuMarkObservationInstanceInfo_t16C259012F500B7E2CA0C8AEE57F8E82067DE519 L_8;
		L_8 = Nullable_1_get_Value_m5AA5B0FF5A83F4D4DC3786DA74FE8895C75EDC87(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// T Vuforia.VuObservation::GetStructValue<Vuforia.VuVuMarkObservationTemplateInfo>(System.Nullable`1<T>&,Vuforia.VuObservation/CreateStructDelegate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF VuObservation_GetStructValue_TisVuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF_mB4398749E23C61EE01CC3627DA73995B3C40F58E_gshared (VuObservation_tF3C656C117A5A9B97D03528A95D6C91587107631* __this, Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* ___infoValue0, CreateStructDelegate_1_t630E530516EF2B0D93DA69D9AD22811C64BEF666* ___createDelegate1, const RuntimeMethod* method) 
{
	{
		Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* L_0 = ___infoValue0;
		bool L_1;
		L_1 = Nullable_1_get_HasValue_m2A82D51003825E59CB150365B54EAE49218217FA_inline(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (L_1)
		{
			goto IL_001f;
		}
	}
	{
		Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* L_2 = ___infoValue0;
		CreateStructDelegate_1_t630E530516EF2B0D93DA69D9AD22811C64BEF666* L_3 = ___createDelegate1;
		intptr_t L_4 = (intptr_t)__this->___mNativeHandle_0;
		NullCheck(L_3);
		VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF L_5;
		L_5 = ((  VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF (*) (CreateStructDelegate_1_t630E530516EF2B0D93DA69D9AD22811C64BEF666*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC L_6;
		memset((&L_6), 0, sizeof(L_6));
		Nullable_1__ctor_m328A5841731ECB9304C899B87A2C56B4A05E9F0A((&L_6), L_5, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 4));
		*(Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC*)L_2 = L_6;
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC*)L_2)->___value_1))->___uniqueId_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC*)L_2)->___value_1))->___name_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&((&(((Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC*)L_2)->___value_1))->___userData_2), (void*)NULL);
		#endif
	}

IL_001f:
	{
		Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* L_7 = ___infoValue0;
		VuVuMarkObservationTemplateInfo_tAD8DCB6F657F5611FD209B4CCDCE508225F63BAF L_8;
		L_8 = Nullable_1_get_Value_m695027E830AEC400234BC3D4DEEAFB1517B12918(L_7, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Vuforia.World::GetObserverBehaviours<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* World_GetObserverBehaviours_TisRuntimeObject_m1D1845435F1AF4719A3A3E0301E8B8CCBA418510_gshared (World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserverRegistry_tF348538635CECA2D834952442BB63123A2C411A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___mObserverRegistry_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerable`1<Vuforia.ObserverBehaviour> Vuforia.IObserverRegistry::GetAllObserverBehaviours() */, IObserverRegistry_tF348538635CECA2D834952442BB63123A2C411A1_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_2;
	}
}
// System.Collections.Generic.IEnumerable`1<T> Vuforia.World::GetTrackedObserverBehaviours<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* World_GetTrackedObserverBehaviours_TisRuntimeObject_m77764BE3D8BBA2B41D1D7138CF668B7C7EF14AD8_gshared (World_t0332C3F77BBFBA826A13D263DAED199D01BCE050* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IObserverRegistry_tF348538635CECA2D834952442BB63123A2C411A1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->___mObserverRegistry_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerable`1<Vuforia.ObserverBehaviour> Vuforia.IObserverRegistry::GetAllObserverBehaviours() */, IObserverRegistry_tF348538635CECA2D834952442BB63123A2C411A1_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2;
		L_2 = ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_3 = ((U3CU3Ec__30_1_tE3EC5F18092BCC33760D3E196E766A0300A26F46_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__30_0_1;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_4 = L_3;
		G_B1_0 = L_4;
		G_B1_1 = L_2;
		if (L_4)
		{
			G_B2_0 = L_4;
			G_B2_1 = L_2;
			goto IL_002f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 1));
		U3CU3Ec__30_1_tE3EC5F18092BCC33760D3E196E766A0300A26F46* L_5 = ((U3CU3Ec__30_1_tE3EC5F18092BCC33760D3E196E766A0300A26F46_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9_0;
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_6 = (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_6);
		((  void (*) (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_6, (RuntimeObject*)L_5, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 4));
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_7 = L_6;
		((U3CU3Ec__30_1_tE3EC5F18092BCC33760D3E196E766A0300A26F46_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__30_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec__30_1_tE3EC5F18092BCC33760D3E196E766A0300A26F46_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 1)))->___U3CU3E9__30_0_1), (void*)L_7);
		G_B2_0 = L_7;
		G_B2_1 = G_B1_1;
	}

IL_002f:
	{
		RuntimeObject* L_8;
		L_8 = ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(G_B2_1, G_B2_0, il2cpp_rgctx_method(method->rgctx_data, 5));
		return L_8;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<System.Int32>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF5E8EBDA8E541ED50222F434364940A039EFB20C_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* ___array2, bool ___shouldExist3, const RuntimeMethod* method) 
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_6 = ___array2;
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_10), L_8, L_9, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mB7BB23924A114599D399A5EC6C00B2B6407CF66D((&L_14), L_12, L_13, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m547C5D2E203906703FFE7232167A21D2A03D54C0(L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C* L_17 = ___array2;
		NativeArray_1_Dispose_m05C674E687B921C37722A6A1FF938FD56574642E(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mDA7FB5B391044BA335012E17763A573C611620C4_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___array2, bool ___shouldExist3, const RuntimeMethod* method) 
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_10), L_8, L_9, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_14), L_12, L_13, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_17 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRFaceMesh::Resize<UnityEngine.Vector3>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRFaceMesh_Resize_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m5103EAB72201E9277FB1E6338D2E19D3EF69480C_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* ___array2, bool ___shouldExist3, const RuntimeMethod* method) 
{
	{
		// if (shouldExist)
		bool L_0 = ___shouldExist3;
		if (!L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (array.IsCreated)
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_1 = ___array2;
		bool L_2;
		L_2 = NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9(L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_2)
		{
			goto IL_0029;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_3 = ___array2;
		int32_t L_4;
		L_4 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_3)->___m_Length_1);
		int32_t L_5 = ___length0;
		if ((((int32_t)L_4) == ((int32_t)L_5)))
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_6 = ___array2;
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC(L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_7 = ___array2;
		int32_t L_8 = ___length0;
		int32_t L_9 = ___allocator1;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_10;
		memset((&L_10), 0, sizeof(L_10));
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&L_10), L_8, L_9, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_7 = L_10;
		return;
	}

IL_0029:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_11 = ___array2;
		int32_t L_12 = ___length0;
		int32_t L_13 = ___allocator1;
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD L_14;
		memset((&L_14), 0, sizeof(L_14));
		NativeArray_1__ctor_mD6D2D9E805E66DA9D5A8766ADB32AE63A4D306D0((&L_14), L_12, L_13, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD*)L_11 = L_14;
		return;
	}

IL_0038:
	{
		// else if (array.IsCreated)
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_15 = ___array2;
		bool L_16;
		L_16 = NativeArray_1_get_IsCreated_m4C7111E17A3D26D147222F544FFE7A1F4F3D7DE9(L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_16)
		{
			goto IL_0046;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t97E2BFD61E13EEF2CDE34A313415FAD03AB993FD* L_17 = ___array2;
		NativeArray_1_Dispose_mBC28A2733A6D979B9AFD3CE09FE8E9A2A8F7DEEC(L_17, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_0046:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateIntegratedSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateIntegratedSubsystem_TisRuntimeObject_TisRuntimeObject_mBAF3746971CDCF6B58182FF66E5A2B681461DFC7_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateStandaloneSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateStandaloneSubsystem_TisRuntimeObject_TisRuntimeObject_m4A018972895E62D6EF6C8AED44E9F620D5A14199_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	{
		// CreateSubsystem<TDescriptor, TSubsystem>(descriptors, id);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		String_t* L_1 = ___id1;
		((  void (*) (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC*, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, String_t*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(__this, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 0));
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<TDescriptor>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* ___descriptors0, String_t* ___id1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// if (descriptors == null)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_0 = ___descriptors0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException("descriptors");
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral4484D73E5D13E98119AFD8332CD8BC78758E004F)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FA794B59AA23B850EE0DF5DA0776E9DD231D768_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemManager.GetSubsystemDescriptors<TDescriptor>(descriptors);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = ___descriptors0;
		il2cpp_codegen_runtime_class_init_inline(SubsystemManager_t9A7261E4D0B53B996F04B8707D8E1C33AB65E824_il2cpp_TypeInfo_var);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		// if (descriptors.Count > 0)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = ___descriptors0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = ((  int32_t (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		if ((((int32_t)L_4) <= ((int32_t)0)))
		{
			goto IL_0088;
		}
	}
	{
		// foreach (var descriptor in descriptors)
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_5 = ___descriptors0;
		NullCheck(L_5);
		Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A L_6;
		L_6 = ((  Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_0 = L_6;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_007a:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419((&V_0), il2cpp_rgctx_method(method->rgctx_data, 11));
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_006f_1;
			}

IL_0026_1:
			{
				// foreach (var descriptor in descriptors)
				RuntimeObject* L_7;
				L_7 = Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_inline((&V_0), il2cpp_rgctx_method(method->rgctx_data, 4));
				V_1 = L_7;
				// ISubsystem subsys = null;
				V_2 = (RuntimeObject*)NULL;
				// if (String.Compare(descriptor.id, id, true) == 0)
				NullCheck((RuntimeObject*)(V_1));
				String_t* L_8;
				L_8 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String UnityEngine.ISubsystemDescriptor::get_id() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				String_t* L_9 = ___id1;
				int32_t L_10;
				L_10 = String_Compare_mA1B6FACF0E4A9B45FFECF215BF15A040C2DA9A34(L_8, L_9, (bool)1, NULL);
				if (L_10)
				{
					goto IL_0054_1;
				}
			}
			{
				// subsys = descriptor.Create();
				NullCheck((RuntimeObject*)(V_1));
				RuntimeObject* L_11;
				L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* UnityEngine.ISubsystem UnityEngine.ISubsystemDescriptor::Create() */, ISubsystemDescriptor_tEF29944D579CC7D70F52CB883150735991D54E6E_il2cpp_TypeInfo_var, (RuntimeObject*)(V_1));
				V_2 = L_11;
			}

IL_0054_1:
			{
				// if (subsys != null)
				RuntimeObject* L_12 = V_2;
				if (!L_12)
				{
					goto IL_006f_1;
				}
			}
			{
				// m_SubsystemInstanceMap[typeof(TSubsystem)] = subsys;
				Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_13 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 8)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_15;
				L_15 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_14, NULL);
				RuntimeObject* L_16 = V_2;
				NullCheck(L_13);
				Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6(L_13, L_15, L_16, Dictionary_2_set_Item_m270330E4DF54B386E40D0D8ADB494D2154BFAEA6_RuntimeMethod_var);
				// break;
				goto IL_0088;
			}

IL_006f_1:
			{
				// foreach (var descriptor in descriptors)
				bool L_17;
				L_17 = Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB((&V_0), il2cpp_rgctx_method(method->rgctx_data, 9));
				if (L_17)
				{
					goto IL_0026_1;
				}
			}
			{
				goto IL_0088;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0088:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mF0CB81C6BD9DA12D6E8C21703A18E939389A1185_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0040;
		}
	}
	{
		// var subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 2)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		V_1 = L_3;
		// if (m_SubsystemInstanceMap.ContainsKey(subsystemType))
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_4 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_5 = V_1;
		NullCheck(L_4);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838(L_4, L_5, Dictionary_2_ContainsKey_m3F7775FD709C51A6BE72CC396BE99B54AABFC838_RuntimeMethod_var);
		if (!L_6)
		{
			goto IL_0035;
		}
	}
	{
		// m_SubsystemInstanceMap.Remove(subsystemType);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_7 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_8 = V_1;
		NullCheck(L_7);
		bool L_9;
		L_9 = Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533(L_7, L_8, Dictionary_2_Remove_m43D52DDA7DA0A3D503639697D7DF5190D1EC7533_RuntimeMethod_var);
	}

IL_0035:
	{
		// subsystem.Destroy();
		RuntimeObject* L_10 = V_0;
		NullCheck((RuntimeObject*)L_10);
		InterfaceActionInvoker0::Invoke(2 /* System.Void UnityEngine.ISubsystem::Destroy() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_10);
	}

IL_0040:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRLoaderHelper::GetLoadedSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRLoaderHelper_GetLoadedSubsystem_TisRuntimeObject_mA4965EC76CEF5709AA6B2611C065E12BD5CA8ACB_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// Type subsystemType = typeof(T);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		V_0 = L_1;
		// m_SubsystemInstanceMap.TryGetValue(subsystemType, out subsystem);
		Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C* L_2 = (Dictionary_2_tCDC65F572855EBDD1C12CEE33EBEBE0131F60C9C*)__this->___m_SubsystemInstanceMap_4;
		Type_t* L_3 = V_0;
		NullCheck(L_2);
		bool L_4;
		L_4 = Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682(L_2, L_3, (&V_1), Dictionary_2_TryGetValue_mE7515E1F06C8648C4ABD1F212BF6419F50241682_RuntimeMethod_var);
		// return subsystem as T;
		RuntimeObject* L_5 = V_1;
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_5, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_mC3EF63B68F73D6809F68E225847BB59D472A2EA5_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Start();
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(0 /* System.Void UnityEngine.ISubsystem::Start() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m26C61BBD9562F521BC7DE34ABC8E6AA01E656572_gshared (XRLoaderHelper_tE96E7AE003148D5319D20BAD7E02654367E41DCC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	{
		// T subsystem = GetLoadedSubsystem<T>();
		RuntimeObject* L_0;
		L_0 = GenericVirtualFuncInvoker0< RuntimeObject* >::Invoke(il2cpp_rgctx_method(method->rgctx_data, 0), __this);
		V_0 = L_0;
		// if (subsystem != null)
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// subsystem.Stop();
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void UnityEngine.ISubsystem::Stop() */, ISubsystem_t20F8E773FE1B915229571E9F78B3BC95C9E1CB67_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
	}

IL_001a:
	{
		// }
		return;
	}
}
// T UnityEngine.XR.Management.XRManagerSettings::ActiveLoaderAs<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRManagerSettings_ActiveLoaderAs_TisRuntimeObject_m9672E32C32CA1F82DB7CE86C58E9B91C5A8983CD_gshared (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// return activeLoader as T;
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0;
		L_0 = XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline(__this, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_0, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_mEFF29A08454562CD313544172844155FC3DA8484_gshared (String_t* ___id0, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisRuntimeObject_mEFF29A08454562CD313544172844155FC3DA8484_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRObjectTrackingSubsystemDescriptor(id, typeof(T), null, capabilities));
		String_t* L_2 = ___id0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B L_5 = ___capabilities1;
		XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* L_6 = (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3*)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B(L_6, L_2, L_4, (Type_t*)NULL, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_6, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystem::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRObjectTrackingSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mE154678655BCC91DEF9066CD3778B90EF9BBD1F8_gshared (String_t* ___id0, Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (id == null)
		String_t* L_0 = ___id0;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		// throw new ArgumentNullException(nameof(id));
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		NullCheck(L_1);
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral996E5360F80E16B2189CC1E536C91CE68083F694)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&XRObjectTrackingSubsystem_Register_TisRuntimeObject_TisRuntimeObject_mE154678655BCC91DEF9066CD3778B90EF9BBD1F8_RuntimeMethod_var)));
	}

IL_000e:
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRObjectTrackingSubsystemDescriptor(id, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_2 = ___id0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_5, NULL);
		Capabilities_t74B96FD5AC8243C251D7CD8DD3F08DAFF2CF8A1B L_7 = ___capabilities1;
		XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3* L_8 = (XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3*)il2cpp_codegen_object_new(XRObjectTrackingSubsystemDescriptor_t21DB07F1D28AC1D369BB28EA12003F12F57AE5F3_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		XRObjectTrackingSubsystemDescriptor__ctor_m2177FCC9E1AFC3E173E078744766BFA8FF45BE5B(L_8, L_2, L_4, L_6, L_7, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_8, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_m5C5A1E0A94F9775C745E9A0F1A78FC167A70C55E_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(T), null, capabilities));
		String_t* L_0 = ___subsystemId0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		int32_t L_3 = ___capabilities1;
		XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* L_4 = (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE*)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3(L_4, L_0, L_2, (Type_t*)NULL, L_3, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_4, NULL);
		// }
		return;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor::Register<System.Object,System.Object>(System.String,UnityEngine.XR.ARSubsystems.XRParticipantSubsystemDescriptor/Capabilities)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRParticipantSubsystemDescriptor_Register_TisRuntimeObject_TisRuntimeObject_mFCA3769680E42CC832737093EBD36F919D098C50_gshared (String_t* ___subsystemId0, int32_t ___capabilities1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SubsystemDescriptorStore.RegisterDescriptor(new XRParticipantSubsystemDescriptor(subsystemId, typeof(TProvider), typeof(TSubsystemOverride), capabilities));
		String_t* L_0 = ___subsystemId0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_3, NULL);
		int32_t L_5 = ___capabilities1;
		XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE* L_6 = (XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE*)il2cpp_codegen_object_new(XRParticipantSubsystemDescriptor_t2852FEA32C67D29993952B64E2C2C20EA8D8FDCE_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		XRParticipantSubsystemDescriptor__ctor_m1629BC38262CF3786A0C4A765B0653D3038D4DB3(L_6, L_0, L_2, L_4, L_5, NULL);
		il2cpp_codegen_runtime_class_init_inline(SubsystemDescriptorStore_tEF3761B84B8C25EA4B93F94A487551820B268250_il2cpp_TypeInfo_var);
		SubsystemDescriptorStore_RegisterDescriptor_mBCFAF0DE737C77AC4558C27771B36354A028ED9F((SubsystemDescriptorWithProvider_t2A61A2C951A4A179E898CF207726BF6B5AF474D5*)L_6, NULL);
		// }
		return;
	}
}
// T UnityEngine.XR.ARSubsystems.XRReferenceObject::FindEntry<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_gshared (XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public T FindEntry<T>() where T : XRReferenceObjectEntry => FindEntry(typeof(T)) as T;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		XRReferenceObjectEntry_tE9C5C110D54F8EC427989EDB23525007F6016FBA* L_2;
		L_2 = XRReferenceObject_FindEntry_mFF9C29CCCDF7BA08B307B787DF83EF8F27B6017C(__this, L_1, NULL);
		return ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 1))), il2cpp_rgctx_data(method->rgctx_data, 1)));
	}
}
IL2CPP_EXTERN_C  RuntimeObject* XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31_AdjustorThunk (RuntimeObject* __this, const RuntimeMethod* method)
{
	XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14* _thisAdjusted;
	int32_t _offset = 1;
	_thisAdjusted = reinterpret_cast<XRReferenceObject_tDC04E77BBDCC6428C8B852A7CF1208DD2AF9AE14*>(__this + _offset);
	RuntimeObject* _returnValue;
	_returnValue = XRReferenceObject_FindEntry_TisRuntimeObject_m9EF6DD3ED4041B3110096891744953F0193C9D31(_thisAdjusted, method);
	return _returnValue;
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Boolean>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* XmlListConverter_ToArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m86B8C1BAE24C52F86600E90AE9B16FC865C37BB6_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* V_1 = NULL;
	BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_4 = (BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)(BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (bool)((*(bool*)((bool*)(bool*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_21 = (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, bool, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(bool*)((bool*)(bool*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A* L_37 = V_1;
		NullCheck(L_37);
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_38;
		L_38 = ((  BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* (*) (List_1_t01207CE5982A7640E56B1F9F672A06F96B09367A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Byte>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* XmlListConverter_ToArray_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6C49120D2D0AF3F8183B697B5C21CE39102461FC_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* V_1 = NULL;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_4 = (ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)(ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint8_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_21 = (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, uint8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B* L_37 = V_1;
		NullCheck(L_37);
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_38;
		L_38 = ((  ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* (*) (List_1_t7D15BE3246500BBF1A24C24DBF963B89A876255B*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTime>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* XmlListConverter_ToArray_TisDateTime_t66193957C73913903DDAD89FEDC46139BCA5802D_m70FF116BB5D6279558D03AC6F6CE09493E43E48B_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* V_1 = NULL;
	DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_4 = (DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1*)(DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D)((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_21 = (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)((DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)(DateTime_t66193957C73913903DDAD89FEDC46139BCA5802D*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0* L_37 = V_1;
		NullCheck(L_37);
		DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* L_38;
		L_38 = ((  DateTimeU5BU5D_t8F9285FE729A200A620421ED546CFB3DCF386EA1* (*) (List_1_tB02B18D095115D4107200D52B2D4E4126519DBF0*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.DateTimeOffset>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* XmlListConverter_ToArray_TisDateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4_mFC43A6F4F474A2D1F8932295447B8FBBE9A3D164_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* V_1 = NULL;
	DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_4 = (DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E*)(DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4)((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* L_21 = (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13*, DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)((DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)(DateTimeOffset_t4EE701FE2F386D6F932FAC9B11E4B74A5B30F0A4*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t78D17974730334A3A9B24E41C74B9F638882BE13* L_37 = V_1;
		NullCheck(L_37);
		DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* L_38;
		L_38 = ((  DateTimeOffsetU5BU5D_t4B1B162A847F71BD683074F71C599EF82CA8235E* (*) (List_1_t78D17974730334A3A9B24E41C74B9F638882BE13*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Decimal>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* XmlListConverter_ToArray_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_m235B2DD2FA5988885EB6CD816947DA42EBDCB048_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* V_1 = NULL;
	DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_4 = (DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615*)(DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F)((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* L_21 = (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35*, Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)((Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)(Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t3B9A886482AE1A521B03F1658F080A2585035C35* L_37 = V_1;
		NullCheck(L_37);
		DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* L_38;
		L_38 = ((  DecimalU5BU5D_t93BA0C88FA80728F73B792EE1A5199D0C060B615* (*) (List_1_t3B9A886482AE1A521B03F1658F080A2585035C35*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Double>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* XmlListConverter_ToArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m19E665AADEE3C053EAFCF2616DCD76CA764F1688_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t495F03F47D827883530F951D563C0BB7340E5995* V_1 = NULL;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_4 = (DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)(DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (double)((*(double*)((double*)(double*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_21 = (List_1_t495F03F47D827883530F951D563C0BB7340E5995*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, double, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(double*)((double*)(double*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t495F03F47D827883530F951D563C0BB7340E5995* L_37 = V_1;
		NullCheck(L_37);
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_38;
		L_38 = ((  DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* (*) (List_1_t495F03F47D827883530F951D563C0BB7340E5995*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* XmlListConverter_ToArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF8FE668F3B3FC4EE8E286199832133B161BF3BB7_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* V_1 = NULL;
	Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_4 = (Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)(Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int16_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* L_21 = (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, int16_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C* L_37 = V_1;
		NullCheck(L_37);
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_38;
		L_38 = ((  Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* (*) (List_1_t36734ACA044956B5B61977FA4D7D11B59AB0202C*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* XmlListConverter_ToArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m07FAC8C4A8AA47D61A21F09BF6DA7EB24033F7D2_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* V_1 = NULL;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_4 = (Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)(Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_21 = (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* L_37 = V_1;
		NullCheck(L_37);
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_38;
		L_38 = ((  Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* (*) (List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Int64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* XmlListConverter_ToArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mFF076DEF2D57F8738FF014F637D152B274450A65_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* V_1 = NULL;
	Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_4 = (Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)(Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_21 = (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*, int64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tF9D88C946600C782EE786A252258C0AA97BD019A* L_37 = V_1;
		NullCheck(L_37);
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_38;
		L_38 = ((  Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* (*) (List_1_tF9D88C946600C782EE786A252258C0AA97BD019A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Object>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* XmlListConverter_ToArray_TisRuntimeObject_mE88B7F8005AC5A0140F7327BFF258520169C0E5D_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_1 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)(ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)((RuntimeObject*)Castclass((RuntimeObject*)L_14, il2cpp_rgctx_data(method->rgctx_data, 2))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_21 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((RuntimeObject*)Castclass((RuntimeObject*)L_34, il2cpp_rgctx_data(method->rgctx_data, 2))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_37 = V_1;
		NullCheck(L_37);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_38;
		L_38 = ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.SByte>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* XmlListConverter_ToArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m2B0DD5207360132A1EE6D8F45299140B885B3120_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* V_1 = NULL;
	SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_4 = (SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)(SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (int8_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* L_21 = (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, int8_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC* L_37 = V_1;
		NullCheck(L_37);
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_38;
		L_38 = ((  SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* (*) (List_1_t640FAF5655E936ED6904C052B506D9C41B4C01EC*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.Single>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* XmlListConverter_ToArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m00F5498BA708A54737154E9CCB62E77A725F10F7_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* V_1 = NULL;
	SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_4 = (SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)(SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (float)((*(float*)((float*)(float*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_21 = (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, float, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(float*)((float*)(float*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918* L_37 = V_1;
		NullCheck(L_37);
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_38;
		L_38 = ((  SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* (*) (List_1_t0D1C46FD8DDDE974D93CA4F3474EEC05AF950918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.TimeSpan>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* XmlListConverter_ToArray_TisTimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A_m872BD5656AD2E846B6FDC61B1E52C702E658D3F4_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* V_1 = NULL;
	TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_4 = (TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)(TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A)((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* L_21 = (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)((TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)(TimeSpan_t8195C5B013A2C532FEBDF0B64B6911982E750F5A*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59* L_37 = V_1;
		NullCheck(L_37);
		TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* L_38;
		L_38 = ((  TimeSpanU5BU5D_tC920B81B0E6DCA110DB9D62B5C3850B4BECB87E6* (*) (List_1_tEC89FC50F70542ABB089B7EE159B57C5071F2F59*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt16>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* XmlListConverter_ToArray_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mFF18A05C02B2E1B9E08A19D9169D1634ED908954_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* V_1 = NULL;
	UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_4 = (UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)(UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint16_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_21 = (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, uint16_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t44EF1B9C71532303037AAC259AD8D405401724D8* L_37 = V_1;
		NullCheck(L_37);
		UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* L_38;
		L_38 = ((  UInt16U5BU5D_tEB7C42D811D999D2AA815BADC3FCCDD9C67B3F83* (*) (List_1_t44EF1B9C71532303037AAC259AD8D405401724D8*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt32>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* XmlListConverter_ToArray_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mD56FF6DFE5BDF6529D63B90C76A0D84898EEF049_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* V_1 = NULL;
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_4 = (UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)(UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_21 = (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, uint32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A* L_37 = V_1;
		NullCheck(L_37);
		UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* L_38;
		L_38 = ((  UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* (*) (List_1_t9B68833848E4C4D7F623C05F6B77F0449396354A*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// T[] System.Xml.Schema.XmlListConverter::ToArray<System.UInt64>(System.Object,System.Xml.IXmlNamespaceResolver)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* XmlListConverter_ToArray_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_m0E3ADF0E3B37194518A4B2D7FB0A2E0830FF1234_gshared (XmlListConverter_tF5EAB0EA04FAA85A67E0925163DC0F1C3EBA55FA* __this, RuntimeObject* ___list0, RuntimeObject* ___nsResolver1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* V_1 = NULL;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* V_2 = NULL;
	int32_t V_3 = 0;
	RuntimeObject* V_4 = NULL;
	RuntimeObject* V_5 = NULL;
	RuntimeObject* V_6 = NULL;
	{
		RuntimeObject* L_0 = ___list0;
		V_0 = ((RuntimeObject*)IsInst((RuntimeObject*)L_0, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_2 = V_0;
		NullCheck((RuntimeObject*)L_2);
		int32_t L_3;
		L_3 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_2);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_4 = (UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)(UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299*)SZArrayNew(il2cpp_rgctx_data(method->rgctx_data, 0), (uint32_t)L_3);
		V_2 = L_4;
		V_3 = 0;
		goto IL_0047;
	}

IL_001a:
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_5 = V_2;
		int32_t L_6 = V_3;
		XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_7 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
		RuntimeObject* L_8 = V_0;
		int32_t L_9 = V_3;
		NullCheck(L_8);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(0 /* System.Object System.Collections.IList::get_Item(System.Int32) */, IList_t1C522956D79B7DC92B5B01053DF1AC058C8B598D_il2cpp_TypeInfo_var, L_8, L_9);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_11, NULL);
		RuntimeObject* L_13 = ___nsResolver1;
		NullCheck(L_7);
		RuntimeObject* L_14;
		L_14 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_7, L_10, L_12, L_13);
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (uint64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_14, il2cpp_rgctx_data(method->rgctx_data, 2))))));
		int32_t L_15 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_15, 1));
	}

IL_0047:
	{
		int32_t L_16 = V_3;
		RuntimeObject* L_17 = V_0;
		NullCheck((RuntimeObject*)L_17);
		int32_t L_18;
		L_18 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* System.Int32 System.Collections.ICollection::get_Count() */, ICollection_t37E7B9DC5B4EF41D190D607F92835BF1171C0E8E_il2cpp_TypeInfo_var, (RuntimeObject*)L_17);
		if ((((int32_t)L_16) < ((int32_t)L_18)))
		{
			goto IL_001a;
		}
	}
	{
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_19 = V_2;
		return L_19;
	}

IL_0052:
	{
		RuntimeObject* L_20 = ___list0;
		List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_21 = (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		NullCheck(L_21);
		((  void (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_21, il2cpp_rgctx_method(method->rgctx_data, 4));
		V_1 = L_21;
		NullCheck(((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		RuntimeObject* L_22;
		L_22 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.IEnumerator System.Collections.IEnumerable::GetEnumerator() */, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var, ((RuntimeObject*)IsInst((RuntimeObject*)L_20, IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131_il2cpp_TypeInfo_var)));
		V_4 = L_22;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_009e:
			{// begin finally (depth: 1)
				{
					RuntimeObject* L_23 = V_4;
					V_6 = ((RuntimeObject*)IsInst((RuntimeObject*)L_23, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var));
					RuntimeObject* L_24 = V_6;
					if (!L_24)
					{
						goto IL_00b2;
					}
				}
				{
					RuntimeObject* L_25 = V_6;
					NullCheck(L_25);
					InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_25);
				}

IL_00b2:
				{
					return;
				}
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0093_1;
			}

IL_0067_1:
			{
				RuntimeObject* L_26 = V_4;
				NullCheck(L_26);
				RuntimeObject* L_27;
				L_27 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Object System.Collections.IEnumerator::get_Current() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_26);
				V_5 = L_27;
				List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_28 = V_1;
				XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E* L_29 = (XmlValueConverter_tAB12320D9B3994EBB077CA59A095458E60F3F57E*)__this->___atomicConverter_32;
				RuntimeObject* L_30 = V_5;
				RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
				il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
				Type_t* L_32;
				L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
				RuntimeObject* L_33 = ___nsResolver1;
				NullCheck(L_29);
				RuntimeObject* L_34;
				L_34 = VirtualFuncInvoker3< RuntimeObject*, RuntimeObject*, Type_t*, RuntimeObject* >::Invoke(61 /* System.Object System.Xml.Schema.XmlValueConverter::ChangeType(System.Object,System.Type,System.Xml.IXmlNamespaceResolver) */, L_29, L_30, L_32, L_33);
				NullCheck(L_28);
				((  void (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, uint64_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_28, ((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_34, il2cpp_rgctx_data(method->rgctx_data, 2))))), il2cpp_rgctx_method(method->rgctx_data, 5));
			}

IL_0093_1:
			{
				RuntimeObject* L_35 = V_4;
				NullCheck(L_35);
				bool L_36;
				L_36 = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, L_35);
				if (L_36)
				{
					goto IL_0067_1;
				}
			}
			{
				goto IL_00b3;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b3:
	{
		List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284* L_37 = V_1;
		NullCheck(L_37);
		UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* L_38;
		L_38 = ((  UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* (*) (List_1_tB88E7361EE76DFB3EBB7FCD60CC59ACC3E48C284*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_37, il2cpp_rgctx_method(method->rgctx_data, 6));
		return L_38;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Boolean>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool _AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D118A226E3D45EB1BC15C4F2AEB976705308BF4_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	bool V_24 = false;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_16, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_22, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_28, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_34, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_40, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_46, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_52, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_58, NULL);
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(bool*)((bool*)(bool*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m6D118A226E3D45EB1BC15C4F2AEB976705308BF4_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(bool));
		bool L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		bool L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Char>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar _AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m99A4774DEB96BD43741B9249AD1CF60E5AC3041B_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	Il2CppChar V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	Il2CppChar V_24 = 0x0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_16, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_22, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_28, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_34, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_40, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_46, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_52, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_58, NULL);
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(Il2CppChar*)((Il2CppChar*)(Il2CppChar*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m99A4774DEB96BD43741B9249AD1CF60E5AC3041B_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(Il2CppChar));
		Il2CppChar L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		Il2CppChar L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Double>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double _AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0FEC0B412584118A8218E74FF6A40750FCA7731E_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	double V_3 = 0.0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	double V_24 = 0.0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_16, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_22, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_28, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_34, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_40, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_46, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_52, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_58, NULL);
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(double*)((double*)(double*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m0FEC0B412584118A8218E74FF6A40750FCA7731E_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(double));
		double L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		double L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int16>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m741061ECF72D03FE980D0689C01D2805626E3ABD_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int16_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int16_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_16, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_22, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_28, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_34, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_40, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_46, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_52, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_58, NULL);
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int16_t*)((int16_t*)(int16_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m741061ECF72D03FE980D0689C01D2805626E3ABD_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int16_t));
		int16_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int16_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int32>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDB139D3F3CD2D932CBA962A3C8D5C3954CD4AC3F_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int32_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int32_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_16, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_22, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_28, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_34, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_40, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_46, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_52, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_58, NULL);
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int32_t*)((int32_t*)(int32_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mDB139D3F3CD2D932CBA962A3C8D5C3954CD4AC3F_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int32_t));
		int32_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int32_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mE8E459BC06698DB7B14CFFDE30C3B573AE30B718_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int64_t V_24 = 0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_16, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_22, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_28, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_34, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_40, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_46, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_52, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_58, NULL);
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int64_t*)((int64_t*)(int64_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mE8E459BC06698DB7B14CFFDE30C3B573AE30B718_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int64_t));
		int64_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int64_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m5D8B7D428A5F63BF226AE0F4F532986BA7991ADC_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	RuntimeObject* V_24 = NULL;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_16, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_22, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_28, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_34, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_40, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_46, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_52, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_58, NULL);
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m5D8B7D428A5F63BF226AE0F4F532986BA7991ADC_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(RuntimeObject*));
		RuntimeObject* L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		RuntimeObject* L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA0B7EDEC4FB783CA5C528BD35AC09FE99A737138_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int8_t V_24 = 0x0;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_16, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_22, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_28, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_34, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_40, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_46, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_52, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_58, NULL);
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(int8_t*)((int8_t*)(int8_t*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mA0B7EDEC4FB783CA5C528BD35AC09FE99A737138_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int8_t));
		int8_t L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int8_t L_108 = V_3;
		return L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m570EA7BE13782F59FC9603040D1937DC0577BADB_gshared (intptr_t ___array0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	Type_t* G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t* G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_0, NULL);
		NullCheck(L_1);
		Type_t* L_2;
		L_2 = VirtualFuncInvoker0< Type_t* >::Invoke(45 /* System.Type System.Type::GetElementType() */, L_1);
		V_0 = L_2;
		Type_t* L_3 = V_0;
		il2cpp_codegen_runtime_class_init_inline(AndroidReflection_tD59014B286F902906DBB75DA3473897D35684908_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_m48ED73958206D552B937EEC7560184C6C4228F3D(L_3, NULL);
		V_1 = L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t* L_6 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_7 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_8;
		L_8 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_7, NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t*)L_6) == ((RuntimeObject*)(Type_t*)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* L_11;
		L_11 = AndroidJNISafe_FromIntArray_m899EDC375E4983DCF33B5B72E2131DC06AA4B5F0(L_10, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t* L_12 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_13, NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t*)L_12) == ((RuntimeObject*)(Type_t*)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tD317D27C31DB892BE79FAE3AEBC0B3FFB73DE9B4* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m3F57F10FDDBA3DC358BEF7296F58D819C9EC3BDE(L_16, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_17, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t* L_18 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_19, NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t*)L_18) == ((RuntimeObject*)(Type_t*)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogWarning_mEF15C6B17CE4E1FA7E379CDB82CE40FCD89A3F28((RuntimeObject*)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* L_23;
		L_23 = AndroidJNISafe_FromByteArray_mAED5B8EEF34E268BB146A277842089C7FD8A06BB(L_22, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t* L_24 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_25, NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t*)L_24) == ((RuntimeObject*)(Type_t*)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t88116DA68378C3333DB73E7D36C1A06AFAA91913* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m5825C71BA6941CDF25627AD77CDBE648CB322476(L_28, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_29, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t* L_30 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_31 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_32;
		L_32 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_31, NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t*)L_30) == ((RuntimeObject*)(Type_t*)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_t8175CE8DD9C9F9FB0CF4F58E45BC570575B43CFB* L_35;
		L_35 = AndroidJNISafe_FromShortArray_m227116D8E01EE3568936FB93C97CAEE9062A0A35(L_34, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_35, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t* L_36 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_38;
		L_38 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_37, NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t*)L_36) == ((RuntimeObject*)(Type_t*)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tAEDFCBDB5414E2A140A6F34C0538BF97FCF67A1D* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m687FC548BFA4DC440379619E5C7CB56354E30D59(L_40, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_41, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t* L_42 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_43, NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t*)L_42) == ((RuntimeObject*)(Type_t*)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t89DEFE97BCEDB5857010E79ECE0F52CF6E93B87C* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_m97B7BC8546EC3F9CF0784D434D4AA41FBB409892(L_46, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_47, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t* L_48 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_49 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_50;
		L_50 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_49, NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t*)L_48) == ((RuntimeObject*)(Type_t*)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_mB752FB522CD25191E5C6AF8CEFA4553593F784A7(L_52, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_53, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t* L_54 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (Char_t521A6F19B456D956AF452D926C32709DC03D6B17_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_55, NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t*)L_54) == ((RuntimeObject*)(Type_t*)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mC1C728B67330FD610542B4C2D6B9759F78B2BD17(L_58, NULL);
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_59, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t* L_60 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_62;
		L_62 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_61, NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t*)L_60) == ((RuntimeObject*)(Type_t*)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_64, NULL);
		V_13 = L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_67 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = L_67;
		V_15 = 0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_68, L_69, NULL);
		V_16 = L_70;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_m21A07825755C0A9AF91F8248A1C98F861E26928F(L_73, NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_75, NULL);
		int32_t L_76 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_76, 1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_80 = V_14;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_80, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t* L_81 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_0_0_0_var) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_83;
		L_83 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_82, NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t*)L_81) == ((RuntimeObject*)(Type_t*)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_mB5F7260E652BE95FE9237A47C1E1597306B462C3(L_85, NULL);
		V_19 = L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_88 = (AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001*)SZArrayNew(AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = L_88;
		V_21 = 0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_mDD7F2DC202FA14B8E5889755FB02B401C1127AD0(L_89, L_90, NULL);
		V_22 = L_91;
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0* L_95 = (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)il2cpp_codegen_object_new(AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0_il2cpp_TypeInfo_var);
		NullCheck(L_95);
		AndroidJavaObject__ctor_m0CEE7D570807333CE2C193A82AB3AB8D4F873A6B(L_95, L_94, NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t8FFB930F335C1178405B82AC2BF512BB1EEF9EB0*)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m80503AA6C85CE46E8CE72C62215E1BE62964424D(L_96, NULL);
		int32_t L_97 = V_21;
		V_21 = ((int32_t)il2cpp_codegen_add(L_97, 1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tBCEB142050F282B940177011644246618E002001* L_101 = V_20;
		V_3 = ((*(float*)((float*)(float*)UnBox((RuntimeObject*)L_101, il2cpp_rgctx_data(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t* L_102 = V_0;
		Type_t* L_103 = L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject*)G_B32_0);
		String_t* L_104;
		L_104 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m9B13B47FCB3DF61144D9647DDA05F527377251B0(G_B33_1, G_B33_0, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), NULL);
		Exception_t* L_106 = (Exception_t*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		NullCheck(L_106);
		Exception__ctor_m9B2BD92CD68916245A75109105D9071C9D430E7F(L_106, L_105, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m570EA7BE13782F59FC9603040D1937DC0577BADB_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_107 = V_24;
		V_3 = L_107;
		goto IL_0272;
	}

IL_0272:
	{
		float L_108 = V_3;
		return L_108;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetFieldID<System.Object>(System.IntPtr,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetFieldID_TisRuntimeObject_mE82633A88CD2EA1C974716F0E9D7DD1ED0E05B64_gshared (intptr_t ___jclass0, String_t* ___fieldName1, bool ___isStatic2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___fieldName1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_2, NULL);
		String_t* L_4;
		L_4 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_3, NULL);
		bool L_5 = ___isStatic2;
		intptr_t L_6;
		L_6 = AndroidJNIHelper_GetFieldID_mC795891C3B70C0E8F98D9E8AD2A85103761A0C75(L_0, L_1, L_4, L_5, NULL);
		V_0 = L_6;
		goto IL_001b;
	}

IL_001b:
	{
		intptr_t L_7 = V_0;
		return L_7;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mC1F60B2CD35EBE3AF6EB1A0CBE8720BDBB0FD46F_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m009869836C4E4FF7DBA29495581E621CAFB3EC28_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m12163ADC3C81694EE6164EB1CE4CF319BF912FC0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m0F150B2F03CF09DC548030312EC870B49FD42856_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8912F671519185E49C39BB5AC46FE2EC5940B11F_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_mE520BC825E42E6148130E64994ECB5BDEAEE8AE6_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_m6555020711F611E466B92953403F09E0014C5C0A_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mAD96CCC9D368A9EF49DF86C4767402B588D1057A_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_m57664D04766C1E0F7096ECD49549E6A4291D0347_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args2, bool ___isStatic3, const RuntimeMethod* method) 
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m5F33E127418D5DA40590E4AE3814D7ACF7810F6E(L_0, L_1, L_3, L_4, NULL);
		V_0 = L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF65B0E8242ED723FC5C233B6113C489F861D6C75_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m749A4CD33AC4CF1D3F2723EBA4D1EEE590DCCD85_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_m3A5FB0773626670CFB4AAC59E1485231C8EFD649_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m258931EB2BDEDE3D2CED632F6B207CA93F46CAC1_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mB5511DCA764C7BB77877C9028AB026AD9EEBD6B8_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m5BC7606ACC6309C3070972F60C8A552BA1D4DA71_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_m8D1061D8E0079806BBE251CE5ACAF4262C15EE8E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mEF017EFBD89137395458CD85A01B48B45892FCE9_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mCF75982D40162C5B91D40E003FC6388445B8A9B7_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___args0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t* V_0 = NULL;
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject* V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t* L_0 = (StringBuilder_t*)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		StringBuilder__ctor_m1D99713357DE05DAFA296633639DB55F8C30587D(L_0, NULL);
		V_0 = L_0;
		StringBuilder_t* L_1 = V_0;
		NullCheck(L_1);
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_1, (Il2CppChar)((int32_t)40), NULL);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = ___args0;
		V_1 = L_3;
		V_2 = 0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject* L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = L_7;
		StringBuilder_t* L_8 = V_0;
		RuntimeObject* L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B(L_9, NULL);
		NullCheck(L_8);
		StringBuilder_t* L_11;
		L_11 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_8, L_10, NULL);
		int32_t L_12 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_12, 1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length)))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t* L_15 = V_0;
		NullCheck(L_15);
		StringBuilder_t* L_16;
		L_16 = StringBuilder_Append_m71228B30F05724CD2CD96D9611DCD61BFB96A6E1(L_15, (Il2CppChar)((int32_t)41), NULL);
		StringBuilder_t* L_17 = V_0;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m2570A2A5B32A5E9D9F0F38B37459DA18736C823E(L_18, NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m1F94418EAEB87AF74E495191DC2AA5293136175B((RuntimeObject*)L_19, NULL);
		NullCheck(L_17);
		StringBuilder_t* L_21;
		L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_17, L_20, NULL);
		StringBuilder_t* L_22 = V_0;
		NullCheck((RuntimeObject*)L_22);
		String_t* L_23;
		L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject*)L_22);
		V_4 = L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return L_24;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::ExecuteAsync<System.Int32Enum>(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB* ARCoreProvider_ExecuteAsync_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m2E5A91AAED3DF9EEEA5EBB3259AA4D9B756625BD_gshared (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___apiMethod0, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var promise = new ARCorePromise<T>();
		ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* L_0 = (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// GCHandle gch = GCHandle.Alloc(promise);
		ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* L_1 = L_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6((RuntimeObject*)L_1, NULL);
		V_0 = L_2;
		// apiMethod(GCHandle.ToIntPtr(gch));
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___apiMethod0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = V_0;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_4, NULL);
		NullCheck(L_3);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_3, L_5, NULL);
		// return promise;
		return (Promise_1_tF93E504A18090E7276B6F9EF5AA27230E9A641CB*)L_1;
	}
}
// UnityEngine.XR.ARSubsystems.Promise`1<T> UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::ExecuteAsync<System.Object>(System.Action`1<System.IntPtr>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Promise_1_tEB030C5C1AAFDF29A82B6F24D644CFB095675E8A* ARCoreProvider_ExecuteAsync_TisRuntimeObject_m67E1D6AFDCD02FC30734E417CE68EDA31D23EDBE_gshared (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* ___apiMethod0, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// var promise = new ARCorePromise<T>();
		ARCorePromise_1_t2681D98D8056B9B45A6EA53E2881D96B3A561328* L_0 = (ARCorePromise_1_t2681D98D8056B9B45A6EA53E2881D96B3A561328*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		NullCheck(L_0);
		((  void (*) (ARCorePromise_1_t2681D98D8056B9B45A6EA53E2881D96B3A561328*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		// GCHandle gch = GCHandle.Alloc(promise);
		ARCorePromise_1_t2681D98D8056B9B45A6EA53E2881D96B3A561328* L_1 = L_0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_2;
		L_2 = GCHandle_Alloc_m74B02418DDB89BF52FA0F7412D14E6D19E1949C6((RuntimeObject*)L_1, NULL);
		V_0 = L_2;
		// apiMethod(GCHandle.ToIntPtr(gch));
		Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* L_3 = ___apiMethod0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_4 = V_0;
		intptr_t L_5;
		L_5 = GCHandle_ToIntPtr_m4895C6E6C93FD6CEE9867C8A32C9E06A5DE5C5DC(L_4, NULL);
		NullCheck(L_3);
		Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_inline(L_3, L_5, NULL);
		// return promise;
		return (Promise_1_tEB030C5C1AAFDF29A82B6F24D644CFB095675E8A*)L_1;
	}
}
// System.Void UnityEngine.XR.ARCore.ARCoreSessionSubsystem/ARCoreProvider::ResolvePromise<System.Int32Enum>(System.IntPtr,T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ARCoreProvider_ResolvePromise_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mEFAE38F5BE268D65442E14A8466D6E9B3C849BA1_gshared (intptr_t ___context0, int32_t ___arg1, const RuntimeMethod* method) 
{
	GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC V_0;
	memset((&V_0), 0, sizeof(V_0));
	ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* V_1 = NULL;
	{
		// GCHandle gch = GCHandle.FromIntPtr(context);
		intptr_t L_0 = ___context0;
		GCHandle_tC44F6F72EE68BD4CFABA24309DA7A179D41127DC L_1;
		L_1 = GCHandle_FromIntPtr_mB3E9C10177B3A0986B72C44D7E123F60125824DF(L_0, NULL);
		V_0 = L_1;
		// var promise = (ARCorePromise<T>)gch.Target;
		RuntimeObject* L_2;
		L_2 = GCHandle_get_Target_m481F9508DA5E384D33CD1F4450060DC56BBD4CD5((&V_0), NULL);
		V_1 = ((ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21*)CastclassClass((RuntimeObject*)L_2, il2cpp_rgctx_data(method->rgctx_data, 0)));
		// if (promise != null)
		ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* L_3 = V_1;
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// promise.Resolve(arg);
		ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21* L_4 = V_1;
		int32_t L_5 = ___arg1;
		NullCheck(L_4);
		((  void (*) (ARCorePromise_1_t4CE9AB3989999D3FFBC01CE0845E421A3805BC21*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
	}

IL_001e:
	{
		// gch.Free();
		GCHandle_Free_m1320A260E487EB1EA6D95F9E54BFFCB5A4EF83A3((&V_0), NULL);
		// }
		return;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* QuoteVisitor_VisitLambda_TisRuntimeObject_m8546CE5243FDDEFA3C7483FEB44BF91BD8F91DAF_gshared (QuoteVisitor_tAF65D5FC6B193B07A3D795C928F4E02DA518529F* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* L_0;
		L_0 = Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_inline(Array_Empty_TisParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110_m439278767D4199BC9FB84CBC055CC21633386481_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_1 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		int32_t L_2;
		L_2 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_1);
		V_1 = L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_5 = (List_1_t1A058A09EDF187502B71E068C526B964CEA1283F*)il2cpp_codegen_object_new(List_1_t1A058A09EDF187502B71E068C526B964CEA1283F_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D(L_5, L_4, List_1__ctor_m90AEF23AAC38CF4A308B9996EEF66C89F96E6A4D_RuntimeMethod_var);
		V_2 = L_5;
		V_3 = 0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_6 = V_2;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_9;
		L_9 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_7, L_8);
		NullCheck(L_6);
		List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_inline(L_6, L_9, List_1_Add_m72E70DE20E4D4DFE86D505EDD3DBEA47E50449A5_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_t1A058A09EDF187502B71E068C526B964CEA1283F* L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		QuoteVisitor_PushParameters_mC0368A13FEDC063CA6CE13884A8167B788434D76(__this, L_14, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = ((  Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* (*) (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_15, il2cpp_rgctx_method(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		QuoteVisitor_PopParameters_m608713B0CFFB54DA0D4D0CF12F3E693A873D3FF9(__this, L_17, NULL);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_18;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* ExpressionQuoter_VisitLambda_TisRuntimeObject_m367D8F5D10D80B4A1A34D42A5339BAF95A51FE5E_gshared (ExpressionQuoter_t3D5F35B2980800F7F947EBC0819D867CF5AAD536* __this, Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* V_0 = NULL;
	HashSet_1_t068F5201D923072F46716204841D21328FE6218D* V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_0 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		int32_t L_1;
		L_1 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_2 = (HashSet_1_t068F5201D923072F46716204841D21328FE6218D*)il2cpp_codegen_object_new(HashSet_1_t068F5201D923072F46716204841D21328FE6218D_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B(L_2, HashSet_1__ctor_mC6742D4B2D1A12A042DB56C25EEF951C4BAC992B_RuntimeMethod_var);
		V_1 = L_2;
		V_2 = 0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_3 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		int32_t L_4;
		L_4 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_3);
		V_3 = L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_5 = V_1;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6);
		ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110* L_8;
		L_8 = VirtualFuncInvoker1< ParameterExpression_tE8D3A1137422F75D256CBB200EDC82820F240110*, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_6, L_7);
		NullCheck(L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69(L_5, L_8, HashSet_1_Add_m9B1803FBD20D89F056AD75F1B6B0E1F5D5CF4F69_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add(L_10, 1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_13 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_14 = V_1;
		NullCheck(L_13);
		Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE(L_13, L_14, Stack_1_Push_m7705C6FDAFECD165E7E24091F066CB47F323E6CE_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_15 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_16;
		L_16 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_15, NULL);
		NullCheck((ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_17;
		L_17 = VirtualFuncInvoker1< Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD26583FF464068F23017BC372C81133A62C5A590*)__this, L_16);
		V_0 = L_17;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_18 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		int32_t L_19;
		L_19 = VirtualFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26* L_20 = (Stack_1_tC4810ACEE7FD00840B5CB4333A83E2E1553CAD26*)__this->____shadowedVars_2;
		NullCheck(L_20);
		HashSet_1_t068F5201D923072F46716204841D21328FE6218D* L_21;
		L_21 = Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5(L_20, Stack_1_Pop_mBE2B08F95D18382A9C64D99E1065B899EB75E6E5_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_22 = V_0;
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_23 = ___node0;
		NullCheck((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23);
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_24;
		L_24 = LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline((LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E*)L_23, NULL);
		if ((!(((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_22) == ((RuntimeObject*)(Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_25 = ___node0;
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_25;
	}

IL_0069:
	{
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_26 = ___node0;
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_27 = V_0;
		NullCheck(L_26);
		Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7* L_28;
		L_28 = VirtualFuncInvoker2< Expression_1_t63D438A2F366BA0B43CCDBBFCE66D131C313A7D7*, Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*, ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, L_26, L_27, (ParameterExpressionU5BU5D_tA217A6969CA4383EF6D3C43B8EB0989358ABE72C*)NULL);
		return (Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785*)L_28;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m64B5805CB3B8148FF1B3647E9A66A91EC7382743_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* ___array2, const RuntimeMethod* method) 
{
	{
		// if (array.IsCreated)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_m478F812F31DEC928EC9D697C47C7E188CCA0010F(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_2 = ___array2;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH((L_2)->___m_Length_1);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_5 = ___array2;
		NativeArray_1_Dispose_m78ECC3FE24D545255D9CFABB81FC34CA6CC2A4A7(L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_9), L_7, L_8, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_6 = L_9;
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70* L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70 L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_mFD9836AFB0757330727FED396E637FB060E30DF5((&L_13), L_11, L_12, (int32_t)1, /*hidden argument*/il2cpp_rgctx_method(method->rgctx_data, 3));
		*(NativeArray_1_t0BB246A2F65C2C705F83BEBE1B62D9543C330B70*)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* XRManagerSettings_get_activeLoader_mFB3B679005792D3DF871EAA7120DD86DCA1D5DEA_inline (XRManagerSettings_t7923B66EB3FEE58C7B9F85FF61749B774D3B9E52* __this, const RuntimeMethod* method) 
{
	{
		// public XRLoader activeLoader { get; private set; }
		XRLoader_t80B1B1934C40561C5352ABC95D567DC2A7C9C976* L_0 = __this->___U3CactiveLoaderU3Ek__BackingField_10;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* LambdaExpression_get_Body_m161E156442547AE8A6837C5AE065BD93345451DE_inline (LambdaExpression_tD26FB6AEAD01B2EBB668CDEAFAAFA4948697300E* __this, const RuntimeMethod* method) 
{
	{
		Expression_t70AA908ECBD33E94249BF235E4EBB0F831AD8785* L_0 = __this->____body_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1F55188CDD50D6D725D41F55D2F2540CD15FB20_gshared_inline (Nullable_1_t163D49A1147F217B7BD43BE8ACC8A5CC6B846D14* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m68659E9B6E199B179AF3008FBC77269223E12035_gshared_inline (Nullable_1_t72049CEDEC0856702F155EE9A28B001F3CA02FF4* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m24E40FB5B40D3DE59FF730575C490000DEDB0180_gshared_inline (Nullable_1_tEEC63AD0653CBD098182D162C2F15DD7FD172B4C* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m77763F09827A2FE01D25EE6CC3344B8F5C936821_gshared_inline (Nullable_1_tDD20C7757B89371EB995E8E09D6654A89946A6B7* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mE4C1883655C69E82A340495CF4BE3A0E9D53556F_gshared_inline (Nullable_1_tF40515F0A47DDE5A75596D8B91CEB985AF9A6639* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m9E39BA295A126DE86ACAEA1C2CA48E74789D6465_gshared_inline (Nullable_1_t4E7A414792D042826D371041DE5894DFA08212E2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB06603851D1FA7317BD9612819AA44A8819D53BB_gshared_inline (Nullable_1_t9D5B46558D2767869E98FDFCBCBFDA1061E82804* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mABAF20C163C6203D9E0939628971AA3D97023DE2_gshared_inline (Nullable_1_t462B322FFC15D60C4D7DD7D1CD8222E02A3303BC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m709BF9548B1BF19959A1EF6468E6BE0877D38A12_gshared_inline (Nullable_1_t55B458556F9A1C2955EAA7257FBB73E4D55191F2* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mB1C04D7CB1766F8BB54DDE95660D48D180857928_gshared_inline (Nullable_1_t82C5E404E7705A819237B541F104E35430B9E7FE* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mF08B15984D4124884FADB24FFB9DFE1F2BC9F335_gshared_inline (Nullable_1_tF88AC366018E2DB0F92FEE93F212620378CF1ABD* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m1741B43207EC063AE9A71F7F675513C528DCAF9E_gshared_inline (Nullable_1_t242F7ED0654258837D634F6084C2BA5F7BEC3573* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mBD79FFC769064FDA55DF8C807072F1A804E44E7B_gshared_inline (Nullable_1_tD958AA10A887693209048E55E292F2F8DDA137FB* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mD019096B51EAF8491D25A9FD726F699CFD58D3AB_gshared_inline (Nullable_1_t6440582F25025997DBC42E484DBBDC57DFA4EC93* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m117FBA6ABEEECFD1CB3B0B949E38D419F624BE52_gshared_inline (Nullable_1_t4C346F42848F49E8D1655093281477FAB000C5F6* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_mA069BABA222DBC5642A85E34D280EBE5B02D74AE_gshared_inline (Nullable_1_t8F2CC878F97301A445033666E09EBEEFEB2FDED8* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m36097ED2550D367B01E649CAED7826B4463533C4_gshared_inline (Nullable_1_tECD7500D59354FEFF74DE7B21E350C6501EA6093* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Nullable_1_get_HasValue_m2A82D51003825E59CB150365B54EAE49218217FA_gshared_inline (Nullable_1_tA5AA99E0A5B7A3A0319AD0438D5B0DBB62CB1AFC* __this, const RuntimeMethod* method) 
{
	{
		bool L_0 = (bool)__this->___hasValue_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Action_1_Invoke_m783EC8C62449882812B741E4DE67BF3106686D9C_gshared_inline (Action_1_t2DF1ED40E3084E997390FF52F462390882271FE2* __this, intptr_t ___obj0, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, intptr_t, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl_1)((Il2CppObject*)__this->___method_code_6, ___obj0, reinterpret_cast<RuntimeMethod*>(__this->___method_3));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Array_Empty_TisRuntimeObject_m55011E8360A8199FB239A5787BA8631CDD6116FC_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 0));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_0 = ((EmptyArray_1_tDF0DD7256B115243AA6BD5558417387A734240EE_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 0)))->___Value_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) 
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* V_0 = NULL;
	int32_t V_1 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		V_0 = L_1;
		int32_t L_2 = (int32_t)__this->____size_2;
		V_1 = L_2;
		int32_t L_3 = V_1;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_4 = V_0;
		NullCheck(L_4);
		if ((!(((uint32_t)L_3) < ((uint32_t)((int32_t)(((RuntimeArray*)L_4)->max_length))))))
		{
			goto IL_0034;
		}
	}
	{
		int32_t L_5 = V_1;
		__this->____size_2 = ((int32_t)il2cpp_codegen_add(L_5, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_6 = V_0;
		int32_t L_7 = V_1;
		RuntimeObject* L_8 = ___item0;
		NullCheck(L_6);
		(L_6)->SetAt(static_cast<il2cpp_array_size_t>(L_7), (RuntimeObject*)L_8);
		return;
	}

IL_0034:
	{
		RuntimeObject* L_9 = ___item0;
		((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_method_pointer(il2cpp_rgctx_method(method->klass->rgctx_data, 11)))(__this, L_9, il2cpp_rgctx_method(method->klass->rgctx_data, 11));
		return;
	}
}