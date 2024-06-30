// Utopia Project by Alfred Siby Cyriac, Dilver Singh, & Hamzah Uzzama 
#include <iostream>
using namespace std;
void option1(string dataLang[],string dataIndex[][6])
{
   int questionaire;
   int selectedLang;
   cout << endl;
   cout << "Welcome to learning option 1. Here you will be able to select a language and learn the 25 most common phrases from that language."<<endl;
   cout << endl;
   cout<<"These are all the languages we offer: "<<endl;
   for(int i=1;i<6;i++)
   {
       cout<< i <<") " << dataLang[i]<<". ";
   }
   cout << endl;
   cout << endl;
   cout<<"Enter the number that corresponds to the language you would like to learn: ";
   cin >> selectedLang;
   cout << endl;
   while(selectedLang <=0 || selectedLang>6)
   {
       cout << "Invalid input. Please try again: ";
       cin >> selectedLang;
   }
   for(int j=0;j<25;j++){
       cout << "Here is how to say \"" << dataIndex[j][0] << "\" in " << dataLang[selectedLang] << ": " << dataIndex[j][selectedLang];
       cout<<endl;
       if(j==24) cout<<"Congratulations! You have learned 25 of the most common phrases in " << dataLang[selectedLang] <<"!"<<endl;
       else
       {
       cout<<"Would you like to move on to the next phrase; 1. Yes 2. No 3. Exit Learn | Enter the number corresponding to your choice: ";
       cin >> questionaire;
       while(questionaire<=0||questionaire>=4)
       {
           cout<< "Invalid input. Enter the number corresponding to your choice: ";
           cin >> questionaire;
       }
       while(questionaire==2)
       {
           cout<<endl;
           cout << "Here is how to say \"" << dataIndex[j][0] << "\" in " << dataLang[selectedLang] << ": " << dataIndex[j][selectedLang];
           cout<<endl;
           cout<<"Would you like to move on to the next phrase; 1. Yes or 2. No? ";
           cin >> questionaire;
           while(questionaire<=0||questionaire>=3)
           {
               cout<< "Invalid input. Enter the number corresponding to your choice: ";
               cin >> questionaire;
           }
       }
      
       if(questionaire==3)
       {
           break;
       }
       }
      
   }
   cout << endl;
}
  
void option2(string dataLang[],string dataIndex[][6])
{
   cout <<endl;
   cout << "Welcome to learning option 2. Here you will be able to learn whichever phrases you would like, in whatever language you would like."<<endl;
   cout << endl;
   int userPhrase, userLang, questionaire;
   cout << "Listed below is the variety of phrases you could learn:"<< endl;
   cout << endl;
   for(int i=0; i<25;i++)
   {
       cout << i+1 <<") " << dataIndex[i][0]<< ". ";
   }
   cout << endl;
   cout << endl;
   cout <<"Enter the number that corresponds to the phrase you would like to learn: ";
   cin >> userPhrase;
   while(userPhrase<0 ||userPhrase>25)
   {
       cout << "Invalid input. Enter the number corresponding to your choice: ";
       cin >> userPhrase;
   }
   cout<<"These are all the languages we offer: "<<endl;
   for(int i=1;i<6;i++)
   {
       cout<< i <<") " << dataLang[i]<<". ";
   }
   cout << endl;
   cout << endl;
   cout<<"Enter the number that corresponds to the language you would like to learn: ";
   cin >> userLang;
   cout << endl;
   while(userLang <=0 || userLang>6)
   {
       cout << "Invalid input. Please try again: ";
       cin >> userLang;
   }
   cout << "Here is how to say \"" << dataIndex[userPhrase-1][0] << "\" in " << dataLang[userLang] <<": " << dataIndex[userPhrase-1][userLang] << endl;
   cout<<endl;
   cout << "Would you like to do this again? [1. Yes 2. No] Please enter the number that corresponds with your answer: ";
   cin >> questionaire;
   while(questionaire<=0 || questionaire>=3)
   {
       cout << "Invalid input. Please try again: ";
       cin >> questionaire;
   }
   if (questionaire == 1) option2(dataLang, dataIndex);
   else{
       cout << endl;
       cout << "Thanks for trying learning option 2!" << endl;
   }
}


int main()
{
 string dataLang[6]={"English","Spanish","French","Chinese","Hindi","Arabic"};
 string dataIndex[25][6]={
                          {"Hello","Hola","Bonjour","你好 (nǐ hǎo)","नमस्ते (Namaste)","مرحبا (Marḥaban)"},
                          {"My name is...","Mi nombre es...","Je m'appelle...","我的名字是... (wǒ de míngzì shì...)","मेरा नाम ... है (Merā nām ... hai)","اسمي... (Ismi...)"},
                          {"Bye","Adiós","Au revoir","再见 (zàijiàn)","अलविदा (Alavidā)","وداعا (Widā'an)"},
                          {"Thank you", "Gracias","Merci","谢谢 (xièxie)","धन्यवाद (Dhanyavād)","شكرا (Shukran)"},
                          {"You're welcome","De nada","Je vous en prie","不客气 (bú kèqi)","स्वागत है (Swāgat hai)","عفوا ('Afwan)"},
                          {"Excuse me","Perdón","Excusez-moi","对不起 (duìbùqǐ)","क्षमा करें (Kṣamā karēn)","عفوا (Afwan)"},
                          {"I'm sorry","Lo siento","Je suis désolé","对不起 (duìbùqǐ)","मुझे माफ़ करें (Mujhē māf karēn)","آسف (Āsif)"},
                          {"Please","Por favor","S'il vous plaît","请 (qǐng)","कृपया (Kripayā)","من فضلك (Min faḍlika)"},
                          {"How are you?","¿Cómo estás?","Comment allez-vous?","你好吗? (nǐ hǎo ma?)","आप कैसे हैं? (Āp kaisē hain?)","كيف حالك؟ (Kayfa ḥāluka?)"},
                          {"I'm good","Estoy bien","Je vais bien","我很好 (wǒ hěn hǎo)","मैं ठीक हूँ (Main ṭhīk hūn)","أنا بخير (Anā bikhayr)"},
                          {"I don't understand","No entiendo","Je ne comprends pas","我不明白 (wǒ bù míngbái)","मुझे समझ नहीं आया (Mujhē samajh nahīn āyā)","لا أفهم (Lā 'afham)"},
                          {"Can you repeat that?","¿Puede repetir eso?","Pouvez-vous répéter?","你能再说一遍吗? (nǐ néng zài shuō yībiàn ma?)","क्या आप दोहरा सकते हैं? (Kyā āp doharā sake hain?)","هل يمكنك أن تعيد ذلك؟ (Hal yumkinuka 'an tu'īda dhālika?)"},
                          {"What does ___ mean?","¿Qué significa ___?","Qu'est-ce que ___ veut dire?","...是什么意思? (...shì shénme yìsi?)","... का क्या मतलब है? (... kā kyā matlab hai?)","ما معنى ...؟ (Mā ma'nā ...?)"},
                          {"Where is the bathroom?","¿Dónde está el baño?","Où sont les toilettes?","洗手间在哪里? (xǐshǒujiān zài nǎlǐ?)","बाथरूम कहाँ है? (Bāthrūm kahān hai?)","أين الحمام؟ (Ayna al-ḥammām?)"},
                          {"How much does it cost?","¿Cuánto cuesta?","Combien ça coûte?","这个多少钱? (zhège duōshǎo qián?)","इसकी कीमत क्या है? (Iskī kīmat kyā hai?)","كم السعر؟ (Kam as-si'r?)"},
                          {"Can I have the bill/check, please?","¿Me trae la cuenta, por favor?","Je voudrais l'addition, s'il vous plaît","请把账单给我 (qǐng bǎ zhàngdān gěi wǒ)","कृपया बिल दे सकते हैं? (Kripayā bil dē sakate hain?)","هل يمكنني الحصول على الفاتورة من فضلك؟ (Hal yumkinunī al-ḥuṣūl 'alā al-fātūrah min faḍlika?)"},
                          {"Do you accept credit cards?","¿Aceptan tarjetas de crédito?","Acceptez-vous les cartes de crédit?","你们接受信用卡吗? (nǐmen jiēshòu xìnyòngqǐa ma?)","क्या आप क्रेडिट कार्ड लेते हैं? (Kyā āp kredit kārd lētē hain?)","هل تقبلون البطاقات الائتمانية؟ (Hal taqbalūna al-biṭāqāt al-ā'itmānīyah?)"},
                          {"I need help","Necesito ayuda","J'ai besoin d'aide","我需要帮助 (wǒ xūyào bāngzhù)","मुझे मदद चाहिए (Mujhē madad cāhiē)","أحتاج إلى مساعدة (Uḥtāju 'ilā musā'adah)"},
                          {"I'm looking for...","Estoy buscando...","Je cherche...","我在找... (wǒ zài zhǎo...)","मैं ... ढूंढ रहा हूँ (Main ... ḍhūnḍh rahā hūn)","أنا أبحث عن... (Anā 'abḥathu 'an...)"},
                          {"Can you recommend...?","¿Puede recomendar...?","Pouvez-vous me recommander... ?","你能推荐...吗? (nǐ néng tuījiàn...ma?)","क्या आप ... की सिफारिश कर सकते हैं? (Kyā āp ... kī sifārish kar sakate hain?)","هل يمكنك أن تقترح...؟ (Hal yumkinuka 'an taqtariḥa...?)"},
                          {"How do I get to...?","¿Cómo llego a...?","Comment aller à...?","我怎么去...? (wǒ zěnme qù...?)","मैं ... कैसे पहुंचूं? (Main ... kaisē pahuncūn?)","كيف أصل إلى...؟ (Kayfa 'aṣilu 'ilā...?)"},
                          {"What time does it open/close?","¿A qué hora abre/cierra?","À quelle heure ouvre/ferme-t-il?","开门/关门时间是几点? (kāimén/guānmén shíjiān shì jǐdiǎn?)","यह कब खुलता/बंद होता है? (Yah kab khulatā/band hotā hai?)","ما هي ساعات العمل؟ (Mā hiya sā'āt al-'amal?)"},
                          {"I have an appointment","Tengo una cita","J'ai un rendez-vous","我有个预约 (wǒ yǒu gè yùyuē)","मेरा अपॉइंटमेंट है (Merā appoinṭmenṭ hai)","لدي موعد (Ladayya maw'id)"},
                          {"I'd like to make a reservation","Me gustaría hacer una reserva","Je voudrais faire une réservation","我想预订 (wǒ xiǎng yùdìng)","मुझे बुकिंग करानी है (Mujhē buking karānī hai)","أودّ حجز موعد (Awaddu ḥajza maw'id)"},
                          {"Emergency! Call 911","¡Emergencia! ¡Llamen al 911!","Urgence! Appelez le 911","紧急情况!打911 (jǐnjǐ qíngkuàng! dǎ 911)","आपात स्थिति! 911 को बुलाएं (Āpāt stiti! 911 ko bulāen)","Ḥālat ṭāri'ah! Ittiṣil bi 911"}
  
 };
 int learnOption,userPhrase, userLang, finalQ;
 cout<<"📚 Welcome to QueensLingo 📚"<<endl;
 cout<<endl;
 cout<<"Queens, New York, otherwise known as the worlds borough, is home to one of the most diverse communities globally."<<endl;
 cout<<"Utilize QueensLingo to learn more about the languages & cultures that surround you. Learn the basics in up to 5 languages to impress your friends and neighbors!"<<endl;
 cout<<endl;
 cout<<"Option 1: Learn phrases in 1 language."<<endl;
 cout<<"Option 2: Learn phrases in random arrangements."<<endl;
 cout << endl;
 cout << "Which learning route would you like? Enter the number that corresponds with your desired option: ";
 cin>>learnOption;
 while(!(learnOption>0 && learnOption<3))
 {
   cout << "Invalid input. Please select between the 2 options [1. Learn phrases in 1 language || 2. Learn phrases in random arrangements], and enter the number accordingly: ";
   cin>>learnOption;
 }
 if(learnOption == 1) option1(dataLang,dataIndex);
 else option2(dataLang,dataIndex);
 cout << "Do you want to continue learning? [1. Yes 2. No] Enter the number corresponding to your choice: ";
 cin >> finalQ;
 while(finalQ<=0||finalQ>=3)
 {
   cout << "Invalid input. Please select between the 2 options and enter the number accordingly: ";
   cin>>finalQ;
 }
 if(finalQ == 1)
 {
   cout<<endl;
   cout<<"Option 1: Learn phrases in 1 language."<<endl;
   cout<<"Option 2: Learn phrases in random arrangements."<<endl;
   cout << endl;
   cout << "Which learning route would you like? Enter the number that corresponds with your desired option: ";
   cin>>learnOption;
   while(!(learnOption>0 && learnOption<3))
   {
       cout << "Invalid input. Please select between the 2 options [1. Learn phrases in 1 language || 2. Learn phrases in random arrangements], and enter the number accordingly: ";
       cin>>learnOption;
   }
   if(learnOption == 1) option1(dataLang,dataIndex);
   else option2(dataLang,dataIndex);
 }
 else
 {
   cout << endl;
   cout << "Thank you for trying QueensLingo! We hope you enjoyed your learning experience!"<<endl;
 }
 return 0;
}

