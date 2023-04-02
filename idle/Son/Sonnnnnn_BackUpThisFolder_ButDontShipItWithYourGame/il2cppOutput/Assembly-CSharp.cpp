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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB;
// System.Collections.Generic.IEnumerable`1<IDataPersistence>
struct IEnumerable_1_tF4497A30C663E90B7B81303B49EB3BD9015CF0FA;
// System.Collections.Generic.IEnumerable`1<System.Object>
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35;
// System.Collections.Generic.List`1<IDataPersistence>
struct List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A;
// System.Collections.Generic.List`1<System.Object>
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4;
// System.Byte[]
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
// System.Char[]
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
// IDataPersistence[]
struct IDataPersistenceU5BU5D_t8ECE7885BE58F6FD3C22377237134D19B4EDE131;
// System.IntPtr[]
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
// System.Object[]
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
// System.String[]
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074;
// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883;
// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C;
// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299;
// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA;
// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098;
// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184;
// UnityEngine.Canvas
struct Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860;
// CardFeatures
struct CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146;
// CardSelection
struct CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719;
// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3;
// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B;
// DataPersistenceManager
struct DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF;
// DayControl
struct DayControl_tC5CBA834D94CF7A4F63C9D9D1E542994A3E0BD6A;
// System.Text.Decoder
struct Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC;
// DefencePowerController
struct DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F;
// DialogueSystem
struct DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4;
// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2;
// System.Text.Encoder
struct Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA;
// System.Text.Encoding
struct Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095;
// FileDataHandler
struct FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA;
// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8;
// UnityEngine.UI.FontData
struct FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224;
// GainCoinButton
struct GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B;
// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6;
// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F;
// GameOverControl
struct GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284;
// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E;
// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931;
// HealthAndPriates
struct HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A;
// IDataPersistence
struct IDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89;
// System.Collections.IDictionary
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
// System.Collections.IEnumerable
struct IEnumerable_t6331596D5DD37C462B1B8D49CF6B319B00AB7131;
// System.Collections.IEnumerator
struct IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA;
// System.IFormatProvider
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3;
// LightManager
struct LightManager_t367FF6C506CFAC316A1E1C89106DF4075BF493FD;
// UnityEngine.Material
struct Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3;
// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05;
// UnityEngine.Mesh
struct Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71;
// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
// UnityEngine.Object
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670;
// UnityEngine.RectTransform
struct RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5;
// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27;
// Microsoft.Win32.SafeHandles.SafeFileHandle
struct SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
// UnityEngine.ScriptableObject
struct ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A;
// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712;
// SellFish
struct SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC;
// System.Threading.SemaphoreSlim
struct SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2;
// SoldierCountScript
struct SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4;
// UnityEngine.Sprite
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE;
// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B;
// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4;
// System.String
struct String_t;
// System.Threading.Tasks.Task
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62;
// UnityEngine.TextGenerator
struct TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC;
// UnityEngine.Texture2D
struct Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4;
// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
// UnityEngine.Events.UnityAction
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE;
// System.Void
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3;
// WaterReflection
struct WaterReflection_t59B75D355AF4B5367D9273832B3581710859F585;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD;
// DialogueSystem/<Baslat>d__11
struct U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63;
// DialogueSystem/<TypeLine>d__10
struct U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37;
// GainCoinButton/<T?klad?>d__84
struct U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94;
// GameOverControl/<Kontrolcu>d__8
struct U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F;
// HealthAndPriates/<PlayGame>d__37
struct U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998;
// HealthAndPriates/<ShipDeactive>d__38
struct U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30;
// HealthAndPriates/<YouLose>d__40
struct U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C;
// HealthAndPriates/<YouWon>d__39
struct U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8;
// Menu/<Kontrolcu>d__1
struct U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B;
// System.IO.Stream/ReadWriteTask
struct ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05;

IL2CPP_EXTERN_C RuntimeClass* BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD;
IL2CPP_EXTERN_C String_t* _stringLiteral01E48D32971C1644EE4C0320333569577AED8A68;
IL2CPP_EXTERN_C String_t* _stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32;
IL2CPP_EXTERN_C String_t* _stringLiteral07BE2B2BD6B746CD6CEC8327175437C8767350C5;
IL2CPP_EXTERN_C String_t* _stringLiteral07C47C0C8DC7937FACC3099DF5546BF410C63C0F;
IL2CPP_EXTERN_C String_t* _stringLiteral0AED34DD945A392A12CB48E7FC22B878E8E9BF3E;
IL2CPP_EXTERN_C String_t* _stringLiteral0D25CB8D2F8CAEFE11488EDF6311E30E81D26FF8;
IL2CPP_EXTERN_C String_t* _stringLiteral0F048A8315980BED9EAF0C987BBA8F8F4C759226;
IL2CPP_EXTERN_C String_t* _stringLiteral11446D21B246375E2011CBE2EC396282449D0E56;
IL2CPP_EXTERN_C String_t* _stringLiteral138B68D6085A87C16C353D2222C1A59E5A6D000F;
IL2CPP_EXTERN_C String_t* _stringLiteral186728018354DD5A345662365525D1905258CFCE;
IL2CPP_EXTERN_C String_t* _stringLiteral1B3C207C7A232C37E7DA43EF9D0C8D4305B6597C;
IL2CPP_EXTERN_C String_t* _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6;
IL2CPP_EXTERN_C String_t* _stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952;
IL2CPP_EXTERN_C String_t* _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748;
IL2CPP_EXTERN_C String_t* _stringLiteral257442077ACCA74CB9A232A2DC6583FE8E58D966;
IL2CPP_EXTERN_C String_t* _stringLiteral26A3C385943E48920986444FE6118C9DC4B2722D;
IL2CPP_EXTERN_C String_t* _stringLiteral2B96504CE4024C16CE38669FF5EE2CB63B9F9C29;
IL2CPP_EXTERN_C String_t* _stringLiteral2C795B3FA1904F53C2E89455297E2A2C3AC6227C;
IL2CPP_EXTERN_C String_t* _stringLiteral2E92815DF21333FAC483F74B216DF1F8A8785E0E;
IL2CPP_EXTERN_C String_t* _stringLiteral308F3A0E616FF8632568F78BAF5585817EA38E1C;
IL2CPP_EXTERN_C String_t* _stringLiteral34156F6E9E87433B9E12177E1E1D0F8A17FA5D55;
IL2CPP_EXTERN_C String_t* _stringLiteral341D85D21922A51C38B090D222CEDE8821841F87;
IL2CPP_EXTERN_C String_t* _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53;
IL2CPP_EXTERN_C String_t* _stringLiteral3718D6489ED49B10FF69B79FE1A5A7EDC938CF45;
IL2CPP_EXTERN_C String_t* _stringLiteral398AAA98448D093913570A3C2B4A467766B96D60;
IL2CPP_EXTERN_C String_t* _stringLiteral3B87D7A40DB847BB88DFB34070F92BE4C1E9C1E8;
IL2CPP_EXTERN_C String_t* _stringLiteral3E86ED4DE2642B1FBD44257F71A36B3F3C79C655;
IL2CPP_EXTERN_C String_t* _stringLiteral40C694996C2B9EF3ECBE524D244A1B55E269281D;
IL2CPP_EXTERN_C String_t* _stringLiteral4151850CF24A4B335847DE5CFD7E6EC676A3BEF6;
IL2CPP_EXTERN_C String_t* _stringLiteral465E661F5FB2116790DC75573E9C2ABA5E6BC469;
IL2CPP_EXTERN_C String_t* _stringLiteral4AD0E436F2F7461E583E564EB954EA67853D3BE5;
IL2CPP_EXTERN_C String_t* _stringLiteral4D0A46EE4EC13D0890B71027FEED99D64D4DDCA0;
IL2CPP_EXTERN_C String_t* _stringLiteral584AF4E17BB6075D3F2B29A576E6B2C05D9B34A1;
IL2CPP_EXTERN_C String_t* _stringLiteral5C2EC7F769FE3998C85537FDE8D8692727C1C204;
IL2CPP_EXTERN_C String_t* _stringLiteral66272156CF3BFCEE84E7E8290CCF99881A15FD70;
IL2CPP_EXTERN_C String_t* _stringLiteral69863ACCC9EF1B1EE508A3D447ECFDED57A76B29;
IL2CPP_EXTERN_C String_t* _stringLiteral6B5F0601E9AB41687D6C065F9FAEF95C9B0FFA89;
IL2CPP_EXTERN_C String_t* _stringLiteral6C2CB372B682621CEBB58B13EF31D980CFA9FC06;
IL2CPP_EXTERN_C String_t* _stringLiteral6C3F2C1D2CB5C94BB9927540E0404AD2B8211E0E;
IL2CPP_EXTERN_C String_t* _stringLiteral6EEFAE4539DEC028819DA107A96DC7E2E691B25E;
IL2CPP_EXTERN_C String_t* _stringLiteral75AC554233DDA7373DBAA274552CE21DA0E6A24A;
IL2CPP_EXTERN_C String_t* _stringLiteral795B9565959A0BD64306566CF81EB335D4FDA5E0;
IL2CPP_EXTERN_C String_t* _stringLiteral7BB53D65B097ACF1F141DEAE0184DC1BCFB14B07;
IL2CPP_EXTERN_C String_t* _stringLiteral7D165159EFA7D4CFB870E825433946DD084DBD3D;
IL2CPP_EXTERN_C String_t* _stringLiteral7D7098FC4E6D58AB01CD695E464A414517533057;
IL2CPP_EXTERN_C String_t* _stringLiteral85E46BCFC965D1682715AC3C320D9EABEB5D36EE;
IL2CPP_EXTERN_C String_t* _stringLiteral874C0887AE1E2EDC78A6DDABDBD3B085F7122347;
IL2CPP_EXTERN_C String_t* _stringLiteral88BF8F00C4C4258B38BBBB20459911FA0DB1EB3F;
IL2CPP_EXTERN_C String_t* _stringLiteral8D69F9CA141470C6D56D54B83BD0CF454FC282EC;
IL2CPP_EXTERN_C String_t* _stringLiteral90F41662952421298541612D1187C6E2E4D8E2A1;
IL2CPP_EXTERN_C String_t* _stringLiteral952EAC7581773B4480FA993071BDBB1F2EBE35C7;
IL2CPP_EXTERN_C String_t* _stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38;
IL2CPP_EXTERN_C String_t* _stringLiteral9817253071976111AD0DB47307FE33DCB0D06673;
IL2CPP_EXTERN_C String_t* _stringLiteral9B60B7A207B7FFAB38B7C829859104FBA1704CF8;
IL2CPP_EXTERN_C String_t* _stringLiteral9D1A4868558ED88F48E0775BC27963FAD76A5571;
IL2CPP_EXTERN_C String_t* _stringLiteral9FCB35833C6B696091860ED1B32C668D102EF68A;
IL2CPP_EXTERN_C String_t* _stringLiteralA20C5A8CBDAF0C55245C3AD693FB7F7788D14467;
IL2CPP_EXTERN_C String_t* _stringLiteralA24119ECFEBA1705D75B3E9D6AC2E82830D284F1;
IL2CPP_EXTERN_C String_t* _stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784;
IL2CPP_EXTERN_C String_t* _stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489;
IL2CPP_EXTERN_C String_t* _stringLiteralB1BA34DE272B7AF125B4C0066DBC51A8F71827B4;
IL2CPP_EXTERN_C String_t* _stringLiteralBCCEDD21168E5949BD5138D59300E1B4586BC93B;
IL2CPP_EXTERN_C String_t* _stringLiteralBDE6BA0A06549114755EAECE20777DD856CA5159;
IL2CPP_EXTERN_C String_t* _stringLiteralC04C8BFEA6179139FEEDBBDD9FCD52369A5D8D94;
IL2CPP_EXTERN_C String_t* _stringLiteralC18968334E970E446D0B007C76ADD87DE6E23DCF;
IL2CPP_EXTERN_C String_t* _stringLiteralC2DBA9C91A84ABC13FBBD9DC93C9351C3CD2A6E9;
IL2CPP_EXTERN_C String_t* _stringLiteralC3CE1BE96D067D964C747979BBEBB463CB00F277;
IL2CPP_EXTERN_C String_t* _stringLiteralC3DE45465A4A094D97D63A05562E6143FDDC3007;
IL2CPP_EXTERN_C String_t* _stringLiteralC4D6860B76928498777DED120D3B401E9055DA61;
IL2CPP_EXTERN_C String_t* _stringLiteralC64E44CA2703D6DC689665E5B88EB40090C1993F;
IL2CPP_EXTERN_C String_t* _stringLiteralC7955644C68F8084EBEA62D51AE7E035731A4D15;
IL2CPP_EXTERN_C String_t* _stringLiteralC853C031A4A16B9A446FDB9F057BFD8076B3D178;
IL2CPP_EXTERN_C String_t* _stringLiteralD2F9A3AE9A8A1F0F326684FC9724522057C2F033;
IL2CPP_EXTERN_C String_t* _stringLiteralD4C97611203DCB540FF4A23F668FE0B93363C5DA;
IL2CPP_EXTERN_C String_t* _stringLiteralD5B76B32B10EEBC30EABAD4AE2A217D2AB3FE38D;
IL2CPP_EXTERN_C String_t* _stringLiteralD756EFB72D56C9BF3C2CCF63FF70E909A2CB190B;
IL2CPP_EXTERN_C String_t* _stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445;
IL2CPP_EXTERN_C String_t* _stringLiteralD7788843796112A3333A86F2131B749DCE62B516;
IL2CPP_EXTERN_C String_t* _stringLiteralD9E43957F6639185347E14CAB1D9707C63700D7F;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDC662FBD7E982D65B32608D42258F57D721859FC;
IL2CPP_EXTERN_C String_t* _stringLiteralDC69A54E09A4FE5DA2BAE87C3E12BB6F80B66A48;
IL2CPP_EXTERN_C String_t* _stringLiteralE0BBEBD2679208D9F3E6BD95B7D3CBF3B3FD95A5;
IL2CPP_EXTERN_C String_t* _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50;
IL2CPP_EXTERN_C String_t* _stringLiteralE84A3B2CB16AF20654B162562A7360C9FC00FD54;
IL2CPP_EXTERN_C String_t* _stringLiteralE9E5DFB5664F0F3C509A69856C826EF82286CF52;
IL2CPP_EXTERN_C String_t* _stringLiteralECF2B469194AC77EE59EC6FB9E1985CC4FAEAF5A;
IL2CPP_EXTERN_C String_t* _stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF;
IL2CPP_EXTERN_C String_t* _stringLiteralF0742244FAC9C02D42868C59B85E6B45583E9C15;
IL2CPP_EXTERN_C String_t* _stringLiteralF41B74BBF02266779106404E3623B1EB9D9EC8D7;
IL2CPP_EXTERN_C String_t* _stringLiteralF541D8CA2CC05EED95A2EB4FED6CB11C221C4FD7;
IL2CPP_EXTERN_C String_t* _stringLiteralF6BFA9B4FFC539A34A6010906BAC693B196FFA74;
IL2CPP_EXTERN_C String_t* _stringLiteralF84463C76213BF086989F6631181F360AB1A29C6;
IL2CPP_EXTERN_C String_t* _stringLiteralFA39A510B6DF0483F4869A7CAA6AE1F99AC3E5C7;
IL2CPP_EXTERN_C String_t* _stringLiteralFACF5B1DF77735D1EC124DA38CCA82749E6817D2;
IL2CPP_EXTERN_C String_t* _stringLiteralFC213E54880668DB4321F1F93763970724520E14;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerable_OfType_TisIDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_mD7616A582371E0CF308A71A5903E14C713EAA796_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m4DC98E8C9F05691C863B801B71E8CCECB824000B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m190F8C52A51CF3A72B665BDA72B30B85F5C48072_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5B7244D4BA2D27DAD10BE8B41B8DD253534F9C9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m2C0417F19EB7C614C74BD93FAAF92AF134FA580E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m819694E5909017B7D2BD82BA53FE267138B1A8EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mA7F8EFA476BAB46167B93E9984C5D02615CA5357_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CBaslatU3Ed__11_System_Collections_IEnumerator_Reset_mF7D3F7EE8EA81B2407206AC7B537CED881EAF985_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CKontrolcuU3Ed__1_System_Collections_IEnumerator_Reset_mE1FB8582E8CE5ECDCAA2F18A6C3C7AEE4F8819CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CKontrolcuU3Ed__8_System_Collections_IEnumerator_Reset_m1E8E57B9CB9AEF6C63D42A0CAA203098B62A1678_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CPlayGameU3Ed__37_System_Collections_IEnumerator_Reset_m2AC5C4FE3FA008E8B81B4EEB58EE59A09FF699C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CShipDeactiveU3Ed__38_System_Collections_IEnumerator_Reset_m4678794DFAC2D3A0B2A1CFA1308A5F8191C33614_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTU131kladU131U3Ed__84_System_Collections_IEnumerator_Reset_mD431C9C4ED488B82021A4F3886AE99112F2D02C8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CTypeLineU3Ed__10_System_Collections_IEnumerator_Reset_mC1061742D52788B3049DA899A4B797A128DAAD4D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CYouLoseU3Ed__40_System_Collections_IEnumerator_Reset_m028737B1CCC66A5BCDE4771A40ADE583E608DBCA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CYouWonU3Ed__39_System_Collections_IEnumerator_Reset_m0A8F932EFD7DECAAE6ABE297B40A2FBD3D650C4B_RuntimeMethod_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990;
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tBB65183F1134474D09FF49B95625D25472B9BA8B 
{
};

// System.Collections.Generic.List`1<IDataPersistence>
struct List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A  : public RuntimeObject
{
	// T[] System.Collections.Generic.List`1::_items
	IDataPersistenceU5BU5D_t8ECE7885BE58F6FD3C22377237134D19B4EDE131* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject* ____syncRoot_4;
};

struct List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A_StaticFields
{
	// T[] System.Collections.Generic.List`1::s_emptyArray
	IDataPersistenceU5BU5D_t8ECE7885BE58F6FD3C22377237134D19B4EDE131* ___s_emptyArray_5;
};
struct Il2CppArrayBounds;

// FileDataHandler
struct FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA  : public RuntimeObject
{
	// System.String FileDataHandler::dataDirPath
	String_t* ___dataDirPath_0;
	// System.String FileDataHandler::dataFileName
	String_t* ___dataFileName_1;
	// System.Boolean FileDataHandler::useEncryption
	bool ___useEncryption_2;
	// System.String FileDataHandler::encryptionCodeWord
	String_t* ___encryptionCodeWord_3;
};

// System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE  : public RuntimeObject
{
	// System.Object System.MarshalByRefObject::_identity
	RuntimeObject* ____identity_0;
};
// Native definition for P/Invoke marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_pinvoke
{
	Il2CppIUnknown* ____identity_0;
};
// Native definition for COM marshalling of System.MarshalByRefObject
struct MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE_marshaled_com
{
	Il2CppIUnknown* ____identity_0;
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

// UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D  : public RuntimeObject
{
};
// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
};

// DialogueSystem/<Baslat>d__11
struct U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63  : public RuntimeObject
{
	// System.Int32 DialogueSystem/<Baslat>d__11::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogueSystem/<Baslat>d__11::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DialogueSystem DialogueSystem/<Baslat>d__11::<>4__this
	DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* ___U3CU3E4__this_2;
};

// DialogueSystem/<TypeLine>d__10
struct U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37  : public RuntimeObject
{
	// System.Int32 DialogueSystem/<TypeLine>d__10::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object DialogueSystem/<TypeLine>d__10::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// DialogueSystem DialogueSystem/<TypeLine>d__10::<>4__this
	DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* ___U3CU3E4__this_2;
	// System.Char[] DialogueSystem/<TypeLine>d__10::<>7__wrap1
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___U3CU3E7__wrap1_3;
	// System.Int32 DialogueSystem/<TypeLine>d__10::<>7__wrap2
	int32_t ___U3CU3E7__wrap2_4;
};

// GainCoinButton/<T?klad?>d__84
struct U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94  : public RuntimeObject
{
	// System.Int32 GainCoinButton/<T?klad?>d__84::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GainCoinButton/<T?klad?>d__84::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GainCoinButton GainCoinButton/<T?klad?>d__84::<>4__this
	GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* ___U3CU3E4__this_2;
};

// GameOverControl/<Kontrolcu>d__8
struct U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F  : public RuntimeObject
{
	// System.Int32 GameOverControl/<Kontrolcu>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object GameOverControl/<Kontrolcu>d__8::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// GameOverControl GameOverControl/<Kontrolcu>d__8::<>4__this
	GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* ___U3CU3E4__this_2;
};

// HealthAndPriates/<PlayGame>d__37
struct U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998  : public RuntimeObject
{
	// System.Int32 HealthAndPriates/<PlayGame>d__37::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HealthAndPriates/<PlayGame>d__37::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HealthAndPriates HealthAndPriates/<PlayGame>d__37::<>4__this
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___U3CU3E4__this_2;
};

// HealthAndPriates/<ShipDeactive>d__38
struct U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30  : public RuntimeObject
{
	// System.Int32 HealthAndPriates/<ShipDeactive>d__38::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HealthAndPriates/<ShipDeactive>d__38::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HealthAndPriates HealthAndPriates/<ShipDeactive>d__38::<>4__this
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___U3CU3E4__this_2;
};

// HealthAndPriates/<YouLose>d__40
struct U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C  : public RuntimeObject
{
	// System.Int32 HealthAndPriates/<YouLose>d__40::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HealthAndPriates/<YouLose>d__40::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HealthAndPriates HealthAndPriates/<YouLose>d__40::<>4__this
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___U3CU3E4__this_2;
};

// HealthAndPriates/<YouWon>d__39
struct U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9  : public RuntimeObject
{
	// System.Int32 HealthAndPriates/<YouWon>d__39::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object HealthAndPriates/<YouWon>d__39::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
	// HealthAndPriates HealthAndPriates/<YouWon>d__39::<>4__this
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___U3CU3E4__this_2;
};

// Menu/<Kontrolcu>d__1
struct U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B  : public RuntimeObject
{
	// System.Int32 Menu/<Kontrolcu>d__1::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Menu/<Kontrolcu>d__1::<>2__current
	RuntimeObject* ___U3CU3E2__current_1;
};

// System.Collections.Generic.List`1/Enumerator<IDataPersistence>
struct Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043 
{
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::_list
	List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* ____list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_index
	int32_t ____index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::_version
	int32_t ____version_2;
	// T System.Collections.Generic.List`1/Enumerator::_current
	RuntimeObject* ____current_3;
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

// BreakInfinity.BigDouble
struct BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 
{
	// System.Double BreakInfinity.BigDouble::mantissa
	double ___mantissa_5;
	// System.Int64 BreakInfinity.BigDouble::exponent
	int64_t ___exponent_6;
};

struct BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_StaticFields
{
	// BreakInfinity.BigDouble BreakInfinity.BigDouble::Zero
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___Zero_7;
	// BreakInfinity.BigDouble BreakInfinity.BigDouble::One
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___One_8;
	// BreakInfinity.BigDouble BreakInfinity.BigDouble::NaN
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___NaN_9;
	// BreakInfinity.BigDouble BreakInfinity.BigDouble::PositiveInfinity
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___PositiveInfinity_10;
	// BreakInfinity.BigDouble BreakInfinity.BigDouble::NegativeInfinity
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___NegativeInfinity_11;
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

// System.Double
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	// System.Double System.Double::m_value
	double ___m_value_0;
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

// UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C 
{
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnUp_2;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnDown_3;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnLeft_4;
	Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* ___m_SelectOnRight_5;
};

// UnityEngine.Quaternion
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;
};

struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion_4;
};

// System.Single
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	// System.Single System.Single::m_value
	float ___m_value_0;
};

// UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD 
{
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_pinvoke
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD_marshaled_com
{
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_HighlightedSprite_0;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_PressedSprite_1;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_SelectedSprite_2;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___m_DisabledSprite_3;
};

// System.IO.Stream
struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.Stream/ReadWriteTask System.IO.Stream::_activeReadWriteTask
	ReadWriteTask_t0821BF49EE38596C7734E86E1A6A39D769BE2C05* ____activeReadWriteTask_2;
	// System.Threading.SemaphoreSlim System.IO.Stream::_asyncActiveSemaphore
	SemaphoreSlim_t0D5CB5685D9BFA5BF95CEC6E7395490F933E8DB2* ____asyncActiveSemaphore_3;
};

struct Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE_StaticFields
{
	// System.IO.Stream System.IO.Stream::Null
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___Null_1;
};

// System.IO.TextReader
struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
};

struct TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7_StaticFields
{
	// System.IO.TextReader System.IO.TextReader::Null
	TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7* ___Null_1;
};

// System.IO.TextWriter
struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.Char[] System.IO.TextWriter::CoreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___CoreNewLine_3;
	// System.String System.IO.TextWriter::CoreNewLineStr
	String_t* ___CoreNewLineStr_4;
	// System.IFormatProvider System.IO.TextWriter::_internalFormatProvider
	RuntimeObject* ____internalFormatProvider_5;
};

struct TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3_StaticFields
{
	// System.IO.TextWriter System.IO.TextWriter::Null
	TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3* ___Null_1;
	// System.Char[] System.IO.TextWriter::s_coreNewLine
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___s_coreNewLine_2;
};

// System.UInt32
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;
};

// UnityEngine.Vector3
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;
};

struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector_14;
};

// UnityEngine.Vector4
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;
};

struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector_8;
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

// UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	float ___m_Seconds_0;
};

// Interop/Sys/FileStatus
struct FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 
{
	// Interop/Sys/FileStatusFlags Interop/Sys/FileStatus::Flags
	int32_t ___Flags_0;
	// System.Int32 Interop/Sys/FileStatus::Mode
	int32_t ___Mode_1;
	// System.UInt32 Interop/Sys/FileStatus::Uid
	uint32_t ___Uid_2;
	// System.UInt32 Interop/Sys/FileStatus::Gid
	uint32_t ___Gid_3;
	// System.Int64 Interop/Sys/FileStatus::Size
	int64_t ___Size_4;
	// System.Int64 Interop/Sys/FileStatus::ATime
	int64_t ___ATime_5;
	// System.Int64 Interop/Sys/FileStatus::ATimeNsec
	int64_t ___ATimeNsec_6;
	// System.Int64 Interop/Sys/FileStatus::MTime
	int64_t ___MTime_7;
	// System.Int64 Interop/Sys/FileStatus::MTimeNsec
	int64_t ___MTimeNsec_8;
	// System.Int64 Interop/Sys/FileStatus::CTime
	int64_t ___CTime_9;
	// System.Int64 Interop/Sys/FileStatus::CTimeNsec
	int64_t ___CTimeNsec_10;
	// System.Int64 Interop/Sys/FileStatus::BirthTime
	int64_t ___BirthTime_11;
	// System.Int64 Interop/Sys/FileStatus::BirthTimeNsec
	int64_t ___BirthTimeNsec_12;
	// System.Int64 Interop/Sys/FileStatus::Dev
	int64_t ___Dev_13;
	// System.Int64 Interop/Sys/FileStatus::Ino
	int64_t ___Ino_14;
	// System.UInt32 Interop/Sys/FileStatus::UserFlags
	uint32_t ___UserFlags_15;
};

// UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tE8693FF0E67CDBA52BAFB211BFF1844D076ABAFB* ___m_completeCallback_1;
};
// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 
{
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;
};

struct ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11_StaticFields
{
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___defaultColorBlock_7;
};

// UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B  : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D
{
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_pinvoke : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B_marshaled_com : public YieldInstruction_tFCE35FD0907950EFEE9BC2890AC664E41C53728D_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 
{
	// Interop/Sys/FileStatus System.IO.FileStatus::_fileStatus
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	// System.Int32 System.IO.FileStatus::_fileStatusInitialized
	int32_t ____fileStatusInitialized_1;
	// System.Boolean System.IO.FileStatus::<InitiallyDirectory>k__BackingField
	bool ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	// System.Boolean System.IO.FileStatus::_isDirectory
	bool ____isDirectory_3;
	// System.Boolean System.IO.FileStatus::_exists
	bool ____exists_4;
};
// Native definition for P/Invoke marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_pinvoke
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};
// Native definition for COM marshalling of System.IO.FileStatus
struct FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5_marshaled_com
{
	FileStatus_tCB96EDE0D0F945F685B9BBED6DBF0731207458C2 ____fileStatus_0;
	int32_t ____fileStatusInitialized_1;
	int32_t ___U3CInitiallyDirectoryU3Ek__BackingField_2;
	int32_t ____isDirectory_3;
	int32_t ____exists_4;
};

// System.IO.FileStream
struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8  : public Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE
{
	// System.Byte[] System.IO.FileStream::buf
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_6;
	// System.String System.IO.FileStream::name
	String_t* ___name_7;
	// Microsoft.Win32.SafeHandles.SafeFileHandle System.IO.FileStream::safeHandle
	SafeFileHandle_t033FA6AAAC65F4BB25F4CBA9A242A58C95CD406E* ___safeHandle_8;
	// System.Boolean System.IO.FileStream::isExposed
	bool ___isExposed_9;
	// System.Int64 System.IO.FileStream::append_startpos
	int64_t ___append_startpos_10;
	// System.IO.FileAccess System.IO.FileStream::access
	int32_t ___access_11;
	// System.Boolean System.IO.FileStream::owner
	bool ___owner_12;
	// System.Boolean System.IO.FileStream::async
	bool ___async_13;
	// System.Boolean System.IO.FileStream::canseek
	bool ___canseek_14;
	// System.Boolean System.IO.FileStream::anonymous
	bool ___anonymous_15;
	// System.Boolean System.IO.FileStream::buf_dirty
	bool ___buf_dirty_16;
	// System.Int32 System.IO.FileStream::buf_size
	int32_t ___buf_size_17;
	// System.Int32 System.IO.FileStream::buf_length
	int32_t ___buf_length_18;
	// System.Int32 System.IO.FileStream::buf_offset
	int32_t ___buf_offset_19;
	// System.Int64 System.IO.FileStream::buf_start
	int64_t ___buf_start_20;
};

struct FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_StaticFields
{
	// System.Byte[] System.IO.FileStream::buf_recycle
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___buf_recycle_4;
	// System.Object System.IO.FileStream::buf_recycle_lock
	RuntimeObject* ___buf_recycle_lock_5;
};

// GameData
struct GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6  : public RuntimeObject
{
	// BreakInfinity.BigDouble GameData::fish
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___fish_0;
	// BreakInfinity.BigDouble GameData::coinsClickValue
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___coinsClickValue_1;
	// BreakInfinity.BigDouble GameData::coinsPerSec
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___coinsPerSec_2;
	// BreakInfinity.BigDouble GameData::cardUpgrades
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___cardUpgrades_3;
	// BreakInfinity.BigDouble GameData::gems
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___gems_4;
	// BreakInfinity.BigDouble GameData::gemBoost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___gemBoost_5;
	// BreakInfinity.BigDouble GameData::productionUpgrade1Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade1Cost_6;
	// BreakInfinity.BigDouble GameData::productionUpgrade1Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade1Level_7;
	// BreakInfinity.BigDouble GameData::productionUpgrade2Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade2Cost_8;
	// BreakInfinity.BigDouble GameData::productionUpgrade2Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade2Power_9;
	// BreakInfinity.BigDouble GameData::productionUpgrade2Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade2Level_10;
	// BreakInfinity.BigDouble GameData::productionUpgrade3Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade3Cost_11;
	// BreakInfinity.BigDouble GameData::productionUpgrade3Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade3Power_12;
	// BreakInfinity.BigDouble GameData::productionUpgrade3Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade3Level_13;
	// BreakInfinity.BigDouble GameData::productionUpgrade4Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade4Cost_14;
	// BreakInfinity.BigDouble GameData::productionUpgrade4Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade4Power_15;
	// BreakInfinity.BigDouble GameData::productionUpgrade4Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade4Level_16;
	// BreakInfinity.BigDouble GameData::productionUpgrade5Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade5Cost_17;
	// BreakInfinity.BigDouble GameData::productionUpgrade5Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade5Power_18;
	// BreakInfinity.BigDouble GameData::productionUpgrade5Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade5Level_19;
	// BreakInfinity.BigDouble GameData::productionUpgrade6Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade6Cost_20;
	// BreakInfinity.BigDouble GameData::productionUpgrade6Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade6Power_21;
	// BreakInfinity.BigDouble GameData::productionUpgrade6Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade6Level_22;
	// BreakInfinity.BigDouble GameData::productionUpgrade7Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade7Cost_23;
	// BreakInfinity.BigDouble GameData::productionUpgrade7Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade7Power_24;
	// BreakInfinity.BigDouble GameData::productionUpgrade7Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade7Level_25;
	// BreakInfinity.BigDouble GameData::productionUpgrade8Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade8Cost_26;
	// BreakInfinity.BigDouble GameData::productionUpgrade8Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade8Power_27;
	// BreakInfinity.BigDouble GameData::productionUpgrade8Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade8Level_28;
	// BreakInfinity.BigDouble GameData::clickUpgrade1Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade1Cost_29;
	// BreakInfinity.BigDouble GameData::clickUpgrade1Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade1Level_30;
	// BreakInfinity.BigDouble GameData::clickUpgrade2Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade2Cost_31;
	// BreakInfinity.BigDouble GameData::clickUpgrade2Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade2Level_32;
	// BreakInfinity.BigDouble GameData::clickUpgrade3Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade3Cost_33;
	// BreakInfinity.BigDouble GameData::clickUpgrade3Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade3Level_34;
	// BreakInfinity.BigDouble GameData::clickUpgrade4Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade4Cost_35;
	// BreakInfinity.BigDouble GameData::clickUpgrade4Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade4Level_36;
	// BreakInfinity.BigDouble GameData::clickUpgrade5Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade5Cost_37;
	// BreakInfinity.BigDouble GameData::clickUpgrade5Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade5Level_38;
	// BreakInfinity.BigDouble GameData::clickUpgrade6Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade6Cost_39;
	// BreakInfinity.BigDouble GameData::clickUpgrade6Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade6Level_40;
	// BreakInfinity.BigDouble GameData::clickUpgrade7Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade7Cost_41;
	// BreakInfinity.BigDouble GameData::clickUpgrade7Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade7Level_42;
	// BreakInfinity.BigDouble GameData::clickUpgrade8Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade8Cost_43;
	// BreakInfinity.BigDouble GameData::clickUpgrade8Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade8Level_44;
	// BreakInfinity.BigDouble GameData::gainedCoin
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___gainedCoin_45;
	// BreakInfinity.BigDouble GameData::defenceUpgrade1Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade1Cost_46;
	// BreakInfinity.BigDouble GameData::defenceUpgrade2Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade2Cost_47;
	// BreakInfinity.BigDouble GameData::defenceUpgrade3Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade3Cost_48;
	// BreakInfinity.BigDouble GameData::defenceUpgrade4Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade4Cost_49;
	// BreakInfinity.BigDouble GameData::defenceUpgrade5Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade5Cost_50;
	// BreakInfinity.BigDouble GameData::defenceUpgrade6Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade6Cost_51;
	// BreakInfinity.BigDouble GameData::defenceUpgrade7Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade7Cost_52;
	// BreakInfinity.BigDouble GameData::defenceUpgrade8Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade8Cost_53;
	// BreakInfinity.BigDouble GameData::defenceUpgrade1Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade1Level_54;
	// BreakInfinity.BigDouble GameData::defenceUpgrade2Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade2Level_55;
	// BreakInfinity.BigDouble GameData::defenceUpgrade3Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade3Level_56;
	// BreakInfinity.BigDouble GameData::defenceUpgrade4Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade4Level_57;
	// BreakInfinity.BigDouble GameData::defenceUpgrade5Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade5Level_58;
	// BreakInfinity.BigDouble GameData::defenceUpgrade6Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade6Level_59;
	// BreakInfinity.BigDouble GameData::defenceUpgrade7Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade7Level_60;
	// BreakInfinity.BigDouble GameData::defenceUpgrade8Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade8Level_61;
	// BreakInfinity.BigDouble GameData::soldierUpgrade1Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade1Cost_62;
	// BreakInfinity.BigDouble GameData::soldierUpgrade2Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade2Cost_63;
	// BreakInfinity.BigDouble GameData::soldierUpgrade3Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade3Cost_64;
	// BreakInfinity.BigDouble GameData::soldierUpgrade4Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade4Cost_65;
	// BreakInfinity.BigDouble GameData::soldierUpgrade5Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade5Cost_66;
	// BreakInfinity.BigDouble GameData::soldierUpgrade6Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade6Cost_67;
	// BreakInfinity.BigDouble GameData::soldierUpgrade7Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade7Cost_68;
	// BreakInfinity.BigDouble GameData::soldierUpgrade8Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade8Cost_69;
	// BreakInfinity.BigDouble GameData::soldierUpgrade1Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade1Level_70;
	// BreakInfinity.BigDouble GameData::soldierUpgrade2Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade2Level_71;
	// BreakInfinity.BigDouble GameData::soldierUpgrade3Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade3Level_72;
	// BreakInfinity.BigDouble GameData::soldierUpgrade4Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade4Level_73;
	// BreakInfinity.BigDouble GameData::soldierUpgrade5Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade5Level_74;
	// BreakInfinity.BigDouble GameData::soldierUpgrade6Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade6Level_75;
	// BreakInfinity.BigDouble GameData::soldierUpgrade7Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade7Level_76;
	// BreakInfinity.BigDouble GameData::soldierUpgrade8Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade8Level_77;
	// BreakInfinity.BigDouble GameData::defencePower
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defencePower_78;
	// BreakInfinity.BigDouble GameData::GuardCount
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___GuardCount_79;
	// BreakInfinity.BigDouble GameData::reducePower
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___reducePower_80;
	// System.Int32 GameData::health
	int32_t ___health_81;
	// BreakInfinity.BigDouble GameData::takenMoney
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___takenMoney_82;
	// System.Double GameData::inGameTime
	double ___inGameTime_83;
	// BreakInfinity.BigDouble GameData::reachedFish
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___reachedFish_84;
	// System.Int32 GameData::say?
	int32_t ___sayU131_85;
};

// UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E  : public RuntimeObject
{
	// System.IntPtr UnityEngine.Gradient::m_Ptr
	intptr_t ___m_Ptr_0;
};
// Native definition for P/Invoke marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Gradient
struct Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E_marshaled_com
{
	intptr_t ___m_Ptr_0;
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

// System.IO.StreamReader
struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B  : public TextReader_tB8D43017CB6BE1633E5A86D64E7757366507C1F7
{
	// System.IO.Stream System.IO.StreamReader::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_3;
	// System.Text.Encoding System.IO.StreamReader::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_4;
	// System.Text.Decoder System.IO.StreamReader::_decoder
	Decoder_tE16E789E38B25DD304004FC630EA8B21000ECBBC* ____decoder_5;
	// System.Byte[] System.IO.StreamReader::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_6;
	// System.Char[] System.IO.StreamReader::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_7;
	// System.Int32 System.IO.StreamReader::_charPos
	int32_t ____charPos_8;
	// System.Int32 System.IO.StreamReader::_charLen
	int32_t ____charLen_9;
	// System.Int32 System.IO.StreamReader::_byteLen
	int32_t ____byteLen_10;
	// System.Int32 System.IO.StreamReader::_bytePos
	int32_t ____bytePos_11;
	// System.Int32 System.IO.StreamReader::_maxCharsPerBuffer
	int32_t ____maxCharsPerBuffer_12;
	// System.Boolean System.IO.StreamReader::_detectEncoding
	bool ____detectEncoding_13;
	// System.Boolean System.IO.StreamReader::_checkPreamble
	bool ____checkPreamble_14;
	// System.Boolean System.IO.StreamReader::_isBlocked
	bool ____isBlocked_15;
	// System.Boolean System.IO.StreamReader::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamReader::_asyncReadTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncReadTask_17;
};

struct StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_StaticFields
{
	// System.IO.StreamReader System.IO.StreamReader::Null
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* ___Null_2;
};

// System.IO.StreamWriter
struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4  : public TextWriter_tA9E5461506CF806E17B6BBBF2119359DEDA3F0F3
{
	// System.IO.Stream System.IO.StreamWriter::_stream
	Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ____stream_7;
	// System.Text.Encoding System.IO.StreamWriter::_encoding
	Encoding_t65CDEF28CF20A7B8C92E85A4E808920C2465F095* ____encoding_8;
	// System.Text.Encoder System.IO.StreamWriter::_encoder
	Encoder_tAF9067231A76315584BDF4CD27990E2F485A78FA* ____encoder_9;
	// System.Byte[] System.IO.StreamWriter::_byteBuffer
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ____byteBuffer_10;
	// System.Char[] System.IO.StreamWriter::_charBuffer
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ____charBuffer_11;
	// System.Int32 System.IO.StreamWriter::_charPos
	int32_t ____charPos_12;
	// System.Int32 System.IO.StreamWriter::_charLen
	int32_t ____charLen_13;
	// System.Boolean System.IO.StreamWriter::_autoFlush
	bool ____autoFlush_14;
	// System.Boolean System.IO.StreamWriter::_haveWrittenPreamble
	bool ____haveWrittenPreamble_15;
	// System.Boolean System.IO.StreamWriter::_closable
	bool ____closable_16;
	// System.Threading.Tasks.Task System.IO.StreamWriter::_asyncWriteTask
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ____asyncWriteTask_17;
};

struct StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_StaticFields
{
	// System.IO.StreamWriter System.IO.StreamWriter::Null
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* ___Null_6;
};

// UnityEngine.Component
struct Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

// System.IO.FileSystemInfo
struct FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9  : public MarshalByRefObject_t8C2F4C5854177FD60439EB1FCCFC1B3CFAFE8DCE
{
	// System.IO.FileStatus System.IO.FileSystemInfo::_fileStatus
	FileStatus_tABB5F252F1E597EC95E9041035DC424EF66712A5 ____fileStatus_1;
	// System.String System.IO.FileSystemInfo::FullPath
	String_t* ___FullPath_2;
	// System.String System.IO.FileSystemInfo::OriginalPath
	String_t* ___OriginalPath_3;
	// System.String System.IO.FileSystemInfo::_name
	String_t* ____name_4;
};

// UnityEngine.GameObject
struct GameObject_t76FEDD663AB33C991A9C9A23129337651094216F  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
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

// UnityEngine.Texture
struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};

struct Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700_StaticFields
{
	// System.Int32 UnityEngine.Texture::GenerateAllMips
	int32_t ___GenerateAllMips_4;
};

// UnityEngine.Behaviour
struct Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// DayControl
struct DayControl_tC5CBA834D94CF7A4F63C9D9D1E542994A3E0BD6A  : public ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A
{
	// UnityEngine.Gradient DayControl::AmbientColor
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___AmbientColor_4;
	// UnityEngine.Gradient DayControl::DirectionalColor
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___DirectionalColor_5;
	// UnityEngine.Gradient DayControl::FogColor
	Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* ___FogColor_6;
};

// System.IO.DirectoryInfo
struct DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2  : public FileSystemInfo_tE3063B9229F46B05A5F6D018C8C4CA510104E8E9
{
};

// System.NotSupportedException
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};

// UnityEngine.RenderTexture
struct RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27  : public Texture_t791CBB51219779964E0E8A2ED7C1AA5F92A4A700
{
};

// UnityEngine.Transform
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1  : public Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3
{
};

// UnityEngine.Animator
struct Animator_t8A52E42AE54F76681838FE9E632683EF3952E883  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioBehaviour
struct AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.Camera
struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

struct Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_StaticFields
{
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_t844E527BFE37BC0495E7F67993E43C07642DA9DD* ___onPostRender_6;
};

// UnityEngine.Light
struct Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
	// System.Int32 UnityEngine.Light::m_BakedIndex
	int32_t ___m_BakedIndex_4;
};

// UnityEngine.MonoBehaviour
struct MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71  : public Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA
{
};

// UnityEngine.AudioSource
struct AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299  : public AudioBehaviour_t2DC0BEF7B020C952F3D2DA5AAAC88501C7EEB941
{
};

// CardFeatures
struct CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject CardFeatures::buyCardScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___buyCardScreen_4;
	// GainCoinButton CardFeatures::gainCoinButton
	GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* ___gainCoinButton_5;
	// SellFish CardFeatures::sellFish
	SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* ___sellFish_6;
	// HealthAndPriates CardFeatures::HealthAndPriates
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___HealthAndPriates_7;
	// UnityEngine.UI.Button CardFeatures::newCardButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___newCardButton_8;
	// UnityEngine.GameObject CardFeatures::cardSelectionScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cardSelectionScreen_9;
	// HealthAndPriates CardFeatures::healthAndPriates
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___healthAndPriates_10;
	// UnityEngine.GameObject CardFeatures::LifeElixerLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LifeElixerLeft_11;
	// UnityEngine.GameObject CardFeatures::MermaidsHeartLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MermaidsHeartLeft_12;
	// UnityEngine.GameObject CardFeatures::TopMaritimeTraderLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TopMaritimeTraderLeft_13;
	// UnityEngine.GameObject CardFeatures::TopMaritimeTraderLeft2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TopMaritimeTraderLeft2_14;
	// UnityEngine.GameObject CardFeatures::FishFrenzyLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FishFrenzyLeft_15;
	// UnityEngine.GameObject CardFeatures::TheFishersTressureLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TheFishersTressureLeft_16;
	// UnityEngine.GameObject CardFeatures::HappySoulsLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HappySoulsLeft_17;
	// UnityEngine.GameObject CardFeatures::EnchantedWatersLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersLeft_18;
	// UnityEngine.GameObject CardFeatures::EnchantedWatersLeft2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersLeft2_19;
	// UnityEngine.GameObject CardFeatures::EnchantedWatersLeft3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersLeft3_20;
	// UnityEngine.GameObject CardFeatures::AbundanceOfFishLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AbundanceOfFishLeft_21;
	// UnityEngine.GameObject CardFeatures::MermaidsHeartRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MermaidsHeartRight_22;
	// UnityEngine.GameObject CardFeatures::MermaidsHeartRight2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MermaidsHeartRight2_23;
	// UnityEngine.GameObject CardFeatures::TopMaritimeTraderRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TopMaritimeTraderRight_24;
	// UnityEngine.GameObject CardFeatures::FishFrenzyRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FishFrenzyRight_25;
	// UnityEngine.GameObject CardFeatures::HighSeasGamblerRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HighSeasGamblerRight_26;
	// UnityEngine.GameObject CardFeatures::BlowUpThePirtaeShipRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BlowUpThePirtaeShipRight_27;
	// UnityEngine.GameObject CardFeatures::HappySoulsRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HappySoulsRight_28;
	// UnityEngine.GameObject CardFeatures::EnchantedWatersRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersRight_29;
	// UnityEngine.GameObject CardFeatures::EnchantedWatersRight2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersRight2_30;
	// UnityEngine.GameObject CardFeatures::AbundanceOfFishRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AbundanceOfFishRight_31;
	// UnityEngine.GameObject CardFeatures::SeaGuardsRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SeaGuardsRight_32;
};

// CardSelection
struct CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// GainCoinButton CardSelection::gainCoinButton
	GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* ___gainCoinButton_4;
	// UnityEngine.GameObject CardSelection::cardSelectionScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___cardSelectionScreen_5;
	// UnityEngine.UI.Button CardSelection::newCardButton
	Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* ___newCardButton_6;
	// System.Int32 CardSelection::cardRangeForLeft
	int32_t ___cardRangeForLeft_8;
	// System.Int32 CardSelection::cardRangeForRight
	int32_t ___cardRangeForRight_9;
	// UnityEngine.GameObject CardSelection::lockedImage
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___lockedImage_10;
	// UnityEngine.GameObject CardSelection::LifeElixerLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___LifeElixerLeft_11;
	// UnityEngine.GameObject CardSelection::MermaidsHeartLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MermaidsHeartLeft_12;
	// UnityEngine.GameObject CardSelection::TopMaritimeTraderLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TopMaritimeTraderLeft_13;
	// UnityEngine.GameObject CardSelection::TopMaritimeTraderLeft2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TopMaritimeTraderLeft2_14;
	// UnityEngine.GameObject CardSelection::FishFrenzyLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FishFrenzyLeft_15;
	// UnityEngine.GameObject CardSelection::TheFishersTressureLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TheFishersTressureLeft_16;
	// UnityEngine.GameObject CardSelection::HappySoulsLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HappySoulsLeft_17;
	// UnityEngine.GameObject CardSelection::EnchantedWatersLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersLeft_18;
	// UnityEngine.GameObject CardSelection::EnchantedWatersLeft2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersLeft2_19;
	// UnityEngine.GameObject CardSelection::EnchantedWatersLeft3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersLeft3_20;
	// UnityEngine.GameObject CardSelection::AbundanceOfFishLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AbundanceOfFishLeft_21;
	// UnityEngine.GameObject CardSelection::ShipreckSalvageLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___ShipreckSalvageLeft_22;
	// UnityEngine.GameObject CardSelection::grandfathersHeirloomLeft
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___grandfathersHeirloomLeft_23;
	// UnityEngine.GameObject CardSelection::MermaidsHeartRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MermaidsHeartRight_24;
	// UnityEngine.GameObject CardSelection::MermaidsHeartRight2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___MermaidsHeartRight2_25;
	// UnityEngine.GameObject CardSelection::TopMaritimeTraderRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___TopMaritimeTraderRight_26;
	// UnityEngine.GameObject CardSelection::FishFrenzyRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___FishFrenzyRight_27;
	// UnityEngine.GameObject CardSelection::HighSeasGamblerRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HighSeasGamblerRight_28;
	// UnityEngine.GameObject CardSelection::BlowUpThePirtaeShipRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___BlowUpThePirtaeShipRight_29;
	// UnityEngine.GameObject CardSelection::HappySoulsRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___HappySoulsRight_30;
	// UnityEngine.GameObject CardSelection::EnchantedWatersRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersRight_31;
	// UnityEngine.GameObject CardSelection::EnchantedWatersRight2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___EnchantedWatersRight2_32;
	// UnityEngine.GameObject CardSelection::AbundanceOfFishRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___AbundanceOfFishRight_33;
	// UnityEngine.GameObject CardSelection::SeaGuardsRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SeaGuardsRight_34;
	// UnityEngine.GameObject CardSelection::SeafaringCousinsRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SeafaringCousinsRight_35;
	// UnityEngine.GameObject CardSelection::SeafaringCousinsRight2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___SeafaringCousinsRight2_36;
	// UnityEngine.GameObject CardSelection::GrandfathersHeirloomRight
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___GrandfathersHeirloomRight_37;
};

struct CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields
{
	// BreakInfinity.BigDouble CardSelection::reachedFish
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___reachedFish_7;
};

// DataPersistenceManager
struct DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// System.String DataPersistenceManager::fileName
	String_t* ___fileName_4;
	// System.Boolean DataPersistenceManager::useEncryption
	bool ___useEncryption_5;
	// GameData DataPersistenceManager::gameData
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___gameData_6;
	// System.Collections.Generic.List`1<IDataPersistence> DataPersistenceManager::dataPersistenceObjects
	List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* ___dataPersistenceObjects_7;
	// FileDataHandler DataPersistenceManager::dataHandler
	FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* ___dataHandler_8;
};

struct DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields
{
	// DataPersistenceManager DataPersistenceManager::<instance>k__BackingField
	DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* ___U3CinstanceU3Ek__BackingField_9;
};

// DefencePowerController
struct DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text DefencePowerController::DefencePower1Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DefencePower1Text_4;
	// UnityEngine.UI.Text DefencePowerController::DefencePower2Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DefencePower2Text_5;
	// UnityEngine.UI.Text DefencePowerController::DefencePower3Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DefencePower3Text_6;
	// UnityEngine.UI.Text DefencePowerController::DefencePower4Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DefencePower4Text_7;
	// UnityEngine.UI.Text DefencePowerController::DefencePower5Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DefencePower5Text_8;
	// UnityEngine.UI.Text DefencePowerController::DefencePower6Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DefencePower6Text_9;
	// UnityEngine.UI.Text DefencePowerController::DefencePower7Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DefencePower7Text_10;
	// UnityEngine.UI.Text DefencePowerController::DefencePower8Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___DefencePower8Text_11;
	// SellFish DefencePowerController::sellFish
	SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* ___sellFish_12;
	// HealthAndPriates DefencePowerController::healthAndPriates
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___healthAndPriates_13;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade1Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade1Cost_14;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade1Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade1Level_15;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade2Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade2Cost_16;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade2Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade2Level_17;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade3Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade3Cost_18;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade3Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade3Level_19;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade4Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade4Cost_20;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade4Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade4Level_21;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade5Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade5Cost_22;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade5Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade5Level_23;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade6Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade6Cost_24;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade6Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade6Level_25;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade7Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade7Cost_26;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade7Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade7Level_27;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade8Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade8Cost_28;
	// BreakInfinity.BigDouble DefencePowerController::defenceUpgrade8Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defenceUpgrade8Level_29;
};

// DialogueSystem
struct DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text DialogueSystem::text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___text_4;
	// System.String[] DialogueSystem::lines
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___lines_5;
	// System.Single DialogueSystem::textSpeed
	float ___textSpeed_6;
	// UnityEngine.GameObject DialogueSystem::dialoguePanel
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___dialoguePanel_7;
	// System.Int32 DialogueSystem::index
	int32_t ___index_8;
	// System.Int32 DialogueSystem::say?
	int32_t ___sayU131_9;
};

// GainCoinButton
struct GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GainCoinButton::upgradeMenu
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___upgradeMenu_4;
	// UnityEngine.Animator GainCoinButton::bal?kc?
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___balU131kcU131_5;
	// HealthAndPriates GainCoinButton::healthAndPriates
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___healthAndPriates_6;
	// SellFish GainCoinButton::sellFish
	SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* ___sellFish_7;
	// DefencePowerController GainCoinButton::defencePowerController
	DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* ___defencePowerController_8;
	// SoldierCountScript GainCoinButton::soldierCountScript
	SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* ___soldierCountScript_9;
	// System.Boolean GainCoinButton::isSailed
	bool ___isSailed_10;
	// UnityEngine.GameObject GainCoinButton::pauseButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pauseButton_11;
	// UnityEngine.GameObject GainCoinButton::goButton
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___goButton_12;
	// UnityEngine.Animator GainCoinButton::paddeling
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___paddeling_13;
	// UnityEngine.Animator GainCoinButton::k???ktekne
	Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* ___kUFCUE7UFCktekne_14;
	// UnityEngine.UI.Text GainCoinButton::coinText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___coinText_15;
	// UnityEngine.UI.Text GainCoinButton::clickValueText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___clickValueText_16;
	// UnityEngine.UI.Text GainCoinButton::coinPerSecText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___coinPerSecText_17;
	// UnityEngine.UI.Text GainCoinButton::clickUpgrade1Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___clickUpgrade1Text_18;
	// UnityEngine.UI.Text GainCoinButton::clickUpgrade2Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___clickUpgrade2Text_19;
	// UnityEngine.UI.Text GainCoinButton::clickUpgrade3Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___clickUpgrade3Text_20;
	// UnityEngine.UI.Text GainCoinButton::clickUpgrade4Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___clickUpgrade4Text_21;
	// UnityEngine.UI.Text GainCoinButton::clickUpgrade5Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___clickUpgrade5Text_22;
	// UnityEngine.UI.Text GainCoinButton::clickUpgrade6Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___clickUpgrade6Text_23;
	// UnityEngine.UI.Text GainCoinButton::clickUpgrade7Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___clickUpgrade7Text_24;
	// UnityEngine.UI.Text GainCoinButton::clickUpgrade8Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___clickUpgrade8Text_25;
	// UnityEngine.UI.Text GainCoinButton::productionUpgrade1Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___productionUpgrade1Text_26;
	// UnityEngine.UI.Text GainCoinButton::productionUpgrade2Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___productionUpgrade2Text_27;
	// UnityEngine.UI.Text GainCoinButton::productionUpgrade3Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___productionUpgrade3Text_28;
	// UnityEngine.UI.Text GainCoinButton::productionUpgrade4Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___productionUpgrade4Text_29;
	// UnityEngine.UI.Text GainCoinButton::productionUpgrade5Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___productionUpgrade5Text_30;
	// UnityEngine.UI.Text GainCoinButton::productionUpgrade6Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___productionUpgrade6Text_31;
	// UnityEngine.UI.Text GainCoinButton::productionUpgrade7Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___productionUpgrade7Text_32;
	// UnityEngine.UI.Text GainCoinButton::productionUpgrade8Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___productionUpgrade8Text_33;
	// UnityEngine.UI.Text GainCoinButton::gemsText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___gemsText_34;
	// UnityEngine.UI.Text GainCoinButton::gemBoostText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___gemBoostText_35;
	// UnityEngine.UI.Text GainCoinButton::gemsToGetText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___gemsToGetText_36;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade1Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade1Cost_37;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade1Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade1Level_38;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade2Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade2Cost_39;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade2Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade2Level_40;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade3Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade3Cost_41;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade3Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade3Level_42;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade4Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade4Cost_43;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade4Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade4Level_44;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade5Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade5Cost_45;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade5Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade5Level_46;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade6Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade6Cost_47;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade6Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade6Level_48;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade7Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade7Cost_49;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade7Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade7Level_50;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade8Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade8Cost_51;
	// BreakInfinity.BigDouble GainCoinButton::clickUpgrade8Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___clickUpgrade8Level_52;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade1Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade1Cost_53;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade1Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade1Level_54;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade2Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade2Cost_55;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade2Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade2Power_56;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade2Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade2Level_57;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade3Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade3Cost_58;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade3Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade3Power_59;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade3Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade3Level_60;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade4Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade4Cost_61;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade4Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade4Power_62;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade4Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade4Level_63;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade5Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade5Cost_64;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade5Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade5Power_65;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade5Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade5Level_66;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade6Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade6Cost_67;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade6Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade6Power_68;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade6Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade6Level_69;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade7Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade7Cost_70;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade7Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade7Power_71;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade7Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade7Level_72;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade8Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade8Cost_73;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade8Power
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade8Power_74;
	// BreakInfinity.BigDouble GainCoinButton::productionUpgrade8Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___productionUpgrade8Level_75;
	// BreakInfinity.BigDouble GainCoinButton::coins
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___coins_76;
	// BreakInfinity.BigDouble GainCoinButton::coinsClickValue
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___coinsClickValue_77;
	// BreakInfinity.BigDouble GainCoinButton::coinsPerSec
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___coinsPerSec_78;
	// BreakInfinity.BigDouble GainCoinButton::gems
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___gems_80;
	// BreakInfinity.BigDouble GainCoinButton::gemBoost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___gemBoost_81;
	// BreakInfinity.BigDouble GainCoinButton::gemsToGet
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___gemsToGet_82;
};

struct GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields
{
	// BreakInfinity.BigDouble GainCoinButton::cardUpgrades
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___cardUpgrades_79;
};

// GameOverControl
struct GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject GameOverControl::gameOverScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___gameOverScreen_4;
	// GainCoinButton GameOverControl::gainCoinButton
	GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* ___gainCoinButton_5;
	// HealthAndPriates GameOverControl::HealthAndPriates
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___HealthAndPriates_6;
	// UnityEngine.GameObject GameOverControl::image
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___image_7;
	// UnityEngine.UI.Text GameOverControl::winLostText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___winLostText_8;
};

// HealthAndPriates
struct HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text HealthAndPriates::guardCountText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___guardCountText_4;
	// UnityEngine.UI.Text HealthAndPriates::defencePowerText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___defencePowerText_5;
	// GainCoinButton HealthAndPriates::gainCoinButton
	GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* ___gainCoinButton_6;
	// System.Int32 HealthAndPriates::health
	int32_t ___health_7;
	// System.Single HealthAndPriates::pirateArriveTime
	float ___pirateArriveTime_8;
	// System.Single HealthAndPriates::korsanSay?s?
	float ___korsanSayU131sU131_9;
	// UnityEngine.GameObject HealthAndPriates::pirateShip
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pirateShip_10;
	// UnityEngine.GameObject HealthAndPriates::pirateGameUI
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___pirateGameUI_11;
	// UnityEngine.UI.Text HealthAndPriates::winChanceText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___winChanceText_12;
	// BreakInfinity.BigDouble HealthAndPriates::defencePower
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___defencePower_13;
	// BreakInfinity.BigDouble HealthAndPriates::GuardCount
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___GuardCount_14;
	// BreakInfinity.BigDouble HealthAndPriates::korsanPower
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___korsanPower_15;
	// BreakInfinity.BigDouble HealthAndPriates::a
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___a_16;
	// BreakInfinity.BigDouble HealthAndPriates::b
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___b_17;
	// BreakInfinity.BigDouble HealthAndPriates::winChance
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___winChance_18;
	// BreakInfinity.BigDouble HealthAndPriates::c
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___c_19;
	// BreakInfinity.BigDouble HealthAndPriates::reducedPower
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___reducedPower_20;
	// SellFish HealthAndPriates::sellFish
	SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* ___sellFish_21;
	// UnityEngine.GameObject HealthAndPriates::can1
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___can1_22;
	// UnityEngine.GameObject HealthAndPriates::can2
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___can2_23;
	// UnityEngine.GameObject HealthAndPriates::can3
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___can3_24;
	// UnityEngine.AudioSource HealthAndPriates::pirateSong
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___pirateSong_25;
	// UnityEngine.AudioSource HealthAndPriates::paraSayma
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___paraSayma_26;
	// UnityEngine.AudioSource HealthAndPriates::InGameMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___InGameMusic_27;
	// UnityEngine.AudioSource HealthAndPriates::BattleMusic
	AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* ___BattleMusic_28;
	// UnityEngine.UI.Text HealthAndPriates::winLoseText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___winLoseText_29;
	// BreakInfinity.BigDouble HealthAndPriates::takenMoney
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___takenMoney_30;
	// UnityEngine.UI.Text HealthAndPriates::moneyPayText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___moneyPayText_31;
	// System.Double HealthAndPriates::inGameTime
	double ___inGameTime_32;
	// System.Single HealthAndPriates::minPirate
	float ___minPirate_33;
	// System.Single HealthAndPriates::maxPirate
	float ___maxPirate_34;
};

// LightManager
struct LightManager_t367FF6C506CFAC316A1E1C89106DF4075BF493FD  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Light LightManager::DirectionalLight
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* ___DirectionalLight_4;
	// DayControl LightManager::dayControl
	DayControl_tC5CBA834D94CF7A4F63C9D9D1E542994A3E0BD6A* ___dayControl_5;
	// System.Single LightManager::TimeOfDay
	float ___TimeOfDay_6;
};

// Menu
struct Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// SellFish
struct SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.GameObject SellFish::sellScreen
	GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* ___sellScreen_4;
	// UnityEngine.UI.Text SellFish::fishToCoinCountText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___fishToCoinCountText_5;
	// GainCoinButton SellFish::gainCoinButton
	GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* ___gainCoinButton_6;
	// BreakInfinity.BigDouble SellFish::gainedCoin
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___gainedCoin_7;
	// UnityEngine.UI.Text SellFish::coinText
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___coinText_8;
};

// SoldierCountScript
struct SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.UI.Text SoldierCountScript::soldierPower1Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___soldierPower1Text_4;
	// UnityEngine.UI.Text SoldierCountScript::soldierPower2Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___soldierPower2Text_5;
	// UnityEngine.UI.Text SoldierCountScript::soldierPower3Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___soldierPower3Text_6;
	// UnityEngine.UI.Text SoldierCountScript::soldierPower4Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___soldierPower4Text_7;
	// UnityEngine.UI.Text SoldierCountScript::soldierPower5Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___soldierPower5Text_8;
	// UnityEngine.UI.Text SoldierCountScript::soldierPower6Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___soldierPower6Text_9;
	// UnityEngine.UI.Text SoldierCountScript::soldierPower7Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___soldierPower7Text_10;
	// UnityEngine.UI.Text SoldierCountScript::soldierPower8Text
	Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* ___soldierPower8Text_11;
	// SellFish SoldierCountScript::sellFish
	SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* ___sellFish_12;
	// HealthAndPriates SoldierCountScript::healthAndPriates
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* ___healthAndPriates_13;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade1Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade1Cost_14;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade1Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade1Level_15;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade2Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade2Cost_16;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade2Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade2Level_17;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade3Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade3Cost_18;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade3Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade3Level_19;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade4Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade4Cost_20;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade4Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade4Level_21;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade5Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade5Cost_22;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade5Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade5Level_23;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade6Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade6Cost_24;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade6Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade6Level_25;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade7Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade7Cost_26;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade7Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade7Level_27;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade8Cost
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade8Cost_28;
	// BreakInfinity.BigDouble SoldierCountScript::soldierUpgrade8Level
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___soldierUpgrade8Level_29;
};

// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
};

// WaterReflection
struct WaterReflection_t59B75D355AF4B5367D9273832B3581710859F585  : public MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71
{
	// UnityEngine.Camera WaterReflection::mainCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___mainCamera_4;
	// UnityEngine.Camera WaterReflection::reflectionCamera
	Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___reflectionCamera_5;
	// UnityEngine.Transform WaterReflection::reflectionPlane
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___reflectionPlane_6;
	// UnityEngine.RenderTexture WaterReflection::outputTexture
	RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___outputTexture_7;
	// System.Boolean WaterReflection::copyCameraParamerers
	bool ___copyCameraParamerers_8;
	// System.Single WaterReflection::verticalOffset
	float ___verticalOffset_9;
	// System.Boolean WaterReflection::isReady
	bool ___isReady_10;
	// UnityEngine.Transform WaterReflection::mainCamTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___mainCamTransform_11;
	// UnityEngine.Transform WaterReflection::reflectionCamTransform
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___reflectionCamTransform_12;
};

// UnityEngine.UI.Graphic
struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t6C5DA5E41A89E0F488B001E45E58963480E543A5* ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tAB9A55A976C4E3B2B37D0CE5616E5685A8B43860* ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2DB4CEFDFF732884866C83F11ABF75F5AE8FFB26* ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tFEBBC94BCC6C9C88277BA04047D2B3FDB6ED7FDA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_t5BB0582F926E75E2FE795492679A6CF55A4B4BC4* ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;
};

struct Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_tE6505BC111DD8A424A9DBE8E05D7D09E11FFFCF4* ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t6D9C539763A09BC2B12AEAEF36F6DFFC98AE63D4* ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tB905FCB02AE67CBEE5F265FE37A5938FC5D136FE* ___s_VertexHelper_21;
};

// UnityEngine.UI.Selectable
struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712  : public UIBehaviour_tB9D4295827BD2EEDEF0749200C6CA7090C742A9D
{
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t4D2E201D65749CF4E104E8AC1232CF1D6F14795C ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_tDD7C62E7AFE442652FC98F8D058CE8AE6BFD7C11 ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_tC8199570BE6337FB5C49347C97892B4222E5AACD ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tA0DC06F89C5280C6DD972F6F4C8A56D7F4F79074* ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931* ___m_TargetGraphic_13;
	// System.Boolean UnityEngine.UI.Selectable::m_GroupsAllowInteraction
	bool ___m_GroupsAllowInteraction_14;
	// System.Int32 UnityEngine.UI.Selectable::m_CurrentIndex
	int32_t ___m_CurrentIndex_15;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerInside>k__BackingField
	bool ___U3CisPointerInsideU3Ek__BackingField_16;
	// System.Boolean UnityEngine.UI.Selectable::<isPointerDown>k__BackingField
	bool ___U3CisPointerDownU3Ek__BackingField_17;
	// System.Boolean UnityEngine.UI.Selectable::<hasSelection>k__BackingField
	bool ___U3ChasSelectionU3Ek__BackingField_18;
	// System.Collections.Generic.List`1<UnityEngine.CanvasGroup> UnityEngine.UI.Selectable::m_CanvasGroupCache
	List_1_t2CDCA768E7F493F5EDEBC75AEB200FD621354E35* ___m_CanvasGroupCache_19;
};

struct Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712_StaticFields
{
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_t4160E135F02A40F75A63F787D36F31FEC6FE91A9* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;
};

// UnityEngine.UI.Button
struct Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098  : public Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712
{
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_t8EA72E90B3BD1392FB3B3EF167D5121C23569E4C* ___m_OnClick_20;
};

// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E  : public Graphic_tCBFCA4585A19E2B75465AECFEAC43F4016BF7931
{
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tACF92BE999C791A665BD1ADEABF5BCEB82846670* ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t6073CD0D951EC1256BF74B8F9107D68FC89B99B8* ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_tFF1859CCE176131B909E2044F76443064254679C* ___m_Corners_35;
};

// UnityEngine.UI.Text
struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62  : public MaskableGraphic_tFC5B6BE351C90DE53744DF2A70940242774B361E
{
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_tB8E562846C6CB59C43260F69AE346B9BF3157224* ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t85D00417640A53953556C01F9D4E7DDE1ABD8FEC* ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tBC532486B45D071A520751A90E819C77BA4E3D2F* ___m_TempVerts_42;
};

struct Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62_StaticFields
{
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t18053F08F347D0DCA5E1140EC7EC4533DD8A14E3* ___s_DefaultText_40;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
// UnityEngine.MonoBehaviour[]
struct MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7  : public RuntimeArray
{
	ALIGN_FIELD (8) MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* m_Items[1];

	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Light[]
struct LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990  : public RuntimeArray
{
	ALIGN_FIELD (8) Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* m_Items[1];

	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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


// T UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared (const RuntimeMethod* method) ;
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<System.Object>(System.Collections.IEnumerable)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared (RuntimeObject* ___source0, const RuntimeMethod* method) ;
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___collection0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<System.Object>(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared (String_t* ___json0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;

// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF (const RuntimeMethod* method) ;
// T UnityEngine.Component::GetComponent<UnityEngine.Camera>()
inline Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method)
{
	return ((  Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* (*) (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3*, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m7181F81CAEC2CF53F5D2BC79B7425C16E1F80D33_gshared)(__this, method);
}
// System.Void WaterReflection::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterReflection_Validate_m502E830C820B21FB6C83692F56E4C43DCA5DF19E (WaterReflection_t59B75D355AF4B5367D9273832B3581710859F585* __this, const RuntimeMethod* method) ;
// System.Void WaterReflection::RenderReflection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterReflection_RenderReflection_m01B0AD1623A4577A51AD8B1F3AE875FA24A80BF6 (WaterReflection_t59B75D355AF4B5367D9273832B3581710859F585* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::InverseTransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformDirection(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___direction0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Transform::TransformPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156 (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::LookAt(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldPosition0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___worldUp1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371 (Component_t39FBE53E5EFCF4409111FB22C15FF73717632EC3* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::CopyFrom(UnityEngine.Camera)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_CopyFrom_mFA5C3AB8E95EC4124249520ACEC6F7F25E5CDC52 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* ___other0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Camera::set_targetTexture(UnityEngine.RenderTexture)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4 (Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* __this, RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, bool ___value0, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::op_Implicit(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446 (float ___value0, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::op_Multiply(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___left0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___right1, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::op_Addition(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___left0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___right1, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::op_Implicit(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36 (int32_t ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.UI.Selectable::set_interactable(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492 (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Boolean BreakInfinity.BigDouble::op_GreaterThan(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___a0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___b1, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::op_Implicit(System.Double)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6 (double ___value0, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::op_Subtraction(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___left0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___right1, const RuntimeMethod* method) ;
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method) ;
// System.Boolean BreakInfinity.BigDouble::op_LessThanOrEqual(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___a0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___b1, const RuntimeMethod* method) ;
// System.Boolean BreakInfinity.BigDouble::op_GreaterThanOrEqual(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___a0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___b1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.UI.Selectable::get_interactable()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) ;
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68 (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method) ;
// System.Boolean BreakInfinity.BigDouble::op_LessThan(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___a0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___b1, const RuntimeMethod* method) ;
// DataPersistenceManager DataPersistenceManager::get_instance()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* DataPersistenceManager_get_instance_m01C3F5BCC51E7FABA894C34501EC63C4B82E8A5B_inline (const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void DataPersistenceManager::set_instance(DataPersistenceManager)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataPersistenceManager_set_instance_m745574F1B7D025B6EAA022465F9516AFC237A5D7_inline (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* ___value0, const RuntimeMethod* method) ;
// System.String UnityEngine.Application::get_persistentDataPath()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399 (const RuntimeMethod* method) ;
// System.Void FileDataHandler::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDataHandler__ctor_m06BE209524BC172BFA590EA7AC82FDFAE0B188F2 (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, String_t* ___dataDirPath0, String_t* ___dataFileName1, bool ___useEncryption2, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1<IDataPersistence> DataPersistenceManager::FindAllDataPersistenceObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* DataPersistenceManager_FindAllDataPersistenceObjects_mB7B08CD99CB13F631601F927D7E53280E6B6CE1D (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) ;
// System.Void DataPersistenceManager::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_LoadGame_mE5BFE59CFA8765A35449DA66918D46E347D5CC64 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) ;
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* __this, const RuntimeMethod* method) ;
// GameData FileDataHandler::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* FileDataHandler_Load_m0A73AE206E58A13E321446D52A62AD3E440480AD (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___message0, const RuntimeMethod* method) ;
// System.Void DataPersistenceManager::NewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_NewGame_m1F7A0A953C2CC8EFA03D66B5F3E2809211DFF5C5 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) ;
// System.Collections.Generic.List`1/Enumerator<T> System.Collections.Generic.List`1<IDataPersistence>::GetEnumerator()
inline Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043 List_1_GetEnumerator_m2C0417F19EB7C614C74BD93FAAF92AF134FA580E (List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* __this, const RuntimeMethod* method)
{
	return ((  Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043 (*) (List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A*, const RuntimeMethod*))List_1_GetEnumerator_mD8294A7FA2BEB1929487127D476F8EC1CDC23BFC_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<IDataPersistence>::Dispose()
inline void Enumerator_Dispose_m4DC98E8C9F05691C863B801B71E8CCECB824000B (Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043* __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043*, const RuntimeMethod*))Enumerator_Dispose_mD9DC3E3C3697830A4823047AB29A77DBBB5ED419_gshared)(__this, method);
}
// T System.Collections.Generic.List`1/Enumerator<IDataPersistence>::get_Current()
inline RuntimeObject* Enumerator_get_Current_m5B7244D4BA2D27DAD10BE8B41B8DD253534F9C9A_inline (Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043*, const RuntimeMethod*))Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline)(__this, method);
}
// System.Boolean System.Collections.Generic.List`1/Enumerator<IDataPersistence>::MoveNext()
inline bool Enumerator_MoveNext_m190F8C52A51CF3A72B665BDA72B30B85F5C48072 (Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043* __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043*, const RuntimeMethod*))Enumerator_MoveNext_mE921CC8F29FBBDE7CC3209A0ED0D921D58D00BCB_gshared)(__this, method);
}
// System.Void FileDataHandler::Save(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDataHandler_Save_m506ED54491F48C87E4A9C37A3E7B94FBF07D6B41 (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) ;
// System.Void DataPersistenceManager::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_SaveGame_m404977BEBEFAE09E0AA1948AD2D9E2C2DB87B97C (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.MonoBehaviour>()
inline MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C (const RuntimeMethod* method)
{
	return ((  MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::OfType<IDataPersistence>(System.Collections.IEnumerable)
inline RuntimeObject* Enumerable_OfType_TisIDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_mD7616A582371E0CF308A71A5903E14C713EAA796 (RuntimeObject* ___source0, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (RuntimeObject*, const RuntimeMethod*))Enumerable_OfType_TisRuntimeObject_m159512A788C6571FEF13C708CB20374087C762DD_gshared)(___source0, method);
}
// System.Void System.Collections.Generic.List`1<IDataPersistence>::.ctor(System.Collections.Generic.IEnumerable`1<T>)
inline void List_1__ctor_m819694E5909017B7D2BD82BA53FE267138B1A8EA (List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* __this, RuntimeObject* ___collection0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___collection0, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2 (RuntimeObject* __this, const RuntimeMethod* method) ;
// System.String System.IO.Path::Combine(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE (String_t* ___path10, String_t* ___path21, const RuntimeMethod* method) ;
// System.Boolean System.IO.File::Exists(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A (String_t* ___path0, const RuntimeMethod* method) ;
// System.Void System.IO.FileStream::.ctor(System.String,System.IO.FileMode)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6 (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* __this, String_t* ___path0, int32_t ___mode1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamReader::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7 (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.String FileDataHandler::EncryptDecrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDataHandler_EncryptDecrypt_m5B342D3728359C90233A998F884448ABDD2F576D (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, String_t* ___data0, const RuntimeMethod* method) ;
// T UnityEngine.JsonUtility::FromJson<GameData>(System.String)
inline GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8 (String_t* ___json0, const RuntimeMethod* method)
{
	return ((  GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* (*) (String_t*, const RuntimeMethod*))JsonUtility_FromJson_TisRuntimeObject_m0CCF0FE109BF4C85AECC9C5D0DBB43422A24FB40_gshared)(___json0, method);
}
// System.String System.String::Concat(System.String,System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___str00, String_t* ___str11, String_t* ___str22, String_t* ___str33, const RuntimeMethod* method) ;
// System.String System.IO.Path::GetDirectoryName(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6 (String_t* ___path0, const RuntimeMethod* method) ;
// System.IO.DirectoryInfo System.IO.Directory::CreateDirectory(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F (String_t* ___path0, const RuntimeMethod* method) ;
// System.String UnityEngine.JsonUtility::ToJson(System.Object,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53 (RuntimeObject* ___obj0, bool ___prettyPrint1, const RuntimeMethod* method) ;
// System.Void System.IO.StreamWriter::.ctor(System.IO.Stream)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* __this, Stream_tF844051B786E8F7F4244DBD218D74E8617B9A2DE* ___stream0, const RuntimeMethod* method) ;
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3 (String_t* __this, int32_t ___index0, const RuntimeMethod* method) ;
// System.Int32 System.String::get_Length()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C (Il2CppChar* __this, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m9E3155FB84015C823606188F53B47CB44C444991 (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method) ;
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_mD037FDB0B487295EA47F79A4DB1BF1846C9087FF (ScriptableObject_tB3BFDB921A1B1795B38A5417D3B97A89A140436A* __this, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605 (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___x0, Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C* ___y1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Application::get_isPlaying()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34 (const RuntimeMethod* method) ;
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865 (const RuntimeMethod* method) ;
// System.Void LightManager::UpdateLightning(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightManager_UpdateLightning_m68759A9276A507A81278C5B4196A85317A83B16A (LightManager_t367FF6C506CFAC316A1E1C89106DF4075BF493FD* __this, float ___timePercent0, const RuntimeMethod* method) ;
// UnityEngine.Color UnityEngine.Gradient::Evaluate(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tD001788D726C3A7F1379BEED0260B9591F440C1F Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32 (Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* __this, float ___time0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_ambientLight(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_ambientLight_m44E42CEB67937FC0CFC86767CB07D93D8E780880 (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.RenderSettings::set_fogColor(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void RenderSettings_set_fogColor_mBBD12EC3492195F85F583CAF4FAE4A973227639B (Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Light::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, Color_tD001788D726C3A7F1379BEED0260B9591F440C1F ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Transform::set_localRotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA (Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* __this, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___value0, const RuntimeMethod* method) ;
// UnityEngine.Light UnityEngine.RenderSettings::get_sun()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* RenderSettings_get_sun_m5D3CDD2B31B8F48F77D5DC3830E3BB67A44869EC (const RuntimeMethod* method) ;
// T[] UnityEngine.Object::FindObjectsOfType<UnityEngine.Light>()
inline LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mA7F8EFA476BAB46167B93E9984C5D02615CA5357 (const RuntimeMethod* method)
{
	return ((  LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m0B4DF4B8AB4C71E0F471BC9D0440B40844DA221D_gshared)(method);
}
// UnityEngine.LightType UnityEngine.Light::get_type()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7 (Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* __this, const RuntimeMethod* method) ;
// System.String BreakInfinity.BigDouble::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* __this, String_t* ___format0, const RuntimeMethod* method) ;
// System.String BreakInfinity.BigDouble::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* __this, const RuntimeMethod* method) ;
// System.UInt32 <PrivateImplementationDetails>::ComputeStringHash(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876 (String_t* ___s0, const RuntimeMethod* method) ;
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::op_Increment(BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DialogueSystem::Baslat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueSystem_Baslat_m420532010EA6AC03B587EAC6B9217C96C7B721C6 (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) ;
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, RuntimeObject* ___routine0, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonDown(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Void DialogueSystem::NextLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSystem_NextLine_m17532E5840526544A30CE6FDFB5E6F8DA013E69A (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.MonoBehaviour::StopAllCoroutines()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318 (MonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator DialogueSystem::TypeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueSystem_TypeLine_mC7F962B5659F3439C875B025BAD763A7FC15359F (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) ;
// System.Void DialogueSystem/<TypeLine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeLineU3Ed__10__ctor_mDBE988EDC20CD66A96DECE9DC32A06E484A42661 (U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void DialogueSystem/<Baslat>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaslatU3Ed__11__ctor_m4A06AA0ACD1B6BBF08984C751AAFA1BFBF928695 (U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Char[] System.String::ToCharArray()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46 (String_t* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* __this, float ___seconds0, const RuntimeMethod* method) ;
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, const RuntimeMethod* method) ;
// System.Void DialogueSystem::StartDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSystem_StartDialogue_m087F394C1A3C08A0566955DD99AC2B209EAC8A14 (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::Play(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9 (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___stateName0, const RuntimeMethod* method) ;
// System.Void GainCoinButton/<T?klad?>d__84::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTU131kladU131U3Ed__84__ctor_m027E017B315D87D6B6AA97027FD99DF0002D0C13 (U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::op_Division(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_op_Division_mB826F457D6C15E326E9AF575668EB293540C70A6 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___left0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___right1, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::Sqrt(BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_Sqrt_m60A29735D97D37B5F24EB1500DB3852CCA68DBEF (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___value0, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::Floor(BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_Floor_m1701A84F883064D06DA8FAD8BEA3A6E6215B9270 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___value0, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method) ;
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A (Behaviour_t01970CFBBA658497AE30F311C447DB0440BAB7FA* __this, bool ___value0, const RuntimeMethod* method) ;
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B (Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method) ;
// System.Boolean UnityEngine.Input::GetMouseButtonUp(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6 (int32_t ___button0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GainCoinButton::T?klad?()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GainCoinButton_TU131kladU131_m64F7CB9B005EC0ED7B1426A4C40B0316C24CB7FB (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) ;
// System.String GainCoinButton::NotationMethod(BreakInfinity.BigDouble,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___x0, String_t* ___y1, const RuntimeMethod* method) ;
// System.String System.String::Concat(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___values0, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::Abs(BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_Abs_m0A71FB38CA379E3919B865E9AE8F9E1440C1E6FE (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___value0, const RuntimeMethod* method) ;
// System.Double BreakInfinity.BigDouble::Log10(BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR double BigDouble_Log10_m75A67FA813A577CFCE777E729B8A14E48219045B (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___value0, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::Pow(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_Pow_m83F48F2477A77A5918FC7E66491AE962D0D3564B (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___value0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___power1, const RuntimeMethod* method) ;
// System.Collections.IEnumerator GameOverControl::Kontrolcu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOverControl_Kontrolcu_m5D450101E678099BE72B5EDBF70A2140A46BAFB2 (GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* __this, const RuntimeMethod* method) ;
// System.Void UnityEngine.SceneManagement.SceneManager::LoadScene(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// System.Void GameOverControl/<Kontrolcu>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKontrolcuU3Ed__8__ctor_m19098CF0AE158FCCACA16BE28B1A49290092137E (U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// T UnityEngine.GameObject::GetComponent<UnityEngine.Animator>()
inline Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3 (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* __this, const RuntimeMethod* method)
{
	return ((  Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* (*) (GameObject_t76FEDD663AB33C991A9C9A23129337651094216F*, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m6EAED4AA356F0F48288F67899E5958792395563B_gshared)(__this, method);
}
// System.Void GainCoinButton::FullReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_FullReset_m8DA3C4BA70D84DAEE63E24E72C6B4A684555CD7E (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HealthAndPriates::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthAndPriates_PlayGame_mAACEDA36565B4F48ED4F783088CB545D217C2D2A (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) ;
// System.String HealthAndPriates::NotationMethod(BreakInfinity.BigDouble,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HealthAndPriates_NotationMethod_m268469EF5153F8D5FEA0B425C71552FBA609D951 (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___x0, String_t* ___y1, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Boolean BreakInfinity.BigDouble::op_Equality(BreakInfinity.BigDouble,BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool BigDouble_op_Equality_m04E2246E04A156684315645D1CD7BAEE29668EF3 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___left0, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___right1, const RuntimeMethod* method) ;
// System.Void UnityEngine.Time::set_timeScale(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331 (float ___value0, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HealthAndPriates::YouLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthAndPriates_YouLose_m95D87573219144A77178F9D4D5500990DFAFFAAA (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HealthAndPriates::YouWon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthAndPriates_YouWon_m0FCC64D63618B2C7E9829FF0CD82F2AD8E18AD5E (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator HealthAndPriates::ShipDeactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthAndPriates_ShipDeactive_mC0FDFB7A4E917B4C2DAD0E87CF46B222C5A0D08F (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) ;
// BreakInfinity.BigDouble BreakInfinity.BigDouble::op_Decrement(BreakInfinity.BigDouble)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 BigDouble_op_Decrement_m920F1BB10DA252107270A3B07663C6F48457EBC6 (BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___value0, const RuntimeMethod* method) ;
// System.Void HealthAndPriates/<PlayGame>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayGameU3Ed__37__ctor_mB81E03FA0C6B201728C7B6D84C51E59E87A33D76 (U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void HealthAndPriates/<ShipDeactive>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShipDeactiveU3Ed__38__ctor_m7DC0EA0CDB9D85BB7EFBBEA2BCA68221F6B4AD6B (U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void HealthAndPriates/<YouWon>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYouWonU3Ed__39__ctor_m4C9083FF97B648547B92CC6A3102B5E6212AD9EF (U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void HealthAndPriates/<YouLose>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYouLoseU3Ed__40__ctor_mEC3F72A41735947F32B143F9F4C3B8F7F19B294D (U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// System.Void UnityEngine.AudioSource::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537 (AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* __this, const RuntimeMethod* method) ;
// System.Collections.IEnumerator Menu::Kontrolcu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Menu_Kontrolcu_m9BD22BE0DCE07B2CA8D5B0493EAA74AD762220C3 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) ;
// System.Void Menu/<Kontrolcu>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKontrolcuU3Ed__1__ctor_m6F49C871FE1DC86E6BCEC98C03BE6C4B281931F1 (U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) ;
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935 (int32_t ___sceneBuildIndex0, const RuntimeMethod* method) ;
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) ;
// UnityEngine.Quaternion UnityEngine.Quaternion::Internal_FromEulerRad(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) ;
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
// System.Void WaterReflection::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterReflection_Awake_m86F43948E686275B6F0C6D761C619EDAB40B1678 (WaterReflection_t59B75D355AF4B5367D9273832B3581710859F585* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// mainCamera = Camera.main;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0;
		L_0 = Camera_get_main_m52C992F18E05355ABB9EEB64A4BF2215E12762DF(NULL);
		__this->___mainCamera_4 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamera_4), (void*)L_0);
		// reflectionCamera = GetComponent<Camera>();
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_1;
		L_1 = Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4(__this, Component_GetComponent_TisCamera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184_m64AC6C06DD93C5FB249091FEC84FA8475457CCC4_RuntimeMethod_var);
		__this->___reflectionCamera_5 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reflectionCamera_5), (void*)L_1);
		// Validate();
		WaterReflection_Validate_m502E830C820B21FB6C83692F56E4C43DCA5DF19E(__this, NULL);
		// }
		return;
	}
}
// System.Void WaterReflection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterReflection_Update_mEAF4BCA28F1154AF68D716AC6E3A954482DED822 (WaterReflection_t59B75D355AF4B5367D9273832B3581710859F585* __this, const RuntimeMethod* method) 
{
	{
		// if (isReady)
		bool L_0 = __this->___isReady_10;
		if (!L_0)
		{
			goto IL_000e;
		}
	}
	{
		// RenderReflection();
		WaterReflection_RenderReflection_m01B0AD1623A4577A51AD8B1F3AE875FA24A80BF6(__this, NULL);
	}

IL_000e:
	{
		// }
		return;
	}
}
// System.Void WaterReflection::RenderReflection()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterReflection_RenderReflection_m01B0AD1623A4577A51AD8B1F3AE875FA24A80BF6 (WaterReflection_t59B75D355AF4B5367D9273832B3581710859F585* __this, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_2;
	memset((&V_2), 0, sizeof(V_2));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_4;
	memset((&V_4), 0, sizeof(V_4));
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// Vector3 cameraDirectionWorldSpace = mainCamTransform.forward;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_0 = __this->___mainCamTransform_11;
		NullCheck(L_0);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Transform_get_forward_mFCFACF7165FDAB21E80E384C494DF278386CEE2F(L_0, NULL);
		V_0 = L_1;
		// Vector3 cameraUpWorldSpace = mainCamTransform.up;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_2 = __this->___mainCamTransform_11;
		NullCheck(L_2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3;
		L_3 = Transform_get_up_mE47A9D9D96422224DD0539AA5524DA5440145BB2(L_2, NULL);
		V_1 = L_3;
		// Vector3 cameraPositionWorldSpace = mainCamTransform.position;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_4 = __this->___mainCamTransform_11;
		NullCheck(L_4);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_5;
		L_5 = Transform_get_position_m69CD5FA214FDAE7BB701552943674846C220FDE1(L_4, NULL);
		V_2 = L_5;
		// cameraPositionWorldSpace.y += verticalOffset;
		float* L_6 = (&(&V_2)->___y_3);
		float* L_7 = L_6;
		float L_8 = *((float*)L_7);
		float L_9 = __this->___verticalOffset_9;
		*((float*)L_7) = (float)((float)il2cpp_codegen_add(L_8, L_9));
		// Vector3 cameraDirectionPlaneSpace = reflectionPlane.InverseTransformDirection(cameraDirectionWorldSpace);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_10 = __this->___reflectionPlane_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_11 = V_0;
		NullCheck(L_10);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		L_12 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_10, L_11, NULL);
		V_3 = L_12;
		// Vector3 cameraUpPlaneSpace = reflectionPlane.InverseTransformDirection(cameraUpWorldSpace);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_13 = __this->___reflectionPlane_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_14 = V_1;
		NullCheck(L_13);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_15;
		L_15 = Transform_InverseTransformDirection_m69C077B881A98B08C7F231EFC49429C906FBC575(L_13, L_14, NULL);
		V_4 = L_15;
		// Vector3 cameraPositionPlaneSpace = reflectionPlane.InverseTransformPoint(cameraPositionWorldSpace);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16 = __this->___reflectionPlane_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_17 = V_2;
		NullCheck(L_16);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		L_18 = Transform_InverseTransformPoint_m18CD395144D9C78F30E15A5B82B6670E792DBA5D(L_16, L_17, NULL);
		V_5 = L_18;
		// cameraDirectionPlaneSpace.y *= -1;
		float* L_19 = (&(&V_3)->___y_3);
		float* L_20 = L_19;
		float L_21 = *((float*)L_20);
		*((float*)L_20) = (float)((float)il2cpp_codegen_multiply(L_21, (-1.0f)));
		// cameraUpPlaneSpace.y *= -1;
		float* L_22 = (&(&V_4)->___y_3);
		float* L_23 = L_22;
		float L_24 = *((float*)L_23);
		*((float*)L_23) = (float)((float)il2cpp_codegen_multiply(L_24, (-1.0f)));
		// cameraPositionPlaneSpace.y *= -1;
		float* L_25 = (&(&V_5)->___y_3);
		float* L_26 = L_25;
		float L_27 = *((float*)L_26);
		*((float*)L_26) = (float)((float)il2cpp_codegen_multiply(L_27, (-1.0f)));
		// cameraDirectionWorldSpace = reflectionPlane.TransformDirection(cameraDirectionPlaneSpace);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_28 = __this->___reflectionPlane_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_29 = V_3;
		NullCheck(L_28);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_30;
		L_30 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_28, L_29, NULL);
		V_0 = L_30;
		// cameraUpWorldSpace = reflectionPlane.TransformDirection(cameraUpPlaneSpace);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_31 = __this->___reflectionPlane_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_32 = V_4;
		NullCheck(L_31);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_33;
		L_33 = Transform_TransformDirection_m9BE1261DF2D48B7A4A27D31EE24D2D97F89E7757(L_31, L_32, NULL);
		V_1 = L_33;
		// cameraPositionWorldSpace = reflectionPlane.TransformPoint(cameraPositionPlaneSpace);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_34 = __this->___reflectionPlane_6;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_35 = V_5;
		NullCheck(L_34);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_36;
		L_36 = Transform_TransformPoint_m05BFF013DB830D7BFE44A007703694AE1062EE44(L_34, L_35, NULL);
		V_2 = L_36;
		// reflectionCamTransform.position = cameraPositionWorldSpace;
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_37 = __this->___reflectionCamTransform_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_38 = V_2;
		NullCheck(L_37);
		Transform_set_position_mA1A817124BB41B685043DED2A9BA48CDF37C4156(L_37, L_38, NULL);
		// reflectionCamTransform.LookAt(cameraPositionWorldSpace + cameraDirectionWorldSpace, cameraUpWorldSpace);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_39 = __this->___reflectionCamTransform_12;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_40 = V_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_41 = V_0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_42;
		L_42 = Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline(L_40, L_41, NULL);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_43 = V_1;
		NullCheck(L_39);
		Transform_LookAt_mBD38EDB5E915C5DA6C5A79D191DEE2C826A9FC2C(L_39, L_42, L_43, NULL);
		// }
		return;
	}
}
// System.Void WaterReflection::Validate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterReflection_Validate_m502E830C820B21FB6C83692F56E4C43DCA5DF19E (WaterReflection_t59B75D355AF4B5367D9273832B3581710859F585* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (mainCamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_0 = __this->___mainCamera_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0028;
		}
	}
	{
		// mainCamTransform = mainCamera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_2 = __this->___mainCamera_4;
		NullCheck(L_2);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_3;
		L_3 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_2, NULL);
		__this->___mainCamTransform_11 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___mainCamTransform_11), (void*)L_3);
		// isReady = true;
		__this->___isReady_10 = (bool)1;
		goto IL_002f;
	}

IL_0028:
	{
		// isReady = false;
		__this->___isReady_10 = (bool)0;
	}

IL_002f:
	{
		// if (reflectionCamera != null)
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_4 = __this->___reflectionCamera_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_5;
		L_5 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_4, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_5)
		{
			goto IL_0057;
		}
	}
	{
		// reflectionCamTransform = reflectionCamera.transform;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_6 = __this->___reflectionCamera_5;
		NullCheck(L_6);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_7;
		L_7 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_6, NULL);
		__this->___reflectionCamTransform_12 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___reflectionCamTransform_12), (void*)L_7);
		// isReady = true;
		__this->___isReady_10 = (bool)1;
		goto IL_005e;
	}

IL_0057:
	{
		// isReady = false;
		__this->___isReady_10 = (bool)0;
	}

IL_005e:
	{
		// if (isReady && copyCameraParamerers)
		bool L_8 = __this->___isReady_10;
		if (!L_8)
		{
			goto IL_009f;
		}
	}
	{
		bool L_9 = __this->___copyCameraParamerers_8;
		if (!L_9)
		{
			goto IL_009f;
		}
	}
	{
		// copyCameraParamerers = !copyCameraParamerers;
		bool L_10 = __this->___copyCameraParamerers_8;
		__this->___copyCameraParamerers_8 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		// reflectionCamera.CopyFrom(mainCamera);
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_11 = __this->___reflectionCamera_5;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_12 = __this->___mainCamera_4;
		NullCheck(L_11);
		Camera_CopyFrom_mFA5C3AB8E95EC4124249520ACEC6F7F25E5CDC52(L_11, L_12, NULL);
		// reflectionCamera.targetTexture = outputTexture;
		Camera_tA92CC927D7439999BC82DBEDC0AA45B470F9E184* L_13 = __this->___reflectionCamera_5;
		RenderTexture_tBA90C4C3AD9EECCFDDCC632D97C29FAB80D60D27* L_14 = __this->___outputTexture_7;
		NullCheck(L_13);
		Camera_set_targetTexture_mE6C740F21A72DA47FB5B1D31D208710738A836C4(L_13, L_14, NULL);
	}

IL_009f:
	{
		// }
		return;
	}
}
// System.Void WaterReflection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaterReflection__ctor_m9E43D7FFE829D81B2D6B290985815779F495C758 (WaterReflection_t59B75D355AF4B5367D9273832B3581710859F585* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CardFeatures::BuyCards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_BuyCards_m231C22A9BE35DDFC306DD60B0AA6C8486DA88C8D (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	{
		// buyCardScreen.SetActive(!buyCardScreen.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___buyCardScreen_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___buyCardScreen_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::TopMaritimeTrader()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_TopMaritimeTrader_mADA71A4F6F7C163D5D1F7B2B3E3BACA45EF01C07 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___TopMaritimeTraderRight_24;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.1f);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_4 = __this->___gainCoinButton_5;
		NullCheck(L_4);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = L_4->___coinsPerSec_78;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsPerSec_78;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.100000001f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_7, L_8, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_5, L_9, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_3, L_10, NULL);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_11;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_12 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_12);
		L_12->___coins_76 = L_13;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16;
		L_16 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_14, L_15, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_16;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_17 = __this->___newCardButton_8;
		NullCheck(L_17);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_17, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___cardSelectionScreen_9;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::EnchantedWaters()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_EnchantedWaters_mC02FB4558815E2965888FDC4C3B578756AB1C77B (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_3 = __this->___EnchantedWatersRight_29;
		NullCheck(L_3);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_3, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___EnchantedWatersRight2_30;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.05f);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsPerSec_78;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_8 = __this->___gainCoinButton_5;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___coinsPerSec_78;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.0500000007f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_9, L_10, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_7, L_11, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_5, L_12, NULL);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_13;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_14 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_14);
		L_14->___coins_76 = L_15;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_16, L_17, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_18;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_19 = __this->___newCardButton_8;
		NullCheck(L_19);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_19, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___cardSelectionScreen_9;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::EnchantedWatersEpic(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_EnchantedWatersEpic_m5DF986DF1AEDAC6AA4885E10266AFC8DE6B1FC40 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0071;
		}
	}
	{
		// GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.25);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsPerSec_78;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_8 = __this->___gainCoinButton_5;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___coinsPerSec_78;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((0.25), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_9, L_10, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_7, L_11, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_5, L_12, NULL);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_13;
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_14 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_15 = L_14;
		NullCheck(L_15);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16 = L_15->___gems_80;
		int32_t L_17 = ___cost0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_17, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_16, L_18, NULL);
		NullCheck(L_15);
		L_15->___gems_80 = L_19;
	}

IL_0071:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::MermaidsLove(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_MermaidsLove_mB93D409CFDE9EEED0A3871222B19ACFD8536B4C3 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		// GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.2f);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsPerSec_78;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_8 = __this->___gainCoinButton_5;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___coinsPerSec_78;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.200000003f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_9, L_10, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_7, L_11, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_5, L_12, NULL);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_13;
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_14 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_15 = L_14;
		NullCheck(L_15);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16 = L_15->___gems_80;
		int32_t L_17 = ___cost0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_17, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_16, L_18, NULL);
		NullCheck(L_15);
		L_15->___gems_80 = L_19;
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::HappySouls()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_HappySouls_mBF7BA233FFDC8E902D646E1310AADECEC041E96A (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___HappySoulsLeft_17;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___HappySoulsRight_28;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.2f);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_3 = __this->___gainCoinButton_5;
		NullCheck(L_3);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4 = L_3->___coinsPerSec_78;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_5 = __this->___gainCoinButton_5;
		NullCheck(L_5);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6 = L_5->___coinsPerSec_78;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.200000003f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_6, L_7, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_4, L_8, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_2, L_9, NULL);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_10;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_11 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_11);
		L_11->___coins_76 = L_12;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_13, L_14, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_15;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___newCardButton_8;
		NullCheck(L_16);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_16, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___cardSelectionScreen_9;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::AbundanceOfFish()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_AbundanceOfFish_m4974A012A4CBF461821E0EEA0284E38D1DF8B777 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___AbundanceOfFishRight_31;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.2f);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_3 = __this->___gainCoinButton_5;
		NullCheck(L_3);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4 = L_3->___coinsPerSec_78;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_5 = __this->___gainCoinButton_5;
		NullCheck(L_5);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6 = L_5->___coinsPerSec_78;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.200000003f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_6, L_7, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_4, L_8, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_2, L_9, NULL);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_10;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_11 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_11);
		L_11->___coins_76 = L_12;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_13, L_14, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_15;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___newCardButton_8;
		NullCheck(L_16);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_16, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___cardSelectionScreen_9;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::FishFrenzy()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_FishFrenzy_mFCB8638D76B9BC6C185E29A49700282F7809C358 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___FishFrenzyLeft_15;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___FishFrenzyRight_25;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (gainCoinButton.coinsClickValue * 0.2f);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_2 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_3 = L_2;
		NullCheck(L_3);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4 = L_3->___coinsClickValue_77;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_5 = __this->___gainCoinButton_5;
		NullCheck(L_5);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6 = L_5->___coinsClickValue_77;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_7 = __this->___gainCoinButton_5;
		NullCheck(L_7);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = L_7->___coinsClickValue_77;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.200000003f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_8, L_9, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_6, L_10, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_4, L_11, NULL);
		NullCheck(L_3);
		L_3->___coinsClickValue_77 = L_12;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_13 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_13);
		L_13->___coins_76 = L_14;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16;
		L_16 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_15, L_16, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_17;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_18 = __this->___newCardButton_8;
		NullCheck(L_18);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_18, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___cardSelectionScreen_9;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::HighSeesGambler()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_HighSeesGambler_mB397262756C29BC10E5491D8EE7E46FF8D8AEBEF (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___HighSeasGamblerRight_26;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// sellFish.gainedCoin += 1500;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_1 = __this->___sellFish_6;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_2 = L_1;
		NullCheck(L_2);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3 = L_2->___gainedCoin_7;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1500), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___gainedCoin_7 = L_5;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_6);
		L_6->___coins_76 = L_7;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_8, L_9, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_10;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___newCardButton_8;
		NullCheck(L_11);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_11, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___cardSelectionScreen_9;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::TheFishersTressure()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_TheFishersTressure_m92E1E742324C30F7B1926AD564B9CF7E068B2474 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// sellFish.gainedCoin += 1000;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_1 = __this->___sellFish_6;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_2 = L_1;
		NullCheck(L_2);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3 = L_2->___gainedCoin_7;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_3, L_4, NULL);
		NullCheck(L_2);
		L_2->___gainedCoin_7 = L_5;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_6);
		L_6->___coins_76 = L_7;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_8, L_9, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_10;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_11 = __this->___newCardButton_8;
		NullCheck(L_11);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_11, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_12 = __this->___cardSelectionScreen_9;
		NullCheck(L_12);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_12, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::FlipTheCoins(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_FlipTheCoins_m8DE53D486B029B52CCFD0CC953BACA59B2166158 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// sellFish.gainedCoin += 10000;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_5 = __this->___sellFish_6;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_6 = L_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___gainedCoin_7;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10000), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_7, L_8, NULL);
		NullCheck(L_6);
		L_6->___gainedCoin_7 = L_9;
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_10 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_11 = L_10;
		NullCheck(L_11);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12 = L_11->___gems_80;
		int32_t L_13 = ___cost0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_13, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_12, L_14, NULL);
		NullCheck(L_11);
		L_11->___gems_80 = L_15;
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::TheGoddessTresure(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_TheGoddessTresure_m656E835B72A814CEAA80D38F0653AB2DF1CD3DC6 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0054;
		}
	}
	{
		// sellFish.gainedCoin += 7000;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_5 = __this->___sellFish_6;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_6 = L_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___gainedCoin_7;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)7000), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_7, L_8, NULL);
		NullCheck(L_6);
		L_6->___gainedCoin_7 = L_9;
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_10 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_11 = L_10;
		NullCheck(L_11);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12 = L_11->___gems_80;
		int32_t L_13 = ___cost0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_13, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_12, L_14, NULL);
		NullCheck(L_11);
		L_11->___gems_80 = L_15;
	}

IL_0054:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::CruisingSouls(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_CruisingSouls_mFD7166B305A903AB360042723A13F8D9BDFBA60C (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0060;
		}
	}
	{
		// gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue * 2;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_5 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = L_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsClickValue_77;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_8 = __this->___gainCoinButton_5;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___coinsClickValue_77;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_9, L_10, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_7, L_11, NULL);
		NullCheck(L_6);
		L_6->___coinsClickValue_77 = L_12;
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_13 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_14 = L_13;
		NullCheck(L_14);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15 = L_14->___gems_80;
		int32_t L_16 = ___cost0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_16, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_15, L_17, NULL);
		NullCheck(L_14);
		L_14->___gems_80 = L_18;
	}

IL_0060:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::LifeElixir()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_LifeElixir_mC3040E7F04312C13A52286CBC82CAB1E37D3BCA8 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___LifeElixerLeft_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// HealthAndPriates.health = 3;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_1 = __this->___HealthAndPriates_7;
		NullCheck(L_1);
		L_1->___health_7 = 3;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_2 = __this->___gainCoinButton_5;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_2);
		L_2->___coins_76 = L_3;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_4, L_5, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_6;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_7 = __this->___newCardButton_8;
		NullCheck(L_7);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_7, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___cardSelectionScreen_9;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::MermaidsHeart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_MermaidsHeart_mCFDC0463E02DADCC3E3135730263957E5C3D901E (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___MermaidsHeartRight_22;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___MermaidsHeartRight2_23;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)0, NULL);
		// if (HealthAndPriates.health < 3 && HealthAndPriates.health > 0)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_3 = __this->___HealthAndPriates_7;
		NullCheck(L_3);
		int32_t L_4 = L_3->___health_7;
		if ((((int32_t)L_4) >= ((int32_t)3)))
		{
			goto IL_0053;
		}
	}
	{
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_5 = __this->___HealthAndPriates_7;
		NullCheck(L_5);
		int32_t L_6 = L_5->___health_7;
		if ((((int32_t)L_6) <= ((int32_t)0)))
		{
			goto IL_0053;
		}
	}
	{
		// HealthAndPriates.health += 1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_7 = __this->___HealthAndPriates_7;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_8 = L_7;
		NullCheck(L_8);
		int32_t L_9 = L_8->___health_7;
		NullCheck(L_8);
		L_8->___health_7 = ((int32_t)il2cpp_codegen_add(L_9, 1));
	}

IL_0053:
	{
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_10 = __this->___gainCoinButton_5;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_10);
		L_10->___coins_76 = L_11;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_12, L_13, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_14;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_15 = __this->___newCardButton_8;
		NullCheck(L_15);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_15, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_16 = __this->___cardSelectionScreen_9;
		NullCheck(L_16);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_16, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::BlowUpThePirateShip()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_BlowUpThePirateShip_mBECCDE12FEC1ECA504B091570FD058527F797388 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___BlowUpThePirtaeShipRight_27;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// healthAndPriates.pirateArriveTime = Random.Range(600f, 1200f);
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_1 = __this->___healthAndPriates_10;
		float L_2;
		L_2 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((600.0f), (1200.0f), NULL);
		NullCheck(L_1);
		L_1->___pirateArriveTime_8 = L_2;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_3 = __this->___gainCoinButton_5;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_3);
		L_3->___coins_76 = L_4;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_5, L_6, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_7;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___newCardButton_8;
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___cardSelectionScreen_9;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::WrathOfTheSeaGoddess2(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_WrathOfTheSeaGoddess2_mF352E11E24B602A880FF9135D3158C3BB156DDED (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_00bd;
		}
	}
	{
		// if (healthAndPriates.korsanPower > 10)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_5 = __this->___healthAndPriates_10;
		NullCheck(L_5);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6 = L_5->___korsanPower_15;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		bool L_8;
		L_8 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		// healthAndPriates.reducedPower += healthAndPriates.korsanPower + (healthAndPriates.korsanPower * 0.2);
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_9 = __this->___healthAndPriates_10;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_10 = L_9;
		NullCheck(L_10);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = L_10->___reducedPower_20;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_12 = __this->___healthAndPriates_10;
		NullCheck(L_12);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = L_12->___korsanPower_15;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_14 = __this->___healthAndPriates_10;
		NullCheck(L_14);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15 = L_14->___korsanPower_15;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16;
		L_16 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((0.20000000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_15, L_16, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_13, L_17, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_11, L_18, NULL);
		NullCheck(L_10);
		L_10->___reducedPower_20 = L_19;
	}

IL_0078:
	{
		// if (healthAndPriates.korsanPower <= 1)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_20 = __this->___healthAndPriates_10;
		NullCheck(L_20);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21 = L_20->___korsanPower_15;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22;
		L_22 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		bool L_23;
		L_23 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_00a1;
		}
	}
	{
		// healthAndPriates.korsanPower = 1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_24 = __this->___healthAndPriates_10;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25;
		L_25 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		NullCheck(L_24);
		L_24->___korsanPower_15 = L_25;
	}

IL_00a1:
	{
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_26 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_27 = L_26;
		NullCheck(L_27);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_28 = L_27->___gems_80;
		int32_t L_29 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_30;
		L_30 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_29, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_31;
		L_31 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_28, L_30, NULL);
		NullCheck(L_27);
		L_27->___gems_80 = L_31;
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::WrathOfTheSeaGoddess2More(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_WrathOfTheSeaGoddess2More_m670F304CFF43A202275F418BD24285918552EDE7 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_00bd;
		}
	}
	{
		// if (healthAndPriates.korsanPower > 10)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_5 = __this->___healthAndPriates_10;
		NullCheck(L_5);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6 = L_5->___korsanPower_15;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		bool L_8;
		L_8 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_6, L_7, NULL);
		if (!L_8)
		{
			goto IL_0078;
		}
	}
	{
		// healthAndPriates.reducedPower += healthAndPriates.korsanPower + (healthAndPriates.korsanPower * 0.25);
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_9 = __this->___healthAndPriates_10;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_10 = L_9;
		NullCheck(L_10);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = L_10->___reducedPower_20;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_12 = __this->___healthAndPriates_10;
		NullCheck(L_12);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = L_12->___korsanPower_15;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_14 = __this->___healthAndPriates_10;
		NullCheck(L_14);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15 = L_14->___korsanPower_15;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16;
		L_16 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((0.25), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_15, L_16, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_13, L_17, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_11, L_18, NULL);
		NullCheck(L_10);
		L_10->___reducedPower_20 = L_19;
	}

IL_0078:
	{
		// if (healthAndPriates.korsanPower <= 1)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_20 = __this->___healthAndPriates_10;
		NullCheck(L_20);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21 = L_20->___korsanPower_15;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22;
		L_22 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		bool L_23;
		L_23 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_21, L_22, NULL);
		if (!L_23)
		{
			goto IL_00a1;
		}
	}
	{
		// healthAndPriates.korsanPower = 1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_24 = __this->___healthAndPriates_10;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25;
		L_25 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		NullCheck(L_24);
		L_24->___korsanPower_15 = L_25;
	}

IL_00a1:
	{
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_26 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_27 = L_26;
		NullCheck(L_27);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_28 = L_27->___gems_80;
		int32_t L_29 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_30;
		L_30 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_29, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_31;
		L_31 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_28, L_30, NULL);
		NullCheck(L_27);
		L_27->___gems_80 = L_31;
	}

IL_00bd:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::SeaGuards()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_SeaGuards_mD003B17331B2F622BD428241BA9F97B2D6C82B15 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___SeaGuardsRight_32;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// if(healthAndPriates.defencePower >= 100)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_1 = __this->___healthAndPriates_10;
		NullCheck(L_1);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = L_1->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100), NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_2, L_3, NULL);
		if (!L_4)
		{
			goto IL_0039;
		}
	}
	{
		// healthAndPriates.defencePower = 50;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_5 = __this->___healthAndPriates_10;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)50), NULL);
		NullCheck(L_5);
		L_5->___defencePower_13 = L_6;
		goto IL_007d;
	}

IL_0039:
	{
		// healthAndPriates.defencePower += healthAndPriates.defencePower + (healthAndPriates.defencePower * 0.2);
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_7 = __this->___healthAndPriates_10;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_8 = L_7;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___defencePower_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_10 = __this->___healthAndPriates_10;
		NullCheck(L_10);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = L_10->___defencePower_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_12 = __this->___healthAndPriates_10;
		NullCheck(L_12);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = L_12->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((0.20000000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_13, L_14, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16;
		L_16 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_11, L_15, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_9, L_16, NULL);
		NullCheck(L_8);
		L_8->___defencePower_13 = L_17;
	}

IL_007d:
	{
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_18 = __this->___gainCoinButton_5;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_18);
		L_18->___coins_76 = L_19;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21;
		L_21 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22;
		L_22 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_20, L_21, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_22;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_23 = __this->___newCardButton_8;
		NullCheck(L_23);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_23, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___cardSelectionScreen_9;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::ShipreckSalvage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_ShipreckSalvage_m82097D9DC60A40AA2A44FE58CB014D8DDE98895B (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.15f * gainCoinButton.coinsClickValue);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_1 = L_0;
		NullCheck(L_1);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = L_1->___coinsClickValue_77;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_3 = __this->___gainCoinButton_5;
		NullCheck(L_3);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4 = L_3->___coinsClickValue_77;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.150000006f), NULL);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_5, L_7, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_4, L_8, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_2, L_9, NULL);
		NullCheck(L_1);
		L_1->___coinsClickValue_77 = L_10;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_11 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_11);
		L_11->___coins_76 = L_12;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_13, L_14, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_15;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___newCardButton_8;
		NullCheck(L_16);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_16, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___cardSelectionScreen_9;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::SeaferingCousins()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_SeaferingCousins_mE73B6B1DA49694FBCA6E6726DE58C18010C2F69C (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.15f * gainCoinButton.coinsClickValue);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_1 = L_0;
		NullCheck(L_1);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = L_1->___coinsClickValue_77;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_3 = __this->___gainCoinButton_5;
		NullCheck(L_3);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4 = L_3->___coinsClickValue_77;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.150000006f), NULL);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_5, L_7, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_4, L_8, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_2, L_9, NULL);
		NullCheck(L_1);
		L_1->___coinsClickValue_77 = L_10;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_11 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_11);
		L_11->___coins_76 = L_12;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_13, L_14, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_15;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___newCardButton_8;
		NullCheck(L_16);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_16, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___cardSelectionScreen_9;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::GrandfathersHeirloom()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_GrandfathersHeirloom_m3686D941C74513387107104157CD0790373E921E (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.075f * gainCoinButton.coinsClickValue);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_1 = L_0;
		NullCheck(L_1);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = L_1->___coinsClickValue_77;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_3 = __this->___gainCoinButton_5;
		NullCheck(L_3);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4 = L_3->___coinsClickValue_77;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.075000003f), NULL);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_5, L_7, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_4, L_8, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_2, L_9, NULL);
		NullCheck(L_1);
		L_1->___coinsClickValue_77 = L_10;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_11 = __this->___gainCoinButton_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_11);
		L_11->___coins_76 = L_12;
		// CardSelection.reachedFish *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_13, L_14, NULL);
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_15;
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_16 = __this->___newCardButton_8;
		NullCheck(L_16);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_16, (bool)0, NULL);
		// cardSelectionScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_17 = __this->___cardSelectionScreen_9;
		NullCheck(L_17);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_17, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardFeatures::TheMermaidsDiscovery(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_TheMermaidsDiscovery_m826AF33FC12B26DEFACC5D33E5FB517EEEB9BD9D (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_006d;
		}
	}
	{
		// GainCoinButton.cardUpgrades += gainCoinButton.coinsPerSec + (gainCoinButton.coinsPerSec * 0.2f);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsPerSec_78;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_8 = __this->___gainCoinButton_5;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___coinsPerSec_78;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.200000003f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_9, L_10, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_7, L_11, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_5, L_12, NULL);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_13;
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_14 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_15 = L_14;
		NullCheck(L_15);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16 = L_15->___gems_80;
		int32_t L_17 = ___cost0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_17, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_16, L_18, NULL);
		NullCheck(L_15);
		L_15->___gems_80 = L_19;
	}

IL_006d:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::LostFisherman(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_LostFisherman_mDC3F8AB7FDB39CA75410F34B03EC04EBBA6577AE (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0074;
		}
	}
	{
		// gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.225f * gainCoinButton.coinsClickValue);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_5 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = L_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsClickValue_77;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_8 = __this->___gainCoinButton_5;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___coinsClickValue_77;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.224999994f), NULL);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_11 = __this->___gainCoinButton_5;
		NullCheck(L_11);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12 = L_11->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_10, L_12, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_9, L_13, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_7, L_14, NULL);
		NullCheck(L_6);
		L_6->___coinsClickValue_77 = L_15;
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_16 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_17 = L_16;
		NullCheck(L_17);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18 = L_17->___gems_80;
		int32_t L_19 = ___cost0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20;
		L_20 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_19, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21;
		L_21 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_18, L_20, NULL);
		NullCheck(L_17);
		L_17->___gems_80 = L_21;
	}

IL_0074:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::BlueStone(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures_BlueStone_m65B2D5FF8BC2F1DDFC7AD06A12FE156210130E50 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, int32_t ___cost0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(gainCoinButton.gems > cost)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_5;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gems_80;
		int32_t L_2 = ___cost0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_2, NULL);
		bool L_4;
		L_4 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_00a4;
		}
	}
	{
		// gainCoinButton.coinsClickValue += gainCoinButton.coinsClickValue + (0.2f * gainCoinButton.coinsClickValue);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_5 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = L_5;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___coinsClickValue_77;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_8 = __this->___gainCoinButton_5;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___coinsClickValue_77;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.200000003f), NULL);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_11 = __this->___gainCoinButton_5;
		NullCheck(L_11);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12 = L_11->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_10, L_12, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_9, L_13, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_7, L_14, NULL);
		NullCheck(L_6);
		L_6->___coinsClickValue_77 = L_15;
		// GainCoinButton.cardUpgrades += GainCoinButton.cardUpgrades + (0.2f * GainCoinButton.cardUpgrades);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.200000003f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20;
		L_20 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_18, L_19, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21;
		L_21 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_17, L_20, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22;
		L_22 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_16, L_21, NULL);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_22;
		// gainCoinButton.gems -= cost;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_23 = __this->___gainCoinButton_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_24 = L_23;
		NullCheck(L_24);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25 = L_24->___gems_80;
		int32_t L_26 = ___cost0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_27;
		L_27 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_26, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_28;
		L_28 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_25, L_27, NULL);
		NullCheck(L_24);
		L_24->___gems_80 = L_28;
	}

IL_00a4:
	{
		// }
		return;
	}
}
// System.Void CardFeatures::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardFeatures__ctor_m88057E072AC60E6D9E9BAECF5D749986C50E7733 (CardFeatures_t8B853C3008D791C97D7EEB840A25FF7A97E6F146* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void CardSelection::NewCardButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSelection_NewCardButton_mF2C28EFD113006B5E9629652BE95DD96CF3E184F (CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719* __this, const RuntimeMethod* method) 
{
	{
		// cardSelectionScreen.SetActive(!cardSelectionScreen.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___cardSelectionScreen_5;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___cardSelectionScreen_5;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void CardSelection::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSelection_Update_mD2C22F972C1B477C693E0098B26E7AB8994F5E20 (CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// if(gainCoinButton.coins >= reachedFish && newCardButton.interactable == false)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_0 = __this->___gainCoinButton_4;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_005a;
		}
	}
	{
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_4 = __this->___newCardButton_6;
		NullCheck(L_4);
		bool L_5;
		L_5 = Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline(L_4, NULL);
		if (L_5)
		{
			goto IL_005a;
		}
	}
	{
		// cardRangeForLeft = Random.Range(1, 14);
		int32_t L_6;
		L_6 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)14), NULL);
		__this->___cardRangeForLeft_8 = L_6;
		// cardRangeForRight = Random.Range(1, 15);
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)15), NULL);
		__this->___cardRangeForRight_9 = L_7;
		// newCardButton.interactable = true;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_8 = __this->___newCardButton_6;
		NullCheck(L_8);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_8, (bool)1, NULL);
		// lockedImage.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = __this->___lockedImage_10;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		goto IL_0089;
	}

IL_005a:
	{
		// else if(gainCoinButton.coins < reachedFish)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_10 = __this->___gainCoinButton_4;
		NullCheck(L_10);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = L_10->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_13;
		L_13 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_11, L_12, NULL);
		if (!L_13)
		{
			goto IL_0089;
		}
	}
	{
		// newCardButton.interactable = false;
		Button_t6786514A57F7AFDEE5431112FEA0CAB24F5AE098* L_14 = __this->___newCardButton_6;
		NullCheck(L_14);
		Selectable_set_interactable_m8DD581C1AD99B2EFA8B3EE9AF69EDDF26688B492(L_14, (bool)0, NULL);
		// lockedImage.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_15 = __this->___lockedImage_10;
		NullCheck(L_15);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_15, (bool)1, NULL);
	}

IL_0089:
	{
		// switch(cardRangeForLeft)
		int32_t L_16 = __this->___cardRangeForLeft_8;
		V_0 = L_16;
		int32_t L_17 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_17, 1)))
		{
			case 0:
			{
				goto IL_00d1;
			}
			case 1:
			{
				goto IL_0172;
			}
			case 2:
			{
				goto IL_0213;
			}
			case 3:
			{
				goto IL_02b4;
			}
			case 4:
			{
				goto IL_0355;
			}
			case 5:
			{
				goto IL_03f6;
			}
			case 6:
			{
				goto IL_0497;
			}
			case 7:
			{
				goto IL_0538;
			}
			case 8:
			{
				goto IL_05d9;
			}
			case 9:
			{
				goto IL_067a;
			}
			case 10:
			{
				goto IL_071b;
			}
			case 11:
			{
				goto IL_07bc;
			}
			case 12:
			{
				goto IL_085d;
			}
		}
	}
	{
		goto IL_08f9;
	}

IL_00d1:
	{
		// LifeElixerLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_18 = __this->___LifeElixerLeft_11;
		NullCheck(L_18);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_18, (bool)1, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_19 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_19);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_19, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_20 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_20);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_20, (bool)0, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_21 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_21);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_21, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_22 = __this->___FishFrenzyLeft_15;
		NullCheck(L_22);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_22, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_23 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_23);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_23, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_24 = __this->___HappySoulsLeft_17;
		NullCheck(L_24);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_24, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_25 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_25);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_25, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_26 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_26);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_26, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_27 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_27);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_27, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_28 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_28);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_28, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_29 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_29);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_29, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_30 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_30);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_30, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_0172:
	{
		// MermaidsHeartLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_31 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_31);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_31, (bool)1, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___LifeElixerLeft_11;
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_33 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_33);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_33, (bool)0, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_34 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_34);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_34, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_35 = __this->___FishFrenzyLeft_15;
		NullCheck(L_35);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_35, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_36 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_36);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_36, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_37 = __this->___HappySoulsLeft_17;
		NullCheck(L_37);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_37, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_38 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_38);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_38, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_39 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_39);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_39, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_40);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_40, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_41 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_41);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_41, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_42 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_42);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_42, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_43 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_43);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_43, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_0213:
	{
		// TopMaritimeTraderLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_44 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_44);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_44, (bool)1, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_45 = __this->___LifeElixerLeft_11;
		NullCheck(L_45);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_45, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_46 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_46);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_46, (bool)0, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___FishFrenzyLeft_15;
		NullCheck(L_48);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_48, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_49 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_49);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_49, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_50 = __this->___HappySoulsLeft_17;
		NullCheck(L_50);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_50, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_51 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_51);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_51, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_52 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_52);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_52, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_53 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_53);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_53, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_54 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_54);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_54, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_55 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_55);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_55, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_56 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_56);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_56, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_02b4:
	{
		// TopMaritimeTraderLeft2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_57 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_57);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_57, (bool)1, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_58 = __this->___LifeElixerLeft_11;
		NullCheck(L_58);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_58, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_59 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_59);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_59, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_60 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_60);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_60, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_61 = __this->___FishFrenzyLeft_15;
		NullCheck(L_61);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_61, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_62 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_62);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_62, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_63 = __this->___HappySoulsLeft_17;
		NullCheck(L_63);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_63, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_64 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_64);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_64, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_65 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_65);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_65, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_66 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_66);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_66, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_67 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_67);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_67, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_68 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_68);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_68, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_69 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_69);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_69, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_0355:
	{
		// FishFrenzyLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_70 = __this->___FishFrenzyLeft_15;
		NullCheck(L_70);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_70, (bool)1, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_71);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_71, (bool)0, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___LifeElixerLeft_11;
		NullCheck(L_72);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_72, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_73);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_73, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_74 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_74);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_74, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_75);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_75, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_76 = __this->___HappySoulsLeft_17;
		NullCheck(L_76);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_76, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_77);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_77, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_78);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_78, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_79 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_79);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_79, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_80);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_80, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_81);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_81, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_82);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_82, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_03f6:
	{
		// TheFishersTressureLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_83 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_83);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_83, (bool)1, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_84 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_84);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_84, (bool)0, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_85 = __this->___LifeElixerLeft_11;
		NullCheck(L_85);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_85, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_86 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_86);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_86, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_87 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_87);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_87, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_88 = __this->___FishFrenzyLeft_15;
		NullCheck(L_88);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_88, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_89 = __this->___HappySoulsLeft_17;
		NullCheck(L_89);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_89, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_90 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_90);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_90, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_91 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_91);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_91, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_92 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_92);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_92, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_93 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_93);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_93, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_94 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_94);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_94, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_95 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_95);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_95, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_0497:
	{
		// HappySoulsLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_96 = __this->___HappySoulsLeft_17;
		NullCheck(L_96);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_96, (bool)1, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_97 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_97);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_97, (bool)0, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_98 = __this->___LifeElixerLeft_11;
		NullCheck(L_98);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_98, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_99);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_99, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_100 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_100);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_100, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_101 = __this->___FishFrenzyLeft_15;
		NullCheck(L_101);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_101, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_102 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_102);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_102, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_103);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_103, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_104 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_104);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_104, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_105 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_105);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_105, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_106 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_106);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_106, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_107 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_107);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_107, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_108 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_108);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_108, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_0538:
	{
		// EnchantedWatersLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_109 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_109);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_109, (bool)1, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_110 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_110);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_110, (bool)0, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_111 = __this->___LifeElixerLeft_11;
		NullCheck(L_111);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_111, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_112 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_112);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_112, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_113 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_113);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_113, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_114 = __this->___FishFrenzyLeft_15;
		NullCheck(L_114);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_114, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_115 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_115);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_115, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_116 = __this->___HappySoulsLeft_17;
		NullCheck(L_116);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_116, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_117 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_117);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_117, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_118 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_118);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_118, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_119 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_119);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_119, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_120 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_120);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_120, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_121 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_121);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_121, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_05d9:
	{
		// EnchantedWatersLeft2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_122 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_122);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_122, (bool)1, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_123 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_123);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_123, (bool)0, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_124 = __this->___LifeElixerLeft_11;
		NullCheck(L_124);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_124, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_125 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_125);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_125, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_126 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_126);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_126, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_127 = __this->___FishFrenzyLeft_15;
		NullCheck(L_127);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_127, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_128 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_128);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_128, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_129 = __this->___HappySoulsLeft_17;
		NullCheck(L_129);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_129, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_130 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_130);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_130, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_131 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_131);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_131, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_132 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_132);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_132, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_133 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_133);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_133, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_134 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_134);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_134, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_067a:
	{
		// EnchantedWatersLeft3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_135 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_135);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_135, (bool)1, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_136 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_136);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_136, (bool)0, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_137 = __this->___LifeElixerLeft_11;
		NullCheck(L_137);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_137, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_138 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_138);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_138, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_139 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_139);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_139, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_140 = __this->___FishFrenzyLeft_15;
		NullCheck(L_140);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_140, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_141 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_141);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_141, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_142 = __this->___HappySoulsLeft_17;
		NullCheck(L_142);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_142, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_143 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_143);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_143, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_144 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_144);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_144, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_145 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_145);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_145, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_146 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_146);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_146, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_147 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_147);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_147, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_071b:
	{
		// AbundanceOfFishLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_148 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_148);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_148, (bool)1, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_149 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_149);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_149, (bool)0, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_150 = __this->___LifeElixerLeft_11;
		NullCheck(L_150);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_150, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_151 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_151);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_151, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_152 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_152);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_152, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_153 = __this->___FishFrenzyLeft_15;
		NullCheck(L_153);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_153, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_154 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_154);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_154, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_155 = __this->___HappySoulsLeft_17;
		NullCheck(L_155);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_155, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_156 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_156);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_156, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_157 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_157);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_157, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_158 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_158);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_158, (bool)0, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_159 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_159);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_159, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_160 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_160);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_160, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_07bc:
	{
		// ShipreckSalvageLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_161 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_161);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_161, (bool)1, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_162 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_162);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_162, (bool)0, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_163 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_163);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_163, (bool)0, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_164 = __this->___LifeElixerLeft_11;
		NullCheck(L_164);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_164, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_165 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_165);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_165, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_166 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_166);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_166, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_167 = __this->___FishFrenzyLeft_15;
		NullCheck(L_167);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_167, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_168 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_168);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_168, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_169 = __this->___HappySoulsLeft_17;
		NullCheck(L_169);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_169, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_170 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_170);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_170, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_171 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_171);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_171, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_172 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_172);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_172, (bool)0, NULL);
		// grandfathersHeirloomLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_173 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_173);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_173, (bool)0, NULL);
		// break;
		goto IL_08f9;
	}

IL_085d:
	{
		// grandfathersHeirloomLeft.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_174 = __this->___grandfathersHeirloomLeft_23;
		NullCheck(L_174);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_174, (bool)1, NULL);
		// ShipreckSalvageLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_175 = __this->___ShipreckSalvageLeft_22;
		NullCheck(L_175);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_175, (bool)0, NULL);
		// AbundanceOfFishLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_176 = __this->___AbundanceOfFishLeft_21;
		NullCheck(L_176);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_176, (bool)0, NULL);
		// TopMaritimeTraderLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_177 = __this->___TopMaritimeTraderLeft2_14;
		NullCheck(L_177);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_177, (bool)0, NULL);
		// LifeElixerLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_178 = __this->___LifeElixerLeft_11;
		NullCheck(L_178);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_178, (bool)0, NULL);
		// MermaidsHeartLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_179 = __this->___MermaidsHeartLeft_12;
		NullCheck(L_179);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_179, (bool)0, NULL);
		// TopMaritimeTraderLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_180 = __this->___TopMaritimeTraderLeft_13;
		NullCheck(L_180);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_180, (bool)0, NULL);
		// FishFrenzyLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_181 = __this->___FishFrenzyLeft_15;
		NullCheck(L_181);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_181, (bool)0, NULL);
		// TheFishersTressureLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_182 = __this->___TheFishersTressureLeft_16;
		NullCheck(L_182);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_182, (bool)0, NULL);
		// HappySoulsLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_183 = __this->___HappySoulsLeft_17;
		NullCheck(L_183);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_183, (bool)0, NULL);
		// EnchantedWatersLeft.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_184 = __this->___EnchantedWatersLeft_18;
		NullCheck(L_184);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_184, (bool)0, NULL);
		// EnchantedWatersLeft2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_185 = __this->___EnchantedWatersLeft2_19;
		NullCheck(L_185);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_185, (bool)0, NULL);
		// EnchantedWatersLeft3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_186 = __this->___EnchantedWatersLeft3_20;
		NullCheck(L_186);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_186, (bool)0, NULL);
	}

IL_08f9:
	{
		// switch (cardRangeForRight)
		int32_t L_187 = __this->___cardRangeForRight_9;
		V_0 = L_187;
		int32_t L_188 = V_0;
		switch (((int32_t)il2cpp_codegen_subtract(L_188, 1)))
		{
			case 0:
			{
				goto IL_0941;
			}
			case 1:
			{
				goto IL_09ea;
			}
			case 2:
			{
				goto IL_0a93;
			}
			case 3:
			{
				goto IL_0b3c;
			}
			case 4:
			{
				goto IL_0be5;
			}
			case 5:
			{
				goto IL_0c8e;
			}
			case 6:
			{
				goto IL_0d37;
			}
			case 7:
			{
				goto IL_0de0;
			}
			case 8:
			{
				goto IL_0e89;
			}
			case 9:
			{
				goto IL_0f32;
			}
			case 10:
			{
				goto IL_0fdb;
			}
			case 11:
			{
				goto IL_1084;
			}
			case 12:
			{
				goto IL_112d;
			}
			case 13:
			{
				goto IL_11d6;
			}
		}
	}
	{
		return;
	}

IL_0941:
	{
		// MermaidsHeartRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_189 = __this->___MermaidsHeartRight_24;
		NullCheck(L_189);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_189, (bool)1, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_190 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_190);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_190, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_191 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_191);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_191, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_192 = __this->___FishFrenzyRight_27;
		NullCheck(L_192);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_192, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_193 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_193);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_193, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_194 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_194);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_194, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_195 = __this->___HappySoulsRight_30;
		NullCheck(L_195);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_195, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_196 = __this->___EnchantedWatersRight_31;
		NullCheck(L_196);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_196, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_197 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_197);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_197, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_198 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_198);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_198, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_199 = __this->___SeaGuardsRight_34;
		NullCheck(L_199);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_199, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_200 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_200);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_200, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_201 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_201);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_201, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_202 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_202);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_202, (bool)0, NULL);
		// break;
		return;
	}

IL_09ea:
	{
		// MermaidsHeartRight2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_203 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_203);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_203, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_204 = __this->___MermaidsHeartRight_24;
		NullCheck(L_204);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_204, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_205 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_205);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_205, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_206 = __this->___FishFrenzyRight_27;
		NullCheck(L_206);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_206, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_207 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_207);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_207, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_208 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_208);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_208, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_209 = __this->___HappySoulsRight_30;
		NullCheck(L_209);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_209, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_210 = __this->___EnchantedWatersRight_31;
		NullCheck(L_210);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_210, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_211 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_211);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_211, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_212 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_212);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_212, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_213 = __this->___SeaGuardsRight_34;
		NullCheck(L_213);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_213, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_214 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_214);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_214, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_215 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_215);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_215, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_216 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_216);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_216, (bool)0, NULL);
		// break;
		return;
	}

IL_0a93:
	{
		// TopMaritimeTraderRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_217 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_217);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_217, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_218 = __this->___MermaidsHeartRight_24;
		NullCheck(L_218);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_218, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_219 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_219);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_219, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_220 = __this->___FishFrenzyRight_27;
		NullCheck(L_220);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_220, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_221 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_221);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_221, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_222 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_222);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_222, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_223 = __this->___HappySoulsRight_30;
		NullCheck(L_223);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_223, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_224 = __this->___EnchantedWatersRight_31;
		NullCheck(L_224);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_224, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_225 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_225);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_225, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_226 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_226);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_226, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_227 = __this->___SeaGuardsRight_34;
		NullCheck(L_227);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_227, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_228 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_228);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_228, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_229 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_229);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_229, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_230 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_230);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_230, (bool)0, NULL);
		// break;
		return;
	}

IL_0b3c:
	{
		// FishFrenzyRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_231 = __this->___FishFrenzyRight_27;
		NullCheck(L_231);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_231, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_232 = __this->___MermaidsHeartRight_24;
		NullCheck(L_232);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_232, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_233 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_233);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_233, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_234 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_234);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_234, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_235 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_235);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_235, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_236 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_236);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_236, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_237 = __this->___HappySoulsRight_30;
		NullCheck(L_237);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_237, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_238 = __this->___EnchantedWatersRight_31;
		NullCheck(L_238);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_238, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_239 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_239);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_239, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_240 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_240);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_240, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_241 = __this->___SeaGuardsRight_34;
		NullCheck(L_241);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_241, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_242 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_242);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_242, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_243 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_243);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_243, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_244 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_244);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_244, (bool)0, NULL);
		// break;
		return;
	}

IL_0be5:
	{
		// HighSeasGamblerRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_245 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_245);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_245, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_246 = __this->___MermaidsHeartRight_24;
		NullCheck(L_246);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_246, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_247 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_247);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_247, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_248 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_248);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_248, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_249 = __this->___FishFrenzyRight_27;
		NullCheck(L_249);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_249, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_250 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_250);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_250, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_251 = __this->___HappySoulsRight_30;
		NullCheck(L_251);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_251, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_252 = __this->___EnchantedWatersRight_31;
		NullCheck(L_252);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_252, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_253 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_253);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_253, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_254 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_254);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_254, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_255 = __this->___SeaGuardsRight_34;
		NullCheck(L_255);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_255, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_256 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_256);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_256, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_257 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_257);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_257, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_258 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_258);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_258, (bool)0, NULL);
		// break;
		return;
	}

IL_0c8e:
	{
		// BlowUpThePirtaeShipRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_259 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_259);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_259, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_260 = __this->___MermaidsHeartRight_24;
		NullCheck(L_260);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_260, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_261 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_261);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_261, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_262 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_262);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_262, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_263 = __this->___FishFrenzyRight_27;
		NullCheck(L_263);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_263, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_264 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_264);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_264, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_265 = __this->___HappySoulsRight_30;
		NullCheck(L_265);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_265, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_266 = __this->___EnchantedWatersRight_31;
		NullCheck(L_266);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_266, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_267 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_267);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_267, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_268 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_268);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_268, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_269 = __this->___SeaGuardsRight_34;
		NullCheck(L_269);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_269, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_270 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_270);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_270, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_271 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_271);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_271, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_272 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_272);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_272, (bool)0, NULL);
		// break;
		return;
	}

IL_0d37:
	{
		// HappySoulsRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_273 = __this->___HappySoulsRight_30;
		NullCheck(L_273);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_273, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_274 = __this->___MermaidsHeartRight_24;
		NullCheck(L_274);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_274, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_275 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_275);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_275, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_276 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_276);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_276, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_277 = __this->___FishFrenzyRight_27;
		NullCheck(L_277);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_277, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_278 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_278);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_278, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_279 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_279);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_279, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_280 = __this->___EnchantedWatersRight_31;
		NullCheck(L_280);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_280, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_281 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_281);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_281, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_282 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_282);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_282, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_283 = __this->___SeaGuardsRight_34;
		NullCheck(L_283);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_283, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_284 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_284);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_284, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_285 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_285);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_285, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_286 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_286);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_286, (bool)0, NULL);
		// break;
		return;
	}

IL_0de0:
	{
		// EnchantedWatersRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_287 = __this->___EnchantedWatersRight_31;
		NullCheck(L_287);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_287, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_288 = __this->___MermaidsHeartRight_24;
		NullCheck(L_288);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_288, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_289 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_289);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_289, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_290 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_290);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_290, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_291 = __this->___FishFrenzyRight_27;
		NullCheck(L_291);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_291, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_292 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_292);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_292, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_293 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_293);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_293, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_294 = __this->___HappySoulsRight_30;
		NullCheck(L_294);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_294, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_295 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_295);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_295, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_296 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_296);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_296, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_297 = __this->___SeaGuardsRight_34;
		NullCheck(L_297);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_297, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_298 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_298);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_298, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_299 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_299);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_299, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_300 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_300);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_300, (bool)0, NULL);
		// break;
		return;
	}

IL_0e89:
	{
		// EnchantedWatersRight2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_301 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_301);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_301, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_302 = __this->___MermaidsHeartRight_24;
		NullCheck(L_302);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_302, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_303 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_303);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_303, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_304 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_304);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_304, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_305 = __this->___FishFrenzyRight_27;
		NullCheck(L_305);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_305, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_306 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_306);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_306, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_307 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_307);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_307, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_308 = __this->___HappySoulsRight_30;
		NullCheck(L_308);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_308, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_309 = __this->___EnchantedWatersRight_31;
		NullCheck(L_309);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_309, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_310 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_310);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_310, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_311 = __this->___SeaGuardsRight_34;
		NullCheck(L_311);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_311, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_312 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_312);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_312, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_313 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_313);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_313, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_314 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_314);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_314, (bool)0, NULL);
		// break;
		return;
	}

IL_0f32:
	{
		// AbundanceOfFishRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_315 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_315);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_315, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_316 = __this->___MermaidsHeartRight_24;
		NullCheck(L_316);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_316, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_317 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_317);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_317, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_318 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_318);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_318, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_319 = __this->___FishFrenzyRight_27;
		NullCheck(L_319);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_319, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_320 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_320);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_320, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_321 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_321);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_321, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_322 = __this->___HappySoulsRight_30;
		NullCheck(L_322);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_322, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_323 = __this->___EnchantedWatersRight_31;
		NullCheck(L_323);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_323, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_324 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_324);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_324, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_325 = __this->___SeaGuardsRight_34;
		NullCheck(L_325);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_325, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_326 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_326);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_326, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_327 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_327);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_327, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_328 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_328);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_328, (bool)0, NULL);
		// break;
		return;
	}

IL_0fdb:
	{
		// SeaGuardsRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_329 = __this->___SeaGuardsRight_34;
		NullCheck(L_329);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_329, (bool)1, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_330 = __this->___MermaidsHeartRight_24;
		NullCheck(L_330);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_330, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_331 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_331);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_331, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_332 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_332);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_332, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_333 = __this->___FishFrenzyRight_27;
		NullCheck(L_333);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_333, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_334 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_334);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_334, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_335 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_335);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_335, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_336 = __this->___HappySoulsRight_30;
		NullCheck(L_336);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_336, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_337 = __this->___EnchantedWatersRight_31;
		NullCheck(L_337);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_337, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_338 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_338);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_338, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_339 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_339);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_339, (bool)0, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_340 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_340);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_340, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_341 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_341);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_341, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_342 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_342);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_342, (bool)0, NULL);
		// break;
		return;
	}

IL_1084:
	{
		// SeafaringCousinsRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_343 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_343);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_343, (bool)1, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_344 = __this->___SeaGuardsRight_34;
		NullCheck(L_344);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_344, (bool)0, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_345 = __this->___MermaidsHeartRight_24;
		NullCheck(L_345);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_345, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_346 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_346);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_346, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_347 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_347);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_347, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_348 = __this->___FishFrenzyRight_27;
		NullCheck(L_348);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_348, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_349 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_349);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_349, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_350 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_350);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_350, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_351 = __this->___HappySoulsRight_30;
		NullCheck(L_351);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_351, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_352 = __this->___EnchantedWatersRight_31;
		NullCheck(L_352);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_352, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_353 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_353);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_353, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_354 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_354);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_354, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_355 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_355);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_355, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_356 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_356);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_356, (bool)0, NULL);
		// break;
		return;
	}

IL_112d:
	{
		// SeafaringCousinsRight2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_357 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_357);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_357, (bool)1, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_358 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_358);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_358, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_359 = __this->___SeaGuardsRight_34;
		NullCheck(L_359);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_359, (bool)0, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_360 = __this->___MermaidsHeartRight_24;
		NullCheck(L_360);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_360, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_361 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_361);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_361, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_362 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_362);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_362, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_363 = __this->___FishFrenzyRight_27;
		NullCheck(L_363);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_363, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_364 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_364);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_364, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_365 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_365);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_365, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_366 = __this->___HappySoulsRight_30;
		NullCheck(L_366);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_366, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_367 = __this->___EnchantedWatersRight_31;
		NullCheck(L_367);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_367, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_368 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_368);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_368, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_369 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_369);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_369, (bool)0, NULL);
		// GrandfathersHeirloomRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_370 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_370);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_370, (bool)0, NULL);
		// break;
		return;
	}

IL_11d6:
	{
		// GrandfathersHeirloomRight.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_371 = __this->___GrandfathersHeirloomRight_37;
		NullCheck(L_371);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_371, (bool)1, NULL);
		// SeafaringCousinsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_372 = __this->___SeafaringCousinsRight_35;
		NullCheck(L_372);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_372, (bool)0, NULL);
		// SeaGuardsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_373 = __this->___SeaGuardsRight_34;
		NullCheck(L_373);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_373, (bool)0, NULL);
		// MermaidsHeartRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_374 = __this->___MermaidsHeartRight_24;
		NullCheck(L_374);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_374, (bool)0, NULL);
		// MermaidsHeartRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_375 = __this->___MermaidsHeartRight2_25;
		NullCheck(L_375);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_375, (bool)0, NULL);
		// TopMaritimeTraderRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_376 = __this->___TopMaritimeTraderRight_26;
		NullCheck(L_376);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_376, (bool)0, NULL);
		// FishFrenzyRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_377 = __this->___FishFrenzyRight_27;
		NullCheck(L_377);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_377, (bool)0, NULL);
		// HighSeasGamblerRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_378 = __this->___HighSeasGamblerRight_28;
		NullCheck(L_378);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_378, (bool)0, NULL);
		// BlowUpThePirtaeShipRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_379 = __this->___BlowUpThePirtaeShipRight_29;
		NullCheck(L_379);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_379, (bool)0, NULL);
		// HappySoulsRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_380 = __this->___HappySoulsRight_30;
		NullCheck(L_380);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_380, (bool)0, NULL);
		// EnchantedWatersRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_381 = __this->___EnchantedWatersRight_31;
		NullCheck(L_381);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_381, (bool)0, NULL);
		// EnchantedWatersRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_382 = __this->___EnchantedWatersRight2_32;
		NullCheck(L_382);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_382, (bool)0, NULL);
		// AbundanceOfFishRight.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_383 = __this->___AbundanceOfFishRight_33;
		NullCheck(L_383);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_383, (bool)0, NULL);
		// SeafaringCousinsRight2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_384 = __this->___SeafaringCousinsRight2_36;
		NullCheck(L_384);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_384, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void CardSelection::LoadData(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSelection_LoadData_m5E8004A98B7772489C763A9C6639991886C9583D (CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// reachedFish = data.reachedFish;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = ___data0;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___reachedFish_84;
		((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7 = L_1;
		// }
		return;
	}
}
// System.Void CardSelection::SaveData(GameData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSelection_SaveData_mA994FCD6AF0B3E4567BEC3CEB71C8BA26C864D36 (CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data.reachedFish = reachedFish;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_0 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = ((CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_StaticFields*)il2cpp_codegen_static_fields_for(CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719_il2cpp_TypeInfo_var))->___reachedFish_7;
		NullCheck(L_1);
		L_1->___reachedFish_84 = L_2;
		// }
		return;
	}
}
// System.Void CardSelection::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CardSelection__ctor_m04E9857C97ECEBA7704F017F0B1783B18E1231E1 (CardSelection_tEC462004A4618EB165E53204D93D26F3A60EB719* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// DataPersistenceManager DataPersistenceManager::get_instance()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* DataPersistenceManager_get_instance_m01C3F5BCC51E7FABA894C34501EC63C4B82E8A5B (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DataPersistenceManager instance { get; private set; }
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0 = ((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_9;
		return L_0;
	}
}
// System.Void DataPersistenceManager::set_instance(DataPersistenceManager)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_set_instance_m745574F1B7D025B6EAA022465F9516AFC237A5D7 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DataPersistenceManager instance { get; private set; }
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0 = ___value0;
		((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
// System.Void DataPersistenceManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_Awake_mD1A199C3C5F494791FB01EED137D5BCD3831DB01 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6EEFAE4539DEC028819DA107A96DC7E2E691B25E);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(instance != null)
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0;
		L_0 = DataPersistenceManager_get_instance_m01C3F5BCC51E7FABA894C34501EC63C4B82E8A5B_inline(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_0017;
		}
	}
	{
		// Debug.LogError("Found more than  one Data Persistence Manager in the scene.");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(_stringLiteral6EEFAE4539DEC028819DA107A96DC7E2E691B25E, NULL);
	}

IL_0017:
	{
		// instance = this;
		DataPersistenceManager_set_instance_m745574F1B7D025B6EAA022465F9516AFC237A5D7_inline(__this, NULL);
		// }
		return;
	}
}
// System.Void DataPersistenceManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_Start_m24F9E645EC6E1FAA4AE256B3F1EB4FDEA7228194 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.dataHandler = new FileDataHandler(Application.persistentDataPath, fileName, useEncryption);
		String_t* L_0;
		L_0 = Application_get_persistentDataPath_mC58BD3E1A20732E0A536491DBCAE6505B1624399(NULL);
		String_t* L_1 = __this->___fileName_4;
		bool L_2 = __this->___useEncryption_5;
		FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* L_3 = (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA*)il2cpp_codegen_object_new(FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		FileDataHandler__ctor_m06BE209524BC172BFA590EA7AC82FDFAE0B188F2(L_3, L_0, L_1, L_2, NULL);
		__this->___dataHandler_8 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataHandler_8), (void*)L_3);
		// this.dataPersistenceObjects = FindAllDataPersistenceObjects();
		List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* L_4;
		L_4 = DataPersistenceManager_FindAllDataPersistenceObjects_mB7B08CD99CB13F631601F927D7E53280E6B6CE1D(__this, NULL);
		__this->___dataPersistenceObjects_7 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataPersistenceObjects_7), (void*)L_4);
		// LoadGame();
		DataPersistenceManager_LoadGame_mE5BFE59CFA8765A35449DA66918D46E347D5CC64(__this, NULL);
		// }
		return;
	}
}
// System.Void DataPersistenceManager::NewGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_NewGame_m1F7A0A953C2CC8EFA03D66B5F3E2809211DFF5C5 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.gameData = new GameData();
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6*)il2cpp_codegen_object_new(GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A(L_0, NULL);
		__this->___gameData_6 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameData_6), (void*)L_0);
		// }
		return;
	}
}
// System.Void DataPersistenceManager::LoadGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_LoadGame_mE5BFE59CFA8765A35449DA66918D46E347D5CC64 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4DC98E8C9F05691C863B801B71E8CCECB824000B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m190F8C52A51CF3A72B665BDA72B30B85F5C48072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5B7244D4BA2D27DAD10BE8B41B8DD253534F9C9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2C0417F19EB7C614C74BD93FAAF92AF134FA580E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA20C5A8CBDAF0C55245C3AD693FB7F7788D14467);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// this.gameData = dataHandler.Load();
		FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* L_0 = __this->___dataHandler_8;
		NullCheck(L_0);
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1;
		L_1 = FileDataHandler_Load_m0A73AE206E58A13E321446D52A62AD3E440480AD(L_0, NULL);
		__this->___gameData_6 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___gameData_6), (void*)L_1);
		// if(this.gameData == null)
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_2 = __this->___gameData_6;
		if (L_2)
		{
			goto IL_0029;
		}
	}
	{
		// Debug.Log("No data was found. Initializing data to defaults");
		il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB(_stringLiteralA20C5A8CBDAF0C55245C3AD693FB7F7788D14467, NULL);
		// NewGame();
		DataPersistenceManager_NewGame_m1F7A0A953C2CC8EFA03D66B5F3E2809211DFF5C5(__this, NULL);
	}

IL_0029:
	{
		// foreach(IDataPersistence dataPersistenceObj in dataPersistenceObjects)
		List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* L_3 = __this->___dataPersistenceObjects_7;
		NullCheck(L_3);
		Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043 L_4;
		L_4 = List_1_GetEnumerator_m2C0417F19EB7C614C74BD93FAAF92AF134FA580E(L_3, List_1_GetEnumerator_m2C0417F19EB7C614C74BD93FAAF92AF134FA580E_RuntimeMethod_var);
		V_0 = L_4;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_0054:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4DC98E8C9F05691C863B801B71E8CCECB824000B((&V_0), Enumerator_Dispose_m4DC98E8C9F05691C863B801B71E8CCECB824000B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0049_1;
			}

IL_0037_1:
			{
				// foreach(IDataPersistence dataPersistenceObj in dataPersistenceObjects)
				RuntimeObject* L_5;
				L_5 = Enumerator_get_Current_m5B7244D4BA2D27DAD10BE8B41B8DD253534F9C9A_inline((&V_0), Enumerator_get_Current_m5B7244D4BA2D27DAD10BE8B41B8DD253534F9C9A_RuntimeMethod_var);
				// dataPersistenceObj.LoadData(gameData);
				GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = __this->___gameData_6;
				NullCheck(L_5);
				InterfaceActionInvoker1< GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* >::Invoke(0 /* System.Void IDataPersistence::LoadData(GameData) */, IDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_il2cpp_TypeInfo_var, L_5, L_6);
			}

IL_0049_1:
			{
				// foreach(IDataPersistence dataPersistenceObj in dataPersistenceObjects)
				bool L_7;
				L_7 = Enumerator_MoveNext_m190F8C52A51CF3A72B665BDA72B30B85F5C48072((&V_0), Enumerator_MoveNext_m190F8C52A51CF3A72B665BDA72B30B85F5C48072_RuntimeMethod_var);
				if (L_7)
				{
					goto IL_0037_1;
				}
			}
			{
				goto IL_0062;
			}
		}// end try (depth: 1)
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_0062:
	{
		// }
		return;
	}
}
// System.Void DataPersistenceManager::SaveGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_SaveGame_m404977BEBEFAE09E0AA1948AD2D9E2C2DB87B97C (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m4DC98E8C9F05691C863B801B71E8CCECB824000B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_m190F8C52A51CF3A72B665BDA72B30B85F5C48072_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5B7244D4BA2D27DAD10BE8B41B8DD253534F9C9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m2C0417F19EB7C614C74BD93FAAF92AF134FA580E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// foreach(IDataPersistence dataPersistenceObj in dataPersistenceObjects)
		List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* L_0 = __this->___dataPersistenceObjects_7;
		NullCheck(L_0);
		Enumerator_t8C671B925CBBD0DD62D7F31A68252C15079B6043 L_1;
		L_1 = List_1_GetEnumerator_m2C0417F19EB7C614C74BD93FAAF92AF134FA580E(L_0, List_1_GetEnumerator_m2C0417F19EB7C614C74BD93FAAF92AF134FA580E_RuntimeMethod_var);
		V_0 = L_1;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_002b:
			{// begin finally (depth: 1)
				Enumerator_Dispose_m4DC98E8C9F05691C863B801B71E8CCECB824000B((&V_0), Enumerator_Dispose_m4DC98E8C9F05691C863B801B71E8CCECB824000B_RuntimeMethod_var);
				return;
			}// end finally (depth: 1)
		});
		try
		{// begin try (depth: 1)
			{
				goto IL_0020_1;
			}

IL_000e_1:
			{
				// foreach(IDataPersistence dataPersistenceObj in dataPersistenceObjects)
				RuntimeObject* L_2;
				L_2 = Enumerator_get_Current_m5B7244D4BA2D27DAD10BE8B41B8DD253534F9C9A_inline((&V_0), Enumerator_get_Current_m5B7244D4BA2D27DAD10BE8B41B8DD253534F9C9A_RuntimeMethod_var);
				// dataPersistenceObj.SaveData(ref gameData);
				GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_3 = (&__this->___gameData_6);
				NullCheck(L_2);
				InterfaceActionInvoker1< GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** >::Invoke(1 /* System.Void IDataPersistence::SaveData(GameData&) */, IDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_il2cpp_TypeInfo_var, L_2, L_3);
			}

IL_0020_1:
			{
				// foreach(IDataPersistence dataPersistenceObj in dataPersistenceObjects)
				bool L_4;
				L_4 = Enumerator_MoveNext_m190F8C52A51CF3A72B665BDA72B30B85F5C48072((&V_0), Enumerator_MoveNext_m190F8C52A51CF3A72B665BDA72B30B85F5C48072_RuntimeMethod_var);
				if (L_4)
				{
					goto IL_000e_1;
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
		// dataHandler.Save(gameData);
		FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* L_5 = __this->___dataHandler_8;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = __this->___gameData_6;
		NullCheck(L_5);
		FileDataHandler_Save_m506ED54491F48C87E4A9C37A3E7B94FBF07D6B41(L_5, L_6, NULL);
		// }
		return;
	}
}
// System.Void DataPersistenceManager::OnApplicationPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_OnApplicationPause_mBBAC88093D6E0E96BF3530877C53C64CAD0C7E35 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	{
		// SaveGame();
		DataPersistenceManager_SaveGame_m404977BEBEFAE09E0AA1948AD2D9E2C2DB87B97C(__this, NULL);
		// }
		return;
	}
}
// System.Void DataPersistenceManager::OnApplicationQuit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager_OnApplicationQuit_m74B5FE334BDBE61BA6327363B8B7BF1BC998A265 (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	{
		// SaveGame();
		DataPersistenceManager_SaveGame_m404977BEBEFAE09E0AA1948AD2D9E2C2DB87B97C(__this, NULL);
		// }
		return;
	}
}
// System.Collections.Generic.List`1<IDataPersistence> DataPersistenceManager::FindAllDataPersistenceObjects()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* DataPersistenceManager_FindAllDataPersistenceObjects_mB7B08CD99CB13F631601F927D7E53280E6B6CE1D (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerable_OfType_TisIDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_mD7616A582371E0CF308A71A5903E14C713EAA796_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m819694E5909017B7D2BD82BA53FE267138B1A8EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// IEnumerable<IDataPersistence> dataPersistenceObjects = FindObjectsOfType<MonoBehaviour>().OfType<IDataPersistence>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		MonoBehaviourU5BU5D_tEB91860B3CEE2D63A7833A2842EB9CE4547DDBD7* L_0;
		L_0 = Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C(Object_FindObjectsOfType_TisMonoBehaviour_t532A11E69716D348D8AA7F854AFCBFCB8AD17F71_mDF62FF06EFCF4912EC4EA0E6AB3CFEF74507E58C_RuntimeMethod_var);
		RuntimeObject* L_1;
		L_1 = Enumerable_OfType_TisIDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_mD7616A582371E0CF308A71A5903E14C713EAA796((RuntimeObject*)L_0, Enumerable_OfType_TisIDataPersistence_t5A987B696CE8ABB6154A36513A0BBDA2A5339F89_mD7616A582371E0CF308A71A5903E14C713EAA796_RuntimeMethod_var);
		// return new List<IDataPersistence>(dataPersistenceObjects);
		List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A* L_2 = (List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A*)il2cpp_codegen_object_new(List_1_tDC0CCD857AF49A05B4EDE86D9AC9AFD5D827902A_il2cpp_TypeInfo_var);
		NullCheck(L_2);
		List_1__ctor_m819694E5909017B7D2BD82BA53FE267138B1A8EA(L_2, L_1, List_1__ctor_m819694E5909017B7D2BD82BA53FE267138B1A8EA_RuntimeMethod_var);
		return L_2;
	}
}
// System.Void DataPersistenceManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DataPersistenceManager__ctor_m710F03D37E8A60D705899421142CDD4762C2194D (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void FileDataHandler::.ctor(System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDataHandler__ctor_m06BE209524BC172BFA590EA7AC82FDFAE0B188F2 (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, String_t* ___dataDirPath0, String_t* ___dataFileName1, bool ___useEncryption2, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral90F41662952421298541612D1187C6E2E4D8E2A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private string dataDirPath = "";
		__this->___dataDirPath_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataDirPath_0), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private string dataFileName = "";
		__this->___dataFileName_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataFileName_1), (void*)_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// private readonly string encryptionCodeWord = "word";
		__this->___encryptionCodeWord_3 = _stringLiteral90F41662952421298541612D1187C6E2E4D8E2A1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___encryptionCodeWord_3), (void*)_stringLiteral90F41662952421298541612D1187C6E2E4D8E2A1);
		// public FileDataHandler(string dataDirPath, string dataFileName, bool useEncryption)
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.dataDirPath = dataDirPath;
		String_t* L_0 = ___dataDirPath0;
		__this->___dataDirPath_0 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataDirPath_0), (void*)L_0);
		// this.dataFileName = dataFileName;
		String_t* L_1 = ___dataFileName1;
		__this->___dataFileName_1 = L_1;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___dataFileName_1), (void*)L_1);
		// this.useEncryption = useEncryption;
		bool L_2 = ___useEncryption2;
		__this->___useEncryption_2 = L_2;
		// }
		return;
	}
}
// GameData FileDataHandler::Load()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* FileDataHandler_Load_m0A73AE206E58A13E321446D52A62AD3E440480AD (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* V_1 = NULL;
	String_t* V_2 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_3 = NULL;
	StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	String_t* G_B16_2 = NULL;
	String_t* G_B16_3 = NULL;
	Exception_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	String_t* G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	String_t* G_B17_3 = NULL;
	{
		// string fullPath = Path.Combine(dataDirPath, dataFileName);
		String_t* L_0 = __this->___dataDirPath_0;
		String_t* L_1 = __this->___dataFileName_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		V_0 = L_2;
		// GameData loadedData = null;
		V_1 = (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6*)NULL;
		// if (File.Exists(fullPath))
		String_t* L_3 = V_0;
		bool L_4;
		L_4 = File_Exists_m95E329ABBE3EAD6750FE1989BBA6884457136D4A(L_3, NULL);
		if (!L_4)
		{
			goto IL_0094;
		}
	}
	try
	{// begin try (depth: 1)
		{
			// string dataToLoad = "";
			V_2 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
			// using(FileStream stream = new FileStream(fullPath, FileMode.Open))
			String_t* L_5 = V_0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_6 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			NullCheck(L_6);
			FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_6, L_5, 3, NULL);
			V_3 = L_6;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_004a_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_7 = V_3;
						if (!L_7)
						{
							goto IL_0053_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_8 = V_3;
						NullCheck(L_8);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_8);
					}

IL_0053_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using(StreamReader reader = new StreamReader(stream))
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_9 = V_3;
					StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_10 = (StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B*)il2cpp_codegen_object_new(StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B_il2cpp_TypeInfo_var);
					NullCheck(L_10);
					StreamReader__ctor_mAFA827D6D825FEC2C29C73B65C2DD1AB9076DEC7(L_10, L_9, NULL);
					V_4 = L_10;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_003c_2:
						{// begin finally (depth: 3)
							{
								StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_11 = V_4;
								if (!L_11)
								{
									goto IL_0047_2;
								}
							}
							{
								StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_12 = V_4;
								NullCheck(L_12);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_12);
							}

IL_0047_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						// dataToLoad = reader.ReadToEnd();
						StreamReader_t81027449065C1B0C339DB46241D8001A6F61130B* L_13 = V_4;
						NullCheck(L_13);
						String_t* L_14;
						L_14 = VirtualFuncInvoker0< String_t* >::Invoke(8 /* System.String System.IO.TextReader::ReadToEnd() */, L_13);
						V_2 = L_14;
						// }
						goto IL_0048_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0048_2:
				{
					// }
					goto IL_0054_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0054_1:
		{
			// if (useEncryption)
			bool L_15 = __this->___useEncryption_2;
			if (!L_15)
			{
				goto IL_0064_1;
			}
		}
		{
			// dataToLoad = EncryptDecrypt(dataToLoad);
			String_t* L_16 = V_2;
			String_t* L_17;
			L_17 = FileDataHandler_EncryptDecrypt_m5B342D3728359C90233A998F884448ABDD2F576D(__this, L_16, NULL);
			V_2 = L_17;
		}

IL_0064_1:
		{
			// loadedData = JsonUtility.FromJson<GameData>(dataToLoad);
			String_t* L_18 = V_2;
			GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_19;
			L_19 = JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8(L_18, JsonUtility_FromJson_TisGameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6_mA26EC7D424EA3D870035D10DF80D8BD3F6FD8DE8_RuntimeMethod_var);
			V_1 = L_19;
			// }
			goto IL_0094;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_006d;
		}
		throw e;
	}

CATCH_006d:
	{// begin catch(System.Exception)
		{
			// catch(Exception e)
			V_5 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Error occured when trying to load data from file: " + fullPath + "\n" + e);
			String_t* L_20 = V_0;
			Exception_t* L_21 = V_5;
			Exception_t* L_22 = L_21;
			G_B15_0 = L_22;
			G_B15_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
			G_B15_2 = L_20;
			G_B15_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D69F9CA141470C6D56D54B83BD0CF454FC282EC));
			if (L_22)
			{
				G_B16_0 = L_22;
				G_B16_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
				G_B16_2 = L_20;
				G_B16_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral8D69F9CA141470C6D56D54B83BD0CF454FC282EC));
				goto IL_0083;
			}
		}
		{
			G_B17_0 = ((String_t*)(NULL));
			G_B17_1 = G_B15_1;
			G_B17_2 = G_B15_2;
			G_B17_3 = G_B15_3;
			goto IL_0088;
		}

IL_0083:
		{
			NullCheck(G_B16_0);
			String_t* L_23;
			L_23 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B16_0);
			G_B17_0 = L_23;
			G_B17_1 = G_B16_1;
			G_B17_2 = G_B16_2;
			G_B17_3 = G_B16_3;
		}

IL_0088:
		{
			String_t* L_24;
			L_24 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B17_3, G_B17_2, G_B17_1, G_B17_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_24, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_0094;
		}
	}// end catch (depth: 1)

IL_0094:
	{
		// return loadedData;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_25 = V_1;
		return L_25;
	}
}
// System.Void FileDataHandler::Save(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void FileDataHandler_Save_m506ED54491F48C87E4A9C37A3E7B94FBF07D6B41 (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* V_2 = NULL;
	StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* V_3 = NULL;
	Exception_t* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	Exception_t* G_B16_0 = NULL;
	String_t* G_B16_1 = NULL;
	String_t* G_B16_2 = NULL;
	String_t* G_B16_3 = NULL;
	Exception_t* G_B15_0 = NULL;
	String_t* G_B15_1 = NULL;
	String_t* G_B15_2 = NULL;
	String_t* G_B15_3 = NULL;
	String_t* G_B17_0 = NULL;
	String_t* G_B17_1 = NULL;
	String_t* G_B17_2 = NULL;
	String_t* G_B17_3 = NULL;
	{
		// string fullPath = Path.Combine(dataDirPath, dataFileName);
		String_t* L_0 = __this->___dataDirPath_0;
		String_t* L_1 = __this->___dataFileName_1;
		il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Path_Combine_m1ADAC05CDA2D1D61B172DF65A81E86592696BEAE(L_0, L_1, NULL);
		V_0 = L_2;
	}
	try
	{// begin try (depth: 1)
		{
			// Directory.CreateDirectory(Path.GetDirectoryName(fullPath));
			String_t* L_3 = V_0;
			il2cpp_codegen_runtime_class_init_inline(Path_t8A38A801D0219E8209C1B1D90D82D4D755D998BC_il2cpp_TypeInfo_var);
			String_t* L_4;
			L_4 = Path_GetDirectoryName_m428BADBE493A3927B51A13DEF658929B430516F6(L_3, NULL);
			DirectoryInfo_tEAEEC018EB49B4A71907FFEAFE935FAA8F9C1FE2* L_5;
			L_5 = Directory_CreateDirectory_m16EC5CE8561A997C6635E06DC24C77590F29D94F(L_4, NULL);
			// string dataToStore = JsonUtility.ToJson(data, true);
			GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = ___data0;
			String_t* L_7;
			L_7 = JsonUtility_ToJson_m53A1FEE0D388CF3A629E093C04B5E1A6D5463B53(L_6, (bool)1, NULL);
			V_1 = L_7;
			// if (useEncryption)
			bool L_8 = __this->___useEncryption_2;
			if (!L_8)
			{
				goto IL_0036_1;
			}
		}
		{
			// dataToStore = EncryptDecrypt(dataToStore);
			String_t* L_9 = V_1;
			String_t* L_10;
			L_10 = FileDataHandler_EncryptDecrypt_m5B342D3728359C90233A998F884448ABDD2F576D(__this, L_9, NULL);
			V_1 = L_10;
		}

IL_0036_1:
		{
			// using(FileStream stream = new FileStream(fullPath, FileMode.Create))
			String_t* L_11 = V_0;
			FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_12 = (FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8*)il2cpp_codegen_object_new(FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8_il2cpp_TypeInfo_var);
			NullCheck(L_12);
			FileStream__ctor_m78499F9BE2BE31DA34F123B4399AA457716BD6E6(L_12, L_11, 2, NULL);
			V_2 = L_12;
		}
		{
			auto __finallyBlock = il2cpp::utils::Finally([&]
			{

FINALLY_005a_1:
				{// begin finally (depth: 2)
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_13 = V_2;
						if (!L_13)
						{
							goto IL_0063_1;
						}
					}
					{
						FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_14 = V_2;
						NullCheck(L_14);
						InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_14);
					}

IL_0063_1:
					{
						return;
					}
				}// end finally (depth: 2)
			});
			try
			{// begin try (depth: 2)
				{
					// using(StreamWriter writer = new StreamWriter(stream))
					FileStream_t07C7222EE10B75F352B89B76E60820160FF10AD8* L_15 = V_2;
					StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_16 = (StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4*)il2cpp_codegen_object_new(StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4_il2cpp_TypeInfo_var);
					NullCheck(L_16);
					StreamWriter__ctor_m54CE9C47ED974C0589400DA9BC2AB3F7F481595B(L_16, L_15, NULL);
					V_3 = L_16;
				}
				{
					auto __finallyBlock = il2cpp::utils::Finally([&]
					{

FINALLY_004e_2:
						{// begin finally (depth: 3)
							{
								StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_17 = V_3;
								if (!L_17)
								{
									goto IL_0057_2;
								}
							}
							{
								StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_18 = V_3;
								NullCheck(L_18);
								InterfaceActionInvoker0::Invoke(0 /* System.Void System.IDisposable::Dispose() */, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, L_18);
							}

IL_0057_2:
							{
								return;
							}
						}// end finally (depth: 3)
					});
					try
					{// begin try (depth: 3)
						// writer.Write(dataToStore);
						StreamWriter_t6E7DF7D524AA3C018A65F62EE80779873ED4D1E4* L_19 = V_3;
						String_t* L_20 = V_1;
						NullCheck(L_19);
						VirtualActionInvoker1< String_t* >::Invoke(10 /* System.Void System.IO.TextWriter::Write(System.String) */, L_19, L_20);
						// }
						goto IL_0058_2;
					}// end try (depth: 3)
					catch(Il2CppExceptionWrapper& e)
					{
						__finallyBlock.StoreException(e.ex);
					}
				}

IL_0058_2:
				{
					// }
					goto IL_0064_1;
				}
			}// end try (depth: 2)
			catch(Il2CppExceptionWrapper& e)
			{
				__finallyBlock.StoreException(e.ex);
			}
		}

IL_0064_1:
		{
			// }
			goto IL_008d;
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0066;
		}
		throw e;
	}

CATCH_0066:
	{// begin catch(System.Exception)
		{
			// catch(Exception e)
			V_4 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));
			// Debug.LogError("Error occured when trying to save data to file: " + fullPath + "\n" + e);
			String_t* L_21 = V_0;
			Exception_t* L_22 = V_4;
			Exception_t* L_23 = L_22;
			G_B15_0 = L_23;
			G_B15_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
			G_B15_2 = L_21;
			G_B15_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9817253071976111AD0DB47307FE33DCB0D06673));
			if (L_23)
			{
				G_B16_0 = L_23;
				G_B16_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral00B28FF06B788B9B67C6B259800F404F9F3761FD));
				G_B16_2 = L_21;
				G_B16_3 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9817253071976111AD0DB47307FE33DCB0D06673));
				goto IL_007c;
			}
		}
		{
			G_B17_0 = ((String_t*)(NULL));
			G_B17_1 = G_B15_1;
			G_B17_2 = G_B15_2;
			G_B17_3 = G_B15_3;
			goto IL_0081;
		}

IL_007c:
		{
			NullCheck(G_B16_0);
			String_t* L_24;
			L_24 = VirtualFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, G_B16_0);
			G_B17_0 = L_24;
			G_B17_1 = G_B16_1;
			G_B17_2 = G_B16_2;
			G_B17_3 = G_B16_3;
		}

IL_0081:
		{
			String_t* L_25;
			L_25 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(G_B17_3, G_B17_2, G_B17_1, G_B17_0, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2(L_25, NULL);
			// }
			IL2CPP_POP_ACTIVE_EXCEPTION();
			goto IL_008d;
		}
	}// end catch (depth: 1)

IL_008d:
	{
		// }
		return;
	}
}
// System.String FileDataHandler::EncryptDecrypt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* FileDataHandler_EncryptDecrypt_m5B342D3728359C90233A998F884448ABDD2F576D (FileDataHandler_t4F7FBFE4E6146B9759F20CACA17F555A8AA6A6FA* __this, String_t* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	Il2CppChar V_2 = 0x0;
	{
		// string modifiedData = "";
		V_0 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// for(int i = 0; i < data.Length; i++)
		V_1 = 0;
		goto IL_003e;
	}

IL_000a:
	{
		// modifiedData += (char)(data[i] ^ encryptionCodeWord[i % encryptionCodeWord.Length]);
		String_t* L_0 = V_0;
		String_t* L_1 = ___data0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		Il2CppChar L_3;
		L_3 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_1, L_2, NULL);
		String_t* L_4 = __this->___encryptionCodeWord_3;
		int32_t L_5 = V_1;
		String_t* L_6 = __this->___encryptionCodeWord_3;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		NullCheck(L_4);
		Il2CppChar L_8;
		L_8 = String_get_Chars_mC49DF0CD2D3BE7BE97B3AD9C995BE3094F8E36D3(L_4, ((int32_t)(L_5%L_7)), NULL);
		V_2 = ((int32_t)(uint16_t)((int32_t)((int32_t)L_3^(int32_t)L_8)));
		String_t* L_9;
		L_9 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_10;
		L_10 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_0, L_9, NULL);
		V_0 = L_10;
		// for(int i = 0; i < data.Length; i++)
		int32_t L_11 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_11, 1));
	}

IL_003e:
	{
		// for(int i = 0; i < data.Length; i++)
		int32_t L_12 = V_1;
		String_t* L_13 = ___data0;
		NullCheck(L_13);
		int32_t L_14;
		L_14 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_13, NULL);
		if ((((int32_t)L_12) < ((int32_t)L_14)))
		{
			goto IL_000a;
		}
	}
	{
		// return modifiedData;
		String_t* L_15 = V_0;
		return L_15;
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
// System.Void GameData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameData__ctor_mA9048174D2C20A10AD865A4B919045878E27099A (GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public GameData()
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		// this.fish = 0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0;
		L_0 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___fish_0 = L_0;
		// this.coinsClickValue = 1;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1;
		L_1 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		__this->___coinsClickValue_1 = L_1;
		// this.coinsPerSec = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2;
		L_2 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___coinsPerSec_2 = L_2;
		// this.cardUpgrades = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___cardUpgrades_3 = L_3;
		// this.gems = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___gems_4 = L_4;
		// this.gemBoost = 1;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		__this->___gemBoost_5 = L_5;
		// this.gainedCoin = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___gainedCoin_45 = L_6;
		// this.defencePower = 1;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		__this->___defencePower_78 = L_7;
		// this.GuardCount = 1;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		__this->___GuardCount_79 = L_8;
		// this.reducePower = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___reducePower_80 = L_9;
		// this.takenMoney = 5000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)5000), NULL);
		__this->___takenMoney_82 = L_10;
		// this.health = 3;
		__this->___health_81 = 3;
		// this.productionUpgrade1Cost = 500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		__this->___productionUpgrade1Cost_6 = L_11;
		// this.productionUpgrade2Cost = 10000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10000), NULL);
		__this->___productionUpgrade2Cost_8 = L_12;
		// this.productionUpgrade3Cost = 15000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)15000), NULL);
		__this->___productionUpgrade3Cost_11 = L_13;
		// this.productionUpgrade4Cost = 20000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)20000), NULL);
		__this->___productionUpgrade4Cost_14 = L_14;
		// this.productionUpgrade5Cost = 25000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)25000), NULL);
		__this->___productionUpgrade5Cost_17 = L_15;
		// this.productionUpgrade6Cost = 30000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16;
		L_16 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)30000), NULL);
		__this->___productionUpgrade6Cost_20 = L_16;
		// this.productionUpgrade7Cost = 35000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)35000), NULL);
		__this->___productionUpgrade7Cost_23 = L_17;
		// this.productionUpgrade8Cost = 40000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)40000), NULL);
		__this->___productionUpgrade8Cost_26 = L_18;
		// this.productionUpgrade1Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade1Level_7 = L_19;
		// this.productionUpgrade2Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20;
		L_20 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade2Level_10 = L_20;
		// this.productionUpgrade3Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21;
		L_21 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade3Level_13 = L_21;
		// this.productionUpgrade4Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22;
		L_22 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade4Level_16 = L_22;
		// this.productionUpgrade5Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23;
		L_23 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade5Level_19 = L_23;
		// this.productionUpgrade6Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_24;
		L_24 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade6Level_22 = L_24;
		// this.productionUpgrade7Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25;
		L_25 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade7Level_25 = L_25;
		// this.productionUpgrade8Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26;
		L_26 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade8Level_28 = L_26;
		// this.productionUpgrade2Power = 5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_27;
		L_27 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(5, NULL);
		__this->___productionUpgrade2Power_9 = L_27;
		// this.productionUpgrade3Power = 10;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_28;
		L_28 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		__this->___productionUpgrade3Power_12 = L_28;
		// this.productionUpgrade4Power = 15;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29;
		L_29 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)15), NULL);
		__this->___productionUpgrade4Power_15 = L_29;
		// this.productionUpgrade5Power = 20;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_30;
		L_30 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)20), NULL);
		__this->___productionUpgrade5Power_18 = L_30;
		// this.productionUpgrade6Power = 25;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_31;
		L_31 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)25), NULL);
		__this->___productionUpgrade6Power_21 = L_31;
		// this.productionUpgrade7Power = 30;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_32;
		L_32 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)30), NULL);
		__this->___productionUpgrade7Power_24 = L_32;
		// this.productionUpgrade8Power = 35;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_33;
		L_33 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)35), NULL);
		__this->___productionUpgrade8Power_27 = L_33;
		// this.clickUpgrade1Cost = 100;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_34;
		L_34 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100), NULL);
		__this->___clickUpgrade1Cost_29 = L_34;
		// this.clickUpgrade2Cost = 5000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35;
		L_35 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)5000), NULL);
		__this->___clickUpgrade2Cost_31 = L_35;
		// this.clickUpgrade3Cost = 12000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_36;
		L_36 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)12000), NULL);
		__this->___clickUpgrade3Cost_33 = L_36;
		// this.clickUpgrade4Cost = 19000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_37;
		L_37 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)19000), NULL);
		__this->___clickUpgrade4Cost_35 = L_37;
		// this.clickUpgrade5Cost = 26000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_38;
		L_38 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)26000), NULL);
		__this->___clickUpgrade5Cost_37 = L_38;
		// this.clickUpgrade6Cost = 33000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_39;
		L_39 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)33000), NULL);
		__this->___clickUpgrade6Cost_39 = L_39;
		// this.clickUpgrade7Cost = 40000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_40;
		L_40 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)40000), NULL);
		__this->___clickUpgrade7Cost_41 = L_40;
		// this.clickUpgrade8Cost = 47000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_41;
		L_41 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)47000), NULL);
		__this->___clickUpgrade8Cost_43 = L_41;
		// this.clickUpgrade1Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_42;
		L_42 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade1Level_30 = L_42;
		// this.clickUpgrade2Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_43;
		L_43 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade2Level_32 = L_43;
		// this.clickUpgrade3Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_44;
		L_44 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade3Level_34 = L_44;
		// this.clickUpgrade4Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_45;
		L_45 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade4Level_36 = L_45;
		// this.clickUpgrade5Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_46;
		L_46 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade5Level_38 = L_46;
		// this.clickUpgrade6Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_47;
		L_47 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade6Level_40 = L_47;
		// this.clickUpgrade7Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_48;
		L_48 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade7Level_42 = L_48;
		// this.clickUpgrade8Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_49;
		L_49 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade8Level_44 = L_49;
		// this.defenceUpgrade1Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_50;
		L_50 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___defenceUpgrade1Level_54 = L_50;
		// this.defenceUpgrade2Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_51;
		L_51 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___defenceUpgrade2Level_55 = L_51;
		// this.defenceUpgrade3Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_52;
		L_52 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___defenceUpgrade3Level_56 = L_52;
		// this.defenceUpgrade4Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_53;
		L_53 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___defenceUpgrade4Level_57 = L_53;
		// this.defenceUpgrade5Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_54;
		L_54 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___defenceUpgrade5Level_58 = L_54;
		// this.defenceUpgrade6Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_55;
		L_55 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___defenceUpgrade6Level_59 = L_55;
		// this.defenceUpgrade7Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_56;
		L_56 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___defenceUpgrade7Level_60 = L_56;
		// this.defenceUpgrade8Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_57;
		L_57 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___defenceUpgrade8Level_61 = L_57;
		// this.defenceUpgrade1Cost = 300;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_58;
		L_58 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)300), NULL);
		__this->___defenceUpgrade1Cost_46 = L_58;
		// this.defenceUpgrade2Cost = 2000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_59;
		L_59 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)2000), NULL);
		__this->___defenceUpgrade2Cost_47 = L_59;
		// this.defenceUpgrade3Cost = 3000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_60;
		L_60 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)3000), NULL);
		__this->___defenceUpgrade3Cost_48 = L_60;
		// this.defenceUpgrade4Cost = 4000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_61;
		L_61 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)4000), NULL);
		__this->___defenceUpgrade4Cost_49 = L_61;
		// this.defenceUpgrade5Cost = 5000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_62;
		L_62 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)5000), NULL);
		__this->___defenceUpgrade5Cost_50 = L_62;
		// this.defenceUpgrade6Cost = 6000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_63;
		L_63 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)6000), NULL);
		__this->___defenceUpgrade6Cost_51 = L_63;
		// this.defenceUpgrade7Cost = 7000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_64;
		L_64 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)7000), NULL);
		__this->___defenceUpgrade7Cost_52 = L_64;
		// this.defenceUpgrade8Cost = 8000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_65;
		L_65 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)8000), NULL);
		__this->___defenceUpgrade8Cost_53 = L_65;
		// this.soldierUpgrade1Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_66;
		L_66 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___soldierUpgrade1Level_70 = L_66;
		// this.soldierUpgrade2Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_67;
		L_67 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___soldierUpgrade2Level_71 = L_67;
		// this.soldierUpgrade3Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_68;
		L_68 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___soldierUpgrade3Level_72 = L_68;
		// this.soldierUpgrade4Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_69;
		L_69 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___soldierUpgrade4Level_73 = L_69;
		// this.soldierUpgrade5Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_70;
		L_70 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___soldierUpgrade5Level_74 = L_70;
		// this.soldierUpgrade6Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_71;
		L_71 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___soldierUpgrade6Level_75 = L_71;
		// this.soldierUpgrade7Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_72;
		L_72 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___soldierUpgrade7Level_76 = L_72;
		// this.soldierUpgrade8Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_73;
		L_73 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___soldierUpgrade8Level_77 = L_73;
		// this.soldierUpgrade1Cost = 500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_74;
		L_74 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		__this->___soldierUpgrade1Cost_62 = L_74;
		// this.soldierUpgrade2Cost = 10000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_75;
		L_75 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10000), NULL);
		__this->___soldierUpgrade2Cost_63 = L_75;
		// this.soldierUpgrade3Cost = 15000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_76;
		L_76 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)15000), NULL);
		__this->___soldierUpgrade3Cost_64 = L_76;
		// this.soldierUpgrade4Cost = 20000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_77;
		L_77 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)20000), NULL);
		__this->___soldierUpgrade4Cost_65 = L_77;
		// this.soldierUpgrade5Cost = 25000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_78;
		L_78 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)25000), NULL);
		__this->___soldierUpgrade5Cost_66 = L_78;
		// this.soldierUpgrade6Cost = 30000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_79;
		L_79 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)30000), NULL);
		__this->___soldierUpgrade6Cost_67 = L_79;
		// this.soldierUpgrade7Cost = 35000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_80;
		L_80 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)35000), NULL);
		__this->___soldierUpgrade7Cost_68 = L_80;
		// this.soldierUpgrade8Cost = 40000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_81;
		L_81 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)40000), NULL);
		__this->___soldierUpgrade8Cost_69 = L_81;
		// this.reachedFish = 1000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_82;
		L_82 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		__this->___reachedFish_84 = L_82;
		// this.say? = 0;
		__this->___sayU131_85 = 0;
		// this.inGameTime = 0;
		__this->___inGameTime_83 = (0.0);
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
// System.Void DayControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DayControl__ctor_m5CCC4FBFD370F72362BAED647F3D9B73EA96BAFB (DayControl_tC5CBA834D94CF7A4F63C9D9D1E542994A3E0BD6A* __this, const RuntimeMethod* method) 
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
// System.Void LightManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightManager_Update_m8998287C553BF59587FCAA37C99F16F0DD42AEEB (LightManager_t367FF6C506CFAC316A1E1C89106DF4075BF493FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(dayControl == null)
		DayControl_tC5CBA834D94CF7A4F63C9D9D1E542994A3E0BD6A* L_0 = __this->___dayControl_5;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mB6120F782D83091EF56A198FCEBCF066DB4A9605(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if (Application.isPlaying)
		bool L_2;
		L_2 = Application_get_isPlaying_m25B0ABDFEF54F5370CD3F263A813540843D00F34(NULL);
		if (!L_2)
		{
			goto IL_0053;
		}
	}
	{
		// TimeOfDay += Time.deltaTime / 5;
		float L_3 = __this->___TimeOfDay_6;
		float L_4;
		L_4 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___TimeOfDay_6 = ((float)il2cpp_codegen_add(L_3, ((float)(L_4/(5.0f)))));
		// TimeOfDay %= 60;
		float L_5 = __this->___TimeOfDay_6;
		__this->___TimeOfDay_6 = (fmodf(L_5, (60.0f)));
		// UpdateLightning(TimeOfDay / 60f);
		float L_6 = __this->___TimeOfDay_6;
		LightManager_UpdateLightning_m68759A9276A507A81278C5B4196A85317A83B16A(__this, ((float)(L_6/(60.0f))), NULL);
		return;
	}

IL_0053:
	{
		// UpdateLightning(TimeOfDay / 60f);
		float L_7 = __this->___TimeOfDay_6;
		LightManager_UpdateLightning_m68759A9276A507A81278C5B4196A85317A83B16A(__this, ((float)(L_7/(60.0f))), NULL);
		// }
		return;
	}
}
// System.Void LightManager::UpdateLightning(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightManager_UpdateLightning_m68759A9276A507A81278C5B4196A85317A83B16A (LightManager_t367FF6C506CFAC316A1E1C89106DF4075BF493FD* __this, float ___timePercent0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// RenderSettings.ambientLight = dayControl.AmbientColor.Evaluate(timePercent);
		DayControl_tC5CBA834D94CF7A4F63C9D9D1E542994A3E0BD6A* L_0 = __this->___dayControl_5;
		NullCheck(L_0);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_1 = L_0->___AmbientColor_4;
		float L_2 = ___timePercent0;
		NullCheck(L_1);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_3;
		L_3 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_1, L_2, NULL);
		RenderSettings_set_ambientLight_m44E42CEB67937FC0CFC86767CB07D93D8E780880(L_3, NULL);
		// RenderSettings.fogColor = dayControl.FogColor.Evaluate(timePercent);
		DayControl_tC5CBA834D94CF7A4F63C9D9D1E542994A3E0BD6A* L_4 = __this->___dayControl_5;
		NullCheck(L_4);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_5 = L_4->___FogColor_6;
		float L_6 = ___timePercent0;
		NullCheck(L_5);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_7;
		L_7 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_5, L_6, NULL);
		RenderSettings_set_fogColor_mBBD12EC3492195F85F583CAF4FAE4A973227639B(L_7, NULL);
		// if(DirectionalLight != null)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_8 = __this->___DirectionalLight_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_8, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_9)
		{
			goto IL_0087;
		}
	}
	{
		// DirectionalLight.color = dayControl.DirectionalColor.Evaluate(timePercent);
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = __this->___DirectionalLight_4;
		DayControl_tC5CBA834D94CF7A4F63C9D9D1E542994A3E0BD6A* L_11 = __this->___dayControl_5;
		NullCheck(L_11);
		Gradient_tA7FEBE2FDB4929FFF6C997134841046F713DAC1E* L_12 = L_11->___DirectionalColor_5;
		float L_13 = ___timePercent0;
		NullCheck(L_12);
		Color_tD001788D726C3A7F1379BEED0260B9591F440C1F L_14;
		L_14 = Gradient_Evaluate_m332A32F48EA3F884CB55D74131DF8064F29F9C32(L_12, L_13, NULL);
		NullCheck(L_10);
		Light_set_color_m242F09E22904E0A20D5B032A0749678B0796A87C(L_10, L_14, NULL);
		// DirectionalLight.transform.localRotation = Quaternion.Euler(new Vector3((timePercent * 360) - 90f, 170, 0));
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_15 = __this->___DirectionalLight_4;
		NullCheck(L_15);
		Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* L_16;
		L_16 = Component_get_transform_m2919A1D81931E6932C7F06D4C2F0AB8DDA9A5371(L_15, NULL);
		float L_17 = ___timePercent0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_18;
		memset((&L_18), 0, sizeof(L_18));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_18), ((float)il2cpp_codegen_subtract(((float)il2cpp_codegen_multiply(L_17, (360.0f))), (90.0f))), (170.0f), (0.0f), /*hidden argument*/NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_19;
		L_19 = Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline(L_18, NULL);
		NullCheck(L_16);
		Transform_set_localRotation_mAB4A011D134BA58AB780BECC0025CA65F16185FA(L_16, L_19, NULL);
	}

IL_0087:
	{
		// }
		return;
	}
}
// System.Void LightManager::OnValidate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightManager_OnValidate_mF36079216B1BF04FF2CF5C18BF4DFC2979BFC5EF (LightManager_t367FF6C506CFAC316A1E1C89106DF4075BF493FD* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mA7F8EFA476BAB46167B93E9984C5D02615CA5357_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* V_0 = NULL;
	int32_t V_1 = 0;
	Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* V_2 = NULL;
	{
		// if(DirectionalLight != null)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_0 = __this->___DirectionalLight_4;
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_0, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_1)
		{
			goto IL_000f;
		}
	}
	{
		// return;
		return;
	}

IL_000f:
	{
		// if(RenderSettings.sun != null)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_2;
		L_2 = RenderSettings_get_sun_m5D3CDD2B31B8F48F77D5DC3830E3BB67A44869EC(NULL);
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		bool L_3;
		L_3 = Object_op_Inequality_mD0BE578448EAA61948F25C32F8DD55AB1F778602(L_2, (Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C*)NULL, NULL);
		if (!L_3)
		{
			goto IL_0028;
		}
	}
	{
		// DirectionalLight = RenderSettings.sun;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_4;
		L_4 = RenderSettings_get_sun_m5D3CDD2B31B8F48F77D5DC3830E3BB67A44869EC(NULL);
		__this->___DirectionalLight_4 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DirectionalLight_4), (void*)L_4);
		return;
	}

IL_0028:
	{
		// Light[] lights = GameObject.FindObjectsOfType<Light>();
		il2cpp_codegen_runtime_class_init_inline(Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_il2cpp_TypeInfo_var);
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_5;
		L_5 = Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mA7F8EFA476BAB46167B93E9984C5D02615CA5357(Object_FindObjectsOfType_TisLight_t1E68479B7782AF2050FAA02A5DC612FD034F18F3_mA7F8EFA476BAB46167B93E9984C5D02615CA5357_RuntimeMethod_var);
		// foreach(Light light in lights)
		V_0 = L_5;
		V_1 = 0;
		goto IL_004b;
	}

IL_0032:
	{
		// foreach(Light light in lights)
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_6 = V_0;
		int32_t L_7 = V_1;
		NullCheck(L_6);
		int32_t L_8 = L_7;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_9 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		V_2 = L_9;
		// if(light.type == LightType.Directional)
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_10 = V_2;
		NullCheck(L_10);
		int32_t L_11;
		L_11 = Light_get_type_m0D12CD1E54E010DC401F7371731D593DEF62D1C7(L_10, NULL);
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0047;
		}
	}
	{
		// DirectionalLight = light;
		Light_t1E68479B7782AF2050FAA02A5DC612FD034F18F3* L_12 = V_2;
		__this->___DirectionalLight_4 = L_12;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___DirectionalLight_4), (void*)L_12);
		// return;
		return;
	}

IL_0047:
	{
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_13, 1));
	}

IL_004b:
	{
		// foreach(Light light in lights)
		int32_t L_14 = V_1;
		LightU5BU5D_tDA7C763E668D91E53318509D94BC0CF10B8AB990* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length)))))
		{
			goto IL_0032;
		}
	}
	{
		// }
		return;
	}
}
// System.Void LightManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LightManager__ctor_m03C9EFF775C1780D1C66E02C0861420F3E251B92 (LightManager_t367FF6C506CFAC316A1E1C89106DF4075BF493FD* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DefencePowerController::LoadData(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefencePowerController_LoadData_m60260436054A60F581A803B679E9A832DAA1A3E4 (DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) 
{
	{
		// this.defenceUpgrade1Cost = data.defenceUpgrade1Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = ___data0;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___defenceUpgrade1Cost_46;
		__this->___defenceUpgrade1Cost_14 = L_1;
		// this.defenceUpgrade2Cost = data.defenceUpgrade2Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_2 = ___data0;
		NullCheck(L_2);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3 = L_2->___defenceUpgrade2Cost_47;
		__this->___defenceUpgrade2Cost_16 = L_3;
		// this.defenceUpgrade3Cost = data.defenceUpgrade3Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = ___data0;
		NullCheck(L_4);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = L_4->___defenceUpgrade3Cost_48;
		__this->___defenceUpgrade3Cost_18 = L_5;
		// this.defenceUpgrade4Cost = data.defenceUpgrade4Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = ___data0;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___defenceUpgrade4Cost_49;
		__this->___defenceUpgrade4Cost_20 = L_7;
		// this.defenceUpgrade5Cost = data.defenceUpgrade5Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_8 = ___data0;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___defenceUpgrade5Cost_50;
		__this->___defenceUpgrade5Cost_22 = L_9;
		// this.defenceUpgrade6Cost = data.defenceUpgrade6Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_10 = ___data0;
		NullCheck(L_10);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = L_10->___defenceUpgrade6Cost_51;
		__this->___defenceUpgrade6Cost_24 = L_11;
		// this.defenceUpgrade7Cost = data.defenceUpgrade7Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_12 = ___data0;
		NullCheck(L_12);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = L_12->___defenceUpgrade7Cost_52;
		__this->___defenceUpgrade7Cost_26 = L_13;
		// this.defenceUpgrade8Cost = data.defenceUpgrade8Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_14 = ___data0;
		NullCheck(L_14);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15 = L_14->___defenceUpgrade8Cost_53;
		__this->___defenceUpgrade8Cost_28 = L_15;
		// this.defenceUpgrade1Level = data.defenceUpgrade1Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_16 = ___data0;
		NullCheck(L_16);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17 = L_16->___defenceUpgrade1Level_54;
		__this->___defenceUpgrade1Level_15 = L_17;
		// this.defenceUpgrade2Level = data.defenceUpgrade2Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_18 = ___data0;
		NullCheck(L_18);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19 = L_18->___defenceUpgrade2Level_55;
		__this->___defenceUpgrade2Level_17 = L_19;
		// this.defenceUpgrade3Level = data.defenceUpgrade3Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_20 = ___data0;
		NullCheck(L_20);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21 = L_20->___defenceUpgrade3Level_56;
		__this->___defenceUpgrade3Level_19 = L_21;
		// this.defenceUpgrade4Level = data.defenceUpgrade4Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_22 = ___data0;
		NullCheck(L_22);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23 = L_22->___defenceUpgrade4Level_57;
		__this->___defenceUpgrade4Level_21 = L_23;
		// this.defenceUpgrade5Level = data.defenceUpgrade5Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_24 = ___data0;
		NullCheck(L_24);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25 = L_24->___defenceUpgrade5Level_58;
		__this->___defenceUpgrade5Level_23 = L_25;
		// this.defenceUpgrade6Level = data.defenceUpgrade6Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_26 = ___data0;
		NullCheck(L_26);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_27 = L_26->___defenceUpgrade6Level_59;
		__this->___defenceUpgrade6Level_25 = L_27;
		// this.defenceUpgrade7Level = data.defenceUpgrade7Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_28 = ___data0;
		NullCheck(L_28);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29 = L_28->___defenceUpgrade7Level_60;
		__this->___defenceUpgrade7Level_27 = L_29;
		// this.defenceUpgrade8Level = data.defenceUpgrade8Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_30 = ___data0;
		NullCheck(L_30);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_31 = L_30->___defenceUpgrade8Level_61;
		__this->___defenceUpgrade8Level_29 = L_31;
		// }
		return;
	}
}
// System.Void DefencePowerController::SaveData(GameData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefencePowerController_SaveData_mD7F7CB87D1EFFC0A023D8D351BC05FD6831E90EB (DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** ___data0, const RuntimeMethod* method) 
{
	{
		// data.defenceUpgrade1Cost = this.defenceUpgrade1Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_0 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = __this->___defenceUpgrade1Cost_14;
		NullCheck(L_1);
		L_1->___defenceUpgrade1Cost_46 = L_2;
		// data.defenceUpgrade2Cost = this.defenceUpgrade2Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_3 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_3);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = __this->___defenceUpgrade2Cost_16;
		NullCheck(L_4);
		L_4->___defenceUpgrade2Cost_47 = L_5;
		// data.defenceUpgrade3Cost = this.defenceUpgrade3Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_6 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_7 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = __this->___defenceUpgrade3Cost_18;
		NullCheck(L_7);
		L_7->___defenceUpgrade3Cost_48 = L_8;
		// data.defenceUpgrade4Cost = this.defenceUpgrade4Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_9 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_10 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_9);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = __this->___defenceUpgrade4Cost_20;
		NullCheck(L_10);
		L_10->___defenceUpgrade4Cost_49 = L_11;
		// data.defenceUpgrade5Cost = this.defenceUpgrade5Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_12 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_13 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_12);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14 = __this->___defenceUpgrade5Cost_22;
		NullCheck(L_13);
		L_13->___defenceUpgrade5Cost_50 = L_14;
		// data.defenceUpgrade6Cost = this.defenceUpgrade6Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_15 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_16 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_15);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17 = __this->___defenceUpgrade6Cost_24;
		NullCheck(L_16);
		L_16->___defenceUpgrade6Cost_51 = L_17;
		// data.defenceUpgrade7Cost = this.defenceUpgrade7Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_18 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_19 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_18);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20 = __this->___defenceUpgrade7Cost_26;
		NullCheck(L_19);
		L_19->___defenceUpgrade7Cost_52 = L_20;
		// data.defenceUpgrade8Cost = this.defenceUpgrade8Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_21 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_22 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_21);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23 = __this->___defenceUpgrade8Cost_28;
		NullCheck(L_22);
		L_22->___defenceUpgrade8Cost_53 = L_23;
		// data.defenceUpgrade1Level = this.defenceUpgrade1Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_24 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_25 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_24);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26 = __this->___defenceUpgrade1Level_15;
		NullCheck(L_25);
		L_25->___defenceUpgrade1Level_54 = L_26;
		// data.defenceUpgrade2Level = this.defenceUpgrade2Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_27 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_28 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_27);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29 = __this->___defenceUpgrade2Level_17;
		NullCheck(L_28);
		L_28->___defenceUpgrade2Level_55 = L_29;
		// data.defenceUpgrade3Level = this.defenceUpgrade3Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_30 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_31 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_30);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_32 = __this->___defenceUpgrade3Level_19;
		NullCheck(L_31);
		L_31->___defenceUpgrade3Level_56 = L_32;
		// data.defenceUpgrade4Level = this.defenceUpgrade4Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_33 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_34 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_33);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35 = __this->___defenceUpgrade4Level_21;
		NullCheck(L_34);
		L_34->___defenceUpgrade4Level_57 = L_35;
		// data.defenceUpgrade5Level = this.defenceUpgrade5Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_36 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_37 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_36);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_38 = __this->___defenceUpgrade5Level_23;
		NullCheck(L_37);
		L_37->___defenceUpgrade5Level_58 = L_38;
		// data.defenceUpgrade6Level = this.defenceUpgrade6Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_39 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_40 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_39);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_41 = __this->___defenceUpgrade6Level_25;
		NullCheck(L_40);
		L_40->___defenceUpgrade6Level_59 = L_41;
		// data.defenceUpgrade7Level = this.defenceUpgrade7Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_42 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_43 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_42);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_44 = __this->___defenceUpgrade7Level_27;
		NullCheck(L_43);
		L_43->___defenceUpgrade7Level_60 = L_44;
		// data.defenceUpgrade8Level = this.defenceUpgrade8Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_45 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_46 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_45);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_47 = __this->___defenceUpgrade8Level_29;
		NullCheck(L_46);
		L_46->___defenceUpgrade8Level_61 = L_47;
		// }
		return;
	}
}
// System.Void DefencePowerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefencePowerController_Update_mAB9458646FA760E993554E0D451B69B21426639D (DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral01E48D32971C1644EE4C0320333569577AED8A68);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07BE2B2BD6B746CD6CEC8327175437C8767350C5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2E92815DF21333FAC483F74B216DF1F8A8785E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3718D6489ED49B10FF69B79FE1A5A7EDC938CF45);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral398AAA98448D093913570A3C2B4A467766B96D60);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4AD0E436F2F7461E583E564EB954EA67853D3BE5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral584AF4E17BB6075D3F2B29A576E6B2C05D9B34A1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5C2EC7F769FE3998C85537FDE8D8692727C1C204);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D165159EFA7D4CFB870E825433946DD084DBD3D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85E46BCFC965D1682715AC3C320D9EABEB5D36EE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9D1A4868558ED88F48E0775BC27963FAD76A5571);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC64E44CA2703D6DC689665E5B88EB40090C1993F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC853C031A4A16B9A446FDB9F057BFD8076B3D178);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD9E43957F6639185347E14CAB1D9707C63700D7F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE9E5DFB5664F0F3C509A69856C826EF82286CF52);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralECF2B469194AC77EE59EC6FB9E1985CC4FAEAF5A);
		s_Il2CppMethodInitialized = true;
	}
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// if(healthAndPriates.defencePower < 500)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_0 = __this->___healthAndPriates_13;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2;
		L_2 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_3;
		L_3 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_1, L_2, NULL);
		if (!L_3)
		{
			goto IL_005c;
		}
	}
	{
		// DefencePower1Text.text = "Defence Upgrade 1\nCost: " + defenceUpgrade1Cost.ToString("F0") + " Coin\nPower: +1 Defence Power\nLevel: " + defenceUpgrade1Level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_4 = __this->___DefencePower1Text_4;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_5 = (&__this->___defenceUpgrade1Cost_14);
		String_t* L_6;
		L_6 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_5, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = __this->___defenceUpgrade1Level_15;
		V_0 = L_7;
		String_t* L_8;
		L_8 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_0), NULL);
		String_t* L_9;
		L_9 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral4AD0E436F2F7461E583E564EB954EA67853D3BE5, L_6, _stringLiteralC853C031A4A16B9A446FDB9F057BFD8076B3D178, L_8, NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_9);
		goto IL_006c;
	}

IL_005c:
	{
		// DefencePower1Text.text = "MAX";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_10 = __this->___DefencePower1Text_4;
		NullCheck(L_10);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_10, _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
	}

IL_006c:
	{
		// if (healthAndPriates.defencePower < 500)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_11 = __this->___healthAndPriates_13;
		NullCheck(L_11);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12 = L_11->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_14;
		L_14 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_00c8;
		}
	}
	{
		// DefencePower2Text.text = "Defence Upgrade 2\nCost: " + defenceUpgrade2Cost.ToString("F0") + " Coin\nPower: +2 Defence Power\nLevel: " + defenceUpgrade2Level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___DefencePower2Text_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_16 = (&__this->___defenceUpgrade2Cost_16);
		String_t* L_17;
		L_17 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_16, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18 = __this->___defenceUpgrade2Level_17;
		V_0 = L_18;
		String_t* L_19;
		L_19 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_0), NULL);
		String_t* L_20;
		L_20 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral7D165159EFA7D4CFB870E825433946DD084DBD3D, L_17, _stringLiteralECF2B469194AC77EE59EC6FB9E1985CC4FAEAF5A, L_19, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_20);
		goto IL_00d8;
	}

IL_00c8:
	{
		// DefencePower2Text.text = "MAX";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_21 = __this->___DefencePower2Text_5;
		NullCheck(L_21);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_21, _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
	}

IL_00d8:
	{
		// if (healthAndPriates.defencePower < 500)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_22 = __this->___healthAndPriates_13;
		NullCheck(L_22);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23 = L_22->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_24;
		L_24 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_25;
		L_25 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_23, L_24, NULL);
		if (!L_25)
		{
			goto IL_0134;
		}
	}
	{
		// DefencePower3Text.text = "Defence Upgrade 3\nCost: " + defenceUpgrade3Cost.ToString("F0") + " Coin\nPower: +3 Defence Power\nLevel: " + defenceUpgrade3Level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_26 = __this->___DefencePower3Text_6;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_27 = (&__this->___defenceUpgrade3Cost_18);
		String_t* L_28;
		L_28 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_27, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29 = __this->___defenceUpgrade3Level_19;
		V_0 = L_29;
		String_t* L_30;
		L_30 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_0), NULL);
		String_t* L_31;
		L_31 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralE9E5DFB5664F0F3C509A69856C826EF82286CF52, L_28, _stringLiteral5C2EC7F769FE3998C85537FDE8D8692727C1C204, L_30, NULL);
		NullCheck(L_26);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_26, L_31);
		goto IL_0144;
	}

IL_0134:
	{
		// DefencePower3Text.text = "MAX";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_32 = __this->___DefencePower3Text_6;
		NullCheck(L_32);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_32, _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
	}

IL_0144:
	{
		// if (healthAndPriates.defencePower < 500)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_33 = __this->___healthAndPriates_13;
		NullCheck(L_33);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_34 = L_33->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35;
		L_35 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_36;
		L_36 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_01a0;
		}
	}
	{
		// DefencePower4Text.text = "Defence Upgrade 4\nCost: " + defenceUpgrade4Cost.ToString("F0") + " Coin\nPower: +4 Defence Power\nLevel: " + defenceUpgrade4Level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_37 = __this->___DefencePower4Text_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_38 = (&__this->___defenceUpgrade4Cost_20);
		String_t* L_39;
		L_39 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_38, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_40 = __this->___defenceUpgrade4Level_21;
		V_0 = L_40;
		String_t* L_41;
		L_41 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_0), NULL);
		String_t* L_42;
		L_42 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral398AAA98448D093913570A3C2B4A467766B96D60, L_39, _stringLiteral07BE2B2BD6B746CD6CEC8327175437C8767350C5, L_41, NULL);
		NullCheck(L_37);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_42);
		goto IL_01b0;
	}

IL_01a0:
	{
		// DefencePower4Text.text = "MAX";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_43 = __this->___DefencePower4Text_7;
		NullCheck(L_43);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_43, _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
	}

IL_01b0:
	{
		// if (healthAndPriates.defencePower < 500)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_44 = __this->___healthAndPriates_13;
		NullCheck(L_44);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_45 = L_44->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_46;
		L_46 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_47;
		L_47 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_45, L_46, NULL);
		if (!L_47)
		{
			goto IL_020c;
		}
	}
	{
		// DefencePower5Text.text = "Defence Upgrade 5\nCost: " + defenceUpgrade5Cost.ToString("F0") + " Coin\nPower: +5 Defence Power\nLevel: " + defenceUpgrade5Level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_48 = __this->___DefencePower5Text_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_49 = (&__this->___defenceUpgrade5Cost_22);
		String_t* L_50;
		L_50 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_49, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_51 = __this->___defenceUpgrade5Level_23;
		V_0 = L_51;
		String_t* L_52;
		L_52 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_0), NULL);
		String_t* L_53;
		L_53 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC64E44CA2703D6DC689665E5B88EB40090C1993F, L_50, _stringLiteral85E46BCFC965D1682715AC3C320D9EABEB5D36EE, L_52, NULL);
		NullCheck(L_48);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_48, L_53);
		goto IL_021c;
	}

IL_020c:
	{
		// DefencePower5Text.text = "MAX";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54 = __this->___DefencePower5Text_8;
		NullCheck(L_54);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_54, _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
	}

IL_021c:
	{
		// if (healthAndPriates.defencePower < 500)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_55 = __this->___healthAndPriates_13;
		NullCheck(L_55);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_56 = L_55->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_57;
		L_57 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_58;
		L_58 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_56, L_57, NULL);
		if (!L_58)
		{
			goto IL_0278;
		}
	}
	{
		// DefencePower6Text.text = "Defence Upgrade 6\nCost: " + defenceUpgrade6Cost.ToString("F0") + " Coin\nPower: +6 Defence Power\nLevel: " + defenceUpgrade6Level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_59 = __this->___DefencePower6Text_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_60 = (&__this->___defenceUpgrade6Cost_24);
		String_t* L_61;
		L_61 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_60, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_62 = __this->___defenceUpgrade6Level_25;
		V_0 = L_62;
		String_t* L_63;
		L_63 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_0), NULL);
		String_t* L_64;
		L_64 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral2E92815DF21333FAC483F74B216DF1F8A8785E0E, L_61, _stringLiteral584AF4E17BB6075D3F2B29A576E6B2C05D9B34A1, L_63, NULL);
		NullCheck(L_59);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_59, L_64);
		goto IL_0288;
	}

IL_0278:
	{
		// DefencePower6Text.text = "MAX";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_65 = __this->___DefencePower6Text_9;
		NullCheck(L_65);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_65, _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
	}

IL_0288:
	{
		// if (healthAndPriates.defencePower < 500)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_66 = __this->___healthAndPriates_13;
		NullCheck(L_66);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_67 = L_66->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_68;
		L_68 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_69;
		L_69 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_67, L_68, NULL);
		if (!L_69)
		{
			goto IL_02e4;
		}
	}
	{
		// DefencePower7Text.text = "Defence Upgrade 7\nCost: " + defenceUpgrade7Cost.ToString("F0") + " Coin\nPower: +7 Defence Power\nLevel: " + defenceUpgrade7Level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_70 = __this->___DefencePower7Text_10;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_71 = (&__this->___defenceUpgrade7Cost_26);
		String_t* L_72;
		L_72 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_71, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_73 = __this->___defenceUpgrade7Level_27;
		V_0 = L_73;
		String_t* L_74;
		L_74 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_0), NULL);
		String_t* L_75;
		L_75 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral3718D6489ED49B10FF69B79FE1A5A7EDC938CF45, L_72, _stringLiteralD9E43957F6639185347E14CAB1D9707C63700D7F, L_74, NULL);
		NullCheck(L_70);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_70, L_75);
		goto IL_02f4;
	}

IL_02e4:
	{
		// DefencePower7Text.text = "MAX";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_76 = __this->___DefencePower7Text_10;
		NullCheck(L_76);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_76, _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
	}

IL_02f4:
	{
		// if (healthAndPriates.defencePower < 500)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_77 = __this->___healthAndPriates_13;
		NullCheck(L_77);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_78 = L_77->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_79;
		L_79 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_80;
		L_80 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_78, L_79, NULL);
		if (!L_80)
		{
			goto IL_034f;
		}
	}
	{
		// DefencePower8Text.text = "Defence Upgrade 8\nCost: " + defenceUpgrade8Cost.ToString("F0") + " Coin\nPower: +8 Defence Power\nLevel: " + defenceUpgrade8Level;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_81 = __this->___DefencePower8Text_11;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_82 = (&__this->___defenceUpgrade8Cost_28);
		String_t* L_83;
		L_83 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_82, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_84 = __this->___defenceUpgrade8Level_29;
		V_0 = L_84;
		String_t* L_85;
		L_85 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_0), NULL);
		String_t* L_86;
		L_86 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral01E48D32971C1644EE4C0320333569577AED8A68, L_83, _stringLiteral9D1A4868558ED88F48E0775BC27963FAD76A5571, L_85, NULL);
		NullCheck(L_81);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_81, L_86);
		return;
	}

IL_034f:
	{
		// DefencePower8Text.text = "MAX";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_87 = __this->___DefencePower8Text_11;
		NullCheck(L_87);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_87, _stringLiteralE3730FAB74F10FB4D596B408FFAA85142E1A2E50);
		// }
		return;
	}
}
// System.Void DefencePowerController::BuyUpgrade(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefencePowerController_BuyUpgrade_mC3E7CFE83867EC1DC7E6C6BC5AE1E3D7B4DD148A (DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* __this, String_t* ___upgradeID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral186728018354DD5A345662365525D1905258CFCE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2CB372B682621CEBB58B13EF31D980CFA9FC06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7BB53D65B097ACF1F141DEAE0184DC1BCFB14B07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral874C0887AE1E2EDC78A6DDABDBD3B085F7122347);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD756EFB72D56C9BF3C2CCF63FF70E909A2CB190B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF0742244FAC9C02D42868C59B85E6B45583E9C15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFC213E54880668DB4321F1F93763970724520E14);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___upgradeID0;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)164507308)))))
		{
			goto IL_003c;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)114174451)))))
		{
			goto IL_0028;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((((int32_t)L_4) == ((int32_t)((int32_t)97396832))))
		{
			goto IL_0085;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)114174451))))
		{
			goto IL_0074;
		}
	}
	{
		return;
	}

IL_0028:
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)130952070))))
		{
			goto IL_0066;
		}
	}
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)164507308))))
		{
			goto IL_00c9;
		}
	}
	{
		return;
	}

IL_003c:
	{
		uint32_t L_8 = V_0;
		if ((!(((uint32_t)L_8) <= ((uint32_t)((int32_t)198062546)))))
		{
			goto IL_0055;
		}
	}
	{
		uint32_t L_9 = V_0;
		if ((((int32_t)L_9) == ((int32_t)((int32_t)181284927))))
		{
			goto IL_00b8;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)198062546))))
		{
			goto IL_00a7;
		}
	}
	{
		return;
	}

IL_0055:
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)214840165))))
		{
			goto IL_0096;
		}
	}
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)281950641))))
		{
			goto IL_00da;
		}
	}
	{
		return;
	}

IL_0066:
	{
		String_t* L_13 = ___upgradeID0;
		bool L_14;
		L_14 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_13, _stringLiteral874C0887AE1E2EDC78A6DDABDBD3B085F7122347, NULL);
		if (L_14)
		{
			goto IL_00eb;
		}
	}
	{
		return;
	}

IL_0074:
	{
		String_t* L_15 = ___upgradeID0;
		bool L_16;
		L_16 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_15, _stringLiteral186728018354DD5A345662365525D1905258CFCE, NULL);
		if (L_16)
		{
			goto IL_018e;
		}
	}
	{
		return;
	}

IL_0085:
	{
		String_t* L_17 = ___upgradeID0;
		bool L_18;
		L_18 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_17, _stringLiteralFC213E54880668DB4321F1F93763970724520E14, NULL);
		if (L_18)
		{
			goto IL_0231;
		}
	}
	{
		return;
	}

IL_0096:
	{
		String_t* L_19 = ___upgradeID0;
		bool L_20;
		L_20 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_19, _stringLiteralF0742244FAC9C02D42868C59B85E6B45583E9C15, NULL);
		if (L_20)
		{
			goto IL_02d4;
		}
	}
	{
		return;
	}

IL_00a7:
	{
		String_t* L_21 = ___upgradeID0;
		bool L_22;
		L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteral05A28F1E8A745228C0495F5A5624794FEACD9C32, NULL);
		if (L_22)
		{
			goto IL_0377;
		}
	}
	{
		return;
	}

IL_00b8:
	{
		String_t* L_23 = ___upgradeID0;
		bool L_24;
		L_24 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_23, _stringLiteral7BB53D65B097ACF1F141DEAE0184DC1BCFB14B07, NULL);
		if (L_24)
		{
			goto IL_041a;
		}
	}
	{
		return;
	}

IL_00c9:
	{
		String_t* L_25 = ___upgradeID0;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteral6C2CB372B682621CEBB58B13EF31D980CFA9FC06, NULL);
		if (L_26)
		{
			goto IL_04bd;
		}
	}
	{
		return;
	}

IL_00da:
	{
		String_t* L_27 = ___upgradeID0;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteralD756EFB72D56C9BF3C2CCF63FF70E909A2CB190B, NULL);
		if (L_28)
		{
			goto IL_0560;
		}
	}
	{
		return;
	}

IL_00eb:
	{
		// if (sellFish.gainedCoin >= defenceUpgrade1Cost && healthAndPriates.defencePower < 500)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_29 = __this->___sellFish_12;
		NullCheck(L_29);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_30 = L_29->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_31 = __this->___defenceUpgrade1Cost_14;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_32;
		L_32 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_30, L_31, NULL);
		if (!L_32)
		{
			goto IL_05ff;
		}
	}
	{
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_33 = __this->___healthAndPriates_13;
		NullCheck(L_33);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_34 = L_33->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35;
		L_35 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_36;
		L_36 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_34, L_35, NULL);
		if (!L_36)
		{
			goto IL_05ff;
		}
	}
	{
		// defenceUpgrade1Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_37 = __this->___defenceUpgrade1Level_15;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_38;
		L_38 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_37, NULL);
		__this->___defenceUpgrade1Level_15 = L_38;
		// sellFish.gainedCoin -= defenceUpgrade1Cost;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_39 = __this->___sellFish_12;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_40 = L_39;
		NullCheck(L_40);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_41 = L_40->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_42 = __this->___defenceUpgrade1Cost_14;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_43;
		L_43 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_41, L_42, NULL);
		NullCheck(L_40);
		L_40->___gainedCoin_7 = L_43;
		// healthAndPriates.defencePower += 1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_44 = __this->___healthAndPriates_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_45 = L_44;
		NullCheck(L_45);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_46 = L_45->___defencePower_13;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_47;
		L_47 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_48;
		L_48 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_46, L_47, NULL);
		NullCheck(L_45);
		L_45->___defencePower_13 = L_48;
		// defenceUpgrade1Cost *= 1.09;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_49 = __this->___defenceUpgrade1Cost_14;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_50;
		L_50 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((1.0900000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_51;
		L_51 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_49, L_50, NULL);
		__this->___defenceUpgrade1Cost_14 = L_51;
		// break;
		return;
	}

IL_018e:
	{
		// if (sellFish.gainedCoin >= defenceUpgrade2Cost && healthAndPriates.defencePower < 500)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_52 = __this->___sellFish_12;
		NullCheck(L_52);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_53 = L_52->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_54 = __this->___defenceUpgrade2Cost_16;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_55;
		L_55 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_53, L_54, NULL);
		if (!L_55)
		{
			goto IL_05ff;
		}
	}
	{
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_56 = __this->___healthAndPriates_13;
		NullCheck(L_56);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_57 = L_56->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_58;
		L_58 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_59;
		L_59 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_57, L_58, NULL);
		if (!L_59)
		{
			goto IL_05ff;
		}
	}
	{
		// defenceUpgrade2Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_60 = __this->___defenceUpgrade2Level_17;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_61;
		L_61 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_60, NULL);
		__this->___defenceUpgrade2Level_17 = L_61;
		// sellFish.gainedCoin -= defenceUpgrade2Cost;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_62 = __this->___sellFish_12;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_63 = L_62;
		NullCheck(L_63);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_64 = L_63->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_65 = __this->___defenceUpgrade2Cost_16;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_66;
		L_66 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_64, L_65, NULL);
		NullCheck(L_63);
		L_63->___gainedCoin_7 = L_66;
		// healthAndPriates.defencePower += 2;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_67 = __this->___healthAndPriates_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_68 = L_67;
		NullCheck(L_68);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_69 = L_68->___defencePower_13;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_70;
		L_70 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_71;
		L_71 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_69, L_70, NULL);
		NullCheck(L_68);
		L_68->___defencePower_13 = L_71;
		// defenceUpgrade2Cost *= 2.03;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_72 = __this->___defenceUpgrade2Cost_16;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_73;
		L_73 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((2.0299999999999998), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_74;
		L_74 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_72, L_73, NULL);
		__this->___defenceUpgrade2Cost_16 = L_74;
		// break;
		return;
	}

IL_0231:
	{
		// if (sellFish.gainedCoin >= defenceUpgrade3Cost && healthAndPriates.defencePower < 500)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_75 = __this->___sellFish_12;
		NullCheck(L_75);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_76 = L_75->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_77 = __this->___defenceUpgrade3Cost_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_78;
		L_78 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_76, L_77, NULL);
		if (!L_78)
		{
			goto IL_05ff;
		}
	}
	{
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_79 = __this->___healthAndPriates_13;
		NullCheck(L_79);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_80 = L_79->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_81;
		L_81 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_82;
		L_82 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_80, L_81, NULL);
		if (!L_82)
		{
			goto IL_05ff;
		}
	}
	{
		// defenceUpgrade3Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_83 = __this->___defenceUpgrade3Level_19;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_84;
		L_84 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_83, NULL);
		__this->___defenceUpgrade3Level_19 = L_84;
		// sellFish.gainedCoin -= defenceUpgrade3Cost;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_85 = __this->___sellFish_12;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_86 = L_85;
		NullCheck(L_86);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_87 = L_86->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_88 = __this->___defenceUpgrade3Cost_18;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_89;
		L_89 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_87, L_88, NULL);
		NullCheck(L_86);
		L_86->___gainedCoin_7 = L_89;
		// healthAndPriates.defencePower += 3;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_90 = __this->___healthAndPriates_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_91 = L_90;
		NullCheck(L_91);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_92 = L_91->___defencePower_13;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_93;
		L_93 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(3, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_94;
		L_94 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_92, L_93, NULL);
		NullCheck(L_91);
		L_91->___defencePower_13 = L_94;
		// defenceUpgrade3Cost *= 2.06;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_95 = __this->___defenceUpgrade3Cost_18;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_96;
		L_96 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((2.0600000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_97;
		L_97 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_95, L_96, NULL);
		__this->___defenceUpgrade3Cost_18 = L_97;
		// break;
		return;
	}

IL_02d4:
	{
		// if (sellFish.gainedCoin >= defenceUpgrade4Cost && healthAndPriates.defencePower < 500)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_98 = __this->___sellFish_12;
		NullCheck(L_98);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_99 = L_98->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_100 = __this->___defenceUpgrade4Cost_20;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_101;
		L_101 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_99, L_100, NULL);
		if (!L_101)
		{
			goto IL_05ff;
		}
	}
	{
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_102 = __this->___healthAndPriates_13;
		NullCheck(L_102);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_103 = L_102->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_104;
		L_104 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_105;
		L_105 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_103, L_104, NULL);
		if (!L_105)
		{
			goto IL_05ff;
		}
	}
	{
		// defenceUpgrade4Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_106 = __this->___defenceUpgrade4Level_21;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_107;
		L_107 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_106, NULL);
		__this->___defenceUpgrade4Level_21 = L_107;
		// sellFish.gainedCoin -= defenceUpgrade4Cost;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_108 = __this->___sellFish_12;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_109 = L_108;
		NullCheck(L_109);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_110 = L_109->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_111 = __this->___defenceUpgrade4Cost_20;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_112;
		L_112 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_110, L_111, NULL);
		NullCheck(L_109);
		L_109->___gainedCoin_7 = L_112;
		// healthAndPriates.defencePower += 4;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_113 = __this->___healthAndPriates_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_114 = L_113;
		NullCheck(L_114);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_115 = L_114->___defencePower_13;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_116;
		L_116 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(4, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_117;
		L_117 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_115, L_116, NULL);
		NullCheck(L_114);
		L_114->___defencePower_13 = L_117;
		// defenceUpgrade4Cost *= 2.09;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_118 = __this->___defenceUpgrade4Cost_20;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_119;
		L_119 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((2.0899999999999999), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_120;
		L_120 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_118, L_119, NULL);
		__this->___defenceUpgrade4Cost_20 = L_120;
		// break;
		return;
	}

IL_0377:
	{
		// if (sellFish.gainedCoin >= defenceUpgrade5Cost && healthAndPriates.defencePower < 500)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_121 = __this->___sellFish_12;
		NullCheck(L_121);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_122 = L_121->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_123 = __this->___defenceUpgrade5Cost_22;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_124;
		L_124 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_122, L_123, NULL);
		if (!L_124)
		{
			goto IL_05ff;
		}
	}
	{
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_125 = __this->___healthAndPriates_13;
		NullCheck(L_125);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_126 = L_125->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_127;
		L_127 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_128;
		L_128 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_126, L_127, NULL);
		if (!L_128)
		{
			goto IL_05ff;
		}
	}
	{
		// defenceUpgrade5Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_129 = __this->___defenceUpgrade5Level_23;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_130;
		L_130 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_129, NULL);
		__this->___defenceUpgrade5Level_23 = L_130;
		// sellFish.gainedCoin -= defenceUpgrade5Cost;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_131 = __this->___sellFish_12;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_132 = L_131;
		NullCheck(L_132);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_133 = L_132->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_134 = __this->___defenceUpgrade5Cost_22;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_135;
		L_135 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_133, L_134, NULL);
		NullCheck(L_132);
		L_132->___gainedCoin_7 = L_135;
		// healthAndPriates.defencePower += 5;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_136 = __this->___healthAndPriates_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_137 = L_136;
		NullCheck(L_137);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_138 = L_137->___defencePower_13;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_139;
		L_139 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(5, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_140;
		L_140 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_138, L_139, NULL);
		NullCheck(L_137);
		L_137->___defencePower_13 = L_140;
		// defenceUpgrade5Cost *= 3.03;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_141 = __this->___defenceUpgrade5Cost_22;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_142;
		L_142 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((3.0299999999999998), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_143;
		L_143 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_141, L_142, NULL);
		__this->___defenceUpgrade5Cost_22 = L_143;
		// break;
		return;
	}

IL_041a:
	{
		// if (sellFish.gainedCoin >= defenceUpgrade6Cost && healthAndPriates.defencePower < 500)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_144 = __this->___sellFish_12;
		NullCheck(L_144);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_145 = L_144->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_146 = __this->___defenceUpgrade6Cost_24;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_147;
		L_147 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_145, L_146, NULL);
		if (!L_147)
		{
			goto IL_05ff;
		}
	}
	{
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_148 = __this->___healthAndPriates_13;
		NullCheck(L_148);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_149 = L_148->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_150;
		L_150 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_151;
		L_151 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_149, L_150, NULL);
		if (!L_151)
		{
			goto IL_05ff;
		}
	}
	{
		// defenceUpgrade6Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_152 = __this->___defenceUpgrade6Level_25;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_153;
		L_153 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_152, NULL);
		__this->___defenceUpgrade6Level_25 = L_153;
		// sellFish.gainedCoin -= defenceUpgrade6Cost;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_154 = __this->___sellFish_12;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_155 = L_154;
		NullCheck(L_155);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_156 = L_155->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_157 = __this->___defenceUpgrade6Cost_24;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_158;
		L_158 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_156, L_157, NULL);
		NullCheck(L_155);
		L_155->___gainedCoin_7 = L_158;
		// healthAndPriates.defencePower += 6;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_159 = __this->___healthAndPriates_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_160 = L_159;
		NullCheck(L_160);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_161 = L_160->___defencePower_13;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_162;
		L_162 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(6, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_163;
		L_163 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_161, L_162, NULL);
		NullCheck(L_160);
		L_160->___defencePower_13 = L_163;
		// defenceUpgrade6Cost *= 3.06;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_164 = __this->___defenceUpgrade6Cost_24;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_165;
		L_165 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((3.0600000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_166;
		L_166 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_164, L_165, NULL);
		__this->___defenceUpgrade6Cost_24 = L_166;
		// break;
		return;
	}

IL_04bd:
	{
		// if (sellFish.gainedCoin >= defenceUpgrade7Cost && healthAndPriates.defencePower < 500)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_167 = __this->___sellFish_12;
		NullCheck(L_167);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_168 = L_167->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_169 = __this->___defenceUpgrade7Cost_26;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_170;
		L_170 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_168, L_169, NULL);
		if (!L_170)
		{
			goto IL_05ff;
		}
	}
	{
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_171 = __this->___healthAndPriates_13;
		NullCheck(L_171);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_172 = L_171->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_173;
		L_173 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_174;
		L_174 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_172, L_173, NULL);
		if (!L_174)
		{
			goto IL_05ff;
		}
	}
	{
		// defenceUpgrade7Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_175 = __this->___defenceUpgrade7Level_27;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_176;
		L_176 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_175, NULL);
		__this->___defenceUpgrade7Level_27 = L_176;
		// sellFish.gainedCoin -= defenceUpgrade7Cost;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_177 = __this->___sellFish_12;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_178 = L_177;
		NullCheck(L_178);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_179 = L_178->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_180 = __this->___defenceUpgrade7Cost_26;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_181;
		L_181 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_179, L_180, NULL);
		NullCheck(L_178);
		L_178->___gainedCoin_7 = L_181;
		// healthAndPriates.defencePower += 7;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_182 = __this->___healthAndPriates_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_183 = L_182;
		NullCheck(L_183);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_184 = L_183->___defencePower_13;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_185;
		L_185 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(7, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_186;
		L_186 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_184, L_185, NULL);
		NullCheck(L_183);
		L_183->___defencePower_13 = L_186;
		// defenceUpgrade7Cost *= 3.09;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_187 = __this->___defenceUpgrade7Cost_26;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_188;
		L_188 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((3.0899999999999999), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_189;
		L_189 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_187, L_188, NULL);
		__this->___defenceUpgrade7Cost_26 = L_189;
		// break;
		return;
	}

IL_0560:
	{
		// if (sellFish.gainedCoin >= defenceUpgrade8Cost && healthAndPriates.defencePower < 500)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_190 = __this->___sellFish_12;
		NullCheck(L_190);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_191 = L_190->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_192 = __this->___defenceUpgrade8Cost_28;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_193;
		L_193 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_191, L_192, NULL);
		if (!L_193)
		{
			goto IL_05ff;
		}
	}
	{
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_194 = __this->___healthAndPriates_13;
		NullCheck(L_194);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_195 = L_194->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_196;
		L_196 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		bool L_197;
		L_197 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_195, L_196, NULL);
		if (!L_197)
		{
			goto IL_05ff;
		}
	}
	{
		// defenceUpgrade8Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_198 = __this->___defenceUpgrade8Level_29;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_199;
		L_199 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_198, NULL);
		__this->___defenceUpgrade8Level_29 = L_199;
		// sellFish.gainedCoin -= defenceUpgrade8Cost;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_200 = __this->___sellFish_12;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_201 = L_200;
		NullCheck(L_201);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_202 = L_201->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_203 = __this->___defenceUpgrade8Cost_28;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_204;
		L_204 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_202, L_203, NULL);
		NullCheck(L_201);
		L_201->___gainedCoin_7 = L_204;
		// healthAndPriates.defencePower += 8;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_205 = __this->___healthAndPriates_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_206 = L_205;
		NullCheck(L_206);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_207 = L_206->___defencePower_13;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_208;
		L_208 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(8, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_209;
		L_209 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_207, L_208, NULL);
		NullCheck(L_206);
		L_206->___defencePower_13 = L_209;
		// defenceUpgrade8Cost *= 4.03;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_210 = __this->___defenceUpgrade8Cost_28;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_211;
		L_211 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((4.0300000000000002), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_212;
		L_212 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_210, L_211, NULL);
		__this->___defenceUpgrade8Cost_28 = L_212;
	}

IL_05ff:
	{
		// }
		return;
	}
}
// System.Void DefencePowerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DefencePowerController__ctor_m7C98BD8C4100E6A30AC3E1025A360B36A8495C16 (DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DialogueSystem::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSystem_Start_m68309F60D4F2F25E1F28D84EA29B635B3EB45C85 (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_0 = __this->___text_4;
		String_t* L_1 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_1);
		// StartCoroutine(Baslat());
		RuntimeObject* L_2;
		L_2 = DialogueSystem_Baslat_m420532010EA6AC03B587EAC6B9217C96C7B721C6(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_3;
		L_3 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_2, NULL);
		// }
		return;
	}
}
// System.Void DialogueSystem::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSystem_Update_m382D996F553F521579EBA68DB4F7618082374BB3 (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) 
{
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_0;
		L_0 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_0)
		{
			goto IL_004c;
		}
	}
	{
		// if(text.text == lines[index])
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_1 = __this->___text_4;
		NullCheck(L_1);
		String_t* L_2;
		L_2 = VirtualFuncInvoker0< String_t* >::Invoke(70 /* System.String UnityEngine.UI.Text::get_text() */, L_1);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_3 = __this->___lines_5;
		int32_t L_4 = __this->___index_8;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		String_t* L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		bool L_7;
		L_7 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_2, L_6, NULL);
		if (!L_7)
		{
			goto IL_002e;
		}
	}
	{
		// NextLine();
		DialogueSystem_NextLine_m17532E5840526544A30CE6FDFB5E6F8DA013E69A(__this, NULL);
		return;
	}

IL_002e:
	{
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
		// text.text = lines[index];
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_8 = __this->___text_4;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_9 = __this->___lines_5;
		int32_t L_10 = __this->___index_8;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		String_t* L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		NullCheck(L_8);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_8, L_12);
	}

IL_004c:
	{
		// }
		return;
	}
}
// System.Void DialogueSystem::StartDialogue()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSystem_StartDialogue_m087F394C1A3C08A0566955DD99AC2B209EAC8A14 (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) 
{
	{
		// index = 0;
		__this->___index_8 = 0;
		// dialoguePanel.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___dialoguePanel_7;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// StartCoroutine(TypeLine());
		RuntimeObject* L_1;
		L_1 = DialogueSystem_TypeLine_mC7F962B5659F3439C875B025BAD763A7FC15359F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_2;
		L_2 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_1, NULL);
		// }
		return;
	}
}
// System.Void DialogueSystem::NextLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSystem_NextLine_m17532E5840526544A30CE6FDFB5E6F8DA013E69A (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(index < lines.Length - 1)
		int32_t L_0 = __this->___index_8;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_1 = __this->___lines_5;
		NullCheck(L_1);
		if ((((int32_t)L_0) >= ((int32_t)((int32_t)il2cpp_codegen_subtract(((int32_t)(((RuntimeArray*)L_1)->max_length)), 1)))))
		{
			goto IL_0046;
		}
	}
	{
		// index++;
		int32_t L_2 = __this->___index_8;
		__this->___index_8 = ((int32_t)il2cpp_codegen_add(L_2, 1));
		// text.text = string.Empty;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___text_4;
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty_6;
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, L_4);
		// if(say? == 0)
		int32_t L_5 = __this->___sayU131_9;
		if (L_5)
		{
			goto IL_0059;
		}
	}
	{
		// StartCoroutine(TypeLine());
		RuntimeObject* L_6;
		L_6 = DialogueSystem_TypeLine_mC7F962B5659F3439C875B025BAD763A7FC15359F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_7;
		L_7 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_6, NULL);
		return;
	}

IL_0046:
	{
		// dialoguePanel.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = __this->___dialoguePanel_7;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)0, NULL);
		// say? = 1;
		__this->___sayU131_9 = 1;
	}

IL_0059:
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator DialogueSystem::TypeLine()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueSystem_TypeLine_mC7F962B5659F3439C875B025BAD763A7FC15359F (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37* L_0 = (U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37*)il2cpp_codegen_object_new(U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTypeLineU3Ed__10__ctor_mDBE988EDC20CD66A96DECE9DC32A06E484A42661(L_0, 0, NULL);
		U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator DialogueSystem::Baslat()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* DialogueSystem_Baslat_m420532010EA6AC03B587EAC6B9217C96C7B721C6 (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63* L_0 = (U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63*)il2cpp_codegen_object_new(U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CBaslatU3Ed__11__ctor_m4A06AA0ACD1B6BBF08984C751AAFA1BFBF928695(L_0, 0, NULL);
		U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void DialogueSystem::LoadData(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSystem_LoadData_m530D3C3396B5F1842F09E766B2B4DFD457F5F65D (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) 
{
	{
		// this.say? = data.say?;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = ___data0;
		NullCheck(L_0);
		int32_t L_1 = L_0->___sayU131_85;
		__this->___sayU131_9 = L_1;
		// }
		return;
	}
}
// System.Void DialogueSystem::SaveData(GameData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSystem_SaveData_mAC939C6BA2D0B4C2DBE702FC5A513FF33F1D2351 (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** ___data0, const RuntimeMethod* method) 
{
	{
		// data.say? = this.say?;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_0 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_0);
		int32_t L_2 = __this->___sayU131_9;
		NullCheck(L_1);
		L_1->___sayU131_85 = L_2;
		// }
		return;
	}
}
// System.Void DialogueSystem::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DialogueSystem__ctor_mA05D1FE824CBFB5CECC3AA972AD6F09965D48EBE (DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void DialogueSystem/<TypeLine>d__10::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeLineU3Ed__10__ctor_mDBE988EDC20CD66A96DECE9DC32A06E484A42661 (U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DialogueSystem/<TypeLine>d__10::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeLineU3Ed__10_System_IDisposable_Dispose_m87F77D935DB0E4CE9FCAE00429ADAF1CD9CCCF95 (U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DialogueSystem/<TypeLine>d__10::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTypeLineU3Ed__10_MoveNext_mE260B2B64719E501FCA1E2BC36B45B9DC99286E1 (U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* V_1 = NULL;
	Il2CppChar V_2 = 0x0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0084;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// foreach (char c in lines[index].ToCharArray())
		DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* L_4 = V_1;
		NullCheck(L_4);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_5 = L_4->___lines_5;
		DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* L_6 = V_1;
		NullCheck(L_6);
		int32_t L_7 = L_6->___index_8;
		NullCheck(L_5);
		int32_t L_8 = L_7;
		String_t* L_9 = (L_5)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		NullCheck(L_9);
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_10;
		L_10 = String_ToCharArray_m0699A92AA3E744229EF29CB9D943C47DF4FE5B46(L_9, NULL);
		__this->___U3CU3E7__wrap1_3 = L_10;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)L_10);
		__this->___U3CU3E7__wrap2_4 = 0;
		goto IL_0099;
	}

IL_003f:
	{
		// foreach (char c in lines[index].ToCharArray())
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_11 = __this->___U3CU3E7__wrap1_3;
		int32_t L_12 = __this->___U3CU3E7__wrap2_4;
		NullCheck(L_11);
		int32_t L_13 = L_12;
		uint16_t L_14 = (uint16_t)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		V_2 = L_14;
		// text.text += c;
		DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* L_15 = V_1;
		NullCheck(L_15);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = L_15->___text_4;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_17 = L_16;
		NullCheck(L_17);
		String_t* L_18;
		L_18 = VirtualFuncInvoker0< String_t* >::Invoke(70 /* System.String UnityEngine.UI.Text::get_text() */, L_17);
		String_t* L_19;
		L_19 = Char_ToString_m2A308731F9577C06AF3C0901234E2EAC8327410C((&V_2), NULL);
		String_t* L_20;
		L_20 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_18, L_19, NULL);
		NullCheck(L_17);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_17, L_20);
		// yield return new WaitForSeconds(textSpeed);
		DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* L_21 = V_1;
		NullCheck(L_21);
		float L_22 = L_21->___textSpeed_6;
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_23 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_23);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_23, L_22, NULL);
		__this->___U3CU3E2__current_1 = L_23;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_23);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0084:
	{
		__this->___U3CU3E1__state_0 = (-1);
		int32_t L_24 = __this->___U3CU3E7__wrap2_4;
		__this->___U3CU3E7__wrap2_4 = ((int32_t)il2cpp_codegen_add(L_24, 1));
	}

IL_0099:
	{
		// foreach (char c in lines[index].ToCharArray())
		int32_t L_25 = __this->___U3CU3E7__wrap2_4;
		CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* L_26 = __this->___U3CU3E7__wrap1_3;
		NullCheck(L_26);
		if ((((int32_t)L_25) < ((int32_t)((int32_t)(((RuntimeArray*)L_26)->max_length)))))
		{
			goto IL_003f;
		}
	}
	{
		__this->___U3CU3E7__wrap1_3 = (CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E7__wrap1_3), (void*)(CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB*)NULL);
		// }
		return (bool)0;
	}
}
// System.Object DialogueSystem/<TypeLine>d__10::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeLineU3Ed__10_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCB286EABFCB8C6C819DDEC4FAA87741A6FA23505 (U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DialogueSystem/<TypeLine>d__10::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTypeLineU3Ed__10_System_Collections_IEnumerator_Reset_mC1061742D52788B3049DA899A4B797A128DAAD4D (U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTypeLineU3Ed__10_System_Collections_IEnumerator_Reset_mC1061742D52788B3049DA899A4B797A128DAAD4D_RuntimeMethod_var)));
	}
}
// System.Object DialogueSystem/<TypeLine>d__10::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTypeLineU3Ed__10_System_Collections_IEnumerator_get_Current_mDB9892E6CBFB82BFD4AAFDF55A61A9BA7F27239C (U3CTypeLineU3Ed__10_tC17ABDAFBEDE9F905CEBF75224FF42E03D06AA37* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void DialogueSystem/<Baslat>d__11::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaslatU3Ed__11__ctor_m4A06AA0ACD1B6BBF08984C751AAFA1BFBF928695 (U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void DialogueSystem/<Baslat>d__11::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaslatU3Ed__11_System_IDisposable_Dispose_m38119EF493B8CAAA765A6B2684E32468ADEC9A37 (U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean DialogueSystem/<Baslat>d__11::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CBaslatU3Ed__11_MoveNext_mA80F6270A1340C28230AF72F4F3CE6B451BAB569 (U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(1f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (1.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// if(say? == 0)
		DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* L_5 = V_1;
		NullCheck(L_5);
		int32_t L_6 = L_5->___sayU131_9;
		if (L_6)
		{
			goto IL_004c;
		}
	}
	{
		// StartDialogue();
		DialogueSystem_t338F7BD2489D0709046591AF0301418371B13DD4* L_7 = V_1;
		NullCheck(L_7);
		DialogueSystem_StartDialogue_m087F394C1A3C08A0566955DD99AC2B209EAC8A14(L_7, NULL);
	}

IL_004c:
	{
		// }
		return (bool)0;
	}
}
// System.Object DialogueSystem/<Baslat>d__11::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBaslatU3Ed__11_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5A0ABA8C8A6F7B30C7B6CF312DF697A435AFBA89 (U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void DialogueSystem/<Baslat>d__11::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CBaslatU3Ed__11_System_Collections_IEnumerator_Reset_mF7D3F7EE8EA81B2407206AC7B537CED881EAF985 (U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CBaslatU3Ed__11_System_Collections_IEnumerator_Reset_mF7D3F7EE8EA81B2407206AC7B537CED881EAF985_RuntimeMethod_var)));
	}
}
// System.Object DialogueSystem/<Baslat>d__11::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CBaslatU3Ed__11_System_Collections_IEnumerator_get_Current_mD59A037658AAB525B422A966F9DA1EB9D304648F (U3CBaslatU3Ed__11_t49A51D145E0F5FBB6EA3FC1D3EE275D59941AC63* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GainCoinButton::PauseButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_PauseButton_mD2CAD6EC54233A21708787EC7FAFA3F3F9A0A6FD (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	{
		// isSailed = false;
		__this->___isSailed_10 = (bool)0;
		// pauseButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseButton_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)0, NULL);
		// goButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___goButton_12;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)1, NULL);
		// }
		return;
	}
}
// System.Void GainCoinButton::GoButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_GoButton_m695295E28C329D727B7DF3B0FF39D3AC00FAADC9 (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	{
		// isSailed = true;
		__this->___isSailed_10 = (bool)1;
		// pauseButton.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___pauseButton_11;
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)1, NULL);
		// goButton.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___goButton_12;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GainCoinButton::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_Start_m476F70EA0A47E63C30ED28BD76504E323A9DE36D (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34156F6E9E87433B9E12177E1E1D0F8A17FA5D55);
		s_Il2CppMethodInitialized = true;
	}
	{
		// paddeling.Play("sit");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_0 = __this->___paddeling_13;
		NullCheck(L_0);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_0, _stringLiteral34156F6E9E87433B9E12177E1E1D0F8A17FA5D55, NULL);
		// productionUpgrade2Power = 5;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1;
		L_1 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(5, NULL);
		__this->___productionUpgrade2Power_56 = L_1;
		// productionUpgrade3Power = 10;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2;
		L_2 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		__this->___productionUpgrade3Power_59 = L_2;
		// productionUpgrade4Power = 15;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)15), NULL);
		__this->___productionUpgrade4Power_62 = L_3;
		// productionUpgrade5Power = 20;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)20), NULL);
		__this->___productionUpgrade5Power_65 = L_4;
		// productionUpgrade6Power = 25;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)25), NULL);
		__this->___productionUpgrade6Power_68 = L_5;
		// productionUpgrade7Power = 30;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)30), NULL);
		__this->___productionUpgrade7Power_71 = L_6;
		// productionUpgrade8Power = 35;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)35), NULL);
		__this->___productionUpgrade8Power_74 = L_7;
		// }
		return;
	}
}
// System.Void GainCoinButton::LoadData(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_LoadData_mF1A31A481DB4636BE24525FCE3DD2F84964E9568 (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// this.coins = data.fish;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = ___data0;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___fish_0;
		__this->___coins_76 = L_1;
		// this.coinsClickValue = data.coinsClickValue;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_2 = ___data0;
		NullCheck(L_2);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3 = L_2->___coinsClickValue_1;
		__this->___coinsClickValue_77 = L_3;
		// this.coinsPerSec = data.coinsPerSec;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = ___data0;
		NullCheck(L_4);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = L_4->___coinsPerSec_2;
		__this->___coinsPerSec_78 = L_5;
		// cardUpgrades = data.cardUpgrades;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = ___data0;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___cardUpgrades_3;
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_7;
		// this.gems = data.gems;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_8 = ___data0;
		NullCheck(L_8);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = L_8->___gems_4;
		__this->___gems_80 = L_9;
		// this.gemBoost = data.gemBoost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_10 = ___data0;
		NullCheck(L_10);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = L_10->___gemBoost_5;
		__this->___gemBoost_81 = L_11;
		// this.productionUpgrade1Cost = data.productionUpgrade1Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_12 = ___data0;
		NullCheck(L_12);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13 = L_12->___productionUpgrade1Cost_6;
		__this->___productionUpgrade1Cost_53 = L_13;
		// this.productionUpgrade2Cost = data.productionUpgrade2Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_14 = ___data0;
		NullCheck(L_14);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15 = L_14->___productionUpgrade2Cost_8;
		__this->___productionUpgrade2Cost_55 = L_15;
		// this.productionUpgrade3Cost = data.productionUpgrade3Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_16 = ___data0;
		NullCheck(L_16);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17 = L_16->___productionUpgrade3Cost_11;
		__this->___productionUpgrade3Cost_58 = L_17;
		// this.productionUpgrade4Cost = data.productionUpgrade4Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_18 = ___data0;
		NullCheck(L_18);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19 = L_18->___productionUpgrade4Cost_14;
		__this->___productionUpgrade4Cost_61 = L_19;
		// this.productionUpgrade5Cost = data.productionUpgrade5Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_20 = ___data0;
		NullCheck(L_20);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21 = L_20->___productionUpgrade5Cost_17;
		__this->___productionUpgrade5Cost_64 = L_21;
		// this.productionUpgrade6Cost = data.productionUpgrade6Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_22 = ___data0;
		NullCheck(L_22);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23 = L_22->___productionUpgrade6Cost_20;
		__this->___productionUpgrade6Cost_67 = L_23;
		// this.productionUpgrade7Cost = data.productionUpgrade7Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_24 = ___data0;
		NullCheck(L_24);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25 = L_24->___productionUpgrade7Cost_23;
		__this->___productionUpgrade7Cost_70 = L_25;
		// this.productionUpgrade8Cost = data.productionUpgrade8Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_26 = ___data0;
		NullCheck(L_26);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_27 = L_26->___productionUpgrade8Cost_26;
		__this->___productionUpgrade8Cost_73 = L_27;
		// this.productionUpgrade1Level = data.productionUpgrade1Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_28 = ___data0;
		NullCheck(L_28);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29 = L_28->___productionUpgrade1Level_7;
		__this->___productionUpgrade1Level_54 = L_29;
		// this.productionUpgrade2Level = data.productionUpgrade2Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_30 = ___data0;
		NullCheck(L_30);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_31 = L_30->___productionUpgrade2Level_10;
		__this->___productionUpgrade2Level_57 = L_31;
		// this.productionUpgrade3Level = data.productionUpgrade3Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_32 = ___data0;
		NullCheck(L_32);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_33 = L_32->___productionUpgrade3Level_13;
		__this->___productionUpgrade3Level_60 = L_33;
		// this.productionUpgrade4Level = data.productionUpgrade4Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_34 = ___data0;
		NullCheck(L_34);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35 = L_34->___productionUpgrade4Level_16;
		__this->___productionUpgrade4Level_63 = L_35;
		// this.productionUpgrade5Level = data.productionUpgrade5Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_36 = ___data0;
		NullCheck(L_36);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_37 = L_36->___productionUpgrade5Level_19;
		__this->___productionUpgrade5Level_66 = L_37;
		// this.productionUpgrade6Level = data.productionUpgrade6Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_38 = ___data0;
		NullCheck(L_38);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_39 = L_38->___productionUpgrade6Level_22;
		__this->___productionUpgrade6Level_69 = L_39;
		// this.productionUpgrade7Level = data.productionUpgrade7Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_40 = ___data0;
		NullCheck(L_40);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_41 = L_40->___productionUpgrade7Level_25;
		__this->___productionUpgrade7Level_72 = L_41;
		// this.productionUpgrade8Level = data.productionUpgrade8Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_42 = ___data0;
		NullCheck(L_42);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_43 = L_42->___productionUpgrade8Level_28;
		__this->___productionUpgrade8Level_75 = L_43;
		// this.productionUpgrade2Power = data.productionUpgrade2Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_44 = ___data0;
		NullCheck(L_44);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_45 = L_44->___productionUpgrade2Power_9;
		__this->___productionUpgrade2Power_56 = L_45;
		// this.productionUpgrade3Power = data.productionUpgrade3Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_46 = ___data0;
		NullCheck(L_46);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_47 = L_46->___productionUpgrade3Power_12;
		__this->___productionUpgrade3Power_59 = L_47;
		// this.productionUpgrade4Power = data.productionUpgrade4Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_48 = ___data0;
		NullCheck(L_48);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_49 = L_48->___productionUpgrade4Power_15;
		__this->___productionUpgrade4Power_62 = L_49;
		// this.productionUpgrade5Power = data.productionUpgrade5Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_50 = ___data0;
		NullCheck(L_50);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_51 = L_50->___productionUpgrade5Power_18;
		__this->___productionUpgrade5Power_65 = L_51;
		// this.productionUpgrade6Power = data.productionUpgrade6Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_52 = ___data0;
		NullCheck(L_52);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_53 = L_52->___productionUpgrade6Power_21;
		__this->___productionUpgrade6Power_68 = L_53;
		// this.productionUpgrade7Power = data.productionUpgrade7Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_54 = ___data0;
		NullCheck(L_54);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_55 = L_54->___productionUpgrade7Power_24;
		__this->___productionUpgrade7Power_71 = L_55;
		// this.productionUpgrade8Power = data.productionUpgrade8Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_56 = ___data0;
		NullCheck(L_56);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_57 = L_56->___productionUpgrade8Power_27;
		__this->___productionUpgrade8Power_74 = L_57;
		// this.clickUpgrade1Level = data.clickUpgrade1Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_58 = ___data0;
		NullCheck(L_58);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_59 = L_58->___clickUpgrade1Level_30;
		__this->___clickUpgrade1Level_38 = L_59;
		// this.clickUpgrade2Level = data.clickUpgrade2Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_60 = ___data0;
		NullCheck(L_60);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_61 = L_60->___clickUpgrade2Level_32;
		__this->___clickUpgrade2Level_40 = L_61;
		// this.clickUpgrade3Level = data.clickUpgrade3Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_62 = ___data0;
		NullCheck(L_62);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_63 = L_62->___clickUpgrade3Level_34;
		__this->___clickUpgrade3Level_42 = L_63;
		// this.clickUpgrade4Level = data.clickUpgrade4Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_64 = ___data0;
		NullCheck(L_64);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_65 = L_64->___clickUpgrade4Level_36;
		__this->___clickUpgrade4Level_44 = L_65;
		// this.clickUpgrade5Level = data.clickUpgrade5Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_66 = ___data0;
		NullCheck(L_66);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_67 = L_66->___clickUpgrade5Level_38;
		__this->___clickUpgrade5Level_46 = L_67;
		// this.clickUpgrade6Level = data.clickUpgrade6Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_68 = ___data0;
		NullCheck(L_68);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_69 = L_68->___clickUpgrade6Level_40;
		__this->___clickUpgrade6Level_48 = L_69;
		// this.clickUpgrade7Level = data.clickUpgrade7Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_70 = ___data0;
		NullCheck(L_70);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_71 = L_70->___clickUpgrade7Level_42;
		__this->___clickUpgrade7Level_50 = L_71;
		// this.clickUpgrade8Level = data.clickUpgrade8Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_72 = ___data0;
		NullCheck(L_72);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_73 = L_72->___clickUpgrade8Level_44;
		__this->___clickUpgrade8Level_52 = L_73;
		// this.clickUpgrade1Cost = data.clickUpgrade1Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_74 = ___data0;
		NullCheck(L_74);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_75 = L_74->___clickUpgrade1Cost_29;
		__this->___clickUpgrade1Cost_37 = L_75;
		// this.clickUpgrade2Cost = data.clickUpgrade2Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_76 = ___data0;
		NullCheck(L_76);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_77 = L_76->___clickUpgrade2Cost_31;
		__this->___clickUpgrade2Cost_39 = L_77;
		// this.clickUpgrade3Cost = data.clickUpgrade3Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_78 = ___data0;
		NullCheck(L_78);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_79 = L_78->___clickUpgrade3Cost_33;
		__this->___clickUpgrade3Cost_41 = L_79;
		// this.clickUpgrade4Cost = data.clickUpgrade4Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_80 = ___data0;
		NullCheck(L_80);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_81 = L_80->___clickUpgrade4Cost_35;
		__this->___clickUpgrade4Cost_43 = L_81;
		// this.clickUpgrade5Cost = data.clickUpgrade5Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_82 = ___data0;
		NullCheck(L_82);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_83 = L_82->___clickUpgrade5Cost_37;
		__this->___clickUpgrade5Cost_45 = L_83;
		// this.clickUpgrade6Cost = data.clickUpgrade6Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_84 = ___data0;
		NullCheck(L_84);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_85 = L_84->___clickUpgrade6Cost_39;
		__this->___clickUpgrade6Cost_47 = L_85;
		// this.clickUpgrade7Cost = data.clickUpgrade7Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_86 = ___data0;
		NullCheck(L_86);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_87 = L_86->___clickUpgrade7Cost_41;
		__this->___clickUpgrade7Cost_49 = L_87;
		// this.clickUpgrade8Cost = data.clickUpgrade8Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_88 = ___data0;
		NullCheck(L_88);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_89 = L_88->___clickUpgrade8Cost_43;
		__this->___clickUpgrade8Cost_51 = L_89;
		// }
		return;
	}
}
// System.Void GainCoinButton::SaveData(GameData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_SaveData_mB1D9BF45511525F657AE7B2F0BB2BD7E91033819 (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** ___data0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// data.fish = this.coins;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_0 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = __this->___coins_76;
		NullCheck(L_1);
		L_1->___fish_0 = L_2;
		// data.coinsClickValue = this.coinsClickValue;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_3 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_3);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = __this->___coinsClickValue_77;
		NullCheck(L_4);
		L_4->___coinsClickValue_1 = L_5;
		// data.coinsPerSec = this.coinsPerSec;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_6 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_7 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = __this->___coinsPerSec_78;
		NullCheck(L_7);
		L_7->___coinsPerSec_2 = L_8;
		// data.cardUpgrades = cardUpgrades;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_9 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_10 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_9);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		NullCheck(L_10);
		L_10->___cardUpgrades_3 = L_11;
		// data.gems = this.gems;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_12 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_13 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_12);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14 = __this->___gems_80;
		NullCheck(L_13);
		L_13->___gems_4 = L_14;
		// data.gemBoost = this.gemBoost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_15 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_16 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_15);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17 = __this->___gemBoost_81;
		NullCheck(L_16);
		L_16->___gemBoost_5 = L_17;
		// data.productionUpgrade1Cost = this.productionUpgrade1Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_18 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_19 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_18);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20 = __this->___productionUpgrade1Cost_53;
		NullCheck(L_19);
		L_19->___productionUpgrade1Cost_6 = L_20;
		// data.productionUpgrade2Cost = this.productionUpgrade2Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_21 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_22 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_21);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23 = __this->___productionUpgrade2Cost_55;
		NullCheck(L_22);
		L_22->___productionUpgrade2Cost_8 = L_23;
		// data.productionUpgrade3Cost = this.productionUpgrade3Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_24 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_25 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_24);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26 = __this->___productionUpgrade3Cost_58;
		NullCheck(L_25);
		L_25->___productionUpgrade3Cost_11 = L_26;
		// data.productionUpgrade4Cost = this.productionUpgrade4Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_27 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_28 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_27);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29 = __this->___productionUpgrade4Cost_61;
		NullCheck(L_28);
		L_28->___productionUpgrade4Cost_14 = L_29;
		// data.productionUpgrade5Cost = this.productionUpgrade5Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_30 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_31 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_30);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_32 = __this->___productionUpgrade5Cost_64;
		NullCheck(L_31);
		L_31->___productionUpgrade5Cost_17 = L_32;
		// data.productionUpgrade6Cost = this.productionUpgrade6Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_33 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_34 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_33);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35 = __this->___productionUpgrade6Cost_67;
		NullCheck(L_34);
		L_34->___productionUpgrade6Cost_20 = L_35;
		// data.productionUpgrade7Cost = this.productionUpgrade7Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_36 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_37 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_36);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_38 = __this->___productionUpgrade7Cost_70;
		NullCheck(L_37);
		L_37->___productionUpgrade7Cost_23 = L_38;
		// data.productionUpgrade8Cost = this.productionUpgrade8Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_39 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_40 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_39);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_41 = __this->___productionUpgrade8Cost_73;
		NullCheck(L_40);
		L_40->___productionUpgrade8Cost_26 = L_41;
		// data.productionUpgrade1Level = this.productionUpgrade1Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_42 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_43 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_42);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_44 = __this->___productionUpgrade1Level_54;
		NullCheck(L_43);
		L_43->___productionUpgrade1Level_7 = L_44;
		// data.productionUpgrade2Level = this.productionUpgrade2Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_45 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_46 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_45);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_47 = __this->___productionUpgrade2Level_57;
		NullCheck(L_46);
		L_46->___productionUpgrade2Level_10 = L_47;
		// data.productionUpgrade3Level = this.productionUpgrade3Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_48 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_49 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_48);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_50 = __this->___productionUpgrade3Level_60;
		NullCheck(L_49);
		L_49->___productionUpgrade3Level_13 = L_50;
		// data.productionUpgrade4Level = this.productionUpgrade4Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_51 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_52 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_51);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_53 = __this->___productionUpgrade4Level_63;
		NullCheck(L_52);
		L_52->___productionUpgrade4Level_16 = L_53;
		// data.productionUpgrade5Level = this.productionUpgrade5Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_54 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_55 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_54);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_56 = __this->___productionUpgrade5Level_66;
		NullCheck(L_55);
		L_55->___productionUpgrade5Level_19 = L_56;
		// data.productionUpgrade6Level = this.productionUpgrade6Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_57 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_58 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_57);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_59 = __this->___productionUpgrade6Level_69;
		NullCheck(L_58);
		L_58->___productionUpgrade6Level_22 = L_59;
		// data.productionUpgrade7Level = this.productionUpgrade7Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_60 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_61 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_60);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_62 = __this->___productionUpgrade7Level_72;
		NullCheck(L_61);
		L_61->___productionUpgrade7Level_25 = L_62;
		// data.productionUpgrade8Level = this.productionUpgrade8Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_63 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_64 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_63);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_65 = __this->___productionUpgrade8Level_75;
		NullCheck(L_64);
		L_64->___productionUpgrade8Level_28 = L_65;
		// data.productionUpgrade2Power = this.productionUpgrade2Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_66 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_67 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_66);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_68 = __this->___productionUpgrade2Power_56;
		NullCheck(L_67);
		L_67->___productionUpgrade2Power_9 = L_68;
		// data.productionUpgrade3Power = this.productionUpgrade3Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_69 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_70 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_69);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_71 = __this->___productionUpgrade3Power_59;
		NullCheck(L_70);
		L_70->___productionUpgrade3Power_12 = L_71;
		// data.productionUpgrade4Power = this.productionUpgrade4Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_72 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_73 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_72);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_74 = __this->___productionUpgrade4Power_62;
		NullCheck(L_73);
		L_73->___productionUpgrade4Power_15 = L_74;
		// data.productionUpgrade5Power = this.productionUpgrade5Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_75 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_76 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_75);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_77 = __this->___productionUpgrade5Power_65;
		NullCheck(L_76);
		L_76->___productionUpgrade5Power_18 = L_77;
		// data.productionUpgrade6Power = this.productionUpgrade6Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_78 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_79 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_78);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_80 = __this->___productionUpgrade6Power_68;
		NullCheck(L_79);
		L_79->___productionUpgrade6Power_21 = L_80;
		// data.productionUpgrade7Power = this.productionUpgrade7Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_81 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_82 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_81);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_83 = __this->___productionUpgrade7Power_71;
		NullCheck(L_82);
		L_82->___productionUpgrade7Power_24 = L_83;
		// data.productionUpgrade8Power = this.productionUpgrade8Power;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_84 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_85 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_84);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_86 = __this->___productionUpgrade8Power_74;
		NullCheck(L_85);
		L_85->___productionUpgrade8Power_27 = L_86;
		// data.clickUpgrade1Level = this.clickUpgrade1Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_87 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_88 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_87);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_89 = __this->___clickUpgrade1Level_38;
		NullCheck(L_88);
		L_88->___clickUpgrade1Level_30 = L_89;
		// data.clickUpgrade2Level = this.clickUpgrade2Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_90 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_91 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_90);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_92 = __this->___clickUpgrade2Level_40;
		NullCheck(L_91);
		L_91->___clickUpgrade2Level_32 = L_92;
		// data.clickUpgrade3Level = this.clickUpgrade3Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_93 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_94 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_93);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_95 = __this->___clickUpgrade3Level_42;
		NullCheck(L_94);
		L_94->___clickUpgrade3Level_34 = L_95;
		// data.clickUpgrade4Level = this.clickUpgrade4Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_96 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_97 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_96);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_98 = __this->___clickUpgrade4Level_44;
		NullCheck(L_97);
		L_97->___clickUpgrade4Level_36 = L_98;
		// data.clickUpgrade5Level = this.clickUpgrade5Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_99 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_100 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_99);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_101 = __this->___clickUpgrade5Level_46;
		NullCheck(L_100);
		L_100->___clickUpgrade5Level_38 = L_101;
		// data.clickUpgrade6Level = this.clickUpgrade6Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_102 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_103 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_102);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_104 = __this->___clickUpgrade6Level_48;
		NullCheck(L_103);
		L_103->___clickUpgrade6Level_40 = L_104;
		// data.clickUpgrade7Level = this.clickUpgrade7Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_105 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_106 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_105);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_107 = __this->___clickUpgrade7Level_50;
		NullCheck(L_106);
		L_106->___clickUpgrade7Level_42 = L_107;
		// data.clickUpgrade8Level = this.clickUpgrade8Level;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_108 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_109 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_108);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_110 = __this->___clickUpgrade8Level_52;
		NullCheck(L_109);
		L_109->___clickUpgrade8Level_44 = L_110;
		// data.clickUpgrade1Cost = this.clickUpgrade1Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_111 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_112 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_111);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_113 = __this->___clickUpgrade1Cost_37;
		NullCheck(L_112);
		L_112->___clickUpgrade1Cost_29 = L_113;
		// data.clickUpgrade2Cost = this.clickUpgrade2Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_114 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_115 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_114);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_116 = __this->___clickUpgrade2Cost_39;
		NullCheck(L_115);
		L_115->___clickUpgrade2Cost_31 = L_116;
		// data.clickUpgrade3Cost = this.clickUpgrade3Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_117 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_118 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_117);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_119 = __this->___clickUpgrade3Cost_41;
		NullCheck(L_118);
		L_118->___clickUpgrade3Cost_33 = L_119;
		// data.clickUpgrade4Cost = this.clickUpgrade4Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_120 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_121 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_120);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_122 = __this->___clickUpgrade4Cost_43;
		NullCheck(L_121);
		L_121->___clickUpgrade4Cost_35 = L_122;
		// data.clickUpgrade5Cost = this.clickUpgrade5Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_123 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_124 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_123);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_125 = __this->___clickUpgrade5Cost_45;
		NullCheck(L_124);
		L_124->___clickUpgrade5Cost_37 = L_125;
		// data.clickUpgrade6Cost = this.clickUpgrade6Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_126 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_127 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_126);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_128 = __this->___clickUpgrade6Cost_47;
		NullCheck(L_127);
		L_127->___clickUpgrade6Cost_39 = L_128;
		// data.clickUpgrade7Cost = this.clickUpgrade7Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_129 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_130 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_129);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_131 = __this->___clickUpgrade7Cost_49;
		NullCheck(L_130);
		L_130->___clickUpgrade7Cost_41 = L_131;
		// data.clickUpgrade8Cost = this.clickUpgrade8Cost;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_132 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_133 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_132);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_134 = __this->___clickUpgrade8Cost_51;
		NullCheck(L_133);
		L_133->___clickUpgrade8Cost_43 = L_134;
		// }
		return;
	}
}
// System.Collections.IEnumerator GainCoinButton::T?klad?()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GainCoinButton_TU131kladU131_m64F7CB9B005EC0ED7B1426A4C40B0316C24CB7FB (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94* L_0 = (U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94*)il2cpp_codegen_object_new(U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CTU131kladU131U3Ed__84__ctor_m027E017B315D87D6B6AA97027FD99DF0002D0C13(L_0, 0, NULL);
		U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GainCoinButton::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_Update_m5E3541FE7D7FF6A1F2887947CD0E747639AC6533 (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral07C47C0C8DC7937FACC3099DF5546BF410C63C0F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0F048A8315980BED9EAF0C987BBA8F8F4C759226);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11446D21B246375E2011CBE2EC396282449D0E56);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral138B68D6085A87C16C353D2222C1A59E5A6D000F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1B3C207C7A232C37E7DA43EF9D0C8D4305B6597C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral257442077ACCA74CB9A232A2DC6583FE8E58D966);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2B96504CE4024C16CE38669FF5EE2CB63B9F9C29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral308F3A0E616FF8632568F78BAF5585817EA38E1C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34156F6E9E87433B9E12177E1E1D0F8A17FA5D55);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral341D85D21922A51C38B090D222CEDE8821841F87);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3B87D7A40DB847BB88DFB34070F92BE4C1E9C1E8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4151850CF24A4B335847DE5CFD7E6EC676A3BEF6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral465E661F5FB2116790DC75573E9C2ABA5E6BC469);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral66272156CF3BFCEE84E7E8290CCF99881A15FD70);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C3F2C1D2CB5C94BB9927540E0404AD2B8211E0E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral795B9565959A0BD64306566CF81EB335D4FDA5E0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral88BF8F00C4C4258B38BBBB20459911FA0DB1EB3F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9FCB35833C6B696091860ED1B32C668D102EF68A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA24119ECFEBA1705D75B3E9D6AC2E82830D284F1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCCEDD21168E5949BD5138D59300E1B4586BC93B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDE6BA0A06549114755EAECE20777DD856CA5159);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC04C8BFEA6179139FEEDBBDD9FCD52369A5D8D94);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC18968334E970E446D0B007C76ADD87DE6E23DCF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC2DBA9C91A84ABC13FBBD9DC93C9351C3CD2A6E9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3DE45465A4A094D97D63A05562E6143FDDC3007);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC7955644C68F8084EBEA62D51AE7E035731A4D15);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD2F9A3AE9A8A1F0F326684FC9724522057C2F033);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD4C97611203DCB540FF4A23F668FE0B93363C5DA);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD5B76B32B10EEBC30EABAD4AE2A217D2AB3FE38D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE0BBEBD2679208D9F3E6BD95B7D3CBF3B3FD95A5);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE84A3B2CB16AF20654B162562A7360C9FC00FD54);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA39A510B6DF0483F4869A7CAA6AE1F99AC3E5C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFACF5B1DF77735D1EC124DA38CCA82749E6817D2);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	String_t* V_1 = NULL;
	String_t* V_2 = NULL;
	String_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* V_5 = NULL;
	String_t* V_6 = NULL;
	String_t* V_7 = NULL;
	String_t* V_8 = NULL;
	String_t* V_9 = NULL;
	String_t* V_10 = NULL;
	String_t* V_11 = NULL;
	String_t* V_12 = NULL;
	String_t* V_13 = NULL;
	String_t* V_14 = NULL;
	String_t* V_15 = NULL;
	String_t* V_16 = NULL;
	String_t* V_17 = NULL;
	String_t* V_18 = NULL;
	String_t* V_19 = NULL;
	String_t* V_20 = NULL;
	String_t* V_21 = NULL;
	String_t* V_22 = NULL;
	String_t* V_23 = NULL;
	String_t* V_24 = NULL;
	String_t* V_25 = NULL;
	String_t* V_26 = NULL;
	String_t* V_27 = NULL;
	String_t* V_28 = NULL;
	String_t* V_29 = NULL;
	String_t* V_30 = NULL;
	String_t* V_31 = NULL;
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_32;
	memset((&V_32), 0, sizeof(V_32));
	{
		// gemsToGet = 150 * Sqrt(coins / 1e7);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0;
		L_0 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)150), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2;
		L_2 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((10000000.0), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Division_mB826F457D6C15E326E9AF575668EB293540C70A6(L_1, L_2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_Sqrt_m60A29735D97D37B5F24EB1500DB3852CCA68DBEF(L_3, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_0, L_4, NULL);
		__this->___gemsToGet_82 = L_5;
		// gemBoost = (gems * 0.05) + 1;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6 = __this->___gems_80;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((0.050000000000000003), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_6, L_7, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_8, L_9, NULL);
		__this->___gemBoost_81 = L_10;
		// gemsToGetText.text = "Prestige:\n+" + Floor(gemsToGet).ToString("F0") + " Gems";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_11 = __this->___gemsToGetText_36;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12 = __this->___gemsToGet_82;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_Floor_m1701A84F883064D06DA8FAD8BEA3A6E6215B9270(L_12, NULL);
		V_32 = L_13;
		String_t* L_14;
		L_14 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_32), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		String_t* L_15;
		L_15 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralBCCEDD21168E5949BD5138D59300E1B4586BC93B, L_14, _stringLiteral465E661F5FB2116790DC75573E9C2ABA5E6BC469, NULL);
		NullCheck(L_11);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_11, L_15);
		// gemsText.text = Floor(gems).ToString("F0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_16 = __this->___gemsText_34;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17 = __this->___gems_80;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_Floor_m1701A84F883064D06DA8FAD8BEA3A6E6215B9270(L_17, NULL);
		V_32 = L_18;
		String_t* L_19;
		L_19 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_32), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_16);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_16, L_19);
		// gemBoostText.text = gemBoost.ToString("F2") + "x boost";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_20 = __this->___gemBoostText_35;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_21 = (&__this->___gemBoost_81);
		String_t* L_22;
		L_22 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_21, _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		String_t* L_23;
		L_23 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_22, _stringLiteralD4C97611203DCB540FF4A23F668FE0B93363C5DA, NULL);
		NullCheck(L_20);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_20, L_23);
		// if (isSailed)
		bool L_24 = __this->___isSailed_10;
		if (!L_24)
		{
			goto IL_01bd;
		}
	}
	{
		// coinsPerSec = (productionUpgrade1Level + (productionUpgrade2Power * productionUpgrade2Level) +
		// (productionUpgrade3Power * productionUpgrade3Level) + (productionUpgrade4Power * productionUpgrade4Level) +
		// (productionUpgrade5Power * productionUpgrade5Level) + (productionUpgrade6Power * productionUpgrade6Level) +
		// (productionUpgrade7Power * productionUpgrade7Level) + (productionUpgrade8Power * productionUpgrade8Level)) * gemBoost + cardUpgrades;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25 = __this->___productionUpgrade1Level_54;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26 = __this->___productionUpgrade2Power_56;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_27 = __this->___productionUpgrade2Level_57;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_28;
		L_28 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_26, L_27, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29;
		L_29 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_25, L_28, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_30 = __this->___productionUpgrade3Power_59;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_31 = __this->___productionUpgrade3Level_60;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_32;
		L_32 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_30, L_31, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_33;
		L_33 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_29, L_32, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_34 = __this->___productionUpgrade4Power_62;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35 = __this->___productionUpgrade4Level_63;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_36;
		L_36 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_34, L_35, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_37;
		L_37 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_33, L_36, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_38 = __this->___productionUpgrade5Power_65;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_39 = __this->___productionUpgrade5Level_66;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_40;
		L_40 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_38, L_39, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_41;
		L_41 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_37, L_40, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_42 = __this->___productionUpgrade6Power_68;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_43 = __this->___productionUpgrade6Level_69;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_44;
		L_44 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_42, L_43, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_45;
		L_45 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_41, L_44, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_46 = __this->___productionUpgrade7Power_71;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_47 = __this->___productionUpgrade7Level_72;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_48;
		L_48 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_46, L_47, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_49;
		L_49 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_45, L_48, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_50 = __this->___productionUpgrade8Power_74;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_51 = __this->___productionUpgrade8Level_75;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_52;
		L_52 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_50, L_51, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_53;
		L_53 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_49, L_52, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_54 = __this->___gemBoost_81;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_55;
		L_55 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_53, L_54, NULL);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_56 = ((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_57;
		L_57 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_55, L_56, NULL);
		__this->___coinsPerSec_78 = L_57;
		// paddeling.Play("go");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_58 = __this->___paddeling_13;
		NullCheck(L_58);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_58, _stringLiteralE84A3B2CB16AF20654B162562A7360C9FC00FD54, NULL);
		// k???ktekne.enabled = true;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_59 = __this->___kUFCUE7UFCktekne_14;
		NullCheck(L_59);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_59, (bool)1, NULL);
		goto IL_01e5;
	}

IL_01bd:
	{
		// coinsPerSec = 0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_60;
		L_60 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___coinsPerSec_78 = L_60;
		// paddeling.Play("sit");
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_61 = __this->___paddeling_13;
		NullCheck(L_61);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_61, _stringLiteral34156F6E9E87433B9E12177E1E1D0F8A17FA5D55, NULL);
		// k???ktekne.enabled = false;
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_62 = __this->___kUFCUE7UFCktekne_14;
		NullCheck(L_62);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_62, (bool)0, NULL);
	}

IL_01e5:
	{
		// if (Input.GetMouseButtonDown(0))
		bool L_63;
		L_63 = Input_GetMouseButtonDown_m8DFC792D15FFF15D311614D5CC6C5D055E5A1DE3(0, NULL);
		if (!L_63)
		{
			goto IL_0204;
		}
	}
	{
		// bal?kc?.SetBool("isClicked", true);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_64 = __this->___balU131kcU131_5;
		NullCheck(L_64);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_64, _stringLiteralC04C8BFEA6179139FEEDBBDD9FCD52369A5D8D94, (bool)1, NULL);
		// StopAllCoroutines();
		MonoBehaviour_StopAllCoroutines_m872033451D42013A99867D09337490017E9ED318(__this, NULL);
	}

IL_0204:
	{
		// if (Input.GetMouseButtonUp(0))
		bool L_65;
		L_65 = Input_GetMouseButtonUp_mBE89CC9C69BBEA9A863819E77EA54411B0476ED6(0, NULL);
		if (!L_65)
		{
			goto IL_0219;
		}
	}
	{
		// StartCoroutine(T?klad?());
		RuntimeObject* L_66;
		L_66 = GainCoinButton_TU131kladU131_m64F7CB9B005EC0ED7B1426A4C40B0316C24CB7FB(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_67;
		L_67 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_66, NULL);
	}

IL_0219:
	{
		// clickValueText.text = "+" + NotationMethod(coinsClickValue, y: "F0") + " Click";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_68 = __this->___clickValueText_16;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_69 = __this->___coinsClickValue_77;
		String_t* L_70;
		L_70 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_69, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		String_t* L_71;
		L_71 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteral20E39C3AB7068FAFD9E4B868E16D2E5BC64D4952, L_70, _stringLiteralE0BBEBD2679208D9F3E6BD95B7D3CBF3B3FD95A5, NULL);
		NullCheck(L_68);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_68, L_71);
		// coinText.text = NotationMethod(coins, y: "F0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_72 = __this->___coinText_15;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_73 = __this->___coins_76;
		String_t* L_74;
		L_74 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_73, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_72);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_72, L_74);
		// coinPerSecText.text = coinsPerSec.ToString("F0") + " fish/s";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_75 = __this->___coinPerSecText_17;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_76 = (&__this->___coinsPerSec_78);
		String_t* L_77;
		L_77 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_76, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		String_t* L_78;
		L_78 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(L_77, _stringLiteral4151850CF24A4B335847DE5CFD7E6EC676A3BEF6, NULL);
		NullCheck(L_75);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_75, L_78);
		// clickUpgrade1CostString = NotationMethod(clickUpgrade1Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_79 = __this->___clickUpgrade1Cost_37;
		String_t* L_80;
		L_80 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_79, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_0 = L_80;
		// clickUpgrade1LevelString = NotationMethod(clickUpgrade1Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_81 = __this->___clickUpgrade1Level_38;
		String_t* L_82;
		L_82 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_81, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_1 = L_82;
		// clickUpgrade1Text.text = "Click Upgrade 1\nCost: " + clickUpgrade1CostString + " Fish\nPower: +1 Fish\nLevel: " + clickUpgrade1LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_83 = __this->___clickUpgrade1Text_18;
		String_t* L_84 = V_0;
		String_t* L_85 = V_1;
		String_t* L_86;
		L_86 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral0F048A8315980BED9EAF0C987BBA8F8F4C759226, L_84, _stringLiteral6C3F2C1D2CB5C94BB9927540E0404AD2B8211E0E, L_85, NULL);
		NullCheck(L_83);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_83, L_86);
		// clickUpgrade2CostString = NotationMethod(clickUpgrade2Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_87 = __this->___clickUpgrade2Cost_39;
		String_t* L_88;
		L_88 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_87, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_2 = L_88;
		// clickUpgrade2LevelString = NotationMethod(clickUpgrade2Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_89 = __this->___clickUpgrade2Level_40;
		String_t* L_90;
		L_90 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_89, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_3 = L_90;
		// clickUpgrade2Text.text = "Click Upgrade 2\nCost: " + clickUpgrade2CostString + " Fish\nPower: +5 Fish\nLevel: " + clickUpgrade2LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_91 = __this->___clickUpgrade2Text_19;
		String_t* L_92 = V_2;
		String_t* L_93 = V_3;
		String_t* L_94;
		L_94 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral138B68D6085A87C16C353D2222C1A59E5A6D000F, L_92, _stringLiteral257442077ACCA74CB9A232A2DC6583FE8E58D966, L_93, NULL);
		NullCheck(L_91);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_91, L_94);
		// clickUpgrade3CostString = NotationMethod(clickUpgrade3Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_95 = __this->___clickUpgrade3Cost_41;
		String_t* L_96;
		L_96 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_95, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_4 = L_96;
		// clickUpgrade3LevelString = NotationMethod(clickUpgrade3Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_97 = __this->___clickUpgrade3Level_42;
		String_t* L_98;
		L_98 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_97, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_5 = L_98;
		// clickUpgrade3Text.text = "Click Upgrade 3\nCost: " + clickUpgrade3CostString + " Fish\nPower: +10 Fish\nLevel: " + clickUpgrade3LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_99 = __this->___clickUpgrade3Text_20;
		String_t* L_100 = V_4;
		String_t* L_101 = V_5;
		String_t* L_102;
		L_102 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC7955644C68F8084EBEA62D51AE7E035731A4D15, L_100, _stringLiteralC3DE45465A4A094D97D63A05562E6143FDDC3007, L_101, NULL);
		NullCheck(L_99);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_99, L_102);
		// clickUpgrade4CostString = NotationMethod(clickUpgrade4Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_103 = __this->___clickUpgrade4Cost_43;
		String_t* L_104;
		L_104 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_103, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_6 = L_104;
		// clickUpgrade4LevelString = NotationMethod(clickUpgrade4Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_105 = __this->___clickUpgrade4Level_44;
		String_t* L_106;
		L_106 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_105, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_7 = L_106;
		// clickUpgrade4Text.text = "Click Upgrade 4\nCost: " + clickUpgrade4CostString + " Fish\nPower: +15 Fish\nLevel: " + clickUpgrade4LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_107 = __this->___clickUpgrade4Text_21;
		String_t* L_108 = V_6;
		String_t* L_109 = V_7;
		String_t* L_110;
		L_110 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral341D85D21922A51C38B090D222CEDE8821841F87, L_108, _stringLiteralFA39A510B6DF0483F4869A7CAA6AE1F99AC3E5C7, L_109, NULL);
		NullCheck(L_107);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_107, L_110);
		// clickUpgrade5CostString = NotationMethod(clickUpgrade5Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_111 = __this->___clickUpgrade5Cost_45;
		String_t* L_112;
		L_112 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_111, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_8 = L_112;
		// clickUpgrade5LevelString = NotationMethod(clickUpgrade5Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_113 = __this->___clickUpgrade5Level_46;
		String_t* L_114;
		L_114 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_113, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_9 = L_114;
		// clickUpgrade5Text.text = "Click Upgrade 5\nCost: " + clickUpgrade5CostString + " Fish\nPower: +20 Fish\nLevel: " + clickUpgrade5LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_115 = __this->___clickUpgrade5Text_22;
		String_t* L_116 = V_8;
		String_t* L_117 = V_9;
		String_t* L_118;
		L_118 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral3B87D7A40DB847BB88DFB34070F92BE4C1E9C1E8, L_116, _stringLiteralA24119ECFEBA1705D75B3E9D6AC2E82830D284F1, L_117, NULL);
		NullCheck(L_115);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_115, L_118);
		// clickUpgrade6CostString = NotationMethod(clickUpgrade6Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_119 = __this->___clickUpgrade6Cost_47;
		String_t* L_120;
		L_120 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_119, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_10 = L_120;
		// clickUpgrade6LevelString = NotationMethod(clickUpgrade6Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_121 = __this->___clickUpgrade6Level_48;
		String_t* L_122;
		L_122 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_121, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_11 = L_122;
		// clickUpgrade6Text.text = "Click Upgrade 6\nCost: " + clickUpgrade6CostString + " Fish\nPower: +25 Fish\nLevel: " + clickUpgrade6LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_123 = __this->___clickUpgrade6Text_23;
		String_t* L_124 = V_10;
		String_t* L_125 = V_11;
		String_t* L_126;
		L_126 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral07C47C0C8DC7937FACC3099DF5546BF410C63C0F, L_124, _stringLiteralD5B76B32B10EEBC30EABAD4AE2A217D2AB3FE38D, L_125, NULL);
		NullCheck(L_123);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_123, L_126);
		// clickUpgrade7CostString = NotationMethod(clickUpgrade7Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_127 = __this->___clickUpgrade7Cost_49;
		String_t* L_128;
		L_128 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_127, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_12 = L_128;
		// clickUpgrade7LevelString = NotationMethod(clickUpgrade7Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_129 = __this->___clickUpgrade7Level_50;
		String_t* L_130;
		L_130 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_129, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_13 = L_130;
		// clickUpgrade7Text.text = "Click Upgrade 7\nCost: " + clickUpgrade7CostString + " Fish\nPower: +30 Fish\nLevel: " + clickUpgrade7LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_131 = __this->___clickUpgrade7Text_24;
		String_t* L_132 = V_12;
		String_t* L_133 = V_13;
		String_t* L_134;
		L_134 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral66272156CF3BFCEE84E7E8290CCF99881A15FD70, L_132, _stringLiteralC18968334E970E446D0B007C76ADD87DE6E23DCF, L_133, NULL);
		NullCheck(L_131);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_131, L_134);
		// clickUpgrade8CostString = NotationMethod(clickUpgrade8Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_135 = __this->___clickUpgrade8Cost_51;
		String_t* L_136;
		L_136 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_135, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_14 = L_136;
		// clickUpgrade8LevelString = NotationMethod(clickUpgrade8Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_137 = __this->___clickUpgrade8Level_52;
		String_t* L_138;
		L_138 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_137, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_15 = L_138;
		// clickUpgrade8Text.text = "Click Upgrade 8\nCost: " + clickUpgrade8CostString + " Fish\nPower: +35 Fish\nLevel: " + clickUpgrade8LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_139 = __this->___clickUpgrade8Text_25;
		String_t* L_140 = V_14;
		String_t* L_141 = V_15;
		String_t* L_142;
		L_142 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral1B3C207C7A232C37E7DA43EF9D0C8D4305B6597C, L_140, _stringLiteral308F3A0E616FF8632568F78BAF5585817EA38E1C, L_141, NULL);
		NullCheck(L_139);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_139, L_142);
		// productionUpgrade1CostString = NotationMethod(productionUpgrade1Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_143 = __this->___productionUpgrade1Cost_53;
		String_t* L_144;
		L_144 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_143, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_16 = L_144;
		// productionUpgrade1LevelString = NotationMethod(productionUpgrade1Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_145 = __this->___productionUpgrade1Level_54;
		String_t* L_146;
		L_146 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_145, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_17 = L_146;
		// productionUpgrade1Text.text = "Production Upgrade 1\nCost: " + productionUpgrade1CostString + " Fish\nPower: +1 Fish\nLevel " + productionUpgrade1LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_147 = __this->___productionUpgrade1Text_26;
		String_t* L_148 = V_16;
		String_t* L_149 = V_17;
		String_t* L_150;
		L_150 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteral795B9565959A0BD64306566CF81EB335D4FDA5E0, L_148, _stringLiteralBDE6BA0A06549114755EAECE20777DD856CA5159, L_149, NULL);
		NullCheck(L_147);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_147, L_150);
		// productionUpgrade2CostString = NotationMethod(productionUpgrade2Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_151 = __this->___productionUpgrade2Cost_55;
		String_t* L_152;
		L_152 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_151, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_18 = L_152;
		// productionUpgrade2LevelString = NotationMethod(productionUpgrade2Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_153 = __this->___productionUpgrade2Level_57;
		String_t* L_154;
		L_154 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_153, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_19 = L_154;
		// productionUpgrade2Text.text = "Production Upgrade 2\nCost: " + productionUpgrade2CostString + " Fish\nPower: "+ (productionUpgrade2Power * gemBoost).ToString("F0") + " fish/s\nLevel: "+ productionUpgrade2LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_155 = __this->___productionUpgrade2Text_27;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_156 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_157 = L_156;
		NullCheck(L_157);
		ArrayElementTypeCheck (L_157, _stringLiteralFACF5B1DF77735D1EC124DA38CCA82749E6817D2);
		(L_157)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralFACF5B1DF77735D1EC124DA38CCA82749E6817D2);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_158 = L_157;
		String_t* L_159 = V_18;
		NullCheck(L_158);
		ArrayElementTypeCheck (L_158, L_159);
		(L_158)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_159);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_160 = L_158;
		NullCheck(L_160);
		ArrayElementTypeCheck (L_160, _stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		(L_160)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_161 = L_160;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_162 = __this->___productionUpgrade2Power_56;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_163 = __this->___gemBoost_81;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_164;
		L_164 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_162, L_163, NULL);
		V_32 = L_164;
		String_t* L_165;
		L_165 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_32), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_161);
		ArrayElementTypeCheck (L_161, L_165);
		(L_161)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_165);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_166 = L_161;
		NullCheck(L_166);
		ArrayElementTypeCheck (L_166, _stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_167 = L_166;
		String_t* L_168 = V_19;
		NullCheck(L_167);
		ArrayElementTypeCheck (L_167, L_168);
		(L_167)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_168);
		String_t* L_169;
		L_169 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_167, NULL);
		NullCheck(L_155);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_155, L_169);
		// productionUpgrade3CostString = NotationMethod(productionUpgrade3Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_170 = __this->___productionUpgrade3Cost_58;
		String_t* L_171;
		L_171 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_170, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_20 = L_171;
		// productionUpgrade3LevelString = NotationMethod(productionUpgrade3Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_172 = __this->___productionUpgrade3Level_60;
		String_t* L_173;
		L_173 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_172, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_21 = L_173;
		// productionUpgrade3Text.text = "Production Upgrade 3\nCost: " + productionUpgrade3CostString + " Fish\nPower: "+ (productionUpgrade3Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade3LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_174 = __this->___productionUpgrade3Text_28;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_175 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_176 = L_175;
		NullCheck(L_176);
		ArrayElementTypeCheck (L_176, _stringLiteral88BF8F00C4C4258B38BBBB20459911FA0DB1EB3F);
		(L_176)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral88BF8F00C4C4258B38BBBB20459911FA0DB1EB3F);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_177 = L_176;
		String_t* L_178 = V_20;
		NullCheck(L_177);
		ArrayElementTypeCheck (L_177, L_178);
		(L_177)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_178);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_179 = L_177;
		NullCheck(L_179);
		ArrayElementTypeCheck (L_179, _stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		(L_179)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_180 = L_179;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_181 = __this->___productionUpgrade3Power_59;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_182 = __this->___gemBoost_81;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_183;
		L_183 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_181, L_182, NULL);
		V_32 = L_183;
		String_t* L_184;
		L_184 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_32), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_180);
		ArrayElementTypeCheck (L_180, L_184);
		(L_180)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_184);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_185 = L_180;
		NullCheck(L_185);
		ArrayElementTypeCheck (L_185, _stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		(L_185)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_186 = L_185;
		String_t* L_187 = V_21;
		NullCheck(L_186);
		ArrayElementTypeCheck (L_186, L_187);
		(L_186)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_187);
		String_t* L_188;
		L_188 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_186, NULL);
		NullCheck(L_174);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_174, L_188);
		// productionUpgrade4CostString = NotationMethod(productionUpgrade4Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_189 = __this->___productionUpgrade4Cost_61;
		String_t* L_190;
		L_190 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_189, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_22 = L_190;
		// productionUpgrade4LevelString = NotationMethod(productionUpgrade4Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_191 = __this->___productionUpgrade4Level_63;
		String_t* L_192;
		L_192 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_191, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_23 = L_192;
		// productionUpgrade4Text.text = "Production Upgrade 4\nCost: " + productionUpgrade4CostString + " Fish\nPower: " + (productionUpgrade4Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade4LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_193 = __this->___productionUpgrade4Text_29;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_194 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_195 = L_194;
		NullCheck(L_195);
		ArrayElementTypeCheck (L_195, _stringLiteralD2F9A3AE9A8A1F0F326684FC9724522057C2F033);
		(L_195)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralD2F9A3AE9A8A1F0F326684FC9724522057C2F033);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_196 = L_195;
		String_t* L_197 = V_22;
		NullCheck(L_196);
		ArrayElementTypeCheck (L_196, L_197);
		(L_196)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_197);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_198 = L_196;
		NullCheck(L_198);
		ArrayElementTypeCheck (L_198, _stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		(L_198)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_199 = L_198;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_200 = __this->___productionUpgrade4Power_62;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_201 = __this->___gemBoost_81;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_202;
		L_202 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_200, L_201, NULL);
		V_32 = L_202;
		String_t* L_203;
		L_203 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_32), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_199);
		ArrayElementTypeCheck (L_199, L_203);
		(L_199)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_203);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_204 = L_199;
		NullCheck(L_204);
		ArrayElementTypeCheck (L_204, _stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		(L_204)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_205 = L_204;
		String_t* L_206 = V_23;
		NullCheck(L_205);
		ArrayElementTypeCheck (L_205, L_206);
		(L_205)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_206);
		String_t* L_207;
		L_207 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_205, NULL);
		NullCheck(L_193);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_193, L_207);
		// productionUpgrade5CostString = NotationMethod(productionUpgrade5Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_208 = __this->___productionUpgrade5Cost_64;
		String_t* L_209;
		L_209 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_208, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_24 = L_209;
		// productionUpgrade5LevelString = NotationMethod(productionUpgrade5Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_210 = __this->___productionUpgrade5Level_66;
		String_t* L_211;
		L_211 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_210, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_25 = L_211;
		// productionUpgrade5Text.text = "Production Upgrade 5\nCost: " + productionUpgrade5CostString + " Fish\nPower: " + (productionUpgrade5Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade5LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_212 = __this->___productionUpgrade5Text_30;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_213 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_214 = L_213;
		NullCheck(L_214);
		ArrayElementTypeCheck (L_214, _stringLiteral2B96504CE4024C16CE38669FF5EE2CB63B9F9C29);
		(L_214)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral2B96504CE4024C16CE38669FF5EE2CB63B9F9C29);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_215 = L_214;
		String_t* L_216 = V_24;
		NullCheck(L_215);
		ArrayElementTypeCheck (L_215, L_216);
		(L_215)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_216);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_217 = L_215;
		NullCheck(L_217);
		ArrayElementTypeCheck (L_217, _stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		(L_217)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_218 = L_217;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_219 = __this->___productionUpgrade5Power_65;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_220 = __this->___gemBoost_81;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_221;
		L_221 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_219, L_220, NULL);
		V_32 = L_221;
		String_t* L_222;
		L_222 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_32), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_218);
		ArrayElementTypeCheck (L_218, L_222);
		(L_218)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_222);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_223 = L_218;
		NullCheck(L_223);
		ArrayElementTypeCheck (L_223, _stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		(L_223)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_224 = L_223;
		String_t* L_225 = V_25;
		NullCheck(L_224);
		ArrayElementTypeCheck (L_224, L_225);
		(L_224)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_225);
		String_t* L_226;
		L_226 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_224, NULL);
		NullCheck(L_212);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_212, L_226);
		// productionUpgrade6CostString = NotationMethod(productionUpgrade6Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_227 = __this->___productionUpgrade6Cost_67;
		String_t* L_228;
		L_228 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_227, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_26 = L_228;
		// productionUpgrade6LevelString = NotationMethod(productionUpgrade6Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_229 = __this->___productionUpgrade6Level_69;
		String_t* L_230;
		L_230 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_229, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_27 = L_230;
		// productionUpgrade6Text.text = "Production Upgrade 6\nCost: " + productionUpgrade6CostString + " Fish\nPower: " + (productionUpgrade6Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade6LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_231 = __this->___productionUpgrade6Text_31;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_232 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_233 = L_232;
		NullCheck(L_233);
		ArrayElementTypeCheck (L_233, _stringLiteralC2DBA9C91A84ABC13FBBD9DC93C9351C3CD2A6E9);
		(L_233)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralC2DBA9C91A84ABC13FBBD9DC93C9351C3CD2A6E9);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_234 = L_233;
		String_t* L_235 = V_26;
		NullCheck(L_234);
		ArrayElementTypeCheck (L_234, L_235);
		(L_234)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_235);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_236 = L_234;
		NullCheck(L_236);
		ArrayElementTypeCheck (L_236, _stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		(L_236)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_237 = L_236;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_238 = __this->___productionUpgrade6Power_68;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_239 = __this->___gemBoost_81;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_240;
		L_240 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_238, L_239, NULL);
		V_32 = L_240;
		String_t* L_241;
		L_241 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_32), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_237);
		ArrayElementTypeCheck (L_237, L_241);
		(L_237)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_241);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_242 = L_237;
		NullCheck(L_242);
		ArrayElementTypeCheck (L_242, _stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		(L_242)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_243 = L_242;
		String_t* L_244 = V_27;
		NullCheck(L_243);
		ArrayElementTypeCheck (L_243, L_244);
		(L_243)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_244);
		String_t* L_245;
		L_245 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_243, NULL);
		NullCheck(L_231);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_231, L_245);
		// productionUpgrade7CostString = NotationMethod(productionUpgrade7Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_246 = __this->___productionUpgrade7Cost_70;
		String_t* L_247;
		L_247 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_246, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_28 = L_247;
		// productionUpgrade7LevelString = NotationMethod(productionUpgrade7Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_248 = __this->___productionUpgrade7Level_72;
		String_t* L_249;
		L_249 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_248, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_29 = L_249;
		// productionUpgrade7Text.text = "Production Upgrade 7\nCost: " + productionUpgrade7CostString + " Fish\nPower: " + (productionUpgrade7Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade7LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_250 = __this->___productionUpgrade7Text_32;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_251 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_252 = L_251;
		NullCheck(L_252);
		ArrayElementTypeCheck (L_252, _stringLiteral11446D21B246375E2011CBE2EC396282449D0E56);
		(L_252)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral11446D21B246375E2011CBE2EC396282449D0E56);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_253 = L_252;
		String_t* L_254 = V_28;
		NullCheck(L_253);
		ArrayElementTypeCheck (L_253, L_254);
		(L_253)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_254);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_255 = L_253;
		NullCheck(L_255);
		ArrayElementTypeCheck (L_255, _stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		(L_255)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_256 = L_255;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_257 = __this->___productionUpgrade7Power_71;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_258 = __this->___gemBoost_81;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_259;
		L_259 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_257, L_258, NULL);
		V_32 = L_259;
		String_t* L_260;
		L_260 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_32), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_256);
		ArrayElementTypeCheck (L_256, L_260);
		(L_256)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_260);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_261 = L_256;
		NullCheck(L_261);
		ArrayElementTypeCheck (L_261, _stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		(L_261)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_262 = L_261;
		String_t* L_263 = V_29;
		NullCheck(L_262);
		ArrayElementTypeCheck (L_262, L_263);
		(L_262)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_263);
		String_t* L_264;
		L_264 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_262, NULL);
		NullCheck(L_250);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_250, L_264);
		// productionUpgrade8CostString = NotationMethod(productionUpgrade8Cost, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_265 = __this->___productionUpgrade8Cost_73;
		String_t* L_266;
		L_266 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_265, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_30 = L_266;
		// productionUpgrade8LevelString = NotationMethod(productionUpgrade8Level, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_267 = __this->___productionUpgrade8Level_75;
		String_t* L_268;
		L_268 = GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC(__this, L_267, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_31 = L_268;
		// productionUpgrade8Text.text = "Production Upgrade 8\nCost: " + productionUpgrade8CostString + " Fish\nPower: " + (productionUpgrade8Power * gemBoost).ToString("F0") + " fish/s\nLevel: " + productionUpgrade8LevelString;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_269 = __this->___productionUpgrade8Text_33;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_270 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_271 = L_270;
		NullCheck(L_271);
		ArrayElementTypeCheck (L_271, _stringLiteral9FCB35833C6B696091860ED1B32C668D102EF68A);
		(L_271)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral9FCB35833C6B696091860ED1B32C668D102EF68A);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_272 = L_271;
		String_t* L_273 = V_30;
		NullCheck(L_272);
		ArrayElementTypeCheck (L_272, L_273);
		(L_272)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_273);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_274 = L_272;
		NullCheck(L_274);
		ArrayElementTypeCheck (L_274, _stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		(L_274)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralA3AE28DFB2A29C6242E5C3F1E45D0A8884519784);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_275 = L_274;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_276 = __this->___productionUpgrade8Power_74;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_277 = __this->___gemBoost_81;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_278;
		L_278 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_276, L_277, NULL);
		V_32 = L_278;
		String_t* L_279;
		L_279 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_32), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_275);
		ArrayElementTypeCheck (L_275, L_279);
		(L_275)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_279);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_280 = L_275;
		NullCheck(L_280);
		ArrayElementTypeCheck (L_280, _stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		(L_280)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralED5E121877B657D4532C6203C8DB1E53D41CC4FF);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_281 = L_280;
		String_t* L_282 = V_31;
		NullCheck(L_281);
		ArrayElementTypeCheck (L_281, L_282);
		(L_281)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_282);
		String_t* L_283;
		L_283 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_281, NULL);
		NullCheck(L_269);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_269, L_283);
		// coins += coinsPerSec * Time.deltaTime;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_284 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_285 = __this->___coinsPerSec_78;
		float L_286;
		L_286 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_287;
		L_287 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446(L_286, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_288;
		L_288 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_285, L_287, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_289;
		L_289 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_284, L_288, NULL);
		__this->___coins_76 = L_289;
		// }
		return;
	}
}
// System.String GainCoinButton::NotationMethod(BreakInfinity.BigDouble,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* GainCoinButton_NotationMethod_mAF77B3A51A81565A51695A48A8EA0A7697FA77EC (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___x0, String_t* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		s_Il2CppMethodInitialized = true;
	}
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (x > 1000)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1;
		L_1 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		bool L_2;
		L_2 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		// var exponent = Floor(Log10(Abs(x)));
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_Abs_m0A71FB38CA379E3919B865E9AE8F9E1440C1E6FE(L_3, NULL);
		double L_5;
		L_5 = BigDouble_Log10_m75A67FA813A577CFCE777E729B8A14E48219045B(L_4, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6(L_5, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_Floor_m1701A84F883064D06DA8FAD8BEA3A6E6215B9270(L_6, NULL);
		V_0 = L_7;
		// var mantissa = x / Pow(10, exponent);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = ___x0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10 = V_0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_Pow_m83F48F2477A77A5918FC7E66491AE962D0D3564B(L_9, L_10, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Division_mB826F457D6C15E326E9AF575668EB293540C70A6(L_8, L_11, NULL);
		V_1 = L_12;
		// return mantissa.ToString(format: "F2") + "e" + exponent;
		String_t* L_13;
		L_13 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_1), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14 = V_0;
		V_2 = L_14;
		String_t* L_15;
		L_15 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_2), NULL);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_13, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, L_15, NULL);
		return L_16;
	}

IL_0062:
	{
		// return x.ToString(y);
		String_t* L_17 = ___y1;
		String_t* L_18;
		L_18 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&___x0), L_17, NULL);
		return L_18;
	}
}
// System.Void GainCoinButton::BuyUpgrade(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_BuyUpgrade_m353A671CF86EA77499F766F7CDA263F467F0EFB8 (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, String_t* ___upgradeID0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0AED34DD945A392A12CB48E7FC22B878E8E9BF3E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0D25CB8D2F8CAEFE11488EDF6311E30E81D26FF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C795B3FA1904F53C2E89455297E2A2C3AC6227C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3E86ED4DE2642B1FBD44257F71A36B3F3C79C655);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral40C694996C2B9EF3ECBE524D244A1B55E269281D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral4D0A46EE4EC13D0890B71027FEED99D64D4DDCA0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral69863ACCC9EF1B1EE508A3D447ECFDED57A76B29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B5F0601E9AB41687D6C065F9FAEF95C9B0FFA89);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral75AC554233DDA7373DBAA274552CE21DA0E6A24A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral952EAC7581773B4480FA993071BDBB1F2EBE35C7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD7788843796112A3333A86F2131B749DCE62B516);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF41B74BBF02266779106404E3623B1EB9D9EC8D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF541D8CA2CC05EED95A2EB4FED6CB11C221C4FD7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF6BFA9B4FFC539A34A6010906BAC693B196FFA74);
		s_Il2CppMethodInitialized = true;
	}
	uint32_t V_0 = 0;
	{
		String_t* L_0 = ___upgradeID0;
		uint32_t L_1;
		L_1 = U3CPrivateImplementationDetailsU3E_ComputeStringHash_m6EA1F233618497AEFF8902A5EDFA24C74E2F2876(L_0, NULL);
		V_0 = L_1;
		uint32_t L_2 = V_0;
		if ((!(((uint32_t)L_2) <= ((uint32_t)((int32_t)536866330)))))
		{
			goto IL_0080;
		}
	}
	{
		uint32_t L_3 = V_0;
		if ((!(((uint32_t)L_3) <= ((uint32_t)((int32_t)469755854)))))
		{
			goto IL_004d;
		}
	}
	{
		uint32_t L_4 = V_0;
		if ((!(((uint32_t)L_4) <= ((uint32_t)((int32_t)436200616)))))
		{
			goto IL_0036;
		}
	}
	{
		uint32_t L_5 = V_0;
		if ((((int32_t)L_5) == ((int32_t)((int32_t)419422997))))
		{
			goto IL_016b;
		}
	}
	{
		uint32_t L_6 = V_0;
		if ((((int32_t)L_6) == ((int32_t)((int32_t)436200616))))
		{
			goto IL_015a;
		}
	}
	{
		return;
	}

IL_0036:
	{
		uint32_t L_7 = V_0;
		if ((((int32_t)L_7) == ((int32_t)((int32_t)452978235))))
		{
			goto IL_0149;
		}
	}
	{
		uint32_t L_8 = V_0;
		if ((((int32_t)L_8) == ((int32_t)((int32_t)469755854))))
		{
			goto IL_0138;
		}
	}
	{
		return;
	}

IL_004d:
	{
		uint32_t L_9 = V_0;
		if ((!(((uint32_t)L_9) <= ((uint32_t)((int32_t)503311092)))))
		{
			goto IL_006c;
		}
	}
	{
		uint32_t L_10 = V_0;
		if ((((int32_t)L_10) == ((int32_t)((int32_t)486533473))))
		{
			goto IL_0127;
		}
	}
	{
		uint32_t L_11 = V_0;
		if ((((int32_t)L_11) == ((int32_t)((int32_t)503311092))))
		{
			goto IL_0116;
		}
	}
	{
		return;
	}

IL_006c:
	{
		uint32_t L_12 = V_0;
		if ((((int32_t)L_12) == ((int32_t)((int32_t)520088711))))
		{
			goto IL_0105;
		}
	}
	{
		uint32_t L_13 = V_0;
		if ((((int32_t)L_13) == ((int32_t)((int32_t)536866330))))
		{
			goto IL_00f4;
		}
	}
	{
		return;
	}

IL_0080:
	{
		uint32_t L_14 = V_0;
		if ((!(((uint32_t)L_14) <= ((uint32_t)((int32_t)-1998966900)))))
		{
			goto IL_00be;
		}
	}
	{
		uint32_t L_15 = V_0;
		if ((!(((uint32_t)L_15) <= ((uint32_t)((int32_t)-2049299757)))))
		{
			goto IL_00a7;
		}
	}
	{
		uint32_t L_16 = V_0;
		if ((((int32_t)L_16) == ((int32_t)((int32_t)-2066077376))))
		{
			goto IL_018d;
		}
	}
	{
		uint32_t L_17 = V_0;
		if ((((int32_t)L_17) == ((int32_t)((int32_t)-2049299757))))
		{
			goto IL_019e;
		}
	}
	{
		return;
	}

IL_00a7:
	{
		uint32_t L_18 = V_0;
		if ((((int32_t)L_18) == ((int32_t)((int32_t)-2015744519))))
		{
			goto IL_017c;
		}
	}
	{
		uint32_t L_19 = V_0;
		if ((((int32_t)L_19) == ((int32_t)((int32_t)-1998966900))))
		{
			goto IL_01d1;
		}
	}
	{
		return;
	}

IL_00be:
	{
		uint32_t L_20 = V_0;
		if ((!(((uint32_t)L_20) <= ((uint32_t)((int32_t)-1965411662)))))
		{
			goto IL_00dd;
		}
	}
	{
		uint32_t L_21 = V_0;
		if ((((int32_t)L_21) == ((int32_t)((int32_t)-1982189281))))
		{
			goto IL_01e2;
		}
	}
	{
		uint32_t L_22 = V_0;
		if ((((int32_t)L_22) == ((int32_t)((int32_t)-1965411662))))
		{
			goto IL_01af;
		}
	}
	{
		return;
	}

IL_00dd:
	{
		uint32_t L_23 = V_0;
		if ((((int32_t)L_23) == ((int32_t)((int32_t)-1948634043))))
		{
			goto IL_01c0;
		}
	}
	{
		uint32_t L_24 = V_0;
		if ((((int32_t)L_24) == ((int32_t)((int32_t)-1898301186))))
		{
			goto IL_01f3;
		}
	}
	{
		return;
	}

IL_00f4:
	{
		String_t* L_25 = ___upgradeID0;
		bool L_26;
		L_26 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_25, _stringLiteralACA1EC1EB1D6AB82D8549B4EA5A5E83C1C605489, NULL);
		if (L_26)
		{
			goto IL_0204;
		}
	}
	{
		return;
	}

IL_0105:
	{
		String_t* L_27 = ___upgradeID0;
		bool L_28;
		L_28 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_27, _stringLiteral973BF933F2B6DBFEF5F650EC3192D305E7043D38, NULL);
		if (L_28)
		{
			goto IL_0262;
		}
	}
	{
		return;
	}

IL_0116:
	{
		String_t* L_29 = ___upgradeID0;
		bool L_30;
		L_30 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_29, _stringLiteralF41B74BBF02266779106404E3623B1EB9D9EC8D7, NULL);
		if (L_30)
		{
			goto IL_02c0;
		}
	}
	{
		return;
	}

IL_0127:
	{
		String_t* L_31 = ___upgradeID0;
		bool L_32;
		L_32 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_31, _stringLiteral3E86ED4DE2642B1FBD44257F71A36B3F3C79C655, NULL);
		if (L_32)
		{
			goto IL_031e;
		}
	}
	{
		return;
	}

IL_0138:
	{
		String_t* L_33 = ___upgradeID0;
		bool L_34;
		L_34 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_33, _stringLiteralF6BFA9B4FFC539A34A6010906BAC693B196FFA74, NULL);
		if (L_34)
		{
			goto IL_037c;
		}
	}
	{
		return;
	}

IL_0149:
	{
		String_t* L_35 = ___upgradeID0;
		bool L_36;
		L_36 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_35, _stringLiteral952EAC7581773B4480FA993071BDBB1F2EBE35C7, NULL);
		if (L_36)
		{
			goto IL_03da;
		}
	}
	{
		return;
	}

IL_015a:
	{
		String_t* L_37 = ___upgradeID0;
		bool L_38;
		L_38 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_37, _stringLiteral0D25CB8D2F8CAEFE11488EDF6311E30E81D26FF8, NULL);
		if (L_38)
		{
			goto IL_0438;
		}
	}
	{
		return;
	}

IL_016b:
	{
		String_t* L_39 = ___upgradeID0;
		bool L_40;
		L_40 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_39, _stringLiteral69863ACCC9EF1B1EE508A3D447ECFDED57A76B29, NULL);
		if (L_40)
		{
			goto IL_0496;
		}
	}
	{
		return;
	}

IL_017c:
	{
		String_t* L_41 = ___upgradeID0;
		bool L_42;
		L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteral40C694996C2B9EF3ECBE524D244A1B55E269281D, NULL);
		if (L_42)
		{
			goto IL_04f4;
		}
	}
	{
		return;
	}

IL_018d:
	{
		String_t* L_43 = ___upgradeID0;
		bool L_44;
		L_44 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_43, _stringLiteral6B5F0601E9AB41687D6C065F9FAEF95C9B0FFA89, NULL);
		if (L_44)
		{
			goto IL_0563;
		}
	}
	{
		return;
	}

IL_019e:
	{
		String_t* L_45 = ___upgradeID0;
		bool L_46;
		L_46 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_45, _stringLiteralD7788843796112A3333A86F2131B749DCE62B516, NULL);
		if (L_46)
		{
			goto IL_05d8;
		}
	}
	{
		return;
	}

IL_01af:
	{
		String_t* L_47 = ___upgradeID0;
		bool L_48;
		L_48 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_47, _stringLiteral4D0A46EE4EC13D0890B71027FEED99D64D4DDCA0, NULL);
		if (L_48)
		{
			goto IL_064e;
		}
	}
	{
		return;
	}

IL_01c0:
	{
		String_t* L_49 = ___upgradeID0;
		bool L_50;
		L_50 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_49, _stringLiteralF541D8CA2CC05EED95A2EB4FED6CB11C221C4FD7, NULL);
		if (L_50)
		{
			goto IL_06c4;
		}
	}
	{
		return;
	}

IL_01d1:
	{
		String_t* L_51 = ___upgradeID0;
		bool L_52;
		L_52 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_51, _stringLiteral75AC554233DDA7373DBAA274552CE21DA0E6A24A, NULL);
		if (L_52)
		{
			goto IL_073a;
		}
	}
	{
		return;
	}

IL_01e2:
	{
		String_t* L_53 = ___upgradeID0;
		bool L_54;
		L_54 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_53, _stringLiteral0AED34DD945A392A12CB48E7FC22B878E8E9BF3E, NULL);
		if (L_54)
		{
			goto IL_07b0;
		}
	}
	{
		return;
	}

IL_01f3:
	{
		String_t* L_55 = ___upgradeID0;
		bool L_56;
		L_56 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_55, _stringLiteral2C795B3FA1904F53C2E89455297E2A2C3AC6227C, NULL);
		if (L_56)
		{
			goto IL_0826;
		}
	}
	{
		return;
	}

IL_0204:
	{
		// if (coins >= productionUpgrade1Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_57 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_58 = __this->___productionUpgrade1Cost_53;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_59;
		L_59 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_57, L_58, NULL);
		if (!L_59)
		{
			goto IL_0898;
		}
	}
	{
		// productionUpgrade1Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_60 = __this->___productionUpgrade1Level_54;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_61;
		L_61 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_60, NULL);
		__this->___productionUpgrade1Level_54 = L_61;
		// coins -= productionUpgrade1Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_62 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_63 = __this->___productionUpgrade1Cost_53;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_64;
		L_64 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_62, L_63, NULL);
		__this->___coins_76 = L_64;
		// productionUpgrade1Cost *= 1.07;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_65 = __this->___productionUpgrade1Cost_53;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_66;
		L_66 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((1.0700000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_67;
		L_67 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_65, L_66, NULL);
		__this->___productionUpgrade1Cost_53 = L_67;
		// break;
		return;
	}

IL_0262:
	{
		// if (coins >= productionUpgrade2Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_68 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_69 = __this->___productionUpgrade2Cost_55;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_70;
		L_70 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_68, L_69, NULL);
		if (!L_70)
		{
			goto IL_0898;
		}
	}
	{
		// productionUpgrade2Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_71 = __this->___productionUpgrade2Level_57;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_72;
		L_72 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_71, NULL);
		__this->___productionUpgrade2Level_57 = L_72;
		// coins -= productionUpgrade2Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_73 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_74 = __this->___productionUpgrade2Cost_55;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_75;
		L_75 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_73, L_74, NULL);
		__this->___coins_76 = L_75;
		// productionUpgrade2Cost *= 1.09;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_76 = __this->___productionUpgrade2Cost_55;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_77;
		L_77 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((1.0900000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_78;
		L_78 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_76, L_77, NULL);
		__this->___productionUpgrade2Cost_55 = L_78;
		// break;
		return;
	}

IL_02c0:
	{
		// if (coins >= productionUpgrade3Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_79 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_80 = __this->___productionUpgrade3Cost_58;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_81;
		L_81 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_79, L_80, NULL);
		if (!L_81)
		{
			goto IL_0898;
		}
	}
	{
		// productionUpgrade3Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_82 = __this->___productionUpgrade3Level_60;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_83;
		L_83 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_82, NULL);
		__this->___productionUpgrade3Level_60 = L_83;
		// coins -= productionUpgrade3Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_84 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_85 = __this->___productionUpgrade3Cost_58;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_86;
		L_86 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_84, L_85, NULL);
		__this->___coins_76 = L_86;
		// productionUpgrade3Cost *= 2.03;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_87 = __this->___productionUpgrade3Cost_58;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_88;
		L_88 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((2.0299999999999998), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_89;
		L_89 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_87, L_88, NULL);
		__this->___productionUpgrade3Cost_58 = L_89;
		// break;
		return;
	}

IL_031e:
	{
		// if (coins >= productionUpgrade4Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_90 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_91 = __this->___productionUpgrade4Cost_61;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_92;
		L_92 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_90, L_91, NULL);
		if (!L_92)
		{
			goto IL_0898;
		}
	}
	{
		// productionUpgrade4Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_93 = __this->___productionUpgrade4Level_63;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_94;
		L_94 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_93, NULL);
		__this->___productionUpgrade4Level_63 = L_94;
		// coins -= productionUpgrade4Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_95 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_96 = __this->___productionUpgrade4Cost_61;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_97;
		L_97 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_95, L_96, NULL);
		__this->___coins_76 = L_97;
		// productionUpgrade4Cost *= 2.06;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_98 = __this->___productionUpgrade4Cost_61;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_99;
		L_99 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((2.0600000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_100;
		L_100 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_98, L_99, NULL);
		__this->___productionUpgrade4Cost_61 = L_100;
		// break;
		return;
	}

IL_037c:
	{
		// if (coins >= productionUpgrade5Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_101 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_102 = __this->___productionUpgrade5Cost_64;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_103;
		L_103 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_101, L_102, NULL);
		if (!L_103)
		{
			goto IL_0898;
		}
	}
	{
		// productionUpgrade5Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_104 = __this->___productionUpgrade5Level_66;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_105;
		L_105 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_104, NULL);
		__this->___productionUpgrade5Level_66 = L_105;
		// coins -= productionUpgrade5Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_106 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_107 = __this->___productionUpgrade5Cost_64;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_108;
		L_108 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_106, L_107, NULL);
		__this->___coins_76 = L_108;
		// productionUpgrade5Cost *= 2.09;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_109 = __this->___productionUpgrade5Cost_64;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_110;
		L_110 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((2.0899999999999999), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_111;
		L_111 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_109, L_110, NULL);
		__this->___productionUpgrade5Cost_64 = L_111;
		// break;
		return;
	}

IL_03da:
	{
		// if (coins >= productionUpgrade6Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_112 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_113 = __this->___productionUpgrade6Cost_67;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_114;
		L_114 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_112, L_113, NULL);
		if (!L_114)
		{
			goto IL_0898;
		}
	}
	{
		// productionUpgrade6Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_115 = __this->___productionUpgrade6Level_69;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_116;
		L_116 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_115, NULL);
		__this->___productionUpgrade6Level_69 = L_116;
		// coins -= productionUpgrade6Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_117 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_118 = __this->___productionUpgrade6Cost_67;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_119;
		L_119 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_117, L_118, NULL);
		__this->___coins_76 = L_119;
		// productionUpgrade6Cost *= 3.03;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_120 = __this->___productionUpgrade6Cost_67;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_121;
		L_121 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((3.0299999999999998), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_122;
		L_122 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_120, L_121, NULL);
		__this->___productionUpgrade6Cost_67 = L_122;
		// break;
		return;
	}

IL_0438:
	{
		// if (coins >= productionUpgrade7Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_123 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_124 = __this->___productionUpgrade7Cost_70;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_125;
		L_125 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_123, L_124, NULL);
		if (!L_125)
		{
			goto IL_0898;
		}
	}
	{
		// productionUpgrade7Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_126 = __this->___productionUpgrade7Level_72;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_127;
		L_127 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_126, NULL);
		__this->___productionUpgrade7Level_72 = L_127;
		// coins -= productionUpgrade7Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_128 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_129 = __this->___productionUpgrade7Cost_70;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_130;
		L_130 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_128, L_129, NULL);
		__this->___coins_76 = L_130;
		// productionUpgrade7Cost *= 3.06;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_131 = __this->___productionUpgrade7Cost_70;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_132;
		L_132 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((3.0600000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_133;
		L_133 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_131, L_132, NULL);
		__this->___productionUpgrade7Cost_70 = L_133;
		// break;
		return;
	}

IL_0496:
	{
		// if (coins >= productionUpgrade8Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_134 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_135 = __this->___productionUpgrade8Cost_73;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_136;
		L_136 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_134, L_135, NULL);
		if (!L_136)
		{
			goto IL_0898;
		}
	}
	{
		// productionUpgrade8Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_137 = __this->___productionUpgrade8Level_75;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_138;
		L_138 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_137, NULL);
		__this->___productionUpgrade8Level_75 = L_138;
		// coins -= productionUpgrade8Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_139 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_140 = __this->___productionUpgrade8Cost_73;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_141;
		L_141 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_139, L_140, NULL);
		__this->___coins_76 = L_141;
		// productionUpgrade8Cost *= 3.09;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_142 = __this->___productionUpgrade8Cost_73;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_143;
		L_143 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((3.0899999999999999), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_144;
		L_144 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_142, L_143, NULL);
		__this->___productionUpgrade8Cost_73 = L_144;
		// break;
		return;
	}

IL_04f4:
	{
		// if (coins >= clickUpgrade1Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_145 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_146 = __this->___clickUpgrade1Cost_37;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_147;
		L_147 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_145, L_146, NULL);
		if (!L_147)
		{
			goto IL_0898;
		}
	}
	{
		// clickUpgrade1Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_148 = __this->___clickUpgrade1Level_38;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_149;
		L_149 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_148, NULL);
		__this->___clickUpgrade1Level_38 = L_149;
		// coins -= clickUpgrade1Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_150 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_151 = __this->___clickUpgrade1Cost_37;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_152;
		L_152 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_150, L_151, NULL);
		__this->___coins_76 = L_152;
		// clickUpgrade1Cost *= 1.07;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_153 = __this->___clickUpgrade1Cost_37;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_154;
		L_154 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((1.0700000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_155;
		L_155 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_153, L_154, NULL);
		__this->___clickUpgrade1Cost_37 = L_155;
		// coinsClickValue++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_156 = __this->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_157;
		L_157 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_156, NULL);
		__this->___coinsClickValue_77 = L_157;
		// break;
		return;
	}

IL_0563:
	{
		// if (coins >= clickUpgrade2Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_158 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_159 = __this->___clickUpgrade2Cost_39;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_160;
		L_160 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_158, L_159, NULL);
		if (!L_160)
		{
			goto IL_0898;
		}
	}
	{
		// clickUpgrade2Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_161 = __this->___clickUpgrade2Level_40;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_162;
		L_162 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_161, NULL);
		__this->___clickUpgrade2Level_40 = L_162;
		// coins -= clickUpgrade2Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_163 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_164 = __this->___clickUpgrade2Cost_39;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_165;
		L_165 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_163, L_164, NULL);
		__this->___coins_76 = L_165;
		// clickUpgrade2Cost *= 1.09;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_166 = __this->___clickUpgrade2Cost_39;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_167;
		L_167 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((1.0900000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_168;
		L_168 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_166, L_167, NULL);
		__this->___clickUpgrade2Cost_39 = L_168;
		// coinsClickValue += 5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_169 = __this->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_170;
		L_170 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(5, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_171;
		L_171 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_169, L_170, NULL);
		__this->___coinsClickValue_77 = L_171;
		// break;
		return;
	}

IL_05d8:
	{
		// if (coins >= clickUpgrade3Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_172 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_173 = __this->___clickUpgrade3Cost_41;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_174;
		L_174 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_172, L_173, NULL);
		if (!L_174)
		{
			goto IL_0898;
		}
	}
	{
		// clickUpgrade3Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_175 = __this->___clickUpgrade3Level_42;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_176;
		L_176 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_175, NULL);
		__this->___clickUpgrade3Level_42 = L_176;
		// coins -= clickUpgrade3Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_177 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_178 = __this->___clickUpgrade3Cost_41;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_179;
		L_179 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_177, L_178, NULL);
		__this->___coins_76 = L_179;
		// clickUpgrade3Cost *= 2.03;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_180 = __this->___clickUpgrade3Cost_41;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_181;
		L_181 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((2.0299999999999998), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_182;
		L_182 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_180, L_181, NULL);
		__this->___clickUpgrade3Cost_41 = L_182;
		// coinsClickValue += 10;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_183 = __this->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_184;
		L_184 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_185;
		L_185 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_183, L_184, NULL);
		__this->___coinsClickValue_77 = L_185;
		// break;
		return;
	}

IL_064e:
	{
		// if (coins >= clickUpgrade3Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_186 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_187 = __this->___clickUpgrade3Cost_41;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_188;
		L_188 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_186, L_187, NULL);
		if (!L_188)
		{
			goto IL_0898;
		}
	}
	{
		// clickUpgrade4Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_189 = __this->___clickUpgrade4Level_44;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_190;
		L_190 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_189, NULL);
		__this->___clickUpgrade4Level_44 = L_190;
		// coins -= clickUpgrade4Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_191 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_192 = __this->___clickUpgrade4Cost_43;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_193;
		L_193 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_191, L_192, NULL);
		__this->___coins_76 = L_193;
		// clickUpgrade4Cost *= 2.06;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_194 = __this->___clickUpgrade4Cost_43;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_195;
		L_195 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((2.0600000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_196;
		L_196 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_194, L_195, NULL);
		__this->___clickUpgrade4Cost_43 = L_196;
		// coinsClickValue += 15;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_197 = __this->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_198;
		L_198 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)15), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_199;
		L_199 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_197, L_198, NULL);
		__this->___coinsClickValue_77 = L_199;
		// break;
		return;
	}

IL_06c4:
	{
		// if (coins >= clickUpgrade5Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_200 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_201 = __this->___clickUpgrade5Cost_45;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_202;
		L_202 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_200, L_201, NULL);
		if (!L_202)
		{
			goto IL_0898;
		}
	}
	{
		// clickUpgrade5Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_203 = __this->___clickUpgrade5Level_46;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_204;
		L_204 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_203, NULL);
		__this->___clickUpgrade5Level_46 = L_204;
		// coins -= clickUpgrade5Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_205 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_206 = __this->___clickUpgrade5Cost_45;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_207;
		L_207 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_205, L_206, NULL);
		__this->___coins_76 = L_207;
		// clickUpgrade5Cost *= 2.09;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_208 = __this->___clickUpgrade5Cost_45;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_209;
		L_209 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((2.0899999999999999), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_210;
		L_210 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_208, L_209, NULL);
		__this->___clickUpgrade5Cost_45 = L_210;
		// coinsClickValue += 20;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_211 = __this->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_212;
		L_212 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)20), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_213;
		L_213 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_211, L_212, NULL);
		__this->___coinsClickValue_77 = L_213;
		// break;
		return;
	}

IL_073a:
	{
		// if (coins >= clickUpgrade6Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_214 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_215 = __this->___clickUpgrade6Cost_47;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_216;
		L_216 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_214, L_215, NULL);
		if (!L_216)
		{
			goto IL_0898;
		}
	}
	{
		// clickUpgrade6Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_217 = __this->___clickUpgrade6Level_48;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_218;
		L_218 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_217, NULL);
		__this->___clickUpgrade6Level_48 = L_218;
		// coins -= clickUpgrade6Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_219 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_220 = __this->___clickUpgrade6Cost_47;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_221;
		L_221 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_219, L_220, NULL);
		__this->___coins_76 = L_221;
		// clickUpgrade6Cost *= 3.03;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_222 = __this->___clickUpgrade6Cost_47;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_223;
		L_223 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((3.0299999999999998), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_224;
		L_224 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_222, L_223, NULL);
		__this->___clickUpgrade6Cost_47 = L_224;
		// coinsClickValue += 25;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_225 = __this->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_226;
		L_226 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)25), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_227;
		L_227 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_225, L_226, NULL);
		__this->___coinsClickValue_77 = L_227;
		// break;
		return;
	}

IL_07b0:
	{
		// if (coins >= clickUpgrade7Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_228 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_229 = __this->___clickUpgrade7Cost_49;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_230;
		L_230 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_228, L_229, NULL);
		if (!L_230)
		{
			goto IL_0898;
		}
	}
	{
		// clickUpgrade7Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_231 = __this->___clickUpgrade7Level_50;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_232;
		L_232 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_231, NULL);
		__this->___clickUpgrade7Level_50 = L_232;
		// coins -= clickUpgrade7Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_233 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_234 = __this->___clickUpgrade7Cost_49;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_235;
		L_235 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_233, L_234, NULL);
		__this->___coins_76 = L_235;
		// clickUpgrade7Cost *= 3.06;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_236 = __this->___clickUpgrade7Cost_49;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_237;
		L_237 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((3.0600000000000001), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_238;
		L_238 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_236, L_237, NULL);
		__this->___clickUpgrade7Cost_49 = L_238;
		// coinsClickValue += 30;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_239 = __this->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_240;
		L_240 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)30), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_241;
		L_241 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_239, L_240, NULL);
		__this->___coinsClickValue_77 = L_241;
		// break;
		return;
	}

IL_0826:
	{
		// if (coins >= clickUpgrade8Cost)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_242 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_243 = __this->___clickUpgrade8Cost_51;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_244;
		L_244 = BigDouble_op_GreaterThanOrEqual_m2EA1D6E65EC525112F83D0DE64E96AACF5F42BD5(L_242, L_243, NULL);
		if (!L_244)
		{
			goto IL_0898;
		}
	}
	{
		// clickUpgrade8Level++;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_245 = __this->___clickUpgrade8Level_52;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_246;
		L_246 = BigDouble_op_Increment_m23D7BD0CF3FCB97C51142B37627BAD7F75804368(L_245, NULL);
		__this->___clickUpgrade8Level_52 = L_246;
		// coins -= clickUpgrade8Cost;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_247 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_248 = __this->___clickUpgrade8Cost_51;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_249;
		L_249 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_247, L_248, NULL);
		__this->___coins_76 = L_249;
		// clickUpgrade8Cost *= 3.09;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_250 = __this->___clickUpgrade8Cost_51;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_251;
		L_251 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6((3.0899999999999999), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_252;
		L_252 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_250, L_251, NULL);
		__this->___clickUpgrade8Cost_51 = L_252;
		// coinsClickValue += 35;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_253 = __this->___coinsClickValue_77;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_254;
		L_254 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)35), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_255;
		L_255 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_253, L_254, NULL);
		__this->___coinsClickValue_77 = L_255;
	}

IL_0898:
	{
		// }
		return;
	}
}
// System.Void GainCoinButton::Click()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_Click_m20A9F6BE5291E3423B92F666C8DF6D08886A73FC (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// coins += coinsClickValue;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0 = __this->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = __this->___coinsClickValue_77;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2;
		L_2 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_0, L_1, NULL);
		__this->___coins_76 = L_2;
		// }
		return;
	}
}
// System.Void GainCoinButton::Prestige()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_Prestige_mED64122BB825CC2282C350A0C8787B65FF3B6FA8 (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(coins > 1000)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0 = __this->___coins_76;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1;
		L_1 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		bool L_2;
		L_2 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0494;
		}
	}
	{
		// healthAndPriates.inGameTime = 0;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_3 = __this->___healthAndPriates_6;
		NullCheck(L_3);
		L_3->___inGameTime_32 = (0.0);
		// coins = 0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___coins_76 = L_4;
		// coinsClickValue = 1;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		__this->___coinsClickValue_77 = L_5;
		// coinsPerSec = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___coinsPerSec_78 = L_6;
		// clickUpgrade1Cost = 100;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100), NULL);
		__this->___clickUpgrade1Cost_37 = L_7;
		// clickUpgrade2Cost = 200;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)200), NULL);
		__this->___clickUpgrade2Cost_39 = L_8;
		// clickUpgrade3Cost = 300;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)300), NULL);
		__this->___clickUpgrade3Cost_41 = L_9;
		// clickUpgrade4Cost = 400;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)400), NULL);
		__this->___clickUpgrade4Cost_43 = L_10;
		// clickUpgrade5Cost = 500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		__this->___clickUpgrade5Cost_45 = L_11;
		// clickUpgrade6Cost = 600;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)600), NULL);
		__this->___clickUpgrade6Cost_47 = L_12;
		// clickUpgrade7Cost = 700;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)700), NULL);
		__this->___clickUpgrade7Cost_49 = L_13;
		// clickUpgrade8Cost = 800;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)800), NULL);
		__this->___clickUpgrade8Cost_51 = L_14;
		// productionUpgrade1Cost = 500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		__this->___productionUpgrade1Cost_53 = L_15;
		// productionUpgrade2Cost = 1000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16;
		L_16 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		__this->___productionUpgrade2Cost_55 = L_16;
		// productionUpgrade3Cost = 1500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1500), NULL);
		__this->___productionUpgrade3Cost_58 = L_17;
		// productionUpgrade4Cost = 2000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)2000), NULL);
		__this->___productionUpgrade4Cost_61 = L_18;
		// productionUpgrade5Cost = 2500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)2500), NULL);
		__this->___productionUpgrade5Cost_64 = L_19;
		// productionUpgrade6Cost = 3000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20;
		L_20 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)3000), NULL);
		__this->___productionUpgrade6Cost_67 = L_20;
		// productionUpgrade7Cost = 3500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21;
		L_21 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)3500), NULL);
		__this->___productionUpgrade7Cost_70 = L_21;
		// productionUpgrade8Cost = 4000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22;
		L_22 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)4000), NULL);
		__this->___productionUpgrade8Cost_73 = L_22;
		// clickUpgrade1Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23;
		L_23 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade1Level_38 = L_23;
		// clickUpgrade2Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_24;
		L_24 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade2Level_40 = L_24;
		// clickUpgrade3Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25;
		L_25 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade3Level_42 = L_25;
		// clickUpgrade4Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26;
		L_26 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade4Level_44 = L_26;
		// clickUpgrade5Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_27;
		L_27 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade5Level_46 = L_27;
		// clickUpgrade6Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_28;
		L_28 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade6Level_48 = L_28;
		// clickUpgrade7Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29;
		L_29 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade7Level_50 = L_29;
		// clickUpgrade8Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_30;
		L_30 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade8Level_52 = L_30;
		// productionUpgrade1Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_31;
		L_31 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade1Level_54 = L_31;
		// productionUpgrade2Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_32;
		L_32 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade2Level_57 = L_32;
		// productionUpgrade3Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_33;
		L_33 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade3Level_60 = L_33;
		// productionUpgrade4Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_34;
		L_34 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade4Level_63 = L_34;
		// productionUpgrade5Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35;
		L_35 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade5Level_66 = L_35;
		// productionUpgrade6Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_36;
		L_36 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade6Level_69 = L_36;
		// productionUpgrade7Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_37;
		L_37 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade7Level_72 = L_37;
		// productionUpgrade8Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_38;
		L_38 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade8Level_75 = L_38;
		// defencePowerController.defenceUpgrade1Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_39 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_40;
		L_40 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_39);
		L_39->___defenceUpgrade1Level_15 = L_40;
		// defencePowerController.defenceUpgrade2Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_41 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_42;
		L_42 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_41);
		L_41->___defenceUpgrade2Level_17 = L_42;
		// defencePowerController.defenceUpgrade3Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_43 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_44;
		L_44 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_43);
		L_43->___defenceUpgrade3Level_19 = L_44;
		// defencePowerController.defenceUpgrade4Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_45 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_46;
		L_46 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_45);
		L_45->___defenceUpgrade4Level_21 = L_46;
		// defencePowerController.defenceUpgrade5Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_47 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_48;
		L_48 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_47);
		L_47->___defenceUpgrade5Level_23 = L_48;
		// defencePowerController.defenceUpgrade6Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_49 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_50;
		L_50 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_49);
		L_49->___defenceUpgrade6Level_25 = L_50;
		// defencePowerController.defenceUpgrade7Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_51 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_52;
		L_52 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_51);
		L_51->___defenceUpgrade7Level_27 = L_52;
		// defencePowerController.defenceUpgrade8Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_53 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_54;
		L_54 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_53);
		L_53->___defenceUpgrade8Level_29 = L_54;
		// defencePowerController.defenceUpgrade1Cost = 100;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_55 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_56;
		L_56 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100), NULL);
		NullCheck(L_55);
		L_55->___defenceUpgrade1Cost_14 = L_56;
		// defencePowerController.defenceUpgrade2Cost = 200;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_57 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_58;
		L_58 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)200), NULL);
		NullCheck(L_57);
		L_57->___defenceUpgrade2Cost_16 = L_58;
		// defencePowerController.defenceUpgrade3Cost = 300;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_59 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_60;
		L_60 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)300), NULL);
		NullCheck(L_59);
		L_59->___defenceUpgrade3Cost_18 = L_60;
		// defencePowerController.defenceUpgrade4Cost = 400;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_61 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_62;
		L_62 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)400), NULL);
		NullCheck(L_61);
		L_61->___defenceUpgrade4Cost_20 = L_62;
		// defencePowerController.defenceUpgrade5Cost = 500;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_63 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_64;
		L_64 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		NullCheck(L_63);
		L_63->___defenceUpgrade5Cost_22 = L_64;
		// defencePowerController.defenceUpgrade6Cost = 600;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_65 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_66;
		L_66 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)600), NULL);
		NullCheck(L_65);
		L_65->___defenceUpgrade6Cost_24 = L_66;
		// defencePowerController.defenceUpgrade7Cost = 700;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_67 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_68;
		L_68 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)700), NULL);
		NullCheck(L_67);
		L_67->___defenceUpgrade7Cost_26 = L_68;
		// defencePowerController.defenceUpgrade8Cost = 800;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_69 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_70;
		L_70 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)800), NULL);
		NullCheck(L_69);
		L_69->___defenceUpgrade8Cost_28 = L_70;
		// soldierCountScript.soldierUpgrade1Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_71 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_72;
		L_72 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_71);
		L_71->___soldierUpgrade1Level_15 = L_72;
		// soldierCountScript.soldierUpgrade2Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_73 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_74;
		L_74 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_73);
		L_73->___soldierUpgrade2Level_17 = L_74;
		// soldierCountScript.soldierUpgrade3Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_75 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_76;
		L_76 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_75);
		L_75->___soldierUpgrade3Level_19 = L_76;
		// soldierCountScript.soldierUpgrade4Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_77 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_78;
		L_78 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_77);
		L_77->___soldierUpgrade4Level_21 = L_78;
		// soldierCountScript.soldierUpgrade5Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_79 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_80;
		L_80 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_79);
		L_79->___soldierUpgrade5Level_23 = L_80;
		// soldierCountScript.soldierUpgrade6Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_81 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_82;
		L_82 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_81);
		L_81->___soldierUpgrade6Level_25 = L_82;
		// soldierCountScript.soldierUpgrade7Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_83 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_84;
		L_84 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_83);
		L_83->___soldierUpgrade7Level_27 = L_84;
		// soldierCountScript.soldierUpgrade8Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_85 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_86;
		L_86 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_85);
		L_85->___soldierUpgrade8Level_29 = L_86;
		// soldierCountScript.soldierUpgrade1Cost = 500;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_87 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_88;
		L_88 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		NullCheck(L_87);
		L_87->___soldierUpgrade1Cost_14 = L_88;
		// soldierCountScript.soldierUpgrade2Cost = 1000;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_89 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_90;
		L_90 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		NullCheck(L_89);
		L_89->___soldierUpgrade2Cost_16 = L_90;
		// soldierCountScript.soldierUpgrade3Cost = 1500;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_91 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_92;
		L_92 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1500), NULL);
		NullCheck(L_91);
		L_91->___soldierUpgrade3Cost_18 = L_92;
		// soldierCountScript.soldierUpgrade4Cost = 2000;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_93 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_94;
		L_94 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)2000), NULL);
		NullCheck(L_93);
		L_93->___soldierUpgrade4Cost_20 = L_94;
		// soldierCountScript.soldierUpgrade5Cost = 2500;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_95 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_96;
		L_96 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)2500), NULL);
		NullCheck(L_95);
		L_95->___soldierUpgrade5Cost_22 = L_96;
		// soldierCountScript.soldierUpgrade6Cost = 3000;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_97 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_98;
		L_98 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)3000), NULL);
		NullCheck(L_97);
		L_97->___soldierUpgrade6Cost_24 = L_98;
		// soldierCountScript.soldierUpgrade7Cost = 3500;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_99 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_100;
		L_100 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)3500), NULL);
		NullCheck(L_99);
		L_99->___soldierUpgrade7Cost_26 = L_100;
		// soldierCountScript.soldierUpgrade8Cost = 4000;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_101 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_102;
		L_102 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)4000), NULL);
		NullCheck(L_101);
		L_101->___soldierUpgrade8Cost_28 = L_102;
		// sellFish.gainedCoin = 0;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_103 = __this->___sellFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_104;
		L_104 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_103);
		L_103->___gainedCoin_7 = L_104;
		// gems += gemsToGet;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_105 = __this->___gems_80;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_106 = __this->___gemsToGet_82;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_107;
		L_107 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_105, L_106, NULL);
		__this->___gems_80 = L_107;
	}

IL_0494:
	{
		// }
		return;
	}
}
// System.Void GainCoinButton::FullReset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_FullReset_m8DA3C4BA70D84DAEE63E24E72C6B4A684555CD7E (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// healthAndPriates.inGameTime = 0;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_0 = __this->___healthAndPriates_6;
		NullCheck(L_0);
		L_0->___inGameTime_32 = (0.0);
		// gemBoost = 1;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1;
		L_1 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		__this->___gemBoost_81 = L_1;
		// gems = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2;
		L_2 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___gems_80 = L_2;
		// coins = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___coins_76 = L_3;
		// coinsClickValue = 1;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		__this->___coinsClickValue_77 = L_4;
		// coinsPerSec = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___coinsPerSec_78 = L_5;
		// cardUpgrades = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		il2cpp_codegen_runtime_class_init_inline(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_6;
		// clickUpgrade1Cost = 100;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100), NULL);
		__this->___clickUpgrade1Cost_37 = L_7;
		// clickUpgrade2Cost = 200;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)200), NULL);
		__this->___clickUpgrade2Cost_39 = L_8;
		// clickUpgrade3Cost = 300;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)300), NULL);
		__this->___clickUpgrade3Cost_41 = L_9;
		// clickUpgrade4Cost = 400;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)400), NULL);
		__this->___clickUpgrade4Cost_43 = L_10;
		// clickUpgrade5Cost = 500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		__this->___clickUpgrade5Cost_45 = L_11;
		// clickUpgrade6Cost = 600;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)600), NULL);
		__this->___clickUpgrade6Cost_47 = L_12;
		// clickUpgrade7Cost = 700;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)700), NULL);
		__this->___clickUpgrade7Cost_49 = L_13;
		// clickUpgrade8Cost = 800;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14;
		L_14 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)800), NULL);
		__this->___clickUpgrade8Cost_51 = L_14;
		// productionUpgrade1Cost = 500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15;
		L_15 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		__this->___productionUpgrade1Cost_53 = L_15;
		// productionUpgrade2Cost = 1000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16;
		L_16 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		__this->___productionUpgrade2Cost_55 = L_16;
		// productionUpgrade3Cost = 1500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1500), NULL);
		__this->___productionUpgrade3Cost_58 = L_17;
		// productionUpgrade4Cost = 2000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)2000), NULL);
		__this->___productionUpgrade4Cost_61 = L_18;
		// productionUpgrade5Cost = 2500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)2500), NULL);
		__this->___productionUpgrade5Cost_64 = L_19;
		// productionUpgrade6Cost = 3000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20;
		L_20 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)3000), NULL);
		__this->___productionUpgrade6Cost_67 = L_20;
		// productionUpgrade7Cost = 3500;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21;
		L_21 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)3500), NULL);
		__this->___productionUpgrade7Cost_70 = L_21;
		// productionUpgrade8Cost = 4000;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22;
		L_22 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)4000), NULL);
		__this->___productionUpgrade8Cost_73 = L_22;
		// clickUpgrade1Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23;
		L_23 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade1Level_38 = L_23;
		// clickUpgrade2Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_24;
		L_24 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade2Level_40 = L_24;
		// clickUpgrade3Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25;
		L_25 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade3Level_42 = L_25;
		// clickUpgrade4Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26;
		L_26 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade4Level_44 = L_26;
		// clickUpgrade5Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_27;
		L_27 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade5Level_46 = L_27;
		// clickUpgrade6Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_28;
		L_28 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade6Level_48 = L_28;
		// clickUpgrade7Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29;
		L_29 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade7Level_50 = L_29;
		// clickUpgrade8Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_30;
		L_30 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___clickUpgrade8Level_52 = L_30;
		// productionUpgrade1Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_31;
		L_31 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade1Level_54 = L_31;
		// productionUpgrade2Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_32;
		L_32 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade2Level_57 = L_32;
		// productionUpgrade3Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_33;
		L_33 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade3Level_60 = L_33;
		// productionUpgrade4Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_34;
		L_34 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade4Level_63 = L_34;
		// productionUpgrade5Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35;
		L_35 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade5Level_66 = L_35;
		// productionUpgrade6Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_36;
		L_36 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade6Level_69 = L_36;
		// productionUpgrade7Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_37;
		L_37 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade7Level_72 = L_37;
		// productionUpgrade8Level = 0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_38;
		L_38 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___productionUpgrade8Level_75 = L_38;
		// healthAndPriates.reducedPower = 0;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_39 = __this->___healthAndPriates_6;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_40;
		L_40 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_39);
		L_39->___reducedPower_20 = L_40;
		// healthAndPriates.GuardCount = 1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_41 = __this->___healthAndPriates_6;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_42;
		L_42 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		NullCheck(L_41);
		L_41->___GuardCount_14 = L_42;
		// healthAndPriates.defencePower = 1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_43 = __this->___healthAndPriates_6;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_44;
		L_44 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(1, NULL);
		NullCheck(L_43);
		L_43->___defencePower_13 = L_44;
		// healthAndPriates.takenMoney = 5000;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_45 = __this->___healthAndPriates_6;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_46;
		L_46 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)5000), NULL);
		NullCheck(L_45);
		L_45->___takenMoney_30 = L_46;
		// sellFish.gainedCoin = 0;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_47 = __this->___sellFish_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_48;
		L_48 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_47);
		L_47->___gainedCoin_7 = L_48;
		// defencePowerController.defenceUpgrade1Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_49 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_50;
		L_50 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_49);
		L_49->___defenceUpgrade1Level_15 = L_50;
		// defencePowerController.defenceUpgrade2Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_51 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_52;
		L_52 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_51);
		L_51->___defenceUpgrade2Level_17 = L_52;
		// defencePowerController.defenceUpgrade3Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_53 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_54;
		L_54 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_53);
		L_53->___defenceUpgrade3Level_19 = L_54;
		// defencePowerController.defenceUpgrade4Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_55 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_56;
		L_56 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_55);
		L_55->___defenceUpgrade4Level_21 = L_56;
		// defencePowerController.defenceUpgrade5Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_57 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_58;
		L_58 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_57);
		L_57->___defenceUpgrade5Level_23 = L_58;
		// defencePowerController.defenceUpgrade6Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_59 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_60;
		L_60 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_59);
		L_59->___defenceUpgrade6Level_25 = L_60;
		// defencePowerController.defenceUpgrade7Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_61 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_62;
		L_62 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_61);
		L_61->___defenceUpgrade7Level_27 = L_62;
		// defencePowerController.defenceUpgrade8Level = 0;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_63 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_64;
		L_64 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_63);
		L_63->___defenceUpgrade8Level_29 = L_64;
		// defencePowerController.defenceUpgrade1Cost = 100;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_65 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_66;
		L_66 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100), NULL);
		NullCheck(L_65);
		L_65->___defenceUpgrade1Cost_14 = L_66;
		// defencePowerController.defenceUpgrade2Cost = 200;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_67 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_68;
		L_68 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)200), NULL);
		NullCheck(L_67);
		L_67->___defenceUpgrade2Cost_16 = L_68;
		// defencePowerController.defenceUpgrade3Cost = 300;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_69 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_70;
		L_70 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)300), NULL);
		NullCheck(L_69);
		L_69->___defenceUpgrade3Cost_18 = L_70;
		// defencePowerController.defenceUpgrade4Cost = 400;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_71 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_72;
		L_72 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)400), NULL);
		NullCheck(L_71);
		L_71->___defenceUpgrade4Cost_20 = L_72;
		// defencePowerController.defenceUpgrade5Cost = 500;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_73 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_74;
		L_74 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		NullCheck(L_73);
		L_73->___defenceUpgrade5Cost_22 = L_74;
		// defencePowerController.defenceUpgrade6Cost = 600;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_75 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_76;
		L_76 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)600), NULL);
		NullCheck(L_75);
		L_75->___defenceUpgrade6Cost_24 = L_76;
		// defencePowerController.defenceUpgrade7Cost = 700;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_77 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_78;
		L_78 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)700), NULL);
		NullCheck(L_77);
		L_77->___defenceUpgrade7Cost_26 = L_78;
		// defencePowerController.defenceUpgrade8Cost = 800;
		DefencePowerController_tA9AEC435E5F19011854996CB9D841C94FF25BE4F* L_79 = __this->___defencePowerController_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_80;
		L_80 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)800), NULL);
		NullCheck(L_79);
		L_79->___defenceUpgrade8Cost_28 = L_80;
		// soldierCountScript.soldierUpgrade1Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_81 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_82;
		L_82 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_81);
		L_81->___soldierUpgrade1Level_15 = L_82;
		// soldierCountScript.soldierUpgrade2Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_83 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_84;
		L_84 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_83);
		L_83->___soldierUpgrade2Level_17 = L_84;
		// soldierCountScript.soldierUpgrade3Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_85 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_86;
		L_86 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_85);
		L_85->___soldierUpgrade3Level_19 = L_86;
		// soldierCountScript.soldierUpgrade4Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_87 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_88;
		L_88 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_87);
		L_87->___soldierUpgrade4Level_21 = L_88;
		// soldierCountScript.soldierUpgrade5Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_89 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_90;
		L_90 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_89);
		L_89->___soldierUpgrade5Level_23 = L_90;
		// soldierCountScript.soldierUpgrade6Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_91 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_92;
		L_92 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_91);
		L_91->___soldierUpgrade6Level_25 = L_92;
		// soldierCountScript.soldierUpgrade7Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_93 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_94;
		L_94 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_93);
		L_93->___soldierUpgrade7Level_27 = L_94;
		// soldierCountScript.soldierUpgrade8Level = 0;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_95 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_96;
		L_96 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_95);
		L_95->___soldierUpgrade8Level_29 = L_96;
		// soldierCountScript.soldierUpgrade1Cost = 500;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_97 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_98;
		L_98 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)500), NULL);
		NullCheck(L_97);
		L_97->___soldierUpgrade1Cost_14 = L_98;
		// soldierCountScript.soldierUpgrade2Cost = 1000;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_99 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_100;
		L_100 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		NullCheck(L_99);
		L_99->___soldierUpgrade2Cost_16 = L_100;
		// soldierCountScript.soldierUpgrade3Cost = 1500;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_101 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_102;
		L_102 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1500), NULL);
		NullCheck(L_101);
		L_101->___soldierUpgrade3Cost_18 = L_102;
		// soldierCountScript.soldierUpgrade4Cost = 2000;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_103 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_104;
		L_104 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)2000), NULL);
		NullCheck(L_103);
		L_103->___soldierUpgrade4Cost_20 = L_104;
		// soldierCountScript.soldierUpgrade5Cost = 2500;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_105 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_106;
		L_106 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)2500), NULL);
		NullCheck(L_105);
		L_105->___soldierUpgrade5Cost_22 = L_106;
		// soldierCountScript.soldierUpgrade6Cost = 3000;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_107 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_108;
		L_108 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)3000), NULL);
		NullCheck(L_107);
		L_107->___soldierUpgrade6Cost_24 = L_108;
		// soldierCountScript.soldierUpgrade7Cost = 3500;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_109 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_110;
		L_110 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)3500), NULL);
		NullCheck(L_109);
		L_109->___soldierUpgrade7Cost_26 = L_110;
		// soldierCountScript.soldierUpgrade8Cost = 4000;
		SoldierCountScript_tFA3704A50794331DC0FC7F90542D279E03EE5DF4* L_111 = __this->___soldierCountScript_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_112;
		L_112 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)4000), NULL);
		NullCheck(L_111);
		L_111->___soldierUpgrade8Cost_28 = L_112;
		// healthAndPriates.health = 3;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_113 = __this->___healthAndPriates_6;
		NullCheck(L_113);
		L_113->___health_7 = 3;
		// }
		return;
	}
}
// System.Void GainCoinButton::OpenUpgradeMenu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton_OpenUpgradeMenu_m834C1EE05F8797FBBF64E0CBBE01B8C86EF7D2C5 (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	{
		// upgradeMenu.SetActive(!upgradeMenu.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___upgradeMenu_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___upgradeMenu_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void GainCoinButton::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton__ctor_m3724D6B779D7CAF3FA272CCE687A4379E94584D1 (GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public BigDouble productionUpgrade2Power = 5;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0;
		L_0 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(5, NULL);
		__this->___productionUpgrade2Power_56 = L_0;
		// public BigDouble productionUpgrade3Power = 10;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1;
		L_1 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		__this->___productionUpgrade3Power_59 = L_1;
		// public BigDouble productionUpgrade4Power = 15;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2;
		L_2 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)15), NULL);
		__this->___productionUpgrade4Power_62 = L_2;
		// public BigDouble productionUpgrade5Power = 20;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)20), NULL);
		__this->___productionUpgrade5Power_65 = L_3;
		// public BigDouble productionUpgrade6Power = 25;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)25), NULL);
		__this->___productionUpgrade6Power_68 = L_4;
		// public BigDouble productionUpgrade7Power = 30;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)30), NULL);
		__this->___productionUpgrade7Power_71 = L_5;
		// public BigDouble productionUpgrade8Power = 35;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)35), NULL);
		__this->___productionUpgrade8Power_74 = L_6;
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
// System.Void GainCoinButton::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GainCoinButton__cctor_mCFCFD47E933A13DD846B8D3455BEB7BAC58F60E7 (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static BigDouble cardUpgrades = 0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0;
		L_0 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		((GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_StaticFields*)il2cpp_codegen_static_fields_for(GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B_il2cpp_TypeInfo_var))->___cardUpgrades_79 = L_0;
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
// System.Void GainCoinButton/<T?klad?>d__84::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTU131kladU131U3Ed__84__ctor_m027E017B315D87D6B6AA97027FD99DF0002D0C13 (U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GainCoinButton/<T?klad?>d__84::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTU131kladU131U3Ed__84_System_IDisposable_Dispose_m36CE2F6A305DA652AF8CDF28442FC0AEC76BEAA8 (U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GainCoinButton/<T?klad?>d__84::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CTU131kladU131U3Ed__84_MoveNext_m8CA4F8760FF4138ABBDB84992A036B74ADF8FCF2 (U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC04C8BFEA6179139FEEDBBDD9FCD52369A5D8D94);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(5f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (5.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// bal?kc?.SetBool("isClicked", false);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_5 = V_1;
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6 = L_5->___balU131kcU131_5;
		NullCheck(L_6);
		Animator_SetBool_m6F8D4FAF0770CD4EC1F54406249785DE7391E42B(L_6, _stringLiteralC04C8BFEA6179139FEEDBBDD9FCD52369A5D8D94, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GainCoinButton/<T?klad?>d__84::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTU131kladU131U3Ed__84_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m6FBDB8EF60B90EC748EC8CF6B8EDD4B3F4F13243 (U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GainCoinButton/<T?klad?>d__84::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CTU131kladU131U3Ed__84_System_Collections_IEnumerator_Reset_mD431C9C4ED488B82021A4F3886AE99112F2D02C8 (U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CTU131kladU131U3Ed__84_System_Collections_IEnumerator_Reset_mD431C9C4ED488B82021A4F3886AE99112F2D02C8_RuntimeMethod_var)));
	}
}
// System.Object GainCoinButton/<T?klad?>d__84::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CTU131kladU131U3Ed__84_System_Collections_IEnumerator_get_Current_mFCF9180297D1FDFBFB159433426848A94D903A9F (U3CTU131kladU131U3Ed__84_tD6EF7F38FA328DF6B48742840C92EC76B298AC94* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void GameOverControl::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverControl_Update_mC02115EA0ADF52987504D092E64EF29BB62C3BA1 (GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* __this, const RuntimeMethod* method) 
{
	{
		// if(HealthAndPriates.health <= 0)
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_0 = __this->___HealthAndPriates_6;
		NullCheck(L_0);
		int32_t L_1 = L_0->___health_7;
		if ((((int32_t)L_1) > ((int32_t)0)))
		{
			goto IL_0027;
		}
	}
	{
		// gameOverScreen.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___gameOverScreen_4;
		NullCheck(L_2);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_2, (bool)1, NULL);
		// winLostText.enabled = false;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_3 = __this->___winLostText_8;
		NullCheck(L_3);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_3, (bool)0, NULL);
		return;
	}

IL_0027:
	{
		// gameOverScreen.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_4 = __this->___gameOverScreen_4;
		NullCheck(L_4);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_4, (bool)0, NULL);
		// }
		return;
	}
}
// System.Void GameOverControl::RastartButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverControl_RastartButton_m3B9E5A6FF827C35FFF2090E9954B753F3B9796F2 (GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Kontrolcu());
		RuntimeObject* L_0;
		L_0 = GameOverControl_Kontrolcu_m5D450101E678099BE72B5EDBF70A2140A46BAFB2(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Void GameOverControl::BackButton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverControl_BackButton_m12500889C26CA3C6847F41BB84E5BCB3FC7909E1 (GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// SceneManager.LoadScene(0);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		SceneManager_LoadScene_m0957E62F2A0A0243C79394E5B74E8EFA86BE5ED1(0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator GameOverControl::Kontrolcu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* GameOverControl_Kontrolcu_m5D450101E678099BE72B5EDBF70A2140A46BAFB2 (GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F* L_0 = (U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F*)il2cpp_codegen_object_new(U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CKontrolcuU3Ed__8__ctor_m19098CF0AE158FCCACA16BE28B1A49290092137E(L_0, 0, NULL);
		U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void GameOverControl::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameOverControl__ctor_mCBBC8FE1B48F169DFDFC6AABACEFA3D36D4B0831 (GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void GameOverControl/<Kontrolcu>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKontrolcuU3Ed__8__ctor_m19098CF0AE158FCCACA16BE28B1A49290092137E (U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void GameOverControl/<Kontrolcu>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKontrolcuU3Ed__8_System_IDisposable_Dispose_mC4FDDCB76EE6EB0CD2DE5CE15D39F5958D76C9D5 (U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean GameOverControl/<Kontrolcu>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CKontrolcuU3Ed__8_MoveNext_mFC2DECA518A3E97C62EAD0922C7346D7E82C5C20 (U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_004c;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// image.GetComponent<Animator>().Play("FadeIn");
		GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* L_4 = V_1;
		NullCheck(L_4);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_5 = L_4->___image_7;
		NullCheck(L_5);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_6;
		L_6 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_5, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_6);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_6, _stringLiteralD75D41C18D829FFA2798A164F222AD3C3A052445, NULL);
		// yield return new WaitForSeconds(2f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_7 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_7);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_7, (2.0f), NULL);
		__this->___U3CU3E2__current_1 = L_7;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_7);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_004c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// gainCoinButton.FullReset();
		GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* L_8 = V_1;
		NullCheck(L_8);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_9 = L_8->___gainCoinButton_5;
		NullCheck(L_9);
		GainCoinButton_FullReset_m8DA3C4BA70D84DAEE63E24E72C6B4A684555CD7E(L_9, NULL);
		// image.SetActive(false);
		GameOverControl_t616B5E0FF5722CF8970585D56F3B90C7A83DC284* L_10 = V_1;
		NullCheck(L_10);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_11 = L_10->___image_7;
		NullCheck(L_11);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_11, (bool)0, NULL);
		// }
		return (bool)0;
	}
}
// System.Object GameOverControl/<Kontrolcu>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKontrolcuU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF20B046F3A0CFCE55CEE972C189B66F0D784F58F (U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void GameOverControl/<Kontrolcu>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKontrolcuU3Ed__8_System_Collections_IEnumerator_Reset_m1E8E57B9CB9AEF6C63D42A0CAA203098B62A1678 (U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CKontrolcuU3Ed__8_System_Collections_IEnumerator_Reset_m1E8E57B9CB9AEF6C63D42A0CAA203098B62A1678_RuntimeMethod_var)));
	}
}
// System.Object GameOverControl/<Kontrolcu>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKontrolcuU3Ed__8_System_Collections_IEnumerator_get_Current_m6360AE8E91F14F499D6494F340930421F5F24DA8 (U3CKontrolcuU3Ed__8_t7B6386435589F83C42101B3EDEC0ECC7D478146F* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.String HealthAndPriates::NotationMethod(BreakInfinity.BigDouble,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* HealthAndPriates_NotationMethod_m268469EF5153F8D5FEA0B425C71552FBA609D951 (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 ___x0, String_t* ___y1, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		s_Il2CppMethodInitialized = true;
	}
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		// if (x > 100000)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1;
		L_1 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100000), NULL);
		bool L_2;
		L_2 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_0062;
		}
	}
	{
		// var exponent = Floor(Log10(Abs(x)));
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3 = ___x0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_Abs_m0A71FB38CA379E3919B865E9AE8F9E1440C1E6FE(L_3, NULL);
		double L_5;
		L_5 = BigDouble_Log10_m75A67FA813A577CFCE777E729B8A14E48219045B(L_4, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6(L_5, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_Floor_m1701A84F883064D06DA8FAD8BEA3A6E6215B9270(L_6, NULL);
		V_0 = L_7;
		// var mantissa = x / Pow(10, exponent);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = ___x0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10 = V_0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_Pow_m83F48F2477A77A5918FC7E66491AE962D0D3564B(L_9, L_10, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Division_mB826F457D6C15E326E9AF575668EB293540C70A6(L_8, L_11, NULL);
		V_1 = L_12;
		// return mantissa.ToString(format: "F2") + "e" + exponent;
		String_t* L_13;
		L_13 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_1), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_14 = V_0;
		V_2 = L_14;
		String_t* L_15;
		L_15 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_2), NULL);
		String_t* L_16;
		L_16 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_13, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, L_15, NULL);
		return L_16;
	}

IL_0062:
	{
		// return x.ToString(y);
		String_t* L_17 = ___y1;
		String_t* L_18;
		L_18 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&___x0), L_17, NULL);
		return L_18;
	}
}
// System.Void HealthAndPriates::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthAndPriates_Update_mC47479A9C2351EA0420408E312C9DF5F091D00E7 (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7D7098FC4E6D58AB01CD695E464A414517533057);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB1BA34DE272B7AF125B4C0066DBC51A8F71827B4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC69A54E09A4FE5DA2BAE87C3E12BB6F80B66A48);
		s_Il2CppMethodInitialized = true;
	}
	String_t* V_0 = NULL;
	{
		// minPirate = (float)inGameTime * 0.01f;
		double L_0 = __this->___inGameTime_32;
		__this->___minPirate_33 = ((float)il2cpp_codegen_multiply(((float)L_0), (0.00999999978f)));
		// maxPirate = (float)inGameTime * .2f;
		double L_1 = __this->___inGameTime_32;
		__this->___maxPirate_34 = ((float)il2cpp_codegen_multiply(((float)L_1), (0.200000003f)));
		// inGameTime += Time.deltaTime;
		double L_2 = __this->___inGameTime_32;
		float L_3;
		L_3 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___inGameTime_32 = ((double)il2cpp_codegen_add(L_2, ((double)L_3)));
		// if(GuardCount < 0)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4 = __this->___GuardCount_14;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		bool L_6;
		L_6 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0058;
		}
	}
	{
		// GuardCount = 0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___GuardCount_14 = L_7;
	}

IL_0058:
	{
		// if(defencePower < 0)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = __this->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		bool L_10;
		L_10 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_8, L_9, NULL);
		if (!L_10)
		{
			goto IL_0077;
		}
	}
	{
		// defencePower = 0;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		__this->___defencePower_13 = L_11;
	}

IL_0077:
	{
		// guardCountText.text = GuardCount.ToString("F0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_12 = __this->___guardCountText_4;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_13 = (&__this->___GuardCount_14);
		String_t* L_14;
		L_14 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_13, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_12);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_14);
		// defencePowerText.text = defencePower.ToString();
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_15 = __this->___defencePowerText_5;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_16 = (&__this->___defencePower_13);
		String_t* L_17;
		L_17 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C(L_16, NULL);
		NullCheck(L_15);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_15, L_17);
		// korsanPower = (GuardCount + defencePower - reducedPower) + (inGameTime * 0.01f);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18 = __this->___GuardCount_14;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19 = __this->___defencePower_13;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20;
		L_20 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_18, L_19, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21 = __this->___reducedPower_20;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22;
		L_22 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_20, L_21, NULL);
		double L_23 = __this->___inGameTime_32;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_24;
		L_24 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6(((double)il2cpp_codegen_multiply(L_23, (0.0099999997764825821))), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25;
		L_25 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_22, L_24, NULL);
		__this->___korsanPower_15 = L_25;
		// pirateArriveTime -= Time.deltaTime;
		float L_26 = __this->___pirateArriveTime_8;
		float L_27;
		L_27 = Time_get_deltaTime_mC3195000401F0FD167DD2F948FD2BC58330D0865(NULL);
		__this->___pirateArriveTime_8 = ((float)il2cpp_codegen_subtract(L_26, L_27));
		// if (pirateArriveTime <= 0)
		float L_28 = __this->___pirateArriveTime_8;
		if ((!(((float)L_28) <= ((float)(0.0f)))))
		{
			goto IL_015a;
		}
	}
	{
		// korsanSay?s? = Random.Range(minPirate, maxPirate);
		float L_29 = __this->___minPirate_33;
		float L_30 = __this->___maxPirate_34;
		float L_31;
		L_31 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494(L_29, L_30, NULL);
		__this->___korsanSayU131sU131_9 = L_31;
		// pirateShip.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_32 = __this->___pirateShip_10;
		NullCheck(L_32);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_32, (bool)1, NULL);
		// StartCoroutine(PlayGame());
		RuntimeObject* L_33;
		L_33 = HealthAndPriates_PlayGame_mAACEDA36565B4F48ED4F783088CB545D217C2D2A(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_34;
		L_34 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_33, NULL);
		// InGameMusic.enabled = false;
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_35 = __this->___InGameMusic_27;
		NullCheck(L_35);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_35, (bool)0, NULL);
		// pirateArriveTime = Random.Range(240f, 420f);
		float L_36;
		L_36 = Random_Range_m5236C99A7D8AE6AC9190592DC66016652A2D2494((240.0f), (420.0f), NULL);
		__this->___pirateArriveTime_8 = L_36;
	}

IL_015a:
	{
		// korsanSay?s? = Mathf.Round(korsanSay?s?);
		float L_37 = __this->___korsanSayU131sU131_9;
		float L_38;
		L_38 = bankers_roundf(L_37);
		__this->___korsanSayU131sU131_9 = L_38;
		// if (health == 0)
		int32_t L_39 = __this->___health_7;
		// if (pirateGameUI.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_40 = __this->___pirateGameUI_11;
		NullCheck(L_40);
		bool L_41;
		L_41 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_40, NULL);
		if (!L_41)
		{
			goto IL_01ae;
		}
	}
	{
		// moneyPayTextString = NotationMethod(takenMoney, y: "F0");
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_42 = __this->___takenMoney_30;
		String_t* L_43;
		L_43 = HealthAndPriates_NotationMethod_m268469EF5153F8D5FEA0B425C71552FBA609D951(__this, L_42, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		V_0 = L_43;
		// moneyPayText.text = "PAY! " + moneyPayTextString + " COINS";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_44 = __this->___moneyPayText_31;
		String_t* L_45 = V_0;
		String_t* L_46;
		L_46 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(_stringLiteralB1BA34DE272B7AF125B4C0066DBC51A8F71827B4, L_45, _stringLiteralDC69A54E09A4FE5DA2BAE87C3E12BB6F80B66A48, NULL);
		NullCheck(L_44);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_44, L_46);
		goto IL_01ba;
	}

IL_01ae:
	{
		// pirateGameUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_47 = __this->___pirateGameUI_11;
		NullCheck(L_47);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_47, (bool)0, NULL);
	}

IL_01ba:
	{
		// if (pirateGameUI.activeSelf)
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_48 = __this->___pirateGameUI_11;
		NullCheck(L_48);
		bool L_49;
		L_49 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_48, NULL);
		if (!L_49)
		{
			goto IL_025b;
		}
	}
	{
		// a = defencePower * GuardCount;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_50 = __this->___defencePower_13;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_51 = __this->___GuardCount_14;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_52;
		L_52 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_50, L_51, NULL);
		__this->___a_16 = L_52;
		// b = korsanSay?s? * korsanPower;
		float L_53 = __this->___korsanSayU131sU131_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_54;
		L_54 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446(L_53, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_55 = __this->___korsanPower_15;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_56;
		L_56 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_54, L_55, NULL);
		__this->___b_17 = L_56;
		// winChance = (a - b) * 100 / (a + b);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_57 = __this->___a_16;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_58 = __this->___b_17;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_59;
		L_59 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_57, L_58, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_60;
		L_60 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_61;
		L_61 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_59, L_60, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_62 = __this->___a_16;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_63 = __this->___b_17;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_64;
		L_64 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_62, L_63, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_65;
		L_65 = BigDouble_op_Division_mB826F457D6C15E326E9AF575668EB293540C70A6(L_61, L_64, NULL);
		__this->___winChance_18 = L_65;
		// winChanceText.text = "Win Chance: " + "%" + winChance.ToString("F0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_66 = __this->___winChanceText_12;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_67 = (&__this->___winChance_18);
		String_t* L_68;
		L_68 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_67, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		String_t* L_69;
		L_69 = String_Concat_m9E3155FB84015C823606188F53B47CB44C444991(_stringLiteral7D7098FC4E6D58AB01CD695E464A414517533057, L_68, NULL);
		NullCheck(L_66);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_66, L_69);
	}

IL_025b:
	{
		// if(health == 3)
		int32_t L_70 = __this->___health_7;
		if ((!(((uint32_t)L_70) == ((uint32_t)3))))
		{
			goto IL_0288;
		}
	}
	{
		// can1.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_71 = __this->___can1_22;
		NullCheck(L_71);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_71, (bool)1, NULL);
		// can2.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_72 = __this->___can2_23;
		NullCheck(L_72);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_72, (bool)1, NULL);
		// can3.SetActive(true);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_73 = __this->___can3_24;
		NullCheck(L_73);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_73, (bool)1, NULL);
	}

IL_0288:
	{
		// if(health == 2)
		int32_t L_74 = __this->___health_7;
		if ((!(((uint32_t)L_74) == ((uint32_t)2))))
		{
			goto IL_029d;
		}
	}
	{
		// can1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_75 = __this->___can1_22;
		NullCheck(L_75);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_75, (bool)0, NULL);
	}

IL_029d:
	{
		// if(health == 1)
		int32_t L_76 = __this->___health_7;
		if ((!(((uint32_t)L_76) == ((uint32_t)1))))
		{
			goto IL_02be;
		}
	}
	{
		// can1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_77 = __this->___can1_22;
		NullCheck(L_77);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_77, (bool)0, NULL);
		// can2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_78 = __this->___can2_23;
		NullCheck(L_78);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_78, (bool)0, NULL);
	}

IL_02be:
	{
		// if(health == 0)
		int32_t L_79 = __this->___health_7;
		if (L_79)
		{
			goto IL_02ea;
		}
	}
	{
		// can1.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_80 = __this->___can1_22;
		NullCheck(L_80);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_80, (bool)0, NULL);
		// can2.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_81 = __this->___can2_23;
		NullCheck(L_81);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_81, (bool)0, NULL);
		// can3.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_82 = __this->___can3_24;
		NullCheck(L_82);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_82, (bool)0, NULL);
	}

IL_02ea:
	{
		// }
		return;
	}
}
// System.Void HealthAndPriates::LoadData(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthAndPriates_LoadData_mB158DE2CB5B8EDC5C06C8668A9375896497B01D5 (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) 
{
	{
		// this.defencePower = data.defencePower;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = ___data0;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___defencePower_78;
		__this->___defencePower_13 = L_1;
		// this.GuardCount = data.GuardCount;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_2 = ___data0;
		NullCheck(L_2);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3 = L_2->___GuardCount_79;
		__this->___GuardCount_14 = L_3;
		// this.reducedPower = data.reducePower;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = ___data0;
		NullCheck(L_4);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = L_4->___reducePower_80;
		__this->___reducedPower_20 = L_5;
		// this.takenMoney = data.takenMoney;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_6 = ___data0;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___takenMoney_82;
		__this->___takenMoney_30 = L_7;
		// health = data.health;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_8 = ___data0;
		NullCheck(L_8);
		int32_t L_9 = L_8->___health_81;
		__this->___health_7 = L_9;
		// this.inGameTime = data.inGameTime;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_10 = ___data0;
		NullCheck(L_10);
		double L_11 = L_10->___inGameTime_83;
		__this->___inGameTime_32 = L_11;
		// }
		return;
	}
}
// System.Void HealthAndPriates::SaveData(GameData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthAndPriates_SaveData_m9CBF48527B53C0D8CCA78349D2D3EF8D4A37A0B2 (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** ___data0, const RuntimeMethod* method) 
{
	{
		// data.defencePower = this.defencePower;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_0 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = __this->___defencePower_13;
		NullCheck(L_1);
		L_1->___defencePower_78 = L_2;
		// data.GuardCount = this.GuardCount;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_3 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_4 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_3);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5 = __this->___GuardCount_14;
		NullCheck(L_4);
		L_4->___GuardCount_79 = L_5;
		// data.reducePower = this.reducedPower;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_6 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_7 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = __this->___reducedPower_20;
		NullCheck(L_7);
		L_7->___reducePower_80 = L_8;
		// data.takenMoney = this.takenMoney;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_9 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_10 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_9);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = __this->___takenMoney_30;
		NullCheck(L_10);
		L_10->___takenMoney_82 = L_11;
		// data.health = health;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_12 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_13 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_12);
		int32_t L_14 = __this->___health_7;
		NullCheck(L_13);
		L_13->___health_81 = L_14;
		// data.inGameTime = this.inGameTime;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_15 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_16 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_15);
		double L_17 = __this->___inGameTime_32;
		NullCheck(L_16);
		L_16->___inGameTime_83 = L_17;
		// }
		return;
	}
}
// System.Void HealthAndPriates::Attack()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthAndPriates_Attack_m039C345AE81A23740385989C1B752C589408C798 (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9B60B7A207B7FFAB38B7C829859104FBA1704CF8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC4D6860B76928498777DED120D3B401E9055DA61);
		s_Il2CppMethodInitialized = true;
	}
	{
		// BattleMusic.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___BattleMusic_28;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// takenMoney *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = __this->___takenMoney_30;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2;
		L_2 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_1, L_2, NULL);
		__this->___takenMoney_30 = L_3;
		// if (winChance <= 10)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4 = __this->___winChance_18;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		bool L_6;
		L_6 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_4, L_5, NULL);
		if (!L_6)
		{
			goto IL_0048;
		}
	}
	{
		// c = Random.Range(1, 3);
		int32_t L_7;
		L_7 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 3, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8;
		L_8 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_7, NULL);
		__this->___c_19 = L_8;
	}

IL_0048:
	{
		// if (winChance > 10 && winChance <= 20)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10;
		L_10 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		bool L_11;
		L_11 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_9, L_10, NULL);
		if (!L_11)
		{
			goto IL_0082;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_13;
		L_13 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)20), NULL);
		bool L_14;
		L_14 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_12, L_13, NULL);
		if (!L_14)
		{
			goto IL_0082;
		}
	}
	{
		// c = Random.Range(1, 4);
		int32_t L_15;
		L_15 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 4, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16;
		L_16 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_15, NULL);
		__this->___c_19 = L_16;
	}

IL_0082:
	{
		// if (winChance > 20 && winChance <= 30)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18;
		L_18 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)20), NULL);
		bool L_19;
		L_19 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_17, L_18, NULL);
		if (!L_19)
		{
			goto IL_00bc;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_21;
		L_21 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)30), NULL);
		bool L_22;
		L_22 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_20, L_21, NULL);
		if (!L_22)
		{
			goto IL_00bc;
		}
	}
	{
		// c = Random.Range(1, 6);
		int32_t L_23;
		L_23 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 6, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_24;
		L_24 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_23, NULL);
		__this->___c_19 = L_24;
	}

IL_00bc:
	{
		// if (winChance > 30 && winChance <= 40)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26;
		L_26 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)30), NULL);
		bool L_27;
		L_27 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_25, L_26, NULL);
		if (!L_27)
		{
			goto IL_00f6;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_28 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29;
		L_29 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)40), NULL);
		bool L_30;
		L_30 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_28, L_29, NULL);
		if (!L_30)
		{
			goto IL_00f6;
		}
	}
	{
		// c = Random.Range(1, 8);
		int32_t L_31;
		L_31 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, 8, NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_32;
		L_32 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_31, NULL);
		__this->___c_19 = L_32;
	}

IL_00f6:
	{
		// if (winChance > 40 && winChance <= 50)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_33 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_34;
		L_34 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)40), NULL);
		bool L_35;
		L_35 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_33, L_34, NULL);
		if (!L_35)
		{
			goto IL_0131;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_36 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_37;
		L_37 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)50), NULL);
		bool L_38;
		L_38 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_36, L_37, NULL);
		if (!L_38)
		{
			goto IL_0131;
		}
	}
	{
		// c = Random.Range(1, 10);
		int32_t L_39;
		L_39 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)10), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_40;
		L_40 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_39, NULL);
		__this->___c_19 = L_40;
	}

IL_0131:
	{
		// if (winChance > 50 && winChance <= 60)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_41 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_42;
		L_42 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)50), NULL);
		bool L_43;
		L_43 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_41, L_42, NULL);
		if (!L_43)
		{
			goto IL_016c;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_44 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_45;
		L_45 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)60), NULL);
		bool L_46;
		L_46 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_44, L_45, NULL);
		if (!L_46)
		{
			goto IL_016c;
		}
	}
	{
		// c = Random.Range(1, 12);
		int32_t L_47;
		L_47 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)12), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_48;
		L_48 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_47, NULL);
		__this->___c_19 = L_48;
	}

IL_016c:
	{
		// if (winChance > 60 && winChance <= 70)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_49 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_50;
		L_50 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)60), NULL);
		bool L_51;
		L_51 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_49, L_50, NULL);
		if (!L_51)
		{
			goto IL_01a7;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_52 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_53;
		L_53 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)70), NULL);
		bool L_54;
		L_54 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_52, L_53, NULL);
		if (!L_54)
		{
			goto IL_01a7;
		}
	}
	{
		// c = Random.Range(1, 14);
		int32_t L_55;
		L_55 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)14), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_56;
		L_56 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_55, NULL);
		__this->___c_19 = L_56;
	}

IL_01a7:
	{
		// if (winChance > 70 && winChance <= 80)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_57 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_58;
		L_58 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)70), NULL);
		bool L_59;
		L_59 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_57, L_58, NULL);
		if (!L_59)
		{
			goto IL_01e2;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_60 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_61;
		L_61 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)80), NULL);
		bool L_62;
		L_62 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_60, L_61, NULL);
		if (!L_62)
		{
			goto IL_01e2;
		}
	}
	{
		// c = Random.Range(1, 16);
		int32_t L_63;
		L_63 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)16), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_64;
		L_64 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_63, NULL);
		__this->___c_19 = L_64;
	}

IL_01e2:
	{
		// if (winChance > 80 && winChance <= 90)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_65 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_66;
		L_66 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)80), NULL);
		bool L_67;
		L_67 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_65, L_66, NULL);
		if (!L_67)
		{
			goto IL_021d;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_68 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_69;
		L_69 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)90), NULL);
		bool L_70;
		L_70 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_68, L_69, NULL);
		if (!L_70)
		{
			goto IL_021d;
		}
	}
	{
		// c = Random.Range(1, 18);
		int32_t L_71;
		L_71 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)18), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_72;
		L_72 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_71, NULL);
		__this->___c_19 = L_72;
	}

IL_021d:
	{
		// if (winChance > 90 && winChance <= 100)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_73 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_74;
		L_74 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)90), NULL);
		bool L_75;
		L_75 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_73, L_74, NULL);
		if (!L_75)
		{
			goto IL_0258;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_76 = __this->___winChance_18;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_77;
		L_77 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100), NULL);
		bool L_78;
		L_78 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_76, L_77, NULL);
		if (!L_78)
		{
			goto IL_0258;
		}
	}
	{
		// c = Random.Range(1, 20);
		int32_t L_79;
		L_79 = Random_Range_m6763D9767F033357F88B6637F048F4ACA4123B68(1, ((int32_t)20), NULL);
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_80;
		L_80 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(L_79, NULL);
		__this->___c_19 = L_80;
	}

IL_0258:
	{
		// if (a < b || ((a - b / a + b) * 100) <= 0 || c == 2)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_81 = __this->___a_16;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_82 = __this->___b_17;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_83;
		L_83 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_81, L_82, NULL);
		if (L_83)
		{
			goto IL_02be;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_84 = __this->___a_16;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_85 = __this->___b_17;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_86 = __this->___a_16;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_87;
		L_87 = BigDouble_op_Division_mB826F457D6C15E326E9AF575668EB293540C70A6(L_85, L_86, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_88;
		L_88 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_84, L_87, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_89 = __this->___b_17;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_90;
		L_90 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_88, L_89, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_91;
		L_91 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)100), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_92;
		L_92 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_90, L_91, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_93;
		L_93 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		bool L_94;
		L_94 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_92, L_93, NULL);
		if (L_94)
		{
			goto IL_02be;
		}
	}
	{
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_95 = __this->___c_19;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_96;
		L_96 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		bool L_97;
		L_97 = BigDouble_op_Equality_m04E2246E04A156684315645D1CD7BAEE29668EF3(L_95, L_96, NULL);
		if (!L_97)
		{
			goto IL_02f2;
		}
	}

IL_02be:
	{
		// winLoseText.text = "You Lost!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_98 = __this->___winLoseText_29;
		NullCheck(L_98);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_98, _stringLiteral9B60B7A207B7FFAB38B7C829859104FBA1704CF8);
		// pirateGameUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_99 = __this->___pirateGameUI_11;
		NullCheck(L_99);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_99, (bool)0, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// StartCoroutine(YouLose());
		RuntimeObject* L_100;
		L_100 = HealthAndPriates_YouLose_m95D87573219144A77178F9D4D5500990DFAFFAAA(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_101;
		L_101 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_100, NULL);
		return;
	}

IL_02f2:
	{
		// winLoseText.text = "You Won!";
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_102 = __this->___winLoseText_29;
		NullCheck(L_102);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_102, _stringLiteralC4D6860B76928498777DED120D3B401E9055DA61);
		// pirateGameUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_103 = __this->___pirateGameUI_11;
		NullCheck(L_103);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_103, (bool)0, NULL);
		// StartCoroutine(YouWon());
		RuntimeObject* L_104;
		L_104 = HealthAndPriates_YouWon_m0FCC64D63618B2C7E9829FF0CD82F2AD8E18AD5E(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_105;
		L_105 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_104, NULL);
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// }
		return;
	}
}
// System.Void HealthAndPriates::Pay()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthAndPriates_Pay_mB4E28D783F8081CA7B3CB0AD16E66D9902DBD2EC (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC662FBD7E982D65B32608D42258F57D721859FC);
		s_Il2CppMethodInitialized = true;
	}
	{
		// paraSayma.Play();
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_0 = __this->___paraSayma_26;
		NullCheck(L_0);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_0, NULL);
		// pirateGameUI.SetActive(false);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___pirateGameUI_11;
		NullCheck(L_1);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_1, (bool)0, NULL);
		// pirateShip.GetComponent<Animator>().Play("GoneAnim");
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_2 = __this->___pirateShip_10;
		NullCheck(L_2);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_3;
		L_3 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_2, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_3);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_3, _stringLiteralDC662FBD7E982D65B32608D42258F57D721859FC, NULL);
		// StartCoroutine(ShipDeactive());
		RuntimeObject* L_4;
		L_4 = HealthAndPriates_ShipDeactive_mC0FDFB7A4E917B4C2DAD0E87CF46B222C5A0D08F(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_5;
		L_5 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_4, NULL);
		// if (sellFish.gainedCoin < takenMoney)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_6 = __this->___sellFish_21;
		NullCheck(L_6);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7 = L_6->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = __this->___takenMoney_30;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		bool L_9;
		L_9 = BigDouble_op_LessThan_m615240026CDA1FE9E934F86067A9DD5D4E7AC068(L_7, L_8, NULL);
		if (!L_9)
		{
			goto IL_0072;
		}
	}
	{
		// health--;
		int32_t L_10 = __this->___health_7;
		__this->___health_7 = ((int32_t)il2cpp_codegen_subtract(L_10, 1));
		// GuardCount--;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11 = __this->___GuardCount_14;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Decrement_m920F1BB10DA252107270A3B07663C6F48457EBC6(L_11, NULL);
		__this->___GuardCount_14 = L_12;
		goto IL_00b7;
	}

IL_0072:
	{
		// sellFish.gainedCoin -= takenMoney;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_13 = __this->___sellFish_21;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_14 = L_13;
		NullCheck(L_14);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15 = L_14->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16 = __this->___takenMoney_30;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_17;
		L_17 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_15, L_16, NULL);
		NullCheck(L_14);
		L_14->___gainedCoin_7 = L_17;
		// if(sellFish.gainedCoin <= 0)
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_18 = __this->___sellFish_21;
		NullCheck(L_18);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19 = L_18->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_20;
		L_20 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		bool L_21;
		L_21 = BigDouble_op_LessThanOrEqual_m00F8666D92B1207215509029538F1E30FC364C32(L_19, L_20, NULL);
		if (!L_21)
		{
			goto IL_00b7;
		}
	}
	{
		// sellFish.gainedCoin = 0;
		SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* L_22 = __this->___sellFish_21;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23;
		L_23 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_22);
		L_22->___gainedCoin_7 = L_23;
	}

IL_00b7:
	{
		// Time.timeScale = 1;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((1.0f), NULL);
		// takenMoney *= 2;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_24 = __this->___takenMoney_30;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25;
		L_25 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(2, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26;
		L_26 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_24, L_25, NULL);
		__this->___takenMoney_30 = L_26;
		// }
		return;
	}
}
// System.Collections.IEnumerator HealthAndPriates::PlayGame()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthAndPriates_PlayGame_mAACEDA36565B4F48ED4F783088CB545D217C2D2A (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998* L_0 = (U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998*)il2cpp_codegen_object_new(U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CPlayGameU3Ed__37__ctor_mB81E03FA0C6B201728C7B6D84C51E59E87A33D76(L_0, 0, NULL);
		U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator HealthAndPriates::ShipDeactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthAndPriates_ShipDeactive_mC0FDFB7A4E917B4C2DAD0E87CF46B222C5A0D08F (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30* L_0 = (U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30*)il2cpp_codegen_object_new(U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CShipDeactiveU3Ed__38__ctor_m7DC0EA0CDB9D85BB7EFBBEA2BCA68221F6B4AD6B(L_0, 0, NULL);
		U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator HealthAndPriates::YouWon()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthAndPriates_YouWon_m0FCC64D63618B2C7E9829FF0CD82F2AD8E18AD5E (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9* L_0 = (U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9*)il2cpp_codegen_object_new(U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CYouWonU3Ed__39__ctor_m4C9083FF97B648547B92CC6A3102B5E6212AD9EF(L_0, 0, NULL);
		U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Collections.IEnumerator HealthAndPriates::YouLose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* HealthAndPriates_YouLose_m95D87573219144A77178F9D4D5500990DFAFFAAA (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C* L_0 = (U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C*)il2cpp_codegen_object_new(U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CYouLoseU3Ed__40__ctor_mEC3F72A41735947F32B143F9F4C3B8F7F19B294D(L_0, 0, NULL);
		U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C* L_1 = L_0;
		NullCheck(L_1);
		L_1->___U3CU3E4__this_2 = __this;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___U3CU3E4__this_2), (void*)__this);
		return L_1;
	}
}
// System.Void HealthAndPriates::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HealthAndPriates__ctor_m89B5F51EEE4320DF7AD0A053AA1B6360BC22046F (HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* __this, const RuntimeMethod* method) 
{
	{
		// public float pirateArriveTime = 240f;
		__this->___pirateArriveTime_8 = (240.0f);
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void HealthAndPriates/<PlayGame>d__37::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayGameU3Ed__37__ctor_mB81E03FA0C6B201728C7B6D84C51E59E87A33D76 (U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HealthAndPriates/<PlayGame>d__37::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayGameU3Ed__37_System_IDisposable_Dispose_mF92548068D31102210F06A1248A93D174BC80DAD (U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HealthAndPriates/<PlayGame>d__37::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CPlayGameU3Ed__37_MoveNext_mFAF017AD1572C726CDEEABAA7CFD34F6E463F86D (U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0042;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// pirateSong.Play();
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_4 = V_1;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___pirateSong_25;
		NullCheck(L_5);
		AudioSource_Play_m95DF07111C61D0E0F00257A00384D31531D590C3(L_5, NULL);
		// yield return new WaitForSeconds(45f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_6 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_6);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_6, (45.0f), NULL);
		__this->___U3CU3E2__current_1 = L_6;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_6);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// pirateGameUI.SetActive(true);
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_7 = V_1;
		NullCheck(L_7);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_8 = L_7->___pirateGameUI_11;
		NullCheck(L_8);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_8, (bool)1, NULL);
		// Time.timeScale = 0;
		Time_set_timeScale_mEF84EE4B2376A458387648079B426B267862D331((0.0f), NULL);
		// }
		return (bool)0;
	}
}
// System.Object HealthAndPriates/<PlayGame>d__37::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayGameU3Ed__37_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m1CEC11A6EA418ABBC5FE8ACE12283D161E3E088C (U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HealthAndPriates/<PlayGame>d__37::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CPlayGameU3Ed__37_System_Collections_IEnumerator_Reset_m2AC5C4FE3FA008E8B81B4EEB58EE59A09FF699C1 (U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CPlayGameU3Ed__37_System_Collections_IEnumerator_Reset_m2AC5C4FE3FA008E8B81B4EEB58EE59A09FF699C1_RuntimeMethod_var)));
	}
}
// System.Object HealthAndPriates/<PlayGame>d__37::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CPlayGameU3Ed__37_System_Collections_IEnumerator_get_Current_mF9AECFD8E366C1DB979C07431EC06F2772FBCCBB (U3CPlayGameU3Ed__37_t48CB283119032FB03F84835BDA2E6FCAD202F998* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void HealthAndPriates/<ShipDeactive>d__38::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShipDeactiveU3Ed__38__ctor_m7DC0EA0CDB9D85BB7EFBBEA2BCA68221F6B4AD6B (U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HealthAndPriates/<ShipDeactive>d__38::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShipDeactiveU3Ed__38_System_IDisposable_Dispose_mCEBA4DB8530148829F1DDDD8C158644DACA5C87A (U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HealthAndPriates/<ShipDeactive>d__38::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CShipDeactiveU3Ed__38_MoveNext_m1D5F31E8566108827E5D4FEA24F1D6A0AA09D92D (U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0022;
			}
			case 1:
			{
				goto IL_0042;
			}
			case 2:
			{
				goto IL_007c;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(10);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0042:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// pirateSong.Stop();
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_4 = V_1;
		NullCheck(L_4);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_5 = L_4->___pirateSong_25;
		NullCheck(L_5);
		AudioSource_Stop_m318F17F17A147C77FF6E0A5A7A6BE057DB90F537(L_5, NULL);
		// InGameMusic.enabled = true;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_6 = V_1;
		NullCheck(L_6);
		AudioSource_t871AC2272F896738252F04EE949AEF5B241D3299* L_7 = L_6->___InGameMusic_27;
		NullCheck(L_7);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_7, (bool)1, NULL);
		// pirateShip.SetActive(false);
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_8 = V_1;
		NullCheck(L_8);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_9 = L_8->___pirateShip_10;
		NullCheck(L_9);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_9, (bool)0, NULL);
		// yield return null;
		__this->___U3CU3E2__current_1 = NULL;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)NULL);
		__this->___U3CU3E1__state_0 = 2;
		return (bool)1;
	}

IL_007c:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// }
		return (bool)0;
	}
}
// System.Object HealthAndPriates/<ShipDeactive>d__38::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShipDeactiveU3Ed__38_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mCC5EB27CC8F47FA4A4A828D8C81B14AE1A754B30 (U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HealthAndPriates/<ShipDeactive>d__38::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CShipDeactiveU3Ed__38_System_Collections_IEnumerator_Reset_m4678794DFAC2D3A0B2A1CFA1308A5F8191C33614 (U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CShipDeactiveU3Ed__38_System_Collections_IEnumerator_Reset_m4678794DFAC2D3A0B2A1CFA1308A5F8191C33614_RuntimeMethod_var)));
	}
}
// System.Object HealthAndPriates/<ShipDeactive>d__38::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CShipDeactiveU3Ed__38_System_Collections_IEnumerator_get_Current_m1D59EC089C9F5CB91BACCE5B5B5703B909EAA26A (U3CShipDeactiveU3Ed__38_tCB58AB3C8925CCD744EABD2F52680C4D72716F30* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void HealthAndPriates/<YouWon>d__39::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYouWonU3Ed__39__ctor_m4C9083FF97B648547B92CC6A3102B5E6212AD9EF (U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HealthAndPriates/<YouWon>d__39::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYouWonU3Ed__39_System_IDisposable_Dispose_mF10D700AD4DDAD84E51298598ECF2E57A3BCAAF9 (U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HealthAndPriates/<YouWon>d__39::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CYouWonU3Ed__39_MoveNext_m8F175DF558B4C5A980AD27D956C349AD73B39D43 (U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC662FBD7E982D65B32608D42258F57D721859FC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(10f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// StartCoroutine(ShipDeactive());
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_5 = V_1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_6 = V_1;
		NullCheck(L_6);
		RuntimeObject* L_7;
		L_7 = HealthAndPriates_ShipDeactive_mC0FDFB7A4E917B4C2DAD0E87CF46B222C5A0D08F(L_6, NULL);
		NullCheck(L_5);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_8;
		L_8 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_5, L_7, NULL);
		// pirateShip.GetComponent<Animator>().Play("GoneAnim");
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_9 = V_1;
		NullCheck(L_9);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_10 = L_9->___pirateShip_10;
		NullCheck(L_10);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_11;
		L_11 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_10, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_11);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_11, _stringLiteralDC662FBD7E982D65B32608D42258F57D721859FC, NULL);
		// winLoseText.enabled = true;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_12 = V_1;
		NullCheck(L_12);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12->___winLoseText_29;
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		// defencePower -= korsanPower;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_14 = V_1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_15 = V_1;
		NullCheck(L_15);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_16 = L_15->___defencePower_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_17 = V_1;
		NullCheck(L_17);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_18 = L_17->___korsanPower_15;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19;
		L_19 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_16, L_18, NULL);
		NullCheck(L_14);
		L_14->___defencePower_13 = L_19;
		// GuardCount -= korsanSay?s?;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_20 = V_1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_21 = V_1;
		NullCheck(L_21);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22 = L_21->___GuardCount_14;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_23 = V_1;
		NullCheck(L_23);
		float L_24 = L_23->___korsanSayU131sU131_9;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_25;
		L_25 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446(L_24, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26;
		L_26 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_22, L_25, NULL);
		NullCheck(L_20);
		L_20->___GuardCount_14 = L_26;
		// }
		return (bool)0;
	}
}
// System.Object HealthAndPriates/<YouWon>d__39::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CYouWonU3Ed__39_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m073389A220F617AA2AA07675092DB9A4450E6765 (U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HealthAndPriates/<YouWon>d__39::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYouWonU3Ed__39_System_Collections_IEnumerator_Reset_m0A8F932EFD7DECAAE6ABE297B40A2FBD3D650C4B (U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CYouWonU3Ed__39_System_Collections_IEnumerator_Reset_m0A8F932EFD7DECAAE6ABE297B40A2FBD3D650C4B_RuntimeMethod_var)));
	}
}
// System.Object HealthAndPriates/<YouWon>d__39::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CYouWonU3Ed__39_System_Collections_IEnumerator_get_Current_m28CEA0CA4687BF51080626592E61EB5FB15222F4 (U3CYouWonU3Ed__39_t884FC8B5769C23D2A4D059C1755944207AC1C9E9* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void HealthAndPriates/<YouLose>d__40::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYouLoseU3Ed__40__ctor_mEC3F72A41735947F32B143F9F4C3B8F7F19B294D (U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void HealthAndPriates/<YouLose>d__40::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYouLoseU3Ed__40_System_IDisposable_Dispose_m7EA674FCC2882FA4363A3662222E03D80C2D65D6 (U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean HealthAndPriates/<YouLose>d__40::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CYouLoseU3Ed__40_MoveNext_m4C1DAE6F4834C2108EFD0579C021EBA8322A07EC (U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDC662FBD7E982D65B32608D42258F57D721859FC);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* V_1 = NULL;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
		V_0 = L_0;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_1 = __this->___U3CU3E4__this_2;
		V_1 = L_1;
		int32_t L_2 = V_0;
		if (!L_2)
		{
			goto IL_0017;
		}
	}
	{
		int32_t L_3 = V_0;
		if ((((int32_t)L_3) == ((int32_t)1)))
		{
			goto IL_0037;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(10f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_4 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_4);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_4, (10.0f), NULL);
		__this->___U3CU3E2__current_1 = L_4;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_4);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0037:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// pirateShip.GetComponent<Animator>().Play("GoneAnim");
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_5 = V_1;
		NullCheck(L_5);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_6 = L_5->___pirateShip_10;
		NullCheck(L_6);
		Animator_t8A52E42AE54F76681838FE9E632683EF3952E883* L_7;
		L_7 = GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3(L_6, GameObject_GetComponent_TisAnimator_t8A52E42AE54F76681838FE9E632683EF3952E883_mB84A0931B2081CCADE7C5D459B2A8FAA6D3D3BD3_RuntimeMethod_var);
		NullCheck(L_7);
		Animator_Play_m0F6A9F84B2E256E644D56C34A7A9BD622CB00FF9(L_7, _stringLiteralDC662FBD7E982D65B32608D42258F57D721859FC, NULL);
		// StartCoroutine(ShipDeactive());
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_8 = V_1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_9 = V_1;
		NullCheck(L_9);
		RuntimeObject* L_10;
		L_10 = HealthAndPriates_ShipDeactive_mC0FDFB7A4E917B4C2DAD0E87CF46B222C5A0D08F(L_9, NULL);
		NullCheck(L_8);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_11;
		L_11 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(L_8, L_10, NULL);
		// winLoseText.enabled = true;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_12 = V_1;
		NullCheck(L_12);
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = L_12->___winLoseText_29;
		NullCheck(L_13);
		Behaviour_set_enabled_mF1DCFE60EB09E0529FE9476CA804A3AA2D72B16A(L_13, (bool)1, NULL);
		// health--;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_14 = V_1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_15 = V_1;
		NullCheck(L_15);
		int32_t L_16 = L_15->___health_7;
		NullCheck(L_14);
		L_14->___health_7 = ((int32_t)il2cpp_codegen_subtract(L_16, 1));
		// GuardCount -= korsanSay?s?;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_17 = V_1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_18 = V_1;
		NullCheck(L_18);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_19 = L_18->___GuardCount_14;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_20 = V_1;
		NullCheck(L_20);
		float L_21 = L_20->___korsanSayU131sU131_9;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22;
		L_22 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446(L_21, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23;
		L_23 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_19, L_22, NULL);
		NullCheck(L_17);
		L_17->___GuardCount_14 = L_23;
		// defencePower -= korsanPower;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_24 = V_1;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_25 = V_1;
		NullCheck(L_25);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26 = L_25->___defencePower_13;
		HealthAndPriates_tDB8B5C31E05246C2245EBFAD35D8ADF5B3B4540A* L_27 = V_1;
		NullCheck(L_27);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_28 = L_27->___korsanPower_15;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29;
		L_29 = BigDouble_op_Subtraction_m0F064116D8198FB4C5178E494943C62C00E6C996(L_26, L_28, NULL);
		NullCheck(L_24);
		L_24->___defencePower_13 = L_29;
		// }
		return (bool)0;
	}
}
// System.Object HealthAndPriates/<YouLose>d__40::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CYouLoseU3Ed__40_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m9EFF929C005B96615081485616437BDCC615CE9D (U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void HealthAndPriates/<YouLose>d__40::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CYouLoseU3Ed__40_System_Collections_IEnumerator_Reset_m028737B1CCC66A5BCDE4771A40ADE583E608DBCA (U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CYouLoseU3Ed__40_System_Collections_IEnumerator_Reset_m028737B1CCC66A5BCDE4771A40ADE583E608DBCA_RuntimeMethod_var)));
	}
}
// System.Object HealthAndPriates/<YouLose>d__40::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CYouLoseU3Ed__40_System_Collections_IEnumerator_get_Current_m05092E02315249566C74E450F3D37C90610AAD93 (U3CYouLoseU3Ed__40_tB20BB98CF1F14B422D2465953F569CCD51DC3F8C* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void Menu::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu_Start_mC49986718939F87924A1391044721CAC6E28919D (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		// StartCoroutine(Kontrolcu());
		RuntimeObject* L_0;
		L_0 = Menu_Kontrolcu_m9BD22BE0DCE07B2CA8D5B0493EAA74AD762220C3(__this, NULL);
		Coroutine_t85EA685566A254C23F3FD77AB5BDFFFF8799596B* L_1;
		L_1 = MonoBehaviour_StartCoroutine_m4CAFF732AA28CD3BDC5363B44A863575530EC812(__this, L_0, NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator Menu::Kontrolcu()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Menu_Kontrolcu_m9BD22BE0DCE07B2CA8D5B0493EAA74AD762220C3 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B* L_0 = (U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B*)il2cpp_codegen_object_new(U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B_il2cpp_TypeInfo_var);
		NullCheck(L_0);
		U3CKontrolcuU3Ed__1__ctor_m6F49C871FE1DC86E6BCEC98C03BE6C4B281931F1(L_0, 0, NULL);
		return L_0;
	}
}
// System.Void Menu::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Menu__ctor_mBEF2B96BC9E3D64E020EBE40FEF9CF25E6C3ED00 (Menu_t818E8DA587A0E558DE9BC83947BABC9A6FDD0C05* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
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
// System.Void Menu/<Kontrolcu>d__1::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKontrolcuU3Ed__1__ctor_m6F49C871FE1DC86E6BCEC98C03BE6C4B281931F1 (U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B* __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method) 
{
	{
		Object__ctor_mE837C6B9FA8C6D5D109F4B2EC885D79919AC0EA2(__this, NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->___U3CU3E1__state_0 = L_0;
		return;
	}
}
// System.Void Menu/<Kontrolcu>d__1::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKontrolcuU3Ed__1_System_IDisposable_Dispose_mEABA9F8AF6019AA7548F67D39E4B933B3463A8A2 (U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B* __this, const RuntimeMethod* method) 
{
	{
		return;
	}
}
// System.Boolean Menu/<Kontrolcu>d__1::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CKontrolcuU3Ed__1_MoveNext_m46053704EA52F015D5F0D80B1080365DBBA6625D (U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		int32_t L_0 = __this->___U3CU3E1__state_0;
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
			goto IL_0030;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// yield return new WaitForSeconds(9.3f);
		WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3* L_3 = (WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3*)il2cpp_codegen_object_new(WaitForSeconds_tF179DF251655B8DF044952E70A60DF4B358A3DD3_il2cpp_TypeInfo_var);
		NullCheck(L_3);
		WaitForSeconds__ctor_m579F95BADEDBAB4B3A7E302C6EE3995926EF2EFC(L_3, (9.30000019f), NULL);
		__this->___U3CU3E2__current_1 = L_3;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___U3CU3E2__current_1), (void*)L_3);
		__this->___U3CU3E1__state_0 = 1;
		return (bool)1;
	}

IL_0030:
	{
		__this->___U3CU3E1__state_0 = (-1);
		// SceneManager.LoadSceneAsync(1);
		il2cpp_codegen_runtime_class_init_inline(SceneManager_tA0EF56A88ACA4A15731AF7FDC10A869FA4C698FA_il2cpp_TypeInfo_var);
		AsyncOperation_tD2789250E4B098DEDA92B366A577E500A92D2D3C* L_4;
		L_4 = SceneManager_LoadSceneAsync_mA3C1B55E83225487A615436731B82087D77D4935(1, NULL);
		// }
		return (bool)0;
	}
}
// System.Object Menu/<Kontrolcu>d__1::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKontrolcuU3Ed__1_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mFA935668DA15935855556A597119BC9FA5EA99B0 (U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
		return L_0;
	}
}
// System.Void Menu/<Kontrolcu>d__1::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CKontrolcuU3Ed__1_System_Collections_IEnumerator_Reset_mE1FB8582E8CE5ECDCAA2F18A6C3C7AEE4F8819CD (U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B* __this, const RuntimeMethod* method) 
{
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_0 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NullCheck(L_0);
		NotSupportedException__ctor_m1398D0CDE19B36AA3DE9392879738C1EA2439CDF(L_0, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CKontrolcuU3Ed__1_System_Collections_IEnumerator_Reset_mE1FB8582E8CE5ECDCAA2F18A6C3C7AEE4F8819CD_RuntimeMethod_var)));
	}
}
// System.Object Menu/<Kontrolcu>d__1::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* U3CKontrolcuU3Ed__1_System_Collections_IEnumerator_get_Current_mDE4C221894265EC0BA0D02D304B4371F2645863A (U3CKontrolcuU3Ed__1_tBF6FD423DE0BFBD9F5D8305578BBA0B9E72ABD7B* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = __this->___U3CU3E2__current_1;
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
// System.Void SellFish::Gem?Button()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellFish_GemU131Button_mAFD63AE1BB52965CDC38CBB9DF37D4B10DA82774 (SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* __this, const RuntimeMethod* method) 
{
	{
		// sellScreen.SetActive(!sellScreen.activeSelf);
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_0 = __this->___sellScreen_4;
		GameObject_t76FEDD663AB33C991A9C9A23129337651094216F* L_1 = __this->___sellScreen_4;
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_get_activeSelf_m4F3E5240E138B66AAA080EA30759A3D0517DA368(L_1, NULL);
		NullCheck(L_0);
		GameObject_SetActive_m638E92E1E75E519E5B24CF150B08CA8E0CDFAB92(L_0, (bool)((((int32_t)L_2) == ((int32_t)0))? 1 : 0), NULL);
		// }
		return;
	}
}
// System.Void SellFish::LoadData(GameData)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellFish_LoadData_mFE8F69C2A4E724FC27537BD1BF3EDD0687E1D4E4 (SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* ___data0, const RuntimeMethod* method) 
{
	{
		// this.gainedCoin = data.gainedCoin;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_0 = ___data0;
		NullCheck(L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1 = L_0->___gainedCoin_45;
		__this->___gainedCoin_7 = L_1;
		// }
		return;
	}
}
// System.Void SellFish::SaveData(GameData&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellFish_SaveData_mE20AA3AA1543E21E72AC48AA91E8C4A47EE3A2DD (SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* __this, GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** ___data0, const RuntimeMethod* method) 
{
	{
		// data.gainedCoin = this.gainedCoin;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6** L_0 = ___data0;
		GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6* L_1 = *((GameData_t857DCFA51343FE2611A88BE4D943BDA16FBCE8B6**)L_0);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = __this->___gainedCoin_7;
		NullCheck(L_1);
		L_1->___gainedCoin_45 = L_2;
		// }
		return;
	}
}
// System.Void SellFish::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellFish_Update_m14B1DA98C95CB73A7C7E19D57BEA9CF73419AF73 (SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral26A3C385943E48920986444FE6118C9DC4B2722D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC3CE1BE96D067D964C747979BBEBB463CB00F277);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF84463C76213BF086989F6631181F360AB1A29C6);
		s_Il2CppMethodInitialized = true;
	}
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_1;
	memset((&V_1), 0, sizeof(V_1));
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_2;
	memset((&V_2), 0, sizeof(V_2));
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_3;
	memset((&V_3), 0, sizeof(V_3));
	BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if(gainedCoin > 1000)
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0 = __this->___gainedCoin_7;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_1;
		L_1 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		bool L_2;
		L_2 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_007d;
		}
	}
	{
		// var exponent = (Floor(Log10(Abs(gainedCoin))));
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3 = __this->___gainedCoin_7;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_Abs_m0A71FB38CA379E3919B865E9AE8F9E1440C1E6FE(L_3, NULL);
		double L_5;
		L_5 = BigDouble_Log10_m75A67FA813A577CFCE777E729B8A14E48219045B(L_4, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_6;
		L_6 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6(L_5, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_Floor_m1701A84F883064D06DA8FAD8BEA3A6E6215B9270(L_6, NULL);
		V_0 = L_7;
		// var mantissa = (gainedCoin / Pow(10, exponent));
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_8 = __this->___gainedCoin_7;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_9;
		L_9 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_10 = V_0;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_11;
		L_11 = BigDouble_Pow_m83F48F2477A77A5918FC7E66491AE962D0D3564B(L_9, L_10, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_12;
		L_12 = BigDouble_op_Division_mB826F457D6C15E326E9AF575668EB293540C70A6(L_8, L_11, NULL);
		V_1 = L_12;
		// coinText.text = mantissa.ToString("F2") + "e" + exponent;
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_13 = __this->___coinText_8;
		String_t* L_14;
		L_14 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_1), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_15 = V_0;
		V_2 = L_15;
		String_t* L_16;
		L_16 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_2), NULL);
		String_t* L_17;
		L_17 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(L_14, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53, L_16, NULL);
		NullCheck(L_13);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_13, L_17);
		goto IL_0098;
	}

IL_007d:
	{
		// coinText.text = gainedCoin.ToString("F0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_18 = __this->___coinText_8;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_19 = (&__this->___gainedCoin_7);
		String_t* L_20;
		L_20 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_19, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_18);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_18, L_20);
	}

IL_0098:
	{
		// if (gainCoinButton.coins > 1000)
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_21 = __this->___gainCoinButton_6;
		NullCheck(L_21);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_22 = L_21->___coins_76;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_23;
		L_23 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)1000), NULL);
		bool L_24;
		L_24 = BigDouble_op_GreaterThan_mA03D177D2E057CA0A61ED598AB5E4C7F577F3ADA(L_22, L_23, NULL);
		if (!L_24)
		{
			goto IL_0170;
		}
	}
	{
		// var exponent = (Floor(Log10(Abs(gainCoinButton.coins))));
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_25 = __this->___gainCoinButton_6;
		NullCheck(L_25);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_26 = L_25->___coins_76;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_27;
		L_27 = BigDouble_Abs_m0A71FB38CA379E3919B865E9AE8F9E1440C1E6FE(L_26, NULL);
		double L_28;
		L_28 = BigDouble_Log10_m75A67FA813A577CFCE777E729B8A14E48219045B(L_27, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_29;
		L_29 = BigDouble_op_Implicit_m0A0D1CF4738F878F87FC61077FB0A2E201F6FCE6(L_28, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_30;
		L_30 = BigDouble_Floor_m1701A84F883064D06DA8FAD8BEA3A6E6215B9270(L_29, NULL);
		V_3 = L_30;
		// var mantissa = (gainCoinButton.coins / Pow(10, exponent));
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_31 = __this->___gainCoinButton_6;
		NullCheck(L_31);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_32 = L_31->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_33;
		L_33 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(((int32_t)10), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_34 = V_3;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_35;
		L_35 = BigDouble_Pow_m83F48F2477A77A5918FC7E66491AE962D0D3564B(L_33, L_34, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_36;
		L_36 = BigDouble_op_Division_mB826F457D6C15E326E9AF575668EB293540C70A6(L_32, L_35, NULL);
		V_4 = L_36;
		// fishToCoinCountText.text = "Fish: " + mantissa.ToString("F2") + "e" + exponent + " = " + "Coins: " + (gainCoinButton.coins * 0.3f).ToString("F0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_37 = __this->___fishToCoinCountText_5;
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_38 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_39 = L_38;
		NullCheck(L_39);
		ArrayElementTypeCheck (L_39, _stringLiteral26A3C385943E48920986444FE6118C9DC4B2722D);
		(L_39)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral26A3C385943E48920986444FE6118C9DC4B2722D);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_40 = L_39;
		String_t* L_41;
		L_41 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_4), _stringLiteral2409165FB90CD4A8B916FCA75790766B82C91748, NULL);
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, L_41);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_41);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_42 = L_40;
		NullCheck(L_42);
		ArrayElementTypeCheck (L_42, _stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		(L_42)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral36282FAC116D9FD6B37CC425310E1A8510F08A53);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_43 = L_42;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_44 = V_3;
		V_2 = L_44;
		String_t* L_45;
		L_45 = BigDouble_ToString_m382709C6A33C6D163C193305DF72B12B8D22971C((&V_2), NULL);
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, L_45);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_45);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_43;
		NullCheck(L_46);
		ArrayElementTypeCheck (L_46, _stringLiteralF84463C76213BF086989F6631181F360AB1A29C6);
		(L_46)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteralF84463C76213BF086989F6631181F360AB1A29C6);
		StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_47 = L_46;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_48 = __this->___gainCoinButton_6;
		NullCheck(L_48);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_49 = L_48->___coins_76;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_50;
		L_50 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.300000012f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_51;
		L_51 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_49, L_50, NULL);
		V_2 = L_51;
		String_t* L_52;
		L_52 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_2), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		NullCheck(L_47);
		ArrayElementTypeCheck (L_47, L_52);
		(L_47)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_52);
		String_t* L_53;
		L_53 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_47, NULL);
		NullCheck(L_37);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_37, L_53);
		return;
	}

IL_0170:
	{
		// fishToCoinCountText.text = "Fishes: " + gainCoinButton.coins.ToString("F0") + " = " + "Coins: " + (gainCoinButton.coins * 0.3f).ToString("F0");
		Text_tD60B2346DAA6666BF0D822FF607F0B220C2B9E62* L_54 = __this->___fishToCoinCountText_5;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_55 = __this->___gainCoinButton_6;
		NullCheck(L_55);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6* L_56 = (&L_55->___coins_76);
		String_t* L_57;
		L_57 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75(L_56, _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_58 = __this->___gainCoinButton_6;
		NullCheck(L_58);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_59 = L_58->___coins_76;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_60;
		L_60 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.300000012f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_61;
		L_61 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_59, L_60, NULL);
		V_2 = L_61;
		String_t* L_62;
		L_62 = BigDouble_ToString_m386133FEF17403B7144059545272990079F4FB75((&V_2), _stringLiteral1EA9FDAF69DF72C9D1CF16DE8ADB89BCAF623EE6, NULL);
		String_t* L_63;
		L_63 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralC3CE1BE96D067D964C747979BBEBB463CB00F277, L_57, _stringLiteralF84463C76213BF086989F6631181F360AB1A29C6, L_62, NULL);
		NullCheck(L_54);
		VirtualActionInvoker1< String_t* >::Invoke(71 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_54, L_63);
		// }
		return;
	}
}
// System.Void SellFish::ApllySell()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellFish_ApllySell_mC4BE06D51E2BEDA367B638D0C26EB1F8DFDCE9A6 (SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* __this, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// gainedCoin += gainCoinButton.coins * 0.3f;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_0 = __this->___gainedCoin_7;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_1 = __this->___gainCoinButton_6;
		NullCheck(L_1);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_2 = L_1->___coins_76;
		il2cpp_codegen_runtime_class_init_inline(BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6_il2cpp_TypeInfo_var);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_3;
		L_3 = BigDouble_op_Implicit_m901BED6248ABCBCEEBE5BC6F2111FFEE8CE04446((0.300000012f), NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_4;
		L_4 = BigDouble_op_Multiply_mE1DB3713AB6F2D6BF3212EF91ECA509EE801221B(L_2, L_3, NULL);
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_5;
		L_5 = BigDouble_op_Addition_m9C0D724760BE8E17B0AF3DC3CAB26D49B2BC9BFC(L_0, L_4, NULL);
		__this->___gainedCoin_7 = L_5;
		// gainCoinButton.coins = 0;
		GainCoinButton_tAEA8924648C1C40A7C5E8E3D32197FEA5667105B* L_6 = __this->___gainCoinButton_6;
		BigDouble_tE8A08A43F2A757D97FBCCEE6F60532F940A9DBE6 L_7;
		L_7 = BigDouble_op_Implicit_m1690E3C3A0B108F4F26CE5E5BDEA1E0862113B36(0, NULL);
		NullCheck(L_6);
		L_6->___coins_76 = L_7;
		// }
		return;
	}
}
// System.Void SellFish::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SellFish__ctor_m71C4C1E186769E9A77F1480309EBB093C4855790 (SellFish_t0241F8BDDF27B925B2B5288E1B68D168A52BEDFC* __this, const RuntimeMethod* method) 
{
	{
		MonoBehaviour__ctor_m592DB0105CA0BC97AA1C5F4AD27B12D68A3B7C1E(__this, NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Addition_m78C0EC70CB66E8DCAC225743D82B268DAEE92067_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___b1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_2 = ___b1;
		float L_3 = L_2.___x_2;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_4 = ___a0;
		float L_5 = L_4.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___b1;
		float L_7 = L_6.___y_3;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_8 = ___a0;
		float L_9 = L_8.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = ___b1;
		float L_11 = L_10.___z_4;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_12), ((float)il2cpp_codegen_add(L_1, L_3)), ((float)il2cpp_codegen_add(L_5, L_7)), ((float)il2cpp_codegen_add(L_9, L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Selectable_get_interactable_m17DD0484DC62DCB4467109488D7A599BC85EC112_inline (Selectable_t3251808068A17B8E92FB33590A4C2FA66D456712* __this, const RuntimeMethod* method) 
{
	{
		// get { return m_Interactable; }
		bool L_0 = __this->___m_Interactable_12;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* DataPersistenceManager_get_instance_m01C3F5BCC51E7FABA894C34501EC63C4B82E8A5B_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DataPersistenceManager instance { get; private set; }
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0 = ((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_9;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void DataPersistenceManager_set_instance_m745574F1B7D025B6EAA022465F9516AFC237A5D7_inline (DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* ___value0, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static DataPersistenceManager instance { get; private set; }
		DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF* L_0 = ___value0;
		((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_9 = L_0;
		Il2CppCodeGenWriteBarrier((void**)(&((DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_StaticFields*)il2cpp_codegen_static_fields_for(DataPersistenceManager_t9A4AFAECA1DEAABF1B83D4CD83DB07B8ABB743FF_il2cpp_TypeInfo_var))->___U3CinstanceU3Ek__BackingField_9), (void*)L_0);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength_4;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2* __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method) 
{
	{
		float L_0 = ___x0;
		__this->___x_2 = L_0;
		float L_1 = ___y1;
		__this->___y_3 = L_1;
		float L_2 = ___z2;
		__this->___z_4 = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 Quaternion_Euler_m5BCCC19216CFAD2426F15BC51A30421880D27B73_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___euler0, const RuntimeMethod* method) 
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___euler0;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_1;
		L_1 = Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline(L_0, (0.0174532924f), NULL);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_2;
		L_2 = Quaternion_Internal_FromEulerRad_m66D4475341F53949471E6870FB5C5E4A5E9BA93E(L_1, NULL);
		V_0 = L_2;
		goto IL_0014;
	}

IL_0014:
	{
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = V_0;
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject* Enumerator_get_Current_m6330F15D18EE4F547C05DF9BF83C5EB710376027_gshared_inline (Enumerator_t9473BAB568A27E2339D48C1F91319E0F6D244D7A* __this, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = (RuntimeObject*)__this->____current_3;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 Vector3_op_Multiply_m87BA7C578F96C8E49BB07088DAAC4649F83B0353_inline (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___a0, float ___d1, const RuntimeMethod* method) 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_0 = ___a0;
		float L_1 = L_0.___x_2;
		float L_2 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___a0;
		float L_4 = L_3.___y_3;
		float L_5 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_6 = ___a0;
		float L_7 = L_6.___z_4;
		float L_8 = ___d1;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m376936E6B999EF1ECBE57D990A386303E2283DE0_inline((&L_9), ((float)il2cpp_codegen_multiply(L_1, L_2)), ((float)il2cpp_codegen_multiply(L_4, L_5)), ((float)il2cpp_codegen_multiply(L_7, L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_10 = V_0;
		return L_10;
	}
}
