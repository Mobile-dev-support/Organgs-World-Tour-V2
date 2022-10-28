#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtualActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
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
template <typename T1, typename T2, typename T3>
struct InterfaceActionInvoker3
{
	typedef void (*Action)(void*, T1, T2, T3, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2, T3 p3)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, p3, invokeData.method);
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

// System.Collections.Generic.Dictionary`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>
struct Dictionary_2_tA3ED857B5FCBE99603A8DA2A6AF89CC6EB0DDD37;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA;
// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<UnityEngine.GameObject>>>
struct Dictionary_2_t5680AD2618702781AAF214F7DB22117D323F79FB;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE;
// System.Func`2<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase,CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>
struct Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468;
// System.Func`2<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase,CleverCrow.Fluid.Dialogues.Actions.IAction>
struct Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603;
// System.Func`2<CleverCrow.Fluid.Dialogues.Choices.ChoiceData,CleverCrow.Fluid.Dialogues.Choices.ChoiceData>
struct Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB;
// System.Func`2<CleverCrow.Fluid.Dialogues.Choices.ChoiceData,CleverCrow.Fluid.Dialogues.Choices.IChoice>
struct Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2;
// System.Func`2<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase,CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>
struct Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4;
// System.Func`2<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase,CleverCrow.Fluid.Dialogues.Conditions.ICondition>
struct Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599;
// System.Func`2<CleverCrow.Fluid.Dialogues.Choices.IChoice,System.Boolean>
struct Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5;
// System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>
struct Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0;
// System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INodeData>
struct Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE;
// System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase,System.Single>
struct Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2;
// System.Func`2<System.Object,System.Boolean>
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
// System.Func`2<System.Object,System.Object>
struct Func_2_tACBF5A1656250800CE861707354491F0611F6624;
// System.Func`2<System.Object,System.Single>
struct Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12;
// System.Collections.Generic.IEnumerable`1<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>
struct IEnumerable_1_t58ACDD1A6FC28D34D8E0CD29CE379F98042D0637;
// System.Collections.Generic.IEnumerable`1<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>
struct IEnumerable_1_t40E4A3CDA895583021D474D39E1CA10DC773F764;
// System.Collections.Generic.IEnumerable`1<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>
struct IEnumerable_1_t42B36D1FCD32A0A3C0064ACA5DA44509D7D1DD23;
// System.Collections.Generic.IEnumerable`1<CleverCrow.Fluid.Dialogues.Actions.IAction>
struct IEnumerable_1_t47B24985A595D3D8E5C913E7610D18AC05FC40F3;
// System.Collections.Generic.IEnumerable`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>
struct IEnumerable_1_t8E822CB11FEF5864924E5C658FDDAB09A7DA4136;
// System.Collections.Generic.IEnumerable`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>
struct IEnumerable_1_tA4418A851E1C07031062CB0F3278BB3AE9720C30;
// System.Collections.Generic.IEnumerable`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct IEnumerable_1_tF3EB1BB98177A375F09E81138436E681F25048A0;
// System.Collections.Generic.IEnumerable`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>
struct IEnumerable_1_tB2D5E6F17ED18D777322C946C489324ECFBE4CFC;
// System.Collections.Generic.IEnumerable`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>
struct IEnumerable_1_tBFF3249AF997B68EB86C5642A6B609E3118D7C15;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.IEqualityComparer`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>
struct IEqualityComparer_1_tD5AE03E49A920D495F4C03D38CC686F74EC36166;
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean>
struct IKeyValueData_1_t3A45F4121547C948C3C5EF9E440C1337ED0554E8;
// CleverCrow.Fluid.Databases.IKeyValueData`1<UnityEngine.GameObject>
struct IKeyValueData_1_t046EA48861A90497331417C2E6C30569EF4F9108;
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32>
struct IKeyValueData_1_t76FEEA4F8F2BF2FBEA5280BF7983EC34B4DEB8DE;
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single>
struct IKeyValueData_1_t8756DDDED77EF3AFD10F475CBA4EEA0A4F54991A;
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.String>
struct IKeyValueData_1_t4044AF64FAB64B7FC17FB04843C5917722F67CF4;
// CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Boolean>
struct IKeyValueDefinition_1_tB6F0933B8BAE7329E0999255BF50B74C30F1EBAB;
// CleverCrow.Fluid.Databases.IKeyValueDefinition`1<UnityEngine.GameObject>
struct IKeyValueDefinition_1_t9CD47DEA88011964A18FD9AF2DB76E0544BA4028;
// CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Int32>
struct IKeyValueDefinition_1_tFA5B2790F8FA4A5E4E1994D40942218CA67CD5DB;
// CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Single>
struct IKeyValueDefinition_1_t9CDCD77D0EF910D0D9602DBA7A5DDA56D7EAFAE1;
// CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.String>
struct IKeyValueDefinition_1_t0B882A5BE7978D3343EAC252839775C3D2910877;
// System.Linq.IOrderedEnumerable`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>
struct IOrderedEnumerable_1_t021CBFB0659267A5051BC4A49C2AE8A1F6985429;
// System.Linq.IOrderedEnumerable`1<System.Object>
struct IOrderedEnumerable_1_t0E680E8E1A4A676334F2A0C9A6F9B93135A65EAC;
// System.Collections.Generic.IReadOnlyList`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>
struct IReadOnlyList_1_t42729950349A157871A77FF615DE80E7D47E8619;
// System.Collections.Generic.IReadOnlyList`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>
struct IReadOnlyList_1_t4B97CE62766177315638FF2148A4F790EFFB8203;
// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467;
// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String>
struct IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324;
// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>
struct IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D;
// System.Collections.Generic.Dictionary`2/KeyCollection<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>
struct KeyCollection_t30E8CA2BB18E2C1BAEDCC2DDBC0A47E7DC678E4D;
// CleverCrow.Fluid.Databases.KeyValueDataBase`1<UnityEngine.GameObject>
struct KeyValueDataBase_1_t93FD5A652A686D61254DF3E882C64A5A98F5B2A7;
// CleverCrow.Fluid.Databases.KeyValueDataBase`1<System.Object>
struct KeyValueDataBase_1_t055283D96877C4D26A8CD7C62F63A34C314C3A58;
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Boolean>
struct KeyValueDefinitionBase_1_tAFEC137E4DDA2D46D5451CBBC2A13F7F36437E19;
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<UnityEngine.GameObject>
struct KeyValueDefinitionBase_1_t9BCE62C4CCD9322298E321FE00668B3A21B71C0F;
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Int32>
struct KeyValueDefinitionBase_1_t7389216B5FF39E1D9ADD22C9CC602C3F406DE214;
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Object>
struct KeyValueDefinitionBase_1_t9A51DC0A84A45E3A6E870EDD63EF3ABB09534C73;
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Single>
struct KeyValueDefinitionBase_1_t596DC453332741575B7F68051A76AE65B5E42E8D;
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.String>
struct KeyValueDefinitionBase_1_t50A71AA8D2B0A60CCE1E76DF9EA4AEF251C7796C;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>
struct List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>
struct List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>
struct List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>
struct List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>
struct List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>
struct List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>
struct List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>
struct List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>
struct NodeNestedDataBase_1_tBFAF0B539820435EFC36920F096035AB74DC6C1A;
// CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>
struct NodeNestedDataBase_1_t67C8B2762D6F87FB1B86E2B4CB4022F93A844C08;
// CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<System.Object>
struct NodeNestedDataBase_1_tD6854BFD71AC23609130B29B6C4AE96FF4D69343;
// System.Predicate`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>
struct Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64;
// System.Predicate`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818;
// System.Predicate`1<System.Object>
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
// System.Collections.Generic.Queue`1<CleverCrow.Fluid.Dialogues.Actions.IAction>
struct Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7;
// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetKeyValueInternal`1<System.Boolean>
struct SetKeyValueInternal_1_tC7B061062A2E87D83C0F97CE5767F617B7CB1968;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetKeyValueInternal`1<System.Int32>
struct SetKeyValueInternal_1_tAF4A74B8A306267B93E711DBE4A6F1515D903427;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetKeyValueInternal`1<System.Single>
struct SetKeyValueInternal_1_t3EFDB8E735B6F34A838289C4112D8AFAE33A7B26;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetKeyValueInternal`1<System.String>
struct SetKeyValueInternal_1_tBE22FA248828AD73633BFBFDCA0C479313E899CC;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Boolean>
struct SetLocalVariableBase_1_t8543DBE204C11B3E56704D9CC5E5A079643548DE;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Int32>
struct SetLocalVariableBase_1_t60E979B585DFB0F31414EA57929E87F95D142E22;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Object>
struct SetLocalVariableBase_1_t44B98E080F3971CA18D3428A93A0B3A389FE59E3;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Single>
struct SetLocalVariableBase_1_t2DD498A2F3A84F8DDF31BC9C142147C01A32945E;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.String>
struct SetLocalVariableBase_1_tFCAEEDFAE4E00F62C9FDC6010A738C9AE7FE3EF0;
// System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback>
struct Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5;
// UnityEngine.Events.UnityAction`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF;
// UnityEngine.Events.UnityAction`1<System.Object>
struct UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A;
// UnityEngine.Events.UnityAction`2<CleverCrow.Fluid.Dialogues.IActor,System.String>
struct UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84;
// UnityEngine.Events.UnityAction`2<System.Object,System.Object>
struct UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C;
// UnityEngine.Events.UnityAction`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>
struct UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD;
// UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>
struct UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323;
// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct UnityEventPlus_1_t245050830307174359558122FEB39B5CAE1A2C5B;
// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`1<System.Object>
struct UnityEventPlus_1_tEAB3BAFDD454E97AD02B9240EB64CDFD3F97B033;
// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`2<CleverCrow.Fluid.Dialogues.IActor,System.String>
struct UnityEventPlus_2_t4CF0F963FCD66FB12875818FE20FD5DE8E0167F6;
// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`2<System.Object,System.Object>
struct UnityEventPlus_2_t55525A2A6DE26C70FF0FC583F70C49278574B839;
// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>
struct UnityEventPlus_3_tE33CAF9FB976151CBB00093186B3DE44D5514BCA;
// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`3<System.Object,System.Object,System.Object>
struct UnityEventPlus_3_t02BF8ECCC7B395CF5997AE3A3C0AD5A263CE1E6A;
// System.Collections.Generic.Dictionary`2/ValueCollection<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>
struct ValueCollection_t019D7282309F31F3C7D5257F76BAA58B2D0325F5;
// System.Collections.Generic.Dictionary`2/Entry<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>[]
struct EntryU5BU5D_t23C16A4AEEE21BB6564F48B0C12C037172E779DE;
// CleverCrow.Fluid.Dialogues.Actions.ActionDataBase[]
struct ActionDataBaseU5BU5D_t814FE81BD24404008AE611895405EF989F63706B;
// CleverCrow.Fluid.Dialogues.Choices.ChoiceData[]
struct ChoiceDataU5BU5D_t2C959EF0C3DD4F9DD3E884AAE1117F4875670B42;
// CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase[]
struct ConditionDataBaseU5BU5D_t59BC008AE3F714ACE8FE07C07F655439A466897D;
// System.Delegate[]
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
// CleverCrow.Fluid.Dialogues.Actions.IAction[]
struct IActionU5BU5D_t2AB913C25BBA5DAE5ADE6B1DF9C7D1DD65BA2290;
// CleverCrow.Fluid.Dialogues.Choices.IChoice[]
struct IChoiceU5BU5D_t3950CCECB4AB785BD0ED541C3A2B16D747BBA7E8;
// CleverCrow.Fluid.Dialogues.Conditions.ICondition[]
struct IConditionU5BU5D_t23603E4F8F78F476CF7773A1357E45E7B655F182;
// CleverCrow.Fluid.Dialogues.IDialoguePlayback[]
struct IDialoguePlaybackU5BU5D_t840D1157BD8EBF0F8C6EF3A7DBBBE24A9D4A81D1;
// CleverCrow.Fluid.Dialogues.IGameObjectOverride[]
struct IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B;
// CleverCrow.Fluid.Dialogues.Nodes.INode[]
struct INodeU5BU5D_t5802F2E877DDB282D212DF5213BF03ABF39201D4;
// CleverCrow.Fluid.Dialogues.Nodes.INodeData[]
struct INodeDataU5BU5D_t0D77F137F10E3B804CF754CB49EF317DEB81B28C;
// System.Int32[]
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase[]
struct NodeDataBaseU5BU5D_tDECC4FEC2CF968E6E7419BC819E07C33899F1E36;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// CleverCrow.Fluid.Dialogues.Actions.ActionDataBase
struct ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A;
// CleverCrow.Fluid.Dialogues.Actions.ActionRuntime
struct ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4;
// CleverCrow.Fluid.Dialogues.ActorDefinition
struct ActorDefinition_t6CE6862EB9811D59BCC2CB1F015F146749E43C56;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA;
// CleverCrow.Fluid.Dialogues.Choices.ChoiceData
struct ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B;
// CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime
struct ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1;
// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal
struct ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181;
// CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase
struct ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13;
// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionFloatInternal
struct ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB;
// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionIntInternal
struct ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252;
// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionLocalFloat
struct ConditionLocalFloat_t12443C1934380E89457873099C4C4E7713F5EFA8;
// CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime
struct ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2;
// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal
struct ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E;
// CleverCrow.Fluid.Dialogues.CreateMenuAttribute
struct CreateMenuAttribute_t0416B13EA1CECDBC1B9755178AC1A5C01A1CD134;
// CleverCrow.Fluid.Databases.DatabaseInstance
struct DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6;
// CleverCrow.Fluid.Dialogues.DatabaseInstanceExtended
struct DatabaseInstanceExtended_t15C63825E419153A8192C7569066976C0199D966;
// System.DelegateData
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
// CleverCrow.Fluid.Dialogues.DialogueController
struct DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9;
// CleverCrow.Fluid.Dialogues.DialogueEvents
struct DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642;
// CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph
struct DialogueGraph_tFB52BBF60FBA29C5FEA831527820A71CDE6B7C67;
// CleverCrow.Fluid.Dialogues.DialoguePlayback
struct DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// CleverCrow.Fluid.Dialogues.GameObjectOverride
struct GameObjectOverride_t2C942720B578D92FAFFC82E5BAEBE868B6E9C459;
// CleverCrow.Fluid.Dialogues.Actions.GameObjects.GameObjectWrapper
struct GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09;
// CleverCrow.Fluid.Databases.GlobalDatabaseManager
struct GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD;
// CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime
struct GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90;
// CleverCrow.Fluid.Dialogues.Actions.IAction
struct IAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA;
// CleverCrow.Fluid.Dialogues.Actions.IActionData
struct IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570;
// CleverCrow.Fluid.Dialogues.IActor
struct IActor_t6F1E6D1BC99E3E8154F09C7363568F8A3471F897;
// CleverCrow.Fluid.Dialogues.Choices.IChoice
struct IChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947;
// CleverCrow.Fluid.Dialogues.Conditions.ICondition
struct ICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E;
// CleverCrow.Fluid.Dialogues.Conditions.IConditionData
struct IConditionData_t7DF0E9833BB017C02C78F0CC4B3BAA88AF865FC0;
// CleverCrow.Fluid.Databases.IDatabaseInstance
struct IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C;
// CleverCrow.Fluid.Dialogues.IDatabaseInstanceExtended
struct IDatabaseInstanceExtended_t9519B545E11E2A1A8EA4422A7476BB55156A9B1E;
// CleverCrow.Fluid.Dialogues.IDialogueController
struct IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9;
// CleverCrow.Fluid.Dialogues.IDialogueEvents
struct IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A;
// CleverCrow.Fluid.Dialogues.IDialoguePlayback
struct IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// CleverCrow.Fluid.Dialogues.IGameObjectOverride
struct IGameObjectOverride_t00468D277F1CFB51D1EF3774FF4EFAED3F78CE47;
// CleverCrow.Fluid.Dialogues.Actions.GameObjects.IGameObjectWrapper
struct IGameObjectWrapper_t8C598A1B3E990FE3155B55DF01ED10366DC1F52C;
// CleverCrow.Fluid.Dialogues.Graphs.IGraph
struct IGraph_tFE3B64FEB94003143B6CA2E7E97B1048059D8494;
// CleverCrow.Fluid.Dialogues.Graphs.IGraphData
struct IGraphData_tF12C00F99972A5A1214D886271D2A3498391637C;
// CleverCrow.Fluid.Dialogues.Nodes.INode
struct INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4;
// CleverCrow.Fluid.Dialogues.Nodes.INodeData
struct INodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB;
// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent
struct IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2;
// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
// UnityEngine.Events.InvokableCallList
struct InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382;
// CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase
struct IsBoolBase_tBE8F69B28E209056A1612F89C522936DB083A31A;
// CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase
struct IsFloatBase_tBB384209F064C9839737C88F5052E068AA096500;
// CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalBool
struct IsGlobalBool_t0AF09ABA630C8928BC7B6179D97BF822CDF75974;
// CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalFloat
struct IsGlobalFloat_tD798A517E206A3A9AA47884AF1FE2CA5A3B3620C;
// CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalInt
struct IsGlobalInt_t912888F1231776735BC2316B44FAE5A0D9040CAA;
// CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalString
struct IsGlobalString_tC0CCC3026D51F941F3C7E87F6B238FFB8C024C05;
// CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase
struct IsIntBase_t5EFBA1CE0BDE50A2A13596DA2386115B31509694;
// CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalBool
struct IsLocalBool_t7D39FF4DB31ED501B4885B97D56D0CCB81037EE9;
// CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalInt
struct IsLocalInt_tCBBCDD652FDF51C66D440D44ECD4EE3D1C40AEE9;
// CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalString
struct IsLocalString_t9F5D718590E567849848AD3E16A963BB1B5AE38D;
// CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase
struct IsStringBase_tEAE9D3376325403A542F796C4B721BA46865FFDF;
// CleverCrow.Fluid.Dialogues.KeyValueDataGameObject
struct KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13;
// CleverCrow.Fluid.Databases.KeyValueDefinitionBool
struct KeyValueDefinitionBool_tE0EF412D06FF4D3F027E6734F4304913A443133F;
// CleverCrow.Fluid.Databases.KeyValueDefinitionFloat
struct KeyValueDefinitionFloat_tB0177062C6945A3B87B6DF9C8F1F06951809B039;
// CleverCrow.Fluid.Dialogues.GameObjectVariables.KeyValueDefinitionGameObject
struct KeyValueDefinitionGameObject_t20E8737AA36DEA537928D7A75C6C122DFF030924;
// CleverCrow.Fluid.Databases.KeyValueDefinitionInt
struct KeyValueDefinitionInt_tC8B6ADFA0355494C5F04EAE11CBF7468B7F79E26;
// CleverCrow.Fluid.Databases.KeyValueDefinitionString
struct KeyValueDefinitionString_t815BAF297BD0D21F2E4373026F9090B0F35FC7E7;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// CleverCrow.Fluid.Dialogues.Nodes.NodeBase
struct NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541;
// CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub
struct NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5;
// CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData
struct NodeChoiceHubData_tB1DE65176358281E3D0D36C42AB5BEE2BBE828FF;
// CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase
struct NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538;
// CleverCrow.Fluid.Dialogues.Nodes.NodeDataChoiceBase
struct NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21;
// CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue
struct NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94;
// CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData
struct NodeDialogueData_t69285310CE2D4FFB7BB66F8E047C50BCF8A9E534;
// CleverCrow.Fluid.Dialogues.Nodes.NodeHub
struct NodeHub_t80809D4275ADE45FDF8C2C880EF599525E39E052;
// CleverCrow.Fluid.Dialogues.Nodes.NodeHubData
struct NodeHubData_tC89E8996C6C021DA39C672B1E5CDD013FED469FC;
// CleverCrow.Fluid.Dialogues.Nodes.NodeLink
struct NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2;
// CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData
struct NodeLinkData_tB49C734A7E11B1EC0C433F1EC094CA2D90E171C2;
// CleverCrow.Fluid.Dialogues.Nodes.PlayGraph.NodePlayGraph
struct NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2;
// CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData
struct NodePlayGraphData_tB8A5AA7DEAB545A3446EC67FC9175462FF8E9178;
// CleverCrow.Fluid.Dialogues.Nodes.NodeRoot
struct NodeRoot_t05250B67BFA4EF640AD30B6B033505F7542B003A;
// CleverCrow.Fluid.Dialogues.Nodes.NodeRootData
struct NodeRootData_t93221D85686F3184886F573001FEB5AD4BBEA3F6;
// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.Events.PersistentCallGroup
struct PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActive
struct SetActive_t24E13A9ED37349030B33689945DA4DA1426F34AB;
// CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActiveInternal
struct SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalBool
struct SetGlobalBool_t99913E190711894AD9FC727FD32CAA89C6E64AD8;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalFloat
struct SetGlobalFloat_tCB739E4960C47984F6B3837B1F6839CFE0CE38C0;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalInt
struct SetGlobalInt_t76BE68A46BF446FCBEEA512C459BBA6EE24F4529;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalString
struct SetGlobalString_t702FC0F2AF11A6ACD5AEB6AA6AE9719E457CF7C7;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalBool
struct SetLocalBool_t14F5BB17A453367B693DF33548EC93D0F1F015D0;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalFloat
struct SetLocalFloat_tFF9ABA01780CC8851C2357F1158907D1E0A91E5C;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalInt
struct SetLocalInt_t1B13BCB823DF2B7D26468C2A8202AB0C80AD85B6;
// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalString
struct SetLocalString_t89163CC446432BFEEF6CC6DA2C8CC787B53D7E61;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.String
struct String_t;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus
struct UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// CleverCrow.Fluid.Dialogues.Choices.ChoiceData/<>c
struct U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD;
// CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c
struct U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643;
// CleverCrow.Fluid.Dialogues.DialogueController/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015;
// CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c
struct U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189;
// CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E;
// CleverCrow.Fluid.Dialogues.Nodes.NodeBase/<>c
struct U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513;
// CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub/<>c
struct U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB;
// CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B;
// CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase/<>c
struct U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F;
// CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue/<>c
struct U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606;
// CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD;
// CleverCrow.Fluid.Dialogues.Nodes.NodeHubData/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0;
// CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD;
// CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49;
// CleverCrow.Fluid.Dialogues.Nodes.NodeRootData/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42;

IL2CPP_EXTERN_C RuntimeClass* ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IConditionData_t7DF0E9833BB017C02C78F0CC4B3BAA88AF865FC0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDatabaseInstanceExtended_t9519B545E11E2A1A8EA4422A7476BB55156A9B1E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGameObjectOverride_t00468D277F1CFB51D1EF3774FF4EFAED3F78CE47_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGameObjectWrapper_t8C598A1B3E990FE3155B55DF01ED10366DC1F52C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGetRuntime_1_t1E10A7C6F194512D4ABF162C198CEF855C93B699_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGraphData_tF12C00F99972A5A1214D886271D2A3498391637C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IGraph_tFE3B64FEB94003143B6CA2E7E97B1048059D8494_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueData_1_t046EA48861A90497331417C2E6C30569EF4F9108_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueData_1_t3A45F4121547C948C3C5EF9E440C1337ED0554E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueData_1_t4044AF64FAB64B7FC17FB04843C5917722F67CF4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueData_1_t76FEEA4F8F2BF2FBEA5280BF7983EC34B4DEB8DE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueData_1_t8756DDDED77EF3AFD10F475CBA4EEA0A4F54991A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueDefinition_1_t0B882A5BE7978D3343EAC252839775C3D2910877_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueDefinition_1_t9CD47DEA88011964A18FD9AF2DB76E0544BA4028_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueDefinition_1_t9CDCD77D0EF910D0D9602DBA7A5DDA56D7EAFAE1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueDefinition_1_tB6F0933B8BAE7329E0999255BF50B74C30F1EBAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IKeyValueDefinition_1_tFA5B2790F8FA4A5E4E1994D40942218CA67CD5DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeHub_t80809D4275ADE45FDF8C2C880EF599525E39E052_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NodeRoot_t05250B67BFA4EF640AD30B6B033505F7542B003A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NumberComparison_t2C16ED15863020FBD0517464AD1300F24BCA6169_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEventPlus_1_t245050830307174359558122FEB39B5CAE1A2C5B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEventPlus_2_t4CF0F963FCD66FB12875818FE20FD5DE8E0167F6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEventPlus_3_tE33CAF9FB976151CBB00093186B3DE44D5514BCA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral2A403A82FEBDA3DAE4AAD126B0A14FB4A494B114;
IL2CPP_EXTERN_C String_t* _stringLiteral6863CAD535BA256436DF16C3A52F453D14B6C897;
IL2CPP_EXTERN_C String_t* _stringLiteral71DECDC19124BD615CE6CB0307C994A4FDEE2E7E;
IL2CPP_EXTERN_C String_t* _stringLiteral8C1DECCBFE6A09FBBCC805B887CEE861C1074D58;
IL2CPP_EXTERN_C String_t* _stringLiteral8DE11A69BD92601072F79AD141164E40AD1BED91;
IL2CPP_EXTERN_C String_t* _stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1;
IL2CPP_EXTERN_C String_t* _stringLiteralA4EA82509CD601492786BD6005E6AF555C9438C1;
IL2CPP_EXTERN_C String_t* _stringLiteralC8E970ADB7B2CB9EC4B24CF97A6534BE1DA70386;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionFloatInternal_IsComparisonValid_mE67FB753DC6BACD60B3058963A369A81C7F67829_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ConditionIntInternal_IsComparisonValid_m87162723D308144B0753B2554E737A5A7D63C72A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DialogueController_PlayChild_m3E67C8FE930AD1A489528DBD7542E6347C235761_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DialogueController_TriggerBegin_mA2BCB9704F0C22BF04004DB4E27462D95FE85ABF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DialogueController_TriggerChoice_mC29E893CA2751146B69A56D7462990DF293FD975_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DialogueController_TriggerEnd_mCCD41D52F390B107EAC55C5DEDBB7160EF6FC140_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DialogueController_TriggerEnterNode_mA2645C7937B5AB12ABAB526534AB244BA684C18D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* DialogueController_TriggerSpeak_m9A14106687ED6AF688489B7F8C4DCD7A0A2C48CE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mC987F8FDAA14160903F9EE706923F5A166B6399E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OrderBy_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAB70E05F40E4EDBCFA3940F569EA7BEE5FDF34E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m9F64CDBF7E99BDF9B8C7B5D864B20935477633BF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mE7AC743ED9CB300D82FF9407AE99E88187F82E4F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_m07A9E37C857A256260CD4B11CC073D807494CBB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_m6493C156138DA5CDAB8864D4DF3A78EA26DEF20B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Select_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mBBCF7333567D151155F6A9069A1AFB2D05D70E46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToDictionary_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mB1F7AF19E4C37685D0A8287D3A032D5B0C13A6C6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m5B4FEFF77C43A50068C8A1C643BCC0FA0027F112_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mAC81C5943212218996269CDAFA4DD8537B72B191_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mEB172E486789889EF656F7AA0B569506E8BDCEB7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_m7D2F8299F6EBBFDB253B16D26A3D9B5DCD639F24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_ToList_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m9809FD660A4057D1F3432A3586F1BD2AA1E0C479_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_Where_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFC16612603DC0F12F59B70267DDC055294C3DA9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m054FE6EE163208E65CEB69E17815C340E54BF802_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m643FA38FBDF1EA0222BBFDCF784B82A955DB885C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD148EEFA188CA6D67C956987B918488DBDF17766_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m55B62A3B02390A7EC9C572591C6050B9216D9F1D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m60BFC792592F1D7A3F86E683ECE1F5A15951C131_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m6987C49A60C79B65D2F70F29A1D582E9E21F27A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5ADAA379F919D7BD4100F73C5A2E49C88D277D68_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7DAE628EFE8C2D1451CBAD12E7E00B7EDEE87697_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m7F95AD8AC608E6CA772C907FD4D52265646EFA82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IsBoolBase_OnGetIsValid_mD44FF5C4DBACD45DF38D11659864B20E68F37899_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IsStringBase_OnGetIsValid_m37CA8CD43D6C35E8BAAD6632D478791B8CA18E63_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueDataBase_1__ctor_mE77664C6553BFB75B3466D43E06ACF68879AB850_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueDataGameObject_Load_m131B8379969FF650BAE85B525E82C66421E23E6F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueDataGameObject_Save_mDC2E48F6BEA0D60EB7E3F97A791A535BA1CC63F5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* KeyValueDefinitionBase_1__ctor_mF09A2E913EA009F6F3BA6437CBA9CC396727D9DA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_m8DDFE6EE4781EB34AE3288CD5CA72C8B4F92D1B8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m2C814C3E02048E3EB50383C4B9307EE5E76EA487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_m34BCB8AE1ED3FED9423D204A530FA7D965475F75_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m09651D47A021BE344D17E1442C89CF7B9097D3AA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m7BFD3E19EFCAE05BEB5F34B98AB4D5CB782E980B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m28E4969BE39E8A4DCD7C20AB3F99B7FB94FBE0A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m405B28AA997D3F3CE2B479845D98518CC97DFD46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m56D74C3AF5C0CC22A50207DDA9FF14CB0FE971C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mD54E3CDD8EFB1C92C4666DBB4C7BB44FF94DACBC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m8AC2EE0C0984AF1AE6FB511A99EEB78544E54C70_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_mEB4B5FFBDB1D710AACAAA55F7C74426F58D1C769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m441156EFE622EF828338745E4C8B4F1131FE5AB3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m493A3596DBAB6CF3F622CB9DBD6956F18DDD48D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_mE3830BD5EBC0B9C923BDAB6B593FECF7458FF663_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeBase_GetChoice_mA5665BE306A03127BF27815056EA2E79856AE27A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeBase_U3Cget_IsValidU3Eb__11_0_mEECF6ABA91CCCB606FD3C190D9F2B76643F39FB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeChoiceHub_GetChoice_m778933F33B02385B5E78373B55374EDD2D13F3D0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeChoiceHub_Next_m5864535093A2D617B76219257FA39E5F4929E947_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeChoiceHub_Play_m85C5E3551515C1D323BC4F9BC8C185480182E118_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeChoiceHub_U3Cget_IsValidU3Eb__12_0_mE1E09F04EC360D50FB3FAED9A7002154EBC63A5B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeNestedDataBase_1__ctor_m19124CAF88453B36FEFB8C511A3E7D20E00C1564_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* NodeNestedDataBase_1__ctor_mABA61AF21D7E5E30F60D5AB5D81A8B50646687BB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m73558D40A2AFC28AFCA8098AC04CB50A18029D46_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mFD27C822514AC67ABBC16E94F9237D6C83119832_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mBE032E58964F59920B806877058AFA78264AE29F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m0263759834E7910E0C014C9CA3B3BE5EC0531FA8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Dequeue_mDEE73D10D742E9279FB56EC2C02F447C912AE463_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Enqueue_m39C4AA37CB09EA5C8B505B8A1DF02027718F0E76_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_Peek_m4966003EA6BFC6D725EDE60707DE3FD147C16AC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1__ctor_m6ED1CE1C5A29DC27AFC2EF02A3D2C42E77CB366F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SetLocalVariableBase_1__ctor_m7A88DE20F0D70FD848810851DBFAECDB102BDE18_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Clear_mCE5314233902A0B969CF4689616124075C2F852A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_GetEnumerator_m91A3DE3011E0145024714CCDC2AD55CD27F3011B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Peek_m31F22C983DED30DE8E5DA6EE6318A3BB332A4D0D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mBDC188A1A8FBEA5C6B015298980A36C6E7C73450_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_mFD2564B72172D02B2B71EB48A913D9D85F49252A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1__ctor_m649827DF51C38649AEEFCFECBE131B99370A1343_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_get_Count_m40D04F323BFB3C29254FD79A7942D8F5133FB333_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetValidChildNodeU3Eb__14_0_mF7253396DD5F24533B00D261C32341DD7A8AB434_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CGetValidChoicesU3Eb__5_0_m2EF21AFBB28A2C3D48BCB1D7A8946BEA3E1C9938_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CNextU3Eb__21_0_m47311509F6BE64ACD036720CA8CC5E18902D39FB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSortConnectionsByPositionU3Eb__11_0_m71BF163DF66780FE8BE7E5A954A557DBA69EB974_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CSortConnectionsByPositionU3Eb__24_0_m490E08F8BFE5F54428661DA51CD010E8C9AED568_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3C_ctorU3Eb__4_0_m937A9B365A62846BE22AB14653DB1E417E36B32E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_HubChoicesU3Eb__14_0_mA696B284E56A974B692035791C14ABB4DDCD372F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3Cget_IsValidU3Eb__10_0_m163BC8B7EAAE40A8E1C4AFF013CB9E1AA74BE7FE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__0_m22031139D2B1E5FED45A81EC3CE8FB525347E9FD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__1_mF3258E672DD64D2BFCEB2F2D09FD597E36E11546_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__2_m77F91991F2AE32C98D03D4686F0C589C8C5F831B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass17_0_U3CPlayChildU3Eb__0_m78B03A90C2FF061616A540D2BB08F35F2AC5C79B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__0_m2F795C56789D8550218BD8B4E5CCD00FE7BA5E78_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__0_m8A7B15847DE8D9477560FE8B7436B5FB61CDF0E0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__1_m293A46F0CCAD9AE45581BCB11BB9802361B58D94_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__1_m754486C9B7001777B1EFDB679C5A650EB591DB6A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__2_m208D731FBE7B5A84B782DAE3A406EDC43696D583_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__2_mC41661E8D60EB59BF87023DFABB59EDF08BE93E9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__0_m0323D5892004C3B7B52728A2352279FC97FE70E4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__1_m734D50B00E8F0905ED3BA7699E76C1F6AF18BC55_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__2_mC7C9E3DC73B61FC5E6F98E3CBFA34F562910EA4A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CGetRuntimeU3Eb__0_m41E8B2FB5D1FEF89A843573110727AF11DAB51AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3CGetRuntimeU3Eb__1_m2F293BB4DB0930AB2FFCDADC90A9438FDBEE11D7_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__1_m6D81817A0C91D45F62B990B6FA2E35772268E854_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__0_m3641416029231352651481781FCFCD068EDCAACB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__1_m97318803E21FC04F2C21DB275C971CC6FEEAE37B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__2_mD6A4EDCD196F14ADB2A8F988FACBEE03850CAE06_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__3_m42DF2B6B1060980A6372F701385552F333619DC5_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventPlus_1__ctor_m484B33DA9ECDBEE073F5680274E77D1A69EA9C24_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventPlus_2__ctor_m4988A196BDB76CD00DA1E34436FB2E9EFCAEFBEB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnityEventPlus_3__ctor_mFA453255F648BF4E279857875478DB9C3467515B_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBBB776D26EED08FD7907A46819102EE5967AC8A5 
{
};

// System.Collections.Generic.Dictionary`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>
struct Dictionary_2_tA3ED857B5FCBE99603A8DA2A6AF89CC6EB0DDD37  : public RuntimeObject
{
	// System.Int32[] System.Collections.Generic.Dictionary`2::_buckets
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ____buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::_entries
	EntryU5BU5D_t23C16A4AEEE21BB6564F48B0C12C037172E779DE* ____entries_1;
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
	KeyCollection_t30E8CA2BB18E2C1BAEDCC2DDBC0A47E7DC678E4D* ____keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::_values
	ValueCollection_t019D7282309F31F3C7D5257F76BAA58B2D0325F5* ____values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject* ____syncRoot_9;
};

// CleverCrow.Fluid.Databases.KeyValueDataBase`1<UnityEngine.GameObject>
struct KeyValueDataBase_1_t93FD5A652A686D61254DF3E882C64A5A98F5B2A7  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<System.String,System.Collections.Generic.List`1<System.Action`1<V>>> CleverCrow.Fluid.Databases.KeyValueDataBase`1::_callbacks
	Dictionary_2_t5680AD2618702781AAF214F7DB22117D323F79FB* ____callbacks_0;
	// System.Collections.Generic.Dictionary`2<System.String,V> CleverCrow.Fluid.Databases.KeyValueDataBase`1::_data
	Dictionary_2_t0B15A60B00EC883D4249611C6C641C7BED5A71CE* ____data_1;
};

// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>
struct List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ActionDataBaseU5BU5D_t814FE81BD24404008AE611895405EF989F63706B* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ActionDataBaseU5BU5D_t814FE81BD24404008AE611895405EF989F63706B* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>
struct List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ChoiceDataU5BU5D_t2C959EF0C3DD4F9DD3E884AAE1117F4875670B42* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ChoiceDataU5BU5D_t2C959EF0C3DD4F9DD3E884AAE1117F4875670B42* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>
struct List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	ConditionDataBaseU5BU5D_t59BC008AE3F714ACE8FE07C07F655439A466897D* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	ConditionDataBaseU5BU5D_t59BC008AE3F714ACE8FE07C07F655439A466897D* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>
struct List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IActionU5BU5D_t2AB913C25BBA5DAE5ADE6B1DF9C7D1DD65BA2290* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IActionU5BU5D_t2AB913C25BBA5DAE5ADE6B1DF9C7D1DD65BA2290* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>
struct List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IChoiceU5BU5D_t3950CCECB4AB785BD0ED541C3A2B16D747BBA7E8* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IChoiceU5BU5D_t3950CCECB4AB785BD0ED541C3A2B16D747BBA7E8* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>
struct List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IConditionU5BU5D_t23603E4F8F78F476CF7773A1357E45E7B655F182* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IConditionU5BU5D_t23603E4F8F78F476CF7773A1357E45E7B655F182* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	INodeU5BU5D_t5802F2E877DDB282D212DF5213BF03ABF39201D4* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	INodeU5BU5D_t5802F2E877DDB282D212DF5213BF03ABF39201D4* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>
struct List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	INodeDataU5BU5D_t0D77F137F10E3B804CF754CB49EF317DEB81B28C* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	INodeDataU5BU5D_t0D77F137F10E3B804CF754CB49EF317DEB81B28C* ___s_emptyArray_5;
};

// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>
struct List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	NodeDataBaseU5BU5D_tDECC4FEC2CF968E6E7419BC819E07C33899F1E36* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	NodeDataBaseU5BU5D_tDECC4FEC2CF968E6E7419BC819E07C33899F1E36* ___s_emptyArray_5;
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

// System.Collections.Generic.Queue`1<CleverCrow.Fluid.Dialogues.Actions.IAction>
struct Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	IActionU5BU5D_t2AB913C25BBA5DAE5ADE6B1DF9C7D1DD65BA2290* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Queue`1<System.Object>
struct Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Queue`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Queue`1::_head
	int32_t ____head_1;
	// System.Int32 System.Collections.Generic.Queue`1::_tail
	int32_t ____tail_2;
	// System.Int32 System.Collections.Generic.Queue`1::_size
	int32_t ____size_3;
	// System.Int32 System.Collections.Generic.Queue`1::_version
	int32_t ____version_4;
	// System.Object System.Collections.Generic.Queue`1::_syncRoot
	RuntimeObject* ____syncRoot_5;
};

// System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback>
struct Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	IDialoguePlaybackU5BU5D_t840D1157BD8EBF0F8C6EF3A7DBBBE24A9D4A81D1* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5  : public RuntimeObject
{
	// T[] System.Collections.Generic.Stack`1::_array
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject* ____syncRoot_3;
};

// CleverCrow.Fluid.Dialogues.Actions.ActionRuntime
struct ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::_dialogueController
	RuntimeObject* ____dialogueController_0;
	// CleverCrow.Fluid.Dialogues.Actions.IActionData CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::_data
	RuntimeObject* ____data_1;
	// System.Boolean CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::_initUsed
	bool ____initUsed_2;
	// System.Boolean CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::_startUsed
	bool ____startUsed_3;
	// System.Boolean CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::_resetReady
	bool ____resetReady_4;
	// System.Boolean CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::_active
	bool ____active_5;
	// System.String CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::<UniqueId>k__BackingField
	String_t* ___U3CUniqueIdU3Ek__BackingField_6;
};
struct Il2CppArrayBounds;

// System.Attribute
struct Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA  : public RuntimeObject
{
};

// CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime
struct ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.Graphs.IGraph CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::_runtime
	RuntimeObject* ____runtime_0;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData> CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::_children
	List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ____children_1;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::_childrenRuntimeCache
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* ____childrenRuntimeCache_2;
	// System.String CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::<UniqueId>k__BackingField
	String_t* ___U3CUniqueIdU3Ek__BackingField_3;
	// System.String CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::<Text>k__BackingField
	String_t* ___U3CTextU3Ek__BackingField_4;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal
struct ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181  : public RuntimeObject
{
	// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal::_database
	RuntimeObject* ____database_0;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionFloatInternal
struct ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB  : public RuntimeObject
{
	// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionFloatInternal::_database
	RuntimeObject* ____database_0;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionIntInternal
struct ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252  : public RuntimeObject
{
	// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionIntInternal::_database
	RuntimeObject* ____database_0;
};

// CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime
struct ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime::_dialogueController
	RuntimeObject* ____dialogueController_0;
	// CleverCrow.Fluid.Dialogues.Conditions.IConditionData CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime::_data
	RuntimeObject* ____data_1;
	// System.Boolean CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime::_initTriggered
	bool ____initTriggered_2;
	// System.String CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime::<UniqueId>k__BackingField
	String_t* ___U3CUniqueIdU3Ek__BackingField_3;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal
struct ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E  : public RuntimeObject
{
	// CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal::_database
	RuntimeObject* ____database_0;
};

// CleverCrow.Fluid.Databases.DatabaseInstance
struct DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6  : public RuntimeObject
{
	// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Databases.DatabaseInstance::<Bools>k__BackingField
	RuntimeObject* ___U3CBoolsU3Ek__BackingField_0;
	// CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Databases.DatabaseInstance::<Strings>k__BackingField
	RuntimeObject* ___U3CStringsU3Ek__BackingField_1;
	// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Databases.DatabaseInstance::<Ints>k__BackingField
	RuntimeObject* ___U3CIntsU3Ek__BackingField_2;
	// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Databases.DatabaseInstance::<Floats>k__BackingField
	RuntimeObject* ___U3CFloatsU3Ek__BackingField_3;
};

// CleverCrow.Fluid.Dialogues.DialogueController
struct DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9  : public RuntimeObject
{
	// System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback> CleverCrow.Fluid.Dialogues.DialogueController::_activeDialogue
	Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* ____activeDialogue_0;
	// CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.DialogueController::<LocalDatabase>k__BackingField
	RuntimeObject* ___U3CLocalDatabaseU3Ek__BackingField_1;
	// CleverCrow.Fluid.Dialogues.IDatabaseInstanceExtended CleverCrow.Fluid.Dialogues.DialogueController::<LocalDatabaseExtended>k__BackingField
	RuntimeObject* ___U3CLocalDatabaseExtendedU3Ek__BackingField_2;
	// CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.DialogueController::<Events>k__BackingField
	RuntimeObject* ___U3CEventsU3Ek__BackingField_3;
};

// CleverCrow.Fluid.Dialogues.DialogueEvents
struct DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642  : public RuntimeObject
{
	// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.DialogueEvents::<Begin>k__BackingField
	RuntimeObject* ___U3CBeginU3Ek__BackingField_0;
	// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.DialogueEvents::<End>k__BackingField
	RuntimeObject* ___U3CEndU3Ek__BackingField_1;
	// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String> CleverCrow.Fluid.Dialogues.DialogueEvents::<Speak>k__BackingField
	RuntimeObject* ___U3CSpeakU3Ek__BackingField_2;
	// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>> CleverCrow.Fluid.Dialogues.DialogueEvents::<Choice>k__BackingField
	RuntimeObject* ___U3CChoiceU3Ek__BackingField_3;
	// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.DialogueEvents::<NodeEnter>k__BackingField
	RuntimeObject* ___U3CNodeEnterU3Ek__BackingField_4;
};

// CleverCrow.Fluid.Dialogues.DialoguePlayback
struct DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF  : public RuntimeObject
{
	// System.Boolean CleverCrow.Fluid.Dialogues.DialoguePlayback::_playing
	bool ____playing_0;
	// System.Collections.Generic.Queue`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.DialoguePlayback::_actionQueue
	Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* ____actionQueue_1;
	// CleverCrow.Fluid.Dialogues.Graphs.IGraph CleverCrow.Fluid.Dialogues.DialoguePlayback::_graph
	RuntimeObject* ____graph_2;
	// CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.DialoguePlayback::<Events>k__BackingField
	RuntimeObject* ___U3CEventsU3Ek__BackingField_3;
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.DialoguePlayback::<ParentCtrl>k__BackingField
	RuntimeObject* ___U3CParentCtrlU3Ek__BackingField_4;
	// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.DialoguePlayback::<Pointer>k__BackingField
	RuntimeObject* ___U3CPointerU3Ek__BackingField_5;
};

// CleverCrow.Fluid.Dialogues.GameObjectOverride
struct GameObjectOverride_t2C942720B578D92FAFFC82E5BAEBE868B6E9C459  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.GameObjectVariables.KeyValueDefinitionGameObject CleverCrow.Fluid.Dialogues.GameObjectOverride::_variable
	KeyValueDefinitionGameObject_t20E8737AA36DEA537928D7A75C6C122DFF030924* ____variable_0;
	// UnityEngine.GameObject CleverCrow.Fluid.Dialogues.GameObjectOverride::_gameObject
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____gameObject_1;
};

// CleverCrow.Fluid.Dialogues.Actions.GameObjects.GameObjectWrapper
struct GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09  : public RuntimeObject
{
	// UnityEngine.GameObject CleverCrow.Fluid.Dialogues.Actions.GameObjects.GameObjectWrapper::_go
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ____go_0;
};

// CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime
struct GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90  : public RuntimeObject
{
	// System.Collections.Generic.Dictionary`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime::_dataToRuntime
	Dictionary_2_tA3ED857B5FCBE99603A8DA2A6AF89CC6EB0DDD37* ____dataToRuntime_0;
	// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime::<Root>k__BackingField
	RuntimeObject* ___U3CRootU3Ek__BackingField_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeBase
struct NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541  : public RuntimeObject
{
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::_children
	List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ____children_0;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::_conditions
	List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ____conditions_1;
	// CleverCrow.Fluid.Dialogues.Graphs.IGraph CleverCrow.Fluid.Dialogues.Nodes.NodeBase::_runtime
	RuntimeObject* ____runtime_2;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::_childrenRuntimeCache
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* ____childrenRuntimeCache_3;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::<EnterActions>k__BackingField
	List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___U3CEnterActionsU3Ek__BackingField_4;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::<ExitActions>k__BackingField
	List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___U3CExitActionsU3Ek__BackingField_5;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::<HubChoices>k__BackingField
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* ___U3CHubChoicesU3Ek__BackingField_6;
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeBase::<UniqueId>k__BackingField
	String_t* ___U3CUniqueIdU3Ek__BackingField_7;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub
struct NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5  : public RuntimeObject
{
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::_choiceList
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* ____choiceList_0;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition> CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::_conditions
	List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ____conditions_1;
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::<UniqueId>k__BackingField
	String_t* ___U3CUniqueIdU3Ek__BackingField_2;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::<EnterActions>k__BackingField
	List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___U3CEnterActionsU3Ek__BackingField_3;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::<ExitActions>k__BackingField
	List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___U3CExitActionsU3Ek__BackingField_4;
};

// CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActiveInternal
struct SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.Actions.GameObjects.IGameObjectWrapper CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActiveInternal::_go
	RuntimeObject* ____go_0;
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

// UnityEngine.Events.UnityEventBase
struct UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8  : public RuntimeObject
{
	// UnityEngine.Events.InvokableCallList UnityEngine.Events.UnityEventBase::m_Calls
	InvokableCallList_t309E1C8C7CE885A0D2F98C84CEA77A8935688382* ___m_Calls_0;
	// UnityEngine.Events.PersistentCallGroup UnityEngine.Events.UnityEventBase::m_PersistentCalls
	PersistentCallGroup_tB826EDF15DC80F71BCBCD8E410FD959A04C33F25* ___m_PersistentCalls_1;
	// System.Boolean UnityEngine.Events.UnityEventBase::m_CallsDirty
	bool ___m_CallsDirty_2;
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

// CleverCrow.Fluid.Dialogues.Choices.ChoiceData/<>c
struct U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD  : public RuntimeObject
{
};

struct U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_StaticFields
{
	// CleverCrow.Fluid.Dialogues.Choices.ChoiceData/<>c CleverCrow.Fluid.Dialogues.Choices.ChoiceData/<>c::<>9
	U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD* ___U3CU3E9_0;
	// System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase,System.Single> CleverCrow.Fluid.Dialogues.Choices.ChoiceData/<>c::<>9__11_0
	Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* ___U3CU3E9__11_0_1;
};

// CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c
struct U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643  : public RuntimeObject
{
};

struct U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields
{
	// CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c::<>9
	U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643* ___U3CU3E9_0;
	// System.Predicate`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c::<>9__10_0
	Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* ___U3CU3E9__10_0_1;
	// System.Predicate`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c::<>9__14_0
	Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* ___U3CU3E9__14_0_2;
};

// CleverCrow.Fluid.Dialogues.DialogueController/<>c__DisplayClass17_0
struct U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.DialogueController CleverCrow.Fluid.Dialogues.DialogueController/<>c__DisplayClass17_0::<>4__this
	DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* ___U3CU3E4__this_0;
	// CleverCrow.Fluid.Dialogues.IDialoguePlayback CleverCrow.Fluid.Dialogues.DialogueController/<>c__DisplayClass17_0::parentDialogue
	RuntimeObject* ___parentDialogue_1;
};

// CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c
struct U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189  : public RuntimeObject
{
};

struct U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_StaticFields
{
	// CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c::<>9
	U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189* ___U3CU3E9_0;
	// System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INodeData> CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c::<>9__4_0
	Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE* ___U3CU3E9__4_0_1;
};

// CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c__DisplayClass4_0::<>4__this
	GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* ___U3CU3E4__this_0;
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c__DisplayClass4_0::dialogue
	RuntimeObject* ___dialogue_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeBase/<>c
struct U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513  : public RuntimeObject
{
};

struct U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_StaticFields
{
	// CleverCrow.Fluid.Dialogues.Nodes.NodeBase/<>c CleverCrow.Fluid.Dialogues.Nodes.NodeBase/<>c::<>9
	U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513* ___U3CU3E9_0;
	// System.Predicate`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Nodes.NodeBase/<>c::<>9__21_0
	Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* ___U3CU3E9__21_0_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub/<>c
struct U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB  : public RuntimeObject
{
};

struct U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_StaticFields
{
	// CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub/<>c CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub/<>c::<>9
	U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB* ___U3CU3E9_0;
	// System.Func`2<CleverCrow.Fluid.Dialogues.Choices.IChoice,System.Boolean> CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub/<>c::<>9__14_0
	Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* ___U3CU3E9__14_0_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData/<>c__DisplayClass4_0
struct U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.Graphs.IGraph CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData/<>c__DisplayClass4_0::graphRuntime
	RuntimeObject* ___graphRuntime_0;
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData/<>c__DisplayClass4_0::dialogue
	RuntimeObject* ___dialogue_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase/<>c
struct U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F  : public RuntimeObject
{
};

struct U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_StaticFields
{
	// CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase/<>c CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase/<>c::<>9
	U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F* ___U3CU3E9_0;
	// System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase,System.Single> CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase/<>c::<>9__24_0
	Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* ___U3CU3E9__24_0_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue/<>c
struct U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606  : public RuntimeObject
{
};

struct U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_StaticFields
{
	// CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue/<>c CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue/<>c::<>9
	U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606* ___U3CU3E9_0;
	// System.Func`2<CleverCrow.Fluid.Dialogues.Choices.IChoice,System.Boolean> CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue/<>c::<>9__5_0
	Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* ___U3CU3E9__5_0_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0
struct U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.Graphs.IGraph CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0::graphRuntime
	RuntimeObject* ___graphRuntime_0;
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0::controller
	RuntimeObject* ___controller_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeHubData/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.Graphs.IGraph CleverCrow.Fluid.Dialogues.Nodes.NodeHubData/<>c__DisplayClass2_0::graphRuntime
	RuntimeObject* ___graphRuntime_0;
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Nodes.NodeHubData/<>c__DisplayClass2_0::dialogue
	RuntimeObject* ___dialogue_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData/<>c__DisplayClass0_0
struct U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.Graphs.IGraph CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData/<>c__DisplayClass0_0::graphRuntime
	RuntimeObject* ___graphRuntime_0;
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData/<>c__DisplayClass0_0::dialogue
	RuntimeObject* ___dialogue_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData/<>c__DisplayClass3_0
struct U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.Graphs.IGraph CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData/<>c__DisplayClass3_0::graphRuntime
	RuntimeObject* ___graphRuntime_0;
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData/<>c__DisplayClass3_0::dialogue
	RuntimeObject* ___dialogue_1;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeRootData/<>c__DisplayClass2_0
struct U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42  : public RuntimeObject
{
	// CleverCrow.Fluid.Dialogues.Graphs.IGraph CleverCrow.Fluid.Dialogues.Nodes.NodeRootData/<>c__DisplayClass2_0::graphRuntime
	RuntimeObject* ___graphRuntime_0;
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Nodes.NodeRootData/<>c__DisplayClass2_0::dialogue
	RuntimeObject* ___dialogue_1;
};

// System.Collections.Generic.List`1/Enumerator<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>
struct Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* ____current_3;
};

// System.Collections.Generic.List`1/Enumerator<CleverCrow.Fluid.Dialogues.Actions.IAction>
struct Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
};

// System.Collections.Generic.Stack`1/Enumerator<CleverCrow.Fluid.Dialogues.IDialoguePlayback>
struct Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59 
{
	// System.Collections.Generic.Stack`1<T> System.Collections.Generic.Stack`1/Enumerator::_stack
	Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* ____stack_0;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Stack`1/Enumerator::_currentElement
	RuntimeObject* ____currentElement_3;
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

// System.Collections.Generic.Stack`1/Enumerator<System.Object>
struct Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974 
{
	// System.Collections.Generic.Stack`1<T> System.Collections.Generic.Stack`1/Enumerator::_stack
	Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* ____stack_0;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::_version
	int32_t ____version_1;
	// System.Int32 System.Collections.Generic.Stack`1/Enumerator::_index
	int32_t ____index_2;
	// T System.Collections.Generic.Stack`1/Enumerator::_currentElement
	RuntimeObject* ____currentElement_3;
};

// UnityEngine.Events.UnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct UnityEvent_1_t343B500EB244BC6617F49A72FF45CE1F6D0462A5  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`1::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String>
struct UnityEvent_2_tF16479BA8DB0EE5D77A25FB7A636BC080CA8E38F  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`2::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Events.UnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>
struct UnityEvent_3_tDD785E6958E0AE798E2840D82348FA7AE9186A86  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent`3::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
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

// CleverCrow.Fluid.Dialogues.CreateMenuAttribute
struct CreateMenuAttribute_t0416B13EA1CECDBC1B9755178AC1A5C01A1CD134  : public Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA
{
	// System.String CleverCrow.Fluid.Dialogues.CreateMenuAttribute::<Path>k__BackingField
	String_t* ___U3CPathU3Ek__BackingField_0;
	// System.Int32 CleverCrow.Fluid.Dialogues.CreateMenuAttribute::<Priority>k__BackingField
	int32_t ___U3CPriorityU3Ek__BackingField_1;
};

// CleverCrow.Fluid.Dialogues.DatabaseInstanceExtended
struct DatabaseInstanceExtended_t15C63825E419153A8192C7569066976C0199D966  : public DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6
{
	// CleverCrow.Fluid.Databases.IKeyValueData`1<UnityEngine.GameObject> CleverCrow.Fluid.Dialogues.DatabaseInstanceExtended::<GameObjects>k__BackingField
	RuntimeObject* ___U3CGameObjectsU3Ek__BackingField_4;
};

// System.Guid
struct Guid_t 
{
	// System.Int32 System.Guid::_a
	int32_t ____a_1;
	// System.Int16 System.Guid::_b
	int16_t ____b_2;
	// System.Int16 System.Guid::_c
	int16_t ____c_3;
	// System.Byte System.Guid::_d
	uint8_t ____d_4;
	// System.Byte System.Guid::_e
	uint8_t ____e_5;
	// System.Byte System.Guid::_f
	uint8_t ____f_6;
	// System.Byte System.Guid::_g
	uint8_t ____g_7;
	// System.Byte System.Guid::_h
	uint8_t ____h_8;
	// System.Byte System.Guid::_i
	uint8_t ____i_9;
	// System.Byte System.Guid::_j
	uint8_t ____j_10;
	// System.Byte System.Guid::_k
	uint8_t ____k_11;
};

struct Guid_t_StaticFields
{
	// System.Guid System.Guid::Empty
	Guid_t ___Empty_0;
};

// System.Int32
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;
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

// CleverCrow.Fluid.Dialogues.KeyValueDataGameObject
struct KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13  : public KeyValueDataBase_1_t93FD5A652A686D61254DF3E882C64A5A98F5B2A7
{
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue
struct NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94  : public NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541
{
	// CleverCrow.Fluid.Dialogues.IActor CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::_actor
	RuntimeObject* ____actor_8;
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::_dialogue
	String_t* ____dialogue_9;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::_choices
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* ____choices_10;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::_emittedChoices
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* ____emittedChoices_11;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeHub
struct NodeHub_t80809D4275ADE45FDF8C2C880EF599525E39E052  : public NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541
{
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeLink
struct NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2  : public NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541
{
};

// CleverCrow.Fluid.Dialogues.Nodes.PlayGraph.NodePlayGraph
struct NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2  : public NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541
{
	// CleverCrow.Fluid.Dialogues.Graphs.IGraphData CleverCrow.Fluid.Dialogues.Nodes.PlayGraph.NodePlayGraph::_graph
	RuntimeObject* ____graph_8;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeRoot
struct NodeRoot_t05250B67BFA4EF640AD30B6B033505F7542B003A  : public NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541
{
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

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.Events.UnityEvent
struct UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977  : public UnityEventBase_t4968A4C72559F35C0923E4BD9C042C3A842E1DB8
{
	// System.Object[] UnityEngine.Events.UnityEvent::m_InvokeArray
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___m_InvokeArray_3;
};

// UnityEngine.Vector2
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;
};

struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector_9;
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

// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct UnityEventPlus_1_t245050830307174359558122FEB39B5CAE1A2C5B  : public UnityEvent_1_t343B500EB244BC6617F49A72FF45CE1F6D0462A5
{
};

// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`2<CleverCrow.Fluid.Dialogues.IActor,System.String>
struct UnityEventPlus_2_t4CF0F963FCD66FB12875818FE20FD5DE8E0167F6  : public UnityEvent_2_tF16479BA8DB0EE5D77A25FB7A636BC080CA8E38F
{
};

// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>
struct UnityEventPlus_3_tE33CAF9FB976151CBB00093186B3DE44D5514BCA  : public UnityEvent_3_tDD785E6958E0AE798E2840D82348FA7AE9186A86
{
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

// CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus
struct UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1  : public UnityEvent_tDC2C3548799DBC91D1E3F3DE60083A66F4751977
{
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.SystemException
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase,CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>
struct Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468  : public MulticastDelegate_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase,CleverCrow.Fluid.Dialogues.Actions.IAction>
struct Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603  : public MulticastDelegate_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Choices.ChoiceData,CleverCrow.Fluid.Dialogues.Choices.ChoiceData>
struct Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB  : public MulticastDelegate_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Choices.ChoiceData,CleverCrow.Fluid.Dialogues.Choices.IChoice>
struct Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2  : public MulticastDelegate_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase,CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>
struct Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4  : public MulticastDelegate_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase,CleverCrow.Fluid.Dialogues.Conditions.ICondition>
struct Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599  : public MulticastDelegate_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Choices.IChoice,System.Boolean>
struct Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5  : public MulticastDelegate_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>
struct Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0  : public MulticastDelegate_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INodeData>
struct Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE  : public MulticastDelegate_t
{
};

// System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase,System.Single>
struct Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2  : public MulticastDelegate_t
{
};

// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Boolean>
struct KeyValueDefinitionBase_1_tAFEC137E4DDA2D46D5451CBBC2A13F7F36437E19  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::key
	String_t* ___key_5;
	// V CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::defaultValue
	bool ___defaultValue_6;
};

// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<UnityEngine.GameObject>
struct KeyValueDefinitionBase_1_t9BCE62C4CCD9322298E321FE00668B3A21B71C0F  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::key
	String_t* ___key_5;
	// V CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::defaultValue
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___defaultValue_6;
};

// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Int32>
struct KeyValueDefinitionBase_1_t7389216B5FF39E1D9ADD22C9CC602C3F406DE214  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::key
	String_t* ___key_5;
	// V CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::defaultValue
	int32_t ___defaultValue_6;
};

// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Single>
struct KeyValueDefinitionBase_1_t596DC453332741575B7F68051A76AE65B5E42E8D  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::key
	String_t* ___key_5;
	// V CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::defaultValue
	float ___defaultValue_6;
};

// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.String>
struct KeyValueDefinitionBase_1_t50A71AA8D2B0A60CCE1E76DF9EA4AEF251C7796C  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::key
	String_t* ___key_5;
	// V CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1::defaultValue
	String_t* ___defaultValue_6;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>
struct NodeNestedDataBase_1_tBFAF0B539820435EFC36920F096035AB74DC6C1A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1::_title
	String_t* ____title_4;
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1::_uniqueId
	String_t* ____uniqueId_5;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>
struct NodeNestedDataBase_1_t67C8B2762D6F87FB1B86E2B4CB4022F93A844C08  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1::_title
	String_t* ____title_4;
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1::_uniqueId
	String_t* ____uniqueId_5;
};

// System.Predicate`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>
struct Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64  : public MulticastDelegate_t
{
};

// System.Predicate`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`1<CleverCrow.Fluid.Dialogues.Nodes.INode>
struct UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`2<CleverCrow.Fluid.Dialogues.IActor,System.String>
struct UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84  : public MulticastDelegate_t
{
};

// UnityEngine.Events.UnityAction`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>
struct UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD  : public MulticastDelegate_t
{
};

// CleverCrow.Fluid.Dialogues.ActorDefinition
struct ActorDefinition_t6CE6862EB9811D59BCC2CB1F015F146749E43C56  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Dialogues.ActorDefinition::_displayName
	String_t* ____displayName_4;
	// UnityEngine.Sprite CleverCrow.Fluid.Dialogues.ActorDefinition::_portrait
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ____portrait_5;
};

// System.ArgumentException
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	// System.String System.ArgumentException::_paramName
	String_t* ____paramName_18;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// CleverCrow.Fluid.Dialogues.Choices.ChoiceData
struct ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Dialogues.Choices.ChoiceData::text
	String_t* ___text_4;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase> CleverCrow.Fluid.Dialogues.Choices.ChoiceData::children
	List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* ___children_5;
	// System.String CleverCrow.Fluid.Dialogues.Choices.ChoiceData::_uniqueId
	String_t* ____uniqueId_6;
};

// CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph
struct DialogueGraph_tFB52BBF60FBA29C5FEA831527820A71CDE6B7C67  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase> CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph::_nodes
	List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* ____nodes_4;
	// CleverCrow.Fluid.Dialogues.Nodes.NodeRootData CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph::root
	NodeRootData_t93221D85686F3184886F573001FEB5AD4BBEA3F6* ___root_5;
	// UnityEngine.Vector2 CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph::scrollPosition
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___scrollPosition_6;
};

// System.InvalidOperationException
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase
struct NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::_uniqueId
	String_t* ____uniqueId_4;
	// UnityEngine.Rect CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::rect
	Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D ___rect_5;
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::nodeTitle
	String_t* ___nodeTitle_6;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase> CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::children
	List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* ___children_7;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase> CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::conditions
	List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* ___conditions_8;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase> CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::enterActions
	List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* ___enterActions_9;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase> CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::exitActions
	List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* ___exitActions_10;
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::<DefaultName>k__BackingField
	String_t* ___U3CDefaultNameU3Ek__BackingField_11;
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.ChoiceData> CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::<Choices>k__BackingField
	List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* ___U3CChoicesU3Ek__BackingField_12;
};

// System.NotImplementedException
struct NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7  : public MulticastDelegate_t
{
};

// CleverCrow.Fluid.Dialogues.Actions.ActionDataBase
struct ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A  : public NodeNestedDataBase_1_tBFAF0B539820435EFC36920F096035AB74DC6C1A
{
};

// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	// System.Object System.ArgumentOutOfRangeException::_actualValue
	RuntimeObject* ____actualValue_19;
};

// CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase
struct ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13  : public NodeNestedDataBase_1_t67C8B2762D6F87FB1B86E2B4CB4022F93A844C08
{
};

// CleverCrow.Fluid.Databases.KeyValueDefinitionBool
struct KeyValueDefinitionBool_tE0EF412D06FF4D3F027E6734F4304913A443133F  : public KeyValueDefinitionBase_1_tAFEC137E4DDA2D46D5451CBBC2A13F7F36437E19
{
};

// CleverCrow.Fluid.Databases.KeyValueDefinitionFloat
struct KeyValueDefinitionFloat_tB0177062C6945A3B87B6DF9C8F1F06951809B039  : public KeyValueDefinitionBase_1_t596DC453332741575B7F68051A76AE65B5E42E8D
{
};

// CleverCrow.Fluid.Dialogues.GameObjectVariables.KeyValueDefinitionGameObject
struct KeyValueDefinitionGameObject_t20E8737AA36DEA537928D7A75C6C122DFF030924  : public KeyValueDefinitionBase_1_t9BCE62C4CCD9322298E321FE00668B3A21B71C0F
{
};

// CleverCrow.Fluid.Databases.KeyValueDefinitionInt
struct KeyValueDefinitionInt_tC8B6ADFA0355494C5F04EAE11CBF7468B7F79E26  : public KeyValueDefinitionBase_1_t7389216B5FF39E1D9ADD22C9CC602C3F406DE214
{
};

// CleverCrow.Fluid.Databases.KeyValueDefinitionString
struct KeyValueDefinitionString_t815BAF297BD0D21F2E4373026F9090B0F35FC7E7  : public KeyValueDefinitionBase_1_t50A71AA8D2B0A60CCE1E76DF9EA4AEF251C7796C
{
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeDataChoiceBase
struct NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21  : public NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538
{
	// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.ChoiceData> CleverCrow.Fluid.Dialogues.Nodes.NodeDataChoiceBase::choices
	List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* ___choices_13;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeHubData
struct NodeHubData_tC89E8996C6C021DA39C672B1E5CDD013FED469FC  : public NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538
{
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData
struct NodeLinkData_tB49C734A7E11B1EC0C433F1EC094CA2D90E171C2  : public NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538
{
};

// CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData
struct NodePlayGraphData_tB8A5AA7DEAB545A3446EC67FC9175462FF8E9178  : public NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538
{
	// CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData::dialogueGraph
	DialogueGraph_tFB52BBF60FBA29C5FEA831527820A71CDE6B7C67* ___dialogueGraph_13;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeRootData
struct NodeRootData_t93221D85686F3184886F573001FEB5AD4BBEA3F6  : public NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538
{
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Boolean>
struct SetLocalVariableBase_1_t8543DBE204C11B3E56704D9CC5E5A079643548DE  : public ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A
{
	// CleverCrow.Fluid.Dialogues.Actions.Databases.SetKeyValueInternal`1<T> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1::_setKeyValue
	SetKeyValueInternal_1_tC7B061062A2E87D83C0F97CE5767F617B7CB1968* ____setKeyValue_6;
	// T CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1::_value
	bool ____value_7;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Int32>
struct SetLocalVariableBase_1_t60E979B585DFB0F31414EA57929E87F95D142E22  : public ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A
{
	// CleverCrow.Fluid.Dialogues.Actions.Databases.SetKeyValueInternal`1<T> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1::_setKeyValue
	SetKeyValueInternal_1_tAF4A74B8A306267B93E711DBE4A6F1515D903427* ____setKeyValue_6;
	// T CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1::_value
	int32_t ____value_7;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Single>
struct SetLocalVariableBase_1_t2DD498A2F3A84F8DDF31BC9C142147C01A32945E  : public ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A
{
	// CleverCrow.Fluid.Dialogues.Actions.Databases.SetKeyValueInternal`1<T> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1::_setKeyValue
	SetKeyValueInternal_1_t3EFDB8E735B6F34A838289C4112D8AFAE33A7B26* ____setKeyValue_6;
	// T CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1::_value
	float ____value_7;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.String>
struct SetLocalVariableBase_1_tFCAEEDFAE4E00F62C9FDC6010A738C9AE7FE3EF0  : public ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A
{
	// CleverCrow.Fluid.Dialogues.Actions.Databases.SetKeyValueInternal`1<T> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1::_setKeyValue
	SetKeyValueInternal_1_tBE22FA248828AD73633BFBFDCA0C479313E899CC* ____setKeyValue_6;
	// T CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1::_value
	String_t* ____value_7;
};

// CleverCrow.Fluid.Utilities.Singleton`1<CleverCrow.Fluid.Databases.GlobalDatabaseManager>
struct Singleton_1_t21406BDE9F818A39164D64A4B9183D5A9A0216E6  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

struct Singleton_1_t21406BDE9F818A39164D64A4B9183D5A9A0216E6_StaticFields
{
	// T CleverCrow.Fluid.Utilities.Singleton`1::_instance
	GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* ____instance_4;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase
struct IsBoolBase_tBE8F69B28E209056A1612F89C522936DB083A31A  : public ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13
{
	// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase::_condition
	ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* ____condition_6;
	// CleverCrow.Fluid.Databases.KeyValueDefinitionBool CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase::_variable
	KeyValueDefinitionBool_tE0EF412D06FF4D3F027E6734F4304913A443133F* ____variable_7;
	// CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase/Comparison CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase::_comparison
	int32_t ____comparison_8;
	// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase::_value
	bool ____value_9;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase
struct IsFloatBase_tBB384209F064C9839737C88F5052E068AA096500  : public ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13
{
	// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionFloatInternal CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase::_condition
	ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB* ____condition_6;
	// CleverCrow.Fluid.Databases.KeyValueDefinitionFloat CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase::_variable
	KeyValueDefinitionFloat_tB0177062C6945A3B87B6DF9C8F1F06951809B039* ____variable_7;
	// CleverCrow.Fluid.Dialogues.Actions.Databases.NumberComparison CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase::_comparison
	int32_t ____comparison_8;
	// System.Single CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase::_value
	float ____value_9;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase
struct IsIntBase_t5EFBA1CE0BDE50A2A13596DA2386115B31509694  : public ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13
{
	// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionIntInternal CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase::_condition
	ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252* ____condition_6;
	// CleverCrow.Fluid.Databases.KeyValueDefinitionInt CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase::_variable
	KeyValueDefinitionInt_tC8B6ADFA0355494C5F04EAE11CBF7468B7F79E26* ____variable_7;
	// CleverCrow.Fluid.Dialogues.Actions.Databases.NumberComparison CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase::_comparison
	int32_t ____comparison_8;
	// System.Int32 CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase::_value
	int32_t ____value_9;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase
struct IsStringBase_tEAE9D3376325403A542F796C4B721BA46865FFDF  : public ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13
{
	// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase::_condition
	ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* ____condition_6;
	// CleverCrow.Fluid.Databases.KeyValueDefinitionString CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase::_variable
	KeyValueDefinitionString_t815BAF297BD0D21F2E4373026F9090B0F35FC7E7* ____variable_7;
	// CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase/Comparison CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase::_comparison
	int32_t ____comparison_8;
	// System.String CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase::_value
	String_t* ____value_9;
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData
struct NodeChoiceHubData_tB1DE65176358281E3D0D36C42AB5BEE2BBE828FF  : public NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21
{
};

// CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData
struct NodeDialogueData_t69285310CE2D4FFB7BB66F8E047C50BCF8A9E534  : public NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21
{
	// CleverCrow.Fluid.Dialogues.ActorDefinition CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData::actor
	ActorDefinition_t6CE6862EB9811D59BCC2CB1F015F146749E43C56* ___actor_14;
	// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData::dialogue
	String_t* ___dialogue_15;
};

// CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActive
struct SetActive_t24E13A9ED37349030B33689945DA4DA1426F34AB  : public ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A
{
	// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActive::_dialogue
	RuntimeObject* ____dialogue_6;
	// CleverCrow.Fluid.Dialogues.GameObjectVariables.KeyValueDefinitionGameObject CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActive::_gameObject
	KeyValueDefinitionGameObject_t20E8737AA36DEA537928D7A75C6C122DFF030924* ____gameObject_7;
	// System.Boolean CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActive::_setActive
	bool ____setActive_8;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionLocalFloat
struct ConditionLocalFloat_t12443C1934380E89457873099C4C4E7713F5EFA8  : public IsFloatBase_tBB384209F064C9839737C88F5052E068AA096500
{
};

// CleverCrow.Fluid.Databases.GlobalDatabaseManager
struct GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD  : public Singleton_1_t21406BDE9F818A39164D64A4B9183D5A9A0216E6
{
	// CleverCrow.Fluid.Databases.DatabaseInstance CleverCrow.Fluid.Databases.GlobalDatabaseManager::<Database>k__BackingField
	DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* ___U3CDatabaseU3Ek__BackingField_5;
};

// CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalBool
struct IsGlobalBool_t0AF09ABA630C8928BC7B6179D97BF822CDF75974  : public IsBoolBase_tBE8F69B28E209056A1612F89C522936DB083A31A
{
};

// CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalFloat
struct IsGlobalFloat_tD798A517E206A3A9AA47884AF1FE2CA5A3B3620C  : public IsFloatBase_tBB384209F064C9839737C88F5052E068AA096500
{
};

// CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalInt
struct IsGlobalInt_t912888F1231776735BC2316B44FAE5A0D9040CAA  : public IsIntBase_t5EFBA1CE0BDE50A2A13596DA2386115B31509694
{
};

// CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalString
struct IsGlobalString_tC0CCC3026D51F941F3C7E87F6B238FFB8C024C05  : public IsStringBase_tEAE9D3376325403A542F796C4B721BA46865FFDF
{
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalBool
struct IsLocalBool_t7D39FF4DB31ED501B4885B97D56D0CCB81037EE9  : public IsBoolBase_tBE8F69B28E209056A1612F89C522936DB083A31A
{
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalInt
struct IsLocalInt_tCBBCDD652FDF51C66D440D44ECD4EE3D1C40AEE9  : public IsIntBase_t5EFBA1CE0BDE50A2A13596DA2386115B31509694
{
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalString
struct IsLocalString_t9F5D718590E567849848AD3E16A963BB1B5AE38D  : public IsStringBase_tEAE9D3376325403A542F796C4B721BA46865FFDF
{
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalBool
struct SetGlobalBool_t99913E190711894AD9FC727FD32CAA89C6E64AD8  : public SetLocalVariableBase_1_t8543DBE204C11B3E56704D9CC5E5A079643548DE
{
	// CleverCrow.Fluid.Databases.KeyValueDefinitionBool CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalBool::_variable
	KeyValueDefinitionBool_tE0EF412D06FF4D3F027E6734F4304913A443133F* ____variable_8;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalFloat
struct SetGlobalFloat_tCB739E4960C47984F6B3837B1F6839CFE0CE38C0  : public SetLocalVariableBase_1_t2DD498A2F3A84F8DDF31BC9C142147C01A32945E
{
	// CleverCrow.Fluid.Databases.KeyValueDefinitionFloat CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalFloat::_variable
	KeyValueDefinitionFloat_tB0177062C6945A3B87B6DF9C8F1F06951809B039* ____variable_8;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalInt
struct SetGlobalInt_t76BE68A46BF446FCBEEA512C459BBA6EE24F4529  : public SetLocalVariableBase_1_t60E979B585DFB0F31414EA57929E87F95D142E22
{
	// CleverCrow.Fluid.Databases.KeyValueDefinitionInt CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalInt::_variable
	KeyValueDefinitionInt_tC8B6ADFA0355494C5F04EAE11CBF7468B7F79E26* ____variable_8;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalString
struct SetGlobalString_t702FC0F2AF11A6ACD5AEB6AA6AE9719E457CF7C7  : public SetLocalVariableBase_1_tFCAEEDFAE4E00F62C9FDC6010A738C9AE7FE3EF0
{
	// CleverCrow.Fluid.Databases.KeyValueDefinitionString CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalString::_variable
	KeyValueDefinitionString_t815BAF297BD0D21F2E4373026F9090B0F35FC7E7* ____variable_8;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalBool
struct SetLocalBool_t14F5BB17A453367B693DF33548EC93D0F1F015D0  : public SetLocalVariableBase_1_t8543DBE204C11B3E56704D9CC5E5A079643548DE
{
	// CleverCrow.Fluid.Databases.KeyValueDefinitionBool CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalBool::_variable
	KeyValueDefinitionBool_tE0EF412D06FF4D3F027E6734F4304913A443133F* ____variable_8;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalFloat
struct SetLocalFloat_tFF9ABA01780CC8851C2357F1158907D1E0A91E5C  : public SetLocalVariableBase_1_t2DD498A2F3A84F8DDF31BC9C142147C01A32945E
{
	// CleverCrow.Fluid.Databases.KeyValueDefinitionFloat CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalFloat::_variable
	KeyValueDefinitionFloat_tB0177062C6945A3B87B6DF9C8F1F06951809B039* ____variable_8;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalInt
struct SetLocalInt_t1B13BCB823DF2B7D26468C2A8202AB0C80AD85B6  : public SetLocalVariableBase_1_t60E979B585DFB0F31414EA57929E87F95D142E22
{
	// CleverCrow.Fluid.Databases.KeyValueDefinitionInt CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalInt::_variable
	KeyValueDefinitionInt_tC8B6ADFA0355494C5F04EAE11CBF7468B7F79E26* ____variable_8;
};

// CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalString
struct SetLocalString_t89163CC446432BFEEF6CC6DA2C8CC787B53D7E61  : public SetLocalVariableBase_1_tFCAEEDFAE4E00F62C9FDC6010A738C9AE7FE3EF0
{
	// CleverCrow.Fluid.Databases.KeyValueDefinitionString CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalString::_variable
	KeyValueDefinitionString_t815BAF297BD0D21F2E4373026F9090B0F35FC7E7* ____variable_8;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// CleverCrow.Fluid.Dialogues.IGameObjectOverride[]
struct IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B  : public RuntimeArray
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


// System.Int32 System.Collections.Generic.Stack`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared (UnityAction_2_tCCCBE77741D4E611E102D49D355D4DA6C9797A0C* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`3<System.Object,System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared (UnityAction_3_t61020A175240225D5FB1BF6CEC0575F375C51323* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared (UnityAction_1_t9C30BCD020745BF400CBACF22C6F34ADBA2DDA6A* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974 Stack_1_GetEnumerator_m0CCBAC4DEE59DAE0D095E9ABAE44E17B5002382C_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD6422E5378FE2766C61A38D9395E7BC436F73753_gshared (Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m241C2D2B1FFE03EBF3E39578784BF20B5A4A67BD_gshared (Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mACF5F0B611CD40A1A2176D2512173D43C23B4C68_gshared (Enumerator_t852186DADC50D976C4BD8FE59C506354ED48B974* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Databases.KeyValueDataBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataBase_1__ctor_mFD7DC8FA2EB4022C34B2A9D358CFCA5313D3313E_gshared (KeyValueDataBase_1_t055283D96877C4D26A8CD7C62F63A34C314C3A58* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Dequeue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Queue`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<System.Object>::Peek()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Queue`1<System.Object>::Enqueue(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`2<System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventPlus_2__ctor_mC4316A00042E8413C21884A779F02EFB85BFDBDC_gshared (UnityEventPlus_2_t55525A2A6DE26C70FF0FC583F70C49278574B839* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`3<System.Object,System.Object,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventPlus_3__ctor_m64AEA2E45E0741686CE59F0935A180311D8872BC_gshared (UnityEventPlus_3_t02BF8ECCC7B395CF5997AE3A3C0AD5A263CE1E6A* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventPlus_1__ctor_m68DE5E28B59A3569DC54FF05EB1CC605348273F9_gshared (UnityEventPlus_1_tEAB3BAFDD454E97AD02B9240EB64CDFD3F97B033* __this, const RuntimeMethod* method) ;
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared (Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::Find(System.Predicate`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___match0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Boolean>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared (Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared (RuntimeObject* ___source0, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___predicate1, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<System.Object>(System.Collections.Generic.IEnumerable`1<TSource>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared (Func_2_tACBF5A1656250800CE861707354491F0611F6624* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___selector1, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Add(T)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___item0, const RuntimeMethod* method) ;
// System.Void System.Func`2<System.Object,System.Single>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_2__ctor_m04EB988C3F849C1BE164FC6656C2281DF47EEAA7_gshared (Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<System.Object,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OrderBy_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB2315DD162DED6E65C9B440629954A1B156816CD_gshared (RuntimeObject* ___source0, Func_2_tB5C40A90702B6A6A2E315FD927EEFC9FB69F2B12* ___keySelector1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<System.Object>(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared (RuntimeObject* ___original0, const RuntimeMethod* method) ;
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<System.Object,System.Object,System.Object>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mA712BB5A297282995D1266B8F0BD27C3C7E16E9A_gshared (RuntimeObject* ___source0, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___keySelector1, Func_2_tACBF5A1656250800CE861707354491F0611F6624* ___elementSelector2, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<System.Object,System.Object>::get_Item(TKey)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared (Dictionary_2_t14FE4A752A83D53771C584E4C8D14E01F2AFD7BA* __this, RuntimeObject* ___key0, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDefinitionBase_1__ctor_m2CE6C454B0F368608F4CBF9632AACCD98BD04B8A_gshared (KeyValueDefinitionBase_1_t9A51DC0A84A45E3A6E870EDD63EF3ABB09534C73* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeNestedDataBase_1__ctor_m656A143127AB70A47CCE0429336789659096E226_gshared (NodeNestedDataBase_1_tD6854BFD71AC23609130B29B6C4AE96FF4D69343* __this, const RuntimeMethod* method) ;
// T CleverCrow.Fluid.Utilities.Singleton`1<System.Object>::get_Instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Singleton_1_get_Instance_mB73AE5879F2D9677E140B979F6482DB9B983A825_gshared (const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Boolean>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077_gshared (SetLocalVariableBase_1_t8543DBE204C11B3E56704D9CC5E5A079643548DE* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Single>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97_gshared (SetLocalVariableBase_1_t2DD498A2F3A84F8DDF31BC9C142147C01A32945E* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Int32>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811_gshared (SetLocalVariableBase_1_t60E979B585DFB0F31414EA57929E87F95D142E22* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLocalVariableBase_1__ctor_mA033729BB698D8F4D3B9406C94C76439919FB9A0_gshared (SetLocalVariableBase_1_t44B98E080F3971CA18D3428A93A0B3A389FE59E3* __this, const RuntimeMethod* method) ;

// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Void System.Attribute::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2 (Attribute_tFDA8EFEFB0711976D22474794576DAF28F7440AA* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Databases.IKeyValueData`1<UnityEngine.GameObject> CleverCrow.Fluid.Dialogues.DatabaseInstanceExtended::get_GameObjects()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstanceExtended_get_GameObjects_mA551A925451902AC3A4AD3D3A5A3591AD02FC60C_inline (DatabaseInstanceExtended_t15C63825E419153A8192C7569066976C0199D966* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.KeyValueDataGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataGameObject__ctor_m77058B08E5DC4C065A2DABDE064436E049B08DD6 (KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Databases.DatabaseInstance::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInstance__ctor_m74A8D4AFF98B95B2300D3D7138C3A10EFB90036B (DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::get_Count()
inline int32_t Stack_1_get_Count_m40D04F323BFB3C29254FD79A7942D8F5133FB333_inline (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142*, const RuntimeMethod*))Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::Peek()
inline RuntimeObject* Stack_1_Peek_m31F22C983DED30DE8E5DA6EE6318A3BB332A4D0D (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142*, const RuntimeMethod*))Stack_1_Peek_mF0ECF6A61726B66E6D9B33D8C4DEAA47E586E6E4_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::.ctor()
inline void Stack_1__ctor_m649827DF51C38649AEEFCFECBE131B99370A1343 (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142*, const RuntimeMethod*))Stack_1__ctor_m70E8EDA96A608CE9BAB7FC8313B233AADA573BD4_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueEvents__ctor_mE1FB2B08D6F9CA934096CD55EC430C1F0934EC43 (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* __this, const RuntimeMethod* method) ;
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::SetupDatabases(CleverCrow.Fluid.Dialogues.IGameObjectOverride[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_SetupDatabases_m453903FCE7B86F5A3A90465904FEBCFDD16BB4F6 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* ___gameObjectOverrides0, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_Stop_m8D193F801F43B0B80FC91E0178B62CA384BCDCDE (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Events.UnityAction`2<CleverCrow.Fluid.Dialogues.IActor,System.String>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_2__ctor_m73192C5FCD89049E393183766002A5F27BBAC9B8 (UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_2__ctor_m13361A4FDB34792A370647BE3DCFDF2AE9043F43_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityAction`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_3__ctor_m2A456C4ABEDE226C5B489DF00200BCD6E8F93176 (UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_3__ctor_mA0AAA8732CC80C1BD1A6ACE2B9EDCD66F6335E99_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityAction`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::.ctor(System.Object,System.IntPtr)
inline void UnityAction_1__ctor_m43180E6530413E081CA528D444EF3E530E8D2101 (UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF*, RuntimeObject*, intptr_t, const RuntimeMethod*))UnityAction_1__ctor_m0C2FC6B483B474AE9596A43EBA7FF6E85503A92A_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Events.UnityAction::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131 (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::Push(T)
inline void Stack_1_Push_mFD2564B72172D02B2B71EB48A913D9D85F49252A (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142*, RuntimeObject*, const RuntimeMethod*))Stack_1_Push_m709DD11BC1291A905814182CF9A367DE7399A778_gshared)(__this, ___item0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime::.ctor(CleverCrow.Fluid.Dialogues.IDialogueController,CleverCrow.Fluid.Dialogues.Graphs.IGraphData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphRuntime__ctor_m8391F4F082240CF0711C724E83C57FA4E7D3EE94 (GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* __this, RuntimeObject* ___dialogue0, RuntimeObject* ___data1, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController,CleverCrow.Fluid.Dialogues.IDialogueEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback__ctor_mF4595D92E3DB39BABB4175E98B9736795F4E4194 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, RuntimeObject* ___graph0, RuntimeObject* ___ctrl1, RuntimeObject* ___events2, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::Play(CleverCrow.Fluid.Dialogues.IDialoguePlayback,CleverCrow.Fluid.Dialogues.IGameObjectOverride[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_Play_m6FE1C07262987F1898D5FB17F7CD85B79D9ADF6C (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___playback0, IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* ___gameObjectOverrides1, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.DialogueController::get_LocalDatabase()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_LocalDatabase_m9E9955CF8A69076CEBDF799DBAAEE5A6450BF624_inline (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Dialogues.IDatabaseInstanceExtended CleverCrow.Fluid.Dialogues.DialogueController::get_LocalDatabaseExtended()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_LocalDatabaseExtended_mD7666060C9DA165CC252E8BFB007B4F7FBF53139_inline (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialogueController/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mC6FD338EC72EB333C3CBA81D6296A492A621A768 (U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Dialogues.IDialoguePlayback CleverCrow.Fluid.Dialogues.DialogueController::get_ActiveDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_ActiveDialogue_m8CEF80D50A40BC9E843135D2ACEB3B4E02B67111 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) ;
// System.Void System.InvalidOperationException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___message0, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::PlayChild(CleverCrow.Fluid.Dialogues.IDialoguePlayback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_PlayChild_m3E67C8FE930AD1A489528DBD7542E6347C235761 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___playback0, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.DialogueController::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_Events_mF666051CE457B51A33CB4FFD15264FC9552D4945_inline (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::Pop()
inline RuntimeObject* Stack_1_Pop_mBDC188A1A8FBEA5C6B015298980A36C6E7C73450 (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142*, const RuntimeMethod*))Stack_1_Pop_m2AFF69249659372F07EE25817DBCAFE74E1CF778_gshared)(__this, method);
}
// System.Collections.Generic.Stack`1/Enumerator<T> System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::GetEnumerator()
inline Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59 Stack_1_GetEnumerator_m91A3DE3011E0145024714CCDC2AD55CD27F3011B (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59 (*) (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142*, const RuntimeMethod*))Stack_1_GetEnumerator_m0CCBAC4DEE59DAE0D095E9ABAE44E17B5002382C_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1/Enumerator<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::Dispose()
inline void Enumerator_Dispose_m643FA38FBDF1EA0222BBFDCF784B82A955DB885C (Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59*, const RuntimeMethod*))Enumerator_Dispose_mD6422E5378FE2766C61A38D9395E7BC436F73753_gshared)(__this, method);
}
// T System.Collections.Generic.Stack`1/Enumerator<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m5ADAA379F919D7BD4100F73C5A2E49C88D277D68 (Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59*, const RuntimeMethod*))Enumerator_get_Current_m241C2D2B1FFE03EBF3E39578784BF20B5A4A67BD_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.Stack`1/Enumerator<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::MoveNext()
inline bool Enumerator_MoveNext_m55B62A3B02390A7EC9C572591C6050B9216D9F1D (Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59*, const RuntimeMethod*))Enumerator_MoveNext_mACF5F0B611CD40A1A2176D2512173D43C23B4C68_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Stack`1<CleverCrow.Fluid.Dialogues.IDialoguePlayback>::Clear()
inline void Stack_1_Clear_mCE5314233902A0B969CF4689616124075C2F852A (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* __this, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142*, const RuntimeMethod*))Stack_1_Clear_mD550E89582979ECB0D6E6D68F0237FC14708BE85_gshared)(__this, method);
}
// System.Void System.NotImplementedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Databases.KeyValueDataBase`1<UnityEngine.GameObject>::.ctor()
inline void KeyValueDataBase_1__ctor_mE77664C6553BFB75B3466D43E06ACF68879AB850 (KeyValueDataBase_1_t93FD5A652A686D61254DF3E882C64A5A98F5B2A7* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValueDataBase_1_t93FD5A652A686D61254DF3E882C64A5A98F5B2A7*, const RuntimeMethod*))KeyValueDataBase_1__ctor_mFD7DC8FA2EB4022C34B2A9D358CFCA5313D3313E_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::.ctor()
inline void Queue_1__ctor_m6ED1CE1C5A29DC27AFC2EF02A3D2C42E77CB366F (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* __this, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7*, const RuntimeMethod*))Queue_1__ctor_m6E2A5A8173E0CC524496D5155C737DF8FD10D0EB_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_Stop_m762F819CB21CB42E71487D1CF786813C96BB0951 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::set_Pointer(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DialoguePlayback_set_Pointer_mA6FB6EF31F82FECCDC827B17AEBD6948DB84C851_inline (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.DialoguePlayback::get_Events()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialoguePlayback_get_Events_mD9F0C652C1079C521C525C7A24C20B8588F5D199_inline (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.DialoguePlayback::get_Pointer()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824_inline (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::Next(CleverCrow.Fluid.Dialogues.Nodes.INode,CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_Next_m52BBD9508093D92CCCF73FD2FB8CA14CC495956C (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, RuntimeObject* ___current0, RuntimeObject* ___next1, const RuntimeMethod* method) ;
// T System.Collections.Generic.Queue`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::Dequeue()
inline RuntimeObject* Queue_1_Dequeue_mDEE73D10D742E9279FB56EC2C02F447C912AE463 (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7*, const RuntimeMethod*))Queue_1_Dequeue_m86B243DF9EC238316EC3D27DF3E0AB8DB0987E84_gshared)(__this, method);
}
// System.Int32 System.Collections.Generic.Queue`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::get_Count()
inline int32_t Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_inline (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7*, const RuntimeMethod*))Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline)(__this, method);
}
// T System.Collections.Generic.Queue`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::Peek()
inline RuntimeObject* Queue_1_Peek_m4966003EA6BFC6D725EDE60707DE3FD147C16AC4 (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7*, const RuntimeMethod*))Queue_1_Peek_mBCFFD1AF751385D78C4EA93D62857F936CD03866_gshared)(__this, method);
}
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetEnumerator()
inline Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11 List_1_GetEnumerator_m7BFD3E19EFCAE05BEB5F34B98AB4D5CB782E980B (List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11 (*) (List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<CleverCrow.Fluid.Dialogues.Actions.IAction>::Dispose()
inline void Enumerator_Dispose_m054FE6EE163208E65CEB69E17815C340E54BF802 (Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<CleverCrow.Fluid.Dialogues.Actions.IAction>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m7DAE628EFE8C2D1451CBAD12E7E00B7EDEE87697_inline (Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void System.Collections.Generic.Queue`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::Enqueue(T)
inline void Queue_1_Enqueue_m39C4AA37CB09EA5C8B505B8A1DF02027718F0E76 (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7*, RuntimeObject*, const RuntimeMethod*))Queue_1_Enqueue_m5CB8CF3906F1289F92036F0973EC5BE3450402EF_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<CleverCrow.Fluid.Dialogues.Actions.IAction>::MoveNext()
inline bool Enumerator_MoveNext_m6987C49A60C79B65D2F70F29A1D582E9E21F27A9 (Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// CleverCrow.Fluid.Dialogues.Actions.ActionStatus CleverCrow.Fluid.Dialogues.DialoguePlayback::UpdateActionQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DialoguePlayback_UpdateActionQueue_m1C48A1BE32ECF946FB345CFF8FC85B0D640E0F21 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::UpdatePointer(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_UpdatePointer_m981406186BA8910B597C51D1A8F18E376713A7C3 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, RuntimeObject* ___pointer0, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::ClearAllActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_ClearAllActions_m6F46F1C83E1FB78FD6CF57A8AA86961E71503A8C (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnityEventPlus__ctor_m64A3DB6F300C2DCD2A87757BC3273CD5626BE1D5 (UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`2<CleverCrow.Fluid.Dialogues.IActor,System.String>::.ctor()
inline void UnityEventPlus_2__ctor_m4988A196BDB76CD00DA1E34436FB2E9EFCAEFBEB (UnityEventPlus_2_t4CF0F963FCD66FB12875818FE20FD5DE8E0167F6* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEventPlus_2_t4CF0F963FCD66FB12875818FE20FD5DE8E0167F6*, const RuntimeMethod*))UnityEventPlus_2__ctor_mC4316A00042E8413C21884A779F02EFB85BFDBDC_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>::.ctor()
inline void UnityEventPlus_3__ctor_mFA453255F648BF4E279857875478DB9C3467515B (UnityEventPlus_3_tE33CAF9FB976151CBB00093186B3DE44D5514BCA* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEventPlus_3_tE33CAF9FB976151CBB00093186B3DE44D5514BCA*, const RuntimeMethod*))UnityEventPlus_3__ctor_m64AEA2E45E0741686CE59F0935A180311D8872BC_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Utilities.UnityEvents.UnityEventPlus`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::.ctor()
inline void UnityEventPlus_1__ctor_m484B33DA9ECDBEE073F5680274E77D1A69EA9C24 (UnityEventPlus_1_t245050830307174359558122FEB39B5CAE1A2C5B* __this, const RuntimeMethod* method)
{
	((  void (*) (UnityEventPlus_1_t245050830307174359558122FEB39B5CAE1A2C5B*, const RuntimeMethod*))UnityEventPlus_1__ctor_m68DE5E28B59A3569DC54FF05EB1CC605348273F9_gshared)(__this, method);
}
// System.Void System.Predicate`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mB8A1F1D2249EC0E3A52EEBD7F0D10254E7530E90 (Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>::Find(System.Predicate`1<T>)
inline RuntimeObject* List_1_Find_m34BCB8AE1ED3FED9423D204A530FA7D965475F75 (List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* __this, Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64* ___match0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3*, Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Choices.IChoice,System.Boolean>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m5F687515A6A88260FE03B8D00C4A47B6D694002F (Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m13C0A7F33154D861E2A041B52E88461832DA1697_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where<CleverCrow.Fluid.Dialogues.Choices.IChoice>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
inline RuntimeObject* Enumerable_Where_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFC16612603DC0F12F59B70267DDC055294C3DA9A (RuntimeObject* ___source0, Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* ___predicate1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5*, const RuntimeMethod*))Enumerable_Where_TisRuntimeObject_m5DAF16724887B42DDBBF391C7F375749E8AA4AD7_gshared)(___source0, ___predicate1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<CleverCrow.Fluid.Dialogues.Choices.IChoice>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD8D0B2FB7A9B832EF673F588FD40C106B7D37265 (U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m95D9009C8FC2D2119B5A57B8F3A2594B3EA3AAA0 (U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Choices.ChoiceData,CleverCrow.Fluid.Dialogues.Choices.IChoice>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mB250820ED199C5A2277018ABDA8C3D4D70227D2D (Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CleverCrow.Fluid.Dialogues.Choices.ChoiceData,CleverCrow.Fluid.Dialogues.Choices.IChoice>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_m07A9E37C857A256260CD4B11CC073D807494CBB2 (RuntimeObject* ___source0, Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::get_UniqueId()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NodeDataBase_get_UniqueId_m1423307C983CE02A7610AB8AF9402176A552EBC4_inline (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase,CleverCrow.Fluid.Dialogues.Conditions.ICondition>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3B2303338F5CB7703A6E2E6DBA9DF326E768A630 (Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase,CleverCrow.Fluid.Dialogues.Conditions.ICondition>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9 (RuntimeObject* ___source0, Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<CleverCrow.Fluid.Dialogues.Conditions.ICondition>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::.ctor(System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeChoiceHub__ctor_m7F3BF237716C437A3BC99B168841D1652CAC1E6D (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, String_t* ___uniqueId0, List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* ___choiceList1, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions2, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataChoiceBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataChoiceBase__ctor_mA75277CD5E75FF28F07039560D32D2E77C31AC28 (NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Dialogues.Choices.IChoice CleverCrow.Fluid.Dialogues.Choices.ChoiceData::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChoiceData_GetRuntime_m41274964C63B8E14D4363177B1962ED28E5D9D0A (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___dialogue1, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeBase::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeBase__ctor_mBA8A4B2BC6F71ACBB1F8C4B28205937DF34E0255 (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, RuntimeObject* ___runtime0, String_t* ___uniqueId1, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children2, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions3, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions5, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.NodeBase::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeBase_Next_mA1019385D8607B7CAA623D76F1DBEFC1A7296F9A (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>::get_Count()
inline int32_t List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_inline (List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::GetValidChoices(CleverCrow.Fluid.Dialogues.IDialoguePlayback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* NodeDialogue_GetValidChoices_m5FEE6BA886E5D7FDFA83365D56CC2236CDC77935 (NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94* __this, RuntimeObject* ___playback0, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m493A3596DBAB6CF3F622CB9DBD6956F18DDD48D7 (List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m592355900E73D2E73652A5E7DCB96704C583A5EC (U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mE493F41ED6F3D009187A1A0375A7637849596894 (U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<CleverCrow.Fluid.Dialogues.Nodes.INodeData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase,CleverCrow.Fluid.Dialogues.Actions.IAction>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase,CleverCrow.Fluid.Dialogues.Actions.IAction>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143 (RuntimeObject* ___source0, Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<CleverCrow.Fluid.Dialogues.Actions.IAction>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDialogue__ctor_mB1366EA8C6736934235AB860E7CBBC9B346DB06E (NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94* __this, RuntimeObject* ___graph0, String_t* ___uniqueId1, RuntimeObject* ___actor2, String_t* ___dialogue3, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children4, List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* ___choices5, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions6, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions7, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions8, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeHubData/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m4212156C1F6ADD1DDB9B086691B02785859C7C22 (U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeHub::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHub__ctor_m4210E30A5E50722DEE84340CB8DD6AC49683BD40 (NodeHub_t80809D4275ADE45FDF8C2C880EF599525E39E052* __this, RuntimeObject* ___graph0, String_t* ___uniqueId1, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children2, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions3, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions5, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase__ctor_m148F411944681EA46E78565B210AA809C60FFF0A (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* NodeBase_get_Children_m841955F7C31DD43DEFDB32D4006900A2CD56FCDB (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::get_Item(System.Int32)
inline RuntimeObject* List_1_get_Item_m441156EFE622EF828338745E4C8B4F1131FE5AB3 (List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>::.ctor()
inline void List_1__ctor_m56D74C3AF5C0CC22A50207DDA9FF14CB0FE971C0 (List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>::Add(T)
inline void List_1_Add_m8DDFE6EE4781EB34AE3288CD5CA72C8B4F92D1B8_inline (List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* __this, RuntimeObject* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC*, RuntimeObject*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mDC277DEC8F023C753398A7FAAE6F95DFDA7D168D (U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>::get_Count()
inline int32_t List_1_get_Count_m8AC2EE0C0984AF1AE6FB511A99EEB78544E54C70_inline (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// T System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>::get_Item(System.Int32)
inline NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* List_1_get_Item_mE3830BD5EBC0B9C923BDAB6B593FECF7458FF663 (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* (*) (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2*, int32_t, const RuntimeMethod*))List_1_get_Item_m33561245D64798C2AB07584C0EC4F240E4839A38_gshared)(__this, ___index0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeLink::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,CleverCrow.Fluid.Dialogues.Nodes.INodeData,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeLink__ctor_m7C5D7A1A7665C423CBB3125939A09FF7ABE45607 (NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2* __this, RuntimeObject* ___graph0, String_t* ___UniqueId1, RuntimeObject* ___child2, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions3, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions5, const RuntimeMethod* method) ;
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3AE65F08EB02F5CB184A67A6AFBEE32A0E45CD14 (Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mBBCF7333567D151155F6A9069A1AFB2D05D70E46 (RuntimeObject* ___source0, Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<CleverCrow.Fluid.Dialogues.Nodes.INode>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* Enumerable_ToList_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_m7D2F8299F6EBBFDB253B16D26A3D9B5DCD639F24 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Predicate`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_mD3A0AEBA3E0F170CB6E8BC4B29633200BB48F075 (Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818*, RuntimeObject*, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3E007299121A15DF80F4A210FF8C20E5DF688F20_gshared)(__this, ___object0, ___method1, method);
}
// T System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::Find(System.Predicate`1<T>)
inline RuntimeObject* List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46 (List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* __this, Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* ___match0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96*, Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818*, const RuntimeMethod*))List_1_Find_m5E78A210541B0D844FE27B94F509313623BE33D3_gshared)(__this, ___match0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFF88438FC8073E48AF18B2A8288A7F96F682DA65 (U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513* __this, const RuntimeMethod* method) ;
// System.Guid System.Guid::NewGuid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Guid_t Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD (const RuntimeMethod* method) ;
// System.String System.Guid::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C (Guid_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Object::set_name(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* __this, String_t* ___value0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>::Add(T)
inline void List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_inline (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2*, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*, const RuntimeMethod*))List_1_Add_mEBCF994CC3814631017F46A387B1A192ED6C85C7_gshared_inline)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>::Remove(T)
inline bool List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2*, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*, const RuntimeMethod*))List_1_Remove_m4DFA48F4CEB9169601E75FC28517C5C06EFA5AD7_gshared)(__this, ___item0, method);
}
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase,System.Single>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mFA4F6AEFA4AB93D7D24147A8D229ADEA23E10DA3 (Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m04EB988C3F849C1BE164FC6656C2281DF47EEAA7_gshared)(__this, ___object0, ___method1, method);
}
// System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase,System.Single>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
inline RuntimeObject* Enumerable_OrderBy_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAB70E05F40E4EDBCFA3940F569EA7BEE5FDF34E0 (RuntimeObject* ___source0, Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* ___keySelector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2*, const RuntimeMethod*))Enumerable_OrderBy_TisRuntimeObject_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mB2315DD162DED6E65C9B440629954A1B156816CD_gshared)(___source0, ___keySelector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* Enumerable_ToList_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m9809FD660A4057D1F3432A3586F1BD2AA1E0C479 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>::Clear()
inline void List_1_Clear_m2C814C3E02048E3EB50383C4B9307EE5E76EA487_inline (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2*, const RuntimeMethod*))List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline)(__this, method);
}
// T UnityEngine.Object::Instantiate<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>(T)
inline NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* Object_Instantiate_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m0263759834E7910E0C014C9CA3B3BE5EC0531FA8 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___original0, const RuntimeMethod* method)
{
	return ((  NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* (*) (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase,CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m49E693428C2DD82FE38D6B4382954027DABFBDDB (Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase,CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_m6493C156138DA5CDAB8864D4DF3A78EA26DEF20B (RuntimeObject* ___source0, Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* Enumerable_ToList_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mEB172E486789889EF656F7AA0B569506E8BDCEB7 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase,CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m54369834F686E6A5B7035DB8CB62362A205C4952 (Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase,CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m9F64CDBF7E99BDF9B8C7B5D864B20935477633BF (RuntimeObject* ___source0, Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* Enumerable_ToList_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m5B4FEFF77C43A50068C8A1C643BCC0FA0027F112 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase>::.ctor()
inline void List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>::.ctor()
inline void List_1__ctor_mD54E3CDD8EFB1C92C4666DBB4C7BB44FF94DACBC (List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>::.ctor()
inline void List_1__ctor_m28E4969BE39E8A4DCD7C20AB3F99B7FB94FBE0A2 (List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>::.ctor()
inline void List_1__ctor_m405B28AA997D3F3CE2B479845D98518CC97DFD46 (List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3*, const RuntimeMethod*))List_1__ctor_m7F078BB342729BDF11327FD89D7872265328F690_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5AE3F80ECEF1D3A55B16845DC405B108E3737318 (U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F* __this, const RuntimeMethod* method) ;
// System.Single UnityEngine.Rect::get_yMin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F (Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::ClearConnectionChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase_ClearConnectionChildren_m6FBF9A29EB79960B57822DCF9635407941BFC73C (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>::GetEnumerator()
inline Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0 List_1_GetEnumerator_m09651D47A021BE344D17E1442C89CF7B9097D3AA (List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0 (*) (List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>::Dispose()
inline void Enumerator_Dispose_mD148EEFA188CA6D67C956987B918488DBDF17766 (Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>::get_Current()
inline ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* Enumerator_get_Current_m7F95AD8AC608E6CA772C907FD4D52265646EFA82_inline (Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0* __this, const RuntimeMethod* method)
{
	return ((  ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* (*) (Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData::ClearConnectionChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceData_ClearConnectionChildren_m2C134BF5A5F611C92711658DC27653BF1DA107DA (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>::MoveNext()
inline bool Enumerator_MoveNext_m60BFC792592F1D7A3F86E683ECE1F5A15951C131 (Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::SortConnectionsByPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase_SortConnectionsByPosition_m1C3F6E4BA00FC08911A55EDC41CD3A40404D0666 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData::SortConnectionsByPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceData_SortConnectionsByPosition_mBFBF619A3CE9B859EDB93AF7EE6E9DD7FE2DA591 (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::GetDataCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* NodeDataBase_GetDataCopy_m3D6C4B72E5A6533A1964A35FFF083EF94BFCF3A4 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Choices.ChoiceData,CleverCrow.Fluid.Dialogues.Choices.ChoiceData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_mEB05411EBE65F84F675A7C9D6A20F55230B100B9 (Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select<CleverCrow.Fluid.Dialogues.Choices.ChoiceData,CleverCrow.Fluid.Dialogues.Choices.ChoiceData>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
inline RuntimeObject* Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mE7AC743ED9CB300D82FF9407AE99E88187F82E4F (RuntimeObject* ___source0, Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB* ___selector1, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB*, const RuntimeMethod*))Enumerable_Select_TisRuntimeObject_TisRuntimeObject_m67C538A5EBF57C4844107A8EF25DB2CAAFBAF8FB_gshared)(___source0, ___selector1, method);
}
// System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList<CleverCrow.Fluid.Dialogues.Choices.ChoiceData>(System.Collections.Generic.IEnumerable`1<TSource>)
inline List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* Enumerable_ToList_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mAC81C5943212218996269CDAFA4DD8537B72B191 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_ToList_TisRuntimeObject_m6456D63764F29E6B5B2422C3DE25113577CF51EE_gshared)(___source0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4573875A99F1312E7E5D0F7821E7E3FCEEAB0B28 (U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.PlayGraph.NodePlayGraph::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,CleverCrow.Fluid.Dialogues.Graphs.IGraphData,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePlayGraph__ctor_mEB2F0560D8FA2DFAB10FD092F686F50B69F465C3 (NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2* __this, RuntimeObject* ___runtime0, String_t* ___uniqueId1, RuntimeObject* ___graph2, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children3, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions5, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions6, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeRootData/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m6648186E9C2DFDE601EA619F4D6D5EE042B4D0E4 (U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeRoot::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeRoot__ctor_mF8C75C89083A0D02C17A892410F51D2E4793A24D (NodeRoot_t05250B67BFA4EF640AD30B6B033505F7542B003A* __this, RuntimeObject* ___runtime0, String_t* ___uniqueId1, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children2, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions3, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions5, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase_Setup_m6CC93ADB475746C4D825FAD87A43DF6D87F7BD11 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m7D21D375783EECDC77739D4369FD9B352EA3017B (U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E* __this, const RuntimeMethod* method) ;
// System.Void System.Func`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INodeData>::.ctor(System.Object,System.IntPtr)
inline void Func_2__ctor_m3A0033AF5CD9BE051959F64B4EEC4ECD4E481092 (Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE* __this, RuntimeObject* ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE*, RuntimeObject*, intptr_t, const RuntimeMethod*))Func_2__ctor_m7F8A01C0B02BC1D4063F4EB1E817F7A48562A398_gshared)(__this, ___object0, ___method1, method);
}
// System.Collections.Generic.Dictionary`2<TKey,TElement> System.Linq.Enumerable::ToDictionary<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>,System.Func`2<TSource,TElement>)
inline Dictionary_2_tA3ED857B5FCBE99603A8DA2A6AF89CC6EB0DDD37* Enumerable_ToDictionary_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mB1F7AF19E4C37685D0A8287D3A032D5B0C13A6C6 (RuntimeObject* ___source0, Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE* ___keySelector1, Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0* ___elementSelector2, const RuntimeMethod* method)
{
	return ((  Dictionary_2_tA3ED857B5FCBE99603A8DA2A6AF89CC6EB0DDD37* (*) (RuntimeObject*, Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE*, Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0*, const RuntimeMethod*))Enumerable_ToDictionary_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mA712BB5A297282995D1266B8F0BD27C3C7E16E9A_gshared)(___source0, ___keySelector1, ___elementSelector2, method);
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime::GetCopy(CleverCrow.Fluid.Dialogues.Nodes.INodeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GraphRuntime_GetCopy_m832197C80137995A5A260168EC25ED081D5FAD5C (GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* __this, RuntimeObject* ___original0, const RuntimeMethod* method) ;
// TValue System.Collections.Generic.Dictionary`2<CleverCrow.Fluid.Dialogues.Nodes.INodeData,CleverCrow.Fluid.Dialogues.Nodes.INode>::get_Item(TKey)
inline RuntimeObject* Dictionary_2_get_Item_mC987F8FDAA14160903F9EE706923F5A166B6399E (Dictionary_2_tA3ED857B5FCBE99603A8DA2A6AF89CC6EB0DDD37* __this, RuntimeObject* ___key0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Dictionary_2_tA3ED857B5FCBE99603A8DA2A6AF89CC6EB0DDD37*, RuntimeObject*, const RuntimeMethod*))Dictionary_2_get_Item_m4AAAECBE902A211BF2126E6AFA280AEF73A3E0D6_gshared)(__this, ___key0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m29CE372ACF3357D2582DD478DB30EBA020F37E21 (U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<UnityEngine.GameObject>::.ctor()
inline void KeyValueDefinitionBase_1__ctor_mF09A2E913EA009F6F3BA6437CBA9CC396727D9DA (KeyValueDefinitionBase_1_t9BCE62C4CCD9322298E321FE00668B3A21B71C0F* __this, const RuntimeMethod* method)
{
	((  void (*) (KeyValueDefinitionBase_1_t9BCE62C4CCD9322298E321FE00668B3A21B71C0F*, const RuntimeMethod*))KeyValueDefinitionBase_1__ctor_m2CE6C454B0F368608F4CBF9632AACCD98BD04B8A_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceRuntime__ctor_m08B0542B7EF8D3FB63EF045192A59E94A9F770FF (ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1* __this, RuntimeObject* ___runtime0, String_t* ___text1, String_t* ___uniqueId2, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children3, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8F4ADB028CC1D42EB7C2B8DE9BC702383BF85FB4 (U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* ChoiceRuntime_get_Children_m66720D758FBB5A273082B50416439373A11DB48F (ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1* __this, const RuntimeMethod* method) ;
// System.Int32 System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::get_Count()
inline int32_t List_1_get_Count_mEB4B5FFBDB1D710AACAAA55F7C74426F58D1C769_inline (List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96*, const RuntimeMethod*))List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m474CCB791D31F740B99A822CFA6CEB132A7032E5 (U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase>(T)
inline ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* Object_Instantiate_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mBE032E58964F59920B806877058AFA78264AE29F (ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* ___original0, const RuntimeMethod* method)
{
	return ((  ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* (*) (ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime::.ctor(CleverCrow.Fluid.Dialogues.IDialogueController,System.String,CleverCrow.Fluid.Dialogues.Conditions.IConditionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionRuntime__ctor_m12F1670794AD82DBB56029CE5FD8328468471A86 (ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2* __this, RuntimeObject* ___dialogueController0, String_t* ___uniqueId1, RuntimeObject* ___data2, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>::.ctor()
inline void NodeNestedDataBase_1__ctor_m19124CAF88453B36FEFB8C511A3E7D20E00C1564 (NodeNestedDataBase_1_t67C8B2762D6F87FB1B86E2B4CB4022F93A844C08* __this, const RuntimeMethod* method)
{
	((  void (*) (NodeNestedDataBase_1_t67C8B2762D6F87FB1B86E2B4CB4022F93A844C08*, const RuntimeMethod*))NodeNestedDataBase_1__ctor_m656A143127AB70A47CCE0429336789659096E226_gshared)(__this, method);
}
// T CleverCrow.Fluid.Utilities.Singleton`1<CleverCrow.Fluid.Databases.GlobalDatabaseManager>::get_Instance()
inline GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9 (const RuntimeMethod* method)
{
	return ((  GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* (*) (const RuntimeMethod*))Singleton_1_get_Instance_mB73AE5879F2D9677E140B979F6482DB9B983A825_gshared)(method);
}
// CleverCrow.Fluid.Databases.DatabaseInstance CleverCrow.Fluid.Databases.GlobalDatabaseManager::get_Database()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline (GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Databases.DatabaseInstance::get_Bools()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstance_get_Bools_m8A1D85F1125F1CB9F078961C7436AF6F848FFD26_inline (DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBoolBase__ctor_m937D01567314818252863530041E5770E29AA858 (IsBoolBase_tBE8F69B28E209056A1612F89C522936DB083A31A* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Databases.DatabaseInstance::get_Floats()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstance_get_Floats_m6DDC3CDE3220A9A1A536468276EE971D68347D18_inline (DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsFloatBase__ctor_m25132DD460AED12263A2F3746241EBCCE050EC47 (IsFloatBase_tBB384209F064C9839737C88F5052E068AA096500* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Databases.DatabaseInstance::get_Ints()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstance_get_Ints_m0B3335AAAFC915933F16B3998A6C5E0DC1CE4358_inline (DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsIntBase__ctor_mCBCB97A6C2448690E725C050D17E8BCB6BE63D7B (IsIntBase_t5EFBA1CE0BDE50A2A13596DA2386115B31509694* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Databases.DatabaseInstance::get_Strings()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstance_get_Strings_mDA47F7E9CD6C9B73E3046EADFD35A9006BA7FAAB_inline (DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsStringBase__ctor_mF5D168147355878E79151A2ECD6E615228ABB0AC (IsStringBase_tEAE9D3376325403A542F796C4B721BA46865FFDF* __this, const RuntimeMethod* method) ;
// T UnityEngine.Object::Instantiate<CleverCrow.Fluid.Dialogues.Actions.ActionDataBase>(T)
inline ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* Object_Instantiate_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m73558D40A2AFC28AFCA8098AC04CB50A18029D46 (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___original0, const RuntimeMethod* method)
{
	return ((  ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* (*) (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A*, const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m90A1E6C4C2B445D2E848DB75C772D1B95AAC046A_gshared)(___original0, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::.ctor(CleverCrow.Fluid.Dialogues.IDialogueController,System.String,CleverCrow.Fluid.Dialogues.Actions.IActionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime__ctor_m27E7CA32EDCC2A94A167632E7CE2D118B08B4060 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, RuntimeObject* ___dialogue0, String_t* ___uniqueId1, RuntimeObject* ___data2, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::.ctor()
inline void NodeNestedDataBase_1__ctor_mABA61AF21D7E5E30F60D5AB5D81A8B50646687BB (NodeNestedDataBase_1_tBFAF0B539820435EFC36920F096035AB74DC6C1A* __this, const RuntimeMethod* method)
{
	((  void (*) (NodeNestedDataBase_1_tBFAF0B539820435EFC36920F096035AB74DC6C1A*, const RuntimeMethod*))NodeNestedDataBase_1__ctor_m656A143127AB70A47CCE0429336789659096E226_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime_Reset_m4CE836A18B0E84449198257B9AA903391CBB5BE7 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime_Init_mC44BABF22453F591EF5CDE914C46D5720DAF2161 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime_Start_m9F85DD59BDA4B61D06AA53B96DD02029BB1F0169 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) ;
// CleverCrow.Fluid.Dialogues.Actions.ActionStatus CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionRuntime_Update_m0883BB0F093EF1132F63BDAFC97A67162B023D95 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime_Exit_m8BA4D49F0629AF9773E2FE01E2B3BB9D90CC7613 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.GameObjectWrapper::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectWrapper__ctor_m8E508E546681150132EB9A6B2F595ADFAAAA8823 (GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActiveInternal::.ctor(CleverCrow.Fluid.Dialogues.Actions.GameObjects.IGameObjectWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActiveInternal__ctor_m39CE8E763F458204FB4228769A506A89C7663116 (SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682* __this, RuntimeObject* ___go0, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActiveInternal::SetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActiveInternal_SetValue_m7BA8DCCCAF1240CEA10EBF77279D0AC443BFDC5E (SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionDataBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDataBase__ctor_mD6989B700BC383BBE4C52939C2A9E269670CA5D2 (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Boolean>::.ctor()
inline void SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077 (SetLocalVariableBase_1_t8543DBE204C11B3E56704D9CC5E5A079643548DE* __this, const RuntimeMethod* method)
{
	((  void (*) (SetLocalVariableBase_1_t8543DBE204C11B3E56704D9CC5E5A079643548DE*, const RuntimeMethod*))SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Single>::.ctor()
inline void SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97 (SetLocalVariableBase_1_t2DD498A2F3A84F8DDF31BC9C142147C01A32945E* __this, const RuntimeMethod* method)
{
	((  void (*) (SetLocalVariableBase_1_t2DD498A2F3A84F8DDF31BC9C142147C01A32945E*, const RuntimeMethod*))SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.Int32>::.ctor()
inline void SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811 (SetLocalVariableBase_1_t60E979B585DFB0F31414EA57929E87F95D142E22* __this, const RuntimeMethod* method)
{
	((  void (*) (SetLocalVariableBase_1_t60E979B585DFB0F31414EA57929E87F95D142E22*, const RuntimeMethod*))SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalVariableBase`1<System.String>::.ctor()
inline void SetLocalVariableBase_1__ctor_m7A88DE20F0D70FD848810851DBFAECDB102BDE18 (SetLocalVariableBase_1_tFCAEEDFAE4E00F62C9FDC6010A738C9AE7FE3EF0* __this, const RuntimeMethod* method)
{
	((  void (*) (SetLocalVariableBase_1_tFCAEEDFAE4E00F62C9FDC6010A738C9AE7FE3EF0*, const RuntimeMethod*))SetLocalVariableBase_1__ctor_mA033729BB698D8F4D3B9406C94C76439919FB9A0_gshared)(__this, method);
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal::.ctor(CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionBoolInternal__ctor_m7CF2DC2A06E70E8DE6E83A8EE87171728A7923CB (ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* __this, RuntimeObject* ___database0, const RuntimeMethod* method) ;
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal::AreValuesEqual(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionBoolInternal_AreValuesEqual_m248DC2E446036A49D422DB87C1130A91AAA6AD19 (ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* __this, RuntimeObject* ___definition0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal::AreValuesNotEqual(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionBoolInternal_AreValuesNotEqual_m269DAE996BC5105FE9D9C390883374CB59300A9F (ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* __this, RuntimeObject* ___definition0, bool ___value1, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionDataBase__ctor_m641D8DE54F47967329843510A716C5FCE8AD6AED (ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* __this, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionFloatInternal::.ctor(CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionFloatInternal__ctor_m4EC8EF13A91E8FC044DEC0C124DCF5C9E2421D02 (ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB* __this, RuntimeObject* ___database0, const RuntimeMethod* method) ;
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionFloatInternal::IsComparisonValid(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Single>,System.Single,CleverCrow.Fluid.Dialogues.Actions.Databases.NumberComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionFloatInternal_IsComparisonValid_mE67FB753DC6BACD60B3058963A369A81C7F67829 (ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB* __this, RuntimeObject* ___definition0, float ___value1, int32_t ___comparison2, const RuntimeMethod* method) ;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.Object,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85 (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___paramName0, RuntimeObject* ___actualValue1, String_t* ___message2, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionIntInternal::.ctor(CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionIntInternal__ctor_m84AC44151595B30FD66FB4603DD4B90681A3ED67 (ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252* __this, RuntimeObject* ___database0, const RuntimeMethod* method) ;
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionIntInternal::IsComparisonValid(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Int32>,System.Int32,CleverCrow.Fluid.Dialogues.Actions.Databases.NumberComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionIntInternal_IsComparisonValid_m87162723D308144B0753B2554E737A5A7D63C72A (ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252* __this, RuntimeObject* ___definition0, int32_t ___value1, int32_t ___comparison2, const RuntimeMethod* method) ;
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal::.ctor(CleverCrow.Fluid.Databases.IKeyValueData`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionStringInternal__ctor_m24D99CB307D5FA257EAE2C883A32047E22B0948E (ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* __this, RuntimeObject* ___database0, const RuntimeMethod* method) ;
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal::AreValuesEqual(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionStringInternal_AreValuesEqual_m6D6CD0683B639D22A2BE18AED2D8BFFD53D9467A (ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* __this, RuntimeObject* ___definition0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal::AreValuesNotEqual(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionStringInternal_AreValuesNotEqual_m8CD300E42BFD1FDD5D9BD42318C3C10751E0E962 (ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* __this, RuntimeObject* ___definition0, String_t* ___value1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Inequality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// System.Void System.Array::Clear(System.Array,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB (RuntimeArray* ___array0, int32_t ___index1, int32_t ___length2, const RuntimeMethod* method) ;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.ActorDefinition::get_DisplayName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ActorDefinition_get_DisplayName_m36A5A74B7ABC9F1C8AD0613215E700D92442AD0A (ActorDefinition_t6CE6862EB9811D59BCC2CB1F015F146749E43C56* __this, const RuntimeMethod* method) 
{
	{
		// public string DisplayName => _displayName;
		String_t* L_0 = __this->____displayName_4;
		return L_0;
	}
}
// UnityEngine.Sprite CleverCrow.Fluid.Dialogues.ActorDefinition::get_Portrait()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ActorDefinition_get_Portrait_m93E75A2C9F3805696FF68743631F080205A337A4 (ActorDefinition_t6CE6862EB9811D59BCC2CB1F015F146749E43C56* __this, const RuntimeMethod* method) 
{
	{
		// public Sprite Portrait => _portrait;
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_0 = __this->____portrait_5;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.ActorDefinition::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActorDefinition__ctor_m6BD50754A5688AB0265BAC991C10AF5E49875C43 (ActorDefinition_t6CE6862EB9811D59BCC2CB1F015F146749E43C56* __this, const RuntimeMethod* method) 
{
	{
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.CreateMenuAttribute::get_Path()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* CreateMenuAttribute_get_Path_mADD27A4A64BF42627E1AF6534A276643FF2B9668 (CreateMenuAttribute_t0416B13EA1CECDBC1B9755178AC1A5C01A1CD134* __this, const RuntimeMethod* method) 
{
	{
		// public string Path { get; }
		String_t* L_0 = __this->___U3CPathU3Ek__BackingField_0;
		return L_0;
	}
}
// System.Int32 CleverCrow.Fluid.Dialogues.CreateMenuAttribute::get_Priority()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CreateMenuAttribute_get_Priority_m83B45248411452D33C6DA8B52DB0BA768E75C59F (CreateMenuAttribute_t0416B13EA1CECDBC1B9755178AC1A5C01A1CD134* __this, const RuntimeMethod* method) 
{
	{
		// public int Priority { get; }
		int32_t L_0 = __this->___U3CPriorityU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.CreateMenuAttribute::.ctor(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateMenuAttribute__ctor_m91FFFD1A6C88385993C42C6B00436C40844EFB33 (CreateMenuAttribute_t0416B13EA1CECDBC1B9755178AC1A5C01A1CD134* __this, String_t* ___path0, int32_t ___priority1, const RuntimeMethod* method) 
{
	{
		// public CreateMenuAttribute (string path, int priority = 0) {
		Attribute__ctor_m79ED1BF1EE36D1E417BA89A0D9F91F8AAD8D19E2(__this, NULL);
		// Path = path;
		String_t* L_0 = ___path0;
		__this->___U3CPathU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPathU3Ek__BackingField_0), (void*)L_0);
		// Priority = priority;
		int32_t L_1 = ___priority1;
		__this->___U3CPriorityU3Ek__BackingField_1 = L_1;
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueData`1<UnityEngine.GameObject> CleverCrow.Fluid.Dialogues.DatabaseInstanceExtended::get_GameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstanceExtended_get_GameObjects_mA551A925451902AC3A4AD3D3A5A3591AD02FC60C (DatabaseInstanceExtended_t15C63825E419153A8192C7569066976C0199D966* __this, const RuntimeMethod* method) 
{
	{
		// public IKeyValueData<GameObject> GameObjects { get; } = new KeyValueDataGameObject();
		RuntimeObject* L_0 = __this->___U3CGameObjectsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DatabaseInstanceExtended::ClearGameObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInstanceExtended_ClearGameObjects_m50B4D053F5DDF7333380188D1838240D6F6FC5F9 (DatabaseInstanceExtended_t15C63825E419153A8192C7569066976C0199D966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueData_1_t046EA48861A90497331417C2E6C30569EF4F9108_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObjects.Clear();
		RuntimeObject* L_0;
		L_0 = DatabaseInstanceExtended_get_GameObjects_mA551A925451902AC3A4AD3D3A5A3591AD02FC60C_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(0 /* System.Void CleverCrow.Fluid.Databases.IKeyValueData`1<UnityEngine.GameObject>::Clear() */, IKeyValueData_1_t046EA48861A90497331417C2E6C30569EF4F9108_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DatabaseInstanceExtended::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DatabaseInstanceExtended__ctor_m8256454E7D6FAE29059316797563AF3F8E2C3D96 (DatabaseInstanceExtended_t15C63825E419153A8192C7569066976C0199D966* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IKeyValueData<GameObject> GameObjects { get; } = new KeyValueDataGameObject();
		KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13* L_0 = (KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13*)il2cpp_codegen_object_new(KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		KeyValueDataGameObject__ctor_m77058B08E5DC4C065A2DABDE064436E049B08DD6(L_0, NULL);
		__this->___U3CGameObjectsU3Ek__BackingField_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CGameObjectsU3Ek__BackingField_4), (void*)L_0);
		DatabaseInstance__ctor_m74A8D4AFF98B95B2300D3D7138C3A10EFB90036B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.DialogueController::get_LocalDatabase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_LocalDatabase_m9E9955CF8A69076CEBDF799DBAAEE5A6450BF624 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	{
		// public IDatabaseInstance LocalDatabase { get; }
		RuntimeObject* L_0 = __this->___U3CLocalDatabaseU3Ek__BackingField_1;
		return L_0;
	}
}
// CleverCrow.Fluid.Dialogues.IDatabaseInstanceExtended CleverCrow.Fluid.Dialogues.DialogueController::get_LocalDatabaseExtended()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_LocalDatabaseExtended_mD7666060C9DA165CC252E8BFB007B4F7FBF53139 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	{
		// public IDatabaseInstanceExtended LocalDatabaseExtended { get; }
		RuntimeObject* L_0 = __this->___U3CLocalDatabaseExtendedU3Ek__BackingField_2;
		return L_0;
	}
}
// CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.DialogueController::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_Events_mF666051CE457B51A33CB4FFD15264FC9552D4945 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	{
		// public IDialogueEvents Events { get; } = new DialogueEvents();
		RuntimeObject* L_0 = __this->___U3CEventsU3Ek__BackingField_3;
		return L_0;
	}
}
// CleverCrow.Fluid.Dialogues.IDialoguePlayback CleverCrow.Fluid.Dialogues.DialogueController::get_ActiveDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_ActiveDialogue_m8CEF80D50A40BC9E843135D2ACEB3B4E02B67111 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Peek_m31F22C983DED30DE8E5DA6EE6318A3BB332A4D0D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_get_Count_m40D04F323BFB3C29254FD79A7942D8F5133FB333_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IDialoguePlayback ActiveDialogue => _activeDialogue.Count > 0 ? _activeDialogue.Peek() : null;
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_0 = __this->____activeDialogue_0;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Stack_1_get_Count_m40D04F323BFB3C29254FD79A7942D8F5133FB333_inline(L_0, Stack_1_get_Count_m40D04F323BFB3C29254FD79A7942D8F5133FB333_RuntimeMethod_var);
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0010;
		}
	}
	{
		return (RuntimeObject*)NULL;
	}

IL_0010:
	{
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_2 = __this->____activeDialogue_0;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = Stack_1_Peek_m31F22C983DED30DE8E5DA6EE6318A3BB332A4D0D(L_2, Stack_1_Peek_m31F22C983DED30DE8E5DA6EE6318A3BB332A4D0D_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::.ctor(CleverCrow.Fluid.Databases.IDatabaseInstance)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController__ctor_m008CBC93422624FE1DA0B17D28DF80C7BE53F7ED (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___localDatabase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m649827DF51C38649AEEFCFECBE131B99370A1343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Stack<IDialoguePlayback> _activeDialogue = new Stack<IDialoguePlayback>();
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_0 = (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142*)il2cpp_codegen_object_new(Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m649827DF51C38649AEEFCFECBE131B99370A1343(L_0, Stack_1__ctor_m649827DF51C38649AEEFCFECBE131B99370A1343_RuntimeMethod_var);
		__this->____activeDialogue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeDialogue_0), (void*)L_0);
		// public IDialogueEvents Events { get; } = new DialogueEvents();
		DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* L_1 = (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642*)il2cpp_codegen_object_new(DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DialogueEvents__ctor_mE1FB2B08D6F9CA934096CD55EC430C1F0934EC43(L_1, NULL);
		__this->___U3CEventsU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventsU3Ek__BackingField_3), (void*)L_1);
		// public DialogueController (IDatabaseInstance localDatabase) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// LocalDatabase = localDatabase;
		RuntimeObject* L_2 = ___localDatabase0;
		__this->___U3CLocalDatabaseU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocalDatabaseU3Ek__BackingField_1), (void*)L_2);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::.ctor(CleverCrow.Fluid.Dialogues.IDatabaseInstanceExtended)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController__ctor_m958F498772AF01AE6794E21E29D87DE0FB793816 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___localDatabase0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1__ctor_m649827DF51C38649AEEFCFECBE131B99370A1343_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Stack<IDialoguePlayback> _activeDialogue = new Stack<IDialoguePlayback>();
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_0 = (Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142*)il2cpp_codegen_object_new(Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Stack_1__ctor_m649827DF51C38649AEEFCFECBE131B99370A1343(L_0, Stack_1__ctor_m649827DF51C38649AEEFCFECBE131B99370A1343_RuntimeMethod_var);
		__this->____activeDialogue_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____activeDialogue_0), (void*)L_0);
		// public IDialogueEvents Events { get; } = new DialogueEvents();
		DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* L_1 = (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642*)il2cpp_codegen_object_new(DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		DialogueEvents__ctor_mE1FB2B08D6F9CA934096CD55EC430C1F0934EC43(L_1, NULL);
		__this->___U3CEventsU3Ek__BackingField_3 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventsU3Ek__BackingField_3), (void*)L_1);
		// public DialogueController (IDatabaseInstanceExtended localDatabase) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// LocalDatabase = localDatabase;
		RuntimeObject* L_2 = ___localDatabase0;
		__this->___U3CLocalDatabaseU3Ek__BackingField_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocalDatabaseU3Ek__BackingField_1), (void*)L_2);
		// LocalDatabaseExtended = localDatabase;
		RuntimeObject* L_3 = ___localDatabase0;
		__this->___U3CLocalDatabaseExtendedU3Ek__BackingField_2 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CLocalDatabaseExtendedU3Ek__BackingField_2), (void*)L_3);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::Play(CleverCrow.Fluid.Dialogues.IDialoguePlayback,CleverCrow.Fluid.Dialogues.IGameObjectOverride[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_Play_m6FE1C07262987F1898D5FB17F7CD85B79D9ADF6C (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___playback0, IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* ___gameObjectOverrides1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueController_TriggerBegin_mA2BCB9704F0C22BF04004DB4E27462D95FE85ABF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueController_TriggerChoice_mC29E893CA2751146B69A56D7462990DF293FD975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueController_TriggerEnd_mCCD41D52F390B107EAC55C5DEDBB7160EF6FC140_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueController_TriggerEnterNode_mA2645C7937B5AB12ABAB526534AB244BA684C18D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueController_TriggerSpeak_m9A14106687ED6AF688489B7F8C4DCD7A0A2C48CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mFD2564B72172D02B2B71EB48A913D9D85F49252A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SetupDatabases(gameObjectOverrides);
		IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* L_0 = ___gameObjectOverrides1;
		DialogueController_SetupDatabases_m453903FCE7B86F5A3A90465904FEBCFDD16BB4F6(__this, L_0, NULL);
		// Stop();
		DialogueController_Stop_m8D193F801F43B0B80FC91E0178B62CA384BCDCDE(__this, NULL);
		// playback.Events.Speak.AddListener(TriggerSpeak);
		RuntimeObject* L_1 = ___playback0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Speak() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_2);
		UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84* L_4 = (UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84*)il2cpp_codegen_object_new(UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityAction_2__ctor_m73192C5FCD89049E393183766002A5F27BBAC9B8(L_4, __this, (intptr_t)((void*)DialogueController_TriggerSpeak_m9A14106687ED6AF688489B7F8C4DCD7A0A2C48CE_RuntimeMethod_var), NULL);
		NullCheck(L_3);
		InterfaceActionInvoker1< UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84* >::Invoke(0 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String>::AddListener(UnityEngine.Events.UnityAction`2<T1,T2>) */, IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324_il2cpp_TypeInfo_var, L_3, L_4);
		// playback.Events.Choice.AddListener(TriggerChoice);
		RuntimeObject* L_5 = ___playback0;
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_5);
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Choice() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_6);
		UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD* L_8 = (UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD*)il2cpp_codegen_object_new(UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		UnityAction_3__ctor_m2A456C4ABEDE226C5B489DF00200BCD6E8F93176(L_8, __this, (intptr_t)((void*)DialogueController_TriggerChoice_mC29E893CA2751146B69A56D7462990DF293FD975_RuntimeMethod_var), NULL);
		NullCheck(L_7);
		InterfaceActionInvoker1< UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD* >::Invoke(0 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>::AddListener(UnityEngine.Events.UnityAction`3<T1,T2,T3>) */, IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D_il2cpp_TypeInfo_var, L_7, L_8);
		// playback.Events.NodeEnter.AddListener(TriggerEnterNode);
		RuntimeObject* L_9 = ___playback0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_NodeEnter() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_10);
		UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF* L_12 = (UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF*)il2cpp_codegen_object_new(UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		UnityAction_1__ctor_m43180E6530413E081CA528D444EF3E530E8D2101(L_12, __this, (intptr_t)((void*)DialogueController_TriggerEnterNode_mA2645C7937B5AB12ABAB526534AB244BA684C18D_RuntimeMethod_var), NULL);
		NullCheck(L_11);
		InterfaceActionInvoker1< UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF* >::Invoke(0 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::AddListener(UnityEngine.Events.UnityAction`1<T1>) */, IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var, L_11, L_12);
		// playback.Events.Begin.AddListener(TriggerBegin);
		RuntimeObject* L_13 = ___playback0;
		NullCheck(L_13);
		RuntimeObject* L_14;
		L_14 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_13);
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Begin() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_14);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_16 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_16);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_16, __this, (intptr_t)((void*)DialogueController_TriggerBegin_mA2BCB9704F0C22BF04004DB4E27462D95FE85ABF_RuntimeMethod_var), NULL);
		NullCheck(L_15);
		InterfaceActionInvoker1< UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* >::Invoke(0 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent::AddListener(UnityEngine.Events.UnityAction) */, IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var, L_15, L_16);
		// playback.Events.End.AddListener(TriggerEnd);
		RuntimeObject* L_17 = ___playback0;
		NullCheck(L_17);
		RuntimeObject* L_18;
		L_18 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_17);
		NullCheck(L_18);
		RuntimeObject* L_19;
		L_19 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.IDialogueEvents::get_End() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_18);
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_20 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_20);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_20, __this, (intptr_t)((void*)DialogueController_TriggerEnd_mCCD41D52F390B107EAC55C5DEDBB7160EF6FC140_RuntimeMethod_var), NULL);
		NullCheck(L_19);
		InterfaceActionInvoker1< UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* >::Invoke(0 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent::AddListener(UnityEngine.Events.UnityAction) */, IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var, L_19, L_20);
		// _activeDialogue.Push(playback);
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_21 = __this->____activeDialogue_0;
		RuntimeObject* L_22 = ___playback0;
		NullCheck(L_21);
		Stack_1_Push_mFD2564B72172D02B2B71EB48A913D9D85F49252A(L_21, L_22, Stack_1_Push_mFD2564B72172D02B2B71EB48A913D9D85F49252A_RuntimeMethod_var);
		// playback.Play();
		RuntimeObject* L_23 = ___playback0;
		NullCheck(L_23);
		InterfaceActionInvoker0::Invoke(3 /* System.Void CleverCrow.Fluid.Dialogues.IDialoguePlayback::Play() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_23);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::Play(CleverCrow.Fluid.Dialogues.Graphs.IGraphData,CleverCrow.Fluid.Dialogues.IGameObjectOverride[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_Play_mC165DAF7578EEF02FCB74F572834407230AA5CC0 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___graph0, IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* ___gameObjectOverrides1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* V_0 = NULL;
	{
		// var runtime = new GraphRuntime(this, graph);
		RuntimeObject* L_0 = ___graph0;
		GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* L_1 = (GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90*)il2cpp_codegen_object_new(GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GraphRuntime__ctor_m8391F4F082240CF0711C724E83C57FA4E7D3EE94(L_1, __this, L_0, NULL);
		V_0 = L_1;
		// Play(new DialoguePlayback(runtime, this, new DialogueEvents()), gameObjectOverrides);
		GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* L_2 = V_0;
		DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* L_3 = (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642*)il2cpp_codegen_object_new(DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DialogueEvents__ctor_mE1FB2B08D6F9CA934096CD55EC430C1F0934EC43(L_3, NULL);
		DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* L_4 = (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF*)il2cpp_codegen_object_new(DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DialoguePlayback__ctor_mF4595D92E3DB39BABB4175E98B9736795F4E4194(L_4, L_2, __this, L_3, NULL);
		IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* L_5 = ___gameObjectOverrides1;
		DialogueController_Play_m6FE1C07262987F1898D5FB17F7CD85B79D9ADF6C(__this, L_4, L_5, NULL);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::SetupDatabases(CleverCrow.Fluid.Dialogues.IGameObjectOverride[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_SetupDatabases_m453903FCE7B86F5A3A90465904FEBCFDD16BB4F6 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* ___gameObjectOverrides0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstanceExtended_t9519B545E11E2A1A8EA4422A7476BB55156A9B1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameObjectOverride_t00468D277F1CFB51D1EF3774FF4EFAED3F78CE47_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueData_1_t046EA48861A90497331417C2E6C30569EF4F9108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueDefinition_1_t9CD47DEA88011964A18FD9AF2DB76E0544BA4028_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* V_0 = NULL;
	int32_t V_1 = 0;
	RuntimeObject* V_2 = NULL;
	{
		// LocalDatabase.Clear();
		RuntimeObject* L_0;
		L_0 = DialogueController_get_LocalDatabase_m9E9955CF8A69076CEBDF799DBAAEE5A6450BF624_inline(__this, NULL);
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void CleverCrow.Fluid.Databases.IDatabaseInstance::Clear() */, IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var, L_0);
		// if (LocalDatabaseExtended == null) return;
		RuntimeObject* L_1;
		L_1 = DialogueController_get_LocalDatabaseExtended_mD7666060C9DA165CC252E8BFB007B4F7FBF53139_inline(__this, NULL);
		if (L_1)
		{
			goto IL_0014;
		}
	}
	{
		// if (LocalDatabaseExtended == null) return;
		return;
	}

IL_0014:
	{
		// LocalDatabaseExtended.ClearGameObjects();
		RuntimeObject* L_2;
		L_2 = DialogueController_get_LocalDatabaseExtended_mD7666060C9DA165CC252E8BFB007B4F7FBF53139_inline(__this, NULL);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(1 /* System.Void CleverCrow.Fluid.Dialogues.IDatabaseInstanceExtended::ClearGameObjects() */, IDatabaseInstanceExtended_t9519B545E11E2A1A8EA4422A7476BB55156A9B1E_il2cpp_TypeInfo_var, L_2);
		// if (gameObjectOverrides == null) return;
		IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* L_3 = ___gameObjectOverrides0;
		if (L_3)
		{
			goto IL_0023;
		}
	}
	{
		// if (gameObjectOverrides == null) return;
		return;
	}

IL_0023:
	{
		// foreach (var goOverride in gameObjectOverrides) {
		IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* L_4 = ___gameObjectOverrides0;
		V_0 = L_4;
		V_1 = 0;
		goto IL_0052;
	}

IL_0029:
	{
		// foreach (var goOverride in gameObjectOverrides) {
		IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* L_5 = V_0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		int32_t L_7 = L_6;
		RuntimeObject* L_8 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		V_2 = L_8;
		// LocalDatabaseExtended.GameObjects.Set(goOverride.Definition.Key, goOverride.Value);
		RuntimeObject* L_9;
		L_9 = DialogueController_get_LocalDatabaseExtended_mD7666060C9DA165CC252E8BFB007B4F7FBF53139_inline(__this, NULL);
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IKeyValueData`1<UnityEngine.GameObject> CleverCrow.Fluid.Dialogues.IDatabaseInstanceExtended::get_GameObjects() */, IDatabaseInstanceExtended_t9519B545E11E2A1A8EA4422A7476BB55156A9B1E_il2cpp_TypeInfo_var, L_9);
		RuntimeObject* L_11 = V_2;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IKeyValueDefinition`1<UnityEngine.GameObject> CleverCrow.Fluid.Dialogues.IGameObjectOverride::get_Definition() */, IGameObjectOverride_t00468D277F1CFB51D1EF3774FF4EFAED3F78CE47_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		String_t* L_13;
		L_13 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String CleverCrow.Fluid.Databases.IKeyValueDefinition`1<UnityEngine.GameObject>::get_Key() */, IKeyValueDefinition_1_t9CD47DEA88011964A18FD9AF2DB76E0544BA4028_il2cpp_TypeInfo_var, L_12);
		RuntimeObject* L_14 = V_2;
		NullCheck(L_14);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15;
		L_15 = InterfaceFuncInvoker0< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(1 /* UnityEngine.GameObject CleverCrow.Fluid.Dialogues.IGameObjectOverride::get_Value() */, IGameObjectOverride_t00468D277F1CFB51D1EF3774FF4EFAED3F78CE47_il2cpp_TypeInfo_var, L_14);
		NullCheck(L_10);
		InterfaceActionInvoker2< String_t*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(2 /* System.Void CleverCrow.Fluid.Databases.IKeyValueData`1<UnityEngine.GameObject>::Set(System.String,V) */, IKeyValueData_1_t046EA48861A90497331417C2E6C30569EF4F9108_il2cpp_TypeInfo_var, L_10, L_13, L_15);
		int32_t L_16 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_16, 1));
	}

IL_0052:
	{
		// foreach (var goOverride in gameObjectOverrides) {
		int32_t L_17 = V_1;
		IGameObjectOverrideU5BU5D_tBCB39B0FBF1168B83F8C2DE9DD5EE7882E25830B* L_18 = V_0;
		NullCheck(L_18);
		if ((((int32_t)L_17) < ((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))
		{
			goto IL_0029;
		}
	}
	{
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::PlayChild(CleverCrow.Fluid.Dialogues.IDialoguePlayback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_PlayChild_m3E67C8FE930AD1A489528DBD7542E6347C235761 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___playback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueController_TriggerChoice_mC29E893CA2751146B69A56D7462990DF293FD975_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueController_TriggerEnterNode_mA2645C7937B5AB12ABAB526534AB244BA684C18D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueController_TriggerSpeak_m9A14106687ED6AF688489B7F8C4DCD7A0A2C48CE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_mFD2564B72172D02B2B71EB48A913D9D85F49252A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_U3CPlayChildU3Eb__0_m78B03A90C2FF061616A540D2BB08F35F2AC5C79B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015* L_0 = (U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass17_0__ctor_mC6FD338EC72EB333C3CBA81D6296A492A621A768(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015* L_1 = V_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_0), (void*)__this);
		// if (ActiveDialogue == null) {
		RuntimeObject* L_2;
		L_2 = DialogueController_get_ActiveDialogue_m8CEF80D50A40BC9E843135D2ACEB3B4E02B67111(__this, NULL);
		if (L_2)
		{
			goto IL_0020;
		}
	}
	{
		// throw new InvalidOperationException("Cannot trigger child dialogue, nothing is playing");
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_3 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		NullCheck(L_3);
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8DE11A69BD92601072F79AD141164E40AD1BED91)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&DialogueController_PlayChild_m3E67C8FE930AD1A489528DBD7542E6347C235761_RuntimeMethod_var)));
	}

IL_0020:
	{
		// var parentDialogue = ActiveDialogue;
		U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015* L_4 = V_0;
		RuntimeObject* L_5;
		L_5 = DialogueController_get_ActiveDialogue_m8CEF80D50A40BC9E843135D2ACEB3B4E02B67111(__this, NULL);
		NullCheck(L_4);
		L_4->___parentDialogue_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_4->___parentDialogue_1), (void*)L_5);
		// playback.Events.End.AddListener(() => {
		//     _activeDialogue.Pop();
		//     parentDialogue.Next();
		// });
		RuntimeObject* L_6 = ___playback0;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.IDialogueEvents::get_End() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_7);
		U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015* L_9 = V_0;
		UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* L_10 = (UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7*)il2cpp_codegen_object_new(UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7_il2cpp_TypeInfo_var);
		NullCheck(L_10);
		UnityAction__ctor_mC53E20D6B66E0D5688CD81B88DBB34F5A58B7131(L_10, L_9, (intptr_t)((void*)U3CU3Ec__DisplayClass17_0_U3CPlayChildU3Eb__0_m78B03A90C2FF061616A540D2BB08F35F2AC5C79B_RuntimeMethod_var), NULL);
		NullCheck(L_8);
		InterfaceActionInvoker1< UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* >::Invoke(0 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent::AddListener(UnityEngine.Events.UnityAction) */, IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var, L_8, L_10);
		// playback.Events.Speak.AddListener(TriggerSpeak);
		RuntimeObject* L_11 = ___playback0;
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_11);
		NullCheck(L_12);
		RuntimeObject* L_13;
		L_13 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Speak() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_12);
		UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84* L_14 = (UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84*)il2cpp_codegen_object_new(UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		UnityAction_2__ctor_m73192C5FCD89049E393183766002A5F27BBAC9B8(L_14, __this, (intptr_t)((void*)DialogueController_TriggerSpeak_m9A14106687ED6AF688489B7F8C4DCD7A0A2C48CE_RuntimeMethod_var), NULL);
		NullCheck(L_13);
		InterfaceActionInvoker1< UnityAction_2_t696B9BA89044763BEC43AE51115257A123430D84* >::Invoke(0 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String>::AddListener(UnityEngine.Events.UnityAction`2<T1,T2>) */, IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324_il2cpp_TypeInfo_var, L_13, L_14);
		// playback.Events.Choice.AddListener(TriggerChoice);
		RuntimeObject* L_15 = ___playback0;
		NullCheck(L_15);
		RuntimeObject* L_16;
		L_16 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_15);
		NullCheck(L_16);
		RuntimeObject* L_17;
		L_17 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Choice() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_16);
		UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD* L_18 = (UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD*)il2cpp_codegen_object_new(UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		UnityAction_3__ctor_m2A456C4ABEDE226C5B489DF00200BCD6E8F93176(L_18, __this, (intptr_t)((void*)DialogueController_TriggerChoice_mC29E893CA2751146B69A56D7462990DF293FD975_RuntimeMethod_var), NULL);
		NullCheck(L_17);
		InterfaceActionInvoker1< UnityAction_3_t15679F09FB2457D7F88AD9ED914E4276D34CDEAD* >::Invoke(0 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>::AddListener(UnityEngine.Events.UnityAction`3<T1,T2,T3>) */, IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D_il2cpp_TypeInfo_var, L_17, L_18);
		// playback.Events.NodeEnter.AddListener(TriggerEnterNode);
		RuntimeObject* L_19 = ___playback0;
		NullCheck(L_19);
		RuntimeObject* L_20;
		L_20 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_19);
		NullCheck(L_20);
		RuntimeObject* L_21;
		L_21 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_NodeEnter() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_20);
		UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF* L_22 = (UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF*)il2cpp_codegen_object_new(UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		UnityAction_1__ctor_m43180E6530413E081CA528D444EF3E530E8D2101(L_22, __this, (intptr_t)((void*)DialogueController_TriggerEnterNode_mA2645C7937B5AB12ABAB526534AB244BA684C18D_RuntimeMethod_var), NULL);
		NullCheck(L_21);
		InterfaceActionInvoker1< UnityAction_1_tF7B21F1C4C83648A8979FCDC43AFE10D38E5D8EF* >::Invoke(0 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::AddListener(UnityEngine.Events.UnityAction`1<T1>) */, IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var, L_21, L_22);
		// _activeDialogue.Push(playback);
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_23 = __this->____activeDialogue_0;
		RuntimeObject* L_24 = ___playback0;
		NullCheck(L_23);
		Stack_1_Push_mFD2564B72172D02B2B71EB48A913D9D85F49252A(L_23, L_24, Stack_1_Push_mFD2564B72172D02B2B71EB48A913D9D85F49252A_RuntimeMethod_var);
		// playback.Play();
		RuntimeObject* L_25 = ___playback0;
		NullCheck(L_25);
		InterfaceActionInvoker0::Invoke(3 /* System.Void CleverCrow.Fluid.Dialogues.IDialoguePlayback::Play() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_25);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::PlayChild(CleverCrow.Fluid.Dialogues.Graphs.IGraphData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_PlayChild_mC553B8162A7A723950B0F7D83C0AC636318A71DF (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___graph0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* V_0 = NULL;
	{
		// var runtime = new GraphRuntime(this, graph);
		RuntimeObject* L_0 = ___graph0;
		GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* L_1 = (GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90*)il2cpp_codegen_object_new(GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		GraphRuntime__ctor_m8391F4F082240CF0711C724E83C57FA4E7D3EE94(L_1, __this, L_0, NULL);
		V_0 = L_1;
		// PlayChild(new DialoguePlayback(runtime, this, new DialogueEvents()));
		GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* L_2 = V_0;
		DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* L_3 = (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642*)il2cpp_codegen_object_new(DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		DialogueEvents__ctor_mE1FB2B08D6F9CA934096CD55EC430C1F0934EC43(L_3, NULL);
		DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* L_4 = (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF*)il2cpp_codegen_object_new(DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		DialoguePlayback__ctor_mF4595D92E3DB39BABB4175E98B9736795F4E4194(L_4, L_2, __this, L_3, NULL);
		DialogueController_PlayChild_m3E67C8FE930AD1A489528DBD7542E6347C235761(__this, L_4, NULL);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::TriggerBegin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_TriggerBegin_mA2BCB9704F0C22BF04004DB4E27462D95FE85ABF (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.Begin.Invoke();
		RuntimeObject* L_0;
		L_0 = DialogueController_get_Events_mF666051CE457B51A33CB4FFD15264FC9552D4945_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Begin() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent::Invoke() */, IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::TriggerEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_TriggerEnd_mCCD41D52F390B107EAC55C5DEDBB7160EF6FC140 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBDC188A1A8FBEA5C6B015298980A36C6E7C73450_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activeDialogue.Pop();
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_0 = __this->____activeDialogue_0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Stack_1_Pop_mBDC188A1A8FBEA5C6B015298980A36C6E7C73450(L_0, Stack_1_Pop_mBDC188A1A8FBEA5C6B015298980A36C6E7C73450_RuntimeMethod_var);
		// Events.End.Invoke();
		RuntimeObject* L_2;
		L_2 = DialogueController_get_Events_mF666051CE457B51A33CB4FFD15264FC9552D4945_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.IDialogueEvents::get_End() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent::Invoke() */, IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var, L_3);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::TriggerSpeak(CleverCrow.Fluid.Dialogues.IActor,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_TriggerSpeak_m9A14106687ED6AF688489B7F8C4DCD7A0A2C48CE (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___actor0, String_t* ___text1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.Speak.Invoke(actor, text);
		RuntimeObject* L_0;
		L_0 = DialogueController_get_Events_mF666051CE457B51A33CB4FFD15264FC9552D4945_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Speak() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___actor0;
		String_t* L_3 = ___text1;
		NullCheck(L_1);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String>::Invoke(T1,T2) */, IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324_il2cpp_TypeInfo_var, L_1, L_2, L_3);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::TriggerChoice(CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_TriggerChoice_mC29E893CA2751146B69A56D7462990DF293FD975 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___actor0, String_t* ___text1, List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* ___choices2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.Choice.Invoke(actor, text, choices);
		RuntimeObject* L_0;
		L_0 = DialogueController_get_Events_mF666051CE457B51A33CB4FFD15264FC9552D4945_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Choice() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___actor0;
		String_t* L_3 = ___text1;
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_4 = ___choices2;
		NullCheck(L_1);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* >::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>::Invoke(T1,T2,T3) */, IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D_il2cpp_TypeInfo_var, L_1, L_2, L_3, L_4);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::TriggerEnterNode(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_TriggerEnterNode_mA2645C7937B5AB12ABAB526534AB244BA684C18D (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, RuntimeObject* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Events.NodeEnter.Invoke(node);
		RuntimeObject* L_0;
		L_0 = DialogueController_get_Events_mF666051CE457B51A33CB4FFD15264FC9552D4945_inline(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_NodeEnter() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = ___node0;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::Invoke(T1) */, IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_Next_mDF7872488826451CFD1331DCDB664CB01864A2E5 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// ActiveDialogue?.Next();
		RuntimeObject* L_0;
		L_0 = DialogueController_get_ActiveDialogue_m8CEF80D50A40BC9E843135D2ACEB3B4E02B67111(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void CleverCrow.Fluid.Dialogues.IDialoguePlayback::Next() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_Tick_m086F661542A8A8BF650BC332BD3D80527659C38E (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// ActiveDialogue?.Tick();
		RuntimeObject* L_0;
		L_0 = DialogueController_get_ActiveDialogue_m8CEF80D50A40BC9E843135D2ACEB3B4E02B67111(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		NullCheck(G_B2_0);
		InterfaceActionInvoker0::Invoke(4 /* System.Void CleverCrow.Fluid.Dialogues.IDialoguePlayback::Tick() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, G_B2_0);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::SelectChoice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_SelectChoice_m6B32C42EFE108EC0F7484F88BF376F75CD3049C8 (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// ActiveDialogue?.SelectChoice(index);
		RuntimeObject* L_0;
		L_0 = DialogueController_get_ActiveDialogue_m8CEF80D50A40BC9E843135D2ACEB3B4E02B67111(__this, NULL);
		RuntimeObject* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000b;
		}
	}
	{
		return;
	}

IL_000b:
	{
		int32_t L_2 = ___index0;
		NullCheck(G_B2_0);
		InterfaceActionInvoker1< int32_t >::Invoke(5 /* System.Void CleverCrow.Fluid.Dialogues.IDialoguePlayback::SelectChoice(System.Int32) */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, G_B2_0, L_2);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueController_Stop_m8D193F801F43B0B80FC91E0178B62CA384BCDCDE (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m643FA38FBDF1EA0222BBFDCF784B82A955DB885C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m55B62A3B02390A7EC9C572591C6050B9216D9F1D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5ADAA379F919D7BD4100F73C5A2E49C88D277D68_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Clear_mCE5314233902A0B969CF4689616124075C2F852A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_GetEnumerator_m91A3DE3011E0145024714CCDC2AD55CD27F3011B_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach (var dialogue in _activeDialogue) {
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_0 = __this->____activeDialogue_0;
		NullCheck(L_0);
		Enumerator_t0580549C6E14D57FC3E3B2452597751BD5D49E59 L_1;
		L_1 = Stack_1_GetEnumerator_m91A3DE3011E0145024714CCDC2AD55CD27F3011B(L_0, Stack_1_GetEnumerator_m91A3DE3011E0145024714CCDC2AD55CD27F3011B_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0025:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m643FA38FBDF1EA0222BBFDCF784B82A955DB885C((&V_0), Enumerator_Dispose_m643FA38FBDF1EA0222BBFDCF784B82A955DB885C_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_001a_1;
			}

IL_000e_1:
			{
				// foreach (var dialogue in _activeDialogue) {
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m5ADAA379F919D7BD4100F73C5A2E49C88D277D68((&V_0), Enumerator_get_Current_m5ADAA379F919D7BD4100F73C5A2E49C88D277D68_RuntimeMethod_var);
				// dialogue.Stop();
				NullCheck(L_2);
				InterfaceActionInvoker0::Invoke(6 /* System.Void CleverCrow.Fluid.Dialogues.IDialoguePlayback::Stop() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_2);
			}

IL_001a_1:
			{
				// foreach (var dialogue in _activeDialogue) {
				bool L_3;
				L_3 = Enumerator_MoveNext_m55B62A3B02390A7EC9C572591C6050B9216D9F1D((&V_0), Enumerator_MoveNext_m55B62A3B02390A7EC9C572591C6050B9216D9F1D_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_000e_1;
				}
			}
			{
				goto IL_0033;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0033:
	{
		// _activeDialogue.Clear();
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_4 = __this->____activeDialogue_0;
		NullCheck(L_4);
		Stack_1_Clear_mCE5314233902A0B969CF4689616124075C2F852A(L_4, Stack_1_Clear_mCE5314233902A0B969CF4689616124075C2F852A_RuntimeMethod_var);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.DialogueController/<>c__DisplayClass17_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0__ctor_mC6FD338EC72EB333C3CBA81D6296A492A621A768 (U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueController/<>c__DisplayClass17_0::<PlayChild>b__0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_U3CPlayChildU3Eb__0_m78B03A90C2FF061616A540D2BB08F35F2AC5C79B (U3CU3Ec__DisplayClass17_0_t4A89709B6366F5F0599798DF3344258EB66F6015* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mBDC188A1A8FBEA5C6B015298980A36C6E7C73450_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _activeDialogue.Pop();
		DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* L_0 = __this->___U3CU3E4__this_0;
		NullCheck(L_0);
		Stack_1_tCB5D85A0C024742DE46661A3FCD4FD5DF21F6142* L_1 = L_0->____activeDialogue_0;
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = Stack_1_Pop_mBDC188A1A8FBEA5C6B015298980A36C6E7C73450(L_1, Stack_1_Pop_mBDC188A1A8FBEA5C6B015298980A36C6E7C73450_RuntimeMethod_var);
		// parentDialogue.Next();
		RuntimeObject* L_3 = __this->___parentDialogue_1;
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(2 /* System.Void CleverCrow.Fluid.Dialogues.IDialoguePlayback::Next() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_3);
		// });
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueDefinition`1<UnityEngine.GameObject> CleverCrow.Fluid.Dialogues.GameObjectOverride::get_Definition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObjectOverride_get_Definition_m09F12E4922D5E29720810FED2E97E610E8975500 (GameObjectOverride_t2C942720B578D92FAFFC82E5BAEBE868B6E9C459* __this, const RuntimeMethod* method) 
{
	{
		// public IKeyValueDefinition<GameObject> Definition => _variable;
		KeyValueDefinitionGameObject_t20E8737AA36DEA537928D7A75C6C122DFF030924* L_0 = __this->____variable_0;
		return L_0;
	}
}
// UnityEngine.GameObject CleverCrow.Fluid.Dialogues.GameObjectOverride::get_Value()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* GameObjectOverride_get_Value_mBF1664FF2CAF667FB5D75C1A717C78E5D42A04DF (GameObjectOverride_t2C942720B578D92FAFFC82E5BAEBE868B6E9C459* __this, const RuntimeMethod* method) 
{
	{
		// public GameObject Value => _gameObject;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____gameObject_1;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.GameObjectOverride::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectOverride__ctor_mA4ADF6D4A792DD75145C1A02CEF6579CB02169FB (GameObjectOverride_t2C942720B578D92FAFFC82E5BAEBE868B6E9C459* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.KeyValueDataGameObject::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* KeyValueDataGameObject_Save_mDC2E48F6BEA0D60EB7E3F97A791A535BA1CC63F5 (KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyValueDataGameObject_Save_mDC2E48F6BEA0D60EB7E3F97A791A535BA1CC63F5_RuntimeMethod_var)));
	}
}
// System.Void CleverCrow.Fluid.Dialogues.KeyValueDataGameObject::Load(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataGameObject_Load_m131B8379969FF650BAE85B525E82C66421E23E6F (KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13* __this, String_t* ___save0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&KeyValueDataGameObject_Load_m131B8379969FF650BAE85B525E82C66421E23E6F_RuntimeMethod_var)));
	}
}
// System.Void CleverCrow.Fluid.Dialogues.KeyValueDataGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDataGameObject__ctor_m77058B08E5DC4C065A2DABDE064436E049B08DD6 (KeyValueDataGameObject_tCF7A0BF262F6595A6B861A0D0EF16F4B15E1CC13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueDataBase_1__ctor_mE77664C6553BFB75B3466D43E06ACF68879AB850_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValueDataBase_1__ctor_mE77664C6553BFB75B3466D43E06ACF68879AB850(__this, KeyValueDataBase_1__ctor_mE77664C6553BFB75B3466D43E06ACF68879AB850_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.DialoguePlayback::get_Events()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialoguePlayback_get_Events_mD9F0C652C1079C521C525C7A24C20B8588F5D199 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	{
		// public IDialogueEvents Events { get;}
		RuntimeObject* L_0 = __this->___U3CEventsU3Ek__BackingField_3;
		return L_0;
	}
}
// CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.DialoguePlayback::get_ParentCtrl()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialoguePlayback_get_ParentCtrl_mD16A92E8B6E6E91FA388D288B465A857D68B2789 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	{
		// public IDialogueController ParentCtrl { get; }
		RuntimeObject* L_0 = __this->___U3CParentCtrlU3Ek__BackingField_4;
		return L_0;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.DialoguePlayback::get_Pointer()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	{
		// public INode Pointer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointerU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::set_Pointer(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_set_Pointer_mA6FB6EF31F82FECCDC827B17AEBD6948DB84C851 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public INode Pointer { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPointerU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointerU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController,CleverCrow.Fluid.Dialogues.IDialogueEvents)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback__ctor_mF4595D92E3DB39BABB4175E98B9736795F4E4194 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, RuntimeObject* ___graph0, RuntimeObject* ___ctrl1, RuntimeObject* ___events2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1__ctor_m6ED1CE1C5A29DC27AFC2EF02A3D2C42E77CB366F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private readonly Queue<IAction> _actionQueue = new Queue<IAction>();
		Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_0 = (Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7*)il2cpp_codegen_object_new(Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		Queue_1__ctor_m6ED1CE1C5A29DC27AFC2EF02A3D2C42E77CB366F(L_0, Queue_1__ctor_m6ED1CE1C5A29DC27AFC2EF02A3D2C42E77CB366F_RuntimeMethod_var);
		__this->____actionQueue_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____actionQueue_1), (void*)L_0);
		// public DialoguePlayback (IGraph graph, IDialogueController ctrl, IDialogueEvents events) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _graph = graph;
		RuntimeObject* L_1 = ___graph0;
		__this->____graph_2 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____graph_2), (void*)L_1);
		// Events = events;
		RuntimeObject* L_2 = ___events2;
		__this->___U3CEventsU3Ek__BackingField_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEventsU3Ek__BackingField_3), (void*)L_2);
		// ParentCtrl = ctrl;
		RuntimeObject* L_3 = ___ctrl1;
		__this->___U3CParentCtrlU3Ek__BackingField_4 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CParentCtrlU3Ek__BackingField_4), (void*)L_3);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_Play_m9D7F5E6AAEDCC99F483F424625713EB1C4802F3E (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraph_tFE3B64FEB94003143B6CA2E7E97B1048059D8494_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stop();
		DialoguePlayback_Stop_m762F819CB21CB42E71487D1CF786813C96BB0951(__this, NULL);
		// _playing = true;
		__this->____playing_0 = (bool)1;
		// Pointer = _graph.Root;
		RuntimeObject* L_0 = __this->____graph_2;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Graphs.IGraph::get_Root() */, IGraph_tFE3B64FEB94003143B6CA2E7E97B1048059D8494_il2cpp_TypeInfo_var, L_0);
		DialoguePlayback_set_Pointer_mA6FB6EF31F82FECCDC827B17AEBD6948DB84C851_inline(__this, L_1, NULL);
		// Events.Begin.Invoke();
		RuntimeObject* L_2;
		L_2 = DialoguePlayback_get_Events_mD9F0C652C1079C521C525C7A24C20B8588F5D199_inline(__this, NULL);
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Begin() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_2);
		NullCheck(L_3);
		InterfaceActionInvoker0::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent::Invoke() */, IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var, L_3);
		// if (!_graph.Root.IsValid) {
		RuntimeObject* L_4 = __this->____graph_2;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Graphs.IGraph::get_Root() */, IGraph_tFE3B64FEB94003143B6CA2E7E97B1048059D8494_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		bool L_6;
		L_6 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean CleverCrow.Fluid.Dialogues.Nodes.INode::get_IsValid() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_5);
		if (L_6)
		{
			goto IL_0051;
		}
	}
	{
		// Events.End.Invoke();
		RuntimeObject* L_7;
		L_7 = DialoguePlayback_get_Events_mD9F0C652C1079C521C525C7A24C20B8588F5D199_inline(__this, NULL);
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.IDialogueEvents::get_End() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_7);
		NullCheck(L_8);
		InterfaceActionInvoker0::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent::Invoke() */, IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var, L_8);
		// return;
		return;
	}

IL_0051:
	{
		// Next(null, Pointer);
		RuntimeObject* L_9;
		L_9 = DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824_inline(__this, NULL);
		DialoguePlayback_Next_m52BBD9508093D92CCCF73FD2FB8CA14CC495956C(__this, (RuntimeObject*)NULL, L_9, NULL);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::ClearAllActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_ClearAllActions_m6F46F1C83E1FB78FD6CF57A8AA86961E71503A8C (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mDEE73D10D742E9279FB56EC2C02F447C912AE463_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0012;
	}

IL_0002:
	{
		// var action = _actionQueue.Dequeue();
		Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_0 = __this->____actionQueue_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Queue_1_Dequeue_mDEE73D10D742E9279FB56EC2C02F447C912AE463(L_0, Queue_1_Dequeue_mDEE73D10D742E9279FB56EC2C02F447C912AE463_RuntimeMethod_var);
		// action.End();
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void CleverCrow.Fluid.Dialogues.Actions.IAction::End() */, IAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_il2cpp_TypeInfo_var, L_1);
	}

IL_0012:
	{
		// while (_actionQueue.Count > 0) {
		Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_2 = __this->____actionQueue_1;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_inline(L_2, Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_RuntimeMethod_var);
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.ActionStatus CleverCrow.Fluid.Dialogues.DialoguePlayback::UpdateActionQueue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t DialoguePlayback_UpdateActionQueue_m1C48A1BE32ECF946FB345CFF8FC85B0D640E0F21 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Dequeue_mDEE73D10D742E9279FB56EC2C02F447C912AE463_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Peek_m4966003EA6BFC6D725EDE60707DE3FD147C16AC4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		goto IL_0023;
	}

IL_0002:
	{
		// if (_actionQueue.Peek().Tick() == ActionStatus.Continue) return ActionStatus.Continue;
		Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_0 = __this->____actionQueue_1;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = Queue_1_Peek_m4966003EA6BFC6D725EDE60707DE3FD147C16AC4(L_0, Queue_1_Peek_m4966003EA6BFC6D725EDE60707DE3FD147C16AC4_RuntimeMethod_var);
		NullCheck(L_1);
		int32_t L_2;
		L_2 = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* CleverCrow.Fluid.Dialogues.Actions.ActionStatus CleverCrow.Fluid.Dialogues.Actions.IAction::Tick() */, IAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_il2cpp_TypeInfo_var, L_1);
		if ((!(((uint32_t)L_2) == ((uint32_t)1))))
		{
			goto IL_0017;
		}
	}
	{
		// if (_actionQueue.Peek().Tick() == ActionStatus.Continue) return ActionStatus.Continue;
		return (int32_t)(1);
	}

IL_0017:
	{
		// _actionQueue.Dequeue();
		Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_3 = __this->____actionQueue_1;
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = Queue_1_Dequeue_mDEE73D10D742E9279FB56EC2C02F447C912AE463(L_3, Queue_1_Dequeue_mDEE73D10D742E9279FB56EC2C02F447C912AE463_RuntimeMethod_var);
	}

IL_0023:
	{
		// while (_actionQueue.Count > 0) {
		Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_5 = __this->____actionQueue_1;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_inline(L_5, Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_RuntimeMethod_var);
		if ((((int32_t)L_6) > ((int32_t)0)))
		{
			goto IL_0002;
		}
	}
	{
		// return ActionStatus.Success;
		return (int32_t)(0);
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_Next_m2B116B75A341B5397AE4DCCB4960D7D8DE22EEA3 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// if (_actionQueue.Count != 0) return;
		Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_0 = __this->____actionQueue_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_inline(L_0, Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_000e;
		}
	}
	{
		// if (_actionQueue.Count != 0) return;
		return;
	}

IL_000e:
	{
		// var current = Pointer;
		RuntimeObject* L_2;
		L_2 = DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824_inline(__this, NULL);
		V_0 = L_2;
		// var next = Pointer.Next();
		RuntimeObject* L_3;
		L_3 = DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824_inline(__this, NULL);
		NullCheck(L_3);
		RuntimeObject* L_4;
		L_4 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.INode::Next() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_3);
		V_1 = L_4;
		// Pointer = next;
		RuntimeObject* L_5 = V_1;
		DialoguePlayback_set_Pointer_mA6FB6EF31F82FECCDC827B17AEBD6948DB84C851_inline(__this, L_5, NULL);
		// Next(current, next);
		RuntimeObject* L_6 = V_0;
		RuntimeObject* L_7 = V_1;
		DialoguePlayback_Next_m52BBD9508093D92CCCF73FD2FB8CA14CC495956C(__this, L_6, L_7, NULL);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::Next(CleverCrow.Fluid.Dialogues.Nodes.INode,CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_Next_m52BBD9508093D92CCCF73FD2FB8CA14CC495956C (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, RuntimeObject* ___current0, RuntimeObject* ___next1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m054FE6EE163208E65CEB69E17815C340E54BF802_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m6987C49A60C79B65D2F70F29A1D582E9E21F27A9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7DAE628EFE8C2D1451CBAD12E7E00B7EDEE87697_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m7BFD3E19EFCAE05BEB5F34B98AB4D5CB782E980B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_Enqueue_m39C4AA37CB09EA5C8B505B8A1DF02027718F0E76_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11 V_0;
	memset((&V_0), 0, sizeof(V_0));
	RuntimeObject* V_1 = NULL;
	RuntimeObject* V_2 = NULL;
	{
		// if (current != null) {
		RuntimeObject* L_0 = ___current0;
		if (!L_0)
		{
			goto IL_003e;
		}
	}
	{
		// foreach (var action in current.ExitActions) {
		RuntimeObject* L_1 = ___current0;
		NullCheck(L_1);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_2;
		L_2 = InterfaceFuncInvoker0< List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* >::Invoke(1 /* System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.INode::get_ExitActions() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11 L_3;
		L_3 = List_1_GetEnumerator_m7BFD3E19EFCAE05BEB5F34B98AB4D5CB782E980B(L_2, List_1_GetEnumerator_m7BFD3E19EFCAE05BEB5F34B98AB4D5CB782E980B_RuntimeMethod_var);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0030:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m054FE6EE163208E65CEB69E17815C340E54BF802((&V_0), Enumerator_Dispose_m054FE6EE163208E65CEB69E17815C340E54BF802_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0025_1;
			}

IL_0011_1:
			{
				// foreach (var action in current.ExitActions) {
				RuntimeObject* L_4;
				L_4 = Enumerator_get_Current_m7DAE628EFE8C2D1451CBAD12E7E00B7EDEE87697_inline((&V_0), Enumerator_get_Current_m7DAE628EFE8C2D1451CBAD12E7E00B7EDEE87697_RuntimeMethod_var);
				V_1 = L_4;
				// _actionQueue.Enqueue(action);
				Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_5 = __this->____actionQueue_1;
				RuntimeObject* L_6 = V_1;
				NullCheck(L_5);
				Queue_1_Enqueue_m39C4AA37CB09EA5C8B505B8A1DF02027718F0E76(L_5, L_6, Queue_1_Enqueue_m39C4AA37CB09EA5C8B505B8A1DF02027718F0E76_RuntimeMethod_var);
			}

IL_0025_1:
			{
				// foreach (var action in current.ExitActions) {
				bool L_7;
				L_7 = Enumerator_MoveNext_m6987C49A60C79B65D2F70F29A1D582E9E21F27A9((&V_0), Enumerator_MoveNext_m6987C49A60C79B65D2F70F29A1D582E9E21F27A9_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0011_1;
				}
			}
			{
				goto IL_003e;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_003e:
	{
		// if (next != null) {
		RuntimeObject* L_8 = ___next1;
		if (!L_8)
		{
			goto IL_007c;
		}
	}
	{
		// foreach (var action in next.EnterActions) {
		RuntimeObject* L_9 = ___next1;
		NullCheck(L_9);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_10;
		L_10 = InterfaceFuncInvoker0< List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* >::Invoke(0 /* System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.INode::get_EnterActions() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		Enumerator_tBE579F59756FCB56DDBE9118A42D5F23FBCD1D11 L_11;
		L_11 = List_1_GetEnumerator_m7BFD3E19EFCAE05BEB5F34B98AB4D5CB782E980B(L_10, List_1_GetEnumerator_m7BFD3E19EFCAE05BEB5F34B98AB4D5CB782E980B_RuntimeMethod_var);
		V_0 = L_11;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_006e:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m054FE6EE163208E65CEB69E17815C340E54BF802((&V_0), Enumerator_Dispose_m054FE6EE163208E65CEB69E17815C340E54BF802_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0063_1;
			}

IL_004f_1:
			{
				// foreach (var action in next.EnterActions) {
				RuntimeObject* L_12;
				L_12 = Enumerator_get_Current_m7DAE628EFE8C2D1451CBAD12E7E00B7EDEE87697_inline((&V_0), Enumerator_get_Current_m7DAE628EFE8C2D1451CBAD12E7E00B7EDEE87697_RuntimeMethod_var);
				V_2 = L_12;
				// _actionQueue.Enqueue(action);
				Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_13 = __this->____actionQueue_1;
				RuntimeObject* L_14 = V_2;
				NullCheck(L_13);
				Queue_1_Enqueue_m39C4AA37CB09EA5C8B505B8A1DF02027718F0E76(L_13, L_14, Queue_1_Enqueue_m39C4AA37CB09EA5C8B505B8A1DF02027718F0E76_RuntimeMethod_var);
			}

IL_0063_1:
			{
				// foreach (var action in next.EnterActions) {
				bool L_15;
				L_15 = Enumerator_MoveNext_m6987C49A60C79B65D2F70F29A1D582E9E21F27A9((&V_0), Enumerator_MoveNext_m6987C49A60C79B65D2F70F29A1D582E9E21F27A9_RuntimeMethod_var);
				if (L_15)
				{
					goto IL_004f_1;
				}
			}
			{
				goto IL_007c;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_007c:
	{
		// if (UpdateActionQueue() == ActionStatus.Continue) return;
		int32_t L_16;
		L_16 = DialoguePlayback_UpdateActionQueue_m1C48A1BE32ECF946FB345CFF8FC85B0D640E0F21(__this, NULL);
		if ((!(((uint32_t)L_16) == ((uint32_t)1))))
		{
			goto IL_0086;
		}
	}
	{
		// if (UpdateActionQueue() == ActionStatus.Continue) return;
		return;
	}

IL_0086:
	{
		// UpdatePointer(next);
		RuntimeObject* L_17 = ___next1;
		DialoguePlayback_UpdatePointer_m981406186BA8910B597C51D1A8F18E376713A7C3(__this, L_17, NULL);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::UpdatePointer(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_UpdatePointer_m981406186BA8910B597C51D1A8F18E376713A7C3 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, RuntimeObject* ___pointer0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pointer == null) {
		RuntimeObject* L_0 = ___pointer0;
		if (L_0)
		{
			goto IL_001b;
		}
	}
	{
		// Events.End.Invoke();
		RuntimeObject* L_1;
		L_1 = DialoguePlayback_get_Events_mD9F0C652C1079C521C525C7A24C20B8588F5D199_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.IDialogueEvents::get_End() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent::Invoke() */, IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var, L_2);
		// _playing = false;
		__this->____playing_0 = (bool)0;
		// return;
		return;
	}

IL_001b:
	{
		// pointer.Play(this);
		RuntimeObject* L_3 = ___pointer0;
		NullCheck(L_3);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(5 /* System.Void CleverCrow.Fluid.Dialogues.Nodes.INode::Play(CleverCrow.Fluid.Dialogues.IDialoguePlayback) */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_3, __this);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_Tick_m2A3D8B9F848F00C2848478121323F2B9E1516CBC (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_actionQueue.Count > 0 && UpdateActionQueue() == ActionStatus.Success) {
		Queue_1_t9D05E16BD463F882D6E9F02E7C02E94C93B780C7* L_0 = __this->____actionQueue_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_inline(L_0, Queue_1_get_Count_m9E39DCCBF9815151DC0EC8BDFE0CD7EA406B4159_RuntimeMethod_var);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_0022;
		}
	}
	{
		int32_t L_2;
		L_2 = DialoguePlayback_UpdateActionQueue_m1C48A1BE32ECF946FB345CFF8FC85B0D640E0F21(__this, NULL);
		if (L_2)
		{
			goto IL_0022;
		}
	}
	{
		// UpdatePointer(Pointer);
		RuntimeObject* L_3;
		L_3 = DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824_inline(__this, NULL);
		DialoguePlayback_UpdatePointer_m981406186BA8910B597C51D1A8F18E376713A7C3(__this, L_3, NULL);
	}

IL_0022:
	{
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_Stop_m762F819CB21CB42E71487D1CF786813C96BB0951 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Pointer = null;
		DialoguePlayback_set_Pointer_mA6FB6EF31F82FECCDC827B17AEBD6948DB84C851_inline(__this, (RuntimeObject*)NULL, NULL);
		// ClearAllActions();
		DialoguePlayback_ClearAllActions_m6F46F1C83E1FB78FD6CF57A8AA86961E71503A8C(__this, NULL);
		// if (_playing) {
		bool L_0 = __this->____playing_0;
		if (!L_0)
		{
			goto IL_002c;
		}
	}
	{
		// Events.End.Invoke();
		RuntimeObject* L_1;
		L_1 = DialoguePlayback_get_Events_mD9F0C652C1079C521C525C7A24C20B8588F5D199_inline(__this, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.IDialogueEvents::get_End() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceActionInvoker0::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent::Invoke() */, IUnityEvent_tFDDF7E29DF1F39F6F7FF082649EA275E66774BB2_il2cpp_TypeInfo_var, L_2);
		// _playing = false;
		__this->____playing_0 = (bool)0;
	}

IL_002c:
	{
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialoguePlayback::SelectChoice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialoguePlayback_SelectChoice_mA8836DC2B6F74C1D40EEC37F84AC65E85A89E572 (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		// var choice = Pointer.GetChoice(index);
		RuntimeObject* L_0;
		L_0 = DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824_inline(__this, NULL);
		int32_t L_1 = ___index0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker1< RuntimeObject*, int32_t >::Invoke(6 /* CleverCrow.Fluid.Dialogues.Choices.IChoice CleverCrow.Fluid.Dialogues.Nodes.INode::GetChoice(System.Int32) */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_0, L_1);
		V_0 = L_2;
		// var current = Pointer;
		RuntimeObject* L_3;
		L_3 = DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824_inline(__this, NULL);
		V_1 = L_3;
		// Pointer = choice.GetValidChildNode();
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Choices.IChoice::GetValidChildNode() */, IChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_il2cpp_TypeInfo_var, L_4);
		DialoguePlayback_set_Pointer_mA6FB6EF31F82FECCDC827B17AEBD6948DB84C851_inline(__this, L_5, NULL);
		// Next(current, Pointer);
		RuntimeObject* L_6 = V_1;
		RuntimeObject* L_7;
		L_7 = DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824_inline(__this, NULL);
		DialoguePlayback_Next_m52BBD9508093D92CCCF73FD2FB8CA14CC495956C(__this, L_6, L_7, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.DialogueEvents::get_Begin()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueEvents_get_Begin_m9A7329B629BCF692F56B6B5EFD820C40B2AADEF2 (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* __this, const RuntimeMethod* method) 
{
	{
		// public IUnityEvent Begin { get; } = new UnityEventPlus();
		RuntimeObject* L_0 = __this->___U3CBeginU3Ek__BackingField_0;
		return L_0;
	}
}
// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent CleverCrow.Fluid.Dialogues.DialogueEvents::get_End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueEvents_get_End_m37995B70D6E68182C6480DCBFE1C724041EE1EC1 (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* __this, const RuntimeMethod* method) 
{
	{
		// public IUnityEvent End { get; } = new UnityEventPlus();
		RuntimeObject* L_0 = __this->___U3CEndU3Ek__BackingField_1;
		return L_0;
	}
}
// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String> CleverCrow.Fluid.Dialogues.DialogueEvents::get_Speak()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueEvents_get_Speak_mA5D16CEDD4CFFBB8B598CAC9F528460A10A96B2C (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* __this, const RuntimeMethod* method) 
{
	{
		// public IUnityEvent<IActor, string> Speak { get; } = new UnityEventPlus<IActor, string>();
		RuntimeObject* L_0 = __this->___U3CSpeakU3Ek__BackingField_2;
		return L_0;
	}
}
// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>> CleverCrow.Fluid.Dialogues.DialogueEvents::get_Choice()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueEvents_get_Choice_m66FA773A972C1E01529D046DFD72334FCC5F873E (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* __this, const RuntimeMethod* method) 
{
	{
		// public IUnityEvent<IActor, string, List<IChoice>> Choice { get; } = new UnityEventPlus<IActor, string, List<IChoice>>();
		RuntimeObject* L_0 = __this->___U3CChoiceU3Ek__BackingField_3;
		return L_0;
	}
}
// CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.DialogueEvents::get_NodeEnter()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueEvents_get_NodeEnter_mB52A45DAF82D30E362B293F601A619B00E6B1A39 (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* __this, const RuntimeMethod* method) 
{
	{
		// public IUnityEvent<INode> NodeEnter { get; } = new UnityEventPlus<INode>();
		RuntimeObject* L_0 = __this->___U3CNodeEnterU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.DialogueEvents::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueEvents__ctor_mE1FB2B08D6F9CA934096CD55EC430C1F0934EC43 (DialogueEvents_tC2ECEF06D3F5D4A9A7884C6F5BD24CCB806D5642* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventPlus_1__ctor_m484B33DA9ECDBEE073F5680274E77D1A69EA9C24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventPlus_1_t245050830307174359558122FEB39B5CAE1A2C5B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventPlus_2__ctor_m4988A196BDB76CD00DA1E34436FB2E9EFCAEFBEB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventPlus_2_t4CF0F963FCD66FB12875818FE20FD5DE8E0167F6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventPlus_3__ctor_mFA453255F648BF4E279857875478DB9C3467515B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventPlus_3_tE33CAF9FB976151CBB00093186B3DE44D5514BCA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public IUnityEvent Begin { get; } = new UnityEventPlus();
		UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1* L_0 = (UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1*)il2cpp_codegen_object_new(UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		UnityEventPlus__ctor_m64A3DB6F300C2DCD2A87757BC3273CD5626BE1D5(L_0, NULL);
		__this->___U3CBeginU3Ek__BackingField_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CBeginU3Ek__BackingField_0), (void*)L_0);
		// public IUnityEvent End { get; } = new UnityEventPlus();
		UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1* L_1 = (UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1*)il2cpp_codegen_object_new(UnityEventPlus_t6FF7E22AB3D77D897E24E16DFFCFD0012152DBC1_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		UnityEventPlus__ctor_m64A3DB6F300C2DCD2A87757BC3273CD5626BE1D5(L_1, NULL);
		__this->___U3CEndU3Ek__BackingField_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEndU3Ek__BackingField_1), (void*)L_1);
		// public IUnityEvent<IActor, string> Speak { get; } = new UnityEventPlus<IActor, string>();
		UnityEventPlus_2_t4CF0F963FCD66FB12875818FE20FD5DE8E0167F6* L_2 = (UnityEventPlus_2_t4CF0F963FCD66FB12875818FE20FD5DE8E0167F6*)il2cpp_codegen_object_new(UnityEventPlus_2_t4CF0F963FCD66FB12875818FE20FD5DE8E0167F6_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		UnityEventPlus_2__ctor_m4988A196BDB76CD00DA1E34436FB2E9EFCAEFBEB(L_2, UnityEventPlus_2__ctor_m4988A196BDB76CD00DA1E34436FB2E9EFCAEFBEB_RuntimeMethod_var);
		__this->___U3CSpeakU3Ek__BackingField_2 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CSpeakU3Ek__BackingField_2), (void*)L_2);
		// public IUnityEvent<IActor, string, List<IChoice>> Choice { get; } = new UnityEventPlus<IActor, string, List<IChoice>>();
		UnityEventPlus_3_tE33CAF9FB976151CBB00093186B3DE44D5514BCA* L_3 = (UnityEventPlus_3_tE33CAF9FB976151CBB00093186B3DE44D5514BCA*)il2cpp_codegen_object_new(UnityEventPlus_3_tE33CAF9FB976151CBB00093186B3DE44D5514BCA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		UnityEventPlus_3__ctor_mFA453255F648BF4E279857875478DB9C3467515B(L_3, UnityEventPlus_3__ctor_mFA453255F648BF4E279857875478DB9C3467515B_RuntimeMethod_var);
		__this->___U3CChoiceU3Ek__BackingField_3 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChoiceU3Ek__BackingField_3), (void*)L_3);
		// public IUnityEvent<INode> NodeEnter { get; } = new UnityEventPlus<INode>();
		UnityEventPlus_1_t245050830307174359558122FEB39B5CAE1A2C5B* L_4 = (UnityEventPlus_1_t245050830307174359558122FEB39B5CAE1A2C5B*)il2cpp_codegen_object_new(UnityEventPlus_1_t245050830307174359558122FEB39B5CAE1A2C5B_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		UnityEventPlus_1__ctor_m484B33DA9ECDBEE073F5680274E77D1A69EA9C24(L_4, UnityEventPlus_1__ctor_m484B33DA9ECDBEE073F5680274E77D1A69EA9C24_RuntimeMethod_var);
		__this->___U3CNodeEnterU3Ek__BackingField_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CNodeEnterU3Ek__BackingField_4), (void*)L_4);
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::get_UniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeChoiceHub_get_UniqueId_m8E493FED60D84BA1E2664A63D517E0216B2CC4A4 (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId { get; }
		String_t* L_0 = __this->___U3CUniqueIdU3Ek__BackingField_2;
		return L_0;
	}
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::get_EnterActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* NodeChoiceHub_get_EnterActions_m76E0C28CD744823C50409CAB1596ADD5A2215130 (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, const RuntimeMethod* method) 
{
	{
		// public List<IAction> EnterActions { get; }
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_0 = __this->___U3CEnterActionsU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::get_ExitActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* NodeChoiceHub_get_ExitActions_mF1B9C86B23CEEB7BCD26CD6C8CB21D4A92B63A75 (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, const RuntimeMethod* method) 
{
	{
		// public List<IAction> ExitActions { get; }
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_0 = __this->___U3CExitActionsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeChoiceHub_get_IsValid_mA5FC3532CF0709E4159EC3E0EBB5913B293AA0CA (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m34BCB8AE1ED3FED9423D204A530FA7D965475F75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeChoiceHub_U3Cget_IsValidU3Eb__12_0_mE1E09F04EC360D50FB3FAED9A7002154EBC63A5B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _conditions.Find(c => !c.GetIsValid(this)) == null;
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_0 = __this->____conditions_1;
		Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64* L_1 = (Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64*)il2cpp_codegen_object_new(Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Predicate_1__ctor_mB8A1F1D2249EC0E3A52EEBD7F0D10254E7530E90(L_1, __this, (intptr_t)((void*)NodeChoiceHub_U3Cget_IsValidU3Eb__12_0_mE1E09F04EC360D50FB3FAED9A7002154EBC63A5B_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_Find_m34BCB8AE1ED3FED9423D204A530FA7D965475F75(L_0, L_1, List_1_Find_m34BCB8AE1ED3FED9423D204A530FA7D965475F75_RuntimeMethod_var);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::get_HubChoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* NodeChoiceHub_get_HubChoices_mAF2BD2ED10DF36F2879879FC7DD0EFB6399888F3 (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFC16612603DC0F12F59B70267DDC055294C3DA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_HubChoicesU3Eb__14_0_mA696B284E56A974B692035791C14ABB4DDCD372F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* G_B2_0 = NULL;
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* G_B2_1 = NULL;
	Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* G_B1_0 = NULL;
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* G_B1_1 = NULL;
	{
		// _choiceList.Where(c => c.IsValid).ToList();
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_0 = __this->____choiceList_0;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var);
		Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* L_1 = ((U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1;
		Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var);
		U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB* L_3 = ((U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* L_4 = (Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5*)il2cpp_codegen_object_new(Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_m5F687515A6A88260FE03B8D00C4A47B6D694002F(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3Cget_HubChoicesU3Eb__14_0_mA696B284E56A974B692035791C14ABB4DDCD372F_RuntimeMethod_var), NULL);
		Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* L_5 = L_4;
		((U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_Where_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFC16612603DC0F12F59B70267DDC055294C3DA9A(G_B2_1, G_B2_0, Enumerable_Where_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFC16612603DC0F12F59B70267DDC055294C3DA9A_RuntimeMethod_var);
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_7;
		L_7 = Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7(L_6, Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7_RuntimeMethod_var);
		return L_7;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::.ctor(System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeChoiceHub__ctor_m7F3BF237716C437A3BC99B168841D1652CAC1E6D (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, String_t* ___uniqueId0, List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* ___choiceList1, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions2, const RuntimeMethod* method) 
{
	{
		// public NodeChoiceHub (string uniqueId, List<IChoice> choiceList, List<ICondition> conditions) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// UniqueId = uniqueId;
		String_t* L_0 = ___uniqueId0;
		__this->___U3CUniqueIdU3Ek__BackingField_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUniqueIdU3Ek__BackingField_2), (void*)L_0);
		// _choiceList = choiceList;
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_1 = ___choiceList1;
		__this->____choiceList_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____choiceList_0), (void*)L_1);
		// _conditions = conditions;
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_2 = ___conditions2;
		__this->____conditions_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____conditions_1), (void*)L_2);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeChoiceHub_Next_m5864535093A2D617B76219257FA39E5F4929E947 (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeChoiceHub_Next_m5864535093A2D617B76219257FA39E5F4929E947_RuntimeMethod_var)));
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::Play(CleverCrow.Fluid.Dialogues.IDialoguePlayback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeChoiceHub_Play_m85C5E3551515C1D323BC4F9BC8C185480182E118 (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, RuntimeObject* ___playback0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeChoiceHub_Play_m85C5E3551515C1D323BC4F9BC8C185480182E118_RuntimeMethod_var)));
	}
}
// CleverCrow.Fluid.Dialogues.Choices.IChoice CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::GetChoice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeChoiceHub_GetChoice_m778933F33B02385B5E78373B55374EDD2D13F3D0 (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeChoiceHub_GetChoice_m778933F33B02385B5E78373B55374EDD2D13F3D0_RuntimeMethod_var)));
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub::<get_IsValid>b__12_0(CleverCrow.Fluid.Dialogues.Conditions.ICondition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeChoiceHub_U3Cget_IsValidU3Eb__12_0_mE1E09F04EC360D50FB3FAED9A7002154EBC63A5B (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _conditions.Find(c => !c.GetIsValid(this)) == null;
		RuntimeObject* L_0 = ___c0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean CleverCrow.Fluid.Dialogues.Conditions.ICondition::GetIsValid(CleverCrow.Fluid.Dialogues.Nodes.INode) */, ICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_il2cpp_TypeInfo_var, L_0, __this);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m2FDC09A47B734E703EA7FB98A87BC930821CCB67 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB* L_0 = (U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB*)il2cpp_codegen_object_new(U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mD8D0B2FB7A9B832EF673F588FD40C106B7D37265(L_0, NULL);
		((U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mD8D0B2FB7A9B832EF673F588FD40C106B7D37265 (U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHub/<>c::<get_HubChoices>b__14_0(CleverCrow.Fluid.Dialogues.Choices.IChoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_HubChoicesU3Eb__14_0_mA696B284E56A974B692035791C14ABB4DDCD372F (U3CU3Ec_t451D325A660A79A9BBD32D6F9D286859C806F1DB* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _choiceList.Where(c => c.IsValid).ToList();
		RuntimeObject* L_0 = ___c0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean CleverCrow.Fluid.Dialogues.Choices.IChoice::get_IsValid() */, IChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeChoiceHubData_get_DefaultName_m7409C6F2938F9722BC2FF6C415C82B3407E8226F (NodeChoiceHubData_tB1DE65176358281E3D0D36C42AB5BEE2BBE828FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral71DECDC19124BD615CE6CB0307C994A4FDEE2E7E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string DefaultName => "Choice Hub";
		return _stringLiteral71DECDC19124BD615CE6CB0307C994A4FDEE2E7E;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData::get_HideInspectorActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeChoiceHubData_get_HideInspectorActions_m76243624FFFB20B187498D286EC208E8BE579625 (NodeChoiceHubData_tB1DE65176358281E3D0D36C42AB5BEE2BBE828FF* __this, const RuntimeMethod* method) 
{
	{
		// public override bool HideInspectorActions => true;
		return (bool)1;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeChoiceHubData_GetRuntime_mD344249E694F71D8F68A15A307E67F6114DA742A (NodeChoiceHubData_tB1DE65176358281E3D0D36C42AB5BEE2BBE828FF* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___dialogue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_m07A9E37C857A256260CD4B11CC073D807494CBB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CGetRuntimeU3Eb__0_m41E8B2FB5D1FEF89A843573110727AF11DAB51AB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3CGetRuntimeU3Eb__1_m2F293BB4DB0930AB2FFCDADC90A9438FDBEE11D7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* V_0 = NULL;
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* V_1 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* L_0 = (U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m95D9009C8FC2D2119B5A57B8F3A2594B3EA3AAA0(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* L_1 = V_0;
		RuntimeObject* L_2 = ___graphRuntime0;
		NullCheck(L_1);
		L_1->___graphRuntime_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___graphRuntime_0), (void*)L_2);
		U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* L_3 = V_0;
		RuntimeObject* L_4 = ___dialogue1;
		NullCheck(L_3);
		L_3->___dialogue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___dialogue_1), (void*)L_4);
		// var runtimeChoices = choices.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList();
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_5 = ((NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21*)__this)->___choices_13;
		U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* L_6 = V_0;
		Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2* L_7 = (Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2*)il2cpp_codegen_object_new(Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		Func_2__ctor_mB250820ED199C5A2277018ABDA8C3D4D70227D2D(L_7, L_6, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CGetRuntimeU3Eb__0_m41E8B2FB5D1FEF89A843573110727AF11DAB51AB_RuntimeMethod_var), NULL);
		RuntimeObject* L_8;
		L_8 = Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_m07A9E37C857A256260CD4B11CC073D807494CBB2(L_5, L_7, Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_m07A9E37C857A256260CD4B11CC073D807494CBB2_RuntimeMethod_var);
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_9;
		L_9 = Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7(L_8, Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7_RuntimeMethod_var);
		V_1 = L_9;
		// return new NodeChoiceHub(
		//     UniqueId,
		//     runtimeChoices,
		//     conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList());
		String_t* L_10;
		L_10 = NodeDataBase_get_UniqueId_m1423307C983CE02A7610AB8AF9402176A552EBC4_inline(__this, NULL);
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_11 = V_1;
		List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* L_12 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___conditions_8;
		U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* L_13 = V_0;
		Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599* L_14 = (Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599*)il2cpp_codegen_object_new(Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_2__ctor_m3B2303338F5CB7703A6E2E6DBA9DF326E768A630(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3CGetRuntimeU3Eb__1_m2F293BB4DB0930AB2FFCDADC90A9438FDBEE11D7_RuntimeMethod_var), NULL);
		RuntimeObject* L_15;
		L_15 = Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9(L_12, L_14, Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_16;
		L_16 = Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B(L_15, Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5* L_17 = (NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5*)il2cpp_codegen_object_new(NodeChoiceHub_t8B8484E4BC3D6FA1726C910369BD69ABC6FF89F5_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		NodeChoiceHub__ctor_m7F3BF237716C437A3BC99B168841D1652CAC1E6D(L_17, L_10, L_11, L_16, NULL);
		return L_17;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeChoiceHubData__ctor_m05755E9972935F3A50666BB547D491BA00C3353F (NodeChoiceHubData_tB1DE65176358281E3D0D36C42AB5BEE2BBE828FF* __this, const RuntimeMethod* method) 
{
	{
		NodeDataChoiceBase__ctor_mA75277CD5E75FF28F07039560D32D2E77C31AC28(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m95D9009C8FC2D2119B5A57B8F3A2594B3EA3AAA0 (U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Choices.IChoice CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData/<>c__DisplayClass4_0::<GetRuntime>b__0(CleverCrow.Fluid.Dialogues.Choices.ChoiceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass4_0_U3CGetRuntimeU3Eb__0_m41E8B2FB5D1FEF89A843573110727AF11DAB51AB (U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* __this, ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* ___c0, const RuntimeMethod* method) 
{
	{
		// var runtimeChoices = choices.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList();
		ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = ChoiceData_GetRuntime_m41274964C63B8E14D4363177B1962ED28E5D9D0A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Conditions.ICondition CleverCrow.Fluid.Dialogues.Nodes.NodeChoiceHubData/<>c__DisplayClass4_0::<GetRuntime>b__1(CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass4_0_U3CGetRuntimeU3Eb__1_m2F293BB4DB0930AB2FFCDADC90A9438FDBEE11D7 (U3CU3Ec__DisplayClass4_0_t958FE1209F52D21A297BD99C083CEE1E0038F43B* __this, ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* ___c0, const RuntimeMethod* method) 
{
	{
		// conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList());
		ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDialogue__ctor_mB1366EA8C6736934235AB860E7CBBC9B346DB06E (NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94* __this, RuntimeObject* ___graph0, String_t* ___uniqueId1, RuntimeObject* ___actor2, String_t* ___dialogue3, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children4, List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* ___choices5, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions6, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions7, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions8, const RuntimeMethod* method) 
{
	{
		// base(graph, uniqueId, children, conditions, enterActions, exitActions) {
		RuntimeObject* L_0 = ___graph0;
		String_t* L_1 = ___uniqueId1;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_2 = ___children4;
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_3 = ___conditions6;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_4 = ___enterActions7;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_5 = ___exitActions8;
		NodeBase__ctor_mBA8A4B2BC6F71ACBB1F8C4B28205937DF34E0255(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// _actor = actor;
		RuntimeObject* L_6 = ___actor2;
		__this->____actor_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____actor_8), (void*)L_6);
		// _dialogue = dialogue;
		String_t* L_7 = ___dialogue3;
		__this->____dialogue_9 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dialogue_9), (void*)L_7);
		// _choices = choices;
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_8 = ___choices5;
		__this->____choices_10 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____choices_10), (void*)L_8);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::GetValidChoices(CleverCrow.Fluid.Dialogues.IDialoguePlayback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* NodeDialogue_GetValidChoices_m5FEE6BA886E5D7FDFA83365D56CC2236CDC77935 (NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94* __this, RuntimeObject* ___playback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Where_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFC16612603DC0F12F59B70267DDC055294C3DA9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetValidChoicesU3Eb__5_0_m2EF21AFBB28A2C3D48BCB1D7A8946BEA3E1C9938_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* G_B4_0 = NULL;
	Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* G_B9_0 = NULL;
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* G_B9_1 = NULL;
	Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* G_B8_0 = NULL;
	List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* G_B8_1 = NULL;
	{
		// var child = Next();
		RuntimeObject* L_0;
		L_0 = NodeBase_Next_mA1019385D8607B7CAA623D76F1DBEFC1A7296F9A(__this, NULL);
		V_0 = L_0;
		// if (_choices.Count == 0 && child?.HubChoices != null && child.HubChoices.Count > 0) {
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_1 = __this->____choices_10;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_inline(L_1, List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_3 = V_0;
		if (L_3)
		{
			goto IL_001a;
		}
	}
	{
		G_B4_0 = ((List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D*)(NULL));
		goto IL_0020;
	}

IL_001a:
	{
		RuntimeObject* L_4 = V_0;
		NullCheck(L_4);
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_5;
		L_5 = InterfaceFuncInvoker0< List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* >::Invoke(3 /* System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.INode::get_HubChoices() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_4);
		G_B4_0 = L_5;
	}

IL_0020:
	{
		if (!G_B4_0)
		{
			goto IL_0048;
		}
	}
	{
		RuntimeObject* L_6 = V_0;
		NullCheck(L_6);
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_7;
		L_7 = InterfaceFuncInvoker0< List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* >::Invoke(3 /* System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.INode::get_HubChoices() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_6);
		NullCheck(L_7);
		int32_t L_8;
		L_8 = List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_inline(L_7, List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_RuntimeMethod_var);
		if ((((int32_t)L_8) <= ((int32_t)0)))
		{
			goto IL_0048;
		}
	}
	{
		// playback.Events.NodeEnter.Invoke(child);
		RuntimeObject* L_9 = ___playback0;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_9);
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_NodeEnter() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_10);
		RuntimeObject* L_12 = V_0;
		NullCheck(L_11);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::Invoke(T1) */, IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var, L_11, L_12);
		// return child.HubChoices;
		RuntimeObject* L_13 = V_0;
		NullCheck(L_13);
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_14;
		L_14 = InterfaceFuncInvoker0< List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* >::Invoke(3 /* System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.INode::get_HubChoices() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_13);
		return L_14;
	}

IL_0048:
	{
		// return _choices.Where(c => c.IsValid).ToList();
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_15 = __this->____choices_10;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var);
		Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* L_16 = ((U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1;
		Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* L_17 = L_16;
		G_B8_0 = L_17;
		G_B8_1 = L_15;
		if (L_17)
		{
			G_B9_0 = L_17;
			G_B9_1 = L_15;
			goto IL_006d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var);
		U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606* L_18 = ((U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* L_19 = (Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5*)il2cpp_codegen_object_new(Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_m5F687515A6A88260FE03B8D00C4A47B6D694002F(L_19, L_18, (intptr_t)((void*)U3CU3Ec_U3CGetValidChoicesU3Eb__5_0_m2EF21AFBB28A2C3D48BCB1D7A8946BEA3E1C9938_RuntimeMethod_var), NULL);
		Func_2_t407127800FA10AC3FE9B498EDC8922DC06A545F5* L_20 = L_19;
		((U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1 = L_20;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var))->___U3CU3E9__5_0_1), (void*)L_20);
		G_B9_0 = L_20;
		G_B9_1 = G_B8_1;
	}

IL_006d:
	{
		RuntimeObject* L_21;
		L_21 = Enumerable_Where_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFC16612603DC0F12F59B70267DDC055294C3DA9A(G_B9_1, G_B9_0, Enumerable_Where_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFC16612603DC0F12F59B70267DDC055294C3DA9A_RuntimeMethod_var);
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_22;
		L_22 = Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7(L_21, Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7_RuntimeMethod_var);
		return L_22;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::OnPlay(CleverCrow.Fluid.Dialogues.IDialoguePlayback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDialogue_OnPlay_mE0084C7D6EC7E46955F931583AD37C29A484261E (NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94* __this, RuntimeObject* ___playback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _emittedChoices = GetValidChoices(playback);
		RuntimeObject* L_0 = ___playback0;
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_1;
		L_1 = NodeDialogue_GetValidChoices_m5FEE6BA886E5D7FDFA83365D56CC2236CDC77935(__this, L_0, NULL);
		__this->____emittedChoices_11 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____emittedChoices_11), (void*)L_1);
		// if (_emittedChoices.Count > 0) {
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_2 = __this->____emittedChoices_11;
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_inline(L_2, List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		// playback.Events.Choice.Invoke(_actor, _dialogue, _emittedChoices);
		RuntimeObject* L_4 = ___playback0;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_4);
		NullCheck(L_5);
		RuntimeObject* L_6;
		L_6 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Choice() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_5);
		RuntimeObject* L_7 = __this->____actor_8;
		String_t* L_8 = __this->____dialogue_9;
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_9 = __this->____emittedChoices_11;
		NullCheck(L_6);
		InterfaceActionInvoker3< RuntimeObject*, String_t*, List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* >::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`3<CleverCrow.Fluid.Dialogues.IActor,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice>>::Invoke(T1,T2,T3) */, IUnityEvent_3_t8431DB61ABD62B0DA99094C059D420432F987A8D_il2cpp_TypeInfo_var, L_6, L_7, L_8, L_9);
		// return;
		return;
	}

IL_003e:
	{
		// playback.Events.Speak.Invoke(_actor, _dialogue);
		RuntimeObject* L_10 = ___playback0;
		NullCheck(L_10);
		RuntimeObject* L_11;
		L_11 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_10);
		NullCheck(L_11);
		RuntimeObject* L_12;
		L_12 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_Speak() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_11);
		RuntimeObject* L_13 = __this->____actor_8;
		String_t* L_14 = __this->____dialogue_9;
		NullCheck(L_12);
		InterfaceActionInvoker2< RuntimeObject*, String_t* >::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`2<CleverCrow.Fluid.Dialogues.IActor,System.String>::Invoke(T1,T2) */, IUnityEvent_2_t6016AC5F3F19E654C17D696977C6B3E4C9981324_il2cpp_TypeInfo_var, L_12, L_13, L_14);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Choices.IChoice CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue::GetChoice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeDialogue_GetChoice_mBDFEC4AAAEEDD5387E8AFDEFA91DD391AD2941E9 (NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m493A3596DBAB6CF3F622CB9DBD6956F18DDD48D7_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (index >= _emittedChoices.Count) return null;
		int32_t L_0 = ___index0;
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_1 = __this->____emittedChoices_11;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_inline(L_1, List_1_get_Count_m3D3D7728F34B0FBC4742A7E5FC766C32E9FCDF2C_RuntimeMethod_var);
		if ((((int32_t)L_0) < ((int32_t)L_2)))
		{
			goto IL_0010;
		}
	}
	{
		// if (index >= _emittedChoices.Count) return null;
		return (RuntimeObject*)NULL;
	}

IL_0010:
	{
		// return _emittedChoices[index];
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_3 = __this->____emittedChoices_11;
		int32_t L_4 = ___index0;
		NullCheck(L_3);
		RuntimeObject* L_5;
		L_5 = List_1_get_Item_m493A3596DBAB6CF3F622CB9DBD6956F18DDD48D7(L_3, L_4, List_1_get_Item_m493A3596DBAB6CF3F622CB9DBD6956F18DDD48D7_RuntimeMethod_var);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC4E7721B2FA8D30121061AC07A9F1896ABD1300B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606* L_0 = (U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606*)il2cpp_codegen_object_new(U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m592355900E73D2E73652A5E7DCB96704C583A5EC(L_0, NULL);
		((U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m592355900E73D2E73652A5E7DCB96704C583A5EC (U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeDialogue/<>c::<GetValidChoices>b__5_0(CleverCrow.Fluid.Dialogues.Choices.IChoice)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetValidChoicesU3Eb__5_0_m2EF21AFBB28A2C3D48BCB1D7A8946BEA3E1C9938 (U3CU3Ec_tE9DB1537AD53161969DBE9413FD04AF245BB0606* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _choices.Where(c => c.IsValid).ToList();
		RuntimeObject* L_0 = ___c0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(1 /* System.Boolean CleverCrow.Fluid.Dialogues.Choices.IChoice::get_IsValid() */, IChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeDialogueData_get_DefaultName_mE970CC4CF430A677E83CA276B3DB28EDE3D80311 (NodeDialogueData_t69285310CE2D4FFB7BB66F8E047C50BCF8A9E534* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8E970ADB7B2CB9EC4B24CF97A6534BE1DA70386);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string DefaultName => "Dialogue";
		return _stringLiteralC8E970ADB7B2CB9EC4B24CF97A6534BE1DA70386;
	}
}
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeDialogueData_get_Text_mA3708CA3CFE853EA871800C14AD173362663544E (NodeDialogueData_t69285310CE2D4FFB7BB66F8E047C50BCF8A9E534* __this, const RuntimeMethod* method) 
{
	{
		// public override string Text => dialogue;
		String_t* L_0 = __this->___dialogue_15;
		return L_0;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeDialogueData_GetRuntime_m8544643B6077A7C95400A4F35688D5EB6108CC92 (NodeDialogueData_t69285310CE2D4FFB7BB66F8E047C50BCF8A9E534* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___controller1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_m07A9E37C857A256260CD4B11CC073D807494CBB2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__0_m3641416029231352651481781FCFCD068EDCAACB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__1_m97318803E21FC04F2C21DB275C971CC6FEEAE37B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__2_mD6A4EDCD196F14ADB2A8F988FACBEE03850CAE06_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__3_m42DF2B6B1060980A6372F701385552F333619DC5_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* L_0 = (U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass6_0__ctor_mE493F41ED6F3D009187A1A0375A7637849596894(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* L_1 = V_0;
		RuntimeObject* L_2 = ___graphRuntime0;
		NullCheck(L_1);
		L_1->___graphRuntime_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___graphRuntime_0), (void*)L_2);
		U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* L_3 = V_0;
		RuntimeObject* L_4 = ___controller1;
		NullCheck(L_3);
		L_3->___controller_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___controller_1), (void*)L_4);
		// return new NodeDialogue(
		//     graphRuntime,
		//     UniqueId,
		//     actor,
		//     dialogue,
		//     children.ToList<INodeData>(),
		//     choices.Select(c => c.GetRuntime(graphRuntime, controller)).ToList(),
		//     conditions.Select(c => c.GetRuntime(graphRuntime, controller)).ToList(),
		//     enterActions.Select(a => a.GetRuntime(graphRuntime, controller)).ToList(),
		//     exitActions.Select(a => a.GetRuntime(graphRuntime, controller)).ToList()
		// );
		U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___graphRuntime_0;
		String_t* L_7;
		L_7 = NodeDataBase_get_UniqueId_m1423307C983CE02A7610AB8AF9402176A552EBC4_inline(__this, NULL);
		ActorDefinition_t6CE6862EB9811D59BCC2CB1F015F146749E43C56* L_8 = __this->___actor_14;
		String_t* L_9 = __this->___dialogue_15;
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_10 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___children_7;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_11;
		L_11 = Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB(L_10, Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_12 = ((NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21*)__this)->___choices_13;
		U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* L_13 = V_0;
		Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2* L_14 = (Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2*)il2cpp_codegen_object_new(Func_2_tEA2E4236A3A5AEBD73C88FBB93C6757DC5F3D8D2_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_2__ctor_mB250820ED199C5A2277018ABDA8C3D4D70227D2D(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__0_m3641416029231352651481781FCFCD068EDCAACB_RuntimeMethod_var), NULL);
		RuntimeObject* L_15;
		L_15 = Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_m07A9E37C857A256260CD4B11CC073D807494CBB2(L_12, L_14, Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_m07A9E37C857A256260CD4B11CC073D807494CBB2_RuntimeMethod_var);
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_16;
		L_16 = Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7(L_15, Enumerable_ToList_TisIChoice_t5F35FE964834B4A82CA1B226F6F7803D43FFF947_mFCDA2CD77BFFC71073417835AEEE0F476959F1B7_RuntimeMethod_var);
		List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* L_17 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___conditions_8;
		U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* L_18 = V_0;
		Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599* L_19 = (Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599*)il2cpp_codegen_object_new(Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_m3B2303338F5CB7703A6E2E6DBA9DF326E768A630(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__1_m97318803E21FC04F2C21DB275C971CC6FEEAE37B_RuntimeMethod_var), NULL);
		RuntimeObject* L_20;
		L_20 = Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9(L_17, L_19, Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_21;
		L_21 = Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B(L_20, Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_22 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___enterActions_9;
		U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* L_23 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_24 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__2_mD6A4EDCD196F14ADB2A8F988FACBEE03850CAE06_RuntimeMethod_var), NULL);
		RuntimeObject* L_25;
		L_25 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_22, L_24, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_26;
		L_26 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_25, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_27 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___exitActions_10;
		U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* L_28 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_29 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_29);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_29, L_28, (intptr_t)((void*)U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__3_m42DF2B6B1060980A6372F701385552F333619DC5_RuntimeMethod_var), NULL);
		RuntimeObject* L_30;
		L_30 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_27, L_29, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_31;
		L_31 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_30, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94* L_32 = (NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94*)il2cpp_codegen_object_new(NodeDialogue_t02A304AFBA81EFD3164D79DB5FEFAA82C7FD4A94_il2cpp_TypeInfo_var);
		NullCheck(L_32);
		NodeDialogue__ctor_mB1366EA8C6736934235AB860E7CBBC9B346DB06E(L_32, L_6, L_7, L_8, L_9, L_11, L_16, L_21, L_26, L_31, NULL);
		return L_32;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDialogueData__ctor_m8A09EE3AB1F45FD2F38D77F0AE2E2560DE2EF4F5 (NodeDialogueData_t69285310CE2D4FFB7BB66F8E047C50BCF8A9E534* __this, const RuntimeMethod* method) 
{
	{
		NodeDataChoiceBase__ctor_mA75277CD5E75FF28F07039560D32D2E77C31AC28(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass6_0__ctor_mE493F41ED6F3D009187A1A0375A7637849596894 (U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Choices.IChoice CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0::<GetRuntime>b__0(CleverCrow.Fluid.Dialogues.Choices.ChoiceData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__0_m3641416029231352651481781FCFCD068EDCAACB (U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* __this, ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* ___c0, const RuntimeMethod* method) 
{
	{
		// choices.Select(c => c.GetRuntime(graphRuntime, controller)).ToList(),
		ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___controller_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = ChoiceData_GetRuntime_m41274964C63B8E14D4363177B1962ED28E5D9D0A(L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Conditions.ICondition CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0::<GetRuntime>b__1(CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__1_m97318803E21FC04F2C21DB275C971CC6FEEAE37B (U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* __this, ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* ___c0, const RuntimeMethod* method) 
{
	{
		// conditions.Select(c => c.GetRuntime(graphRuntime, controller)).ToList(),
		ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___controller_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0::<GetRuntime>b__2(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__2_mD6A4EDCD196F14ADB2A8F988FACBEE03850CAE06 (U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___a0, const RuntimeMethod* method) 
{
	{
		// enterActions.Select(a => a.GetRuntime(graphRuntime, controller)).ToList(),
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___a0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___controller_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodeDialogueData/<>c__DisplayClass6_0::<GetRuntime>b__3(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass6_0_U3CGetRuntimeU3Eb__3_m42DF2B6B1060980A6372F701385552F333619DC5 (U3CU3Ec__DisplayClass6_0_tBC55BA2074E558714550015C75AC27CCA236DAFD* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___a0, const RuntimeMethod* method) 
{
	{
		// exitActions.Select(a => a.GetRuntime(graphRuntime, controller)).ToList()
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___a0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___controller_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeHub::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHub__ctor_m4210E30A5E50722DEE84340CB8DD6AC49683BD40 (NodeHub_t80809D4275ADE45FDF8C2C880EF599525E39E052* __this, RuntimeObject* ___graph0, String_t* ___uniqueId1, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children2, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions3, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions5, const RuntimeMethod* method) 
{
	{
		// base(graph, uniqueId, children, conditions, enterActions, exitActions) {
		RuntimeObject* L_0 = ___graph0;
		String_t* L_1 = ___uniqueId1;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_2 = ___children2;
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_3 = ___conditions3;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_4 = ___enterActions4;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_5 = ___exitActions5;
		NodeBase__ctor_mBA8A4B2BC6F71ACBB1F8C4B28205937DF34E0255(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeHubData::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeHubData_get_DefaultName_mB1124770FD3F0BAD05A4CF9EA10BC2AE5E2A23A0 (NodeHubData_tC89E8996C6C021DA39C672B1E5CDD013FED469FC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2A403A82FEBDA3DAE4AAD126B0A14FB4A494B114);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string DefaultName => "Hub";
		return _stringLiteral2A403A82FEBDA3DAE4AAD126B0A14FB4A494B114;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.NodeHubData::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeHubData_GetRuntime_m7CA1B2737B1254C89CA0834EC79AF45A918D4979 (NodeHubData_tC89E8996C6C021DA39C672B1E5CDD013FED469FC* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___dialogue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeHub_t80809D4275ADE45FDF8C2C880EF599525E39E052_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__0_m8A7B15847DE8D9477560FE8B7436B5FB61CDF0E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__1_m754486C9B7001777B1EFDB679C5A650EB591DB6A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__2_m208D731FBE7B5A84B782DAE3A406EDC43696D583_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* L_0 = (U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m4212156C1F6ADD1DDB9B086691B02785859C7C22(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* L_1 = V_0;
		RuntimeObject* L_2 = ___graphRuntime0;
		NullCheck(L_1);
		L_1->___graphRuntime_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___graphRuntime_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* L_3 = V_0;
		RuntimeObject* L_4 = ___dialogue1;
		NullCheck(L_3);
		L_3->___dialogue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___dialogue_1), (void*)L_4);
		// return new NodeHub(
		//     graphRuntime,
		//     UniqueId,
		//     children.ToList<INodeData>(),
		//     conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		//     enterActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		//     exitActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList()
		// );
		U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___graphRuntime_0;
		String_t* L_7;
		L_7 = NodeDataBase_get_UniqueId_m1423307C983CE02A7610AB8AF9402176A552EBC4_inline(__this, NULL);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_8 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___children_7;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_9;
		L_9 = Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB(L_8, Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* L_10 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___conditions_8;
		U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* L_11 = V_0;
		Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599* L_12 = (Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599*)il2cpp_codegen_object_new(Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m3B2303338F5CB7703A6E2E6DBA9DF326E768A630(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__0_m8A7B15847DE8D9477560FE8B7436B5FB61CDF0E0_RuntimeMethod_var), NULL);
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9(L_10, L_12, Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_14;
		L_14 = Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B(L_13, Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_15 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___enterActions_9;
		U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* L_16 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_17 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__1_m754486C9B7001777B1EFDB679C5A650EB591DB6A_RuntimeMethod_var), NULL);
		RuntimeObject* L_18;
		L_18 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_15, L_17, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_19;
		L_19 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_18, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_20 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___exitActions_10;
		U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* L_21 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_22 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_22, L_21, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__2_m208D731FBE7B5A84B782DAE3A406EDC43696D583_RuntimeMethod_var), NULL);
		RuntimeObject* L_23;
		L_23 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_20, L_22, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_24;
		L_24 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_23, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		NodeHub_t80809D4275ADE45FDF8C2C880EF599525E39E052* L_25 = (NodeHub_t80809D4275ADE45FDF8C2C880EF599525E39E052*)il2cpp_codegen_object_new(NodeHub_t80809D4275ADE45FDF8C2C880EF599525E39E052_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		NodeHub__ctor_m4210E30A5E50722DEE84340CB8DD6AC49683BD40(L_25, L_6, L_7, L_9, L_14, L_19, L_24, NULL);
		return L_25;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeHubData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeHubData__ctor_m790BA16AC65774691C03CF71BAF88F3B8840E081 (NodeHubData_tC89E8996C6C021DA39C672B1E5CDD013FED469FC* __this, const RuntimeMethod* method) 
{
	{
		NodeDataBase__ctor_m148F411944681EA46E78565B210AA809C60FFF0A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeHubData/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m4212156C1F6ADD1DDB9B086691B02785859C7C22 (U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Conditions.ICondition CleverCrow.Fluid.Dialogues.Nodes.NodeHubData/<>c__DisplayClass2_0::<GetRuntime>b__0(CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__0_m8A7B15847DE8D9477560FE8B7436B5FB61CDF0E0 (U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* __this, ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* ___c0, const RuntimeMethod* method) 
{
	{
		// conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodeHubData/<>c__DisplayClass2_0::<GetRuntime>b__1(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__1_m754486C9B7001777B1EFDB679C5A650EB591DB6A (U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___c0, const RuntimeMethod* method) 
{
	{
		// enterActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodeHubData/<>c__DisplayClass2_0::<GetRuntime>b__2(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__2_m208D731FBE7B5A84B782DAE3A406EDC43696D583 (U3CU3Ec__DisplayClass2_0_tAB6D678CFCCB2EC2EB47D9EE9B32381BADDE15B0* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___c0, const RuntimeMethod* method) 
{
	{
		// exitActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList()
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeLink::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeLink_get_IsValid_m78D5960046D04627484E86661BD793BFA625291D (NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m441156EFE622EF828338745E4C8B4F1131FE5AB3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* G_B2_0 = NULL;
	RuntimeObject* G_B1_0 = NULL;
	{
		// public override bool IsValid => Children[0]?.IsValid ?? false;
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_0;
		L_0 = NodeBase_get_Children_m841955F7C31DD43DEFDB32D4006900A2CD56FCDB(__this, NULL);
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = List_1_get_Item_m441156EFE622EF828338745E4C8B4F1131FE5AB3(L_0, 0, List_1_get_Item_m441156EFE622EF828338745E4C8B4F1131FE5AB3_RuntimeMethod_var);
		RuntimeObject* L_2 = L_1;
		G_B1_0 = L_2;
		if (L_2)
		{
			G_B2_0 = L_2;
			goto IL_0012;
		}
	}
	{
		return (bool)0;
	}

IL_0012:
	{
		NullCheck(G_B2_0);
		bool L_3;
		L_3 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean CleverCrow.Fluid.Dialogues.Nodes.INode::get_IsValid() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, G_B2_0);
		return L_3;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeLink::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,CleverCrow.Fluid.Dialogues.Nodes.INodeData,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeLink__ctor_m7C5D7A1A7665C423CBB3125939A09FF7ABE45607 (NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2* __this, RuntimeObject* ___graph0, String_t* ___UniqueId1, RuntimeObject* ___child2, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions3, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions5, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m8DDFE6EE4781EB34AE3288CD5CA72C8B4F92D1B8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m56D74C3AF5C0CC22A50207DDA9FF14CB0FE971C0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// base(graph, UniqueId, new List<INodeData>{child}, conditions, enterActions, exitActions) {
		RuntimeObject* L_0 = ___graph0;
		String_t* L_1 = ___UniqueId1;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_2 = (List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC*)il2cpp_codegen_object_new(List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m56D74C3AF5C0CC22A50207DDA9FF14CB0FE971C0(L_2, List_1__ctor_m56D74C3AF5C0CC22A50207DDA9FF14CB0FE971C0_RuntimeMethod_var);
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_3 = L_2;
		RuntimeObject* L_4 = ___child2;
		NullCheck(L_3);
		List_1_Add_m8DDFE6EE4781EB34AE3288CD5CA72C8B4F92D1B8_inline(L_3, L_4, List_1_Add_m8DDFE6EE4781EB34AE3288CD5CA72C8B4F92D1B8_RuntimeMethod_var);
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_5 = ___conditions3;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_6 = ___enterActions4;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_7 = ___exitActions5;
		NodeBase__ctor_mBA8A4B2BC6F71ACBB1F8C4B28205937DF34E0255(__this, L_0, L_1, L_3, L_5, L_6, L_7, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeLinkData_GetRuntime_mEDFEC60D47E951290EE05AFE954DFA2013BF6B80 (NodeLinkData_tB49C734A7E11B1EC0C433F1EC094CA2D90E171C2* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___dialogue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m8AC2EE0C0984AF1AE6FB511A99EEB78544E54C70_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_mE3830BD5EBC0B9C923BDAB6B593FECF7458FF663_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__0_m22031139D2B1E5FED45A81EC3CE8FB525347E9FD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__1_mF3258E672DD64D2BFCEB2F2D09FD597E36E11546_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__2_m77F91991F2AE32C98D03D4686F0C589C8C5F831B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	String_t* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* G_B3_0 = NULL;
	String_t* G_B3_1 = NULL;
	RuntimeObject* G_B3_2 = NULL;
	{
		U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* L_0 = (U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass0_0__ctor_mDC277DEC8F023C753398A7FAAE6F95DFDA7D168D(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* L_1 = V_0;
		RuntimeObject* L_2 = ___graphRuntime0;
		NullCheck(L_1);
		L_1->___graphRuntime_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___graphRuntime_0), (void*)L_2);
		U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* L_3 = V_0;
		RuntimeObject* L_4 = ___dialogue1;
		NullCheck(L_3);
		L_3->___dialogue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___dialogue_1), (void*)L_4);
		// return new NodeLink(
		//     graphRuntime,
		//     UniqueId,
		//     children.Count > 0 ? children[0] : null,
		//     conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		//     enterActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		//     exitActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList()
		// );
		U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___graphRuntime_0;
		String_t* L_7;
		L_7 = NodeDataBase_get_UniqueId_m1423307C983CE02A7610AB8AF9402176A552EBC4_inline(__this, NULL);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_8 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___children_7;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = List_1_get_Count_m8AC2EE0C0984AF1AE6FB511A99EEB78544E54C70_inline(L_8, List_1_get_Count_m8AC2EE0C0984AF1AE6FB511A99EEB78544E54C70_RuntimeMethod_var);
		G_B1_0 = L_7;
		G_B1_1 = L_6;
		if ((((int32_t)L_9) > ((int32_t)0)))
		{
			G_B2_0 = L_7;
			G_B2_1 = L_6;
			goto IL_0031;
		}
	}
	{
		G_B3_0 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)(NULL));
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		goto IL_003d;
	}

IL_0031:
	{
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_10 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___children_7;
		NullCheck(L_10);
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_11;
		L_11 = List_1_get_Item_mE3830BD5EBC0B9C923BDAB6B593FECF7458FF663(L_10, 0, List_1_get_Item_mE3830BD5EBC0B9C923BDAB6B593FECF7458FF663_RuntimeMethod_var);
		G_B3_0 = L_11;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
	}

IL_003d:
	{
		List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* L_12 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___conditions_8;
		U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* L_13 = V_0;
		Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599* L_14 = (Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599*)il2cpp_codegen_object_new(Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		NullCheck(L_14);
		Func_2__ctor_m3B2303338F5CB7703A6E2E6DBA9DF326E768A630(L_14, L_13, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__0_m22031139D2B1E5FED45A81EC3CE8FB525347E9FD_RuntimeMethod_var), NULL);
		RuntimeObject* L_15;
		L_15 = Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9(L_12, L_14, Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_16;
		L_16 = Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B(L_15, Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_17 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___enterActions_9;
		U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* L_18 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_19 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_19);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_19, L_18, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__1_mF3258E672DD64D2BFCEB2F2D09FD597E36E11546_RuntimeMethod_var), NULL);
		RuntimeObject* L_20;
		L_20 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_17, L_19, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_21;
		L_21 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_20, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_22 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___exitActions_10;
		U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* L_23 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_24 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_24);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_24, L_23, (intptr_t)((void*)U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__2_m77F91991F2AE32C98D03D4686F0C589C8C5F831B_RuntimeMethod_var), NULL);
		RuntimeObject* L_25;
		L_25 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_22, L_24, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_26;
		L_26 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_25, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2* L_27 = (NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2*)il2cpp_codegen_object_new(NodeLink_t2AAB93F2763208BEF4D827A1B1661F33053673B2_il2cpp_TypeInfo_var);
		NullCheck(L_27);
		NodeLink__ctor_m7C5D7A1A7665C423CBB3125939A09FF7ABE45607(L_27, G_B3_2, G_B3_1, G_B3_0, L_16, L_21, L_26, NULL);
		return L_27;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeLinkData__ctor_m31E3131EF11E69FDF9AE239E6308791D90B606E8 (NodeLinkData_tB49C734A7E11B1EC0C433F1EC094CA2D90E171C2* __this, const RuntimeMethod* method) 
{
	{
		NodeDataBase__ctor_m148F411944681EA46E78565B210AA809C60FFF0A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData/<>c__DisplayClass0_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass0_0__ctor_mDC277DEC8F023C753398A7FAAE6F95DFDA7D168D (U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Conditions.ICondition CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData/<>c__DisplayClass0_0::<GetRuntime>b__0(CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__0_m22031139D2B1E5FED45A81EC3CE8FB525347E9FD (U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* __this, ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* ___c0, const RuntimeMethod* method) 
{
	{
		// conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData/<>c__DisplayClass0_0::<GetRuntime>b__1(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__1_mF3258E672DD64D2BFCEB2F2D09FD597E36E11546 (U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___c0, const RuntimeMethod* method) 
{
	{
		// enterActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodeLinkData/<>c__DisplayClass0_0::<GetRuntime>b__2(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass0_0_U3CGetRuntimeU3Eb__2_m77F91991F2AE32C98D03D4686F0C589C8C5F831B (U3CU3Ec__DisplayClass0_0_t67E5FB4477B2439611F1C275F24231563220AAFD* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___c0, const RuntimeMethod* method) 
{
	{
		// exitActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList()
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::get_EnterActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* NodeBase_get_EnterActions_mE5144112815D97D6847910E51A36EFAFFEC38D0E (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, const RuntimeMethod* method) 
{
	{
		// public List<IAction> EnterActions { get; }
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_0 = __this->___U3CEnterActionsU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::get_ExitActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* NodeBase_get_ExitActions_mF0B2D28131A5454421FBEEC83A01092DCA5D594F (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, const RuntimeMethod* method) 
{
	{
		// public List<IAction> ExitActions { get; }
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_0 = __this->___U3CExitActionsU3Ek__BackingField_5;
		return L_0;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeBase::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeBase_get_IsValid_mCECD3A5DA5D993FE8A49A0152A108B4AD547C900 (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_m34BCB8AE1ED3FED9423D204A530FA7D965475F75_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeBase_U3Cget_IsValidU3Eb__11_0_mEECF6ABA91CCCB606FD3C190D9F2B76643F39FB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _conditions.Find(c => !c.GetIsValid(this)) == null;
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_0 = __this->____conditions_1;
		Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64* L_1 = (Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64*)il2cpp_codegen_object_new(Predicate_1_t048BE5AB6FAD40565D3EEC1E77602A29973F7C64_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		Predicate_1__ctor_mB8A1F1D2249EC0E3A52EEBD7F0D10254E7530E90(L_1, __this, (intptr_t)((void*)NodeBase_U3Cget_IsValidU3Eb__11_0_mEECF6ABA91CCCB606FD3C190D9F2B76643F39FB8_RuntimeMethod_var), NULL);
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = List_1_Find_m34BCB8AE1ED3FED9423D204A530FA7D965475F75(L_0, L_1, List_1_Find_m34BCB8AE1ED3FED9423D204A530FA7D965475F75_RuntimeMethod_var);
		return (bool)((((RuntimeObject*)(RuntimeObject*)L_2) == ((RuntimeObject*)(RuntimeObject*)NULL))? 1 : 0);
	}
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.IChoice> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::get_HubChoices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* NodeBase_get_HubChoices_m2B4B213E4109823315A3964337202730A7ED1EF6 (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, const RuntimeMethod* method) 
{
	{
		// public List<IChoice> HubChoices { get; }
		List_1_t03EBF335A4626A458E9EEDAA64523D6AD55B1F5D* L_0 = __this->___U3CHubChoicesU3Ek__BackingField_6;
		return L_0;
	}
}
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeBase::get_UniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeBase_get_UniqueId_mDA6DD3BBC33D168CA2D121CFAFC1CA5627DF350D (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId { get; }
		String_t* L_0 = __this->___U3CUniqueIdU3Ek__BackingField_7;
		return L_0;
	}
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Nodes.NodeBase::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* NodeBase_get_Children_m841955F7C31DD43DEFDB32D4006900A2CD56FCDB (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mBBCF7333567D151155F6A9069A1AFB2D05D70E46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_m7D2F8299F6EBBFDB253B16D26A3D9B5DCD639F24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraph_tFE3B64FEB94003143B6CA2E7E97B1048059D8494_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* V_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B2_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B1_0 = NULL;
	{
		// _childrenRuntimeCache ??
		// (_childrenRuntimeCache = _children.Select(_runtime.GetCopy).ToList());
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_0 = __this->____childrenRuntimeCache_3;
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0035;
		}
	}
	{
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_2 = __this->____children_0;
		RuntimeObject* L_3 = __this->____runtime_2;
		RuntimeObject* L_4 = L_3;
		Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0* L_5 = (Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0*)il2cpp_codegen_object_new(Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m3AE65F08EB02F5CB184A67A6AFBEE32A0E45CD14(L_5, L_4, (intptr_t)((void*)GetInterfaceMethodInfo(L_4, 1, IGraph_tFE3B64FEB94003143B6CA2E7E97B1048059D8494_il2cpp_TypeInfo_var)), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mBBCF7333567D151155F6A9069A1AFB2D05D70E46(L_2, L_5, Enumerable_Select_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mBBCF7333567D151155F6A9069A1AFB2D05D70E46_RuntimeMethod_var);
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_7;
		L_7 = Enumerable_ToList_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_m7D2F8299F6EBBFDB253B16D26A3D9B5DCD639F24(L_6, Enumerable_ToList_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_m7D2F8299F6EBBFDB253B16D26A3D9B5DCD639F24_RuntimeMethod_var);
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_8 = L_7;
		V_0 = L_8;
		__this->____childrenRuntimeCache_3 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childrenRuntimeCache_3), (void*)L_8);
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_9 = V_0;
		G_B2_0 = L_9;
	}

IL_0035:
	{
		return G_B2_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeBase::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeBase__ctor_mBA8A4B2BC6F71ACBB1F8C4B28205937DF34E0255 (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, RuntimeObject* ___runtime0, String_t* ___uniqueId1, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children2, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions3, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions5, const RuntimeMethod* method) 
{
	{
		// protected NodeBase (
		//     IGraph runtime,
		//     string uniqueId,
		//     List<INodeData> children,
		//     List<ICondition> conditions,
		//     List<IAction> enterActions,
		//     List<IAction> exitActions
		// ) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _runtime = runtime;
		RuntimeObject* L_0 = ___runtime0;
		__this->____runtime_2 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtime_2), (void*)L_0);
		// UniqueId = uniqueId;
		String_t* L_1 = ___uniqueId1;
		__this->___U3CUniqueIdU3Ek__BackingField_7 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUniqueIdU3Ek__BackingField_7), (void*)L_1);
		// _children = children;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_2 = ___children2;
		__this->____children_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_0), (void*)L_2);
		// _conditions = conditions;
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_3 = ___conditions3;
		__this->____conditions_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____conditions_1), (void*)L_3);
		// EnterActions = enterActions;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_4 = ___enterActions4;
		__this->___U3CEnterActionsU3Ek__BackingField_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CEnterActionsU3Ek__BackingField_4), (void*)L_4);
		// ExitActions = exitActions;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_5 = ___exitActions5;
		__this->___U3CExitActionsU3Ek__BackingField_5 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CExitActionsU3Ek__BackingField_5), (void*)L_5);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.NodeBase::Next()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeBase_Next_mA1019385D8607B7CAA623D76F1DBEFC1A7296F9A (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CNextU3Eb__21_0_m47311509F6BE64ACD036720CA8CC5E18902D39FB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* G_B2_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B2_1 = NULL;
	Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* G_B1_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B1_1 = NULL;
	{
		// return Children.Find(n => n.IsValid);
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_0;
		L_0 = NodeBase_get_Children_m841955F7C31DD43DEFDB32D4006900A2CD56FCDB(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var);
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_1 = ((U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_1;
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var);
		U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513* L_3 = ((U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_4 = (Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818*)il2cpp_codegen_object_new(Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Predicate_1__ctor_mD3A0AEBA3E0F170CB6E8BC4B29633200BB48F075(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CNextU3Eb__21_0_m47311509F6BE64ACD036720CA8CC5E18902D39FB_RuntimeMethod_var), NULL);
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_5 = L_4;
		((U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var))->___U3CU3E9__21_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		RuntimeObject* L_6;
		L_6 = List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46(G_B2_1, G_B2_0, List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46_RuntimeMethod_var);
		return L_6;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeBase::Play(CleverCrow.Fluid.Dialogues.IDialoguePlayback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeBase_Play_m07E993660D66B831D4677A37069D95D2074B6DDD (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, RuntimeObject* ___playback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playback.Events.NodeEnter.Invoke(this);
		RuntimeObject* L_0 = ___playback0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.IDialogueEvents CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_Events() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(4 /* CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.IDialogueEvents::get_NodeEnter() */, IDialogueEvents_t557DAD6F874076C9D135C5822CBA23A3B316471A_il2cpp_TypeInfo_var, L_1);
		NullCheck(L_2);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void CleverCrow.Fluid.Utilities.UnityEvents.IUnityEvent`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::Invoke(T1) */, IUnityEvent_1_tE77C52DA13B068422D56099C2DE0B0A2DACD6467_il2cpp_TypeInfo_var, L_2, __this);
		// OnPlay(playback);
		RuntimeObject* L_3 = ___playback0;
		VirtualActionInvoker1< RuntimeObject* >::Invoke(13 /* System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeBase::OnPlay(CleverCrow.Fluid.Dialogues.IDialoguePlayback) */, __this, L_3);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeBase::OnPlay(CleverCrow.Fluid.Dialogues.IDialoguePlayback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeBase_OnPlay_m051C2432A19886867AE996C210CFFCAC7DBD4DE3 (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, RuntimeObject* ___playback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playback.Next();
		RuntimeObject* L_0 = ___playback0;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(2 /* System.Void CleverCrow.Fluid.Dialogues.IDialoguePlayback::Next() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Choices.IChoice CleverCrow.Fluid.Dialogues.Nodes.NodeBase::GetChoice(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeBase_GetChoice_mA5665BE306A03127BF27815056EA2E79856AE27A (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, int32_t ___index0, const RuntimeMethod* method) 
{
	{
		// throw new System.NotImplementedException();
		NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8* L_0 = (NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotImplementedException_t6366FE4DCF15094C51F4833B91A2AE68D4DA90E8_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotImplementedException__ctor_mDAB47BC6BD0E342E8F2171E5CABE3E67EA049F1C(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NodeBase_GetChoice_mA5665BE306A03127BF27815056EA2E79856AE27A_RuntimeMethod_var)));
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeBase::<get_IsValid>b__11_0(CleverCrow.Fluid.Dialogues.Conditions.ICondition)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeBase_U3Cget_IsValidU3Eb__11_0_mEECF6ABA91CCCB606FD3C190D9F2B76643F39FB8 (NodeBase_t69FEC7E8877B7CB23744DDCDF13E6A791C9FF541* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _conditions.Find(c => !c.GetIsValid(this)) == null;
		RuntimeObject* L_0 = ___c0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(0 /* System.Boolean CleverCrow.Fluid.Dialogues.Conditions.ICondition::GetIsValid(CleverCrow.Fluid.Dialogues.Nodes.INode) */, ICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_il2cpp_TypeInfo_var, L_0, __this);
		return (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeBase/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m91091A23A370097DA50F3E2C33D8657E5594E76C (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513* L_0 = (U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513*)il2cpp_codegen_object_new(U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_mFF88438FC8073E48AF18B2A8288A7F96F682DA65(L_0, NULL);
		((U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_mFF88438FC8073E48AF18B2A8288A7F96F682DA65 (U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeBase/<>c::<Next>b__21_0(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CNextU3Eb__21_0_m47311509F6BE64ACD036720CA8CC5E18902D39FB (U3CU3Ec_t4A34111B3D576EE7F9C52F723079A387FAFAA513* __this, RuntimeObject* ___n0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Children.Find(n => n.IsValid);
		RuntimeObject* L_0 = ___n0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean CleverCrow.Fluid.Dialogues.Nodes.INode::get_IsValid() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::get_UniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeDataBase_get_UniqueId_m1423307C983CE02A7610AB8AF9402176A552EBC4 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId => _uniqueId;
		String_t* L_0 = __this->____uniqueId_4;
		return L_0;
	}
}
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeDataBase_get_DefaultName_m508DD8F6C8A9F47BAF5ECD00A5665D948DBECCA3 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	{
		// protected virtual string DefaultName { get; } = "Untitled";
		String_t* L_0 = __this->___U3CDefaultNameU3Ek__BackingField_11;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyList`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase> CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeDataBase_get_Children_m818E984AE68162C670710894D99FA41B8A6A10F0 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<NodeDataBase> Children => children;
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_7;
		return L_0;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::get_HideInspectorActions()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NodeDataBase_get_HideInspectorActions_m5AF24521FD5F32EF8CB870C139767F11BC300D85 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	{
		// public virtual bool HideInspectorActions => false;
		return (bool)0;
	}
}
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeDataBase_get_Text_m2EDA405330AE99A77F62923B92E663C501E3E2D1 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public virtual string Text => "";
		return _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
	}
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.ChoiceData> CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::get_Choices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* NodeDataBase_get_Choices_mE0375001AAAB3772B1651EE41403BF3A7A122ACB (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	{
		// public virtual List<ChoiceData> Choices { get; } = new List<ChoiceData>();
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_0 = __this->___U3CChoicesU3Ek__BackingField_12;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase_Setup_m6CC93ADB475746C4D825FAD87A43DF6D87F7BD11 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// _uniqueId = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->____uniqueId_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uniqueId_4), (void*)L_1);
		// name = DefaultName;
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(14 /* System.String CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::get_DefaultName() */, __this);
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::AddConnectionChild(CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase_AddConnectionChild_mC2CAD254713C4A9FFD3A5328271952D9B0159A72 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___child0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Add(child);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_7;
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_1 = ___child0;
		NullCheck(L_0);
		List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_inline(L_0, L_1, List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::RemoveConnectionChild(CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase_RemoveConnectionChild_m54F7FF954AC35C1F5E033F89F2B6224344E4F9D9 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___child0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Remove(child);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_7;
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_1 = ___child0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB(L_0, L_1, List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::SortConnectionsByPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase_SortConnectionsByPosition_m1C3F6E4BA00FC08911A55EDC41CD3A40404D0666 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAB70E05F40E4EDBCFA3940F569EA7BEE5FDF34E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m9809FD660A4057D1F3432A3586F1BD2AA1E0C479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSortConnectionsByPositionU3Eb__24_0_m490E08F8BFE5F54428661DA51CD010E8C9AED568_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* G_B2_0 = NULL;
	List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* G_B2_1 = NULL;
	NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* G_B2_2 = NULL;
	Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* G_B1_0 = NULL;
	List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* G_B1_1 = NULL;
	NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* G_B1_2 = NULL;
	{
		// children = children.OrderBy(i => i.rect.yMin).ToList();
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_7;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var);
		Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* L_1 = ((U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1;
		Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var);
		U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F* L_3 = ((U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* L_4 = (Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2*)il2cpp_codegen_object_new(Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mFA4F6AEFA4AB93D7D24147A8D229ADEA23E10DA3(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CSortConnectionsByPositionU3Eb__24_0_m490E08F8BFE5F54428661DA51CD010E8C9AED568_RuntimeMethod_var), NULL);
		Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* L_5 = L_4;
		((U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var))->___U3CU3E9__24_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_OrderBy_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAB70E05F40E4EDBCFA3940F569EA7BEE5FDF34E0(G_B2_1, G_B2_0, Enumerable_OrderBy_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAB70E05F40E4EDBCFA3940F569EA7BEE5FDF34E0_RuntimeMethod_var);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_7;
		L_7 = Enumerable_ToList_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m9809FD660A4057D1F3432A3586F1BD2AA1E0C479(L_6, Enumerable_ToList_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m9809FD660A4057D1F3432A3586F1BD2AA1E0C479_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->___children_7 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___children_7), (void*)L_7);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::ClearConnectionChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase_ClearConnectionChildren_m6FBF9A29EB79960B57822DCF9635407941BFC73C (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2C814C3E02048E3EB50383C4B9307EE5E76EA487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Clear();
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_7;
		NullCheck(L_0);
		List_1_Clear_m2C814C3E02048E3EB50383C4B9307EE5E76EA487_inline(L_0, List_1_Clear_m2C814C3E02048E3EB50383C4B9307EE5E76EA487_RuntimeMethod_var);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::GetDataCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* NodeDataBase_GetDataCopy_m3D6C4B72E5A6533A1964A35FFF083EF94BFCF3A4 (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m9F64CDBF7E99BDF9B8C7B5D864B20935477633BF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_m6493C156138DA5CDAB8864D4DF3A78EA26DEF20B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m5B4FEFF77C43A50068C8A1C643BCC0FA0027F112_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mEB172E486789889EF656F7AA0B569506E8BDCEB7_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m73558D40A2AFC28AFCA8098AC04CB50A18029D46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mBE032E58964F59920B806877058AFA78264AE29F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m0263759834E7910E0C014C9CA3B3BE5EC0531FA8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var copy = Instantiate(this);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_0;
		L_0 = Object_Instantiate_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m0263759834E7910E0C014C9CA3B3BE5EC0531FA8(__this, Object_Instantiate_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m0263759834E7910E0C014C9CA3B3BE5EC0531FA8_RuntimeMethod_var);
		// copy.conditions = conditions.Select(Instantiate).ToList();
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_1 = L_0;
		List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* L_2 = __this->___conditions_8;
		Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4* L_3 = (Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4*)il2cpp_codegen_object_new(Func_2_t5B64D268290CC88FC08CB981A8B46930E72F94C4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_m49E693428C2DD82FE38D6B4382954027DABFBDDB(L_3, NULL, (intptr_t)((void*)Object_Instantiate_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mBE032E58964F59920B806877058AFA78264AE29F_RuntimeMethod_var), NULL);
		RuntimeObject* L_4;
		L_4 = Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_m6493C156138DA5CDAB8864D4DF3A78EA26DEF20B(L_2, L_3, Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_m6493C156138DA5CDAB8864D4DF3A78EA26DEF20B_RuntimeMethod_var);
		List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* L_5;
		L_5 = Enumerable_ToList_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mEB172E486789889EF656F7AA0B569506E8BDCEB7(L_4, Enumerable_ToList_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mEB172E486789889EF656F7AA0B569506E8BDCEB7_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___conditions_8 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___conditions_8), (void*)L_5);
		// copy.enterActions = enterActions.Select(Instantiate).ToList();
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_6 = L_1;
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_7 = __this->___enterActions_9;
		Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468* L_8 = (Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468*)il2cpp_codegen_object_new(Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		Func_2__ctor_m54369834F686E6A5B7035DB8CB62362A205C4952(L_8, NULL, (intptr_t)((void*)Object_Instantiate_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m73558D40A2AFC28AFCA8098AC04CB50A18029D46_RuntimeMethod_var), NULL);
		RuntimeObject* L_9;
		L_9 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m9F64CDBF7E99BDF9B8C7B5D864B20935477633BF(L_7, L_8, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m9F64CDBF7E99BDF9B8C7B5D864B20935477633BF_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_10;
		L_10 = Enumerable_ToList_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m5B4FEFF77C43A50068C8A1C643BCC0FA0027F112(L_9, Enumerable_ToList_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m5B4FEFF77C43A50068C8A1C643BCC0FA0027F112_RuntimeMethod_var);
		NullCheck(L_6);
		L_6->___enterActions_9 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&L_6->___enterActions_9), (void*)L_10);
		// copy.exitActions = exitActions.Select(Instantiate).ToList();
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_11 = L_6;
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_12 = __this->___exitActions_10;
		Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468* L_13 = (Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468*)il2cpp_codegen_object_new(Func_2_t8DC3AC3A18BC545CD824C1E3FACEE1BECB179468_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m54369834F686E6A5B7035DB8CB62362A205C4952(L_13, NULL, (intptr_t)((void*)Object_Instantiate_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m73558D40A2AFC28AFCA8098AC04CB50A18029D46_RuntimeMethod_var), NULL);
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m9F64CDBF7E99BDF9B8C7B5D864B20935477633BF(L_12, L_13, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m9F64CDBF7E99BDF9B8C7B5D864B20935477633BF_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_15;
		L_15 = Enumerable_ToList_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m5B4FEFF77C43A50068C8A1C643BCC0FA0027F112(L_14, Enumerable_ToList_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m5B4FEFF77C43A50068C8A1C643BCC0FA0027F112_RuntimeMethod_var);
		NullCheck(L_11);
		L_11->___exitActions_10 = L_15;
		Il2CppCodeGenWriteBarrier((void**)(&L_11->___exitActions_10), (void*)L_15);
		// return copy;
		return L_11;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataBase__ctor_m148F411944681EA46E78565B210AA809C60FFF0A (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m28E4969BE39E8A4DCD7C20AB3F99B7FB94FBE0A2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m405B28AA997D3F3CE2B479845D98518CC97DFD46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mD54E3CDD8EFB1C92C4666DBB4C7BB44FF94DACBC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA4EA82509CD601492786BD6005E6AF555C9438C1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<NodeDataBase> children = new List<NodeDataBase>();
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2*)il2cpp_codegen_object_new(List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF(L_0, List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF_RuntimeMethod_var);
		__this->___children_7 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_7), (void*)L_0);
		// public List<ConditionDataBase> conditions = new List<ConditionDataBase>();
		List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* L_1 = (List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A*)il2cpp_codegen_object_new(List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A_il2cpp_TypeInfo_var);
		NullCheck(L_1);
		List_1__ctor_mD54E3CDD8EFB1C92C4666DBB4C7BB44FF94DACBC(L_1, List_1__ctor_mD54E3CDD8EFB1C92C4666DBB4C7BB44FF94DACBC_RuntimeMethod_var);
		__this->___conditions_8 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___conditions_8), (void*)L_1);
		// public List<ActionDataBase> enterActions = new List<ActionDataBase>();
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_2 = (List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526*)il2cpp_codegen_object_new(List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m28E4969BE39E8A4DCD7C20AB3F99B7FB94FBE0A2(L_2, List_1__ctor_m28E4969BE39E8A4DCD7C20AB3F99B7FB94FBE0A2_RuntimeMethod_var);
		__this->___enterActions_9 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___enterActions_9), (void*)L_2);
		// public List<ActionDataBase> exitActions = new List<ActionDataBase>();
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_3 = (List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526*)il2cpp_codegen_object_new(List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		List_1__ctor_m28E4969BE39E8A4DCD7C20AB3F99B7FB94FBE0A2(L_3, List_1__ctor_m28E4969BE39E8A4DCD7C20AB3F99B7FB94FBE0A2_RuntimeMethod_var);
		__this->___exitActions_10 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___exitActions_10), (void*)L_3);
		// protected virtual string DefaultName { get; } = "Untitled";
		__this->___U3CDefaultNameU3Ek__BackingField_11 = _stringLiteralA4EA82509CD601492786BD6005E6AF555C9438C1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CDefaultNameU3Ek__BackingField_11), (void*)_stringLiteralA4EA82509CD601492786BD6005E6AF555C9438C1);
		// public virtual List<ChoiceData> Choices { get; } = new List<ChoiceData>();
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_4 = (List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3*)il2cpp_codegen_object_new(List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		List_1__ctor_m405B28AA997D3F3CE2B479845D98518CC97DFD46(L_4, List_1__ctor_m405B28AA997D3F3CE2B479845D98518CC97DFD46_RuntimeMethod_var);
		__this->___U3CChoicesU3Ek__BackingField_12 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CChoicesU3Ek__BackingField_12), (void*)L_4);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mF1F497E158D2864F5D31A888898F0FDD64D3807B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F* L_0 = (U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F*)il2cpp_codegen_object_new(U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m5AE3F80ECEF1D3A55B16845DC405B108E3737318(L_0, NULL);
		((U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5AE3F80ECEF1D3A55B16845DC405B108E3737318 (U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase/<>c::<SortConnectionsByPosition>b__24_0(CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CSortConnectionsByPositionU3Eb__24_0_m490E08F8BFE5F54428661DA51CD010E8C9AED568 (U3CU3Ec_tED3E06D78E50FC73F83076FE7B97EC4EAD07003F* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___i0, const RuntimeMethod* method) 
{
	{
		// children = children.OrderBy(i => i.rect.yMin).ToList();
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_0 = ___i0;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&L_0->___rect_5);
		float L_2;
		L_2 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Choices.ChoiceData> CleverCrow.Fluid.Dialogues.Nodes.NodeDataChoiceBase::get_Choices()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* NodeDataChoiceBase_get_Choices_mE891194DAD937F5C21B14179E8A55227F2C271DF (NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21* __this, const RuntimeMethod* method) 
{
	{
		// public override List<ChoiceData> Choices => choices;
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_0 = __this->___choices_13;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataChoiceBase::ClearConnectionChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataChoiceBase_ClearConnectionChildren_m7636C5BC5FDF93395C5F71B3D137A37733A95928 (NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD148EEFA188CA6D67C956987B918488DBDF17766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m60BFC792592F1D7A3F86E683ECE1F5A15951C131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7F95AD8AC608E6CA772C907FD4D52265646EFA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m09651D47A021BE344D17E1442C89CF7B9097D3AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.ClearConnectionChildren();
		NodeDataBase_ClearConnectionChildren_m6FBF9A29EB79960B57822DCF9635407941BFC73C(__this, NULL);
		// foreach (var choice in choices) {
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_0 = __this->___choices_13;
		NullCheck(L_0);
		Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0 L_1;
		L_1 = List_1_GetEnumerator_m09651D47A021BE344D17E1442C89CF7B9097D3AA(L_0, List_1_GetEnumerator_m09651D47A021BE344D17E1442C89CF7B9097D3AA_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD148EEFA188CA6D67C956987B918488DBDF17766((&V_0), Enumerator_Dispose_mD148EEFA188CA6D67C956987B918488DBDF17766_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				// foreach (var choice in choices) {
				ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* L_2;
				L_2 = Enumerator_get_Current_m7F95AD8AC608E6CA772C907FD4D52265646EFA82_inline((&V_0), Enumerator_get_Current_m7F95AD8AC608E6CA772C907FD4D52265646EFA82_RuntimeMethod_var);
				// choice.ClearConnectionChildren();
				NullCheck(L_2);
				ChoiceData_ClearConnectionChildren_m2C134BF5A5F611C92711658DC27653BF1DA107DA(L_2, NULL);
			}

IL_0020_1:
			{
				// foreach (var choice in choices) {
				bool L_3;
				L_3 = Enumerator_MoveNext_m60BFC792592F1D7A3F86E683ECE1F5A15951C131((&V_0), Enumerator_MoveNext_m60BFC792592F1D7A3F86E683ECE1F5A15951C131_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataChoiceBase::SortConnectionsByPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataChoiceBase_SortConnectionsByPosition_m8B221CBC7470B7B8EAC7AC16551B8B09C5B9A930 (NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_mD148EEFA188CA6D67C956987B918488DBDF17766_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m60BFC792592F1D7A3F86E683ECE1F5A15951C131_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m7F95AD8AC608E6CA772C907FD4D52265646EFA82_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m09651D47A021BE344D17E1442C89CF7B9097D3AA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// base.SortConnectionsByPosition();
		NodeDataBase_SortConnectionsByPosition_m1C3F6E4BA00FC08911A55EDC41CD3A40404D0666(__this, NULL);
		// foreach (var choice in choices) {
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_0 = __this->___choices_13;
		NullCheck(L_0);
		Enumerator_tA42C5582C9C7229686442F22F6D3BCCA1D0BC3D0 L_1;
		L_1 = List_1_GetEnumerator_m09651D47A021BE344D17E1442C89CF7B9097D3AA(L_0, List_1_GetEnumerator_m09651D47A021BE344D17E1442C89CF7B9097D3AA_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_mD148EEFA188CA6D67C956987B918488DBDF17766((&V_0), Enumerator_Dispose_mD148EEFA188CA6D67C956987B918488DBDF17766_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_0014_1:
			{
				// foreach (var choice in choices) {
				ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* L_2;
				L_2 = Enumerator_get_Current_m7F95AD8AC608E6CA772C907FD4D52265646EFA82_inline((&V_0), Enumerator_get_Current_m7F95AD8AC608E6CA772C907FD4D52265646EFA82_RuntimeMethod_var);
				// choice.SortConnectionsByPosition();
				NullCheck(L_2);
				ChoiceData_SortConnectionsByPosition_mBFBF619A3CE9B859EDB93AF7EE6E9DD7FE2DA591(L_2, NULL);
			}

IL_0020_1:
			{
				// foreach (var choice in choices) {
				bool L_3;
				L_3 = Enumerator_MoveNext_m60BFC792592F1D7A3F86E683ECE1F5A15951C131((&V_0), Enumerator_MoveNext_m60BFC792592F1D7A3F86E683ECE1F5A15951C131_RuntimeMethod_var);
				if (L_3)
				{
					goto IL_0014_1;
				}
			}
			{
				goto IL_0039;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0039:
	{
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase CleverCrow.Fluid.Dialogues.Nodes.NodeDataChoiceBase::GetDataCopy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* NodeDataChoiceBase_GetDataCopy_mA8F0BE4E872A551F1391EFD23E0FDE8FF6C67B66 (NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mE7AC743ED9CB300D82FF9407AE99E88187F82E4F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mAC81C5943212218996269CDAFA4DD8537B72B191_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mFD27C822514AC67ABBC16E94F9237D6C83119832_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var copy = base.GetDataCopy() as NodeDataChoiceBase;
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_0;
		L_0 = NodeDataBase_GetDataCopy_m3D6C4B72E5A6533A1964A35FFF083EF94BFCF3A4(__this, NULL);
		// copy.choices = choices.Select(Instantiate).ToList();
		NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21* L_1 = ((NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21*)IsInstClass((RuntimeObject*)L_0, NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21_il2cpp_TypeInfo_var));
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_2 = __this->___choices_13;
		Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB* L_3 = (Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB*)il2cpp_codegen_object_new(Func_2_t2E0D04AB2F6675D1B5A869477EE784FF380BF2EB_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		Func_2__ctor_mEB05411EBE65F84F675A7C9D6A20F55230B100B9(L_3, NULL, (intptr_t)((void*)Object_Instantiate_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mFD27C822514AC67ABBC16E94F9237D6C83119832_RuntimeMethod_var), NULL);
		RuntimeObject* L_4;
		L_4 = Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mE7AC743ED9CB300D82FF9407AE99E88187F82E4F(L_2, L_3, Enumerable_Select_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mE7AC743ED9CB300D82FF9407AE99E88187F82E4F_RuntimeMethod_var);
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_5;
		L_5 = Enumerable_ToList_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mAC81C5943212218996269CDAFA4DD8537B72B191(L_4, Enumerable_ToList_TisChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B_mAC81C5943212218996269CDAFA4DD8537B72B191_RuntimeMethod_var);
		NullCheck(L_1);
		L_1->___choices_13 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___choices_13), (void*)L_5);
		// return copy;
		return L_1;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeDataChoiceBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeDataChoiceBase__ctor_mA75277CD5E75FF28F07039560D32D2E77C31AC28 (NodeDataChoiceBase_t5F7ACFFAD2A9715234BBB4A9DBF46C1B0BD2DB21* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m405B28AA997D3F3CE2B479845D98518CC97DFD46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<ChoiceData> choices = new List<ChoiceData>();
		List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3* L_0 = (List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3*)il2cpp_codegen_object_new(List_1_tBB1B37C569665A2367F8C070A41608F72A601DD3_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m405B28AA997D3F3CE2B479845D98518CC97DFD46(L_0, List_1__ctor_m405B28AA997D3F3CE2B479845D98518CC97DFD46_RuntimeMethod_var);
		__this->___choices_13 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___choices_13), (void*)L_0);
		NodeDataBase__ctor_m148F411944681EA46E78565B210AA809C60FFF0A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodePlayGraphData_get_DefaultName_mF773F66651CDFE3EBC502672841E89E5C1675104 (NodePlayGraphData_tB8A5AA7DEAB545A3446EC67FC9175462FF8E9178* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8C1DECCBFE6A09FBBCC805B887CEE861C1074D58);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string DefaultName => "Play Graph";
		return _stringLiteral8C1DECCBFE6A09FBBCC805B887CEE861C1074D58;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodePlayGraphData_GetRuntime_mB8AA0E4896F067A3B3E5ACFF1E146A68FB554383 (NodePlayGraphData_tB8A5AA7DEAB545A3446EC67FC9175462FF8E9178* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___dialogue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__0_m0323D5892004C3B7B52728A2352279FC97FE70E4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__1_m734D50B00E8F0905ED3BA7699E76C1F6AF18BC55_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__2_mC7C9E3DC73B61FC5E6F98E3CBFA34F562910EA4A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* L_0 = (U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass3_0__ctor_m4573875A99F1312E7E5D0F7821E7E3FCEEAB0B28(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* L_1 = V_0;
		RuntimeObject* L_2 = ___graphRuntime0;
		NullCheck(L_1);
		L_1->___graphRuntime_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___graphRuntime_0), (void*)L_2);
		U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* L_3 = V_0;
		RuntimeObject* L_4 = ___dialogue1;
		NullCheck(L_3);
		L_3->___dialogue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___dialogue_1), (void*)L_4);
		// return new NodePlayGraph(
		//     graphRuntime,
		//     UniqueId,
		//     dialogueGraph,
		//     children.ToList<INodeData>(),
		//     conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		//     enterActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		//     exitActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList()
		// );
		U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___graphRuntime_0;
		String_t* L_7;
		L_7 = NodeDataBase_get_UniqueId_m1423307C983CE02A7610AB8AF9402176A552EBC4_inline(__this, NULL);
		DialogueGraph_tFB52BBF60FBA29C5FEA831527820A71CDE6B7C67* L_8 = __this->___dialogueGraph_13;
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_9 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___children_7;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_10;
		L_10 = Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB(L_9, Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* L_11 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___conditions_8;
		U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* L_12 = V_0;
		Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599* L_13 = (Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599*)il2cpp_codegen_object_new(Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		NullCheck(L_13);
		Func_2__ctor_m3B2303338F5CB7703A6E2E6DBA9DF326E768A630(L_13, L_12, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__0_m0323D5892004C3B7B52728A2352279FC97FE70E4_RuntimeMethod_var), NULL);
		RuntimeObject* L_14;
		L_14 = Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9(L_11, L_13, Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_15;
		L_15 = Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B(L_14, Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_16 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___enterActions_9;
		U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* L_17 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_18 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_18);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_18, L_17, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__1_m734D50B00E8F0905ED3BA7699E76C1F6AF18BC55_RuntimeMethod_var), NULL);
		RuntimeObject* L_19;
		L_19 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_16, L_18, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_20;
		L_20 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_19, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_21 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___exitActions_10;
		U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* L_22 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_23 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_23, L_22, (intptr_t)((void*)U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__2_mC7C9E3DC73B61FC5E6F98E3CBFA34F562910EA4A_RuntimeMethod_var), NULL);
		RuntimeObject* L_24;
		L_24 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_21, L_23, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_25;
		L_25 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_24, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2* L_26 = (NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2*)il2cpp_codegen_object_new(NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2_il2cpp_TypeInfo_var);
		NullCheck(L_26);
		NodePlayGraph__ctor_mEB2F0560D8FA2DFAB10FD092F686F50B69F465C3(L_26, L_6, L_7, L_8, L_10, L_15, L_20, L_25, NULL);
		return L_26;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePlayGraphData__ctor_mDE36A5BB0B43AF544DA425F5FF1F396BCA26F639 (NodePlayGraphData_tB8A5AA7DEAB545A3446EC67FC9175462FF8E9178* __this, const RuntimeMethod* method) 
{
	{
		NodeDataBase__ctor_m148F411944681EA46E78565B210AA809C60FFF0A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData/<>c__DisplayClass3_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass3_0__ctor_m4573875A99F1312E7E5D0F7821E7E3FCEEAB0B28 (U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Conditions.ICondition CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData/<>c__DisplayClass3_0::<GetRuntime>b__0(CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__0_m0323D5892004C3B7B52728A2352279FC97FE70E4 (U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* __this, ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* ___c0, const RuntimeMethod* method) 
{
	{
		// conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData/<>c__DisplayClass3_0::<GetRuntime>b__1(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__1_m734D50B00E8F0905ED3BA7699E76C1F6AF18BC55 (U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___c0, const RuntimeMethod* method) 
{
	{
		// enterActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodePlayGraphData/<>c__DisplayClass3_0::<GetRuntime>b__2(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass3_0_U3CGetRuntimeU3Eb__2_mC7C9E3DC73B61FC5E6F98E3CBFA34F562910EA4A (U3CU3Ec__DisplayClass3_0_tA5F1B6DB815C67E8A600AE16C85AF97780239F49* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___c0, const RuntimeMethod* method) 
{
	{
		// exitActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList()
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeRoot::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeRoot__ctor_mF8C75C89083A0D02C17A892410F51D2E4793A24D (NodeRoot_t05250B67BFA4EF640AD30B6B033505F7542B003A* __this, RuntimeObject* ___runtime0, String_t* ___uniqueId1, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children2, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions3, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions5, const RuntimeMethod* method) 
{
	{
		// base(runtime, uniqueId, children, conditions, enterActions, exitActions) {
		RuntimeObject* L_0 = ___runtime0;
		String_t* L_1 = ___uniqueId1;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_2 = ___children2;
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_3 = ___conditions3;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_4 = ___enterActions4;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_5 = ___exitActions5;
		NodeBase__ctor_mBA8A4B2BC6F71ACBB1F8C4B28205937DF34E0255(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Nodes.NodeRootData::get_DefaultName()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* NodeRootData_get_DefaultName_m42F92BB0771963B1464AF2847B9A4C5A9CF7FFE8 (NodeRootData_t93221D85686F3184886F573001FEB5AD4BBEA3F6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1);
		s_Il2CppMethodInitialized = true;
	}
	{
		// protected override string DefaultName => "Root";
		return _stringLiteral97F5F2E635A943D0F2EDA0050FC7B3BFD6AF56D1;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Nodes.NodeRootData::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* NodeRootData_GetRuntime_m97CD3AB353162CFE6D55EB1E6B73CAAF2CC49597 (NodeRootData_t93221D85686F3184886F573001FEB5AD4BBEA3F6* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___dialogue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeRoot_t05250B67BFA4EF640AD30B6B033505F7542B003A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__0_m2F795C56789D8550218BD8B4E5CCD00FE7BA5E78_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__1_m293A46F0CCAD9AE45581BCB11BB9802361B58D94_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__2_mC41661E8D60EB59BF87023DFABB59EDF08BE93E9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* V_0 = NULL;
	{
		U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* L_0 = (U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass2_0__ctor_m6648186E9C2DFDE601EA619F4D6D5EE042B4D0E4(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* L_1 = V_0;
		RuntimeObject* L_2 = ___graphRuntime0;
		NullCheck(L_1);
		L_1->___graphRuntime_0 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___graphRuntime_0), (void*)L_2);
		U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* L_3 = V_0;
		RuntimeObject* L_4 = ___dialogue1;
		NullCheck(L_3);
		L_3->___dialogue_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___dialogue_1), (void*)L_4);
		// return new NodeRoot(
		//     graphRuntime,
		//     UniqueId,
		//     children.ToList<INodeData>(),
		//     conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		//     enterActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		//     exitActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList()
		// );
		U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* L_5 = V_0;
		NullCheck(L_5);
		RuntimeObject* L_6 = L_5->___graphRuntime_0;
		String_t* L_7;
		L_7 = NodeDataBase_get_UniqueId_m1423307C983CE02A7610AB8AF9402176A552EBC4_inline(__this, NULL);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_8 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___children_7;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_9;
		L_9 = Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB(L_8, Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		List_1_t26CC4912076948545EB2DB22E2B5044C1C1EBB3A* L_10 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___conditions_8;
		U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* L_11 = V_0;
		Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599* L_12 = (Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599*)il2cpp_codegen_object_new(Func_2_tA53BAF7D8DCBE4CCF83DC18A43A9E91318691599_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m3B2303338F5CB7703A6E2E6DBA9DF326E768A630(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__0_m2F795C56789D8550218BD8B4E5CCD00FE7BA5E78_RuntimeMethod_var), NULL);
		RuntimeObject* L_13;
		L_13 = Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9(L_10, L_12, Enumerable_Select_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mD78EB5A36B22EE4E4BA3936E85675C4761B394B9_RuntimeMethod_var);
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_14;
		L_14 = Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B(L_13, Enumerable_ToList_TisICondition_t5673A3776575DB896412C414F7F27AAC4CDD366E_mE962EDAB1050DCDDD2DBBD57D3680E1CDCFFC25B_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_15 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___enterActions_9;
		U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* L_16 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_17 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_17);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_17, L_16, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__1_m293A46F0CCAD9AE45581BCB11BB9802361B58D94_RuntimeMethod_var), NULL);
		RuntimeObject* L_18;
		L_18 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_15, L_17, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_19;
		L_19 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_18, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		List_1_tDBFAD801FA2BBAD94E22087A798C9E98D5CFA526* L_20 = ((NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538*)__this)->___exitActions_10;
		U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* L_21 = V_0;
		Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603* L_22 = (Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603*)il2cpp_codegen_object_new(Func_2_t49FD56DCFEAADFCCA45C828EAB1DECCE7B55B603_il2cpp_TypeInfo_var);
		NullCheck(L_22);
		Func_2__ctor_mBBED637E8EF9946F72604AED545DD9F898BF399B(L_22, L_21, (intptr_t)((void*)U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__2_mC41661E8D60EB59BF87023DFABB59EDF08BE93E9_RuntimeMethod_var), NULL);
		RuntimeObject* L_23;
		L_23 = Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143(L_20, L_22, Enumerable_Select_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_mF1F71E8E9BB1C9032A3D8BFE72800451A4EE7143_RuntimeMethod_var);
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_24;
		L_24 = Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585(L_23, Enumerable_ToList_TisIAction_tA1033AC0C9EA933C9291970EE18FC5B00A6A5DCA_m9148B0CC3C711F1549169238013ACCBB0F316585_RuntimeMethod_var);
		NodeRoot_t05250B67BFA4EF640AD30B6B033505F7542B003A* L_25 = (NodeRoot_t05250B67BFA4EF640AD30B6B033505F7542B003A*)il2cpp_codegen_object_new(NodeRoot_t05250B67BFA4EF640AD30B6B033505F7542B003A_il2cpp_TypeInfo_var);
		NullCheck(L_25);
		NodeRoot__ctor_mF8C75C89083A0D02C17A892410F51D2E4793A24D(L_25, L_6, L_7, L_9, L_14, L_19, L_24, NULL);
		return L_25;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeRootData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodeRootData__ctor_m45B5F5AB833AD3F92271FF68ABE3269980A42801 (NodeRootData_t93221D85686F3184886F573001FEB5AD4BBEA3F6* __this, const RuntimeMethod* method) 
{
	{
		NodeDataBase__ctor_m148F411944681EA46E78565B210AA809C60FFF0A(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.NodeRootData/<>c__DisplayClass2_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass2_0__ctor_m6648186E9C2DFDE601EA619F4D6D5EE042B4D0E4 (U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Conditions.ICondition CleverCrow.Fluid.Dialogues.Nodes.NodeRootData/<>c__DisplayClass2_0::<GetRuntime>b__0(CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__0_m2F795C56789D8550218BD8B4E5CCD00FE7BA5E78 (U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* __this, ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* ___c0, const RuntimeMethod* method) 
{
	{
		// conditions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodeRootData/<>c__DisplayClass2_0::<GetRuntime>b__1(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__1_m293A46F0CCAD9AE45581BCB11BB9802361B58D94 (U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___c0, const RuntimeMethod* method) 
{
	{
		// enterActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList(),
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Nodes.NodeRootData/<>c__DisplayClass2_0::<GetRuntime>b__2(CleverCrow.Fluid.Dialogues.Actions.ActionDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass2_0_U3CGetRuntimeU3Eb__2_mC41661E8D60EB59BF87023DFABB59EDF08BE93E9 (U3CU3Ec__DisplayClass2_0_tCA74CE3DAB901F2A59230D94B905BD49A0761C42* __this, ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* ___c0, const RuntimeMethod* method) 
{
	{
		// exitActions.Select(c => c.GetRuntime(graphRuntime, dialogue)).ToList()
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_0 = ___c0;
		RuntimeObject* L_1 = __this->___graphRuntime_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = VirtualFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(7 /* T CleverCrow.Fluid.Dialogues.Nodes.NodeNestedDataBase`1<CleverCrow.Fluid.Dialogues.Actions.IAction>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, L_0, L_1, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Nodes.PlayGraph.NodePlayGraph::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,CleverCrow.Fluid.Dialogues.Graphs.IGraphData,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Conditions.ICondition>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Actions.IAction>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePlayGraph__ctor_mEB2F0560D8FA2DFAB10FD092F686F50B69F465C3 (NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2* __this, RuntimeObject* ___runtime0, String_t* ___uniqueId1, RuntimeObject* ___graph2, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children3, List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* ___conditions4, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___enterActions5, List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* ___exitActions6, const RuntimeMethod* method) 
{
	{
		// : base(runtime, uniqueId, children, conditions, enterActions, exitActions) {
		RuntimeObject* L_0 = ___runtime0;
		String_t* L_1 = ___uniqueId1;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_2 = ___children3;
		List_1_tAEA45FC653D22214F435FD2FCF0D760552536FB3* L_3 = ___conditions4;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_4 = ___enterActions5;
		List_1_t0EECD80FFE1E48D8E63CFD2AC1B1D601ECA6F8FD* L_5 = ___exitActions6;
		NodeBase__ctor_mBA8A4B2BC6F71ACBB1F8C4B28205937DF34E0255(__this, L_0, L_1, L_2, L_3, L_4, L_5, NULL);
		// _graph = graph;
		RuntimeObject* L_6 = ___graph2;
		__this->____graph_8 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____graph_8), (void*)L_6);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Nodes.PlayGraph.NodePlayGraph::OnPlay(CleverCrow.Fluid.Dialogues.IDialoguePlayback)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NodePlayGraph_OnPlay_m230AA2F29D607219866932AB8E209FFB92F075DE (NodePlayGraph_t49FAA9671627255109B9F989C7CE19DBB8208EF2* __this, RuntimeObject* ___playback0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// playback.ParentCtrl.PlayChild(_graph);
		RuntimeObject* L_0 = ___playback0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Dialogues.IDialogueController CleverCrow.Fluid.Dialogues.IDialoguePlayback::get_ParentCtrl() */, IDialoguePlayback_t306CF49EA0B36D8E4F3C0AC2062F93058D3FB306_il2cpp_TypeInfo_var, L_0);
		RuntimeObject* L_2 = __this->____graph_8;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(2 /* System.Void CleverCrow.Fluid.Dialogues.IDialogueController::PlayChild(CleverCrow.Fluid.Dialogues.Graphs.IGraphData) */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Dialogues.Nodes.INodeData CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueGraph_get_Root_mD9F469AD9E3805305E5A69D86AACF3AC8F55D166 (DialogueGraph_tFB52BBF60FBA29C5FEA831527820A71CDE6B7C67* __this, const RuntimeMethod* method) 
{
	{
		// public INodeData Root => root;
		NodeRootData_t93221D85686F3184886F573001FEB5AD4BBEA3F6* L_0 = __this->___root_5;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyList`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData> CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph::get_Nodes()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueGraph_get_Nodes_m99D72969818EC6204316E232A67A2EB19AF8C4AA (DialogueGraph_tFB52BBF60FBA29C5FEA831527820A71CDE6B7C67* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<INodeData> Nodes => _nodes;
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->____nodes_4;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph::AddNode(CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueGraph_AddNode_m47A58E6F83B0AE8C4434B54CF0103E96CF65547A (DialogueGraph_tFB52BBF60FBA29C5FEA831527820A71CDE6B7C67* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// node.Setup();
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_0 = ___node0;
		NullCheck(L_0);
		NodeDataBase_Setup_m6CC93ADB475746C4D825FAD87A43DF6D87F7BD11(L_0, NULL);
		// _nodes.Add(node);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_1 = __this->____nodes_4;
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_2 = ___node0;
		NullCheck(L_1);
		List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_inline(L_1, L_2, List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph::DeleteNode(CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueGraph_DeleteNode_mF6665B4467DA7EF8CFCEF2E60B0E38EED076D751 (DialogueGraph_tFB52BBF60FBA29C5FEA831527820A71CDE6B7C67* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___node0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _nodes.Remove(node);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->____nodes_4;
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_1 = ___node0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB(L_0, L_1, List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Graphs.DialogueGraph::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueGraph__ctor_m1270C96AC166FB9CE6FAED02DDC9C8684FB0DDA3 (DialogueGraph_tFB52BBF60FBA29C5FEA831527820A71CDE6B7C67* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private List<NodeDataBase> _nodes = new List<NodeDataBase>();
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2*)il2cpp_codegen_object_new(List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF(L_0, List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF_RuntimeMethod_var);
		__this->____nodes_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____nodes_4), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime::get_Root()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GraphRuntime_get_Root_m013A6ED1481DDC2BBD0DB8CB7ACE178C69D8C1A8 (GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* __this, const RuntimeMethod* method) 
{
	{
		// public INode Root { get; }
		RuntimeObject* L_0 = __this->___U3CRootU3Ek__BackingField_1;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime::.ctor(CleverCrow.Fluid.Dialogues.IDialogueController,CleverCrow.Fluid.Dialogues.Graphs.IGraphData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GraphRuntime__ctor_m8391F4F082240CF0711C724E83C57FA4E7D3EE94 (GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* __this, RuntimeObject* ___dialogue0, RuntimeObject* ___data1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToDictionary_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mB1F7AF19E4C37685D0A8287D3A032D5B0C13A6C6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraphData_tF12C00F99972A5A1214D886271D2A3498391637C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3C_ctorU3Eb__4_0_m937A9B365A62846BE22AB14653DB1E417E36B32E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__1_m6D81817A0C91D45F62B990B6FA2E35772268E854_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E* V_0 = NULL;
	Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE* G_B2_0 = NULL;
	RuntimeObject* G_B2_1 = NULL;
	GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* G_B2_2 = NULL;
	Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE* G_B1_0 = NULL;
	RuntimeObject* G_B1_1 = NULL;
	GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* G_B1_2 = NULL;
	{
		U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E* L_0 = (U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E*)il2cpp_codegen_object_new(U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__DisplayClass4_0__ctor_m7D21D375783EECDC77739D4369FD9B352EA3017B(L_0, NULL);
		V_0 = L_0;
		U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E* L_1 = V_0;
		RuntimeObject* L_2 = ___dialogue0;
		NullCheck(L_1);
		L_1->___dialogue_1 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___dialogue_1), (void*)L_2);
		// public GraphRuntime (IDialogueController dialogue, IGraphData data) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E* L_3 = V_0;
		NullCheck(L_3);
		L_3->___U3CU3E4__this_0 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_3->___U3CU3E4__this_0), (void*)__this);
		// _dataToRuntime = data.Nodes.ToDictionary(
		//     k => k,
		//     v => v.GetRuntime(this, dialogue));
		RuntimeObject* L_4 = ___data1;
		NullCheck(L_4);
		RuntimeObject* L_5;
		L_5 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* System.Collections.Generic.IReadOnlyList`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData> CleverCrow.Fluid.Dialogues.Graphs.IGraphData::get_Nodes() */, IGraphData_tF12C00F99972A5A1214D886271D2A3498391637C_il2cpp_TypeInfo_var, L_4);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var);
		Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE* L_6 = ((U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1;
		Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE* L_7 = L_6;
		G_B1_0 = L_7;
		G_B1_1 = L_5;
		G_B1_2 = __this;
		if (L_7)
		{
			G_B2_0 = L_7;
			G_B2_1 = L_5;
			G_B2_2 = __this;
			goto IL_0040;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var);
		U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189* L_8 = ((U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE* L_9 = (Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE*)il2cpp_codegen_object_new(Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		Func_2__ctor_m3A0033AF5CD9BE051959F64B4EEC4ECD4E481092(L_9, L_8, (intptr_t)((void*)U3CU3Ec_U3C_ctorU3Eb__4_0_m937A9B365A62846BE22AB14653DB1E417E36B32E_RuntimeMethod_var), NULL);
		Func_2_t754BCC3354F8969BBB5D42DB7026E88FB35077BE* L_10 = L_9;
		((U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var))->___U3CU3E9__4_0_1), (void*)L_10);
		G_B2_0 = L_10;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0040:
	{
		U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E* L_11 = V_0;
		Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0* L_12 = (Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0*)il2cpp_codegen_object_new(Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0_il2cpp_TypeInfo_var);
		NullCheck(L_12);
		Func_2__ctor_m3AE65F08EB02F5CB184A67A6AFBEE32A0E45CD14(L_12, L_11, (intptr_t)((void*)U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__1_m6D81817A0C91D45F62B990B6FA2E35772268E854_RuntimeMethod_var), NULL);
		Dictionary_2_tA3ED857B5FCBE99603A8DA2A6AF89CC6EB0DDD37* L_13;
		L_13 = Enumerable_ToDictionary_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mB1F7AF19E4C37685D0A8287D3A032D5B0C13A6C6(G_B2_1, G_B2_0, L_12, Enumerable_ToDictionary_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mB1F7AF19E4C37685D0A8287D3A032D5B0C13A6C6_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->____dataToRuntime_0 = L_13;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->____dataToRuntime_0), (void*)L_13);
		// Root = GetCopy(data.Root);
		RuntimeObject* L_14 = ___data1;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Dialogues.Nodes.INodeData CleverCrow.Fluid.Dialogues.Graphs.IGraphData::get_Root() */, IGraphData_tF12C00F99972A5A1214D886271D2A3498391637C_il2cpp_TypeInfo_var, L_14);
		RuntimeObject* L_16;
		L_16 = GraphRuntime_GetCopy_m832197C80137995A5A260168EC25ED081D5FAD5C(__this, L_15, NULL);
		__this->___U3CRootU3Ek__BackingField_1 = L_16;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CRootU3Ek__BackingField_1), (void*)L_16);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime::GetCopy(CleverCrow.Fluid.Dialogues.Nodes.INodeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GraphRuntime_GetCopy_m832197C80137995A5A260168EC25ED081D5FAD5C (GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* __this, RuntimeObject* ___original0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mC987F8FDAA14160903F9EE706923F5A166B6399E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _dataToRuntime[original];
		Dictionary_2_tA3ED857B5FCBE99603A8DA2A6AF89CC6EB0DDD37* L_0 = __this->____dataToRuntime_0;
		RuntimeObject* L_1 = ___original0;
		NullCheck(L_0);
		RuntimeObject* L_2;
		L_2 = Dictionary_2_get_Item_mC987F8FDAA14160903F9EE706923F5A166B6399E(L_0, L_1, Dictionary_2_get_Item_mC987F8FDAA14160903F9EE706923F5A166B6399E_RuntimeMethod_var);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c__DisplayClass4_0::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass4_0__ctor_m7D21D375783EECDC77739D4369FD9B352EA3017B (U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c__DisplayClass4_0::<.ctor>b__1(CleverCrow.Fluid.Dialogues.Nodes.INodeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec__DisplayClass4_0_U3C_ctorU3Eb__1_m6D81817A0C91D45F62B990B6FA2E35772268E854 (U3CU3Ec__DisplayClass4_0_tBC069D6DCEC4203227BA3592D99BB8349AA0327E* __this, RuntimeObject* ___v0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGetRuntime_1_t1E10A7C6F194512D4ABF162C198CEF855C93B699_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// v => v.GetRuntime(this, dialogue));
		RuntimeObject* L_0 = ___v0;
		GraphRuntime_t5147AB558E46139E951E5C727B32F831ABE92F90* L_1 = __this->___U3CU3E4__this_0;
		RuntimeObject* L_2 = __this->___dialogue_1;
		NullCheck(L_0);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker2< RuntimeObject*, RuntimeObject*, RuntimeObject* >::Invoke(0 /* T CleverCrow.Fluid.Dialogues.IGetRuntime`1<CleverCrow.Fluid.Dialogues.Nodes.INode>::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController) */, IGetRuntime_1_t1E10A7C6F194512D4ABF162C198CEF855C93B699_il2cpp_TypeInfo_var, L_0, L_1, L_2);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mC562984EB98549ABC21822537573FFDF05F94C15 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189* L_0 = (U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189*)il2cpp_codegen_object_new(U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m29CE372ACF3357D2582DD478DB30EBA020F37E21(L_0, NULL);
		((U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m29CE372ACF3357D2582DD478DB30EBA020F37E21 (U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INodeData CleverCrow.Fluid.Dialogues.Graphs.GraphRuntime/<>c::<.ctor>b__4_0(CleverCrow.Fluid.Dialogues.Nodes.INodeData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CU3Ec_U3C_ctorU3Eb__4_0_m937A9B365A62846BE22AB14653DB1E417E36B32E (U3CU3Ec_t3334D2FA5D0980127F666DCB53678D6F7C588189* __this, RuntimeObject* ___k0, const RuntimeMethod* method) 
{
	{
		// k => k,
		RuntimeObject* L_0 = ___k0;
		return L_0;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.GameObjectVariables.KeyValueDefinitionGameObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void KeyValueDefinitionGameObject__ctor_m156E849FE3A99BA4A10B37B710A5F9201DFB824F (KeyValueDefinitionGameObject_t20E8737AA36DEA537928D7A75C6C122DFF030924* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&KeyValueDefinitionBase_1__ctor_mF09A2E913EA009F6F3BA6437CBA9CC396727D9DA_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		KeyValueDefinitionBase_1__ctor_mF09A2E913EA009F6F3BA6437CBA9CC396727D9DA(__this, KeyValueDefinitionBase_1__ctor_mF09A2E913EA009F6F3BA6437CBA9CC396727D9DA_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Choices.ChoiceData::get_UniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChoiceData_get_UniqueId_m4A20EE63C79ABBDFD904877F91575C99E0163946 (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId => _uniqueId;
		String_t* L_0 = __this->____uniqueId_6;
		return L_0;
	}
}
// System.Collections.Generic.IReadOnlyList`1<CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase> CleverCrow.Fluid.Dialogues.Choices.ChoiceData::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChoiceData_get_Children_mDAAC413BD75160764BE7EEE6BBA9B6E92EDB434C (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, const RuntimeMethod* method) 
{
	{
		// public IReadOnlyList<NodeDataBase> Children => children;
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_5;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData::Setup()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceData_Setup_m8AEAB411EA1A4A40D46F127D361CD9BB8F636889 (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6863CAD535BA256436DF16C3A52F453D14B6C897);
		s_Il2CppMethodInitialized = true;
	}
	Guid_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// name = "Choice";
		Object_set_name_mC79E6DC8FFD72479C90F0C4CC7F42A0FEAF5AE47(__this, _stringLiteral6863CAD535BA256436DF16C3A52F453D14B6C897, NULL);
		// _uniqueId = Guid.NewGuid().ToString();
		Guid_t L_0;
		L_0 = Guid_NewGuid_m1F4894E8DC089811D6252148AD5858E58D43A7BD(NULL);
		V_0 = L_0;
		String_t* L_1;
		L_1 = Guid_ToString_m2BFFD5FA726E03FA707AAFCCF065896C46D5290C((&V_0), NULL);
		__this->____uniqueId_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____uniqueId_6), (void*)L_1);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Choices.IChoice CleverCrow.Fluid.Dialogues.Choices.ChoiceData::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChoiceData_GetRuntime_m41274964C63B8E14D4363177B1962ED28E5D9D0A (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___dialogue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ChoiceRuntime(
		//     graphRuntime,
		//     text,
		//     _uniqueId,
		//     children.ToList<INodeData>());
		RuntimeObject* L_0 = ___graphRuntime0;
		String_t* L_1 = __this->___text_4;
		String_t* L_2 = __this->____uniqueId_6;
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_3 = __this->___children_5;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_4;
		L_4 = Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB(L_3, Enumerable_ToList_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_m18791381681864D63FFC1FFA6CE951B7DD21D9DB_RuntimeMethod_var);
		ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1* L_5 = (ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1*)il2cpp_codegen_object_new(ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		ChoiceRuntime__ctor_m08B0542B7EF8D3FB63EF045192A59E94A9F770FF(L_5, L_0, L_1, L_2, L_4, NULL);
		return L_5;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData::AddConnectionChild(CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceData_AddConnectionChild_mB993501D4A081D960BEDFADD5FF64AB52A17A94C (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___child0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Add(child);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_5;
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_1 = ___child0;
		NullCheck(L_0);
		List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_inline(L_0, L_1, List_1_Add_m12DA36D5618BF001D3BD31560DC34C4ABA9936D0_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData::RemoveConnectionChild(CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceData_RemoveConnectionChild_mA99133DABA778DCCAF53C59217232BA9084F2056 (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___child0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Remove(child);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_5;
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_1 = ___child0;
		NullCheck(L_0);
		bool L_2;
		L_2 = List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB(L_0, L_1, List_1_Remove_mB454CE0C58A7A1C21C730DFF98B8A56DC8890DDB_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData::SortConnectionsByPosition()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceData_SortConnectionsByPosition_mBFBF619A3CE9B859EDB93AF7EE6E9DD7FE2DA591 (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OrderBy_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAB70E05F40E4EDBCFA3940F569EA7BEE5FDF34E0_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m9809FD660A4057D1F3432A3586F1BD2AA1E0C479_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CSortConnectionsByPositionU3Eb__11_0_m71BF163DF66780FE8BE7E5A954A557DBA69EB974_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* G_B2_0 = NULL;
	List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* G_B2_1 = NULL;
	ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* G_B2_2 = NULL;
	Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* G_B1_0 = NULL;
	List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* G_B1_1 = NULL;
	ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* G_B1_2 = NULL;
	{
		// children = children.OrderBy(i => i.rect.yMin).ToList();
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_5;
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var);
		Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* L_1 = ((U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1;
		Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_0026;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var);
		U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD* L_3 = ((U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* L_4 = (Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2*)il2cpp_codegen_object_new(Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Func_2__ctor_mFA4F6AEFA4AB93D7D24147A8D229ADEA23E10DA3(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CSortConnectionsByPositionU3Eb__11_0_m71BF163DF66780FE8BE7E5A954A557DBA69EB974_RuntimeMethod_var), NULL);
		Func_2_tBB26ADB056EACF1CCC9AA6875C6CCA69EC5759C2* L_5 = L_4;
		((U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var))->___U3CU3E9__11_0_1), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_0026:
	{
		RuntimeObject* L_6;
		L_6 = Enumerable_OrderBy_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAB70E05F40E4EDBCFA3940F569EA7BEE5FDF34E0(G_B2_1, G_B2_0, Enumerable_OrderBy_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_TisSingle_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_mAB70E05F40E4EDBCFA3940F569EA7BEE5FDF34E0_RuntimeMethod_var);
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_7;
		L_7 = Enumerable_ToList_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m9809FD660A4057D1F3432A3586F1BD2AA1E0C479(L_6, Enumerable_ToList_TisNodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538_m9809FD660A4057D1F3432A3586F1BD2AA1E0C479_RuntimeMethod_var);
		NullCheck(G_B2_2);
		G_B2_2->___children_5 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&G_B2_2->___children_5), (void*)L_7);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData::ClearConnectionChildren()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceData_ClearConnectionChildren_m2C134BF5A5F611C92711658DC27653BF1DA107DA (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m2C814C3E02048E3EB50383C4B9307EE5E76EA487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// children.Clear();
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = __this->___children_5;
		NullCheck(L_0);
		List_1_Clear_m2C814C3E02048E3EB50383C4B9307EE5E76EA487_inline(L_0, List_1_Clear_m2C814C3E02048E3EB50383C4B9307EE5E76EA487_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceData__ctor_m917FD2591C1F7FDF359096CC74B22E50D2E4B8AD (ChoiceData_t5E47393F78E16852301D2B0D83BBDAF400007B8B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public List<NodeDataBase> children = new List<NodeDataBase>();
		List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2* L_0 = (List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2*)il2cpp_codegen_object_new(List_1_t4C2C8E8CB6D6F53A6269EC8B8510476B5171F3A2_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF(L_0, List_1__ctor_m0AD61E70CCD472C8754B7606E9F30F91F86044FF_RuntimeMethod_var);
		__this->___children_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___children_5), (void*)L_0);
		ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE69A32524B1DEE52AAACB8C65A4DD07C4E790BA1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD* L_0 = (U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD*)il2cpp_codegen_object_new(U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m8F4ADB028CC1D42EB7C2B8DE9BC702383BF85FB4(L_0, NULL);
		((U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceData/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m8F4ADB028CC1D42EB7C2B8DE9BC702383BF85FB4 (U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Single CleverCrow.Fluid.Dialogues.Choices.ChoiceData/<>c::<SortConnectionsByPosition>b__11_0(CleverCrow.Fluid.Dialogues.Nodes.NodeDataBase)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float U3CU3Ec_U3CSortConnectionsByPositionU3Eb__11_0_m71BF163DF66780FE8BE7E5A954A557DBA69EB974 (U3CU3Ec_tAA336DBA6C642A06BC3FF57FE75F90837752FFAD* __this, NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* ___i0, const RuntimeMethod* method) 
{
	{
		// children = children.OrderBy(i => i.rect.yMin).ToList();
		NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* L_0 = ___i0;
		NullCheck(L_0);
		Rect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D* L_1 = (&L_0->___rect_5);
		float L_2;
		L_2 = Rect_get_yMin_mB19848FB25DE61EDF958F7A22CFDD86DE103062F(L_1, NULL);
		return L_2;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::get_UniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChoiceRuntime_get_UniqueId_m294C72D504A269DE5DFC880E2CD3CD50A755C06C (ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId { get; }
		String_t* L_0 = __this->___U3CUniqueIdU3Ek__BackingField_3;
		return L_0;
	}
}
// System.String CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::get_Text()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ChoiceRuntime_get_Text_m44808CDC696B7B7B14A0D0B3AA3866298210D5C9 (ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1* __this, const RuntimeMethod* method) 
{
	{
		// public string Text { get; }
		String_t* L_0 = __this->___U3CTextU3Ek__BackingField_4;
		return L_0;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::get_IsValid()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ChoiceRuntime_get_IsValid_m2FC89E48E8F1D443844EE589D94D7FD623F73CFC (ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_mEB4B5FFBDB1D710AACAAA55F7C74426F58D1C769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3Cget_IsValidU3Eb__10_0_m163BC8B7EAAE40A8E1C4AFF013CB9E1AA74BE7FE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* G_B3_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B3_1 = NULL;
	Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* G_B2_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B2_1 = NULL;
	{
		// public bool IsValid => Children.Count == 0 || Children.Find(c => c.IsValid) != null;
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_0;
		L_0 = ChoiceRuntime_get_Children_m66720D758FBB5A273082B50416439373A11DB48F(__this, NULL);
		NullCheck(L_0);
		int32_t L_1;
		L_1 = List_1_get_Count_mEB4B5FFBDB1D710AACAAA55F7C74426F58D1C769_inline(L_0, List_1_get_Count_mEB4B5FFBDB1D710AACAAA55F7C74426F58D1C769_RuntimeMethod_var);
		if (!L_1)
		{
			goto IL_003b;
		}
	}
	{
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_2;
		L_2 = ChoiceRuntime_get_Children_m66720D758FBB5A273082B50416439373A11DB48F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var);
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_3 = ((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1;
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_4 = L_3;
		G_B2_0 = L_4;
		G_B2_1 = L_2;
		if (L_4)
		{
			G_B3_0 = L_4;
			G_B3_1 = L_2;
			goto IL_0032;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var);
		U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643* L_5 = ((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_6 = (Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818*)il2cpp_codegen_object_new(Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		Predicate_1__ctor_mD3A0AEBA3E0F170CB6E8BC4B29633200BB48F075(L_6, L_5, (intptr_t)((void*)U3CU3Ec_U3Cget_IsValidU3Eb__10_0_m163BC8B7EAAE40A8E1C4AFF013CB9E1AA74BE7FE_RuntimeMethod_var), NULL);
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_7 = L_6;
		((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9__10_0_1), (void*)L_7);
		G_B3_0 = L_7;
		G_B3_1 = G_B2_1;
	}

IL_0032:
	{
		NullCheck(G_B3_1);
		RuntimeObject* L_8;
		L_8 = List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46(G_B3_1, G_B3_0, List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46_RuntimeMethod_var);
		return (bool)((!(((RuntimeObject*)(RuntimeObject*)L_8) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
	}

IL_003b:
	{
		return (bool)1;
	}
}
// System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INode> CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::get_Children()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* ChoiceRuntime_get_Children_m66720D758FBB5A273082B50416439373A11DB48F (ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_Select_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mBBCF7333567D151155F6A9069A1AFB2D05D70E46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_ToList_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_m7D2F8299F6EBBFDB253B16D26A3D9B5DCD639F24_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGraph_tFE3B64FEB94003143B6CA2E7E97B1048059D8494_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* V_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B2_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B1_0 = NULL;
	{
		// _childrenRuntimeCache ??
		// (_childrenRuntimeCache = _children.Select(_runtime.GetCopy).ToList());
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_0 = __this->____childrenRuntimeCache_2;
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0035;
		}
	}
	{
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_2 = __this->____children_1;
		RuntimeObject* L_3 = __this->____runtime_0;
		RuntimeObject* L_4 = L_3;
		Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0* L_5 = (Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0*)il2cpp_codegen_object_new(Func_2_tEADAFF0E2223B3D04726251A29F26A01ACB57AE0_il2cpp_TypeInfo_var);
		NullCheck(L_5);
		Func_2__ctor_m3AE65F08EB02F5CB184A67A6AFBEE32A0E45CD14(L_5, L_4, (intptr_t)((void*)GetInterfaceMethodInfo(L_4, 1, IGraph_tFE3B64FEB94003143B6CA2E7E97B1048059D8494_il2cpp_TypeInfo_var)), NULL);
		RuntimeObject* L_6;
		L_6 = Enumerable_Select_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mBBCF7333567D151155F6A9069A1AFB2D05D70E46(L_2, L_5, Enumerable_Select_TisINodeData_t973B02E0C4C64E7F2D4BB50BE23465CAE3FFD5FB_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_mBBCF7333567D151155F6A9069A1AFB2D05D70E46_RuntimeMethod_var);
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_7;
		L_7 = Enumerable_ToList_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_m7D2F8299F6EBBFDB253B16D26A3D9B5DCD639F24(L_6, Enumerable_ToList_TisINode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_m7D2F8299F6EBBFDB253B16D26A3D9B5DCD639F24_RuntimeMethod_var);
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_8 = L_7;
		V_0 = L_8;
		__this->____childrenRuntimeCache_2 = L_8;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____childrenRuntimeCache_2), (void*)L_8);
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_9 = V_0;
		G_B2_0 = L_9;
	}

IL_0035:
	{
		return G_B2_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::.ctor(CleverCrow.Fluid.Dialogues.Graphs.IGraph,System.String,System.String,System.Collections.Generic.List`1<CleverCrow.Fluid.Dialogues.Nodes.INodeData>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ChoiceRuntime__ctor_m08B0542B7EF8D3FB63EF045192A59E94A9F770FF (ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1* __this, RuntimeObject* ___runtime0, String_t* ___text1, String_t* ___uniqueId2, List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* ___children3, const RuntimeMethod* method) 
{
	{
		// public ChoiceRuntime (IGraph runtime, string text, string uniqueId, List<INodeData> children) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _runtime = runtime;
		RuntimeObject* L_0 = ___runtime0;
		__this->____runtime_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____runtime_0), (void*)L_0);
		// Text = text;
		String_t* L_1 = ___text1;
		__this->___U3CTextU3Ek__BackingField_4 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CTextU3Ek__BackingField_4), (void*)L_1);
		// UniqueId = uniqueId;
		String_t* L_2 = ___uniqueId2;
		__this->___U3CUniqueIdU3Ek__BackingField_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUniqueIdU3Ek__BackingField_3), (void*)L_2);
		// _children = children;
		List_1_t66960E5C7B83418C258F39FDACE74C0B0C260EAC* L_3 = ___children3;
		__this->____children_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____children_1), (void*)L_3);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Nodes.INode CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime::GetValidChildNode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ChoiceRuntime_GetValidChildNode_m21558EB2F92372572383C506C1881124E8729539 (ChoiceRuntime_tC2D1130D045248AE8642DD2D3A42FC820B3783B1* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CGetValidChildNodeU3Eb__14_0_mF7253396DD5F24533B00D261C32341DD7A8AB434_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* G_B2_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B2_1 = NULL;
	Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* G_B1_0 = NULL;
	List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* G_B1_1 = NULL;
	{
		// return Children.Find(c => c.IsValid);
		List_1_t23C26E430714EC1541397985FCBAC145BF6F3F96* L_0;
		L_0 = ChoiceRuntime_get_Children_m66720D758FBB5A273082B50416439373A11DB48F(__this, NULL);
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var);
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_1 = ((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_2;
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			goto IL_0025;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var);
		U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643* L_3 = ((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9_0;
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_4 = (Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818*)il2cpp_codegen_object_new(Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		Predicate_1__ctor_mD3A0AEBA3E0F170CB6E8BC4B29633200BB48F075(L_4, L_3, (intptr_t)((void*)U3CU3Ec_U3CGetValidChildNodeU3Eb__14_0_mF7253396DD5F24533B00D261C32341DD7A8AB434_RuntimeMethod_var), NULL);
		Predicate_1_tD8D7DD4A5752AE9AE30D7926E2CCE3A769828818* L_5 = L_4;
		((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_2 = L_5;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9__14_0_2), (void*)L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
	}

IL_0025:
	{
		NullCheck(G_B2_1);
		RuntimeObject* L_6;
		L_6 = List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46(G_B2_1, G_B2_0, List_1_Find_mA5258F6A0BC24760BD1498EF0A6DB4AD5B89AF46_RuntimeMethod_var);
		return L_6;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_mE8031146E991EB423C08D77F9D340317FE150FE1 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643* L_0 = (U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643*)il2cpp_codegen_object_new(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CU3Ec__ctor_m474CCB791D31F740B99A822CFA6CEB132A7032E5(L_0, NULL);
		((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643_il2cpp_TypeInfo_var))->___U3CU3E9_0), (void*)L_0);
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m474CCB791D31F740B99A822CFA6CEB132A7032E5 (U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643* __this, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c::<get_IsValid>b__10_0(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3Cget_IsValidU3Eb__10_0_m163BC8B7EAAE40A8E1C4AFF013CB9E1AA74BE7FE (U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public bool IsValid => Children.Count == 0 || Children.Find(c => c.IsValid) != null;
		RuntimeObject* L_0 = ___c0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean CleverCrow.Fluid.Dialogues.Nodes.INode::get_IsValid() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Choices.ChoiceRuntime/<>c::<GetValidChildNode>b__14_0(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3CGetValidChildNodeU3Eb__14_0_mF7253396DD5F24533B00D261C32341DD7A8AB434 (U3CU3Ec_t429EB428254CCAE42E9F9EA582B25A0307F92643* __this, RuntimeObject* ___c0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return Children.Find(c => c.IsValid);
		RuntimeObject* L_0 = ___c0;
		NullCheck(L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(2 /* System.Boolean CleverCrow.Fluid.Dialogues.Nodes.INode::get_IsValid() */, INode_t4A288FEC3ACEB92E073055D451F3016F65FFA6E4_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase::OnInit(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionDataBase_OnInit_m23D908E35D0C58DDA18FD9510C3DBF139E73A8BB (ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	{
		// public virtual void OnInit (IDialogueController dialogue) {}
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Conditions.ICondition CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConditionDataBase_GetRuntime_mAFCF56047A41E63FCDBE383F60A1F0F3FEE6529C (ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___dialogue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mBE032E58964F59920B806877058AFA78264AE29F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ConditionRuntime(dialogue, _uniqueId, Instantiate(this));
		RuntimeObject* L_0 = ___dialogue1;
		String_t* L_1 = ((NodeNestedDataBase_1_t67C8B2762D6F87FB1B86E2B4CB4022F93A844C08*)__this)->____uniqueId_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* L_2;
		L_2 = Object_Instantiate_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mBE032E58964F59920B806877058AFA78264AE29F(__this, Object_Instantiate_TisConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13_mBE032E58964F59920B806877058AFA78264AE29F_RuntimeMethod_var);
		ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2* L_3 = (ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2*)il2cpp_codegen_object_new(ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ConditionRuntime__ctor_m12F1670794AD82DBB56029CE5FD8328468471A86(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Conditions.ConditionDataBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionDataBase__ctor_m641D8DE54F47967329843510A716C5FCE8AD6AED (ConditionDataBase_tBBBC0DF8754450198C1CA95970F453EDE73A4C13* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeNestedDataBase_1__ctor_m19124CAF88453B36FEFB8C511A3E7D20E00C1564_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeNestedDataBase_1__ctor_m19124CAF88453B36FEFB8C511A3E7D20E00C1564(__this, NodeNestedDataBase_1__ctor_m19124CAF88453B36FEFB8C511A3E7D20E00C1564_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime::get_UniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ConditionRuntime_get_UniqueId_m3D8C78B52FE894DC4AC782FFF4D26D523B5F8165 (ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId { get; }
		String_t* L_0 = __this->___U3CUniqueIdU3Ek__BackingField_3;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime::.ctor(CleverCrow.Fluid.Dialogues.IDialogueController,System.String,CleverCrow.Fluid.Dialogues.Conditions.IConditionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionRuntime__ctor_m12F1670794AD82DBB56029CE5FD8328468471A86 (ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2* __this, RuntimeObject* ___dialogueController0, String_t* ___uniqueId1, RuntimeObject* ___data2, const RuntimeMethod* method) 
{
	{
		// public ConditionRuntime (IDialogueController dialogueController, string uniqueId, IConditionData data) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _data = data;
		RuntimeObject* L_0 = ___data2;
		__this->____data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_1), (void*)L_0);
		// _dialogueController = dialogueController;
		RuntimeObject* L_1 = ___dialogueController0;
		__this->____dialogueController_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dialogueController_0), (void*)L_1);
		// UniqueId = uniqueId;
		String_t* L_2 = ___uniqueId1;
		__this->___U3CUniqueIdU3Ek__BackingField_3 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUniqueIdU3Ek__BackingField_3), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Conditions.ConditionRuntime::GetIsValid(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionRuntime_GetIsValid_m8EA7B7DAFF65C9807445472E309C05082D0A6058 (ConditionRuntime_t9170EB9B497F6A7E101D00F5B4BFB778142A17B2* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IConditionData_t7DF0E9833BB017C02C78F0CC4B3BAA88AF865FC0_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_initTriggered) {
		bool L_0 = __this->____initTriggered_2;
		if (L_0)
		{
			goto IL_0020;
		}
	}
	{
		// _data.OnInit(_dialogueController);
		RuntimeObject* L_1 = __this->____data_1;
		RuntimeObject* L_2 = __this->____dialogueController_0;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void CleverCrow.Fluid.Dialogues.Conditions.IConditionData::OnInit(CleverCrow.Fluid.Dialogues.IDialogueController) */, IConditionData_t7DF0E9833BB017C02C78F0CC4B3BAA88AF865FC0_il2cpp_TypeInfo_var, L_1, L_2);
		// _initTriggered = true;
		__this->____initTriggered_2 = (bool)1;
	}

IL_0020:
	{
		// return _data.OnGetIsValid(parent);
		RuntimeObject* L_3 = __this->____data_1;
		RuntimeObject* L_4 = ___parent0;
		NullCheck(L_3);
		bool L_5;
		L_5 = InterfaceFuncInvoker1< bool, RuntimeObject* >::Invoke(1 /* System.Boolean CleverCrow.Fluid.Dialogues.Conditions.IConditionData::OnGetIsValid(CleverCrow.Fluid.Dialogues.Nodes.INode) */, IConditionData_t7DF0E9833BB017C02C78F0CC4B3BAA88AF865FC0_il2cpp_TypeInfo_var, L_3, L_4);
		return L_5;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalBool::GetBoolInstance(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsGlobalBool_GetBoolInstance_m5A27FF5DD11C61CD86C3DB7755D71E89CE46BA95 (IsGlobalBool_t0AF09ABA630C8928BC7B6179D97BF822CDF75974* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GlobalDatabaseManager.Instance.Database.Bools;
		GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* L_0;
		L_0 = Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9(Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		NullCheck(L_0);
		DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* L_1;
		L_1 = GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DatabaseInstance_get_Bools_m8A1D85F1125F1CB9F078961C7436AF6F848FFD26_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsGlobalBool__ctor_mCA19F2805AB68DE95F7DC301440D662E78015218 (IsGlobalBool_t0AF09ABA630C8928BC7B6179D97BF822CDF75974* __this, const RuntimeMethod* method) 
{
	{
		IsBoolBase__ctor_m937D01567314818252863530041E5770E29AA858(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalFloat::GetFloatInstance(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsGlobalFloat_GetFloatInstance_m23904CFDA4418A66AC3D1F906F0EC1B8FF0F08BD (IsGlobalFloat_tD798A517E206A3A9AA47884AF1FE2CA5A3B3620C* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GlobalDatabaseManager.Instance.Database.Floats;
		GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* L_0;
		L_0 = Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9(Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		NullCheck(L_0);
		DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* L_1;
		L_1 = GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DatabaseInstance_get_Floats_m6DDC3CDE3220A9A1A536468276EE971D68347D18_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsGlobalFloat__ctor_m429D0FB8C3C8E5E99F189DC7492A528CC6296AD3 (IsGlobalFloat_tD798A517E206A3A9AA47884AF1FE2CA5A3B3620C* __this, const RuntimeMethod* method) 
{
	{
		IsFloatBase__ctor_m25132DD460AED12263A2F3746241EBCCE050EC47(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalInt::GetIntInstance(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsGlobalInt_GetIntInstance_m17D853BBEF44A1FBB0C9BE260C2F06AAD4341A71 (IsGlobalInt_t912888F1231776735BC2316B44FAE5A0D9040CAA* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GlobalDatabaseManager.Instance.Database.Ints;
		GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* L_0;
		L_0 = Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9(Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		NullCheck(L_0);
		DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* L_1;
		L_1 = GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DatabaseInstance_get_Ints_m0B3335AAAFC915933F16B3998A6C5E0DC1CE4358_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsGlobalInt__ctor_mD3C5532D43BD3E711A3586A9752E0DEB50F6B6D6 (IsGlobalInt_t912888F1231776735BC2316B44FAE5A0D9040CAA* __this, const RuntimeMethod* method) 
{
	{
		IsIntBase__ctor_mCBCB97A6C2448690E725C050D17E8BCB6BE63D7B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalString::GetStringInstance(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsGlobalString_GetStringInstance_m6E8C75E89F29A8292A79687C595CA1DC6098A802 (IsGlobalString_tC0CCC3026D51F941F3C7E87F6B238FFB8C024C05* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GlobalDatabaseManager.Instance.Database.Strings;
		GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* L_0;
		L_0 = Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9(Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		NullCheck(L_0);
		DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* L_1;
		L_1 = GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DatabaseInstance_get_Strings_mDA47F7E9CD6C9B73E3046EADFD35A9006BA7FAAB_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Conditions.Databases.IsGlobalString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsGlobalString__ctor_mC5D8A75A0702863A77B82FD150207BCE625E363C (IsGlobalString_tC0CCC3026D51F941F3C7E87F6B238FFB8C024C05* __this, const RuntimeMethod* method) 
{
	{
		IsStringBase__ctor_mF5D168147355878E79151A2ECD6E615228ABB0AC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionDataBase::OnInit(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDataBase_OnInit_mDD1320C5B04DDC9A2A9D8B56EE30EDD19481F6D4 (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	{
		// public virtual void OnInit (IDialogueController dialogue) {}
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionDataBase::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDataBase_OnStart_mD594BC0B6E47F82B17AC5C881B268EDE31F9B951 (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnStart () {}
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.ActionStatus CleverCrow.Fluid.Dialogues.Actions.ActionDataBase::OnUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionDataBase_OnUpdate_mFEEE57A324EF4C8FCDDB72F34C4F0BA6F1E34298 (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* __this, const RuntimeMethod* method) 
{
	{
		// return ActionStatus.Success;
		return (int32_t)(0);
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionDataBase::OnExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDataBase_OnExit_m2A0240497E7BBE8AAB9A6F7D416286689FCC822A (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnExit () {}
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionDataBase::OnReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDataBase_OnReset_m6B3F80946F12F87E7C34E9DB1D821186F7B080BF (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* __this, const RuntimeMethod* method) 
{
	{
		// public virtual void OnReset () {}
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.IAction CleverCrow.Fluid.Dialogues.Actions.ActionDataBase::GetRuntime(CleverCrow.Fluid.Dialogues.Graphs.IGraph,CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ActionDataBase_GetRuntime_mECB1C7805F0C2CC6E2226238E824C102B7525F20 (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* __this, RuntimeObject* ___graphRuntime0, RuntimeObject* ___dialogue1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m73558D40A2AFC28AFCA8098AC04CB50A18029D46_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return new ActionRuntime(dialogue, _uniqueId, Instantiate(this));
		RuntimeObject* L_0 = ___dialogue1;
		String_t* L_1 = ((NodeNestedDataBase_1_tBFAF0B539820435EFC36920F096035AB74DC6C1A*)__this)->____uniqueId_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* L_2;
		L_2 = Object_Instantiate_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m73558D40A2AFC28AFCA8098AC04CB50A18029D46(__this, Object_Instantiate_TisActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A_m73558D40A2AFC28AFCA8098AC04CB50A18029D46_RuntimeMethod_var);
		ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* L_3 = (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4*)il2cpp_codegen_object_new(ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		ActionRuntime__ctor_m27E7CA32EDCC2A94A167632E7CE2D118B08B4060(L_3, L_0, L_1, L_2, NULL);
		return L_3;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionDataBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionDataBase__ctor_mD6989B700BC383BBE4C52939C2A9E269670CA5D2 (ActionDataBase_t03C1E31C2FFA3966DF8345004EBB2215348DF13A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&NodeNestedDataBase_1__ctor_mABA61AF21D7E5E30F60D5AB5D81A8B50646687BB_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		NodeNestedDataBase_1__ctor_mABA61AF21D7E5E30F60D5AB5D81A8B50646687BB(__this, NodeNestedDataBase_1__ctor_mABA61AF21D7E5E30F60D5AB5D81A8B50646687BB_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.String CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::get_UniqueId()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* ActionRuntime_get_UniqueId_m2D48CF812F565006423D1394C0996EE5760D2470 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId { get; }
		String_t* L_0 = __this->___U3CUniqueIdU3Ek__BackingField_6;
		return L_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::.ctor(CleverCrow.Fluid.Dialogues.IDialogueController,System.String,CleverCrow.Fluid.Dialogues.Actions.IActionData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime__ctor_m27E7CA32EDCC2A94A167632E7CE2D118B08B4060 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, RuntimeObject* ___dialogue0, String_t* ___uniqueId1, RuntimeObject* ___data2, const RuntimeMethod* method) 
{
	{
		// public ActionRuntime (IDialogueController dialogue, string uniqueId, IActionData data) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _data = data;
		RuntimeObject* L_0 = ___data2;
		__this->____data_1 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____data_1), (void*)L_0);
		// _dialogueController = dialogue;
		RuntimeObject* L_1 = ___dialogue0;
		__this->____dialogueController_0 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dialogueController_0), (void*)L_1);
		// UniqueId = uniqueId;
		String_t* L_2 = ___uniqueId1;
		__this->___U3CUniqueIdU3Ek__BackingField_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CUniqueIdU3Ek__BackingField_6), (void*)L_2);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.ActionStatus CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Tick()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionRuntime_Tick_mD77CDE861D2C6BAFF421EB334F05AC3A386853C2 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) 
{
	int32_t G_B2_0 = 0;
	int32_t G_B1_0 = 0;
	{
		// Reset();
		ActionRuntime_Reset_m4CE836A18B0E84449198257B9AA903391CBB5BE7(__this, NULL);
		// Init();
		ActionRuntime_Init_mC44BABF22453F591EF5CDE914C46D5720DAF2161(__this, NULL);
		// Start();
		ActionRuntime_Start_m9F85DD59BDA4B61D06AA53B96DD02029BB1F0169(__this, NULL);
		// var status = Update();
		int32_t L_0;
		L_0 = ActionRuntime_Update_m0883BB0F093EF1132F63BDAFC97A67162B023D95(__this, NULL);
		// if (status == ActionStatus.Success) {
		int32_t L_1 = L_0;
		G_B1_0 = L_1;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_0021;
		}
	}
	{
		// Exit();
		ActionRuntime_Exit_m8BA4D49F0629AF9773E2FE01E2B3BB9D90CC7613(__this, NULL);
		G_B2_0 = G_B1_0;
	}

IL_0021:
	{
		// return status;
		return G_B2_0;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::End()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime_End_m5DB8DB80B4EAE3055ABE29F83257B17AE6EBCFFE (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) 
{
	{
		// if (_active) Exit();
		bool L_0 = __this->____active_5;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// if (_active) Exit();
		ActionRuntime_Exit_m8BA4D49F0629AF9773E2FE01E2B3BB9D90CC7613(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Init()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime_Init_mC44BABF22453F591EF5CDE914C46D5720DAF2161 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_initUsed) return;
		bool L_0 = __this->____initUsed_2;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_initUsed) return;
		return;
	}

IL_0009:
	{
		// _initUsed = true;
		__this->____initUsed_2 = (bool)1;
		// _data.OnInit(_dialogueController);
		RuntimeObject* L_1 = __this->____data_1;
		RuntimeObject* L_2 = __this->____dialogueController_0;
		NullCheck(L_1);
		InterfaceActionInvoker1< RuntimeObject* >::Invoke(0 /* System.Void CleverCrow.Fluid.Dialogues.Actions.IActionData::OnInit(CleverCrow.Fluid.Dialogues.IDialogueController) */, IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var, L_1, L_2);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime_Start_m9F85DD59BDA4B61D06AA53B96DD02029BB1F0169 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (_startUsed) return;
		bool L_0 = __this->____startUsed_3;
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (_startUsed) return;
		return;
	}

IL_0009:
	{
		// _startUsed = true;
		__this->____startUsed_3 = (bool)1;
		// _active = true;
		__this->____active_5 = (bool)1;
		// _data.OnStart();
		RuntimeObject* L_1 = __this->____data_1;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(1 /* System.Void CleverCrow.Fluid.Dialogues.Actions.IActionData::OnStart() */, IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Exit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime_Exit_m8BA4D49F0629AF9773E2FE01E2B3BB9D90CC7613 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _startUsed = false;
		__this->____startUsed_3 = (bool)0;
		// _resetReady = true;
		__this->____resetReady_4 = (bool)1;
		// _active = false;
		__this->____active_5 = (bool)0;
		// _data.OnExit();
		RuntimeObject* L_0 = __this->____data_1;
		NullCheck(L_0);
		InterfaceActionInvoker0::Invoke(3 /* System.Void CleverCrow.Fluid.Dialogues.Actions.IActionData::OnExit() */, IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var, L_0);
		// }
		return;
	}
}
// CleverCrow.Fluid.Dialogues.Actions.ActionStatus CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ActionRuntime_Update_m0883BB0F093EF1132F63BDAFC97A67162B023D95 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return _data.OnUpdate();
		RuntimeObject* L_0 = __this->____data_1;
		NullCheck(L_0);
		int32_t L_1;
		L_1 = InterfaceFuncInvoker0< int32_t >::Invoke(2 /* CleverCrow.Fluid.Dialogues.Actions.ActionStatus CleverCrow.Fluid.Dialogues.Actions.IActionData::OnUpdate() */, IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var, L_0);
		return L_1;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.ActionRuntime::Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ActionRuntime_Reset_m4CE836A18B0E84449198257B9AA903391CBB5BE7 (ActionRuntime_t2AF7A70082F63A162826AE37842509C7FA8F7DE4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!_resetReady) return;
		bool L_0 = __this->____resetReady_4;
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// if (!_resetReady) return;
		return;
	}

IL_0009:
	{
		// _resetReady = false;
		__this->____resetReady_4 = (bool)0;
		// _data.OnReset();
		RuntimeObject* L_1 = __this->____data_1;
		NullCheck(L_1);
		InterfaceActionInvoker0::Invoke(4 /* System.Void CleverCrow.Fluid.Dialogues.Actions.IActionData::OnReset() */, IActionData_t5C589CBCE9FA27C20402D4D49B0F3C1BBBBD9570_il2cpp_TypeInfo_var, L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.GameObjectWrapper::.ctor(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectWrapper__ctor_m8E508E546681150132EB9A6B2F595ADFAAAA8823 (GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09* __this, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___go0, const RuntimeMethod* method) 
{
	{
		// public GameObjectWrapper (GameObject go) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _go = go;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = ___go0;
		__this->____go_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____go_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.GameObjectWrapper::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObjectWrapper_SetActive_m5AF8072F52174096FD06F209E8C72072DBFCE084 (GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09* __this, bool ___value0, const RuntimeMethod* method) 
{
	{
		// _go.SetActive(value);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->____go_0;
		bool L_1 = ___value0;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, L_1, NULL);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActive::OnInit(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActive_OnInit_mE8A47F557433C97C80D8516092C3C07B34C827A3 (SetActive_t24E13A9ED37349030B33689945DA4DA1426F34AB* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	{
		// _dialogue = dialogue;
		RuntimeObject* L_0 = ___dialogue0;
		__this->____dialogue_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____dialogue_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActive::OnStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActive_OnStart_mFF1E3BB4FAC88C194A3C6F687EDBEEEB41168871 (SetActive_t24E13A9ED37349030B33689945DA4DA1426F34AB* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstanceExtended_t9519B545E11E2A1A8EA4422A7476BB55156A9B1E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueData_1_t046EA48861A90497331417C2E6C30569EF4F9108_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var go = _dialogue.LocalDatabaseExtended.GameObjects.Get(_gameObject.key, _gameObject.defaultValue);
		RuntimeObject* L_0 = __this->____dialogue_6;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Dialogues.IDatabaseInstanceExtended CleverCrow.Fluid.Dialogues.IDialogueController::get_LocalDatabaseExtended() */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IKeyValueData`1<UnityEngine.GameObject> CleverCrow.Fluid.Dialogues.IDatabaseInstanceExtended::get_GameObjects() */, IDatabaseInstanceExtended_t9519B545E11E2A1A8EA4422A7476BB55156A9B1E_il2cpp_TypeInfo_var, L_1);
		KeyValueDefinitionGameObject_t20E8737AA36DEA537928D7A75C6C122DFF030924* L_3 = __this->____gameObject_7;
		NullCheck(L_3);
		String_t* L_4 = ((KeyValueDefinitionBase_1_t9BCE62C4CCD9322298E321FE00668B3A21B71C0F*)L_3)->___key_5;
		KeyValueDefinitionGameObject_t20E8737AA36DEA537928D7A75C6C122DFF030924* L_5 = __this->____gameObject_7;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = ((KeyValueDefinitionBase_1_t9BCE62C4CCD9322298E321FE00668B3A21B71C0F*)L_5)->___defaultValue_6;
		NullCheck(L_2);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_7;
		L_7 = InterfaceFuncInvoker2< GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, String_t*, GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueData`1<UnityEngine.GameObject>::Get(System.String,V) */, IKeyValueData_1_t046EA48861A90497331417C2E6C30569EF4F9108_il2cpp_TypeInfo_var, L_2, L_4, L_6);
		// var goWrapper = new GameObjectWrapper(go);
		GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09* L_8 = (GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09*)il2cpp_codegen_object_new(GameObjectWrapper_t193349EA28C1CA8A75809A9FCF58EA920D84FE09_il2cpp_TypeInfo_var);
		NullCheck(L_8);
		GameObjectWrapper__ctor_m8E508E546681150132EB9A6B2F595ADFAAAA8823(L_8, L_7, NULL);
		// var setActive = new SetActiveInternal(goWrapper);
		SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682* L_9 = (SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682*)il2cpp_codegen_object_new(SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682_il2cpp_TypeInfo_var);
		NullCheck(L_9);
		SetActiveInternal__ctor_m39CE8E763F458204FB4228769A506A89C7663116(L_9, L_8, NULL);
		// setActive.SetValue(_setActive);
		bool L_10 = __this->____setActive_8;
		NullCheck(L_9);
		SetActiveInternal_SetValue_m7BA8DCCCAF1240CEA10EBF77279D0AC443BFDC5E(L_9, L_10, NULL);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActive__ctor_m40914300C942099B46B744EBE5F251604D4D634B (SetActive_t24E13A9ED37349030B33689945DA4DA1426F34AB* __this, const RuntimeMethod* method) 
{
	{
		ActionDataBase__ctor_mD6989B700BC383BBE4C52939C2A9E269670CA5D2(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActiveInternal::.ctor(CleverCrow.Fluid.Dialogues.Actions.GameObjects.IGameObjectWrapper)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActiveInternal__ctor_m39CE8E763F458204FB4228769A506A89C7663116 (SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682* __this, RuntimeObject* ___go0, const RuntimeMethod* method) 
{
	{
		// public SetActiveInternal (IGameObjectWrapper go) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _go = go;
		RuntimeObject* L_0 = ___go0;
		__this->____go_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____go_0), (void*)L_0);
		// }
		return;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.SetActiveInternal::SetValue(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetActiveInternal_SetValue_m7BA8DCCCAF1240CEA10EBF77279D0AC443BFDC5E (SetActiveInternal_tC07C35D1563591FCAA2AD50D91D3BE42583CD682* __this, bool ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IGameObjectWrapper_t8C598A1B3E990FE3155B55DF01ED10366DC1F52C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _go.SetActive(value);
		RuntimeObject* L_0 = __this->____go_0;
		bool L_1 = ___value0;
		NullCheck(L_0);
		InterfaceActionInvoker1< bool >::Invoke(0 /* System.Void CleverCrow.Fluid.Dialogues.Actions.GameObjects.IGameObjectWrapper::SetActive(System.Boolean) */, IGameObjectWrapper_t8C598A1B3E990FE3155B55DF01ED10366DC1F52C_il2cpp_TypeInfo_var, L_0, L_1);
		// }
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Boolean> CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalBool::get_Variable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueDefinitionBase_1_tAFEC137E4DDA2D46D5451CBBC2A13F7F36437E19* SetGlobalBool_get_Variable_mC844C859A06820E72F465D4308560BF029890162 (SetGlobalBool_t99913E190711894AD9FC727FD32CAA89C6E64AD8* __this, const RuntimeMethod* method) 
{
	{
		// protected override KeyValueDefinitionBase<bool> Variable => _variable;
		KeyValueDefinitionBool_tE0EF412D06FF4D3F027E6734F4304913A443133F* L_0 = __this->____variable_8;
		return L_0;
	}
}
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalBool::GetDatabase(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetGlobalBool_GetDatabase_m7A4F003B1FB61EE1A1F55892D157515D53EBC96C (SetGlobalBool_t99913E190711894AD9FC727FD32CAA89C6E64AD8* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GlobalDatabaseManager.Instance.Database.Bools;
		GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* L_0;
		L_0 = Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9(Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		NullCheck(L_0);
		DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* L_1;
		L_1 = GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DatabaseInstance_get_Bools_m8A1D85F1125F1CB9F078961C7436AF6F848FFD26_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalBool__ctor_m8834D45F7357E6DD6303DFD6D0811A087D51F623 (SetGlobalBool_t99913E190711894AD9FC727FD32CAA89C6E64AD8* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077(__this, SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Single> CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalFloat::get_Variable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueDefinitionBase_1_t596DC453332741575B7F68051A76AE65B5E42E8D* SetGlobalFloat_get_Variable_m1311E2EBE46D5DC0540B2D9557B24A4BA92C64CE (SetGlobalFloat_tCB739E4960C47984F6B3837B1F6839CFE0CE38C0* __this, const RuntimeMethod* method) 
{
	{
		// protected override KeyValueDefinitionBase<float> Variable => _variable;
		KeyValueDefinitionFloat_tB0177062C6945A3B87B6DF9C8F1F06951809B039* L_0 = __this->____variable_8;
		return L_0;
	}
}
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalFloat::GetDatabase(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetGlobalFloat_GetDatabase_m332F74E1BC0448A03F27D977A36E9F76D3BF6774 (SetGlobalFloat_tCB739E4960C47984F6B3837B1F6839CFE0CE38C0* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GlobalDatabaseManager.Instance.Database.Floats;
		GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* L_0;
		L_0 = Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9(Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		NullCheck(L_0);
		DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* L_1;
		L_1 = GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DatabaseInstance_get_Floats_m6DDC3CDE3220A9A1A536468276EE971D68347D18_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalFloat__ctor_mB6B20950F012662574FB9AC0A5DD3C080EBE58FB (SetGlobalFloat_tCB739E4960C47984F6B3837B1F6839CFE0CE38C0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97(__this, SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Int32> CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalInt::get_Variable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueDefinitionBase_1_t7389216B5FF39E1D9ADD22C9CC602C3F406DE214* SetGlobalInt_get_Variable_mB2B325A72EFD785634A5BF1E69513F6977A726C2 (SetGlobalInt_t76BE68A46BF446FCBEEA512C459BBA6EE24F4529* __this, const RuntimeMethod* method) 
{
	{
		// protected override KeyValueDefinitionBase<int> Variable => _variable;
		KeyValueDefinitionInt_tC8B6ADFA0355494C5F04EAE11CBF7468B7F79E26* L_0 = __this->____variable_8;
		return L_0;
	}
}
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalInt::GetDatabase(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetGlobalInt_GetDatabase_m861125D3850FFBECC494E6A82A796B2B1E976FC6 (SetGlobalInt_t76BE68A46BF446FCBEEA512C459BBA6EE24F4529* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GlobalDatabaseManager.Instance.Database.Ints;
		GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* L_0;
		L_0 = Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9(Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		NullCheck(L_0);
		DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* L_1;
		L_1 = GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DatabaseInstance_get_Ints_m0B3335AAAFC915933F16B3998A6C5E0DC1CE4358_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalInt__ctor_m0E7FD24DC02AAA64437BE89CAACF18E3721852FD (SetGlobalInt_t76BE68A46BF446FCBEEA512C459BBA6EE24F4529* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811(__this, SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.String> CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalString::get_Variable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueDefinitionBase_1_t50A71AA8D2B0A60CCE1E76DF9EA4AEF251C7796C* SetGlobalString_get_Variable_m30D7C636A82399C16A3609B634169074EDEABEEA (SetGlobalString_t702FC0F2AF11A6ACD5AEB6AA6AE9719E457CF7C7* __this, const RuntimeMethod* method) 
{
	{
		// protected override KeyValueDefinitionBase<string> Variable => _variable;
		KeyValueDefinitionString_t815BAF297BD0D21F2E4373026F9090B0F35FC7E7* L_0 = __this->____variable_8;
		return L_0;
	}
}
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalString::GetDatabase(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetGlobalString_GetDatabase_mF48EA997B836F03BE2DD823556AACD2D95EA88FA (SetGlobalString_t702FC0F2AF11A6ACD5AEB6AA6AE9719E457CF7C7* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GlobalDatabaseManager.Instance.Database.Strings;
		GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* L_0;
		L_0 = Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9(Singleton_1_get_Instance_mCA5B289BA1528ACB7DD679459E67C1661B1D00A9_RuntimeMethod_var);
		NullCheck(L_0);
		DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* L_1;
		L_1 = GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline(L_0, NULL);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = DatabaseInstance_get_Strings_mDA47F7E9CD6C9B73E3046EADFD35A9006BA7FAAB_inline(L_1, NULL);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetGlobalString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetGlobalString__ctor_mBAFBD68887E644CEE34D7DABDA0FC4D422FD9EBA (SetGlobalString_t702FC0F2AF11A6ACD5AEB6AA6AE9719E457CF7C7* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetLocalVariableBase_1__ctor_m7A88DE20F0D70FD848810851DBFAECDB102BDE18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SetLocalVariableBase_1__ctor_m7A88DE20F0D70FD848810851DBFAECDB102BDE18(__this, SetLocalVariableBase_1__ctor_m7A88DE20F0D70FD848810851DBFAECDB102BDE18_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Boolean> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalBool::get_Variable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueDefinitionBase_1_tAFEC137E4DDA2D46D5451CBBC2A13F7F36437E19* SetLocalBool_get_Variable_mB7A140B3B8D1BE180A918C83F7E5449B7117EA00 (SetLocalBool_t14F5BB17A453367B693DF33548EC93D0F1F015D0* __this, const RuntimeMethod* method) 
{
	{
		// protected override KeyValueDefinitionBase<bool> Variable => _variable;
		KeyValueDefinitionBool_tE0EF412D06FF4D3F027E6734F4304913A443133F* L_0 = __this->____variable_8;
		return L_0;
	}
}
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalBool::GetDatabase(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetLocalBool_GetDatabase_m12D4740885CA456419042C3C22D7A30CB1124232 (SetLocalBool_t14F5BB17A453367B693DF33548EC93D0F1F015D0* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dialogue.LocalDatabase.Bools;
		RuntimeObject* L_0 = ___dialogue0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.IDialogueController::get_LocalDatabase() */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Databases.IDatabaseInstance::get_Bools() */, IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLocalBool__ctor_m27A3948B75986E36BE9CA7867CD12DC62FCDB213 (SetLocalBool_t14F5BB17A453367B693DF33548EC93D0F1F015D0* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077(__this, SetLocalVariableBase_1__ctor_mE4588BD5C9FF5E9ECF37B95BB78B5F37872F8077_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Single> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalFloat::get_Variable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueDefinitionBase_1_t596DC453332741575B7F68051A76AE65B5E42E8D* SetLocalFloat_get_Variable_mF9242893635EFA4D4B6D66CED0A3B2ECE20CE528 (SetLocalFloat_tFF9ABA01780CC8851C2357F1158907D1E0A91E5C* __this, const RuntimeMethod* method) 
{
	{
		// protected override KeyValueDefinitionBase<float> Variable => _variable;
		KeyValueDefinitionFloat_tB0177062C6945A3B87B6DF9C8F1F06951809B039* L_0 = __this->____variable_8;
		return L_0;
	}
}
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalFloat::GetDatabase(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetLocalFloat_GetDatabase_m3A89E2FC85376A28C23D48E1293FCD501172B633 (SetLocalFloat_tFF9ABA01780CC8851C2357F1158907D1E0A91E5C* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dialogue.LocalDatabase.Floats;
		RuntimeObject* L_0 = ___dialogue0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.IDialogueController::get_LocalDatabase() */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Databases.IDatabaseInstance::get_Floats() */, IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLocalFloat__ctor_mEE2BDC3BA1612DE3F292E51B42CF82FFBF617CFF (SetLocalFloat_tFF9ABA01780CC8851C2357F1158907D1E0A91E5C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97(__this, SetLocalVariableBase_1__ctor_mF8E18D38F193E4E6098344BC0A1D27E98BA44D97_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.Int32> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalInt::get_Variable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueDefinitionBase_1_t7389216B5FF39E1D9ADD22C9CC602C3F406DE214* SetLocalInt_get_Variable_m23BE653632383F1EA8F3B7A468C112B1C1969B53 (SetLocalInt_t1B13BCB823DF2B7D26468C2A8202AB0C80AD85B6* __this, const RuntimeMethod* method) 
{
	{
		// protected override KeyValueDefinitionBase<int> Variable => _variable;
		KeyValueDefinitionInt_tC8B6ADFA0355494C5F04EAE11CBF7468B7F79E26* L_0 = __this->____variable_8;
		return L_0;
	}
}
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalInt::GetDatabase(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetLocalInt_GetDatabase_m789F021F8550F5695E6161477CA98B720EC9B0AB (SetLocalInt_t1B13BCB823DF2B7D26468C2A8202AB0C80AD85B6* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dialogue.LocalDatabase.Ints;
		RuntimeObject* L_0 = ___dialogue0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.IDialogueController::get_LocalDatabase() */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Databases.IDatabaseInstance::get_Ints() */, IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLocalInt__ctor_m517E4CD434B261D25D7E694E8FA032E6B39EB3F2 (SetLocalInt_t1B13BCB823DF2B7D26468C2A8202AB0C80AD85B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811(__this, SetLocalVariableBase_1__ctor_m2CD817DAB091A98BF0294FC697D59AE1E5401811_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.KeyValueDefinitionBase`1<System.String> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalString::get_Variable()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR KeyValueDefinitionBase_1_t50A71AA8D2B0A60CCE1E76DF9EA4AEF251C7796C* SetLocalString_get_Variable_m9704F84936EB0B9A9784ADE231AE47E3B27F6DB0 (SetLocalString_t89163CC446432BFEEF6CC6DA2C8CC787B53D7E61* __this, const RuntimeMethod* method) 
{
	{
		// protected override KeyValueDefinitionBase<string> Variable => _variable;
		KeyValueDefinitionString_t815BAF297BD0D21F2E4373026F9090B0F35FC7E7* L_0 = __this->____variable_8;
		return L_0;
	}
}
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalString::GetDatabase(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* SetLocalString_GetDatabase_m713089598F14E5E0FC7058C3512DB77848ED7A3A (SetLocalString_t89163CC446432BFEEF6CC6DA2C8CC787B53D7E61* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dialogue.LocalDatabase.Strings;
		RuntimeObject* L_0 = ___dialogue0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.IDialogueController::get_LocalDatabase() */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Databases.IDatabaseInstance::get_Strings() */, IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.SetLocalString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SetLocalString__ctor_m92980479753FD4B1CF20090E894B05281012D7AB (SetLocalString_t89163CC446432BFEEF6CC6DA2C8CC787B53D7E61* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SetLocalVariableBase_1__ctor_m7A88DE20F0D70FD848810851DBFAECDB102BDE18_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		SetLocalVariableBase_1__ctor_m7A88DE20F0D70FD848810851DBFAECDB102BDE18(__this, SetLocalVariableBase_1__ctor_m7A88DE20F0D70FD848810851DBFAECDB102BDE18_RuntimeMethod_var);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase::OnInit(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBoolBase_OnInit_mFF8182B9BCE113DE3B1453FE75285B053B9EE2E4 (IsBoolBase_tBE8F69B28E209056A1612F89C522936DB083A31A* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _condition = new ConditionBoolInternal(GetBoolInstance(dialogue));
		RuntimeObject* L_0 = ___dialogue0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(12 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase::GetBoolInstance(CleverCrow.Fluid.Dialogues.IDialogueController) */, __this, L_0);
		ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* L_2 = (ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181*)il2cpp_codegen_object_new(ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConditionBoolInternal__ctor_m7CF2DC2A06E70E8DE6E83A8EE87171728A7923CB(L_2, L_1, NULL);
		__this->____condition_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____condition_6), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase::OnGetIsValid(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsBoolBase_OnGetIsValid_mD44FF5C4DBACD45DF38D11659864B20E68F37899 (IsBoolBase_tBE8F69B28E209056A1612F89C522936DB083A31A* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (_comparison) {
		int32_t L_0 = __this->____comparison_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0040;
	}

IL_0010:
	{
		// return _condition.AreValuesEqual(_variable, _value);
		ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* L_3 = __this->____condition_6;
		KeyValueDefinitionBool_tE0EF412D06FF4D3F027E6734F4304913A443133F* L_4 = __this->____variable_7;
		bool L_5 = __this->____value_9;
		NullCheck(L_3);
		bool L_6;
		L_6 = ConditionBoolInternal_AreValuesEqual_m248DC2E446036A49D422DB87C1130A91AAA6AD19(L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0028:
	{
		// return _condition.AreValuesNotEqual(_variable, _value);
		ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* L_7 = __this->____condition_6;
		KeyValueDefinitionBool_tE0EF412D06FF4D3F027E6734F4304913A443133F* L_8 = __this->____variable_7;
		bool L_9 = __this->____value_9;
		NullCheck(L_7);
		bool L_10;
		L_10 = ConditionBoolInternal_AreValuesNotEqual_m269DAE996BC5105FE9D9C390883374CB59300A9F(L_7, L_8, L_9, NULL);
		return L_10;
	}

IL_0040:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IsBoolBase_OnGetIsValid_mD44FF5C4DBACD45DF38D11659864B20E68F37899_RuntimeMethod_var)));
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsBoolBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsBoolBase__ctor_m937D01567314818252863530041E5770E29AA858 (IsBoolBase_tBE8F69B28E209056A1612F89C522936DB083A31A* __this, const RuntimeMethod* method) 
{
	{
		// private bool _value = true;
		__this->____value_9 = (bool)1;
		ConditionDataBase__ctor_m641D8DE54F47967329843510A716C5FCE8AD6AED(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal::.ctor(CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionBoolInternal__ctor_m7CF2DC2A06E70E8DE6E83A8EE87171728A7923CB (ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* __this, RuntimeObject* ___database0, const RuntimeMethod* method) 
{
	{
		// public ConditionBoolInternal (IKeyValueData<bool> database) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _database = database;
		RuntimeObject* L_0 = ___database0;
		__this->____database_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____database_0), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal::AreValuesEqual(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionBoolInternal_AreValuesEqual_m248DC2E446036A49D422DB87C1130A91AAA6AD19 (ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* __this, RuntimeObject* ___definition0, bool ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueData_1_t3A45F4121547C948C3C5EF9E440C1337ED0554E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueDefinition_1_tB6F0933B8BAE7329E0999255BF50B74C30F1EBAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var kvp = _database.Get(definition.Key, definition.DefaultValue);
		RuntimeObject* L_0 = __this->____database_0;
		RuntimeObject* L_1 = ___definition0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Boolean>::get_Key() */, IKeyValueDefinition_1_tB6F0933B8BAE7329E0999255BF50B74C30F1EBAB_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___definition0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Boolean>::get_DefaultValue() */, IKeyValueDefinition_1_tB6F0933B8BAE7329E0999255BF50B74C30F1EBAB_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_0);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, String_t*, bool >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean>::Get(System.String,V) */, IKeyValueData_1_t3A45F4121547C948C3C5EF9E440C1337ED0554E8_il2cpp_TypeInfo_var, L_0, L_2, L_4);
		// return kvp == value;
		bool L_6 = ___value1;
		return (bool)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0);
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionBoolInternal::AreValuesNotEqual(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Boolean>,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionBoolInternal_AreValuesNotEqual_m269DAE996BC5105FE9D9C390883374CB59300A9F (ConditionBoolInternal_tD7CBB8C58096C1C646404EAF0A6BE9E9993DD181* __this, RuntimeObject* ___definition0, bool ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueData_1_t3A45F4121547C948C3C5EF9E440C1337ED0554E8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueDefinition_1_tB6F0933B8BAE7329E0999255BF50B74C30F1EBAB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var kvp = _database.Get(definition.Key, definition.DefaultValue);
		RuntimeObject* L_0 = __this->____database_0;
		RuntimeObject* L_1 = ___definition0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Boolean>::get_Key() */, IKeyValueDefinition_1_tB6F0933B8BAE7329E0999255BF50B74C30F1EBAB_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___definition0;
		NullCheck(L_3);
		bool L_4;
		L_4 = InterfaceFuncInvoker0< bool >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Boolean>::get_DefaultValue() */, IKeyValueDefinition_1_tB6F0933B8BAE7329E0999255BF50B74C30F1EBAB_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_0);
		bool L_5;
		L_5 = InterfaceFuncInvoker2< bool, String_t*, bool >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean>::Get(System.String,V) */, IKeyValueData_1_t3A45F4121547C948C3C5EF9E440C1337ED0554E8_il2cpp_TypeInfo_var, L_0, L_2, L_4);
		// return kvp != value;
		bool L_6 = ___value1;
		return (bool)((((int32_t)((((int32_t)L_5) == ((int32_t)L_6))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalBool::GetBoolInstance(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsLocalBool_GetBoolInstance_m17CFB19DDB4F2B5327A4BB2537CB3CC72133C317 (IsLocalBool_t7D39FF4DB31ED501B4885B97D56D0CCB81037EE9* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dialogue.LocalDatabase.Bools;
		RuntimeObject* L_0 = ___dialogue0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.IDialogueController::get_LocalDatabase() */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.Boolean> CleverCrow.Fluid.Databases.IDatabaseInstance::get_Bools() */, IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalBool::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsLocalBool__ctor_m6AB4D2902CB21355966E7DA26A263610FB4B0E29 (IsLocalBool_t7D39FF4DB31ED501B4885B97D56D0CCB81037EE9* __this, const RuntimeMethod* method) 
{
	{
		IsBoolBase__ctor_m937D01567314818252863530041E5770E29AA858(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase::OnInit(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsFloatBase_OnInit_m33EEAD9EB7D8ABB9F0E69E0299C076C9DEE77B7B (IsFloatBase_tBB384209F064C9839737C88F5052E068AA096500* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _condition = new ConditionFloatInternal(GetFloatInstance(dialogue));
		RuntimeObject* L_0 = ___dialogue0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(12 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase::GetFloatInstance(CleverCrow.Fluid.Dialogues.IDialogueController) */, __this, L_0);
		ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB* L_2 = (ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB*)il2cpp_codegen_object_new(ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConditionFloatInternal__ctor_m4EC8EF13A91E8FC044DEC0C124DCF5C9E2421D02(L_2, L_1, NULL);
		__this->____condition_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____condition_6), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase::OnGetIsValid(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsFloatBase_OnGetIsValid_m91EB38E19C3C33D602242415D19BEE31468D790C (IsFloatBase_tBB384209F064C9839737C88F5052E068AA096500* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	{
		// return _condition.IsComparisonValid(_variable, _value, _comparison);
		ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB* L_0 = __this->____condition_6;
		KeyValueDefinitionFloat_tB0177062C6945A3B87B6DF9C8F1F06951809B039* L_1 = __this->____variable_7;
		float L_2 = __this->____value_9;
		int32_t L_3 = __this->____comparison_8;
		NullCheck(L_0);
		bool L_4;
		L_4 = ConditionFloatInternal_IsComparisonValid_mE67FB753DC6BACD60B3058963A369A81C7F67829(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsFloatBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsFloatBase__ctor_m25132DD460AED12263A2F3746241EBCCE050EC47 (IsFloatBase_tBB384209F064C9839737C88F5052E068AA096500* __this, const RuntimeMethod* method) 
{
	{
		ConditionDataBase__ctor_m641D8DE54F47967329843510A716C5FCE8AD6AED(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionFloatInternal::.ctor(CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionFloatInternal__ctor_m4EC8EF13A91E8FC044DEC0C124DCF5C9E2421D02 (ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB* __this, RuntimeObject* ___database0, const RuntimeMethod* method) 
{
	{
		// public ConditionFloatInternal (IKeyValueData<float> database) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _database = database;
		RuntimeObject* L_0 = ___database0;
		__this->____database_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____database_0), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionFloatInternal::IsComparisonValid(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Single>,System.Single,CleverCrow.Fluid.Dialogues.Actions.Databases.NumberComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionFloatInternal_IsComparisonValid_mE67FB753DC6BACD60B3058963A369A81C7F67829 (ConditionFloatInternal_tD879B4FE4E742835365E188F9A02F316551DF9DB* __this, RuntimeObject* ___definition0, float ___value1, int32_t ___comparison2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueData_1_t8756DDDED77EF3AFD10F475CBA4EEA0A4F54991A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueDefinition_1_t9CDCD77D0EF910D0D9602DBA7A5DDA56D7EAFAE1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// var dbValue = _database.Get(definition.Key, definition.DefaultValue);
		RuntimeObject* L_0 = __this->____database_0;
		RuntimeObject* L_1 = ___definition0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Single>::get_Key() */, IKeyValueDefinition_1_t9CDCD77D0EF910D0D9602DBA7A5DDA56D7EAFAE1_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___definition0;
		NullCheck(L_3);
		float L_4;
		L_4 = InterfaceFuncInvoker0< float >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Single>::get_DefaultValue() */, IKeyValueDefinition_1_t9CDCD77D0EF910D0D9602DBA7A5DDA56D7EAFAE1_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_0);
		float L_5;
		L_5 = InterfaceFuncInvoker2< float, String_t*, float >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single>::Get(System.String,V) */, IKeyValueData_1_t8756DDDED77EF3AFD10F475CBA4EEA0A4F54991A_il2cpp_TypeInfo_var, L_0, L_2, L_4);
		V_0 = L_5;
		int32_t L_6 = ___comparison2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_0048;
			}
			case 2:
			{
				goto IL_0058;
			}
			case 3:
			{
				goto IL_005d;
			}
			case 4:
			{
				goto IL_0065;
			}
			case 5:
			{
				goto IL_006a;
			}
		}
	}
	{
		goto IL_0072;
	}

IL_0038:
	{
		// return Math.Abs(dbValue - value) < 0.01f;
		float L_7 = V_0;
		float L_8 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_9;
		L_9 = fabsf(((float)il2cpp_codegen_subtract(L_7, L_8)));
		return (bool)((((float)L_9) < ((float)(0.00999999978f)))? 1 : 0);
	}

IL_0048:
	{
		// return Math.Abs(dbValue - value) > 0.01f;
		float L_10 = V_0;
		float L_11 = ___value1;
		il2cpp_codegen_runtime_class_init_inline(Math_tEB65DE7CA8B083C412C969C92981C030865486CE_il2cpp_TypeInfo_var);
		float L_12;
		L_12 = fabsf(((float)il2cpp_codegen_subtract(L_10, L_11)));
		return (bool)((((float)L_12) > ((float)(0.00999999978f)))? 1 : 0);
	}

IL_0058:
	{
		// return value > dbValue;
		float L_13 = ___value1;
		float L_14 = V_0;
		return (bool)((((float)L_13) > ((float)L_14))? 1 : 0);
	}

IL_005d:
	{
		// return value >= dbValue;
		float L_15 = ___value1;
		float L_16 = V_0;
		return (bool)((((int32_t)((!(((float)L_15) >= ((float)L_16)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0065:
	{
		// return value < dbValue;
		float L_17 = ___value1;
		float L_18 = V_0;
		return (bool)((((float)L_17) < ((float)L_18))? 1 : 0);
	}

IL_006a:
	{
		// return value <= dbValue;
		float L_19 = ___value1;
		float L_20 = V_0;
		return (bool)((((int32_t)((!(((float)L_19) <= ((float)L_20)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0072:
	{
		// throw new ArgumentOutOfRangeException(nameof(comparison), comparison, null);
		int32_t L_21 = ___comparison2;
		int32_t L_22 = L_21;
		RuntimeObject* L_23 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NumberComparison_t2C16ED15863020FBD0517464AD1300F24BCA6169_il2cpp_TypeInfo_var)), &L_22);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_24 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_24);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_24, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220)), L_23, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConditionFloatInternal_IsComparisonValid_mE67FB753DC6BACD60B3058963A369A81C7F67829_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionLocalFloat::GetFloatInstance(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* ConditionLocalFloat_GetFloatInstance_mEBDB15D3C72C9982A5BA635B28A3EC65D4440070 (ConditionLocalFloat_t12443C1934380E89457873099C4C4E7713F5EFA8* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dialogue.LocalDatabase.Floats;
		RuntimeObject* L_0 = ___dialogue0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.IDialogueController::get_LocalDatabase() */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(3 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.Single> CleverCrow.Fluid.Databases.IDatabaseInstance::get_Floats() */, IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionLocalFloat::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionLocalFloat__ctor_mBA09A21AFD038627885667C56C736C37D30F9B63 (ConditionLocalFloat_t12443C1934380E89457873099C4C4E7713F5EFA8* __this, const RuntimeMethod* method) 
{
	{
		IsFloatBase__ctor_m25132DD460AED12263A2F3746241EBCCE050EC47(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase::OnInit(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsIntBase_OnInit_m9A7C0E8B23F5F49ED907DC107BF8E51B01A4A4DF (IsIntBase_t5EFBA1CE0BDE50A2A13596DA2386115B31509694* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _condition = new ConditionIntInternal(GetIntInstance(dialogue));
		RuntimeObject* L_0 = ___dialogue0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(12 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase::GetIntInstance(CleverCrow.Fluid.Dialogues.IDialogueController) */, __this, L_0);
		ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252* L_2 = (ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252*)il2cpp_codegen_object_new(ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConditionIntInternal__ctor_m84AC44151595B30FD66FB4603DD4B90681A3ED67(L_2, L_1, NULL);
		__this->____condition_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____condition_6), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase::OnGetIsValid(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsIntBase_OnGetIsValid_m842466F6B5142FB96F540445D4DD25EDF3BB0B43 (IsIntBase_t5EFBA1CE0BDE50A2A13596DA2386115B31509694* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	{
		// return _condition.IsComparisonValid(_variable, _value, _comparison);
		ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252* L_0 = __this->____condition_6;
		KeyValueDefinitionInt_tC8B6ADFA0355494C5F04EAE11CBF7468B7F79E26* L_1 = __this->____variable_7;
		int32_t L_2 = __this->____value_9;
		int32_t L_3 = __this->____comparison_8;
		NullCheck(L_0);
		bool L_4;
		L_4 = ConditionIntInternal_IsComparisonValid_m87162723D308144B0753B2554E737A5A7D63C72A(L_0, L_1, L_2, L_3, NULL);
		return L_4;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsIntBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsIntBase__ctor_mCBCB97A6C2448690E725C050D17E8BCB6BE63D7B (IsIntBase_t5EFBA1CE0BDE50A2A13596DA2386115B31509694* __this, const RuntimeMethod* method) 
{
	{
		ConditionDataBase__ctor_m641D8DE54F47967329843510A716C5FCE8AD6AED(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionIntInternal::.ctor(CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionIntInternal__ctor_m84AC44151595B30FD66FB4603DD4B90681A3ED67 (ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252* __this, RuntimeObject* ___database0, const RuntimeMethod* method) 
{
	{
		// public ConditionIntInternal (IKeyValueData<int> database) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _database = database;
		RuntimeObject* L_0 = ___database0;
		__this->____database_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____database_0), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionIntInternal::IsComparisonValid(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Int32>,System.Int32,CleverCrow.Fluid.Dialogues.Actions.Databases.NumberComparison)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionIntInternal_IsComparisonValid_m87162723D308144B0753B2554E737A5A7D63C72A (ConditionIntInternal_t792665EFD02FF34041211EE1B4A4C6866A70C252* __this, RuntimeObject* ___definition0, int32_t ___value1, int32_t ___comparison2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueData_1_t76FEEA4F8F2BF2FBEA5280BF7983EC34B4DEB8DE_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueDefinition_1_tFA5B2790F8FA4A5E4E1994D40942218CA67CD5DB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// var dbValue = _database.Get(definition.Key, definition.DefaultValue);
		RuntimeObject* L_0 = __this->____database_0;
		RuntimeObject* L_1 = ___definition0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Int32>::get_Key() */, IKeyValueDefinition_1_tFA5B2790F8FA4A5E4E1994D40942218CA67CD5DB_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___definition0;
		NullCheck(L_3);
		int32_t L_4;
		L_4 = InterfaceFuncInvoker0< int32_t >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.Int32>::get_DefaultValue() */, IKeyValueDefinition_1_tFA5B2790F8FA4A5E4E1994D40942218CA67CD5DB_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_0);
		int32_t L_5;
		L_5 = InterfaceFuncInvoker2< int32_t, String_t*, int32_t >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32>::Get(System.String,V) */, IKeyValueData_1_t76FEEA4F8F2BF2FBEA5280BF7983EC34B4DEB8DE_il2cpp_TypeInfo_var, L_0, L_2, L_4);
		V_0 = L_5;
		int32_t L_6 = ___comparison2;
		switch (L_6)
		{
			case 0:
			{
				goto IL_0038;
			}
			case 1:
			{
				goto IL_003d;
			}
			case 2:
			{
				goto IL_0045;
			}
			case 3:
			{
				goto IL_004a;
			}
			case 4:
			{
				goto IL_0052;
			}
			case 5:
			{
				goto IL_0057;
			}
		}
	}
	{
		goto IL_005f;
	}

IL_0038:
	{
		// return dbValue == value;
		int32_t L_7 = V_0;
		int32_t L_8 = ___value1;
		return (bool)((((int32_t)L_7) == ((int32_t)L_8))? 1 : 0);
	}

IL_003d:
	{
		// return dbValue != value;
		int32_t L_9 = V_0;
		int32_t L_10 = ___value1;
		return (bool)((((int32_t)((((int32_t)L_9) == ((int32_t)L_10))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0045:
	{
		// return value > dbValue;
		int32_t L_11 = ___value1;
		int32_t L_12 = V_0;
		return (bool)((((int32_t)L_11) > ((int32_t)L_12))? 1 : 0);
	}

IL_004a:
	{
		// return value >= dbValue;
		int32_t L_13 = ___value1;
		int32_t L_14 = V_0;
		return (bool)((((int32_t)((((int32_t)L_13) < ((int32_t)L_14))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_0052:
	{
		// return value < dbValue;
		int32_t L_15 = ___value1;
		int32_t L_16 = V_0;
		return (bool)((((int32_t)L_15) < ((int32_t)L_16))? 1 : 0);
	}

IL_0057:
	{
		// return value <= dbValue;
		int32_t L_17 = ___value1;
		int32_t L_18 = V_0;
		return (bool)((((int32_t)((((int32_t)L_17) > ((int32_t)L_18))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}

IL_005f:
	{
		// throw new ArgumentOutOfRangeException(nameof(comparison), comparison, null);
		int32_t L_19 = ___comparison2;
		int32_t L_20 = L_19;
		RuntimeObject* L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NumberComparison_t2C16ED15863020FBD0517464AD1300F24BCA6169_il2cpp_TypeInfo_var)), &L_20);
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_22 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_22);
		ArgumentOutOfRangeException__ctor_m60B543A63AC8692C28096003FBF2AD124B9D5B85(L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralEE79E0ED75285085B891F475FE68B37575CE1220)), L_21, (String_t*)NULL, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_22, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ConditionIntInternal_IsComparisonValid_m87162723D308144B0753B2554E737A5A7D63C72A_RuntimeMethod_var)));
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalInt::GetIntInstance(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsLocalInt_GetIntInstance_m76626ACBE9E5EEA7724BE623BFDDF082F86D5A0B (IsLocalInt_tCBBCDD652FDF51C66D440D44ECD4EE3D1C40AEE9* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dialogue.LocalDatabase.Ints;
		RuntimeObject* L_0 = ___dialogue0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.IDialogueController::get_LocalDatabase() */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(2 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.Int32> CleverCrow.Fluid.Databases.IDatabaseInstance::get_Ints() */, IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalInt::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsLocalInt__ctor_mF2A0C27B5ADE0F0996A24F6570B4CE48856AB878 (IsLocalInt_tCBBCDD652FDF51C66D440D44ECD4EE3D1C40AEE9* __this, const RuntimeMethod* method) 
{
	{
		IsIntBase__ctor_mCBCB97A6C2448690E725C050D17E8BCB6BE63D7B(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalString::GetStringInstance(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* IsLocalString_GetStringInstance_m0CB4646EAF66AF1451CFCB0E343584544696624B (IsLocalString_t9F5D718590E567849848AD3E16A963BB1B5AE38D* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return dialogue.LocalDatabase.Strings;
		RuntimeObject* L_0 = ___dialogue0;
		NullCheck(L_0);
		RuntimeObject* L_1;
		L_1 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* CleverCrow.Fluid.Databases.IDatabaseInstance CleverCrow.Fluid.Dialogues.IDialogueController::get_LocalDatabase() */, IDialogueController_t54DCD41CDBD9BE1F1B831304CB95F71273D339D9_il2cpp_TypeInfo_var, L_0);
		NullCheck(L_1);
		RuntimeObject* L_2;
		L_2 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Databases.IDatabaseInstance::get_Strings() */, IDatabaseInstance_t93D29F0B8F2B2CBC367BEED54064505A5A90187C_il2cpp_TypeInfo_var, L_1);
		return L_2;
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsLocalString::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsLocalString__ctor_m5A0BE1E849EF2F677EBA39562FECFDB9CF992C41 (IsLocalString_t9F5D718590E567849848AD3E16A963BB1B5AE38D* __this, const RuntimeMethod* method) 
{
	{
		IsStringBase__ctor_mF5D168147355878E79151A2ECD6E615228ABB0AC(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase::OnInit(CleverCrow.Fluid.Dialogues.IDialogueController)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsStringBase_OnInit_mCB3D5A7948DAAB7C42111B3C3992D2B8B02FDD43 (IsStringBase_tEAE9D3376325403A542F796C4B721BA46865FFDF* __this, RuntimeObject* ___dialogue0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// _condition = new ConditionStringInternal(GetStringInstance(dialogue));
		RuntimeObject* L_0 = ___dialogue0;
		RuntimeObject* L_1;
		L_1 = VirtualFuncInvoker1< RuntimeObject*, RuntimeObject* >::Invoke(12 /* CleverCrow.Fluid.Databases.IKeyValueData`1<System.String> CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase::GetStringInstance(CleverCrow.Fluid.Dialogues.IDialogueController) */, __this, L_0);
		ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* L_2 = (ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E*)il2cpp_codegen_object_new(ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		ConditionStringInternal__ctor_m24D99CB307D5FA257EAE2C883A32047E22B0948E(L_2, L_1, NULL);
		__this->____condition_6 = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____condition_6), (void*)L_2);
		// }
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase::OnGetIsValid(CleverCrow.Fluid.Dialogues.Nodes.INode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IsStringBase_OnGetIsValid_m37CA8CD43D6C35E8BAAD6632D478791B8CA18E63 (IsStringBase_tEAE9D3376325403A542F796C4B721BA46865FFDF* __this, RuntimeObject* ___parent0, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		// switch (_comparison) {
		int32_t L_0 = __this->____comparison_8;
		V_0 = L_0;
		int32_t L_1 = V_0;
		if (!L_1)
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)1)))
		{
			goto IL_0028;
		}
	}
	{
		goto IL_0040;
	}

IL_0010:
	{
		// return _condition.AreValuesEqual(_variable, _value);
		ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* L_3 = __this->____condition_6;
		KeyValueDefinitionString_t815BAF297BD0D21F2E4373026F9090B0F35FC7E7* L_4 = __this->____variable_7;
		String_t* L_5 = __this->____value_9;
		NullCheck(L_3);
		bool L_6;
		L_6 = ConditionStringInternal_AreValuesEqual_m6D6CD0683B639D22A2BE18AED2D8BFFD53D9467A(L_3, L_4, L_5, NULL);
		return L_6;
	}

IL_0028:
	{
		// return _condition.AreValuesNotEqual(_variable, _value);
		ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* L_7 = __this->____condition_6;
		KeyValueDefinitionString_t815BAF297BD0D21F2E4373026F9090B0F35FC7E7* L_8 = __this->____variable_7;
		String_t* L_9 = __this->____value_9;
		NullCheck(L_7);
		bool L_10;
		L_10 = ConditionStringInternal_AreValuesNotEqual_m8CD300E42BFD1FDD5D9BD42318C3C10751E0E962(L_7, L_8, L_9, NULL);
		return L_10;
	}

IL_0040:
	{
		// throw new ArgumentOutOfRangeException();
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_11 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		NullCheck(L_11);
		ArgumentOutOfRangeException__ctor_mB596C51BFA864B65C2CED275458FAE90F7CD29C9(L_11, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&IsStringBase_OnGetIsValid_m37CA8CD43D6C35E8BAAD6632D478791B8CA18E63_RuntimeMethod_var)));
	}
}
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.IsStringBase::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void IsStringBase__ctor_mF5D168147355878E79151A2ECD6E615228ABB0AC (IsStringBase_tEAE9D3376325403A542F796C4B721BA46865FFDF* __this, const RuntimeMethod* method) 
{
	{
		ConditionDataBase__ctor_m641D8DE54F47967329843510A716C5FCE8AD6AED(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal::.ctor(CleverCrow.Fluid.Databases.IKeyValueData`1<System.String>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConditionStringInternal__ctor_m24D99CB307D5FA257EAE2C883A32047E22B0948E (ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* __this, RuntimeObject* ___database0, const RuntimeMethod* method) 
{
	{
		// public ConditionStringInternal (IKeyValueData<string> database) {
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// _database = database;
		RuntimeObject* L_0 = ___database0;
		__this->____database_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->____database_0), (void*)L_0);
		// }
		return;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal::AreValuesEqual(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionStringInternal_AreValuesEqual_m6D6CD0683B639D22A2BE18AED2D8BFFD53D9467A (ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* __this, RuntimeObject* ___definition0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueData_1_t4044AF64FAB64B7FC17FB04843C5917722F67CF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueDefinition_1_t0B882A5BE7978D3343EAC252839775C3D2910877_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var kvp = _database.Get(definition.Key, definition.DefaultValue);
		RuntimeObject* L_0 = __this->____database_0;
		RuntimeObject* L_1 = ___definition0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.String>::get_Key() */, IKeyValueDefinition_1_t0B882A5BE7978D3343EAC252839775C3D2910877_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___definition0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.String>::get_DefaultValue() */, IKeyValueDefinition_1_t0B882A5BE7978D3343EAC252839775C3D2910877_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_0);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueData`1<System.String>::Get(System.String,V) */, IKeyValueData_1_t4044AF64FAB64B7FC17FB04843C5917722F67CF4_il2cpp_TypeInfo_var, L_0, L_2, L_4);
		// return kvp == value;
		String_t* L_6 = ___value1;
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_5, L_6, NULL);
		return L_7;
	}
}
// System.Boolean CleverCrow.Fluid.Dialogues.Actions.Databases.ConditionStringInternal::AreValuesNotEqual(CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.String>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ConditionStringInternal_AreValuesNotEqual_m8CD300E42BFD1FDD5D9BD42318C3C10751E0E962 (ConditionStringInternal_t99D83F2BA2542CB26192274107BE83686C13612E* __this, RuntimeObject* ___definition0, String_t* ___value1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueData_1_t4044AF64FAB64B7FC17FB04843C5917722F67CF4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IKeyValueDefinition_1_t0B882A5BE7978D3343EAC252839775C3D2910877_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var kvp = _database.Get(definition.Key, definition.DefaultValue);
		RuntimeObject* L_0 = __this->____database_0;
		RuntimeObject* L_1 = ___definition0;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = InterfaceFuncInvoker0< String_t* >::Invoke(0 /* System.String CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.String>::get_Key() */, IKeyValueDefinition_1_t0B882A5BE7978D3343EAC252839775C3D2910877_il2cpp_TypeInfo_var, L_1);
		RuntimeObject* L_3 = ___definition0;
		NullCheck(L_3);
		String_t* L_4;
		L_4 = InterfaceFuncInvoker0< String_t* >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueDefinition`1<System.String>::get_DefaultValue() */, IKeyValueDefinition_1_t0B882A5BE7978D3343EAC252839775C3D2910877_il2cpp_TypeInfo_var, L_3);
		NullCheck(L_0);
		String_t* L_5;
		L_5 = InterfaceFuncInvoker2< String_t*, String_t*, String_t* >::Invoke(1 /* V CleverCrow.Fluid.Databases.IKeyValueData`1<System.String>::Get(System.String,V) */, IKeyValueData_1_t4044AF64FAB64B7FC17FB04843C5917722F67CF4_il2cpp_TypeInfo_var, L_0, L_2, L_4);
		// return kvp != value;
		String_t* L_6 = ___value1;
		bool L_7;
		L_7 = String_op_Inequality_m8C940F3CFC42866709D7CA931B3D77B4BE94BCB6(L_5, L_6, NULL);
		return L_7;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstanceExtended_get_GameObjects_mA551A925451902AC3A4AD3D3A5A3591AD02FC60C_inline (DatabaseInstanceExtended_t15C63825E419153A8192C7569066976C0199D966* __this, const RuntimeMethod* method) 
{
	{
		// public IKeyValueData<GameObject> GameObjects { get; } = new KeyValueDataGameObject();
		RuntimeObject* L_0 = __this->___U3CGameObjectsU3Ek__BackingField_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_LocalDatabase_m9E9955CF8A69076CEBDF799DBAAEE5A6450BF624_inline (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	{
		// public IDatabaseInstance LocalDatabase { get; }
		RuntimeObject* L_0 = __this->___U3CLocalDatabaseU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_LocalDatabaseExtended_mD7666060C9DA165CC252E8BFB007B4F7FBF53139_inline (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	{
		// public IDatabaseInstanceExtended LocalDatabaseExtended { get; }
		RuntimeObject* L_0 = __this->___U3CLocalDatabaseExtendedU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialogueController_get_Events_mF666051CE457B51A33CB4FFD15264FC9552D4945_inline (DialogueController_tC82161EE2E90E7D85CCFAADDAAA6D2D37D9B0BB9* __this, const RuntimeMethod* method) 
{
	{
		// public IDialogueEvents Events { get; } = new DialogueEvents();
		RuntimeObject* L_0 = __this->___U3CEventsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DialoguePlayback_set_Pointer_mA6FB6EF31F82FECCDC827B17AEBD6948DB84C851_inline (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, RuntimeObject* ___value0, const RuntimeMethod* method) 
{
	{
		// public INode Pointer { get; private set; }
		RuntimeObject* L_0 = ___value0;
		__this->___U3CPointerU3Ek__BackingField_5 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CPointerU3Ek__BackingField_5), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialoguePlayback_get_Events_mD9F0C652C1079C521C525C7A24C20B8588F5D199_inline (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	{
		// public IDialogueEvents Events { get;}
		RuntimeObject* L_0 = __this->___U3CEventsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DialoguePlayback_get_Pointer_mCBC88A0BCE2254894E64F40A4608F934D7227824_inline (DialoguePlayback_tA1DA2EFAD874618734F40E697990C4316AAB8CAF* __this, const RuntimeMethod* method) 
{
	{
		// public INode Pointer { get; private set; }
		RuntimeObject* L_0 = __this->___U3CPointerU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR String_t* NodeDataBase_get_UniqueId_m1423307C983CE02A7610AB8AF9402176A552EBC4_inline (NodeDataBase_t35103C88F574689CCA17051FCF214A8F72859538* __this, const RuntimeMethod* method) 
{
	{
		// public string UniqueId => _uniqueId;
		String_t* L_0 = __this->____uniqueId_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* GlobalDatabaseManager_get_Database_m74F692EA5FD486DCECBDC03E89316FB24FA2F12D_inline (GlobalDatabaseManager_t5E8495711F4BD1FBA41F728DA358C1DC6DB777DD* __this, const RuntimeMethod* method) 
{
	{
		// public DatabaseInstance Database { get; } = new DatabaseInstance();
		DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* L_0 = __this->___U3CDatabaseU3Ek__BackingField_5;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstance_get_Bools_m8A1D85F1125F1CB9F078961C7436AF6F848FFD26_inline (DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* __this, const RuntimeMethod* method) 
{
	{
		// public IKeyValueData<bool> Bools { get; } = new KeyValueDataBool();
		RuntimeObject* L_0 = __this->___U3CBoolsU3Ek__BackingField_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstance_get_Floats_m6DDC3CDE3220A9A1A536468276EE971D68347D18_inline (DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* __this, const RuntimeMethod* method) 
{
	{
		// public IKeyValueData<float> Floats { get; } = new KeyValueDataFloat();
		RuntimeObject* L_0 = __this->___U3CFloatsU3Ek__BackingField_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstance_get_Ints_m0B3335AAAFC915933F16B3998A6C5E0DC1CE4358_inline (DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* __this, const RuntimeMethod* method) 
{
	{
		// public IKeyValueData<int> Ints { get; } = new KeyValueDataInt();
		RuntimeObject* L_0 = __this->___U3CIntsU3Ek__BackingField_2;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* DatabaseInstance_get_Strings_mDA47F7E9CD6C9B73E3046EADFD35A9006BA7FAAB_inline (DatabaseInstance_t560219B91DD978847FAF0664B44E40373F33C0A6* __this, const RuntimeMethod* method) 
{
	{
		// public IKeyValueData<string> Strings { get; } = new KeyValueDataString();
		RuntimeObject* L_0 = __this->___U3CStringsU3Ek__BackingField_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Stack_1_get_Count_mD08AE71D49787D30DDD9D484BCD323D646744D2E_gshared_inline (Stack_1_tAD790A47551563636908E21E4F08C54C0C323EB5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_1;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Queue_1_get_Count_m1768ADA9855B7CDA14C9C42E098A287F1A39C3A2_gshared_inline (Queue_1_tE9EF546915795972C3BFD68FBB8FA859D3BAF3B5* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_3;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m4407E4C389F22B8CEC282C15D56516658746C383_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = (int32_t)__this->____size_2;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void List_1_Clear_m16C1F2C61FED5955F10EB36BC1CB2DF34B128994_gshared_inline (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		int32_t L_0 = (int32_t)__this->____version_3;
		__this->____version_3 = ((int32_t)il2cpp_codegen_add(L_0, 1));
		if (!true)
		{
			goto IL_0035;
		}
	}
	{
		int32_t L_1 = (int32_t)__this->____size_2;
		V_0 = L_1;
		__this->____size_2 = 0;
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_3 = (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918*)__this->____items_1;
		int32_t L_4 = V_0;
		Array_Clear_m50BAA3751899858B097D3FF2ED31F284703FE5CB((RuntimeArray*)L_3, 0, L_4, NULL);
		return;
	}

IL_0035:
	{
		__this->____size_2 = 0;
	}

IL_003c:
	{
		return;
	}
}
