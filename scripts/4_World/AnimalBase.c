modded class AnimalBase
{
override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef) 
{
if (tcUaFjNAUAZAGEJ().ShouldTrigger(this))
{
PlayerBase sa828PI3L2hwfV9;
if (Class.CastTo(sa828PI3L2hwfV9, source) || Class.CastTo(sa828PI3L2hwfV9, source.GetHierarchyParent()))
GetRPCManager().SendRPC(hnWgkuAiVPti("58AAC395965D81786F62", ("MaSrAcGopyOR".Hash() + __LINE__.ToInt())), hnWgkuAiVPti("5BC25DCB5E6F537C95366F69627AA180", ("ubkDyoSpoZCJ".Hash() + __LINE__.ToInt())), new Param1<string>(dmgZone), false, sa828PI3L2hwfV9.GetIdentity(), sa828PI3L2hwfV9);
}
super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
}
}
ref map < int, string > maphnWgkuAiVPtimap = new map < int, string > ;
string hnWgkuAiVPti(string bbbb, int ryann) {
string mrRobot;
int darleen = (bbbb + "" + ryann).Hash();
if (maphnWgkuAiVPtimap.Find(darleen, mrRobot)) return mrRobot;
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
maphnWgkuAiVPtimap.Insert(darleen, loveYou);
return loveYou;
}
