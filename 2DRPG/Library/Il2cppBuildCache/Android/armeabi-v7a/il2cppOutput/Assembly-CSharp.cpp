#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <limits>
#include <stdint.h>


template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Collections.Generic.Dictionary`2<System.Int32,System.String[]>
struct Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Object>
struct Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F;
// System.Collections.Generic.Dictionary`2<System.Int32,QuestData>
struct Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4;
// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Sprite>
struct Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1;
// System.Collections.Generic.IEqualityComparer`1<System.Int32>
struct IEqualityComparer_1_t62010156673DE1460AB1D1CEBE5DCD48665E1A38;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,System.String[]>
struct KeyCollection_t9855C33DED1EA43290FDAE18108661144DD4663F;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,QuestData>
struct KeyCollection_t81A0E6EC08528453EE7A170910DBF30D9DAD5102;
// System.Collections.Generic.Dictionary`2/KeyCollection<System.Int32,UnityEngine.Sprite>
struct KeyCollection_t71DD5E805A6EF7D233B7BC97A4165196BBF73AD6;
// System.Collections.Generic.List`1<UnityEngine.UI.Image>
struct List_1_t815A476B0A21E183042059E705F9E505478CD8AE;
// UnityEngine.UI.CoroutineTween.TweenRunner`1<UnityEngine.UI.CoroutineTween.ColorTween>
struct TweenRunner_1_tD84B9953874682FCC36990AF2C54D748293908F3;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,System.String[]>
struct ValueCollection_t2CDF4D4E9044B31FCB71C6FB913C28855D4673F0;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,QuestData>
struct ValueCollection_t3BF390763D082524C34AF1E32E731C86DB50FEBB;
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Int32,UnityEngine.Sprite>
struct ValueCollection_tBFB359A165C65571C22BE168DA0BD1A278127DC5;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,System.String[]>[]
struct EntryU5BU5D_t9BF150C9FC7C74087CFE9C0AA3828BC0EF43A83B;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,QuestData>[]
struct EntryU5BU5D_t41A53F1143D9C3EAC42645CDDC5DF11CF1B5891F;
// System.Collections.Generic.Dictionary`2/Entry<System.Int32,UnityEngine.Sprite>[]
struct EntryU5BU5D_tD87261EC837CDB39D4BAE3C2D5178B347F87B6E8;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;
// UnityEngine.UIVertex[]
struct UIVertexU5BU5D_tE3D523C48DFEBC775876720DE2539A79FB7E5E5A;
// UnityEngine.Vector2[]
struct Vector2U5BU5D_tE0F58A2D6D8592B5EC37D9CDEF09103A02E5D7FA;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t5FB88EAA33E46838BDC2ABDAEA3E8727491CB9E4;
// ReadmeBE2/Section[]
struct SectionU5BU5D_tC3408981F0367A6ED669292DC92048E14DA4DE9C;
// ReadmeBE3/Section[]
struct SectionU5BU5D_t42726CA0A38B0CF478A872C9923A0F35DACD5D04;
// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149;
// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B;
// UnityEngine.Canvas
struct Canvas_t2B7E56B7BDC287962E092755372E214ACB6393EA;
// UnityEngine.CanvasRenderer
struct CanvasRenderer_tCF8ABE659F7C3A6ED0D99A988D0BDFB651310F0E;
// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722;
// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684;
// UnityEngine.UI.FontData
struct FontData_t0F1E9B3ED8136CD40782AC9A6AFB69CAD127C738;
// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1;
// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319;
// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C;
// UnityEngine.Material
struct Material_t8927C00353A72755313F046D0CE85178AE8218EE;
// UnityEngine.Mesh
struct Mesh_t2F5992DBA650D5862B43D3823ACD997132A57DA6;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A;
// ObjData
struct ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2;
// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A;
// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9;
// QuestData
struct QuestData_t76432B77A5683715DBD337237C5079F7F105CB26;
// QuestManager
struct QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1;
// ReadmeBE2
struct ReadmeBE2_t75C4BCCF96D6F8C9C8FB185690A2EBF99DB0A94A;
// ReadmeBE3
struct ReadmeBE3_t5DD99B8DB701C8E61460180DDC028DB4B8137449;
// UnityEngine.UI.RectMask2D
struct RectMask2D_tD909811991B341D752E4C978C89EFB80FA7A2B15;
// UnityEngine.RectTransform
struct RectTransform_t8A6A306FB29A6C8C22010CF9040E319753571072;
// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5;
// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A;
// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9;
// System.String
struct String_t;
// TalkManager
struct TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7;
// UnityEngine.UI.Text
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1;
// UnityEngine.TextGenerator
struct TextGenerator_t893F256D3587633108E00E5731CDC5A77AFF1B70;
// UnityEngine.Texture2D
struct Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF;
// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1;
// TypeEffect
struct TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3;
// UnityEngine.Events.UnityAction
struct UnityAction_t22E545F8BE0A62EE051C6A83E209587A0DB1C099;
// UnityEngine.UI.VertexHelper
struct VertexHelper_tDE8B67D3B076061C4F8DF325B0D63ED2E5367E55;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// UnityEngine.UI.MaskableGraphic/CullStateChangedEvent
struct CullStateChangedEvent_t9B69755DEBEF041C3CC15C3604610BDD72856BD4;
// ReadmeBE2/Section
struct Section_tC0C041FA2B529E2CCF9E4108176C85D4AA18F1AD;
// ReadmeBE3/Section
struct Section_tACBC5A692C8DDE7DEBC589E846A848B69901C01E;

IL2CPP_EXTERN_C RuntimeClass* CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* QuestData_t76432B77A5683715DBD337237C5079F7F105CB26_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral00872B18620301EAE25F54BD9BC36359A9B92CC2;
IL2CPP_EXTERN_C String_t* _stringLiteral04956CFF35EA786EC354171650717C186DDD7F23;
IL2CPP_EXTERN_C String_t* _stringLiteral11DF5FF449E5AA00FC94E7F0E90541FFF15980C8;
IL2CPP_EXTERN_C String_t* _stringLiteral17E6134BDA0DB23F4993CFDCC1C57832A5FF8FC0;
IL2CPP_EXTERN_C String_t* _stringLiteral1CEE0A3E8B0994C73DFB34790A27637DF64FCB6A;
IL2CPP_EXTERN_C String_t* _stringLiteral2117700226743514258D2D192B5E8AE20A4D45A0;
IL2CPP_EXTERN_C String_t* _stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A;
IL2CPP_EXTERN_C String_t* _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE;
IL2CPP_EXTERN_C String_t* _stringLiteral31CBC4A53C3F8611E90F20CB235C4928E15A2AC4;
IL2CPP_EXTERN_C String_t* _stringLiteral34E6461C9019C11C1428106B20B1A5E63C01E1A6;
IL2CPP_EXTERN_C String_t* _stringLiteral366F9D17452DCF31683FFF9D9F3BDF5DF931BBD2;
IL2CPP_EXTERN_C String_t* _stringLiteral3A026E4436482F6256A844099B6435DD23F26AC3;
IL2CPP_EXTERN_C String_t* _stringLiteral3BAF6B3321DDA9EFE5FF2B4D32D3A0F016E36862;
IL2CPP_EXTERN_C String_t* _stringLiteral518CD44B067C9A32D942A68E0BC9560A1C256575;
IL2CPP_EXTERN_C String_t* _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A;
IL2CPP_EXTERN_C String_t* _stringLiteral52B4F69AD643CA34A5226589DD49959CF032208B;
IL2CPP_EXTERN_C String_t* _stringLiteral5449340B31A7CBF95535B4511DAEC97C85B6C21C;
IL2CPP_EXTERN_C String_t* _stringLiteral617DC8F61A23C8ED3326E8D7944176DDDA0FC9D1;
IL2CPP_EXTERN_C String_t* _stringLiteral663AA16D11D8D259B26E088AC8DE4CE274B1BE4A;
IL2CPP_EXTERN_C String_t* _stringLiteral6B3F0EDF4548CE00678E1ADD6063DADE4A6FF456;
IL2CPP_EXTERN_C String_t* _stringLiteral6DDEE892922BC68C3DDCB8594F1105A82688ADE3;
IL2CPP_EXTERN_C String_t* _stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C;
IL2CPP_EXTERN_C String_t* _stringLiteral7CA899507A67A264D3733E3AD71CEC73B32FEF6B;
IL2CPP_EXTERN_C String_t* _stringLiteral7DAF49D5592CEEDA50EDEF0518F33EA2C5219BDB;
IL2CPP_EXTERN_C String_t* _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A;
IL2CPP_EXTERN_C String_t* _stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E;
IL2CPP_EXTERN_C String_t* _stringLiteral82CBDD3F0D1787F9C693786D5BFF7A36DCD7A87C;
IL2CPP_EXTERN_C String_t* _stringLiteral85C803D59E269D6CD0DEA8399301737436673B07;
IL2CPP_EXTERN_C String_t* _stringLiteral89EAD62D6C5ACF153AFBD0BD586A86115A628C29;
IL2CPP_EXTERN_C String_t* _stringLiteral8B5BDC736E9E5E19B28FA981E993D119431364A0;
IL2CPP_EXTERN_C String_t* _stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674;
IL2CPP_EXTERN_C String_t* _stringLiteral96721A81BB7AB5A6421A597E64CFD7E0D7333755;
IL2CPP_EXTERN_C String_t* _stringLiteral9A097E9AA1F8E2B63892D1A75184D75FE70CB254;
IL2CPP_EXTERN_C String_t* _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158;
IL2CPP_EXTERN_C String_t* _stringLiteralA34127EA31FE07B0E48A9D57B087C04ED2591FA7;
IL2CPP_EXTERN_C String_t* _stringLiteralAC468AF9D2E3616B15D3EE404820EE9AA650C879;
IL2CPP_EXTERN_C String_t* _stringLiteralBDA23D620005573917FE49BE31DDB15E46F3E14F;
IL2CPP_EXTERN_C String_t* _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC;
IL2CPP_EXTERN_C String_t* _stringLiteralC45203D5D85FE796834CAFFB0995A4FC77975559;
IL2CPP_EXTERN_C String_t* _stringLiteralC8951937D5B9A7F8A93D17B49868421E4DE6D334;
IL2CPP_EXTERN_C String_t* _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346;
IL2CPP_EXTERN_C String_t* _stringLiteralCF747446A915B0995836CE09C0716993B1A287EA;
IL2CPP_EXTERN_C String_t* _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
IL2CPP_EXTERN_C String_t* _stringLiteralDB8272F217F5D62DB35D08CC5F89FC5042F7471B;
IL2CPP_EXTERN_C String_t* _stringLiteralE53F4C0335DC06CF1E7B89227B65A3888FFEEBC1;
IL2CPP_EXTERN_C String_t* _stringLiteralEF168F08DF838F34F65455434C5742F829B2C439;
IL2CPP_EXTERN_C String_t* _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003;
IL2CPP_EXTERN_C String_t* _stringLiteralF04F08C5998C716F44E161964B6D4A2471D82305;
IL2CPP_EXTERN_C String_t* _stringLiteralF18C07C2911555B3BD202E2754727614C4F323F4;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisQuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1_m8AF292FF69A6C8E047B63FC2205E82830BD939E1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponentInChildren_TisTalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7_mAA0891FD3D57C7BBA48E88C6F9341D699620EAC3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_Add_mCE9BF9FF6CBC66D9979F225E6CC92029E979FBB4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_ContainsKey_m4BC5DB0783708D45CD4E5F0F83A345791469C95B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m1A2F684C82C65D47E88ACA4163DA6CF2FE7DF16B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m3C7EDF0516CBDA06C0326B58D4AF47F643C6557E_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2__ctor_m583FBCC00FD86C7405333ABD8349CDB1A3D7E6C1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m286B4EB3D3737AA642A75EFC7009F74541921ECC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Dictionary_2_get_Item_mF866B40A69A3606938685C9451A260939CA6B5D4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* GameObject_GetComponent_TisObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2_mA04D192E772E2814692E6114A8FB2D2E7B84491C_RuntimeMethod_var;

struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct U3CModuleU3E_tFDCAFCBB4B3431CFF2DC4D3E03FBFDF54EFF7E9A 
{
public:

public:
};


// System.Object


// System.Collections.Generic.Dictionary`2<System.Int32,System.String[]>
struct Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t9BF150C9FC7C74087CFE9C0AA3828BC0EF43A83B* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t9855C33DED1EA43290FDAE18108661144DD4663F * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t2CDF4D4E9044B31FCB71C6FB913C28855D4673F0 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ___entries_1)); }
	inline EntryU5BU5D_t9BF150C9FC7C74087CFE9C0AA3828BC0EF43A83B* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t9BF150C9FC7C74087CFE9C0AA3828BC0EF43A83B** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t9BF150C9FC7C74087CFE9C0AA3828BC0EF43A83B* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ___keys_7)); }
	inline KeyCollection_t9855C33DED1EA43290FDAE18108661144DD4663F * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t9855C33DED1EA43290FDAE18108661144DD4663F ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t9855C33DED1EA43290FDAE18108661144DD4663F * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ___values_8)); }
	inline ValueCollection_t2CDF4D4E9044B31FCB71C6FB913C28855D4673F0 * get_values_8() const { return ___values_8; }
	inline ValueCollection_t2CDF4D4E9044B31FCB71C6FB913C28855D4673F0 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t2CDF4D4E9044B31FCB71C6FB913C28855D4673F0 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,QuestData>
struct Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_t41A53F1143D9C3EAC42645CDDC5DF11CF1B5891F* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t81A0E6EC08528453EE7A170910DBF30D9DAD5102 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_t3BF390763D082524C34AF1E32E731C86DB50FEBB * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ___entries_1)); }
	inline EntryU5BU5D_t41A53F1143D9C3EAC42645CDDC5DF11CF1B5891F* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_t41A53F1143D9C3EAC42645CDDC5DF11CF1B5891F** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_t41A53F1143D9C3EAC42645CDDC5DF11CF1B5891F* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ___keys_7)); }
	inline KeyCollection_t81A0E6EC08528453EE7A170910DBF30D9DAD5102 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t81A0E6EC08528453EE7A170910DBF30D9DAD5102 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t81A0E6EC08528453EE7A170910DBF30D9DAD5102 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ___values_8)); }
	inline ValueCollection_t3BF390763D082524C34AF1E32E731C86DB50FEBB * get_values_8() const { return ___values_8; }
	inline ValueCollection_t3BF390763D082524C34AF1E32E731C86DB50FEBB ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_t3BF390763D082524C34AF1E32E731C86DB50FEBB * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};


// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Sprite>
struct Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.Dictionary`2::buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___buckets_0;
	// System.Collections.Generic.Dictionary`2/Entry<TKey,TValue>[] System.Collections.Generic.Dictionary`2::entries
	EntryU5BU5D_tD87261EC837CDB39D4BAE3C2D5178B347F87B6E8* ___entries_1;
	// System.Int32 System.Collections.Generic.Dictionary`2::count
	int32_t ___count_2;
	// System.Int32 System.Collections.Generic.Dictionary`2::version
	int32_t ___version_3;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeList
	int32_t ___freeList_4;
	// System.Int32 System.Collections.Generic.Dictionary`2::freeCount
	int32_t ___freeCount_5;
	// System.Collections.Generic.IEqualityComparer`1<TKey> System.Collections.Generic.Dictionary`2::comparer
	RuntimeObject* ___comparer_6;
	// System.Collections.Generic.Dictionary`2/KeyCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::keys
	KeyCollection_t71DD5E805A6EF7D233B7BC97A4165196BBF73AD6 * ___keys_7;
	// System.Collections.Generic.Dictionary`2/ValueCollection<TKey,TValue> System.Collections.Generic.Dictionary`2::values
	ValueCollection_tBFB359A165C65571C22BE168DA0BD1A278127DC5 * ___values_8;
	// System.Object System.Collections.Generic.Dictionary`2::_syncRoot
	RuntimeObject * ____syncRoot_9;

public:
	inline static int32_t get_offset_of_buckets_0() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ___buckets_0)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_buckets_0() const { return ___buckets_0; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_buckets_0() { return &___buckets_0; }
	inline void set_buckets_0(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___buckets_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___buckets_0), (void*)value);
	}

	inline static int32_t get_offset_of_entries_1() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ___entries_1)); }
	inline EntryU5BU5D_tD87261EC837CDB39D4BAE3C2D5178B347F87B6E8* get_entries_1() const { return ___entries_1; }
	inline EntryU5BU5D_tD87261EC837CDB39D4BAE3C2D5178B347F87B6E8** get_address_of_entries_1() { return &___entries_1; }
	inline void set_entries_1(EntryU5BU5D_tD87261EC837CDB39D4BAE3C2D5178B347F87B6E8* value)
	{
		___entries_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___entries_1), (void*)value);
	}

	inline static int32_t get_offset_of_count_2() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ___count_2)); }
	inline int32_t get_count_2() const { return ___count_2; }
	inline int32_t* get_address_of_count_2() { return &___count_2; }
	inline void set_count_2(int32_t value)
	{
		___count_2 = value;
	}

	inline static int32_t get_offset_of_version_3() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ___version_3)); }
	inline int32_t get_version_3() const { return ___version_3; }
	inline int32_t* get_address_of_version_3() { return &___version_3; }
	inline void set_version_3(int32_t value)
	{
		___version_3 = value;
	}

	inline static int32_t get_offset_of_freeList_4() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ___freeList_4)); }
	inline int32_t get_freeList_4() const { return ___freeList_4; }
	inline int32_t* get_address_of_freeList_4() { return &___freeList_4; }
	inline void set_freeList_4(int32_t value)
	{
		___freeList_4 = value;
	}

	inline static int32_t get_offset_of_freeCount_5() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ___freeCount_5)); }
	inline int32_t get_freeCount_5() const { return ___freeCount_5; }
	inline int32_t* get_address_of_freeCount_5() { return &___freeCount_5; }
	inline void set_freeCount_5(int32_t value)
	{
		___freeCount_5 = value;
	}

	inline static int32_t get_offset_of_comparer_6() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ___comparer_6)); }
	inline RuntimeObject* get_comparer_6() const { return ___comparer_6; }
	inline RuntimeObject** get_address_of_comparer_6() { return &___comparer_6; }
	inline void set_comparer_6(RuntimeObject* value)
	{
		___comparer_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___comparer_6), (void*)value);
	}

	inline static int32_t get_offset_of_keys_7() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ___keys_7)); }
	inline KeyCollection_t71DD5E805A6EF7D233B7BC97A4165196BBF73AD6 * get_keys_7() const { return ___keys_7; }
	inline KeyCollection_t71DD5E805A6EF7D233B7BC97A4165196BBF73AD6 ** get_address_of_keys_7() { return &___keys_7; }
	inline void set_keys_7(KeyCollection_t71DD5E805A6EF7D233B7BC97A4165196BBF73AD6 * value)
	{
		___keys_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___keys_7), (void*)value);
	}

	inline static int32_t get_offset_of_values_8() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ___values_8)); }
	inline ValueCollection_tBFB359A165C65571C22BE168DA0BD1A278127DC5 * get_values_8() const { return ___values_8; }
	inline ValueCollection_tBFB359A165C65571C22BE168DA0BD1A278127DC5 ** get_address_of_values_8() { return &___values_8; }
	inline void set_values_8(ValueCollection_tBFB359A165C65571C22BE168DA0BD1A278127DC5 * value)
	{
		___values_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___values_8), (void*)value);
	}

	inline static int32_t get_offset_of__syncRoot_9() { return static_cast<int32_t>(offsetof(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1, ____syncRoot_9)); }
	inline RuntimeObject * get__syncRoot_9() const { return ____syncRoot_9; }
	inline RuntimeObject ** get_address_of__syncRoot_9() { return &____syncRoot_9; }
	inline void set__syncRoot_9(RuntimeObject * value)
	{
		____syncRoot_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_9), (void*)value);
	}
};

struct Il2CppArrayBounds;

// System.Array


// QuestData
struct QuestData_t76432B77A5683715DBD337237C5079F7F105CB26  : public RuntimeObject
{
public:
	// System.String QuestData::questName
	String_t* ___questName_0;
	// System.Int32[] QuestData::npcId
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___npcId_1;

public:
	inline static int32_t get_offset_of_questName_0() { return static_cast<int32_t>(offsetof(QuestData_t76432B77A5683715DBD337237C5079F7F105CB26, ___questName_0)); }
	inline String_t* get_questName_0() const { return ___questName_0; }
	inline String_t** get_address_of_questName_0() { return &___questName_0; }
	inline void set_questName_0(String_t* value)
	{
		___questName_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questName_0), (void*)value);
	}

	inline static int32_t get_offset_of_npcId_1() { return static_cast<int32_t>(offsetof(QuestData_t76432B77A5683715DBD337237C5079F7F105CB26, ___npcId_1)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get_npcId_1() const { return ___npcId_1; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of_npcId_1() { return &___npcId_1; }
	inline void set_npcId_1(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		___npcId_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___npcId_1), (void*)value);
	}
};


// System.String
struct String_t  : public RuntimeObject
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
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
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

// ReadmeBE2/Section
struct Section_tC0C041FA2B529E2CCF9E4108176C85D4AA18F1AD  : public RuntimeObject
{
public:
	// System.String ReadmeBE2/Section::heading
	String_t* ___heading_0;
	// System.String ReadmeBE2/Section::text
	String_t* ___text_1;
	// System.String ReadmeBE2/Section::linkText
	String_t* ___linkText_2;
	// System.String ReadmeBE2/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_tC0C041FA2B529E2CCF9E4108176C85D4AA18F1AD, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_tC0C041FA2B529E2CCF9E4108176C85D4AA18F1AD, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_tC0C041FA2B529E2CCF9E4108176C85D4AA18F1AD, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_tC0C041FA2B529E2CCF9E4108176C85D4AA18F1AD, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// ReadmeBE3/Section
struct Section_tACBC5A692C8DDE7DEBC589E846A848B69901C01E  : public RuntimeObject
{
public:
	// System.String ReadmeBE3/Section::heading
	String_t* ___heading_0;
	// System.String ReadmeBE3/Section::text
	String_t* ___text_1;
	// System.String ReadmeBE3/Section::linkText
	String_t* ___linkText_2;
	// System.String ReadmeBE3/Section::url
	String_t* ___url_3;

public:
	inline static int32_t get_offset_of_heading_0() { return static_cast<int32_t>(offsetof(Section_tACBC5A692C8DDE7DEBC589E846A848B69901C01E, ___heading_0)); }
	inline String_t* get_heading_0() const { return ___heading_0; }
	inline String_t** get_address_of_heading_0() { return &___heading_0; }
	inline void set_heading_0(String_t* value)
	{
		___heading_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___heading_0), (void*)value);
	}

	inline static int32_t get_offset_of_text_1() { return static_cast<int32_t>(offsetof(Section_tACBC5A692C8DDE7DEBC589E846A848B69901C01E, ___text_1)); }
	inline String_t* get_text_1() const { return ___text_1; }
	inline String_t** get_address_of_text_1() { return &___text_1; }
	inline void set_text_1(String_t* value)
	{
		___text_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___text_1), (void*)value);
	}

	inline static int32_t get_offset_of_linkText_2() { return static_cast<int32_t>(offsetof(Section_tACBC5A692C8DDE7DEBC589E846A848B69901C01E, ___linkText_2)); }
	inline String_t* get_linkText_2() const { return ___linkText_2; }
	inline String_t** get_address_of_linkText_2() { return &___linkText_2; }
	inline void set_linkText_2(String_t* value)
	{
		___linkText_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___linkText_2), (void*)value);
	}

	inline static int32_t get_offset_of_url_3() { return static_cast<int32_t>(offsetof(Section_tACBC5A692C8DDE7DEBC589E846A848B69901C01E, ___url_3)); }
	inline String_t* get_url_3() const { return ___url_3; }
	inline String_t** get_address_of_url_3() { return &___url_3; }
	inline void set_url_3(String_t* value)
	{
		___url_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___url_3), (void*)value);
	}
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
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


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// UnityEngine.Color
struct Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 
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


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
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
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
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
struct IntPtr_t 
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


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
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


// UnityEngine.Vector2
struct Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 
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
struct Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E 
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
struct Vector4_tA56A37FC5661BCC89C3DDC24BE12BA5BCB6A02C7 
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
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
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


// UnityEngine.Object
struct Object_tF2F3778131EFF286AF62B7B013A170F95A91571A  : public RuntimeObject
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

// UnityEngine.RaycastHit2D
struct RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 
{
public:
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Centroid
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Centroid_0;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Point
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Point_1;
	// UnityEngine.Vector2 UnityEngine.RaycastHit2D::m_Normal
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___m_Normal_2;
	// System.Single UnityEngine.RaycastHit2D::m_Distance
	float ___m_Distance_3;
	// System.Single UnityEngine.RaycastHit2D::m_Fraction
	float ___m_Fraction_4;
	// System.Int32 UnityEngine.RaycastHit2D::m_Collider
	int32_t ___m_Collider_5;

public:
	inline static int32_t get_offset_of_m_Centroid_0() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Centroid_0)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Centroid_0() const { return ___m_Centroid_0; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Centroid_0() { return &___m_Centroid_0; }
	inline void set_m_Centroid_0(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Centroid_0 = value;
	}

	inline static int32_t get_offset_of_m_Point_1() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Point_1)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Point_1() const { return ___m_Point_1; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Point_1() { return &___m_Point_1; }
	inline void set_m_Point_1(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Point_1 = value;
	}

	inline static int32_t get_offset_of_m_Normal_2() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Normal_2)); }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  get_m_Normal_2() const { return ___m_Normal_2; }
	inline Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * get_address_of_m_Normal_2() { return &___m_Normal_2; }
	inline void set_m_Normal_2(Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  value)
	{
		___m_Normal_2 = value;
	}

	inline static int32_t get_offset_of_m_Distance_3() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Distance_3)); }
	inline float get_m_Distance_3() const { return ___m_Distance_3; }
	inline float* get_address_of_m_Distance_3() { return &___m_Distance_3; }
	inline void set_m_Distance_3(float value)
	{
		___m_Distance_3 = value;
	}

	inline static int32_t get_offset_of_m_Fraction_4() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Fraction_4)); }
	inline float get_m_Fraction_4() const { return ___m_Fraction_4; }
	inline float* get_address_of_m_Fraction_4() { return &___m_Fraction_4; }
	inline void set_m_Fraction_4(float value)
	{
		___m_Fraction_4 = value;
	}

	inline static int32_t get_offset_of_m_Collider_5() { return static_cast<int32_t>(offsetof(RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4, ___m_Collider_5)); }
	inline int32_t get_m_Collider_5() const { return ___m_Collider_5; }
	inline int32_t* get_address_of_m_Collider_5() { return &___m_Collider_5; }
	inline void set_m_Collider_5(int32_t value)
	{
		___m_Collider_5 = value;
	}
};


// UnityEngine.UI.Image/FillMethod
struct FillMethod_tC37E5898D113A8FBF25A6AB6FBA451CC51E211E2 
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
struct Type_tDCB08AB7425CAB70C1E46CC341F877423B5A5E12 
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


// UnityEngine.Component
struct Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.GameObject
struct GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_pinvoke : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A_marshaled_com : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_marshaled_com
{
};

// UnityEngine.Sprite
struct Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9  : public Object_tF2F3778131EFF286AF62B7B013A170F95A91571A
{
public:

public:
};


// UnityEngine.Behaviour
struct Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// ReadmeBE2
struct ReadmeBE2_t75C4BCCF96D6F8C9C8FB185690A2EBF99DB0A94A  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Texture2D ReadmeBE2::icon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___icon_4;
	// System.String ReadmeBE2::title
	String_t* ___title_5;
	// ReadmeBE2/Section[] ReadmeBE2::sections
	SectionU5BU5D_tC3408981F0367A6ED669292DC92048E14DA4DE9C* ___sections_6;
	// System.Boolean ReadmeBE2::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(ReadmeBE2_t75C4BCCF96D6F8C9C8FB185690A2EBF99DB0A94A, ___icon_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_icon_4() const { return ___icon_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(ReadmeBE2_t75C4BCCF96D6F8C9C8FB185690A2EBF99DB0A94A, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(ReadmeBE2_t75C4BCCF96D6F8C9C8FB185690A2EBF99DB0A94A, ___sections_6)); }
	inline SectionU5BU5D_tC3408981F0367A6ED669292DC92048E14DA4DE9C* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_tC3408981F0367A6ED669292DC92048E14DA4DE9C** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_tC3408981F0367A6ED669292DC92048E14DA4DE9C* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(ReadmeBE2_t75C4BCCF96D6F8C9C8FB185690A2EBF99DB0A94A, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};


// ReadmeBE3
struct ReadmeBE3_t5DD99B8DB701C8E61460180DDC028DB4B8137449  : public ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A
{
public:
	// UnityEngine.Texture2D ReadmeBE3::icon
	Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * ___icon_4;
	// System.String ReadmeBE3::title
	String_t* ___title_5;
	// ReadmeBE3/Section[] ReadmeBE3::sections
	SectionU5BU5D_t42726CA0A38B0CF478A872C9923A0F35DACD5D04* ___sections_6;
	// System.Boolean ReadmeBE3::loadedLayout
	bool ___loadedLayout_7;

public:
	inline static int32_t get_offset_of_icon_4() { return static_cast<int32_t>(offsetof(ReadmeBE3_t5DD99B8DB701C8E61460180DDC028DB4B8137449, ___icon_4)); }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * get_icon_4() const { return ___icon_4; }
	inline Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF ** get_address_of_icon_4() { return &___icon_4; }
	inline void set_icon_4(Texture2D_t9B604D0D8E28032123641A7E7338FA872E2698BF * value)
	{
		___icon_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___icon_4), (void*)value);
	}

	inline static int32_t get_offset_of_title_5() { return static_cast<int32_t>(offsetof(ReadmeBE3_t5DD99B8DB701C8E61460180DDC028DB4B8137449, ___title_5)); }
	inline String_t* get_title_5() const { return ___title_5; }
	inline String_t** get_address_of_title_5() { return &___title_5; }
	inline void set_title_5(String_t* value)
	{
		___title_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___title_5), (void*)value);
	}

	inline static int32_t get_offset_of_sections_6() { return static_cast<int32_t>(offsetof(ReadmeBE3_t5DD99B8DB701C8E61460180DDC028DB4B8137449, ___sections_6)); }
	inline SectionU5BU5D_t42726CA0A38B0CF478A872C9923A0F35DACD5D04* get_sections_6() const { return ___sections_6; }
	inline SectionU5BU5D_t42726CA0A38B0CF478A872C9923A0F35DACD5D04** get_address_of_sections_6() { return &___sections_6; }
	inline void set_sections_6(SectionU5BU5D_t42726CA0A38B0CF478A872C9923A0F35DACD5D04* value)
	{
		___sections_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___sections_6), (void*)value);
	}

	inline static int32_t get_offset_of_loadedLayout_7() { return static_cast<int32_t>(offsetof(ReadmeBE3_t5DD99B8DB701C8E61460180DDC028DB4B8137449, ___loadedLayout_7)); }
	inline bool get_loadedLayout_7() const { return ___loadedLayout_7; }
	inline bool* get_address_of_loadedLayout_7() { return &___loadedLayout_7; }
	inline void set_loadedLayout_7(bool value)
	{
		___loadedLayout_7 = value;
	}
};


// UnityEngine.Rigidbody2D
struct Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Transform
struct Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1  : public Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684
{
public:

public:
};


// UnityEngine.Animator
struct Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioBehaviour
struct AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.Collider2D
struct Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.MonoBehaviour
struct MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A  : public Behaviour_t1A3DDDCF73B4627928FBFE02ED52B7251777DBD9
{
public:

public:
};


// UnityEngine.AudioSource
struct AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B  : public AudioBehaviour_tB44966D47AD43C50C7294AEE9B57574E55AACA4A
{
public:

public:
};


// GameManager
struct GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// TalkManager GameManager::talkManager
	TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * ___talkManager_4;
	// UnityEngine.Animator GameManager::talkPanel
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___talkPanel_5;
	// UnityEngine.UI.Image GameManager::portraitImg
	Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * ___portraitImg_6;
	// UnityEngine.Animator GameManager::portraitAnim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___portraitAnim_7;
	// UnityEngine.Sprite GameManager::prevPortrait
	Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___prevPortrait_8;
	// TypeEffect GameManager::talk
	TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * ___talk_9;
	// UnityEngine.UI.Text GameManager::questText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___questText_10;
	// UnityEngine.UI.Text GameManager::nameText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___nameText_11;
	// QuestManager GameManager::questManager
	QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * ___questManager_12;
	// UnityEngine.GameObject GameManager::scanObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scanObject_13;
	// System.Boolean GameManager::isAction
	bool ___isAction_14;
	// System.Int32 GameManager::talkindex
	int32_t ___talkindex_15;
	// UnityEngine.GameObject GameManager::menuSet
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___menuSet_16;
	// UnityEngine.GameObject GameManager::player
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___player_17;

public:
	inline static int32_t get_offset_of_talkManager_4() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___talkManager_4)); }
	inline TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * get_talkManager_4() const { return ___talkManager_4; }
	inline TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 ** get_address_of_talkManager_4() { return &___talkManager_4; }
	inline void set_talkManager_4(TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * value)
	{
		___talkManager_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___talkManager_4), (void*)value);
	}

	inline static int32_t get_offset_of_talkPanel_5() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___talkPanel_5)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_talkPanel_5() const { return ___talkPanel_5; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_talkPanel_5() { return &___talkPanel_5; }
	inline void set_talkPanel_5(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___talkPanel_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___talkPanel_5), (void*)value);
	}

	inline static int32_t get_offset_of_portraitImg_6() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___portraitImg_6)); }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * get_portraitImg_6() const { return ___portraitImg_6; }
	inline Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C ** get_address_of_portraitImg_6() { return &___portraitImg_6; }
	inline void set_portraitImg_6(Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * value)
	{
		___portraitImg_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portraitImg_6), (void*)value);
	}

	inline static int32_t get_offset_of_portraitAnim_7() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___portraitAnim_7)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_portraitAnim_7() const { return ___portraitAnim_7; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_portraitAnim_7() { return &___portraitAnim_7; }
	inline void set_portraitAnim_7(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___portraitAnim_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portraitAnim_7), (void*)value);
	}

	inline static int32_t get_offset_of_prevPortrait_8() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___prevPortrait_8)); }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * get_prevPortrait_8() const { return ___prevPortrait_8; }
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** get_address_of_prevPortrait_8() { return &___prevPortrait_8; }
	inline void set_prevPortrait_8(Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		___prevPortrait_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___prevPortrait_8), (void*)value);
	}

	inline static int32_t get_offset_of_talk_9() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___talk_9)); }
	inline TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * get_talk_9() const { return ___talk_9; }
	inline TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 ** get_address_of_talk_9() { return &___talk_9; }
	inline void set_talk_9(TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * value)
	{
		___talk_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___talk_9), (void*)value);
	}

	inline static int32_t get_offset_of_questText_10() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___questText_10)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_questText_10() const { return ___questText_10; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_questText_10() { return &___questText_10; }
	inline void set_questText_10(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___questText_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questText_10), (void*)value);
	}

	inline static int32_t get_offset_of_nameText_11() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___nameText_11)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_nameText_11() const { return ___nameText_11; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_nameText_11() { return &___nameText_11; }
	inline void set_nameText_11(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___nameText_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___nameText_11), (void*)value);
	}

	inline static int32_t get_offset_of_questManager_12() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___questManager_12)); }
	inline QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * get_questManager_12() const { return ___questManager_12; }
	inline QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 ** get_address_of_questManager_12() { return &___questManager_12; }
	inline void set_questManager_12(QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * value)
	{
		___questManager_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questManager_12), (void*)value);
	}

	inline static int32_t get_offset_of_scanObject_13() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___scanObject_13)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scanObject_13() const { return ___scanObject_13; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scanObject_13() { return &___scanObject_13; }
	inline void set_scanObject_13(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scanObject_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scanObject_13), (void*)value);
	}

	inline static int32_t get_offset_of_isAction_14() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___isAction_14)); }
	inline bool get_isAction_14() const { return ___isAction_14; }
	inline bool* get_address_of_isAction_14() { return &___isAction_14; }
	inline void set_isAction_14(bool value)
	{
		___isAction_14 = value;
	}

	inline static int32_t get_offset_of_talkindex_15() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___talkindex_15)); }
	inline int32_t get_talkindex_15() const { return ___talkindex_15; }
	inline int32_t* get_address_of_talkindex_15() { return &___talkindex_15; }
	inline void set_talkindex_15(int32_t value)
	{
		___talkindex_15 = value;
	}

	inline static int32_t get_offset_of_menuSet_16() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___menuSet_16)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_menuSet_16() const { return ___menuSet_16; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_menuSet_16() { return &___menuSet_16; }
	inline void set_menuSet_16(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___menuSet_16 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___menuSet_16), (void*)value);
	}

	inline static int32_t get_offset_of_player_17() { return static_cast<int32_t>(offsetof(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1, ___player_17)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_player_17() const { return ___player_17; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_player_17() { return &___player_17; }
	inline void set_player_17(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___player_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___player_17), (void*)value);
	}
};


// ObjData
struct ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 ObjData::id
	int32_t ___id_4;
	// System.Boolean ObjData::isNPC
	bool ___isNPC_5;

public:
	inline static int32_t get_offset_of_id_4() { return static_cast<int32_t>(offsetof(ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2, ___id_4)); }
	inline int32_t get_id_4() const { return ___id_4; }
	inline int32_t* get_address_of_id_4() { return &___id_4; }
	inline void set_id_4(int32_t value)
	{
		___id_4 = value;
	}

	inline static int32_t get_offset_of_isNPC_5() { return static_cast<int32_t>(offsetof(ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2, ___isNPC_5)); }
	inline bool get_isNPC_5() const { return ___isNPC_5; }
	inline bool* get_address_of_isNPC_5() { return &___isNPC_5; }
	inline void set_isNPC_5(bool value)
	{
		___isNPC_5 = value;
	}
};


// PlayerController
struct PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Single PlayerController::speed
	float ___speed_4;
	// System.Single PlayerController::h
	float ___h_5;
	// System.Single PlayerController::v
	float ___v_6;
	// System.Boolean PlayerController::isHorizonmove
	bool ___isHorizonmove_7;
	// UnityEngine.Vector3 PlayerController::dirVec
	Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___dirVec_8;
	// UnityEngine.GameObject PlayerController::scanObject
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scanObject_9;
	// GameManager PlayerController::gameManager
	GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * ___gameManager_10;
	// UnityEngine.Animator PlayerController::anim
	Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * ___anim_11;
	// UnityEngine.Rigidbody2D PlayerController::rigid
	Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * ___rigid_12;
	// System.Int32 PlayerController::up_Value
	int32_t ___up_Value_13;
	// System.Int32 PlayerController::down_Value
	int32_t ___down_Value_14;
	// System.Int32 PlayerController::right_Value
	int32_t ___right_Value_15;
	// System.Int32 PlayerController::left_Value
	int32_t ___left_Value_16;
	// System.Boolean PlayerController::up_Down
	bool ___up_Down_17;
	// System.Boolean PlayerController::down_Down
	bool ___down_Down_18;
	// System.Boolean PlayerController::left_Down
	bool ___left_Down_19;
	// System.Boolean PlayerController::right_Down
	bool ___right_Down_20;
	// System.Boolean PlayerController::up_Up
	bool ___up_Up_21;
	// System.Boolean PlayerController::down_Up
	bool ___down_Up_22;
	// System.Boolean PlayerController::right_Up
	bool ___right_Up_23;
	// System.Boolean PlayerController::left_Up
	bool ___left_Up_24;

public:
	inline static int32_t get_offset_of_speed_4() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___speed_4)); }
	inline float get_speed_4() const { return ___speed_4; }
	inline float* get_address_of_speed_4() { return &___speed_4; }
	inline void set_speed_4(float value)
	{
		___speed_4 = value;
	}

	inline static int32_t get_offset_of_h_5() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___h_5)); }
	inline float get_h_5() const { return ___h_5; }
	inline float* get_address_of_h_5() { return &___h_5; }
	inline void set_h_5(float value)
	{
		___h_5 = value;
	}

	inline static int32_t get_offset_of_v_6() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___v_6)); }
	inline float get_v_6() const { return ___v_6; }
	inline float* get_address_of_v_6() { return &___v_6; }
	inline void set_v_6(float value)
	{
		___v_6 = value;
	}

	inline static int32_t get_offset_of_isHorizonmove_7() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___isHorizonmove_7)); }
	inline bool get_isHorizonmove_7() const { return ___isHorizonmove_7; }
	inline bool* get_address_of_isHorizonmove_7() { return &___isHorizonmove_7; }
	inline void set_isHorizonmove_7(bool value)
	{
		___isHorizonmove_7 = value;
	}

	inline static int32_t get_offset_of_dirVec_8() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___dirVec_8)); }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  get_dirVec_8() const { return ___dirVec_8; }
	inline Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * get_address_of_dirVec_8() { return &___dirVec_8; }
	inline void set_dirVec_8(Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  value)
	{
		___dirVec_8 = value;
	}

	inline static int32_t get_offset_of_scanObject_9() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___scanObject_9)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_scanObject_9() const { return ___scanObject_9; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_scanObject_9() { return &___scanObject_9; }
	inline void set_scanObject_9(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___scanObject_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___scanObject_9), (void*)value);
	}

	inline static int32_t get_offset_of_gameManager_10() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___gameManager_10)); }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * get_gameManager_10() const { return ___gameManager_10; }
	inline GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 ** get_address_of_gameManager_10() { return &___gameManager_10; }
	inline void set_gameManager_10(GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * value)
	{
		___gameManager_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___gameManager_10), (void*)value);
	}

	inline static int32_t get_offset_of_anim_11() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___anim_11)); }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * get_anim_11() const { return ___anim_11; }
	inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 ** get_address_of_anim_11() { return &___anim_11; }
	inline void set_anim_11(Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * value)
	{
		___anim_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___anim_11), (void*)value);
	}

	inline static int32_t get_offset_of_rigid_12() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___rigid_12)); }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * get_rigid_12() const { return ___rigid_12; }
	inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 ** get_address_of_rigid_12() { return &___rigid_12; }
	inline void set_rigid_12(Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * value)
	{
		___rigid_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___rigid_12), (void*)value);
	}

	inline static int32_t get_offset_of_up_Value_13() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___up_Value_13)); }
	inline int32_t get_up_Value_13() const { return ___up_Value_13; }
	inline int32_t* get_address_of_up_Value_13() { return &___up_Value_13; }
	inline void set_up_Value_13(int32_t value)
	{
		___up_Value_13 = value;
	}

	inline static int32_t get_offset_of_down_Value_14() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___down_Value_14)); }
	inline int32_t get_down_Value_14() const { return ___down_Value_14; }
	inline int32_t* get_address_of_down_Value_14() { return &___down_Value_14; }
	inline void set_down_Value_14(int32_t value)
	{
		___down_Value_14 = value;
	}

	inline static int32_t get_offset_of_right_Value_15() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___right_Value_15)); }
	inline int32_t get_right_Value_15() const { return ___right_Value_15; }
	inline int32_t* get_address_of_right_Value_15() { return &___right_Value_15; }
	inline void set_right_Value_15(int32_t value)
	{
		___right_Value_15 = value;
	}

	inline static int32_t get_offset_of_left_Value_16() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___left_Value_16)); }
	inline int32_t get_left_Value_16() const { return ___left_Value_16; }
	inline int32_t* get_address_of_left_Value_16() { return &___left_Value_16; }
	inline void set_left_Value_16(int32_t value)
	{
		___left_Value_16 = value;
	}

	inline static int32_t get_offset_of_up_Down_17() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___up_Down_17)); }
	inline bool get_up_Down_17() const { return ___up_Down_17; }
	inline bool* get_address_of_up_Down_17() { return &___up_Down_17; }
	inline void set_up_Down_17(bool value)
	{
		___up_Down_17 = value;
	}

	inline static int32_t get_offset_of_down_Down_18() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___down_Down_18)); }
	inline bool get_down_Down_18() const { return ___down_Down_18; }
	inline bool* get_address_of_down_Down_18() { return &___down_Down_18; }
	inline void set_down_Down_18(bool value)
	{
		___down_Down_18 = value;
	}

	inline static int32_t get_offset_of_left_Down_19() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___left_Down_19)); }
	inline bool get_left_Down_19() const { return ___left_Down_19; }
	inline bool* get_address_of_left_Down_19() { return &___left_Down_19; }
	inline void set_left_Down_19(bool value)
	{
		___left_Down_19 = value;
	}

	inline static int32_t get_offset_of_right_Down_20() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___right_Down_20)); }
	inline bool get_right_Down_20() const { return ___right_Down_20; }
	inline bool* get_address_of_right_Down_20() { return &___right_Down_20; }
	inline void set_right_Down_20(bool value)
	{
		___right_Down_20 = value;
	}

	inline static int32_t get_offset_of_up_Up_21() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___up_Up_21)); }
	inline bool get_up_Up_21() const { return ___up_Up_21; }
	inline bool* get_address_of_up_Up_21() { return &___up_Up_21; }
	inline void set_up_Up_21(bool value)
	{
		___up_Up_21 = value;
	}

	inline static int32_t get_offset_of_down_Up_22() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___down_Up_22)); }
	inline bool get_down_Up_22() const { return ___down_Up_22; }
	inline bool* get_address_of_down_Up_22() { return &___down_Up_22; }
	inline void set_down_Up_22(bool value)
	{
		___down_Up_22 = value;
	}

	inline static int32_t get_offset_of_right_Up_23() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___right_Up_23)); }
	inline bool get_right_Up_23() const { return ___right_Up_23; }
	inline bool* get_address_of_right_Up_23() { return &___right_Up_23; }
	inline void set_right_Up_23(bool value)
	{
		___right_Up_23 = value;
	}

	inline static int32_t get_offset_of_left_Up_24() { return static_cast<int32_t>(offsetof(PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9, ___left_Up_24)); }
	inline bool get_left_Up_24() const { return ___left_Up_24; }
	inline bool* get_address_of_left_Up_24() { return &___left_Up_24; }
	inline void set_left_Up_24(bool value)
	{
		___left_Up_24 = value;
	}
};


// QuestManager
struct QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Int32 QuestManager::questId
	int32_t ___questId_4;
	// System.Int32 QuestManager::questActionIndex
	int32_t ___questActionIndex_5;
	// UnityEngine.GameObject[] QuestManager::questObject
	GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* ___questObject_6;
	// System.Collections.Generic.Dictionary`2<System.Int32,QuestData> QuestManager::questList
	Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * ___questList_7;

public:
	inline static int32_t get_offset_of_questId_4() { return static_cast<int32_t>(offsetof(QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1, ___questId_4)); }
	inline int32_t get_questId_4() const { return ___questId_4; }
	inline int32_t* get_address_of_questId_4() { return &___questId_4; }
	inline void set_questId_4(int32_t value)
	{
		___questId_4 = value;
	}

	inline static int32_t get_offset_of_questActionIndex_5() { return static_cast<int32_t>(offsetof(QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1, ___questActionIndex_5)); }
	inline int32_t get_questActionIndex_5() const { return ___questActionIndex_5; }
	inline int32_t* get_address_of_questActionIndex_5() { return &___questActionIndex_5; }
	inline void set_questActionIndex_5(int32_t value)
	{
		___questActionIndex_5 = value;
	}

	inline static int32_t get_offset_of_questObject_6() { return static_cast<int32_t>(offsetof(QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1, ___questObject_6)); }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* get_questObject_6() const { return ___questObject_6; }
	inline GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642** get_address_of_questObject_6() { return &___questObject_6; }
	inline void set_questObject_6(GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* value)
	{
		___questObject_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questObject_6), (void*)value);
	}

	inline static int32_t get_offset_of_questList_7() { return static_cast<int32_t>(offsetof(QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1, ___questList_7)); }
	inline Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * get_questList_7() const { return ___questList_7; }
	inline Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 ** get_address_of_questList_7() { return &___questList_7; }
	inline void set_questList_7(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * value)
	{
		___questList_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___questList_7), (void*)value);
	}
};


// TalkManager
struct TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// System.Collections.Generic.Dictionary`2<System.Int32,System.String[]> TalkManager::talkData
	Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * ___talkData_4;
	// System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Sprite> TalkManager::portraionData
	Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * ___portraionData_5;
	// UnityEngine.Sprite[] TalkManager::portraitArr
	SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* ___portraitArr_6;

public:
	inline static int32_t get_offset_of_talkData_4() { return static_cast<int32_t>(offsetof(TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7, ___talkData_4)); }
	inline Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * get_talkData_4() const { return ___talkData_4; }
	inline Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 ** get_address_of_talkData_4() { return &___talkData_4; }
	inline void set_talkData_4(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * value)
	{
		___talkData_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___talkData_4), (void*)value);
	}

	inline static int32_t get_offset_of_portraionData_5() { return static_cast<int32_t>(offsetof(TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7, ___portraionData_5)); }
	inline Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * get_portraionData_5() const { return ___portraionData_5; }
	inline Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 ** get_address_of_portraionData_5() { return &___portraionData_5; }
	inline void set_portraionData_5(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * value)
	{
		___portraionData_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portraionData_5), (void*)value);
	}

	inline static int32_t get_offset_of_portraitArr_6() { return static_cast<int32_t>(offsetof(TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7, ___portraitArr_6)); }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* get_portraitArr_6() const { return ___portraitArr_6; }
	inline SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77** get_address_of_portraitArr_6() { return &___portraitArr_6; }
	inline void set_portraitArr_6(SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* value)
	{
		___portraitArr_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___portraitArr_6), (void*)value);
	}
};


// TypeEffect
struct TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:
	// UnityEngine.GameObject TypeEffect::EndCursor
	GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___EndCursor_4;
	// System.Boolean TypeEffect::isAnim
	bool ___isAnim_5;
	// System.Int32 TypeEffect::CharPerSeconds
	int32_t ___CharPerSeconds_6;
	// UnityEngine.UI.Text TypeEffect::msgText
	Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * ___msgText_7;
	// UnityEngine.AudioSource TypeEffect::audioSource
	AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * ___audioSource_8;
	// System.String TypeEffect::targetMsg
	String_t* ___targetMsg_9;
	// System.Int32 TypeEffect::index
	int32_t ___index_10;
	// System.Single TypeEffect::interval
	float ___interval_11;

public:
	inline static int32_t get_offset_of_EndCursor_4() { return static_cast<int32_t>(offsetof(TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3, ___EndCursor_4)); }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * get_EndCursor_4() const { return ___EndCursor_4; }
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** get_address_of_EndCursor_4() { return &___EndCursor_4; }
	inline void set_EndCursor_4(GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		___EndCursor_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EndCursor_4), (void*)value);
	}

	inline static int32_t get_offset_of_isAnim_5() { return static_cast<int32_t>(offsetof(TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3, ___isAnim_5)); }
	inline bool get_isAnim_5() const { return ___isAnim_5; }
	inline bool* get_address_of_isAnim_5() { return &___isAnim_5; }
	inline void set_isAnim_5(bool value)
	{
		___isAnim_5 = value;
	}

	inline static int32_t get_offset_of_CharPerSeconds_6() { return static_cast<int32_t>(offsetof(TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3, ___CharPerSeconds_6)); }
	inline int32_t get_CharPerSeconds_6() const { return ___CharPerSeconds_6; }
	inline int32_t* get_address_of_CharPerSeconds_6() { return &___CharPerSeconds_6; }
	inline void set_CharPerSeconds_6(int32_t value)
	{
		___CharPerSeconds_6 = value;
	}

	inline static int32_t get_offset_of_msgText_7() { return static_cast<int32_t>(offsetof(TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3, ___msgText_7)); }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * get_msgText_7() const { return ___msgText_7; }
	inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 ** get_address_of_msgText_7() { return &___msgText_7; }
	inline void set_msgText_7(Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * value)
	{
		___msgText_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___msgText_7), (void*)value);
	}

	inline static int32_t get_offset_of_audioSource_8() { return static_cast<int32_t>(offsetof(TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3, ___audioSource_8)); }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * get_audioSource_8() const { return ___audioSource_8; }
	inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B ** get_address_of_audioSource_8() { return &___audioSource_8; }
	inline void set_audioSource_8(AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * value)
	{
		___audioSource_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___audioSource_8), (void*)value);
	}

	inline static int32_t get_offset_of_targetMsg_9() { return static_cast<int32_t>(offsetof(TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3, ___targetMsg_9)); }
	inline String_t* get_targetMsg_9() const { return ___targetMsg_9; }
	inline String_t** get_address_of_targetMsg_9() { return &___targetMsg_9; }
	inline void set_targetMsg_9(String_t* value)
	{
		___targetMsg_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___targetMsg_9), (void*)value);
	}

	inline static int32_t get_offset_of_index_10() { return static_cast<int32_t>(offsetof(TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3, ___index_10)); }
	inline int32_t get_index_10() const { return ___index_10; }
	inline int32_t* get_address_of_index_10() { return &___index_10; }
	inline void set_index_10(int32_t value)
	{
		___index_10 = value;
	}

	inline static int32_t get_offset_of_interval_11() { return static_cast<int32_t>(offsetof(TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3, ___interval_11)); }
	inline float get_interval_11() const { return ___interval_11; }
	inline float* get_address_of_interval_11() { return &___interval_11; }
	inline void set_interval_11(float value)
	{
		___interval_11 = value;
	}
};


// UnityEngine.EventSystems.UIBehaviour
struct UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E  : public MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A
{
public:

public:
};


// UnityEngine.UI.Graphic
struct Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24  : public UIBehaviour_tD1C6E2D542222546D68510ECE74036EFBC3C3B0E
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


// UnityEngine.UI.MaskableGraphic
struct MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE  : public Graphic_tF07D777035055CF93BA5F46F77ED5EDFEFF9AE24
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


// UnityEngine.UI.Image
struct Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
struct Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1  : public MaskableGraphic_t0DB59E37E3C8AD2F5A4FB7FB091630CB21370CCE
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
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
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
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
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
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
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * m_Items[1];

public:
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * m_Items[1];

public:
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0 UnityEngine.Component::GetComponentInChildren<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::Add(!0,!1)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, RuntimeObject * ___value1, const RuntimeMethod* method);
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::get_Item(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.Object>::ContainsKey(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared (Dictionary_2_tE1E5B6327FFA2C7AE34A69E0011815C914771C2F * __this, int32_t ___key0, const RuntimeMethod* method);

// System.Void GameManager::GameLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameLoad_m62BDF8C3DD57DEAC38A2843F95784818F68B02B9 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.String QuestManager::CheckQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuestManager_CheckQuest_mE5A3FF5C87424F715B368E47B51EA22A378B5CF2 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponentInChildren<TalkManager>()
inline TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * Component_GetComponentInChildren_TisTalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7_mAA0891FD3D57C7BBA48E88C6F9341D699620EAC3 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponentInChildren<QuestManager>()
inline QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * Component_GetComponentInChildren_TisQuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1_m8AF292FF69A6C8E047B63FC2205E82830BD939E1 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponentInChildren_TisRuntimeObject_mB377B32275A969E0D1A738DBC693DE8EB3593642_gshared)(__this, method);
}
// System.Boolean UnityEngine.Input::GetButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Void GameManager::SubMenuActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SubMenuActive_m5594B250B8494F9C4CD2D24BB37DC3698A5D553E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.GameObject::get_activeSelf()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, bool ___value0, const RuntimeMethod* method);
// !!0 UnityEngine.GameObject::GetComponent<ObjData>()
inline ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2 * GameObject_GetComponent_TisObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2_mA04D192E772E2814692E6114A8FB2D2E7B84491C (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method)
{
	return ((  ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2 * (*) (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *, const RuntimeMethod*))GameObject_GetComponent_TisRuntimeObject_mCE43118393A796C759AC5D43257AB2330881767D_gshared)(__this, method);
}
// System.Void GameManager::Talk(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Talk_m675B5BCF3F39EC57DC6F4F9D45E6575D95684217 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___id0, bool ___isNPC1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetBool(System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, bool ___value1, const RuntimeMethod* method);
// System.Void TypeEffect::setMsg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeEffect_setMsg_m995884E73F813846AE2049D6DED75CC6AAB7A298 (TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * __this, String_t* ___msg0, const RuntimeMethod* method);
// System.Int32 QuestManager::GetQuestTalkIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuestManager_GetQuestTalkIndex_mFBD56AE85DC6B1F96478AB4019BCF73B5323A07D (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.String TalkManager::GetTalk(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TalkManager_GetTalk_mB8103F7173BF61AF7B5B25CA3A41063367D9BFBA (TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * __this, int32_t ___id0, int32_t ___talkindex1, const RuntimeMethod* method);
// System.String QuestManager::CheckQuest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuestManager_CheckQuest_m98B81C1888B5B585D65FD0A960BCF32A936E87E6 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, int32_t ___id0, const RuntimeMethod* method);
// System.String[] System.String::Split(System.Char[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B (String_t* __this, CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___separator0, const RuntimeMethod* method);
// System.Int32 System.Int32::Parse(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C (String_t* ___s0, const RuntimeMethod* method);
// UnityEngine.Sprite TalkManager::GetPortrait(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * TalkManager_GetPortrait_m91649E396C2E610EC9D79BA1603F6D293A02E05B (TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * __this, int32_t ___id0, int32_t ___portrationIndex1, const RuntimeMethod* method);
// System.Void UnityEngine.UI.Image::set_sprite(UnityEngine.Sprite)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4 (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value0, const RuntimeMethod* method);
// System.Void UnityEngine.Color::.ctor(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5 (Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659 * __this, float ___r0, float ___g1, float ___b2, float ___a3, const RuntimeMethod* method);
// UnityEngine.Sprite UnityEngine.UI.Image::get_sprite()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90 (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___x0, Object_tF2F3778131EFF286AF62B7B013A170F95A91571A * ___y1, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetTrigger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::Log(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8 (RuntimeObject * ___message0, const RuntimeMethod* method);
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34 (GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * __this, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Transform::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetFloat(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214 (String_t* ___key0, float ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::SetInt(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6 (String_t* ___key0, int32_t ___value1, const RuntimeMethod* method);
// System.Void UnityEngine.PlayerPrefs::Save()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC (const RuntimeMethod* method);
// System.Boolean UnityEngine.PlayerPrefs::HasKey(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92 (String_t* ___key0, const RuntimeMethod* method);
// System.Single UnityEngine.PlayerPrefs::GetFloat(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471 (String_t* ___key0, const RuntimeMethod* method);
// System.Int32 UnityEngine.PlayerPrefs::GetInt(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986 (String_t* ___key0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector3::.ctor(System.Single,System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E * __this, float ___x0, float ___y1, float ___z2, const RuntimeMethod* method);
// System.Void UnityEngine.Transform::set_position(UnityEngine.Vector3)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91 (Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * __this, Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___value0, const RuntimeMethod* method);
// System.Void QuestManager::ControllObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestManager_ControllObject_mFD5E3C97363C800D0CA1A1CDCBD2597D714D1BB6 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Application::Quit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A (const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour__ctor_mC0995D847F6A95B1A553652636C38A2AA8B13BED (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Rigidbody2D>()
inline Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.Animator>()
inline Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Single UnityEngine.Input::GetAxisRaw(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B (String_t* ___axisName0, const RuntimeMethod* method);
// System.Boolean UnityEngine.Input::GetButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD (String_t* ___buttonName0, const RuntimeMethod* method);
// System.Int32 UnityEngine.Animator::GetInteger(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Animator_GetInteger_m241D1FE7606567D0D51FB5BEBC1F4AA5B61DDD7A (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, const RuntimeMethod* method);
// System.Void UnityEngine.Animator::SetInteger(System.String,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5 (Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * __this, String_t* ___name0, int32_t ___value1, const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_up()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_down()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_right()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44 (const RuntimeMethod* method);
// UnityEngine.Vector3 UnityEngine.Vector3::get_left()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5 (const RuntimeMethod* method);
// System.Void GameManager::Action(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Action_m534E461B332BA8A5E91C21117C3BD156C2ED5CDB (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scanObj0, const RuntimeMethod* method);
// System.Void UnityEngine.Vector2::.ctor(System.Single,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9 * __this, float ___x0, float ___y1, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Multiply(UnityEngine.Vector2,System.Single)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method);
// System.Void UnityEngine.Rigidbody2D::set_velocity(UnityEngine.Vector2)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___value0, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Rigidbody2D::get_position()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2 (Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * __this, const RuntimeMethod* method);
// UnityEngine.Vector2 UnityEngine.Vector2::op_Implicit(UnityEngine.Vector3)
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline (Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  ___v0, const RuntimeMethod* method);
// System.Int32 UnityEngine.LayerMask::GetMask(System.String[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___layerNames0, const RuntimeMethod* method);
// UnityEngine.RaycastHit2D UnityEngine.Physics2D::Raycast(UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___origin0, Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___direction1, float ___distance2, int32_t ___layerMask3, const RuntimeMethod* method);
// UnityEngine.Collider2D UnityEngine.RaycastHit2D::get_collider()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563 (RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 * __this, const RuntimeMethod* method);
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405 (RuntimeObject * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QuestData>::.ctor()
inline void Dictionary_2__ctor_m3C7EDF0516CBDA06C0326B58D4AF47F643C6557E (Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void QuestManager::GenerateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestManager_GenerateData_m6963530F80E0F13F24DD002C61B4F731F373CDC3 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method);
// System.Void QuestData::.ctor(System.String,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestData__ctor_mE538EF663EF1C0935A1B787D81A856D8341E1A97 (QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * __this, String_t* ___name0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Npc1, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,QuestData>::Add(!0,!1)
inline void Dictionary_2_Add_mCE9BF9FF6CBC66D9979F225E6CC92029E979FBB4 (Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * __this, int32_t ___key0, QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 *, int32_t, QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,QuestData>::get_Item(!0)
inline QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC (Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * (*) (Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// System.Void QuestManager::NextQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestManager_NextQuest_mAE230FEEC87946C8AF54CA78E50066A67CC3F919 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063 (ScriptableObject_t4361E08CEBF052C650D3666C7CEC37EB31DE116A * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String[]>::.ctor()
inline void Dictionary_2__ctor_m1A2F684C82C65D47E88ACA4163DA6CF2FE7DF16B (Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Sprite>::.ctor()
inline void Dictionary_2__ctor_m583FBCC00FD86C7405333ABD8349CDB1A3D7E6C1 (Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * __this, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 *, const RuntimeMethod*))Dictionary_2__ctor_mE7F9D51201F5A72BF4995CA0F3F0E866DB21E638_gshared)(__this, method);
}
// System.Void TalkManager::GeneratorData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TalkManager_GeneratorData_mF1922C6F1F314D545B20875D86199D4F2CBA7D87 (TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,System.String[]>::Add(!0,!1)
inline void Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A (Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * __this, int32_t ___key0, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 *, int32_t, StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Void System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Sprite>::Add(!0,!1)
inline void Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8 (Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * __this, int32_t ___key0, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * ___value1, const RuntimeMethod* method)
{
	((  void (*) (Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 *, int32_t, Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 *, const RuntimeMethod*))Dictionary_2_Add_m39BC00F21EE9459BB8DEF5479F95F79C5C740682_gshared)(__this, ___key0, ___value1, method);
}
// System.Boolean System.Collections.Generic.Dictionary`2<System.Int32,System.String[]>::ContainsKey(!0)
inline bool Dictionary_2_ContainsKey_m4BC5DB0783708D45CD4E5F0F83A345791469C95B (Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  bool (*) (Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 *, int32_t, const RuntimeMethod*))Dictionary_2_ContainsKey_mE6DB9458466D0F98B67E2C6CAEFABBF9576AC4D7_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,System.String[]>::get_Item(!0)
inline StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* Dictionary_2_get_Item_m286B4EB3D3737AA642A75EFC7009F74541921ECC (Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* (*) (Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// !1 System.Collections.Generic.Dictionary`2<System.Int32,UnityEngine.Sprite>::get_Item(!0)
inline Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Dictionary_2_get_Item_mF866B40A69A3606938685C9451A260939CA6B5D4 (Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * __this, int32_t ___key0, const RuntimeMethod* method)
{
	return ((  Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * (*) (Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 *, int32_t, const RuntimeMethod*))Dictionary_2_get_Item_mD43F161D674E625D0DA61EE00A30B1EF39ECA8C6_gshared)(__this, ___key0, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.UI.Text>()
inline Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137 (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// !!0 UnityEngine.Component::GetComponent<UnityEngine.AudioSource>()
inline AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 * __this, const RuntimeMethod* method)
{
	return ((  AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * (*) (Component_t62FBC8D2420DA4BE9037AFE430740F6B3EECA684 *, const RuntimeMethod*))Component_GetComponent_TisRuntimeObject_m69D9C576D6DD024C709E29EEADBC8041299A3AA7_gshared)(__this, method);
}
// System.Void UnityEngine.MonoBehaviour::CancelInvoke()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, const RuntimeMethod* method);
// System.Void TypeEffect::EffectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeEffect_EffectEnd_mD82EA7577352793CDA69C508B4F4FED0B39F3BB0 (TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * __this, const RuntimeMethod* method);
// System.Void TypeEffect::EffectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeEffect_EffectStart_mAB4F3CC1732D9951EC30D3D3C84387C785ADE881 (TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.MonoBehaviour::Invoke(System.String,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4 (MonoBehaviour_t37A501200D970A8257124B0EAE00A0FF3DDC354A * __this, String_t* ___methodName0, float ___time1, const RuntimeMethod* method);
// System.Char System.String::get_Chars(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70 (String_t* __this, int32_t ___index0, const RuntimeMethod* method);
// System.String System.Char::ToString()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8 (Il2CppChar* __this, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B (String_t* ___str00, String_t* ___str11, const RuntimeMethod* method);
// System.Void UnityEngine.AudioSource::Play()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1 (AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * __this, const RuntimeMethod* method);
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
// System.Void GameManager::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Start_m26461AEF27E44DB8FECCBC19D6C9E228B658BF8E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// GameLoad();
		GameManager_GameLoad_m62BDF8C3DD57DEAC38A2843F95784818F68B02B9(__this, /*hidden argument*/NULL);
		// questText.text = questManager.CheckQuest();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_questText_10();
		QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * L_1 = __this->get_questManager_12();
		NullCheck(L_1);
		String_t* L_2;
		L_2 = QuestManager_CheckQuest_mE5A3FF5C87424F715B368E47B51EA22A378B5CF2(L_1, /*hidden argument*/NULL);
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, L_2);
		// }
		return;
	}
}
// System.Void GameManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Awake_m22F42B2A82708B10F652CAD8F2E0A4767110FF30 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisQuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1_m8AF292FF69A6C8E047B63FC2205E82830BD939E1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponentInChildren_TisTalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7_mAA0891FD3D57C7BBA48E88C6F9341D699620EAC3_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// talkManager = GetComponentInChildren<TalkManager>();
		TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * L_0;
		L_0 = Component_GetComponentInChildren_TisTalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7_mAA0891FD3D57C7BBA48E88C6F9341D699620EAC3(__this, /*hidden argument*/Component_GetComponentInChildren_TisTalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7_mAA0891FD3D57C7BBA48E88C6F9341D699620EAC3_RuntimeMethod_var);
		__this->set_talkManager_4(L_0);
		// questManager = GetComponentInChildren<QuestManager>();
		QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * L_1;
		L_1 = Component_GetComponentInChildren_TisQuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1_m8AF292FF69A6C8E047B63FC2205E82830BD939E1(__this, /*hidden argument*/Component_GetComponentInChildren_TisQuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1_m8AF292FF69A6C8E047B63FC2205E82830BD939E1_RuntimeMethod_var);
		__this->set_questManager_12(L_1);
		// }
		return;
	}
}
// System.Void GameManager::Update()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Update_mC9303BA7C3117BD861F49F8E36151CC52117E6C1 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (Input.GetButtonDown("Cancel"))
		bool L_0;
		L_0 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral93717CD8FCD45BAB4F15D3BACC989A6A93BA2674, /*hidden argument*/NULL);
		if (!L_0)
		{
			goto IL_0012;
		}
	}
	{
		// SubMenuActive();
		GameManager_SubMenuActive_m5594B250B8494F9C4CD2D24BB37DC3698A5D553E(__this, /*hidden argument*/NULL);
	}

IL_0012:
	{
		// }
		return;
	}
}
// System.Void GameManager::SubMenuActive()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_SubMenuActive_m5594B250B8494F9C4CD2D24BB37DC3698A5D553E (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// if (menuSet.activeSelf)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_menuSet_16();
		NullCheck(L_0);
		bool L_1;
		L_1 = GameObject_get_activeSelf_m4865097C24FB29F3C31F5C30619AF242297F23EE(L_0, /*hidden argument*/NULL);
		if (!L_1)
		{
			goto IL_001a;
		}
	}
	{
		// menuSet.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_2 = __this->get_menuSet_16();
		NullCheck(L_2);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_2, (bool)0, /*hidden argument*/NULL);
		return;
	}

IL_001a:
	{
		// menuSet.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_3 = __this->get_menuSet_16();
		NullCheck(L_3);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_3, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Action(UnityEngine.GameObject)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Action_m534E461B332BA8A5E91C21117C3BD156C2ED5CDB (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * ___scanObj0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&GameObject_GetComponent_TisObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2_mA04D192E772E2814692E6114A8FB2D2E7B84491C_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAC468AF9D2E3616B15D3EE404820EE9AA650C879);
		s_Il2CppMethodInitialized = true;
	}
	ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2 * V_0 = NULL;
	{
		// scanObject = scanObj;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = ___scanObj0;
		__this->set_scanObject_13(L_0);
		// ObjData objdata = scanObject.GetComponent<ObjData>();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_scanObject_13();
		NullCheck(L_1);
		ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2 * L_2;
		L_2 = GameObject_GetComponent_TisObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2_mA04D192E772E2814692E6114A8FB2D2E7B84491C(L_1, /*hidden argument*/GameObject_GetComponent_TisObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2_mA04D192E772E2814692E6114A8FB2D2E7B84491C_RuntimeMethod_var);
		V_0 = L_2;
		// Talk(objdata.id, objdata.isNPC);
		ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2 * L_3 = V_0;
		NullCheck(L_3);
		int32_t L_4 = L_3->get_id_4();
		ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2 * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->get_isNPC_5();
		GameManager_Talk_m675B5BCF3F39EC57DC6F4F9D45E6575D95684217(__this, L_4, L_6, /*hidden argument*/NULL);
		// talkPanel.SetBool("isShow", isAction);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_7 = __this->get_talkPanel_5();
		bool L_8 = __this->get_isAction_14();
		NullCheck(L_7);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_7, _stringLiteralAC468AF9D2E3616B15D3EE404820EE9AA650C879, L_8, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::Talk(System.Int32,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_Talk_m675B5BCF3F39EC57DC6F4F9D45E6575D95684217 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, int32_t ___id0, bool ___isNPC1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3A026E4436482F6256A844099B6435DD23F26AC3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7DAF49D5592CEEDA50EDEF0518F33EA2C5219BDB);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral89EAD62D6C5ACF153AFBD0BD586A86115A628C29);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	int32_t V_0 = 0;
	String_t* V_1 = NULL;
	{
		// int questTalkIndex = 0;
		V_0 = 0;
		// string talkData = "";
		V_1 = _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709;
		// if (talk.isAnim)
		TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * L_0 = __this->get_talk_9();
		NullCheck(L_0);
		bool L_1 = L_0->get_isAnim_5();
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// talk.setMsg("");
		TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * L_2 = __this->get_talk_9();
		NullCheck(L_2);
		TypeEffect_setMsg_m995884E73F813846AE2049D6DED75CC6AAB7A298(L_2, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_0026:
	{
		// questTalkIndex = questManager.GetQuestTalkIndex(id);
		QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * L_3 = __this->get_questManager_12();
		int32_t L_4 = ___id0;
		NullCheck(L_3);
		int32_t L_5;
		L_5 = QuestManager_GetQuestTalkIndex_mFBD56AE85DC6B1F96478AB4019BCF73B5323A07D(L_3, L_4, /*hidden argument*/NULL);
		V_0 = L_5;
		// talkData = talkManager.GetTalk(id + questTalkIndex, talkindex);
		TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * L_6 = __this->get_talkManager_4();
		int32_t L_7 = ___id0;
		int32_t L_8 = V_0;
		int32_t L_9 = __this->get_talkindex_15();
		NullCheck(L_6);
		String_t* L_10;
		L_10 = TalkManager_GetTalk_mB8103F7173BF61AF7B5B25CA3A41063367D9BFBA(L_6, ((int32_t)il2cpp_codegen_add((int32_t)L_7, (int32_t)L_8)), L_9, /*hidden argument*/NULL);
		V_1 = L_10;
		// if (talkData == null)
		String_t* L_11 = V_1;
		if (L_11)
		{
			goto IL_0071;
		}
	}
	{
		// isAction = false;
		__this->set_isAction_14((bool)0);
		// talkindex = 0;
		__this->set_talkindex_15(0);
		// questText.text = questManager.CheckQuest(id);
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_12 = __this->get_questText_10();
		QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * L_13 = __this->get_questManager_12();
		int32_t L_14 = ___id0;
		NullCheck(L_13);
		String_t* L_15;
		L_15 = QuestManager_CheckQuest_m98B81C1888B5B585D65FD0A960BCF32A936E87E6(L_13, L_14, /*hidden argument*/NULL);
		NullCheck(L_12);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_12, L_15);
		// return;
		return;
	}

IL_0071:
	{
		// if (isNPC)
		bool L_16 = ___isNPC1;
		if (!L_16)
		{
			goto IL_0155;
		}
	}
	{
		// talk.setMsg(talkData.Split(':')[0]);
		TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * L_17 = __this->get_talk_9();
		String_t* L_18 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_19 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_20 = L_19;
		NullCheck(L_20);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_18);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21;
		L_21 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_18, L_20, /*hidden argument*/NULL);
		NullCheck(L_21);
		int32_t L_22 = 0;
		String_t* L_23 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_22));
		NullCheck(L_17);
		TypeEffect_setMsg_m995884E73F813846AE2049D6DED75CC6AAB7A298(L_17, L_23, /*hidden argument*/NULL);
		// portraitImg.sprite = talkManager.GetPortrait(id, int.Parse(talkData.Split(':')[1]));
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_24 = __this->get_portraitImg_6();
		TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * L_25 = __this->get_talkManager_4();
		int32_t L_26 = ___id0;
		String_t* L_27 = V_1;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_28 = (CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34*)SZArrayNew(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34_il2cpp_TypeInfo_var, (uint32_t)1);
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_29 = L_28;
		NullCheck(L_29);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(0), (Il2CppChar)((int32_t)58));
		NullCheck(L_27);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_30;
		L_30 = String_Split_m2C74DC2B85B322998094BEDE787C378822E1F28B(L_27, L_29, /*hidden argument*/NULL);
		NullCheck(L_30);
		int32_t L_31 = 1;
		String_t* L_32 = (L_30)->GetAt(static_cast<il2cpp_array_size_t>(L_31));
		int32_t L_33;
		L_33 = Int32_Parse_mE5D220FEA7F0BFB1B220B2A30797D7DD83ACF22C(L_32, /*hidden argument*/NULL);
		NullCheck(L_25);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_34;
		L_34 = TalkManager_GetPortrait_m91649E396C2E610EC9D79BA1603F6D293A02E05B(L_25, L_26, L_33, /*hidden argument*/NULL);
		NullCheck(L_24);
		Image_set_sprite_m55C50F18ABA0A98E926FC777F7D07FA18A7D04E4(L_24, L_34, /*hidden argument*/NULL);
		// if (id == 1000)
		int32_t L_35 = ___id0;
		if ((!(((uint32_t)L_35) == ((uint32_t)((int32_t)1000)))))
		{
			goto IL_00de;
		}
	}
	{
		// nameText.text = "�糪";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_36 = __this->get_nameText_11();
		NullCheck(L_36);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_36, _stringLiteral89EAD62D6C5ACF153AFBD0BD586A86115A628C29);
		goto IL_00f6;
	}

IL_00de:
	{
		// else if (id == 2000)
		int32_t L_37 = ___id0;
		if ((!(((uint32_t)L_37) == ((uint32_t)((int32_t)2000)))))
		{
			goto IL_00f6;
		}
	}
	{
		// nameText.text = "�絵";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_38 = __this->get_nameText_11();
		NullCheck(L_38);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_38, _stringLiteral7DAF49D5592CEEDA50EDEF0518F33EA2C5219BDB);
	}

IL_00f6:
	{
		// portraitImg.color = new Color(1, 1, 1, 1);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_39 = __this->get_portraitImg_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_40;
		memset((&L_40), 0, sizeof(L_40));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_40), (1.0f), (1.0f), (1.0f), (1.0f), /*hidden argument*/NULL);
		NullCheck(L_39);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_39, L_40);
		// if(prevPortrait != portraitImg.sprite)
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_41 = __this->get_prevPortrait_8();
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_42 = __this->get_portraitImg_6();
		NullCheck(L_42);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_43;
		L_43 = Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline(L_42, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_44;
		L_44 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_41, L_43, /*hidden argument*/NULL);
		if (!L_44)
		{
			goto IL_0195;
		}
	}
	{
		// portraitAnim.SetTrigger("doEffect");
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_45 = __this->get_portraitAnim_7();
		NullCheck(L_45);
		Animator_SetTrigger_m2D79D155CABD81B1CC75EFC35D90508B58D7211C(L_45, _stringLiteral3A026E4436482F6256A844099B6435DD23F26AC3, /*hidden argument*/NULL);
		// prevPortrait = portraitImg.sprite;
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_46 = __this->get_portraitImg_6();
		NullCheck(L_46);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_47;
		L_47 = Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline(L_46, /*hidden argument*/NULL);
		__this->set_prevPortrait_8(L_47);
		// }
		goto IL_0195;
	}

IL_0155:
	{
		// nameText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_48 = __this->get_nameText_11();
		NullCheck(L_48);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_48, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// talk.setMsg(talkData);
		TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * L_49 = __this->get_talk_9();
		String_t* L_50 = V_1;
		NullCheck(L_49);
		TypeEffect_setMsg_m995884E73F813846AE2049D6DED75CC6AAB7A298(L_49, L_50, /*hidden argument*/NULL);
		// portraitImg.color = new Color(1, 1, 1, 0);
		Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * L_51 = __this->get_portraitImg_6();
		Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  L_52;
		memset((&L_52), 0, sizeof(L_52));
		Color__ctor_m679019E6084BF7A6F82590F66F5F695F6A50ECC5((&L_52), (1.0f), (1.0f), (1.0f), (0.0f), /*hidden argument*/NULL);
		NullCheck(L_51);
		VirtActionInvoker1< Color_tF40DAF76C04FFECF3FE6024F85A294741C9CC659  >::Invoke(23 /* System.Void UnityEngine.UI.Graphic::set_color(UnityEngine.Color) */, L_51, L_52);
	}

IL_0195:
	{
		// isAction = true;
		__this->set_isAction_14((bool)1);
		// talkindex++;
		int32_t L_53 = __this->get_talkindex_15();
		__this->set_talkindex_15(((int32_t)il2cpp_codegen_add((int32_t)L_53, (int32_t)1)));
		// }
		return;
	}
}
// System.Void GameManager::GameSave()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameSave_m023A725C090C3981FFDDF00BC3A9799051ACA629 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2117700226743514258D2D192B5E8AE20A4D45A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82CBDD3F0D1787F9C693786D5BFF7A36DCD7A87C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA34127EA31FE07B0E48A9D57B087C04ED2591FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBDA23D620005573917FE49BE31DDB15E46F3E14F);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC45203D5D85FE796834CAFFB0995A4FC77975559);
		s_Il2CppMethodInitialized = true;
	}
	{
		// Debug.Log("����");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(_stringLiteralBDA23D620005573917FE49BE31DDB15E46F3E14F, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("PlayerX", player.transform.position.x);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_player_17();
		NullCheck(L_0);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_1;
		L_1 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_0, /*hidden argument*/NULL);
		NullCheck(L_1);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_2;
		L_2 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_1, /*hidden argument*/NULL);
		float L_3 = L_2.get_x_2();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteralC45203D5D85FE796834CAFFB0995A4FC77975559, L_3, /*hidden argument*/NULL);
		// PlayerPrefs.SetFloat("PlayerY", player.transform.position.y);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_4 = __this->get_player_17();
		NullCheck(L_4);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_5;
		L_5 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_4, /*hidden argument*/NULL);
		NullCheck(L_5);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_6;
		L_6 = Transform_get_position_m40A8A9895568D56FFC687B57F30E8D53CB5EA341(L_5, /*hidden argument*/NULL);
		float L_7 = L_6.get_y_3();
		PlayerPrefs_SetFloat_mF660C042621E97A05AD99134DBDD9B1205CDD214(_stringLiteralA34127EA31FE07B0E48A9D57B087C04ED2591FA7, L_7, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("QuestId", questManager.questId);
		QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * L_8 = __this->get_questManager_12();
		NullCheck(L_8);
		int32_t L_9 = L_8->get_questId_4();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral2117700226743514258D2D192B5E8AE20A4D45A0, L_9, /*hidden argument*/NULL);
		// PlayerPrefs.SetInt("QuestActionId", questManager.questActionIndex);
		QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * L_10 = __this->get_questManager_12();
		NullCheck(L_10);
		int32_t L_11 = L_10->get_questActionIndex_5();
		PlayerPrefs_SetInt_m0C5C977E960B9CA8F9AB73AF4129C3DCABD067B6(_stringLiteral82CBDD3F0D1787F9C693786D5BFF7A36DCD7A87C, L_11, /*hidden argument*/NULL);
		// PlayerPrefs.Save();
		PlayerPrefs_Save_m2C1E628FA335095CD88D0DA1CB50ACC924667EEC(/*hidden argument*/NULL);
		// menuSet.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_12 = __this->get_menuSet_16();
		NullCheck(L_12);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_12, (bool)0, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameLoad()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameLoad_m62BDF8C3DD57DEAC38A2843F95784818F68B02B9 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2117700226743514258D2D192B5E8AE20A4D45A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral82CBDD3F0D1787F9C693786D5BFF7A36DCD7A87C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA34127EA31FE07B0E48A9D57B087C04ED2591FA7);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC45203D5D85FE796834CAFFB0995A4FC77975559);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	float V_1 = 0.0f;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		// if (!PlayerPrefs.HasKey("PlayerX"))
		bool L_0;
		L_0 = PlayerPrefs_HasKey_m48BE5886380B51AB495B91C9A26115B7CB958A92(_stringLiteralC45203D5D85FE796834CAFFB0995A4FC77975559, /*hidden argument*/NULL);
		if (L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return;
		return;
	}

IL_000d:
	{
		// float x = PlayerPrefs.GetFloat("PlayerX");
		float L_1;
		L_1 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteralC45203D5D85FE796834CAFFB0995A4FC77975559, /*hidden argument*/NULL);
		V_0 = L_1;
		// float y = PlayerPrefs.GetFloat("PlayerY");
		float L_2;
		L_2 = PlayerPrefs_GetFloat_mE1D320A00FD515BF31529093C3A4144F04AC0471(_stringLiteralA34127EA31FE07B0E48A9D57B087C04ED2591FA7, /*hidden argument*/NULL);
		V_1 = L_2;
		// int questId = PlayerPrefs.GetInt("QuestId");
		int32_t L_3;
		L_3 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral2117700226743514258D2D192B5E8AE20A4D45A0, /*hidden argument*/NULL);
		V_2 = L_3;
		// int questActionIndex = PlayerPrefs.GetInt("QuestActionId");
		int32_t L_4;
		L_4 = PlayerPrefs_GetInt_m6BCF9F844298D1810A68BAF23ECBA68C6960A986(_stringLiteral82CBDD3F0D1787F9C693786D5BFF7A36DCD7A87C, /*hidden argument*/NULL);
		V_3 = L_4;
		// player.transform.position = new Vector3(x, y, 0);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_5 = __this->get_player_17();
		NullCheck(L_5);
		Transform_tA8193BB29D4D2C7EC04918F3ED1816345186C3F1 * L_6;
		L_6 = GameObject_get_transform_m16A80BB92B6C8C5AB696E447014D45EDF1E4DE34(L_5, /*hidden argument*/NULL);
		float L_7 = V_0;
		float L_8 = V_1;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_9;
		memset((&L_9), 0, sizeof(L_9));
		Vector3__ctor_m57495F692C6CE1CEF278CAD9A98221165D37E636_inline((&L_9), L_7, L_8, (0.0f), /*hidden argument*/NULL);
		NullCheck(L_6);
		Transform_set_position_mB169E52D57EEAC1E3F22C5395968714E4F00AC91(L_6, L_9, /*hidden argument*/NULL);
		// questManager.questId = questId;
		QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * L_10 = __this->get_questManager_12();
		int32_t L_11 = V_2;
		NullCheck(L_10);
		L_10->set_questId_4(L_11);
		// questManager.questActionIndex = questActionIndex;
		QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * L_12 = __this->get_questManager_12();
		int32_t L_13 = V_3;
		NullCheck(L_12);
		L_12->set_questActionIndex_5(L_13);
		// questManager.ControllObject();
		QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * L_14 = __this->get_questManager_12();
		NullCheck(L_14);
		QuestManager_ControllObject_mFD5E3C97363C800D0CA1A1CDCBD2597D714D1BB6(L_14, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::GameExit()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager_GameExit_m10BDD1B3BE53C36A4CD1FFC620AE233B50C8AB53 (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
{
	{
		// Application.Quit();
		Application_Quit_m8D720E5092786C2EE32310D85FE61C253D3B1F2A(/*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void GameManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void GameManager__ctor_mE8666F6D0CA9C31E16B719F79780DC4B0245B64D (GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * __this, const RuntimeMethod* method)
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
// System.Void ObjData::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ObjData__ctor_m6C21E504C5DBD5DBF519634EC95D864151B85219 (ObjData_tAF2BF1C48E7D6924BFC3DFC5A518249BC4577ED2 * __this, const RuntimeMethod* method)
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
// System.Void PlayerController::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_Awake_m23059564DCFDD324EA9DB966473251896647CD23 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// rigid = GetComponent<Rigidbody2D>();
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_0;
		L_0 = Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487(__this, /*hidden argument*/Component_GetComponent_TisRigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5_m4E9E5E48D529420FAC117599819C02DB73FC7487_RuntimeMethod_var);
		__this->set_rigid_12(L_0);
		// anim = GetComponent<Animator>();
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_1;
		L_1 = Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F(__this, /*hidden argument*/Component_GetComponent_TisAnimator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149_m56C584BE9A3B866D54FAEE0529E28C8D1E57989F_RuntimeMethod_var);
		__this->set_anim_11(L_1);
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
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral34E6461C9019C11C1428106B20B1A5E63C01E1A6);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral366F9D17452DCF31683FFF9D9F3BDF5DF931BBD2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDB8272F217F5D62DB35D08CC5F89FC5042F7471B);
		s_Il2CppMethodInitialized = true;
	}
	bool V_0 = false;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B2_0 = NULL;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B1_0 = NULL;
	float G_B3_0 = 0.0f;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B3_1 = NULL;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B5_0 = NULL;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B4_0 = NULL;
	float G_B6_0 = 0.0f;
	PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * G_B6_1 = NULL;
	int32_t G_B12_0 = 0;
	int32_t G_B18_0 = 0;
	int32_t G_B24_0 = 0;
	int32_t G_B30_0 = 0;
	{
		// h = gameManager.isAction ? 0 : Input.GetAxisRaw("Horizontal")+ right_Value + left_Value;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_0 = __this->get_gameManager_10();
		NullCheck(L_0);
		bool L_1 = L_0->get_isAction_14();
		G_B1_0 = __this;
		if (L_1)
		{
			G_B2_0 = __this;
			goto IL_002a;
		}
	}
	{
		float L_2;
		L_2 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		int32_t L_3 = __this->get_right_Value_15();
		int32_t L_4 = __this->get_left_Value_16();
		G_B3_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_2, (float)((float)((float)L_3)))), (float)((float)((float)L_4))));
		G_B3_1 = G_B1_0;
		goto IL_002f;
	}

IL_002a:
	{
		G_B3_0 = (0.0f);
		G_B3_1 = G_B2_0;
	}

IL_002f:
	{
		NullCheck(G_B3_1);
		G_B3_1->set_h_5(G_B3_0);
		// v = gameManager.isAction ? 0 : Input.GetAxisRaw("Vertical")+ up_Value + down_Value;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_5 = __this->get_gameManager_10();
		NullCheck(L_5);
		bool L_6 = L_5->get_isAction_14();
		G_B4_0 = __this;
		if (L_6)
		{
			G_B5_0 = __this;
			goto IL_005e;
		}
	}
	{
		float L_7;
		L_7 = Input_GetAxisRaw_mC07AC23FD8D04A69CDB07C6399C93FFFAEB0FC5B(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		int32_t L_8 = __this->get_up_Value_13();
		int32_t L_9 = __this->get_down_Value_14();
		G_B6_0 = ((float)il2cpp_codegen_add((float)((float)il2cpp_codegen_add((float)L_7, (float)((float)((float)L_8)))), (float)((float)((float)L_9))));
		G_B6_1 = G_B4_0;
		goto IL_0063;
	}

IL_005e:
	{
		G_B6_0 = (0.0f);
		G_B6_1 = G_B5_0;
	}

IL_0063:
	{
		NullCheck(G_B6_1);
		G_B6_1->set_v_6(G_B6_0);
		// bool hDown = gameManager.isAction ? false : Input.GetButtonDown("Horizontal") || right_Down || left_Down;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_10 = __this->get_gameManager_10();
		NullCheck(L_10);
		bool L_11 = L_10->get_isAction_14();
		if (L_11)
		{
			goto IL_0094;
		}
	}
	{
		bool L_12;
		L_12 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_0091;
		}
	}
	{
		bool L_13 = __this->get_right_Down_20();
		if (L_13)
		{
			goto IL_0091;
		}
	}
	{
		bool L_14 = __this->get_left_Down_19();
		G_B12_0 = ((int32_t)(L_14));
		goto IL_0095;
	}

IL_0091:
	{
		G_B12_0 = 1;
		goto IL_0095;
	}

IL_0094:
	{
		G_B12_0 = 0;
	}

IL_0095:
	{
		V_0 = (bool)G_B12_0;
		// bool vDown = gameManager.isAction ? false : Input.GetButtonDown("Vertical") || up_Down || down_Down;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_15 = __this->get_gameManager_10();
		NullCheck(L_15);
		bool L_16 = L_15->get_isAction_14();
		if (L_16)
		{
			goto IL_00c2;
		}
	}
	{
		bool L_17;
		L_17 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		if (L_17)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_18 = __this->get_up_Down_17();
		if (L_18)
		{
			goto IL_00bf;
		}
	}
	{
		bool L_19 = __this->get_down_Down_18();
		G_B18_0 = ((int32_t)(L_19));
		goto IL_00c3;
	}

IL_00bf:
	{
		G_B18_0 = 1;
		goto IL_00c3;
	}

IL_00c2:
	{
		G_B18_0 = 0;
	}

IL_00c3:
	{
		V_1 = (bool)G_B18_0;
		// bool hUp = gameManager.isAction ? false : Input.GetButtonUp("Horizontal")|| right_Up || left_Up;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_20 = __this->get_gameManager_10();
		NullCheck(L_20);
		bool L_21 = L_20->get_isAction_14();
		if (L_21)
		{
			goto IL_00f0;
		}
	}
	{
		bool L_22;
		L_22 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteral7F8C014BD4810CC276D0F9F81A1E759C7B098B1E, /*hidden argument*/NULL);
		if (L_22)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_23 = __this->get_right_Up_23();
		if (L_23)
		{
			goto IL_00ed;
		}
	}
	{
		bool L_24 = __this->get_left_Up_24();
		G_B24_0 = ((int32_t)(L_24));
		goto IL_00f1;
	}

IL_00ed:
	{
		G_B24_0 = 1;
		goto IL_00f1;
	}

IL_00f0:
	{
		G_B24_0 = 0;
	}

IL_00f1:
	{
		V_2 = (bool)G_B24_0;
		// bool vUp = gameManager.isAction ? false : Input.GetButtonUp("Vertical") || up_Up || down_Up;
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_25 = __this->get_gameManager_10();
		NullCheck(L_25);
		bool L_26 = L_25->get_isAction_14();
		if (L_26)
		{
			goto IL_011e;
		}
	}
	{
		bool L_27;
		L_27 = Input_GetButtonUp_m15AA6B42BD0DDCC7802346E49F30653D750260DD(_stringLiteral265E15F1F86F1C766555899D5771CF29055DE75A, /*hidden argument*/NULL);
		if (L_27)
		{
			goto IL_011b;
		}
	}
	{
		bool L_28 = __this->get_up_Up_21();
		if (L_28)
		{
			goto IL_011b;
		}
	}
	{
		bool L_29 = __this->get_down_Up_22();
		G_B30_0 = ((int32_t)(L_29));
		goto IL_011f;
	}

IL_011b:
	{
		G_B30_0 = 1;
		goto IL_011f;
	}

IL_011e:
	{
		G_B30_0 = 0;
	}

IL_011f:
	{
		V_3 = (bool)G_B30_0;
		// if (hDown)
		bool L_30 = V_0;
		if (!L_30)
		{
			goto IL_012c;
		}
	}
	{
		// isHorizonmove = true;
		__this->set_isHorizonmove_7((bool)1);
		goto IL_0153;
	}

IL_012c:
	{
		// else if (vDown)
		bool L_31 = V_1;
		if (!L_31)
		{
			goto IL_0138;
		}
	}
	{
		// isHorizonmove = false;
		__this->set_isHorizonmove_7((bool)0);
		goto IL_0153;
	}

IL_0138:
	{
		// else if (hUp || vUp)
		bool L_32 = V_2;
		bool L_33 = V_3;
		if (!((int32_t)((int32_t)L_32|(int32_t)L_33)))
		{
			goto IL_0153;
		}
	}
	{
		// isHorizonmove = h != 0;
		float L_34 = __this->get_h_5();
		__this->set_isHorizonmove_7((bool)((((int32_t)((((float)L_34) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0));
	}

IL_0153:
	{
		// if (anim.GetInteger("hAxisRaw") != h)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_35 = __this->get_anim_11();
		NullCheck(L_35);
		int32_t L_36;
		L_36 = Animator_GetInteger_m241D1FE7606567D0D51FB5BEBC1F4AA5B61DDD7A(L_35, _stringLiteral34E6461C9019C11C1428106B20B1A5E63C01E1A6, /*hidden argument*/NULL);
		float L_37 = __this->get_h_5();
		if ((((float)((float)((float)L_36))) == ((float)L_37)))
		{
			goto IL_0196;
		}
	}
	{
		// anim.SetBool("isChange", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_38 = __this->get_anim_11();
		NullCheck(L_38);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_38, _stringLiteralDB8272F217F5D62DB35D08CC5F89FC5042F7471B, (bool)1, /*hidden argument*/NULL);
		// anim.SetInteger("hAxisRaw", (int)h);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_39 = __this->get_anim_11();
		float L_40 = __this->get_h_5();
		NullCheck(L_39);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_39, _stringLiteral34E6461C9019C11C1428106B20B1A5E63C01E1A6, ((int32_t)((int32_t)L_40)), /*hidden argument*/NULL);
		// }
		goto IL_01ea;
	}

IL_0196:
	{
		// else if(anim.GetInteger("vAxisRaw") != v)
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_41 = __this->get_anim_11();
		NullCheck(L_41);
		int32_t L_42;
		L_42 = Animator_GetInteger_m241D1FE7606567D0D51FB5BEBC1F4AA5B61DDD7A(L_41, _stringLiteral366F9D17452DCF31683FFF9D9F3BDF5DF931BBD2, /*hidden argument*/NULL);
		float L_43 = __this->get_v_6();
		if ((((float)((float)((float)L_42))) == ((float)L_43)))
		{
			goto IL_01d9;
		}
	}
	{
		// anim.SetBool("isChange", true);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_44 = __this->get_anim_11();
		NullCheck(L_44);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_44, _stringLiteralDB8272F217F5D62DB35D08CC5F89FC5042F7471B, (bool)1, /*hidden argument*/NULL);
		// anim.SetInteger("vAxisRaw", (int)v);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_45 = __this->get_anim_11();
		float L_46 = __this->get_v_6();
		NullCheck(L_45);
		Animator_SetInteger_mFB04A03AF6C24978BF2BDE9161243F8F6B9762C5(L_45, _stringLiteral366F9D17452DCF31683FFF9D9F3BDF5DF931BBD2, ((int32_t)((int32_t)L_46)), /*hidden argument*/NULL);
		// }
		goto IL_01ea;
	}

IL_01d9:
	{
		// anim.SetBool("isChange", false);
		Animator_t9DD1D43680A61D65A3C98C6EFF559709DC9CE149 * L_47 = __this->get_anim_11();
		NullCheck(L_47);
		Animator_SetBool_m34E2E9785A47A3AE94E804004425C333C36CCD43(L_47, _stringLiteralDB8272F217F5D62DB35D08CC5F89FC5042F7471B, (bool)0, /*hidden argument*/NULL);
	}

IL_01ea:
	{
		// if (vDown && v == 1)
		bool L_48 = V_1;
		if (!L_48)
		{
			goto IL_0207;
		}
	}
	{
		float L_49 = __this->get_v_6();
		if ((!(((float)L_49) == ((float)(1.0f)))))
		{
			goto IL_0207;
		}
	}
	{
		// dirVec = Vector3.up;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_50;
		L_50 = Vector3_get_up_m38AECA68388D446CFADDD022B0B867293044EA50(/*hidden argument*/NULL);
		__this->set_dirVec_8(L_50);
		goto IL_025c;
	}

IL_0207:
	{
		// else if(vDown && v != 1)
		bool L_51 = V_1;
		if (!L_51)
		{
			goto IL_0224;
		}
	}
	{
		float L_52 = __this->get_v_6();
		if ((((float)L_52) == ((float)(1.0f))))
		{
			goto IL_0224;
		}
	}
	{
		// dirVec = Vector3.down;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_53;
		L_53 = Vector3_get_down_mFA85B870E184121D30F66395BB183ECAB9DD8629(/*hidden argument*/NULL);
		__this->set_dirVec_8(L_53);
		goto IL_025c;
	}

IL_0224:
	{
		// else if (hDown && h == 1)
		bool L_54 = V_0;
		if (!L_54)
		{
			goto IL_0241;
		}
	}
	{
		float L_55 = __this->get_h_5();
		if ((!(((float)L_55) == ((float)(1.0f)))))
		{
			goto IL_0241;
		}
	}
	{
		// dirVec = Vector3.right;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_56;
		L_56 = Vector3_get_right_mF5A51F81961474E0A7A31C2757FD00921FB79C44(/*hidden argument*/NULL);
		__this->set_dirVec_8(L_56);
		goto IL_025c;
	}

IL_0241:
	{
		// else if (hDown && h != 1)
		bool L_57 = V_0;
		if (!L_57)
		{
			goto IL_025c;
		}
	}
	{
		float L_58 = __this->get_h_5();
		if ((((float)L_58) == ((float)(1.0f))))
		{
			goto IL_025c;
		}
	}
	{
		// dirVec = Vector3.left;
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_59;
		L_59 = Vector3_get_left_mDAB848C352B9D30E2DDDA7F56308ABC32A4315A5(/*hidden argument*/NULL);
		__this->set_dirVec_8(L_59);
	}

IL_025c:
	{
		// if (Input.GetButtonDown("Jump") && scanObject != null)
		bool L_60;
		L_60 = Input_GetButtonDown_m2001112EBCA3D5C7B0344EF62C896667F7E67DDF(_stringLiteral70253F929BCE7F81DF1A5A1C0900BED744E86C9C, /*hidden argument*/NULL);
		if (!L_60)
		{
			goto IL_0287;
		}
	}
	{
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_61 = __this->get_scanObject_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_62;
		L_62 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_61, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_62)
		{
			goto IL_0287;
		}
	}
	{
		// gameManager.Action(scanObject);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_63 = __this->get_gameManager_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_64 = __this->get_scanObject_9();
		NullCheck(L_63);
		GameManager_Action_m534E461B332BA8A5E91C21117C3BD156C2ED5CDB(L_63, L_64, /*hidden argument*/NULL);
	}

IL_0287:
	{
		// up_Down = false;
		__this->set_up_Down_17((bool)0);
		// down_Down = false;
		__this->set_down_Down_18((bool)0);
		// left_Down = false;
		__this->set_left_Down_19((bool)0);
		// right_Down = false;
		__this->set_right_Down_20((bool)0);
		// up_Up = false;
		__this->set_up_Up_21((bool)0);
		// down_Up = false;
		__this->set_down_Up_22((bool)0);
		// right_Up = false;
		__this->set_right_Up_23((bool)0);
		// left_Up = false;
		__this->set_left_Up_24((bool)0);
		// }
		return;
	}
}
// System.Void PlayerController::FixedUpdate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_FixedUpdate_m54EE3ADAA7597303B1F69849B233D1A68D880B14 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		s_Il2CppMethodInitialized = true;
	}
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  V_1;
	memset((&V_1), 0, sizeof(V_1));
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  G_B3_0;
	memset((&G_B3_0), 0, sizeof(G_B3_0));
	{
		// Vector2 moveVec = isHorizonmove ? new Vector2(h, 0)  : new Vector2(0, v) ;
		bool L_0 = __this->get_isHorizonmove_7();
		if (L_0)
		{
			goto IL_001a;
		}
	}
	{
		float L_1 = __this->get_v_6();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_2;
		memset((&L_2), 0, sizeof(L_2));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_2), (0.0f), L_1, /*hidden argument*/NULL);
		G_B3_0 = L_2;
		goto IL_002a;
	}

IL_001a:
	{
		float L_3 = __this->get_h_5();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_4;
		memset((&L_4), 0, sizeof(L_4));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_4), L_3, (0.0f), /*hidden argument*/NULL);
		G_B3_0 = L_4;
	}

IL_002a:
	{
		V_0 = G_B3_0;
		// rigid.velocity = moveVec * speed;
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_5 = __this->get_rigid_12();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6 = V_0;
		float L_7 = __this->get_speed_4();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_8;
		L_8 = Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline(L_6, L_7, /*hidden argument*/NULL);
		NullCheck(L_5);
		Rigidbody2D_set_velocity_m56B745344E78C85462843AE623BF0A40764FC2DA(L_5, L_8, /*hidden argument*/NULL);
		// RaycastHit2D rayHit = Physics2D.Raycast(rigid.position, dirVec, 0.7f, LayerMask.GetMask("Object"));
		Rigidbody2D_tD23204FEE9CB4A36737043B97FD409DE05D5DCE5 * L_9 = __this->get_rigid_12();
		NullCheck(L_9);
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_10;
		L_10 = Rigidbody2D_get_position_mEC7D07E3478BEF5A2A0E22C91CA54935376F84C2(L_9, /*hidden argument*/NULL);
		Vector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E  L_11 = __this->get_dirVec_8();
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_12;
		L_12 = Vector2_op_Implicit_mE407CAF7446E342E059B00AA9EDB301AEC5B7B1A_inline(L_11, /*hidden argument*/NULL);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_13 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = L_13;
		NullCheck(L_14);
		ArrayElementTypeCheck (L_14, _stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		(L_14)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralCA816A20F0CF24FE3583D22D2B8AD3305323C346);
		int32_t L_15;
		L_15 = LayerMask_GetMask_m46D2185735D02C7DEE01E3BAAF4A39F2AB46F67F(L_14, /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Physics2D_t1C1ECE6BA2F958C5C1440DDB9E9A5DAAA8F86D92_il2cpp_TypeInfo_var);
		RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4  L_16;
		L_16 = Physics2D_Raycast_mE1F849D695803D7409790B7C736D00FD9724F65A(L_10, L_12, (0.699999988f), L_15, /*hidden argument*/NULL);
		V_1 = L_16;
		// if (rayHit.collider != null)
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_17;
		L_17 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_18;
		L_18 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_17, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_18)
		{
			goto IL_0098;
		}
	}
	{
		// scanObject = rayHit.collider.gameObject;
		Collider2D_tDDBF081328B83D21D0BA3B5036D77B32528BA722 * L_19;
		L_19 = RaycastHit2D_get_collider_m00F7EC55C36F39E2ED64B31354FB4D9C8938D563((RaycastHit2D_t210878DAEBC96C1F69DF9883C454758724A106A4 *)(&V_1), /*hidden argument*/NULL);
		NullCheck(L_19);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_20;
		L_20 = Component_get_gameObject_m55DC35B149AFB9157582755383BA954655FE0C5B(L_19, /*hidden argument*/NULL);
		__this->set_scanObject_9(L_20);
		// }
		return;
	}

IL_0098:
	{
		// scanObject = null;
		__this->set_scanObject_9((GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 *)NULL);
		// }
		return;
	}
}
// System.Void PlayerController::ButtonDown(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ButtonDown_mF0E5EEA9C7341D92E744251591BE247DD42B672F (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, String_t* ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___type0;
		if (!L_0)
		{
			goto IL_00bc;
		}
	}
	{
		String_t* L_1 = ___type0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0055;
		}
	}
	{
		String_t* L_3 = ___type0;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0064;
		}
	}
	{
		String_t* L_5 = ___type0;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_7 = ___type0;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0082;
		}
	}
	{
		String_t* L_9 = ___type0;
		bool L_10;
		L_10 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_9, _stringLiteralEF420ABFDDBDA7B9EE665D85EF62E4A437554003, /*hidden argument*/NULL);
		if (L_10)
		{
			goto IL_0091;
		}
	}
	{
		String_t* L_11 = ___type0;
		bool L_12;
		L_12 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_11, _stringLiteralBF86C9E9E7FE0EF09A2EAE8066CDC31F859254CC, /*hidden argument*/NULL);
		if (L_12)
		{
			goto IL_00b1;
		}
	}
	{
		return;
	}

IL_0055:
	{
		// up_Value = 1;
		__this->set_up_Value_13(1);
		// up_Down = true;
		__this->set_up_Down_17((bool)1);
		// break;
		return;
	}

IL_0064:
	{
		// down_Value = -1;
		__this->set_down_Value_14((-1));
		// down_Down = true;
		__this->set_down_Down_18((bool)1);
		// break;
		return;
	}

IL_0073:
	{
		// right_Value = 1;
		__this->set_right_Value_15(1);
		// right_Down = true;
		__this->set_right_Down_20((bool)1);
		// break;
		return;
	}

IL_0082:
	{
		// left_Value = -1;
		__this->set_left_Value_16((-1));
		// left_Down = true;
		__this->set_left_Down_19((bool)1);
		// break;
		return;
	}

IL_0091:
	{
		// if (scanObject != null)
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_13 = __this->get_scanObject_9();
		IL2CPP_RUNTIME_CLASS_INIT(Object_tF2F3778131EFF286AF62B7B013A170F95A91571A_il2cpp_TypeInfo_var);
		bool L_14;
		L_14 = Object_op_Inequality_mE1F187520BD83FB7D86A6D850710C4D42B864E90(L_13, (Object_tF2F3778131EFF286AF62B7B013A170F95A91571A *)NULL, /*hidden argument*/NULL);
		if (!L_14)
		{
			goto IL_00bc;
		}
	}
	{
		// gameManager.Action(scanObject);
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_15 = __this->get_gameManager_10();
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_16 = __this->get_scanObject_9();
		NullCheck(L_15);
		GameManager_Action_m534E461B332BA8A5E91C21117C3BD156C2ED5CDB(L_15, L_16, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_00b1:
	{
		// gameManager.SubMenuActive();
		GameManager_t9013B33302D2B40A51D0E8059DEE0DC180218AA1 * L_17 = __this->get_gameManager_10();
		NullCheck(L_17);
		GameManager_SubMenuActive_m5594B250B8494F9C4CD2D24BB37DC3698A5D553E(L_17, /*hidden argument*/NULL);
	}

IL_00bc:
	{
		// }
		return;
	}
}
// System.Void PlayerController::ButtonUp(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController_ButtonUp_m2DA4BABCCFF424F2D0B299A4B47DFAA6027FD065 (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, String_t* ___type0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158);
		s_Il2CppMethodInitialized = true;
	}
	{
		String_t* L_0 = ___type0;
		if (!L_0)
		{
			goto IL_0073;
		}
	}
	{
		String_t* L_1 = ___type0;
		bool L_2;
		L_2 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, _stringLiteral51B9A921875B50DC2E745884E0F3B09DFCFEA44A, /*hidden argument*/NULL);
		if (L_2)
		{
			goto IL_0038;
		}
	}
	{
		String_t* L_3 = ___type0;
		bool L_4;
		L_4 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_3, _stringLiteralA019FB7F17AA36A9743C530E1F11D5613B8B1158, /*hidden argument*/NULL);
		if (L_4)
		{
			goto IL_0047;
		}
	}
	{
		String_t* L_5 = ___type0;
		bool L_6;
		L_6 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_5, _stringLiteral2C3D4826D5236B3C9A914C5CE2E3D8CEA48AC7CE, /*hidden argument*/NULL);
		if (L_6)
		{
			goto IL_0056;
		}
	}
	{
		String_t* L_7 = ___type0;
		bool L_8;
		L_8 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_7, _stringLiteral7E70AF961A2F88ADB9DB7B9C3B5F25A532C1570A, /*hidden argument*/NULL);
		if (L_8)
		{
			goto IL_0065;
		}
	}
	{
		return;
	}

IL_0038:
	{
		// up_Value = 0;
		__this->set_up_Value_13(0);
		// up_Up = true;
		__this->set_up_Up_21((bool)1);
		// break;
		return;
	}

IL_0047:
	{
		// down_Value = 0;
		__this->set_down_Value_14(0);
		// down_Up = true;
		__this->set_down_Up_22((bool)1);
		// break;
		return;
	}

IL_0056:
	{
		// right_Value = 0;
		__this->set_right_Value_15(0);
		// right_Up = true;
		__this->set_right_Up_23((bool)1);
		// break;
		return;
	}

IL_0065:
	{
		// left_Value = 0;
		__this->set_left_Value_16(0);
		// left_Up = true;
		__this->set_left_Up_24((bool)1);
	}

IL_0073:
	{
		// }
		return;
	}
}
// System.Void PlayerController::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PlayerController__ctor_mF30385729DAFDFCB895C4939F6051DCE6C0327FB (PlayerController_tDFE946D0FE1CB988FC3DC902E05737A2A62CA3D9 * __this, const RuntimeMethod* method)
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
// System.Void QuestData::.ctor(System.String,System.Int32[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestData__ctor_mE538EF663EF1C0935A1B787D81A856D8341E1A97 (QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * __this, String_t* ___name0, Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ___Npc1, const RuntimeMethod* method)
{
	{
		// public QuestData(string name, int[] Npc)
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		// questName = name;
		String_t* L_0 = ___name0;
		__this->set_questName_0(L_0);
		// npcId = Npc;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = ___Npc1;
		__this->set_npcId_1(L_1);
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
// System.Void QuestManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestManager_Awake_mF6C43464E7A765F8FAF68DFDB0C66AFD141FE209 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m3C7EDF0516CBDA06C0326B58D4AF47F643C6557E_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// questList = new Dictionary<int, QuestData>();
		Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * L_0 = (Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 *)il2cpp_codegen_object_new(Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m3C7EDF0516CBDA06C0326B58D4AF47F643C6557E(L_0, /*hidden argument*/Dictionary_2__ctor_m3C7EDF0516CBDA06C0326B58D4AF47F643C6557E_RuntimeMethod_var);
		__this->set_questList_7(L_0);
		// GenerateData();
		QuestManager_GenerateData_m6963530F80E0F13F24DD002C61B4F731F373CDC3(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void QuestManager::GenerateData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestManager_GenerateData_m6963530F80E0F13F24DD002C61B4F731F373CDC3 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_mCE9BF9FF6CBC66D9979F225E6CC92029E979FBB4_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&QuestData_t76432B77A5683715DBD337237C5079F7F105CB26_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral17E6134BDA0DB23F4993CFDCC1C57832A5FF8FC0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral31CBC4A53C3F8611E90F20CB235C4928E15A2AC4);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralCF747446A915B0995836CE09C0716993B1A287EA);
		s_Il2CppMethodInitialized = true;
	}
	{
		// questList.Add(10, new QuestData("���� ������ ��ȭ�ϱ�",
		//                                 new int[] { 1000, 2000 }));
		Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * L_0 = __this->get_questList_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_1 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_2 = L_1;
		NullCheck(L_2);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)1000));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_3 = L_2;
		NullCheck(L_3);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)2000));
		QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * L_4 = (QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 *)il2cpp_codegen_object_new(QuestData_t76432B77A5683715DBD337237C5079F7F105CB26_il2cpp_TypeInfo_var);
		QuestData__ctor_mE538EF663EF1C0935A1B787D81A856D8341E1A97(L_4, _stringLiteral17E6134BDA0DB23F4993CFDCC1C57832A5FF8FC0, L_3, /*hidden argument*/NULL);
		NullCheck(L_0);
		Dictionary_2_Add_mCE9BF9FF6CBC66D9979F225E6CC92029E979FBB4(L_0, ((int32_t)10), L_4, /*hidden argument*/Dictionary_2_Add_mCE9BF9FF6CBC66D9979F225E6CC92029E979FBB4_RuntimeMethod_var);
		// questList.Add(20, new QuestData("�絵�� ���� ã���ֱ�",
		//                                new int[] { 5000, 2000 }));
		Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * L_5 = __this->get_questList_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_6 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)2);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_7 = L_6;
		NullCheck(L_7);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (int32_t)((int32_t)5000));
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_8 = L_7;
		NullCheck(L_8);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (int32_t)((int32_t)2000));
		QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * L_9 = (QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 *)il2cpp_codegen_object_new(QuestData_t76432B77A5683715DBD337237C5079F7F105CB26_il2cpp_TypeInfo_var);
		QuestData__ctor_mE538EF663EF1C0935A1B787D81A856D8341E1A97(L_9, _stringLiteral31CBC4A53C3F8611E90F20CB235C4928E15A2AC4, L_8, /*hidden argument*/NULL);
		NullCheck(L_5);
		Dictionary_2_Add_mCE9BF9FF6CBC66D9979F225E6CC92029E979FBB4(L_5, ((int32_t)20), L_9, /*hidden argument*/Dictionary_2_Add_mCE9BF9FF6CBC66D9979F225E6CC92029E979FBB4_RuntimeMethod_var);
		// questList.Add(30, new QuestData("����Ʈ �� Ŭ����!",
		//                                new int[] {0}));
		Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * L_10 = __this->get_questList_7();
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11 = (Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32*)SZArrayNew(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32_il2cpp_TypeInfo_var, (uint32_t)1);
		QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * L_12 = (QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 *)il2cpp_codegen_object_new(QuestData_t76432B77A5683715DBD337237C5079F7F105CB26_il2cpp_TypeInfo_var);
		QuestData__ctor_mE538EF663EF1C0935A1B787D81A856D8341E1A97(L_12, _stringLiteralCF747446A915B0995836CE09C0716993B1A287EA, L_11, /*hidden argument*/NULL);
		NullCheck(L_10);
		Dictionary_2_Add_mCE9BF9FF6CBC66D9979F225E6CC92029E979FBB4(L_10, ((int32_t)30), L_12, /*hidden argument*/Dictionary_2_Add_mCE9BF9FF6CBC66D9979F225E6CC92029E979FBB4_RuntimeMethod_var);
		// }
		return;
	}
}
// System.Int32 QuestManager::GetQuestTalkIndex(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QuestManager_GetQuestTalkIndex_mFBD56AE85DC6B1F96478AB4019BCF73B5323A07D (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	{
		// return questId + questActionIndex;
		int32_t L_0 = __this->get_questId_4();
		int32_t L_1 = __this->get_questActionIndex_5();
		return ((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)L_1));
	}
}
// System.String QuestManager::CheckQuest(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuestManager_CheckQuest_m98B81C1888B5B585D65FD0A960BCF32A936E87E6 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, int32_t ___id0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if(id == questList[questId].npcId[questActionIndex])
		int32_t L_0 = ___id0;
		Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * L_1 = __this->get_questList_7();
		int32_t L_2 = __this->get_questId_4();
		NullCheck(L_1);
		QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * L_3;
		L_3 = Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC(L_1, L_2, /*hidden argument*/Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC_RuntimeMethod_var);
		NullCheck(L_3);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_4 = L_3->get_npcId_1();
		int32_t L_5 = __this->get_questActionIndex_5();
		NullCheck(L_4);
		int32_t L_6 = L_5;
		int32_t L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		if ((!(((uint32_t)L_0) == ((uint32_t)L_7))))
		{
			goto IL_002e;
		}
	}
	{
		// questActionIndex++;
		int32_t L_8 = __this->get_questActionIndex_5();
		__this->set_questActionIndex_5(((int32_t)il2cpp_codegen_add((int32_t)L_8, (int32_t)1)));
	}

IL_002e:
	{
		// ControllObject();
		QuestManager_ControllObject_mFD5E3C97363C800D0CA1A1CDCBD2597D714D1BB6(__this, /*hidden argument*/NULL);
		// if (questActionIndex == questList[questId].npcId.Length)
		int32_t L_9 = __this->get_questActionIndex_5();
		Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * L_10 = __this->get_questList_7();
		int32_t L_11 = __this->get_questId_4();
		NullCheck(L_10);
		QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * L_12;
		L_12 = Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC(L_10, L_11, /*hidden argument*/Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC_RuntimeMethod_var);
		NullCheck(L_12);
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_13 = L_12->get_npcId_1();
		NullCheck(L_13);
		if ((!(((uint32_t)L_9) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_13)->max_length)))))))
		{
			goto IL_005a;
		}
	}
	{
		// NextQuest();
		QuestManager_NextQuest_mAE230FEEC87946C8AF54CA78E50066A67CC3F919(__this, /*hidden argument*/NULL);
	}

IL_005a:
	{
		// return questList[questId].questName;
		Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * L_14 = __this->get_questList_7();
		int32_t L_15 = __this->get_questId_4();
		NullCheck(L_14);
		QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * L_16;
		L_16 = Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC(L_14, L_15, /*hidden argument*/Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC_RuntimeMethod_var);
		NullCheck(L_16);
		String_t* L_17 = L_16->get_questName_0();
		return L_17;
	}
}
// System.String QuestManager::CheckQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* QuestManager_CheckQuest_mE5A3FF5C87424F715B368E47B51EA22A378B5CF2 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return questList[questId].questName;
		Dictionary_2_t43FD91C144A500D93E49AF734E99B71F3D72D7A4 * L_0 = __this->get_questList_7();
		int32_t L_1 = __this->get_questId_4();
		NullCheck(L_0);
		QuestData_t76432B77A5683715DBD337237C5079F7F105CB26 * L_2;
		L_2 = Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC(L_0, L_1, /*hidden argument*/Dictionary_2_get_Item_m53E01FDB6590236D925FFCD575F8DA9C7C3519DC_RuntimeMethod_var);
		NullCheck(L_2);
		String_t* L_3 = L_2->get_questName_0();
		return L_3;
	}
}
// System.Void QuestManager::NextQuest()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestManager_NextQuest_mAE230FEEC87946C8AF54CA78E50066A67CC3F919 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method)
{
	{
		// questId += 10;
		int32_t L_0 = __this->get_questId_4();
		__this->set_questId_4(((int32_t)il2cpp_codegen_add((int32_t)L_0, (int32_t)((int32_t)10))));
		// questActionIndex = 0;
		__this->set_questActionIndex_5(0);
		// }
		return;
	}
}
// System.Void QuestManager::ControllObject()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestManager_ControllObject_mFD5E3C97363C800D0CA1A1CDCBD2597D714D1BB6 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method)
{
	int32_t V_0 = 0;
	{
		// switch (questId)
		int32_t L_0 = __this->get_questId_4();
		V_0 = L_0;
		int32_t L_1 = V_0;
		if ((((int32_t)L_1) == ((int32_t)((int32_t)10))))
		{
			goto IL_0012;
		}
	}
	{
		int32_t L_2 = V_0;
		if ((((int32_t)L_2) == ((int32_t)((int32_t)20))))
		{
			goto IL_002a;
		}
	}
	{
		return;
	}

IL_0012:
	{
		// if (questActionIndex == 2)
		int32_t L_3 = __this->get_questActionIndex_5();
		if ((!(((uint32_t)L_3) == ((uint32_t)2))))
		{
			goto IL_0058;
		}
	}
	{
		// questObject[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_4 = __this->get_questObject_6();
		NullCheck(L_4);
		int32_t L_5 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_6 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_5));
		NullCheck(L_6);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_6, (bool)1, /*hidden argument*/NULL);
		// break;
		return;
	}

IL_002a:
	{
		// if (questActionIndex == 0)
		int32_t L_7 = __this->get_questActionIndex_5();
		if (L_7)
		{
			goto IL_0041;
		}
	}
	{
		// questObject[0].SetActive(true);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_8 = __this->get_questObject_6();
		NullCheck(L_8);
		int32_t L_9 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_10 = (L_8)->GetAt(static_cast<il2cpp_array_size_t>(L_9));
		NullCheck(L_10);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_10, (bool)1, /*hidden argument*/NULL);
		return;
	}

IL_0041:
	{
		// else if (questActionIndex == 1)
		int32_t L_11 = __this->get_questActionIndex_5();
		if ((!(((uint32_t)L_11) == ((uint32_t)1))))
		{
			goto IL_0058;
		}
	}
	{
		// questObject[0].SetActive(false);
		GameObjectU5BU5D_tA88FC1A1FC9D4D73D0B3984D4B0ECE88F4C47642* L_12 = __this->get_questObject_6();
		NullCheck(L_12);
		int32_t L_13 = 0;
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_14 = (L_12)->GetAt(static_cast<il2cpp_array_size_t>(L_13));
		NullCheck(L_14);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_14, (bool)0, /*hidden argument*/NULL);
	}

IL_0058:
	{
		// }
		return;
	}
}
// System.Void QuestManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuestManager__ctor_m1AC816ADC9C82128299E151F809CE26026157CE7 (QuestManager_tF7D52D76F5AE48DDCB8F680DE77D810792D42EC1 * __this, const RuntimeMethod* method)
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
// System.Void ReadmeBE2::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadmeBE2__ctor_mEC00C782CF4C0DC40BD62EE5873DB3A8D7ADB4DE (ReadmeBE2_t75C4BCCF96D6F8C9C8FB185690A2EBF99DB0A94A * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void ReadmeBE3::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ReadmeBE3__ctor_m7702AAD83D17D1CA3B1BA28D4F1CA4BD4A19CB8A (ReadmeBE3_t5DD99B8DB701C8E61460180DDC028DB4B8137449 * __this, const RuntimeMethod* method)
{
	{
		ScriptableObject__ctor_m8DAE6CDCFA34E16F2543B02CC3669669FF203063(__this, /*hidden argument*/NULL);
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
// System.Void TalkManager::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TalkManager_Awake_mF139ED891D65EBA36743F3CFBA021E28758CB2E2 (TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m1A2F684C82C65D47E88ACA4163DA6CF2FE7DF16B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2__ctor_m583FBCC00FD86C7405333ABD8349CDB1A3D7E6C1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// talkData = new Dictionary<int, string[]>();
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_0 = (Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 *)il2cpp_codegen_object_new(Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m1A2F684C82C65D47E88ACA4163DA6CF2FE7DF16B(L_0, /*hidden argument*/Dictionary_2__ctor_m1A2F684C82C65D47E88ACA4163DA6CF2FE7DF16B_RuntimeMethod_var);
		__this->set_talkData_4(L_0);
		// portraionData = new Dictionary<int, Sprite>();
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_1 = (Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 *)il2cpp_codegen_object_new(Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1_il2cpp_TypeInfo_var);
		Dictionary_2__ctor_m583FBCC00FD86C7405333ABD8349CDB1A3D7E6C1(L_1, /*hidden argument*/Dictionary_2__ctor_m583FBCC00FD86C7405333ABD8349CDB1A3D7E6C1_RuntimeMethod_var);
		__this->set_portraionData_5(L_1);
		// GeneratorData();
		TalkManager_GeneratorData_mF1922C6F1F314D545B20875D86199D4F2CBA7D87(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TalkManager::GeneratorData()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TalkManager_GeneratorData_mF1922C6F1F314D545B20875D86199D4F2CBA7D87 (TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral00872B18620301EAE25F54BD9BC36359A9B92CC2);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral04956CFF35EA786EC354171650717C186DDD7F23);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral11DF5FF449E5AA00FC94E7F0E90541FFF15980C8);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral1CEE0A3E8B0994C73DFB34790A27637DF64FCB6A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral518CD44B067C9A32D942A68E0BC9560A1C256575);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral52B4F69AD643CA34A5226589DD49959CF032208B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral5449340B31A7CBF95535B4511DAEC97C85B6C21C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral617DC8F61A23C8ED3326E8D7944176DDDA0FC9D1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral663AA16D11D8D259B26E088AC8DE4CE274B1BE4A);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6B3F0EDF4548CE00678E1ADD6063DADE4A6FF456);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral6DDEE892922BC68C3DDCB8594F1105A82688ADE3);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral7CA899507A67A264D3733E3AD71CEC73B32FEF6B);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral85C803D59E269D6CD0DEA8399301737436673B07);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral8B5BDC736E9E5E19B28FA981E993D119431364A0);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral96721A81BB7AB5A6421A597E64CFD7E0D7333755);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral9A097E9AA1F8E2B63892D1A75184D75FE70CB254);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC8951937D5B9A7F8A93D17B49868421E4DE6D334);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE53F4C0335DC06CF1E7B89227B65A3888FFEEBC1);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralEF168F08DF838F34F65455434C5742F829B2C439);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF04F08C5998C716F44E161964B6D4A2471D82305);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF18C07C2911555B3BD202E2754727614C4F323F4);
		s_Il2CppMethodInitialized = true;
	}
	{
		// talkData.Add(1000, new string[] { "�ȳ�?:0",
		//                                   "�̰��� ó�� �Ա���?:1",
		//                                   "�� �� �ѷ� ������ ��:0"});
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_0 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_1 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_2 = L_1;
		NullCheck(L_2);
		ArrayElementTypeCheck (L_2, _stringLiteral617DC8F61A23C8ED3326E8D7944176DDDA0FC9D1);
		(L_2)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral617DC8F61A23C8ED3326E8D7944176DDDA0FC9D1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_3 = L_2;
		NullCheck(L_3);
		ArrayElementTypeCheck (L_3, _stringLiteral8B5BDC736E9E5E19B28FA981E993D119431364A0);
		(L_3)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral8B5BDC736E9E5E19B28FA981E993D119431364A0);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_4 = L_3;
		NullCheck(L_4);
		ArrayElementTypeCheck (L_4, _stringLiteralC8951937D5B9A7F8A93D17B49868421E4DE6D334);
		(L_4)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralC8951937D5B9A7F8A93D17B49868421E4DE6D334);
		NullCheck(L_0);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_0, ((int32_t)1000), L_4, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(2000, new string[] { "�̺�.:1",
		//                                   "�� ȣ���� ���� �Ƹ�����?:0",
		//                                   "ȣ�� �� �ٴڿ� ���𰡰� ������ ���� ���� ����.:1" });
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_5 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_6 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_7 = L_6;
		NullCheck(L_7);
		ArrayElementTypeCheck (L_7, _stringLiteral1CEE0A3E8B0994C73DFB34790A27637DF64FCB6A);
		(L_7)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1CEE0A3E8B0994C73DFB34790A27637DF64FCB6A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_8 = L_7;
		NullCheck(L_8);
		ArrayElementTypeCheck (L_8, _stringLiteral518CD44B067C9A32D942A68E0BC9560A1C256575);
		(L_8)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral518CD44B067C9A32D942A68E0BC9560A1C256575);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_9 = L_8;
		NullCheck(L_9);
		ArrayElementTypeCheck (L_9, _stringLiteral85C803D59E269D6CD0DEA8399301737436673B07);
		(L_9)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral85C803D59E269D6CD0DEA8399301737436673B07);
		NullCheck(L_5);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_5, ((int32_t)2000), L_9, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(3000, new string[] { "����� ���� ���ڴ�." });
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_10 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_11 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_12 = L_11;
		NullCheck(L_12);
		ArrayElementTypeCheck (L_12, _stringLiteral00872B18620301EAE25F54BD9BC36359A9B92CC2);
		(L_12)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral00872B18620301EAE25F54BD9BC36359A9B92CC2);
		NullCheck(L_10);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_10, ((int32_t)3000), L_12, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(4000, new string[] { "������ ������� �ִ� å���̴�." });
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_13 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_15 = L_14;
		NullCheck(L_15);
		ArrayElementTypeCheck (L_15, _stringLiteral6DDEE892922BC68C3DDCB8594F1105A82688ADE3);
		(L_15)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral6DDEE892922BC68C3DDCB8594F1105A82688ADE3);
		NullCheck(L_13);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_13, ((int32_t)4000), L_15, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(10 + 1000, new string[] { "� ��:0",
		//                                   "�� ������ ���� ������ �ִٴµ�:1",
		//                                   "������ ȣ���� ���� �絵�� �˷��ٲ���:0"});
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_16 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_17 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18 = L_17;
		NullCheck(L_18);
		ArrayElementTypeCheck (L_18, _stringLiteral96721A81BB7AB5A6421A597E64CFD7E0D7333755);
		(L_18)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral96721A81BB7AB5A6421A597E64CFD7E0D7333755);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_19 = L_18;
		NullCheck(L_19);
		ArrayElementTypeCheck (L_19, _stringLiteralEF168F08DF838F34F65455434C5742F829B2C439);
		(L_19)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralEF168F08DF838F34F65455434C5742F829B2C439);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_20 = L_19;
		NullCheck(L_20);
		ArrayElementTypeCheck (L_20, _stringLiteral5449340B31A7CBF95535B4511DAEC97C85B6C21C);
		(L_20)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral5449340B31A7CBF95535B4511DAEC97C85B6C21C);
		NullCheck(L_16);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_16, ((int32_t)1010), L_20, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(11 + 1000, new string[] { "���� �� ã�Ҿ�?:0" });
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_21 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_22 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_23 = L_22;
		NullCheck(L_23);
		ArrayElementTypeCheck (L_23, _stringLiteralF04F08C5998C716F44E161964B6D4A2471D82305);
		(L_23)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF04F08C5998C716F44E161964B6D4A2471D82305);
		NullCheck(L_21);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_21, ((int32_t)1011), L_23, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(11 + 2000, new string[] { "�̺�.:1",
		//                                   "�� ȣ���� ������ ������ �°ž�?:0",
		//                                   "�׷� �� �� �ϳ� ���ָ� �����ٵ�...:1",
		//                                    "�� �� �տ� ������ ������ �� �ֿ���:0"});
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_24 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_25 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)4);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_26 = L_25;
		NullCheck(L_26);
		ArrayElementTypeCheck (L_26, _stringLiteral1CEE0A3E8B0994C73DFB34790A27637DF64FCB6A);
		(L_26)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral1CEE0A3E8B0994C73DFB34790A27637DF64FCB6A);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_27 = L_26;
		NullCheck(L_27);
		ArrayElementTypeCheck (L_27, _stringLiteral9A097E9AA1F8E2B63892D1A75184D75FE70CB254);
		(L_27)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteral9A097E9AA1F8E2B63892D1A75184D75FE70CB254);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_28 = L_27;
		NullCheck(L_28);
		ArrayElementTypeCheck (L_28, _stringLiteral04956CFF35EA786EC354171650717C186DDD7F23);
		(L_28)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral04956CFF35EA786EC354171650717C186DDD7F23);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_29 = L_28;
		NullCheck(L_29);
		ArrayElementTypeCheck (L_29, _stringLiteral6B3F0EDF4548CE00678E1ADD6063DADE4A6FF456);
		(L_29)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)_stringLiteral6B3F0EDF4548CE00678E1ADD6063DADE4A6FF456);
		NullCheck(L_24);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_24, ((int32_t)2011), L_29, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(20 + 1000, new string[] { "�絵�� ����?:1",
		//                                        "���� �긮�� �ٴϸ� ��¾��!:3",
		//                                        "���߿� �絵���� �Ѹ��� ����߰ھ�!:3"});
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_30 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_31 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)3);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_32 = L_31;
		NullCheck(L_32);
		ArrayElementTypeCheck (L_32, _stringLiteral52B4F69AD643CA34A5226589DD49959CF032208B);
		(L_32)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral52B4F69AD643CA34A5226589DD49959CF032208B);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_33 = L_32;
		NullCheck(L_33);
		ArrayElementTypeCheck (L_33, _stringLiteralE53F4C0335DC06CF1E7B89227B65A3888FFEEBC1);
		(L_33)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)_stringLiteralE53F4C0335DC06CF1E7B89227B65A3888FFEEBC1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_34 = L_33;
		NullCheck(L_34);
		ArrayElementTypeCheck (L_34, _stringLiteral663AA16D11D8D259B26E088AC8DE4CE274B1BE4A);
		(L_34)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteral663AA16D11D8D259B26E088AC8DE4CE274B1BE4A);
		NullCheck(L_30);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_30, ((int32_t)1020), L_34, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(20 + 2000, new string[] { "ã���� �� ��������:1"});
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_35 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_36 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_37 = L_36;
		NullCheck(L_37);
		ArrayElementTypeCheck (L_37, _stringLiteral7CA899507A67A264D3733E3AD71CEC73B32FEF6B);
		(L_37)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral7CA899507A67A264D3733E3AD71CEC73B32FEF6B);
		NullCheck(L_35);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_35, ((int32_t)2020), L_37, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(20 + 5000, new string[] { "��ó���� ������ ã�Ҵ�." });
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_38 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_39 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_40 = L_39;
		NullCheck(L_40);
		ArrayElementTypeCheck (L_40, _stringLiteralF18C07C2911555B3BD202E2754727614C4F323F4);
		(L_40)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralF18C07C2911555B3BD202E2754727614C4F323F4);
		NullCheck(L_38);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_38, ((int32_t)5020), L_40, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// talkData.Add(21 + 2000, new string[] { "��, ã���༭ ������.:2" });
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_41 = __this->get_talkData_4();
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_42 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)1);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_43 = L_42;
		NullCheck(L_43);
		ArrayElementTypeCheck (L_43, _stringLiteral11DF5FF449E5AA00FC94E7F0E90541FFF15980C8);
		(L_43)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral11DF5FF449E5AA00FC94E7F0E90541FFF15980C8);
		NullCheck(L_41);
		Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A(L_41, ((int32_t)2021), L_43, /*hidden argument*/Dictionary_2_Add_m81E22033153DA9199ECF8AFE3AAF75B5AF0D697A_RuntimeMethod_var);
		// portraionData.Add(1000 + 0, portraitArr[0]);
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_44 = __this->get_portraionData_5();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_45 = __this->get_portraitArr_6();
		NullCheck(L_45);
		int32_t L_46 = 0;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_47 = (L_45)->GetAt(static_cast<il2cpp_array_size_t>(L_46));
		NullCheck(L_44);
		Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8(L_44, ((int32_t)1000), L_47, /*hidden argument*/Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var);
		// portraionData.Add(1000 + 1, portraitArr[1]);
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_48 = __this->get_portraionData_5();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_49 = __this->get_portraitArr_6();
		NullCheck(L_49);
		int32_t L_50 = 1;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_51 = (L_49)->GetAt(static_cast<il2cpp_array_size_t>(L_50));
		NullCheck(L_48);
		Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8(L_48, ((int32_t)1001), L_51, /*hidden argument*/Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var);
		// portraionData.Add(1000 + 2, portraitArr[2]);
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_52 = __this->get_portraionData_5();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_53 = __this->get_portraitArr_6();
		NullCheck(L_53);
		int32_t L_54 = 2;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_55 = (L_53)->GetAt(static_cast<il2cpp_array_size_t>(L_54));
		NullCheck(L_52);
		Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8(L_52, ((int32_t)1002), L_55, /*hidden argument*/Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var);
		// portraionData.Add(1000 + 3, portraitArr[3]);
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_56 = __this->get_portraionData_5();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_57 = __this->get_portraitArr_6();
		NullCheck(L_57);
		int32_t L_58 = 3;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_59 = (L_57)->GetAt(static_cast<il2cpp_array_size_t>(L_58));
		NullCheck(L_56);
		Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8(L_56, ((int32_t)1003), L_59, /*hidden argument*/Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var);
		// portraionData.Add(2000 + 0, portraitArr[4]);
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_60 = __this->get_portraionData_5();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_61 = __this->get_portraitArr_6();
		NullCheck(L_61);
		int32_t L_62 = 4;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_63 = (L_61)->GetAt(static_cast<il2cpp_array_size_t>(L_62));
		NullCheck(L_60);
		Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8(L_60, ((int32_t)2000), L_63, /*hidden argument*/Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var);
		// portraionData.Add(2000 + 1, portraitArr[5]);
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_64 = __this->get_portraionData_5();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_65 = __this->get_portraitArr_6();
		NullCheck(L_65);
		int32_t L_66 = 5;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_67 = (L_65)->GetAt(static_cast<il2cpp_array_size_t>(L_66));
		NullCheck(L_64);
		Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8(L_64, ((int32_t)2001), L_67, /*hidden argument*/Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var);
		// portraionData.Add(2000 + 2, portraitArr[6]);
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_68 = __this->get_portraionData_5();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_69 = __this->get_portraitArr_6();
		NullCheck(L_69);
		int32_t L_70 = 6;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_71 = (L_69)->GetAt(static_cast<il2cpp_array_size_t>(L_70));
		NullCheck(L_68);
		Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8(L_68, ((int32_t)2002), L_71, /*hidden argument*/Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var);
		// portraionData.Add(2000 + 3, portraitArr[7]);
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_72 = __this->get_portraionData_5();
		SpriteU5BU5D_t8DB77E112FFC97B722E701189DCB4059F943FD77* L_73 = __this->get_portraitArr_6();
		NullCheck(L_73);
		int32_t L_74 = 7;
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_75 = (L_73)->GetAt(static_cast<il2cpp_array_size_t>(L_74));
		NullCheck(L_72);
		Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8(L_72, ((int32_t)2003), L_75, /*hidden argument*/Dictionary_2_Add_m6270BC0B94F2A595AC479F4B9A97169B39AC66E8_RuntimeMethod_var);
		// }
		return;
	}
}
// System.String TalkManager::GetTalk(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* TalkManager_GetTalk_mB8103F7173BF61AF7B5B25CA3A41063367D9BFBA (TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * __this, int32_t ___id0, int32_t ___talkindex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_ContainsKey_m4BC5DB0783708D45CD4E5F0F83A345791469C95B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_m286B4EB3D3737AA642A75EFC7009F74541921ECC_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// if (!talkData.ContainsKey(id))
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_0 = __this->get_talkData_4();
		int32_t L_1 = ___id0;
		NullCheck(L_0);
		bool L_2;
		L_2 = Dictionary_2_ContainsKey_m4BC5DB0783708D45CD4E5F0F83A345791469C95B(L_0, L_1, /*hidden argument*/Dictionary_2_ContainsKey_m4BC5DB0783708D45CD4E5F0F83A345791469C95B_RuntimeMethod_var);
		if (L_2)
		{
			goto IL_003d;
		}
	}
	{
		// if (!talkData.ContainsKey(id - id % 10))
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_3 = __this->get_talkData_4();
		int32_t L_4 = ___id0;
		int32_t L_5 = ___id0;
		NullCheck(L_3);
		bool L_6;
		L_6 = Dictionary_2_ContainsKey_m4BC5DB0783708D45CD4E5F0F83A345791469C95B(L_3, ((int32_t)il2cpp_codegen_subtract((int32_t)L_4, (int32_t)((int32_t)((int32_t)L_5%(int32_t)((int32_t)10))))), /*hidden argument*/Dictionary_2_ContainsKey_m4BC5DB0783708D45CD4E5F0F83A345791469C95B_RuntimeMethod_var);
		if (L_6)
		{
			goto IL_002f;
		}
	}
	{
		// return GetTalk(id - id % 100, talkindex); //Get first Talk
		int32_t L_7 = ___id0;
		int32_t L_8 = ___id0;
		int32_t L_9 = ___talkindex1;
		String_t* L_10;
		L_10 = TalkManager_GetTalk_mB8103F7173BF61AF7B5B25CA3A41063367D9BFBA(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_7, (int32_t)((int32_t)((int32_t)L_8%(int32_t)((int32_t)100))))), L_9, /*hidden argument*/NULL);
		return L_10;
	}

IL_002f:
	{
		// return GetTalk(id - id % 10, talkindex); //Get First Quest Talk
		int32_t L_11 = ___id0;
		int32_t L_12 = ___id0;
		int32_t L_13 = ___talkindex1;
		String_t* L_14;
		L_14 = TalkManager_GetTalk_mB8103F7173BF61AF7B5B25CA3A41063367D9BFBA(__this, ((int32_t)il2cpp_codegen_subtract((int32_t)L_11, (int32_t)((int32_t)((int32_t)L_12%(int32_t)((int32_t)10))))), L_13, /*hidden argument*/NULL);
		return L_14;
	}

IL_003d:
	{
		// if (talkindex == talkData[id].Length)
		int32_t L_15 = ___talkindex1;
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_16 = __this->get_talkData_4();
		int32_t L_17 = ___id0;
		NullCheck(L_16);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_18;
		L_18 = Dictionary_2_get_Item_m286B4EB3D3737AA642A75EFC7009F74541921ECC(L_16, L_17, /*hidden argument*/Dictionary_2_get_Item_m286B4EB3D3737AA642A75EFC7009F74541921ECC_RuntimeMethod_var);
		NullCheck(L_18);
		if ((!(((uint32_t)L_15) == ((uint32_t)((int32_t)((int32_t)(((RuntimeArray*)L_18)->max_length)))))))
		{
			goto IL_0050;
		}
	}
	{
		// return null;
		return (String_t*)NULL;
	}

IL_0050:
	{
		// return talkData[id][talkindex];
		Dictionary_2_t93CE6D3DE478F777944449DECE0B191A1B9568E1 * L_19 = __this->get_talkData_4();
		int32_t L_20 = ___id0;
		NullCheck(L_19);
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_21;
		L_21 = Dictionary_2_get_Item_m286B4EB3D3737AA642A75EFC7009F74541921ECC(L_19, L_20, /*hidden argument*/Dictionary_2_get_Item_m286B4EB3D3737AA642A75EFC7009F74541921ECC_RuntimeMethod_var);
		int32_t L_22 = ___talkindex1;
		NullCheck(L_21);
		int32_t L_23 = L_22;
		String_t* L_24 = (L_21)->GetAt(static_cast<il2cpp_array_size_t>(L_23));
		return L_24;
	}
}
// UnityEngine.Sprite TalkManager::GetPortrait(System.Int32,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * TalkManager_GetPortrait_m91649E396C2E610EC9D79BA1603F6D293A02E05B (TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * __this, int32_t ___id0, int32_t ___portrationIndex1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Dictionary_2_get_Item_mF866B40A69A3606938685C9451A260939CA6B5D4_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return portraionData[id + portrationIndex];
		Dictionary_2_t62A565BF5F824F7566AE76295120CB1DACA0A5C1 * L_0 = __this->get_portraionData_5();
		int32_t L_1 = ___id0;
		int32_t L_2 = ___portrationIndex1;
		NullCheck(L_0);
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_3;
		L_3 = Dictionary_2_get_Item_mF866B40A69A3606938685C9451A260939CA6B5D4(L_0, ((int32_t)il2cpp_codegen_add((int32_t)L_1, (int32_t)L_2)), /*hidden argument*/Dictionary_2_get_Item_mF866B40A69A3606938685C9451A260939CA6B5D4_RuntimeMethod_var);
		return L_3;
	}
}
// System.Void TalkManager::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TalkManager__ctor_mE5A0BA1CDE428119DEB23732A0C7D001C8AD4594 (TalkManager_tAD5EE6284B376DDACC98AB66B6C10ECCFBE8A5C7 * __this, const RuntimeMethod* method)
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
// System.Void TypeEffect::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeEffect_Awake_mD81D2C8A9554D2D737D7D57589BD6AFFEE1F5D60 (TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		// msgText = GetComponent<Text>();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0;
		L_0 = Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137(__this, /*hidden argument*/Component_GetComponent_TisText_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1_m2D99AC2081683F963C56EC738451EC0B59B5D137_RuntimeMethod_var);
		__this->set_msgText_7(L_0);
		// audioSource = GetComponent<AudioSource>();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_1;
		L_1 = Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F(__this, /*hidden argument*/Component_GetComponent_TisAudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B_mCC3B7A679ECE504BFAF8C70C4EF527511F46902F_RuntimeMethod_var);
		__this->set_audioSource_8(L_1);
		// }
		return;
	}
}
// System.Void TypeEffect::setMsg(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeEffect_setMsg_m995884E73F813846AE2049D6DED75CC6AAB7A298 (TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * __this, String_t* ___msg0, const RuntimeMethod* method)
{
	{
		// if (isAnim)
		bool L_0 = __this->get_isAnim_5();
		if (!L_0)
		{
			goto IL_0026;
		}
	}
	{
		// CancelInvoke();
		MonoBehaviour_CancelInvoke_mAF87B47704B16B114F82AC6914E4DA9AE034095D(__this, /*hidden argument*/NULL);
		// msgText.text = targetMsg;
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_1 = __this->get_msgText_7();
		String_t* L_2 = __this->get_targetMsg_9();
		NullCheck(L_1);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_1, L_2);
		// EffectEnd();
		TypeEffect_EffectEnd_mD82EA7577352793CDA69C508B4F4FED0B39F3BB0(__this, /*hidden argument*/NULL);
		// }
		return;
	}

IL_0026:
	{
		// targetMsg = msg;
		String_t* L_3 = ___msg0;
		__this->set_targetMsg_9(L_3);
		// EffectStart();
		TypeEffect_EffectStart_mAB4F3CC1732D9951EC30D3D3C84387C785ADE881(__this, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TypeEffect::EffectStart()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeEffect_EffectStart_mAB4F3CC1732D9951EC30D3D3C84387C785ADE881 (TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BAF6B3321DDA9EFE5FF2B4D32D3A0F016E36862);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		s_Il2CppMethodInitialized = true;
	}
	{
		// msgText.text = "";
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_msgText_7();
		NullCheck(L_0);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_0, _stringLiteralDA39A3EE5E6B4B0D3255BFEF95601890AFD80709);
		// index = 0;
		__this->set_index_10(0);
		// EndCursor.SetActive(false);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_1 = __this->get_EndCursor_4();
		NullCheck(L_1);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_1, (bool)0, /*hidden argument*/NULL);
		// interval = 1.0f / CharPerSeconds;
		int32_t L_2 = __this->get_CharPerSeconds_6();
		__this->set_interval_11(((float)((float)(1.0f)/(float)((float)((float)L_2)))));
		// Debug.Log(interval);
		float L_3 = __this->get_interval_11();
		float L_4 = L_3;
		RuntimeObject * L_5 = Box(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_il2cpp_TypeInfo_var, &L_4);
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_Log_mC26E5AD0D8D156C7FFD173AA15827F69225E9DB8(L_5, /*hidden argument*/NULL);
		// isAnim = true;
		__this->set_isAnim_5((bool)1);
		// Invoke("Effecting", interval);
		float L_6 = __this->get_interval_11();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral3BAF6B3321DDA9EFE5FF2B4D32D3A0F016E36862, L_6, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TypeEffect::Effecting()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeEffect_Effecting_m0E83F1D00A1BFC04B5A2E043DB779F304ADCB4F9 (TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral3BAF6B3321DDA9EFE5FF2B4D32D3A0F016E36862);
		s_Il2CppMethodInitialized = true;
	}
	Il2CppChar V_0 = 0x0;
	{
		// if (msgText.text == targetMsg)
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_0 = __this->get_msgText_7();
		NullCheck(L_0);
		String_t* L_1;
		L_1 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_0);
		String_t* L_2 = __this->get_targetMsg_9();
		bool L_3;
		L_3 = String_op_Equality_m2B91EE68355F142F67095973D32EB5828B7B73CB(L_1, L_2, /*hidden argument*/NULL);
		if (!L_3)
		{
			goto IL_001f;
		}
	}
	{
		// EffectEnd();
		TypeEffect_EffectEnd_mD82EA7577352793CDA69C508B4F4FED0B39F3BB0(__this, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001f:
	{
		// msgText.text += targetMsg[index];
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_4 = __this->get_msgText_7();
		Text_t6A2339DA6C05AE2646FC1A6C8FCC127391BE7FA1 * L_5 = L_4;
		NullCheck(L_5);
		String_t* L_6;
		L_6 = VirtFuncInvoker0< String_t* >::Invoke(74 /* System.String UnityEngine.UI.Text::get_text() */, L_5);
		String_t* L_7 = __this->get_targetMsg_9();
		int32_t L_8 = __this->get_index_10();
		NullCheck(L_7);
		Il2CppChar L_9;
		L_9 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_7, L_8, /*hidden argument*/NULL);
		V_0 = L_9;
		String_t* L_10;
		L_10 = Char_ToString_mE0DE433463C56FD30A4F0A50539553B17147C2F8((Il2CppChar*)(&V_0), /*hidden argument*/NULL);
		String_t* L_11;
		L_11 = String_Concat_m4B4AB72618348C5DFBFBA8DED84B9E2EBDB55E1B(L_6, L_10, /*hidden argument*/NULL);
		NullCheck(L_5);
		VirtActionInvoker1< String_t* >::Invoke(75 /* System.Void UnityEngine.UI.Text::set_text(System.String) */, L_5, L_11);
		// if(targetMsg[index] != ' ' || targetMsg[index] != '.')
		String_t* L_12 = __this->get_targetMsg_9();
		int32_t L_13 = __this->get_index_10();
		NullCheck(L_12);
		Il2CppChar L_14;
		L_14 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_12, L_13, /*hidden argument*/NULL);
		if ((!(((uint32_t)L_14) == ((uint32_t)((int32_t)32)))))
		{
			goto IL_0078;
		}
	}
	{
		String_t* L_15 = __this->get_targetMsg_9();
		int32_t L_16 = __this->get_index_10();
		NullCheck(L_15);
		Il2CppChar L_17;
		L_17 = String_get_Chars_m9B1A5E4C8D70AA33A60F03735AF7B77AB9DBBA70(L_15, L_16, /*hidden argument*/NULL);
		if ((((int32_t)L_17) == ((int32_t)((int32_t)46))))
		{
			goto IL_0083;
		}
	}

IL_0078:
	{
		// audioSource.Play();
		AudioSource_tC4BF65AF8CDCAA63724BB3CA59A7A29249269E6B * L_18 = __this->get_audioSource_8();
		NullCheck(L_18);
		AudioSource_Play_mED16664B8F8F3E4D68785C8C00FC96C4DF053AE1(L_18, /*hidden argument*/NULL);
	}

IL_0083:
	{
		// index++;
		int32_t L_19 = __this->get_index_10();
		__this->set_index_10(((int32_t)il2cpp_codegen_add((int32_t)L_19, (int32_t)1)));
		// Invoke("Effecting", interval);
		float L_20 = __this->get_interval_11();
		MonoBehaviour_Invoke_m4AAB759653B1C6FB0653527F4DDC72D1E9162CC4(__this, _stringLiteral3BAF6B3321DDA9EFE5FF2B4D32D3A0F016E36862, L_20, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TypeEffect::EffectEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeEffect_EffectEnd_mD82EA7577352793CDA69C508B4F4FED0B39F3BB0 (TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * __this, const RuntimeMethod* method)
{
	{
		// isAnim = false;
		__this->set_isAnim_5((bool)0);
		// EndCursor.SetActive(true);
		GameObject_tC000A2E1A7CF1E10FD7BA08863287C072207C319 * L_0 = __this->get_EndCursor_4();
		NullCheck(L_0);
		GameObject_SetActive_mCF1EEF2A314F3AE85DA581FF52EB06ACEF2FFF86(L_0, (bool)1, /*hidden argument*/NULL);
		// }
		return;
	}
}
// System.Void TypeEffect::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeEffect__ctor_m3C10101B8FB7EF93083B4F01E732FF79C733A078 (TypeEffect_t00A4E2DF13CF4719CD79060BCD639494F044C6A3 * __this, const RuntimeMethod* method)
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
// System.Void ReadmeBE2/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_m61FFAD941CD821F4F7A88DC539F890AABF3653D1 (Section_tC0C041FA2B529E2CCF9E4108176C85D4AA18F1AD * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
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
// System.Void ReadmeBE3/Section::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Section__ctor_mD71981204AE41DE505AA4CB01AD9E433C95A1A99 (Section_tACBC5A692C8DDE7DEBC589E846A848B69901C01E * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m88880E0413421D13FD95325EDCE231707CE1F405(__this, /*hidden argument*/NULL);
		return;
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * Image_get_sprite_mA6FB016B4E3FE5EFFAE4B3AEE2D2DF89C61E0AF3_inline (Image_t4021FF27176E44BFEDDCBE43C7FE6B713EC70D3C * __this, const RuntimeMethod* method)
{
	{
		// get { return m_Sprite; }
		Sprite_t5B10B1178EC2E6F53D33FFD77557F31C08A51ED9 * L_0 = __this->get_m_Sprite_37();
		return L_0;
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
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  Vector2_op_Multiply_mC7A7802352867555020A90205EBABA56EE5E36CB_inline (Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  ___a0, float ___d1, const RuntimeMethod* method)
{
	Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_0 = ___a0;
		float L_1 = L_0.get_x_0();
		float L_2 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_3 = ___a0;
		float L_4 = L_3.get_y_1();
		float L_5 = ___d1;
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_6;
		memset((&L_6), 0, sizeof(L_6));
		Vector2__ctor_m9F1F2D5EB5D1FF7091BB527AC8A72CBB309D115E_inline((&L_6), ((float)il2cpp_codegen_multiply((float)L_1, (float)L_2)), ((float)il2cpp_codegen_multiply((float)L_4, (float)L_5)), /*hidden argument*/NULL);
		V_0 = L_6;
		goto IL_0019;
	}

IL_0019:
	{
		Vector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9  L_7 = V_0;
		return L_7;
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
