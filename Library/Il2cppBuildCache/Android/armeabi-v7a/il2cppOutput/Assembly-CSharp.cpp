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

// System.Action`1<UnityEngine.AsyncOperation>
struct Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31;
// System.Action`1<UnityEngine.GameObject>
struct Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D;
// System.Action`1<System.Object>
struct Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC;
// System.Func`1<UnityEngine.GameObject>
struct Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63;
// System.Func`1<System.Object>
struct Func_1_t807CEE610086E24A0167BAA97A64062016E09D49;
// System.Collections.Generic.List`1<System.Single[]>
struct List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019;
// System.Collections.Generic.List`1<UnityEngine.CanvasGroup>
struct List_1_t34AA4AF4E7352129CA58045901530E41445AC16D;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<Pauser>
struct List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726;
// UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>
struct ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72;
// UnityEngine.Pool.ObjectPool`1<System.Object>
struct ObjectPool_1_tB184F1C1F7B7CB8372978E5260C25127A841BACB;
// System.Predicate`1<UnityEngine.Behaviour>
struct Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03;
// System.Predicate`1<System.Object>
struct Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB;
// System.Collections.Generic.Stack`1<UnityEngine.GameObject>
struct Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Single[][][]
struct SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816;
// System.Single[][]
struct SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9;
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// Pauser[]
struct PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69;
// UnityEngine.UI.Selectable[]
struct SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// UnityEngine.Texture2D[]
struct Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316;
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// UnityEngine.UI.AnimationTriggers
struct AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// Astar
struct Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4;
// UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86;
// UnityEngine.AudioClip
struct AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE;
// AudioController
struct AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// BRController
struct BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50;
// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9;
// BlackoutController
struct BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D;
// UnityEngine.UI.Button
struct Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D;
// ButtonController_1
struct ButtonController_1_t3677289B3860798FBAFDB73B8FEFB7F9E868C1B9;
// UnityEngine.Camera
struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.CircleCollider2D
struct CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7;
// CountDownActive
struct CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4;
// CountDownUIController
struct CountDownUIController_tC373B879933D521515C27C7D933F49A9F3F6E530;
// CreateObject
struct CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179;
// CutController
struct CutController_t3754BC1240D9D6E5FFC092E5A474BFCEDB0F48A7;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// DirectorController
struct DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2;
// EffectDestroyer
struct EffectDestroyer_t78B2CD061FC3DE106B76E819ADC35AB894C1D3F1;
// EnemyController
struct EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB;
// ExpBarController
struct ExpBarController_t6131D21F3F53C5E87A794EE2341E5BC0427D3F27;
// ExpController
struct ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// UnityEngine.GUILayoutOption
struct GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24;
// GrazeController
struct GrazeController_t85E7089B4621F5BA3BE766B9C83F3C424AAB2C6F;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Collections.IEnumerator
struct IEnumerator_t5956F3AFB7ECF1117E3BC5890E7FC7B7F7A04105;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// InvisibleController
struct InvisibleController_t746E091E6D04AA665B2D435D0345DFD3EB8F312B;
// ItemController
struct ItemController_t014D2DFBE80E6C01E177CF08508B3C5F55666008;
// LifeController
struct LifeController_t27399F73AFC41F0E58E82F1D2EEE482D1A96A0B9;
// LoadScene
struct LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4;
// LoadingController
struct LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57;
// LvviewController
struct LvviewController_t27644D2A5EFC8834D05AF90750B56A0D35D8110C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// System.NotSupportedException
struct NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// OptionController
struct OptionController_t0BD28E24B9A14B7AC298371AC13CF6B73380ED9D;
// Pauser
struct Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// PooledObject
struct PooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Renderer
struct Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// Rotation
struct Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// ScoreviewController
struct ScoreviewController_tEC0D1A2735BE12AF54FB6289F73D7E67A29BBB93;
// UnityEngine.UI.Selectable
struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD;
// UnityEngine.UI.Slider
struct Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// UnityEngine.SpriteRenderer
struct SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF;
// System.String
struct String_t;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TurretController
struct TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// WLSViewerController
struct WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997;
// UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013;
// type1
struct type1_t46A08AF0AC40A46A1A13810AD7C4235E524B08BE;
// type1P2
struct type1P2_t6C4385EBD0FA431E31FF590ACEC4EBBC65676C0F;
// Astar/<A_star2>d__21
struct U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39;
// UnityEngine.AudioClip/PCMReaderCallback
struct PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B;
// UnityEngine.AudioClip/PCMSetPositionCallback
struct PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C;
// AudioController/<ActiveBGM>d__5
struct U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694;
// AudioController/<smallsound>d__8
struct U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031;
// UnityEngine.UI.Button/ButtonClickedEvent
struct ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F;
// UnityEngine.Camera/CameraCallback
struct CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D;
// CreateObject/<>c
struct U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A;
// LoadScene/<LoadData>d__4
struct U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854;
// LoadingController/<LoadData>d__4
struct U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// Pauser/<>c
struct U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B;
// UnityEngine.UI.Slider/SliderEvent
struct SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780;

IL2CPP_EXTERN_C RuntimeClass* Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral0512EEC843C7A7E31B445DB657D6412D22C485D7;
IL2CPP_EXTERN_C String_t* _stringLiteral0C1E1E5747AAC763E049946F18A9952014D0468B;
IL2CPP_EXTERN_C String_t* _stringLiteral1FBE7A8CACED3F61B42B76F6BC527A55402E469A;
IL2CPP_EXTERN_C String_t* _stringLiteral25E0B8C2FF33CA82A31BBAE86C3EBE8E8880D3AF;
IL2CPP_EXTERN_C String_t* _stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092;
IL2CPP_EXTERN_C String_t* _stringLiteral5A295EDE3ECFF3239B4F17D4CD136E4747604FDE;
IL2CPP_EXTERN_C String_t* _stringLiteral6AB64229E7831CE33DFF43028E56A68BEBC1C98F;
IL2CPP_EXTERN_C String_t* _stringLiteral6C2CB372B682621CEBB58B13EF31D980CFA9FC06;
IL2CPP_EXTERN_C String_t* _stringLiteral78D958E853E9A979645D55A90BE243CCAC59E1B6;
IL2CPP_EXTERN_C String_t* _stringLiteral793124C2C69F7C5AD956B8E7C24C95DFD06780A5;
IL2CPP_EXTERN_C String_t* _stringLiteralA1C524771293DC4E4830FE7935EA79ACC29C55B2;
IL2CPP_EXTERN_C String_t* _stringLiteralB04F5F8ABBA8357DC68CF9CA2FAD1A460B399391;
IL2CPP_EXTERN_C String_t* _stringLiteralBCAC80D302C1ED8BFCC7807E27A0825EFFA2BAF0;
IL2CPP_EXTERN_C String_t* _stringLiteralC36538AF001EE8796EBA833CC01B251A6377EFC6;
IL2CPP_EXTERN_C String_t* _stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70;
IL2CPP_EXTERN_C String_t* _stringLiteralD6CAB3674B75C6FE5C112BB8FFAC7C83D21A3D9B;
IL2CPP_EXTERN_C String_t* _stringLiteralE62CD451806B89511819DE76FB895D72D6361836;
IL2CPP_EXTERN_C String_t* _stringLiteralF3F1BAB9C8170D1026D2CCA084FBA0E9B8F110C7;
IL2CPP_EXTERN_C String_t* _stringLiteralFA3B5499785CBEEA66513CEE09402FBF10AF5FBF;
IL2CPP_EXTERN_C String_t* _stringLiteralFDF3A43306D0917690A5D38BA77505AAF0DC271C;
IL2CPP_EXTERN_C String_t* _stringLiteralFF9DDA88797040D643156653E46CDFD2F2FF07EB;
IL2CPP_EXTERN_C const RuntimeMethod* Action_1__ctor_m2B9DF3A0BBBA5AF7766502C7B76A7A1265ECD727_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_mA07E9D2B1A778365E5A956C5674C590821EEC9B4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Array_FindAll_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m6A31B13ADDDFBFA5C22EEEB3E2C2455DEB73B79D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m2C908F7F3929EABBD494665EDD46CD7AE9AE7B9A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisCountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4_m9FC37306AA5EBDFB18CF4B9198B982F19C955D9E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m29F7D7B5238455F12E2B8BDB08D243DC208C1FBF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentsInChildren_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m0329CABF1EA5E716381ED8EF794E8B276A2D5B08_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9487BA5B24D476E0432A04A8BACF40AE30D9B972_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* CreateObject_U3CAwakeU3Eb__1_0_mD4FC60FF03915F60FE96BEF393E2FE57A0A9A274_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_m97BA2C1591EAC36E61406750598F5EFAA704F835_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_mDFFC7FFA28E98CCF3F28E99E9A664CCDA06CF49D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_m5704EC2BDFBEEB9BF62512FB17158BB0919DA388_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Func_1__ctor_m680BC4E6E206D83C45706CCCA010CAE698D9D038_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_AddComponent_TisPooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85_m7BF6B247011ED228668C56BFDBDA1D8020438294_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisAudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_m27CC78923661CD135373BCCF1F13AEB7A478A285_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisBRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50_m9A9524F9211924AE57A19A10A8FCEE17CDD75445_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisWLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997_mED6A78451F7571A05BA5F2A1A1286D513ACE408E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mE076679C70F100BB328D01632EF72F438B1ACD51_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Clear_m09F193FACE259E473A52AAC6993D0387C0DEFF47_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_m60142538AA7CBDDB5789A0038BE5627EBE20FA21_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_RemoveAt_mDE29BD2B07640990225575EB7570EEC9B34BB428_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Remove_m32C996BCE978E3459A260E6146C9F7900AE6C58B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m7652396EA445BB0D39B33EA5E316886B4EBDCBB8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_set_Item_mAA1DAA1B773B221ABFB460AE7292E40D8BD9BBB2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Get_mA900C6F04967B5F3070E39D9CDC41FB5E05B358C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_Release_mA57FC55F4CD1907DAE756F9C96DF57119FA84859_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1__ctor_m138292004269834164631702859B406989FF3AF2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_get_CountActive_m16EAB83E194EAE29E53C5C84A51E85013345BA2A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* ObjectPool_1_get_CountInactive_m7456D9F9F5EAD348B5530F610506614EF6F3F4CD_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_FindObjectsOfType_TisPauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_mF106ABE25E2645B35CCC4423CCC4E31D2A8D1301_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Predicate_1__ctor_m2986B5E58F128F13E567A1809343B36E1A61BE72_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CA_star2U3Ed__21_System_Collections_IEnumerator_Reset_m3FA4B2294C724EBA58AA17AC8E7FC0F0F2104781_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CActiveBGMU3Ed__5_System_Collections_IEnumerator_Reset_m22C05342CEBC7D8204C5CFCB4DDBDAFCF40A991C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadDataU3Ed__4_System_Collections_IEnumerator_Reset_m0DA69A4D8DD12DF5D945334C1BCC3977DA8B7CD1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CLoadDataU3Ed__4_System_Collections_IEnumerator_Reset_m95B0F19ECBCA04A78265576E7D246E43741B83AB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__1_1_m87D50C27238603FC84044FDC83FA35247063F79F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__1_2_mF6CF67E8DE953F42BDE31DD29C6CBAA85C7D1A8B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3CAwakeU3Eb__1_3_mD6A3DB6F8A32B95EAA3D92F12168D71F31013233_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CU3Ec_U3COnPauseU3Eb__4_0_mF7DF5C6D8916DD8BDABF99CE982BC552E2F686B6_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* U3CsmallsoundU3Ed__8_System_Collections_IEnumerator_Reset_m45E35C6AAC92EE3A1C2DF78FE0BE136C9C7C66D7_RuntimeMethod_var;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816;
struct SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9;
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE;
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B;
struct BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0;
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.EmptyArray`1<System.Object>
struct  EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Single[]>
struct  List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019, ____items_1)); }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* get__items_1() const { return ____items_1; }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_StaticFields, ____emptyArray_5)); }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* get__emptyArray_5() const { return ____emptyArray_5; }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Object>
struct  List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____items_1)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__items_1() const { return ____items_1; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5_StaticFields, ____emptyArray_5)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<Pauser>
struct  List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726, ____items_1)); }
	inline PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* get__items_1() const { return ____items_1; }
	inline PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726_StaticFields, ____emptyArray_5)); }
	inline PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* get__emptyArray_5() const { return ____emptyArray_5; }
	inline PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>
struct  ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72  : public RuntimeObject
{
public:
	// System.Collections.Generic.Stack`1<T> UnityEngine.Pool.ObjectPool`1::m_Stack
	Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * ___m_Stack_0;
	// System.Func`1<T> UnityEngine.Pool.ObjectPool`1::m_CreateFunc
	Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * ___m_CreateFunc_1;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnGet
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * ___m_ActionOnGet_2;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnRelease
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * ___m_ActionOnRelease_3;
	// System.Action`1<T> UnityEngine.Pool.ObjectPool`1::m_ActionOnDestroy
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * ___m_ActionOnDestroy_4;
	// System.Int32 UnityEngine.Pool.ObjectPool`1::m_MaxSize
	int32_t ___m_MaxSize_5;
	// System.Boolean UnityEngine.Pool.ObjectPool`1::m_CollectionCheck
	bool ___m_CollectionCheck_6;
	// System.Int32 UnityEngine.Pool.ObjectPool`1::<CountAll>k__BackingField
	int32_t ___U3CCountAllU3Ek__BackingField_7;

public:
	inline static int32_t get_offset_of_m_Stack_0() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72, ___m_Stack_0)); }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * get_m_Stack_0() const { return ___m_Stack_0; }
	inline Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE ** get_address_of_m_Stack_0() { return &___m_Stack_0; }
	inline void set_m_Stack_0(Stack_1_tAE566EECB2D3565C2EDCA60875D2F6444CC3F9AE * value)
	{
		___m_Stack_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Stack_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_CreateFunc_1() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72, ___m_CreateFunc_1)); }
	inline Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * get_m_CreateFunc_1() const { return ___m_CreateFunc_1; }
	inline Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 ** get_address_of_m_CreateFunc_1() { return &___m_CreateFunc_1; }
	inline void set_m_CreateFunc_1(Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * value)
	{
		___m_CreateFunc_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CreateFunc_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnGet_2() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72, ___m_ActionOnGet_2)); }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * get_m_ActionOnGet_2() const { return ___m_ActionOnGet_2; }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D ** get_address_of_m_ActionOnGet_2() { return &___m_ActionOnGet_2; }
	inline void set_m_ActionOnGet_2(Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * value)
	{
		___m_ActionOnGet_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnGet_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnRelease_3() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72, ___m_ActionOnRelease_3)); }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * get_m_ActionOnRelease_3() const { return ___m_ActionOnRelease_3; }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D ** get_address_of_m_ActionOnRelease_3() { return &___m_ActionOnRelease_3; }
	inline void set_m_ActionOnRelease_3(Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * value)
	{
		___m_ActionOnRelease_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnRelease_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_ActionOnDestroy_4() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72, ___m_ActionOnDestroy_4)); }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * get_m_ActionOnDestroy_4() const { return ___m_ActionOnDestroy_4; }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D ** get_address_of_m_ActionOnDestroy_4() { return &___m_ActionOnDestroy_4; }
	inline void set_m_ActionOnDestroy_4(Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * value)
	{
		___m_ActionOnDestroy_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ActionOnDestroy_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_MaxSize_5() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72, ___m_MaxSize_5)); }
	inline int32_t get_m_MaxSize_5() const { return ___m_MaxSize_5; }
	inline int32_t* get_address_of_m_MaxSize_5() { return &___m_MaxSize_5; }
	inline void set_m_MaxSize_5(int32_t value)
	{
		___m_MaxSize_5 = value;
	}

	inline static int32_t get_offset_of_m_CollectionCheck_6() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72, ___m_CollectionCheck_6)); }
	inline bool get_m_CollectionCheck_6() const { return ___m_CollectionCheck_6; }
	inline bool* get_address_of_m_CollectionCheck_6() { return &___m_CollectionCheck_6; }
	inline void set_m_CollectionCheck_6(bool value)
	{
		___m_CollectionCheck_6 = value;
	}

	inline static int32_t get_offset_of_U3CCountAllU3Ek__BackingField_7() { return static_cast<int32_t>(offsetof(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72, ___U3CCountAllU3Ek__BackingField_7)); }
	inline int32_t get_U3CCountAllU3Ek__BackingField_7() const { return ___U3CCountAllU3Ek__BackingField_7; }
	inline int32_t* get_address_of_U3CCountAllU3Ek__BackingField_7() { return &___U3CCountAllU3Ek__BackingField_7; }
	inline void set_U3CCountAllU3Ek__BackingField_7(int32_t value)
	{
		___U3CCountAllU3Ek__BackingField_7 = value;
	}
};

struct Il2CppArrayBounds;

// System.Array


// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct  ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine.YieldInstruction
struct  YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.YieldInstruction
struct YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
};

// Astar/<A_star2>d__21
struct  U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39  : public RuntimeObject
{
public:
	// System.Int32 Astar/<A_star2>d__21::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object Astar/<A_star2>d__21::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// Astar Astar/<A_star2>d__21::<>4__this
	Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * ___U3CU3E4__this_2;
	// System.Single[] Astar/<A_star2>d__21::start
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___start_3;
	// System.Single[] Astar/<A_star2>d__21::goal
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___goal_4;
	// System.Int32 Astar/<A_star2>d__21::<count>5__2
	int32_t ___U3CcountU3E5__2_5;
	// System.Int32 Astar/<A_star2>d__21::<count2>5__3
	int32_t ___U3Ccount2U3E5__3_6;
	// System.Int32 Astar/<A_star2>d__21::<x>5__4
	int32_t ___U3CxU3E5__4_7;
	// System.Int32 Astar/<A_star2>d__21::<y>5__5
	int32_t ___U3CyU3E5__5_8;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39, ___U3CU3E4__this_2)); }
	inline Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}

	inline static int32_t get_offset_of_start_3() { return static_cast<int32_t>(offsetof(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39, ___start_3)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_start_3() const { return ___start_3; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_start_3() { return &___start_3; }
	inline void set_start_3(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___start_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___start_3), (void*)value);
	}

	inline static int32_t get_offset_of_goal_4() { return static_cast<int32_t>(offsetof(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39, ___goal_4)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_goal_4() const { return ___goal_4; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_goal_4() { return &___goal_4; }
	inline void set_goal_4(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___goal_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___goal_4), (void*)value);
	}

	inline static int32_t get_offset_of_U3CcountU3E5__2_5() { return static_cast<int32_t>(offsetof(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39, ___U3CcountU3E5__2_5)); }
	inline int32_t get_U3CcountU3E5__2_5() const { return ___U3CcountU3E5__2_5; }
	inline int32_t* get_address_of_U3CcountU3E5__2_5() { return &___U3CcountU3E5__2_5; }
	inline void set_U3CcountU3E5__2_5(int32_t value)
	{
		___U3CcountU3E5__2_5 = value;
	}

	inline static int32_t get_offset_of_U3Ccount2U3E5__3_6() { return static_cast<int32_t>(offsetof(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39, ___U3Ccount2U3E5__3_6)); }
	inline int32_t get_U3Ccount2U3E5__3_6() const { return ___U3Ccount2U3E5__3_6; }
	inline int32_t* get_address_of_U3Ccount2U3E5__3_6() { return &___U3Ccount2U3E5__3_6; }
	inline void set_U3Ccount2U3E5__3_6(int32_t value)
	{
		___U3Ccount2U3E5__3_6 = value;
	}

	inline static int32_t get_offset_of_U3CxU3E5__4_7() { return static_cast<int32_t>(offsetof(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39, ___U3CxU3E5__4_7)); }
	inline int32_t get_U3CxU3E5__4_7() const { return ___U3CxU3E5__4_7; }
	inline int32_t* get_address_of_U3CxU3E5__4_7() { return &___U3CxU3E5__4_7; }
	inline void set_U3CxU3E5__4_7(int32_t value)
	{
		___U3CxU3E5__4_7 = value;
	}

	inline static int32_t get_offset_of_U3CyU3E5__5_8() { return static_cast<int32_t>(offsetof(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39, ___U3CyU3E5__5_8)); }
	inline int32_t get_U3CyU3E5__5_8() const { return ___U3CyU3E5__5_8; }
	inline int32_t* get_address_of_U3CyU3E5__5_8() { return &___U3CyU3E5__5_8; }
	inline void set_U3CyU3E5__5_8(int32_t value)
	{
		___U3CyU3E5__5_8 = value;
	}
};


// AudioController/<ActiveBGM>d__5
struct  U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694  : public RuntimeObject
{
public:
	// System.Int32 AudioController/<ActiveBGM>d__5::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AudioController/<ActiveBGM>d__5::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// AudioController AudioController/<ActiveBGM>d__5::<>4__this
	AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694, ___U3CU3E4__this_2)); }
	inline AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// AudioController/<smallsound>d__8
struct  U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031  : public RuntimeObject
{
public:
	// System.Int32 AudioController/<smallsound>d__8::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object AudioController/<smallsound>d__8::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// System.Int32 AudioController/<smallsound>d__8::<i>5__2
	int32_t ___U3CiU3E5__2_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CiU3E5__2_2() { return static_cast<int32_t>(offsetof(U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031, ___U3CiU3E5__2_2)); }
	inline int32_t get_U3CiU3E5__2_2() const { return ___U3CiU3E5__2_2; }
	inline int32_t* get_address_of_U3CiU3E5__2_2() { return &___U3CiU3E5__2_2; }
	inline void set_U3CiU3E5__2_2(int32_t value)
	{
		___U3CiU3E5__2_2 = value;
	}
};


// CreateObject/<>c
struct  U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields
{
public:
	// CreateObject/<>c CreateObject/<>c::<>9
	U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * ___U3CU3E9_0;
	// System.Action`1<UnityEngine.GameObject> CreateObject/<>c::<>9__1_1
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * ___U3CU3E9__1_1_1;
	// System.Action`1<UnityEngine.GameObject> CreateObject/<>c::<>9__1_2
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * ___U3CU3E9__1_2_2;
	// System.Action`1<UnityEngine.GameObject> CreateObject/<>c::<>9__1_3
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * ___U3CU3E9__1_3_3;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_1_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields, ___U3CU3E9__1_1_1)); }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * get_U3CU3E9__1_1_1() const { return ___U3CU3E9__1_1_1; }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D ** get_address_of_U3CU3E9__1_1_1() { return &___U3CU3E9__1_1_1; }
	inline void set_U3CU3E9__1_1_1(Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * value)
	{
		___U3CU3E9__1_1_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_1_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_2_2() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields, ___U3CU3E9__1_2_2)); }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * get_U3CU3E9__1_2_2() const { return ___U3CU3E9__1_2_2; }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D ** get_address_of_U3CU3E9__1_2_2() { return &___U3CU3E9__1_2_2; }
	inline void set_U3CU3E9__1_2_2(Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * value)
	{
		___U3CU3E9__1_2_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_2_2), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__1_3_3() { return static_cast<int32_t>(offsetof(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields, ___U3CU3E9__1_3_3)); }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * get_U3CU3E9__1_3_3() const { return ___U3CU3E9__1_3_3; }
	inline Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D ** get_address_of_U3CU3E9__1_3_3() { return &___U3CU3E9__1_3_3; }
	inline void set_U3CU3E9__1_3_3(Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * value)
	{
		___U3CU3E9__1_3_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__1_3_3), (void*)value);
	}
};


// LoadScene/<LoadData>d__4
struct  U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854  : public RuntimeObject
{
public:
	// System.Int32 LoadScene/<LoadData>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadScene/<LoadData>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LoadScene LoadScene/<LoadData>d__4::<>4__this
	LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854, ___U3CU3E4__this_2)); }
	inline LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// LoadingController/<LoadData>d__4
struct  U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF  : public RuntimeObject
{
public:
	// System.Int32 LoadingController/<LoadData>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object LoadingController/<LoadData>d__4::<>2__current
	RuntimeObject * ___U3CU3E2__current_1;
	// LoadingController LoadingController/<LoadData>d__4::<>4__this
	LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * ___U3CU3E4__this_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF, ___U3CU3E2__current_1)); }
	inline RuntimeObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline RuntimeObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(RuntimeObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E2__current_1), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E4__this_2() { return static_cast<int32_t>(offsetof(U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF, ___U3CU3E4__this_2)); }
	inline LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * get_U3CU3E4__this_2() const { return ___U3CU3E4__this_2; }
	inline LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 ** get_address_of_U3CU3E4__this_2() { return &___U3CU3E4__this_2; }
	inline void set_U3CU3E4__this_2(LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * value)
	{
		___U3CU3E4__this_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E4__this_2), (void*)value);
	}
};


// Pauser/<>c
struct  U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B  : public RuntimeObject
{
public:

public:
};

struct U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_StaticFields
{
public:
	// Pauser/<>c Pauser/<>c::<>9
	U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B * ___U3CU3E9_0;
	// System.Predicate`1<UnityEngine.Behaviour> Pauser/<>c::<>9__4_0
	Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * ___U3CU3E9__4_0_1;

public:
	inline static int32_t get_offset_of_U3CU3E9_0() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_StaticFields, ___U3CU3E9_0)); }
	inline U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B * get_U3CU3E9_0() const { return ___U3CU3E9_0; }
	inline U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B ** get_address_of_U3CU3E9_0() { return &___U3CU3E9_0; }
	inline void set_U3CU3E9_0(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B * value)
	{
		___U3CU3E9_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9_0), (void*)value);
	}

	inline static int32_t get_offset_of_U3CU3E9__4_0_1() { return static_cast<int32_t>(offsetof(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_StaticFields, ___U3CU3E9__4_0_1)); }
	inline Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * get_U3CU3E9__4_0_1() const { return ___U3CU3E9__4_0_1; }
	inline Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 ** get_address_of_U3CU3E9__4_0_1() { return &___U3CU3E9__4_0_1; }
	inline void set_U3CU3E9__4_0_1(Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * value)
	{
		___U3CU3E9__4_0_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CU3E9__4_0_1), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<System.Object>
struct  Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___list_0)); }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * get_list_0() const { return ___list_0; }
	inline List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1/Enumerator<Pauser>
struct  Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1/Enumerator::list
	List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1/Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1/Enumerator::current
	Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8, ___list_0)); }
	inline List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * get_list_0() const { return ___list_0; }
	inline List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8, ___current_3)); }
	inline Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * get_current_3() const { return ___current_3; }
	inline Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Boolean
struct  Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// UnityEngine.Color
struct  Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
{
public:
	// System.Single UnityEngine.Color::r
	float ___r_0;
	// System.Single UnityEngine.Color::g
	float ___g_1;
	// System.Single UnityEngine.Color::b
	float ___b_2;
	// System.Single UnityEngine.Color::a
	float ___a_3;

public:
	inline static int32_t get_offset_of_r_0() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___r_0)); }
	inline float get_r_0() const { return ___r_0; }
	inline float* get_address_of_r_0() { return &___r_0; }
	inline void set_r_0(float value)
	{
		___r_0 = value;
	}

	inline static int32_t get_offset_of_g_1() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___g_1)); }
	inline float get_g_1() const { return ___g_1; }
	inline float* get_address_of_g_1() { return &___g_1; }
	inline void set_g_1(float value)
	{
		___g_1 = value;
	}

	inline static int32_t get_offset_of_b_2() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___b_2)); }
	inline float get_b_2() const { return ___b_2; }
	inline float* get_address_of_b_2() { return &___b_2; }
	inline void set_b_2(float value)
	{
		___b_2 = value;
	}

	inline static int32_t get_offset_of_a_3() { return static_cast<int32_t>(offsetof(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659, ___a_3)); }
	inline float get_a_3() const { return ___a_3; }
	inline float* get_address_of_a_3() { return &___a_3; }
	inline void set_a_3(float value)
	{
		___a_3 = value;
	}
};


// UnityEngine.DrivenRectTransformTracker
struct  DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 
{
public:
	union
	{
		struct
		{
		};
		uint8_t DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2__padding[1];
	};

public:
};


// System.Enum
struct  Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int32
struct  Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// UnityEngine.Quaternion
struct  Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 
{
public:
	// System.Single UnityEngine.Quaternion::x
	float ___x_0;
	// System.Single UnityEngine.Quaternion::y
	float ___y_1;
	// System.Single UnityEngine.Quaternion::z
	float ___z_2;
	// System.Single UnityEngine.Quaternion::w
	float ___w_3;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}

	inline static int32_t get_offset_of_z_2() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___z_2)); }
	inline float get_z_2() const { return ___z_2; }
	inline float* get_address_of_z_2() { return &___z_2; }
	inline void set_z_2(float value)
	{
		___z_2 = value;
	}

	inline static int32_t get_offset_of_w_3() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4, ___w_3)); }
	inline float get_w_3() const { return ___w_3; }
	inline float* get_address_of_w_3() { return &___w_3; }
	inline void set_w_3(float value)
	{
		___w_3 = value;
	}
};

struct Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields
{
public:
	// UnityEngine.Quaternion UnityEngine.Quaternion::identityQuaternion
	Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___identityQuaternion_4;

public:
	inline static int32_t get_offset_of_identityQuaternion_4() { return static_cast<int32_t>(offsetof(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4_StaticFields, ___identityQuaternion_4)); }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  get_identityQuaternion_4() const { return ___identityQuaternion_4; }
	inline Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 * get_address_of_identityQuaternion_4() { return &___identityQuaternion_4; }
	inline void set_identityQuaternion_4(Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  value)
	{
		___identityQuaternion_4 = value;
	}
};


// System.Single
struct  Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// UnityEngine.UI.SpriteState
struct  SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E 
{
public:
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_HighlightedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_PressedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_SelectedSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	// UnityEngine.Sprite UnityEngine.UI.SpriteState::m_DisabledSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;

public:
	inline static int32_t get_offset_of_m_HighlightedSprite_0() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_HighlightedSprite_0)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_HighlightedSprite_0() const { return ___m_HighlightedSprite_0; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_HighlightedSprite_0() { return &___m_HighlightedSprite_0; }
	inline void set_m_HighlightedSprite_0(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_HighlightedSprite_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HighlightedSprite_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_PressedSprite_1() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_PressedSprite_1)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_PressedSprite_1() const { return ___m_PressedSprite_1; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_PressedSprite_1() { return &___m_PressedSprite_1; }
	inline void set_m_PressedSprite_1(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_PressedSprite_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PressedSprite_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectedSprite_2() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_SelectedSprite_2)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_SelectedSprite_2() const { return ___m_SelectedSprite_2; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_SelectedSprite_2() { return &___m_SelectedSprite_2; }
	inline void set_m_SelectedSprite_2(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_SelectedSprite_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectedSprite_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisabledSprite_3() { return static_cast<int32_t>(offsetof(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E, ___m_DisabledSprite_3)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_DisabledSprite_3() const { return ___m_DisabledSprite_3; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_DisabledSprite_3() { return &___m_DisabledSprite_3; }
	inline void set_m_DisabledSprite_3(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_DisabledSprite_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_DisabledSprite_3), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_pinvoke
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};
// Native definition for COM marshalling of UnityEngine.UI.SpriteState
struct SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E_marshaled_com
{
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_HighlightedSprite_0;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_PressedSprite_1;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_SelectedSprite_2;
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_DisabledSprite_3;
};

// UnityEngine.Vector2
struct  Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
{
public:
	// System.Single UnityEngine.Vector2::x
	float ___x_0;
	// System.Single UnityEngine.Vector2::y
	float ___y_1;

public:
	inline static int32_t get_offset_of_x_0() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___x_0)); }
	inline float get_x_0() const { return ___x_0; }
	inline float* get_address_of_x_0() { return &___x_0; }
	inline void set_x_0(float value)
	{
		___x_0 = value;
	}

	inline static int32_t get_offset_of_y_1() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9, ___y_1)); }
	inline float get_y_1() const { return ___y_1; }
	inline float* get_address_of_y_1() { return &___y_1; }
	inline void set_y_1(float value)
	{
		___y_1 = value;
	}
};

struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields
{
public:
	// UnityEngine.Vector2 UnityEngine.Vector2::zeroVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___zeroVector_2;
	// UnityEngine.Vector2 UnityEngine.Vector2::oneVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___oneVector_3;
	// UnityEngine.Vector2 UnityEngine.Vector2::upVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___upVector_4;
	// UnityEngine.Vector2 UnityEngine.Vector2::downVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___downVector_5;
	// UnityEngine.Vector2 UnityEngine.Vector2::leftVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___leftVector_6;
	// UnityEngine.Vector2 UnityEngine.Vector2::rightVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rightVector_7;
	// UnityEngine.Vector2 UnityEngine.Vector2::positiveInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___positiveInfinityVector_8;
	// UnityEngine.Vector2 UnityEngine.Vector2::negativeInfinityVector
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___negativeInfinityVector_9;

public:
	inline static int32_t get_offset_of_zeroVector_2() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___zeroVector_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_zeroVector_2() const { return ___zeroVector_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_zeroVector_2() { return &___zeroVector_2; }
	inline void set_zeroVector_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___zeroVector_2 = value;
	}

	inline static int32_t get_offset_of_oneVector_3() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___oneVector_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_oneVector_3() const { return ___oneVector_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_oneVector_3() { return &___oneVector_3; }
	inline void set_oneVector_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___oneVector_3 = value;
	}

	inline static int32_t get_offset_of_upVector_4() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___upVector_4)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_upVector_4() const { return ___upVector_4; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_upVector_4() { return &___upVector_4; }
	inline void set_upVector_4(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___upVector_4 = value;
	}

	inline static int32_t get_offset_of_downVector_5() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___downVector_5)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_downVector_5() const { return ___downVector_5; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_downVector_5() { return &___downVector_5; }
	inline void set_downVector_5(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___downVector_5 = value;
	}

	inline static int32_t get_offset_of_leftVector_6() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___leftVector_6)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_leftVector_6() const { return ___leftVector_6; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_leftVector_6() { return &___leftVector_6; }
	inline void set_leftVector_6(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___leftVector_6 = value;
	}

	inline static int32_t get_offset_of_rightVector_7() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___rightVector_7)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_rightVector_7() const { return ___rightVector_7; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_rightVector_7() { return &___rightVector_7; }
	inline void set_rightVector_7(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___rightVector_7 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___positiveInfinityVector_8)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_positiveInfinityVector_8() const { return ___positiveInfinityVector_8; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_positiveInfinityVector_8() { return &___positiveInfinityVector_8; }
	inline void set_positiveInfinityVector_8(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___positiveInfinityVector_8 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_9() { return static_cast<int32_t>(offsetof(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_StaticFields, ___negativeInfinityVector_9)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_negativeInfinityVector_9() const { return ___negativeInfinityVector_9; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_negativeInfinityVector_9() { return &___negativeInfinityVector_9; }
	inline void set_negativeInfinityVector_9(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___negativeInfinityVector_9 = value;
	}
};


// UnityEngine.Vector3
struct  Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
{
public:
	// System.Single UnityEngine.Vector3::x
	float ___x_2;
	// System.Single UnityEngine.Vector3::y
	float ___y_3;
	// System.Single UnityEngine.Vector3::z
	float ___z_4;

public:
	inline static int32_t get_offset_of_x_2() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___x_2)); }
	inline float get_x_2() const { return ___x_2; }
	inline float* get_address_of_x_2() { return &___x_2; }
	inline void set_x_2(float value)
	{
		___x_2 = value;
	}

	inline static int32_t get_offset_of_y_3() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___y_3)); }
	inline float get_y_3() const { return ___y_3; }
	inline float* get_address_of_y_3() { return &___y_3; }
	inline void set_y_3(float value)
	{
		___y_3 = value;
	}

	inline static int32_t get_offset_of_z_4() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E, ___z_4)); }
	inline float get_z_4() const { return ___z_4; }
	inline float* get_address_of_z_4() { return &___z_4; }
	inline void set_z_4(float value)
	{
		___z_4 = value;
	}
};

struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields
{
public:
	// UnityEngine.Vector3 UnityEngine.Vector3::zeroVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___zeroVector_5;
	// UnityEngine.Vector3 UnityEngine.Vector3::oneVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___oneVector_6;
	// UnityEngine.Vector3 UnityEngine.Vector3::upVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___upVector_7;
	// UnityEngine.Vector3 UnityEngine.Vector3::downVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___downVector_8;
	// UnityEngine.Vector3 UnityEngine.Vector3::leftVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___leftVector_9;
	// UnityEngine.Vector3 UnityEngine.Vector3::rightVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___rightVector_10;
	// UnityEngine.Vector3 UnityEngine.Vector3::forwardVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___forwardVector_11;
	// UnityEngine.Vector3 UnityEngine.Vector3::backVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___backVector_12;
	// UnityEngine.Vector3 UnityEngine.Vector3::positiveInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___positiveInfinityVector_13;
	// UnityEngine.Vector3 UnityEngine.Vector3::negativeInfinityVector
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___negativeInfinityVector_14;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___zeroVector_5)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___oneVector_6)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_upVector_7() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___upVector_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_upVector_7() const { return ___upVector_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_upVector_7() { return &___upVector_7; }
	inline void set_upVector_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___upVector_7 = value;
	}

	inline static int32_t get_offset_of_downVector_8() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___downVector_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_downVector_8() const { return ___downVector_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_downVector_8() { return &___downVector_8; }
	inline void set_downVector_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___downVector_8 = value;
	}

	inline static int32_t get_offset_of_leftVector_9() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___leftVector_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_leftVector_9() const { return ___leftVector_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_leftVector_9() { return &___leftVector_9; }
	inline void set_leftVector_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___leftVector_9 = value;
	}

	inline static int32_t get_offset_of_rightVector_10() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___rightVector_10)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_rightVector_10() const { return ___rightVector_10; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_rightVector_10() { return &___rightVector_10; }
	inline void set_rightVector_10(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___rightVector_10 = value;
	}

	inline static int32_t get_offset_of_forwardVector_11() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___forwardVector_11)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_forwardVector_11() const { return ___forwardVector_11; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_forwardVector_11() { return &___forwardVector_11; }
	inline void set_forwardVector_11(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___forwardVector_11 = value;
	}

	inline static int32_t get_offset_of_backVector_12() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___backVector_12)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_backVector_12() const { return ___backVector_12; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_backVector_12() { return &___backVector_12; }
	inline void set_backVector_12(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___backVector_12 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_13() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___positiveInfinityVector_13)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_positiveInfinityVector_13() const { return ___positiveInfinityVector_13; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_positiveInfinityVector_13() { return &___positiveInfinityVector_13; }
	inline void set_positiveInfinityVector_13(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___positiveInfinityVector_13 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_14() { return static_cast<int32_t>(offsetof(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_StaticFields, ___negativeInfinityVector_14)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_negativeInfinityVector_14() const { return ___negativeInfinityVector_14; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_negativeInfinityVector_14() { return &___negativeInfinityVector_14; }
	inline void set_negativeInfinityVector_14(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___negativeInfinityVector_14 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___zeroVector_5)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___oneVector_6)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// System.Void
struct  Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// UnityEngine.WaitForSeconds
struct  WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.Single UnityEngine.WaitForSeconds::m_Seconds
	float ___m_Seconds_0;

public:
	inline static int32_t get_offset_of_m_Seconds_0() { return static_cast<int32_t>(offsetof(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013, ___m_Seconds_0)); }
	inline float get_m_Seconds_0() const { return ___m_Seconds_0; }
	inline float* get_address_of_m_Seconds_0() { return &___m_Seconds_0; }
	inline void set_m_Seconds_0(float value)
	{
		___m_Seconds_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	float ___m_Seconds_0;
};
// Native definition for COM marshalling of UnityEngine.WaitForSeconds
struct WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	float ___m_Seconds_0;
};

// UnityEngine.AsyncOperation
struct  AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.AsyncOperation::m_Ptr
	intptr_t ___m_Ptr_0;
	// System.Action`1<UnityEngine.AsyncOperation> UnityEngine.AsyncOperation::m_completeCallback
	Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * ___m_completeCallback_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_completeCallback_1() { return static_cast<int32_t>(offsetof(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86, ___m_completeCallback_1)); }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * get_m_completeCallback_1() const { return ___m_completeCallback_1; }
	inline Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 ** get_address_of_m_completeCallback_1() { return &___m_completeCallback_1; }
	inline void set_m_completeCallback_1(Action_1_tC1348BEB2C677FD60E4B65764CA3A1CAFF6DFB31 * value)
	{
		___m_completeCallback_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_completeCallback_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};
// Native definition for COM marshalling of UnityEngine.AsyncOperation
struct AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
	Il2CppMethodPointer ___m_completeCallback_1;
};

// UnityEngine.UI.ColorBlock
struct  ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 
{
public:
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_NormalColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_NormalColor_0;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_HighlightedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_HighlightedColor_1;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_PressedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_PressedColor_2;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_SelectedColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_SelectedColor_3;
	// UnityEngine.Color UnityEngine.UI.ColorBlock::m_DisabledColor
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_DisabledColor_4;
	// System.Single UnityEngine.UI.ColorBlock::m_ColorMultiplier
	float ___m_ColorMultiplier_5;
	// System.Single UnityEngine.UI.ColorBlock::m_FadeDuration
	float ___m_FadeDuration_6;

public:
	inline static int32_t get_offset_of_m_NormalColor_0() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_NormalColor_0)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_NormalColor_0() const { return ___m_NormalColor_0; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_NormalColor_0() { return &___m_NormalColor_0; }
	inline void set_m_NormalColor_0(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_NormalColor_0 = value;
	}

	inline static int32_t get_offset_of_m_HighlightedColor_1() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_HighlightedColor_1)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_HighlightedColor_1() const { return ___m_HighlightedColor_1; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_HighlightedColor_1() { return &___m_HighlightedColor_1; }
	inline void set_m_HighlightedColor_1(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_HighlightedColor_1 = value;
	}

	inline static int32_t get_offset_of_m_PressedColor_2() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_PressedColor_2)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_PressedColor_2() const { return ___m_PressedColor_2; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_PressedColor_2() { return &___m_PressedColor_2; }
	inline void set_m_PressedColor_2(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_PressedColor_2 = value;
	}

	inline static int32_t get_offset_of_m_SelectedColor_3() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_SelectedColor_3)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_SelectedColor_3() const { return ___m_SelectedColor_3; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_SelectedColor_3() { return &___m_SelectedColor_3; }
	inline void set_m_SelectedColor_3(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_SelectedColor_3 = value;
	}

	inline static int32_t get_offset_of_m_DisabledColor_4() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_DisabledColor_4)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_DisabledColor_4() const { return ___m_DisabledColor_4; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_DisabledColor_4() { return &___m_DisabledColor_4; }
	inline void set_m_DisabledColor_4(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_DisabledColor_4 = value;
	}

	inline static int32_t get_offset_of_m_ColorMultiplier_5() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_ColorMultiplier_5)); }
	inline float get_m_ColorMultiplier_5() const { return ___m_ColorMultiplier_5; }
	inline float* get_address_of_m_ColorMultiplier_5() { return &___m_ColorMultiplier_5; }
	inline void set_m_ColorMultiplier_5(float value)
	{
		___m_ColorMultiplier_5 = value;
	}

	inline static int32_t get_offset_of_m_FadeDuration_6() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955, ___m_FadeDuration_6)); }
	inline float get_m_FadeDuration_6() const { return ___m_FadeDuration_6; }
	inline float* get_address_of_m_FadeDuration_6() { return &___m_FadeDuration_6; }
	inline void set_m_FadeDuration_6(float value)
	{
		___m_FadeDuration_6 = value;
	}
};

struct ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields
{
public:
	// UnityEngine.UI.ColorBlock UnityEngine.UI.ColorBlock::defaultColorBlock
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___defaultColorBlock_7;

public:
	inline static int32_t get_offset_of_defaultColorBlock_7() { return static_cast<int32_t>(offsetof(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955_StaticFields, ___defaultColorBlock_7)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_defaultColorBlock_7() const { return ___defaultColorBlock_7; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_defaultColorBlock_7() { return &___defaultColorBlock_7; }
	inline void set_defaultColorBlock_7(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___defaultColorBlock_7 = value;
	}
};


// UnityEngine.Coroutine
struct  Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7  : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF
{
public:
	// System.IntPtr UnityEngine.Coroutine::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_pinvoke : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.Coroutine
struct Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7_marshaled_com : public YieldInstruction_tB0B4E05316710E51ECCC1E57174C27FE6DEBBEAF_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// System.Delegate
struct  Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
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
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// UnityEngine.Object
struct  Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.PrimitiveType
struct  PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E 
{
public:
	// System.Int32 UnityEngine.PrimitiveType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PrimitiveType_t0E20B7B2F4ABBD14BAE02F0444EE003C6479E93E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchPhase
struct  TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A 
{
public:
	// System.Int32 UnityEngine.TouchPhase::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchPhase_tB52B8A497547FB9575DE7975D13AC7D64C3A958A, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.TouchType
struct  TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F 
{
public:
	// System.Int32 UnityEngine.TouchType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TouchType_t2EF726465ABD45681A6686BAC426814AA087C20F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.GUILayoutOption/Type
struct  Type_t79FB5C82B695061CED8D628CBB6A1E8709705288 
{
public:
	// System.Int32 UnityEngine.GUILayoutOption/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_t79FB5C82B695061CED8D628CBB6A1E8709705288, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct  FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
{
public:
	// System.Int32 UnityEngine.UI.Image/FillMethod::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Image/Type
struct  Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
{
public:
	// System.Int32 UnityEngine.UI.Image/Type::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Navigation/Mode
struct  Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F 
{
public:
	// System.Int32 UnityEngine.UI.Navigation/Mode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Mode_t3113FDF05158BBA1DFC78D7F69E4C1D25135CB0F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Selectable/Transition
struct  Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14 
{
public:
	// System.Int32 UnityEngine.UI.Selectable/Transition::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Transition_t1FC449676815A798E758D32E8BE6DC0A2511DF14, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.UI.Slider/Direction
struct  Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961 
{
public:
	// System.Int32 UnityEngine.UI.Slider/Direction::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Direction_tFC329DCFF9844C052301C90100CA0F5FA9C65961, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.AudioClip
struct  AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:
	// UnityEngine.AudioClip/PCMReaderCallback UnityEngine.AudioClip::m_PCMReaderCallback
	PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * ___m_PCMReaderCallback_4;
	// UnityEngine.AudioClip/PCMSetPositionCallback UnityEngine.AudioClip::m_PCMSetPositionCallback
	PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * ___m_PCMSetPositionCallback_5;

public:
	inline static int32_t get_offset_of_m_PCMReaderCallback_4() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMReaderCallback_4)); }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * get_m_PCMReaderCallback_4() const { return ___m_PCMReaderCallback_4; }
	inline PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B ** get_address_of_m_PCMReaderCallback_4() { return &___m_PCMReaderCallback_4; }
	inline void set_m_PCMReaderCallback_4(PCMReaderCallback_t9CA1437D36509A9FAC5EDD8FF2BC3259C24D0E0B * value)
	{
		___m_PCMReaderCallback_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMReaderCallback_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_PCMSetPositionCallback_5() { return static_cast<int32_t>(offsetof(AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE, ___m_PCMSetPositionCallback_5)); }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * get_m_PCMSetPositionCallback_5() const { return ___m_PCMSetPositionCallback_5; }
	inline PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C ** get_address_of_m_PCMSetPositionCallback_5() { return &___m_PCMSetPositionCallback_5; }
	inline void set_m_PCMSetPositionCallback_5(PCMSetPositionCallback_tBDD99E7C0697687F1E7B06CDD5DE444A3709CF4C * value)
	{
		___m_PCMSetPositionCallback_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_PCMSetPositionCallback_5), (void*)value);
	}
};


// UnityEngine.Component
struct  Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GUILayoutOption
struct  GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB  : public RuntimeObject
{
public:
	// UnityEngine.GUILayoutOption/Type UnityEngine.GUILayoutOption::type
	int32_t ___type_0;
	// System.Object UnityEngine.GUILayoutOption::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_type_0() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___type_0)); }
	inline int32_t get_type_0() const { return ___type_0; }
	inline int32_t* get_address_of_type_0() { return &___type_0; }
	inline void set_type_0(int32_t value)
	{
		___type_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___value_1), (void*)value);
	}
};


// UnityEngine.GameObject
struct  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// UnityEngine.UI.Navigation
struct  Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A 
{
public:
	// UnityEngine.UI.Navigation/Mode UnityEngine.UI.Navigation::m_Mode
	int32_t ___m_Mode_0;
	// System.Boolean UnityEngine.UI.Navigation::m_WrapAround
	bool ___m_WrapAround_1;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnUp
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnDown
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnLeft
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	// UnityEngine.UI.Selectable UnityEngine.UI.Navigation::m_SelectOnRight
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;

public:
	inline static int32_t get_offset_of_m_Mode_0() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_Mode_0)); }
	inline int32_t get_m_Mode_0() const { return ___m_Mode_0; }
	inline int32_t* get_address_of_m_Mode_0() { return &___m_Mode_0; }
	inline void set_m_Mode_0(int32_t value)
	{
		___m_Mode_0 = value;
	}

	inline static int32_t get_offset_of_m_WrapAround_1() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_WrapAround_1)); }
	inline bool get_m_WrapAround_1() const { return ___m_WrapAround_1; }
	inline bool* get_address_of_m_WrapAround_1() { return &___m_WrapAround_1; }
	inline void set_m_WrapAround_1(bool value)
	{
		___m_WrapAround_1 = value;
	}

	inline static int32_t get_offset_of_m_SelectOnUp_2() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnUp_2)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnUp_2() const { return ___m_SelectOnUp_2; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnUp_2() { return &___m_SelectOnUp_2; }
	inline void set_m_SelectOnUp_2(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnUp_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnUp_2), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnDown_3() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnDown_3)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnDown_3() const { return ___m_SelectOnDown_3; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnDown_3() { return &___m_SelectOnDown_3; }
	inline void set_m_SelectOnDown_3(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnDown_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnDown_3), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnLeft_4() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnLeft_4)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnLeft_4() const { return ___m_SelectOnLeft_4; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnLeft_4() { return &___m_SelectOnLeft_4; }
	inline void set_m_SelectOnLeft_4(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnLeft_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnLeft_4), (void*)value);
	}

	inline static int32_t get_offset_of_m_SelectOnRight_5() { return static_cast<int32_t>(offsetof(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A, ___m_SelectOnRight_5)); }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * get_m_SelectOnRight_5() const { return ___m_SelectOnRight_5; }
	inline Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD ** get_address_of_m_SelectOnRight_5() { return &___m_SelectOnRight_5; }
	inline void set_m_SelectOnRight_5(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * value)
	{
		___m_SelectOnRight_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SelectOnRight_5), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_pinvoke
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};
// Native definition for COM marshalling of UnityEngine.UI.Navigation
struct Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A_marshaled_com
{
	int32_t ___m_Mode_0;
	int32_t ___m_WrapAround_1;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnUp_2;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnDown_3;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnLeft_4;
	Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD * ___m_SelectOnRight_5;
};

// System.SystemException
struct  SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// UnityEngine.Touch
struct  Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C 
{
public:
	// System.Int32 UnityEngine.Touch::m_FingerId
	int32_t ___m_FingerId_0;
	// UnityEngine.Vector2 UnityEngine.Touch::m_Position
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Position_1;
	// UnityEngine.Vector2 UnityEngine.Touch::m_RawPosition
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_RawPosition_2;
	// UnityEngine.Vector2 UnityEngine.Touch::m_PositionDelta
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_PositionDelta_3;
	// System.Single UnityEngine.Touch::m_TimeDelta
	float ___m_TimeDelta_4;
	// System.Int32 UnityEngine.Touch::m_TapCount
	int32_t ___m_TapCount_5;
	// UnityEngine.TouchPhase UnityEngine.Touch::m_Phase
	int32_t ___m_Phase_6;
	// UnityEngine.TouchType UnityEngine.Touch::m_Type
	int32_t ___m_Type_7;
	// System.Single UnityEngine.Touch::m_Pressure
	float ___m_Pressure_8;
	// System.Single UnityEngine.Touch::m_maximumPossiblePressure
	float ___m_maximumPossiblePressure_9;
	// System.Single UnityEngine.Touch::m_Radius
	float ___m_Radius_10;
	// System.Single UnityEngine.Touch::m_RadiusVariance
	float ___m_RadiusVariance_11;
	// System.Single UnityEngine.Touch::m_AltitudeAngle
	float ___m_AltitudeAngle_12;
	// System.Single UnityEngine.Touch::m_AzimuthAngle
	float ___m_AzimuthAngle_13;

public:
	inline static int32_t get_offset_of_m_FingerId_0() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_FingerId_0)); }
	inline int32_t get_m_FingerId_0() const { return ___m_FingerId_0; }
	inline int32_t* get_address_of_m_FingerId_0() { return &___m_FingerId_0; }
	inline void set_m_FingerId_0(int32_t value)
	{
		___m_FingerId_0 = value;
	}

	inline static int32_t get_offset_of_m_Position_1() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Position_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Position_1() const { return ___m_Position_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Position_1() { return &___m_Position_1; }
	inline void set_m_Position_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Position_1 = value;
	}

	inline static int32_t get_offset_of_m_RawPosition_2() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RawPosition_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_RawPosition_2() const { return ___m_RawPosition_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_RawPosition_2() { return &___m_RawPosition_2; }
	inline void set_m_RawPosition_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_RawPosition_2 = value;
	}

	inline static int32_t get_offset_of_m_PositionDelta_3() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_PositionDelta_3)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_PositionDelta_3() const { return ___m_PositionDelta_3; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_PositionDelta_3() { return &___m_PositionDelta_3; }
	inline void set_m_PositionDelta_3(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_PositionDelta_3 = value;
	}

	inline static int32_t get_offset_of_m_TimeDelta_4() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TimeDelta_4)); }
	inline float get_m_TimeDelta_4() const { return ___m_TimeDelta_4; }
	inline float* get_address_of_m_TimeDelta_4() { return &___m_TimeDelta_4; }
	inline void set_m_TimeDelta_4(float value)
	{
		___m_TimeDelta_4 = value;
	}

	inline static int32_t get_offset_of_m_TapCount_5() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_TapCount_5)); }
	inline int32_t get_m_TapCount_5() const { return ___m_TapCount_5; }
	inline int32_t* get_address_of_m_TapCount_5() { return &___m_TapCount_5; }
	inline void set_m_TapCount_5(int32_t value)
	{
		___m_TapCount_5 = value;
	}

	inline static int32_t get_offset_of_m_Phase_6() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Phase_6)); }
	inline int32_t get_m_Phase_6() const { return ___m_Phase_6; }
	inline int32_t* get_address_of_m_Phase_6() { return &___m_Phase_6; }
	inline void set_m_Phase_6(int32_t value)
	{
		___m_Phase_6 = value;
	}

	inline static int32_t get_offset_of_m_Type_7() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Type_7)); }
	inline int32_t get_m_Type_7() const { return ___m_Type_7; }
	inline int32_t* get_address_of_m_Type_7() { return &___m_Type_7; }
	inline void set_m_Type_7(int32_t value)
	{
		___m_Type_7 = value;
	}

	inline static int32_t get_offset_of_m_Pressure_8() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Pressure_8)); }
	inline float get_m_Pressure_8() const { return ___m_Pressure_8; }
	inline float* get_address_of_m_Pressure_8() { return &___m_Pressure_8; }
	inline void set_m_Pressure_8(float value)
	{
		___m_Pressure_8 = value;
	}

	inline static int32_t get_offset_of_m_maximumPossiblePressure_9() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_maximumPossiblePressure_9)); }
	inline float get_m_maximumPossiblePressure_9() const { return ___m_maximumPossiblePressure_9; }
	inline float* get_address_of_m_maximumPossiblePressure_9() { return &___m_maximumPossiblePressure_9; }
	inline void set_m_maximumPossiblePressure_9(float value)
	{
		___m_maximumPossiblePressure_9 = value;
	}

	inline static int32_t get_offset_of_m_Radius_10() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_Radius_10)); }
	inline float get_m_Radius_10() const { return ___m_Radius_10; }
	inline float* get_address_of_m_Radius_10() { return &___m_Radius_10; }
	inline void set_m_Radius_10(float value)
	{
		___m_Radius_10 = value;
	}

	inline static int32_t get_offset_of_m_RadiusVariance_11() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_RadiusVariance_11)); }
	inline float get_m_RadiusVariance_11() const { return ___m_RadiusVariance_11; }
	inline float* get_address_of_m_RadiusVariance_11() { return &___m_RadiusVariance_11; }
	inline void set_m_RadiusVariance_11(float value)
	{
		___m_RadiusVariance_11 = value;
	}

	inline static int32_t get_offset_of_m_AltitudeAngle_12() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AltitudeAngle_12)); }
	inline float get_m_AltitudeAngle_12() const { return ___m_AltitudeAngle_12; }
	inline float* get_address_of_m_AltitudeAngle_12() { return &___m_AltitudeAngle_12; }
	inline void set_m_AltitudeAngle_12(float value)
	{
		___m_AltitudeAngle_12 = value;
	}

	inline static int32_t get_offset_of_m_AzimuthAngle_13() { return static_cast<int32_t>(offsetof(Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C, ___m_AzimuthAngle_13)); }
	inline float get_m_AzimuthAngle_13() const { return ___m_AzimuthAngle_13; }
	inline float* get_address_of_m_AzimuthAngle_13() { return &___m_AzimuthAngle_13; }
	inline void set_m_AzimuthAngle_13(float value)
	{
		___m_AzimuthAngle_13 = value;
	}
};


// System.Action`1<UnityEngine.GameObject>
struct  Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D  : public MulticastDelegate_t
{
public:

public:
};


// System.Func`1<UnityEngine.GameObject>
struct  Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63  : public MulticastDelegate_t
{
public:

public:
};


// System.Predicate`1<UnityEngine.Behaviour>
struct  Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03  : public MulticastDelegate_t
{
public:

public:
};


// UnityEngine.Behaviour
struct  Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// System.NotSupportedException
struct  NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:

public:
};


// UnityEngine.Renderer
struct  Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Rigidbody2D
struct  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct  Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct  AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Camera
struct  Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};

struct Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields
{
public:
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreCull
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreCull_4;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPreRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPreRender_5;
	// UnityEngine.Camera/CameraCallback UnityEngine.Camera::onPostRender
	CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * ___onPostRender_6;

public:
	inline static int32_t get_offset_of_onPreCull_4() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreCull_4)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreCull_4() const { return ___onPreCull_4; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreCull_4() { return &___onPreCull_4; }
	inline void set_onPreCull_4(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreCull_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreCull_4), (void*)value);
	}

	inline static int32_t get_offset_of_onPreRender_5() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPreRender_5)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPreRender_5() const { return ___onPreRender_5; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPreRender_5() { return &___onPreRender_5; }
	inline void set_onPreRender_5(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPreRender_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPreRender_5), (void*)value);
	}

	inline static int32_t get_offset_of_onPostRender_6() { return static_cast<int32_t>(offsetof(Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C_StaticFields, ___onPostRender_6)); }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * get_onPostRender_6() const { return ___onPostRender_6; }
	inline CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D ** get_address_of_onPostRender_6() { return &___onPostRender_6; }
	inline void set_onPostRender_6(CameraCallback_tD9E7B69E561CE2EFDEEDB0E7F1406AC52247160D * value)
	{
		___onPostRender_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___onPostRender_6), (void*)value);
	}
};


// UnityEngine.Collider2D
struct  Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.SpriteRenderer
struct  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF  : public Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C
{
public:

public:
};


// Astar
struct  Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Rigidbody2D Astar::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_4;
	// System.Single[] Astar::Goal
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___Goal_9;
	// System.Collections.Generic.List`1<System.Single[]> Astar::ROUTE
	List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * ___ROUTE_10;
	// System.Single[][] Astar::node_big
	SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* ___node_big_12;
	// System.Int32 Astar::timeoutTemp
	int32_t ___timeoutTemp_13;
	// System.Collections.Generic.List`1<System.Single[]> Astar::open
	List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * ___open_16;
	// System.Single[] Astar::node_search
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___node_search_17;

public:
	inline static int32_t get_offset_of_rb_4() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4, ___rb_4)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_4() const { return ___rb_4; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_4() { return &___rb_4; }
	inline void set_rb_4(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_4), (void*)value);
	}

	inline static int32_t get_offset_of_Goal_9() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4, ___Goal_9)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_Goal_9() const { return ___Goal_9; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_Goal_9() { return &___Goal_9; }
	inline void set_Goal_9(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___Goal_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Goal_9), (void*)value);
	}

	inline static int32_t get_offset_of_ROUTE_10() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4, ___ROUTE_10)); }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * get_ROUTE_10() const { return ___ROUTE_10; }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 ** get_address_of_ROUTE_10() { return &___ROUTE_10; }
	inline void set_ROUTE_10(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * value)
	{
		___ROUTE_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ROUTE_10), (void*)value);
	}

	inline static int32_t get_offset_of_node_big_12() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4, ___node_big_12)); }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* get_node_big_12() const { return ___node_big_12; }
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9** get_address_of_node_big_12() { return &___node_big_12; }
	inline void set_node_big_12(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* value)
	{
		___node_big_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node_big_12), (void*)value);
	}

	inline static int32_t get_offset_of_timeoutTemp_13() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4, ___timeoutTemp_13)); }
	inline int32_t get_timeoutTemp_13() const { return ___timeoutTemp_13; }
	inline int32_t* get_address_of_timeoutTemp_13() { return &___timeoutTemp_13; }
	inline void set_timeoutTemp_13(int32_t value)
	{
		___timeoutTemp_13 = value;
	}

	inline static int32_t get_offset_of_open_16() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4, ___open_16)); }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * get_open_16() const { return ___open_16; }
	inline List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 ** get_address_of_open_16() { return &___open_16; }
	inline void set_open_16(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * value)
	{
		___open_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___open_16), (void*)value);
	}

	inline static int32_t get_offset_of_node_search_17() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4, ___node_search_17)); }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* get_node_search_17() const { return ___node_search_17; }
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** get_address_of_node_search_17() { return &___node_search_17; }
	inline void set_node_search_17(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		___node_search_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node_search_17), (void*)value);
	}
};

struct Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields
{
public:
	// System.Single[][][] Astar::node
	SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* ___node_11;
	// System.Int32 Astar::timeOut
	int32_t ___timeOut_14;
	// System.Int32 Astar::timeElapsed
	int32_t ___timeElapsed_15;

public:
	inline static int32_t get_offset_of_node_11() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields, ___node_11)); }
	inline SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* get_node_11() const { return ___node_11; }
	inline SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816** get_address_of_node_11() { return &___node_11; }
	inline void set_node_11(SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* value)
	{
		___node_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___node_11), (void*)value);
	}

	inline static int32_t get_offset_of_timeOut_14() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields, ___timeOut_14)); }
	inline int32_t get_timeOut_14() const { return ___timeOut_14; }
	inline int32_t* get_address_of_timeOut_14() { return &___timeOut_14; }
	inline void set_timeOut_14(int32_t value)
	{
		___timeOut_14 = value;
	}

	inline static int32_t get_offset_of_timeElapsed_15() { return static_cast<int32_t>(offsetof(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields, ___timeElapsed_15)); }
	inline int32_t get_timeElapsed_15() const { return ___timeElapsed_15; }
	inline int32_t* get_address_of_timeElapsed_15() { return &___timeElapsed_15; }
	inline void set_timeElapsed_15(int32_t value)
	{
		___timeElapsed_15 = value;
	}
};


// AudioController
struct  AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AudioClip[] AudioController::ClipTemp
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___ClipTemp_6;
	// UnityEngine.AudioSource AudioController::audi
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audi_7;

public:
	inline static int32_t get_offset_of_ClipTemp_6() { return static_cast<int32_t>(offsetof(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E, ___ClipTemp_6)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_ClipTemp_6() const { return ___ClipTemp_6; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_ClipTemp_6() { return &___ClipTemp_6; }
	inline void set_ClipTemp_6(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___ClipTemp_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ClipTemp_6), (void*)value);
	}

	inline static int32_t get_offset_of_audi_7() { return static_cast<int32_t>(offsetof(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E, ___audi_7)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audi_7() const { return ___audi_7; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audi_7() { return &___audi_7; }
	inline void set_audi_7(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audi_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audi_7), (void*)value);
	}
};

struct AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_StaticFields
{
public:
	// UnityEngine.AudioSource[] AudioController::sounds
	AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* ___sounds_4;
	// UnityEngine.AudioClip[] AudioController::clips
	AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* ___clips_5;

public:
	inline static int32_t get_offset_of_sounds_4() { return static_cast<int32_t>(offsetof(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_StaticFields, ___sounds_4)); }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* get_sounds_4() const { return ___sounds_4; }
	inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B** get_address_of_sounds_4() { return &___sounds_4; }
	inline void set_sounds_4(AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* value)
	{
		___sounds_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sounds_4), (void*)value);
	}

	inline static int32_t get_offset_of_clips_5() { return static_cast<int32_t>(offsetof(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_StaticFields, ___clips_5)); }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* get_clips_5() const { return ___clips_5; }
	inline AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE** get_address_of_clips_5() { return &___clips_5; }
	inline void set_clips_5(AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* value)
	{
		___clips_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___clips_5), (void*)value);
	}
};


// UnityEngine.AudioSource
struct  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// BRController
struct  BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.String BRController::removersTag
	String_t* ___removersTag_4;
	// UnityEngine.SpriteRenderer BRController::sr
	SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * ___sr_5;
	// UnityEngine.CircleCollider2D BRController::cc
	CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * ___cc_6;
	// System.Single BRController::size
	float ___size_7;
	// System.Int32 BRController::time
	int32_t ___time_8;
	// UnityEngine.Vector3 BRController::defaultsize
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___defaultsize_9;

public:
	inline static int32_t get_offset_of_removersTag_4() { return static_cast<int32_t>(offsetof(BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50, ___removersTag_4)); }
	inline String_t* get_removersTag_4() const { return ___removersTag_4; }
	inline String_t** get_address_of_removersTag_4() { return &___removersTag_4; }
	inline void set_removersTag_4(String_t* value)
	{
		___removersTag_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___removersTag_4), (void*)value);
	}

	inline static int32_t get_offset_of_sr_5() { return static_cast<int32_t>(offsetof(BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50, ___sr_5)); }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * get_sr_5() const { return ___sr_5; }
	inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF ** get_address_of_sr_5() { return &___sr_5; }
	inline void set_sr_5(SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * value)
	{
		___sr_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sr_5), (void*)value);
	}

	inline static int32_t get_offset_of_cc_6() { return static_cast<int32_t>(offsetof(BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50, ___cc_6)); }
	inline CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * get_cc_6() const { return ___cc_6; }
	inline CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 ** get_address_of_cc_6() { return &___cc_6; }
	inline void set_cc_6(CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * value)
	{
		___cc_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___cc_6), (void*)value);
	}

	inline static int32_t get_offset_of_size_7() { return static_cast<int32_t>(offsetof(BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50, ___size_7)); }
	inline float get_size_7() const { return ___size_7; }
	inline float* get_address_of_size_7() { return &___size_7; }
	inline void set_size_7(float value)
	{
		___size_7 = value;
	}

	inline static int32_t get_offset_of_time_8() { return static_cast<int32_t>(offsetof(BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50, ___time_8)); }
	inline int32_t get_time_8() const { return ___time_8; }
	inline int32_t* get_address_of_time_8() { return &___time_8; }
	inline void set_time_8(int32_t value)
	{
		___time_8 = value;
	}

	inline static int32_t get_offset_of_defaultsize_9() { return static_cast<int32_t>(offsetof(BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50, ___defaultsize_9)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_defaultsize_9() const { return ___defaultsize_9; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_defaultsize_9() { return &___defaultsize_9; }
	inline void set_defaultsize_9(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___defaultsize_9 = value;
	}
};


// BlackoutController
struct  BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image BlackoutController::image
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___image_4;
	// UnityEngine.GameObject BlackoutController::Audio
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Audio_5;
	// UnityEngine.GameObject BlackoutController::wlsv
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___wlsv_6;
	// System.Single BlackoutController::wait
	float ___wait_7;
	// System.Int32 BlackoutController::invframe
	int32_t ___invframe_8;

public:
	inline static int32_t get_offset_of_image_4() { return static_cast<int32_t>(offsetof(BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D, ___image_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_image_4() const { return ___image_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_image_4() { return &___image_4; }
	inline void set_image_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___image_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___image_4), (void*)value);
	}

	inline static int32_t get_offset_of_Audio_5() { return static_cast<int32_t>(offsetof(BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D, ___Audio_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Audio_5() const { return ___Audio_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Audio_5() { return &___Audio_5; }
	inline void set_Audio_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Audio_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Audio_5), (void*)value);
	}

	inline static int32_t get_offset_of_wlsv_6() { return static_cast<int32_t>(offsetof(BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D, ___wlsv_6)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_wlsv_6() const { return ___wlsv_6; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_wlsv_6() { return &___wlsv_6; }
	inline void set_wlsv_6(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___wlsv_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___wlsv_6), (void*)value);
	}

	inline static int32_t get_offset_of_wait_7() { return static_cast<int32_t>(offsetof(BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D, ___wait_7)); }
	inline float get_wait_7() const { return ___wait_7; }
	inline float* get_address_of_wait_7() { return &___wait_7; }
	inline void set_wait_7(float value)
	{
		___wait_7 = value;
	}

	inline static int32_t get_offset_of_invframe_8() { return static_cast<int32_t>(offsetof(BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D, ___invframe_8)); }
	inline int32_t get_invframe_8() const { return ___invframe_8; }
	inline int32_t* get_address_of_invframe_8() { return &___invframe_8; }
	inline void set_invframe_8(int32_t value)
	{
		___invframe_8 = value;
	}
};


// ButtonController_1
struct  ButtonController_1_t3677289B3860798FBAFDB73B8FEFB7F9E868C1B9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.CircleCollider2D
struct  CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913  : public Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722
{
public:

public:
};


// CountDownActive
struct  CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CountDownActive::time
	float ___time_4;

public:
	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}
};


// CountDownUIController
struct  CountDownUIController_tC373B879933D521515C27C7D933F49A9F3F6E530  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single CountDownUIController::time
	float ___time_4;
	// UnityEngine.UI.Text CountDownUIController::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_5;

public:
	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(CountDownUIController_tC373B879933D521515C27C7D933F49A9F3F6E530, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_text_5() { return static_cast<int32_t>(offsetof(CountDownUIController_tC373B879933D521515C27C7D933F49A9F3F6E530, ___text_5)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_5() const { return ___text_5; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_5() { return &___text_5; }
	inline void set_text_5(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_5), (void*)value);
	}
};


// CreateObject
struct  CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject> CreateObject::objectPool
	ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * ___objectPool_4;

public:
	inline static int32_t get_offset_of_objectPool_4() { return static_cast<int32_t>(offsetof(CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179, ___objectPool_4)); }
	inline ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * get_objectPool_4() const { return ___objectPool_4; }
	inline ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 ** get_address_of_objectPool_4() { return &___objectPool_4; }
	inline void set_objectPool_4(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * value)
	{
		___objectPool_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectPool_4), (void*)value);
	}
};


// CutController
struct  CutController_t3754BC1240D9D6E5FFC092E5A474BFCEDB0F48A7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Texture2D[] CutController::frames
	Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* ___frames_4;

public:
	inline static int32_t get_offset_of_frames_4() { return static_cast<int32_t>(offsetof(CutController_t3754BC1240D9D6E5FFC092E5A474BFCEDB0F48A7, ___frames_4)); }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* get_frames_4() const { return ___frames_4; }
	inline Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316** get_address_of_frames_4() { return &___frames_4; }
	inline void set_frames_4(Texture2DU5BU5D_t0CBDCEA1648F6CBEA47C64E1E48F22B9692B3316* value)
	{
		___frames_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___frames_4), (void*)value);
	}
};


// DirectorController
struct  DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};

struct DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_StaticFields
{
public:
	// System.Int32 DirectorController::gamestagenum
	int32_t ___gamestagenum_4;

public:
	inline static int32_t get_offset_of_gamestagenum_4() { return static_cast<int32_t>(offsetof(DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_StaticFields, ___gamestagenum_4)); }
	inline int32_t get_gamestagenum_4() const { return ___gamestagenum_4; }
	inline int32_t* get_address_of_gamestagenum_4() { return &___gamestagenum_4; }
	inline void set_gamestagenum_4(int32_t value)
	{
		___gamestagenum_4 = value;
	}
};


// EffectDestroyer
struct  EffectDestroyer_t78B2CD061FC3DE106B76E819ADC35AB894C1D3F1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EffectDestroyer::destroy_time
	float ___destroy_time_4;

public:
	inline static int32_t get_offset_of_destroy_time_4() { return static_cast<int32_t>(offsetof(EffectDestroyer_t78B2CD061FC3DE106B76E819ADC35AB894C1D3F1, ___destroy_time_4)); }
	inline float get_destroy_time_4() const { return ___destroy_time_4; }
	inline float* get_address_of_destroy_time_4() { return &___destroy_time_4; }
	inline void set_destroy_time_4(float value)
	{
		___destroy_time_4 = value;
	}
};


// EnemyController
struct  EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single EnemyController::cooldownTime
	float ___cooldownTime_5;
	// System.Single EnemyController::cooldown
	float ___cooldown_6;
	// System.Int32 EnemyController::team
	int32_t ___team_7;
	// UnityEngine.GameObject EnemyController::obj
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___obj_8;
	// UnityEngine.GameObject EnemyController::effect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___effect_9;
	// UnityEngine.GameObject EnemyController::effect2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___effect2_10;
	// UnityEngine.GameObject EnemyController::turret
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___turret_11;
	// UnityEngine.GameObject EnemyController::blackout
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___blackout_12;
	// System.Int32 EnemyController::tapspeed
	int32_t ___tapspeed_16;
	// System.Int32 EnemyController::untiltap
	int32_t ___untiltap_17;
	// System.Int32 EnemyController::untilRemoteAttack
	int32_t ___untilRemoteAttack_18;
	// System.Int32 EnemyController::RApattmp
	int32_t ___RApattmp_19;
	// UnityEngine.GameObject EnemyController::bulleremover
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulleremover_21;
	// BRController EnemyController::brcont
	BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * ___brcont_22;
	// UnityEngine.GameObject EnemyController::KOeffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___KOeffect_23;

public:
	inline static int32_t get_offset_of_cooldownTime_5() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___cooldownTime_5)); }
	inline float get_cooldownTime_5() const { return ___cooldownTime_5; }
	inline float* get_address_of_cooldownTime_5() { return &___cooldownTime_5; }
	inline void set_cooldownTime_5(float value)
	{
		___cooldownTime_5 = value;
	}

	inline static int32_t get_offset_of_cooldown_6() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___cooldown_6)); }
	inline float get_cooldown_6() const { return ___cooldown_6; }
	inline float* get_address_of_cooldown_6() { return &___cooldown_6; }
	inline void set_cooldown_6(float value)
	{
		___cooldown_6 = value;
	}

	inline static int32_t get_offset_of_team_7() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___team_7)); }
	inline int32_t get_team_7() const { return ___team_7; }
	inline int32_t* get_address_of_team_7() { return &___team_7; }
	inline void set_team_7(int32_t value)
	{
		___team_7 = value;
	}

	inline static int32_t get_offset_of_obj_8() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___obj_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_obj_8() const { return ___obj_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_obj_8() { return &___obj_8; }
	inline void set_obj_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___obj_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___obj_8), (void*)value);
	}

	inline static int32_t get_offset_of_effect_9() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___effect_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_effect_9() const { return ___effect_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_effect_9() { return &___effect_9; }
	inline void set_effect_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___effect_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effect_9), (void*)value);
	}

	inline static int32_t get_offset_of_effect2_10() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___effect2_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_effect2_10() const { return ___effect2_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_effect2_10() { return &___effect2_10; }
	inline void set_effect2_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___effect2_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effect2_10), (void*)value);
	}

	inline static int32_t get_offset_of_turret_11() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___turret_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_turret_11() const { return ___turret_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_turret_11() { return &___turret_11; }
	inline void set_turret_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___turret_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turret_11), (void*)value);
	}

	inline static int32_t get_offset_of_blackout_12() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___blackout_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_blackout_12() const { return ___blackout_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_blackout_12() { return &___blackout_12; }
	inline void set_blackout_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___blackout_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blackout_12), (void*)value);
	}

	inline static int32_t get_offset_of_tapspeed_16() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___tapspeed_16)); }
	inline int32_t get_tapspeed_16() const { return ___tapspeed_16; }
	inline int32_t* get_address_of_tapspeed_16() { return &___tapspeed_16; }
	inline void set_tapspeed_16(int32_t value)
	{
		___tapspeed_16 = value;
	}

	inline static int32_t get_offset_of_untiltap_17() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___untiltap_17)); }
	inline int32_t get_untiltap_17() const { return ___untiltap_17; }
	inline int32_t* get_address_of_untiltap_17() { return &___untiltap_17; }
	inline void set_untiltap_17(int32_t value)
	{
		___untiltap_17 = value;
	}

	inline static int32_t get_offset_of_untilRemoteAttack_18() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___untilRemoteAttack_18)); }
	inline int32_t get_untilRemoteAttack_18() const { return ___untilRemoteAttack_18; }
	inline int32_t* get_address_of_untilRemoteAttack_18() { return &___untilRemoteAttack_18; }
	inline void set_untilRemoteAttack_18(int32_t value)
	{
		___untilRemoteAttack_18 = value;
	}

	inline static int32_t get_offset_of_RApattmp_19() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___RApattmp_19)); }
	inline int32_t get_RApattmp_19() const { return ___RApattmp_19; }
	inline int32_t* get_address_of_RApattmp_19() { return &___RApattmp_19; }
	inline void set_RApattmp_19(int32_t value)
	{
		___RApattmp_19 = value;
	}

	inline static int32_t get_offset_of_bulleremover_21() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___bulleremover_21)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulleremover_21() const { return ___bulleremover_21; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulleremover_21() { return &___bulleremover_21; }
	inline void set_bulleremover_21(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulleremover_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulleremover_21), (void*)value);
	}

	inline static int32_t get_offset_of_brcont_22() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___brcont_22)); }
	inline BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * get_brcont_22() const { return ___brcont_22; }
	inline BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 ** get_address_of_brcont_22() { return &___brcont_22; }
	inline void set_brcont_22(BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * value)
	{
		___brcont_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brcont_22), (void*)value);
	}

	inline static int32_t get_offset_of_KOeffect_23() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB, ___KOeffect_23)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_KOeffect_23() const { return ___KOeffect_23; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_KOeffect_23() { return &___KOeffect_23; }
	inline void set_KOeffect_23(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___KOeffect_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KOeffect_23), (void*)value);
	}
};

struct EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields
{
public:
	// System.Int32 EnemyController::Life
	int32_t ___Life_4;
	// System.Int32 EnemyController::exp
	int32_t ___exp_13;
	// System.Int32 EnemyController::lv
	int32_t ___lv_14;
	// System.Int32 EnemyController::necessaryexp
	int32_t ___necessaryexp_15;
	// System.Int32 EnemyController::RApattern
	int32_t ___RApattern_20;

public:
	inline static int32_t get_offset_of_Life_4() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields, ___Life_4)); }
	inline int32_t get_Life_4() const { return ___Life_4; }
	inline int32_t* get_address_of_Life_4() { return &___Life_4; }
	inline void set_Life_4(int32_t value)
	{
		___Life_4 = value;
	}

	inline static int32_t get_offset_of_exp_13() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields, ___exp_13)); }
	inline int32_t get_exp_13() const { return ___exp_13; }
	inline int32_t* get_address_of_exp_13() { return &___exp_13; }
	inline void set_exp_13(int32_t value)
	{
		___exp_13 = value;
	}

	inline static int32_t get_offset_of_lv_14() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields, ___lv_14)); }
	inline int32_t get_lv_14() const { return ___lv_14; }
	inline int32_t* get_address_of_lv_14() { return &___lv_14; }
	inline void set_lv_14(int32_t value)
	{
		___lv_14 = value;
	}

	inline static int32_t get_offset_of_necessaryexp_15() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields, ___necessaryexp_15)); }
	inline int32_t get_necessaryexp_15() const { return ___necessaryexp_15; }
	inline int32_t* get_address_of_necessaryexp_15() { return &___necessaryexp_15; }
	inline void set_necessaryexp_15(int32_t value)
	{
		___necessaryexp_15 = value;
	}

	inline static int32_t get_offset_of_RApattern_20() { return static_cast<int32_t>(offsetof(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields, ___RApattern_20)); }
	inline int32_t get_RApattern_20() const { return ___RApattern_20; }
	inline int32_t* get_address_of_RApattern_20() { return &___RApattern_20; }
	inline void set_RApattern_20(int32_t value)
	{
		___RApattern_20 = value;
	}
};


// ExpBarController
struct  ExpBarController_t6131D21F3F53C5E87A794EE2341E5BC0427D3F27  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Image ExpBarController::bar
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___bar_4;

public:
	inline static int32_t get_offset_of_bar_4() { return static_cast<int32_t>(offsetof(ExpBarController_t6131D21F3F53C5E87A794EE2341E5BC0427D3F27, ___bar_4)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_bar_4() const { return ___bar_4; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_bar_4() { return &___bar_4; }
	inline void set_bar_4(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___bar_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bar_4), (void*)value);
	}
};


// ExpController
struct  ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ExpController::time
	float ___time_4;
	// System.Single ExpController::time_rnd
	float ___time_rnd_5;
	// System.Single ExpController::speed
	float ___speed_6;
	// UnityEngine.Vector3 ExpController::start_pos
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___start_pos_7;
	// UnityEngine.GameObject ExpController::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_8;

public:
	inline static int32_t get_offset_of_time_4() { return static_cast<int32_t>(offsetof(ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653, ___time_4)); }
	inline float get_time_4() const { return ___time_4; }
	inline float* get_address_of_time_4() { return &___time_4; }
	inline void set_time_4(float value)
	{
		___time_4 = value;
	}

	inline static int32_t get_offset_of_time_rnd_5() { return static_cast<int32_t>(offsetof(ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653, ___time_rnd_5)); }
	inline float get_time_rnd_5() const { return ___time_rnd_5; }
	inline float* get_address_of_time_rnd_5() { return &___time_rnd_5; }
	inline void set_time_rnd_5(float value)
	{
		___time_rnd_5 = value;
	}

	inline static int32_t get_offset_of_speed_6() { return static_cast<int32_t>(offsetof(ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653, ___speed_6)); }
	inline float get_speed_6() const { return ___speed_6; }
	inline float* get_address_of_speed_6() { return &___speed_6; }
	inline void set_speed_6(float value)
	{
		___speed_6 = value;
	}

	inline static int32_t get_offset_of_start_pos_7() { return static_cast<int32_t>(offsetof(ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653, ___start_pos_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_start_pos_7() const { return ___start_pos_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_start_pos_7() { return &___start_pos_7; }
	inline void set_start_pos_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___start_pos_7 = value;
	}

	inline static int32_t get_offset_of_player_8() { return static_cast<int32_t>(offsetof(ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653, ___player_8)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_8() const { return ___player_8; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_8() { return &___player_8; }
	inline void set_player_8(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_8), (void*)value);
	}
};


// GrazeController
struct  GrazeController_t85E7089B4621F5BA3BE766B9C83F3C424AAB2C6F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single GrazeController::soundtime
	float ___soundtime_4;
	// System.Single GrazeController::timeout
	float ___timeout_5;
	// System.Boolean GrazeController::enemy
	bool ___enemy_6;

public:
	inline static int32_t get_offset_of_soundtime_4() { return static_cast<int32_t>(offsetof(GrazeController_t85E7089B4621F5BA3BE766B9C83F3C424AAB2C6F, ___soundtime_4)); }
	inline float get_soundtime_4() const { return ___soundtime_4; }
	inline float* get_address_of_soundtime_4() { return &___soundtime_4; }
	inline void set_soundtime_4(float value)
	{
		___soundtime_4 = value;
	}

	inline static int32_t get_offset_of_timeout_5() { return static_cast<int32_t>(offsetof(GrazeController_t85E7089B4621F5BA3BE766B9C83F3C424AAB2C6F, ___timeout_5)); }
	inline float get_timeout_5() const { return ___timeout_5; }
	inline float* get_address_of_timeout_5() { return &___timeout_5; }
	inline void set_timeout_5(float value)
	{
		___timeout_5 = value;
	}

	inline static int32_t get_offset_of_enemy_6() { return static_cast<int32_t>(offsetof(GrazeController_t85E7089B4621F5BA3BE766B9C83F3C424AAB2C6F, ___enemy_6)); }
	inline bool get_enemy_6() const { return ___enemy_6; }
	inline bool* get_address_of_enemy_6() { return &___enemy_6; }
	inline void set_enemy_6(bool value)
	{
		___enemy_6 = value;
	}
};


// InvisibleController
struct  InvisibleController_t746E091E6D04AA665B2D435D0345DFD3EB8F312B  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single InvisibleController::alpha
	float ___alpha_4;

public:
	inline static int32_t get_offset_of_alpha_4() { return static_cast<int32_t>(offsetof(InvisibleController_t746E091E6D04AA665B2D435D0345DFD3EB8F312B, ___alpha_4)); }
	inline float get_alpha_4() const { return ___alpha_4; }
	inline float* get_address_of_alpha_4() { return &___alpha_4; }
	inline void set_alpha_4(float value)
	{
		___alpha_4 = value;
	}
};


// ItemController
struct  ItemController_t014D2DFBE80E6C01E177CF08508B3C5F55666008  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single ItemController::speed
	float ___speed_4;
	// UnityEngine.Rigidbody2D ItemController::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_5;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(ItemController_t014D2DFBE80E6C01E177CF08508B3C5F55666008, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_rb_5() { return static_cast<int32_t>(offsetof(ItemController_t014D2DFBE80E6C01E177CF08508B3C5F55666008, ___rb_5)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_5() const { return ___rb_5; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_5() { return &___rb_5; }
	inline void set_rb_5(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_5), (void*)value);
	}
};


// LifeController
struct  LifeController_t27399F73AFC41F0E58E82F1D2EEE482D1A96A0B9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 LifeController::LifeNum
	int32_t ___LifeNum_4;
	// System.Int32 LifeController::enemy
	int32_t ___enemy_5;
	// UnityEngine.Animator LifeController::ani
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___ani_6;

public:
	inline static int32_t get_offset_of_LifeNum_4() { return static_cast<int32_t>(offsetof(LifeController_t27399F73AFC41F0E58E82F1D2EEE482D1A96A0B9, ___LifeNum_4)); }
	inline int32_t get_LifeNum_4() const { return ___LifeNum_4; }
	inline int32_t* get_address_of_LifeNum_4() { return &___LifeNum_4; }
	inline void set_LifeNum_4(int32_t value)
	{
		___LifeNum_4 = value;
	}

	inline static int32_t get_offset_of_enemy_5() { return static_cast<int32_t>(offsetof(LifeController_t27399F73AFC41F0E58E82F1D2EEE482D1A96A0B9, ___enemy_5)); }
	inline int32_t get_enemy_5() const { return ___enemy_5; }
	inline int32_t* get_address_of_enemy_5() { return &___enemy_5; }
	inline void set_enemy_5(int32_t value)
	{
		___enemy_5 = value;
	}

	inline static int32_t get_offset_of_ani_6() { return static_cast<int32_t>(offsetof(LifeController_t27399F73AFC41F0E58E82F1D2EEE482D1A96A0B9, ___ani_6)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_ani_6() const { return ___ani_6; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_ani_6() { return &___ani_6; }
	inline void set_ani_6(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___ani_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___ani_6), (void*)value);
	}
};


// LoadScene
struct  LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AsyncOperation LoadScene::async
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___async_4;
	// UnityEngine.GameObject LoadScene::loadUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loadUI_5;
	// UnityEngine.UI.Slider LoadScene::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_6;

public:
	inline static int32_t get_offset_of_async_4() { return static_cast<int32_t>(offsetof(LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4, ___async_4)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_async_4() const { return ___async_4; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_async_4() { return &___async_4; }
	inline void set_async_4(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___async_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___async_4), (void*)value);
	}

	inline static int32_t get_offset_of_loadUI_5() { return static_cast<int32_t>(offsetof(LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4, ___loadUI_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loadUI_5() const { return ___loadUI_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loadUI_5() { return &___loadUI_5; }
	inline void set_loadUI_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loadUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadUI_5), (void*)value);
	}

	inline static int32_t get_offset_of_slider_6() { return static_cast<int32_t>(offsetof(LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4, ___slider_6)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_6() const { return ___slider_6; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_6() { return &___slider_6; }
	inline void set_slider_6(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_6), (void*)value);
	}
};


// LoadingController
struct  LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.AsyncOperation LoadingController::async
	AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * ___async_4;
	// UnityEngine.GameObject LoadingController::loadUI
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___loadUI_5;
	// UnityEngine.UI.Slider LoadingController::slider
	Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * ___slider_6;

public:
	inline static int32_t get_offset_of_async_4() { return static_cast<int32_t>(offsetof(LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57, ___async_4)); }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * get_async_4() const { return ___async_4; }
	inline AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 ** get_address_of_async_4() { return &___async_4; }
	inline void set_async_4(AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * value)
	{
		___async_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___async_4), (void*)value);
	}

	inline static int32_t get_offset_of_loadUI_5() { return static_cast<int32_t>(offsetof(LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57, ___loadUI_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_loadUI_5() const { return ___loadUI_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_loadUI_5() { return &___loadUI_5; }
	inline void set_loadUI_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___loadUI_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___loadUI_5), (void*)value);
	}

	inline static int32_t get_offset_of_slider_6() { return static_cast<int32_t>(offsetof(LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57, ___slider_6)); }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * get_slider_6() const { return ___slider_6; }
	inline Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A ** get_address_of_slider_6() { return &___slider_6; }
	inline void set_slider_6(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * value)
	{
		___slider_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___slider_6), (void*)value);
	}
};


// LvviewController
struct  LvviewController_t27644D2A5EFC8834D05AF90750B56A0D35D8110C  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text LvviewController::Ltext
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Ltext_4;
	// System.Boolean LvviewController::enemy
	bool ___enemy_5;

public:
	inline static int32_t get_offset_of_Ltext_4() { return static_cast<int32_t>(offsetof(LvviewController_t27644D2A5EFC8834D05AF90750B56A0D35D8110C, ___Ltext_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Ltext_4() const { return ___Ltext_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Ltext_4() { return &___Ltext_4; }
	inline void set_Ltext_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Ltext_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ltext_4), (void*)value);
	}

	inline static int32_t get_offset_of_enemy_5() { return static_cast<int32_t>(offsetof(LvviewController_t27644D2A5EFC8834D05AF90750B56A0D35D8110C, ___enemy_5)); }
	inline bool get_enemy_5() const { return ___enemy_5; }
	inline bool* get_address_of_enemy_5() { return &___enemy_5; }
	inline void set_enemy_5(bool value)
	{
		___enemy_5 = value;
	}
};


// OptionController
struct  OptionController_t0BD28E24B9A14B7AC298371AC13CF6B73380ED9D  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// Pauser
struct  Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Behaviour[] Pauser::pauseBehavs
	BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* ___pauseBehavs_5;

public:
	inline static int32_t get_offset_of_pauseBehavs_5() { return static_cast<int32_t>(offsetof(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF, ___pauseBehavs_5)); }
	inline BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* get_pauseBehavs_5() const { return ___pauseBehavs_5; }
	inline BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0** get_address_of_pauseBehavs_5() { return &___pauseBehavs_5; }
	inline void set_pauseBehavs_5(BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* value)
	{
		___pauseBehavs_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___pauseBehavs_5), (void*)value);
	}
};

struct Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_StaticFields
{
public:
	// System.Collections.Generic.List`1<Pauser> Pauser::targets
	List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * ___targets_4;

public:
	inline static int32_t get_offset_of_targets_4() { return static_cast<int32_t>(offsetof(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_StaticFields, ___targets_4)); }
	inline List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * get_targets_4() const { return ___targets_4; }
	inline List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 ** get_address_of_targets_4() { return &___targets_4; }
	inline void set_targets_4(List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * value)
	{
		___targets_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targets_4), (void*)value);
	}
};


// PlayerController
struct  PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerController::cooldownTime
	float ___cooldownTime_5;
	// System.Single PlayerController::cooldown
	float ___cooldown_6;
	// System.Int32 PlayerController::team
	int32_t ___team_7;
	// System.Int32 PlayerController::pattern
	int32_t ___pattern_8;
	// UnityEngine.GameObject PlayerController::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_9;
	// UnityEngine.GameObject PlayerController::effect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___effect_10;
	// UnityEngine.GameObject PlayerController::effect2
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___effect2_11;
	// UnityEngine.GameObject PlayerController::turret
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___turret_12;
	// UnityEngine.GameObject PlayerController::bulleremover
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bulleremover_13;
	// UnityEngine.GameObject PlayerController::KOeffect
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___KOeffect_14;
	// UnityEngine.GameObject PlayerController::blackout
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___blackout_15;
	// UnityEngine.Vector2 PlayerController::start_pos
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___start_pos_16;
	// UnityEngine.Vector2 PlayerController::start_pos2
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___start_pos2_17;
	// UnityEngine.Rigidbody2D PlayerController::rb
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rb_18;
	// UnityEngine.Touch[] PlayerController::touches
	TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* ___touches_23;
	// System.Int32 PlayerController::untilRemoteAttack
	int32_t ___untilRemoteAttack_24;
	// System.Int32 PlayerController::RApattmp
	int32_t ___RApattmp_25;
	// BRController PlayerController::brcont
	BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * ___brcont_27;

public:
	inline static int32_t get_offset_of_cooldownTime_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___cooldownTime_5)); }
	inline float get_cooldownTime_5() const { return ___cooldownTime_5; }
	inline float* get_address_of_cooldownTime_5() { return &___cooldownTime_5; }
	inline void set_cooldownTime_5(float value)
	{
		___cooldownTime_5 = value;
	}

	inline static int32_t get_offset_of_cooldown_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___cooldown_6)); }
	inline float get_cooldown_6() const { return ___cooldown_6; }
	inline float* get_address_of_cooldown_6() { return &___cooldown_6; }
	inline void set_cooldown_6(float value)
	{
		___cooldown_6 = value;
	}

	inline static int32_t get_offset_of_team_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___team_7)); }
	inline int32_t get_team_7() const { return ___team_7; }
	inline int32_t* get_address_of_team_7() { return &___team_7; }
	inline void set_team_7(int32_t value)
	{
		___team_7 = value;
	}

	inline static int32_t get_offset_of_pattern_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___pattern_8)); }
	inline int32_t get_pattern_8() const { return ___pattern_8; }
	inline int32_t* get_address_of_pattern_8() { return &___pattern_8; }
	inline void set_pattern_8(int32_t value)
	{
		___pattern_8 = value;
	}

	inline static int32_t get_offset_of_bullet_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___bullet_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_9() const { return ___bullet_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_9() { return &___bullet_9; }
	inline void set_bullet_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_9), (void*)value);
	}

	inline static int32_t get_offset_of_effect_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___effect_10)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_effect_10() const { return ___effect_10; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_effect_10() { return &___effect_10; }
	inline void set_effect_10(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___effect_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effect_10), (void*)value);
	}

	inline static int32_t get_offset_of_effect2_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___effect2_11)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_effect2_11() const { return ___effect2_11; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_effect2_11() { return &___effect2_11; }
	inline void set_effect2_11(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___effect2_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___effect2_11), (void*)value);
	}

	inline static int32_t get_offset_of_turret_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___turret_12)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_turret_12() const { return ___turret_12; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_turret_12() { return &___turret_12; }
	inline void set_turret_12(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___turret_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___turret_12), (void*)value);
	}

	inline static int32_t get_offset_of_bulleremover_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___bulleremover_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bulleremover_13() const { return ___bulleremover_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bulleremover_13() { return &___bulleremover_13; }
	inline void set_bulleremover_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bulleremover_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bulleremover_13), (void*)value);
	}

	inline static int32_t get_offset_of_KOeffect_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___KOeffect_14)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_KOeffect_14() const { return ___KOeffect_14; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_KOeffect_14() { return &___KOeffect_14; }
	inline void set_KOeffect_14(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___KOeffect_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___KOeffect_14), (void*)value);
	}

	inline static int32_t get_offset_of_blackout_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___blackout_15)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_blackout_15() const { return ___blackout_15; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_blackout_15() { return &___blackout_15; }
	inline void set_blackout_15(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___blackout_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___blackout_15), (void*)value);
	}

	inline static int32_t get_offset_of_start_pos_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___start_pos_16)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_start_pos_16() const { return ___start_pos_16; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_start_pos_16() { return &___start_pos_16; }
	inline void set_start_pos_16(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___start_pos_16 = value;
	}

	inline static int32_t get_offset_of_start_pos2_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___start_pos2_17)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_start_pos2_17() const { return ___start_pos2_17; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_start_pos2_17() { return &___start_pos2_17; }
	inline void set_start_pos2_17(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___start_pos2_17 = value;
	}

	inline static int32_t get_offset_of_rb_18() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___rb_18)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rb_18() const { return ___rb_18; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rb_18() { return &___rb_18; }
	inline void set_rb_18(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rb_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rb_18), (void*)value);
	}

	inline static int32_t get_offset_of_touches_23() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___touches_23)); }
	inline TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* get_touches_23() const { return ___touches_23; }
	inline TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2** get_address_of_touches_23() { return &___touches_23; }
	inline void set_touches_23(TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* value)
	{
		___touches_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___touches_23), (void*)value);
	}

	inline static int32_t get_offset_of_untilRemoteAttack_24() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___untilRemoteAttack_24)); }
	inline int32_t get_untilRemoteAttack_24() const { return ___untilRemoteAttack_24; }
	inline int32_t* get_address_of_untilRemoteAttack_24() { return &___untilRemoteAttack_24; }
	inline void set_untilRemoteAttack_24(int32_t value)
	{
		___untilRemoteAttack_24 = value;
	}

	inline static int32_t get_offset_of_RApattmp_25() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___RApattmp_25)); }
	inline int32_t get_RApattmp_25() const { return ___RApattmp_25; }
	inline int32_t* get_address_of_RApattmp_25() { return &___RApattmp_25; }
	inline void set_RApattmp_25(int32_t value)
	{
		___RApattmp_25 = value;
	}

	inline static int32_t get_offset_of_brcont_27() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___brcont_27)); }
	inline BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * get_brcont_27() const { return ___brcont_27; }
	inline BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 ** get_address_of_brcont_27() { return &___brcont_27; }
	inline void set_brcont_27(BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * value)
	{
		___brcont_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___brcont_27), (void*)value);
	}
};

struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields
{
public:
	// System.Int32 PlayerController::Life
	int32_t ___Life_4;
	// System.Int32 PlayerController::exp
	int32_t ___exp_19;
	// System.Int32 PlayerController::lv
	int32_t ___lv_20;
	// System.Int32 PlayerController::score
	int32_t ___score_21;
	// System.Int32 PlayerController::necessaryexp
	int32_t ___necessaryexp_22;
	// System.Int32 PlayerController::RApattern
	int32_t ___RApattern_26;

public:
	inline static int32_t get_offset_of_Life_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___Life_4)); }
	inline int32_t get_Life_4() const { return ___Life_4; }
	inline int32_t* get_address_of_Life_4() { return &___Life_4; }
	inline void set_Life_4(int32_t value)
	{
		___Life_4 = value;
	}

	inline static int32_t get_offset_of_exp_19() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___exp_19)); }
	inline int32_t get_exp_19() const { return ___exp_19; }
	inline int32_t* get_address_of_exp_19() { return &___exp_19; }
	inline void set_exp_19(int32_t value)
	{
		___exp_19 = value;
	}

	inline static int32_t get_offset_of_lv_20() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___lv_20)); }
	inline int32_t get_lv_20() const { return ___lv_20; }
	inline int32_t* get_address_of_lv_20() { return &___lv_20; }
	inline void set_lv_20(int32_t value)
	{
		___lv_20 = value;
	}

	inline static int32_t get_offset_of_score_21() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___score_21)); }
	inline int32_t get_score_21() const { return ___score_21; }
	inline int32_t* get_address_of_score_21() { return &___score_21; }
	inline void set_score_21(int32_t value)
	{
		___score_21 = value;
	}

	inline static int32_t get_offset_of_necessaryexp_22() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___necessaryexp_22)); }
	inline int32_t get_necessaryexp_22() const { return ___necessaryexp_22; }
	inline int32_t* get_address_of_necessaryexp_22() { return &___necessaryexp_22; }
	inline void set_necessaryexp_22(int32_t value)
	{
		___necessaryexp_22 = value;
	}

	inline static int32_t get_offset_of_RApattern_26() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields, ___RApattern_26)); }
	inline int32_t get_RApattern_26() const { return ___RApattern_26; }
	inline int32_t* get_address_of_RApattern_26() { return &___RApattern_26; }
	inline void set_RApattern_26(int32_t value)
	{
		___RApattern_26 = value;
	}
};


// PooledObject
struct  PooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject> PooledObject::objectPool
	ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * ___objectPool_4;
	// System.Single PooledObject::time
	float ___time_5;

public:
	inline static int32_t get_offset_of_objectPool_4() { return static_cast<int32_t>(offsetof(PooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85, ___objectPool_4)); }
	inline ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * get_objectPool_4() const { return ___objectPool_4; }
	inline ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 ** get_address_of_objectPool_4() { return &___objectPool_4; }
	inline void set_objectPool_4(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * value)
	{
		___objectPool_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___objectPool_4), (void*)value);
	}

	inline static int32_t get_offset_of_time_5() { return static_cast<int32_t>(offsetof(PooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85, ___time_5)); }
	inline float get_time_5() const { return ___time_5; }
	inline float* get_address_of_time_5() { return &___time_5; }
	inline void set_time_5(float value)
	{
		___time_5 = value;
	}
};


// Rotation
struct  Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single Rotation::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// ScoreviewController
struct  ScoreviewController_tEC0D1A2735BE12AF54FB6289F73D7E67A29BBB93  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text ScoreviewController::Stext
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___Stext_4;

public:
	inline static int32_t get_offset_of_Stext_4() { return static_cast<int32_t>(offsetof(ScoreviewController_tEC0D1A2735BE12AF54FB6289F73D7E67A29BBB93, ___Stext_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_Stext_4() const { return ___Stext_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_Stext_4() { return &___Stext_4; }
	inline void set_Stext_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___Stext_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Stext_4), (void*)value);
	}
};


// TurretController
struct  TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TurretController::bullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___bullet_4;
	// UnityEngine.GameObject TurretController::Ebullet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___Ebullet_5;
	// System.Int32 TurretController::lifetime
	int32_t ___lifetime_6;
	// System.Int32 TurretController::pattern
	int32_t ___pattern_7;
	// System.Boolean TurretController::enemy
	bool ___enemy_8;

public:
	inline static int32_t get_offset_of_bullet_4() { return static_cast<int32_t>(offsetof(TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154, ___bullet_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_bullet_4() const { return ___bullet_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_bullet_4() { return &___bullet_4; }
	inline void set_bullet_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___bullet_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bullet_4), (void*)value);
	}

	inline static int32_t get_offset_of_Ebullet_5() { return static_cast<int32_t>(offsetof(TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154, ___Ebullet_5)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_Ebullet_5() const { return ___Ebullet_5; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_Ebullet_5() { return &___Ebullet_5; }
	inline void set_Ebullet_5(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___Ebullet_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Ebullet_5), (void*)value);
	}

	inline static int32_t get_offset_of_lifetime_6() { return static_cast<int32_t>(offsetof(TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154, ___lifetime_6)); }
	inline int32_t get_lifetime_6() const { return ___lifetime_6; }
	inline int32_t* get_address_of_lifetime_6() { return &___lifetime_6; }
	inline void set_lifetime_6(int32_t value)
	{
		___lifetime_6 = value;
	}

	inline static int32_t get_offset_of_pattern_7() { return static_cast<int32_t>(offsetof(TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154, ___pattern_7)); }
	inline int32_t get_pattern_7() const { return ___pattern_7; }
	inline int32_t* get_address_of_pattern_7() { return &___pattern_7; }
	inline void set_pattern_7(int32_t value)
	{
		___pattern_7 = value;
	}

	inline static int32_t get_offset_of_enemy_8() { return static_cast<int32_t>(offsetof(TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154, ___enemy_8)); }
	inline bool get_enemy_8() const { return ___enemy_8; }
	inline bool* get_address_of_enemy_8() { return &___enemy_8; }
	inline void set_enemy_8(bool value)
	{
		___enemy_8 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct  UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// WLSViewerController
struct  WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.UI.Text WLSViewerController::text
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___text_4;

public:
	inline static int32_t get_offset_of_text_4() { return static_cast<int32_t>(offsetof(WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997, ___text_4)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_text_4() const { return ___text_4; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_text_4() { return &___text_4; }
	inline void set_text_4(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___text_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_4), (void*)value);
	}
};


// type1
struct  type1_t46A08AF0AC40A46A1A13810AD7C4235E524B08BE  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single type1::speed
	float ___speed_4;
	// UnityEngine.Vector3 type1::Aspeed
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___Aspeed_7;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(type1_t46A08AF0AC40A46A1A13810AD7C4235E524B08BE, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_Aspeed_7() { return static_cast<int32_t>(offsetof(type1_t46A08AF0AC40A46A1A13810AD7C4235E524B08BE, ___Aspeed_7)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_Aspeed_7() const { return ___Aspeed_7; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_Aspeed_7() { return &___Aspeed_7; }
	inline void set_Aspeed_7(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___Aspeed_7 = value;
	}
};


// type1P2
struct  type1P2_t6C4385EBD0FA431E31FF590ACEC4EBBC65676C0F  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single type1P2::speed
	float ___speed_4;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(type1P2_t6C4385EBD0FA431E31FF590ACEC4EBBC65676C0F, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}
};


// UnityEngine.UI.Graphic
struct  Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::m_Material
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_Material_6;
	// UnityEngine.Color UnityEngine.UI.Graphic::m_Color
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___m_Color_7;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipLayoutUpdate
	bool ___m_SkipLayoutUpdate_8;
	// System.Boolean UnityEngine.UI.Graphic::m_SkipMaterialUpdate
	bool ___m_SkipMaterialUpdate_9;
	// System.Boolean UnityEngine.UI.Graphic::m_RaycastTarget
	bool ___m_RaycastTarget_10;
	// UnityEngine.Vector4 UnityEngine.UI.Graphic::m_RaycastPadding
	Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  ___m_RaycastPadding_11;
	// UnityEngine.RectTransform UnityEngine.UI.Graphic::m_RectTransform
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_RectTransform_12;
	// UnityEngine.CanvasRenderer UnityEngine.UI.Graphic::m_CanvasRenderer
	CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * ___m_CanvasRenderer_13;
	// UnityEngine.Canvas UnityEngine.UI.Graphic::m_Canvas
	Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * ___m_Canvas_14;
	// System.Boolean UnityEngine.UI.Graphic::m_VertsDirty
	bool ___m_VertsDirty_15;
	// System.Boolean UnityEngine.UI.Graphic::m_MaterialDirty
	bool ___m_MaterialDirty_16;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyLayoutCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyLayoutCallback_17;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyVertsCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyVertsCallback_18;
	// UnityEngine.Events.UnityAction UnityEngine.UI.Graphic::m_OnDirtyMaterialCallback
	UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * ___m_OnDirtyMaterialCallback_19;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::m_CachedMesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___m_CachedMesh_22;
	// UnityEngine.Vector2[] UnityEngine.UI.Graphic::m_CachedUvs
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___m_CachedUvs_23;
	// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween> UnityEngine.UI.Graphic::m_ColorTweenRunner
	TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * ___m_ColorTweenRunner_24;
	// System.Boolean UnityEngine.UI.Graphic::<useLegacyMeshGeneration>k__BackingField
	bool ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25;

public:
	inline static int32_t get_offset_of_m_Material_6() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Material_6)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_Material_6() const { return ___m_Material_6; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_Material_6() { return &___m_Material_6; }
	inline void set_m_Material_6(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_Material_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Material_6), (void*)value);
	}

	inline static int32_t get_offset_of_m_Color_7() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Color_7)); }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  get_m_Color_7() const { return ___m_Color_7; }
	inline Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * get_address_of_m_Color_7() { return &___m_Color_7; }
	inline void set_m_Color_7(Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  value)
	{
		___m_Color_7 = value;
	}

	inline static int32_t get_offset_of_m_SkipLayoutUpdate_8() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipLayoutUpdate_8)); }
	inline bool get_m_SkipLayoutUpdate_8() const { return ___m_SkipLayoutUpdate_8; }
	inline bool* get_address_of_m_SkipLayoutUpdate_8() { return &___m_SkipLayoutUpdate_8; }
	inline void set_m_SkipLayoutUpdate_8(bool value)
	{
		___m_SkipLayoutUpdate_8 = value;
	}

	inline static int32_t get_offset_of_m_SkipMaterialUpdate_9() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_SkipMaterialUpdate_9)); }
	inline bool get_m_SkipMaterialUpdate_9() const { return ___m_SkipMaterialUpdate_9; }
	inline bool* get_address_of_m_SkipMaterialUpdate_9() { return &___m_SkipMaterialUpdate_9; }
	inline void set_m_SkipMaterialUpdate_9(bool value)
	{
		___m_SkipMaterialUpdate_9 = value;
	}

	inline static int32_t get_offset_of_m_RaycastTarget_10() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastTarget_10)); }
	inline bool get_m_RaycastTarget_10() const { return ___m_RaycastTarget_10; }
	inline bool* get_address_of_m_RaycastTarget_10() { return &___m_RaycastTarget_10; }
	inline void set_m_RaycastTarget_10(bool value)
	{
		___m_RaycastTarget_10 = value;
	}

	inline static int32_t get_offset_of_m_RaycastPadding_11() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RaycastPadding_11)); }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  get_m_RaycastPadding_11() const { return ___m_RaycastPadding_11; }
	inline Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 * get_address_of_m_RaycastPadding_11() { return &___m_RaycastPadding_11; }
	inline void set_m_RaycastPadding_11(Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7  value)
	{
		___m_RaycastPadding_11 = value;
	}

	inline static int32_t get_offset_of_m_RectTransform_12() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_RectTransform_12)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_RectTransform_12() const { return ___m_RectTransform_12; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_RectTransform_12() { return &___m_RectTransform_12; }
	inline void set_m_RectTransform_12(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_RectTransform_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_RectTransform_12), (void*)value);
	}

	inline static int32_t get_offset_of_m_CanvasRenderer_13() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CanvasRenderer_13)); }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * get_m_CanvasRenderer_13() const { return ___m_CanvasRenderer_13; }
	inline CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E ** get_address_of_m_CanvasRenderer_13() { return &___m_CanvasRenderer_13; }
	inline void set_m_CanvasRenderer_13(CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E * value)
	{
		___m_CanvasRenderer_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasRenderer_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_Canvas_14() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_Canvas_14)); }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * get_m_Canvas_14() const { return ___m_Canvas_14; }
	inline Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA ** get_address_of_m_Canvas_14() { return &___m_Canvas_14; }
	inline void set_m_Canvas_14(Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA * value)
	{
		___m_Canvas_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Canvas_14), (void*)value);
	}

	inline static int32_t get_offset_of_m_VertsDirty_15() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_VertsDirty_15)); }
	inline bool get_m_VertsDirty_15() const { return ___m_VertsDirty_15; }
	inline bool* get_address_of_m_VertsDirty_15() { return &___m_VertsDirty_15; }
	inline void set_m_VertsDirty_15(bool value)
	{
		___m_VertsDirty_15 = value;
	}

	inline static int32_t get_offset_of_m_MaterialDirty_16() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_MaterialDirty_16)); }
	inline bool get_m_MaterialDirty_16() const { return ___m_MaterialDirty_16; }
	inline bool* get_address_of_m_MaterialDirty_16() { return &___m_MaterialDirty_16; }
	inline void set_m_MaterialDirty_16(bool value)
	{
		___m_MaterialDirty_16 = value;
	}

	inline static int32_t get_offset_of_m_OnDirtyLayoutCallback_17() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyLayoutCallback_17)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyLayoutCallback_17() const { return ___m_OnDirtyLayoutCallback_17; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyLayoutCallback_17() { return &___m_OnDirtyLayoutCallback_17; }
	inline void set_m_OnDirtyLayoutCallback_17(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyLayoutCallback_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyLayoutCallback_17), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyVertsCallback_18() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyVertsCallback_18)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyVertsCallback_18() const { return ___m_OnDirtyVertsCallback_18; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyVertsCallback_18() { return &___m_OnDirtyVertsCallback_18; }
	inline void set_m_OnDirtyVertsCallback_18(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyVertsCallback_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyVertsCallback_18), (void*)value);
	}

	inline static int32_t get_offset_of_m_OnDirtyMaterialCallback_19() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_OnDirtyMaterialCallback_19)); }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * get_m_OnDirtyMaterialCallback_19() const { return ___m_OnDirtyMaterialCallback_19; }
	inline UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 ** get_address_of_m_OnDirtyMaterialCallback_19() { return &___m_OnDirtyMaterialCallback_19; }
	inline void set_m_OnDirtyMaterialCallback_19(UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099 * value)
	{
		___m_OnDirtyMaterialCallback_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnDirtyMaterialCallback_19), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedMesh_22() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedMesh_22)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_m_CachedMesh_22() const { return ___m_CachedMesh_22; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_m_CachedMesh_22() { return &___m_CachedMesh_22; }
	inline void set_m_CachedMesh_22(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___m_CachedMesh_22 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedMesh_22), (void*)value);
	}

	inline static int32_t get_offset_of_m_CachedUvs_23() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_CachedUvs_23)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_m_CachedUvs_23() const { return ___m_CachedUvs_23; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_m_CachedUvs_23() { return &___m_CachedUvs_23; }
	inline void set_m_CachedUvs_23(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___m_CachedUvs_23 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CachedUvs_23), (void*)value);
	}

	inline static int32_t get_offset_of_m_ColorTweenRunner_24() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___m_ColorTweenRunner_24)); }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * get_m_ColorTweenRunner_24() const { return ___m_ColorTweenRunner_24; }
	inline TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 ** get_address_of_m_ColorTweenRunner_24() { return &___m_ColorTweenRunner_24; }
	inline void set_m_ColorTweenRunner_24(TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3 * value)
	{
		___m_ColorTweenRunner_24 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ColorTweenRunner_24), (void*)value);
	}

	inline static int32_t get_offset_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24, ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25)); }
	inline bool get_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() const { return ___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline bool* get_address_of_U3CuseLegacyMeshGenerationU3Ek__BackingField_25() { return &___U3CuseLegacyMeshGenerationU3Ek__BackingField_25; }
	inline void set_U3CuseLegacyMeshGenerationU3Ek__BackingField_25(bool value)
	{
		___U3CuseLegacyMeshGenerationU3Ek__BackingField_25 = value;
	}
};

struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Graphic::s_DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultUI_4;
	// UnityEngine.Texture2D UnityEngine.UI.Graphic::s_WhiteTexture
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___s_WhiteTexture_5;
	// UnityEngine.Mesh UnityEngine.UI.Graphic::s_Mesh
	Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * ___s_Mesh_20;
	// UnityEngine.UI.VertexHelper UnityEngine.UI.Graphic::s_VertexHelper
	VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * ___s_VertexHelper_21;

public:
	inline static int32_t get_offset_of_s_DefaultUI_4() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_DefaultUI_4)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultUI_4() const { return ___s_DefaultUI_4; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultUI_4() { return &___s_DefaultUI_4; }
	inline void set_s_DefaultUI_4(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultUI_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultUI_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_WhiteTexture_5() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_WhiteTexture_5)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_s_WhiteTexture_5() const { return ___s_WhiteTexture_5; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_s_WhiteTexture_5() { return &___s_WhiteTexture_5; }
	inline void set_s_WhiteTexture_5(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___s_WhiteTexture_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_WhiteTexture_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_Mesh_20() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_Mesh_20)); }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * get_s_Mesh_20() const { return ___s_Mesh_20; }
	inline Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 ** get_address_of_s_Mesh_20() { return &___s_Mesh_20; }
	inline void set_s_Mesh_20(Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6 * value)
	{
		___s_Mesh_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Mesh_20), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertexHelper_21() { return static_cast<int32_t>(offsetof(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24_StaticFields, ___s_VertexHelper_21)); }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * get_s_VertexHelper_21() const { return ___s_VertexHelper_21; }
	inline VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 ** get_address_of_s_VertexHelper_21() { return &___s_VertexHelper_21; }
	inline void set_s_VertexHelper_21(VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55 * value)
	{
		___s_VertexHelper_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertexHelper_21), (void*)value);
	}
};


// UnityEngine.UI.Selectable
struct  Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
{
public:
	// System.Boolean UnityEngine.UI.Selectable::m_EnableCalled
	bool ___m_EnableCalled_6;
	// UnityEngine.UI.Navigation UnityEngine.UI.Selectable::m_Navigation
	Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  ___m_Navigation_7;
	// UnityEngine.UI.Selectable/Transition UnityEngine.UI.Selectable::m_Transition
	int32_t ___m_Transition_8;
	// UnityEngine.UI.ColorBlock UnityEngine.UI.Selectable::m_Colors
	ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  ___m_Colors_9;
	// UnityEngine.UI.SpriteState UnityEngine.UI.Selectable::m_SpriteState
	SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  ___m_SpriteState_10;
	// UnityEngine.UI.AnimationTriggers UnityEngine.UI.Selectable::m_AnimationTriggers
	AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * ___m_AnimationTriggers_11;
	// System.Boolean UnityEngine.UI.Selectable::m_Interactable
	bool ___m_Interactable_12;
	// UnityEngine.UI.Graphic UnityEngine.UI.Selectable::m_TargetGraphic
	Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * ___m_TargetGraphic_13;
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
	List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * ___m_CanvasGroupCache_19;

public:
	inline static int32_t get_offset_of_m_EnableCalled_6() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_EnableCalled_6)); }
	inline bool get_m_EnableCalled_6() const { return ___m_EnableCalled_6; }
	inline bool* get_address_of_m_EnableCalled_6() { return &___m_EnableCalled_6; }
	inline void set_m_EnableCalled_6(bool value)
	{
		___m_EnableCalled_6 = value;
	}

	inline static int32_t get_offset_of_m_Navigation_7() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Navigation_7)); }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  get_m_Navigation_7() const { return ___m_Navigation_7; }
	inline Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A * get_address_of_m_Navigation_7() { return &___m_Navigation_7; }
	inline void set_m_Navigation_7(Navigation_t1CF0FFB22C0357CD64714FB7A40A275F899D363A  value)
	{
		___m_Navigation_7 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnUp_2), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnDown_3), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnLeft_4), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_Navigation_7))->___m_SelectOnRight_5), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_Transition_8() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Transition_8)); }
	inline int32_t get_m_Transition_8() const { return ___m_Transition_8; }
	inline int32_t* get_address_of_m_Transition_8() { return &___m_Transition_8; }
	inline void set_m_Transition_8(int32_t value)
	{
		___m_Transition_8 = value;
	}

	inline static int32_t get_offset_of_m_Colors_9() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Colors_9)); }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  get_m_Colors_9() const { return ___m_Colors_9; }
	inline ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955 * get_address_of_m_Colors_9() { return &___m_Colors_9; }
	inline void set_m_Colors_9(ColorBlock_t04DFBB97B4772D2E00FD17ED2E3E6590E6916955  value)
	{
		___m_Colors_9 = value;
	}

	inline static int32_t get_offset_of_m_SpriteState_10() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_SpriteState_10)); }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  get_m_SpriteState_10() const { return ___m_SpriteState_10; }
	inline SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E * get_address_of_m_SpriteState_10() { return &___m_SpriteState_10; }
	inline void set_m_SpriteState_10(SpriteState_t9024961148433175CE2F3D9E8E9239A8B1CAB15E  value)
	{
		___m_SpriteState_10 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_HighlightedSprite_0), (void*)NULL);
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_PressedSprite_1), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_SelectedSprite_2), (void*)NULL);
		#endif
		#if IL2CPP_ENABLE_STRICT_WRITE_BARRIERS
		Il2CppCodeGenWriteBarrier((void**)&(((&___m_SpriteState_10))->___m_DisabledSprite_3), (void*)NULL);
		#endif
	}

	inline static int32_t get_offset_of_m_AnimationTriggers_11() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_AnimationTriggers_11)); }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * get_m_AnimationTriggers_11() const { return ___m_AnimationTriggers_11; }
	inline AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 ** get_address_of_m_AnimationTriggers_11() { return &___m_AnimationTriggers_11; }
	inline void set_m_AnimationTriggers_11(AnimationTriggers_tF38CA7FA631709E096B57D732668D86081F44C11 * value)
	{
		___m_AnimationTriggers_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_AnimationTriggers_11), (void*)value);
	}

	inline static int32_t get_offset_of_m_Interactable_12() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_Interactable_12)); }
	inline bool get_m_Interactable_12() const { return ___m_Interactable_12; }
	inline bool* get_address_of_m_Interactable_12() { return &___m_Interactable_12; }
	inline void set_m_Interactable_12(bool value)
	{
		___m_Interactable_12 = value;
	}

	inline static int32_t get_offset_of_m_TargetGraphic_13() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_TargetGraphic_13)); }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * get_m_TargetGraphic_13() const { return ___m_TargetGraphic_13; }
	inline Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 ** get_address_of_m_TargetGraphic_13() { return &___m_TargetGraphic_13; }
	inline void set_m_TargetGraphic_13(Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24 * value)
	{
		___m_TargetGraphic_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TargetGraphic_13), (void*)value);
	}

	inline static int32_t get_offset_of_m_GroupsAllowInteraction_14() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_GroupsAllowInteraction_14)); }
	inline bool get_m_GroupsAllowInteraction_14() const { return ___m_GroupsAllowInteraction_14; }
	inline bool* get_address_of_m_GroupsAllowInteraction_14() { return &___m_GroupsAllowInteraction_14; }
	inline void set_m_GroupsAllowInteraction_14(bool value)
	{
		___m_GroupsAllowInteraction_14 = value;
	}

	inline static int32_t get_offset_of_m_CurrentIndex_15() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CurrentIndex_15)); }
	inline int32_t get_m_CurrentIndex_15() const { return ___m_CurrentIndex_15; }
	inline int32_t* get_address_of_m_CurrentIndex_15() { return &___m_CurrentIndex_15; }
	inline void set_m_CurrentIndex_15(int32_t value)
	{
		___m_CurrentIndex_15 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerInsideU3Ek__BackingField_16() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerInsideU3Ek__BackingField_16)); }
	inline bool get_U3CisPointerInsideU3Ek__BackingField_16() const { return ___U3CisPointerInsideU3Ek__BackingField_16; }
	inline bool* get_address_of_U3CisPointerInsideU3Ek__BackingField_16() { return &___U3CisPointerInsideU3Ek__BackingField_16; }
	inline void set_U3CisPointerInsideU3Ek__BackingField_16(bool value)
	{
		___U3CisPointerInsideU3Ek__BackingField_16 = value;
	}

	inline static int32_t get_offset_of_U3CisPointerDownU3Ek__BackingField_17() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3CisPointerDownU3Ek__BackingField_17)); }
	inline bool get_U3CisPointerDownU3Ek__BackingField_17() const { return ___U3CisPointerDownU3Ek__BackingField_17; }
	inline bool* get_address_of_U3CisPointerDownU3Ek__BackingField_17() { return &___U3CisPointerDownU3Ek__BackingField_17; }
	inline void set_U3CisPointerDownU3Ek__BackingField_17(bool value)
	{
		___U3CisPointerDownU3Ek__BackingField_17 = value;
	}

	inline static int32_t get_offset_of_U3ChasSelectionU3Ek__BackingField_18() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___U3ChasSelectionU3Ek__BackingField_18)); }
	inline bool get_U3ChasSelectionU3Ek__BackingField_18() const { return ___U3ChasSelectionU3Ek__BackingField_18; }
	inline bool* get_address_of_U3ChasSelectionU3Ek__BackingField_18() { return &___U3ChasSelectionU3Ek__BackingField_18; }
	inline void set_U3ChasSelectionU3Ek__BackingField_18(bool value)
	{
		___U3ChasSelectionU3Ek__BackingField_18 = value;
	}

	inline static int32_t get_offset_of_m_CanvasGroupCache_19() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD, ___m_CanvasGroupCache_19)); }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * get_m_CanvasGroupCache_19() const { return ___m_CanvasGroupCache_19; }
	inline List_1_t34AA4AF4E7352129CA58045901530E41445AC16D ** get_address_of_m_CanvasGroupCache_19() { return &___m_CanvasGroupCache_19; }
	inline void set_m_CanvasGroupCache_19(List_1_t34AA4AF4E7352129CA58045901530E41445AC16D * value)
	{
		___m_CanvasGroupCache_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_CanvasGroupCache_19), (void*)value);
	}
};

struct Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields
{
public:
	// UnityEngine.UI.Selectable[] UnityEngine.UI.Selectable::s_Selectables
	SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* ___s_Selectables_4;
	// System.Int32 UnityEngine.UI.Selectable::s_SelectableCount
	int32_t ___s_SelectableCount_5;

public:
	inline static int32_t get_offset_of_s_Selectables_4() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_Selectables_4)); }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* get_s_Selectables_4() const { return ___s_Selectables_4; }
	inline SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535** get_address_of_s_Selectables_4() { return &___s_Selectables_4; }
	inline void set_s_Selectables_4(SelectableU5BU5D_tECF9F5BDBF0652A937D18F10C883EFDAE2E62535* value)
	{
		___s_Selectables_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Selectables_4), (void*)value);
	}

	inline static int32_t get_offset_of_s_SelectableCount_5() { return static_cast<int32_t>(offsetof(Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD_StaticFields, ___s_SelectableCount_5)); }
	inline int32_t get_s_SelectableCount_5() const { return ___s_SelectableCount_5; }
	inline int32_t* get_address_of_s_SelectableCount_5() { return &___s_SelectableCount_5; }
	inline void set_s_SelectableCount_5(int32_t value)
	{
		___s_SelectableCount_5 = value;
	}
};


// UnityEngine.UI.Button
struct  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.UI.Button/ButtonClickedEvent UnityEngine.UI.Button::m_OnClick
	ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * ___m_OnClick_20;

public:
	inline static int32_t get_offset_of_m_OnClick_20() { return static_cast<int32_t>(offsetof(Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D, ___m_OnClick_20)); }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * get_m_OnClick_20() const { return ___m_OnClick_20; }
	inline ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F ** get_address_of_m_OnClick_20() { return &___m_OnClick_20; }
	inline void set_m_OnClick_20(ButtonClickedEvent_tE6D6D94ED8100451CF00D2BED1FB2253F37BB14F * value)
	{
		___m_OnClick_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnClick_20), (void*)value);
	}
};


// UnityEngine.UI.MaskableGraphic
struct  MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
{
public:
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculateStencil
	bool ___m_ShouldRecalculateStencil_26;
	// UnityEngine.Material UnityEngine.UI.MaskableGraphic::m_MaskMaterial
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___m_MaskMaterial_27;
	// UnityEngine.UI.RectMask2D UnityEngine.UI.MaskableGraphic::m_ParentMask
	RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * ___m_ParentMask_28;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_Maskable
	bool ___m_Maskable_29;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IsMaskingGraphic
	bool ___m_IsMaskingGraphic_30;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_IncludeForMasking
	bool ___m_IncludeForMasking_31;
	// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent UnityEngine.UI.MaskableGraphic::m_OnCullStateChanged
	CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * ___m_OnCullStateChanged_32;
	// System.Boolean UnityEngine.UI.MaskableGraphic::m_ShouldRecalculate
	bool ___m_ShouldRecalculate_33;
	// System.Int32 UnityEngine.UI.MaskableGraphic::m_StencilValue
	int32_t ___m_StencilValue_34;
	// UnityEngine.Vector3[] UnityEngine.UI.MaskableGraphic::m_Corners
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___m_Corners_35;

public:
	inline static int32_t get_offset_of_m_ShouldRecalculateStencil_26() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculateStencil_26)); }
	inline bool get_m_ShouldRecalculateStencil_26() const { return ___m_ShouldRecalculateStencil_26; }
	inline bool* get_address_of_m_ShouldRecalculateStencil_26() { return &___m_ShouldRecalculateStencil_26; }
	inline void set_m_ShouldRecalculateStencil_26(bool value)
	{
		___m_ShouldRecalculateStencil_26 = value;
	}

	inline static int32_t get_offset_of_m_MaskMaterial_27() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_MaskMaterial_27)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_m_MaskMaterial_27() const { return ___m_MaskMaterial_27; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_m_MaskMaterial_27() { return &___m_MaskMaterial_27; }
	inline void set_m_MaskMaterial_27(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___m_MaskMaterial_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_MaskMaterial_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_ParentMask_28() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ParentMask_28)); }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * get_m_ParentMask_28() const { return ___m_ParentMask_28; }
	inline RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 ** get_address_of_m_ParentMask_28() { return &___m_ParentMask_28; }
	inline void set_m_ParentMask_28(RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15 * value)
	{
		___m_ParentMask_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ParentMask_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_Maskable_29() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Maskable_29)); }
	inline bool get_m_Maskable_29() const { return ___m_Maskable_29; }
	inline bool* get_address_of_m_Maskable_29() { return &___m_Maskable_29; }
	inline void set_m_Maskable_29(bool value)
	{
		___m_Maskable_29 = value;
	}

	inline static int32_t get_offset_of_m_IsMaskingGraphic_30() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IsMaskingGraphic_30)); }
	inline bool get_m_IsMaskingGraphic_30() const { return ___m_IsMaskingGraphic_30; }
	inline bool* get_address_of_m_IsMaskingGraphic_30() { return &___m_IsMaskingGraphic_30; }
	inline void set_m_IsMaskingGraphic_30(bool value)
	{
		___m_IsMaskingGraphic_30 = value;
	}

	inline static int32_t get_offset_of_m_IncludeForMasking_31() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_IncludeForMasking_31)); }
	inline bool get_m_IncludeForMasking_31() const { return ___m_IncludeForMasking_31; }
	inline bool* get_address_of_m_IncludeForMasking_31() { return &___m_IncludeForMasking_31; }
	inline void set_m_IncludeForMasking_31(bool value)
	{
		___m_IncludeForMasking_31 = value;
	}

	inline static int32_t get_offset_of_m_OnCullStateChanged_32() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_OnCullStateChanged_32)); }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * get_m_OnCullStateChanged_32() const { return ___m_OnCullStateChanged_32; }
	inline CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 ** get_address_of_m_OnCullStateChanged_32() { return &___m_OnCullStateChanged_32; }
	inline void set_m_OnCullStateChanged_32(CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4 * value)
	{
		___m_OnCullStateChanged_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnCullStateChanged_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_ShouldRecalculate_33() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_ShouldRecalculate_33)); }
	inline bool get_m_ShouldRecalculate_33() const { return ___m_ShouldRecalculate_33; }
	inline bool* get_address_of_m_ShouldRecalculate_33() { return &___m_ShouldRecalculate_33; }
	inline void set_m_ShouldRecalculate_33(bool value)
	{
		___m_ShouldRecalculate_33 = value;
	}

	inline static int32_t get_offset_of_m_StencilValue_34() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_StencilValue_34)); }
	inline int32_t get_m_StencilValue_34() const { return ___m_StencilValue_34; }
	inline int32_t* get_address_of_m_StencilValue_34() { return &___m_StencilValue_34; }
	inline void set_m_StencilValue_34(int32_t value)
	{
		___m_StencilValue_34 = value;
	}

	inline static int32_t get_offset_of_m_Corners_35() { return static_cast<int32_t>(offsetof(MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE, ___m_Corners_35)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_m_Corners_35() const { return ___m_Corners_35; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_m_Corners_35() { return &___m_Corners_35; }
	inline void set_m_Corners_35(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___m_Corners_35 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Corners_35), (void*)value);
	}
};


// UnityEngine.UI.Slider
struct  Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A  : public Selectable_t34088A3677CC9D344F81B0D91999D8C5963D7DBD
{
public:
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillRect_20;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleRect_21;
	// UnityEngine.UI.Slider/Direction UnityEngine.UI.Slider::m_Direction
	int32_t ___m_Direction_22;
	// System.Single UnityEngine.UI.Slider::m_MinValue
	float ___m_MinValue_23;
	// System.Single UnityEngine.UI.Slider::m_MaxValue
	float ___m_MaxValue_24;
	// System.Boolean UnityEngine.UI.Slider::m_WholeNumbers
	bool ___m_WholeNumbers_25;
	// System.Single UnityEngine.UI.Slider::m_Value
	float ___m_Value_26;
	// UnityEngine.UI.Slider/SliderEvent UnityEngine.UI.Slider::m_OnValueChanged
	SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * ___m_OnValueChanged_27;
	// UnityEngine.UI.Image UnityEngine.UI.Slider::m_FillImage
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___m_FillImage_28;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_FillTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_FillTransform_29;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_FillContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_FillContainerRect_30;
	// UnityEngine.Transform UnityEngine.UI.Slider::m_HandleTransform
	Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * ___m_HandleTransform_31;
	// UnityEngine.RectTransform UnityEngine.UI.Slider::m_HandleContainerRect
	RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * ___m_HandleContainerRect_32;
	// UnityEngine.Vector2 UnityEngine.UI.Slider::m_Offset
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Offset_33;
	// UnityEngine.DrivenRectTransformTracker UnityEngine.UI.Slider::m_Tracker
	DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  ___m_Tracker_34;
	// System.Boolean UnityEngine.UI.Slider::m_DelayedUpdateVisuals
	bool ___m_DelayedUpdateVisuals_35;

public:
	inline static int32_t get_offset_of_m_FillRect_20() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillRect_20)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillRect_20() const { return ___m_FillRect_20; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillRect_20() { return &___m_FillRect_20; }
	inline void set_m_FillRect_20(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillRect_20 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillRect_20), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleRect_21() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleRect_21)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleRect_21() const { return ___m_HandleRect_21; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleRect_21() { return &___m_HandleRect_21; }
	inline void set_m_HandleRect_21(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleRect_21 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleRect_21), (void*)value);
	}

	inline static int32_t get_offset_of_m_Direction_22() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Direction_22)); }
	inline int32_t get_m_Direction_22() const { return ___m_Direction_22; }
	inline int32_t* get_address_of_m_Direction_22() { return &___m_Direction_22; }
	inline void set_m_Direction_22(int32_t value)
	{
		___m_Direction_22 = value;
	}

	inline static int32_t get_offset_of_m_MinValue_23() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MinValue_23)); }
	inline float get_m_MinValue_23() const { return ___m_MinValue_23; }
	inline float* get_address_of_m_MinValue_23() { return &___m_MinValue_23; }
	inline void set_m_MinValue_23(float value)
	{
		___m_MinValue_23 = value;
	}

	inline static int32_t get_offset_of_m_MaxValue_24() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_MaxValue_24)); }
	inline float get_m_MaxValue_24() const { return ___m_MaxValue_24; }
	inline float* get_address_of_m_MaxValue_24() { return &___m_MaxValue_24; }
	inline void set_m_MaxValue_24(float value)
	{
		___m_MaxValue_24 = value;
	}

	inline static int32_t get_offset_of_m_WholeNumbers_25() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_WholeNumbers_25)); }
	inline bool get_m_WholeNumbers_25() const { return ___m_WholeNumbers_25; }
	inline bool* get_address_of_m_WholeNumbers_25() { return &___m_WholeNumbers_25; }
	inline void set_m_WholeNumbers_25(bool value)
	{
		___m_WholeNumbers_25 = value;
	}

	inline static int32_t get_offset_of_m_Value_26() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Value_26)); }
	inline float get_m_Value_26() const { return ___m_Value_26; }
	inline float* get_address_of_m_Value_26() { return &___m_Value_26; }
	inline void set_m_Value_26(float value)
	{
		___m_Value_26 = value;
	}

	inline static int32_t get_offset_of_m_OnValueChanged_27() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_OnValueChanged_27)); }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * get_m_OnValueChanged_27() const { return ___m_OnValueChanged_27; }
	inline SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 ** get_address_of_m_OnValueChanged_27() { return &___m_OnValueChanged_27; }
	inline void set_m_OnValueChanged_27(SliderEvent_t312D89AE02E00DD965D68D6F7F813BDF455FD780 * value)
	{
		___m_OnValueChanged_27 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OnValueChanged_27), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillImage_28() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillImage_28)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_m_FillImage_28() const { return ___m_FillImage_28; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_m_FillImage_28() { return &___m_FillImage_28; }
	inline void set_m_FillImage_28(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___m_FillImage_28 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillImage_28), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillTransform_29() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillTransform_29)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_FillTransform_29() const { return ___m_FillTransform_29; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_FillTransform_29() { return &___m_FillTransform_29; }
	inline void set_m_FillTransform_29(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_FillTransform_29 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillTransform_29), (void*)value);
	}

	inline static int32_t get_offset_of_m_FillContainerRect_30() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_FillContainerRect_30)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_FillContainerRect_30() const { return ___m_FillContainerRect_30; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_FillContainerRect_30() { return &___m_FillContainerRect_30; }
	inline void set_m_FillContainerRect_30(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_FillContainerRect_30 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FillContainerRect_30), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleTransform_31() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleTransform_31)); }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * get_m_HandleTransform_31() const { return ___m_HandleTransform_31; }
	inline Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 ** get_address_of_m_HandleTransform_31() { return &___m_HandleTransform_31; }
	inline void set_m_HandleTransform_31(Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * value)
	{
		___m_HandleTransform_31 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleTransform_31), (void*)value);
	}

	inline static int32_t get_offset_of_m_HandleContainerRect_32() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_HandleContainerRect_32)); }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * get_m_HandleContainerRect_32() const { return ___m_HandleContainerRect_32; }
	inline RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 ** get_address_of_m_HandleContainerRect_32() { return &___m_HandleContainerRect_32; }
	inline void set_m_HandleContainerRect_32(RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072 * value)
	{
		___m_HandleContainerRect_32 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_HandleContainerRect_32), (void*)value);
	}

	inline static int32_t get_offset_of_m_Offset_33() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Offset_33)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Offset_33() const { return ___m_Offset_33; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Offset_33() { return &___m_Offset_33; }
	inline void set_m_Offset_33(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Offset_33 = value;
	}

	inline static int32_t get_offset_of_m_Tracker_34() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_Tracker_34)); }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  get_m_Tracker_34() const { return ___m_Tracker_34; }
	inline DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2 * get_address_of_m_Tracker_34() { return &___m_Tracker_34; }
	inline void set_m_Tracker_34(DrivenRectTransformTracker_t7DAF937E47C63B899C7BA0E9B0F206AAB4D85AC2  value)
	{
		___m_Tracker_34 = value;
	}

	inline static int32_t get_offset_of_m_DelayedUpdateVisuals_35() { return static_cast<int32_t>(offsetof(Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A, ___m_DelayedUpdateVisuals_35)); }
	inline bool get_m_DelayedUpdateVisuals_35() const { return ___m_DelayedUpdateVisuals_35; }
	inline bool* get_address_of_m_DelayedUpdateVisuals_35() { return &___m_DelayedUpdateVisuals_35; }
	inline void set_m_DelayedUpdateVisuals_35(bool value)
	{
		___m_DelayedUpdateVisuals_35 = value;
	}
};


// UnityEngine.UI.Image
struct  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.Sprite UnityEngine.UI.Image::m_Sprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_Sprite_37;
	// UnityEngine.Sprite UnityEngine.UI.Image::m_OverrideSprite
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___m_OverrideSprite_38;
	// UnityEngine.UI.Image/Type UnityEngine.UI.Image::m_Type
	int32_t ___m_Type_39;
	// System.Boolean UnityEngine.UI.Image::m_PreserveAspect
	bool ___m_PreserveAspect_40;
	// System.Boolean UnityEngine.UI.Image::m_FillCenter
	bool ___m_FillCenter_41;
	// UnityEngine.UI.Image/FillMethod UnityEngine.UI.Image::m_FillMethod
	int32_t ___m_FillMethod_42;
	// System.Single UnityEngine.UI.Image::m_FillAmount
	float ___m_FillAmount_43;
	// System.Boolean UnityEngine.UI.Image::m_FillClockwise
	bool ___m_FillClockwise_44;
	// System.Int32 UnityEngine.UI.Image::m_FillOrigin
	int32_t ___m_FillOrigin_45;
	// System.Single UnityEngine.UI.Image::m_AlphaHitTestMinimumThreshold
	float ___m_AlphaHitTestMinimumThreshold_46;
	// System.Boolean UnityEngine.UI.Image::m_Tracked
	bool ___m_Tracked_47;
	// System.Boolean UnityEngine.UI.Image::m_UseSpriteMesh
	bool ___m_UseSpriteMesh_48;
	// System.Single UnityEngine.UI.Image::m_PixelsPerUnitMultiplier
	float ___m_PixelsPerUnitMultiplier_49;
	// System.Single UnityEngine.UI.Image::m_CachedReferencePixelsPerUnit
	float ___m_CachedReferencePixelsPerUnit_50;

public:
	inline static int32_t get_offset_of_m_Sprite_37() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Sprite_37)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_Sprite_37() const { return ___m_Sprite_37; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_Sprite_37() { return &___m_Sprite_37; }
	inline void set_m_Sprite_37(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_Sprite_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Sprite_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_OverrideSprite_38() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_OverrideSprite_38)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_m_OverrideSprite_38() const { return ___m_OverrideSprite_38; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_m_OverrideSprite_38() { return &___m_OverrideSprite_38; }
	inline void set_m_OverrideSprite_38(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___m_OverrideSprite_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_OverrideSprite_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_Type_39() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Type_39)); }
	inline int32_t get_m_Type_39() const { return ___m_Type_39; }
	inline int32_t* get_address_of_m_Type_39() { return &___m_Type_39; }
	inline void set_m_Type_39(int32_t value)
	{
		___m_Type_39 = value;
	}

	inline static int32_t get_offset_of_m_PreserveAspect_40() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PreserveAspect_40)); }
	inline bool get_m_PreserveAspect_40() const { return ___m_PreserveAspect_40; }
	inline bool* get_address_of_m_PreserveAspect_40() { return &___m_PreserveAspect_40; }
	inline void set_m_PreserveAspect_40(bool value)
	{
		___m_PreserveAspect_40 = value;
	}

	inline static int32_t get_offset_of_m_FillCenter_41() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillCenter_41)); }
	inline bool get_m_FillCenter_41() const { return ___m_FillCenter_41; }
	inline bool* get_address_of_m_FillCenter_41() { return &___m_FillCenter_41; }
	inline void set_m_FillCenter_41(bool value)
	{
		___m_FillCenter_41 = value;
	}

	inline static int32_t get_offset_of_m_FillMethod_42() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillMethod_42)); }
	inline int32_t get_m_FillMethod_42() const { return ___m_FillMethod_42; }
	inline int32_t* get_address_of_m_FillMethod_42() { return &___m_FillMethod_42; }
	inline void set_m_FillMethod_42(int32_t value)
	{
		___m_FillMethod_42 = value;
	}

	inline static int32_t get_offset_of_m_FillAmount_43() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillAmount_43)); }
	inline float get_m_FillAmount_43() const { return ___m_FillAmount_43; }
	inline float* get_address_of_m_FillAmount_43() { return &___m_FillAmount_43; }
	inline void set_m_FillAmount_43(float value)
	{
		___m_FillAmount_43 = value;
	}

	inline static int32_t get_offset_of_m_FillClockwise_44() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillClockwise_44)); }
	inline bool get_m_FillClockwise_44() const { return ___m_FillClockwise_44; }
	inline bool* get_address_of_m_FillClockwise_44() { return &___m_FillClockwise_44; }
	inline void set_m_FillClockwise_44(bool value)
	{
		___m_FillClockwise_44 = value;
	}

	inline static int32_t get_offset_of_m_FillOrigin_45() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_FillOrigin_45)); }
	inline int32_t get_m_FillOrigin_45() const { return ___m_FillOrigin_45; }
	inline int32_t* get_address_of_m_FillOrigin_45() { return &___m_FillOrigin_45; }
	inline void set_m_FillOrigin_45(int32_t value)
	{
		___m_FillOrigin_45 = value;
	}

	inline static int32_t get_offset_of_m_AlphaHitTestMinimumThreshold_46() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_AlphaHitTestMinimumThreshold_46)); }
	inline float get_m_AlphaHitTestMinimumThreshold_46() const { return ___m_AlphaHitTestMinimumThreshold_46; }
	inline float* get_address_of_m_AlphaHitTestMinimumThreshold_46() { return &___m_AlphaHitTestMinimumThreshold_46; }
	inline void set_m_AlphaHitTestMinimumThreshold_46(float value)
	{
		___m_AlphaHitTestMinimumThreshold_46 = value;
	}

	inline static int32_t get_offset_of_m_Tracked_47() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_Tracked_47)); }
	inline bool get_m_Tracked_47() const { return ___m_Tracked_47; }
	inline bool* get_address_of_m_Tracked_47() { return &___m_Tracked_47; }
	inline void set_m_Tracked_47(bool value)
	{
		___m_Tracked_47 = value;
	}

	inline static int32_t get_offset_of_m_UseSpriteMesh_48() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_UseSpriteMesh_48)); }
	inline bool get_m_UseSpriteMesh_48() const { return ___m_UseSpriteMesh_48; }
	inline bool* get_address_of_m_UseSpriteMesh_48() { return &___m_UseSpriteMesh_48; }
	inline void set_m_UseSpriteMesh_48(bool value)
	{
		___m_UseSpriteMesh_48 = value;
	}

	inline static int32_t get_offset_of_m_PixelsPerUnitMultiplier_49() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_PixelsPerUnitMultiplier_49)); }
	inline float get_m_PixelsPerUnitMultiplier_49() const { return ___m_PixelsPerUnitMultiplier_49; }
	inline float* get_address_of_m_PixelsPerUnitMultiplier_49() { return &___m_PixelsPerUnitMultiplier_49; }
	inline void set_m_PixelsPerUnitMultiplier_49(float value)
	{
		___m_PixelsPerUnitMultiplier_49 = value;
	}

	inline static int32_t get_offset_of_m_CachedReferencePixelsPerUnit_50() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C, ___m_CachedReferencePixelsPerUnit_50)); }
	inline float get_m_CachedReferencePixelsPerUnit_50() const { return ___m_CachedReferencePixelsPerUnit_50; }
	inline float* get_address_of_m_CachedReferencePixelsPerUnit_50() { return &___m_CachedReferencePixelsPerUnit_50; }
	inline void set_m_CachedReferencePixelsPerUnit_50(float value)
	{
		___m_CachedReferencePixelsPerUnit_50 = value;
	}
};

struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Image::s_ETC1DefaultUI
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_ETC1DefaultUI_36;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_VertScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_VertScratch_51;
	// UnityEngine.Vector2[] UnityEngine.UI.Image::s_UVScratch
	Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* ___s_UVScratch_52;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Xy
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Xy_53;
	// UnityEngine.Vector3[] UnityEngine.UI.Image::s_Uv
	Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* ___s_Uv_54;
	// System.Collections.Generic.List`1<UnityEngine.UI.Image> UnityEngine.UI.Image::m_TrackedTexturelessImages
	List_1_t815A476B0A21E183042059E705F9E505478CD8AE * ___m_TrackedTexturelessImages_55;
	// System.Boolean UnityEngine.UI.Image::s_Initialized
	bool ___s_Initialized_56;

public:
	inline static int32_t get_offset_of_s_ETC1DefaultUI_36() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_ETC1DefaultUI_36)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_ETC1DefaultUI_36() const { return ___s_ETC1DefaultUI_36; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_ETC1DefaultUI_36() { return &___s_ETC1DefaultUI_36; }
	inline void set_s_ETC1DefaultUI_36(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_ETC1DefaultUI_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_ETC1DefaultUI_36), (void*)value);
	}

	inline static int32_t get_offset_of_s_VertScratch_51() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_VertScratch_51)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_VertScratch_51() const { return ___s_VertScratch_51; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_VertScratch_51() { return &___s_VertScratch_51; }
	inline void set_s_VertScratch_51(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_VertScratch_51 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_VertScratch_51), (void*)value);
	}

	inline static int32_t get_offset_of_s_UVScratch_52() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_UVScratch_52)); }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* get_s_UVScratch_52() const { return ___s_UVScratch_52; }
	inline Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA** get_address_of_s_UVScratch_52() { return &___s_UVScratch_52; }
	inline void set_s_UVScratch_52(Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA* value)
	{
		___s_UVScratch_52 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_UVScratch_52), (void*)value);
	}

	inline static int32_t get_offset_of_s_Xy_53() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Xy_53)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Xy_53() const { return ___s_Xy_53; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Xy_53() { return &___s_Xy_53; }
	inline void set_s_Xy_53(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Xy_53 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Xy_53), (void*)value);
	}

	inline static int32_t get_offset_of_s_Uv_54() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Uv_54)); }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* get_s_Uv_54() const { return ___s_Uv_54; }
	inline Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4** get_address_of_s_Uv_54() { return &___s_Uv_54; }
	inline void set_s_Uv_54(Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4* value)
	{
		___s_Uv_54 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Uv_54), (void*)value);
	}

	inline static int32_t get_offset_of_m_TrackedTexturelessImages_55() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___m_TrackedTexturelessImages_55)); }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE * get_m_TrackedTexturelessImages_55() const { return ___m_TrackedTexturelessImages_55; }
	inline List_1_t815A476B0A21E183042059E705F9E505478CD8AE ** get_address_of_m_TrackedTexturelessImages_55() { return &___m_TrackedTexturelessImages_55; }
	inline void set_m_TrackedTexturelessImages_55(List_1_t815A476B0A21E183042059E705F9E505478CD8AE * value)
	{
		___m_TrackedTexturelessImages_55 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TrackedTexturelessImages_55), (void*)value);
	}

	inline static int32_t get_offset_of_s_Initialized_56() { return static_cast<int32_t>(offsetof(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_StaticFields, ___s_Initialized_56)); }
	inline bool get_s_Initialized_56() const { return ___s_Initialized_56; }
	inline bool* get_address_of_s_Initialized_56() { return &___s_Initialized_56; }
	inline void set_s_Initialized_56(bool value)
	{
		___s_Initialized_56 = value;
	}
};


// UnityEngine.UI.Text
struct  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
{
public:
	// UnityEngine.UI.FontData UnityEngine.UI.Text::m_FontData
	FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * ___m_FontData_36;
	// System.String UnityEngine.UI.Text::m_Text
	String_t* ___m_Text_37;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCache
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCache_38;
	// UnityEngine.TextGenerator UnityEngine.UI.Text::m_TextCacheForLayout
	TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * ___m_TextCacheForLayout_39;
	// System.Boolean UnityEngine.UI.Text::m_DisableFontTextureRebuiltCallback
	bool ___m_DisableFontTextureRebuiltCallback_41;
	// UnityEngine.UIVertex[] UnityEngine.UI.Text::m_TempVerts
	UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* ___m_TempVerts_42;

public:
	inline static int32_t get_offset_of_m_FontData_36() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_FontData_36)); }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * get_m_FontData_36() const { return ___m_FontData_36; }
	inline FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 ** get_address_of_m_FontData_36() { return &___m_FontData_36; }
	inline void set_m_FontData_36(FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738 * value)
	{
		___m_FontData_36 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_FontData_36), (void*)value);
	}

	inline static int32_t get_offset_of_m_Text_37() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_Text_37)); }
	inline String_t* get_m_Text_37() const { return ___m_Text_37; }
	inline String_t** get_address_of_m_Text_37() { return &___m_Text_37; }
	inline void set_m_Text_37(String_t* value)
	{
		___m_Text_37 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Text_37), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCache_38() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCache_38)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCache_38() const { return ___m_TextCache_38; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCache_38() { return &___m_TextCache_38; }
	inline void set_m_TextCache_38(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCache_38 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCache_38), (void*)value);
	}

	inline static int32_t get_offset_of_m_TextCacheForLayout_39() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TextCacheForLayout_39)); }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * get_m_TextCacheForLayout_39() const { return ___m_TextCacheForLayout_39; }
	inline TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 ** get_address_of_m_TextCacheForLayout_39() { return &___m_TextCacheForLayout_39; }
	inline void set_m_TextCacheForLayout_39(TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70 * value)
	{
		___m_TextCacheForLayout_39 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TextCacheForLayout_39), (void*)value);
	}

	inline static int32_t get_offset_of_m_DisableFontTextureRebuiltCallback_41() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_DisableFontTextureRebuiltCallback_41)); }
	inline bool get_m_DisableFontTextureRebuiltCallback_41() const { return ___m_DisableFontTextureRebuiltCallback_41; }
	inline bool* get_address_of_m_DisableFontTextureRebuiltCallback_41() { return &___m_DisableFontTextureRebuiltCallback_41; }
	inline void set_m_DisableFontTextureRebuiltCallback_41(bool value)
	{
		___m_DisableFontTextureRebuiltCallback_41 = value;
	}

	inline static int32_t get_offset_of_m_TempVerts_42() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1, ___m_TempVerts_42)); }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* get_m_TempVerts_42() const { return ___m_TempVerts_42; }
	inline UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A** get_address_of_m_TempVerts_42() { return &___m_TempVerts_42; }
	inline void set_m_TempVerts_42(UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A* value)
	{
		___m_TempVerts_42 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_TempVerts_42), (void*)value);
	}
};

struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields
{
public:
	// UnityEngine.Material UnityEngine.UI.Text::s_DefaultText
	Material_t8927C00353A72755313F046D0CE85178AE8218EE * ___s_DefaultText_40;

public:
	inline static int32_t get_offset_of_s_DefaultText_40() { return static_cast<int32_t>(offsetof(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_StaticFields, ___s_DefaultText_40)); }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE * get_s_DefaultText_40() const { return ___s_DefaultText_40; }
	inline Material_t8927C00353A72755313F046D0CE85178AE8218EE ** get_address_of_s_DefaultText_40() { return &___s_DefaultText_40; }
	inline void set_s_DefaultText_40(Material_t8927C00353A72755313F046D0CE85178AE8218EE * value)
	{
		___s_DefaultText_40 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DefaultText_40), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
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
// System.Single[][]
struct SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* m_Items[1];

public:
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Single[][][]
struct SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* m_Items[1];

public:
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioClip[]
struct AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * m_Items[1];

public:
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AudioSource[]
struct AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * m_Items[1];

public:
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.GUILayoutOption[]
struct GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * m_Items[1];

public:
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Behaviour[]
struct BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * m_Items[1];

public:
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// Pauser[]
struct PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * m_Items[1];

public:
	inline Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Touch[]
struct TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  m_Items[1];

public:
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Object>::get_Count()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1<System.Object>::get_Item(System.Int32)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::RemoveAt(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::set_Item(System.Int32,!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_set_Item_m72B622AD9BAEA821ED4FE737B1474CA1EABA4AEB_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, RuntimeObject * ___value1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponents<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponents_TisRuntimeObject_mF5B6A7B6939273724F267FB1614ADEB5A0E8FACF_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void System.Func`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared (Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void System.Action`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared (Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// System.Void UnityEngine.Pool.ObjectPool`1<System.Object>::.ctor(System.Func`1<!0>,System.Action`1<!0>,System.Action`1<!0>,System.Action`1<!0>,System.Boolean,System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1__ctor_mC61F796A3BC17AF31A891E89DCB36AEBF32D125A_gshared (ObjectPool_1_tB184F1C1F7B7CB8372978E5260C25127A841BACB * __this, Func_1_t807CEE610086E24A0167BAA97A64062016E09D49 * ___createFunc0, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___actionOnGet1, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___actionOnRelease2, Action_1_tD9663D9715FAA4E62035CFCF1AD4D094EE7872DC * ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method);
// !0 UnityEngine.Pool.ObjectPool`1<System.Object>::Get()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * ObjectPool_1_Get_m722E04FEA1E8B2782FD34DA8CF4DA63165DD20FD_gshared (ObjectPool_1_tB184F1C1F7B7CB8372978E5260C25127A841BACB * __this, const RuntimeMethod* method);
// System.Int32 UnityEngine.Pool.ObjectPool`1<System.Object>::get_CountInactive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountInactive_mC92CB23F49C5A34F9864EF1C7AA79A7A4D62D2C8_gshared (ObjectPool_1_tB184F1C1F7B7CB8372978E5260C25127A841BACB * __this, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline (const RuntimeMethod* method);
// System.Int32 UnityEngine.Pool.ObjectPool`1<System.Object>::get_CountActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t ObjectPool_1_get_CountActive_mE6BA0A1B274218EB4FD80C000619FAF552D4ED4E_gshared (ObjectPool_1_tB184F1C1F7B7CB8372978E5260C25127A841BACB * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<System.Object>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Object_Instantiate_TisRuntimeObject_m02BDA2BE9BA7A8D6BB8554AE3E32ED6EF05EDC0C_gshared (RuntimeObject * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1<System.Object>::Remove(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool List_1_Remove_mC8FCB6A53C017A6C13FC891B6BB1D78F9A77D5E3_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !!0[] UnityEngine.Component::GetComponentsInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Component_GetComponentsInChildren_TisRuntimeObject_m254067D66B75073E897E989B5E670C194AFA7621_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Predicate`1<System.Object>::.ctor(System.Object,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared (Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method);
// !!0[] System.Array::FindAll<System.Object>(!!0[],System.Predicate`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_FindAll_TisRuntimeObject_m0EDF6CEF376D4BE3204334059FA0F22AD6A42C0D_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___array0, Predicate_1_t5C96B81B31A697B11C4C3767E3298773AF25DFEB * ___match1, const RuntimeMethod* method);
// !!0[] UnityEngine.Object::FindObjectsOfType<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Object_FindObjectsOfType_TisRuntimeObject_m3A432305B0F99DFE33069276B3907E866E847A1F_gshared (const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6  List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Pool.ObjectPool`1<System.Object>::Release(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjectPool_1_Release_m84ECF5F605782B8B3EA7F854C957664D23FCF23C_gshared (ObjectPool_1_tB184F1C1F7B7CB8372978E5260C25127A841BACB * __this, RuntimeObject * ___element0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Clear()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method);

// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Int32 UnityEngine.Random::Range(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A (int32_t ___minInclusive0, int32_t ___maxExclusive1, const RuntimeMethod* method);
// System.Void Astar::getgoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Astar_getgoal_m20D12F5E46161A717DA28414A87F76E1F6B73DB0 (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, const RuntimeMethod* method);
// System.Int32 System.Collections.Generic.List`1<System.Single[]>::get_Count()
inline int32_t List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, const RuntimeMethod*))List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline)(__this, method);
}
// !0 System.Collections.Generic.List`1<System.Single[]>::get_Item(System.Int32)
inline SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	return ((  SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, int32_t, const RuntimeMethod*))List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline)(__this, ___index0, method);
}
// System.Collections.IEnumerator Astar::A_star2(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Astar_A_star2_mE2F64652B0310D2823826AD8BD0E23967F3A5B4B (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___start0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___goal1, const RuntimeMethod* method);
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.Collections.IEnumerator)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, RuntimeObject* ___routine0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.Component::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Single[] Astar::changexy(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Astar_changexy_mCD4D9864FF4081B5EBBDE4B1910F78332290F5F6 (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Single[] Astar::changetruexy(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Astar_changetruexy_mF9D316369ADEEA1887845A710CFFF332B49EE62D (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___xy0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::MovePosition(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___position0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single[]>::RemoveAt(System.Int32)
inline void List_1_RemoveAt_mDE29BD2B07640990225575EB7570EEC9B34BB428 (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, int32_t, const RuntimeMethod*))List_1_RemoveAt_m66148860899ECCAE9B323372032BFC1C255393D2_gshared)(__this, ___index0, method);
}
// System.Void System.Collections.Generic.List`1<System.Single[]>::set_Item(System.Int32,!0)
inline void List_1_set_Item_mAA1DAA1B773B221ABFB460AE7292E40D8BD9BBB2 (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, int32_t ___index0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___value1, const RuntimeMethod* method)
{
	((  void (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, int32_t, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))List_1_set_Item_m72B622AD9BAEA821ED4FE737B1474CA1EABA4AEB_gshared)(__this, ___index0, ___value1, method);
}
// System.Void Astar/<A_star2>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CA_star2U3Ed__21__ctor_m346058880E4547F91C4DA19C89FA2C9BD0930A71 (U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single[]>::.ctor()
inline void List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64 (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// !!0[] UnityEngine.Component::GetComponents<UnityEngine.AudioSource>()
inline AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9487BA5B24D476E0432A04A8BACF40AE30D9B972 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponents_TisRuntimeObject_mF5B6A7B6939273724F267FB1614ADEB5A0E8FACF_gshared)(__this, method);
}
// System.Collections.IEnumerator AudioController::ActiveBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioController_ActiveBGM_m04BFA6F8AD4FD6A77595ED62BACC3DFA1630594F (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method);
// System.Void AudioController/<ActiveBGM>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActiveBGMU3Ed__5__ctor_mBA1940EE5B5D28E17B618DAE3AD7E839CE74E2C7 (U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::PlayOneShot(UnityEngine.AudioClip)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * ___clip0, const RuntimeMethod* method);
// System.Collections.IEnumerator AudioController::smallsound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioController_smallsound_mF618BC29148DC32A3B0B68AC6E667890935A0E99 (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method);
// System.Void AudioController/<smallsound>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsmallsoundU3Ed__8__ctor_m08813FFBC7DB455861E033A225FFE99E5413CCFD (U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.SpriteRenderer>()
inline SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.CircleCollider2D>()
inline CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * Component_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m2C908F7F3929EABBD494665EDD46CD7AE9AE7B9A (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Void UnityEngine.Renderer::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B (Renderer_t58147AB5B00224FE1460FD47542DC0DA7EC9378C * __this, bool ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Behaviour::set_enabled(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, bool ___value0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Multiply(UnityEngine.Vector3,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_localScale(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.SpriteRenderer::get_color()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, const RuntimeMethod* method);
// UnityEngine.Color UnityEngine.Color::op_Multiply(UnityEngine.Color,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___a0, float ___b1, const RuntimeMethod* method);
// System.Void UnityEngine.SpriteRenderer::set_color(UnityEngine.Color)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33 (SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * __this, Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, String_t* ___tag0, const RuntimeMethod* method);
// System.Void UnityEngine.Object::Destroy(UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___obj0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Image>()
inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Single UnityEngine.Time::get_deltaTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290 (const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<AudioController>()
inline AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * GameObject_GetComponent_TisAudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_m27CC78923661CD135373BCCF1F13AEB7A478A285 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void AudioController::stopBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_stopBGM_mD6353C36E8FBF84DECF05C4BA451C944F58C214F (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<WLSViewerController>()
inline WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997 * GameObject_GetComponent_TisWLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997_mED6A78451F7571A05BA5F2A1A1286D513ACE408E (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// System.Void WLSViewerController::winlose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WLSViewerController_winlose_m54D5B61AB2B7A42B9BE3166A6EED47C3D79337ED (WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Button>()
inline Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Void CountDownActive::ActiveScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownActive_ActiveScript_mEDD23EE9E3A4152ABFACBE4217CC264219089378 (CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<CountDownActive>()
inline CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4 * Component_GetComponent_TisCountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4_m9FC37306AA5EBDFB18CF4B9198B982F19C955D9E (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.MonoBehaviour>()
inline MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * Component_GetComponent_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m29F7D7B5238455F12E2B8BDB08D243DC208C1FBF (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// System.Void System.Func`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Func_1__ctor_m680BC4E6E206D83C45706CCCA010CAE698D9D038 (Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Func_1__ctor_m2A4FE889FB540EA198F7757D17DC2290461E5EE9_gshared)(__this, ___object0, ___method1, method);
}
// System.Void System.Action`1<UnityEngine.GameObject>::.ctor(System.Object,System.IntPtr)
inline void Action_1__ctor_m2B9DF3A0BBBA5AF7766502C7B76A7A1265ECD727 (Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D *, RuntimeObject *, intptr_t, const RuntimeMethod*))Action_1__ctor_mA671E933C9D3DAE4E3F71D34FDDA971739618158_gshared)(__this, ___object0, ___method1, method);
}
// System.Void UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>::.ctor(System.Func`1<!0>,System.Action`1<!0>,System.Action`1<!0>,System.Action`1<!0>,System.Boolean,System.Int32,System.Int32)
inline void ObjectPool_1__ctor_m138292004269834164631702859B406989FF3AF2 (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * __this, Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * ___createFunc0, Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * ___actionOnGet1, Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * ___actionOnRelease2, Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * ___actionOnDestroy3, bool ___collectionCheck4, int32_t ___defaultCapacity5, int32_t ___maxSize6, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 *, Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 *, Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D *, Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D *, Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D *, bool, int32_t, int32_t, const RuntimeMethod*))ObjectPool_1__ctor_mC61F796A3BC17AF31A891E89DCB36AEBF32D125A_gshared)(__this, ___createFunc0, ___actionOnGet1, ___actionOnRelease2, ___actionOnDestroy3, ___collectionCheck4, ___defaultCapacity5, ___maxSize6, method);
}
// !0 UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>::Get()
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ObjectPool_1_Get_mA900C6F04967B5F3070E39D9CDC41FB5E05B358C (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * __this, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 *, const RuntimeMethod*))ObjectPool_1_Get_m722E04FEA1E8B2782FD34DA8CF4DA63165DD20FD_gshared)(__this, method);
}
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_forward()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Addition(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Random::get_onUnitSphere()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED (const RuntimeMethod* method);
// System.Int32 UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>::get_CountInactive()
inline int32_t ObjectPool_1_get_CountInactive_m7456D9F9F5EAD348B5530F610506614EF6F3F4CD (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 *, const RuntimeMethod*))ObjectPool_1_get_CountInactive_mC92CB23F49C5A34F9864EF1C7AA79A7A4D62D2C8_gshared)(__this, method);
}
// System.String System.Int32::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411 (int32_t* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// !!0[] System.Array::Empty<UnityEngine.GUILayoutOption>()
inline GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_mA07E9D2B1A778365E5A956C5674C590821EEC9B4_inline (const RuntimeMethod* method)
{
	return ((  GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline)(method);
}
// System.Void UnityEngine.GUILayout::Label(System.String,UnityEngine.GUILayoutOption[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502 (String_t* ___text0, GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* ___options1, const RuntimeMethod* method);
// System.Int32 UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>::get_CountActive()
inline int32_t ObjectPool_1_get_CountActive_m16EAB83E194EAE29E53C5C84A51E85013345BA2A (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 *, const RuntimeMethod*))ObjectPool_1_get_CountActive_mE6BA0A1B274218EB4FD80C000619FAF552D4ED4E_gshared)(__this, method);
}
// UnityEngine.GameObject UnityEngine.GameObject::CreatePrimitive(UnityEngine.PrimitiveType)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC (int32_t ___type0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::AddComponent<PooledObject>()
inline PooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85 * GameObject_AddComponent_TisPooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85_m7BF6B247011ED228668C56BFDBDA1D8020438294 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  PooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_AddComponent_TisRuntimeObject_mF5562A0C81CEDFE1C295F7E16FC6904B5057CB2D_gshared)(__this, method);
}
// System.Void UnityEngine.Application::set_targetFrameRate(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC (int32_t ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<BRController>()
inline BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * GameObject_GetComponent_TisBRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50_m9A9524F9211924AE57A19A10A8FCEE17CDD75445 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_m533C28B362284747FD5138B02D183642545146E8_gshared)(__this, method);
}
// UnityEngine.Quaternion UnityEngine.Quaternion::get_identity()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702 (const RuntimeMethod* method);
// !!0 UnityEngine.Object::Instantiate<UnityEngine.GameObject>(!!0,UnityEngine.Vector3,UnityEngine.Quaternion)
inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___original0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position1, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation2, const RuntimeMethod* method)
{
	return ((  GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E , Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4 , const RuntimeMethod*))Object_Instantiate_TisRuntimeObject_m02BDA2BE9BA7A8D6BB8554AE3E32ED6EF05EDC0C_gshared)(___original0, ___position1, ___rotation2, method);
}
// System.Void AudioController::playsound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50 (int32_t ___clip0, const RuntimeMethod* method);
// System.Void Pauser::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser_Pause_m18B94354A9EAF1363FE65BECC3953FC3E0F478DB (const RuntimeMethod* method);
// System.Single UnityEngine.Random::Range(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2 (float ___minInclusive0, float ___maxInclusive1, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::Euler(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3 (float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Void BRController::damagedremove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BRController_damagedremove_mE3893D5D6143F4E65655EEC1EE4080B285275C9E (BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___trans0, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_fillAmount(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, float ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_rotation(UnityEngine.Quaternion)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___value0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B (String_t* ___name0, const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Transform::get_rotation()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Quaternion::op_Multiply(UnityEngine.Quaternion,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D (Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  ___rotation0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___point1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::Slerp(UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, float ___t2, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::op_Subtraction(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method);
// System.Single UnityEngine.Vector3::get_magnitude()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_mDC2250CC3F24F6FE45660AF6153056ABDA5ED60F_gshared)(__this, method);
}
// UnityEngine.Coroutine UnityEngine.MonoBehaviour::StartCoroutine(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, const RuntimeMethod* method);
// System.Void LoadScene/<LoadData>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__4__ctor_mD54DA04DC49F70D70F3190A0289A0757309D1A79 (U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void LoadingController/<LoadData>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__4__ctor_mB257EFFC0DACB93C9DB128EEA604B7138FCDE05B (U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<Pauser>::Add(!0)
inline void List_1_Add_mE076679C70F100BB328D01632EF72F438B1ACD51 (List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * __this, Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 *, Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF *, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Boolean System.Collections.Generic.List`1<Pauser>::Remove(!0)
inline bool List_1_Remove_m32C996BCE978E3459A260E6146C9F7900AE6C58B (List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * __this, Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 *, Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF *, const RuntimeMethod*))List_1_Remove_mC8FCB6A53C017A6C13FC891B6BB1D78F9A77D5E3_gshared)(__this, ___item0, method);
}
// !!0[] UnityEngine.Component::GetComponentsInChildren<UnityEngine.Behaviour>()
inline BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* Component_GetComponentsInChildren_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m0329CABF1EA5E716381ED8EF794E8B276A2D5B08 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentsInChildren_TisRuntimeObject_m254067D66B75073E897E989B5E670C194AFA7621_gshared)(__this, method);
}
// System.Void System.Predicate`1<UnityEngine.Behaviour>::.ctor(System.Object,System.IntPtr)
inline void Predicate_1__ctor_m2986B5E58F128F13E567A1809343B36E1A61BE72 (Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	((  void (*) (Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 *, RuntimeObject *, intptr_t, const RuntimeMethod*))Predicate_1__ctor_m3F41E32C976C3C48B3FC63FBFD3FBBC5B5F23EDD_gshared)(__this, ___object0, ___method1, method);
}
// !!0[] System.Array::FindAll<UnityEngine.Behaviour>(!!0[],System.Predicate`1<!!0>)
inline BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* Array_FindAll_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m6A31B13ADDDFBFA5C22EEEB3E2C2455DEB73B79D (BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* ___array0, Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * ___match1, const RuntimeMethod* method)
{
	return ((  BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* (*) (BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0*, Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 *, const RuntimeMethod*))Array_FindAll_TisRuntimeObject_m0EDF6CEF376D4BE3204334059FA0F22AD6A42C0D_gshared)(___array0, ___match1, method);
}
// !!0[] UnityEngine.Object::FindObjectsOfType<Pauser>()
inline PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* Object_FindObjectsOfType_TisPauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_mF106ABE25E2645B35CCC4423CCC4E31D2A8D1301 (const RuntimeMethod* method)
{
	return ((  PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* (*) (const RuntimeMethod*))Object_FindObjectsOfType_TisRuntimeObject_m3A432305B0F99DFE33069276B3907E866E847A1F_gshared)(method);
}
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void Pauser::OnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser_OnPause_m9BFFB47CE260B75463E2982B427A671F443435E4 (Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * __this, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<Pauser>::GetEnumerator()
inline Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8  List_1_GetEnumerator_m60142538AA7CBDDB5789A0038BE5627EBE20FA21 (List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8  (*) (List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 *, const RuntimeMethod*))List_1_GetEnumerator_m6339FC2D3D1CE4FA13CF21C7F9FC58CA4441BF0C_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<Pauser>::get_Current()
inline Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * Enumerator_get_Current_m5704EC2BDFBEEB9BF62512FB17158BB0919DA388_inline (Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 * __this, const RuntimeMethod* method)
{
	return ((  Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * (*) (Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 *, const RuntimeMethod*))Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline)(__this, method);
}
// System.Void Pauser::OnResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser_OnResume_m971427F83DDF3C47F9DF18A1E8BCDC61F001D79A (Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<Pauser>::MoveNext()
inline bool Enumerator_MoveNext_mDFFC7FFA28E98CCF3F28E99E9A664CCDA06CF49D (Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 *, const RuntimeMethod*))Enumerator_MoveNext_m2E56233762839CE55C67E00AC8DD3D4D3F6C0DF0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<Pauser>::Dispose()
inline void Enumerator_Dispose_m97BA2C1591EAC36E61406750598F5EFAA704F835 (Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 *, const RuntimeMethod*))Enumerator_Dispose_mCFB225D9E5E597A1CC8F958E53BEA1367D8AC7B8_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<Pauser>::.ctor()
inline void List_1__ctor_m7652396EA445BB0D39B33EA5E316886B4EBDCBB8 (List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 *, const RuntimeMethod*))List_1__ctor_m0F0E00088CF56FEACC9E32D8B7D91B93D91DAA3B_gshared)(__this, method);
}
// System.Int32 UnityEngine.Input::get_touchCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6 (const RuntimeMethod* method);
// UnityEngine.Touch UnityEngine.Input::GetTouch(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F (int32_t ___index0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Vector2::op_Equality(UnityEngine.Vector2,UnityEngine.Vector2)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method);
// UnityEngine.Camera UnityEngine.Camera::get_main()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C (const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Touch::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Camera::ScreenToWorldPoint(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6 (Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___position0, const RuntimeMethod* method);
// System.Void PlayerController::shot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_shot_m2377BEB63EDDB81CA68152DCA73DDDC265C289E2 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___pattern0, const RuntimeMethod* method);
// UnityEngine.TouchPhase UnityEngine.Touch::get_phase()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257 (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Pool.ObjectPool`1<UnityEngine.GameObject>::Release(!0)
inline void ObjectPool_1_Release_mA57FC55F4CD1907DAE756F9C96DF57119FA84859 (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___element0, const RuntimeMethod* method)
{
	((  void (*) (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 *, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))ObjectPool_1_Release_m84ECF5F605782B8B3EA7F854C957664D23FCF23C_gshared)(__this, ___element0, method);
}
// UnityEngine.Vector3 UnityEngine.Transform::get_eulerAngles()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_eulerAngles(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.String System.Int32::ToString(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184 (int32_t* __this, String_t* ___format0, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.GameObject::FindGameObjectWithTag(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F (String_t* ___tag0, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Quaternion UnityEngine.Quaternion::FromToRotation(UnityEngine.Vector3,UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80 (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___fromDirection0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___toDirection1, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::Rotate(System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, float ___xAngle0, float ___yAngle1, float ___zAngle2, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Single[] type1::changexy(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* type1_changexy_m0C2E9333C7AB0935AEE387E370B55A596617C5CA (type1_t46A08AF0AC40A46A1A13810AD7C4235E524B08BE * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Single[]>::Clear()
inline void List_1_Clear_m09F193FACE259E473A52AAC6993D0387C0DEFF47 (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, const RuntimeMethod*))List_1_Clear_m5FB5A9C59D8625FDFB06876C4D8848F0F07ABFD0_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<System.Single[]>::Add(!0)
inline void List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*, const RuntimeMethod*))List_1_Add_mF15250BF947CA27BE9A23C08BAC6DB6F180B0EDD_gshared)(__this, ___item0, method);
}
// System.Void Astar::sort(System.Collections.Generic.List`1<System.Single[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Astar_sort_mF334B3D5D2C23449EB8E187D4309B8F56CC122D0 (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * ___open0, const RuntimeMethod* method);
// System.Void System.NotSupportedException::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.WaitForSeconds::.ctor(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4 (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * __this, float ___seconds0, const RuntimeMethod* method);
// System.Single UnityEngine.AudioSource::get_volume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::set_volume(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, float ___value0, const RuntimeMethod* method);
// System.Void CreateObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5E300AB5F4AB915A8DB1484CDA39AE3C356FFFE8 (U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * __this, const RuntimeMethod* method);
// UnityEngine.AsyncOperation UnityEngine.SceneManagement.SceneManager::LoadSceneAsync(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA (String_t* ___sceneName0, const RuntimeMethod* method);
// System.Single UnityEngine.AsyncOperation::get_progress()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Single UnityEngine.Mathf::Clamp01(System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C (float ___value0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AsyncOperation::get_isDone()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877 (AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * __this, const RuntimeMethod* method);
// System.Void Pauser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6283666BE2ACE06A65BE22AA55B91DAB00AAF769 (U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Equality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Boolean UnityEngine.Behaviour::get_enabled()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800 (Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * __this, const RuntimeMethod* method);
// System.Void System.ThrowHelper::ThrowArgumentOutOfRangeException()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929 (const RuntimeMethod* method);
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
// System.Void Astar::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Astar_Awake_m9D5B67F57B2A482028313FD88988EE2824497354 (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// timeOut = timeoutTemp;
		int32_t L_0 = __this->get_timeoutTemp_13();
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->set_timeOut_14(L_0);
		// }
		return;
	}
}
// System.Void Astar::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Astar_Start_m1740CFEA4A0329AC66836994C48B33470C27556A (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		__this->set_rb_4(L_0);
		// for (i = 0; i < 27; i++)
		V_0 = 0;
		goto IL_003e;
	}

IL_0010:
	{
		// node[i] = new float[54][];
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_1 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_2 = V_0;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_3 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)SZArrayNew(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9_il2cpp_TypeInfo_var, (uint32_t)((int32_t)54));
		NullCheck(L_1);
		ArrayElementTypeCheck (L_1, L_3);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(L_2), (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)L_3);
		// for (j = 0; j < 54; j++)
		V_1 = 0;
		goto IL_0035;
	}

IL_0022:
	{
		// node[i][j] = new float[4];
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_4 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_5 = V_0;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_7 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		int32_t L_8 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_9 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)4);
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, L_9);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(L_8), (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_9);
		// for (j = 0; j < 54; j++)
		int32_t L_10 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_0035:
	{
		// for (j = 0; j < 54; j++)
		int32_t L_11 = V_1;
		if ((((int32_t)L_11) < ((int32_t)((int32_t)54))))
		{
			goto IL_0022;
		}
	}
	{
		// for (i = 0; i < 27; i++)
		int32_t L_12 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_003e:
	{
		// for (i = 0; i < 27; i++)
		int32_t L_13 = V_0;
		if ((((int32_t)L_13) < ((int32_t)((int32_t)27))))
		{
			goto IL_0010;
		}
	}
	{
		// for (i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0059;
	}

IL_0047:
	{
		// node_big[i] = new float[6];
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_14 = __this->get_node_big_12();
		int32_t L_15 = V_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_16 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)6);
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, L_16);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(L_15), (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)L_16);
		// for (i = 0; i < 3; i++)
		int32_t L_17 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_17, (int32_t)1));
	}

IL_0059:
	{
		// for (i = 0; i < 3; i++)
		int32_t L_18 = V_0;
		if ((((int32_t)L_18) < ((int32_t)3)))
		{
			goto IL_0047;
		}
	}
	{
		// Goal = new float[] { Random.Range(5, 22), Random.Range(8, 32) };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_19 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = L_19;
		int32_t L_21;
		L_21 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(5, ((int32_t)22), /*hidden argument*/NULL);
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_21)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22 = L_20;
		int32_t L_23;
		L_23 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(8, ((int32_t)32), /*hidden argument*/NULL);
		NullCheck(L_22);
		(L_22)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_23)));
		__this->set_Goal_9(L_22);
		// }
		return;
	}
}
// System.Void Astar::LateUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Astar_LateUpdate_m10C0C2C4D48964E2AA5A2CEB8AE4BFB4B632C21D (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mDE29BD2B07640990225575EB7570EEC9B34BB428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (timeElapsed > timeOut)
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_timeElapsed_15();
		int32_t L_1 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_timeOut_14();
		if ((((int32_t)L_0) <= ((int32_t)L_1)))
		{
			goto IL_00be;
		}
	}
	{
		// getgoal();
		Astar_getgoal_m20D12F5E46161A717DA28414A87F76E1F6B73DB0(__this, /*hidden argument*/NULL);
		// if (ROUTE.Count > 5)
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_2 = __this->get_ROUTE_10();
		NullCheck(L_2);
		int32_t L_3;
		L_3 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_2, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		if ((((int32_t)L_3) <= ((int32_t)5)))
		{
			goto IL_0050;
		}
	}
	{
		// StartCoroutine(A_star2(ROUTE[ROUTE.Count - 5], Goal));
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_4 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_5 = __this->get_ROUTE_10();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_5, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_4);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7;
		L_7 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_4, ((int32_t)il2cpp_codegen_subtract((int32_t)L_6, (int32_t)5)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_8 = __this->get_Goal_9();
		RuntimeObject* L_9;
		L_9 = Astar_A_star2_mE2F64652B0310D2823826AD8BD0E23967F3A5B4B(__this, L_7, L_8, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_10;
		L_10 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_9, /*hidden argument*/NULL);
		// }
		goto IL_00b8;
	}

IL_0050:
	{
		// else if(ROUTE.Count > 0)
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_11 = __this->get_ROUTE_10();
		NullCheck(L_11);
		int32_t L_12;
		L_12 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_11, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		if ((((int32_t)L_12) <= ((int32_t)0)))
		{
			goto IL_007f;
		}
	}
	{
		// StartCoroutine(A_star2(ROUTE[0], Goal));
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_13 = __this->get_ROUTE_10();
		NullCheck(L_13);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_14;
		L_14 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_13, 0, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = __this->get_Goal_9();
		RuntimeObject* L_16;
		L_16 = Astar_A_star2_mE2F64652B0310D2823826AD8BD0E23967F3A5B4B(__this, L_14, L_15, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_17;
		L_17 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_16, /*hidden argument*/NULL);
		// }
		goto IL_00b8;
	}

IL_007f:
	{
		// StartCoroutine(A_star2(changexy(this.transform.position.x, this.transform.position.y), Goal));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24;
		L_24 = Astar_changexy_mCD4D9864FF4081B5EBBDE4B1910F78332290F5F6(__this, L_20, L_23, /*hidden argument*/NULL);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_25 = __this->get_Goal_9();
		RuntimeObject* L_26;
		L_26 = Astar_A_star2_mE2F64652B0310D2823826AD8BD0E23967F3A5B4B(__this, L_24, L_25, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_27;
		L_27 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_26, /*hidden argument*/NULL);
	}

IL_00b8:
	{
		// timeElapsed = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->set_timeElapsed_15(0);
	}

IL_00be:
	{
		// if (ROUTE.Count > 0)
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_28 = __this->get_ROUTE_10();
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_28, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		if ((((int32_t)L_29) <= ((int32_t)0)))
		{
			goto IL_0134;
		}
	}
	{
		// rb.MovePosition(new Vector2(changetruexy(ROUTE[ROUTE.Count - 1])[0], changetruexy(ROUTE[ROUTE.Count - 1])[1]));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_30 = __this->get_rb_4();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_31 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_32 = __this->get_ROUTE_10();
		NullCheck(L_32);
		int32_t L_33;
		L_33 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_32, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_31);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34;
		L_34 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_31, ((int32_t)il2cpp_codegen_subtract((int32_t)L_33, (int32_t)1)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35;
		L_35 = Astar_changetruexy_mF9D316369ADEEA1887845A710CFFF332B49EE62D(__this, L_34, /*hidden argument*/NULL);
		NullCheck(L_35);
		int32_t L_36 = 0;
		float L_37 = (L_35)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_38 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_39 = __this->get_ROUTE_10();
		NullCheck(L_39);
		int32_t L_40;
		L_40 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_39, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_38);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_41;
		L_41 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_38, ((int32_t)il2cpp_codegen_subtract((int32_t)L_40, (int32_t)1)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42;
		L_42 = Astar_changetruexy_mF9D316369ADEEA1887845A710CFFF332B49EE62D(__this, L_41, /*hidden argument*/NULL);
		NullCheck(L_42);
		int32_t L_43 = 1;
		float L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45;
		memset((&L_45), 0, sizeof(L_45));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_45), L_37, L_44, /*hidden argument*/NULL);
		NullCheck(L_30);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_30, L_45, /*hidden argument*/NULL);
		// ROUTE.RemoveAt(ROUTE.Count - 1);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_46 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_47 = __this->get_ROUTE_10();
		NullCheck(L_47);
		int32_t L_48;
		L_48 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_47, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_46);
		List_1_RemoveAt_mDE29BD2B07640990225575EB7570EEC9B34BB428(L_46, ((int32_t)il2cpp_codegen_subtract((int32_t)L_48, (int32_t)1)), /*hidden argument*/List_1_RemoveAt_mDE29BD2B07640990225575EB7570EEC9B34BB428_RuntimeMethod_var);
	}

IL_0134:
	{
		// timeElapsed += 1;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		int32_t L_49 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_timeElapsed_15();
		((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->set_timeElapsed_15(((int32_t)il2cpp_codegen_add((int32_t)L_49, (int32_t)1)));
		// }
		return;
	}
}
// System.Single[] Astar::changexy(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Astar_changexy_mCD4D9864FF4081B5EBBDE4B1910F78332290F5F6 (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float[] xy = new float[2] {Mathf.Floor((2.5f + x)*((float)width * 0.2f)),Mathf.Ceil((10 - y) * ((float)height * 0.1f)) };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		float L_2 = ___x0;
		float L_3;
		L_3 = floorf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)(2.5f), (float)L_2)), (float)(5.4000001f))));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = L_1;
		float L_5 = ___y1;
		float L_6;
		L_6 = ceilf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(10.0f), (float)L_5)), (float)(5.4000001f))));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_6);
		// return xy;
		return L_4;
	}
}
// System.Single[] Astar::changetruexy(System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* Astar_changetruexy_mF9D316369ADEEA1887845A710CFFF332B49EE62D (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___xy0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float[] truexy = new float[2] { -2.5f + xy[0] * wid + wid * 0.5f, 10 - xy[1] * hei + hei * 0.5f};
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2 = ___xy0;
		NullCheck(L_2);
		int32_t L_3 = 0;
		float L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)(-2.5f), (float)((float)il2cpp_codegen_multiply((float)L_4, (float)(0.185185179f))))), (float)(0.0925925896f))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = L_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_6 = ___xy0;
		NullCheck(L_6);
		int32_t L_7 = 1;
		float L_8 = (L_6)->GetAt(static_cast<il2cpp_array_size_t>(L_7));
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)(10.0f), (float)((float)il2cpp_codegen_multiply((float)L_8, (float)(0.185185179f))))), (float)(0.0925925896f))));
		// return truexy;
		return L_5;
	}
}
// System.Void Astar::getgoal()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Astar_getgoal_m20D12F5E46161A717DA28414A87F76E1F6B73DB0 (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	float V_4 = 0.0f;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t V_10 = 0;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	{
		// for (i = 0; i < 6; i++)//big y
		V_0 = 0;
		goto IL_0055;
	}

IL_0004:
	{
		// for (j = 0; j < 3; j++)//big x
		V_1 = 0;
		goto IL_004d;
	}

IL_0008:
	{
		// for (k = 0; k < 9; k++)
		V_2 = 0;
		goto IL_0044;
	}

IL_000c:
	{
		// for (l = 0; l < 9; l++)
		V_3 = 0;
		goto IL_003b;
	}

IL_0010:
	{
		// node_big[j][i] += node[9 * j + k][9 * i + l][2];
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_0 = __this->get_node_big_12();
		int32_t L_1 = V_1;
		NullCheck(L_0);
		int32_t L_2 = L_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_2));
		int32_t L_4 = V_0;
		NullCheck(L_3);
		float* L_5 = ((L_3)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_4)));
		float L_6 = *((float*)L_5);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_7 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_8 = V_1;
		int32_t L_9 = V_2;
		NullCheck(L_7);
		int32_t L_10 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)9), (int32_t)L_8)), (int32_t)L_9));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_11 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_10));
		int32_t L_12 = V_0;
		int32_t L_13 = V_3;
		NullCheck(L_11);
		int32_t L_14 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)((int32_t)9), (int32_t)L_12)), (int32_t)L_13));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_15 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_14));
		NullCheck(L_15);
		int32_t L_16 = 2;
		float L_17 = (L_15)->GetAt(static_cast<il2cpp_array_size_t>(L_16));
		*((float*)L_5) = (float)((float)il2cpp_codegen_add((float)L_6, (float)L_17));
		// for (l = 0; l < 9; l++)
		int32_t L_18 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_18, (int32_t)1));
	}

IL_003b:
	{
		// for (l = 0; l < 9; l++)
		int32_t L_19 = V_3;
		if ((((int32_t)L_19) < ((int32_t)((int32_t)9))))
		{
			goto IL_0010;
		}
	}
	{
		// for (k = 0; k < 9; k++)
		int32_t L_20 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_add((int32_t)L_20, (int32_t)1));
	}

IL_0044:
	{
		// for (k = 0; k < 9; k++)
		int32_t L_21 = V_2;
		if ((((int32_t)L_21) < ((int32_t)((int32_t)9))))
		{
			goto IL_000c;
		}
	}
	{
		// for (j = 0; j < 3; j++)//big x
		int32_t L_22 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_22, (int32_t)1));
	}

IL_004d:
	{
		// for (j = 0; j < 3; j++)//big x
		int32_t L_23 = V_1;
		if ((((int32_t)L_23) < ((int32_t)3)))
		{
			goto IL_0008;
		}
	}
	{
		// for (i = 0; i < 6; i++)//big y
		int32_t L_24 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_24, (int32_t)1));
	}

IL_0055:
	{
		// for (i = 0; i < 6; i++)//big y
		int32_t L_25 = V_0;
		if ((((int32_t)L_25) < ((int32_t)6)))
		{
			goto IL_0004;
		}
	}
	{
		// for (i = 0; i < 6; i++)
		V_0 = 0;
		goto IL_008f;
	}

IL_005d:
	{
		// node_big[0][i] += 2000;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_26 = __this->get_node_big_12();
		NullCheck(L_26);
		int32_t L_27 = 0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_26)->GetAt(static_cast<il2cpp_array_size_t>(L_27));
		int32_t L_29 = V_0;
		NullCheck(L_28);
		float* L_30 = ((L_28)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_29)));
		float L_31 = *((float*)L_30);
		*((float*)L_30) = (float)((float)il2cpp_codegen_add((float)L_31, (float)(2000.0f)));
		// node_big[2][i] += 2000;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_32 = __this->get_node_big_12();
		NullCheck(L_32);
		int32_t L_33 = 2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_34 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = V_0;
		NullCheck(L_34);
		float* L_36 = ((L_34)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_35)));
		float L_37 = *((float*)L_36);
		*((float*)L_36) = (float)((float)il2cpp_codegen_add((float)L_37, (float)(2000.0f)));
		// for (i = 0; i < 6; i++)
		int32_t L_38 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_38, (int32_t)1));
	}

IL_008f:
	{
		// for (i = 0; i < 6; i++)
		int32_t L_39 = V_0;
		if ((((int32_t)L_39) < ((int32_t)6)))
		{
			goto IL_005d;
		}
	}
	{
		// if (ROUTE.Count > 5)
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_40 = __this->get_ROUTE_10();
		NullCheck(L_40);
		int32_t L_41;
		L_41 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_40, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		if ((((int32_t)L_41) <= ((int32_t)5)))
		{
			goto IL_0104;
		}
	}
	{
		// bigx = (int)Mathf.Floor(ROUTE[ROUTE.Count - 5][0] / 9);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_42 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_43 = __this->get_ROUTE_10();
		NullCheck(L_43);
		int32_t L_44;
		L_44 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_43, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_42);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_45;
		L_45 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_42, ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)5)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_45);
		int32_t L_46 = 0;
		float L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		float L_48;
		L_48 = floorf(((float)((float)L_47/(float)(9.0f))));
		V_7 = ((int32_t)((int32_t)L_48));
		// bigy = (int)Mathf.Floor(ROUTE[ROUTE.Count - 5][1] / 9);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_49 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_50 = __this->get_ROUTE_10();
		NullCheck(L_50);
		int32_t L_51;
		L_51 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_50, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_49);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_52;
		L_52 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_49, ((int32_t)il2cpp_codegen_subtract((int32_t)L_51, (int32_t)5)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_52);
		int32_t L_53 = 1;
		float L_54 = (L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_53));
		float L_55;
		L_55 = floorf(((float)((float)L_54/(float)(9.0f))));
		V_8 = ((int32_t)((int32_t)L_55));
		// mincost = node_big[bigx][bigy];
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_56 = __this->get_node_big_12();
		int32_t L_57 = V_7;
		NullCheck(L_56);
		int32_t L_58 = L_57;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_59 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_56)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		int32_t L_60 = V_8;
		NullCheck(L_59);
		int32_t L_61 = L_60;
		float L_62 = (L_59)->GetAt(static_cast<il2cpp_array_size_t>(L_61));
		V_4 = L_62;
		// }
		goto IL_01bc;
	}

IL_0104:
	{
		// else if (ROUTE.Count > 0)
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_63 = __this->get_ROUTE_10();
		NullCheck(L_63);
		int32_t L_64;
		L_64 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_63, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		if ((((int32_t)L_64) <= ((int32_t)0)))
		{
			goto IL_015a;
		}
	}
	{
		// bigx = (int)Mathf.Floor(ROUTE[0][0] / 9);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_65 = __this->get_ROUTE_10();
		NullCheck(L_65);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_66;
		L_66 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_65, 0, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_66);
		int32_t L_67 = 0;
		float L_68 = (L_66)->GetAt(static_cast<il2cpp_array_size_t>(L_67));
		float L_69;
		L_69 = floorf(((float)((float)L_68/(float)(9.0f))));
		V_7 = ((int32_t)((int32_t)L_69));
		// bigy = (int)Mathf.Floor(ROUTE[0][1] / 9);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_70 = __this->get_ROUTE_10();
		NullCheck(L_70);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_71;
		L_71 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_70, 0, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_71);
		int32_t L_72 = 1;
		float L_73 = (L_71)->GetAt(static_cast<il2cpp_array_size_t>(L_72));
		float L_74;
		L_74 = floorf(((float)((float)L_73/(float)(9.0f))));
		V_8 = ((int32_t)((int32_t)L_74));
		// mincost = node_big[bigx][bigy];
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_75 = __this->get_node_big_12();
		int32_t L_76 = V_7;
		NullCheck(L_75);
		int32_t L_77 = L_76;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_78 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_75)->GetAt(static_cast<il2cpp_array_size_t>(L_77));
		int32_t L_79 = V_8;
		NullCheck(L_78);
		int32_t L_80 = L_79;
		float L_81 = (L_78)->GetAt(static_cast<il2cpp_array_size_t>(L_80));
		V_4 = L_81;
		// }
		goto IL_01bc;
	}

IL_015a:
	{
		// bigx = (int)Mathf.Floor((int)changexy(this.transform.position.x, 0)[0] / 9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_82;
		L_82 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_82);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_83;
		L_83 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_82, /*hidden argument*/NULL);
		float L_84 = L_83.get_x_2();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_85;
		L_85 = Astar_changexy_mCD4D9864FF4081B5EBBDE4B1910F78332290F5F6(__this, L_84, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_85);
		int32_t L_86 = 0;
		float L_87 = (L_85)->GetAt(static_cast<il2cpp_array_size_t>(L_86));
		float L_88;
		L_88 = floorf(((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_87))/(int32_t)((int32_t)9))))));
		V_7 = ((int32_t)((int32_t)L_88));
		// bigy = (int)Mathf.Floor((int)changexy(0, this.transform.position.y)[1] / 9);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_89;
		L_89 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_89);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_90;
		L_90 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_89, /*hidden argument*/NULL);
		float L_91 = L_90.get_y_3();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_92;
		L_92 = Astar_changexy_mCD4D9864FF4081B5EBBDE4B1910F78332290F5F6(__this, (0.0f), L_91, /*hidden argument*/NULL);
		NullCheck(L_92);
		int32_t L_93 = 1;
		float L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		float L_95;
		L_95 = floorf(((float)((float)((int32_t)((int32_t)((int32_t)((int32_t)L_94))/(int32_t)((int32_t)9))))));
		V_8 = ((int32_t)((int32_t)L_95));
		// mincost = node_big[bigx][bigy];
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_96 = __this->get_node_big_12();
		int32_t L_97 = V_7;
		NullCheck(L_96);
		int32_t L_98 = L_97;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_99 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_96)->GetAt(static_cast<il2cpp_array_size_t>(L_98));
		int32_t L_100 = V_8;
		NullCheck(L_99);
		int32_t L_101 = L_100;
		float L_102 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_101));
		V_4 = L_102;
	}

IL_01bc:
	{
		// int change = 0;
		V_9 = 0;
		// for (i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0202;
	}

IL_01c3:
	{
		// int rndx = Random.Range(0, 2);
		int32_t L_103;
		L_103 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 2, /*hidden argument*/NULL);
		V_10 = L_103;
		// int rndy = Random.Range(0, 5);
		int32_t L_104;
		L_104 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		V_11 = L_104;
		// if(mincost > node_big[rndx][rndy])
		float L_105 = V_4;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_106 = __this->get_node_big_12();
		int32_t L_107 = V_10;
		NullCheck(L_106);
		int32_t L_108 = L_107;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_109 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_106)->GetAt(static_cast<il2cpp_array_size_t>(L_108));
		int32_t L_110 = V_11;
		NullCheck(L_109);
		int32_t L_111 = L_110;
		float L_112 = (L_109)->GetAt(static_cast<il2cpp_array_size_t>(L_111));
		if ((!(((float)L_105) > ((float)L_112))))
		{
			goto IL_01fe;
		}
	}
	{
		// bigx = rndx;
		int32_t L_113 = V_10;
		V_7 = L_113;
		// bigy = rndy;
		int32_t L_114 = V_11;
		V_8 = L_114;
		// mincost = node_big[rndx][rndy];
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_115 = __this->get_node_big_12();
		int32_t L_116 = V_10;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_118 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		int32_t L_119 = V_11;
		NullCheck(L_118);
		int32_t L_120 = L_119;
		float L_121 = (L_118)->GetAt(static_cast<il2cpp_array_size_t>(L_120));
		V_4 = L_121;
		// change = 1;
		V_9 = 1;
	}

IL_01fe:
	{
		// for (i = 0; i < 3; i++)
		int32_t L_122 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_122, (int32_t)1));
	}

IL_0202:
	{
		// for (i = 0; i < 3; i++)
		int32_t L_123 = V_0;
		if ((((int32_t)L_123) < ((int32_t)3)))
		{
			goto IL_01c3;
		}
	}
	{
		// if (change == 0 && Random.Range(0, 5) > 0)
		int32_t L_124 = V_9;
		if (L_124)
		{
			goto IL_03a4;
		}
	}
	{
		int32_t L_125;
		L_125 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 5, /*hidden argument*/NULL);
		if ((((int32_t)L_125) <= ((int32_t)0)))
		{
			goto IL_03a4;
		}
	}
	{
		// if (ROUTE.Count > 5)
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_126 = __this->get_ROUTE_10();
		NullCheck(L_126);
		int32_t L_127;
		L_127 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_126, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		if ((((int32_t)L_127) <= ((int32_t)5)))
		{
			goto IL_02b1;
		}
	}
	{
		// mincost = node[(int)ROUTE[ROUTE.Count - 5][0]][(int)ROUTE[ROUTE.Count - 5][1]][2] - 0.5f;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_128 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_129 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_130 = __this->get_ROUTE_10();
		NullCheck(L_130);
		int32_t L_131;
		L_131 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_130, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_129);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_132;
		L_132 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_129, ((int32_t)il2cpp_codegen_subtract((int32_t)L_131, (int32_t)5)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_132);
		int32_t L_133 = 0;
		float L_134 = (L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_133));
		NullCheck(L_128);
		int32_t L_135 = ((int32_t)((int32_t)L_134));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_136 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_128)->GetAt(static_cast<il2cpp_array_size_t>(L_135));
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_137 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_138 = __this->get_ROUTE_10();
		NullCheck(L_138);
		int32_t L_139;
		L_139 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_138, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_137);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_140;
		L_140 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_137, ((int32_t)il2cpp_codegen_subtract((int32_t)L_139, (int32_t)5)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_140);
		int32_t L_141 = 1;
		float L_142 = (L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_141));
		NullCheck(L_136);
		int32_t L_143 = ((int32_t)((int32_t)L_142));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_144 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_136)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		NullCheck(L_144);
		int32_t L_145 = 2;
		float L_146 = (L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_145));
		V_4 = ((float)il2cpp_codegen_subtract((float)L_146, (float)(0.5f)));
		// minx = (int)ROUTE[ROUTE.Count - 5][0];
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_147 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_148 = __this->get_ROUTE_10();
		NullCheck(L_148);
		int32_t L_149;
		L_149 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_148, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_147);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_150;
		L_150 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_147, ((int32_t)il2cpp_codegen_subtract((int32_t)L_149, (int32_t)5)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_150);
		int32_t L_151 = 0;
		float L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		V_5 = ((int32_t)((int32_t)L_152));
		// miny = (int)ROUTE[ROUTE.Count - 5][1];
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_153 = __this->get_ROUTE_10();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_154 = __this->get_ROUTE_10();
		NullCheck(L_154);
		int32_t L_155;
		L_155 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_154, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		NullCheck(L_153);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_156;
		L_156 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_153, ((int32_t)il2cpp_codegen_subtract((int32_t)L_155, (int32_t)5)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_156);
		int32_t L_157 = 1;
		float L_158 = (L_156)->GetAt(static_cast<il2cpp_array_size_t>(L_157));
		V_6 = ((int32_t)((int32_t)L_158));
		// }
		goto IL_03d1;
	}

IL_02b1:
	{
		// else if (ROUTE.Count > 0)
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_159 = __this->get_ROUTE_10();
		NullCheck(L_159);
		int32_t L_160;
		L_160 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_159, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		if ((((int32_t)L_160) <= ((int32_t)0)))
		{
			goto IL_0315;
		}
	}
	{
		// mincost = node[(int)ROUTE[0][0]][(int)ROUTE[0][1]][2] - 0.5f;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_161 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_162 = __this->get_ROUTE_10();
		NullCheck(L_162);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_163;
		L_163 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_162, 0, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_163);
		int32_t L_164 = 0;
		float L_165 = (L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_164));
		NullCheck(L_161);
		int32_t L_166 = ((int32_t)((int32_t)L_165));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_167 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_161)->GetAt(static_cast<il2cpp_array_size_t>(L_166));
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_168 = __this->get_ROUTE_10();
		NullCheck(L_168);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_169;
		L_169 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_168, 0, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_169);
		int32_t L_170 = 1;
		float L_171 = (L_169)->GetAt(static_cast<il2cpp_array_size_t>(L_170));
		NullCheck(L_167);
		int32_t L_172 = ((int32_t)((int32_t)L_171));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_173 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_167)->GetAt(static_cast<il2cpp_array_size_t>(L_172));
		NullCheck(L_173);
		int32_t L_174 = 2;
		float L_175 = (L_173)->GetAt(static_cast<il2cpp_array_size_t>(L_174));
		V_4 = ((float)il2cpp_codegen_subtract((float)L_175, (float)(0.5f)));
		// minx = (int)ROUTE[0][0];
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_176 = __this->get_ROUTE_10();
		NullCheck(L_176);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_177;
		L_177 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_176, 0, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_177);
		int32_t L_178 = 0;
		float L_179 = (L_177)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		V_5 = ((int32_t)((int32_t)L_179));
		// miny = (int)ROUTE[0][1];
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_180 = __this->get_ROUTE_10();
		NullCheck(L_180);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_181;
		L_181 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_180, 0, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_181);
		int32_t L_182 = 1;
		float L_183 = (L_181)->GetAt(static_cast<il2cpp_array_size_t>(L_182));
		V_6 = ((int32_t)((int32_t)L_183));
		// }
		goto IL_03d1;
	}

IL_0315:
	{
		// mincost = node[(int)changexy(this.transform.position.x, 0)[0]][(int)changexy(0, this.transform.position.y)[1]][2] - 0.5f;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_184 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_185;
		L_185 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_185);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_186;
		L_186 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_185, /*hidden argument*/NULL);
		float L_187 = L_186.get_x_2();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_188;
		L_188 = Astar_changexy_mCD4D9864FF4081B5EBBDE4B1910F78332290F5F6(__this, L_187, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_188);
		int32_t L_189 = 0;
		float L_190 = (L_188)->GetAt(static_cast<il2cpp_array_size_t>(L_189));
		NullCheck(L_184);
		int32_t L_191 = ((int32_t)((int32_t)L_190));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_192 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_184)->GetAt(static_cast<il2cpp_array_size_t>(L_191));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_193;
		L_193 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_193);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_194;
		L_194 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_193, /*hidden argument*/NULL);
		float L_195 = L_194.get_y_3();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_196;
		L_196 = Astar_changexy_mCD4D9864FF4081B5EBBDE4B1910F78332290F5F6(__this, (0.0f), L_195, /*hidden argument*/NULL);
		NullCheck(L_196);
		int32_t L_197 = 1;
		float L_198 = (L_196)->GetAt(static_cast<il2cpp_array_size_t>(L_197));
		NullCheck(L_192);
		int32_t L_199 = ((int32_t)((int32_t)L_198));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_200 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_192)->GetAt(static_cast<il2cpp_array_size_t>(L_199));
		NullCheck(L_200);
		int32_t L_201 = 2;
		float L_202 = (L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_201));
		V_4 = ((float)il2cpp_codegen_subtract((float)L_202, (float)(0.5f)));
		// minx = (int)changexy(this.transform.position.x, 0)[0];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_203;
		L_203 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_203);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_204;
		L_204 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_203, /*hidden argument*/NULL);
		float L_205 = L_204.get_x_2();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_206;
		L_206 = Astar_changexy_mCD4D9864FF4081B5EBBDE4B1910F78332290F5F6(__this, L_205, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_206);
		int32_t L_207 = 0;
		float L_208 = (L_206)->GetAt(static_cast<il2cpp_array_size_t>(L_207));
		V_5 = ((int32_t)((int32_t)L_208));
		// miny = (int)changexy(0, this.transform.position.y)[1];
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_209;
		L_209 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_209);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_210;
		L_210 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_209, /*hidden argument*/NULL);
		float L_211 = L_210.get_y_3();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_212;
		L_212 = Astar_changexy_mCD4D9864FF4081B5EBBDE4B1910F78332290F5F6(__this, (0.0f), L_211, /*hidden argument*/NULL);
		NullCheck(L_212);
		int32_t L_213 = 1;
		float L_214 = (L_212)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		V_6 = ((int32_t)((int32_t)L_214));
		// }
		goto IL_03d1;
	}

IL_03a4:
	{
		// minx = bigx * 9 + Random.Range(0,8);
		int32_t L_215 = V_7;
		int32_t L_216;
		L_216 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 8, /*hidden argument*/NULL);
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_215, (int32_t)((int32_t)9))), (int32_t)L_216));
		// miny = bigy * 9 + Random.Range(0,8);
		int32_t L_217 = V_8;
		int32_t L_218;
		L_218 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 8, /*hidden argument*/NULL);
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_217, (int32_t)((int32_t)9))), (int32_t)L_218));
		// mincost = node[minx][miny][2];
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_219 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_220 = V_5;
		NullCheck(L_219);
		int32_t L_221 = L_220;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_222 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_219)->GetAt(static_cast<il2cpp_array_size_t>(L_221));
		int32_t L_223 = V_6;
		NullCheck(L_222);
		int32_t L_224 = L_223;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_225 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_222)->GetAt(static_cast<il2cpp_array_size_t>(L_224));
		NullCheck(L_225);
		int32_t L_226 = 2;
		float L_227 = (L_225)->GetAt(static_cast<il2cpp_array_size_t>(L_226));
		V_4 = L_227;
	}

IL_03d1:
	{
		// for (i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_042b;
	}

IL_03d5:
	{
		// int rndx = Random.Range(0, 8);
		int32_t L_228;
		L_228 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 8, /*hidden argument*/NULL);
		V_12 = L_228;
		// int rndy = Random.Range(0, 8);
		int32_t L_229;
		L_229 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, 8, /*hidden argument*/NULL);
		V_13 = L_229;
		// if (mincost > node[bigx * 9 + rndx][bigy * 9 + rndy][2])
		float L_230 = V_4;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_231 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_232 = V_7;
		int32_t L_233 = V_12;
		NullCheck(L_231);
		int32_t L_234 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_232, (int32_t)((int32_t)9))), (int32_t)L_233));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_235 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_231)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		int32_t L_236 = V_8;
		int32_t L_237 = V_13;
		NullCheck(L_235);
		int32_t L_238 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_236, (int32_t)((int32_t)9))), (int32_t)L_237));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_239 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_238));
		NullCheck(L_239);
		int32_t L_240 = 2;
		float L_241 = (L_239)->GetAt(static_cast<il2cpp_array_size_t>(L_240));
		if ((!(((float)L_230) > ((float)L_241))))
		{
			goto IL_0427;
		}
	}
	{
		// minx = bigx * 9 + rndx;
		int32_t L_242 = V_7;
		int32_t L_243 = V_12;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_242, (int32_t)((int32_t)9))), (int32_t)L_243));
		// miny = bigy * 9 + rndy;
		int32_t L_244 = V_8;
		int32_t L_245 = V_13;
		V_6 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_multiply((int32_t)L_244, (int32_t)((int32_t)9))), (int32_t)L_245));
		// mincost = node[minx][miny][2];
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_246 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_247 = V_5;
		NullCheck(L_246);
		int32_t L_248 = L_247;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_249 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_246)->GetAt(static_cast<il2cpp_array_size_t>(L_248));
		int32_t L_250 = V_6;
		NullCheck(L_249);
		int32_t L_251 = L_250;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_252 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_249)->GetAt(static_cast<il2cpp_array_size_t>(L_251));
		NullCheck(L_252);
		int32_t L_253 = 2;
		float L_254 = (L_252)->GetAt(static_cast<il2cpp_array_size_t>(L_253));
		V_4 = L_254;
	}

IL_0427:
	{
		// for (i = 0; i < 3; i++)
		int32_t L_255 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_255, (int32_t)1));
	}

IL_042b:
	{
		// for (i = 0; i < 3; i++)
		int32_t L_256 = V_0;
		if ((((int32_t)L_256) < ((int32_t)3)))
		{
			goto IL_03d5;
		}
	}
	{
		// Goal[0] = minx;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_257 = __this->get_Goal_9();
		int32_t L_258 = V_5;
		NullCheck(L_257);
		(L_257)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_258)));
		// Goal[1] = miny;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_259 = __this->get_Goal_9();
		int32_t L_260 = V_6;
		NullCheck(L_259);
		(L_259)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_260)));
		// for (i = 0; i < 3; i++)
		V_0 = 0;
		goto IL_0468;
	}

IL_0449:
	{
		// for (j = 0; j < 6; j++)
		V_1 = 0;
		goto IL_0460;
	}

IL_044d:
	{
		// node_big[i][j] = 0;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_261 = __this->get_node_big_12();
		int32_t L_262 = V_0;
		NullCheck(L_261);
		int32_t L_263 = L_262;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_264 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_261)->GetAt(static_cast<il2cpp_array_size_t>(L_263));
		int32_t L_265 = V_1;
		NullCheck(L_264);
		(L_264)->SetAt(static_cast<il2cpp_array_size_t>(L_265), (float)(0.0f));
		// for (j = 0; j < 6; j++)
		int32_t L_266 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_266, (int32_t)1));
	}

IL_0460:
	{
		// for (j = 0; j < 6; j++)
		int32_t L_267 = V_1;
		if ((((int32_t)L_267) < ((int32_t)6)))
		{
			goto IL_044d;
		}
	}
	{
		// for (i = 0; i < 3; i++)
		int32_t L_268 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_268, (int32_t)1));
	}

IL_0468:
	{
		// for (i = 0; i < 3; i++)
		int32_t L_269 = V_0;
		if ((((int32_t)L_269) < ((int32_t)3)))
		{
			goto IL_0449;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Astar::sort(System.Collections.Generic.List`1<System.Single[]>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Astar_sort_mF334B3D5D2C23449EB8E187D4309B8F56CC122D0 (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * ___open0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_set_Item_mAA1DAA1B773B221ABFB460AE7292E40D8BD9BBB2_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_2 = NULL;
	{
		// for (i = 1; i < open.Count; i++)
		V_0 = 1;
		goto IL_0053;
	}

IL_0004:
	{
		// for (j = 0; j < open.Count - i; j++)
		V_1 = 0;
		goto IL_0044;
	}

IL_0008:
	{
		// if(open[j+1][2] < open[j][2])
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_0 = ___open0;
		int32_t L_1 = V_1;
		NullCheck(L_0);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_2;
		L_2 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)1)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_2);
		int32_t L_3 = 2;
		float L_4 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_5 = ___open0;
		int32_t L_6 = V_1;
		NullCheck(L_5);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7;
		L_7 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_5, L_6, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_7);
		int32_t L_8 = 2;
		float L_9 = (L_7)->GetAt(static_cast<il2cpp_array_size_t>(L_8));
		if ((!(((float)L_4) < ((float)L_9))))
		{
			goto IL_0040;
		}
	}
	{
		// float[] tmp = open[j];
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_10 = ___open0;
		int32_t L_11 = V_1;
		NullCheck(L_10);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_12;
		L_12 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_10, L_11, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		V_2 = L_12;
		// open[j] = open[j + 1];
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_13 = ___open0;
		int32_t L_14 = V_1;
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_15 = ___open0;
		int32_t L_16 = V_1;
		NullCheck(L_15);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17;
		L_17 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_15, ((int32_t)il2cpp_codegen_add((int32_t)L_16, (int32_t)1)), /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_13);
		List_1_set_Item_mAA1DAA1B773B221ABFB460AE7292E40D8BD9BBB2(L_13, L_14, L_17, /*hidden argument*/List_1_set_Item_mAA1DAA1B773B221ABFB460AE7292E40D8BD9BBB2_RuntimeMethod_var);
		// open[j + 1] = tmp;
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_18 = ___open0;
		int32_t L_19 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20 = V_2;
		NullCheck(L_18);
		List_1_set_Item_mAA1DAA1B773B221ABFB460AE7292E40D8BD9BBB2(L_18, ((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)), L_20, /*hidden argument*/List_1_set_Item_mAA1DAA1B773B221ABFB460AE7292E40D8BD9BBB2_RuntimeMethod_var);
	}

IL_0040:
	{
		// for (j = 0; j < open.Count - i; j++)
		int32_t L_21 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_21, (int32_t)1));
	}

IL_0044:
	{
		// for (j = 0; j < open.Count - i; j++)
		int32_t L_22 = V_1;
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_23 = ___open0;
		NullCheck(L_23);
		int32_t L_24;
		L_24 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_23, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		int32_t L_25 = V_0;
		if ((((int32_t)L_22) < ((int32_t)((int32_t)il2cpp_codegen_subtract((int32_t)L_24, (int32_t)L_25)))))
		{
			goto IL_0008;
		}
	}
	{
		// for (i = 1; i < open.Count; i++)
		int32_t L_26 = V_0;
		V_0 = ((int32_t)il2cpp_codegen_add((int32_t)L_26, (int32_t)1));
	}

IL_0053:
	{
		// for (i = 1; i < open.Count; i++)
		int32_t L_27 = V_0;
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_28 = ___open0;
		NullCheck(L_28);
		int32_t L_29;
		L_29 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_28, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		if ((((int32_t)L_27) < ((int32_t)L_29)))
		{
			goto IL_0004;
		}
	}
	{
		// }
		return;
	}
}
// System.Collections.IEnumerator Astar::A_star2(System.Single[],System.Single[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Astar_A_star2_mE2F64652B0310D2823826AD8BD0E23967F3A5B4B (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___start0, SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* ___goal1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * L_0 = (U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 *)il2cpp_codegen_object_new(U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39_il2cpp_TypeInfo_var);
		U3CA_star2U3Ed__21__ctor_m346058880E4547F91C4DA19C89FA2C9BD0930A71(L_0, 0, /*hidden argument*/NULL);
		U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * L_2 = L_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_3 = ___start0;
		NullCheck(L_2);
		L_2->set_start_3(L_3);
		U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * L_4 = L_2;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_5 = ___goal1;
		NullCheck(L_4);
		L_4->set_goal_4(L_5);
		return L_4;
	}
}
// System.Void Astar::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Astar__ctor_m292B38072E239A239C809971CFD1B4C6B38EF66C (Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public float[] Goal = new float[2];
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		__this->set_Goal_9(L_0);
		// List<float[]> ROUTE = new List<float[]>();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_1 = (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *)il2cpp_codegen_object_new(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_il2cpp_TypeInfo_var);
		List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64(L_1, /*hidden argument*/List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64_RuntimeMethod_var);
		__this->set_ROUTE_10(L_1);
		// float[][] node_big = new float[3][]; //[x][y] cost  3*6
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_2 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)SZArrayNew(SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_node_big_12(L_2);
		// List<float[]> open = new List<float[]>();
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_3 = (List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 *)il2cpp_codegen_object_new(List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019_il2cpp_TypeInfo_var);
		List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64(L_3, /*hidden argument*/List_1__ctor_m1CBF9055DAC526C35C8DF0753D97672EBD7DCB64_RuntimeMethod_var);
		__this->set_open_16(L_3);
		// float[] node_search = new float[3];//x,y,cost
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_node_search_17(L_4);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Astar::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Astar__cctor_m3A7DE91D20EF156F11E639B4D81947CE20D77B07 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static float[][][] node = new float[27][][]; //1080*2160?40*40?27*54=1458  [x][y][0~3] 0:openedx 1:openedy 2:cost 3:none/open/close
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_0 = (SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816*)(SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816*)SZArrayNew(SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816_il2cpp_TypeInfo_var, (uint32_t)((int32_t)27));
		((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->set_node_11(L_0);
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
// System.Void AudioController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_Start_m3F40FF5C596B593D9356258116798B8D2EF2CA18 (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9487BA5B24D476E0432A04A8BACF40AE30D9B972_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// clips = ClipTemp;
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_0 = __this->get_ClipTemp_6();
		((AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var))->set_clips_5(L_0);
		// audi = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mA69EBE3F73FD0F44F55FF2855F55FA6DA7B459EA_RuntimeMethod_var);
		__this->set_audi_7(L_1);
		// sounds = GetComponents<AudioSource>();
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_2;
		L_2 = Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9487BA5B24D476E0432A04A8BACF40AE30D9B972(__this, /*hidden argument*/Component_GetComponents_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_m9487BA5B24D476E0432A04A8BACF40AE30D9B972_RuntimeMethod_var);
		((AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var))->set_sounds_4(L_2);
		// StartCoroutine(ActiveBGM());
		RuntimeObject* L_3;
		L_3 = AudioController_ActiveBGM_m04BFA6F8AD4FD6A77595ED62BACC3DFA1630594F(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_4;
		L_4 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_3, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AudioController::ActiveBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioController_ActiveBGM_m04BFA6F8AD4FD6A77595ED62BACC3DFA1630594F (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 * L_0 = (U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 *)il2cpp_codegen_object_new(U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694_il2cpp_TypeInfo_var);
		U3CActiveBGMU3Ed__5__ctor_mBA1940EE5B5D28E17B618DAE3AD7E839CE74E2C7(L_0, 0, /*hidden argument*/NULL);
		U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void AudioController::playsound(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50 (int32_t ___clip0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sounds[1].PlayOneShot(clips[clip]);
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_0 = ((AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var))->get_sounds_4();
		NullCheck(L_0);
		int32_t L_1 = 1;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_2 = (L_0)->GetAt(static_cast<il2cpp_array_size_t>(L_1));
		AudioClipU5BU5D_t9BA3E7C4B62164BA2E054F3A82CD6CE6EB273CBE* L_3 = ((AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var))->get_clips_5();
		int32_t L_4 = ___clip0;
		NullCheck(L_3);
		int32_t L_5 = L_4;
		AudioClip_t16D2E573E7CC1C5118D8EE0F0692D46866A1C0EE * L_6 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_2);
		AudioSource_PlayOneShot_mA90B136041A61C30909301D45D0315088CA7D796(L_2, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void AudioController::stopBGM()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController_stopBGM_mD6353C36E8FBF84DECF05C4BA451C944F58C214F (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method)
{
	{
		// StartCoroutine(smallsound());
		RuntimeObject* L_0;
		L_0 = AudioController_smallsound_mF618BC29148DC32A3B0B68AC6E667890935A0E99(__this, /*hidden argument*/NULL);
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m3E33706D38B23CDD179E99BAD61E32303E9CC719(__this, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator AudioController::smallsound()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* AudioController_smallsound_mF618BC29148DC32A3B0B68AC6E667890935A0E99 (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031 * L_0 = (U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031 *)il2cpp_codegen_object_new(U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031_il2cpp_TypeInfo_var);
		U3CsmallsoundU3Ed__8__ctor_m08813FFBC7DB455861E033A225FFE99E5413CCFD(L_0, 0, /*hidden argument*/NULL);
		return L_0;
	}
}
// System.Void AudioController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioController__ctor_mFBC6DD9163DE0AC6DB9CD48A5D56326117FCDDEA (AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BRController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BRController_Start_m5BD19C29A60D137FEFA039675F70E47EC2EE7B43 (BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m2C908F7F3929EABBD494665EDD46CD7AE9AE7B9A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// sr = GetComponent<SpriteRenderer>();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_0;
		L_0 = Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249(__this, /*hidden argument*/Component_GetComponent_TisSpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF_m521C787DAC1426E4C5736B5FF65980D6444B9249_RuntimeMethod_var);
		__this->set_sr_5(L_0);
		// cc = GetComponent<CircleCollider2D>();
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_1;
		L_1 = Component_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m2C908F7F3929EABBD494665EDD46CD7AE9AE7B9A(__this, /*hidden argument*/Component_GetComponent_TisCircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913_m2C908F7F3929EABBD494665EDD46CD7AE9AE7B9A_RuntimeMethod_var);
		__this->set_cc_6(L_1);
		// sr.enabled = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_2 = __this->get_sr_5();
		NullCheck(L_2);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_2, (bool)0, /*hidden argument*/NULL);
		// cc.enabled = false;
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_3 = __this->get_cc_6();
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void BRController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BRController_Update_mAD05E9566C192E18CC62D559FA42685FEBDE122F (BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * __this, const RuntimeMethod* method)
{
	{
		// if (time > 0)
		int32_t L_0 = __this->get_time_8();
		if ((((int32_t)L_0) <= ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		// transform.localScale = defaultsize * size;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = __this->get_defaultsize_9();
		float L_3 = __this->get_size_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_2, L_3, /*hidden argument*/NULL);
		NullCheck(L_1);
		Transform_set_localScale_mF4D1611E48D1BA7566A1E166DC2DACF3ADD8BA3A(L_1, L_4, /*hidden argument*/NULL);
		// sr.color = sr.color * 0.5f;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = __this->get_sr_5();
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_6 = __this->get_sr_5();
		NullCheck(L_6);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_7;
		L_7 = SpriteRenderer_get_color_mAE96B8C6754CBE7820863BD5E97729B5DBF96EAC(L_6, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_8;
		L_8 = Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D(L_7, (0.5f), /*hidden argument*/NULL);
		NullCheck(L_5);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_5, L_8, /*hidden argument*/NULL);
		// size+=2;
		float L_9 = __this->get_size_7();
		__this->set_size_7(((float)il2cpp_codegen_add((float)L_9, (float)(2.0f))));
		// time--;
		int32_t L_10 = __this->get_time_8();
		__this->set_time_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_10, (int32_t)1)));
		// if (time <= 0)
		int32_t L_11 = __this->get_time_8();
		if ((((int32_t)L_11) > ((int32_t)0)))
		{
			goto IL_0086;
		}
	}
	{
		// sr.enabled = false;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_12 = __this->get_sr_5();
		NullCheck(L_12);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_12, (bool)0, /*hidden argument*/NULL);
		// cc.enabled = false;
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_13 = __this->get_cc_6();
		NullCheck(L_13);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_13, (bool)0, /*hidden argument*/NULL);
	}

IL_0086:
	{
		// }
		return;
	}
}
// System.Void BRController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BRController_OnTriggerEnter2D_mFB53CA408444A2F35F908FD2B8044022309343E5 (BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag(removersTag))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		String_t* L_2 = __this->get_removersTag_4();
		NullCheck(L_1);
		bool L_3;
		L_3 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001e;
		}
	}
	{
		// Destroy(collision.gameObject);
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_4 = ___collision0;
		NullCheck(L_4);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_4, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_5, /*hidden argument*/NULL);
	}

IL_001e:
	{
		// }
		return;
	}
}
// System.Void BRController::damagedremove(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BRController_damagedremove_mE3893D5D6143F4E65655EEC1EE4080B285275C9E (BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___trans0, const RuntimeMethod* method)
{
	{
		// this.transform.position = trans;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1 = ___trans0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_0, L_2, /*hidden argument*/NULL);
		// sr.enabled = true;
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_3 = __this->get_sr_5();
		NullCheck(L_3);
		Renderer_set_enabled_mFFBA418C428C1B2B151C77B879DD10C393D9D95B(L_3, (bool)1, /*hidden argument*/NULL);
		// cc.enabled = true;
		CircleCollider2D_tD909965F1FE89EA6CAF32E86E3675F16A79EB913 * L_4 = __this->get_cc_6();
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)1, /*hidden argument*/NULL);
		// sr.color = new Color(1,1,1,1);
		SpriteRenderer_t3F35AD5498243C170B46F5FFDB582AAEF78615EF * L_5 = __this->get_sr_5();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_6), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_5);
		SpriteRenderer_set_color_mF2888B03FBD14DAD540AB3F6617231712EB5CD33(L_5, L_6, /*hidden argument*/NULL);
		// size = 1;
		__this->set_size_7((1.0f));
		// time = 10;
		__this->set_time_8(((int32_t)10));
		// }
		return;
	}
}
// System.Void BRController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BRController__ctor_mA297FADEAC2A0D5447940660122C90BF42425939 (BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * __this, const RuntimeMethod* method)
{
	{
		// Vector3 defaultsize = new Vector3(1,1,0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_0), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_defaultsize_9(L_0);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void BlackoutController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlackoutController_Start_mBC420D23345CF3A0820AF3AD5C939E9284A1023A (BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// image = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		__this->set_image_4(L_0);
		// }
		return;
	}
}
// System.Void BlackoutController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlackoutController_Update_m17B17C2326B9928A9F034324F10ADDFABECF8302 (BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisAudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_m27CC78923661CD135373BCCF1F13AEB7A478A285_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisWLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997_mED6A78451F7571A05BA5F2A1A1286D513ACE408E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// wait -= Time.deltaTime;
		float L_0 = __this->get_wait_7();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_wait_7(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (wait <= 0)
		float L_2 = __this->get_wait_7();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0085;
		}
	}
	{
		// if (invframe <= 0)
		int32_t L_3 = __this->get_invframe_8();
		if ((((int32_t)L_3) > ((int32_t)0)))
		{
			goto IL_005c;
		}
	}
	{
		// Audio.GetComponent<AudioController>().stopBGM();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_Audio_5();
		NullCheck(L_4);
		AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * L_5;
		L_5 = GameObject_GetComponent_TisAudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_m27CC78923661CD135373BCCF1F13AEB7A478A285(L_4, /*hidden argument*/GameObject_GetComponent_TisAudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_m27CC78923661CD135373BCCF1F13AEB7A478A285_RuntimeMethod_var);
		NullCheck(L_5);
		AudioController_stopBGM_mD6353C36E8FBF84DECF05C4BA451C944F58C214F(L_5, /*hidden argument*/NULL);
		// wlsv.GetComponent<WLSViewerController>().winlose();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_wlsv_6();
		NullCheck(L_6);
		WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997 * L_7;
		L_7 = GameObject_GetComponent_TisWLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997_mED6A78451F7571A05BA5F2A1A1286D513ACE408E(L_6, /*hidden argument*/GameObject_GetComponent_TisWLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997_mED6A78451F7571A05BA5F2A1A1286D513ACE408E_RuntimeMethod_var);
		NullCheck(L_7);
		WLSViewerController_winlose_m54D5B61AB2B7A42B9BE3166A6EED47C3D79337ED(L_7, /*hidden argument*/NULL);
		// this.GetComponent<Button>().enabled = true;
		Button_tA893FC15AB26E1439AC25BDCA7079530587BB65D * L_8;
		L_8 = Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC(__this, /*hidden argument*/Component_GetComponent_TisButton_tA893FC15AB26E1439AC25BDCA7079530587BB65D_mED8C9575844B41F67CB4C2B13685FC0174CB61BC_RuntimeMethod_var);
		NullCheck(L_8);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_8, (bool)1, /*hidden argument*/NULL);
		// this.enabled = false;
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(__this, (bool)0, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_005c:
	{
		// image.color *= 1.2f;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_9 = __this->get_image_4();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_10 = L_9;
		NullCheck(L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_11;
		L_11 = VirtualFuncInvoker0< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(22 /* UnityEngine.Color UnityEngine.UI.Graphic::get_color() */, L_10);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_12;
		L_12 = Color_op_Multiply_m1A1E7DECD013FBEB99018CEDDC30B8A7CF99941D(L_11, (1.20000005f), /*hidden argument*/NULL);
		NullCheck(L_10);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_10, L_12);
		// invframe--;
		int32_t L_13 = __this->get_invframe_8();
		__this->set_invframe_8(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
	}

IL_0085:
	{
		// }
		return;
	}
}
// System.Void BlackoutController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void BlackoutController__ctor_m6C1787EA5A14DA71CB51CF1586711795794BA831 (BlackoutController_tE97E047EEAF2001DE47433A58B3F1E101F9BF90D * __this, const RuntimeMethod* method)
{
	{
		// float wait = 1.6f;
		__this->set_wait_7((1.60000002f));
		// int invframe = 15;
		__this->set_invframe_8(((int32_t)15));
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ButtonController_1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController_1_Start_m4E86C8B3B2C055C3D2862C14251FD43AFFD083D1 (ButtonController_1_t3677289B3860798FBAFDB73B8FEFB7F9E868C1B9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ButtonController_1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController_1_Update_m6954E42FF32D4FEC85D4C722DAD4A7A90D5325DC (ButtonController_1_t3677289B3860798FBAFDB73B8FEFB7F9E868C1B9 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ButtonController_1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ButtonController_1__ctor_mAB2507F6D112BCD02701858993419CA161B86158 (ButtonController_1_t3677289B3860798FBAFDB73B8FEFB7F9E868C1B9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CountDownActive::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownActive_Start_m51CD054F935DF31F806C47A0C975A8E9E8784C33 (CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4 * __this, const RuntimeMethod* method)
{
	{
		// time = 4;
		__this->set_time_4((4.0f));
		// }
		return;
	}
}
// System.Void CountDownActive::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownActive_Update_m7B266EC89F8930AEC0BAF4DF68A1D178B0BB6456 (CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisCountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4_m9FC37306AA5EBDFB18CF4B9198B982F19C955D9E_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// time -= Time.deltaTime;
		float L_0 = __this->get_time_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (time <= 0)
		float L_2 = __this->get_time_4();
		if ((!(((float)L_2) <= ((float)(0.0f)))))
		{
			goto IL_0031;
		}
	}
	{
		// ActiveScript();
		CountDownActive_ActiveScript_mEDD23EE9E3A4152ABFACBE4217CC264219089378(__this, /*hidden argument*/NULL);
		// this.GetComponent<CountDownActive>().enabled = false;
		CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4 * L_3;
		L_3 = Component_GetComponent_TisCountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4_m9FC37306AA5EBDFB18CF4B9198B982F19C955D9E(__this, /*hidden argument*/Component_GetComponent_TisCountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4_m9FC37306AA5EBDFB18CF4B9198B982F19C955D9E_RuntimeMethod_var);
		NullCheck(L_3);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_3, (bool)0, /*hidden argument*/NULL);
	}

IL_0031:
	{
		// }
		return;
	}
}
// System.Void CountDownActive::ActiveScript()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownActive_ActiveScript_mEDD23EE9E3A4152ABFACBE4217CC264219089378 (CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m29F7D7B5238455F12E2B8BDB08D243DC208C1FBF_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var sc = this.GetComponent<MonoBehaviour>();
		MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * L_0;
		L_0 = Component_GetComponent_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m29F7D7B5238455F12E2B8BDB08D243DC208C1FBF(__this, /*hidden argument*/Component_GetComponent_TisMonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A_m29F7D7B5238455F12E2B8BDB08D243DC208C1FBF_RuntimeMethod_var);
		// sc.enabled = true;
		NullCheck(L_0);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CountDownActive::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownActive__ctor_mEDB9B0C9501ED607F9CE2D00A2B0B1FD94EF0880 (CountDownActive_tE112CFC0320C8ABC41F0273A7CD6CB19C7E2ECA4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CountDownUIController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownUIController_Start_m5BBB24D64BFBFBF2CB144FBE568C8C83436B9766 (CountDownUIController_tC373B879933D521515C27C7D933F49A9F3F6E530 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFF9DDA88797040D643156653E46CDFD2F2FF07EB);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294_RuntimeMethod_var);
		__this->set_text_5(L_0);
		// text.text = "Ready...?";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_text_5();
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteralFF9DDA88797040D643156653E46CDFD2F2FF07EB);
		// time = 4f;
		__this->set_time_4((4.0f));
		// }
		return;
	}
}
// System.Void CountDownUIController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownUIController_Update_mF527DD3E21AF21B7A549CC5E050A2BC22FA31BA2 (CountDownUIController_tC373B879933D521515C27C7D933F49A9F3F6E530 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral78D958E853E9A979645D55A90BE243CCAC59E1B6);
		s_Il2CppMethodInitialized = true;
	}
	{
		// time -= Time.deltaTime;
		float L_0 = __this->get_time_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if(time <= 1) text.text = "Go!"; ;
		float L_2 = __this->get_time_4();
		if ((!(((float)L_2) <= ((float)(1.0f)))))
		{
			goto IL_002f;
		}
	}
	{
		// if(time <= 1) text.text = "Go!"; ;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_3 = __this->get_text_5();
		NullCheck(L_3);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_3, _stringLiteral78D958E853E9A979645D55A90BE243CCAC59E1B6);
	}

IL_002f:
	{
		// if (time <= 0)
		float L_4 = __this->get_time_4();
		if ((!(((float)L_4) <= ((float)(0.0f)))))
		{
			goto IL_0048;
		}
	}
	{
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_5, (bool)0, /*hidden argument*/NULL);
	}

IL_0048:
	{
		// }
		return;
	}
}
// System.Void CountDownUIController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CountDownUIController__ctor_mC6046E02249BE2595614350C736D395FADF5F059 (CountDownUIController_tC373B879933D521515C27C7D933F49A9F3F6E530 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void CreateObject::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateObject_Awake_mFB5C26F5F1E2A6890DC54115814E9AD1314C6756 (CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1__ctor_m2B9DF3A0BBBA5AF7766502C7B76A7A1265ECD727_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CreateObject_U3CAwakeU3Eb__1_0_mD4FC60FF03915F60FE96BEF393E2FE57A0A9A274_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1__ctor_m680BC4E6E206D83C45706CCCA010CAE698D9D038_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1__ctor_m138292004269834164631702859B406989FF3AF2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__1_1_m87D50C27238603FC84044FDC83FA35247063F79F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__1_2_mF6CF67E8DE953F42BDE31DD29C6CBAA85C7D1A8B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3CAwakeU3Eb__1_3_mD6A3DB6F8A32B95EAA3D92F12168D71F31013233_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B2_0 = NULL;
	Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * G_B2_1 = NULL;
	CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * G_B2_2 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B1_0 = NULL;
	Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * G_B1_1 = NULL;
	CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * G_B1_2 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B4_0 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B4_1 = NULL;
	Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * G_B4_2 = NULL;
	CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * G_B4_3 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B3_0 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B3_1 = NULL;
	Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * G_B3_2 = NULL;
	CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * G_B3_3 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B6_0 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B6_1 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B6_2 = NULL;
	Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * G_B6_3 = NULL;
	CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * G_B6_4 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B5_0 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B5_1 = NULL;
	Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * G_B5_2 = NULL;
	Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * G_B5_3 = NULL;
	CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * G_B5_4 = NULL;
	{
		// objectPool = new ObjectPool<GameObject>(() =>
		// {
		//     // ????????
		//     var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		//     var pooled = cube.AddComponent<PooledObject>();
		//     pooled.objectPool = objectPool;
		//     return cube;
		// },
		// target =>
		// {
		//     // ????p????
		//     //print("GET");
		//     target.SetActive(true);
		// },
		// target =>
		// {
		//     // ?v?[??????????
		//     //print("RELEASE");
		//     target.SetActive(false);
		// },
		// target =>
		// {
		//     // ?v?[??????e???????????j??????
		//     //print("DESTROY");
		//     Destroy(target);
		// }, true, 100, 1000);
		Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 * L_0 = (Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63 *)il2cpp_codegen_object_new(Func_1_t22348FC6C823C0CC22CF2CD27188E8EFA2260A63_il2cpp_TypeInfo_var);
		Func_1__ctor_m680BC4E6E206D83C45706CCCA010CAE698D9D038(L_0, __this, (intptr_t)((intptr_t)CreateObject_U3CAwakeU3Eb__1_0_mD4FC60FF03915F60FE96BEF393E2FE57A0A9A274_RuntimeMethod_var), /*hidden argument*/Func_1__ctor_m680BC4E6E206D83C45706CCCA010CAE698D9D038_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var);
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_1 = ((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->get_U3CU3E9__1_1_1();
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_2 = L_1;
		G_B1_0 = L_2;
		G_B1_1 = L_0;
		G_B1_2 = __this;
		if (L_2)
		{
			G_B2_0 = L_2;
			G_B2_1 = L_0;
			G_B2_2 = __this;
			goto IL_002c;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var);
		U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * L_3 = ((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_4 = (Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D *)il2cpp_codegen_object_new(Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D_il2cpp_TypeInfo_var);
		Action_1__ctor_m2B9DF3A0BBBA5AF7766502C7B76A7A1265ECD727(L_4, L_3, (intptr_t)((intptr_t)U3CU3Ec_U3CAwakeU3Eb__1_1_m87D50C27238603FC84044FDC83FA35247063F79F_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2B9DF3A0BBBA5AF7766502C7B76A7A1265ECD727_RuntimeMethod_var);
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_5 = L_4;
		((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->set_U3CU3E9__1_1_1(L_5);
		G_B2_0 = L_5;
		G_B2_1 = G_B1_1;
		G_B2_2 = G_B1_2;
	}

IL_002c:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var);
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_6 = ((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->get_U3CU3E9__1_2_2();
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_7 = L_6;
		G_B3_0 = L_7;
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
		if (L_7)
		{
			G_B4_0 = L_7;
			G_B4_1 = G_B2_0;
			G_B4_2 = G_B2_1;
			G_B4_3 = G_B2_2;
			goto IL_004b;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var);
		U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * L_8 = ((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_9 = (Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D *)il2cpp_codegen_object_new(Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D_il2cpp_TypeInfo_var);
		Action_1__ctor_m2B9DF3A0BBBA5AF7766502C7B76A7A1265ECD727(L_9, L_8, (intptr_t)((intptr_t)U3CU3Ec_U3CAwakeU3Eb__1_2_mF6CF67E8DE953F42BDE31DD29C6CBAA85C7D1A8B_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2B9DF3A0BBBA5AF7766502C7B76A7A1265ECD727_RuntimeMethod_var);
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_10 = L_9;
		((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->set_U3CU3E9__1_2_2(L_10);
		G_B4_0 = L_10;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
		G_B4_3 = G_B3_3;
	}

IL_004b:
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var);
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_11 = ((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->get_U3CU3E9__1_3_3();
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_12 = L_11;
		G_B5_0 = L_12;
		G_B5_1 = G_B4_0;
		G_B5_2 = G_B4_1;
		G_B5_3 = G_B4_2;
		G_B5_4 = G_B4_3;
		if (L_12)
		{
			G_B6_0 = L_12;
			G_B6_1 = G_B4_0;
			G_B6_2 = G_B4_1;
			G_B6_3 = G_B4_2;
			G_B6_4 = G_B4_3;
			goto IL_006a;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var);
		U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * L_13 = ((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_14 = (Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D *)il2cpp_codegen_object_new(Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D_il2cpp_TypeInfo_var);
		Action_1__ctor_m2B9DF3A0BBBA5AF7766502C7B76A7A1265ECD727(L_14, L_13, (intptr_t)((intptr_t)U3CU3Ec_U3CAwakeU3Eb__1_3_mD6A3DB6F8A32B95EAA3D92F12168D71F31013233_RuntimeMethod_var), /*hidden argument*/Action_1__ctor_m2B9DF3A0BBBA5AF7766502C7B76A7A1265ECD727_RuntimeMethod_var);
		Action_1_tA00EE0A45DD8953ADBDE415255E9E21CFECEC13D * L_15 = L_14;
		((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->set_U3CU3E9__1_3_3(L_15);
		G_B6_0 = L_15;
		G_B6_1 = G_B5_1;
		G_B6_2 = G_B5_2;
		G_B6_3 = G_B5_3;
		G_B6_4 = G_B5_4;
	}

IL_006a:
	{
		ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * L_16 = (ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 *)il2cpp_codegen_object_new(ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72_il2cpp_TypeInfo_var);
		ObjectPool_1__ctor_m138292004269834164631702859B406989FF3AF2(L_16, G_B6_3, G_B6_2, G_B6_1, G_B6_0, (bool)1, ((int32_t)100), ((int32_t)1000), /*hidden argument*/ObjectPool_1__ctor_m138292004269834164631702859B406989FF3AF2_RuntimeMethod_var);
		NullCheck(G_B6_4);
		G_B6_4->set_objectPool_4(L_16);
		// }
		return;
	}
}
// System.Void CreateObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateObject_Update_m9EEE4B8F1CD7E03A45C7FB62E73A9A6DA2BB9350 (CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Get_mA900C6F04967B5F3070E39D9CDC41FB5E05B358C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// GameObject pooledObject = objectPool.Get();
		ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * L_0 = __this->get_objectPool_4();
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = ObjectPool_1_Get_mA900C6F04967B5F3070E39D9CDC41FB5E05B358C(L_0, /*hidden argument*/ObjectPool_1_Get_mA900C6F04967B5F3070E39D9CDC41FB5E05B358C_RuntimeMethod_var);
		// pooledObject.transform.position = transform.position + transform.forward * 20 + Random.onUnitSphere * 5;
		NullCheck(L_1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_1, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_forward_mD850B9ECF892009E3485408DC0D375165B7BF053(L_5, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_6, (20.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		L_8 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_4, L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Random_get_onUnitSphere_m909066B4EAF5EE0A05D3C1DCBDADC55A2D6A4EED(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_9, (5.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_8, L_10, /*hidden argument*/NULL);
		NullCheck(L_2);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_2, L_11, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CreateObject::OnGUI()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateObject_OnGUI_m8DDE621E4371BF6CD98BC0E20770160B5B16B200 (CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_mA07E9D2B1A778365E5A956C5674C590821EEC9B4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_get_CountActive_m16EAB83E194EAE29E53C5C84A51E85013345BA2A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_get_CountInactive_m7456D9F9F5EAD348B5530F610506614EF6F3F4CD_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6AB64229E7831CE33DFF43028E56A68BEBC1C98F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralB04F5F8ABBA8357DC68CF9CA2FAD1A460B399391);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	{
		// GUILayout.Label("Pool Size: " + objectPool.CountInactive);
		ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * L_0 = __this->get_objectPool_4();
		NullCheck(L_0);
		int32_t L_1;
		L_1 = ObjectPool_1_get_CountInactive_m7456D9F9F5EAD348B5530F610506614EF6F3F4CD(L_0, /*hidden argument*/ObjectPool_1_get_CountInactive_m7456D9F9F5EAD348B5530F610506614EF6F3F4CD_RuntimeMethod_var);
		V_0 = L_1;
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralB04F5F8ABBA8357DC68CF9CA2FAD1A460B399391, L_2, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_4;
		L_4 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_mA07E9D2B1A778365E5A956C5674C590821EEC9B4_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_mA07E9D2B1A778365E5A956C5674C590821EEC9B4_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_3, L_4, /*hidden argument*/NULL);
		// GUILayout.Label("Active Size: " + objectPool.CountActive);
		ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * L_5 = __this->get_objectPool_4();
		NullCheck(L_5);
		int32_t L_6;
		L_6 = ObjectPool_1_get_CountActive_m16EAB83E194EAE29E53C5C84A51E85013345BA2A(L_5, /*hidden argument*/ObjectPool_1_get_CountActive_m16EAB83E194EAE29E53C5C84A51E85013345BA2A_RuntimeMethod_var);
		V_0 = L_6;
		String_t* L_7;
		L_7 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(&V_0), /*hidden argument*/NULL);
		String_t* L_8;
		L_8 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral6AB64229E7831CE33DFF43028E56A68BEBC1C98F, L_7, /*hidden argument*/NULL);
		GUILayoutOptionU5BU5D_tA0F031CC36F88BBBD25D6841ADD3913446E6EA2B* L_9;
		L_9 = Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_mA07E9D2B1A778365E5A956C5674C590821EEC9B4_inline(/*hidden argument*/Array_Empty_TisGUILayoutOption_t2D992ABCB62BEB24A6F4A826A5CBE7AE236071AB_mA07E9D2B1A778365E5A956C5674C590821EEC9B4_RuntimeMethod_var);
		GUILayout_Label_m0DD89429577B101820231347FB04CFC489245502(L_8, L_9, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void CreateObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CreateObject__ctor_mB34E09FB47F072E126B3CABA650E4053A7146E3C (CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// UnityEngine.GameObject CreateObject::<Awake>b__1_0()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * CreateObject_U3CAwakeU3Eb__1_0_mD4FC60FF03915F60FE96BEF393E2FE57A0A9A274 (CreateObject_t3BE0A2652F329966F45EE9B229407BF39E9AC179 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_AddComponent_TisPooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85_m7BF6B247011ED228668C56BFDBDA1D8020438294_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// var cube = GameObject.CreatePrimitive(PrimitiveType.Cube);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = GameObject_CreatePrimitive_mB1E03B8D373EBECCD93444A277316A53EC7812AC(3, /*hidden argument*/NULL);
		// var pooled = cube.AddComponent<PooledObject>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = L_0;
		NullCheck(L_1);
		PooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85 * L_2;
		L_2 = GameObject_AddComponent_TisPooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85_m7BF6B247011ED228668C56BFDBDA1D8020438294(L_1, /*hidden argument*/GameObject_AddComponent_TisPooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85_m7BF6B247011ED228668C56BFDBDA1D8020438294_RuntimeMethod_var);
		// pooled.objectPool = objectPool;
		ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * L_3 = __this->get_objectPool_4();
		NullCheck(L_2);
		L_2->set_objectPool_4(L_3);
		// return cube;
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
// System.Void CutController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CutController_Start_m1004647EF250E13057FBE0CF302B24A54142399E (CutController_t3754BC1240D9D6E5FFC092E5A474BFCEDB0F48A7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CutController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CutController_Update_mC01557F60B531DCD1A27701F2395E7362A553DAD (CutController_t3754BC1240D9D6E5FFC092E5A474BFCEDB0F48A7 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void CutController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void CutController__ctor_m1C437FC4EBCAF1B73BB0933B17798AF334A3522E (CutController_t3754BC1240D9D6E5FFC092E5A474BFCEDB0F48A7 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void DirectorController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectorController_Awake_mA4AA296661111AC2B64ACEDC7AB21BE7996F12D7 (DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2 * __this, const RuntimeMethod* method)
{
	{
		// Application.targetFrameRate = 30;
		Application_set_targetFrameRate_m0F44C8D07060E17D9D44D176888D14DBABE0CBFC(((int32_t)30), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void DirectorController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void DirectorController__ctor_m9D5725D39B87CE249F217E2A4116F95864236583 (DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EffectDestroyer::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDestroyer_Start_mBB7149EE664F5B8FD41CBBB877FE378E6D8C529F (EffectDestroyer_t78B2CD061FC3DE106B76E819ADC35AB894C1D3F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE62CD451806B89511819DE76FB895D72D6361836);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Invoke("BreakEffect", destroy_time);
		float L_0 = __this->get_destroy_time_4();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteralE62CD451806B89511819DE76FB895D72D6361836, L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EffectDestroyer::BreakEffect()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDestroyer_BreakEffect_mB74CA154F00F2FBAB7F05A20C95ECBBD7705406D (EffectDestroyer_t78B2CD061FC3DE106B76E819ADC35AB894C1D3F1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void EffectDestroyer::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EffectDestroyer__ctor_m5147EB5BBDDDCC2C3B461F7ED0B79D7C1D365449 (EffectDestroyer_t78B2CD061FC3DE106B76E819ADC35AB894C1D3F1 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void EnemyController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Awake_m087C7DD0CA5FE842BA91E56A21B5F4C9F32FA422 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50_m9A9524F9211924AE57A19A10A8FCEE17CDD75445_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// exp = 0;
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_exp_13(0);
		// lv = 0;
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_lv_14(0);
		// necessaryexp = 20;
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_necessaryexp_15(((int32_t)20));
		// Life = 3;
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_Life_4(3);
		// RApattern = RApattmp;
		int32_t L_0 = __this->get_RApattmp_19();
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_RApattern_20(L_0);
		// brcont = bulleremover.GetComponent<BRController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_bulleremover_21();
		NullCheck(L_1);
		BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * L_2;
		L_2 = GameObject_GetComponent_TisBRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50_m9A9524F9211924AE57A19A10A8FCEE17CDD75445(L_1, /*hidden argument*/GameObject_GetComponent_TisBRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50_m9A9524F9211924AE57A19A10A8FCEE17CDD75445_RuntimeMethod_var);
		__this->set_brcont_22(L_2);
		// }
		return;
	}
}
// System.Void EnemyController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_Update_mDB0B02F4008FD062F471267A67A06169E1BC1B3C (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	{
		// if (Life < 0)
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_Life_4();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0061;
		}
	}
	{
		// Instantiate(KOeffect, new Vector2(this.transform.position.x,transform.position.y * -1), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_KOeffect_23();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_8), L_4, ((float)il2cpp_codegen_multiply((float)L_7, (float)(-1.0f))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_1, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// blackout.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_blackout_12();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)1, /*hidden argument*/NULL);
		// AudioController.playsound(8);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(8, /*hidden argument*/NULL);
		// Pauser.Pause();
		IL2CPP_RUNTIME_CLASS_INIT(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		Pauser_Pause_m18B94354A9EAF1363FE65BECC3953FC3E0F478DB(/*hidden argument*/NULL);
		// return;
		return;
	}

IL_0061:
	{
		// untiltap--;
		int32_t L_13 = __this->get_untiltap_17();
		__this->set_untiltap_17(((int32_t)il2cpp_codegen_subtract((int32_t)L_13, (int32_t)1)));
		// if (untiltap <= 0)
		int32_t L_14 = __this->get_untiltap_17();
		if ((((int32_t)L_14) > ((int32_t)0)))
		{
			goto IL_009b;
		}
	}
	{
		// untiltap = tapspeed + Random.Range(0,10);
		int32_t L_15 = __this->get_tapspeed_16();
		int32_t L_16;
		L_16 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(0, ((int32_t)10), /*hidden argument*/NULL);
		__this->set_untiltap_17(((int32_t)il2cpp_codegen_add((int32_t)L_15, (int32_t)L_16)));
		// untilRemoteAttack--;
		int32_t L_17 = __this->get_untilRemoteAttack_18();
		__this->set_untilRemoteAttack_18(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
	}

IL_009b:
	{
		// if (untilRemoteAttack <= 0)
		int32_t L_18 = __this->get_untilRemoteAttack_18();
		if ((((int32_t)L_18) > ((int32_t)0)))
		{
			goto IL_0118;
		}
	}
	{
		// x = Random.Range(-1.5f, 1.5f);
		float L_19;
		L_19 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.5f), (1.5f), /*hidden argument*/NULL);
		V_0 = L_19;
		// y = Random.Range(-4.0f, -1.0f);
		float L_20;
		L_20 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-4.0f), (-1.0f), /*hidden argument*/NULL);
		V_1 = L_20;
		// Instantiate(effect2, new Vector2(x, y), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21 = __this->get_effect2_10();
		float L_22 = V_0;
		float L_23 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_24), L_22, L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_24, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_21, L_25, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(turret, new Vector2(x, y), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_turret_11();
		float L_29 = V_0;
		float L_30 = V_1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_31;
		memset((&L_31), 0, sizeof(L_31));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_31), L_29, L_30, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_31, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_34;
		L_34 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_28, L_32, L_33, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// untilRemoteAttack = 8 - (int)Mathf.Floor(lv / 4f);
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_35 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_lv_14();
		float L_36;
		L_36 = floorf(((float)((float)((float)((float)L_35))/(float)(4.0f))));
		__this->set_untilRemoteAttack_18(((int32_t)il2cpp_codegen_subtract((int32_t)8, (int32_t)((int32_t)((int32_t)L_36)))));
	}

IL_0118:
	{
		// if (exp > necessaryexp)
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_37 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_exp_13();
		int32_t L_38 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_necessaryexp_15();
		if ((((int32_t)L_37) <= ((int32_t)L_38)))
		{
			goto IL_015c;
		}
	}
	{
		// if (lv < 16) lv++;
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_39 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_lv_14();
		if ((((int32_t)L_39) >= ((int32_t)((int32_t)16))))
		{
			goto IL_0139;
		}
	}
	{
		// if (lv < 16) lv++;
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_40 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_lv_14();
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_lv_14(((int32_t)il2cpp_codegen_add((int32_t)L_40, (int32_t)1)));
	}

IL_0139:
	{
		// exp = 0;
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_exp_13(0);
		// necessaryexp = (int)Mathf.Floor(necessaryexp * 1.2f);
		int32_t L_41 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_necessaryexp_15();
		float L_42;
		L_42 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_41)), (float)(1.20000005f))));
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_necessaryexp_15(((int32_t)((int32_t)L_42)));
		// AudioController.playsound(5);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(5, /*hidden argument*/NULL);
	}

IL_015c:
	{
		// if (cooldown <= 0)
		float L_43 = __this->get_cooldown_6();
		if ((!(((float)L_43) <= ((float)(0.0f)))))
		{
			goto IL_02f8;
		}
	}
	{
		// if (DirectorController.gamestagenum <= 4)
		int32_t L_44 = ((DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_StaticFields*)il2cpp_codegen_static_fields_for(DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_il2cpp_TypeInfo_var))->get_gamestagenum_4();
		if ((((int32_t)L_44) > ((int32_t)4)))
		{
			goto IL_01fd;
		}
	}
	{
		// Instantiate(obj, this.transform.position, Quaternion.Euler(0, 0, -90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_45 = __this->get_obj_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_46;
		L_46 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_46);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_47;
		L_47 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_46, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_48;
		L_48 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_49;
		L_49 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_45, L_47, L_48, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(obj, this.transform.position, Quaternion.Euler(0, 0, -135));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_50 = __this->get_obj_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_51;
		L_51 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_51);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_51, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_53;
		L_53 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-135.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_54;
		L_54 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_50, L_52, L_53, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(obj, this.transform.position, Quaternion.Euler(0, 0, -45));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_55 = __this->get_obj_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_56;
		L_56 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_56);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_57;
		L_57 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_56, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_58;
		L_58 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-45.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_59;
		L_59 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_55, L_57, L_58, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// }
		goto IL_02d4;
	}

IL_01fd:
	{
		// Instantiate(obj, this.transform.position, Quaternion.Euler(0, 0, -90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_60 = __this->get_obj_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_61;
		L_61 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_61);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_62;
		L_62 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_61, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_63;
		L_63 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64;
		L_64 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_60, L_62, L_63, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(obj, this.transform.position, Quaternion.Euler(0, 0, -135));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_65 = __this->get_obj_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_66;
		L_66 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_66);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_67;
		L_67 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_66, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_68;
		L_68 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-135.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_69;
		L_69 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_65, L_67, L_68, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(obj, this.transform.position, Quaternion.Euler(0, 0, -45));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_70 = __this->get_obj_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_71;
		L_71 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_71);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_72;
		L_72 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_71, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_73;
		L_73 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-45.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_74;
		L_74 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_70, L_72, L_73, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(obj, this.transform.position, Quaternion.Euler(0, 0, -110));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_75 = __this->get_obj_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_76;
		L_76 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_76);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_77;
		L_77 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_76, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_78;
		L_78 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-110.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_79;
		L_79 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_75, L_77, L_78, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(obj, this.transform.position, Quaternion.Euler(0, 0, -70));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_80 = __this->get_obj_8();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_81;
		L_81 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_81);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_82;
		L_82 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_81, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_83;
		L_83 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (-70.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_84;
		L_84 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_80, L_82, L_83, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
	}

IL_02d4:
	{
		// cooldown = 1 - 0.03125f * lv;
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_85 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_lv_14();
		__this->set_cooldown_6(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)(0.03125f), (float)((float)((float)L_85)))))));
		// exp++;
		int32_t L_86 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_exp_13();
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_exp_13(((int32_t)il2cpp_codegen_add((int32_t)L_86, (int32_t)1)));
	}

IL_02f8:
	{
		// cooldown -= Time.deltaTime;
		float L_87 = __this->get_cooldown_6();
		float L_88;
		L_88 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_cooldown_6(((float)il2cpp_codegen_subtract((float)L_87, (float)L_88)));
		// }
		return;
	}
}
// System.Void EnemyController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController_OnTriggerEnter2D_m5060DE6927FCA820EFF60D92F7BE25125142BBD8 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A295EDE3ECFF3239B4F17D4CD136E4747604FDE);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("BulletsP1"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteral5A295EDE3ECFF3239B4F17D4CD136E4747604FDE, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_0080;
		}
	}
	{
		// brcont.damagedremove(this.transform.position);
		BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * L_3 = __this->get_brcont_22();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		BRController_damagedremove_mE3893D5D6143F4E65655EEC1EE4080B285275C9E(L_3, L_6, /*hidden argument*/NULL);
		// Instantiate(effect, new Vector3(transform.position.x, transform.position.y * -1,0), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_effect_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		float L_10 = L_9.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		float L_13 = L_12.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		memset((&L_14), 0, sizeof(L_14));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_14), L_10, ((float)il2cpp_codegen_multiply((float)L_13, (float)(-1.0f))), (0.0f), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_7, L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// AudioController.playsound(0);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(0, /*hidden argument*/NULL);
		// Life--;
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_17 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_Life_4();
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_Life_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_17, (int32_t)1)));
	}

IL_0080:
	{
		// }
		return;
	}
}
// System.Void EnemyController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController__ctor_m547F49905D505F962CBC708846F8E8A3B0838F70 (EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB * __this, const RuntimeMethod* method)
{
	{
		// public int untilRemoteAttack = 8;
		__this->set_untilRemoteAttack_18(8);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void EnemyController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void EnemyController__cctor_m52CD66A2FE52C638BB36114BD4E7C0144C160FEC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public int Life = 3;
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_Life_4(3);
		// static public int exp = 0;
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_exp_13(0);
		// static public int lv = 0;
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_lv_14(0);
		// static public int necessaryexp = 20;
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_necessaryexp_15(((int32_t)20));
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
// System.Void ExpBarController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpBarController_Start_mD4A635A23BF1DC2CF601845058CEB3BC6E5CA652 (ExpBarController_t6131D21F3F53C5E87A794EE2341E5BC0427D3F27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bar = GetComponent<Image>();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0;
		L_0 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		__this->set_bar_4(L_0);
		// }
		return;
	}
}
// System.Void ExpBarController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpBarController_Update_m8F3A6CB5FEB3CCF16048724F2AE3FC3A8F7CC8E1 (ExpBarController_t6131D21F3F53C5E87A794EE2341E5BC0427D3F27 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// bar.fillAmount = (float)PlayerController.exp / PlayerController.necessaryexp;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_0 = __this->get_bar_4();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_1 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_exp_19();
		int32_t L_2 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_necessaryexp_22();
		NullCheck(L_0);
		Image_set_fillAmount_m1D28CFC9B15A45AB6C561AA42BD8F305605E9E3C(L_0, ((float)((float)((float)((float)L_1))/(float)((float)((float)L_2)))), /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void ExpBarController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpBarController__ctor_mFD19A8D23B95C4636C0CD16ADAA1D5DD0B47D1DD (ExpBarController_t6131D21F3F53C5E87A794EE2341E5BC0427D3F27 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ExpController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpController_Start_m293A6DB1761A02589C1E7146A9BBD5ED2134D184 (ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70);
		s_Il2CppMethodInitialized = true;
	}
	{
		// transform.rotation = Quaternion.Euler(0, 0, Random.Range(-180, 180));
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		int32_t L_1;
		L_1 = Random_Range_m4B3A0037ACA057F33C94508F908546B9317D996A(((int32_t)-180), ((int32_t)180), /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_2;
		L_2 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)((float)L_1)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_0, L_2, /*hidden argument*/NULL);
		// time = 0;
		__this->set_time_4((0.0f));
		// time_rnd = Random.Range(0.4f, 0.6f);
		float L_3;
		L_3 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((0.400000006f), (0.600000024f), /*hidden argument*/NULL);
		__this->set_time_rnd_5(L_3);
		// player = GameObject.Find("Player");
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_Find_m20157C941F1A9DA0E33E0ACA1324FAA41C2B199B(_stringLiteralCAF8804297181FF007CA835529DD4477CFD94A70, /*hidden argument*/NULL);
		__this->set_player_8(L_4);
		// }
		return;
	}
}
// System.Void ExpController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpController_FixedUpdate_m4547B9BDEE56A3AEE6DCD7F5EFDB2B8C5CDF2808 (ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// time += Time.deltaTime;
		float L_0 = __this->get_time_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_4(((float)il2cpp_codegen_add((float)L_0, (float)L_1)));
		// if (time <= time_rnd)
		float L_2 = __this->get_time_4();
		float L_3 = __this->get_time_rnd_5();
		if ((!(((float)L_2) <= ((float)L_3))))
		{
			goto IL_0084;
		}
	}
	{
		// Vector3 velocity = gameObject.transform.rotation * new Vector3(speed, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_6;
		L_6 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_5, /*hidden argument*/NULL);
		float L_7 = __this->get_speed_6();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), L_7, (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_6, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		// gameObject.transform.position += velocity * Time.deltaTime;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = L_11;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_0;
		float L_15;
		L_15 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_14, L_15, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_16, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_17, /*hidden argument*/NULL);
		// start_pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		__this->set_start_pos_7(L_19);
		// }
		goto IL_00bd;
	}

IL_0084:
	{
		// this.transform.position = Vector3.Slerp(start_pos, player.transform.position,(time - time_rnd) * 2.0f);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_21 = __this->get_start_pos_7();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_22 = __this->get_player_8();
		NullCheck(L_22);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_23;
		L_23 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_22, /*hidden argument*/NULL);
		NullCheck(L_23);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_24;
		L_24 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_23, /*hidden argument*/NULL);
		float L_25 = __this->get_time_4();
		float L_26 = __this->get_time_rnd_5();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_27;
		L_27 = Vector3_Slerp_mEDBE029B9D394258437E16D858F2C96D72A36B7B(L_21, L_24, ((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)L_25, (float)L_26)), (float)(2.0f))), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_20, L_27, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// if((this.transform.position - player.transform.position).magnitude < 0.1f)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_28);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_28, /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_30 = __this->get_player_8();
		NullCheck(L_30);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_31;
		L_31 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_30, /*hidden argument*/NULL);
		NullCheck(L_31);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32;
		L_32 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_31, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_29, L_32, /*hidden argument*/NULL);
		V_1 = L_33;
		float L_34;
		L_34 = Vector3_get_magnitude_mDDD40612220D8104E77E993E18A101A69A944991((Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E *)(&V_1), /*hidden argument*/NULL);
		if ((!(((float)L_34) < ((float)(0.100000001f)))))
		{
			goto IL_00f7;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_35;
		L_35 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_35, /*hidden argument*/NULL);
	}

IL_00f7:
	{
		// }
		return;
	}
}
// System.Void ExpController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ExpController__ctor_m1E90491424B345A60B2BA559468BC3FB87006CB0 (ExpController_tEAFCF111B8C11E6C67B0715802663C58183BF653 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void GrazeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrazeController_Update_mA9E908CF67000FB5C164BD45E00286C443E27764 (GrazeController_t85E7089B4621F5BA3BE766B9C83F3C424AAB2C6F * __this, const RuntimeMethod* method)
{
	{
		// soundtime -= Time.deltaTime;
		float L_0 = __this->get_soundtime_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_soundtime_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// if (soundtime < 0) soundtime = 0;
		float L_2 = __this->get_soundtime_4();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_002a;
		}
	}
	{
		// if (soundtime < 0) soundtime = 0;
		__this->set_soundtime_4((0.0f));
	}

IL_002a:
	{
		// }
		return;
	}
}
// System.Void GrazeController::OnTriggerStay2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrazeController_OnTriggerStay2D_m3C443F329A280DCD39A2CCF945488C1D76D44B82 (GrazeController_t85E7089B4621F5BA3BE766B9C83F3C424AAB2C6F * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5A295EDE3ECFF3239B4F17D4CD136E4747604FDE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6CAB3674B75C6FE5C112BB8FFAC7C83D21A3D9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enemy == false && soundtime <= 0)
		bool L_0 = __this->get_enemy_6();
		if (L_0)
		{
			goto IL_0053;
		}
	}
	{
		float L_1 = __this->get_soundtime_4();
		if ((!(((float)L_1) <= ((float)(0.0f)))))
		{
			goto IL_0053;
		}
	}
	{
		// if (collision.gameObject.CompareTag("BulletsP2")){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_2 = ___collision0;
		NullCheck(L_2);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_2, /*hidden argument*/NULL);
		NullCheck(L_3);
		bool L_4;
		L_4 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_3, _stringLiteralD6CAB3674B75C6FE5C112BB8FFAC7C83D21A3D9B, /*hidden argument*/NULL);
		if (!L_4)
		{
			goto IL_0083;
		}
	}
	{
		// AudioController.playsound(3);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(3, /*hidden argument*/NULL);
		// PlayerController.exp++;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_5 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_exp_19();
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_exp_19(((int32_t)il2cpp_codegen_add((int32_t)L_5, (int32_t)1)));
		// PlayerController.score += 10;
		int32_t L_6 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_score_21();
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)((int32_t)10))));
		// soundtime = timeout;
		float L_7 = __this->get_timeout_5();
		__this->set_soundtime_4(L_7);
		// }
		return;
	}

IL_0053:
	{
		// if (collision.gameObject.CompareTag("BulletsP1")){
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_8 = ___collision0;
		NullCheck(L_8);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_9;
		L_9 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_8, /*hidden argument*/NULL);
		NullCheck(L_9);
		bool L_10;
		L_10 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_9, _stringLiteral5A295EDE3ECFF3239B4F17D4CD136E4747604FDE, /*hidden argument*/NULL);
		if (!L_10)
		{
			goto IL_0083;
		}
	}
	{
		// AudioController.playsound(6);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(6, /*hidden argument*/NULL);
		// EnemyController.exp++;
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_11 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_exp_13();
		((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->set_exp_13(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		// soundtime = timeout;
		float L_12 = __this->get_timeout_5();
		__this->set_soundtime_4(L_12);
	}

IL_0083:
	{
		// }
		return;
	}
}
// System.Void GrazeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GrazeController__ctor_mFFB1D8379920B8AA788C934AC060C0741667C9F8 (GrazeController_t85E7089B4621F5BA3BE766B9C83F3C424AAB2C6F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void InvisibleController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvisibleController_Start_m4EB21D8FFD189F1E63EFDFB419FB3786C1045C81 (InvisibleController_t746E091E6D04AA665B2D435D0345DFD3EB8F312B * __this, const RuntimeMethod* method)
{
	{
		// alpha = 1;
		__this->set_alpha_4((1.0f));
		// }
		return;
	}
}
// System.Void InvisibleController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvisibleController_Update_mAB02D073B09FCA23ED7ABA83E2E8C746CB680C63 (InvisibleController_t746E091E6D04AA665B2D435D0345DFD3EB8F312B * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// alpha -= Time.deltaTime;
		float L_0 = __this->get_alpha_4();
		float L_1;
		L_1 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_alpha_4(((float)il2cpp_codegen_subtract((float)L_0, (float)L_1)));
		// var image = this.GetComponent<Image>().color = new Color (1, 1, 1, alpha);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_2;
		L_2 = Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D(__this, /*hidden argument*/Component_GetComponent_TisImage_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C_m5D5D0C1BB7E1E67F46C955DA2861E7B83FC7301D_RuntimeMethod_var);
		float L_3 = __this->get_alpha_4();
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 *)(&V_0), (1.0f), (1.0f), (1.0f), L_3, /*hidden argument*/NULL);
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_4 = V_0;
		NullCheck(L_2);
		VirtualActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_2, L_4);
		// if (alpha <= 0)
		float L_5 = __this->get_alpha_4();
		if ((!(((float)L_5) <= ((float)(0.0f)))))
		{
			goto IL_0052;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_6, /*hidden argument*/NULL);
	}

IL_0052:
	{
		// }
		return;
	}
}
// System.Void InvisibleController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvisibleController__ctor_mD722BF44FDFD5522C8FBA36D50A7A118F40BBD33 (InvisibleController_t746E091E6D04AA665B2D435D0345DFD3EB8F312B * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ItemController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemController_Start_m6558C94D25721DAE7F72B014CDD7FD5BD6E1CC0D (ItemController_t014D2DFBE80E6C01E177CF08508B3C5F55666008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		__this->set_rb_5(L_0);
		// }
		return;
	}
}
// System.Void ItemController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemController_Update_mE36851F099595C99F2B073D240EE1B0945E79A0E (ItemController_t014D2DFBE80E6C01E177CF08508B3C5F55666008 * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void ItemController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemController_FixedUpdate_mEB67B1CE7574622130FEA18A9B812D0B790FE258 (ItemController_t014D2DFBE80E6C01E177CF08508B3C5F55666008 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rb.MovePosition(new Vector2(transform.position.x,transform.position.y + speed * Time.deltaTime));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0 = __this->get_rb_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		float L_6 = L_5.get_y_3();
		float L_7 = __this->get_speed_4();
		float L_8;
		L_8 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_9), L_3, ((float)il2cpp_codegen_add((float)L_6, (float)((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)))), /*hidden argument*/NULL);
		NullCheck(L_0);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_0, L_9, /*hidden argument*/NULL);
		// if (this.transform.position.y > 10)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_10;
		L_10 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11;
		L_11 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_10, /*hidden argument*/NULL);
		float L_12 = L_11.get_y_3();
		if ((!(((float)L_12) > ((float)(10.0f)))))
		{
			goto IL_005f;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13;
		L_13 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_13, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// }
		return;
	}
}
// System.Void ItemController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ItemController__ctor_m5EB571A3AD3B0DA80AAE5DE040E4C841B6AA99AB (ItemController_t014D2DFBE80E6C01E177CF08508B3C5F55666008 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LifeController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeController_Start_mB26557B1770E4638F18092C937ED1C04693B203E (LifeController_t27399F73AFC41F0E58E82F1D2EEE482D1A96A0B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// ani = this.GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_0;
		L_0 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_mF86B79BED8570481BDFC54EAEF1F692E0508BA38_RuntimeMethod_var);
		__this->set_ani_6(L_0);
		// }
		return;
	}
}
// System.Void LifeController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeController_Update_m34C93908CE32BEC32BE90B10F5600EE3E849399C (LifeController_t27399F73AFC41F0E58E82F1D2EEE482D1A96A0B9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enemy == 0)
		int32_t L_0 = __this->get_enemy_5();
		if (L_0)
		{
			goto IL_0038;
		}
	}
	{
		// if (LifeNum > PlayerController.Life)
		int32_t L_1 = __this->get_LifeNum_4();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_2 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_Life_4();
		if ((((int32_t)L_1) <= ((int32_t)L_2)))
		{
			goto IL_0058;
		}
	}
	{
		// if (LifeNum == 1)
		int32_t L_3 = __this->get_LifeNum_4();
		if ((!(((uint32_t)L_3) == ((uint32_t)1))))
		{
			goto IL_0024;
		}
	}
	{
		// AudioController.playsound(7);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(7, /*hidden argument*/NULL);
	}

IL_0024:
	{
		// ani.enabled = true;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_4 = __this->get_ani_6();
		NullCheck(L_4);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_4, (bool)1, /*hidden argument*/NULL);
		// LifeNum = -1;
		__this->set_LifeNum_4((-1));
		// }
		return;
	}

IL_0038:
	{
		// if (LifeNum > EnemyController.Life)
		int32_t L_5 = __this->get_LifeNum_4();
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_6 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_Life_4();
		if ((((int32_t)L_5) <= ((int32_t)L_6)))
		{
			goto IL_0058;
		}
	}
	{
		// ani.enabled = true;
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_ani_6();
		NullCheck(L_7);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_7, (bool)1, /*hidden argument*/NULL);
		// LifeNum = -1;
		__this->set_LifeNum_4((-1));
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void LifeController::setnonActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeController_setnonActive_mA0D5772135775629E735ECB4590CA461B2F54D16 (LifeController_t27399F73AFC41F0E58E82F1D2EEE482D1A96A0B9 * __this, const RuntimeMethod* method)
{
	{
		// this.gameObject.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0;
		L_0 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void LifeController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LifeController__ctor_mE4F2DBAAEAC23EA8B74928B639F60FAE7A98861C (LifeController_t27399F73AFC41F0E58E82F1D2EEE482D1A96A0B9 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LoadScene::NextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene_NextScene_mAB70D44A6F1741163BE027F902FB9C7E6D45C5C2 (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCAC80D302C1ED8BFCC7807E27A0825EFFA2BAF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loadUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_loadUI_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine("LoadData");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteralBCAC80D302C1ED8BFCC7807E27A0825EFFA2BAF0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LoadScene::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadScene_LoadData_m74B614D587BD3D845690157A271B239F7236502A (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 * L_0 = (U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 *)il2cpp_codegen_object_new(U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854_il2cpp_TypeInfo_var);
		U3CLoadDataU3Ed__4__ctor_mD54DA04DC49F70D70F3190A0289A0757309D1A79(L_0, 0, /*hidden argument*/NULL);
		U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void LoadScene::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadScene__ctor_m3003C0157CC4154E26B2ABFEF86DAF98ED17150F (LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LoadingController::NextScene()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingController_NextScene_mFF38856567D62579656481C4F43C6CEB42D7EE00 (LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBCAC80D302C1ED8BFCC7807E27A0825EFFA2BAF0);
		s_Il2CppMethodInitialized = true;
	}
	{
		// loadUI.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_loadUI_5();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// StartCoroutine("LoadData");
		Coroutine_t899D5232EF542CB8BA70AF9ECEECA494FAA9CCB7 * L_1;
		L_1 = MonoBehaviour_StartCoroutine_m338FBDDDEBF67D9FC1F9E5CDEE50E66726454E2E(__this, _stringLiteralBCAC80D302C1ED8BFCC7807E27A0825EFFA2BAF0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Collections.IEnumerator LoadingController::LoadData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* LoadingController_LoadData_mBBF38ADE0FBAB8D6AF86D8E73D657CDADE8B2D9E (LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF * L_0 = (U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF *)il2cpp_codegen_object_new(U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF_il2cpp_TypeInfo_var);
		U3CLoadDataU3Ed__4__ctor_mB257EFFC0DACB93C9DB128EEA604B7138FCDE05B(L_0, 0, /*hidden argument*/NULL);
		U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF * L_1 = L_0;
		NullCheck(L_1);
		L_1->set_U3CU3E4__this_2(__this);
		return L_1;
	}
}
// System.Void LoadingController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LoadingController__ctor_mA0787CA7AD938B610D341FDA032E0C09AE2C3C70 (LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void LvviewController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LvviewController_Start_mA10120148227ABBD38FFB183CE9651D21EE30FC7 (LvviewController_t27644D2A5EFC8834D05AF90750B56A0D35D8110C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C1E1E5747AAC763E049946F18A9952014D0468B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Ltext = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294_RuntimeMethod_var);
		__this->set_Ltext_4(L_0);
		// Ltext.text = "Lv0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_Ltext_4();
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral0C1E1E5747AAC763E049946F18A9952014D0468B);
		// }
		return;
	}
}
// System.Void LvviewController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LvviewController_Update_m7A76153E34EA32E792050C7E6F216EF03C838857 (LvviewController_t27644D2A5EFC8834D05AF90750B56A0D35D8110C * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFA3B5499785CBEEA66513CEE09402FBF10AF5FBF);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (enemy==false) {
		bool L_0 = __this->get_enemy_5();
		if (L_0)
		{
			goto IL_0028;
		}
	}
	{
		// Ltext.text = "lv" + PlayerController.lv;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_Ltext_4();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_address_of_lv_20()), /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFA3B5499785CBEEA66513CEE09402FBF10AF5FBF, L_2, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}

IL_0028:
	{
		// Ltext.text = "lv" + EnemyController.lv;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_Ltext_4();
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Int32_ToString_m340C0A14D16799421EFDF8A81C8A16FA76D48411((int32_t*)(((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_address_of_lv_14()), /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteralFA3B5499785CBEEA66513CEE09402FBF10AF5FBF, L_5, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void LvviewController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void LvviewController__ctor_mDCB68B873D400A6FD8417D1A9A4D8EC68F53CDC0 (LvviewController_t27644D2A5EFC8834D05AF90750B56A0D35D8110C * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void OptionController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionController_Start_mB1E7DD6A03BB53629E5A065FEB52F9C1626DEDB7 (OptionController_t0BD28E24B9A14B7AC298371AC13CF6B73380ED9D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void OptionController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionController_Update_mF3F4CE3F632A40CDF1C3B08F0773E69E11EC8816 (OptionController_t0BD28E24B9A14B7AC298371AC13CF6B73380ED9D * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void OptionController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OptionController__ctor_m1C9210D1ECF8B2737298B33CCC6C2DC1008D0CC9 (OptionController_t0BD28E24B9A14B7AC298371AC13CF6B73380ED9D * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Pauser::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser_Start_mF00A447CF6111F2EF7BBC1BA56EAB16ED271852F (Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mE076679C70F100BB328D01632EF72F438B1ACD51_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targets.Add(this);
		IL2CPP_RUNTIME_CLASS_INIT(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * L_0 = ((Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_StaticFields*)il2cpp_codegen_static_fields_for(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var))->get_targets_4();
		NullCheck(L_0);
		List_1_Add_mE076679C70F100BB328D01632EF72F438B1ACD51(L_0, __this, /*hidden argument*/List_1_Add_mE076679C70F100BB328D01632EF72F438B1ACD51_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Pauser::OnDestory()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser_OnDestory_m3846248E586054715B328DBF61FBBAB05509BF47 (Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Remove_m32C996BCE978E3459A260E6146C9F7900AE6C58B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// targets.Remove(this);
		IL2CPP_RUNTIME_CLASS_INIT(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * L_0 = ((Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_StaticFields*)il2cpp_codegen_static_fields_for(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var))->get_targets_4();
		NullCheck(L_0);
		bool L_1;
		L_1 = List_1_Remove_m32C996BCE978E3459A260E6146C9F7900AE6C58B(L_0, __this, /*hidden argument*/List_1_Remove_m32C996BCE978E3459A260E6146C9F7900AE6C58B_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Void Pauser::OnPause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser_OnPause_m9BFFB47CE260B75463E2982B427A671F443435E4 (Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_FindAll_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m6A31B13ADDDFBFA5C22EEEB3E2C2455DEB73B79D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentsInChildren_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m0329CABF1EA5E716381ED8EF794E8B276A2D5B08_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1__ctor_m2986B5E58F128F13E567A1809343B36E1A61BE72_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_U3COnPauseU3Eb__4_0_mF7DF5C6D8916DD8BDABF99CE982BC552E2F686B6_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* V_0 = NULL;
	int32_t V_1 = 0;
	Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * G_B4_0 = NULL;
	BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* G_B4_1 = NULL;
	Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * G_B4_2 = NULL;
	Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * G_B3_0 = NULL;
	BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* G_B3_1 = NULL;
	Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * G_B3_2 = NULL;
	{
		// if (pauseBehavs != null)
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_0 = __this->get_pauseBehavs_5();
		if (!L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// pauseBehavs = Array.FindAll(GetComponentsInChildren<Behaviour>(), (obj) => {
		//     if (obj == null)
		//     {
		//         return false;
		//     }
		//     return obj.enabled;
		// });
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_1;
		L_1 = Component_GetComponentsInChildren_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m0329CABF1EA5E716381ED8EF794E8B276A2D5B08(__this, /*hidden argument*/Component_GetComponentsInChildren_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m0329CABF1EA5E716381ED8EF794E8B276A2D5B08_RuntimeMethod_var);
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var);
		Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * L_2 = ((U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var))->get_U3CU3E9__4_0_1();
		Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * L_3 = L_2;
		G_B3_0 = L_3;
		G_B3_1 = L_1;
		G_B3_2 = __this;
		if (L_3)
		{
			G_B4_0 = L_3;
			G_B4_1 = L_1;
			G_B4_2 = __this;
			goto IL_002f;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var);
		U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B * L_4 = ((U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var))->get_U3CU3E9_0();
		Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * L_5 = (Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 *)il2cpp_codegen_object_new(Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03_il2cpp_TypeInfo_var);
		Predicate_1__ctor_m2986B5E58F128F13E567A1809343B36E1A61BE72(L_5, L_4, (intptr_t)((intptr_t)U3CU3Ec_U3COnPauseU3Eb__4_0_mF7DF5C6D8916DD8BDABF99CE982BC552E2F686B6_RuntimeMethod_var), /*hidden argument*/Predicate_1__ctor_m2986B5E58F128F13E567A1809343B36E1A61BE72_RuntimeMethod_var);
		Predicate_1_t43434B102D7339E3345F4F2A9EBB684ED2668D03 * L_6 = L_5;
		((U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var))->set_U3CU3E9__4_0_1(L_6);
		G_B4_0 = L_6;
		G_B4_1 = G_B3_1;
		G_B4_2 = G_B3_2;
	}

IL_002f:
	{
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_7;
		L_7 = Array_FindAll_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m6A31B13ADDDFBFA5C22EEEB3E2C2455DEB73B79D(G_B4_1, G_B4_0, /*hidden argument*/Array_FindAll_TisBehaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9_m6A31B13ADDDFBFA5C22EEEB3E2C2455DEB73B79D_RuntimeMethod_var);
		NullCheck(G_B4_2);
		G_B4_2->set_pauseBehavs_5(L_7);
		// foreach (var com in pauseBehavs)
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_8 = __this->get_pauseBehavs_5();
		V_0 = L_8;
		V_1 = 0;
		goto IL_0051;
	}

IL_0044:
	{
		// foreach (var com in pauseBehavs)
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_9 = V_0;
		int32_t L_10 = V_1;
		NullCheck(L_9);
		int32_t L_11 = L_10;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_12 = (L_9)->GetAt(static_cast<il2cpp_array_size_t>(L_11));
		// com.enabled = false;
		NullCheck(L_12);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_12, (bool)0, /*hidden argument*/NULL);
		int32_t L_13 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1));
	}

IL_0051:
	{
		// foreach (var com in pauseBehavs)
		int32_t L_14 = V_1;
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_15 = V_0;
		NullCheck(L_15);
		if ((((int32_t)L_14) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_15)->max_length))))))
		{
			goto IL_0044;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Pauser::OnResume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser_OnResume_m971427F83DDF3C47F9DF18A1E8BCDC61F001D79A (Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * __this, const RuntimeMethod* method)
{
	BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* V_0 = NULL;
	int32_t V_1 = 0;
	{
		// if (pauseBehavs == null)
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_0 = __this->get_pauseBehavs_5();
		if (L_0)
		{
			goto IL_0009;
		}
	}
	{
		// return;
		return;
	}

IL_0009:
	{
		// foreach (var com in pauseBehavs)
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_1 = __this->get_pauseBehavs_5();
		V_0 = L_1;
		V_1 = 0;
		goto IL_0021;
	}

IL_0014:
	{
		// foreach (var com in pauseBehavs)
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_2 = V_0;
		int32_t L_3 = V_1;
		NullCheck(L_2);
		int32_t L_4 = L_3;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_5 = (L_2)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		// com.enabled = true;
		NullCheck(L_5);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_5, (bool)1, /*hidden argument*/NULL);
		int32_t L_6 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_6, (int32_t)1));
	}

IL_0021:
	{
		// foreach (var com in pauseBehavs)
		int32_t L_7 = V_1;
		BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0* L_8 = V_0;
		NullCheck(L_8);
		if ((((int32_t)L_7) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_8)->max_length))))))
		{
			goto IL_0014;
		}
	}
	{
		// pauseBehavs = null;
		__this->set_pauseBehavs_5((BehaviourU5BU5D_t40AB7AF3EF2564E449D8DE4A84D9EFA8880FA9B0*)NULL);
		// }
		return;
	}
}
// System.Void Pauser::Pause()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser_Pause_m18B94354A9EAF1363FE65BECC3953FC3E0F478DB (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_FindObjectsOfType_TisPauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_mF106ABE25E2645B35CCC4423CCC4E31D2A8D1301_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* V_0 = NULL;
	int32_t V_1 = 0;
	Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * V_2 = NULL;
	{
		// foreach (Pauser obj in GameObject.FindObjectsOfType<Pauser>())
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* L_0;
		L_0 = Object_FindObjectsOfType_TisPauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_mF106ABE25E2645B35CCC4423CCC4E31D2A8D1301(/*hidden argument*/Object_FindObjectsOfType_TisPauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_mF106ABE25E2645B35CCC4423CCC4E31D2A8D1301_RuntimeMethod_var);
		V_0 = L_0;
		V_1 = 0;
		goto IL_0021;
	}

IL_000a:
	{
		// foreach (Pauser obj in GameObject.FindObjectsOfType<Pauser>())
		PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* L_1 = V_0;
		int32_t L_2 = V_1;
		NullCheck(L_1);
		int32_t L_3 = L_2;
		Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * L_4 = (L_1)->GetAt(static_cast<il2cpp_array_size_t>(L_3));
		V_2 = L_4;
		// if (obj != null)
		Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * L_5 = V_2;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_6;
		L_6 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_5, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_6)
		{
			goto IL_001d;
		}
	}
	{
		// obj.OnPause();
		Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * L_7 = V_2;
		NullCheck(L_7);
		Pauser_OnPause_m9BFFB47CE260B75463E2982B427A671F443435E4(L_7, /*hidden argument*/NULL);
	}

IL_001d:
	{
		int32_t L_8 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1));
	}

IL_0021:
	{
		// foreach (Pauser obj in GameObject.FindObjectsOfType<Pauser>())
		int32_t L_9 = V_1;
		PauserU5BU5D_tB18D0ECDEDCC3400AF4C84288E3D0AB3C43D9D69* L_10 = V_0;
		NullCheck(L_10);
		if ((((int32_t)L_9) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_10)->max_length))))))
		{
			goto IL_000a;
		}
	}
	{
		// }
		return;
	}
}
// System.Void Pauser::Resume()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser_Resume_mC768C9F5C0EABFAC22FDBADE05F3ED0293F26A18 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_Dispose_m97BA2C1591EAC36E61406750598F5EFAA704F835_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_MoveNext_mDFFC7FFA28E98CCF3F28E99E9A664CCDA06CF49D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Enumerator_get_Current_m5704EC2BDFBEEB9BF62512FB17158BB0919DA388_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_GetEnumerator_m60142538AA7CBDDB5789A0038BE5627EBE20FA21_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Exception_t * __last_unhandled_exception = 0;
	il2cpp::utils::ExceptionSupportStack<int32_t, 1> __leave_targets;
	{
		// foreach (var obj in targets)
		IL2CPP_RUNTIME_CLASS_INIT(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * L_0 = ((Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_StaticFields*)il2cpp_codegen_static_fields_for(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var))->get_targets_4();
		NullCheck(L_0);
		Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8  L_1;
		L_1 = List_1_GetEnumerator_m60142538AA7CBDDB5789A0038BE5627EBE20FA21(L_0, /*hidden argument*/List_1_GetEnumerator_m60142538AA7CBDDB5789A0038BE5627EBE20FA21_RuntimeMethod_var);
		V_0 = L_1;
	}

IL_000b:
	try
	{// begin try (depth: 1)
		{
			goto IL_0019;
		}

IL_000d:
		{
			// foreach (var obj in targets)
			Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * L_2;
			L_2 = Enumerator_get_Current_m5704EC2BDFBEEB9BF62512FB17158BB0919DA388_inline((Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 *)(&V_0), /*hidden argument*/Enumerator_get_Current_m5704EC2BDFBEEB9BF62512FB17158BB0919DA388_RuntimeMethod_var);
			// obj.OnResume();
			NullCheck(L_2);
			Pauser_OnResume_m971427F83DDF3C47F9DF18A1E8BCDC61F001D79A(L_2, /*hidden argument*/NULL);
		}

IL_0019:
		{
			// foreach (var obj in targets)
			bool L_3;
			L_3 = Enumerator_MoveNext_mDFFC7FFA28E98CCF3F28E99E9A664CCDA06CF49D((Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 *)(&V_0), /*hidden argument*/Enumerator_MoveNext_mDFFC7FFA28E98CCF3F28E99E9A664CCDA06CF49D_RuntimeMethod_var);
			if (L_3)
			{
				goto IL_000d;
			}
		}

IL_0022:
		{
			IL2CPP_LEAVE(0x32, FINALLY_0024);
		}
	}// end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0024;
	}

FINALLY_0024:
	{// begin finally (depth: 1)
		Enumerator_Dispose_m97BA2C1591EAC36E61406750598F5EFAA704F835((Enumerator_tCF9D876A61EBF178E6B431F5831ADA6C16D02BC8 *)(&V_0), /*hidden argument*/Enumerator_Dispose_m97BA2C1591EAC36E61406750598F5EFAA704F835_RuntimeMethod_var);
		IL2CPP_END_FINALLY(36)
	}// end finally (depth: 1)
	IL2CPP_CLEANUP(36)
	{
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
		IL2CPP_JUMP_TBL(0x32, IL_0032)
	}

IL_0032:
	{
		// }
		return;
	}
}
// System.Void Pauser::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser__ctor_mCE2A57708B5E384AB4D38B1DAD8F983032FB8C83 (Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Pauser::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Pauser__cctor_m079EE5FF8217E05BC458D3D0C0CB305A4865CC5A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_m7652396EA445BB0D39B33EA5E316886B4EBDCBB8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static List<Pauser> targets = new List<Pauser>();   // ?|?[?Y????X?N???v?g
		List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 * L_0 = (List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726 *)il2cpp_codegen_object_new(List_1_t24185648DE5C4BFDCBD2ADA42BE297F0CD3A9726_il2cpp_TypeInfo_var);
		List_1__ctor_m7652396EA445BB0D39B33EA5E316886B4EBDCBB8(L_0, /*hidden argument*/List_1__ctor_m7652396EA445BB0D39B33EA5E316886B4EBDCBB8_RuntimeMethod_var);
		((Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_StaticFields*)il2cpp_codegen_static_fields_for(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var))->set_targets_4(L_0);
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
// System.Void PlayerController::shot(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_shot_m2377BEB63EDDB81CA68152DCA73DDDC265C289E2 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, int32_t ___pattern0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		int32_t L_0 = ___pattern0;
		if ((((int32_t)L_0) == ((int32_t)1)))
		{
			goto IL_0010;
		}
	}
	{
		int32_t L_1 = ___pattern0;
		if ((((int32_t)L_1) == ((int32_t)2)))
		{
			goto IL_009c;
		}
	}
	{
		goto IL_0142;
	}

IL_0010:
	{
		// AudioController.playsound(1);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(1, /*hidden argument*/NULL);
		// Instantiate(bullet, this.transform.position, Quaternion.Euler(0, 0, 90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_bullet_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_3;
		L_3 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		L_4 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_3, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6;
		L_6 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_2, L_4, L_5, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(bullet, this.transform.position, Quaternion.Euler(0, 0, 135));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_bullet_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (135.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_7, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(bullet, this.transform.position, Quaternion.Euler(0, 0, 45));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_bullet_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_13;
		L_13 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_13);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_13, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_15;
		L_15 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (45.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16;
		L_16 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_12, L_14, L_15, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// break;
		goto IL_0142;
	}

IL_009c:
	{
		// AudioController.playsound(2);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(2, /*hidden argument*/NULL);
		// Instantiate(bullet, new Vector2(transform.position.x + 0.15f, transform.position.y), Quaternion.Euler(0, 0, 90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_17 = __this->get_bullet_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_19;
		L_19 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_18, /*hidden argument*/NULL);
		float L_20 = L_19.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_24;
		memset((&L_24), 0, sizeof(L_24));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_24), ((float)il2cpp_codegen_add((float)L_20, (float)(0.150000006f))), L_23, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_25;
		L_25 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_24, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_26;
		L_26 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_27;
		L_27 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_17, L_25, L_26, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(bullet, new Vector2(transform.position.x - 0.15f, transform.position.y), Quaternion.Euler(0, 0, 90));
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_28 = __this->get_bullet_9();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_x_2();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_32;
		L_32 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_32);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_33;
		L_33 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_32, /*hidden argument*/NULL);
		float L_34 = L_33.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_35;
		memset((&L_35), 0, sizeof(L_35));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_35), ((float)il2cpp_codegen_subtract((float)L_31, (float)(0.150000006f))), L_34, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_36;
		L_36 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_35, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_37;
		L_37 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_38;
		L_38 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_28, L_36, L_37, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
	}

IL_0142:
	{
		// exp++;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_39 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_exp_19();
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_exp_19(((int32_t)il2cpp_codegen_add((int32_t)L_39, (int32_t)1)));
		// cooldown = 1 - 0.03125f * lv;
		int32_t L_40 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_lv_20();
		__this->set_cooldown_6(((float)il2cpp_codegen_subtract((float)(1.0f), (float)((float)il2cpp_codegen_multiply((float)(0.03125f), (float)((float)((float)L_40)))))));
		// }
		return;
	}
}
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m23059564DCFDD324EA9DB966473251896647CD23 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisBRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50_m9A9524F9211924AE57A19A10A8FCEE17CDD75445_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// exp = 0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_exp_19(0);
		// lv = 0;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_lv_20(0);
		// score = 0;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_score_21(0);
		// necessaryexp = 20;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_necessaryexp_22(((int32_t)20));
		// Life = 3;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_Life_4(3);
		// rb = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m26E35B19637B4682494A4299BBD06748D17133B1_RuntimeMethod_var);
		__this->set_rb_18(L_0);
		// untilRemoteAttack = 10;
		__this->set_untilRemoteAttack_24(((int32_t)10));
		// RApattern = RApattmp;
		int32_t L_1 = __this->get_RApattmp_25();
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_RApattern_26(L_1);
		// brcont = bulleremover.GetComponent<BRController>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_bulleremover_13();
		NullCheck(L_2);
		BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * L_3;
		L_3 = GameObject_GetComponent_TisBRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50_m9A9524F9211924AE57A19A10A8FCEE17CDD75445(L_2, /*hidden argument*/GameObject_GetComponent_TisBRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50_m9A9524F9211924AE57A19A10A8FCEE17CDD75445_RuntimeMethod_var);
		__this->set_brcont_27(L_3);
		// }
		return;
	}
}
// System.Void PlayerController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Update_mB31159CAD7DD2329859472554BC9154A83D8E794 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	float V_1 = 0.0f;
	float V_2 = 0.0f;
	int32_t V_3 = 0;
	TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* V_4 = NULL;
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		// if (Life < 0)
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_0 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_Life_4();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		// Instantiate(KOeffect, this.transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_KOeffect_14();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_4;
		L_4 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5;
		L_5 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_1, L_3, L_4, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// blackout.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = __this->get_blackout_15();
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// AudioController.playsound(8);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(8, /*hidden argument*/NULL);
		// Pauser.Pause();
		IL2CPP_RUNTIME_CLASS_INIT(Pauser_t515A16F69F03FC252036DA95D57E40EEA30149EF_il2cpp_TypeInfo_var);
		Pauser_Pause_m18B94354A9EAF1363FE65BECC3953FC3E0F478DB(/*hidden argument*/NULL);
		// return;
		return;
	}

IL_003c:
	{
		// score += lv + 1;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_7 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_score_21();
		int32_t L_8 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_lv_20();
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_score_21(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)))));
		// if (exp > necessaryexp)
		int32_t L_9 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_exp_19();
		int32_t L_10 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_necessaryexp_22();
		if ((((int32_t)L_9) <= ((int32_t)L_10)))
		{
			goto IL_0092;
		}
	}
	{
		// if(lv < 16) lv++;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_11 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_lv_20();
		if ((((int32_t)L_11) >= ((int32_t)((int32_t)16))))
		{
			goto IL_006f;
		}
	}
	{
		// if(lv < 16) lv++;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_12 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_lv_20();
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_lv_20(((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1)));
	}

IL_006f:
	{
		// exp = 0;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_exp_19(0);
		// necessaryexp = (int)Mathf.Floor(necessaryexp * 1.2f);
		int32_t L_13 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_necessaryexp_22();
		float L_14;
		L_14 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_13)), (float)(1.20000005f))));
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_necessaryexp_22(((int32_t)((int32_t)L_14)));
		// AudioController.playsound(4);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(4, /*hidden argument*/NULL);
	}

IL_0092:
	{
		// if (untilRemoteAttack <= 0)
		int32_t L_15 = __this->get_untilRemoteAttack_24();
		if ((((int32_t)L_15) > ((int32_t)0)))
		{
			goto IL_0110;
		}
	}
	{
		// x = Random.Range(-1.5f, 1.5f);
		float L_16;
		L_16 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-1.5f), (1.5f), /*hidden argument*/NULL);
		V_1 = L_16;
		// y = Random.Range(-4.0f, -1.0f);
		float L_17;
		L_17 = Random_Range_mC15372D42A9ABDCAC3DE82E114D60A40C9C311D2((-4.0f), (-1.0f), /*hidden argument*/NULL);
		V_2 = L_17;
		// Instantiate(effect2, new Vector2(x,y), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_18 = __this->get_effect2_11();
		float L_19 = V_1;
		float L_20 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_21), L_19, L_20, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_21, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_23;
		L_23 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_24;
		L_24 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_18, L_22, L_23, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// Instantiate(turret, new Vector2(x,-y), Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_25 = __this->get_turret_12();
		float L_26 = V_1;
		float L_27 = V_2;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_28;
		memset((&L_28), 0, sizeof(L_28));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_28), L_26, ((-L_27)), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_28, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_30;
		L_30 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_31;
		L_31 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_25, L_29, L_30, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// untilRemoteAttack = 8 - (int)Mathf.Floor(lv / 4f);
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_32 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_lv_20();
		float L_33;
		L_33 = floorf(((float)((float)((float)((float)L_32))/(float)(4.0f))));
		__this->set_untilRemoteAttack_24(((int32_t)il2cpp_codegen_subtract((int32_t)8, (int32_t)((int32_t)((int32_t)L_33)))));
	}

IL_0110:
	{
		// var touchcount = Input.touchCount;
		int32_t L_34;
		L_34 = Input_get_touchCount_mE1A06AB1973E3456AE398B3CC5105F27CC7335D6(/*hidden argument*/NULL);
		V_0 = L_34;
		// if (touchcount > 0)
		int32_t L_35 = V_0;
		if ((((int32_t)L_35) <= ((int32_t)0)))
		{
			goto IL_025d;
		}
	}
	{
		// Touch[] touches = new Touch[3];
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_36 = (TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2*)(TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2*)SZArrayNew(TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_il2cpp_TypeInfo_var, (uint32_t)3);
		V_4 = L_36;
		// if (touchcount > 3) touchcount = 3;
		int32_t L_37 = V_0;
		if ((((int32_t)L_37) <= ((int32_t)3)))
		{
			goto IL_012b;
		}
	}
	{
		// if (touchcount > 3) touchcount = 3;
		V_0 = 3;
	}

IL_012b:
	{
		// for (i = 0; i < touchcount; i++)
		V_3 = 0;
		goto IL_0141;
	}

IL_012f:
	{
		// touches[i] = Input.GetTouch(i);
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_38 = V_4;
		int32_t L_39 = V_3;
		int32_t L_40 = V_3;
		Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C  L_41;
		L_41 = Input_GetTouch_m6A2A31482B1A7D018C3AAC188C02F5D14500C81F(L_40, /*hidden argument*/NULL);
		NullCheck(L_38);
		(L_38)->SetAt(static_cast<il2cpp_array_size_t>(L_39), (Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C )L_41);
		// for (i = 0; i < touchcount; i++)
		int32_t L_42 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_42, (int32_t)1));
	}

IL_0141:
	{
		// for (i = 0; i < touchcount; i++)
		int32_t L_43 = V_3;
		int32_t L_44 = V_0;
		if ((((int32_t)L_43) < ((int32_t)L_44)))
		{
			goto IL_012f;
		}
	}
	{
		// if (start_pos==new Vector2 (-255,-255))
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_45 = __this->get_start_pos_16();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_46;
		memset((&L_46), 0, sizeof(L_46));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_46), (-255.0f), (-255.0f), /*hidden argument*/NULL);
		bool L_47;
		L_47 = Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline(L_45, L_46, /*hidden argument*/NULL);
		if (!L_47)
		{
			goto IL_019e;
		}
	}
	{
		// start_pos = Camera.main.ScreenToWorldPoint(touches[0].position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_48;
		L_48 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_49 = V_4;
		NullCheck(L_49);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_50;
		L_50 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_49)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_51;
		L_51 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_50, /*hidden argument*/NULL);
		NullCheck(L_48);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_52;
		L_52 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_48, L_51, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_53;
		L_53 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_52, /*hidden argument*/NULL);
		__this->set_start_pos_16(L_53);
		// start_pos2 = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_54;
		L_54 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_54);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_55;
		L_55 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_54, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_56;
		L_56 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_55, /*hidden argument*/NULL);
		__this->set_start_pos2_17(L_56);
	}

IL_019e:
	{
		// Vector2 pos = Camera.main.ScreenToWorldPoint(touches[0].position);
		Camera_tC44E094BAB53AFC8A014C6F9CFCE11F4FC38006C * L_57;
		L_57 = Camera_get_main_mC337C621B91591CEF89504C97EF64D717C12871C(/*hidden argument*/NULL);
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_58 = V_4;
		NullCheck(L_58);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_59;
		L_59 = Touch_get_position_mE32B04C6DA32A0965C403A31847ED7F1725EA1DE((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_60;
		L_60 = Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline(L_59, /*hidden argument*/NULL);
		NullCheck(L_57);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_61;
		L_61 = Camera_ScreenToWorldPoint_m7EE1C8665F9BB089581FA225BB4BFF411B5301B6(L_57, L_60, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_62;
		L_62 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_61, /*hidden argument*/NULL);
		V_5 = L_62;
		// rb.MovePosition(new Vector2(pos.x - start_pos.x + start_pos2.x, pos.y - start_pos.y + start_pos2.y));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_63 = __this->get_rb_18();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_64 = V_5;
		float L_65 = L_64.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_66 = __this->get_address_of_start_pos_16();
		float L_67 = L_66->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_68 = __this->get_address_of_start_pos2_17();
		float L_69 = L_68->get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_70 = V_5;
		float L_71 = L_70.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_72 = __this->get_address_of_start_pos_16();
		float L_73 = L_72->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * L_74 = __this->get_address_of_start_pos2_17();
		float L_75 = L_74->get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_76;
		memset((&L_76), 0, sizeof(L_76));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_76), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_65, (float)L_67)), (float)L_69)), ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_subtract((float)L_71, (float)L_73)), (float)L_75)), /*hidden argument*/NULL);
		NullCheck(L_63);
		Rigidbody2D_MovePosition_mB4493BFC30B2FEBB02C7819AAE626871939D5BD9(L_63, L_76, /*hidden argument*/NULL);
		// if (cooldown <= 0)
		float L_77 = __this->get_cooldown_6();
		if ((!(((float)L_77) <= ((float)(0.0f)))))
		{
			goto IL_0228;
		}
	}
	{
		// shot(pattern);
		int32_t L_78 = __this->get_pattern_8();
		PlayerController_shot_m2377BEB63EDDB81CA68152DCA73DDDC265C289E2(__this, L_78, /*hidden argument*/NULL);
	}

IL_0228:
	{
		// if (touches[0].phase == TouchPhase.Ended)
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_79 = V_4;
		NullCheck(L_79);
		int32_t L_80;
		L_80 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_79)->GetAddressAt(static_cast<il2cpp_array_size_t>(0))), /*hidden argument*/NULL);
		if ((!(((uint32_t)L_80) == ((uint32_t)3))))
		{
			goto IL_024d;
		}
	}
	{
		// start_pos = new Vector2(-255, -255);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_81;
		memset((&L_81), 0, sizeof(L_81));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_81), (-255.0f), (-255.0f), /*hidden argument*/NULL);
		__this->set_start_pos_16(L_81);
	}

IL_024d:
	{
		// if (touches[1].phase == TouchPhase.Ended)
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_82 = V_4;
		NullCheck(L_82);
		int32_t L_83;
		L_83 = Touch_get_phase_m576EA3F4FE1D12EB85510326AD8EC3C2EB267257((Touch_tDEFED247540BCFA4AD452F1D37EEF4E09B4ACD8C *)((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(1))), /*hidden argument*/NULL);
	}

IL_025d:
	{
		// cooldown -= Time.deltaTime;
		float L_84 = __this->get_cooldown_6();
		float L_85;
		L_85 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_cooldown_6(((float)il2cpp_codegen_subtract((float)L_84, (float)L_85)));
		// }
		return;
	}
}
// System.Void PlayerController::OnTriggerEnter2D(UnityEngine.Collider2D)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_OnTriggerEnter2D_m1B1E3F94F29560C6CD4687C6556D74A092CC672E (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * ___collision0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralD6CAB3674B75C6FE5C112BB8FFAC7C83D21A3D9B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (collision.gameObject.CompareTag("BulletsP2"))
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_0 = ___collision0;
		NullCheck(L_0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1;
		L_1 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		bool L_2;
		L_2 = GameObject_CompareTag_mA692D8508984DBE4A2FEFD19E29CB1C9D5CDE001(L_1, _stringLiteralD6CAB3674B75C6FE5C112BB8FFAC7C83D21A3D9B, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005b;
		}
	}
	{
		// brcont.damagedremove(this.transform.position);
		BRController_tB10EC0483A20E06EE69C3DC476A4E80C67C02A50 * L_3 = __this->get_brcont_27();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_4);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		L_5 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_4, /*hidden argument*/NULL);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		L_6 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_5, /*hidden argument*/NULL);
		NullCheck(L_3);
		BRController_damagedremove_mE3893D5D6143F4E65655EEC1EE4080B285275C9E(L_3, L_6, /*hidden argument*/NULL);
		// Instantiate(effect, this.transform.position, Quaternion.identity);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_7 = __this->get_effect_10();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_8, /*hidden argument*/NULL);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_10;
		L_10 = Quaternion_get_identity_mF2E565DBCE793A1AE6208056D42CA7C59D83A702(/*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_11;
		L_11 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_7, L_9, L_10, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// AudioController.playsound(0);
		AudioController_playsound_mED24A61465F21774702CEF49EDD0137F25CDBF50(0, /*hidden argument*/NULL);
		// Life--;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_12 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_Life_4();
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_Life_4(((int32_t)il2cpp_codegen_subtract((int32_t)L_12, (int32_t)1)));
	}

IL_005b:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Vector2 start_pos=new Vector2(-100,-100);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0;
		memset((&L_0), 0, sizeof(L_0));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_0), (-100.0f), (-100.0f), /*hidden argument*/NULL);
		__this->set_start_pos_16(L_0);
		// Vector2 start_pos2 = new Vector2(-100, -100);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_1), (-100.0f), (-100.0f), /*hidden argument*/NULL);
		__this->set_start_pos2_17(L_1);
		// Touch[] touches = new Touch[3];
		TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2* L_2 = (TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2*)(TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2*)SZArrayNew(TouchU5BU5D_t07E3B79F1FB6673E4450CCF9D09FA79DD96692E2_il2cpp_TypeInfo_var, (uint32_t)3);
		__this->set_touches_23(L_2);
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void PlayerController::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__cctor_m85342AF0280476580815CF892EC4D72DAC42C5CA (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// static public int Life = 3;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_Life_4(3);
		// static public int exp = 0;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_exp_19(0);
		// static public int lv = 0;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_lv_20(0);
		// static public int score = 0;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_score_21(0);
		// static public int necessaryexp = 20;
		((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->set_necessaryexp_22(((int32_t)20));
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
// System.Void PooledObject::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledObject_Update_m70ADE1D5A56B2F961F4F701188207918062068F7 (PooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ObjectPool_1_Release_mA57FC55F4CD1907DAE756F9C96DF57119FA84859_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (time > 1)
		float L_0 = __this->get_time_5();
		if ((!(((float)L_0) > ((float)(1.0f)))))
		{
			goto IL_0029;
		}
	}
	{
		// time = 0;
		__this->set_time_5((0.0f));
		// objectPool.Release(gameObject);
		ObjectPool_1_tE334EE515A92B4E659F49F7359DA70E2BCAA4D72 * L_1 = __this->get_objectPool_4();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2;
		L_2 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		ObjectPool_1_Release_mA57FC55F4CD1907DAE756F9C96DF57119FA84859(L_1, L_2, /*hidden argument*/ObjectPool_1_Release_mA57FC55F4CD1907DAE756F9C96DF57119FA84859_RuntimeMethod_var);
	}

IL_0029:
	{
		// time += Time.deltaTime;
		float L_3 = __this->get_time_5();
		float L_4;
		L_4 = Time_get_deltaTime_mCC15F147DA67F38C74CE408FB5D7FF4A87DA2290(/*hidden argument*/NULL);
		__this->set_time_5(((float)il2cpp_codegen_add((float)L_3, (float)L_4)));
		// }
		return;
	}
}
// System.Void PooledObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PooledObject__ctor_m63F5660CC7FE132CCD942D89A592B17C36D572EA (PooledObject_tAE6E987748E1FA5238C9503E272F6D97459EFB85 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Rotation::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation_Start_mEACBFA06F8EFD7A5FDC79C980BA4D7B546B8B1B4 (Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE * __this, const RuntimeMethod* method)
{
	{
		// }
		return;
	}
}
// System.Void Rotation::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation_FixedUpdate_m43CDC81683CDA94FABC8416CF7AC5A5A453A818F (Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE * __this, const RuntimeMethod* method)
{
	{
		// transform.eulerAngles = new Vector3( 0, 0, transform.eulerAngles.z + speed);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_z_4();
		float L_4 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5;
		memset((&L_5), 0, sizeof(L_5));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_5), (0.0f), (0.0f), ((float)il2cpp_codegen_add((float)L_3, (float)L_4)), /*hidden argument*/NULL);
		NullCheck(L_0);
		Transform_set_eulerAngles_mFDCBC6282E4B1196AA26BF01008B2AAA2DD2969E(L_0, L_5, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void Rotation::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rotation__ctor_mE37308CA0B03685698CC3A3EFD8EF606585B6297 (Rotation_t494A089B49580F1EC9172DD688C6EC94B1E4EEEE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void ScoreviewController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreviewController_Start_m4196B6B3E433D8ECC9DB651925DAC235925FEF89 (ScoreviewController_tEC0D1A2735BE12AF54FB6289F73D7E67A29BBB93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0C1E1E5747AAC763E049946F18A9952014D0468B);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stext = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294_RuntimeMethod_var);
		__this->set_Stext_4(L_0);
		// Stext.text = "Lv0";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_Stext_4();
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, _stringLiteral0C1E1E5747AAC763E049946F18A9952014D0468B);
		// }
		return;
	}
}
// System.Void ScoreviewController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreviewController_Update_mF3CE5DBADF294223CAA528059E38CE338DC0726B (ScoreviewController_tEC0D1A2735BE12AF54FB6289F73D7E67A29BBB93 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2CB372B682621CEBB58B13EF31D980CFA9FC06);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Stext.text = "Score:" + PlayerController.score.ToString("D7");
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_Stext_4();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		String_t* L_1;
		L_1 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_address_of_score_21()), _stringLiteral6C2CB372B682621CEBB58B13EF31D980CFA9FC06, /*hidden argument*/NULL);
		String_t* L_2;
		L_2 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(_stringLiteral27B1240786558BB01BAF8EA86CF65C4996DEF092, L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void ScoreviewController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScoreviewController__ctor_m484C761966163B209465F93F1392E2514C3B8769 (ScoreviewController_tEC0D1A2735BE12AF54FB6289F73D7E67A29BBB93 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void TurretController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretController_Start_m0B92DC4BF893D31056E0B28C4506B2C823EDD8F5 (TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral25E0B8C2FF33CA82A31BBAE86C3EBE8E8880D3AF);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFDF3A43306D0917690A5D38BA77505AAF0DC271C);
		s_Il2CppMethodInitialized = true;
	}
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	{
		// if (this.transform.position.y < 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		if ((!(((float)L_2) < ((float)(0.0f)))))
		{
			goto IL_00a0;
		}
	}
	{
		// enemy = true;
		__this->set_enemy_8((bool)1);
		// pattern = PlayerController.RApattern;
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_RApattern_26();
		__this->set_pattern_7(L_3);
		// var target = GameObject.FindGameObjectWithTag("TeamPlayer").transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4;
		L_4 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteralFDF3A43306D0917690A5D38BA77505AAF0DC271C, /*hidden argument*/NULL);
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		V_0 = L_6;
		// switch (pattern)
		int32_t L_7 = __this->get_pattern_7();
		V_2 = L_7;
		int32_t L_8 = V_2;
		if (!L_8)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_9 = V_2;
		if ((!(((uint32_t)L_9) == ((uint32_t)1))))
		{
			goto IL_011a;
		}
	}
	{
		// Vector3 vec = (target - this.transform.position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_11);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		L_12 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_11, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_10, L_12, /*hidden argument*/NULL);
		V_1 = L_13;
		// this.transform.rotation = Quaternion.FromToRotation(Vector3.up, vec);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_14;
		L_14 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16 = V_1;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_17;
		L_17 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_15, L_16, /*hidden argument*/NULL);
		NullCheck(L_14);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_14, L_17, /*hidden argument*/NULL);
		// transform.Rotate(0, 0, 90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_18;
		L_18 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_18);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_18, (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		// lifetime = 15;
		__this->set_lifetime_6(((int32_t)15));
		// break;
		return;
	}

IL_00a0:
	{
		// pattern = EnemyController.RApattern;
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_19 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_RApattern_20();
		__this->set_pattern_7(L_19);
		// var target = GameObject.FindGameObjectWithTag("TeamEnemy").transform.position;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = GameObject_FindGameObjectWithTag_mFC215979EDFED361F88C336BF9E187F24434C63F(_stringLiteral25E0B8C2FF33CA82A31BBAE86C3EBE8E8880D3AF, /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_21, /*hidden argument*/NULL);
		V_3 = L_22;
		// switch (pattern)
		int32_t L_23 = __this->get_pattern_7();
		V_2 = L_23;
		int32_t L_24 = V_2;
		if (!L_24)
		{
			goto IL_011a;
		}
	}
	{
		int32_t L_25 = V_2;
		if ((!(((uint32_t)L_25) == ((uint32_t)1))))
		{
			goto IL_011a;
		}
	}
	{
		// Vector3 vec = (target - this.transform.position);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26 = V_3;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_27;
		L_27 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_27);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_28;
		L_28 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_27, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_29;
		L_29 = Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline(L_26, L_28, /*hidden argument*/NULL);
		V_4 = L_29;
		// this.transform.rotation = Quaternion.FromToRotation(Vector3.up, vec);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_30;
		L_30 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_31;
		L_31 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_32 = V_4;
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_33;
		L_33 = Quaternion_FromToRotation_mD0EBB9993FC7C6A45724D0365B09F11F1CEADB80(L_31, L_32, /*hidden argument*/NULL);
		NullCheck(L_30);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_30, L_33, /*hidden argument*/NULL);
		// transform.Rotate(0, 0, 90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_34;
		L_34 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_34);
		Transform_Rotate_mA3AE6D55AA9CC88A8F03C2B0B7CB3DB45ABA6A8E(L_34, (0.0f), (0.0f), (90.0f), /*hidden argument*/NULL);
		// lifetime = 15;
		__this->set_lifetime_6(((int32_t)15));
	}

IL_011a:
	{
		// }
		return;
	}
}
// System.Void TurretController::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretController_Update_mF6E2C62BB8A6C22EC71AAD0268360DEA82A5D4BD (TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (pattern == 1)
		int32_t L_0 = __this->get_pattern_7();
		if ((!(((uint32_t)L_0) == ((uint32_t)1))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (enemy == false)
		bool L_1 = __this->get_enemy_8();
		if (L_1)
		{
			goto IL_005e;
		}
	}
	{
		// if (lifetime % (10 - (Mathf.Floor(PlayerController.lv / 4f))) == 0) Instantiate(bullet, this.transform.position, transform.rotation);
		int32_t L_2 = __this->get_lifetime_6();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_3 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_lv_20();
		float L_4;
		L_4 = floorf(((float)((float)((float)((float)L_3))/(float)(4.0f))));
		if ((!(((float)(fmodf(((float)((float)L_2)), ((float)il2cpp_codegen_subtract((float)(10.0f), (float)L_4))))) == ((float)(0.0f)))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (lifetime % (10 - (Mathf.Floor(PlayerController.lv / 4f))) == 0) Instantiate(bullet, this.transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_bullet_4();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_6);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_7;
		L_7 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_6, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_8;
		L_8 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_8);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_9;
		L_9 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_8, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_5, L_7, L_9, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
		// }
		goto IL_00a6;
	}

IL_005e:
	{
		// if (lifetime % (10 - (Mathf.Floor(EnemyController.lv / 4f))) == 0) Instantiate(Ebullet, this.transform.position, transform.rotation);
		int32_t L_11 = __this->get_lifetime_6();
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_12 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_lv_14();
		float L_13;
		L_13 = floorf(((float)((float)((float)((float)L_12))/(float)(4.0f))));
		if ((!(((float)(fmodf(((float)((float)L_11)), ((float)il2cpp_codegen_subtract((float)(10.0f), (float)L_13))))) == ((float)(0.0f)))))
		{
			goto IL_00a6;
		}
	}
	{
		// if (lifetime % (10 - (Mathf.Floor(EnemyController.lv / 4f))) == 0) Instantiate(Ebullet, this.transform.position, transform.rotation);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = __this->get_Ebullet_5();
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_15;
		L_15 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_15);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_16;
		L_16 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_15, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_17;
		L_17 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_17);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_18;
		L_18 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_17, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_19;
		L_19 = Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9(L_14, L_16, L_18, /*hidden argument*/Object_Instantiate_TisGameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319_mF6943C67D79929CEF346FD96932E84EFCA9819B9_RuntimeMethod_var);
	}

IL_00a6:
	{
		// if (lifetime <= 0)
		int32_t L_20 = __this->get_lifetime_6();
		if ((((int32_t)L_20) > ((int32_t)0)))
		{
			goto IL_00ba;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_21;
		L_21 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_21, /*hidden argument*/NULL);
	}

IL_00ba:
	{
		// lifetime--;
		int32_t L_22 = __this->get_lifetime_6();
		__this->set_lifetime_6(((int32_t)il2cpp_codegen_subtract((int32_t)L_22, (int32_t)1)));
		// }
		return;
	}
}
// System.Void TurretController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TurretController__ctor_m473631F3C700500730044026BCF22B2116A71B54 (TurretController_t27CB355B33C1DFEE9C98335E8E7EECEBC7335154 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void WLSViewerController::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WLSViewerController_Start_m08CD0806FD43F6B3CA3CF92A704C17A94ECC0C09 (WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// text = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_mE775A52A31F4F2F9E99272B014CC0CBFB4BD3294_RuntimeMethod_var);
		__this->set_text_4(L_0);
		// }
		return;
	}
}
// System.Void WLSViewerController::winlose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WLSViewerController_winlose_m54D5B61AB2B7A42B9BE3166A6EED47C3D79337ED (WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1FBE7A8CACED3F61B42B76F6BC527A55402E469A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6C2CB372B682621CEBB58B13EF31D980CFA9FC06);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA1C524771293DC4E4830FE7935EA79ACC29C55B2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC36538AF001EE8796EBA833CC01B251A6377EFC6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3F1BAB9C8170D1026D2CCA084FBA0E9B8F110C7);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (EnemyController.Life < 0)
		IL2CPP_RUNTIME_CLASS_INIT(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var);
		int32_t L_0 = ((EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_StaticFields*)il2cpp_codegen_static_fields_for(EnemyController_t357E3ED89EF6EC48EE05136A579DE0B0FABC59BB_il2cpp_TypeInfo_var))->get_Life_4();
		if ((((int32_t)L_0) >= ((int32_t)0)))
		{
			goto IL_0032;
		}
	}
	{
		// text.text = "????!\n" + "?X?R?A:" + PlayerController.score.ToString("D7") + "\n????";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_text_4();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		String_t* L_2;
		L_2 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_address_of_score_21()), _stringLiteral6C2CB372B682621CEBB58B13EF31D980CFA9FC06, /*hidden argument*/NULL);
		String_t* L_3;
		L_3 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralF3F1BAB9C8170D1026D2CCA084FBA0E9B8F110C7, L_2, _stringLiteral1FBE7A8CACED3F61B42B76F6BC527A55402E469A, /*hidden argument*/NULL);
		NullCheck(L_1);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_3);
		// }
		return;
	}

IL_0032:
	{
		// text.text = "?s?k...\n" + "?X?R?A:" + PlayerController.score.ToString("D7") + "\n?^?C?g??????";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_text_4();
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		String_t* L_5;
		L_5 = Int32_ToString_m5398ED0B6625B75CAF70C63B3CF2CE47D3C1B184((int32_t*)(((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_address_of_score_21()), _stringLiteral6C2CB372B682621CEBB58B13EF31D980CFA9FC06, /*hidden argument*/NULL);
		String_t* L_6;
		L_6 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44(_stringLiteralA1C524771293DC4E4830FE7935EA79ACC29C55B2, L_5, _stringLiteralC36538AF001EE8796EBA833CC01B251A6377EFC6, /*hidden argument*/NULL);
		NullCheck(L_4);
		VirtualActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_4, L_6);
		// }
		return;
	}
}
// System.Void WLSViewerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WLSViewerController__ctor_m91C86BE5302598919BB210F7E869856944CBD7FE (WLSViewerController_tCDB2F43F2E3C4F17E78B6BDB54BD6C8B765A0997 * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void type1::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void type1_Start_mA8FA86344CAB5C19DA78ACD0246BF04DF22F0C43 (type1_t46A08AF0AC40A46A1A13810AD7C4235E524B08BE * __this, const RuntimeMethod* method)
{
	{
		// Aspeed = new Vector3(speed, 0, 0);
		float L_0 = __this->get_speed_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_1), L_0, (0.0f), (0.0f), /*hidden argument*/NULL);
		__this->set_Aspeed_7(L_1);
		// }
		return;
	}
}
// System.Single[] type1::changexy(System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* type1_changexy_m0C2E9333C7AB0935AEE387E370B55A596617C5CA (type1_t46A08AF0AC40A46A1A13810AD7C4235E524B08BE * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// float[] xy = new float[2] { Mathf.Floor((2.5f + x) * ((float)width / 5)), Mathf.Ceil((10 - y) * ((float)height / 10)) };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_0 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)2);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_1 = L_0;
		float L_2 = ___x0;
		float L_3;
		L_3 = floorf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)(2.5f), (float)L_2)), (float)(5.4000001f))));
		NullCheck(L_1);
		(L_1)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_4 = L_1;
		float L_5 = ___y1;
		float L_6;
		L_6 = ceilf(((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_subtract((float)(10.0f), (float)L_5)), (float)(5.4000001f))));
		NullCheck(L_4);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_6);
		// return xy;
		return L_4;
	}
}
// System.Void type1::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void type1_Update_mB0D2A090FE8F4F5DFD4E538AA2DFDFC117CF0C0C (type1_t46A08AF0AC40A46A1A13810AD7C4235E524B08BE * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	int32_t V_2 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_3;
	memset((&V_3), 0, sizeof(V_3));
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_4;
	memset((&V_4), 0, sizeof(V_4));
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	{
		// if (Astar.timeElapsed >= Astar.timeOut && this.transform.position.y > 0)
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		int32_t L_0 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_timeElapsed_15();
		int32_t L_1 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_timeOut_14();
		if ((((int32_t)L_0) < ((int32_t)L_1)))
		{
			goto IL_02f1;
		}
	}
	{
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_2;
		L_2 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_2);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3;
		L_3 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_2, /*hidden argument*/NULL);
		float L_4 = L_3.get_y_3();
		if ((!(((float)L_4) > ((float)(0.0f)))))
		{
			goto IL_02f1;
		}
	}
	{
		// Vector3 pos = transform.position;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		V_3 = L_6;
		// Vector3 velocity = transform.rotation * Aspeed;
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_7;
		L_7 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_7);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_8;
		L_8 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_7, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9 = __this->get_Aspeed_7();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10;
		L_10 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_8, L_9, /*hidden argument*/NULL);
		V_4 = L_10;
		// pos += velocity * 5;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline(L_12, (5.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14;
		L_14 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_11, L_13, /*hidden argument*/NULL);
		V_3 = L_14;
		// for (i = 30; i > 0; i--)
		V_2 = ((int32_t)30);
		goto IL_02ea;
	}

IL_0068:
	{
		// int x = (int)changexy(pos.x, 0)[0];
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15 = V_3;
		float L_16 = L_15.get_x_2();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_17;
		L_17 = type1_changexy_m0C2E9333C7AB0935AEE387E370B55A596617C5CA(__this, L_16, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_17);
		int32_t L_18 = 0;
		float L_19 = (L_17)->GetAt(static_cast<il2cpp_array_size_t>(L_18));
		V_5 = ((int32_t)((int32_t)L_19));
		// int y = (int)changexy(0, pos.y)[1];
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_20 = V_3;
		float L_21 = L_20.get_y_3();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_22;
		L_22 = type1_changexy_m0C2E9333C7AB0935AEE387E370B55A596617C5CA(__this, (0.0f), L_21, /*hidden argument*/NULL);
		NullCheck(L_22);
		int32_t L_23 = 1;
		float L_24 = (L_22)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		V_6 = ((int32_t)((int32_t)L_24));
		// if (x < 0 || y < 0 || x >= width || y >= height)
		int32_t L_25 = V_5;
		if ((((int32_t)L_25) < ((int32_t)0)))
		{
			goto IL_02f1;
		}
	}
	{
		int32_t L_26 = V_6;
		if ((((int32_t)L_26) < ((int32_t)0)))
		{
			goto IL_02f1;
		}
	}
	{
		int32_t L_27 = V_5;
		if ((((int32_t)L_27) >= ((int32_t)((int32_t)27))))
		{
			goto IL_02f1;
		}
	}
	{
		int32_t L_28 = V_6;
		if ((((int32_t)L_28) >= ((int32_t)((int32_t)54))))
		{
			goto IL_02f1;
		}
	}
	{
		// Astar.node[x][y][2] += i;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_29 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_30 = V_5;
		NullCheck(L_29);
		int32_t L_31 = L_30;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_32 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_29)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33 = V_6;
		NullCheck(L_32);
		int32_t L_34 = L_33;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_35 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_32)->GetAt(static_cast<il2cpp_array_size_t>(L_34));
		NullCheck(L_35);
		float* L_36 = ((L_35)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_37 = *((float*)L_36);
		int32_t L_38 = V_2;
		*((float*)L_36) = (float)((float)il2cpp_codegen_add((float)L_37, (float)((float)((float)L_38))));
		// if (y > 0) Astar.node[x][y - 1][ 2] += Mathf.Floor(i * 0.5f);
		int32_t L_39 = V_6;
		if ((((int32_t)L_39) <= ((int32_t)0)))
		{
			goto IL_00f6;
		}
	}
	{
		// if (y > 0) Astar.node[x][y - 1][ 2] += Mathf.Floor(i * 0.5f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_40 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_41 = V_5;
		NullCheck(L_40);
		int32_t L_42 = L_41;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_43 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_40)->GetAt(static_cast<il2cpp_array_size_t>(L_42));
		int32_t L_44 = V_6;
		NullCheck(L_43);
		int32_t L_45 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_44, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_43)->GetAt(static_cast<il2cpp_array_size_t>(L_45));
		NullCheck(L_46);
		float* L_47 = ((L_46)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_48 = *((float*)L_47);
		int32_t L_49 = V_2;
		float L_50;
		L_50 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_49)), (float)(0.5f))));
		*((float*)L_47) = (float)((float)il2cpp_codegen_add((float)L_48, (float)L_50));
	}

IL_00f6:
	{
		// if (y < height - 1) Astar.node[x][y + 1][2] += Mathf.Floor(i * 0.5f);
		int32_t L_51 = V_6;
		if ((((int32_t)L_51) >= ((int32_t)((int32_t)53))))
		{
			goto IL_0120;
		}
	}
	{
		// if (y < height - 1) Astar.node[x][y + 1][2] += Mathf.Floor(i * 0.5f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_52 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_53 = V_5;
		NullCheck(L_52);
		int32_t L_54 = L_53;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_55 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_52)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		int32_t L_56 = V_6;
		NullCheck(L_55);
		int32_t L_57 = ((int32_t)il2cpp_codegen_add((int32_t)L_56, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_58 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_55)->GetAt(static_cast<il2cpp_array_size_t>(L_57));
		NullCheck(L_58);
		float* L_59 = ((L_58)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_60 = *((float*)L_59);
		int32_t L_61 = V_2;
		float L_62;
		L_62 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_61)), (float)(0.5f))));
		*((float*)L_59) = (float)((float)il2cpp_codegen_add((float)L_60, (float)L_62));
	}

IL_0120:
	{
		// if (x > 0) Astar.node[x - 1][y][2] += Mathf.Floor(i * 0.5f);
		int32_t L_63 = V_5;
		if ((((int32_t)L_63) <= ((int32_t)0)))
		{
			goto IL_0149;
		}
	}
	{
		// if (x > 0) Astar.node[x - 1][y][2] += Mathf.Floor(i * 0.5f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_64 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_65 = V_5;
		NullCheck(L_64);
		int32_t L_66 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_65, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_67 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int32_t L_68 = V_6;
		NullCheck(L_67);
		int32_t L_69 = L_68;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_70 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		float* L_71 = ((L_70)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_72 = *((float*)L_71);
		int32_t L_73 = V_2;
		float L_74;
		L_74 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_73)), (float)(0.5f))));
		*((float*)L_71) = (float)((float)il2cpp_codegen_add((float)L_72, (float)L_74));
	}

IL_0149:
	{
		// if (x < width - 1) Astar.node[x + 1][y][2] += Mathf.Floor(i * 0.5f);
		int32_t L_75 = V_5;
		if ((((int32_t)L_75) >= ((int32_t)((int32_t)26))))
		{
			goto IL_0173;
		}
	}
	{
		// if (x < width - 1) Astar.node[x + 1][y][2] += Mathf.Floor(i * 0.5f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_76 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_77 = V_5;
		NullCheck(L_76);
		int32_t L_78 = ((int32_t)il2cpp_codegen_add((int32_t)L_77, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_79 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_76)->GetAt(static_cast<il2cpp_array_size_t>(L_78));
		int32_t L_80 = V_6;
		NullCheck(L_79);
		int32_t L_81 = L_80;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_82 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_79)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_82);
		float* L_83 = ((L_82)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_84 = *((float*)L_83);
		int32_t L_85 = V_2;
		float L_86;
		L_86 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_85)), (float)(0.5f))));
		*((float*)L_83) = (float)((float)il2cpp_codegen_add((float)L_84, (float)L_86));
	}

IL_0173:
	{
		// if (y > 1) Astar.node[x][y - 2][2] += Mathf.Floor(i * 0.1f);
		int32_t L_87 = V_6;
		if ((((int32_t)L_87) <= ((int32_t)1)))
		{
			goto IL_019c;
		}
	}
	{
		// if (y > 1) Astar.node[x][y - 2][2] += Mathf.Floor(i * 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_88 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_89 = V_5;
		NullCheck(L_88);
		int32_t L_90 = L_89;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_91 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_90));
		int32_t L_92 = V_6;
		NullCheck(L_91);
		int32_t L_93 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_92, (int32_t)2));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_94 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_91)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		NullCheck(L_94);
		float* L_95 = ((L_94)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_96 = *((float*)L_95);
		int32_t L_97 = V_2;
		float L_98;
		L_98 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_97)), (float)(0.100000001f))));
		*((float*)L_95) = (float)((float)il2cpp_codegen_add((float)L_96, (float)L_98));
	}

IL_019c:
	{
		// if (y < height - 2) Astar.node[x][y + 2][2] += Mathf.Floor(i * 0.1f);
		int32_t L_99 = V_6;
		if ((((int32_t)L_99) >= ((int32_t)((int32_t)52))))
		{
			goto IL_01c6;
		}
	}
	{
		// if (y < height - 2) Astar.node[x][y + 2][2] += Mathf.Floor(i * 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_100 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_101 = V_5;
		NullCheck(L_100);
		int32_t L_102 = L_101;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_103 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_100)->GetAt(static_cast<il2cpp_array_size_t>(L_102));
		int32_t L_104 = V_6;
		NullCheck(L_103);
		int32_t L_105 = ((int32_t)il2cpp_codegen_add((int32_t)L_104, (int32_t)2));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_106 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_103)->GetAt(static_cast<il2cpp_array_size_t>(L_105));
		NullCheck(L_106);
		float* L_107 = ((L_106)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_108 = *((float*)L_107);
		int32_t L_109 = V_2;
		float L_110;
		L_110 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_109)), (float)(0.100000001f))));
		*((float*)L_107) = (float)((float)il2cpp_codegen_add((float)L_108, (float)L_110));
	}

IL_01c6:
	{
		// if (x > 1) Astar.node[x - 2][y][2] += Mathf.Floor(i * 0.1f);
		int32_t L_111 = V_5;
		if ((((int32_t)L_111) <= ((int32_t)1)))
		{
			goto IL_01ef;
		}
	}
	{
		// if (x > 1) Astar.node[x - 2][y][2] += Mathf.Floor(i * 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_112 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_113 = V_5;
		NullCheck(L_112);
		int32_t L_114 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_113, (int32_t)2));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_115 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_112)->GetAt(static_cast<il2cpp_array_size_t>(L_114));
		int32_t L_116 = V_6;
		NullCheck(L_115);
		int32_t L_117 = L_116;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_118 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_115)->GetAt(static_cast<il2cpp_array_size_t>(L_117));
		NullCheck(L_118);
		float* L_119 = ((L_118)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_120 = *((float*)L_119);
		int32_t L_121 = V_2;
		float L_122;
		L_122 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_121)), (float)(0.100000001f))));
		*((float*)L_119) = (float)((float)il2cpp_codegen_add((float)L_120, (float)L_122));
	}

IL_01ef:
	{
		// if (x < width - 2) Astar.node[x + 2][y][2] += Mathf.Floor(i * 0.1f);
		int32_t L_123 = V_5;
		if ((((int32_t)L_123) >= ((int32_t)((int32_t)25))))
		{
			goto IL_0219;
		}
	}
	{
		// if (x < width - 2) Astar.node[x + 2][y][2] += Mathf.Floor(i * 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_124 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_125 = V_5;
		NullCheck(L_124);
		int32_t L_126 = ((int32_t)il2cpp_codegen_add((int32_t)L_125, (int32_t)2));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_127 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_124)->GetAt(static_cast<il2cpp_array_size_t>(L_126));
		int32_t L_128 = V_6;
		NullCheck(L_127);
		int32_t L_129 = L_128;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_130 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_127)->GetAt(static_cast<il2cpp_array_size_t>(L_129));
		NullCheck(L_130);
		float* L_131 = ((L_130)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_132 = *((float*)L_131);
		int32_t L_133 = V_2;
		float L_134;
		L_134 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_133)), (float)(0.100000001f))));
		*((float*)L_131) = (float)((float)il2cpp_codegen_add((float)L_132, (float)L_134));
	}

IL_0219:
	{
		// if (x < width - 1 && y > 0) Astar.node[x + 1][y - 1][2] += Mathf.Floor(i * 0.1f);
		int32_t L_135 = V_5;
		if ((((int32_t)L_135) >= ((int32_t)((int32_t)26))))
		{
			goto IL_024a;
		}
	}
	{
		int32_t L_136 = V_6;
		if ((((int32_t)L_136) <= ((int32_t)0)))
		{
			goto IL_024a;
		}
	}
	{
		// if (x < width - 1 && y > 0) Astar.node[x + 1][y - 1][2] += Mathf.Floor(i * 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_137 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_138 = V_5;
		NullCheck(L_137);
		int32_t L_139 = ((int32_t)il2cpp_codegen_add((int32_t)L_138, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_140 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_137)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		int32_t L_141 = V_6;
		NullCheck(L_140);
		int32_t L_142 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_141, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_143 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_140)->GetAt(static_cast<il2cpp_array_size_t>(L_142));
		NullCheck(L_143);
		float* L_144 = ((L_143)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_145 = *((float*)L_144);
		int32_t L_146 = V_2;
		float L_147;
		L_147 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_146)), (float)(0.100000001f))));
		*((float*)L_144) = (float)((float)il2cpp_codegen_add((float)L_145, (float)L_147));
	}

IL_024a:
	{
		// if (x > 0 && y < height - 1) Astar.node[x - 1][y + 1][2] += Mathf.Floor(i * 0.1f);
		int32_t L_148 = V_5;
		if ((((int32_t)L_148) <= ((int32_t)0)))
		{
			goto IL_027b;
		}
	}
	{
		int32_t L_149 = V_6;
		if ((((int32_t)L_149) >= ((int32_t)((int32_t)53))))
		{
			goto IL_027b;
		}
	}
	{
		// if (x > 0 && y < height - 1) Astar.node[x - 1][y + 1][2] += Mathf.Floor(i * 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_150 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_151 = V_5;
		NullCheck(L_150);
		int32_t L_152 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_151, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_153 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_152));
		int32_t L_154 = V_6;
		NullCheck(L_153);
		int32_t L_155 = ((int32_t)il2cpp_codegen_add((int32_t)L_154, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_156 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_153)->GetAt(static_cast<il2cpp_array_size_t>(L_155));
		NullCheck(L_156);
		float* L_157 = ((L_156)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_158 = *((float*)L_157);
		int32_t L_159 = V_2;
		float L_160;
		L_160 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_159)), (float)(0.100000001f))));
		*((float*)L_157) = (float)((float)il2cpp_codegen_add((float)L_158, (float)L_160));
	}

IL_027b:
	{
		// if (x > 0 && y > 0) Astar.node[x - 1][y - 1][2] += Mathf.Floor(i * 0.1f);
		int32_t L_161 = V_5;
		if ((((int32_t)L_161) <= ((int32_t)0)))
		{
			goto IL_02ab;
		}
	}
	{
		int32_t L_162 = V_6;
		if ((((int32_t)L_162) <= ((int32_t)0)))
		{
			goto IL_02ab;
		}
	}
	{
		// if (x > 0 && y > 0) Astar.node[x - 1][y - 1][2] += Mathf.Floor(i * 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_163 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_164 = V_5;
		NullCheck(L_163);
		int32_t L_165 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_164, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_166 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_163)->GetAt(static_cast<il2cpp_array_size_t>(L_165));
		int32_t L_167 = V_6;
		NullCheck(L_166);
		int32_t L_168 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_169 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_166)->GetAt(static_cast<il2cpp_array_size_t>(L_168));
		NullCheck(L_169);
		float* L_170 = ((L_169)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_171 = *((float*)L_170);
		int32_t L_172 = V_2;
		float L_173;
		L_173 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_172)), (float)(0.100000001f))));
		*((float*)L_170) = (float)((float)il2cpp_codegen_add((float)L_171, (float)L_173));
	}

IL_02ab:
	{
		// if (x < width - 1 && y < height - 1) Astar.node[x + 1][y + 1][2] += Mathf.Floor(i * 0.1f);
		int32_t L_174 = V_5;
		if ((((int32_t)L_174) >= ((int32_t)((int32_t)26))))
		{
			goto IL_02dd;
		}
	}
	{
		int32_t L_175 = V_6;
		if ((((int32_t)L_175) >= ((int32_t)((int32_t)53))))
		{
			goto IL_02dd;
		}
	}
	{
		// if (x < width - 1 && y < height - 1) Astar.node[x + 1][y + 1][2] += Mathf.Floor(i * 0.1f);
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_176 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_177 = V_5;
		NullCheck(L_176);
		int32_t L_178 = ((int32_t)il2cpp_codegen_add((int32_t)L_177, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_179 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_176)->GetAt(static_cast<il2cpp_array_size_t>(L_178));
		int32_t L_180 = V_6;
		NullCheck(L_179);
		int32_t L_181 = ((int32_t)il2cpp_codegen_add((int32_t)L_180, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_182 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_179)->GetAt(static_cast<il2cpp_array_size_t>(L_181));
		NullCheck(L_182);
		float* L_183 = ((L_182)->GetAddressAt(static_cast<il2cpp_array_size_t>(2)));
		float L_184 = *((float*)L_183);
		int32_t L_185 = V_2;
		float L_186;
		L_186 = floorf(((float)il2cpp_codegen_multiply((float)((float)((float)L_185)), (float)(0.100000001f))));
		*((float*)L_183) = (float)((float)il2cpp_codegen_add((float)L_184, (float)L_186));
	}

IL_02dd:
	{
		// pos += velocity;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_187 = V_3;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_188 = V_4;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_189;
		L_189 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_187, L_188, /*hidden argument*/NULL);
		V_3 = L_189;
		// for (i = 30; i > 0; i--)
		int32_t L_190 = V_2;
		V_2 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_190, (int32_t)1));
	}

IL_02ea:
	{
		// for (i = 30; i > 0; i--)
		int32_t L_191 = V_2;
		if ((((int32_t)L_191) > ((int32_t)0)))
		{
			goto IL_0068;
		}
	}

IL_02f1:
	{
		// int area = 1;
		V_0 = 1;
		// if (this.transform.position.y < 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_192;
		L_192 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_192);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_193;
		L_193 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_192, /*hidden argument*/NULL);
		float L_194 = L_193.get_y_3();
		if ((!(((float)L_194) < ((float)(0.0f)))))
		{
			goto IL_030c;
		}
	}
	{
		// area = 2;
		V_0 = 2;
	}

IL_030c:
	{
		// Vector3 vel = gameObject.transform.rotation * new Vector3(speed * area, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_195;
		L_195 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_195);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_196;
		L_196 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_195, /*hidden argument*/NULL);
		NullCheck(L_196);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_197;
		L_197 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_196, /*hidden argument*/NULL);
		float L_198 = __this->get_speed_4();
		int32_t L_199 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_200;
		memset((&L_200), 0, sizeof(L_200));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_200), ((float)il2cpp_codegen_multiply((float)L_198, (float)((float)((float)L_199)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_201;
		L_201 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_197, L_200, /*hidden argument*/NULL);
		V_1 = L_201;
		// gameObject.transform.position += vel;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_202;
		L_202 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_202);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_203;
		L_203 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_202, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_204 = L_203;
		NullCheck(L_204);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_205;
		L_205 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_204, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_206 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_207;
		L_207 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_205, L_206, /*hidden argument*/NULL);
		NullCheck(L_204);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_204, L_207, /*hidden argument*/NULL);
		// if (Mathf.Abs(this.transform.position.x) > 2.5)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_208;
		L_208 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_208);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_209;
		L_209 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_208, /*hidden argument*/NULL);
		float L_210 = L_209.get_x_2();
		float L_211;
		L_211 = fabsf(L_210);
		if ((!(((double)((double)((double)L_211))) > ((double)(2.5)))))
		{
			goto IL_03b3;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0, 0, (this.transform.eulerAngles.z + 90) * -1 - 90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_212;
		L_212 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_213;
		L_213 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_213);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_214;
		L_214 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_213, /*hidden argument*/NULL);
		float L_215 = L_214.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_216;
		L_216 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_215, (float)(90.0f))), (float)(-1.0f))), (float)(90.0f))), /*hidden argument*/NULL);
		NullCheck(L_212);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_212, L_216, /*hidden argument*/NULL);
	}

IL_03b3:
	{
		// if (this.transform.position.y < -10)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_217;
		L_217 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_217);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_218;
		L_218 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_217, /*hidden argument*/NULL);
		float L_219 = L_218.get_y_3();
		if ((!(((float)L_219) < ((float)(-10.0f)))))
		{
			goto IL_03fa;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0, 0, (this.transform.eulerAngles.z) * -1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_220;
		L_220 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_221;
		L_221 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_221);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_222;
		L_222 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_221, /*hidden argument*/NULL);
		float L_223 = L_222.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_224;
		L_224 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_223, (float)(-1.0f))), /*hidden argument*/NULL);
		NullCheck(L_220);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_220, L_224, /*hidden argument*/NULL);
	}

IL_03fa:
	{
		// if (this.transform.position.y > 10)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_225;
		L_225 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_225);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_226;
		L_226 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_225, /*hidden argument*/NULL);
		float L_227 = L_226.get_y_3();
		if ((!(((float)L_227) > ((float)(10.0f)))))
		{
			goto IL_041c;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_228;
		L_228 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_228, /*hidden argument*/NULL);
	}

IL_041c:
	{
		// }
		return;
	}
}
// System.Void type1::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void type1__ctor_m01683533DA29E691FEE8147BD8AC90A3ED090EC1 (type1_t46A08AF0AC40A46A1A13810AD7C4235E524B08BE * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void type1P2::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void type1P2_Update_m2199C7FEA974CBB377CF044D510ADC2F059D5F35 (type1P2_t6C4385EBD0FA431E31FF590ACEC4EBBC65676C0F * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_1;
	memset((&V_1), 0, sizeof(V_1));
	{
		// int area = 1;
		V_0 = 1;
		// if (this.transform.position.y > 0)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_0;
		L_0 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_0);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_1;
		L_1 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_0, /*hidden argument*/NULL);
		float L_2 = L_1.get_y_3();
		if ((!(((float)L_2) > ((float)(0.0f)))))
		{
			goto IL_001b;
		}
	}
	{
		// area = 2;
		V_0 = 2;
	}

IL_001b:
	{
		// Vector3 velocity = gameObject.transform.rotation * new Vector3(speed * area, 0, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3;
		L_3 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_3);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_4;
		L_4 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_3, /*hidden argument*/NULL);
		NullCheck(L_4);
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_5;
		L_5 = Transform_get_rotation_m4AA3858C00DF4C9614B80352558C4C37D08D2200(L_4, /*hidden argument*/NULL);
		float L_6 = __this->get_speed_4();
		int32_t L_7 = V_0;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8;
		memset((&L_8), 0, sizeof(L_8));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_8), ((float)il2cpp_codegen_multiply((float)L_6, (float)((float)((float)L_7)))), (0.0f), (0.0f), /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		L_9 = Quaternion_op_Multiply_mDC5F913E6B21FEC72AB2CF737D34CC6C7A69803D(L_5, L_8, /*hidden argument*/NULL);
		V_1 = L_9;
		// gameObject.transform.position += velocity;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10;
		L_10 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		NullCheck(L_10);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_11;
		L_11 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_10, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_12 = L_11;
		NullCheck(L_12);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13;
		L_13 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_12, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_14 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_15;
		L_15 = Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_12, L_15, /*hidden argument*/NULL);
		// if (Mathf.Abs(this.transform.position.x) > 2.5)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_16;
		L_16 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_16);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_17;
		L_17 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_16, /*hidden argument*/NULL);
		float L_18 = L_17.get_x_2();
		float L_19;
		L_19 = fabsf(L_18);
		if ((!(((double)((double)((double)L_19))) > ((double)(2.5)))))
		{
			goto IL_00c2;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0, 0, (this.transform.eulerAngles.z + 90) * -1 - 90);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_20;
		L_20 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_21;
		L_21 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_21);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_22;
		L_22 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_21, /*hidden argument*/NULL);
		float L_23 = L_22.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_24;
		L_24 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_subtract((float)((float)il2cpp_codegen_multiply((float)((float)il2cpp_codegen_add((float)L_23, (float)(90.0f))), (float)(-1.0f))), (float)(90.0f))), /*hidden argument*/NULL);
		NullCheck(L_20);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_20, L_24, /*hidden argument*/NULL);
	}

IL_00c2:
	{
		// if(this.transform.position.y > 10)
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_25;
		L_25 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_25);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_26;
		L_26 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_25, /*hidden argument*/NULL);
		float L_27 = L_26.get_y_3();
		if ((!(((float)L_27) > ((float)(10.0f)))))
		{
			goto IL_0109;
		}
	}
	{
		// transform.rotation = Quaternion.Euler(0, 0, (this.transform.eulerAngles.z) * -1);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_28;
		L_28 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_29;
		L_29 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_29);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_30;
		L_30 = Transform_get_eulerAngles_mCF1E10C36ED1F03804A1D10A9BAB272E0EA8766F(L_29, /*hidden argument*/NULL);
		float L_31 = L_30.get_z_4();
		Quaternion_t6D28618CF65156D4A0AD747370DDFD0C514A31B4  L_32;
		L_32 = Quaternion_Euler_m37BF99FFFA09F4B3F83DC066641B82C59B19A9C3((0.0f), (0.0f), ((float)il2cpp_codegen_multiply((float)L_31, (float)(-1.0f))), /*hidden argument*/NULL);
		NullCheck(L_28);
		Transform_set_rotation_m1B5F3D4CE984AB31254615C9C71B0E54978583B4(L_28, L_32, /*hidden argument*/NULL);
	}

IL_0109:
	{
		// if(this.transform.position.y < -10){
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_33;
		L_33 = Component_get_transform_mE8496EBC45BEB1BADB5F314960F1DF1C952FA11F(__this, /*hidden argument*/NULL);
		NullCheck(L_33);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_34;
		L_34 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_33, /*hidden argument*/NULL);
		float L_35 = L_34.get_y_3();
		if ((!(((float)L_35) < ((float)(-10.0f)))))
		{
			goto IL_012b;
		}
	}
	{
		// Destroy(this.gameObject);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_36;
		L_36 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(__this, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_36, /*hidden argument*/NULL);
	}

IL_012b:
	{
		// }
		return;
	}
}
// System.Void type1P2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void type1P2__ctor_m52D74ADD0681D42776DC466A17328B33CE97D825 (type1P2_t6C4385EBD0FA431E31FF590ACEC4EBBC65676C0F * __this, const RuntimeMethod* method)
{
	{
		MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED(__this, /*hidden argument*/NULL);
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
// System.Void Astar/<A_star2>d__21::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CA_star2U3Ed__21__ctor_m346058880E4547F91C4DA19C89FA2C9BD0930A71 (U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void Astar/<A_star2>d__21::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CA_star2U3Ed__21_System_IDisposable_Dispose_mF9AD18CCD11B4B32B4F39FA52F074A0BC66DD6DB (U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean Astar/<A_star2>d__21::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CA_star2U3Ed__21_MoveNext_mC888F5058579127E7A4CC6AAA47AC57F5D007687 (U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Clear_m09F193FACE259E473A52AAC6993D0387C0DEFF47_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_RemoveAt_mDE29BD2B07640990225575EB7570EEC9B34BB428_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	int32_t V_6 = 0;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_10 = NULL;
	int32_t V_11 = 0;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_15 = NULL;
	int32_t V_16 = 0;
	int32_t V_17 = 0;
	int32_t V_18 = 0;
	int32_t V_19 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_20 = NULL;
	int32_t V_21 = 0;
	int32_t V_22 = 0;
	int32_t V_23 = 0;
	int32_t V_24 = 0;
	SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* V_25 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_1 = __this->get_U3CU3E4__this_2();
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
				goto IL_0095;
			}
			case 2:
			{
				goto IL_014a;
			}
		}
	}
	{
		return (bool)0;
	}

IL_0022:
	{
		__this->set_U3CU3E1__state_0((-1));
		// int count = 0;
		__this->set_U3CcountU3E5__2_5(0);
		// int count2 = 0;
		__this->set_U3Ccount2U3E5__3_6(0);
		// open.Clear();
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_3 = V_1;
		NullCheck(L_3);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_4 = L_3->get_open_16();
		NullCheck(L_4);
		List_1_Clear_m09F193FACE259E473A52AAC6993D0387C0DEFF47(L_4, /*hidden argument*/List_1_Clear_m09F193FACE259E473A52AAC6993D0387C0DEFF47_RuntimeMethod_var);
		// open.Add(start);
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_5 = V_1;
		NullCheck(L_5);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_6 = L_5->get_open_16();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_7 = __this->get_start_3();
		NullCheck(L_6);
		List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D(L_6, L_7, /*hidden argument*/List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D_RuntimeMethod_var);
		goto IL_07af;
	}

IL_0058:
	{
		// if (count >= 300 && count2 < 5)
		int32_t L_8 = __this->get_U3CcountU3E5__2_5();
		if ((((int32_t)L_8) < ((int32_t)((int32_t)300))))
		{
			goto IL_009c;
		}
	}
	{
		int32_t L_9 = __this->get_U3Ccount2U3E5__3_6();
		if ((((int32_t)L_9) >= ((int32_t)5)))
		{
			goto IL_009c;
		}
	}
	{
		// count2++;
		int32_t L_10 = __this->get_U3Ccount2U3E5__3_6();
		V_2 = L_10;
		int32_t L_11 = V_2;
		__this->set_U3Ccount2U3E5__3_6(((int32_t)il2cpp_codegen_add((int32_t)L_11, (int32_t)1)));
		// count = 0;
		__this->set_U3CcountU3E5__2_5(0);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0095:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_009c:
	{
		// count++;
		int32_t L_12 = __this->get_U3CcountU3E5__2_5();
		V_2 = L_12;
		int32_t L_13 = V_2;
		__this->set_U3CcountU3E5__2_5(((int32_t)il2cpp_codegen_add((int32_t)L_13, (int32_t)1)));
		// sort(open);
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_14 = V_1;
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_15 = V_1;
		NullCheck(L_15);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_16 = L_15->get_open_16();
		NullCheck(L_14);
		Astar_sort_mF334B3D5D2C23449EB8E187D4309B8F56CC122D0(L_14, L_16, /*hidden argument*/NULL);
		// node_search = open[0];
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_17 = V_1;
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_18 = V_1;
		NullCheck(L_18);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_19 = L_18->get_open_16();
		NullCheck(L_19);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_20;
		L_20 = List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_inline(L_19, 0, /*hidden argument*/List_1_get_Item_m974865D544D3738E0C92B176D1D076A6AFE919E3_RuntimeMethod_var);
		NullCheck(L_17);
		L_17->set_node_search_17(L_20);
		// open.RemoveAt(0);
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_21 = V_1;
		NullCheck(L_21);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_22 = L_21->get_open_16();
		NullCheck(L_22);
		List_1_RemoveAt_mDE29BD2B07640990225575EB7570EEC9B34BB428(L_22, 0, /*hidden argument*/List_1_RemoveAt_mDE29BD2B07640990225575EB7570EEC9B34BB428_RuntimeMethod_var);
		// int x = (int)node_search[0];
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_23 = V_1;
		NullCheck(L_23);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_24 = L_23->get_node_search_17();
		NullCheck(L_24);
		int32_t L_25 = 0;
		float L_26 = (L_24)->GetAt(static_cast<il2cpp_array_size_t>(L_25));
		__this->set_U3CxU3E5__4_7(((int32_t)((int32_t)L_26)));
		// int y = (int)node_search[1];
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_27 = V_1;
		NullCheck(L_27);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_28 = L_27->get_node_search_17();
		NullCheck(L_28);
		int32_t L_29 = 1;
		float L_30 = (L_28)->GetAt(static_cast<il2cpp_array_size_t>(L_29));
		__this->set_U3CyU3E5__5_8(((int32_t)((int32_t)L_30)));
		// node[x][y][3] = 2;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_31 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_32 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_31);
		int32_t L_33 = L_32;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_34 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_31)->GetAt(static_cast<il2cpp_array_size_t>(L_33));
		int32_t L_35 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_34);
		int32_t L_36 = L_35;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_37 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_34)->GetAt(static_cast<il2cpp_array_size_t>(L_36));
		NullCheck(L_37);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(2.0f));
		// if (node_search[0] == goal[0] && node_search[1] == goal[1])
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_38 = V_1;
		NullCheck(L_38);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_39 = L_38->get_node_search_17();
		NullCheck(L_39);
		int32_t L_40 = 0;
		float L_41 = (L_39)->GetAt(static_cast<il2cpp_array_size_t>(L_40));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_42 = __this->get_goal_4();
		NullCheck(L_42);
		int32_t L_43 = 0;
		float L_44 = (L_42)->GetAt(static_cast<il2cpp_array_size_t>(L_43));
		if ((!(((float)L_41) == ((float)L_44))))
		{
			goto IL_024b;
		}
	}
	{
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_45 = V_1;
		NullCheck(L_45);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_46 = L_45->get_node_search_17();
		NullCheck(L_46);
		int32_t L_47 = 1;
		float L_48 = (L_46)->GetAt(static_cast<il2cpp_array_size_t>(L_47));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_49 = __this->get_goal_4();
		NullCheck(L_49);
		int32_t L_50 = 1;
		float L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		if ((!(((float)L_48) == ((float)L_51))))
		{
			goto IL_024b;
		}
	}
	{
		goto IL_0161;
	}

IL_013a:
	{
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(2);
		return (bool)1;
	}

IL_014a:
	{
		__this->set_U3CU3E1__state_0((-1));
		// count2++;
		int32_t L_52 = __this->get_U3Ccount2U3E5__3_6();
		V_2 = L_52;
		int32_t L_53 = V_2;
		__this->set_U3Ccount2U3E5__3_6(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
	}

IL_0161:
	{
		// while (count2 < 5)
		int32_t L_54 = __this->get_U3Ccount2U3E5__3_6();
		if ((((int32_t)L_54) < ((int32_t)5)))
		{
			goto IL_013a;
		}
	}
	{
		// ROUTE.Clear();
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_55 = V_1;
		NullCheck(L_55);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_56 = L_55->get_ROUTE_10();
		NullCheck(L_56);
		List_1_Clear_m09F193FACE259E473A52AAC6993D0387C0DEFF47(L_56, /*hidden argument*/List_1_Clear_m09F193FACE259E473A52AAC6993D0387C0DEFF47_RuntimeMethod_var);
		goto IL_01e2;
	}

IL_0177:
	{
		// ROUTE.Add(node_search);
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_57 = V_1;
		NullCheck(L_57);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_58 = L_57->get_ROUTE_10();
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_59 = V_1;
		NullCheck(L_59);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_60 = L_59->get_node_search_17();
		NullCheck(L_58);
		List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D(L_58, L_60, /*hidden argument*/List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D_RuntimeMethod_var);
		// node_search = new float[] { node[x][y][0], node[x][y][1], 0 };
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_61 = V_1;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_62 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_63 = L_62;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_64 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_65 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_64);
		int32_t L_66 = L_65;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_67 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_64)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		int32_t L_68 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_67);
		int32_t L_69 = L_68;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_70 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_67)->GetAt(static_cast<il2cpp_array_size_t>(L_69));
		NullCheck(L_70);
		int32_t L_71 = 0;
		float L_72 = (L_70)->GetAt(static_cast<il2cpp_array_size_t>(L_71));
		NullCheck(L_63);
		(L_63)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)L_72);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_73 = L_63;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_74 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_75 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_74);
		int32_t L_76 = L_75;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_77 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_74)->GetAt(static_cast<il2cpp_array_size_t>(L_76));
		int32_t L_78 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_77);
		int32_t L_79 = L_78;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_80 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_77)->GetAt(static_cast<il2cpp_array_size_t>(L_79));
		NullCheck(L_80);
		int32_t L_81 = 1;
		float L_82 = (L_80)->GetAt(static_cast<il2cpp_array_size_t>(L_81));
		NullCheck(L_73);
		(L_73)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)L_82);
		NullCheck(L_61);
		L_61->set_node_search_17(L_73);
		// x = (int)node_search[0];
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_83 = V_1;
		NullCheck(L_83);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_84 = L_83->get_node_search_17();
		NullCheck(L_84);
		int32_t L_85 = 0;
		float L_86 = (L_84)->GetAt(static_cast<il2cpp_array_size_t>(L_85));
		__this->set_U3CxU3E5__4_7(((int32_t)((int32_t)L_86)));
		// y = (int)node_search[1];
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_87 = V_1;
		NullCheck(L_87);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_88 = L_87->get_node_search_17();
		NullCheck(L_88);
		int32_t L_89 = 1;
		float L_90 = (L_88)->GetAt(static_cast<il2cpp_array_size_t>(L_89));
		__this->set_U3CyU3E5__5_8(((int32_t)((int32_t)L_90)));
	}

IL_01e2:
	{
		// while (node_search[0] != start[0] || node_search[1] != start[1])
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_91 = V_1;
		NullCheck(L_91);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_92 = L_91->get_node_search_17();
		NullCheck(L_92);
		int32_t L_93 = 0;
		float L_94 = (L_92)->GetAt(static_cast<il2cpp_array_size_t>(L_93));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_95 = __this->get_start_3();
		NullCheck(L_95);
		int32_t L_96 = 0;
		float L_97 = (L_95)->GetAt(static_cast<il2cpp_array_size_t>(L_96));
		if ((!(((float)L_94) == ((float)L_97))))
		{
			goto IL_0177;
		}
	}
	{
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_98 = V_1;
		NullCheck(L_98);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_99 = L_98->get_node_search_17();
		NullCheck(L_99);
		int32_t L_100 = 1;
		float L_101 = (L_99)->GetAt(static_cast<il2cpp_array_size_t>(L_100));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_102 = __this->get_start_3();
		NullCheck(L_102);
		int32_t L_103 = 1;
		float L_104 = (L_102)->GetAt(static_cast<il2cpp_array_size_t>(L_103));
		if ((!(((float)L_101) == ((float)L_104))))
		{
			goto IL_0177;
		}
	}
	{
		// for (i = 0; i < 27; i++)
		V_3 = 0;
		goto IL_0244;
	}

IL_020d:
	{
		// for (j = 0; j < 54; j++)
		V_4 = 0;
		goto IL_023a;
	}

IL_0212:
	{
		// for (k = 0; k < 4; k++)
		V_5 = 0;
		goto IL_022f;
	}

IL_0217:
	{
		// node[i][j][k] = 0;
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_105 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_106 = V_3;
		NullCheck(L_105);
		int32_t L_107 = L_106;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_108 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_105)->GetAt(static_cast<il2cpp_array_size_t>(L_107));
		int32_t L_109 = V_4;
		NullCheck(L_108);
		int32_t L_110 = L_109;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_111 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_108)->GetAt(static_cast<il2cpp_array_size_t>(L_110));
		int32_t L_112 = V_5;
		NullCheck(L_111);
		(L_111)->SetAt(static_cast<il2cpp_array_size_t>(L_112), (float)(0.0f));
		// for (k = 0; k < 4; k++)
		int32_t L_113 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add((int32_t)L_113, (int32_t)1));
	}

IL_022f:
	{
		// for (k = 0; k < 4; k++)
		int32_t L_114 = V_5;
		if ((((int32_t)L_114) < ((int32_t)4)))
		{
			goto IL_0217;
		}
	}
	{
		// for (j = 0; j < 54; j++)
		int32_t L_115 = V_4;
		V_4 = ((int32_t)il2cpp_codegen_add((int32_t)L_115, (int32_t)1));
	}

IL_023a:
	{
		// for (j = 0; j < 54; j++)
		int32_t L_116 = V_4;
		if ((((int32_t)L_116) < ((int32_t)((int32_t)54))))
		{
			goto IL_0212;
		}
	}
	{
		// for (i = 0; i < 27; i++)
		int32_t L_117 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add((int32_t)L_117, (int32_t)1));
	}

IL_0244:
	{
		// for (i = 0; i < 27; i++)
		int32_t L_118 = V_3;
		if ((((int32_t)L_118) < ((int32_t)((int32_t)27))))
		{
			goto IL_020d;
		}
	}
	{
		// yield break;
		return (bool)0;
	}

IL_024b:
	{
		// if (node_search[1] > 0)
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_119 = V_1;
		NullCheck(L_119);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_120 = L_119->get_node_search_17();
		NullCheck(L_120);
		int32_t L_121 = 1;
		float L_122 = (L_120)->GetAt(static_cast<il2cpp_array_size_t>(L_121));
		if ((!(((float)L_122) > ((float)(0.0f)))))
		{
			goto IL_03a4;
		}
	}
	{
		// if (node[x][y - 1][3] == 0)
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_123 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_124 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_123);
		int32_t L_125 = L_124;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_126 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_123)->GetAt(static_cast<il2cpp_array_size_t>(L_125));
		int32_t L_127 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_126);
		int32_t L_128 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_127, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_129 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_126)->GetAt(static_cast<il2cpp_array_size_t>(L_128));
		NullCheck(L_129);
		int32_t L_130 = 3;
		float L_131 = (L_129)->GetAt(static_cast<il2cpp_array_size_t>(L_130));
		if ((!(((float)L_131) == ((float)(0.0f)))))
		{
			goto IL_03a4;
		}
	}
	{
		// int cost1 = (int)node[x][y][2];
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_132 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_133 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_132);
		int32_t L_134 = L_133;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_135 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_132)->GetAt(static_cast<il2cpp_array_size_t>(L_134));
		int32_t L_136 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_135);
		int32_t L_137 = L_136;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_138 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_135)->GetAt(static_cast<il2cpp_array_size_t>(L_137));
		NullCheck(L_138);
		int32_t L_139 = 2;
		float L_140 = (L_138)->GetAt(static_cast<il2cpp_array_size_t>(L_139));
		V_6 = ((int32_t)((int32_t)L_140));
		// int cost2 = (int)node[x][y - 1][2];
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_141 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_142 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_141);
		int32_t L_143 = L_142;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_144 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_141)->GetAt(static_cast<il2cpp_array_size_t>(L_143));
		int32_t L_145 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_144);
		int32_t L_146 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_145, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_147 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_144)->GetAt(static_cast<il2cpp_array_size_t>(L_146));
		NullCheck(L_147);
		int32_t L_148 = 2;
		float L_149 = (L_147)->GetAt(static_cast<il2cpp_array_size_t>(L_148));
		V_7 = ((int32_t)((int32_t)L_149));
		// int cost3 = (int)Mathf.Abs(goal[0] - x) + (int)(Mathf.Abs(goal[1] - (y - 1)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_150 = __this->get_goal_4();
		NullCheck(L_150);
		int32_t L_151 = 0;
		float L_152 = (L_150)->GetAt(static_cast<il2cpp_array_size_t>(L_151));
		int32_t L_153 = __this->get_U3CxU3E5__4_7();
		float L_154;
		L_154 = fabsf(((float)il2cpp_codegen_subtract((float)L_152, (float)((float)((float)L_153)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_155 = __this->get_goal_4();
		NullCheck(L_155);
		int32_t L_156 = 1;
		float L_157 = (L_155)->GetAt(static_cast<il2cpp_array_size_t>(L_156));
		int32_t L_158 = __this->get_U3CyU3E5__5_8();
		float L_159;
		L_159 = fabsf(((float)il2cpp_codegen_subtract((float)L_157, (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_158, (int32_t)1)))))));
		V_8 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_154)), (int32_t)((int32_t)((int32_t)L_159))));
		// int totalcost = cost1 + cost2 + cost3;
		int32_t L_160 = V_6;
		int32_t L_161 = V_7;
		int32_t L_162 = V_8;
		V_9 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_160, (int32_t)L_161)), (int32_t)L_162));
		// float[] tmp = { x, y - 1, totalcost + (1000 - (cost1 + cost2)) * 0.001f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_163 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_164 = L_163;
		int32_t L_165 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_164);
		(L_164)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_165)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_166 = L_164;
		int32_t L_167 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_166);
		(L_166)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_167, (int32_t)1)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_168 = L_166;
		int32_t L_169 = V_9;
		int32_t L_170 = V_6;
		int32_t L_171 = V_7;
		NullCheck(L_168);
		(L_168)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_add((float)((float)((float)L_169)), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)1000), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_170, (int32_t)L_171)))))), (float)(0.00100000005f))))));
		V_10 = L_168;
		// open.Add(tmp);
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_172 = V_1;
		NullCheck(L_172);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_173 = L_172->get_open_16();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_174 = V_10;
		NullCheck(L_173);
		List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D(L_173, L_174, /*hidden argument*/List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D_RuntimeMethod_var);
		// node[x][y - 1][0] = x;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_175 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_176 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_175);
		int32_t L_177 = L_176;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_178 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_175)->GetAt(static_cast<il2cpp_array_size_t>(L_177));
		int32_t L_179 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_178);
		int32_t L_180 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_179, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_181 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_178)->GetAt(static_cast<il2cpp_array_size_t>(L_180));
		int32_t L_182 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_181);
		(L_181)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_182)));
		// node[x][y - 1][1] = y;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_183 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_184 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_183);
		int32_t L_185 = L_184;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_186 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_183)->GetAt(static_cast<il2cpp_array_size_t>(L_185));
		int32_t L_187 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_186);
		int32_t L_188 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_187, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_189 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_186)->GetAt(static_cast<il2cpp_array_size_t>(L_188));
		int32_t L_190 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_189);
		(L_189)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_190)));
		// node[x][y - 1][2] = cost1 + cost2;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_191 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_192 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_191);
		int32_t L_193 = L_192;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_194 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_191)->GetAt(static_cast<il2cpp_array_size_t>(L_193));
		int32_t L_195 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_194);
		int32_t L_196 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_195, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_197 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_194)->GetAt(static_cast<il2cpp_array_size_t>(L_196));
		int32_t L_198 = V_6;
		int32_t L_199 = V_7;
		NullCheck(L_197);
		(L_197)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_198, (int32_t)L_199)))));
		// node[x][y - 1][3] = 1;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_200 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_201 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_200);
		int32_t L_202 = L_201;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_203 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_200)->GetAt(static_cast<il2cpp_array_size_t>(L_202));
		int32_t L_204 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_203);
		int32_t L_205 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_204, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_206 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_203)->GetAt(static_cast<il2cpp_array_size_t>(L_205));
		NullCheck(L_206);
		(L_206)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(1.0f));
	}

IL_03a4:
	{
		// if (node_search[0] < width - 1)
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_207 = V_1;
		NullCheck(L_207);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_208 = L_207->get_node_search_17();
		NullCheck(L_208);
		int32_t L_209 = 0;
		float L_210 = (L_208)->GetAt(static_cast<il2cpp_array_size_t>(L_209));
		if ((!(((float)L_210) < ((float)(26.0f)))))
		{
			goto IL_04fd;
		}
	}
	{
		// if (node[x + 1][y][3] == 0)
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_211 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_212 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_211);
		int32_t L_213 = ((int32_t)il2cpp_codegen_add((int32_t)L_212, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_214 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_211)->GetAt(static_cast<il2cpp_array_size_t>(L_213));
		int32_t L_215 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_214);
		int32_t L_216 = L_215;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_217 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_214)->GetAt(static_cast<il2cpp_array_size_t>(L_216));
		NullCheck(L_217);
		int32_t L_218 = 3;
		float L_219 = (L_217)->GetAt(static_cast<il2cpp_array_size_t>(L_218));
		if ((!(((float)L_219) == ((float)(0.0f)))))
		{
			goto IL_04fd;
		}
	}
	{
		// int cost1 = (int)node[x][y][2];
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_220 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_221 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_220);
		int32_t L_222 = L_221;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_223 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_220)->GetAt(static_cast<il2cpp_array_size_t>(L_222));
		int32_t L_224 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_223);
		int32_t L_225 = L_224;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_226 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_223)->GetAt(static_cast<il2cpp_array_size_t>(L_225));
		NullCheck(L_226);
		int32_t L_227 = 2;
		float L_228 = (L_226)->GetAt(static_cast<il2cpp_array_size_t>(L_227));
		V_11 = ((int32_t)((int32_t)L_228));
		// int cost2 = (int)node[x + 1][y][2];
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_229 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_230 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_229);
		int32_t L_231 = ((int32_t)il2cpp_codegen_add((int32_t)L_230, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_232 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_229)->GetAt(static_cast<il2cpp_array_size_t>(L_231));
		int32_t L_233 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_232);
		int32_t L_234 = L_233;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_235 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_232)->GetAt(static_cast<il2cpp_array_size_t>(L_234));
		NullCheck(L_235);
		int32_t L_236 = 2;
		float L_237 = (L_235)->GetAt(static_cast<il2cpp_array_size_t>(L_236));
		V_12 = ((int32_t)((int32_t)L_237));
		// int cost3 = (int)Mathf.Abs(goal[0] - (x + 1)) + (int)(Mathf.Abs(goal[1] - y));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_238 = __this->get_goal_4();
		NullCheck(L_238);
		int32_t L_239 = 0;
		float L_240 = (L_238)->GetAt(static_cast<il2cpp_array_size_t>(L_239));
		int32_t L_241 = __this->get_U3CxU3E5__4_7();
		float L_242;
		L_242 = fabsf(((float)il2cpp_codegen_subtract((float)L_240, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_241, (int32_t)1)))))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_243 = __this->get_goal_4();
		NullCheck(L_243);
		int32_t L_244 = 1;
		float L_245 = (L_243)->GetAt(static_cast<il2cpp_array_size_t>(L_244));
		int32_t L_246 = __this->get_U3CyU3E5__5_8();
		float L_247;
		L_247 = fabsf(((float)il2cpp_codegen_subtract((float)L_245, (float)((float)((float)L_246)))));
		V_13 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_242)), (int32_t)((int32_t)((int32_t)L_247))));
		// int totalcost = cost1 + cost2 + cost3;
		int32_t L_248 = V_11;
		int32_t L_249 = V_12;
		int32_t L_250 = V_13;
		V_14 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_248, (int32_t)L_249)), (int32_t)L_250));
		// float[] tmp = { x + 1, y, totalcost + (1000 - (cost1 + cost2)) * 0.001f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_251 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_252 = L_251;
		int32_t L_253 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_252);
		(L_252)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_253, (int32_t)1)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_254 = L_252;
		int32_t L_255 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_254);
		(L_254)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_255)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_256 = L_254;
		int32_t L_257 = V_14;
		int32_t L_258 = V_11;
		int32_t L_259 = V_12;
		NullCheck(L_256);
		(L_256)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_add((float)((float)((float)L_257)), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)1000), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_258, (int32_t)L_259)))))), (float)(0.00100000005f))))));
		V_15 = L_256;
		// open.Add(tmp);
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_260 = V_1;
		NullCheck(L_260);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_261 = L_260->get_open_16();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_262 = V_15;
		NullCheck(L_261);
		List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D(L_261, L_262, /*hidden argument*/List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D_RuntimeMethod_var);
		// node[x + 1][y][0] = x;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_263 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_264 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_263);
		int32_t L_265 = ((int32_t)il2cpp_codegen_add((int32_t)L_264, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_266 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_263)->GetAt(static_cast<il2cpp_array_size_t>(L_265));
		int32_t L_267 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_266);
		int32_t L_268 = L_267;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_269 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_266)->GetAt(static_cast<il2cpp_array_size_t>(L_268));
		int32_t L_270 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_269);
		(L_269)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_270)));
		// node[x + 1][y][1] = y;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_271 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_272 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_271);
		int32_t L_273 = ((int32_t)il2cpp_codegen_add((int32_t)L_272, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_274 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_271)->GetAt(static_cast<il2cpp_array_size_t>(L_273));
		int32_t L_275 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_274);
		int32_t L_276 = L_275;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_277 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_274)->GetAt(static_cast<il2cpp_array_size_t>(L_276));
		int32_t L_278 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_277);
		(L_277)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_278)));
		// node[x + 1][y][2] = cost1 + cost2;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_279 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_280 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_279);
		int32_t L_281 = ((int32_t)il2cpp_codegen_add((int32_t)L_280, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_282 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_279)->GetAt(static_cast<il2cpp_array_size_t>(L_281));
		int32_t L_283 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_282);
		int32_t L_284 = L_283;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_285 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_282)->GetAt(static_cast<il2cpp_array_size_t>(L_284));
		int32_t L_286 = V_11;
		int32_t L_287 = V_12;
		NullCheck(L_285);
		(L_285)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_286, (int32_t)L_287)))));
		// node[x + 1][y][3] = 1;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_288 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_289 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_288);
		int32_t L_290 = ((int32_t)il2cpp_codegen_add((int32_t)L_289, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_291 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_288)->GetAt(static_cast<il2cpp_array_size_t>(L_290));
		int32_t L_292 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_291);
		int32_t L_293 = L_292;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_294 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_291)->GetAt(static_cast<il2cpp_array_size_t>(L_293));
		NullCheck(L_294);
		(L_294)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(1.0f));
	}

IL_04fd:
	{
		// if (node_search[0] > 0)
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_295 = V_1;
		NullCheck(L_295);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_296 = L_295->get_node_search_17();
		NullCheck(L_296);
		int32_t L_297 = 0;
		float L_298 = (L_296)->GetAt(static_cast<il2cpp_array_size_t>(L_297));
		if ((!(((float)L_298) > ((float)(0.0f)))))
		{
			goto IL_0656;
		}
	}
	{
		// if (node[x - 1][y][3] == 0)
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_299 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_300 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_299);
		int32_t L_301 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_300, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_302 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_299)->GetAt(static_cast<il2cpp_array_size_t>(L_301));
		int32_t L_303 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_302);
		int32_t L_304 = L_303;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_305 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_302)->GetAt(static_cast<il2cpp_array_size_t>(L_304));
		NullCheck(L_305);
		int32_t L_306 = 3;
		float L_307 = (L_305)->GetAt(static_cast<il2cpp_array_size_t>(L_306));
		if ((!(((float)L_307) == ((float)(0.0f)))))
		{
			goto IL_0656;
		}
	}
	{
		// int cost1 = (int)node[x][y][2];
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_308 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_309 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_308);
		int32_t L_310 = L_309;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_311 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_308)->GetAt(static_cast<il2cpp_array_size_t>(L_310));
		int32_t L_312 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_311);
		int32_t L_313 = L_312;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_314 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_311)->GetAt(static_cast<il2cpp_array_size_t>(L_313));
		NullCheck(L_314);
		int32_t L_315 = 2;
		float L_316 = (L_314)->GetAt(static_cast<il2cpp_array_size_t>(L_315));
		V_16 = ((int32_t)((int32_t)L_316));
		// int cost2 = (int)node[x - 1][y][2];
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_317 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_318 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_317);
		int32_t L_319 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_318, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_320 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_317)->GetAt(static_cast<il2cpp_array_size_t>(L_319));
		int32_t L_321 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_320);
		int32_t L_322 = L_321;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_323 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_320)->GetAt(static_cast<il2cpp_array_size_t>(L_322));
		NullCheck(L_323);
		int32_t L_324 = 2;
		float L_325 = (L_323)->GetAt(static_cast<il2cpp_array_size_t>(L_324));
		V_17 = ((int32_t)((int32_t)L_325));
		// int cost3 = (int)Mathf.Abs(goal[0] - (x - 1)) + (int)(Mathf.Abs(goal[1] - y));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_326 = __this->get_goal_4();
		NullCheck(L_326);
		int32_t L_327 = 0;
		float L_328 = (L_326)->GetAt(static_cast<il2cpp_array_size_t>(L_327));
		int32_t L_329 = __this->get_U3CxU3E5__4_7();
		float L_330;
		L_330 = fabsf(((float)il2cpp_codegen_subtract((float)L_328, (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_329, (int32_t)1)))))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_331 = __this->get_goal_4();
		NullCheck(L_331);
		int32_t L_332 = 1;
		float L_333 = (L_331)->GetAt(static_cast<il2cpp_array_size_t>(L_332));
		int32_t L_334 = __this->get_U3CyU3E5__5_8();
		float L_335;
		L_335 = fabsf(((float)il2cpp_codegen_subtract((float)L_333, (float)((float)((float)L_334)))));
		V_18 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_330)), (int32_t)((int32_t)((int32_t)L_335))));
		// int totalcost = cost1 + cost2 + cost3;
		int32_t L_336 = V_16;
		int32_t L_337 = V_17;
		int32_t L_338 = V_18;
		V_19 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_336, (int32_t)L_337)), (int32_t)L_338));
		// float[] tmp = { x - 1, y, totalcost + (1000 - (cost1 + cost2)) * 0.001f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_339 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_340 = L_339;
		int32_t L_341 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_340);
		(L_340)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)L_341, (int32_t)1)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_342 = L_340;
		int32_t L_343 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_342);
		(L_342)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_343)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_344 = L_342;
		int32_t L_345 = V_19;
		int32_t L_346 = V_16;
		int32_t L_347 = V_17;
		NullCheck(L_344);
		(L_344)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_add((float)((float)((float)L_345)), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)1000), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_346, (int32_t)L_347)))))), (float)(0.00100000005f))))));
		V_20 = L_344;
		// open.Add(tmp);
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_348 = V_1;
		NullCheck(L_348);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_349 = L_348->get_open_16();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_350 = V_20;
		NullCheck(L_349);
		List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D(L_349, L_350, /*hidden argument*/List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D_RuntimeMethod_var);
		// node[x - 1][y][0] = x;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_351 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_352 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_351);
		int32_t L_353 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_352, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_354 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_351)->GetAt(static_cast<il2cpp_array_size_t>(L_353));
		int32_t L_355 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_354);
		int32_t L_356 = L_355;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_357 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_354)->GetAt(static_cast<il2cpp_array_size_t>(L_356));
		int32_t L_358 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_357);
		(L_357)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_358)));
		// node[x - 1][y][1] = y;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_359 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_360 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_359);
		int32_t L_361 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_360, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_362 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_359)->GetAt(static_cast<il2cpp_array_size_t>(L_361));
		int32_t L_363 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_362);
		int32_t L_364 = L_363;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_365 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_362)->GetAt(static_cast<il2cpp_array_size_t>(L_364));
		int32_t L_366 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_365);
		(L_365)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_366)));
		// node[x - 1][y][2] = cost1 + cost2;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_367 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_368 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_367);
		int32_t L_369 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_368, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_370 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_367)->GetAt(static_cast<il2cpp_array_size_t>(L_369));
		int32_t L_371 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_370);
		int32_t L_372 = L_371;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_373 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_370)->GetAt(static_cast<il2cpp_array_size_t>(L_372));
		int32_t L_374 = V_16;
		int32_t L_375 = V_17;
		NullCheck(L_373);
		(L_373)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_374, (int32_t)L_375)))));
		// node[x - 1][y][3] = 1;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_376 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_377 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_376);
		int32_t L_378 = ((int32_t)il2cpp_codegen_subtract((int32_t)L_377, (int32_t)1));
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_379 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_376)->GetAt(static_cast<il2cpp_array_size_t>(L_378));
		int32_t L_380 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_379);
		int32_t L_381 = L_380;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_382 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_379)->GetAt(static_cast<il2cpp_array_size_t>(L_381));
		NullCheck(L_382);
		(L_382)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(1.0f));
	}

IL_0656:
	{
		// if (node_search[1] < height - 1)
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_383 = V_1;
		NullCheck(L_383);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_384 = L_383->get_node_search_17();
		NullCheck(L_384);
		int32_t L_385 = 1;
		float L_386 = (L_384)->GetAt(static_cast<il2cpp_array_size_t>(L_385));
		if ((!(((float)L_386) < ((float)(53.0f)))))
		{
			goto IL_07af;
		}
	}
	{
		// if (node[x][y + 1][3] == 0)
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_387 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_388 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_387);
		int32_t L_389 = L_388;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_390 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_387)->GetAt(static_cast<il2cpp_array_size_t>(L_389));
		int32_t L_391 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_390);
		int32_t L_392 = ((int32_t)il2cpp_codegen_add((int32_t)L_391, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_393 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_390)->GetAt(static_cast<il2cpp_array_size_t>(L_392));
		NullCheck(L_393);
		int32_t L_394 = 3;
		float L_395 = (L_393)->GetAt(static_cast<il2cpp_array_size_t>(L_394));
		if ((!(((float)L_395) == ((float)(0.0f)))))
		{
			goto IL_07af;
		}
	}
	{
		// int cost1 = (int)node[x][y][2];
		IL2CPP_RUNTIME_CLASS_INIT(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var);
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_396 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_397 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_396);
		int32_t L_398 = L_397;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_399 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_396)->GetAt(static_cast<il2cpp_array_size_t>(L_398));
		int32_t L_400 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_399);
		int32_t L_401 = L_400;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_402 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_399)->GetAt(static_cast<il2cpp_array_size_t>(L_401));
		NullCheck(L_402);
		int32_t L_403 = 2;
		float L_404 = (L_402)->GetAt(static_cast<il2cpp_array_size_t>(L_403));
		V_21 = ((int32_t)((int32_t)L_404));
		// int cost2 = (int)node[x][y + 1][2];
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_405 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_406 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_405);
		int32_t L_407 = L_406;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_408 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_405)->GetAt(static_cast<il2cpp_array_size_t>(L_407));
		int32_t L_409 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_408);
		int32_t L_410 = ((int32_t)il2cpp_codegen_add((int32_t)L_409, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_411 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_408)->GetAt(static_cast<il2cpp_array_size_t>(L_410));
		NullCheck(L_411);
		int32_t L_412 = 2;
		float L_413 = (L_411)->GetAt(static_cast<il2cpp_array_size_t>(L_412));
		V_22 = ((int32_t)((int32_t)L_413));
		// int cost3 = (int)Mathf.Abs(goal[0] - x) + (int)(Mathf.Abs(goal[1] - (y + 1)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_414 = __this->get_goal_4();
		NullCheck(L_414);
		int32_t L_415 = 0;
		float L_416 = (L_414)->GetAt(static_cast<il2cpp_array_size_t>(L_415));
		int32_t L_417 = __this->get_U3CxU3E5__4_7();
		float L_418;
		L_418 = fabsf(((float)il2cpp_codegen_subtract((float)L_416, (float)((float)((float)L_417)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_419 = __this->get_goal_4();
		NullCheck(L_419);
		int32_t L_420 = 1;
		float L_421 = (L_419)->GetAt(static_cast<il2cpp_array_size_t>(L_420));
		int32_t L_422 = __this->get_U3CyU3E5__5_8();
		float L_423;
		L_423 = fabsf(((float)il2cpp_codegen_subtract((float)L_421, (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_422, (int32_t)1)))))));
		V_23 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)((int32_t)L_418)), (int32_t)((int32_t)((int32_t)L_423))));
		// int totalcost = cost1 + cost2 + cost3;
		int32_t L_424 = V_21;
		int32_t L_425 = V_22;
		int32_t L_426 = V_23;
		V_24 = ((int32_t)il2cpp_codegen_add((int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_424, (int32_t)L_425)), (int32_t)L_426));
		// float[] tmp = { x, y + 1, totalcost + (1000 - (cost1 + cost2)) * 0.001f };
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_427 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)SZArrayNew(SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA_il2cpp_TypeInfo_var, (uint32_t)3);
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_428 = L_427;
		int32_t L_429 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_428);
		(L_428)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_429)));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_430 = L_428;
		int32_t L_431 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_430);
		(L_430)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_431, (int32_t)1)))));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_432 = L_430;
		int32_t L_433 = V_24;
		int32_t L_434 = V_21;
		int32_t L_435 = V_22;
		NullCheck(L_432);
		(L_432)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)il2cpp_codegen_add((float)((float)((float)L_433)), (float)((float)il2cpp_codegen_multiply((float)((float)((float)((int32_t)il2cpp_codegen_subtract((int32_t)((int32_t)1000), (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_434, (int32_t)L_435)))))), (float)(0.00100000005f))))));
		V_25 = L_432;
		// open.Add(tmp);
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_436 = V_1;
		NullCheck(L_436);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_437 = L_436->get_open_16();
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_438 = V_25;
		NullCheck(L_437);
		List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D(L_437, L_438, /*hidden argument*/List_1_Add_mEDAD8A1789AFB33EFA6368243588CE6E3C16571D_RuntimeMethod_var);
		// node[x][y + 1][0] = x;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_439 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_440 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_439);
		int32_t L_441 = L_440;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_442 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_439)->GetAt(static_cast<il2cpp_array_size_t>(L_441));
		int32_t L_443 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_442);
		int32_t L_444 = ((int32_t)il2cpp_codegen_add((int32_t)L_443, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_445 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_442)->GetAt(static_cast<il2cpp_array_size_t>(L_444));
		int32_t L_446 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_445);
		(L_445)->SetAt(static_cast<il2cpp_array_size_t>(0), (float)((float)((float)L_446)));
		// node[x][y + 1][1] = y;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_447 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_448 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_447);
		int32_t L_449 = L_448;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_450 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_447)->GetAt(static_cast<il2cpp_array_size_t>(L_449));
		int32_t L_451 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_450);
		int32_t L_452 = ((int32_t)il2cpp_codegen_add((int32_t)L_451, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_453 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_450)->GetAt(static_cast<il2cpp_array_size_t>(L_452));
		int32_t L_454 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_453);
		(L_453)->SetAt(static_cast<il2cpp_array_size_t>(1), (float)((float)((float)L_454)));
		// node[x][y + 1][2] = cost1 + cost2;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_455 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_456 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_455);
		int32_t L_457 = L_456;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_458 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_455)->GetAt(static_cast<il2cpp_array_size_t>(L_457));
		int32_t L_459 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_458);
		int32_t L_460 = ((int32_t)il2cpp_codegen_add((int32_t)L_459, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_461 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_458)->GetAt(static_cast<il2cpp_array_size_t>(L_460));
		int32_t L_462 = V_21;
		int32_t L_463 = V_22;
		NullCheck(L_461);
		(L_461)->SetAt(static_cast<il2cpp_array_size_t>(2), (float)((float)((float)((int32_t)il2cpp_codegen_add((int32_t)L_462, (int32_t)L_463)))));
		// node[x][y + 1][3] = 1;
		SingleU5BU5DU5BU5DU5BU5D_tF6B04B19ECC55F94EA10A576C21A6C60AB2B3816* L_464 = ((Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_StaticFields*)il2cpp_codegen_static_fields_for(Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4_il2cpp_TypeInfo_var))->get_node_11();
		int32_t L_465 = __this->get_U3CxU3E5__4_7();
		NullCheck(L_464);
		int32_t L_466 = L_465;
		SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9* L_467 = (SingleU5BU5DU5BU5D_tE98ABA33B056D447449236AA9007392350412EC9*)(L_464)->GetAt(static_cast<il2cpp_array_size_t>(L_466));
		int32_t L_468 = __this->get_U3CyU3E5__5_8();
		NullCheck(L_467);
		int32_t L_469 = ((int32_t)il2cpp_codegen_add((int32_t)L_468, (int32_t)1));
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_470 = (SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA*)(L_467)->GetAt(static_cast<il2cpp_array_size_t>(L_469));
		NullCheck(L_470);
		(L_470)->SetAt(static_cast<il2cpp_array_size_t>(3), (float)(1.0f));
	}

IL_07af:
	{
		// while (open.Count > 0)
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_471 = V_1;
		NullCheck(L_471);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_472 = L_471->get_open_16();
		NullCheck(L_472);
		int32_t L_473;
		L_473 = List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_inline(L_472, /*hidden argument*/List_1_get_Count_m5635DA2259F4FE08825523194BE0D07E77E40625_RuntimeMethod_var);
		if ((((int32_t)L_473) > ((int32_t)0)))
		{
			goto IL_0058;
		}
	}
	{
		// ROUTE.Clear();
		Astar_tF0435BEC278C53E0A24D504214E13E832D56D9F4 * L_474 = V_1;
		NullCheck(L_474);
		List_1_t497D7DE6115163D5A37B3548DB4B1051ED42E019 * L_475 = L_474->get_ROUTE_10();
		NullCheck(L_475);
		List_1_Clear_m09F193FACE259E473A52AAC6993D0387C0DEFF47(L_475, /*hidden argument*/List_1_Clear_m09F193FACE259E473A52AAC6993D0387C0DEFF47_RuntimeMethod_var);
		// yield break;
		return (bool)0;
	}
}
// System.Object Astar/<A_star2>d__21::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CA_star2U3Ed__21_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m306C246DA2C57D3E521494B25358A12717F5B891 (U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void Astar/<A_star2>d__21::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CA_star2U3Ed__21_System_Collections_IEnumerator_Reset_m3FA4B2294C724EBA58AA17AC8E7FC0F0F2104781 (U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CA_star2U3Ed__21_System_Collections_IEnumerator_Reset_m3FA4B2294C724EBA58AA17AC8E7FC0F0F2104781_RuntimeMethod_var)));
	}
}
// System.Object Astar/<A_star2>d__21::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CA_star2U3Ed__21_System_Collections_IEnumerator_get_Current_m54340CC3A1BBDBAC3EE09219BF1B0A47E3FCA3B0 (U3CA_star2U3Ed__21_t5FF1936E03A0CDDA2964C3055CB15858C95BDF39 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void AudioController/<ActiveBGM>d__5::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActiveBGMU3Ed__5__ctor_mBA1940EE5B5D28E17B618DAE3AD7E839CE74E2C7 (U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AudioController/<ActiveBGM>d__5::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActiveBGMU3Ed__5_System_IDisposable_Dispose_mBE08BE4E773EA125CE5604428375F42D7DBFFC5F (U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AudioController/<ActiveBGM>d__5::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CActiveBGMU3Ed__5_MoveNext_m9A3A55C06BC0A37B83A770A8D38F1ED9A7EE7B11 (U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * V_1 = NULL;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * L_1 = __this->get_U3CU3E4__this_2();
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
		__this->set_U3CU3E1__state_0((-1));
		// yield return new WaitForSeconds(3.8f);
		WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 * L_4 = (WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013 *)il2cpp_codegen_object_new(WaitForSeconds_t8F9189BE6E467C98C99177038881F8982E0E4013_il2cpp_TypeInfo_var);
		WaitForSeconds__ctor_mD298C4CB9532BBBDE172FC40F3397E30504038D4(L_4, (3.79999995f), /*hidden argument*/NULL);
		__this->set_U3CU3E2__current_1(L_4);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0037:
	{
		__this->set_U3CU3E1__state_0((-1));
		// audi.enabled = true;
		AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E * L_5 = V_1;
		NullCheck(L_5);
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5->get_audi_7();
		NullCheck(L_6);
		Behaviour_set_enabled_mDE415591B28853D1CD764C53CB499A2142247F32(L_6, (bool)1, /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}
}
// System.Object AudioController/<ActiveBGM>d__5::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActiveBGMU3Ed__5_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mBD6E30424A74D2410713D92A23B1E688CBBBE471 (U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AudioController/<ActiveBGM>d__5::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CActiveBGMU3Ed__5_System_Collections_IEnumerator_Reset_m22C05342CEBC7D8204C5CFCB4DDBDAFCF40A991C (U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CActiveBGMU3Ed__5_System_Collections_IEnumerator_Reset_m22C05342CEBC7D8204C5CFCB4DDBDAFCF40A991C_RuntimeMethod_var)));
	}
}
// System.Object AudioController/<ActiveBGM>d__5::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CActiveBGMU3Ed__5_System_Collections_IEnumerator_get_Current_m054396E67BBEBC64E514701554C714552D4CBEBB (U3CActiveBGMU3Ed__5_t4C4D4B0ADB5F741A1F09669530FCCE420C5A1694 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void AudioController/<smallsound>d__8::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsmallsoundU3Ed__8__ctor_m08813FFBC7DB455861E033A225FFE99E5413CCFD (U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void AudioController/<smallsound>d__8::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsmallsoundU3Ed__8_System_IDisposable_Dispose_mCFE27585E0074BB182359D386EFAA41DC157C038 (U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean AudioController/<smallsound>d__8::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CsmallsoundU3Ed__8_MoveNext_m7AC14A552AF634CE8F24B06DFED0E1BC768121E8 (U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
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
			goto IL_0048;
		}
	}
	{
		return (bool)0;
	}

IL_0010:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (i = 0; i < 30; i++)
		__this->set_U3CiU3E5__2_2(0);
		goto IL_005f;
	}

IL_0020:
	{
		// sounds[0].volume *= 0.95f;
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_3 = ((AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var))->get_sounds_4();
		NullCheck(L_3);
		int32_t L_4 = 0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_5 = (L_3)->GetAt(static_cast<il2cpp_array_size_t>(L_4));
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_6 = L_5;
		NullCheck(L_6);
		float L_7;
		L_7 = AudioSource_get_volume_mFD700932958E0A96199B012E28AE4E9F7D6C1556(L_6, /*hidden argument*/NULL);
		NullCheck(L_6);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_6, ((float)il2cpp_codegen_multiply((float)L_7, (float)(0.949999988f))), /*hidden argument*/NULL);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0048:
	{
		__this->set_U3CU3E1__state_0((-1));
		// for (i = 0; i < 30; i++)
		int32_t L_8 = __this->get_U3CiU3E5__2_2();
		V_1 = L_8;
		int32_t L_9 = V_1;
		__this->set_U3CiU3E5__2_2(((int32_t)il2cpp_codegen_add((int32_t)L_9, (int32_t)1)));
	}

IL_005f:
	{
		// for (i = 0; i < 30; i++)
		int32_t L_10 = __this->get_U3CiU3E5__2_2();
		if ((((int32_t)L_10) < ((int32_t)((int32_t)30))))
		{
			goto IL_0020;
		}
	}
	{
		// sounds[0].volume = 0;
		AudioSourceU5BU5D_t29E81D0D3B6FB9B7E7DDDBDDA32E38026AA4D12B* L_11 = ((AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_StaticFields*)il2cpp_codegen_static_fields_for(AudioController_tA9F9625D78D7B82E16202C1EBD62C8CA84CE7B5E_il2cpp_TypeInfo_var))->get_sounds_4();
		NullCheck(L_11);
		int32_t L_12 = 0;
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_13 = (L_11)->GetAt(static_cast<il2cpp_array_size_t>(L_12));
		NullCheck(L_13);
		AudioSource_set_volume_m37B6B2EACA7C2C18ABEE55EE5EA404085E94EE58(L_13, (0.0f), /*hidden argument*/NULL);
		// yield break;
		return (bool)0;
	}
}
// System.Object AudioController/<smallsound>d__8::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CsmallsoundU3Ed__8_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m15490E4963920E0D6FA1B1F18E0F4E8CEC110A06 (U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void AudioController/<smallsound>d__8::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CsmallsoundU3Ed__8_System_Collections_IEnumerator_Reset_m45E35C6AAC92EE3A1C2DF78FE0BE136C9C7C66D7 (U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CsmallsoundU3Ed__8_System_Collections_IEnumerator_Reset_m45E35C6AAC92EE3A1C2DF78FE0BE136C9C7C66D7_RuntimeMethod_var)));
	}
}
// System.Object AudioController/<smallsound>d__8::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CsmallsoundU3Ed__8_System_Collections_IEnumerator_get_Current_m45941DC28606959DB04CE24680EE771B7121B0EF (U3CsmallsoundU3Ed__8_t995F0DD0A2CC8B96F375AF11F5760AA793441031 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void CreateObject/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m893F6BEADC24C9826DB2E656602511DD0E2B3868 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * L_0 = (U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A *)il2cpp_codegen_object_new(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m5E300AB5F4AB915A8DB1484CDA39AE3C356FFFE8(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void CreateObject/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m5E300AB5F4AB915A8DB1484CDA39AE3C356FFFE8 (U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void CreateObject/<>c::<Awake>b__1_1(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__1_1_m87D50C27238603FC84044FDC83FA35247063F79F (U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___target0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// },
		return;
	}
}
// System.Void CreateObject/<>c::<Awake>b__1_2(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__1_2_mF6CF67E8DE953F42BDE31DD29C6CBAA85C7D1A8B (U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method)
{
	{
		// target.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___target0;
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)0, /*hidden argument*/NULL);
		// },
		return;
	}
}
// System.Void CreateObject/<>c::<Awake>b__1_3(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec_U3CAwakeU3Eb__1_3_mD6A3DB6F8A32B95EAA3D92F12168D71F31013233 (U3CU3Ec_t7658AFE17A6129D1516B209BFCF531BB08C0240A * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___target0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Destroy(target);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___target0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		Object_Destroy_m3EEDB6ECD49A541EC826EA8E1C8B599F7AF67D30(L_0, /*hidden argument*/NULL);
		// }, true, 100, 1000);
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
// System.Void LoadScene/<LoadData>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__4__ctor_mD54DA04DC49F70D70F3190A0289A0757309D1A79 (U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LoadScene/<LoadData>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__4_System_IDisposable_Dispose_mD232FAC9253BD013A32F700E5A2A71774390E551 (U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LoadScene/<LoadData>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadDataU3Ed__4_MoveNext_m22A82CEAFE9D4A3849D98ACFB218D743E2A62D1E (U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0512EEC843C7A7E31B445DB657D6412D22C485D7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral793124C2C69F7C5AD956B8E7C24C95DFD06780A5);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_008f;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// DirectorController.gamestagenum = 1;
		((DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_StaticFields*)il2cpp_codegen_static_fields_for(DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_il2cpp_TypeInfo_var))->set_gamestagenum_4(1);
		// if (PlayerController.Life < 0) {
		IL2CPP_RUNTIME_CLASS_INIT(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var);
		int32_t L_4 = ((PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_StaticFields*)il2cpp_codegen_static_fields_for(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9_il2cpp_TypeInfo_var))->get_Life_4();
		if ((((int32_t)L_4) >= ((int32_t)0)))
		{
			goto IL_003e;
		}
	}
	{
		// async = SceneManager.LoadSceneAsync("StartScene");
		LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * L_5 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_6;
		L_6 = SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA(_stringLiteral793124C2C69F7C5AD956B8E7C24C95DFD06780A5, /*hidden argument*/NULL);
		NullCheck(L_5);
		L_5->set_async_4(L_6);
		// }
		goto IL_0096;
	}

IL_003e:
	{
		// DirectorController.gamestagenum++;
		int32_t L_7 = ((DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_StaticFields*)il2cpp_codegen_static_fields_for(DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_il2cpp_TypeInfo_var))->get_gamestagenum_4();
		((DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_StaticFields*)il2cpp_codegen_static_fields_for(DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_il2cpp_TypeInfo_var))->set_gamestagenum_4(((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)1)));
		// async = SceneManager.LoadSceneAsync("BattleNPCScene");
		LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * L_8 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_9;
		L_9 = SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA(_stringLiteral0512EEC843C7A7E31B445DB657D6412D22C485D7, /*hidden argument*/NULL);
		NullCheck(L_8);
		L_8->set_async_4(L_9);
		goto IL_0096;
	}

IL_005c:
	{
		// var progressVal = Mathf.Clamp01(async.progress / 0.9f);
		LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * L_10 = V_1;
		NullCheck(L_10);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_11 = L_10->get_async_4();
		NullCheck(L_11);
		float L_12;
		L_12 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_11, /*hidden argument*/NULL);
		float L_13;
		L_13 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_12/(float)(0.899999976f))), /*hidden argument*/NULL);
		V_2 = L_13;
		// slider.value = progressVal;
		LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * L_14 = V_1;
		NullCheck(L_14);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_15 = L_14->get_slider_6();
		float L_16 = V_2;
		NullCheck(L_15);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_15, L_16);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_008f:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0096:
	{
		// while (!async.isDone)
		LoadScene_t633887ABD67B5712F8CCC7C5511422C0E45084D4 * L_17 = V_1;
		NullCheck(L_17);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_18 = L_17->get_async_4();
		NullCheck(L_18);
		bool L_19;
		L_19 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_18, /*hidden argument*/NULL);
		if (!L_19)
		{
			goto IL_005c;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object LoadScene/<LoadData>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadDataU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_mF7566962AD2A69DEAD64D07733E82457064FE439 (U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LoadScene/<LoadData>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__4_System_Collections_IEnumerator_Reset_m95B0F19ECBCA04A78265576E7D246E43741B83AB (U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadDataU3Ed__4_System_Collections_IEnumerator_Reset_m95B0F19ECBCA04A78265576E7D246E43741B83AB_RuntimeMethod_var)));
	}
}
// System.Object LoadScene/<LoadData>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadDataU3Ed__4_System_Collections_IEnumerator_get_Current_m43E8BC5BA8280A48C0E43D6F98419236DFB27695 (U3CLoadDataU3Ed__4_t6E317FD991A995FCBBD44BBA1C5F09E7E81A1854 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void LoadingController/<LoadData>d__4::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__4__ctor_mB257EFFC0DACB93C9DB128EEA604B7138FCDE05B (U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF * __this, int32_t ___U3CU3E1__state0, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		int32_t L_0 = ___U3CU3E1__state0;
		__this->set_U3CU3E1__state_0(L_0);
		return;
	}
}
// System.Void LoadingController/<LoadData>d__4::System.IDisposable.Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__4_System_IDisposable_Dispose_mB43E7884E261ED4CF317149F0A07BCF8D79581F5 (U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF * __this, const RuntimeMethod* method)
{
	{
		return;
	}
}
// System.Boolean LoadingController/<LoadData>d__4::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CLoadDataU3Ed__4_MoveNext_mDFE10E07E296AAE23CDB9CA8840B8DAD7F12B8E2 (U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral0512EEC843C7A7E31B445DB657D6412D22C485D7);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * V_1 = NULL;
	float V_2 = 0.0f;
	{
		int32_t L_0 = __this->get_U3CU3E1__state_0();
		V_0 = L_0;
		LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * L_1 = __this->get_U3CU3E4__this_2();
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
			goto IL_0069;
		}
	}
	{
		return (bool)0;
	}

IL_0017:
	{
		__this->set_U3CU3E1__state_0((-1));
		// DirectorController.gamestagenum = 1;
		((DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_StaticFields*)il2cpp_codegen_static_fields_for(DirectorController_t5F6986B06EB15DF4EBABD8D7017488EC05E90EB2_il2cpp_TypeInfo_var))->set_gamestagenum_4(1);
		// async = SceneManager.LoadSceneAsync("BattleNPCScene");
		LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * L_4 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(SceneManager_tEC9D10ECC0377F8AE5AEEB5A789FFD24364440FA_il2cpp_TypeInfo_var);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_5;
		L_5 = SceneManager_LoadSceneAsync_m9710D4ECD4D8BE75ACB7794E5300288C38A8A6BA(_stringLiteral0512EEC843C7A7E31B445DB657D6412D22C485D7, /*hidden argument*/NULL);
		NullCheck(L_4);
		L_4->set_async_4(L_5);
		goto IL_0070;
	}

IL_0036:
	{
		// var progressVal = Mathf.Clamp01(async.progress / 0.9f);
		LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * L_6 = V_1;
		NullCheck(L_6);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_7 = L_6->get_async_4();
		NullCheck(L_7);
		float L_8;
		L_8 = AsyncOperation_get_progress_m2471A0564D5C2207116737619E2CED05FBBC2D19(L_7, /*hidden argument*/NULL);
		float L_9;
		L_9 = Mathf_Clamp01_m2296D75F0F1292D5C8181C57007A1CA45F440C4C(((float)((float)L_8/(float)(0.899999976f))), /*hidden argument*/NULL);
		V_2 = L_9;
		// slider.value = progressVal;
		LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * L_10 = V_1;
		NullCheck(L_10);
		Slider_tBF39A11CC24CBD3F8BD728982ACAEAE43989B51A * L_11 = L_10->get_slider_6();
		float L_12 = V_2;
		NullCheck(L_11);
		VirtualActionInvoker1< float >::Invoke(47 /* System.Void UnityEngine.UI.Slider::set_value(System.Single) */, L_11, L_12);
		// yield return null;
		__this->set_U3CU3E2__current_1(NULL);
		__this->set_U3CU3E1__state_0(1);
		return (bool)1;
	}

IL_0069:
	{
		__this->set_U3CU3E1__state_0((-1));
	}

IL_0070:
	{
		// while (!async.isDone)
		LoadingController_t7B5E138C12AA6769790CCC02E9FA09150C3D4E57 * L_13 = V_1;
		NullCheck(L_13);
		AsyncOperation_tB6913CEC83169F22E96067CE8C7117A221E51A86 * L_14 = L_13->get_async_4();
		NullCheck(L_14);
		bool L_15;
		L_15 = AsyncOperation_get_isDone_m4592F121393149E539D2107239639A049493D877(L_14, /*hidden argument*/NULL);
		if (!L_15)
		{
			goto IL_0036;
		}
	}
	{
		// }
		return (bool)0;
	}
}
// System.Object LoadingController/<LoadData>d__4::System.Collections.Generic.IEnumerator<System.Object>.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadDataU3Ed__4_System_Collections_Generic_IEnumeratorU3CSystem_ObjectU3E_get_Current_m5F2E6166FE5504AA6A9155E1E075AFF47DD1F166 (U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
		return L_0;
	}
}
// System.Void LoadingController/<LoadData>d__4::System.Collections.IEnumerator.Reset()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CLoadDataU3Ed__4_System_Collections_IEnumerator_Reset_m0DA69A4D8DD12DF5D945334C1BCC3977DA8B7CD1 (U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF * __this, const RuntimeMethod* method)
{
	{
		NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 * L_0 = (NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_tB9D89F0E9470A2C423D239D7C68EE0CFD77F9339_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_m3EA81A5B209A87C3ADA47443F2AFFF735E5256EE(L_0, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_0, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&U3CLoadDataU3Ed__4_System_Collections_IEnumerator_Reset_m0DA69A4D8DD12DF5D945334C1BCC3977DA8B7CD1_RuntimeMethod_var)));
	}
}
// System.Object LoadingController/<LoadData>d__4::System.Collections.IEnumerator.get_Current()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * U3CLoadDataU3Ed__4_System_Collections_IEnumerator_get_Current_m8A5974EC901017B43C61D5048A2C463F98BCAA2E (U3CLoadDataU3Ed__4_tD2651303322AE5CCEFAE0C8FCDAB283F45E3C4EF * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = __this->get_U3CU3E2__current_1();
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
// System.Void Pauser/<>c::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__cctor_m5D5B620A97BDA917E03BA9F665E0C71B02617C36 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B * L_0 = (U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B *)il2cpp_codegen_object_new(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var);
		U3CU3Ec__ctor_m6283666BE2ACE06A65BE22AA55B91DAB00AAF769(L_0, /*hidden argument*/NULL);
		((U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_StaticFields*)il2cpp_codegen_static_fields_for(U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B_il2cpp_TypeInfo_var))->set_U3CU3E9_0(L_0);
		return;
	}
}
// System.Void Pauser/<>c::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__ctor_m6283666BE2ACE06A65BE22AA55B91DAB00AAF769 (U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Boolean Pauser/<>c::<OnPause>b__4_0(UnityEngine.Behaviour)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool U3CU3Ec_U3COnPauseU3Eb__4_0_mF7DF5C6D8916DD8BDABF99CE982BC552E2F686B6 (U3CU3Ec_t2DE1BB2E3AE6133870AB7769E5DCA11DF7D0024B * __this, Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * ___obj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (obj == null)
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_0 = ___obj0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_1;
		L_1 = Object_op_Equality_mEE9EC7EB5C7DC3E95B94AB904E1986FC4D566D54(L_0, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_000b;
		}
	}
	{
		// return false;
		return (bool)0;
	}

IL_000b:
	{
		// return obj.enabled;
		Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9 * L_2 = ___obj0;
		NullCheck(L_2);
		bool L_3;
		L_3 = Behaviour_get_enabled_m08077AB79934634E1EAE909C2B482BEF4C15A800(L_2, /*hidden argument*/NULL);
		return L_3;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_0(L_0);
		float L_1 = ___y1;
		__this->set_y_1(L_1);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Multiply_m9EA3D18290418D7B410C7D11C4788C13BFD2C30A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		float L_2 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_3 = ___a0;
		float L_4 = L_3.get_y_3();
		float L_5 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___a0;
		float L_7 = L_6.get_z_4();
		float L_8 = ___d1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), ((float)il2cpp_codegen_multiply((float)L_7, (float)L_8)), /*hidden argument*/NULL);
		V_0 = L_9;
		goto IL_0021;
	}

IL_0021:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = V_0;
		return L_10;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector2_op_Implicit_m4FA146E613DBFE6C1C4B0E9B461D622E6F2FC294_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___v0, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___v0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___v0;
		float L_3 = L_2.get_y_1();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_4), L_1, L_3, (0.0f), /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_001a;
	}

IL_001a:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method)
{
	{
		float L_0 = ___x0;
		__this->set_x_2(L_0);
		float L_1 = ___y1;
		__this->set_y_3(L_1);
		float L_2 = ___z2;
		__this->set_z_4(L_2);
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Addition_mEE4F672B923CCB184C39AABCA33443DB218E50E0_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_add((float)L_1, (float)L_3)), ((float)il2cpp_codegen_add((float)L_5, (float)L_7)), ((float)il2cpp_codegen_add((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___v0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___v0;
		float L_3 = L_2.get_y_3();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_1, L_3, /*hidden argument*/NULL);
		V_0 = L_4;
		goto IL_0015;
	}

IL_0015:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_5 = V_0;
		return L_5;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_op_Subtraction_m2725C96965D5C0B1F9715797E51762B13A5FED58_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___a0, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___b1, const RuntimeMethod* method)
{
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_0 = ___a0;
		float L_1 = L_0.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2 = ___b1;
		float L_3 = L_2.get_x_2();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_4 = ___a0;
		float L_5 = L_4.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6 = ___b1;
		float L_7 = L_6.get_y_3();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_8 = ___a0;
		float L_9 = L_8.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_10 = ___b1;
		float L_11 = L_10.get_z_4();
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_12;
		memset((&L_12), 0, sizeof(L_12));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_12), ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3)), ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7)), ((float)il2cpp_codegen_subtract((float)L_9, (float)L_11)), /*hidden argument*/NULL);
		V_0 = L_12;
		goto IL_0030;
	}

IL_0030:
	{
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_13 = V_0;
		return L_13;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector2_op_Equality_mAE5F31E8419538F0F6AF19D9897E0BE1CE8DB1B0_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___lhs0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___rhs1, const RuntimeMethod* method)
{
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	bool V_2 = false;
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___lhs0;
		float L_1 = L_0.get_x_0();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2 = ___rhs1;
		float L_3 = L_2.get_x_0();
		V_0 = ((float)il2cpp_codegen_subtract((float)L_1, (float)L_3));
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4 = ___lhs0;
		float L_5 = L_4.get_y_1();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = ___rhs1;
		float L_7 = L_6.get_y_1();
		V_1 = ((float)il2cpp_codegen_subtract((float)L_5, (float)L_7));
		float L_8 = V_0;
		float L_9 = V_0;
		float L_10 = V_1;
		float L_11 = V_1;
		V_2 = (bool)((((float)((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_multiply((float)L_8, (float)L_9)), (float)((float)il2cpp_codegen_multiply((float)L_10, (float)L_11))))) < ((float)(9.99999944E-11f)))? 1 : 0);
		goto IL_002e;
	}

IL_002e:
	{
		bool L_12 = V_2;
		return L_12;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t List_1_get_Count_m5D847939ABB9A78203B062CAFFE975792174D00F_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, const RuntimeMethod* method)
{
	{
		int32_t L_0 = (int32_t)__this->get__size_2();
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * List_1_get_Item_m7B5E3383CB67492E573AC0D875ED82A51350F188_gshared_inline (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___index0, const RuntimeMethod* method)
{
	{
		int32_t L_0 = ___index0;
		int32_t L_1 = (int32_t)__this->get__size_2();
		if ((!(((uint32_t)L_0) >= ((uint32_t)L_1))))
		{
			goto IL_000e;
		}
	}
	{
		ThrowHelper_ThrowArgumentOutOfRangeException_m4841366ABC2B2AFA37C10900551D7E07522C0929(/*hidden argument*/NULL);
	}

IL_000e:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)__this->get__items_1();
		int32_t L_3 = ___index0;
		RuntimeObject * L_4;
		L_4 = IL2CPP_ARRAY_UNSAFE_LOAD((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, (int32_t)L_3);
		return (RuntimeObject *)L_4;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m002765312BF306B1B3B5BFAB9550C0A2A1820CDA_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_m4C91D0E84532DF10C654917487D82CB0AB27693B_gshared_inline (Enumerator_tB6009981BD4E3881E3EC83627255A24198F902D6 * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return (RuntimeObject *)L_0;
	}
}
