struct ClassRegistrationContext;
void InvokeRegisterStaticallyLinkedModuleClasses(ClassRegistrationContext& context)
{
	// Do nothing (we're in stripping mode)
}

void RegisterStaticallyLinkedModulesGranular()
{
	void RegisterModule_Animation();
	RegisterModule_Animation();

	void RegisterModule_Audio();
	RegisterModule_Audio();

	void RegisterModule_Physics();
	RegisterModule_Physics();

	void RegisterModule_Physics2D();
	RegisterModule_Physics2D();

	void RegisterModule_TextRendering();
	RegisterModule_TextRendering();

	void RegisterModule_UI();
	RegisterModule_UI();

	void RegisterModule_IMGUI();
	RegisterModule_IMGUI();

}

void RegisterAllClasses()
{
	//Total: 61 classes
	//0. Mesh
	void RegisterClass_Mesh();
	RegisterClass_Mesh();

	//1. NamedObject
	void RegisterClass_NamedObject();
	RegisterClass_NamedObject();

	//2. EditorExtension
	void RegisterClass_EditorExtension();
	RegisterClass_EditorExtension();

	//3. Renderer
	void RegisterClass_Renderer();
	RegisterClass_Renderer();

	//4. Component
	void RegisterClass_Component();
	RegisterClass_Component();

	//5. GUILayer
	void RegisterClass_GUILayer();
	RegisterClass_GUILayer();

	//6. Behaviour
	void RegisterClass_Behaviour();
	RegisterClass_Behaviour();

	//7. Texture
	void RegisterClass_Texture();
	RegisterClass_Texture();

	//8. Texture2D
	void RegisterClass_Texture2D();
	RegisterClass_Texture2D();

	//9. RenderTexture
	void RegisterClass_RenderTexture();
	RegisterClass_RenderTexture();

	//10. RectTransform
	void RegisterClass_RectTransform();
	RegisterClass_RectTransform();

	//11. Transform
	void RegisterClass_Transform();
	RegisterClass_Transform();

	//12. TextAsset
	void RegisterClass_TextAsset();
	RegisterClass_TextAsset();

	//13. Shader
	void RegisterClass_Shader();
	RegisterClass_Shader();

	//14. Material
	void RegisterClass_Material();
	RegisterClass_Material();

	//15. Sprite
	void RegisterClass_Sprite();
	RegisterClass_Sprite();

	//16. Camera
	void RegisterClass_Camera();
	RegisterClass_Camera();

	//17. MonoBehaviour
	void RegisterClass_MonoBehaviour();
	RegisterClass_MonoBehaviour();

	//18. GameObject
	void RegisterClass_GameObject();
	RegisterClass_GameObject();

	//19. Collider
	void RegisterClass_Collider();
	RegisterClass_Collider();

	//20. Collider2D
	void RegisterClass_Collider2D();
	RegisterClass_Collider2D();

	//21. AudioClip
	void RegisterClass_AudioClip();
	RegisterClass_AudioClip();

	//22. SampleClip
	void RegisterClass_SampleClip();
	RegisterClass_SampleClip();

	//23. Animator
	void RegisterClass_Animator();
	RegisterClass_Animator();

	//24. DirectorPlayer
	void RegisterClass_DirectorPlayer();
	RegisterClass_DirectorPlayer();

	//25. Font
	void RegisterClass_Font();
	RegisterClass_Font();

	//26. Canvas
	void RegisterClass_Canvas();
	RegisterClass_Canvas();

	//27. CanvasGroup
	void RegisterClass_CanvasGroup();
	RegisterClass_CanvasGroup();

	//28. CanvasRenderer
	void RegisterClass_CanvasRenderer();
	RegisterClass_CanvasRenderer();

	//29. SpriteRenderer
	void RegisterClass_SpriteRenderer();
	RegisterClass_SpriteRenderer();

	//30. RuntimeAnimatorController
	void RegisterClass_RuntimeAnimatorController();
	RegisterClass_RuntimeAnimatorController();

	//31. PreloadData
	void RegisterClass_PreloadData();
	RegisterClass_PreloadData();

	//32. Cubemap
	void RegisterClass_Cubemap();
	RegisterClass_Cubemap();

	//33. Texture3D
	void RegisterClass_Texture3D();
	RegisterClass_Texture3D();

	//34. LevelGameManager
	void RegisterClass_LevelGameManager();
	RegisterClass_LevelGameManager();

	//35. GameManager
	void RegisterClass_GameManager();
	RegisterClass_GameManager();

	//36. TimeManager
	void RegisterClass_TimeManager();
	RegisterClass_TimeManager();

	//37. GlobalGameManager
	void RegisterClass_GlobalGameManager();
	RegisterClass_GlobalGameManager();

	//38. AudioManager
	void RegisterClass_AudioManager();
	RegisterClass_AudioManager();

	//39. InputManager
	void RegisterClass_InputManager();
	RegisterClass_InputManager();

	//40. Physics2DSettings
	void RegisterClass_Physics2DSettings();
	RegisterClass_Physics2DSettings();

	//41. GraphicsSettings
	void RegisterClass_GraphicsSettings();
	RegisterClass_GraphicsSettings();

	//42. QualitySettings
	void RegisterClass_QualitySettings();
	RegisterClass_QualitySettings();

	//43. PhysicsManager
	void RegisterClass_PhysicsManager();
	RegisterClass_PhysicsManager();

	//44. AnimationClip
	void RegisterClass_AnimationClip();
	RegisterClass_AnimationClip();

	//45. Motion
	void RegisterClass_Motion();
	RegisterClass_Motion();

	//46. TagManager
	void RegisterClass_TagManager();
	RegisterClass_TagManager();

	//47. AudioListener
	void RegisterClass_AudioListener();
	RegisterClass_AudioListener();

	//48. AudioBehaviour
	void RegisterClass_AudioBehaviour();
	RegisterClass_AudioBehaviour();

	//49. AnimatorController
	void RegisterClass_AnimatorController();
	RegisterClass_AnimatorController();

	//50. ScriptMapper
	void RegisterClass_ScriptMapper();
	RegisterClass_ScriptMapper();

	//51. DelayedCallManager
	void RegisterClass_DelayedCallManager();
	RegisterClass_DelayedCallManager();

	//52. RenderSettings
	void RegisterClass_RenderSettings();
	RegisterClass_RenderSettings();

	//53. MonoScript
	void RegisterClass_MonoScript();
	RegisterClass_MonoScript();

	//54. MonoManager
	void RegisterClass_MonoManager();
	RegisterClass_MonoManager();

	//55. FlareLayer
	void RegisterClass_FlareLayer();
	RegisterClass_FlareLayer();

	//56. PlayerSettings
	void RegisterClass_PlayerSettings();
	RegisterClass_PlayerSettings();

	//57. BuildSettings
	void RegisterClass_BuildSettings();
	RegisterClass_BuildSettings();

	//58. ResourceManager
	void RegisterClass_ResourceManager();
	RegisterClass_ResourceManager();

	//59. LightmapSettings
	void RegisterClass_LightmapSettings();
	RegisterClass_LightmapSettings();

	//60. RuntimeInitializeOnLoadManager
	void RegisterClass_RuntimeInitializeOnLoadManager();
	RegisterClass_RuntimeInitializeOnLoadManager();

}
