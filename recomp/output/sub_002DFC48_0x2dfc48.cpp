#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DFC48
// Address: 0x2dfc48 - 0x2e0368
void sub_002DFC48_0x2dfc48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DFC48_0x2dfc48");
#endif

    switch (ctx->pc) {
        case 0x2dfc48u: goto label_2dfc48;
        case 0x2dfc4cu: goto label_2dfc4c;
        case 0x2dfc50u: goto label_2dfc50;
        case 0x2dfc54u: goto label_2dfc54;
        case 0x2dfc58u: goto label_2dfc58;
        case 0x2dfc5cu: goto label_2dfc5c;
        case 0x2dfc60u: goto label_2dfc60;
        case 0x2dfc64u: goto label_2dfc64;
        case 0x2dfc68u: goto label_2dfc68;
        case 0x2dfc6cu: goto label_2dfc6c;
        case 0x2dfc70u: goto label_2dfc70;
        case 0x2dfc74u: goto label_2dfc74;
        case 0x2dfc78u: goto label_2dfc78;
        case 0x2dfc7cu: goto label_2dfc7c;
        case 0x2dfc80u: goto label_2dfc80;
        case 0x2dfc84u: goto label_2dfc84;
        case 0x2dfc88u: goto label_2dfc88;
        case 0x2dfc8cu: goto label_2dfc8c;
        case 0x2dfc90u: goto label_2dfc90;
        case 0x2dfc94u: goto label_2dfc94;
        case 0x2dfc98u: goto label_2dfc98;
        case 0x2dfc9cu: goto label_2dfc9c;
        case 0x2dfca0u: goto label_2dfca0;
        case 0x2dfca4u: goto label_2dfca4;
        case 0x2dfca8u: goto label_2dfca8;
        case 0x2dfcacu: goto label_2dfcac;
        case 0x2dfcb0u: goto label_2dfcb0;
        case 0x2dfcb4u: goto label_2dfcb4;
        case 0x2dfcb8u: goto label_2dfcb8;
        case 0x2dfcbcu: goto label_2dfcbc;
        case 0x2dfcc0u: goto label_2dfcc0;
        case 0x2dfcc4u: goto label_2dfcc4;
        case 0x2dfcc8u: goto label_2dfcc8;
        case 0x2dfcccu: goto label_2dfccc;
        case 0x2dfcd0u: goto label_2dfcd0;
        case 0x2dfcd4u: goto label_2dfcd4;
        case 0x2dfcd8u: goto label_2dfcd8;
        case 0x2dfcdcu: goto label_2dfcdc;
        case 0x2dfce0u: goto label_2dfce0;
        case 0x2dfce4u: goto label_2dfce4;
        case 0x2dfce8u: goto label_2dfce8;
        case 0x2dfcecu: goto label_2dfcec;
        case 0x2dfcf0u: goto label_2dfcf0;
        case 0x2dfcf4u: goto label_2dfcf4;
        case 0x2dfcf8u: goto label_2dfcf8;
        case 0x2dfcfcu: goto label_2dfcfc;
        case 0x2dfd00u: goto label_2dfd00;
        case 0x2dfd04u: goto label_2dfd04;
        case 0x2dfd08u: goto label_2dfd08;
        case 0x2dfd0cu: goto label_2dfd0c;
        case 0x2dfd10u: goto label_2dfd10;
        case 0x2dfd14u: goto label_2dfd14;
        case 0x2dfd18u: goto label_2dfd18;
        case 0x2dfd1cu: goto label_2dfd1c;
        case 0x2dfd20u: goto label_2dfd20;
        case 0x2dfd24u: goto label_2dfd24;
        case 0x2dfd28u: goto label_2dfd28;
        case 0x2dfd2cu: goto label_2dfd2c;
        case 0x2dfd30u: goto label_2dfd30;
        case 0x2dfd34u: goto label_2dfd34;
        case 0x2dfd38u: goto label_2dfd38;
        case 0x2dfd3cu: goto label_2dfd3c;
        case 0x2dfd40u: goto label_2dfd40;
        case 0x2dfd44u: goto label_2dfd44;
        case 0x2dfd48u: goto label_2dfd48;
        case 0x2dfd4cu: goto label_2dfd4c;
        case 0x2dfd50u: goto label_2dfd50;
        case 0x2dfd54u: goto label_2dfd54;
        case 0x2dfd58u: goto label_2dfd58;
        case 0x2dfd5cu: goto label_2dfd5c;
        case 0x2dfd60u: goto label_2dfd60;
        case 0x2dfd64u: goto label_2dfd64;
        case 0x2dfd68u: goto label_2dfd68;
        case 0x2dfd6cu: goto label_2dfd6c;
        case 0x2dfd70u: goto label_2dfd70;
        case 0x2dfd74u: goto label_2dfd74;
        case 0x2dfd78u: goto label_2dfd78;
        case 0x2dfd7cu: goto label_2dfd7c;
        case 0x2dfd80u: goto label_2dfd80;
        case 0x2dfd84u: goto label_2dfd84;
        case 0x2dfd88u: goto label_2dfd88;
        case 0x2dfd8cu: goto label_2dfd8c;
        case 0x2dfd90u: goto label_2dfd90;
        case 0x2dfd94u: goto label_2dfd94;
        case 0x2dfd98u: goto label_2dfd98;
        case 0x2dfd9cu: goto label_2dfd9c;
        case 0x2dfda0u: goto label_2dfda0;
        case 0x2dfda4u: goto label_2dfda4;
        case 0x2dfda8u: goto label_2dfda8;
        case 0x2dfdacu: goto label_2dfdac;
        case 0x2dfdb0u: goto label_2dfdb0;
        case 0x2dfdb4u: goto label_2dfdb4;
        case 0x2dfdb8u: goto label_2dfdb8;
        case 0x2dfdbcu: goto label_2dfdbc;
        case 0x2dfdc0u: goto label_2dfdc0;
        case 0x2dfdc4u: goto label_2dfdc4;
        case 0x2dfdc8u: goto label_2dfdc8;
        case 0x2dfdccu: goto label_2dfdcc;
        case 0x2dfdd0u: goto label_2dfdd0;
        case 0x2dfdd4u: goto label_2dfdd4;
        case 0x2dfdd8u: goto label_2dfdd8;
        case 0x2dfddcu: goto label_2dfddc;
        case 0x2dfde0u: goto label_2dfde0;
        case 0x2dfde4u: goto label_2dfde4;
        case 0x2dfde8u: goto label_2dfde8;
        case 0x2dfdecu: goto label_2dfdec;
        case 0x2dfdf0u: goto label_2dfdf0;
        case 0x2dfdf4u: goto label_2dfdf4;
        case 0x2dfdf8u: goto label_2dfdf8;
        case 0x2dfdfcu: goto label_2dfdfc;
        case 0x2dfe00u: goto label_2dfe00;
        case 0x2dfe04u: goto label_2dfe04;
        case 0x2dfe08u: goto label_2dfe08;
        case 0x2dfe0cu: goto label_2dfe0c;
        case 0x2dfe10u: goto label_2dfe10;
        case 0x2dfe14u: goto label_2dfe14;
        case 0x2dfe18u: goto label_2dfe18;
        case 0x2dfe1cu: goto label_2dfe1c;
        case 0x2dfe20u: goto label_2dfe20;
        case 0x2dfe24u: goto label_2dfe24;
        case 0x2dfe28u: goto label_2dfe28;
        case 0x2dfe2cu: goto label_2dfe2c;
        case 0x2dfe30u: goto label_2dfe30;
        case 0x2dfe34u: goto label_2dfe34;
        case 0x2dfe38u: goto label_2dfe38;
        case 0x2dfe3cu: goto label_2dfe3c;
        case 0x2dfe40u: goto label_2dfe40;
        case 0x2dfe44u: goto label_2dfe44;
        case 0x2dfe48u: goto label_2dfe48;
        case 0x2dfe4cu: goto label_2dfe4c;
        case 0x2dfe50u: goto label_2dfe50;
        case 0x2dfe54u: goto label_2dfe54;
        case 0x2dfe58u: goto label_2dfe58;
        case 0x2dfe5cu: goto label_2dfe5c;
        case 0x2dfe60u: goto label_2dfe60;
        case 0x2dfe64u: goto label_2dfe64;
        case 0x2dfe68u: goto label_2dfe68;
        case 0x2dfe6cu: goto label_2dfe6c;
        case 0x2dfe70u: goto label_2dfe70;
        case 0x2dfe74u: goto label_2dfe74;
        case 0x2dfe78u: goto label_2dfe78;
        case 0x2dfe7cu: goto label_2dfe7c;
        case 0x2dfe80u: goto label_2dfe80;
        case 0x2dfe84u: goto label_2dfe84;
        case 0x2dfe88u: goto label_2dfe88;
        case 0x2dfe8cu: goto label_2dfe8c;
        case 0x2dfe90u: goto label_2dfe90;
        case 0x2dfe94u: goto label_2dfe94;
        case 0x2dfe98u: goto label_2dfe98;
        case 0x2dfe9cu: goto label_2dfe9c;
        case 0x2dfea0u: goto label_2dfea0;
        case 0x2dfea4u: goto label_2dfea4;
        case 0x2dfea8u: goto label_2dfea8;
        case 0x2dfeacu: goto label_2dfeac;
        case 0x2dfeb0u: goto label_2dfeb0;
        case 0x2dfeb4u: goto label_2dfeb4;
        case 0x2dfeb8u: goto label_2dfeb8;
        case 0x2dfebcu: goto label_2dfebc;
        case 0x2dfec0u: goto label_2dfec0;
        case 0x2dfec4u: goto label_2dfec4;
        case 0x2dfec8u: goto label_2dfec8;
        case 0x2dfeccu: goto label_2dfecc;
        case 0x2dfed0u: goto label_2dfed0;
        case 0x2dfed4u: goto label_2dfed4;
        case 0x2dfed8u: goto label_2dfed8;
        case 0x2dfedcu: goto label_2dfedc;
        case 0x2dfee0u: goto label_2dfee0;
        case 0x2dfee4u: goto label_2dfee4;
        case 0x2dfee8u: goto label_2dfee8;
        case 0x2dfeecu: goto label_2dfeec;
        case 0x2dfef0u: goto label_2dfef0;
        case 0x2dfef4u: goto label_2dfef4;
        case 0x2dfef8u: goto label_2dfef8;
        case 0x2dfefcu: goto label_2dfefc;
        case 0x2dff00u: goto label_2dff00;
        case 0x2dff04u: goto label_2dff04;
        case 0x2dff08u: goto label_2dff08;
        case 0x2dff0cu: goto label_2dff0c;
        case 0x2dff10u: goto label_2dff10;
        case 0x2dff14u: goto label_2dff14;
        case 0x2dff18u: goto label_2dff18;
        case 0x2dff1cu: goto label_2dff1c;
        case 0x2dff20u: goto label_2dff20;
        case 0x2dff24u: goto label_2dff24;
        case 0x2dff28u: goto label_2dff28;
        case 0x2dff2cu: goto label_2dff2c;
        case 0x2dff30u: goto label_2dff30;
        case 0x2dff34u: goto label_2dff34;
        case 0x2dff38u: goto label_2dff38;
        case 0x2dff3cu: goto label_2dff3c;
        case 0x2dff40u: goto label_2dff40;
        case 0x2dff44u: goto label_2dff44;
        case 0x2dff48u: goto label_2dff48;
        case 0x2dff4cu: goto label_2dff4c;
        case 0x2dff50u: goto label_2dff50;
        case 0x2dff54u: goto label_2dff54;
        case 0x2dff58u: goto label_2dff58;
        case 0x2dff5cu: goto label_2dff5c;
        case 0x2dff60u: goto label_2dff60;
        case 0x2dff64u: goto label_2dff64;
        case 0x2dff68u: goto label_2dff68;
        case 0x2dff6cu: goto label_2dff6c;
        case 0x2dff70u: goto label_2dff70;
        case 0x2dff74u: goto label_2dff74;
        case 0x2dff78u: goto label_2dff78;
        case 0x2dff7cu: goto label_2dff7c;
        case 0x2dff80u: goto label_2dff80;
        case 0x2dff84u: goto label_2dff84;
        case 0x2dff88u: goto label_2dff88;
        case 0x2dff8cu: goto label_2dff8c;
        case 0x2dff90u: goto label_2dff90;
        case 0x2dff94u: goto label_2dff94;
        case 0x2dff98u: goto label_2dff98;
        case 0x2dff9cu: goto label_2dff9c;
        case 0x2dffa0u: goto label_2dffa0;
        case 0x2dffa4u: goto label_2dffa4;
        case 0x2dffa8u: goto label_2dffa8;
        case 0x2dffacu: goto label_2dffac;
        case 0x2dffb0u: goto label_2dffb0;
        case 0x2dffb4u: goto label_2dffb4;
        case 0x2dffb8u: goto label_2dffb8;
        case 0x2dffbcu: goto label_2dffbc;
        case 0x2dffc0u: goto label_2dffc0;
        case 0x2dffc4u: goto label_2dffc4;
        case 0x2dffc8u: goto label_2dffc8;
        case 0x2dffccu: goto label_2dffcc;
        case 0x2dffd0u: goto label_2dffd0;
        case 0x2dffd4u: goto label_2dffd4;
        case 0x2dffd8u: goto label_2dffd8;
        case 0x2dffdcu: goto label_2dffdc;
        case 0x2dffe0u: goto label_2dffe0;
        case 0x2dffe4u: goto label_2dffe4;
        case 0x2dffe8u: goto label_2dffe8;
        case 0x2dffecu: goto label_2dffec;
        case 0x2dfff0u: goto label_2dfff0;
        case 0x2dfff4u: goto label_2dfff4;
        case 0x2dfff8u: goto label_2dfff8;
        case 0x2dfffcu: goto label_2dfffc;
        case 0x2e0000u: goto label_2e0000;
        case 0x2e0004u: goto label_2e0004;
        case 0x2e0008u: goto label_2e0008;
        case 0x2e000cu: goto label_2e000c;
        case 0x2e0010u: goto label_2e0010;
        case 0x2e0014u: goto label_2e0014;
        case 0x2e0018u: goto label_2e0018;
        case 0x2e001cu: goto label_2e001c;
        case 0x2e0020u: goto label_2e0020;
        case 0x2e0024u: goto label_2e0024;
        case 0x2e0028u: goto label_2e0028;
        case 0x2e002cu: goto label_2e002c;
        case 0x2e0030u: goto label_2e0030;
        case 0x2e0034u: goto label_2e0034;
        case 0x2e0038u: goto label_2e0038;
        case 0x2e003cu: goto label_2e003c;
        case 0x2e0040u: goto label_2e0040;
        case 0x2e0044u: goto label_2e0044;
        case 0x2e0048u: goto label_2e0048;
        case 0x2e004cu: goto label_2e004c;
        case 0x2e0050u: goto label_2e0050;
        case 0x2e0054u: goto label_2e0054;
        case 0x2e0058u: goto label_2e0058;
        case 0x2e005cu: goto label_2e005c;
        case 0x2e0060u: goto label_2e0060;
        case 0x2e0064u: goto label_2e0064;
        case 0x2e0068u: goto label_2e0068;
        case 0x2e006cu: goto label_2e006c;
        case 0x2e0070u: goto label_2e0070;
        case 0x2e0074u: goto label_2e0074;
        case 0x2e0078u: goto label_2e0078;
        case 0x2e007cu: goto label_2e007c;
        case 0x2e0080u: goto label_2e0080;
        case 0x2e0084u: goto label_2e0084;
        case 0x2e0088u: goto label_2e0088;
        case 0x2e008cu: goto label_2e008c;
        case 0x2e0090u: goto label_2e0090;
        case 0x2e0094u: goto label_2e0094;
        case 0x2e0098u: goto label_2e0098;
        case 0x2e009cu: goto label_2e009c;
        case 0x2e00a0u: goto label_2e00a0;
        case 0x2e00a4u: goto label_2e00a4;
        case 0x2e00a8u: goto label_2e00a8;
        case 0x2e00acu: goto label_2e00ac;
        case 0x2e00b0u: goto label_2e00b0;
        case 0x2e00b4u: goto label_2e00b4;
        case 0x2e00b8u: goto label_2e00b8;
        case 0x2e00bcu: goto label_2e00bc;
        case 0x2e00c0u: goto label_2e00c0;
        case 0x2e00c4u: goto label_2e00c4;
        case 0x2e00c8u: goto label_2e00c8;
        case 0x2e00ccu: goto label_2e00cc;
        case 0x2e00d0u: goto label_2e00d0;
        case 0x2e00d4u: goto label_2e00d4;
        case 0x2e00d8u: goto label_2e00d8;
        case 0x2e00dcu: goto label_2e00dc;
        case 0x2e00e0u: goto label_2e00e0;
        case 0x2e00e4u: goto label_2e00e4;
        case 0x2e00e8u: goto label_2e00e8;
        case 0x2e00ecu: goto label_2e00ec;
        case 0x2e00f0u: goto label_2e00f0;
        case 0x2e00f4u: goto label_2e00f4;
        case 0x2e00f8u: goto label_2e00f8;
        case 0x2e00fcu: goto label_2e00fc;
        case 0x2e0100u: goto label_2e0100;
        case 0x2e0104u: goto label_2e0104;
        case 0x2e0108u: goto label_2e0108;
        case 0x2e010cu: goto label_2e010c;
        case 0x2e0110u: goto label_2e0110;
        case 0x2e0114u: goto label_2e0114;
        case 0x2e0118u: goto label_2e0118;
        case 0x2e011cu: goto label_2e011c;
        case 0x2e0120u: goto label_2e0120;
        case 0x2e0124u: goto label_2e0124;
        case 0x2e0128u: goto label_2e0128;
        case 0x2e012cu: goto label_2e012c;
        case 0x2e0130u: goto label_2e0130;
        case 0x2e0134u: goto label_2e0134;
        case 0x2e0138u: goto label_2e0138;
        case 0x2e013cu: goto label_2e013c;
        case 0x2e0140u: goto label_2e0140;
        case 0x2e0144u: goto label_2e0144;
        case 0x2e0148u: goto label_2e0148;
        case 0x2e014cu: goto label_2e014c;
        case 0x2e0150u: goto label_2e0150;
        case 0x2e0154u: goto label_2e0154;
        case 0x2e0158u: goto label_2e0158;
        case 0x2e015cu: goto label_2e015c;
        case 0x2e0160u: goto label_2e0160;
        case 0x2e0164u: goto label_2e0164;
        case 0x2e0168u: goto label_2e0168;
        case 0x2e016cu: goto label_2e016c;
        case 0x2e0170u: goto label_2e0170;
        case 0x2e0174u: goto label_2e0174;
        case 0x2e0178u: goto label_2e0178;
        case 0x2e017cu: goto label_2e017c;
        case 0x2e0180u: goto label_2e0180;
        case 0x2e0184u: goto label_2e0184;
        case 0x2e0188u: goto label_2e0188;
        case 0x2e018cu: goto label_2e018c;
        case 0x2e0190u: goto label_2e0190;
        case 0x2e0194u: goto label_2e0194;
        case 0x2e0198u: goto label_2e0198;
        case 0x2e019cu: goto label_2e019c;
        case 0x2e01a0u: goto label_2e01a0;
        case 0x2e01a4u: goto label_2e01a4;
        case 0x2e01a8u: goto label_2e01a8;
        case 0x2e01acu: goto label_2e01ac;
        case 0x2e01b0u: goto label_2e01b0;
        case 0x2e01b4u: goto label_2e01b4;
        case 0x2e01b8u: goto label_2e01b8;
        case 0x2e01bcu: goto label_2e01bc;
        case 0x2e01c0u: goto label_2e01c0;
        case 0x2e01c4u: goto label_2e01c4;
        case 0x2e01c8u: goto label_2e01c8;
        case 0x2e01ccu: goto label_2e01cc;
        case 0x2e01d0u: goto label_2e01d0;
        case 0x2e01d4u: goto label_2e01d4;
        case 0x2e01d8u: goto label_2e01d8;
        case 0x2e01dcu: goto label_2e01dc;
        case 0x2e01e0u: goto label_2e01e0;
        case 0x2e01e4u: goto label_2e01e4;
        case 0x2e01e8u: goto label_2e01e8;
        case 0x2e01ecu: goto label_2e01ec;
        case 0x2e01f0u: goto label_2e01f0;
        case 0x2e01f4u: goto label_2e01f4;
        case 0x2e01f8u: goto label_2e01f8;
        case 0x2e01fcu: goto label_2e01fc;
        case 0x2e0200u: goto label_2e0200;
        case 0x2e0204u: goto label_2e0204;
        case 0x2e0208u: goto label_2e0208;
        case 0x2e020cu: goto label_2e020c;
        case 0x2e0210u: goto label_2e0210;
        case 0x2e0214u: goto label_2e0214;
        case 0x2e0218u: goto label_2e0218;
        case 0x2e021cu: goto label_2e021c;
        case 0x2e0220u: goto label_2e0220;
        case 0x2e0224u: goto label_2e0224;
        case 0x2e0228u: goto label_2e0228;
        case 0x2e022cu: goto label_2e022c;
        case 0x2e0230u: goto label_2e0230;
        case 0x2e0234u: goto label_2e0234;
        case 0x2e0238u: goto label_2e0238;
        case 0x2e023cu: goto label_2e023c;
        case 0x2e0240u: goto label_2e0240;
        case 0x2e0244u: goto label_2e0244;
        case 0x2e0248u: goto label_2e0248;
        case 0x2e024cu: goto label_2e024c;
        case 0x2e0250u: goto label_2e0250;
        case 0x2e0254u: goto label_2e0254;
        case 0x2e0258u: goto label_2e0258;
        case 0x2e025cu: goto label_2e025c;
        case 0x2e0260u: goto label_2e0260;
        case 0x2e0264u: goto label_2e0264;
        case 0x2e0268u: goto label_2e0268;
        case 0x2e026cu: goto label_2e026c;
        case 0x2e0270u: goto label_2e0270;
        case 0x2e0274u: goto label_2e0274;
        case 0x2e0278u: goto label_2e0278;
        case 0x2e027cu: goto label_2e027c;
        case 0x2e0280u: goto label_2e0280;
        case 0x2e0284u: goto label_2e0284;
        case 0x2e0288u: goto label_2e0288;
        case 0x2e028cu: goto label_2e028c;
        case 0x2e0290u: goto label_2e0290;
        case 0x2e0294u: goto label_2e0294;
        case 0x2e0298u: goto label_2e0298;
        case 0x2e029cu: goto label_2e029c;
        case 0x2e02a0u: goto label_2e02a0;
        case 0x2e02a4u: goto label_2e02a4;
        case 0x2e02a8u: goto label_2e02a8;
        case 0x2e02acu: goto label_2e02ac;
        case 0x2e02b0u: goto label_2e02b0;
        case 0x2e02b4u: goto label_2e02b4;
        case 0x2e02b8u: goto label_2e02b8;
        case 0x2e02bcu: goto label_2e02bc;
        case 0x2e02c0u: goto label_2e02c0;
        case 0x2e02c4u: goto label_2e02c4;
        case 0x2e02c8u: goto label_2e02c8;
        case 0x2e02ccu: goto label_2e02cc;
        case 0x2e02d0u: goto label_2e02d0;
        case 0x2e02d4u: goto label_2e02d4;
        case 0x2e02d8u: goto label_2e02d8;
        case 0x2e02dcu: goto label_2e02dc;
        case 0x2e02e0u: goto label_2e02e0;
        case 0x2e02e4u: goto label_2e02e4;
        case 0x2e02e8u: goto label_2e02e8;
        case 0x2e02ecu: goto label_2e02ec;
        case 0x2e02f0u: goto label_2e02f0;
        case 0x2e02f4u: goto label_2e02f4;
        case 0x2e02f8u: goto label_2e02f8;
        case 0x2e02fcu: goto label_2e02fc;
        case 0x2e0300u: goto label_2e0300;
        case 0x2e0304u: goto label_2e0304;
        case 0x2e0308u: goto label_2e0308;
        case 0x2e030cu: goto label_2e030c;
        case 0x2e0310u: goto label_2e0310;
        case 0x2e0314u: goto label_2e0314;
        case 0x2e0318u: goto label_2e0318;
        case 0x2e031cu: goto label_2e031c;
        case 0x2e0320u: goto label_2e0320;
        case 0x2e0324u: goto label_2e0324;
        case 0x2e0328u: goto label_2e0328;
        case 0x2e032cu: goto label_2e032c;
        case 0x2e0330u: goto label_2e0330;
        case 0x2e0334u: goto label_2e0334;
        case 0x2e0338u: goto label_2e0338;
        case 0x2e033cu: goto label_2e033c;
        case 0x2e0340u: goto label_2e0340;
        case 0x2e0344u: goto label_2e0344;
        case 0x2e0348u: goto label_2e0348;
        case 0x2e034cu: goto label_2e034c;
        case 0x2e0350u: goto label_2e0350;
        case 0x2e0354u: goto label_2e0354;
        case 0x2e0358u: goto label_2e0358;
        case 0x2e035cu: goto label_2e035c;
        case 0x2e0360u: goto label_2e0360;
        case 0x2e0364u: goto label_2e0364;
        default: break;
    }

    ctx->pc = 0x2dfc48u;

label_2dfc48:
    // 0x2dfc48: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x2dfc48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_2dfc4c:
    // 0x2dfc4c: 0xffb100e8  sd          $s1, 0xE8($sp)
    ctx->pc = 0x2dfc4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 17));
label_2dfc50:
    // 0x2dfc50: 0xffb200f0  sd          $s2, 0xF0($sp)
    ctx->pc = 0x2dfc50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 18));
label_2dfc54:
    // 0x2dfc54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dfc54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc58:
    // 0x2dfc58: 0xffb40100  sd          $s4, 0x100($sp)
    ctx->pc = 0x2dfc58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 20));
label_2dfc5c:
    // 0x2dfc5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2dfc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc60:
    // 0x2dfc60: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x2dfc60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
label_2dfc64:
    // 0x2dfc64: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2dfc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc68:
    // 0x2dfc68: 0xffb300f8  sd          $s3, 0xF8($sp)
    ctx->pc = 0x2dfc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 19));
label_2dfc6c:
    // 0x2dfc6c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2dfc6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2dfc70:
    // 0x2dfc70: 0xffb50108  sd          $s5, 0x108($sp)
    ctx->pc = 0x2dfc70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 21));
label_2dfc74:
    // 0x2dfc74: 0xffb60110  sd          $s6, 0x110($sp)
    ctx->pc = 0x2dfc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 22));
label_2dfc78:
    // 0x2dfc78: 0xffb70118  sd          $s7, 0x118($sp)
    ctx->pc = 0x2dfc78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 23));
label_2dfc7c:
    // 0x2dfc7c: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x2dfc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
label_2dfc80:
    // 0x2dfc80: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x2dfc80u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_2dfc84:
    // 0x2dfc84: 0xc0f6a96  jal         func_3DAA58
label_2dfc88:
    if (ctx->pc == 0x2DFC88u) {
        ctx->pc = 0x2DFC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC84u;
        // 0x2dfc88: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC8Cu;
        goto label_2dfc8c;
    }
    ctx->pc = 0x2DFC84u;
    SET_GPR_U32(ctx, 31, 0x2DFC8Cu);
    ctx->pc = 0x2DFC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC84u;
    // 0x2dfc88: 0xe7b40130  swc1        $f20, 0x130($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFC84u, 0x2DFC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC8Cu;
label_2dfc8c:
    // 0x2dfc8c: 0xc0f6a96  jal         func_3DAA58
label_2dfc90:
    if (ctx->pc == 0x2DFC90u) {
        ctx->pc = 0x2DFC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC8Cu;
        // 0x2dfc90: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC94u;
        goto label_2dfc94;
    }
    ctx->pc = 0x2DFC8Cu;
    SET_GPR_U32(ctx, 31, 0x2DFC94u);
    ctx->pc = 0x2DFC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC8Cu;
    // 0x2dfc90: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFC8Cu, 0x2DFC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC94u;
label_2dfc94:
    // 0x2dfc94: 0xc0f6a96  jal         func_3DAA58
label_2dfc98:
    if (ctx->pc == 0x2DFC98u) {
        ctx->pc = 0x2DFC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC94u;
        // 0x2dfc98: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFC9Cu;
        goto label_2dfc9c;
    }
    ctx->pc = 0x2DFC94u;
    SET_GPR_U32(ctx, 31, 0x2DFC9Cu);
    ctx->pc = 0x2DFC98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC94u;
    // 0x2dfc98: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFC94u, 0x2DFC9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFC9Cu;
label_2dfc9c:
    // 0x2dfc9c: 0xc0f6a96  jal         func_3DAA58
label_2dfca0:
    if (ctx->pc == 0x2DFCA0u) {
        ctx->pc = 0x2DFCA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFC9Cu;
        // 0x2dfca0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCA4u;
        goto label_2dfca4;
    }
    ctx->pc = 0x2DFC9Cu;
    SET_GPR_U32(ctx, 31, 0x2DFCA4u);
    ctx->pc = 0x2DFCA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFC9Cu;
    // 0x2dfca0: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFC9Cu, 0x2DFCA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCA4u;
label_2dfca4:
    // 0x2dfca4: 0xc0f6a96  jal         func_3DAA58
label_2dfca8:
    if (ctx->pc == 0x2DFCA8u) {
        ctx->pc = 0x2DFCA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCA4u;
        // 0x2dfca8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCACu;
        goto label_2dfcac;
    }
    ctx->pc = 0x2DFCA4u;
    SET_GPR_U32(ctx, 31, 0x2DFCACu);
    ctx->pc = 0x2DFCA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCA4u;
    // 0x2dfca8: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFCA4u, 0x2DFCACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCACu;
label_2dfcac:
    // 0x2dfcac: 0xc0f6a96  jal         func_3DAA58
label_2dfcb0:
    if (ctx->pc == 0x2DFCB0u) {
        ctx->pc = 0x2DFCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCACu;
        // 0x2dfcb0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCB4u;
        goto label_2dfcb4;
    }
    ctx->pc = 0x2DFCACu;
    SET_GPR_U32(ctx, 31, 0x2DFCB4u);
    ctx->pc = 0x2DFCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCACu;
    // 0x2dfcb0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFCACu, 0x2DFCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCB4u;
label_2dfcb4:
    // 0x2dfcb4: 0xc0f6a96  jal         func_3DAA58
label_2dfcb8:
    if (ctx->pc == 0x2DFCB8u) {
        ctx->pc = 0x2DFCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCB4u;
        // 0x2dfcb8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCBCu;
        goto label_2dfcbc;
    }
    ctx->pc = 0x2DFCB4u;
    SET_GPR_U32(ctx, 31, 0x2DFCBCu);
    ctx->pc = 0x2DFCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCB4u;
    // 0x2dfcb8: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFCB4u, 0x2DFCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCBCu;
label_2dfcbc:
    // 0x2dfcbc: 0xc0f6a96  jal         func_3DAA58
label_2dfcc0:
    if (ctx->pc == 0x2DFCC0u) {
        ctx->pc = 0x2DFCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCBCu;
        // 0x2dfcc0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCC4u;
        goto label_2dfcc4;
    }
    ctx->pc = 0x2DFCBCu;
    SET_GPR_U32(ctx, 31, 0x2DFCC4u);
    ctx->pc = 0x2DFCC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCBCu;
    // 0x2dfcc0: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFCBCu, 0x2DFCC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCC4u;
label_2dfcc4:
    // 0x2dfcc4: 0xc0f6a96  jal         func_3DAA58
label_2dfcc8:
    if (ctx->pc == 0x2DFCC8u) {
        ctx->pc = 0x2DFCC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCC4u;
        // 0x2dfcc8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCCCu;
        goto label_2dfccc;
    }
    ctx->pc = 0x2DFCC4u;
    SET_GPR_U32(ctx, 31, 0x2DFCCCu);
    ctx->pc = 0x2DFCC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCC4u;
    // 0x2dfcc8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFCC4u, 0x2DFCCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCCCu;
label_2dfccc:
    // 0x2dfccc: 0xc0f6a96  jal         func_3DAA58
label_2dfcd0:
    if (ctx->pc == 0x2DFCD0u) {
        ctx->pc = 0x2DFCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCCCu;
        // 0x2dfcd0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCD4u;
        goto label_2dfcd4;
    }
    ctx->pc = 0x2DFCCCu;
    SET_GPR_U32(ctx, 31, 0x2DFCD4u);
    ctx->pc = 0x2DFCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFCCCu;
    // 0x2dfcd0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x2DFCCCu, 0x2DFCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFCD4u;
label_2dfcd4:
    // 0x2dfcd4: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x2dfcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_2dfcd8:
    // 0x2dfcd8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2dfcdc:
    if (ctx->pc == 0x2DFCDCu) {
        ctx->pc = 0x2DFCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCD8u;
        // 0x2dfcdc: 0xc6400010  lwc1        $f0, 0x10($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCE0u;
        goto label_2dfce0;
    }
    ctx->pc = 0x2DFCD8u;
    {
        const bool branch_taken_0x2dfcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dfcd8) {
            ctx->pc = 0x2DFCDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFCD8u;
            // 0x2dfcdc: 0xc6400010  lwc1        $f0, 0x10($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2DFCF4u;
            goto label_2dfcf4;
        }
    }
    ctx->pc = 0x2DFCE0u;
label_2dfce0:
    // 0x2dfce0: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2dfce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2dfce4:
    // 0x2dfce4: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x2dfce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
label_2dfce8:
    // 0x2dfce8: 0x40f809  jalr        $v0
label_2dfcec:
    if (ctx->pc == 0x2DFCECu) {
        ctx->pc = 0x2DFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCE8u;
        // 0x2dfcec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFCF0u;
        goto label_2dfcf0;
    }
    ctx->pc = 0x2DFCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2DFCF0u);
        ctx->pc = 0x2DFCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFCE8u;
        // 0x2dfcec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DFCE8u, 0x2DFCF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2DFCF0u;
label_2dfcf0:
    // 0x2dfcf0: 0xc6400010  lwc1        $f0, 0x10($s2)
    ctx->pc = 0x2dfcf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfcf4:
    // 0x2dfcf4: 0x26420010  addiu       $v0, $s2, 0x10
    ctx->pc = 0x2dfcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_2dfcf8:
    // 0x2dfcf8: 0xc6450000  lwc1        $f5, 0x0($s2)
    ctx->pc = 0x2dfcf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_2dfcfc:
    // 0x2dfcfc: 0x27b000a0  addiu       $s0, $sp, 0xA0
    ctx->pc = 0x2dfcfcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2dfd00:
    // 0x2dfd00: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x2dfd00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_2dfd04:
    // 0x2dfd04: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2dfd04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfd08:
    // 0x2dfd08: 0xc6440004  lwc1        $f4, 0x4($s2)
    ctx->pc = 0x2dfd08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2dfd0c:
    // 0x2dfd0c: 0xc6430008  lwc1        $f3, 0x8($s2)
    ctx->pc = 0x2dfd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfd10:
    // 0x2dfd10: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x2dfd10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_2dfd14:
    // 0x2dfd14: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2dfd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfd18:
    // 0x2dfd18: 0xc642000c  lwc1        $f2, 0xC($s2)
    ctx->pc = 0x2dfd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfd1c:
    // 0x2dfd1c: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x2dfd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_2dfd20:
    // 0x2dfd20: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2dfd20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfd24:
    // 0x2dfd24: 0xe7a500b0  swc1        $f5, 0xB0($sp)
    ctx->pc = 0x2dfd24u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_2dfd28:
    // 0x2dfd28: 0xe7a100ac  swc1        $f1, 0xAC($sp)
    ctx->pc = 0x2dfd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_2dfd2c:
    // 0x2dfd2c: 0xe7a400b4  swc1        $f4, 0xB4($sp)
    ctx->pc = 0x2dfd2cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_2dfd30:
    // 0x2dfd30: 0xe7a300b8  swc1        $f3, 0xB8($sp)
    ctx->pc = 0x2dfd30u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_2dfd34:
    // 0x2dfd34: 0xe7a200bc  swc1        $f2, 0xBC($sp)
    ctx->pc = 0x2dfd34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_2dfd38:
    // 0x2dfd38: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2dfd38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2dfd3c:
    // 0x2dfd3c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x2dfd3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dfd40:
    // 0x2dfd40: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x2dfd40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dfd44:
    // 0x2dfd44: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x2dfd44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2dfd48:
    // 0x2dfd48: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x2dfd48u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_2dfd4c:
    // 0x2dfd4c: 0x4a0003bf  vwaitq
    ctx->pc = 0x2dfd4cu;
    // VWAITQ (Q already resolved in this runtime)
label_2dfd50:
    // 0x2dfd50: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x2dfd50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dfd54:
    // 0x2dfd54: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2dfd54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dfd58:
    // 0x2dfd58: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2dfd58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2dfd5c:
    // 0x2dfd5c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2dfd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2dfd60:
    // 0x2dfd60: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2dfd60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_2dfd64:
    // 0x2dfd64: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x2dfd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
label_2dfd68:
    // 0x2dfd68: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x2dfd68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2dfd6c:
    // 0x2dfd6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2dfd6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dfd70:
    // 0x2dfd70: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dfd70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dfd74:
    // 0x2dfd74: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2dfd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dfd78:
    // 0x2dfd78: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2dfd78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2dfd7c:
    // 0x2dfd7c: 0x8e220088  lw          $v0, 0x88($s1)
    ctx->pc = 0x2dfd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_2dfd80:
    // 0x2dfd80: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2dfd80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2dfd84:
    // 0x2dfd84: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2dfd84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dfd88:
    // 0x2dfd88: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2dfd88u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2dfd8c:
    // 0x2dfd8c: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2dfd8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2dfd90:
    // 0x2dfd90: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2dfd90u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2dfd94:
    // 0x2dfd94: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2dfd94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2dfd98:
    // 0x2dfd98: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2dfd98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2dfd9c:
    // 0x2dfd9c: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2dfd9cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2dfda0:
    // 0x2dfda0: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x2dfda0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
label_2dfda4:
    // 0x2dfda4: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x2dfda4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_2dfda8:
    // 0x2dfda8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2dfda8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dfdac:
    // 0x2dfdac: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2dfdacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2dfdb0:
    // 0x2dfdb0: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2dfdb0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2dfdb4:
    // 0x2dfdb4: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2dfdb4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2dfdb8:
    // 0x2dfdb8: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2dfdb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2dfdbc:
    // 0x2dfdbc: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2dfdbcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2dfdc0:
    // 0x2dfdc0: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2dfdc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2dfdc4:
    // 0x2dfdc4: 0xfba50080  sqc2        $vf5, 0x80($sp)
    ctx->pc = 0x2dfdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[5]));
label_2dfdc8:
    // 0x2dfdc8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2dfdc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dfdcc:
    // 0x2dfdcc: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x2dfdccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2dfdd0:
    // 0x2dfdd0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2dfdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dfdd4:
    // 0x2dfdd4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2dfdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2dfdd8:
    // 0x2dfdd8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2dfdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dfddc:
    // 0x2dfddc: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2dfde0:
    if (ctx->pc == 0x2DFDE0u) {
        ctx->pc = 0x2DFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFDDCu;
        // 0x2dfde0: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFDE4u;
        goto label_2dfde4;
    }
    ctx->pc = 0x2DFDDCu;
    {
        const bool branch_taken_0x2dfddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2DFDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFDDCu;
        // 0x2dfde0: 0x24820020  addiu       $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfddc) {
            ctx->pc = 0x2DFDF4u;
            goto label_2dfdf4;
        }
    }
    ctx->pc = 0x2DFDE4u;
label_2dfde4:
    // 0x2dfde4: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2dfde4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2dfde8:
    // 0x2dfde8: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2dfde8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dfdec:
    // 0x2dfdec: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2dfdecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2dfdf0:
    // 0x2dfdf0: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x2dfdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dfdf4:
    // 0x2dfdf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dfdf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dfdf8:
    // 0x2dfdf8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2dfdf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2dfdfc:
    // 0x2dfdfc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2dfdfcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2dfe00:
    // 0x2dfe00: 0xc0b7808  jal         func_2DE020
label_2dfe04:
    if (ctx->pc == 0x2DFE04u) {
        ctx->pc = 0x2DFE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE00u;
        // 0x2dfe04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFE08u;
        goto label_2dfe08;
    }
    ctx->pc = 0x2DFE00u;
    SET_GPR_U32(ctx, 31, 0x2DFE08u);
    ctx->pc = 0x2DFE04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DFE00u;
    // 0x2dfe04: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DE020u, 0x2DFE00u, 0x2DFE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DFE08u;
label_2dfe08:
    // 0x2dfe08: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x2dfe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfe0c:
    // 0x2dfe0c: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x2dfe0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfe10:
    // 0x2dfe10: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2dfe10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2dfe14:
    // 0x2dfe14: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2dfe14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfe18:
    // 0x2dfe18: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2dfe18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfe1c:
    // 0x2dfe1c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2dfe1cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2dfe20:
    // 0x2dfe20: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x2dfe20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfe24:
    // 0x2dfe24: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x2dfe24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfe28:
    // 0x2dfe28: 0x4603119c  madd.s      $f6, $f2, $f3
    ctx->pc = 0x2dfe28u;
    ctx->f[6] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2dfe2c:
    // 0x2dfe2c: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2dfe2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_2dfe30:
    // 0x2dfe30: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dfe30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dfe34:
    // 0x2dfe34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dfe34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfe38:
    // 0x2dfe38: 0x0  nop
    ctx->pc = 0x2dfe38u;
    // NOP
label_2dfe3c:
    // 0x2dfe3c: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2dfe3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dfe40:
    // 0x2dfe40: 0x0  nop
    ctx->pc = 0x2dfe40u;
    // NOP
label_2dfe44:
    // 0x2dfe44: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_2dfe48:
    if (ctx->pc == 0x2DFE48u) {
        ctx->pc = 0x2DFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE44u;
        // 0x2dfe48: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFE4Cu;
        goto label_2dfe4c;
    }
    ctx->pc = 0x2DFE44u;
    {
        const bool branch_taken_0x2dfe44 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE44u;
        // 0x2dfe48: 0xc7a200a0  lwc1        $f2, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe44) {
            ctx->pc = 0x2DFE80u;
            goto label_2dfe80;
        }
    }
    ctx->pc = 0x2DFE4Cu;
label_2dfe4c:
    // 0x2dfe4c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x2dfe4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2dfe50:
    // 0x2dfe50: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x2dfe50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfe54:
    // 0x2dfe54: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2dfe54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2dfe58:
    // 0x2dfe58: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2dfe58u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_2dfe5c:
    // 0x2dfe5c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2dfe5cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2dfe60:
    // 0x2dfe60: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x2dfe60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_2dfe64:
    // 0x2dfe64: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x2dfe64u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_2dfe68:
    // 0x2dfe68: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x2dfe68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2dfe6c:
    // 0x2dfe6c: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2dfe6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2dfe70:
    // 0x2dfe70: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2dfe70u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2dfe74:
    // 0x2dfe74: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2dfe74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2dfe78:
    // 0x2dfe78: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x2dfe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_2dfe7c:
    // 0x2dfe7c: 0x46003187  neg.s       $f6, $f6
    ctx->pc = 0x2dfe7cu;
    ctx->f[6] = FPU_NEG_S(ctx->f[6]);
label_2dfe80:
    // 0x2dfe80: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2dfe80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2dfe84:
    // 0x2dfe84: 0x3c030006  lui         $v1, 0x6
    ctx->pc = 0x2dfe84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)6 << 16));
label_2dfe88:
    // 0x2dfe88: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2dfe88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2dfe8c:
    // 0x2dfe8c: 0x8c8200bc  lw          $v0, 0xBC($a0)
    ctx->pc = 0x2dfe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_2dfe90:
    // 0x2dfe90: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2dfe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2dfe94:
    // 0x2dfe94: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2dfe94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_2dfe98:
    // 0x2dfe98: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x2dfe98u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2dfe9c:
    // 0x2dfe9c: 0x12c00023  beqz        $s6, . + 4 + (0x23 << 2)
label_2dfea0:
    if (ctx->pc == 0x2DFEA0u) {
        ctx->pc = 0x2DFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE9Cu;
        // 0x2dfea0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFEA4u;
        goto label_2dfea4;
    }
    ctx->pc = 0x2DFE9Cu;
    {
        const bool branch_taken_0x2dfe9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFE9Cu;
        // 0x2dfea0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfe9c) {
            ctx->pc = 0x2DFF2Cu;
            goto label_2dff2c;
        }
    }
    ctx->pc = 0x2DFEA4u;
label_2dfea4:
    // 0x2dfea4: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2dfea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2dfea8:
    // 0x2dfea8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2dfeac:
    if (ctx->pc == 0x2DFEACu) {
        ctx->pc = 0x2DFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEA8u;
        // 0x2dfeac: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFEB0u;
        goto label_2dfeb0;
    }
    ctx->pc = 0x2DFEA8u;
    {
        const bool branch_taken_0x2dfea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEA8u;
        // 0x2dfeac: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfea8) {
            ctx->pc = 0x2DFEB8u;
            goto label_2dfeb8;
        }
    }
    ctx->pc = 0x2DFEB0u;
label_2dfeb0:
    // 0x2dfeb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2dfeb4:
    if (ctx->pc == 0x2DFEB4u) {
        ctx->pc = 0x2DFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEB0u;
        // 0x2dfeb4: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFEB8u;
        goto label_2dfeb8;
    }
    ctx->pc = 0x2DFEB0u;
    {
        const bool branch_taken_0x2dfeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFEB0u;
        // 0x2dfeb4: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfeb0) {
            ctx->pc = 0x2DFEC4u;
            goto label_2dfec4;
        }
    }
    ctx->pc = 0x2DFEB8u;
label_2dfeb8:
    // 0x2dfeb8: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2dfeb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2dfebc:
    // 0x2dfebc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dfebcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dfec0:
    // 0x2dfec0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dfec0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dfec4:
    // 0x2dfec4: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2dfec4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2dfec8:
    // 0x2dfec8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dfec8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dfecc:
    // 0x2dfecc: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x2dfeccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2dfed0:
    // 0x2dfed0: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2dfed0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2dfed4:
    // 0x2dfed4: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2dfed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dfed8:
    // 0x2dfed8: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2dfed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dfedc:
    // 0x2dfedc: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2dfedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2dfee0:
    // 0x2dfee0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2dfee0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2dfee4:
    // 0x2dfee4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2dfee4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2dfee8:
    // 0x2dfee8: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x2dfee8u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2dfeec:
    // 0x2dfeec: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dfeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2dfef0:
    // 0x2dfef0: 0xc440b670  lwc1        $f0, -0x4990($v0)
    ctx->pc = 0x2dfef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dfef4:
    // 0x2dfef4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2dfef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2dfef8:
    // 0x2dfef8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2dfef8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2dfefc:
    // 0x2dfefc: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2dfefcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dff00:
    // 0x2dff00: 0x0  nop
    ctx->pc = 0x2dff00u;
    // NOP
label_2dff04:
    // 0x2dff04: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2dff08:
    if (ctx->pc == 0x2DFF08u) {
        ctx->pc = 0x2DFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF04u;
        // 0x2dff08: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF0Cu;
        goto label_2dff0c;
    }
    ctx->pc = 0x2DFF04u;
    {
        const bool branch_taken_0x2dff04 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF04u;
        // 0x2dff08: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff04) {
            ctx->pc = 0x2DFF18u;
            goto label_2dff18;
        }
    }
    ctx->pc = 0x2DFF0Cu;
label_2dff0c:
    // 0x2dff0c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2dff0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dff10:
    // 0x2dff10: 0x10000044  b           . + 4 + (0x44 << 2)
label_2dff14:
    if (ctx->pc == 0x2DFF14u) {
        ctx->pc = 0x2DFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF10u;
        // 0x2dff14: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF18u;
        goto label_2dff18;
    }
    ctx->pc = 0x2DFF10u;
    {
        const bool branch_taken_0x2dff10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF10u;
        // 0x2dff14: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff10) {
            ctx->pc = 0x2E0024u;
            goto label_2e0024;
        }
    }
    ctx->pc = 0x2DFF18u;
label_2dff18:
    // 0x2dff18: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2dff18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dff1c:
    // 0x2dff1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dff1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dff20:
    // 0x2dff20: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dff20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dff24:
    // 0x2dff24: 0x1000003b  b           . + 4 + (0x3B << 2)
label_2dff28:
    if (ctx->pc == 0x2DFF28u) {
        ctx->pc = 0x2DFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF24u;
        // 0x2dff28: 0xc4400044  lwc1        $f0, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF2Cu;
        goto label_2dff2c;
    }
    ctx->pc = 0x2DFF24u;
    {
        const bool branch_taken_0x2dff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF24u;
        // 0x2dff28: 0xc4400044  lwc1        $f0, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff24) {
            ctx->pc = 0x2E0014u;
            goto label_2e0014;
        }
    }
    ctx->pc = 0x2DFF2Cu;
label_2dff2c:
    // 0x2dff2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2dff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2dff30:
    // 0x2dff30: 0x12820005  beq         $s4, $v0, . + 4 + (0x5 << 2)
label_2dff34:
    if (ctx->pc == 0x2DFF34u) {
        ctx->pc = 0x2DFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF30u;
        // 0x2dff34: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF38u;
        goto label_2dff38;
    }
    ctx->pc = 0x2DFF30u;
    {
        const bool branch_taken_0x2dff30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x2DFF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF30u;
        // 0x2dff34: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff30) {
            ctx->pc = 0x2DFF48u;
            goto label_2dff48;
        }
    }
    ctx->pc = 0x2DFF38u;
label_2dff38:
    // 0x2dff38: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2dff38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dff3c:
    // 0x2dff3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2dff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2dff40:
    // 0x2dff40: 0x1464000d  bne         $v1, $a0, . + 4 + (0xD << 2)
label_2dff44:
    if (ctx->pc == 0x2DFF44u) {
        ctx->pc = 0x2DFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF40u;
        // 0x2dff44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF48u;
        goto label_2dff48;
    }
    ctx->pc = 0x2DFF40u;
    {
        const bool branch_taken_0x2dff40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2DFF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF40u;
        // 0x2dff44: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff40) {
            ctx->pc = 0x2DFF78u;
            goto label_2dff78;
        }
    }
    ctx->pc = 0x2DFF48u;
label_2dff48:
    // 0x2dff48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dff48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dff4c:
    // 0x2dff4c: 0x0  nop
    ctx->pc = 0x2dff4cu;
    // NOP
label_2dff50:
    // 0x2dff50: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2dff50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dff54:
    // 0x2dff54: 0x0  nop
    ctx->pc = 0x2dff54u;
    // NOP
label_2dff58:
    // 0x2dff58: 0x450100f6  bc1t        . + 4 + (0xF6 << 2)
label_2dff5c:
    if (ctx->pc == 0x2DFF5Cu) {
        ctx->pc = 0x2DFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF58u;
        // 0x2dff5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF60u;
        goto label_2dff60;
    }
    ctx->pc = 0x2DFF58u;
    {
        const bool branch_taken_0x2dff58 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF58u;
        // 0x2dff5c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff58) {
            ctx->pc = 0x2E0334u;
            goto label_2e0334;
        }
    }
    ctx->pc = 0x2DFF60u;
label_2dff60:
    // 0x2dff60: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2dff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2dff64:
    // 0x2dff64: 0x26350030  addiu       $s5, $s1, 0x30
    ctx->pc = 0x2dff64u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2dff68:
    // 0x2dff68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2dff68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2dff6c:
    // 0x2dff6c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dff6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dff70:
    // 0x2dff70: 0x10000028  b           . + 4 + (0x28 << 2)
label_2dff74:
    if (ctx->pc == 0x2DFF74u) {
        ctx->pc = 0x2DFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF70u;
        // 0x2dff74: 0xc4400044  lwc1        $f0, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF78u;
        goto label_2dff78;
    }
    ctx->pc = 0x2DFF70u;
    {
        const bool branch_taken_0x2dff70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF70u;
        // 0x2dff74: 0xc4400044  lwc1        $f0, 0x44($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff70) {
            ctx->pc = 0x2E0014u;
            goto label_2e0014;
        }
    }
    ctx->pc = 0x2DFF78u;
label_2dff78:
    // 0x2dff78: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2dff78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dff7c:
    // 0x2dff7c: 0x0  nop
    ctx->pc = 0x2dff7cu;
    // NOP
label_2dff80:
    // 0x2dff80: 0x46060034  c.lt.s      $f0, $f6
    ctx->pc = 0x2dff80u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dff84:
    // 0x2dff84: 0x0  nop
    ctx->pc = 0x2dff84u;
    // NOP
label_2dff88:
    // 0x2dff88: 0x450100ea  bc1t        . + 4 + (0xEA << 2)
label_2dff8c:
    if (ctx->pc == 0x2DFF8Cu) {
        ctx->pc = 0x2DFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF88u;
        // 0x2dff8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF90u;
        goto label_2dff90;
    }
    ctx->pc = 0x2DFF88u;
    {
        const bool branch_taken_0x2dff88 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF88u;
        // 0x2dff8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff88) {
            ctx->pc = 0x2E0334u;
            goto label_2e0334;
        }
    }
    ctx->pc = 0x2DFF90u;
label_2dff90:
    // 0x2dff90: 0x8e22005c  lw          $v0, 0x5C($s1)
    ctx->pc = 0x2dff90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_2dff94:
    // 0x2dff94: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2dff98:
    if (ctx->pc == 0x2DFF98u) {
        ctx->pc = 0x2DFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF94u;
        // 0x2dff98: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFF9Cu;
        goto label_2dff9c;
    }
    ctx->pc = 0x2DFF94u;
    {
        const bool branch_taken_0x2dff94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DFF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF94u;
        // 0x2dff98: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff94) {
            ctx->pc = 0x2DFFA4u;
            goto label_2dffa4;
        }
    }
    ctx->pc = 0x2DFF9Cu;
label_2dff9c:
    // 0x2dff9c: 0x10000004  b           . + 4 + (0x4 << 2)
label_2dffa0:
    if (ctx->pc == 0x2DFFA0u) {
        ctx->pc = 0x2DFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF9Cu;
        // 0x2dffa0: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFFA4u;
        goto label_2dffa4;
    }
    ctx->pc = 0x2DFF9Cu;
    {
        const bool branch_taken_0x2dff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DFFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFF9Cu;
        // 0x2dffa0: 0xc4402b30  lwc1        $f0, 0x2B30($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dff9c) {
            ctx->pc = 0x2DFFB0u;
            goto label_2dffb0;
        }
    }
    ctx->pc = 0x2DFFA4u;
label_2dffa4:
    // 0x2dffa4: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2dffa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2dffa8:
    // 0x2dffa8: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2dffa8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2dffac:
    // 0x2dffac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2dffacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2dffb0:
    // 0x2dffb0: 0x3c0141c8  lui         $at, 0x41C8
    ctx->pc = 0x2dffb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16840 << 16));
label_2dffb4:
    // 0x2dffb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2dffb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2dffb8:
    // 0x2dffb8: 0x26230030  addiu       $v1, $s1, 0x30
    ctx->pc = 0x2dffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2dffbc:
    // 0x2dffbc: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x2dffbcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2dffc0:
    // 0x2dffc0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x2dffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2dffc4:
    // 0x2dffc4: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2dffc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2dffc8:
    // 0x2dffc8: 0xc4640008  lwc1        $f4, 0x8($v1)
    ctx->pc = 0x2dffc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2dffcc:
    // 0x2dffcc: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x2dffccu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_2dffd0:
    // 0x2dffd0: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x2dffd0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_2dffd4:
    // 0x2dffd4: 0x4604215c  madd.s      $f5, $f4, $f4
    ctx->pc = 0x2dffd4u;
    ctx->f[5] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_2dffd8:
    // 0x2dffd8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2dffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2dffdc:
    // 0x2dffdc: 0xc440b694  lwc1        $f0, -0x496C($v0)
    ctx->pc = 0x2dffdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2dffe0:
    // 0x2dffe0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2dffe0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2dffe4:
    // 0x2dffe4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2dffe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_2dffe8:
    // 0x2dffe8: 0x46002834  c.lt.s      $f5, $f0
    ctx->pc = 0x2dffe8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2dffec:
    // 0x2dffec: 0x0  nop
    ctx->pc = 0x2dffecu;
    // NOP
label_2dfff0:
    // 0x2dfff0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2dfff4:
    if (ctx->pc == 0x2DFFF4u) {
        ctx->pc = 0x2DFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFF0u;
        // 0x2dfff4: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2DFFF8u;
        goto label_2dfff8;
    }
    ctx->pc = 0x2DFFF0u;
    {
        const bool branch_taken_0x2dfff0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2DFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFF0u;
        // 0x2dfff4: 0x60a82d  daddu       $s5, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dfff0) {
            ctx->pc = 0x2DFFFCu;
            goto label_2dfffc;
        }
    }
    ctx->pc = 0x2DFFF8u;
label_2dfff8:
    // 0x2dfff8: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2dfff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dfffc:
    // 0x2dfffc: 0x52000003  beql        $s0, $zero, . + 4 + (0x3 << 2)
label_2e0000:
    if (ctx->pc == 0x2E0000u) {
        ctx->pc = 0x2E0000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DFFFCu;
        // 0x2e0000: 0xc4a00044  lwc1        $f0, 0x44($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0004u;
        goto label_2e0004;
    }
    ctx->pc = 0x2DFFFCu;
    {
        const bool branch_taken_0x2dfffc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dfffc) {
            ctx->pc = 0x2E0000u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2DFFFCu;
            // 0x2e0000: 0xc4a00044  lwc1        $f0, 0x44($a1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E000Cu;
            goto label_2e000c;
        }
    }
    ctx->pc = 0x2E0004u;
label_2e0004:
    // 0x2e0004: 0x10000007  b           . + 4 + (0x7 << 2)
label_2e0008:
    if (ctx->pc == 0x2E0008u) {
        ctx->pc = 0x2E0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0004u;
        // 0x2e0008: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E000Cu;
        goto label_2e000c;
    }
    ctx->pc = 0x2E0004u;
    {
        const bool branch_taken_0x2e0004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0004u;
        // 0x2e0008: 0x46003187  neg.s       $f6, $f6 (Delay Slot)
        ctx->f[6] = FPU_NEG_S(ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0004) {
            ctx->pc = 0x2E0024u;
            goto label_2e0024;
        }
    }
    ctx->pc = 0x2E000Cu;
label_2e000c:
    // 0x2e000c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e000cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_2e0010:
    // 0x2e0010: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2e0010u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e0014:
    // 0x2e0014: 0x0  nop
    ctx->pc = 0x2e0014u;
    // NOP
label_2e0018:
    // 0x2e0018: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2e0018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_2e001c:
    // 0x2e001c: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x2e001cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_2e0020:
    // 0x2e0020: 0x46003182  mul.s       $f6, $f6, $f0
    ctx->pc = 0x2e0020u;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[0]);
label_2e0024:
    // 0x2e0024: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x2e0024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2e0028:
    // 0x2e0028: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x2e0028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2e002c:
    // 0x2e002c: 0xda610000  lqc2        $vf1, 0x0($s3)
    ctx->pc = 0x2e002cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0030:
    // 0x2e0030: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2e0030u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e0034:
    // 0x2e0034: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2e0034u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e0038:
    // 0x2e0038: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2e0038u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e003c:
    // 0x2e003c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x2e003cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e0040:
    // 0x2e0040: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x2e0040u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2e0044:
    // 0x2e0044: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2e0044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2e0048:
    // 0x2e0048: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x2e0048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2e004c:
    // 0x2e004c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x2e004cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e0050:
    // 0x2e0050: 0xd8430010  lqc2        $vf3, 0x10($v0)
    ctx->pc = 0x2e0050u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2e0054:
    // 0x2e0054: 0xd8440020  lqc2        $vf4, 0x20($v0)
    ctx->pc = 0x2e0054u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2e0058:
    // 0x2e0058: 0xd8450030  lqc2        $vf5, 0x30($v0)
    ctx->pc = 0x2e0058u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_2e005c:
    // 0x2e005c: 0x4bc111bc  vmulax.xyz  $ACC, $vf2, $vf1x
    ctx->pc = 0x2e005cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e0060:
    // 0x2e0060: 0x4bc118bd  vmadday.xyz $ACC, $vf3, $vf1y
    ctx->pc = 0x2e0060u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e0064:
    // 0x2e0064: 0x4bc1214a  vmaddz.xyz  $vf5, $vf4, $vf1z
    ctx->pc = 0x2e0064u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
label_2e0068:
    // 0x2e0068: 0xfba50040  sqc2        $vf5, 0x40($sp)
    ctx->pc = 0x2e0068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[5]));
label_2e006c:
    // 0x2e006c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2e006cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2e0070:
    // 0x2e0070: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e0070u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2e0074:
    // 0x2e0074: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2e0074u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2e0078:
    // 0x2e0078: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2e0078u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e007c:
    // 0x2e007c: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2e007cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e0080:
    // 0x2e0080: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x2e0080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e0084:
    // 0x2e0084: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x2e0084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e0088:
    // 0x2e0088: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x2e0088u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e008c:
    // 0x2e008c: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x2e008cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2e0090:
    // 0x2e0090: 0xc4820004  lwc1        $f2, 0x4($a0)
    ctx->pc = 0x2e0090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e0094:
    // 0x2e0094: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x2e0094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e0098:
    // 0x2e0098: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x2e0098u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_2e009c:
    // 0x2e009c: 0xc4820008  lwc1        $f2, 0x8($a0)
    ctx->pc = 0x2e009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e00a0:
    // 0x2e00a0: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x2e00a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e00a4:
    // 0x2e00a4: 0x4603111c  madd.s      $f4, $f2, $f3
    ctx->pc = 0x2e00a4u;
    ctx->f[4] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_2e00a8:
    // 0x2e00a8: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x2e00a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e00ac:
    // 0x2e00ac: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e00acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2e00b0:
    // 0x2e00b0: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x2e00b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
label_2e00b4:
    // 0x2e00b4: 0x0  nop
    ctx->pc = 0x2e00b4u;
    // NOP
label_2e00b8:
    // 0x2e00b8: 0x46003503  div.s       $f20, $f6, $f0
    ctx->pc = 0x2e00b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[6], ctx->f[0]); }
label_2e00bc:
    // 0x2e00bc: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x2e00bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e00c0:
    // 0x2e00c0: 0x0  nop
    ctx->pc = 0x2e00c0u;
    // NOP
label_2e00c4:
    // 0x2e00c4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2e00c8:
    if (ctx->pc == 0x2E00C8u) {
        ctx->pc = 0x2E00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00C4u;
        // 0x2e00c8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E00CCu;
        goto label_2e00cc;
    }
    ctx->pc = 0x2E00C4u;
    {
        const bool branch_taken_0x2e00c4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00C4u;
        // 0x2e00c8: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e00c4) {
            ctx->pc = 0x2E00D0u;
            goto label_2e00d0;
        }
    }
    ctx->pc = 0x2E00CCu;
label_2e00cc:
    // 0x2e00cc: 0x4600a507  neg.s       $f20, $f20
    ctx->pc = 0x2e00ccu;
    ctx->f[20] = FPU_NEG_S(ctx->f[20]);
label_2e00d0:
    // 0x2e00d0: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_2e00d4:
    if (ctx->pc == 0x2E00D4u) {
        ctx->pc = 0x2E00D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00D0u;
        // 0x2e00d4: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E00D8u;
        goto label_2e00d8;
    }
    ctx->pc = 0x2E00D0u;
    {
        const bool branch_taken_0x2e00d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e00d0) {
            ctx->pc = 0x2E00D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E00D0u;
            // 0x2e00d4: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E00F4u;
            goto label_2e00f4;
        }
    }
    ctx->pc = 0x2E00D8u;
label_2e00d8:
    // 0x2e00d8: 0x5a800006  blezl       $s4, . + 4 + (0x6 << 2)
label_2e00dc:
    if (ctx->pc == 0x2E00DCu) {
        ctx->pc = 0x2E00DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00D8u;
        // 0x2e00dc: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E00E0u;
        goto label_2e00e0;
    }
    ctx->pc = 0x2E00D8u;
    {
        const bool branch_taken_0x2e00d8 = (GPR_S32(ctx, 20) <= 0);
        if (branch_taken_0x2e00d8) {
            ctx->pc = 0x2E00DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E00D8u;
            // 0x2e00dc: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E00F4u;
            goto label_2e00f4;
        }
    }
    ctx->pc = 0x2E00E0u;
label_2e00e0:
    // 0x2e00e0: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x2e00e0u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e00e4:
    // 0x2e00e4: 0x0  nop
    ctx->pc = 0x2e00e4u;
    // NOP
label_2e00e8:
    // 0x2e00e8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2e00e8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2e00ec:
    // 0x2e00ec: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2e00ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_2e00f0:
    // 0x2e00f0: 0xc6200008  lwc1        $f0, 0x8($s1)
    ctx->pc = 0x2e00f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e00f4:
    // 0x2e00f4: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2e00f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e00f8:
    // 0x2e00f8: 0x0  nop
    ctx->pc = 0x2e00f8u;
    // NOP
label_2e00fc:
    // 0x2e00fc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_2e0100:
    if (ctx->pc == 0x2E0100u) {
        ctx->pc = 0x2E0100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E00FCu;
        // 0x2e0100: 0xe6340008  swc1        $f20, 0x8($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0104u;
        goto label_2e0104;
    }
    ctx->pc = 0x2E00FCu;
    {
        const bool branch_taken_0x2e00fc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e00fc) {
            ctx->pc = 0x2E0100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E00FCu;
            // 0x2e0100: 0xe6340008  swc1        $f20, 0x8($s1) (Delay Slot)
            { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0104u;
            goto label_2e0104;
        }
    }
    ctx->pc = 0x2E0104u;
label_2e0104:
    // 0x2e0104: 0x4402a000  mfc1        $v0, $f20
    ctx->pc = 0x2e0104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2e0108:
    // 0x2e0108: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e0108u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2e010c:
    // 0x2e010c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x2e010cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_2e0110:
    // 0x2e0110: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x2e0110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e0114:
    // 0x2e0114: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x2e0114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e0118:
    // 0x2e0118: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2e0118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2e011c:
    // 0x2e011c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2e011cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e0120:
    // 0x2e0120: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e0120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e0124:
    // 0x2e0124: 0x14640006  bne         $v1, $a0, . + 4 + (0x6 << 2)
label_2e0128:
    if (ctx->pc == 0x2E0128u) {
        ctx->pc = 0x2E0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0124u;
        // 0x2e0128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E012Cu;
        goto label_2e012c;
    }
    ctx->pc = 0x2E0124u;
    {
        const bool branch_taken_0x2e0124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2E0128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0124u;
        // 0x2e0128: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0124) {
            ctx->pc = 0x2E0140u;
            goto label_2e0140;
        }
    }
    ctx->pc = 0x2E012Cu;
label_2e012c:
    // 0x2e012c: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2e012cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2e0130:
    // 0x2e0130: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e0130u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e0134:
    // 0x2e0134: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e0138:
    // 0x2e0138: 0x10000009  b           . + 4 + (0x9 << 2)
label_2e013c:
    if (ctx->pc == 0x2E013Cu) {
        ctx->pc = 0x2E013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0138u;
        // 0x2e013c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0140u;
        goto label_2e0140;
    }
    ctx->pc = 0x2E0138u;
    {
        const bool branch_taken_0x2e0138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0138u;
        // 0x2e013c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0138) {
            ctx->pc = 0x2E0160u;
            goto label_2e0160;
        }
    }
    ctx->pc = 0x2E0140u;
label_2e0140:
    // 0x2e0140: 0x52820004  beql        $s4, $v0, . + 4 + (0x4 << 2)
label_2e0144:
    if (ctx->pc == 0x2E0144u) {
        ctx->pc = 0x2E0144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0140u;
        // 0x2e0144: 0x8e230070  lw          $v1, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0148u;
        goto label_2e0148;
    }
    ctx->pc = 0x2E0140u;
    {
        const bool branch_taken_0x2e0140 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x2e0140) {
            ctx->pc = 0x2E0144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0140u;
            // 0x2e0144: 0x8e230070  lw          $v1, 0x70($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E0154u;
            goto label_2e0154;
        }
    }
    ctx->pc = 0x2E0148u;
label_2e0148:
    // 0x2e0148: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_2e014c:
    if (ctx->pc == 0x2E014Cu) {
        ctx->pc = 0x2E014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0148u;
        // 0x2e014c: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0150u;
        goto label_2e0150;
    }
    ctx->pc = 0x2E0148u;
    {
        const bool branch_taken_0x2e0148 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0148u;
        // 0x2e014c: 0xc7a300a0  lwc1        $f3, 0xA0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0148) {
            ctx->pc = 0x2E0174u;
            goto label_2e0174;
        }
    }
    ctx->pc = 0x2E0150u;
label_2e0150:
    // 0x2e0150: 0x8e230070  lw          $v1, 0x70($s1)
    ctx->pc = 0x2e0150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_2e0154:
    // 0x2e0154: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e0154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e0158:
    // 0x2e0158: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e0158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e015c:
    // 0x2e015c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e015cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0160:
    // 0x2e0160: 0x8c620058  lw          $v0, 0x58($v1)
    ctx->pc = 0x2e0160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
label_2e0164:
    // 0x2e0164: 0x40f809  jalr        $v0
label_2e0168:
    if (ctx->pc == 0x2E0168u) {
        ctx->pc = 0x2E016Cu;
        goto label_2e016c;
    }
    ctx->pc = 0x2E0164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2E016Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0164u, 0x2E016Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2E016Cu;
label_2e016c:
    // 0x2e016c: 0x10000025  b           . + 4 + (0x25 << 2)
label_2e0170:
    if (ctx->pc == 0x2E0170u) {
        ctx->pc = 0x2E0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E016Cu;
        // 0x2e0170: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0174u;
        goto label_2e0174;
    }
    ctx->pc = 0x2E016Cu;
    {
        const bool branch_taken_0x2e016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E016Cu;
        // 0x2e0170: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e016c) {
            ctx->pc = 0x2E0204u;
            goto label_2e0204;
        }
    }
    ctx->pc = 0x2E0174u;
label_2e0174:
    // 0x2e0174: 0x262200c0  addiu       $v0, $s1, 0xC0
    ctx->pc = 0x2e0174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
label_2e0178:
    // 0x2e0178: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x2e0178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e017c:
    // 0x2e017c: 0x27a300c0  addiu       $v1, $sp, 0xC0
    ctx->pc = 0x2e017cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2e0180:
    // 0x2e0180: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x2e0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e0184:
    // 0x2e0184: 0x4603a0c2  mul.s       $f3, $f20, $f3
    ctx->pc = 0x2e0184u;
    ctx->f[3] = FPU_MUL_S(ctx->f[20], ctx->f[3]);
label_2e0188:
    // 0x2e0188: 0xc7a000ac  lwc1        $f0, 0xAC($sp)
    ctx->pc = 0x2e0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e018c:
    // 0x2e018c: 0x4602a082  mul.s       $f2, $f20, $f2
    ctx->pc = 0x2e018cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
label_2e0190:
    // 0x2e0190: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x2e0190u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_2e0194:
    // 0x2e0194: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x2e0194u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_2e0198:
    // 0x2e0198: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2e0198u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2e019c:
    // 0x2e019c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x2e019cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2e01a0:
    // 0x2e01a0: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2e01a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2e01a4:
    // 0x2e01a4: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x2e01a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2e01a8:
    // 0x2e01a8: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e01a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e01ac:
    // 0x2e01ac: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2e01acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e01b0:
    // 0x2e01b0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e01b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e01b4:
    // 0x2e01b4: 0xfa2100c0  sqc2        $vf1, 0xC0($s1)
    ctx->pc = 0x2e01b4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e01b8:
    // 0x2e01b8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x2e01b8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2e01bc:
    // 0x2e01bc: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x2e01bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_2e01c0:
    // 0x2e01c0: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x2e01c0u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
label_2e01c4:
    // 0x2e01c4: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x2e01c4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e01c8:
    // 0x2e01c8: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x2e01c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e01cc:
    // 0x2e01cc: 0xc7a300d0  lwc1        $f3, 0xD0($sp)
    ctx->pc = 0x2e01ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_2e01d0:
    // 0x2e01d0: 0x262200d0  addiu       $v0, $s1, 0xD0
    ctx->pc = 0x2e01d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_2e01d4:
    // 0x2e01d4: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2e01d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2e01d8:
    // 0x2e01d8: 0xc7a100d8  lwc1        $f1, 0xD8($sp)
    ctx->pc = 0x2e01d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2e01dc:
    // 0x2e01dc: 0xc7a200dc  lwc1        $f2, 0xDC($sp)
    ctx->pc = 0x2e01dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2e01e0:
    // 0x2e01e0: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x2e01e0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_2e01e4:
    // 0x2e01e4: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x2e01e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_2e01e8:
    // 0x2e01e8: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x2e01e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_2e01ec:
    // 0x2e01ec: 0xe7a200cc  swc1        $f2, 0xCC($sp)
    ctx->pc = 0x2e01ecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_2e01f0:
    // 0x2e01f0: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2e01f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2e01f4:
    // 0x2e01f4: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x2e01f4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_2e01f8:
    // 0x2e01f8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x2e01f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2e01fc:
    // 0x2e01fc: 0xfa2100d0  sqc2        $vf1, 0xD0($s1)
    ctx->pc = 0x2e01fcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_2e0200:
    // 0x2e0200: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0204:
    // 0x2e0204: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x2e0204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_2e0208:
    // 0x2e0208: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2e0208u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2e020c:
    // 0x2e020c: 0x8c4400bc  lw          $a0, 0xBC($v0)
    ctx->pc = 0x2e020cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_2e0210:
    // 0x2e0210: 0x14830004  bne         $a0, $v1, . + 4 + (0x4 << 2)
label_2e0214:
    if (ctx->pc == 0x2E0214u) {
        ctx->pc = 0x2E0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0210u;
        // 0x2e0214: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0218u;
        goto label_2e0218;
    }
    ctx->pc = 0x2E0210u;
    {
        const bool branch_taken_0x2e0210 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2E0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0210u;
        // 0x2e0214: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0210) {
            ctx->pc = 0x2E0224u;
            goto label_2e0224;
        }
    }
    ctx->pc = 0x2E0218u;
label_2e0218:
    // 0x2e0218: 0xc0b87e8  jal         func_2E1FA0
label_2e021c:
    if (ctx->pc == 0x2E021Cu) {
        ctx->pc = 0x2E021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0218u;
        // 0x2e021c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0220u;
        goto label_2e0220;
    }
    ctx->pc = 0x2E0218u;
    SET_GPR_U32(ctx, 31, 0x2E0220u);
    ctx->pc = 0x2E021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0218u;
    // 0x2e021c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E1FA0u, 0x2E0218u, 0x2E0220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0220u;
label_2e0220:
    // 0x2e0220: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2e0220u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e0224:
    // 0x2e0224: 0x50a0003d  beql        $a1, $zero, . + 4 + (0x3D << 2)
label_2e0228:
    if (ctx->pc == 0x2E0228u) {
        ctx->pc = 0x2E0228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0224u;
        // 0x2e0228: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E022Cu;
        goto label_2e022c;
    }
    ctx->pc = 0x2E0224u;
    {
        const bool branch_taken_0x2e0224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e0224) {
            ctx->pc = 0x2E0228u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E0224u;
            // 0x2e0228: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E031Cu;
            goto label_2e031c;
        }
    }
    ctx->pc = 0x2E022Cu;
label_2e022c:
    // 0x2e022c: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2e022cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
label_2e0230:
    // 0x2e0230: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e0230u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2e0234:
    // 0x2e0234: 0x0  nop
    ctx->pc = 0x2e0234u;
    // NOP
label_2e0238:
    // 0x2e0238: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2e0238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2e023c:
    // 0x2e023c: 0x0  nop
    ctx->pc = 0x2e023cu;
    // NOP
label_2e0240:
    // 0x2e0240: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2e0244:
    if (ctx->pc == 0x2E0244u) {
        ctx->pc = 0x2E0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0240u;
        // 0x2e0244: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0248u;
        goto label_2e0248;
    }
    ctx->pc = 0x2E0240u;
    {
        const bool branch_taken_0x2e0240 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E0244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0240u;
        // 0x2e0244: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0240) {
            ctx->pc = 0x2E024Cu;
            goto label_2e024c;
        }
    }
    ctx->pc = 0x2E0248u;
label_2e0248:
    // 0x2e0248: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x2e0248u;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_2e024c:
    // 0x2e024c: 0x12c00017  beqz        $s6, . + 4 + (0x17 << 2)
label_2e0250:
    if (ctx->pc == 0x2E0250u) {
        ctx->pc = 0x2E0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E024Cu;
        // 0x2e0250: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0254u;
        goto label_2e0254;
    }
    ctx->pc = 0x2E024Cu;
    {
        const bool branch_taken_0x2e024c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E024Cu;
        // 0x2e0250: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e024c) {
            ctx->pc = 0x2E02ACu;
            goto label_2e02ac;
        }
    }
    ctx->pc = 0x2E0254u;
label_2e0254:
    // 0x2e0254: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x2e0254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2e0258:
    // 0x2e0258: 0x24549b10  addiu       $s4, $v0, -0x64F0
    ctx->pc = 0x2e0258u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
label_2e025c:
    // 0x2e025c: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x2e025cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_2e0260:
    // 0x2e0260: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2e0264:
    if (ctx->pc == 0x2E0264u) {
        ctx->pc = 0x2E0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0260u;
        // 0x2e0264: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0268u;
        goto label_2e0268;
    }
    ctx->pc = 0x2E0260u;
    {
        const bool branch_taken_0x2e0260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E0264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0260u;
        // 0x2e0264: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e0260) {
            ctx->pc = 0x2E026Cu;
            goto label_2e026c;
        }
    }
    ctx->pc = 0x2E0268u;
label_2e0268:
    // 0x2e0268: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x2e0268u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e026c:
    // 0x2e026c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2e026cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0270:
    // 0x2e0270: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e0270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e0274:
    // 0x2e0274: 0x8c4300b8  lw          $v1, 0xB8($v0)
    ctx->pc = 0x2e0274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 184)));
label_2e0278:
    // 0x2e0278: 0xc07a8e4  jal         func_1EA390
label_2e027c:
    if (ctx->pc == 0x2E027Cu) {
        ctx->pc = 0x2E027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0278u;
        // 0x2e027c: 0x90700054  lbu         $s0, 0x54($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0280u;
        goto label_2e0280;
    }
    ctx->pc = 0x2E0278u;
    SET_GPR_U32(ctx, 31, 0x2E0280u);
    ctx->pc = 0x2E027Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0278u;
    // 0x2e027c: 0x90700054  lbu         $s0, 0x54($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x2E0278u, 0x2E0280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0280u;
label_2e0280:
    // 0x2e0280: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2e0280u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e0284:
    // 0x2e0284: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e0284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e0288:
    // 0x2e0288: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2e0288u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e028c:
    // 0x2e028c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e0290:
    // 0x2e0290: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e0290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e0294:
    // 0x2e0294: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2e0294u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e0298:
    // 0x2e0298: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2e0298u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e029c:
    // 0x2e029c: 0xc07f550  jal         func_1FD540
label_2e02a0:
    if (ctx->pc == 0x2E02A0u) {
        ctx->pc = 0x2E02A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E029Cu;
        // 0x2e02a0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02A4u;
        goto label_2e02a4;
    }
    ctx->pc = 0x2E029Cu;
    SET_GPR_U32(ctx, 31, 0x2E02A4u);
    ctx->pc = 0x2E02A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E029Cu;
    // 0x2e02a0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x2E029Cu, 0x2E02A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E02A4u;
label_2e02a4:
    // 0x2e02a4: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2e02a8:
    if (ctx->pc == 0x2E02A8u) {
        ctx->pc = 0x2E02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02A4u;
        // 0x2e02a8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02ACu;
        goto label_2e02ac;
    }
    ctx->pc = 0x2E02A4u;
    {
        const bool branch_taken_0x2e02a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02A4u;
        // 0x2e02a8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02a4) {
            ctx->pc = 0x2E031Cu;
            goto label_2e031c;
        }
    }
    ctx->pc = 0x2E02ACu;
label_2e02ac:
    // 0x2e02ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2e02acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e02b0:
    // 0x2e02b0: 0x90820114  lbu         $v0, 0x114($a0)
    ctx->pc = 0x2e02b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 276)));
label_2e02b4:
    // 0x2e02b4: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_2e02b8:
    if (ctx->pc == 0x2E02B8u) {
        ctx->pc = 0x2E02B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02B4u;
        // 0x2e02b8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02BCu;
        goto label_2e02bc;
    }
    ctx->pc = 0x2E02B4u;
    {
        const bool branch_taken_0x2e02b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e02b4) {
            ctx->pc = 0x2E02B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E02B4u;
            // 0x2e02b8: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E031Cu;
            goto label_2e031c;
        }
    }
    ctx->pc = 0x2E02BCu;
label_2e02bc:
    // 0x2e02bc: 0x56000017  bnel        $s0, $zero, . + 4 + (0x17 << 2)
label_2e02c0:
    if (ctx->pc == 0x2E02C0u) {
        ctx->pc = 0x2E02C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02BCu;
        // 0x2e02c0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02C4u;
        goto label_2e02c4;
    }
    ctx->pc = 0x2E02BCu;
    {
        const bool branch_taken_0x2e02bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e02bc) {
            ctx->pc = 0x2E02C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E02BCu;
            // 0x2e02c0: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E031Cu;
            goto label_2e031c;
        }
    }
    ctx->pc = 0x2E02C4u;
label_2e02c4:
    // 0x2e02c4: 0x1a800014  blez        $s4, . + 4 + (0x14 << 2)
label_2e02c8:
    if (ctx->pc == 0x2E02C8u) {
        ctx->pc = 0x2E02C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02C4u;
        // 0x2e02c8: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02CCu;
        goto label_2e02cc;
    }
    ctx->pc = 0x2E02C4u;
    {
        const bool branch_taken_0x2e02c4 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x2E02C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02C4u;
        // 0x2e02c8: 0x3c02004a  lui         $v0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)74 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02c4) {
            ctx->pc = 0x2E0318u;
            goto label_2e0318;
        }
    }
    ctx->pc = 0x2E02CCu;
label_2e02cc:
    // 0x2e02cc: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x2e02ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2e02d0:
    // 0x2e02d0: 0x24549b10  addiu       $s4, $v0, -0x64F0
    ctx->pc = 0x2e02d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941456));
label_2e02d4:
    // 0x2e02d4: 0x38630008  xori        $v1, $v1, 0x8
    ctx->pc = 0x2e02d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)8);
label_2e02d8:
    // 0x2e02d8: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_2e02dc:
    if (ctx->pc == 0x2E02DCu) {
        ctx->pc = 0x2E02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02D8u;
        // 0x2e02dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02E0u;
        goto label_2e02e0;
    }
    ctx->pc = 0x2E02D8u;
    {
        const bool branch_taken_0x2e02d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02D8u;
        // 0x2e02dc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e02d8) {
            ctx->pc = 0x2E02E4u;
            goto label_2e02e4;
        }
    }
    ctx->pc = 0x2E02E0u;
label_2e02e0:
    // 0x2e02e0: 0x8e530034  lw          $s3, 0x34($s2)
    ctx->pc = 0x2e02e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2e02e4:
    // 0x2e02e4: 0x8c8200b8  lw          $v0, 0xB8($a0)
    ctx->pc = 0x2e02e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 184)));
label_2e02e8:
    // 0x2e02e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e02e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2e02ec:
    // 0x2e02ec: 0xc07a8e4  jal         func_1EA390
label_2e02f0:
    if (ctx->pc == 0x2E02F0u) {
        ctx->pc = 0x2E02F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E02ECu;
        // 0x2e02f0: 0x90500054  lbu         $s0, 0x54($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E02F4u;
        goto label_2e02f4;
    }
    ctx->pc = 0x2E02ECu;
    SET_GPR_U32(ctx, 31, 0x2E02F4u);
    ctx->pc = 0x2E02F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E02ECu;
    // 0x2e02f0: 0x90500054  lbu         $s0, 0x54($v0) (Delay Slot)
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA390u, 0x2E02ECu, 0x2E02F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E02F4u;
label_2e02f4:
    // 0x2e02f4: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2e02f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2e02f8:
    // 0x2e02f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e02f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e02fc:
    // 0x2e02fc: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x2e02fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2e0300:
    // 0x2e0300: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2e0300u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2e0304:
    // 0x2e0304: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2e0304u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2e0308:
    // 0x2e0308: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2e0308u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e030c:
    // 0x2e030c: 0x304900ff  andi        $t1, $v0, 0xFF
    ctx->pc = 0x2e030cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2e0310:
    // 0x2e0310: 0xc07f550  jal         func_1FD540
label_2e0314:
    if (ctx->pc == 0x2E0314u) {
        ctx->pc = 0x2E0314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0310u;
        // 0x2e0314: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0318u;
        goto label_2e0318;
    }
    ctx->pc = 0x2E0310u;
    SET_GPR_U32(ctx, 31, 0x2E0318u);
    ctx->pc = 0x2E0314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0310u;
    // 0x2e0314: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD540u, 0x2E0310u, 0x2E0318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0318u;
label_2e0318:
    // 0x2e0318: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2e0318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2e031c:
    // 0x2e031c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e031cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e0320:
    // 0x2e0320: 0x8e2400e0  lw          $a0, 0xE0($s1)
    ctx->pc = 0x2e0320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_2e0324:
    // 0x2e0324: 0x262700a0  addiu       $a3, $s1, 0xA0
    ctx->pc = 0x2e0324u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_2e0328:
    // 0x2e0328: 0xc0b8870  jal         func_2E21C0
label_2e032c:
    if (ctx->pc == 0x2E032Cu) {
        ctx->pc = 0x2E032Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0328u;
        // 0x2e032c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0330u;
        goto label_2e0330;
    }
    ctx->pc = 0x2E0328u;
    SET_GPR_U32(ctx, 31, 0x2E0330u);
    ctx->pc = 0x2E032Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E0328u;
    // 0x2e032c: 0x24a50030  addiu       $a1, $a1, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E21C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E21C0u, 0x2E0328u, 0x2E0330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E0330u;
label_2e0330:
    // 0x2e0330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e0330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e0334:
    // 0x2e0334: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x2e0334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2e0338:
    // 0x2e0338: 0xdfb100e8  ld          $s1, 0xE8($sp)
    ctx->pc = 0x2e0338u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_2e033c:
    // 0x2e033c: 0xdfb200f0  ld          $s2, 0xF0($sp)
    ctx->pc = 0x2e033cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2e0340:
    // 0x2e0340: 0xdfb300f8  ld          $s3, 0xF8($sp)
    ctx->pc = 0x2e0340u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_2e0344:
    // 0x2e0344: 0xdfb40100  ld          $s4, 0x100($sp)
    ctx->pc = 0x2e0344u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2e0348:
    // 0x2e0348: 0xdfb50108  ld          $s5, 0x108($sp)
    ctx->pc = 0x2e0348u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 264)));
label_2e034c:
    // 0x2e034c: 0xdfb60110  ld          $s6, 0x110($sp)
    ctx->pc = 0x2e034cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2e0350:
    // 0x2e0350: 0xdfb70118  ld          $s7, 0x118($sp)
    ctx->pc = 0x2e0350u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 280)));
label_2e0354:
    // 0x2e0354: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x2e0354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2e0358:
    // 0x2e0358: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x2e0358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2e035c:
    // 0x2e035c: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x2e035cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2e0360:
    // 0x2e0360: 0x3e00008  jr          $ra
label_2e0364:
    if (ctx->pc == 0x2E0364u) {
        ctx->pc = 0x2E0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0360u;
        // 0x2e0364: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E0368u;
        goto label_fallthrough_0x2e0360;
    }
    ctx->pc = 0x2E0360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E0364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E0360u;
        // 0x2e0364: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E0360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e0360:
    ctx->pc = 0x2E0368u;
}
