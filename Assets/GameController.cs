using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameController : MonoBehaviour {

	public Text StoryText;
	public Text singleButtonText;
	public Text choiceButtonText01;
	public Text choiceButtonText02;
	public GameObject singleButton;
	public GameObject choiceButtons; 
	public Text hoverText;
	public GameObject imageScene1;
	
	int currentScene;
	
	
	// Use this for initialization This is the first scene. 
	void Start () {
		currentScene = 1; 
		choiceButtons.SetActive(false);
		singleButton.SetActive(true);
		
		StoryText.text = "“I am not a refugee. I am a person like you“\n" +
		"- heard at a Syrian refugee camp";

		
		singleButtonText.text = "Start game"; 
	}

	
	//Switch from scene 1 to scene 2 with the singlebutton function. 
	void sceneController(int buttonPressed) {

		if (currentScene == 1 && buttonPressed == 1)
		{
			choiceButtons.SetActive(false);
			singleButton.SetActive(true);
			StoryText.text ="August 2, 2014";
			currentScene = 2;
			buttonPressed = 0;	

			Destroy(imageScene1);
			
			singleButtonText.text = "Continue";
		}
		
	//Switch from scene 2 to scene 3 with the single button. Disable singlebutton on scene 3, and 
	//enable choicebuttons
		if (((currentScene == 2 && buttonPressed == 1)||(currentScene == 56 && buttonPressed == 1)||(currentScene == 64 && buttonPressed == 1)))
		{
			choiceButtons.SetActive(true);
			singleButton.SetActive(false);
			StoryText.text ="“Adnan? Are you up?”\n" + 
				"I have to be at work a little earlier and I need you to follow your brother to school.”\n\n" + 
					"Balancing between sleep and consciousness, Adnan registers how his mother’s knocking gradually intensifies, and with every pound on the solid door, his comfortable dream of becoming a world famous musician evaporates more and more.";
			currentScene = 3;
			buttonPressed = 0;
			
			choiceButtonText01.text = "Ignore her and say nothing.";
			choiceButtonText02.text = "“Tarek can walk to school himself, he is 11 and it is only 5 minutes away.”";
		}
	
	//Switch from scene 3 to scene 4 with choicebutton01. Choicebuttons are enables, and singlebutton is disabled
		if (currentScene == 3 && buttonPressed == 2)
		{
			choiceButtons.SetActive(false);
			singleButton.SetActive(true);
			StoryText.text ="“…..Adnan, will you answer me?”\n" +
				"Adnan knew the silent treatment wouldn’t work. But this was just the first time in weeks he has had a pleasant dream.\n" + 
					"He feels the frustration bubbling in his chest.";
			currentScene = 4;
			buttonPressed = 0;
			singleButtonText.text = "“Tarek can walk to school himself, he is 11 and it is only 5 minutes away.”";
			
		}
	
	//Switch from scene 3 to scene 5 with choicebutton02 or from switch from scene 4 to scene 5
	//with singlebutton.
		if ((currentScene == 3 && buttonPressed == 3)||(currentScene == 4 && buttonPressed == 1))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="With a slight squeak the door is flung open and Adnan braces for the reaction he knew would follow such a response.\n" + 
				"<a name=\"Manjib\">“You KNOW what happened to the children in Manbij!”</a>\n\n" +
				"Standing in the middle of his room, his mothers shrill voice echoes against the bare walls.\n" +
 				"“So you WILL get up, you WILL walk your brother to school and that will be that – understood?”";
			currentScene = 5;
			buttonPressed = 0;
			singleButtonText.text = "Continue";
			hoverText.text = "In May 2014, Islamic terrorist group ISIS, also known locally as Daesh, kidnapped 153 school children.\n\n" + 
			"They were all between 13 and 14.";
		
		}
	//Switch from scene 5 to scene 6 with the singlebutton. Singlebutton enabled, and choicebuttons disabled.
		if (currentScene == 5 && buttonPressed == 1)
		{
			
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="Adnan wants to argue that she is being paranoid and that giving into\n" + 
				"fear means that those Daesh bastards win – isn’t that what his father always say?\n" + 
					"But as he lifts his head from the pillow to do so, he meets his mother’s tense eyes and recognises that this is a fight he should not start.\n\n" + 
					"His mother is a strong woman, but standing there in the middle of his room, it is obvious that the war has taken a toll on her. Their little family is everything to her, and as tragedy and chaos continues to unfold around them, she has gradually become more and more anxious.\n\n" +
					"She tries her best to hide it, of course - to be strong for them all. But he knows she cries often. He can always tell, because it makes her mat green eyes flare up - as they are starting to do now.";
			currentScene = 6;
			buttonPressed = 0;
			singleButtonText.text = "“Sorry mother, I know. I just had a good dream for once.\n" +
		 	"I’ll get up, just give me a second.”";
		}
		
	//Switch scene 6 to scene 7 with singlebutton. Singlebutton enabled and choicebuttons disabled.
		if (currentScene == 6 && buttonPressed == 1)
		{
			
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="His mother’s face instantly relaxes, and she lets out a tired sigh as she rubs her temples.\n" +
				"“I am sorry for yelling at you, Adnan. I didn’t mean too. I am glad you had a good nights sleep, you deserve that.”\n" + 
				"She forces a smile, and he can tell her thoughts have shifted from anxiety to despair over the small luxuries they cannot seem to enjoy."; 
			currentScene = 7;
			buttonPressed = 0;
			singleButtonText.text = "“It will be okay, mother. This won’t be forever, and we still have each other”."; 
		}
	
	//Switch scene 7 to scene 8 with singlebutton. Singlebutton enabled and choicebutton disabled.
		if (currentScene == 7 && buttonPressed == 1)
		{
			
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="Adnan is not really sure if he believe that himself – that this war won’t be forever.\n" + 
				"They have all said that for so long, the words seem empty now. But his mother does let out a genuine smile, as she comes closer and purr up his messy, black hair. Her fingers feel like frail twigs against his scalp.\n" + 
				"“There is a bit of breakfast for you at the table, but you better hurry before Tarek eats all the <a name=\"Manjib\">Halaweh.”</a>"; 
			currentScene = 8;
			buttonPressed = 0;
			singleButtonText.text = "“How can he be so little and eat so much? I shouldn’t be physically possible.”";
			hoverText.text = "Halaweh is a sesame or tahini-based spread flavoured with either almonds, pistachious or chocolate.\n\n" +
			"It is a common food for breakfast in Syria and is often eaten with cheese and flat bread";
		}
	
	//Switch from scene 8 to scene 9 with singlebutton. Singlebutton enabled and choicebuttons disabled.
		if (currentScene == 8 && buttonPressed == 1)
		{
			
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“When you were 11, you ate like a horse too. Remember Sami’s Sunday brunches? He is just growing to be as tall as you.”\n\n" +
				"Adnan vaguely remember Sunday brunch at his uncle Sami’s house. He recalls it was a big deal when he was younger, primarily because of all the food – <a name=\"food\">labneh, makdous and his aunt Amena’s great fatteh.</a>\n" + 
				"He probably did eat that much when he was 11 as well. Didn’t he also used to fight with his cousin Rifat over the last scoop of fatteh or the last bit of makdous?\n" + 
				"Oh yes, they did. He can suddenly very vividly see the two of them sitting on opposing sites of the table, arguing and negotiating – often very heatedly."; 
			currentScene = 9;
			buttonPressed = 0;
			singleButtonText.text = "Continue";
			hoverText.text = "Labneh is strained yoghurt and it is often eaten with olive oil and flat bread.\n\n" + 
				"Makdous is pickled eggplants stuffed with walnuts and peppers and Fatteh is a dish with roasted pitta bread, chickpeas and yoghurt.";
		}
	
		if (currentScene == 9 && buttonPressed == 1)
		{
			
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="Caught up in his memories, Adnan hasn’t noticed his mother has left.\n" + 
			"He has wanted to ask her if she thinks Sami, Amena and Rifat will ever return. If she thinks they will ever move back to their neighbourhood and the house with the blue window panes.\n\n" + 
					"But he knows what she will say – either nothing or “maybe” – and that the last response would be a white lie to make him feel better.\n" + 
				"<a name=\"university\">Ever since the bombing at his and Rifat’s university</a>, something inside aunt Amena broke.\n" + 
				"Rifat was in one of the bombed buildings, and though he wasn’t hurt, that meant little to his aunt. He had been in harms way, and she could not protect him here."; 
			currentScene = 10;
			buttonPressed = 0;
			singleButtonText.text = "Continue";
			hoverText.text = "In 2013, 87 people, mostly students, lost their lives when two bombs hit Aleppo University.\n\n" + 
			"It is still unknown who was behind the attack.";
		}
	
		if (currentScene == 10 && buttonPressed == 1)
		{
			
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="His own parents had reacted strongly as well. His father had rushed to the university from work, and Adnan still vividly recall how his father’s face dissolved into tears when he found him unscaved.\n" + 
				"Seeing his strong and otherwise so composed father fall apart like that was almost more frightening than the actual bombing.\n\n" + 
				"His aunt had wanted to leave Syria after the bombing, and so they did soon after. Adnan hadn’t really known that the last time he saw his uncle, aunt and cousin it was goodbye. He wished he had known, so he could have hugged them and said goodbye properly. Who knows when they will see each other again – if they ever would?\n\n" +
				"“Adnan, the halawa is disappearing.” His mother’s call yanks him from thoughts, but the familiar knot in his stomach remains."; 
			currentScene = 11;
			buttonPressed = 0;
			singleButtonText.text = "Continue";
		}
		
		if (currentScene == 11 && buttonPressed == 1)
		{
			
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="As his mother had warned very little Halaweh is left in the bowl, maybe just enough to spread on one of the flat breads.\n" + 
			"Tarek is stitting on the couch watching TV while his mother is getting ready for work.\n\n" + 
			"His farther doesn’t seem to be in the house, weren’t he supposed to be home today?";	
			currentScene = 12;
			buttonPressed = 0;
			choiceButtonText01.text = "“Mother where is farther, doesn’t he have the day off work?”";
			choiceButtonText02.text = "“Thank you for saving so much food for me, Tarek.”";
		
		}
		
		
		if (currentScene == 12 && buttonPressed == 3)
		{
			
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“I’m growing, I need it. You are already grown.” Tarek’s eyes don’t leave the screen. As usual he is watching the same rather childish cartoon about a word traveller, who explores the far corners of the world with his friends and family.\n" + 
				"Tarek never used to watch cartoons that much. He used to play on his PlayStation – usually car racing games or shooting games – but he haven’t touch his console for ages now.\n" + 					
				"Tarek told him one night that the games remind him of war and chaos. Adnan remember how that comment made the knot in his stomach twist.";
			currentScene = 13;
			buttonPressed = 0;
			singleButtonText.text = "“Mother where is farther, doesn’t he have the day off work?”";
			
		}
		
		if ((currentScene == 13 && buttonPressed == 1)||(currentScene == 12 && buttonPressed == 2))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“He is next door talking to Mohammad.” Her response surprises Adnan.\n\n" + 
				"Mohammad is their neighbour, and it is no secret that Mohammed always have thought very little of their family. He once said that he doesn't think they belong in the neighbourhood, because they are poor. Adnan remembers how it infuriated him to hear that. His family might not be as rich as Mohammad and his family, but they had what they needed and Mohammed had no business saying what he did.\n\n" + 
				"Mohammed's comment had upset his father as well and he had barely said hello to him when their paths crossed in the front yard. So why is he suddenly talking so much with him? This was the third time in a week, and every time he comes back from Mohammad's house, he has a distant and almost sad look on his face."; 
			currentScene = 14;
			buttonPressed = 0;
			singleButtonText.text = "“Hasn’t he talked to Mohammad a lot lately?";
			
		}
		
		if (currentScene == 14 && buttonPressed == 1)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="His mother doesn’t answer. Maybe she didn’t hear him, but before Adnan can ask again, she swiftly kisses both him and Tarek goodbye and leaves the house with the usual “Be safe”.\n\n" +
				"Adnan goes to the kitchen table to spread what little Halawa is left on one of the Halaweh breads. As he eats, he leans towards the table facing Tarek’s back on the couch.";
			currentScene = 15;
			buttonPressed = 0;
			choiceButtonText01.text = "“Tarek, do you know why farther is talking to Mohammad all the time? He seems worried every time they talk.”";
			choiceButtonText02.text = "“Are you packed and ready to go? I am walking you to school today.”";
			
		}
		
		if (currentScene == 15 && buttonPressed == 2)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“Father is worried all the time.” Tarek doesn’t look away from the screen.";
			currentScene = 16;
			buttonPressed = 0;
			singleButtonText.text = "“Okay then. Are you packed and ready to go? I am walking you to school today.”";
			
		}
	
		if ((currentScene == 16 && buttonPressed == 1)||(currentScene == 15 && buttonPressed == 3))
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="“I can walk myself. You don’t have to take me, it is just 5 minutes and I have done it a million times.”\n" + 
			"Tarek turns around on the couch and looks at him."; 
			currentScene = 17;
			buttonPressed = 0;
			choiceButtonText01.text = "“I told mother I would follow you to school, so that is what I’ll do. Come on.”";
			choiceButtonText02.text = "“I know you have, but times have changed. It is not safe for you to walk alone anymore.";
			
		}
	
		if (currentScene == 17 && buttonPressed == 3)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="“I know it isn’t safe. So why should we both do it, that will make two of us unsafe instead of just one.”\n\n" + 
				"Tarek bites his lip as he does when he is either upset or scared. Right now the casuse seems as a combination of the two.";
			currentScene = 18;
			buttonPressed = 0;
			choiceButtonText01.text = "“I told mother I would follow you to school, so that is what I’ll do. Come on.”";
			choiceButtonText02.text = "Go to Tarek and give him a hug.";
		}
	
		if (currentScene == 18 && buttonPressed == 3)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="Tarek feel so small in Adnan’s arms, a great contrast to how he has come to think and act as an adult.\n" + 
				"”I am okay.” Tarek slowly releases himself from Adnan, and sighs in the same way his mother did earlier. ”Let’s go then, so I won’t be late.” As Tarek goes to put on his shoes, Adnan grabs his little school bag.\n\n" +
				"”Do you have classes today, Adnan?” Tarek has come to ask that often after the university bombing. ";
			currentScene = 19;
			buttonPressed = 0;
			singleButtonText.text = "”No, but I am meeting Elias and Sayid at the university to rehears.”";
		}
	
		if ((currentScene == 17 && buttonPressed == 2)||(currentScene == 18 && buttonPressed == 2))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="As Tarek goes to put on his shoes, Adnan grabs his little school bag.\n" +
				"”Do you have classes today, Adnan?” Tarek has come to ask that often after the university bombing. ."; 
			currentScene = 20;
			buttonPressed = 0;
			singleButtonText.text = "”No, but I am meeting Elias and Sayid at the university to rehears.”";
			
		}
		
		if ((currentScene == 20 && buttonPressed == 1)||(currentScene == 19 && buttonPressed == 1))
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="Tarek bites his lip in response, and continues to tie his trainers. He is quiet for a few minutes, but then he suddenly looks at Adnan. “I think you should form a band. Then you could tour the world and become famous, like Queen.” Ever since Adnan started his degree in music, Tarek has kept insisting that he should form a band with his best friends Sayid and Elias. \n" + 
				"And the thought does send a thrilling sensation through Adnan."; 
			currentScene = 21;
			buttonPressed = 0;
			choiceButtonText01.text = "“Well, let’s see, I need to finish university first. Still have those two exams to finish.”";
			choiceButtonText02.text = "“Sure, and then you could be my manager, how about that?”";
		}
			
		if ((currentScene == 18 && buttonPressed == 3)||(currentScene == 21 && buttonPressed == 2))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“I know, but after you exams?” Tarek tilts his head and gived Adnan an encouraging smile.\n\n" +
				"Adnan knows he means well, but Tarek’s question brings up a familiar fear. Adnan knows what probably awaits him after his exams, and it could not be further from a career in music.\n" + 
					"He knows there is a big chance he will be called in to join the national army and fight in this god-forsaken war – fighting for the devil against the devil as he sees it.\n" + 
					"He could join the rebels in his village, the ones who seem to fight for the Syria he used to know. But he doesn’t want to fight, he doesn’t want to hurt someone; kill someone. \n" + 
					"He has thought about fleeing when he is done with university – but where would he go? And how could he leave his family, his friends - his home?\n\n" +
					"“Adnan, are you listening?”";
			currentScene = 22;
			buttonPressed = 0;
			singleButtonText.text = "“Sure, after my exams I will start a band and then you could be my manager, how about that?”";
		}
	
		if ((currentScene == 21 && buttonPressed == 3)||(currentScene == 22 && buttonPressed == 1))
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="Tarek smiles and shakes his head. “I still want to be a teacher like mother, I think.”";
			currentScene = 23;
			buttonPressed = 0;
			choiceButtonText01.text = "“Then you have to be on time for your classes, come on.”";
			choiceButtonText02.text = "“Well, if you change your mind, you can be a part of my music empire anytime. But first, we need to get you to school.”";
		}
		
		if ((currentScene == 23 && buttonPressed == 3)||(currentScene == 23 && buttonPressed == 2))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="Outside the house, their father is talking to Mohammed at his front door. Both of their faces are frowned, and they seem to talk with lowered voices.";
			currentScene = 24;
			buttonPressed = 0;
			singleButtonText.text = "“Farther, I am taking Tarek to school and I will go to university after to rehearse with Sayid and Elias.”";
		}
		
		if (currentScene == 24 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="His farther looks up with what can only be described as a forced smile. “Just be back for supper tonight, and be safe.” He waves goodbye to them, and turns towards Mohammed again.\n\n" +  
				"Adnan finds it odd that his farther would say that, when has he ever missed supper?\n" + "“Adnan come on, I will be late.” Tarek yanks in his shirt.";
			currentScene = 25;
			buttonPressed = 0;
			singleButtonText.text = "Continue";
		}
		
		if (currentScene == 25 && buttonPressed == 1)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="As they make their way through their neighbourhood, Adnan cannot help but think of how alive it used to be.\n" + 
				"Sure people are still outside, sure they still talk and occassionally laugh – the people of xx are strong, proud people. But it feels like a permanent, invisible cloud hangs over their head even on a sunny day like today.\n\n" +
				"“I think father misses uncle Sami a lot.” Tarek looks to the ground and continues: “I've heard him and mother talk about him a lot lately. I don’t think they know I can hear them.”";
			currentScene = 26;
			buttonPressed = 0;
			choiceButtonText01.text = "“What do they say?”";
			choiceButtonText02.text = "“I am sure both father and mother misses him a lot. We all miss him, Amena and Rifat.”";
		}
		
		if (currentScene == 26 && buttonPressed == 2)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“They just mention his name, Germany and something with water that is cold. I cannot hear much else. Mother started crying last time I heard them.”";
			currentScene = 27;
			buttonPressed = 0;
			singleButtonText.text = "“When was this?”";
		}
		
		if (currentScene == 27 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“Last night and the night before as well.” Tarek starts biting his lips again.";
			currentScene = 28;
			buttonPressed = 0;
			singleButtonText.text = "“I am sure they just miss him, Amena and Rifat very much. We know they are safe in Germany.”";
		}
		
		
		if ((currentScene == 26 && buttonPressed == 3)||(currentScene == 28 && buttonPressed == 1))
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="“Do you think we will ever get to visit them?”";
			currentScene = 29;
			buttonPressed = 0;
			choiceButtonText01.text = "“Not sure, Germany is far away, but maybe when the war is over, they will all come back home.”";
			choiceButtonText02.text = "“Once the war is over, I am sure we will.”";
			
		}
	
		if ((currentScene == 29 && buttonPressed == 3)||(currentScene == 29 && buttonPressed == 2))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“I don’t think the war will ever be over.” Tarek kicks a small stone towards the school entrance.\n" + 
				"Adnan feels like he should reassure him as he did with his mother earlier. Then again, he is tired of saying things he doesn’t believe in, and he knows Tarek have heard and seen to much to believe it anyway.\n\n" + 
 				"So instead, Adnan hands Tarek his bag, and watches him walk towards the school.";
			currentScene = 30;
			buttonPressed = 0;
			singleButtonText.text = "“Be safe, Tarek.”";
													
		}
		if (currentScene == 30 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="The busride to the University is quiet. The few people sitting around Adnan just stare silently out of the window. They all seem to be deeply submerged in their own thoughts, and from the frowned faces he can see, these thought doesn’t seem pleasant.\n\n" +
					"The silence is suddenly defeaning to Adnan, and he puts his headphones on to listen to Queen. It usually always calms him down, or at least it takes his mind somewhere far away from reality. The same happens when he, Elias and Sayid gets together to jam, whether it's to rehears for a project or just to hangout\n" + 
					"They have all been close friends since they were children, but their friendship got even closer when they started playing music together. It all started with them making instruments out of kitchen equipment and stuff they found around town, and now their are all studying music\n" +
					"There is no doubt that their friendship has really helped him keep his spirit during all the chaos. With Freddie Mercury singing 'Show must go on', Adnan cannot help but smile for the rest of the buside.";
			currentScene = 31;
			buttonPressed = 0;
			singleButtonText.text = "Continue";
		}
						
	
		if (currentScene == 31 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”Hey, ready to make the walls vibrate?” Adnan closes the door to the rehearsal room, flips his headphones to his neck and and turns to his friends.\n" + 
				"Elias looks at Adnan from his drumset and seems to force a smile. ”Yeah sure.”\n" +
					"Sayid is standing at the opposite side of the room, looking out the window. He doesn't moved and he doesn't say anything.\n\n" + 
					"Sayid is usally always in a good mood, so this behaviour immediately strikes Adnan as out of the ordinary. Sayid was the one who cheered them all up after the university bombing, and he helped Adnan cope when Sami, Amena and Rifat suddenly left Syria. He was the one you went to when you needed someone to talk to and tell you that things were going to be okay";   
			currentScene = 32;
			buttonPressed = 0;
			singleButtonText.text = "“Is everything alright?”";
		}
		
		if (currentScene == 32 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="Sayid still doesn't say anything, and Elias just stares at the drumsticks in his lab. Seconds go by, but it feels like hours and Adnan feel the knot in his stomach grow.\n\n" + 
					"“Come on, why aren't you saying anything? Is this about Maya? I thought you had both let go off her?”\n" + 
					"Maya was a girl at the university, and both Sayid and Elias liked her. It had caused some friction in their friendship, but they hadn't talked about her in months, and ... Before Adnan could finish his thought, Sayid's voice breaks the silence.\n" + 
					"”I am leaving for Jordan tomorrow.” Adnan feels as if the wind is knocked out of him, and as he tries to digest what Sayid just said, his his legs start to shake.";
			currentScene = 33;
			buttonPressed = 0;
			singleButtonText.text = "“What?”";
		}
	
		if (currentScene == 33 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”My parents doesn’t think it is safe in Syria anymore. Daesh, the rebels, the army - it is all coming closer, and ..” Sayid becomes quite. Still facing the window, he rubs his face with his sleeve, and takes a deep breath ”..and they want us all to flee to somewhere safer.”\n\n" +
					"Adnan doesn't  know what to say, his legs are now visibly shaking. They had all three talked about fleeing if things got bad, but it was always something they just talked about. Not something that ever seemed real, no matter how many bombs or gunshots went off. This was their home.\n\n" + 
					"”My father knows someone in Jordan, and he says I can get work as a carpenter, so I won't be a refugees or anything. We can still live our lives normally.” Sayid's voice seem to break with every word, and he is still facing the window.\n\n" +
					"Adnan can feel how his shock is turning to frustration.";
			currentScene = 34;
			buttonPressed = 0;
			singleButtonText.text = "“Normal life? Jordan is not a part of your normal life, and what do you know about carpentry? You are a musician?”";
		}
	
		if (currentScene == 34 && buttonPressed == 1)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="”I can learn. I have to learn.” Sayid rubs his face with his sleeve again.\n\n" +   
				"Adnan knows that Sayid's dream is to become a famous pianist, just like Adnan wants to be a famous guitarist and Elias a famous drummer. They all dream of music – not this, not fleeing and becoming a carpenter. This is so wrong.";
			currentScene = 35;
			buttonPressed = 0;
			choiceButtonText01.text = "“You can’t just leave. What about our dreams of becoming musicians?”";
			choiceButtonText02.text = "“So, when do you leave tomorrow?”";
		}
	
		if (currentScene == 35 && buttonPressed == 2)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”I don’t have a choice, Adnan. I cannot leave my family, I won’t. But .. I’ll miss you both.”\n\n" +
				"Adnan wants to flee the room, curl up on the floor and scream all at the same time. This cannot be happening, this cannot be real.\n" +  
				"From the drumset Adnan can hear Elias sniffing, and the sound of it makes his own eyes water. They have all been friends for so long, and all the memories of them together rush through Adnan's head. How they tried to climb the roof of his house. How they tried to ride a neighbour dog as a horse. How they discovered music together, and how it had brought them so much happeniess to jam together and dream about their future.";
			currentScene = 36;
			buttonPressed = 0;
			singleButtonText.text = "“When do you leave tomorrow?”";
			
		}
		if ((currentScene == 35 && buttonPressed == 3)||(currentScene == 36 && buttonPressed == 1))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”In the morning..,” Sayid finally turns around and face them with tears running down his face. ”..so this is goodbye, I guess.”\n\n" +
				"Elias continues to look at his drumsticks and his body starts to tremble as his sniffing intensifies. Adnan's eyes fill up with tears to the point where the entire room is just a blur. He senses Sayid coming closer and without saying anything, he hugs him. They never hugged before, but they never cried in front of each other either. This would have been a great moment in their relationship if it wasn't for the circumstances.\n\n" + 
				"Buried in Sayid's shoulder, Adnan feels Elias' trembling arms on his back. They don't play any music that day, they just stand in a circle togther and say goodbye without a word."; 
			currentScene = 37;
			buttonPressed = 0;
			singleButtonText.text = "Continue";	
		}
		
		if (currentScene == 37 && buttonPressed == 1)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="When Adnan comes through his front door a few hours later, he feels exhaused and hazy. The reality of the situation is hard to bear - one of his best friends is leaving and who knows when they will see each other again, if ever. That thought makes him feel sick.\n\n" +
				"”How was you day, Adnan?” His mother yells from the kitchen, and her question is like a stab to the chest";		
			currentScene = 38;
			buttonPressed = 0;
			choiceButtonText01.text = "“Fine. I am just going to my room. Let me know when dinner is ready.”";
			choiceButtonText02.text = "“Sayid is leaving for Jordan tomorrow.";
			
		}
		
		if (currentScene == 38 && buttonPressed == 3)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”What?” His mother’s face appears from the kitchen at the other end of the entrance.";		
			currentScene = 39;
			buttonPressed = 0;
			singleButtonText.text = "“His father doesn’t think it is safe in Syria anymore.”";
			
		}
	
		if (currentScene == 39 && buttonPressed == 1)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="His mother’s face suddenly tense up. ”Why do they think that?”";		
			currentScene = 40;
			buttonPressed = 0;
			choiceButtonText01.text = "“Because this country is falling apart, that’s why!”";
			choiceButtonText02.text = "”They just do. It doesn't matter why, they are leaving and that is it.”";
			
		}
		
		if ((currentScene == 40 && buttonPressed == 2)||(currentScene == 40 && buttonPressed == 3))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="Adnan can see his mother instantly regrets asking, and she now comes closer to give him a hug. They just stand there silently in the entrance hall for a few minutes.\n\n" +  
			"”Your father is in the livingroom, he wants to talk to you and Tarek.” As she relases Adnan from her embrace, she turns around without looking at him. Is she crying?";
			currentScene = 41;
			buttonPressed = 0;
			singleButtonText.text = "“Are you okay?”";
			
			
		}
		
		if (currentScene == 41 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”Please, just go to your father.” Her voice seems to shake slighyly, as she then walks back into the kitchen. Adnan can feel the knot in his stomach again.";
			currentScene = 42;
			buttonPressed = 0;
			singleButtonText.text = "“Okay, I will be there in a second.”";
			
		}
		
		if (currentScene == 38 && buttonPressed == 2)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="His mother's face appears from the kitchen. ”Please, go to your father first. He is in the livingroom with Tarek, and he wants to talk to you before dinner.”";
			currentScene = 43;
			buttonPressed = 0;
			singleButtonText.text = "“Okay, I will be there in a second.”";
			
		}
		
		
		if ((currentScene == 43 && buttonPressed == 1)||(currentScene == 42 && buttonPressed == 1))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="Adnan’s father and Tarek are sitting on the couch, and as Adnan enters the livingroom they both look at him without saying anything.\n\n" + 
			"His father looks nervous, and it seems as if Tarek has picked up on that as well, as he has begun to bite his lip.";
			currentScene = 44;
			buttonPressed = 0;
			singleButtonText.text = "“You wanted to talk to me?”";

		}
	
		if (currentScene == 44 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”Sit down, son.” His father pads on the couch cushion next to him. The situation makes Adnan feel uneasy, something is wrong. His father used to ask him to sit down when he had done something wrong as a child. But his father doesn't seem angry as he would normally be. He rather seems flustered and .. sad?\n\n" +
				"”It is time to leave Syria, son.” His father looks at him and nods as if he has to convince himself of what he is saying. With his words still echoing in the livingroom, both Adnan and Tarek just stare at their father. Tarek has gone white as a piece of paper, and Adnan feel his legs shake uncontrollably for the second time today.\n\n" +
					"”The best thing is to go to Europe, like uncle Sami.” His father looks down on his hands and takes a depp breath before continuing. ”Me and your mother have saved up for the trip for months, but I am afraid we don’t have enough money for all of us.” The knot in Adnan's stomach explodes.";		
			currentScene = 45;
			buttonPressed = 0;
			singleButtonText.text = "”What do you mean?”";
			
		}
	
		if (currentScene == 45 && buttonPressed == 1)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="Adnan knows what his father means, but as to rip himself from a nightmare, he has to question what is happening\n\n" + 
				"”It means that only you and Tarek can go.” Adnan can hear his mother crying in the kitchen. Tarek just sits curled up in his seat and stares into thin air - mute and still pale as a corpse.\n\n" +
				"”No. No, we are not going anywhere without you and mother.” Adnan shakes his head and looks at his father, who won’t look him in the eye.";	
			currentScene = 46;
			buttonPressed = 0;
			choiceButtonText01.text = "“We can just wait a few more months to leave. Then we can safe up the rest and leave together. I’ll get a job!”";
			choiceButtonText02.text = "“Sayid and his family are fleeing to Jordan, why can we just do that too? That is not as expensive as Europe.”";
		}
		
		if (currentScene == 46 && buttonPressed == 2)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”It cannot wait, Adnan. The war is coming closer by the minute, and you and Tarek need to leave. We want you to have a future, not to end your lives in this war.” His father still doesn't look at him, and his answer infuriates Adnan.";
			currentScene = 47;
			buttonPressed = 0;
			singleButtonText.text = "”So we shouldn’t end our lives in the war, but you and mother should?”";
		}
	
		
		if (currentScene == 47 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”Your mother and I are old, we have lived our lives already. But it doesn’t have to come to that either. Daesh will not care about two old people, but you and Tarek will be interesting to them. I will not allow either of you to be taken by them or worse!” For the first time since they sat down, Adnan's father looks at him. His eyes are red and tears are flickering in the bottom of his eye.\n\n" + 
				"”This is the best for you and Tarek, and as your parents it is our job to keep you safe, no matter what.” Adnan can tell his parents are set on their decision, but he cannot accept this, he simply won't. Memories start to flood his mind as they did earlier - he sees his father teaching him how to ride a bike and his mother rinsing a wound on his knee. All of them sitting at the dinner table and laughing at Tarek, who put a pea in his nose.\n\n" + 
				"No, he cannot accept this!"; 
			currentScene = 48;
			buttonPressed = 0;
			singleButtonText.text = "“Sayid and his family are fleeing to Jordan, why can we just do that too? That is not as expensive as Europe.”";
		}
		
		if ((currentScene == 48 && buttonPressed == 1)||(currentScene == 46 && buttonPressed == 3))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”There is no future for you in Jordan. There are no jobs for you, and you will never fulfill your dream of becoming a musician. You and Tarek have to go to Europe. Uncle Sami will take care of you until your mother and I can leave as well or the war ends.”\n\n" +
			"Tarek has now begun to cry, and he suddenly looks so small and frail in his seat.";
			currentScene = 49;
			buttonPressed = 0;
			singleButtonText.text = "“I don’t care about music, I just want us to stay together. You cannot make me leave; make us leave.”";
			
		}
	
		if (currentScene == 49 && buttonPressed == 1)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="”Please, Adnan.” His mother has appeared from the kitchen. Her eyes are a mix of red and bright green, and her face is all puffed.\n\n" +
				"”You and Tarek have to go. I will not survive if something happened to either of you, and we all know what is coming. I cannot keep you safe here.” She folds her hands as if to beg him, and tears tremble her as she looks at him.\n\n" +
			"Adnan doesn't know whether to give in or keep fighting."; 
			currentScene = 50;
			buttonPressed = 0;
			choiceButtonText01.text = "“No, mother. I will not leave and neither will Tarek. If we, leave we leave together.”";
			choiceButtonText02.text = "“When would we be leaving?";
		}
	
		if (currentScene == 50 && buttonPressed == 3)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="His mother sighs in relief, but her tears only seem to insensify.\n\n" + 
			"”You will leave tomorow morning. Mohammad and his family are leaving too. He will take you to the Turkish border, where he will set you up with someone who can help you get to Europe. His father stops to wipe a tear from his cheek. ”You should be with uncle Sami in Germany within a month.”";
			currentScene = 51;
			buttonPressed = 0;
			choiceButtonText01.text = "“So that is why you've been talking so much with Mohammed these past weeks?”";
			choiceButtonText02.text = "“Why so sudden? I will not have time to say goodbye to Elias. Sayid leaves tomorrow too, he will be all alone.”";
			
		}
		
		if (currentScene == 50 && buttonPressed == 2)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="”We cannot stay here, Adnan.” His mother shakes her head and lower her eyes in despair."; 
			currentScene = 52;
			buttonPressed = 0;
			singleButtonText.text = "“And me and Tarek will not leave you here. So either we all leave or we all stay.”";
			
		}
	
		if (currentScene == 52 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="His mother then looks up at his father. They look at each other for a while, and then, without saying a word, they seem to silently agree not to push this anymore.\n\n" + 
			"”Okay, son, okay”. His father looks at Adnan and then at Tarek.”But we cannot stay here. We have to leave Syria as soon as possible.”"; 
			currentScene = 53;
			buttonPressed = 0;
			singleButtonText.text = "“We can leave for Jordan like Sayid and his family?”";
			
		}
		
		if (currentScene == 53 && buttonPressed == 1)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="“I don't know anyone in Jordan, Adnan. If we leave, we leave for Lebanon. I have an old friend there, who can help us.” His father takes a deep breath as to take in the new plan. His mother doesn't say anything, but she has stopped crying."; 
			currentScene = 54;
			buttonPressed = 0;
			choiceButtonText01.text = "“But Sayid can help us.”";
			choiceButtonText02.text = "“As long as we stay together, I don't care where we go.”";
			
		}
		
		
		if (currentScene == 54 && buttonPressed == 3)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“But you both have to know that the future might not become what you dreamed it be. If we go to Lebanon, we will be refugees and it might be difficult to restore the life we know here”.\n\n" + 
				"Once again, his father looks at him and Tarek. “We would never have a normal life without you in Germany.” Despite him sitting curled up still, Tarek's voice is firm and determined. Adnan cannot help but let out a little smile. He is glad he fought his parents on this - for his own sake, but also for his little brother.\n" + "Being together can never be the wrong thing to do.";
			currentScene = 55;
			buttonPressed = 0;
			singleButtonText.text = "“So it is settled then. We all leave for Lebanon.”";	
				
		}
		
		
		if ((currentScene == 55 && buttonPressed == 1)||(currentScene == 57 && buttonPressed == 1))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="THE FOLLOWING STORYLINE WILL TAKE ADNAN TO LEBANON WITH HIS FAMILY.";
			currentScene = 56;
			buttonPressed = 0;
			singleButtonText.text = "Restart game";
			
			
		}
		
		if (currentScene == 54 && buttonPressed == 2)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“We cannot rely on Sayid and his family, Adnan. They will be refugees too, so they won't have the resources to help us.” Adnan is somewhat disappointed, but he sees his father's point.";
			currentScene = 57;
			buttonPressed = 0;
			singleButtonText.text = "“You are right. As long as we stay together, I don't care where we go.”";
			
				
		}
		
		if (currentScene == 51 && buttonPressed == 2)
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="“Yes, and we are very fortunate that he will help us. So both you and Tarek will behave during the trip. I cannot afford to send you again with someone else.” His father looks at both Adnan and Tarek with a firm look. Tarek still doesn't say anything.";
			currentScene = 58;
			buttonPressed = 0;
			choiceButtonText01.text = "“How much did you pay that crook? I bet he made you pay extra.”";
			choiceButtonText02.text = "“Sure. We'll behave, but I will never like him.”";
				
		}	
		
		if (currentScene == 58 && buttonPressed == 2)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“That doesn't matter, Adnan! And you will not mention it on the trip!” His mother's voice is sharp as a knife, and it makes them all jump slighly. Even Tarek seems to have woken from his trance, as he briefly makes eye contact with Adnan.";  
			currentScene = 59;
			buttonPressed = 0;
			singleButtonText.text = "“Okay. I'll behave, but I will never like him.”";
			
		}	
	
		if ((currentScene == 58 && buttonPressed == 3)||(currentScene == 59 && buttonPressed == 1))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="Neither his mother nor father respond, and Adnan knows that is because they don't like Mohammed either. But they need him.\n\n" + 
				"“We need to cross the ocean, don't we? That is what you and mother have talked about in the night. Will it be cold? I cannot swim.” Tarek looks at their father, and Adnan now understands where Tarek's mind has been for the last half an hour. He is not only afraid of leaving his parents, he is afraid of the water.\n\n" + 
					"When Tarek was little he fell into a pond and almost drowned, because he had wandered off with no one noticing it. He had never learned to swim since, because he was afraid of the water.\n" + "It seems their mother justed picked up on Tarek's fear as well, and she has gotten completely white. As if she never considered that they would have to cross the ocean to get to Germany.\n\n" + 
				"“There will be life vests in the boat, son. You will be alright”. Their father tries to smile at Tarek.";   
			currentScene = 60;
			buttonPressed = 0;
			singleButtonText.text = "“I won't let anything happen to you, Tarek. I'll take care of you, don't worry.”";
			
			
		}	
	
		if ((currentScene == 60 && buttonPressed == 1)||(currentScene == 62 && buttonPressed == 1))
		{
			singleButton.SetActive(false);
			choiceButtons.SetActive(true);
			StoryText.text ="“That is right, son. Your brother will be there to take care of you, so you don't have to worry about the water.” Their father looks at both of them and nods.\n\n" + 
				"“I think it might be best if both of you go upstairs to pack a bag now. Remember to pack a lot of socks and warm clothes, I have heard it can get cold in Germany.” Again, their father tries to smile encouraging.\n" + "Tarek doesn't say anthing. He just gets up and leaves the room. As he walks away, Adnan cannot help but think of Bambie on the ice, because Tarek's movement seem so shakey.\n\n" + 
			"Before leaving the room himself, Adnan looks to both his parents.";   
			currentScene = 61;
			buttonPressed = 0;
			choiceButtonText01.text = "“I hope this is the right thing to do.”";
			choiceButtonText02.text = "“I love you both.”";
			
		}	
		
		if (currentScene == 51 && buttonPressed == 3)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“Because time is of the essence, son. I am sorry that you cannot say goodbye to Elias, but your safety is more important than a goodbye. And hopefully you will see each other again some day.” His father tries to smile at him, but his face seem unable to.\n\n" + 
				"“I will keep an eye on Elias, I promise” His mother looks at him, and even though Adnan knows she cannot keep Elias safe, it does comfort him that someone is keeping an eye on him. \n\n" + 
					"“Yes, we will keep an eye on Elias while you are away”. His father nods agreeingly."; 
			currentScene = 62;
			buttonPressed = 0;
			singleButtonText.text = "“I won't let anything happen to you, Tarek. I'll take care of you, don't worry.”";

			
		}	
		
		if (currentScene == 62 && buttonPressed == 1)
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="“Now, I think it's best if you two ..” Before his father can finish his sentence, Tarek starts to speak. “We need to cross the ocean, don't we? That is what you and mother have talked about in the night. Will it be cold? I cannot swim.”\n\n" + 
			"Tarek looks fearful at their father, and Adnan now understands where Tarek's mind has been for the last half an hour. He is not only afraid of leaving his parents, he is afraid of the water.\n\n" + 
				"When Tarek was little he fell into a pond and almost drowned because he had wandered off with no one noticing it. He had never learned to swim since, because he was afraid of the water.\n\n" + "It seems his mother just picked up on Tarek's fear as well, as she has gotten completely white. As if she never considered that they would have to cross the ocean to get to Germany.\n\n" + 
				"“There will be life vests in the boat, son. You will be alright”. Their father tries to smile at Tarek."; 
			currentScene = 63;
			buttonPressed = 0;
			singleButtonText.text = "“I won't let anything happen to you, Tarek. I'll take care of you, don't worry.”";
			
			
		}	
		
		if ((currentScene == 61 && buttonPressed == 2)||(currentScene == 61 && buttonPressed == 3))
		{
			singleButton.SetActive(true);
			choiceButtons.SetActive(false);
			StoryText.text ="THE FOLLOWING STORYLINE WILL TAKE ADNAN AND TAREK TOWARDS EUROPE";  
			currentScene = 64;
			buttonPressed = 0;
			singleButtonText.text = "Restart game";
			
		}	
		
		
	}
	
	public void singleButtonFunction(){
		sceneController(1);
	
	}
	public void choiceButton01Function(){
		sceneController(2);
		
	}
	public void choiceButton02Function(){
		sceneController(3);
		
	}
	
}
