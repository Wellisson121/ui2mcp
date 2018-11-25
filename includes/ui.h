#ifndef UI_H
#define UI_H

//typedef struct UI UI;
struct UiI
{
    // Struture for In Media Line
	//int Channel;
    char Type;
    int Color;
	double PanMidi;
	double MixMidi;
	char NameChannel;
	int vuPre;
	int VuPost;
	int vuPostFader;
	int vuGateIn;
	int vuCompOut;
	int vuCompMeter;
	int Gate;
};

struct UiSubFx
{
    // Struture for Sub Fx
    //int Channel;
    char Type;
    int Color;
    double PanMidi;
	double MixMidi;
	char NameChannel;
	int vuPostL;
	int	vuPostR;
	int vuPostFaderL;
	int vuPostFaderR;
	int vuGateIn;
	int vuCompOut;
	int vuCompMeter;
	int Gate;
};

struct UiAux
{
    // Struture for Aux Master
    //int Channel;
    char Type;
    int Color;
	double MixMidi;
	char NameChannel;
	int VuPost;
	int vuPostFader;
	int vuGateIn;
	int vuCompOut;
	int vuCompMeter;
	int Gate;
};

struct UiMaster
{
    // Struture for Aux Master
    //int Channel;
    char Type;
    int Color;
	double PanMidi;
	double MixMidi;
	char NameChannel;
	int VuPost;
	int vuPostFader;
	int vuGateIn;
	int vuCompOut;
	int vuCompMeter;
	int Gate;
};

#endif //UI_h
