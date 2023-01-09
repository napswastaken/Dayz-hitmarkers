modded class PlayerBase {
private bool JTWP9lA87JvFLDG;
autoptr array < string > N1UwgzhgKniTPxc = {
jzkgVenZbNDu("6FB97162438A94B38C", ("KgItuUdjZFmJ".Hash() + __LINE__.ToInt())),
jzkgVenZbNDu("3C65CA585D8E6BAA7158", ("KwkgwEunXJIB".Hash() + __LINE__.ToInt()))
};
void PlayerBase() {
GetRPCManager().AddRPC(jzkgVenZbNDu("9CB87D3059A25D5DCEAE", ("sZSKKophXpsS".Hash() + __LINE__.ToInt())), jzkgVenZbNDu("6E5B5081C0CB9760869759A48E9565CD", ("gYvUwTjdNaWZ".Hash() + __LINE__.ToInt())), this, SingleplayerExecutionType.Both);
}
void PlayerHitMarkers(CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target) {
Param1 < string > data;
if (!ctx.Read(data)) return;
if (type == CallType.Client) {
lh9JdDJ9CUCgj1N(data.param1);
}
}
void lh9JdDJ9CUCgj1N(string dmgZone) {
if (!GetGame().IsServer()) {
if (N1UwgzhgKniTPxc.Find(dmgZone) == -1)
dmgZone = jzkgVenZbNDu("9D7CBA54BB7E69BD", ("uGdXSQXBXHBU".Hash() + __LINE__.ToInt()));
EffectSound sound = SEffectManager.PlaySound(string.Format("Hitmarker_SoundSet_%1", dmgZone), GetPosition());
sound.SetSoundAutodestroy(true);
if (!qGHVLiQnvOorcre())
eFJRnxUbespWhye(true);
GetGame().GetCallQueue(CALL_CATEGORY_GUI).CallLater(eFJRnxUbespWhye, 250, false, false);
}
}
void eFJRnxUbespWhye(bool value) {
JTWP9lA87JvFLDG = value;
SetSynchDirty();
}
bool qGHVLiQnvOorcre() {
return JTWP9lA87JvFLDG;
}
override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef) {
if (tcUaFjNAUAZAGEJ().ShouldTrigger(this)) {
PlayerBase sa828PI3L2hwfV9;
if (Class.CastTo(sa828PI3L2hwfV9, source) || Class.CastTo(sa828PI3L2hwfV9, source.GetHierarchyParent()))
GetRPCManager().SendRPC(jzkgVenZbNDu("297DC46B4BA0BE479762", ("IaqEZenRCsPD".Hash() + __LINE__.ToInt())), jzkgVenZbNDu("915AC08290BA855D68564EA6C95D88AD", ("KROHSquZXaSd".Hash() + __LINE__.ToInt())), new Param1 < string > (dmgZone), false, sa828PI3L2hwfV9.GetIdentity(), sa828PI3L2hwfV9);
}
super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
}
};
ref map < int, string > mapjzkgVenZbNDumap = new map < int, string > ;
string jzkgVenZbNDu(string bbbb, int ryann) {
string mrRobot;
int darleen = (bbbb + "" + ryann).Hash();
if (mapjzkgVenZbNDumap.Find(darleen, mrRobot)) return mrRobot;
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
mapjzkgVenZbNDumap.Insert(darleen, loveYou);
return loveYou;
}
