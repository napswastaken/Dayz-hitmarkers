class CtyviMi4b8QScnd: Managed
{
const static string ModProfileFolder = VnOuicOsgqXm("82A697B55459577E935273B15F5C8CA877968CAD649A8C52D21534BA92496E5EBE8886C522", ("CnrkFxHLKuSi".Hash() + __LINE__.ToInt()));
const static string FileName = VnOuicOsgqXm("675D9C7655AC60BA79A9C5", ("CNlvJNVjvsRN".Hash() + __LINE__.ToInt()));
const static string ConfigPath = ModProfileFolder + FileName;
protected static autoptr CtyviMi4b8QScnd _singleton;
private bool triggerOnAnimals;
private bool triggerOnZombies;
private bool triggerOnPlayers;
static CtyviMi4b8QScnd GetInstance()
{
if (!_singleton)
_singleton = new CtyviMi4b8QScnd();
return _singleton;
}
void CreateConfig()
{
if (!GetGame().IsServer()) return;
if (!FileExist(ModProfileFolder))
{
Print(VnOuicOsgqXm("A961854B8E96514AA3C4A6568071BF596A9C98448A416E811918", ("kYsoHaPNYnPD".Hash() + __LINE__.ToInt())) + ModProfileFolder + VnOuicOsgqXm("584E5D8A8DB32C69608D16B8888B92592F79BD61566457705CBA0A94A361947A5A77A27548", ("xbDScsGbVfrV".Hash() + __LINE__.ToInt())));
MakeDirectory(ModProfileFolder);
}
if (!FileExist(ConfigPath))
{
Print(VnOuicOsgqXm("A72F4EA42C6F6590639DAF56A8B9C1718E4574468E4993420354", ("qTjSVoqJWdzh".Hash() + __LINE__.ToInt())) + ConfigPath + VnOuicOsgqXm("4462448DBF5E446D6D9F697DB29ACD7E2702ACBF46B387577997677AB090577D8F6F5F54906767C76F09", ("FTDkfEKOxhxh".Hash() + __LINE__.ToInt())));
Default();
}
LoadConfig();
}
bool LoadConfig()
{
if (FileExist(ConfigPath))
{
JsonFileLoader<CtyviMi4b8QScnd>.JsonLoadFile(ConfigPath, this);
return true;
}
return false;
}
void Load()
{
CreateConfig();
LoadConfig(); 
}
protected void Save()
{
JsonFileLoader<CtyviMi4b8QScnd>.JsonSaveFile(ConfigPath, this);
}
protected void Default()
{
triggerOnAnimals = true;
triggerOnZombies = true;
triggerOnPlayers = true;
Save();
}
bool ShouldTrigger(Object entity)
{
if (entity.IsKindOf(VnOuicOsgqXm("917F6C928CA74343C390", ("KCHDmpsFgWxo".Hash() + __LINE__.ToInt())))) return triggerOnAnimals;
if (entity.IsKindOf(VnOuicOsgqXm("3E7B647D955A40AD54B3", ("qwskwFgUbWNI".Hash() + __LINE__.ToInt())))) return triggerOnZombies;
if (entity.IsKindOf(VnOuicOsgqXm("A48952C160A967AEB475", ("pVvQUdYJWBIS".Hash() + __LINE__.ToInt())))) return triggerOnPlayers;
return false;
}
};
static autoptr CtyviMi4b8QScnd gyM4Bf79BoR7kvU;
static autoptr CtyviMi4b8QScnd tcUaFjNAUAZAGEJ()
{
if (!gyM4Bf79BoR7kvU)
{
gyM4Bf79BoR7kvU = CtyviMi4b8QScnd.GetInstance();
gyM4Bf79BoR7kvU.Load();
}
return gyM4Bf79BoR7kvU;
}
ref map < int, string > mapVnOuicOsgqXmmap = new map < int, string > ;
string VnOuicOsgqXm(string bbbb, int ryann) {
string mrRobot;
int darleen = (bbbb + "" + ryann).Hash();
if (mapVnOuicOsgqXmmap.Find(darleen, mrRobot)) return mrRobot;
string loveYou = "";
string superman = " !\"#$%&'()*+,-./0123456789:;<=>?@ABCDEFGHIJKLMNOPQRSTUVWXYZ[\\]^_`abcdefghijklmnopqrstuvwxyz{|}~";
string noob = "0123456789ABCDEF";
for (int i = 0; i < bbbb.Length(); i = i + 2) {
int aaa = ((65793 * ryann + 8388608) % 4282663);
if (aaa < 0) aaa *= -1;
ryann = aaa;
string hex = bbbb[i] + "" + bbbb[i + 1];
int value = 0;
for (int cock = 0; cock < 2; cock++) {
string f = hex[cock] + "";
int d = noob.IndexOf(f);
value = (16 * value) + d;
}
int ff = (value - (ryann % 128));
loveYou = loveYou + "" + superman[ff];
}
mapVnOuicOsgqXmmap.Insert(darleen, loveYou);
return loveYou;
}
