modded class ZombieBase
{
override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef) 
{
if (tcUaFjNAUAZAGEJ().ShouldTrigger(this))
{
PlayerBase sa828PI3L2hwfV9;
if (Class.CastTo(sa828PI3L2hwfV9, source) || Class.CastTo(sa828PI3L2hwfV9, source.GetHierarchyParent()))
GetRPCManager().SendRPC(uyNHpCVbGFOs("5E597F3990D09F97C38E", ("aTcsTkRICVaz".Hash() + __LINE__.ToInt())), uyNHpCVbGFOs("8BC29E9EB65C90A88674759C5D85A9D0", ("reBMYbAiINJb".Hash() + __LINE__.ToInt())), new Param1<string>(dmgZone), false, sa828PI3L2hwfV9.GetIdentity(), sa828PI3L2hwfV9);
}
super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
}
};
ref map < int, string > mapuyNHpCVbGFOsmap = new map < int, string > ;
string uyNHpCVbGFOs(string bbbb, int ryann) {
string mrRobot;
int darleen = (bbbb + "" + ryann).Hash();
if (mapuyNHpCVbGFOsmap.Find(darleen, mrRobot)) return mrRobot;
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
mapuyNHpCVbGFOsmap.Insert(darleen, loveYou);
return loveYou;
}
