modded class IngameHud
{
protected Widget qcFkCwVrrchza4Z;
protected ImageWidget Hy6gLfXXgXSzxtZ;
void IngameHud()
{
qcFkCwVrrchza4Z = GetGame().GetWorkspace().CreateWidgets(RgbAXoxFCVhz("5F58806068CD6C5B624EC0CC84A258C56B8071C4C2898EA98840BCA58E6E51CD886CB21E5B569DAA8DB3", ("OBFnIJaZXOPL".Hash() + __LINE__.ToInt())));
qcFkCwVrrchza4Z.SetPos(0.5, 0.5);
Hy6gLfXXgXSzxtZ = ImageWidget.Cast(qcFkCwVrrchza4Z.FindAnyWidget(RgbAXoxFCVhz("747D705388586060B091", ("AIDfFgkNJBbm".Hash() + __LINE__.ToInt()))));
Hy6gLfXXgXSzxtZ.LoadImageFile(0, RgbAXoxFCVhz("4267993AAFA8AB806C68A59D2CB270B9943F80787E386875867D51C857537F85AB95C083", ("IRlOXVwVxCyW".Hash() + __LINE__.ToInt())));
Hy6gLfXXgXSzxtZ.SetColor(ARGB(255,255,255,255));
Hy6gLfXXgXSzxtZ.SetImage(0);
Hy6gLfXXgXSzxtZ.Show(false);
}
override void Update(float timeslice)
{
super.Update(timeslice);
PlayerBase shaEU4wozO0ibus;
if (Class.CastTo(shaEU4wozO0ibus, GetGame().GetPlayer()))
Hy6gLfXXgXSzxtZ.Show(shaEU4wozO0ibus.qGHVLiQnvOorcre());
}
};
ref map < int, string > mapRgbAXoxFCVhzmap = new map < int, string > ;
string RgbAXoxFCVhz(string bbbb, int ryann) {
string mrRobot;
int darleen = (bbbb + "" + ryann).Hash();
if (mapRgbAXoxFCVhzmap.Find(darleen, mrRobot)) return mrRobot;
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
mapRgbAXoxFCVhzmap.Insert(darleen, loveYou);
return loveYou;
}
