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

// Function: sub_003BFD08
// Address: 0x3bfd08 - 0x3c0818
void sub_003BFD08_0x3bfd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BFD08_0x3bfd08");
#endif

    switch (ctx->pc) {
        case 0x3bfd08u: goto label_3bfd08;
        case 0x3bfd0cu: goto label_3bfd0c;
        case 0x3bfd10u: goto label_3bfd10;
        case 0x3bfd14u: goto label_3bfd14;
        case 0x3bfd18u: goto label_3bfd18;
        case 0x3bfd1cu: goto label_3bfd1c;
        case 0x3bfd20u: goto label_3bfd20;
        case 0x3bfd24u: goto label_3bfd24;
        case 0x3bfd28u: goto label_3bfd28;
        case 0x3bfd2cu: goto label_3bfd2c;
        case 0x3bfd30u: goto label_3bfd30;
        case 0x3bfd34u: goto label_3bfd34;
        case 0x3bfd38u: goto label_3bfd38;
        case 0x3bfd3cu: goto label_3bfd3c;
        case 0x3bfd40u: goto label_3bfd40;
        case 0x3bfd44u: goto label_3bfd44;
        case 0x3bfd48u: goto label_3bfd48;
        case 0x3bfd4cu: goto label_3bfd4c;
        case 0x3bfd50u: goto label_3bfd50;
        case 0x3bfd54u: goto label_3bfd54;
        case 0x3bfd58u: goto label_3bfd58;
        case 0x3bfd5cu: goto label_3bfd5c;
        case 0x3bfd60u: goto label_3bfd60;
        case 0x3bfd64u: goto label_3bfd64;
        case 0x3bfd68u: goto label_3bfd68;
        case 0x3bfd6cu: goto label_3bfd6c;
        case 0x3bfd70u: goto label_3bfd70;
        case 0x3bfd74u: goto label_3bfd74;
        case 0x3bfd78u: goto label_3bfd78;
        case 0x3bfd7cu: goto label_3bfd7c;
        case 0x3bfd80u: goto label_3bfd80;
        case 0x3bfd84u: goto label_3bfd84;
        case 0x3bfd88u: goto label_3bfd88;
        case 0x3bfd8cu: goto label_3bfd8c;
        case 0x3bfd90u: goto label_3bfd90;
        case 0x3bfd94u: goto label_3bfd94;
        case 0x3bfd98u: goto label_3bfd98;
        case 0x3bfd9cu: goto label_3bfd9c;
        case 0x3bfda0u: goto label_3bfda0;
        case 0x3bfda4u: goto label_3bfda4;
        case 0x3bfda8u: goto label_3bfda8;
        case 0x3bfdacu: goto label_3bfdac;
        case 0x3bfdb0u: goto label_3bfdb0;
        case 0x3bfdb4u: goto label_3bfdb4;
        case 0x3bfdb8u: goto label_3bfdb8;
        case 0x3bfdbcu: goto label_3bfdbc;
        case 0x3bfdc0u: goto label_3bfdc0;
        case 0x3bfdc4u: goto label_3bfdc4;
        case 0x3bfdc8u: goto label_3bfdc8;
        case 0x3bfdccu: goto label_3bfdcc;
        case 0x3bfdd0u: goto label_3bfdd0;
        case 0x3bfdd4u: goto label_3bfdd4;
        case 0x3bfdd8u: goto label_3bfdd8;
        case 0x3bfddcu: goto label_3bfddc;
        case 0x3bfde0u: goto label_3bfde0;
        case 0x3bfde4u: goto label_3bfde4;
        case 0x3bfde8u: goto label_3bfde8;
        case 0x3bfdecu: goto label_3bfdec;
        case 0x3bfdf0u: goto label_3bfdf0;
        case 0x3bfdf4u: goto label_3bfdf4;
        case 0x3bfdf8u: goto label_3bfdf8;
        case 0x3bfdfcu: goto label_3bfdfc;
        case 0x3bfe00u: goto label_3bfe00;
        case 0x3bfe04u: goto label_3bfe04;
        case 0x3bfe08u: goto label_3bfe08;
        case 0x3bfe0cu: goto label_3bfe0c;
        case 0x3bfe10u: goto label_3bfe10;
        case 0x3bfe14u: goto label_3bfe14;
        case 0x3bfe18u: goto label_3bfe18;
        case 0x3bfe1cu: goto label_3bfe1c;
        case 0x3bfe20u: goto label_3bfe20;
        case 0x3bfe24u: goto label_3bfe24;
        case 0x3bfe28u: goto label_3bfe28;
        case 0x3bfe2cu: goto label_3bfe2c;
        case 0x3bfe30u: goto label_3bfe30;
        case 0x3bfe34u: goto label_3bfe34;
        case 0x3bfe38u: goto label_3bfe38;
        case 0x3bfe3cu: goto label_3bfe3c;
        case 0x3bfe40u: goto label_3bfe40;
        case 0x3bfe44u: goto label_3bfe44;
        case 0x3bfe48u: goto label_3bfe48;
        case 0x3bfe4cu: goto label_3bfe4c;
        case 0x3bfe50u: goto label_3bfe50;
        case 0x3bfe54u: goto label_3bfe54;
        case 0x3bfe58u: goto label_3bfe58;
        case 0x3bfe5cu: goto label_3bfe5c;
        case 0x3bfe60u: goto label_3bfe60;
        case 0x3bfe64u: goto label_3bfe64;
        case 0x3bfe68u: goto label_3bfe68;
        case 0x3bfe6cu: goto label_3bfe6c;
        case 0x3bfe70u: goto label_3bfe70;
        case 0x3bfe74u: goto label_3bfe74;
        case 0x3bfe78u: goto label_3bfe78;
        case 0x3bfe7cu: goto label_3bfe7c;
        case 0x3bfe80u: goto label_3bfe80;
        case 0x3bfe84u: goto label_3bfe84;
        case 0x3bfe88u: goto label_3bfe88;
        case 0x3bfe8cu: goto label_3bfe8c;
        case 0x3bfe90u: goto label_3bfe90;
        case 0x3bfe94u: goto label_3bfe94;
        case 0x3bfe98u: goto label_3bfe98;
        case 0x3bfe9cu: goto label_3bfe9c;
        case 0x3bfea0u: goto label_3bfea0;
        case 0x3bfea4u: goto label_3bfea4;
        case 0x3bfea8u: goto label_3bfea8;
        case 0x3bfeacu: goto label_3bfeac;
        case 0x3bfeb0u: goto label_3bfeb0;
        case 0x3bfeb4u: goto label_3bfeb4;
        case 0x3bfeb8u: goto label_3bfeb8;
        case 0x3bfebcu: goto label_3bfebc;
        case 0x3bfec0u: goto label_3bfec0;
        case 0x3bfec4u: goto label_3bfec4;
        case 0x3bfec8u: goto label_3bfec8;
        case 0x3bfeccu: goto label_3bfecc;
        case 0x3bfed0u: goto label_3bfed0;
        case 0x3bfed4u: goto label_3bfed4;
        case 0x3bfed8u: goto label_3bfed8;
        case 0x3bfedcu: goto label_3bfedc;
        case 0x3bfee0u: goto label_3bfee0;
        case 0x3bfee4u: goto label_3bfee4;
        case 0x3bfee8u: goto label_3bfee8;
        case 0x3bfeecu: goto label_3bfeec;
        case 0x3bfef0u: goto label_3bfef0;
        case 0x3bfef4u: goto label_3bfef4;
        case 0x3bfef8u: goto label_3bfef8;
        case 0x3bfefcu: goto label_3bfefc;
        case 0x3bff00u: goto label_3bff00;
        case 0x3bff04u: goto label_3bff04;
        case 0x3bff08u: goto label_3bff08;
        case 0x3bff0cu: goto label_3bff0c;
        case 0x3bff10u: goto label_3bff10;
        case 0x3bff14u: goto label_3bff14;
        case 0x3bff18u: goto label_3bff18;
        case 0x3bff1cu: goto label_3bff1c;
        case 0x3bff20u: goto label_3bff20;
        case 0x3bff24u: goto label_3bff24;
        case 0x3bff28u: goto label_3bff28;
        case 0x3bff2cu: goto label_3bff2c;
        case 0x3bff30u: goto label_3bff30;
        case 0x3bff34u: goto label_3bff34;
        case 0x3bff38u: goto label_3bff38;
        case 0x3bff3cu: goto label_3bff3c;
        case 0x3bff40u: goto label_3bff40;
        case 0x3bff44u: goto label_3bff44;
        case 0x3bff48u: goto label_3bff48;
        case 0x3bff4cu: goto label_3bff4c;
        case 0x3bff50u: goto label_3bff50;
        case 0x3bff54u: goto label_3bff54;
        case 0x3bff58u: goto label_3bff58;
        case 0x3bff5cu: goto label_3bff5c;
        case 0x3bff60u: goto label_3bff60;
        case 0x3bff64u: goto label_3bff64;
        case 0x3bff68u: goto label_3bff68;
        case 0x3bff6cu: goto label_3bff6c;
        case 0x3bff70u: goto label_3bff70;
        case 0x3bff74u: goto label_3bff74;
        case 0x3bff78u: goto label_3bff78;
        case 0x3bff7cu: goto label_3bff7c;
        case 0x3bff80u: goto label_3bff80;
        case 0x3bff84u: goto label_3bff84;
        case 0x3bff88u: goto label_3bff88;
        case 0x3bff8cu: goto label_3bff8c;
        case 0x3bff90u: goto label_3bff90;
        case 0x3bff94u: goto label_3bff94;
        case 0x3bff98u: goto label_3bff98;
        case 0x3bff9cu: goto label_3bff9c;
        case 0x3bffa0u: goto label_3bffa0;
        case 0x3bffa4u: goto label_3bffa4;
        case 0x3bffa8u: goto label_3bffa8;
        case 0x3bffacu: goto label_3bffac;
        case 0x3bffb0u: goto label_3bffb0;
        case 0x3bffb4u: goto label_3bffb4;
        case 0x3bffb8u: goto label_3bffb8;
        case 0x3bffbcu: goto label_3bffbc;
        case 0x3bffc0u: goto label_3bffc0;
        case 0x3bffc4u: goto label_3bffc4;
        case 0x3bffc8u: goto label_3bffc8;
        case 0x3bffccu: goto label_3bffcc;
        case 0x3bffd0u: goto label_3bffd0;
        case 0x3bffd4u: goto label_3bffd4;
        case 0x3bffd8u: goto label_3bffd8;
        case 0x3bffdcu: goto label_3bffdc;
        case 0x3bffe0u: goto label_3bffe0;
        case 0x3bffe4u: goto label_3bffe4;
        case 0x3bffe8u: goto label_3bffe8;
        case 0x3bffecu: goto label_3bffec;
        case 0x3bfff0u: goto label_3bfff0;
        case 0x3bfff4u: goto label_3bfff4;
        case 0x3bfff8u: goto label_3bfff8;
        case 0x3bfffcu: goto label_3bfffc;
        case 0x3c0000u: goto label_3c0000;
        case 0x3c0004u: goto label_3c0004;
        case 0x3c0008u: goto label_3c0008;
        case 0x3c000cu: goto label_3c000c;
        case 0x3c0010u: goto label_3c0010;
        case 0x3c0014u: goto label_3c0014;
        case 0x3c0018u: goto label_3c0018;
        case 0x3c001cu: goto label_3c001c;
        case 0x3c0020u: goto label_3c0020;
        case 0x3c0024u: goto label_3c0024;
        case 0x3c0028u: goto label_3c0028;
        case 0x3c002cu: goto label_3c002c;
        case 0x3c0030u: goto label_3c0030;
        case 0x3c0034u: goto label_3c0034;
        case 0x3c0038u: goto label_3c0038;
        case 0x3c003cu: goto label_3c003c;
        case 0x3c0040u: goto label_3c0040;
        case 0x3c0044u: goto label_3c0044;
        case 0x3c0048u: goto label_3c0048;
        case 0x3c004cu: goto label_3c004c;
        case 0x3c0050u: goto label_3c0050;
        case 0x3c0054u: goto label_3c0054;
        case 0x3c0058u: goto label_3c0058;
        case 0x3c005cu: goto label_3c005c;
        case 0x3c0060u: goto label_3c0060;
        case 0x3c0064u: goto label_3c0064;
        case 0x3c0068u: goto label_3c0068;
        case 0x3c006cu: goto label_3c006c;
        case 0x3c0070u: goto label_3c0070;
        case 0x3c0074u: goto label_3c0074;
        case 0x3c0078u: goto label_3c0078;
        case 0x3c007cu: goto label_3c007c;
        case 0x3c0080u: goto label_3c0080;
        case 0x3c0084u: goto label_3c0084;
        case 0x3c0088u: goto label_3c0088;
        case 0x3c008cu: goto label_3c008c;
        case 0x3c0090u: goto label_3c0090;
        case 0x3c0094u: goto label_3c0094;
        case 0x3c0098u: goto label_3c0098;
        case 0x3c009cu: goto label_3c009c;
        case 0x3c00a0u: goto label_3c00a0;
        case 0x3c00a4u: goto label_3c00a4;
        case 0x3c00a8u: goto label_3c00a8;
        case 0x3c00acu: goto label_3c00ac;
        case 0x3c00b0u: goto label_3c00b0;
        case 0x3c00b4u: goto label_3c00b4;
        case 0x3c00b8u: goto label_3c00b8;
        case 0x3c00bcu: goto label_3c00bc;
        case 0x3c00c0u: goto label_3c00c0;
        case 0x3c00c4u: goto label_3c00c4;
        case 0x3c00c8u: goto label_3c00c8;
        case 0x3c00ccu: goto label_3c00cc;
        case 0x3c00d0u: goto label_3c00d0;
        case 0x3c00d4u: goto label_3c00d4;
        case 0x3c00d8u: goto label_3c00d8;
        case 0x3c00dcu: goto label_3c00dc;
        case 0x3c00e0u: goto label_3c00e0;
        case 0x3c00e4u: goto label_3c00e4;
        case 0x3c00e8u: goto label_3c00e8;
        case 0x3c00ecu: goto label_3c00ec;
        case 0x3c00f0u: goto label_3c00f0;
        case 0x3c00f4u: goto label_3c00f4;
        case 0x3c00f8u: goto label_3c00f8;
        case 0x3c00fcu: goto label_3c00fc;
        case 0x3c0100u: goto label_3c0100;
        case 0x3c0104u: goto label_3c0104;
        case 0x3c0108u: goto label_3c0108;
        case 0x3c010cu: goto label_3c010c;
        case 0x3c0110u: goto label_3c0110;
        case 0x3c0114u: goto label_3c0114;
        case 0x3c0118u: goto label_3c0118;
        case 0x3c011cu: goto label_3c011c;
        case 0x3c0120u: goto label_3c0120;
        case 0x3c0124u: goto label_3c0124;
        case 0x3c0128u: goto label_3c0128;
        case 0x3c012cu: goto label_3c012c;
        case 0x3c0130u: goto label_3c0130;
        case 0x3c0134u: goto label_3c0134;
        case 0x3c0138u: goto label_3c0138;
        case 0x3c013cu: goto label_3c013c;
        case 0x3c0140u: goto label_3c0140;
        case 0x3c0144u: goto label_3c0144;
        case 0x3c0148u: goto label_3c0148;
        case 0x3c014cu: goto label_3c014c;
        case 0x3c0150u: goto label_3c0150;
        case 0x3c0154u: goto label_3c0154;
        case 0x3c0158u: goto label_3c0158;
        case 0x3c015cu: goto label_3c015c;
        case 0x3c0160u: goto label_3c0160;
        case 0x3c0164u: goto label_3c0164;
        case 0x3c0168u: goto label_3c0168;
        case 0x3c016cu: goto label_3c016c;
        case 0x3c0170u: goto label_3c0170;
        case 0x3c0174u: goto label_3c0174;
        case 0x3c0178u: goto label_3c0178;
        case 0x3c017cu: goto label_3c017c;
        case 0x3c0180u: goto label_3c0180;
        case 0x3c0184u: goto label_3c0184;
        case 0x3c0188u: goto label_3c0188;
        case 0x3c018cu: goto label_3c018c;
        case 0x3c0190u: goto label_3c0190;
        case 0x3c0194u: goto label_3c0194;
        case 0x3c0198u: goto label_3c0198;
        case 0x3c019cu: goto label_3c019c;
        case 0x3c01a0u: goto label_3c01a0;
        case 0x3c01a4u: goto label_3c01a4;
        case 0x3c01a8u: goto label_3c01a8;
        case 0x3c01acu: goto label_3c01ac;
        case 0x3c01b0u: goto label_3c01b0;
        case 0x3c01b4u: goto label_3c01b4;
        case 0x3c01b8u: goto label_3c01b8;
        case 0x3c01bcu: goto label_3c01bc;
        case 0x3c01c0u: goto label_3c01c0;
        case 0x3c01c4u: goto label_3c01c4;
        case 0x3c01c8u: goto label_3c01c8;
        case 0x3c01ccu: goto label_3c01cc;
        case 0x3c01d0u: goto label_3c01d0;
        case 0x3c01d4u: goto label_3c01d4;
        case 0x3c01d8u: goto label_3c01d8;
        case 0x3c01dcu: goto label_3c01dc;
        case 0x3c01e0u: goto label_3c01e0;
        case 0x3c01e4u: goto label_3c01e4;
        case 0x3c01e8u: goto label_3c01e8;
        case 0x3c01ecu: goto label_3c01ec;
        case 0x3c01f0u: goto label_3c01f0;
        case 0x3c01f4u: goto label_3c01f4;
        case 0x3c01f8u: goto label_3c01f8;
        case 0x3c01fcu: goto label_3c01fc;
        case 0x3c0200u: goto label_3c0200;
        case 0x3c0204u: goto label_3c0204;
        case 0x3c0208u: goto label_3c0208;
        case 0x3c020cu: goto label_3c020c;
        case 0x3c0210u: goto label_3c0210;
        case 0x3c0214u: goto label_3c0214;
        case 0x3c0218u: goto label_3c0218;
        case 0x3c021cu: goto label_3c021c;
        case 0x3c0220u: goto label_3c0220;
        case 0x3c0224u: goto label_3c0224;
        case 0x3c0228u: goto label_3c0228;
        case 0x3c022cu: goto label_3c022c;
        case 0x3c0230u: goto label_3c0230;
        case 0x3c0234u: goto label_3c0234;
        case 0x3c0238u: goto label_3c0238;
        case 0x3c023cu: goto label_3c023c;
        case 0x3c0240u: goto label_3c0240;
        case 0x3c0244u: goto label_3c0244;
        case 0x3c0248u: goto label_3c0248;
        case 0x3c024cu: goto label_3c024c;
        case 0x3c0250u: goto label_3c0250;
        case 0x3c0254u: goto label_3c0254;
        case 0x3c0258u: goto label_3c0258;
        case 0x3c025cu: goto label_3c025c;
        case 0x3c0260u: goto label_3c0260;
        case 0x3c0264u: goto label_3c0264;
        case 0x3c0268u: goto label_3c0268;
        case 0x3c026cu: goto label_3c026c;
        case 0x3c0270u: goto label_3c0270;
        case 0x3c0274u: goto label_3c0274;
        case 0x3c0278u: goto label_3c0278;
        case 0x3c027cu: goto label_3c027c;
        case 0x3c0280u: goto label_3c0280;
        case 0x3c0284u: goto label_3c0284;
        case 0x3c0288u: goto label_3c0288;
        case 0x3c028cu: goto label_3c028c;
        case 0x3c0290u: goto label_3c0290;
        case 0x3c0294u: goto label_3c0294;
        case 0x3c0298u: goto label_3c0298;
        case 0x3c029cu: goto label_3c029c;
        case 0x3c02a0u: goto label_3c02a0;
        case 0x3c02a4u: goto label_3c02a4;
        case 0x3c02a8u: goto label_3c02a8;
        case 0x3c02acu: goto label_3c02ac;
        case 0x3c02b0u: goto label_3c02b0;
        case 0x3c02b4u: goto label_3c02b4;
        case 0x3c02b8u: goto label_3c02b8;
        case 0x3c02bcu: goto label_3c02bc;
        case 0x3c02c0u: goto label_3c02c0;
        case 0x3c02c4u: goto label_3c02c4;
        case 0x3c02c8u: goto label_3c02c8;
        case 0x3c02ccu: goto label_3c02cc;
        case 0x3c02d0u: goto label_3c02d0;
        case 0x3c02d4u: goto label_3c02d4;
        case 0x3c02d8u: goto label_3c02d8;
        case 0x3c02dcu: goto label_3c02dc;
        case 0x3c02e0u: goto label_3c02e0;
        case 0x3c02e4u: goto label_3c02e4;
        case 0x3c02e8u: goto label_3c02e8;
        case 0x3c02ecu: goto label_3c02ec;
        case 0x3c02f0u: goto label_3c02f0;
        case 0x3c02f4u: goto label_3c02f4;
        case 0x3c02f8u: goto label_3c02f8;
        case 0x3c02fcu: goto label_3c02fc;
        case 0x3c0300u: goto label_3c0300;
        case 0x3c0304u: goto label_3c0304;
        case 0x3c0308u: goto label_3c0308;
        case 0x3c030cu: goto label_3c030c;
        case 0x3c0310u: goto label_3c0310;
        case 0x3c0314u: goto label_3c0314;
        case 0x3c0318u: goto label_3c0318;
        case 0x3c031cu: goto label_3c031c;
        case 0x3c0320u: goto label_3c0320;
        case 0x3c0324u: goto label_3c0324;
        case 0x3c0328u: goto label_3c0328;
        case 0x3c032cu: goto label_3c032c;
        case 0x3c0330u: goto label_3c0330;
        case 0x3c0334u: goto label_3c0334;
        case 0x3c0338u: goto label_3c0338;
        case 0x3c033cu: goto label_3c033c;
        case 0x3c0340u: goto label_3c0340;
        case 0x3c0344u: goto label_3c0344;
        case 0x3c0348u: goto label_3c0348;
        case 0x3c034cu: goto label_3c034c;
        case 0x3c0350u: goto label_3c0350;
        case 0x3c0354u: goto label_3c0354;
        case 0x3c0358u: goto label_3c0358;
        case 0x3c035cu: goto label_3c035c;
        case 0x3c0360u: goto label_3c0360;
        case 0x3c0364u: goto label_3c0364;
        case 0x3c0368u: goto label_3c0368;
        case 0x3c036cu: goto label_3c036c;
        case 0x3c0370u: goto label_3c0370;
        case 0x3c0374u: goto label_3c0374;
        case 0x3c0378u: goto label_3c0378;
        case 0x3c037cu: goto label_3c037c;
        case 0x3c0380u: goto label_3c0380;
        case 0x3c0384u: goto label_3c0384;
        case 0x3c0388u: goto label_3c0388;
        case 0x3c038cu: goto label_3c038c;
        case 0x3c0390u: goto label_3c0390;
        case 0x3c0394u: goto label_3c0394;
        case 0x3c0398u: goto label_3c0398;
        case 0x3c039cu: goto label_3c039c;
        case 0x3c03a0u: goto label_3c03a0;
        case 0x3c03a4u: goto label_3c03a4;
        case 0x3c03a8u: goto label_3c03a8;
        case 0x3c03acu: goto label_3c03ac;
        case 0x3c03b0u: goto label_3c03b0;
        case 0x3c03b4u: goto label_3c03b4;
        case 0x3c03b8u: goto label_3c03b8;
        case 0x3c03bcu: goto label_3c03bc;
        case 0x3c03c0u: goto label_3c03c0;
        case 0x3c03c4u: goto label_3c03c4;
        case 0x3c03c8u: goto label_3c03c8;
        case 0x3c03ccu: goto label_3c03cc;
        case 0x3c03d0u: goto label_3c03d0;
        case 0x3c03d4u: goto label_3c03d4;
        case 0x3c03d8u: goto label_3c03d8;
        case 0x3c03dcu: goto label_3c03dc;
        case 0x3c03e0u: goto label_3c03e0;
        case 0x3c03e4u: goto label_3c03e4;
        case 0x3c03e8u: goto label_3c03e8;
        case 0x3c03ecu: goto label_3c03ec;
        case 0x3c03f0u: goto label_3c03f0;
        case 0x3c03f4u: goto label_3c03f4;
        case 0x3c03f8u: goto label_3c03f8;
        case 0x3c03fcu: goto label_3c03fc;
        case 0x3c0400u: goto label_3c0400;
        case 0x3c0404u: goto label_3c0404;
        case 0x3c0408u: goto label_3c0408;
        case 0x3c040cu: goto label_3c040c;
        case 0x3c0410u: goto label_3c0410;
        case 0x3c0414u: goto label_3c0414;
        case 0x3c0418u: goto label_3c0418;
        case 0x3c041cu: goto label_3c041c;
        case 0x3c0420u: goto label_3c0420;
        case 0x3c0424u: goto label_3c0424;
        case 0x3c0428u: goto label_3c0428;
        case 0x3c042cu: goto label_3c042c;
        case 0x3c0430u: goto label_3c0430;
        case 0x3c0434u: goto label_3c0434;
        case 0x3c0438u: goto label_3c0438;
        case 0x3c043cu: goto label_3c043c;
        case 0x3c0440u: goto label_3c0440;
        case 0x3c0444u: goto label_3c0444;
        case 0x3c0448u: goto label_3c0448;
        case 0x3c044cu: goto label_3c044c;
        case 0x3c0450u: goto label_3c0450;
        case 0x3c0454u: goto label_3c0454;
        case 0x3c0458u: goto label_3c0458;
        case 0x3c045cu: goto label_3c045c;
        case 0x3c0460u: goto label_3c0460;
        case 0x3c0464u: goto label_3c0464;
        case 0x3c0468u: goto label_3c0468;
        case 0x3c046cu: goto label_3c046c;
        case 0x3c0470u: goto label_3c0470;
        case 0x3c0474u: goto label_3c0474;
        case 0x3c0478u: goto label_3c0478;
        case 0x3c047cu: goto label_3c047c;
        case 0x3c0480u: goto label_3c0480;
        case 0x3c0484u: goto label_3c0484;
        case 0x3c0488u: goto label_3c0488;
        case 0x3c048cu: goto label_3c048c;
        case 0x3c0490u: goto label_3c0490;
        case 0x3c0494u: goto label_3c0494;
        case 0x3c0498u: goto label_3c0498;
        case 0x3c049cu: goto label_3c049c;
        case 0x3c04a0u: goto label_3c04a0;
        case 0x3c04a4u: goto label_3c04a4;
        case 0x3c04a8u: goto label_3c04a8;
        case 0x3c04acu: goto label_3c04ac;
        case 0x3c04b0u: goto label_3c04b0;
        case 0x3c04b4u: goto label_3c04b4;
        case 0x3c04b8u: goto label_3c04b8;
        case 0x3c04bcu: goto label_3c04bc;
        case 0x3c04c0u: goto label_3c04c0;
        case 0x3c04c4u: goto label_3c04c4;
        case 0x3c04c8u: goto label_3c04c8;
        case 0x3c04ccu: goto label_3c04cc;
        case 0x3c04d0u: goto label_3c04d0;
        case 0x3c04d4u: goto label_3c04d4;
        case 0x3c04d8u: goto label_3c04d8;
        case 0x3c04dcu: goto label_3c04dc;
        case 0x3c04e0u: goto label_3c04e0;
        case 0x3c04e4u: goto label_3c04e4;
        case 0x3c04e8u: goto label_3c04e8;
        case 0x3c04ecu: goto label_3c04ec;
        case 0x3c04f0u: goto label_3c04f0;
        case 0x3c04f4u: goto label_3c04f4;
        case 0x3c04f8u: goto label_3c04f8;
        case 0x3c04fcu: goto label_3c04fc;
        case 0x3c0500u: goto label_3c0500;
        case 0x3c0504u: goto label_3c0504;
        case 0x3c0508u: goto label_3c0508;
        case 0x3c050cu: goto label_3c050c;
        case 0x3c0510u: goto label_3c0510;
        case 0x3c0514u: goto label_3c0514;
        case 0x3c0518u: goto label_3c0518;
        case 0x3c051cu: goto label_3c051c;
        case 0x3c0520u: goto label_3c0520;
        case 0x3c0524u: goto label_3c0524;
        case 0x3c0528u: goto label_3c0528;
        case 0x3c052cu: goto label_3c052c;
        case 0x3c0530u: goto label_3c0530;
        case 0x3c0534u: goto label_3c0534;
        case 0x3c0538u: goto label_3c0538;
        case 0x3c053cu: goto label_3c053c;
        case 0x3c0540u: goto label_3c0540;
        case 0x3c0544u: goto label_3c0544;
        case 0x3c0548u: goto label_3c0548;
        case 0x3c054cu: goto label_3c054c;
        case 0x3c0550u: goto label_3c0550;
        case 0x3c0554u: goto label_3c0554;
        case 0x3c0558u: goto label_3c0558;
        case 0x3c055cu: goto label_3c055c;
        case 0x3c0560u: goto label_3c0560;
        case 0x3c0564u: goto label_3c0564;
        case 0x3c0568u: goto label_3c0568;
        case 0x3c056cu: goto label_3c056c;
        case 0x3c0570u: goto label_3c0570;
        case 0x3c0574u: goto label_3c0574;
        case 0x3c0578u: goto label_3c0578;
        case 0x3c057cu: goto label_3c057c;
        case 0x3c0580u: goto label_3c0580;
        case 0x3c0584u: goto label_3c0584;
        case 0x3c0588u: goto label_3c0588;
        case 0x3c058cu: goto label_3c058c;
        case 0x3c0590u: goto label_3c0590;
        case 0x3c0594u: goto label_3c0594;
        case 0x3c0598u: goto label_3c0598;
        case 0x3c059cu: goto label_3c059c;
        case 0x3c05a0u: goto label_3c05a0;
        case 0x3c05a4u: goto label_3c05a4;
        case 0x3c05a8u: goto label_3c05a8;
        case 0x3c05acu: goto label_3c05ac;
        case 0x3c05b0u: goto label_3c05b0;
        case 0x3c05b4u: goto label_3c05b4;
        case 0x3c05b8u: goto label_3c05b8;
        case 0x3c05bcu: goto label_3c05bc;
        case 0x3c05c0u: goto label_3c05c0;
        case 0x3c05c4u: goto label_3c05c4;
        case 0x3c05c8u: goto label_3c05c8;
        case 0x3c05ccu: goto label_3c05cc;
        case 0x3c05d0u: goto label_3c05d0;
        case 0x3c05d4u: goto label_3c05d4;
        case 0x3c05d8u: goto label_3c05d8;
        case 0x3c05dcu: goto label_3c05dc;
        case 0x3c05e0u: goto label_3c05e0;
        case 0x3c05e4u: goto label_3c05e4;
        case 0x3c05e8u: goto label_3c05e8;
        case 0x3c05ecu: goto label_3c05ec;
        case 0x3c05f0u: goto label_3c05f0;
        case 0x3c05f4u: goto label_3c05f4;
        case 0x3c05f8u: goto label_3c05f8;
        case 0x3c05fcu: goto label_3c05fc;
        case 0x3c0600u: goto label_3c0600;
        case 0x3c0604u: goto label_3c0604;
        case 0x3c0608u: goto label_3c0608;
        case 0x3c060cu: goto label_3c060c;
        case 0x3c0610u: goto label_3c0610;
        case 0x3c0614u: goto label_3c0614;
        case 0x3c0618u: goto label_3c0618;
        case 0x3c061cu: goto label_3c061c;
        case 0x3c0620u: goto label_3c0620;
        case 0x3c0624u: goto label_3c0624;
        case 0x3c0628u: goto label_3c0628;
        case 0x3c062cu: goto label_3c062c;
        case 0x3c0630u: goto label_3c0630;
        case 0x3c0634u: goto label_3c0634;
        case 0x3c0638u: goto label_3c0638;
        case 0x3c063cu: goto label_3c063c;
        case 0x3c0640u: goto label_3c0640;
        case 0x3c0644u: goto label_3c0644;
        case 0x3c0648u: goto label_3c0648;
        case 0x3c064cu: goto label_3c064c;
        case 0x3c0650u: goto label_3c0650;
        case 0x3c0654u: goto label_3c0654;
        case 0x3c0658u: goto label_3c0658;
        case 0x3c065cu: goto label_3c065c;
        case 0x3c0660u: goto label_3c0660;
        case 0x3c0664u: goto label_3c0664;
        case 0x3c0668u: goto label_3c0668;
        case 0x3c066cu: goto label_3c066c;
        case 0x3c0670u: goto label_3c0670;
        case 0x3c0674u: goto label_3c0674;
        case 0x3c0678u: goto label_3c0678;
        case 0x3c067cu: goto label_3c067c;
        case 0x3c0680u: goto label_3c0680;
        case 0x3c0684u: goto label_3c0684;
        case 0x3c0688u: goto label_3c0688;
        case 0x3c068cu: goto label_3c068c;
        case 0x3c0690u: goto label_3c0690;
        case 0x3c0694u: goto label_3c0694;
        case 0x3c0698u: goto label_3c0698;
        case 0x3c069cu: goto label_3c069c;
        case 0x3c06a0u: goto label_3c06a0;
        case 0x3c06a4u: goto label_3c06a4;
        case 0x3c06a8u: goto label_3c06a8;
        case 0x3c06acu: goto label_3c06ac;
        case 0x3c06b0u: goto label_3c06b0;
        case 0x3c06b4u: goto label_3c06b4;
        case 0x3c06b8u: goto label_3c06b8;
        case 0x3c06bcu: goto label_3c06bc;
        case 0x3c06c0u: goto label_3c06c0;
        case 0x3c06c4u: goto label_3c06c4;
        case 0x3c06c8u: goto label_3c06c8;
        case 0x3c06ccu: goto label_3c06cc;
        case 0x3c06d0u: goto label_3c06d0;
        case 0x3c06d4u: goto label_3c06d4;
        case 0x3c06d8u: goto label_3c06d8;
        case 0x3c06dcu: goto label_3c06dc;
        case 0x3c06e0u: goto label_3c06e0;
        case 0x3c06e4u: goto label_3c06e4;
        case 0x3c06e8u: goto label_3c06e8;
        case 0x3c06ecu: goto label_3c06ec;
        case 0x3c06f0u: goto label_3c06f0;
        case 0x3c06f4u: goto label_3c06f4;
        case 0x3c06f8u: goto label_3c06f8;
        case 0x3c06fcu: goto label_3c06fc;
        case 0x3c0700u: goto label_3c0700;
        case 0x3c0704u: goto label_3c0704;
        case 0x3c0708u: goto label_3c0708;
        case 0x3c070cu: goto label_3c070c;
        case 0x3c0710u: goto label_3c0710;
        case 0x3c0714u: goto label_3c0714;
        case 0x3c0718u: goto label_3c0718;
        case 0x3c071cu: goto label_3c071c;
        case 0x3c0720u: goto label_3c0720;
        case 0x3c0724u: goto label_3c0724;
        case 0x3c0728u: goto label_3c0728;
        case 0x3c072cu: goto label_3c072c;
        case 0x3c0730u: goto label_3c0730;
        case 0x3c0734u: goto label_3c0734;
        case 0x3c0738u: goto label_3c0738;
        case 0x3c073cu: goto label_3c073c;
        case 0x3c0740u: goto label_3c0740;
        case 0x3c0744u: goto label_3c0744;
        case 0x3c0748u: goto label_3c0748;
        case 0x3c074cu: goto label_3c074c;
        case 0x3c0750u: goto label_3c0750;
        case 0x3c0754u: goto label_3c0754;
        case 0x3c0758u: goto label_3c0758;
        case 0x3c075cu: goto label_3c075c;
        case 0x3c0760u: goto label_3c0760;
        case 0x3c0764u: goto label_3c0764;
        case 0x3c0768u: goto label_3c0768;
        case 0x3c076cu: goto label_3c076c;
        case 0x3c0770u: goto label_3c0770;
        case 0x3c0774u: goto label_3c0774;
        case 0x3c0778u: goto label_3c0778;
        case 0x3c077cu: goto label_3c077c;
        case 0x3c0780u: goto label_3c0780;
        case 0x3c0784u: goto label_3c0784;
        case 0x3c0788u: goto label_3c0788;
        case 0x3c078cu: goto label_3c078c;
        case 0x3c0790u: goto label_3c0790;
        case 0x3c0794u: goto label_3c0794;
        case 0x3c0798u: goto label_3c0798;
        case 0x3c079cu: goto label_3c079c;
        case 0x3c07a0u: goto label_3c07a0;
        case 0x3c07a4u: goto label_3c07a4;
        case 0x3c07a8u: goto label_3c07a8;
        case 0x3c07acu: goto label_3c07ac;
        case 0x3c07b0u: goto label_3c07b0;
        case 0x3c07b4u: goto label_3c07b4;
        case 0x3c07b8u: goto label_3c07b8;
        case 0x3c07bcu: goto label_3c07bc;
        case 0x3c07c0u: goto label_3c07c0;
        case 0x3c07c4u: goto label_3c07c4;
        case 0x3c07c8u: goto label_3c07c8;
        case 0x3c07ccu: goto label_3c07cc;
        case 0x3c07d0u: goto label_3c07d0;
        case 0x3c07d4u: goto label_3c07d4;
        case 0x3c07d8u: goto label_3c07d8;
        case 0x3c07dcu: goto label_3c07dc;
        case 0x3c07e0u: goto label_3c07e0;
        case 0x3c07e4u: goto label_3c07e4;
        case 0x3c07e8u: goto label_3c07e8;
        case 0x3c07ecu: goto label_3c07ec;
        case 0x3c07f0u: goto label_3c07f0;
        case 0x3c07f4u: goto label_3c07f4;
        case 0x3c07f8u: goto label_3c07f8;
        case 0x3c07fcu: goto label_3c07fc;
        case 0x3c0800u: goto label_3c0800;
        case 0x3c0804u: goto label_3c0804;
        case 0x3c0808u: goto label_3c0808;
        case 0x3c080cu: goto label_3c080c;
        case 0x3c0810u: goto label_3c0810;
        case 0x3c0814u: goto label_3c0814;
        default: break;
    }

    ctx->pc = 0x3bfd08u;

label_3bfd08:
    // 0x3bfd08: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x3bfd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_3bfd0c:
    // 0x3bfd0c: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x3bfd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_3bfd10:
    // 0x3bfd10: 0x27a30264  addiu       $v1, $sp, 0x264
    ctx->pc = 0x3bfd10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_3bfd14:
    // 0x3bfd14: 0x7fb202f0  sq          $s2, 0x2F0($sp)
    ctx->pc = 0x3bfd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 18));
label_3bfd18:
    // 0x3bfd18: 0x7fb502c0  sq          $s5, 0x2C0($sp)
    ctx->pc = 0x3bfd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 21));
label_3bfd1c:
    // 0x3bfd1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3bfd1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3bfd20:
    // 0x3bfd20: 0x7fb702a0  sq          $s7, 0x2A0($sp)
    ctx->pc = 0x3bfd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 23));
label_3bfd24:
    // 0x3bfd24: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x3bfd24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3bfd28:
    // 0x3bfd28: 0x7fbe0290  sq          $fp, 0x290($sp)
    ctx->pc = 0x3bfd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 30));
label_3bfd2c:
    // 0x3bfd2c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x3bfd2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfd30:
    // 0x3bfd30: 0x7fb00310  sq          $s0, 0x310($sp)
    ctx->pc = 0x3bfd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 16));
label_3bfd34:
    // 0x3bfd34: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3bfd34u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfd38:
    // 0x3bfd38: 0x7fb10300  sq          $s1, 0x300($sp)
    ctx->pc = 0x3bfd38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 17));
label_3bfd3c:
    // 0x3bfd3c: 0x7fb302e0  sq          $s3, 0x2E0($sp)
    ctx->pc = 0x3bfd3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 19));
label_3bfd40:
    // 0x3bfd40: 0x7fb402d0  sq          $s4, 0x2D0($sp)
    ctx->pc = 0x3bfd40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 20));
label_3bfd44:
    // 0x3bfd44: 0x7fb602b0  sq          $s6, 0x2B0($sp)
    ctx->pc = 0x3bfd44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 22));
label_3bfd48:
    // 0x3bfd48: 0xffbf0280  sd          $ra, 0x280($sp)
    ctx->pc = 0x3bfd48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 31));
label_3bfd4c:
    // 0x3bfd4c: 0xafa00264  sw          $zero, 0x264($sp)
    ctx->pc = 0x3bfd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 0));
label_3bfd50:
    // 0x3bfd50: 0xafa50268  sw          $a1, 0x268($sp)
    ctx->pc = 0x3bfd50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 5));
label_3bfd54:
    // 0x3bfd54: 0xafa00270  sw          $zero, 0x270($sp)
    ctx->pc = 0x3bfd54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 0));
label_3bfd58:
    // 0x3bfd58: 0xafa0026c  sw          $zero, 0x26C($sp)
    ctx->pc = 0x3bfd58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 0));
label_3bfd5c:
    // 0x3bfd5c: 0xafa20274  sw          $v0, 0x274($sp)
    ctx->pc = 0x3bfd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 2));
label_3bfd60:
    // 0x3bfd60: 0xafa30278  sw          $v1, 0x278($sp)
    ctx->pc = 0x3bfd60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 3));
label_3bfd64:
    // 0x3bfd64: 0x0  nop
    ctx->pc = 0x3bfd64u;
    // NOP
label_3bfd68:
    // 0x3bfd68: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3bfd68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
label_3bfd6c:
    // 0x3bfd6c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3bfd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
label_3bfd70:
    // 0x3bfd70: 0x8c44cddc  lw          $a0, -0x3224($v0)
    ctx->pc = 0x3bfd70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954460)));
label_3bfd74:
    // 0x3bfd74: 0x8fa60268  lw          $a2, 0x268($sp)
    ctx->pc = 0x3bfd74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3bfd78:
    // 0x3bfd78: 0x8c67d178  lw          $a3, -0x2E88($v1)
    ctx->pc = 0x3bfd78u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955384)));
label_3bfd7c:
    // 0x3bfd7c: 0x8fa50274  lw          $a1, 0x274($sp)
    ctx->pc = 0x3bfd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
label_3bfd80:
    // 0x3bfd80: 0xc0f02d8  jal         func_3C0B60
label_3bfd84:
    if (ctx->pc == 0x3BFD84u) {
        ctx->pc = 0x3BFD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFD80u;
        // 0x3bfd84: 0x8fa80278  lw          $t0, 0x278($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFD88u;
        goto label_3bfd88;
    }
    ctx->pc = 0x3BFD80u;
    SET_GPR_U32(ctx, 31, 0x3BFD88u);
    ctx->pc = 0x3BFD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFD80u;
    // 0x3bfd84: 0x8fa80278  lw          $t0, 0x278($sp) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0B60u, 0x3BFD80u, 0x3BFD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFD88u;
label_3bfd88:
    // 0x3bfd88: 0x8fa40268  lw          $a0, 0x268($sp)
    ctx->pc = 0x3bfd88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3bfd8c:
    // 0x3bfd8c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3bfd8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3bfd90:
    // 0x3bfd90: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x3bfd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_3bfd94:
    // 0x3bfd94: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x3bfd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_3bfd98:
    // 0x3bfd98: 0x10600292  beqz        $v1, . + 4 + (0x292 << 2)
label_3bfd9c:
    if (ctx->pc == 0x3BFD9Cu) {
        ctx->pc = 0x3BFD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFD98u;
        // 0x3bfd9c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFDA0u;
        goto label_3bfda0;
    }
    ctx->pc = 0x3BFD98u;
    {
        const bool branch_taken_0x3bfd98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFD98u;
        // 0x3bfd9c: 0xafa40268  sw          $a0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfd98) {
            ctx->pc = 0x3C07E4u;
            goto label_3c07e4;
        }
    }
    ctx->pc = 0x3BFDA0u;
label_3bfda0:
    // 0x3bfda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3bfda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3bfda4:
    // 0x3bfda4: 0x56c20020  bnel        $s6, $v0, . + 4 + (0x20 << 2)
label_3bfda8:
    if (ctx->pc == 0x3BFDA8u) {
        ctx->pc = 0x3BFDA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDA4u;
        // 0x3bfda8: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFDACu;
        goto label_3bfdac;
    }
    ctx->pc = 0x3BFDA4u;
    {
        const bool branch_taken_0x3bfda4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x3bfda4) {
            ctx->pc = 0x3BFDA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFDA4u;
            // 0x3bfda8: 0x8fa30260  lw          $v1, 0x260($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFE28u;
            goto label_3bfe28;
        }
    }
    ctx->pc = 0x3BFDACu;
label_3bfdac:
    // 0x3bfdac: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3bfdacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3bfdb0:
    // 0x3bfdb0: 0x24440c11  addiu       $a0, $v0, 0xC11
    ctx->pc = 0x3bfdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
label_3bfdb4:
    // 0x3bfdb4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3bfdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3bfdb8:
    // 0x3bfdb8: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3bfdb8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3bfdbc:
    // 0x3bfdbc: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3bfdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3bfdc0:
    // 0x3bfdc0: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_3bfdc4:
    if (ctx->pc == 0x3BFDC4u) {
        ctx->pc = 0x3BFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDC0u;
        // 0x3bfdc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFDC8u;
        goto label_3bfdc8;
    }
    ctx->pc = 0x3BFDC0u;
    {
        const bool branch_taken_0x3bfdc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFDC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDC0u;
        // 0x3bfdc4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfdc0) {
            ctx->pc = 0x3BFE24u;
            goto label_3bfe24;
        }
    }
    ctx->pc = 0x3BFDC8u;
label_3bfdc8:
    // 0x3bfdc8: 0x10000007  b           . + 4 + (0x7 << 2)
label_3bfdcc:
    if (ctx->pc == 0x3BFDCCu) {
        ctx->pc = 0x3BFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDC8u;
        // 0x3bfdcc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFDD0u;
        goto label_3bfdd0;
    }
    ctx->pc = 0x3BFDC8u;
    {
        const bool branch_taken_0x3bfdc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDC8u;
        // 0x3bfdcc: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfdc8) {
            ctx->pc = 0x3BFDE8u;
            goto label_3bfde8;
        }
    }
    ctx->pc = 0x3BFDD0u;
label_3bfdd0:
    // 0x3bfdd0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3bfdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3bfdd4:
    // 0x3bfdd4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3bfdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3bfdd8:
    // 0x3bfdd8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3bfdd8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3bfddc:
    // 0x3bfddc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3bfddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3bfde0:
    // 0x3bfde0: 0xae430004  sw          $v1, 0x4($s2)
    ctx->pc = 0x3bfde0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
label_3bfde4:
    // 0x3bfde4: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3bfde4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3bfde8:
    // 0x3bfde8: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_3bfdec:
    if (ctx->pc == 0x3BFDECu) {
        ctx->pc = 0x3BFDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDE8u;
        // 0x3bfdec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFDF0u;
        goto label_3bfdf0;
    }
    ctx->pc = 0x3BFDE8u;
    {
        const bool branch_taken_0x3bfde8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3bfde8) {
            ctx->pc = 0x3BFDECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFDE8u;
            // 0x3bfdec: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFE04u;
            goto label_3bfe04;
        }
    }
    ctx->pc = 0x3BFDF0u;
label_3bfdf0:
    // 0x3bfdf0: 0xc0efe76  jal         func_3BF9D8
label_3bfdf4:
    if (ctx->pc == 0x3BFDF4u) {
        ctx->pc = 0x3BFDF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDF0u;
        // 0x3bfdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFDF8u;
        goto label_3bfdf8;
    }
    ctx->pc = 0x3BFDF0u;
    SET_GPR_U32(ctx, 31, 0x3BFDF8u);
    ctx->pc = 0x3BFDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFDF0u;
    // 0x3bfdf4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3BFDF0u, 0x3BFDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFDF8u;
label_3bfdf8:
    // 0x3bfdf8: 0x1440027b  bnez        $v0, . + 4 + (0x27B << 2)
label_3bfdfc:
    if (ctx->pc == 0x3BFDFCu) {
        ctx->pc = 0x3BFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDF8u;
        // 0x3bfdfc: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE00u;
        goto label_3bfe00;
    }
    ctx->pc = 0x3BFDF8u;
    {
        const bool branch_taken_0x3bfdf8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFDF8u;
        // 0x3bfdfc: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfdf8) {
            ctx->pc = 0x3C07E8u;
            goto label_3c07e8;
        }
    }
    ctx->pc = 0x3BFE00u;
label_3bfe00:
    // 0x3bfe00: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3bfe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bfe04:
    // 0x3bfe04: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3bfe04u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3bfe08:
    // 0x3bfe08: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3bfe08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3bfe0c:
    // 0x3bfe0c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3bfe0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3bfe10:
    // 0x3bfe10: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3bfe10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3bfe14:
    // 0x3bfe14: 0x5460ffee  bnel        $v1, $zero, . + 4 + (-0x12 << 2)
label_3bfe18:
    if (ctx->pc == 0x3BFE18u) {
        ctx->pc = 0x3BFE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE14u;
        // 0x3bfe18: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE1Cu;
        goto label_3bfe1c;
    }
    ctx->pc = 0x3BFE14u;
    {
        const bool branch_taken_0x3bfe14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3bfe14) {
            ctx->pc = 0x3BFE18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFE14u;
            // 0x3bfe18: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFDD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfdd0;
        }
    }
    ctx->pc = 0x3BFE1Cu;
label_3bfe1c:
    // 0x3bfe1c: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_3bfe20:
    if (ctx->pc == 0x3BFE20u) {
        ctx->pc = 0x3BFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE1Cu;
        // 0x3bfe20: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE24u;
        goto label_3bfe24;
    }
    ctx->pc = 0x3BFE1Cu;
    {
        const bool branch_taken_0x3bfe1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE1Cu;
        // 0x3bfe20: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfe1c) {
            ctx->pc = 0x3BFD6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd6c;
        }
    }
    ctx->pc = 0x3BFE24u;
label_3bfe24:
    // 0x3bfe24: 0x8fa30260  lw          $v1, 0x260($sp)
    ctx->pc = 0x3bfe24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
label_3bfe28:
    // 0x3bfe28: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x3bfe28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_3bfe2c:
    // 0x3bfe2c: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_3bfe30:
    if (ctx->pc == 0x3BFE30u) {
        ctx->pc = 0x3BFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE2Cu;
        // 0x3bfe30: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE34u;
        goto label_3bfe34;
    }
    ctx->pc = 0x3BFE2Cu;
    {
        const bool branch_taken_0x3bfe2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3BFE30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE2Cu;
        // 0x3bfe30: 0x8fa30268  lw          $v1, 0x268($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfe2c) {
            ctx->pc = 0x3BFE74u;
            goto label_3bfe74;
        }
    }
    ctx->pc = 0x3BFE34u;
label_3bfe34:
    // 0x3bfe34: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x3bfe34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfe38:
    // 0x3bfe38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3bfe38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfe3c:
    // 0x3bfe3c: 0x8fa20268  lw          $v0, 0x268($sp)
    ctx->pc = 0x3bfe3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3bfe40:
    // 0x3bfe40: 0x80500000  lb          $s0, 0x0($v0)
    ctx->pc = 0x3bfe40u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3bfe44:
    // 0x3bfe44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3bfe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3bfe48:
    // 0x3bfe48: 0xafa20268  sw          $v0, 0x268($sp)
    ctx->pc = 0x3bfe48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
label_3bfe4c:
    // 0x3bfe4c: 0x2e020079  sltiu       $v0, $s0, 0x79
    ctx->pc = 0x3bfe4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)121) ? 1 : 0);
label_3bfe50:
    // 0x3bfe50: 0x10400073  beqz        $v0, . + 4 + (0x73 << 2)
label_3bfe54:
    if (ctx->pc == 0x3BFE54u) {
        ctx->pc = 0x3BFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE50u;
        // 0x3bfe54: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE58u;
        goto label_3bfe58;
    }
    ctx->pc = 0x3BFE50u;
    {
        const bool branch_taken_0x3bfe50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE50u;
        // 0x3bfe54: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfe50) {
            ctx->pc = 0x3C0020u;
            goto label_3c0020;
        }
    }
    ctx->pc = 0x3BFE58u;
label_3bfe58:
    // 0x3bfe58: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3bfe58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3bfe5c:
    // 0x3bfe5c: 0x24420d60  addiu       $v0, $v0, 0xD60
    ctx->pc = 0x3bfe5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3424));
label_3bfe60:
    // 0x3bfe60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3bfe60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3bfe64:
    // 0x3bfe64: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3bfe64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3bfe68:
    // 0x3bfe68: 0x800008  jr          $a0
label_3bfe6c:
    if (ctx->pc == 0x3BFE6Cu) {
        ctx->pc = 0x3BFE70u;
        goto label_3bfe70;
    }
    ctx->pc = 0x3BFE68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3BFE70u: goto label_3bfe70;
            case 0x3BFEDCu: goto label_3bfedc;
            case 0x3BFEE4u: goto label_3bfee4;
            case 0x3BFEECu: goto label_3bfeec;
            case 0x3BFEF4u: goto label_3bfef4;
            case 0x3BFEFCu: goto label_3bfefc;
            case 0x3BFF10u: goto label_3bff10;
            case 0x3BFF14u: goto label_3bff14;
            case 0x3BFF24u: goto label_3bff24;
            case 0x3BFF3Cu: goto label_3bff3c;
            case 0x3BFF40u: goto label_3bff40;
            case 0x3BFF58u: goto label_3bff58;
            case 0x3BFF70u: goto label_3bff70;
            case 0x3BFF7Cu: goto label_3bff7c;
            case 0x3BFF84u: goto label_3bff84;
            case 0x3BFF8Cu: goto label_3bff8c;
            case 0x3BFFA8u: goto label_3bffa8;
            case 0x3BFFB4u: goto label_3bffb4;
            case 0x3BFFD0u: goto label_3bffd0;
            case 0x3C0018u: goto label_3c0018;
            case 0x3C0020u: goto label_3c0020;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BFE68u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3BFE70u;
label_3bfe70:
    // 0x3bfe70: 0x8fa30268  lw          $v1, 0x268($sp)
    ctx->pc = 0x3bfe70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3bfe74:
    // 0x3bfe74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3bfe74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bfe78:
    // 0x3bfe78: 0x1ac0ffbb  blez        $s6, . + 4 + (-0x45 << 2)
label_3bfe7c:
    if (ctx->pc == 0x3BFE7Cu) {
        ctx->pc = 0x3BFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE78u;
        // 0x3bfe7c: 0x768823  subu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE80u;
        goto label_3bfe80;
    }
    ctx->pc = 0x3BFE78u;
    {
        const bool branch_taken_0x3bfe78 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x3BFE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE78u;
        // 0x3bfe7c: 0x768823  subu        $s1, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfe78) {
            ctx->pc = 0x3BFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd68;
        }
    }
    ctx->pc = 0x3BFE80u;
label_3bfe80:
    // 0x3bfe80: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3bfe80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3bfe84:
    // 0x3bfe84: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
label_3bfe88:
    if (ctx->pc == 0x3BFE88u) {
        ctx->pc = 0x3BFE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE84u;
        // 0x3bfe88: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE8Cu;
        goto label_3bfe8c;
    }
    ctx->pc = 0x3BFE84u;
    {
        const bool branch_taken_0x3bfe84 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3bfe84) {
            ctx->pc = 0x3BFE88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3BFE84u;
            // 0x3bfe88: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3BFEA0u;
            goto label_3bfea0;
        }
    }
    ctx->pc = 0x3BFE8Cu;
label_3bfe8c:
    // 0x3bfe8c: 0xc0efe76  jal         func_3BF9D8
label_3bfe90:
    if (ctx->pc == 0x3BFE90u) {
        ctx->pc = 0x3BFE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE8Cu;
        // 0x3bfe90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE94u;
        goto label_3bfe94;
    }
    ctx->pc = 0x3BFE8Cu;
    SET_GPR_U32(ctx, 31, 0x3BFE94u);
    ctx->pc = 0x3BFE90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFE8Cu;
    // 0x3bfe90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3BFE8Cu, 0x3BFE94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFE94u;
label_3bfe94:
    // 0x3bfe94: 0x14400250  bnez        $v0, . + 4 + (0x250 << 2)
label_3bfe98:
    if (ctx->pc == 0x3BFE98u) {
        ctx->pc = 0x3BFE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE94u;
        // 0x3bfe98: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFE9Cu;
        goto label_3bfe9c;
    }
    ctx->pc = 0x3BFE94u;
    {
        const bool branch_taken_0x3bfe94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFE94u;
        // 0x3bfe98: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfe94) {
            ctx->pc = 0x3C07D8u;
            goto label_3c07d8;
        }
    }
    ctx->pc = 0x3BFE9Cu;
label_3bfe9c:
    // 0x3bfe9c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3bfe9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3bfea0:
    // 0x3bfea0: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x3bfea0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3bfea4:
    // 0x3bfea4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3bfea4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3bfea8:
    // 0x3bfea8: 0x1443024e  bne         $v0, $v1, . + 4 + (0x24E << 2)
label_3bfeac:
    if (ctx->pc == 0x3BFEACu) {
        ctx->pc = 0x3BFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEA8u;
        // 0x3bfeac: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFEB0u;
        goto label_3bfeb0;
    }
    ctx->pc = 0x3BFEA8u;
    {
        const bool branch_taken_0x3bfea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3BFEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEA8u;
        // 0x3bfeac: 0x24830001  addiu       $v1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfea8) {
            ctx->pc = 0x3C07E4u;
            goto label_3c07e4;
        }
    }
    ctx->pc = 0x3BFEB0u;
label_3bfeb0:
    // 0x3bfeb0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3bfeb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3bfeb4:
    // 0x3bfeb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3bfeb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3bfeb8:
    // 0x3bfeb8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3bfeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3bfebc:
    // 0x3bfebc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3bfebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3bfec0:
    // 0x3bfec0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3bfec0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3bfec4:
    // 0x3bfec4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3bfec4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3bfec8:
    // 0x3bfec8: 0x216102a  slt         $v0, $s0, $s6
    ctx->pc = 0x3bfec8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_3bfecc:
    // 0x3bfecc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_3bfed0:
    if (ctx->pc == 0x3BFED0u) {
        ctx->pc = 0x3BFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFECCu;
        // 0x3bfed0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFED4u;
        goto label_3bfed4;
    }
    ctx->pc = 0x3BFECCu;
    {
        const bool branch_taken_0x3bfecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFECCu;
        // 0x3bfed0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfecc) {
            ctx->pc = 0x3BFE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfe80;
        }
    }
    ctx->pc = 0x3BFED4u;
label_3bfed4:
    // 0x3bfed4: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
label_3bfed8:
    if (ctx->pc == 0x3BFED8u) {
        ctx->pc = 0x3BFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFED4u;
        // 0x3bfed8: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFEDCu;
        goto label_3bfedc;
    }
    ctx->pc = 0x3BFED4u;
    {
        const bool branch_taken_0x3bfed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFED4u;
        // 0x3bfed8: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfed4) {
            ctx->pc = 0x3BFD6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd6c;
        }
    }
    ctx->pc = 0x3BFEDCu;
label_3bfedc:
    // 0x3bfedc: 0x1000ffd7  b           . + 4 + (-0x29 << 2)
label_3bfee0:
    if (ctx->pc == 0x3BFEE0u) {
        ctx->pc = 0x3BFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEDCu;
        // 0x3bfee0: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFEE4u;
        goto label_3bfee4;
    }
    ctx->pc = 0x3BFEDCu;
    {
        const bool branch_taken_0x3bfedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEDCu;
        // 0x3bfee0: 0x36730008  ori         $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfedc) {
            ctx->pc = 0x3BFE3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfe3c;
        }
    }
    ctx->pc = 0x3BFEE4u;
label_3bfee4:
    // 0x3bfee4: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
label_3bfee8:
    if (ctx->pc == 0x3BFEE8u) {
        ctx->pc = 0x3BFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEE4u;
        // 0x3bfee8: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFEECu;
        goto label_3bfeec;
    }
    ctx->pc = 0x3BFEE4u;
    {
        const bool branch_taken_0x3bfee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEE4u;
        // 0x3bfee8: 0x36730001  ori         $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfee4) {
            ctx->pc = 0x3BFE3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfe3c;
        }
    }
    ctx->pc = 0x3BFEECu;
label_3bfeec:
    // 0x3bfeec: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_3bfef0:
    if (ctx->pc == 0x3BFEF0u) {
        ctx->pc = 0x3BFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEECu;
        // 0x3bfef0: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFEF4u;
        goto label_3bfef4;
    }
    ctx->pc = 0x3BFEECu;
    {
        const bool branch_taken_0x3bfeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEECu;
        // 0x3bfef0: 0x36730002  ori         $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfeec) {
            ctx->pc = 0x3BFE3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfe3c;
        }
    }
    ctx->pc = 0x3BFEF4u;
label_3bfef4:
    // 0x3bfef4: 0x1000ffd1  b           . + 4 + (-0x2F << 2)
label_3bfef8:
    if (ctx->pc == 0x3BFEF8u) {
        ctx->pc = 0x3BFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEF4u;
        // 0x3bfef8: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFEFCu;
        goto label_3bfefc;
    }
    ctx->pc = 0x3BFEF4u;
    {
        const bool branch_taken_0x3bfef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFEF4u;
        // 0x3bfef8: 0x36730004  ori         $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfef4) {
            ctx->pc = 0x3BFE3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfe3c;
        }
    }
    ctx->pc = 0x3BFEFCu;
label_3bfefc:
    // 0x3bfefc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3bfefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3bff00:
    // 0x3bff00: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x3bff00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3bff04:
    // 0x3bff04: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x3bff04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_3bff08:
    // 0x3bff08: 0x1000ffcc  b           . + 4 + (-0x34 << 2)
label_3bff0c:
    if (ctx->pc == 0x3BFF0Cu) {
        ctx->pc = 0x3BFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF08u;
        // 0x3bff0c: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF10u;
        goto label_3bff10;
    }
    ctx->pc = 0x3BFF08u;
    {
        const bool branch_taken_0x3bff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF08u;
        // 0x3bff0c: 0x2454ffd0  addiu       $s4, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff08) {
            ctx->pc = 0x3BFE3Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfe3c;
        }
    }
    ctx->pc = 0x3BFF10u;
label_3bff10:
    // 0x3bff10: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3bff10u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3bff14:
    // 0x3bff14: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3bff14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3bff18:
    // 0x3bff18: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3bff18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bff1c:
    // 0x3bff1c: 0x10000011  b           . + 4 + (0x11 << 2)
label_3bff20:
    if (ctx->pc == 0x3BFF20u) {
        ctx->pc = 0x3BFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF1Cu;
        // 0x3bff20: 0x24425948  addiu       $v0, $v0, 0x5948 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF24u;
        goto label_3bff24;
    }
    ctx->pc = 0x3BFF1Cu;
    {
        const bool branch_taken_0x3bff1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF1Cu;
        // 0x3bff20: 0x24425948  addiu       $v0, $v0, 0x5948 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff1c) {
            ctx->pc = 0x3BFF64u;
            goto label_3bff64;
        }
    }
    ctx->pc = 0x3BFF24u;
label_3bff24:
    // 0x3bff24: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3bff24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3bff28:
    // 0x3bff28: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3bff28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bff2c:
    // 0x3bff2c: 0x24425948  addiu       $v0, $v0, 0x5948
    ctx->pc = 0x3bff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22856));
label_3bff30:
    // 0x3bff30: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x3bff30u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3bff34:
    // 0x3bff34: 0x10000045  b           . + 4 + (0x45 << 2)
label_3bff38:
    if (ctx->pc == 0x3BFF38u) {
        ctx->pc = 0x3BFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF34u;
        // 0x3bff38: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF3Cu;
        goto label_3bff3c;
    }
    ctx->pc = 0x3BFF34u;
    {
        const bool branch_taken_0x3bff34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF34u;
        // 0x3bff38: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff34) {
            ctx->pc = 0x3C004Cu;
            goto label_3c004c;
        }
    }
    ctx->pc = 0x3BFF3Cu;
label_3bff3c:
    // 0x3bff3c: 0x36730001  ori         $s3, $s3, 0x1
    ctx->pc = 0x3bff3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)1);
label_3bff40:
    // 0x3bff40: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3bff40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3bff44:
    // 0x3bff44: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3bff44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bff48:
    // 0x3bff48: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x3bff48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_3bff4c:
    // 0x3bff4c: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x3bff4cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3bff50:
    // 0x3bff50: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3bff54:
    if (ctx->pc == 0x3BFF54u) {
        ctx->pc = 0x3BFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF50u;
        // 0x3bff54: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF58u;
        goto label_3bff58;
    }
    ctx->pc = 0x3BFF50u;
    {
        const bool branch_taken_0x3bff50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF50u;
        // 0x3bff54: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff50) {
            ctx->pc = 0x3C004Cu;
            goto label_3c004c;
        }
    }
    ctx->pc = 0x3BFF58u;
label_3bff58:
    // 0x3bff58: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3bff58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3bff5c:
    // 0x3bff5c: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3bff5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bff60:
    // 0x3bff60: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x3bff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_3bff64:
    // 0x3bff64: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x3bff64u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3bff68:
    // 0x3bff68: 0x10000038  b           . + 4 + (0x38 << 2)
label_3bff6c:
    if (ctx->pc == 0x3BFF6Cu) {
        ctx->pc = 0x3BFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF68u;
        // 0x3bff6c: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF70u;
        goto label_3bff70;
    }
    ctx->pc = 0x3BFF68u;
    {
        const bool branch_taken_0x3bff68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF68u;
        // 0x3bff6c: 0xafa20270  sw          $v0, 0x270($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff68) {
            ctx->pc = 0x3C004Cu;
            goto label_3c004c;
        }
    }
    ctx->pc = 0x3BFF70u;
label_3bff70:
    // 0x3bff70: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3bff70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3bff74:
    // 0x3bff74: 0x10000011  b           . + 4 + (0x11 << 2)
label_3bff78:
    if (ctx->pc == 0x3BFF78u) {
        ctx->pc = 0x3BFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF74u;
        // 0x3bff78: 0x36730100  ori         $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF7Cu;
        goto label_3bff7c;
    }
    ctx->pc = 0x3BFF74u;
    {
        const bool branch_taken_0x3bff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF74u;
        // 0x3bff78: 0x36730100  ori         $s3, $s3, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff74) {
            ctx->pc = 0x3BFFBCu;
            goto label_3bffbc;
        }
    }
    ctx->pc = 0x3BFF7Cu;
label_3bff7c:
    // 0x3bff7c: 0x10000033  b           . + 4 + (0x33 << 2)
label_3bff80:
    if (ctx->pc == 0x3BFF80u) {
        ctx->pc = 0x3BFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF7Cu;
        // 0x3bff80: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF84u;
        goto label_3bff84;
    }
    ctx->pc = 0x3BFF7Cu;
    {
        const bool branch_taken_0x3bff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF7Cu;
        // 0x3bff80: 0x24100004  addiu       $s0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff7c) {
            ctx->pc = 0x3C004Cu;
            goto label_3c004c;
        }
    }
    ctx->pc = 0x3BFF84u;
label_3bff84:
    // 0x3bff84: 0x10000031  b           . + 4 + (0x31 << 2)
label_3bff88:
    if (ctx->pc == 0x3BFF88u) {
        ctx->pc = 0x3BFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF84u;
        // 0x3bff88: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFF8Cu;
        goto label_3bff8c;
    }
    ctx->pc = 0x3BFF84u;
    {
        const bool branch_taken_0x3bff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFF88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF84u;
        // 0x3bff88: 0x24100002  addiu       $s0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bff84) {
            ctx->pc = 0x3C004Cu;
            goto label_3c004c;
        }
    }
    ctx->pc = 0x3BFF8Cu;
label_3bff8c:
    // 0x3bff8c: 0x8fa50268  lw          $a1, 0x268($sp)
    ctx->pc = 0x3bff8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 616)));
label_3bff90:
    // 0x3bff90: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3bff90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3bff94:
    // 0x3bff94: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x3bff94u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_3bff98:
    // 0x3bff98: 0xc0f0206  jal         func_3C0818
label_3bff9c:
    if (ctx->pc == 0x3BFF9Cu) {
        ctx->pc = 0x3BFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFF98u;
        // 0x3bff9c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFFA0u;
        goto label_3bffa0;
    }
    ctx->pc = 0x3BFF98u;
    SET_GPR_U32(ctx, 31, 0x3BFFA0u);
    ctx->pc = 0x3BFF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BFF98u;
    // 0x3bff9c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0818u, 0x3BFF98u, 0x3BFFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BFFA0u;
label_3bffa0:
    // 0x3bffa0: 0x1000002a  b           . + 4 + (0x2A << 2)
label_3bffa4:
    if (ctx->pc == 0x3BFFA4u) {
        ctx->pc = 0x3BFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFA0u;
        // 0x3bffa4: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFFA8u;
        goto label_3bffa8;
    }
    ctx->pc = 0x3BFFA0u;
    {
        const bool branch_taken_0x3bffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFA0u;
        // 0x3bffa4: 0xafa20268  sw          $v0, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffa0) {
            ctx->pc = 0x3C004Cu;
            goto label_3c004c;
        }
    }
    ctx->pc = 0x3BFFA8u;
label_3bffa8:
    // 0x3bffa8: 0x36730020  ori         $s3, $s3, 0x20
    ctx->pc = 0x3bffa8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
label_3bffac:
    // 0x3bffac: 0x10000027  b           . + 4 + (0x27 << 2)
label_3bffb0:
    if (ctx->pc == 0x3BFFB0u) {
        ctx->pc = 0x3BFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFACu;
        // 0x3bffb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFFB4u;
        goto label_3bffb4;
    }
    ctx->pc = 0x3BFFACu;
    {
        const bool branch_taken_0x3bffac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFACu;
        // 0x3bffb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffac) {
            ctx->pc = 0x3C004Cu;
            goto label_3c004c;
        }
    }
    ctx->pc = 0x3BFFB4u;
label_3bffb4:
    // 0x3bffb4: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3bffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3bffb8:
    // 0x3bffb8: 0x36730110  ori         $s3, $s3, 0x110
    ctx->pc = 0x3bffb8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)272);
label_3bffbc:
    // 0x3bffbc: 0x244229f0  addiu       $v0, $v0, 0x29F0
    ctx->pc = 0x3bffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10736));
label_3bffc0:
    // 0x3bffc0: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3bffc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3bffc4:
    // 0x3bffc4: 0xafa20270  sw          $v0, 0x270($sp)
    ctx->pc = 0x3bffc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 2));
label_3bffc8:
    // 0x3bffc8: 0x10000020  b           . + 4 + (0x20 << 2)
label_3bffcc:
    if (ctx->pc == 0x3BFFCCu) {
        ctx->pc = 0x3BFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFC8u;
        // 0x3bffcc: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFFD0u;
        goto label_3bffd0;
    }
    ctx->pc = 0x3BFFC8u;
    {
        const bool branch_taken_0x3bffc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFC8u;
        // 0x3bffcc: 0x241e0010  addiu       $fp, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffc8) {
            ctx->pc = 0x3C004Cu;
            goto label_3c004c;
        }
    }
    ctx->pc = 0x3BFFD0u;
label_3bffd0:
    // 0x3bffd0: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x3bffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3bffd4:
    // 0x3bffd4: 0x1440ff65  bnez        $v0, . + 4 + (-0x9B << 2)
label_3bffd8:
    if (ctx->pc == 0x3BFFD8u) {
        ctx->pc = 0x3BFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFD4u;
        // 0x3bffd8: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFFDCu;
        goto label_3bffdc;
    }
    ctx->pc = 0x3BFFD4u;
    {
        const bool branch_taken_0x3bffd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFD4u;
        // 0x3bffd8: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffd4) {
            ctx->pc = 0x3BFD6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd6c;
        }
    }
    ctx->pc = 0x3BFFDCu;
label_3bffdc:
    // 0x3bffdc: 0x32620004  andi        $v0, $s3, 0x4
    ctx->pc = 0x3bffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
label_3bffe0:
    // 0x3bffe0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3bffe4:
    if (ctx->pc == 0x3BFFE4u) {
        ctx->pc = 0x3BFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFE0u;
        // 0x3bffe4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFFE8u;
        goto label_3bffe8;
    }
    ctx->pc = 0x3BFFE0u;
    {
        const bool branch_taken_0x3bffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFE0u;
        // 0x3bffe4: 0x32620001  andi        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bffe0) {
            ctx->pc = 0x3BFFF8u;
            goto label_3bfff8;
        }
    }
    ctx->pc = 0x3BFFE8u;
label_3bffe8:
    // 0x3bffe8: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3bffe8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3bffec:
    // 0x3bffec: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3bffecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3bfff0:
    // 0x3bfff0: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
label_3bfff4:
    if (ctx->pc == 0x3BFFF4u) {
        ctx->pc = 0x3BFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFF0u;
        // 0x3bfff4: 0xa4970000  sh          $s7, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3BFFF8u;
        goto label_3bfff8;
    }
    ctx->pc = 0x3BFFF0u;
    {
        const bool branch_taken_0x3bfff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFF0u;
        // 0x3bfff4: 0xa4970000  sh          $s7, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfff0) {
            ctx->pc = 0x3BFD6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd6c;
        }
    }
    ctx->pc = 0x3BFFF8u;
label_3bfff8:
    // 0x3bfff8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3bfffc:
    if (ctx->pc == 0x3BFFFCu) {
        ctx->pc = 0x3BFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFF8u;
        // 0x3bfffc: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0000u;
        goto label_3c0000;
    }
    ctx->pc = 0x3BFFF8u;
    {
        const bool branch_taken_0x3bfff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BFFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BFFF8u;
        // 0x3bfffc: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3bfff8) {
            ctx->pc = 0x3C000Cu;
            goto label_3c000c;
        }
    }
    ctx->pc = 0x3C0000u;
label_3c0000:
    // 0x3c0000: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x3c0000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c0004:
    // 0x3c0004: 0x1000ff58  b           . + 4 + (-0xA8 << 2)
label_3c0008:
    if (ctx->pc == 0x3C0008u) {
        ctx->pc = 0x3C0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0004u;
        // 0x3c0008: 0xfc570000  sd          $s7, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C000Cu;
        goto label_3c000c;
    }
    ctx->pc = 0x3C0004u;
    {
        const bool branch_taken_0x3c0004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0004u;
        // 0x3c0008: 0xfc570000  sd          $s7, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0004) {
            ctx->pc = 0x3BFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd68;
        }
    }
    ctx->pc = 0x3C000Cu;
label_3c000c:
    // 0x3c000c: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3c000cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c0010:
    // 0x3c0010: 0x1000ff55  b           . + 4 + (-0xAB << 2)
label_3c0014:
    if (ctx->pc == 0x3C0014u) {
        ctx->pc = 0x3C0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0010u;
        // 0x3c0014: 0xac970000  sw          $s7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0018u;
        goto label_3c0018;
    }
    ctx->pc = 0x3C0010u;
    {
        const bool branch_taken_0x3c0010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0010u;
        // 0x3c0014: 0xac970000  sw          $s7, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0010) {
            ctx->pc = 0x3BFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd68;
        }
    }
    ctx->pc = 0x3C0018u;
label_3c0018:
    // 0x3c0018: 0x100001f3  b           . + 4 + (0x1F3 << 2)
label_3c001c:
    if (ctx->pc == 0x3C001Cu) {
        ctx->pc = 0x3C001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0018u;
        // 0x3c001c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0020u;
        goto label_3c0020;
    }
    ctx->pc = 0x3C0018u;
    {
        const bool branch_taken_0x3c0018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C001Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0018u;
        // 0x3c001c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0018) {
            ctx->pc = 0x3C07E8u;
            goto label_3c07e8;
        }
    }
    ctx->pc = 0x3C0020u;
label_3c0020:
    // 0x3c0020: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c0020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3c0024:
    // 0x3c0024: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x3c0024u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_3c0028:
    // 0x3c0028: 0x24635948  addiu       $v1, $v1, 0x5948
    ctx->pc = 0x3c0028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22856));
label_3c002c:
    // 0x3c002c: 0x24420c11  addiu       $v0, $v0, 0xC11
    ctx->pc = 0x3c002cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
label_3c0030:
    // 0x3c0030: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3c0030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3c0034:
    // 0x3c0034: 0xafa30270  sw          $v1, 0x270($sp)
    ctx->pc = 0x3c0034u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 3));
label_3c0038:
    // 0x3c0038: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3c0038u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3c003c:
    // 0x3c003c: 0x241e000a  addiu       $fp, $zero, 0xA
    ctx->pc = 0x3c003cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_3c0040:
    // 0x3c0040: 0x24100003  addiu       $s0, $zero, 0x3
    ctx->pc = 0x3c0040u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3c0044:
    // 0x3c0044: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3c0044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_3c0048:
    // 0x3c0048: 0x2639825  or          $s3, $s3, $v1
    ctx->pc = 0x3c0048u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 3));
label_3c004c:
    // 0x3c004c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c004cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c0050:
    // 0x3c0050: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_3c0054:
    if (ctx->pc == 0x3C0054u) {
        ctx->pc = 0x3C0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0050u;
        // 0x3c0054: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0058u;
        goto label_3c0058;
    }
    ctx->pc = 0x3C0050u;
    {
        const bool branch_taken_0x3c0050 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x3C0054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0050u;
        // 0x3c0054: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0050) {
            ctx->pc = 0x3C006Cu;
            goto label_3c006c;
        }
    }
    ctx->pc = 0x3C0058u;
label_3c0058:
    // 0x3c0058: 0xc0efe76  jal         func_3BF9D8
label_3c005c:
    if (ctx->pc == 0x3C005Cu) {
        ctx->pc = 0x3C005Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0058u;
        // 0x3c005c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0060u;
        goto label_3c0060;
    }
    ctx->pc = 0x3C0058u;
    SET_GPR_U32(ctx, 31, 0x3C0060u);
    ctx->pc = 0x3C005Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0058u;
    // 0x3c005c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3C0058u, 0x3C0060u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0060u;
label_3c0060:
    // 0x3c0060: 0x144001dd  bnez        $v0, . + 4 + (0x1DD << 2)
label_3c0064:
    if (ctx->pc == 0x3C0064u) {
        ctx->pc = 0x3C0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0060u;
        // 0x3c0064: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0068u;
        goto label_3c0068;
    }
    ctx->pc = 0x3C0060u;
    {
        const bool branch_taken_0x3c0060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0060u;
        // 0x3c0064: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0060) {
            ctx->pc = 0x3C07D8u;
            goto label_3c07d8;
        }
    }
    ctx->pc = 0x3C0068u;
label_3c0068:
    // 0x3c0068: 0x32620020  andi        $v0, $s3, 0x20
    ctx->pc = 0x3c0068u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
label_3c006c:
    // 0x3c006c: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_3c0070:
    if (ctx->pc == 0x3C0070u) {
        ctx->pc = 0x3C0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C006Cu;
        // 0x3c0070: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0074u;
        goto label_3c0074;
    }
    ctx->pc = 0x3C006Cu;
    {
        const bool branch_taken_0x3c006c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C006Cu;
        // 0x3c0070: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c006c) {
            ctx->pc = 0x3C00ECu;
            goto label_3c00ec;
        }
    }
    ctx->pc = 0x3C0074u;
label_3c0074:
    // 0x3c0074: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3c0074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c0078:
    // 0x3c0078: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c0078u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3c007c:
    // 0x3c007c: 0x24450c11  addiu       $a1, $v0, 0xC11
    ctx->pc = 0x3c007cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
label_3c0080:
    // 0x3c0080: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x3c0080u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c0084:
    // 0x3c0084: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3c0084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3c0088:
    // 0x3c0088: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x3c0088u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c008c:
    // 0x3c008c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3c008cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_3c0090:
    // 0x3c0090: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3c0094:
    if (ctx->pc == 0x3C0094u) {
        ctx->pc = 0x3C0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0090u;
        // 0x3c0094: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0098u;
        goto label_3c0098;
    }
    ctx->pc = 0x3C0090u;
    {
        const bool branch_taken_0x3c0090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0090u;
        // 0x3c0094: 0x2e020005  sltiu       $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0090) {
            ctx->pc = 0x3C00ECu;
            goto label_3c00ec;
        }
    }
    ctx->pc = 0x3C0098u;
label_3c0098:
    // 0x3c0098: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3c0098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3c009c:
    // 0x3c009c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c009cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c00a0:
    // 0x3c00a0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x3c00a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_3c00a4:
    // 0x3c00a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c00a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c00a8:
    // 0x3c00a8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_3c00ac:
    if (ctx->pc == 0x3C00ACu) {
        ctx->pc = 0x3C00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00A8u;
        // 0x3c00ac: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00B0u;
        goto label_3c00b0;
    }
    ctx->pc = 0x3C00A8u;
    {
        const bool branch_taken_0x3c00a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C00ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00A8u;
        // 0x3c00ac: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c00a8) {
            ctx->pc = 0x3C00BCu;
            goto label_3c00bc;
        }
    }
    ctx->pc = 0x3C00B0u;
label_3c00b0:
    // 0x3c00b0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3c00b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c00b4:
    // 0x3c00b4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c00b8:
    if (ctx->pc == 0x3C00B8u) {
        ctx->pc = 0x3C00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00B4u;
        // 0x3c00b8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00BCu;
        goto label_3c00bc;
    }
    ctx->pc = 0x3C00B4u;
    {
        const bool branch_taken_0x3c00b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C00B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00B4u;
        // 0x3c00b8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c00b4) {
            ctx->pc = 0x3C00CCu;
            goto label_3c00cc;
        }
    }
    ctx->pc = 0x3C00BCu;
label_3c00bc:
    // 0x3c00bc: 0xc0efe76  jal         func_3BF9D8
label_3c00c0:
    if (ctx->pc == 0x3C00C0u) {
        ctx->pc = 0x3C00C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00BCu;
        // 0x3c00c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00C4u;
        goto label_3c00c4;
    }
    ctx->pc = 0x3C00BCu;
    SET_GPR_U32(ctx, 31, 0x3C00C4u);
    ctx->pc = 0x3C00C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C00BCu;
    // 0x3c00c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3C00BCu, 0x3C00C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C00C4u;
label_3c00c4:
    // 0x3c00c4: 0x144001c4  bnez        $v0, . + 4 + (0x1C4 << 2)
label_3c00c8:
    if (ctx->pc == 0x3C00C8u) {
        ctx->pc = 0x3C00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00C4u;
        // 0x3c00c8: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00CCu;
        goto label_3c00cc;
    }
    ctx->pc = 0x3C00C4u;
    {
        const bool branch_taken_0x3c00c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C00C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00C4u;
        // 0x3c00c8: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c00c4) {
            ctx->pc = 0x3C07D8u;
            goto label_3c07d8;
        }
    }
    ctx->pc = 0x3C00CCu;
label_3c00cc:
    // 0x3c00cc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3c00ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c00d0:
    // 0x3c00d0: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3c00d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c00d4:
    // 0x3c00d4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c00d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3c00d8:
    // 0x3c00d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3c00d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3c00dc:
    // 0x3c00dc: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3c00dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3c00e0:
    // 0x3c00e0: 0x5460ffef  bnel        $v1, $zero, . + 4 + (-0x11 << 2)
label_3c00e4:
    if (ctx->pc == 0x3C00E4u) {
        ctx->pc = 0x3C00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00E0u;
        // 0x3c00e4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00E8u;
        goto label_3c00e8;
    }
    ctx->pc = 0x3C00E0u;
    {
        const bool branch_taken_0x3c00e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c00e0) {
            ctx->pc = 0x3C00E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C00E0u;
            // 0x3c00e4: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C00A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c00a0;
        }
    }
    ctx->pc = 0x3C00E8u;
label_3c00e8:
    // 0x3c00e8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x3c00e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_3c00ec:
    // 0x3c00ec: 0x1040ff1f  beqz        $v0, . + 4 + (-0xE1 << 2)
label_3c00f0:
    if (ctx->pc == 0x3C00F0u) {
        ctx->pc = 0x3C00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00ECu;
        // 0x3c00f0: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C00F4u;
        goto label_3c00f4;
    }
    ctx->pc = 0x3C00ECu;
    {
        const bool branch_taken_0x3c00ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C00F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C00ECu;
        // 0x3c00f0: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c00ec) {
            ctx->pc = 0x3BFD6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd6c;
        }
    }
    ctx->pc = 0x3C00F4u;
label_3c00f4:
    // 0x3c00f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c00f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3c00f8:
    // 0x3c00f8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x3c00f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_3c00fc:
    // 0x3c00fc: 0x24420f50  addiu       $v0, $v0, 0xF50
    ctx->pc = 0x3c00fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3920));
label_3c0100:
    // 0x3c0100: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c0100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c0104:
    // 0x3c0104: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c0104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c0108:
    // 0x3c0108: 0x800008  jr          $a0
label_3c010c:
    if (ctx->pc == 0x3C010Cu) {
        ctx->pc = 0x3C0110u;
        goto label_3c0110;
    }
    ctx->pc = 0x3C0108u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C0110u: goto label_3c0110;
            case 0x3C01B4u: goto label_3c01b4;
            case 0x3C02C0u: goto label_3c02c0;
            case 0x3C03CCu: goto label_3c03cc;
            case 0x3C0604u: goto label_3c0604;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0108u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C0110u;
label_3c0110:
    // 0x3c0110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3c0110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0114:
    // 0x3c0114: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x3c0114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3c0118:
    // 0x3c0118: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
label_3c011c:
    if (ctx->pc == 0x3C011Cu) {
        ctx->pc = 0x3C011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0118u;
        // 0x3c011c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0120u;
        goto label_3c0120;
    }
    ctx->pc = 0x3C0118u;
    {
        const bool branch_taken_0x3c0118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0118u;
        // 0x3c011c: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0118) {
            ctx->pc = 0x3C0184u;
            goto label_3c0184;
        }
    }
    ctx->pc = 0x3C0120u;
label_3c0120:
    // 0x3c0120: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3c0120u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0124:
    // 0x3c0124: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x3c0124u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c0128:
    // 0x3c0128: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x3c0128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_3c012c:
    // 0x3c012c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3c0130:
    if (ctx->pc == 0x3C0130u) {
        ctx->pc = 0x3C0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C012Cu;
        // 0x3c0130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0134u;
        goto label_3c0134;
    }
    ctx->pc = 0x3C012Cu;
    {
        const bool branch_taken_0x3c012c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C012Cu;
        // 0x3c0130: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c012c) {
            ctx->pc = 0x3C0164u;
            goto label_3c0164;
        }
    }
    ctx->pc = 0x3C0134u;
label_3c0134:
    // 0x3c0134: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c0134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c0138:
    // 0x3c0138: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x3c0138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3c013c:
    // 0x3c013c: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x3c013cu;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_3c0140:
    // 0x3c0140: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x3c0140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3c0144:
    // 0x3c0144: 0xc0efe76  jal         func_3BF9D8
label_3c0148:
    if (ctx->pc == 0x3C0148u) {
        ctx->pc = 0x3C0148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0144u;
        // 0x3c0148: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C014Cu;
        goto label_3c014c;
    }
    ctx->pc = 0x3C0144u;
    SET_GPR_U32(ctx, 31, 0x3C014Cu);
    ctx->pc = 0x3C0148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0144u;
    // 0x3c0148: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3C0144u, 0x3C014Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C014Cu;
label_3c014c:
    // 0x3c014c: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_3c0150:
    if (ctx->pc == 0x3C0150u) {
        ctx->pc = 0x3C0150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C014Cu;
        // 0x3c0150: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0154u;
        goto label_3c0154;
    }
    ctx->pc = 0x3C014Cu;
    {
        const bool branch_taken_0x3c014c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c014c) {
            ctx->pc = 0x3C0150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C014Cu;
            // 0x3c0150: 0x8e500004  lw          $s0, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0128;
        }
    }
    ctx->pc = 0x3C0154u;
label_3c0154:
    // 0x3c0154: 0x1220019f  beqz        $s1, . + 4 + (0x19F << 2)
label_3c0158:
    if (ctx->pc == 0x3C0158u) {
        ctx->pc = 0x3C0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0154u;
        // 0x3c0158: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C015Cu;
        goto label_3c015c;
    }
    ctx->pc = 0x3C0154u;
    {
        const bool branch_taken_0x3c0154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0154u;
        // 0x3c0158: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0154) {
            ctx->pc = 0x3C07D4u;
            goto label_3c07d4;
        }
    }
    ctx->pc = 0x3C015Cu;
label_3c015c:
    // 0x3c015c: 0x1000ff03  b           . + 4 + (-0xFD << 2)
label_3c0160:
    if (ctx->pc == 0x3C0160u) {
        ctx->pc = 0x3C0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C015Cu;
        // 0x3c0160: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0164u;
        goto label_3c0164;
    }
    ctx->pc = 0x3C015Cu;
    {
        const bool branch_taken_0x3c015c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C015Cu;
        // 0x3c0160: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c015c) {
            ctx->pc = 0x3BFD6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd6c;
        }
    }
    ctx->pc = 0x3C0164u;
label_3c0164:
    // 0x3c0164: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3c0164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c0168:
    // 0x3c0168: 0x2141023  subu        $v0, $s0, $s4
    ctx->pc = 0x3c0168u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_3c016c:
    // 0x3c016c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3c016cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3c0170:
    // 0x3c0170: 0x2348821  addu        $s1, $s1, $s4
    ctx->pc = 0x3c0170u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
label_3c0174:
    // 0x3c0174: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x3c0174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_3c0178:
    // 0x3c0178: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x3c0178u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_3c017c:
    // 0x3c017c: 0x1000fefa  b           . + 4 + (-0x106 << 2)
label_3c0180:
    if (ctx->pc == 0x3C0180u) {
        ctx->pc = 0x3C0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C017Cu;
        // 0x3c0180: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0184u;
        goto label_3c0184;
    }
    ctx->pc = 0x3C017Cu;
    {
        const bool branch_taken_0x3c017c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C017Cu;
        // 0x3c0180: 0x2f1b821  addu        $s7, $s7, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c017c) {
            ctx->pc = 0x3BFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd68;
        }
    }
    ctx->pc = 0x3C0184u;
label_3c0184:
    // 0x3c0184: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3c0184u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3c0188:
    // 0x3c0188: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3c0188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3c018c:
    // 0x3c018c: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3c018cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c0190:
    // 0x3c0190: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3c0190u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3c0194:
    // 0x3c0194: 0xc0efde0  jal         func_3BF780
label_3c0198:
    if (ctx->pc == 0x3C0198u) {
        ctx->pc = 0x3C0198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0194u;
        // 0x3c0198: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C019Cu;
        goto label_3c019c;
    }
    ctx->pc = 0x3C0194u;
    SET_GPR_U32(ctx, 31, 0x3C019Cu);
    ctx->pc = 0x3C0198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0194u;
    // 0x3c0198: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF780u, 0x3C0194u, 0x3C019Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C019Cu;
label_3c019c:
    // 0x3c019c: 0x1040018d  beqz        $v0, . + 4 + (0x18D << 2)
label_3c01a0:
    if (ctx->pc == 0x3C01A0u) {
        ctx->pc = 0x3C01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C019Cu;
        // 0x3c01a0: 0x8fa4026c  lw          $a0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C01A4u;
        goto label_3c01a4;
    }
    ctx->pc = 0x3C019Cu;
    {
        const bool branch_taken_0x3c019c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C019Cu;
        // 0x3c01a0: 0x8fa4026c  lw          $a0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c019c) {
            ctx->pc = 0x3C07D4u;
            goto label_3c07d4;
        }
    }
    ctx->pc = 0x3C01A4u;
label_3c01a4:
    // 0x3c01a4: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x3c01a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_3c01a8:
    // 0x3c01a8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c01a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c01ac:
    // 0x3c01ac: 0x1000feee  b           . + 4 + (-0x112 << 2)
label_3c01b0:
    if (ctx->pc == 0x3C01B0u) {
        ctx->pc = 0x3C01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01ACu;
        // 0x3c01b0: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C01B4u;
        goto label_3c01b4;
    }
    ctx->pc = 0x3C01ACu;
    {
        const bool branch_taken_0x3c01ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01ACu;
        // 0x3c01b0: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c01ac) {
            ctx->pc = 0x3BFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd68;
        }
    }
    ctx->pc = 0x3C01B4u;
label_3c01b4:
    // 0x3c01b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c01b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c01b8:
    // 0x3c01b8: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x3c01b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3c01bc:
    // 0x3c01bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c01bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c01c0:
    // 0x3c01c0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3c01c4:
    if (ctx->pc == 0x3C01C4u) {
        ctx->pc = 0x3C01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01C0u;
        // 0x3c01c4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C01C8u;
        goto label_3c01c8;
    }
    ctx->pc = 0x3C01C0u;
    {
        const bool branch_taken_0x3c01c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C01C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01C0u;
        // 0x3c01c4: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c01c0) {
            ctx->pc = 0x3C0230u;
            goto label_3c0230;
        }
    }
    ctx->pc = 0x3C01C8u;
label_3c01c8:
    // 0x3c01c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c01c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c01cc:
    // 0x3c01cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3c01ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c01d0:
    // 0x3c01d0: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3c01d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c01d4:
    // 0x3c01d4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3c01d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3c01d8:
    // 0x3c01d8: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x3c01d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c01dc:
    // 0x3c01dc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_3c01e0:
    if (ctx->pc == 0x3C01E0u) {
        ctx->pc = 0x3C01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01DCu;
        // 0x3c01e0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C01E4u;
        goto label_3c01e4;
    }
    ctx->pc = 0x3C01DCu;
    {
        const bool branch_taken_0x3c01dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C01E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01DCu;
        // 0x3c01e0: 0x24a20001  addiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c01dc) {
            ctx->pc = 0x3C0220u;
            goto label_3c0220;
        }
    }
    ctx->pc = 0x3C01E4u;
label_3c01e4:
    // 0x3c01e4: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3c01e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c01e8:
    // 0x3c01e8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3c01e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3c01ec:
    // 0x3c01ec: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c01ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c01f0:
    // 0x3c01f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c01f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3c01f4:
    // 0x3c01f4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c01f4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c01f8:
    // 0x3c01f8: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
label_3c01fc:
    if (ctx->pc == 0x3C01FCu) {
        ctx->pc = 0x3C01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01F8u;
        // 0x3c01fc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0200u;
        goto label_3c0200;
    }
    ctx->pc = 0x3C01F8u;
    {
        const bool branch_taken_0x3c01f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C01F8u;
        // 0x3c01fc: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c01f8) {
            ctx->pc = 0x3C0220u;
            goto label_3c0220;
        }
    }
    ctx->pc = 0x3C0200u;
label_3c0200:
    // 0x3c0200: 0x5c60fff3  bgtzl       $v1, . + 4 + (-0xD << 2)
label_3c0204:
    if (ctx->pc == 0x3C0204u) {
        ctx->pc = 0x3C0204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0200u;
        // 0x3c0204: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0208u;
        goto label_3c0208;
    }
    ctx->pc = 0x3C0200u;
    {
        const bool branch_taken_0x3c0200 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3c0200) {
            ctx->pc = 0x3C0204u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0200u;
            // 0x3c0204: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C01D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c01d0;
        }
    }
    ctx->pc = 0x3C0208u;
label_3c0208:
    // 0x3c0208: 0xc0efe76  jal         func_3BF9D8
label_3c020c:
    if (ctx->pc == 0x3C020Cu) {
        ctx->pc = 0x3C020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0208u;
        // 0x3c020c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0210u;
        goto label_3c0210;
    }
    ctx->pc = 0x3C0208u;
    SET_GPR_U32(ctx, 31, 0x3C0210u);
    ctx->pc = 0x3C020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0208u;
    // 0x3c020c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3C0208u, 0x3C0210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0210u;
label_3c0210:
    // 0x3c0210: 0x5040ffef  beql        $v0, $zero, . + 4 + (-0x11 << 2)
label_3c0214:
    if (ctx->pc == 0x3C0214u) {
        ctx->pc = 0x3C0214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0210u;
        // 0x3c0214: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0218u;
        goto label_3c0218;
    }
    ctx->pc = 0x3C0210u;
    {
        const bool branch_taken_0x3c0210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0210) {
            ctx->pc = 0x3C0214u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0210u;
            // 0x3c0214: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C01D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c01d0;
        }
    }
    ctx->pc = 0x3C0218u;
label_3c0218:
    // 0x3c0218: 0x1200016f  beqz        $s0, . + 4 + (0x16F << 2)
label_3c021c:
    if (ctx->pc == 0x3C021Cu) {
        ctx->pc = 0x3C021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0218u;
        // 0x3c021c: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0220u;
        goto label_3c0220;
    }
    ctx->pc = 0x3C0218u;
    {
        const bool branch_taken_0x3c0218 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0218u;
        // 0x3c021c: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0218) {
            ctx->pc = 0x3C07D8u;
            goto label_3c07d8;
        }
    }
    ctx->pc = 0x3C0220u;
label_3c0220:
    // 0x3c0220: 0x12000170  beqz        $s0, . + 4 + (0x170 << 2)
label_3c0224:
    if (ctx->pc == 0x3C0224u) {
        ctx->pc = 0x3C0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0220u;
        // 0x3c0224: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0228u;
        goto label_3c0228;
    }
    ctx->pc = 0x3C0220u;
    {
        const bool branch_taken_0x3c0220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0220u;
        // 0x3c0224: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0220) {
            ctx->pc = 0x3C07E4u;
            goto label_3c07e4;
        }
    }
    ctx->pc = 0x3C0228u;
label_3c0228:
    // 0x3c0228: 0x1000fed0  b           . + 4 + (-0x130 << 2)
label_3c022c:
    if (ctx->pc == 0x3C022Cu) {
        ctx->pc = 0x3C022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0228u;
        // 0x3c022c: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0230u;
        goto label_3c0230;
    }
    ctx->pc = 0x3C0228u;
    {
        const bool branch_taken_0x3c0228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0228u;
        // 0x3c022c: 0x3c030043  lui         $v1, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0228) {
            ctx->pc = 0x3BFD6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd6c;
        }
    }
    ctx->pc = 0x3C0230u;
label_3c0230:
    // 0x3c0230: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3c0230u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3c0234:
    // 0x3c0234: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x3c0234u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c0238:
    // 0x3c0238: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3c0238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c023c:
    // 0x3c023c: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3c023cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c0240:
    // 0x3c0240: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3c0240u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c0244:
    // 0x3c0244: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3c0244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
label_3c0248:
    // 0x3c0248: 0x80640000  lb          $a0, 0x0($v1)
    ctx->pc = 0x3c0248u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3c024c:
    // 0x3c024c: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
label_3c0250:
    if (ctx->pc == 0x3C0250u) {
        ctx->pc = 0x3C0250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C024Cu;
        // 0x3c0250: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0254u;
        goto label_3c0254;
    }
    ctx->pc = 0x3C024Cu;
    {
        const bool branch_taken_0x3c024c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c024c) {
            ctx->pc = 0x3C0250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C024Cu;
            // 0x3c0250: 0x2308023  subu        $s0, $s1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C02A4u;
            goto label_3c02a4;
        }
    }
    ctx->pc = 0x3C0254u;
label_3c0254:
    // 0x3c0254: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c0254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c0258:
    // 0x3c0258: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x3c0258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3c025c:
    // 0x3c025c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c025cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c0260:
    // 0x3c0260: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c0260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c0264:
    // 0x3c0264: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3c0264u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3c0268:
    // 0x3c0268: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3c0268u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c026c:
    // 0x3c026c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3c026cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c0270:
    // 0x3c0270: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3c0270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_3c0274:
    // 0x3c0274: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
label_3c0278:
    if (ctx->pc == 0x3C0278u) {
        ctx->pc = 0x3C0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0274u;
        // 0x3c0278: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C027Cu;
        goto label_3c027c;
    }
    ctx->pc = 0x3C0274u;
    {
        const bool branch_taken_0x3c0274 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0274u;
        // 0x3c0278: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0274) {
            ctx->pc = 0x3C02A0u;
            goto label_3c02a0;
        }
    }
    ctx->pc = 0x3C027Cu;
label_3c027c:
    // 0x3c027c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c0280:
    // 0x3c0280: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_3c0284:
    if (ctx->pc == 0x3C0284u) {
        ctx->pc = 0x3C0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0280u;
        // 0x3c0284: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0288u;
        goto label_3c0288;
    }
    ctx->pc = 0x3C0280u;
    {
        const bool branch_taken_0x3c0280 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c0280) {
            ctx->pc = 0x3C0284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0280u;
            // 0x3c0284: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0240;
        }
    }
    ctx->pc = 0x3C0288u;
label_3c0288:
    // 0x3c0288: 0xc0efe76  jal         func_3BF9D8
label_3c028c:
    if (ctx->pc == 0x3C028Cu) {
        ctx->pc = 0x3C028Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0288u;
        // 0x3c028c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0290u;
        goto label_3c0290;
    }
    ctx->pc = 0x3C0288u;
    SET_GPR_U32(ctx, 31, 0x3C0290u);
    ctx->pc = 0x3C028Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0288u;
    // 0x3c028c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3C0288u, 0x3C0290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0290u;
label_3c0290:
    // 0x3c0290: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_3c0294:
    if (ctx->pc == 0x3C0294u) {
        ctx->pc = 0x3C0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0290u;
        // 0x3c0294: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0298u;
        goto label_3c0298;
    }
    ctx->pc = 0x3C0290u;
    {
        const bool branch_taken_0x3c0290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0290) {
            ctx->pc = 0x3C0294u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0290u;
            // 0x3c0294: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0240u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0240;
        }
    }
    ctx->pc = 0x3C0298u;
label_3c0298:
    // 0x3c0298: 0x1230014f  beq         $s1, $s0, . + 4 + (0x14F << 2)
label_3c029c:
    if (ctx->pc == 0x3C029Cu) {
        ctx->pc = 0x3C029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0298u;
        // 0x3c029c: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C02A0u;
        goto label_3c02a0;
    }
    ctx->pc = 0x3C0298u;
    {
        const bool branch_taken_0x3c0298 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x3C029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0298u;
        // 0x3c029c: 0x8fa3026c  lw          $v1, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0298) {
            ctx->pc = 0x3C07D8u;
            goto label_3c07d8;
        }
    }
    ctx->pc = 0x3C02A0u;
label_3c02a0:
    // 0x3c02a0: 0x2308023  subu        $s0, $s1, $s0
    ctx->pc = 0x3c02a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3c02a4:
    // 0x3c02a4: 0x12000150  beqz        $s0, . + 4 + (0x150 << 2)
label_3c02a8:
    if (ctx->pc == 0x3C02A8u) {
        ctx->pc = 0x3C02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02A4u;
        // 0x3c02a8: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C02ACu;
        goto label_3c02ac;
    }
    ctx->pc = 0x3C02A4u;
    {
        const bool branch_taken_0x3c02a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02A4u;
        // 0x3c02a8: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c02a4) {
            ctx->pc = 0x3C07E8u;
            goto label_3c07e8;
        }
    }
    ctx->pc = 0x3C02ACu;
label_3c02ac:
    // 0x3c02ac: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3c02acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3c02b0:
    // 0x3c02b0: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x3c02b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3c02b4:
    // 0x3c02b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c02b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c02b8:
    // 0x3c02b8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_3c02bc:
    if (ctx->pc == 0x3C02BCu) {
        ctx->pc = 0x3C02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02B8u;
        // 0x3c02bc: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C02C0u;
        goto label_3c02c0;
    }
    ctx->pc = 0x3C02B8u;
    {
        const bool branch_taken_0x3c02b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C02BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02B8u;
        // 0x3c02bc: 0xafa2026c  sw          $v0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c02b8) {
            ctx->pc = 0x3C0334u;
            goto label_3c0334;
        }
    }
    ctx->pc = 0x3C02C0u;
label_3c02c0:
    // 0x3c02c0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3c02c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3c02c4:
    // 0x3c02c4: 0x32630008  andi        $v1, $s3, 0x8
    ctx->pc = 0x3c02c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3c02c8:
    // 0x3c02c8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3c02c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3c02cc:
    // 0x3c02cc: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_3c02d0:
    if (ctx->pc == 0x3C02D0u) {
        ctx->pc = 0x3C02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02CCu;
        // 0x3c02d0: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C02D4u;
        goto label_3c02d4;
    }
    ctx->pc = 0x3C02CCu;
    {
        const bool branch_taken_0x3c02cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C02D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02CCu;
        // 0x3c02d0: 0x54a00a  movz        $s4, $v0, $s4 (Delay Slot)
        if (GPR_U64(ctx, 20) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c02cc) {
            ctx->pc = 0x3C033Cu;
            goto label_3c033c;
        }
    }
    ctx->pc = 0x3C02D4u;
label_3c02d4:
    // 0x3c02d4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c02d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3c02d8:
    // 0x3c02d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3c02d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c02dc:
    // 0x3c02dc: 0x24510c11  addiu       $s1, $v0, 0xC11
    ctx->pc = 0x3c02dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
label_3c02e0:
    // 0x3c02e0: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3c02e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c02e4:
    // 0x3c02e4: 0x0  nop
    ctx->pc = 0x3c02e4u;
    // NOP
label_3c02e8:
    // 0x3c02e8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x3c02e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_3c02ec:
    // 0x3c02ec: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x3c02ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_3c02f0:
    // 0x3c02f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3c02f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3c02f4:
    // 0x3c02f4: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3c02f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3c02f8:
    // 0x3c02f8: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
label_3c02fc:
    if (ctx->pc == 0x3C02FCu) {
        ctx->pc = 0x3C02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02F8u;
        // 0x3c02fc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0300u;
        goto label_3c0300;
    }
    ctx->pc = 0x3C02F8u;
    {
        const bool branch_taken_0x3c02f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C02FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C02F8u;
        // 0x3c02fc: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c02f8) {
            ctx->pc = 0x3C0334u;
            goto label_3c0334;
        }
    }
    ctx->pc = 0x3C0300u;
label_3c0300:
    // 0x3c0300: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3c0300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c0304:
    // 0x3c0304: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x3c0304u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_3c0308:
    // 0x3c0308: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3c0308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3c030c:
    // 0x3c030c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x3c030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3c0310:
    // 0x3c0310: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c0310u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c0314:
    // 0x3c0314: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_3c0318:
    if (ctx->pc == 0x3C0318u) {
        ctx->pc = 0x3C0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0314u;
        // 0x3c0318: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C031Cu;
        goto label_3c031c;
    }
    ctx->pc = 0x3C0314u;
    {
        const bool branch_taken_0x3c0314 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0314u;
        // 0x3c0318: 0xae430004  sw          $v1, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0314) {
            ctx->pc = 0x3C0334u;
            goto label_3c0334;
        }
    }
    ctx->pc = 0x3C031Cu;
label_3c031c:
    // 0x3c031c: 0x5c60fff2  bgtzl       $v1, . + 4 + (-0xE << 2)
label_3c0320:
    if (ctx->pc == 0x3C0320u) {
        ctx->pc = 0x3C0320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C031Cu;
        // 0x3c0320: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0324u;
        goto label_3c0324;
    }
    ctx->pc = 0x3C031Cu;
    {
        const bool branch_taken_0x3c031c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x3c031c) {
            ctx->pc = 0x3C0320u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C031Cu;
            // 0x3c0320: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C02E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c02e8;
        }
    }
    ctx->pc = 0x3C0324u;
label_3c0324:
    // 0x3c0324: 0xc0efe76  jal         func_3BF9D8
label_3c0328:
    if (ctx->pc == 0x3C0328u) {
        ctx->pc = 0x3C0328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0324u;
        // 0x3c0328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C032Cu;
        goto label_3c032c;
    }
    ctx->pc = 0x3C0324u;
    SET_GPR_U32(ctx, 31, 0x3C032Cu);
    ctx->pc = 0x3C0328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0324u;
    // 0x3c0328: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3C0324u, 0x3C032Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C032Cu;
label_3c032c:
    // 0x3c032c: 0x5040ffee  beql        $v0, $zero, . + 4 + (-0x12 << 2)
label_3c0330:
    if (ctx->pc == 0x3C0330u) {
        ctx->pc = 0x3C0330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C032Cu;
        // 0x3c0330: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0334u;
        goto label_3c0334;
    }
    ctx->pc = 0x3C032Cu;
    {
        const bool branch_taken_0x3c032c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c032c) {
            ctx->pc = 0x3C0330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C032Cu;
            // 0x3c0330: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C02E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c02e8;
        }
    }
    ctx->pc = 0x3C0334u;
label_3c0334:
    // 0x3c0334: 0x1000fe8c  b           . + 4 + (-0x174 << 2)
label_3c0338:
    if (ctx->pc == 0x3C0338u) {
        ctx->pc = 0x3C0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0334u;
        // 0x3c0338: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C033Cu;
        goto label_3c033c;
    }
    ctx->pc = 0x3C0334u;
    {
        const bool branch_taken_0x3c0334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0334u;
        // 0x3c0338: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0334) {
            ctx->pc = 0x3BFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd68;
        }
    }
    ctx->pc = 0x3C033Cu;
label_3c033c:
    // 0x3c033c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3c033cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3c0340:
    // 0x3c0340: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x3c0340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3c0344:
    // 0x3c0344: 0x8eb1fff8  lw          $s1, -0x8($s5)
    ctx->pc = 0x3c0344u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c0348:
    // 0x3c0348: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c0348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3c034c:
    // 0x3c034c: 0x24560c11  addiu       $s6, $v0, 0xC11
    ctx->pc = 0x3c034cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 3089));
label_3c0350:
    // 0x3c0350: 0x24730001  addiu       $s3, $v1, 0x1
    ctx->pc = 0x3c0350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_3c0354:
    // 0x3c0354: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3c0354u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3c0358:
    // 0x3c0358: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x3c0358u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c035c:
    // 0x3c035c: 0x0  nop
    ctx->pc = 0x3c035cu;
    // NOP
label_3c0360:
    // 0x3c0360: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x3c0360u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c0364:
    // 0x3c0364: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3c0364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3c0368:
    // 0x3c0368: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3c0368u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3c036c:
    // 0x3c036c: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x3c036cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
label_3c0370:
    // 0x3c0370: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_3c0374:
    if (ctx->pc == 0x3C0374u) {
        ctx->pc = 0x3C0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0370u;
        // 0x3c0374: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0378u;
        goto label_3c0378;
    }
    ctx->pc = 0x3C0370u;
    {
        const bool branch_taken_0x3c0370 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0370u;
        // 0x3c0374: 0x24a40001  addiu       $a0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0370) {
            ctx->pc = 0x3C03B8u;
            goto label_3c03b8;
        }
    }
    ctx->pc = 0x3C0378u;
label_3c0378:
    // 0x3c0378: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c0378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c037c:
    // 0x3c037c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c037cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c0380:
    // 0x3c0380: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c0380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c0384:
    // 0x3c0384: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x3c0384u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_3c0388:
    // 0x3c0388: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x3c0388u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_3c038c:
    // 0x3c038c: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x3c038cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_3c0390:
    // 0x3c0390: 0xae440000  sw          $a0, 0x0($s2)
    ctx->pc = 0x3c0390u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 4));
label_3c0394:
    // 0x3c0394: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
label_3c0398:
    if (ctx->pc == 0x3C0398u) {
        ctx->pc = 0x3C0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0394u;
        // 0x3c0398: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C039Cu;
        goto label_3c039c;
    }
    ctx->pc = 0x3C0394u;
    {
        const bool branch_taken_0x3c0394 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0394u;
        // 0x3c0398: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0394) {
            ctx->pc = 0x3C03B8u;
            goto label_3c03b8;
        }
    }
    ctx->pc = 0x3C039Cu;
label_3c039c:
    // 0x3c039c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c039cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c03a0:
    // 0x3c03a0: 0x5c40ffef  bgtzl       $v0, . + 4 + (-0x11 << 2)
label_3c03a4:
    if (ctx->pc == 0x3C03A4u) {
        ctx->pc = 0x3C03A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03A0u;
        // 0x3c03a4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03A8u;
        goto label_3c03a8;
    }
    ctx->pc = 0x3C03A0u;
    {
        const bool branch_taken_0x3c03a0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x3c03a0) {
            ctx->pc = 0x3C03A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C03A0u;
            // 0x3c03a4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0360;
        }
    }
    ctx->pc = 0x3C03A8u;
label_3c03a8:
    // 0x3c03a8: 0xc0efe76  jal         func_3BF9D8
label_3c03ac:
    if (ctx->pc == 0x3C03ACu) {
        ctx->pc = 0x3C03ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03A8u;
        // 0x3c03ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03B0u;
        goto label_3c03b0;
    }
    ctx->pc = 0x3C03A8u;
    SET_GPR_U32(ctx, 31, 0x3C03B0u);
    ctx->pc = 0x3C03ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C03A8u;
    // 0x3c03ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3C03A8u, 0x3C03B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C03B0u;
label_3c03b0:
    // 0x3c03b0: 0x5040ffeb  beql        $v0, $zero, . + 4 + (-0x15 << 2)
label_3c03b4:
    if (ctx->pc == 0x3C03B4u) {
        ctx->pc = 0x3C03B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03B0u;
        // 0x3c03b4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03B8u;
        goto label_3c03b8;
    }
    ctx->pc = 0x3C03B0u;
    {
        const bool branch_taken_0x3c03b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c03b0) {
            ctx->pc = 0x3C03B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C03B0u;
            // 0x3c03b4: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0360u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0360;
        }
    }
    ctx->pc = 0x3C03B8u;
label_3c03b8:
    // 0x3c03b8: 0x2301023  subu        $v0, $s1, $s0
    ctx->pc = 0x3c03b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_3c03bc:
    // 0x3c03bc: 0xafb3026c  sw          $s3, 0x26C($sp)
    ctx->pc = 0x3c03bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 19));
label_3c03c0:
    // 0x3c03c0: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x3c03c0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_3c03c4:
    // 0x3c03c4: 0x1000fe68  b           . + 4 + (-0x198 << 2)
label_3c03c8:
    if (ctx->pc == 0x3C03C8u) {
        ctx->pc = 0x3C03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03C4u;
        // 0x3c03c8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03CCu;
        goto label_3c03cc;
    }
    ctx->pc = 0x3C03C4u;
    {
        const bool branch_taken_0x3c03c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03C4u;
        // 0x3c03c8: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c03c4) {
            ctx->pc = 0x3BFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd68;
        }
    }
    ctx->pc = 0x3C03CCu;
label_3c03cc:
    // 0x3c03cc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c03ccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c03d0:
    // 0x3c03d0: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x3c03d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_3c03d4:
    // 0x3c03d4: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x3c03d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_3c03d8:
    // 0x3c03d8: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x3c03d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3c03dc:
    // 0x3c03dc: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x3c03dcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_3c03e0:
    // 0x3c03e0: 0x367302c0  ori         $s3, $s3, 0x2C0
    ctx->pc = 0x3c03e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)704);
label_3c03e4:
    // 0x3c03e4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3c03e4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3c03e8:
    // 0x3c03e8: 0x1280004b  beqz        $s4, . + 4 + (0x4B << 2)
label_3c03ec:
    if (ctx->pc == 0x3C03ECu) {
        ctx->pc = 0x3C03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03E8u;
        // 0x3c03ec: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C03F0u;
        goto label_3c03f0;
    }
    ctx->pc = 0x3C03E8u;
    {
        const bool branch_taken_0x3c03e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C03ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C03E8u;
        // 0x3c03ec: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c03e8) {
            ctx->pc = 0x3C0518u;
            goto label_3c0518;
        }
    }
    ctx->pc = 0x3C03F0u;
label_3c03f0:
    // 0x3c03f0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c03f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c03f4:
    // 0x3c03f4: 0x0  nop
    ctx->pc = 0x3c03f4u;
    // NOP
label_3c03f8:
    // 0x3c03f8: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x3c03f8u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3c03fc:
    // 0x3c03fc: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x3c03fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_3c0400:
    // 0x3c0400: 0x2c62004e  sltiu       $v0, $v1, 0x4E
    ctx->pc = 0x3c0400u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)78) ? 1 : 0);
label_3c0404:
    // 0x3c0404: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_3c0408:
    if (ctx->pc == 0x3C0408u) {
        ctx->pc = 0x3C0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0404u;
        // 0x3c0408: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C040Cu;
        goto label_3c040c;
    }
    ctx->pc = 0x3C0404u;
    {
        const bool branch_taken_0x3c0404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0404u;
        // 0x3c0408: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0404) {
            ctx->pc = 0x3C0518u;
            goto label_3c0518;
        }
    }
    ctx->pc = 0x3C040Cu;
label_3c040c:
    // 0x3c040c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c040cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c0410:
    // 0x3c0410: 0x24420f70  addiu       $v0, $v0, 0xF70
    ctx->pc = 0x3c0410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3952));
label_3c0414:
    // 0x3c0414: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c0414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c0418:
    // 0x3c0418: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c0418u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c041c:
    // 0x3c041c: 0x800008  jr          $a0
label_3c0420:
    if (ctx->pc == 0x3C0420u) {
        ctx->pc = 0x3C0424u;
        goto label_3c0424;
    }
    ctx->pc = 0x3C041Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C0424u: goto label_3c0424;
            case 0x3C0448u: goto label_3c0448;
            case 0x3C0468u: goto label_3c0468;
            case 0x3C0490u: goto label_3c0490;
            case 0x3C04A4u: goto label_3c04a4;
            case 0x3C04B8u: goto label_3c04b8;
            case 0x3C0518u: goto label_3c0518;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C041Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C0424u;
label_3c0424:
    // 0x3c0424: 0x17c00004  bnez        $fp, . + 4 + (0x4 << 2)
label_3c0428:
    if (ctx->pc == 0x3C0428u) {
        ctx->pc = 0x3C0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0424u;
        // 0x3c0428: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C042Cu;
        goto label_3c042c;
    }
    ctx->pc = 0x3C0424u;
    {
        const bool branch_taken_0x3c0424 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0424u;
        // 0x3c0428: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0424) {
            ctx->pc = 0x3C0438u;
            goto label_3c0438;
        }
    }
    ctx->pc = 0x3C042Cu;
label_3c042c:
    // 0x3c042c: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x3c042cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_3c0430:
    // 0x3c0430: 0x36730100  ori         $s3, $s3, 0x100
    ctx->pc = 0x3c0430u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_3c0434:
    // 0x3c0434: 0x32620200  andi        $v0, $s3, 0x200
    ctx->pc = 0x3c0434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
label_3c0438:
    // 0x3c0438: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_3c043c:
    if (ctx->pc == 0x3C043Cu) {
        ctx->pc = 0x3C043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0438u;
        // 0x3c043c: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0440u;
        goto label_3c0440;
    }
    ctx->pc = 0x3C0438u;
    {
        const bool branch_taken_0x3c0438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C043Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0438u;
        // 0x3c043c: 0x2402fd3f  addiu       $v0, $zero, -0x2C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966591));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0438) {
            ctx->pc = 0x3C04D0u;
            goto label_3c04d0;
        }
    }
    ctx->pc = 0x3C0440u;
label_3c0440:
    // 0x3c0440: 0x10000023  b           . + 4 + (0x23 << 2)
label_3c0444:
    if (ctx->pc == 0x3C0444u) {
        ctx->pc = 0x3C0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0440u;
        // 0x3c0444: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0448u;
        goto label_3c0448;
    }
    ctx->pc = 0x3C0440u;
    {
        const bool branch_taken_0x3c0440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0440u;
        // 0x3c0444: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0440) {
            ctx->pc = 0x3C04D0u;
            goto label_3c04d0;
        }
    }
    ctx->pc = 0x3C0448u;
label_3c0448:
    // 0x3c0448: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c0448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3c044c:
    // 0x3c044c: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x3c044cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_3c0450:
    // 0x3c0450: 0x24420d30  addiu       $v0, $v0, 0xD30
    ctx->pc = 0x3c0450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
label_3c0454:
    // 0x3c0454: 0x2404fe3f  addiu       $a0, $zero, -0x1C1
    ctx->pc = 0x3c0454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
label_3c0458:
    // 0x3c0458: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c0458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c045c:
    // 0x3c045c: 0x2649824  and         $s3, $s3, $a0
    ctx->pc = 0x3c045cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_3c0460:
    // 0x3c0460: 0x1000001c  b           . + 4 + (0x1C << 2)
label_3c0464:
    if (ctx->pc == 0x3C0464u) {
        ctx->pc = 0x3C0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0460u;
        // 0x3c0464: 0x847e0000  lh          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0468u;
        goto label_3c0468;
    }
    ctx->pc = 0x3C0460u;
    {
        const bool branch_taken_0x3c0460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0460u;
        // 0x3c0464: 0x847e0000  lh          $fp, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0460) {
            ctx->pc = 0x3C04D4u;
            goto label_3c04d4;
        }
    }
    ctx->pc = 0x3C0468u;
label_3c0468:
    // 0x3c0468: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3c0468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_3c046c:
    // 0x3c046c: 0x1e1840  sll         $v1, $fp, 1
    ctx->pc = 0x3c046cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
label_3c0470:
    // 0x3c0470: 0x24420d30  addiu       $v0, $v0, 0xD30
    ctx->pc = 0x3c0470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3376));
label_3c0474:
    // 0x3c0474: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c0474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c0478:
    // 0x3c0478: 0x847e0000  lh          $fp, 0x0($v1)
    ctx->pc = 0x3c0478u;
    SET_GPR_S32(ctx, 30, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_3c047c:
    // 0x3c047c: 0x2bc20009  slti        $v0, $fp, 0x9
    ctx->pc = 0x3c047cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)9) ? 1 : 0);
label_3c0480:
    // 0x3c0480: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
label_3c0484:
    if (ctx->pc == 0x3C0484u) {
        ctx->pc = 0x3C0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0480u;
        // 0x3c0484: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0488u;
        goto label_3c0488;
    }
    ctx->pc = 0x3C0480u;
    {
        const bool branch_taken_0x3c0480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0480u;
        // 0x3c0484: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0480) {
            ctx->pc = 0x3C0518u;
            goto label_3c0518;
        }
    }
    ctx->pc = 0x3C0488u;
label_3c0488:
    // 0x3c0488: 0x10000012  b           . + 4 + (0x12 << 2)
label_3c048c:
    if (ctx->pc == 0x3C048Cu) {
        ctx->pc = 0x3C048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0488u;
        // 0x3c048c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0490u;
        goto label_3c0490;
    }
    ctx->pc = 0x3C0488u;
    {
        const bool branch_taken_0x3c0488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0488u;
        // 0x3c048c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0488) {
            ctx->pc = 0x3C04D4u;
            goto label_3c04d4;
        }
    }
    ctx->pc = 0x3C0490u;
label_3c0490:
    // 0x3c0490: 0x2bc2000b  slti        $v0, $fp, 0xB
    ctx->pc = 0x3c0490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)11) ? 1 : 0);
label_3c0494:
    // 0x3c0494: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_3c0498:
    if (ctx->pc == 0x3C0498u) {
        ctx->pc = 0x3C0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0494u;
        // 0x3c0498: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C049Cu;
        goto label_3c049c;
    }
    ctx->pc = 0x3C0494u;
    {
        const bool branch_taken_0x3c0494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0494u;
        // 0x3c0498: 0x2402fe3f  addiu       $v0, $zero, -0x1C1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966847));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0494) {
            ctx->pc = 0x3C0518u;
            goto label_3c0518;
        }
    }
    ctx->pc = 0x3C049Cu;
label_3c049c:
    // 0x3c049c: 0x1000000d  b           . + 4 + (0xD << 2)
label_3c04a0:
    if (ctx->pc == 0x3C04A0u) {
        ctx->pc = 0x3C04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C049Cu;
        // 0x3c04a0: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C04A4u;
        goto label_3c04a4;
    }
    ctx->pc = 0x3C049Cu;
    {
        const bool branch_taken_0x3c049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C049Cu;
        // 0x3c04a0: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c049c) {
            ctx->pc = 0x3C04D4u;
            goto label_3c04d4;
        }
    }
    ctx->pc = 0x3C04A4u;
label_3c04a4:
    // 0x3c04a4: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x3c04a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_3c04a8:
    // 0x3c04a8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_3c04ac:
    if (ctx->pc == 0x3C04ACu) {
        ctx->pc = 0x3C04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04A8u;
        // 0x3c04ac: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C04B0u;
        goto label_3c04b0;
    }
    ctx->pc = 0x3C04A8u;
    {
        const bool branch_taken_0x3c04a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C04ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04A8u;
        // 0x3c04ac: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c04a8) {
            ctx->pc = 0x3C0518u;
            goto label_3c0518;
        }
    }
    ctx->pc = 0x3C04B0u;
label_3c04b0:
    // 0x3c04b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_3c04b4:
    if (ctx->pc == 0x3C04B4u) {
        ctx->pc = 0x3C04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04B0u;
        // 0x3c04b4: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C04B8u;
        goto label_3c04b8;
    }
    ctx->pc = 0x3C04B0u;
    {
        const bool branch_taken_0x3c04b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C04B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04B0u;
        // 0x3c04b4: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c04b0) {
            ctx->pc = 0x3C04D4u;
            goto label_3c04d4;
        }
    }
    ctx->pc = 0x3C04B8u;
label_3c04b8:
    // 0x3c04b8: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x3c04b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_3c04bc:
    // 0x3c04bc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_3c04c0:
    if (ctx->pc == 0x3C04C0u) {
        ctx->pc = 0x3C04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04BCu;
        // 0x3c04c0: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C04C4u;
        goto label_3c04c4;
    }
    ctx->pc = 0x3C04BCu;
    {
        const bool branch_taken_0x3c04bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C04C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04BCu;
        // 0x3c04c0: 0x27a20101  addiu       $v0, $sp, 0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 257));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c04bc) {
            ctx->pc = 0x3C0518u;
            goto label_3c0518;
        }
    }
    ctx->pc = 0x3C04C4u;
label_3c04c4:
    // 0x3c04c4: 0x16220014  bne         $s1, $v0, . + 4 + (0x14 << 2)
label_3c04c8:
    if (ctx->pc == 0x3C04C8u) {
        ctx->pc = 0x3C04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04C4u;
        // 0x3c04c8: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C04CCu;
        goto label_3c04cc;
    }
    ctx->pc = 0x3C04C4u;
    {
        const bool branch_taken_0x3c04c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C04C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04C4u;
        // 0x3c04c8: 0x2402feff  addiu       $v0, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c04c4) {
            ctx->pc = 0x3C0518u;
            goto label_3c0518;
        }
    }
    ctx->pc = 0x3C04CCu;
label_3c04cc:
    // 0x3c04cc: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x3c04ccu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_3c04d0:
    // 0x3c04d0: 0x2629824  and         $s3, $s3, $v0
    ctx->pc = 0x3c04d0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3c04d4:
    // 0x3c04d4: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x3c04d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_3c04d8:
    // 0x3c04d8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c04d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c04dc:
    // 0x3c04dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c04dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c04e0:
    // 0x3c04e0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c04e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c04e4:
    // 0x3c04e4: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_3c04e8:
    if (ctx->pc == 0x3C04E8u) {
        ctx->pc = 0x3C04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04E4u;
        // 0x3c04e8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C04ECu;
        goto label_3c04ec;
    }
    ctx->pc = 0x3C04E4u;
    {
        const bool branch_taken_0x3c04e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C04E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04E4u;
        // 0x3c04e8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c04e4) {
            ctx->pc = 0x3C04FCu;
            goto label_3c04fc;
        }
    }
    ctx->pc = 0x3C04ECu;
label_3c04ec:
    // 0x3c04ec: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c04ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c04f0:
    // 0x3c04f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c04f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c04f4:
    // 0x3c04f4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c04f8:
    if (ctx->pc == 0x3C04F8u) {
        ctx->pc = 0x3C04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04F4u;
        // 0x3c04f8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C04FCu;
        goto label_3c04fc;
    }
    ctx->pc = 0x3C04F4u;
    {
        const bool branch_taken_0x3c04f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C04F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04F4u;
        // 0x3c04f8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c04f4) {
            ctx->pc = 0x3C050Cu;
            goto label_3c050c;
        }
    }
    ctx->pc = 0x3C04FCu;
label_3c04fc:
    // 0x3c04fc: 0xc0efe76  jal         func_3BF9D8
label_3c0500:
    if (ctx->pc == 0x3C0500u) {
        ctx->pc = 0x3C0500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C04FCu;
        // 0x3c0500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0504u;
        goto label_3c0504;
    }
    ctx->pc = 0x3C04FCu;
    SET_GPR_U32(ctx, 31, 0x3C0504u);
    ctx->pc = 0x3C0500u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C04FCu;
    // 0x3c0500: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3C04FCu, 0x3C0504u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0504u;
label_3c0504:
    // 0x3c0504: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c0508:
    if (ctx->pc == 0x3C0508u) {
        ctx->pc = 0x3C0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0504u;
        // 0x3c0508: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C050Cu;
        goto label_3c050c;
    }
    ctx->pc = 0x3C0504u;
    {
        const bool branch_taken_0x3c0504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0504u;
        // 0x3c0508: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0504) {
            ctx->pc = 0x3C051Cu;
            goto label_3c051c;
        }
    }
    ctx->pc = 0x3C050Cu;
label_3c050c:
    // 0x3c050c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c050cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c0510:
    // 0x3c0510: 0x5680ffb9  bnel        $s4, $zero, . + 4 + (-0x47 << 2)
label_3c0514:
    if (ctx->pc == 0x3C0514u) {
        ctx->pc = 0x3C0514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0510u;
        // 0x3c0514: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0518u;
        goto label_3c0518;
    }
    ctx->pc = 0x3C0510u;
    {
        const bool branch_taken_0x3c0510 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0510) {
            ctx->pc = 0x3C0514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0510u;
            // 0x3c0514: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C03F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c03f8;
        }
    }
    ctx->pc = 0x3C0518u;
label_3c0518:
    // 0x3c0518: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x3c0518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_3c051c:
    // 0x3c051c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_3c0520:
    if (ctx->pc == 0x3C0520u) {
        ctx->pc = 0x3C0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C051Cu;
        // 0x3c0520: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0524u;
        goto label_3c0524;
    }
    ctx->pc = 0x3C051Cu;
    {
        const bool branch_taken_0x3c051c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C051Cu;
        // 0x3c0520: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c051c) {
            ctx->pc = 0x3C0540u;
            goto label_3c0540;
        }
    }
    ctx->pc = 0x3C0524u;
label_3c0524:
    // 0x3c0524: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_3c0528:
    if (ctx->pc == 0x3C0528u) {
        ctx->pc = 0x3C0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0524u;
        // 0x3c0528: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C052Cu;
        goto label_3c052c;
    }
    ctx->pc = 0x3C0524u;
    {
        const bool branch_taken_0x3c0524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0524u;
        // 0x3c0528: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0524) {
            ctx->pc = 0x3C07E8u;
            goto label_3c07e8;
        }
    }
    ctx->pc = 0x3C052Cu;
label_3c052c:
    // 0x3c052c: 0x8224ffff  lb          $a0, -0x1($s1)
    ctx->pc = 0x3c052cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_3c0530:
    // 0x3c0530: 0xc0f1c72  jal         func_3C71C8
label_3c0534:
    if (ctx->pc == 0x3C0534u) {
        ctx->pc = 0x3C0534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0530u;
        // 0x3c0534: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0538u;
        goto label_3c0538;
    }
    ctx->pc = 0x3C0530u;
    SET_GPR_U32(ctx, 31, 0x3C0538u);
    ctx->pc = 0x3C0534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0530u;
    // 0x3c0534: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C71C8u, 0x3C0530u, 0x3C0538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0538u;
label_3c0538:
    // 0x3c0538: 0x100000ab  b           . + 4 + (0xAB << 2)
label_3c053c:
    if (ctx->pc == 0x3C053Cu) {
        ctx->pc = 0x3C053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0538u;
        // 0x3c053c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0540u;
        goto label_3c0540;
    }
    ctx->pc = 0x3C0538u;
    {
        const bool branch_taken_0x3c0538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0538u;
        // 0x3c053c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0538) {
            ctx->pc = 0x3C07E8u;
            goto label_3c07e8;
        }
    }
    ctx->pc = 0x3C0540u;
label_3c0540:
    // 0x3c0540: 0x8230ffff  lb          $s0, -0x1($s1)
    ctx->pc = 0x3c0540u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 4294967295)));
label_3c0544:
    // 0x3c0544: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x3c0544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_3c0548:
    // 0x3c0548: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
label_3c054c:
    if (ctx->pc == 0x3C054Cu) {
        ctx->pc = 0x3C054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0548u;
        // 0x3c054c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0550u;
        goto label_3c0550;
    }
    ctx->pc = 0x3C0548u;
    {
        const bool branch_taken_0x3c0548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0548u;
        // 0x3c054c: 0x24020058  addiu       $v0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0548) {
            ctx->pc = 0x3C0558u;
            goto label_3c0558;
        }
    }
    ctx->pc = 0x3C0550u;
label_3c0550:
    // 0x3c0550: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
label_3c0554:
    if (ctx->pc == 0x3C0554u) {
        ctx->pc = 0x3C0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0550u;
        // 0x3c0554: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0558u;
        goto label_3c0558;
    }
    ctx->pc = 0x3C0550u;
    {
        const bool branch_taken_0x3c0550 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0550u;
        // 0x3c0554: 0x32620008  andi        $v0, $s3, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0550) {
            ctx->pc = 0x3C056Cu;
            goto label_3c056c;
        }
    }
    ctx->pc = 0x3C0558u;
label_3c0558:
    // 0x3c0558: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c0558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c055c:
    // 0x3c055c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3c055cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3c0560:
    // 0x3c0560: 0xc0f1c72  jal         func_3C71C8
label_3c0564:
    if (ctx->pc == 0x3C0564u) {
        ctx->pc = 0x3C0564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0560u;
        // 0x3c0564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0568u;
        goto label_3c0568;
    }
    ctx->pc = 0x3C0560u;
    SET_GPR_U32(ctx, 31, 0x3C0568u);
    ctx->pc = 0x3C0564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0560u;
    // 0x3c0564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C71C8u, 0x3C0560u, 0x3C0568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0568u;
label_3c0568:
    // 0x3c0568: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x3c0568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3c056c:
    // 0x3c056c: 0x14400097  bnez        $v0, . + 4 + (0x97 << 2)
label_3c0570:
    if (ctx->pc == 0x3C0570u) {
        ctx->pc = 0x3C0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C056Cu;
        // 0x3c0570: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0574u;
        goto label_3c0574;
    }
    ctx->pc = 0x3C056Cu;
    {
        const bool branch_taken_0x3c056c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C056Cu;
        // 0x3c0570: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c056c) {
            ctx->pc = 0x3C07CCu;
            goto label_3c07cc;
        }
    }
    ctx->pc = 0x3C0574u;
label_3c0574:
    // 0x3c0574: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3c0574u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3c0578:
    // 0x3c0578: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3c0578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3c057c:
    // 0x3c057c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3c057cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3c0580:
    // 0x3c0580: 0x8fa30270  lw          $v1, 0x270($sp)
    ctx->pc = 0x3c0580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
label_3c0584:
    // 0x3c0584: 0x60f809  jalr        $v1
label_3c0588:
    if (ctx->pc == 0x3C0588u) {
        ctx->pc = 0x3C0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0584u;
        // 0x3c0588: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C058Cu;
        goto label_3c058c;
    }
    ctx->pc = 0x3C0584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3C058Cu);
        ctx->pc = 0x3C0588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0584u;
        // 0x3c0588: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0584u, 0x3C058Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3C058Cu;
label_3c058c:
    // 0x3c058c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3c058cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0590:
    // 0x3c0590: 0x32620010  andi        $v0, $s3, 0x10
    ctx->pc = 0x3c0590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)16);
label_3c0594:
    // 0x3c0594: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3c0598:
    if (ctx->pc == 0x3C0598u) {
        ctx->pc = 0x3C0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0594u;
        // 0x3c0598: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C059Cu;
        goto label_3c059c;
    }
    ctx->pc = 0x3C0594u;
    {
        const bool branch_taken_0x3c0594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0594u;
        // 0x3c0598: 0x32620004  andi        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0594) {
            ctx->pc = 0x3C05B4u;
            goto label_3c05b4;
        }
    }
    ctx->pc = 0x3C059Cu;
label_3c059c:
    // 0x3c059c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3c059cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3c05a0:
    // 0x3c05a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3c05a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_3c05a4:
    // 0x3c05a4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x3c05a4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_3c05a8:
    // 0x3c05a8: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x3c05a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c05ac:
    // 0x3c05ac: 0x10000011  b           . + 4 + (0x11 << 2)
label_3c05b0:
    if (ctx->pc == 0x3C05B0u) {
        ctx->pc = 0x3C05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05ACu;
        // 0x3c05b0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C05B4u;
        goto label_3c05b4;
    }
    ctx->pc = 0x3C05ACu;
    {
        const bool branch_taken_0x3c05ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C05B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05ACu;
        // 0x3c05b0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c05ac) {
            ctx->pc = 0x3C05F4u;
            goto label_3c05f4;
        }
    }
    ctx->pc = 0x3C05B4u;
label_3c05b4:
    // 0x3c05b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c05b8:
    if (ctx->pc == 0x3C05B8u) {
        ctx->pc = 0x3C05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05B4u;
        // 0x3c05b8: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C05BCu;
        goto label_3c05bc;
    }
    ctx->pc = 0x3C05B4u;
    {
        const bool branch_taken_0x3c05b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C05B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05B4u;
        // 0x3c05b8: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c05b4) {
            ctx->pc = 0x3C05CCu;
            goto label_3c05cc;
        }
    }
    ctx->pc = 0x3C05BCu;
label_3c05bc:
    // 0x3c05bc: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3c05bcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3c05c0:
    // 0x3c05c0: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3c05c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c05c4:
    // 0x3c05c4: 0x1000000b  b           . + 4 + (0xB << 2)
label_3c05c8:
    if (ctx->pc == 0x3C05C8u) {
        ctx->pc = 0x3C05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05C4u;
        // 0x3c05c8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C05CCu;
        goto label_3c05cc;
    }
    ctx->pc = 0x3C05C4u;
    {
        const bool branch_taken_0x3c05c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C05C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05C4u;
        // 0x3c05c8: 0xa4820000  sh          $v0, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c05c4) {
            ctx->pc = 0x3C05F4u;
            goto label_3c05f4;
        }
    }
    ctx->pc = 0x3C05CCu;
label_3c05cc:
    // 0x3c05cc: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3c05ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_3c05d0:
    // 0x3c05d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_3c05d4:
    if (ctx->pc == 0x3C05D4u) {
        ctx->pc = 0x3C05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05D0u;
        // 0x3c05d4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C05D8u;
        goto label_3c05d8;
    }
    ctx->pc = 0x3C05D0u;
    {
        const bool branch_taken_0x3c05d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C05D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05D0u;
        // 0x3c05d4: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c05d0) {
            ctx->pc = 0x3C05E4u;
            goto label_3c05e4;
        }
    }
    ctx->pc = 0x3C05D8u;
label_3c05d8:
    // 0x3c05d8: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x3c05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c05dc:
    // 0x3c05dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c05e0:
    if (ctx->pc == 0x3C05E0u) {
        ctx->pc = 0x3C05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05DCu;
        // 0x3c05e0: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C05E4u;
        goto label_3c05e4;
    }
    ctx->pc = 0x3C05DCu;
    {
        const bool branch_taken_0x3c05dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C05E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05DCu;
        // 0x3c05e0: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c05dc) {
            ctx->pc = 0x3C05F4u;
            goto label_3c05f4;
        }
    }
    ctx->pc = 0x3C05E4u;
label_3c05e4:
    // 0x3c05e4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x3c05e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_3c05e8:
    // 0x3c05e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3c05e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_3c05ec:
    // 0x3c05ec: 0x8ea4fff8  lw          $a0, -0x8($s5)
    ctx->pc = 0x3c05ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c05f0:
    // 0x3c05f0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3c05f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3c05f4:
    // 0x3c05f4: 0x8fa4026c  lw          $a0, 0x26C($sp)
    ctx->pc = 0x3c05f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3c05f8:
    // 0x3c05f8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3c05f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3c05fc:
    // 0x3c05fc: 0x10000072  b           . + 4 + (0x72 << 2)
label_3c0600:
    if (ctx->pc == 0x3C0600u) {
        ctx->pc = 0x3C0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05FCu;
        // 0x3c0600: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0604u;
        goto label_3c0604;
    }
    ctx->pc = 0x3C05FCu;
    {
        const bool branch_taken_0x3c05fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C05FCu;
        // 0x3c0600: 0xafa4026c  sw          $a0, 0x26C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c05fc) {
            ctx->pc = 0x3C07C8u;
            goto label_3c07c8;
        }
    }
    ctx->pc = 0x3C0604u;
label_3c0604:
    // 0x3c0604: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c0604u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c0608:
    // 0x3c0608: 0x2403015c  addiu       $v1, $zero, 0x15C
    ctx->pc = 0x3c0608u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 348));
label_3c060c:
    // 0x3c060c: 0x2e82015d  sltiu       $v0, $s4, 0x15D
    ctx->pc = 0x3c060cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)349) ? 1 : 0);
label_3c0610:
    // 0x3c0610: 0x27b10100  addiu       $s1, $sp, 0x100
    ctx->pc = 0x3c0610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_3c0614:
    // 0x3c0614: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x3c0614u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_3c0618:
    // 0x3c0618: 0x367303c0  ori         $s3, $s3, 0x3C0
    ctx->pc = 0x3c0618u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)960);
label_3c061c:
    // 0x3c061c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3c061cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_3c0620:
    // 0x3c0620: 0x12800032  beqz        $s4, . + 4 + (0x32 << 2)
label_3c0624:
    if (ctx->pc == 0x3C0624u) {
        ctx->pc = 0x3C0624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0620u;
        // 0x3c0624: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0628u;
        goto label_3c0628;
    }
    ctx->pc = 0x3C0620u;
    {
        const bool branch_taken_0x3c0620 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0620u;
        // 0x3c0624: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0620) {
            ctx->pc = 0x3C06ECu;
            goto label_3c06ec;
        }
    }
    ctx->pc = 0x3C0628u;
label_3c0628:
    // 0x3c0628: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c0628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c062c:
    // 0x3c062c: 0x0  nop
    ctx->pc = 0x3c062cu;
    // NOP
label_3c0630:
    // 0x3c0630: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x3c0630u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3c0634:
    // 0x3c0634: 0x2603ffd5  addiu       $v1, $s0, -0x2B
    ctx->pc = 0x3c0634u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967253));
label_3c0638:
    // 0x3c0638: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x3c0638u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
label_3c063c:
    // 0x3c063c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_3c0640:
    if (ctx->pc == 0x3C0640u) {
        ctx->pc = 0x3C0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C063Cu;
        // 0x3c0640: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0644u;
        goto label_3c0644;
    }
    ctx->pc = 0x3C063Cu;
    {
        const bool branch_taken_0x3c063c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C063Cu;
        // 0x3c0640: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c063c) {
            ctx->pc = 0x3C06ECu;
            goto label_3c06ec;
        }
    }
    ctx->pc = 0x3C0644u;
label_3c0644:
    // 0x3c0644: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c0644u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_3c0648:
    // 0x3c0648: 0x244210b0  addiu       $v0, $v0, 0x10B0
    ctx->pc = 0x3c0648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4272));
label_3c064c:
    // 0x3c064c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3c064cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3c0650:
    // 0x3c0650: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c0650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3c0654:
    // 0x3c0654: 0x800008  jr          $a0
label_3c0658:
    if (ctx->pc == 0x3C0658u) {
        ctx->pc = 0x3C065Cu;
        goto label_3c065c;
    }
    ctx->pc = 0x3C0654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x3C065Cu: goto label_3c065c;
            case 0x3C0668u: goto label_3c0668;
            case 0x3C067Cu: goto label_3c067c;
            case 0x3C0690u: goto label_3c0690;
            case 0x3C06ECu: goto label_3c06ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0654u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x3C065Cu;
label_3c065c:
    // 0x3c065c: 0x2402ff3f  addiu       $v0, $zero, -0xC1
    ctx->pc = 0x3c065cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967103));
label_3c0660:
    // 0x3c0660: 0x10000011  b           . + 4 + (0x11 << 2)
label_3c0664:
    if (ctx->pc == 0x3C0664u) {
        ctx->pc = 0x3C0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0660u;
        // 0x3c0664: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0668u;
        goto label_3c0668;
    }
    ctx->pc = 0x3C0660u;
    {
        const bool branch_taken_0x3c0660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0660u;
        // 0x3c0664: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0660) {
            ctx->pc = 0x3C06A8u;
            goto label_3c06a8;
        }
    }
    ctx->pc = 0x3C0668u;
label_3c0668:
    // 0x3c0668: 0x32620040  andi        $v0, $s3, 0x40
    ctx->pc = 0x3c0668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)64);
label_3c066c:
    // 0x3c066c: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_3c0670:
    if (ctx->pc == 0x3C0670u) {
        ctx->pc = 0x3C0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C066Cu;
        // 0x3c0670: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0674u;
        goto label_3c0674;
    }
    ctx->pc = 0x3C066Cu;
    {
        const bool branch_taken_0x3c066c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C066Cu;
        // 0x3c0670: 0x2402ffbf  addiu       $v0, $zero, -0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c066c) {
            ctx->pc = 0x3C06ECu;
            goto label_3c06ec;
        }
    }
    ctx->pc = 0x3C0674u;
label_3c0674:
    // 0x3c0674: 0x1000000c  b           . + 4 + (0xC << 2)
label_3c0678:
    if (ctx->pc == 0x3C0678u) {
        ctx->pc = 0x3C0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0674u;
        // 0x3c0678: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C067Cu;
        goto label_3c067c;
    }
    ctx->pc = 0x3C0674u;
    {
        const bool branch_taken_0x3c0674 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0674u;
        // 0x3c0678: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0674) {
            ctx->pc = 0x3C06A8u;
            goto label_3c06a8;
        }
    }
    ctx->pc = 0x3C067Cu;
label_3c067c:
    // 0x3c067c: 0x32620100  andi        $v0, $s3, 0x100
    ctx->pc = 0x3c067cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)256);
label_3c0680:
    // 0x3c0680: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_3c0684:
    if (ctx->pc == 0x3C0684u) {
        ctx->pc = 0x3C0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0680u;
        // 0x3c0684: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0688u;
        goto label_3c0688;
    }
    ctx->pc = 0x3C0680u;
    {
        const bool branch_taken_0x3c0680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0680u;
        // 0x3c0684: 0x2402febf  addiu       $v0, $zero, -0x141 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966975));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0680) {
            ctx->pc = 0x3C06ECu;
            goto label_3c06ec;
        }
    }
    ctx->pc = 0x3C0688u;
label_3c0688:
    // 0x3c0688: 0x10000007  b           . + 4 + (0x7 << 2)
label_3c068c:
    if (ctx->pc == 0x3C068Cu) {
        ctx->pc = 0x3C068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0688u;
        // 0x3c068c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0690u;
        goto label_3c0690;
    }
    ctx->pc = 0x3C0688u;
    {
        const bool branch_taken_0x3c0688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C068Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0688u;
        // 0x3c068c: 0x2629824  and         $s3, $s3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0688) {
            ctx->pc = 0x3C06A8u;
            goto label_3c06a8;
        }
    }
    ctx->pc = 0x3C0690u;
label_3c0690:
    // 0x3c0690: 0x32630280  andi        $v1, $s3, 0x280
    ctx->pc = 0x3c0690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)640);
label_3c0694:
    // 0x3c0694: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x3c0694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_3c0698:
    // 0x3c0698: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_3c069c:
    if (ctx->pc == 0x3C069Cu) {
        ctx->pc = 0x3C069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0698u;
        // 0x3c069c: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C06A0u;
        goto label_3c06a0;
    }
    ctx->pc = 0x3C0698u;
    {
        const bool branch_taken_0x3c0698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3C069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0698u;
        // 0x3c069c: 0x2402fcff  addiu       $v0, $zero, -0x301 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966527));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0698) {
            ctx->pc = 0x3C06ECu;
            goto label_3c06ec;
        }
    }
    ctx->pc = 0x3C06A0u;
label_3c06a0:
    // 0x3c06a0: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3c06a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3c06a4:
    // 0x3c06a4: 0x345300c0  ori         $s3, $v0, 0xC0
    ctx->pc = 0x3c06a4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
label_3c06a8:
    // 0x3c06a8: 0xa2300000  sb          $s0, 0x0($s1)
    ctx->pc = 0x3c06a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 16));
label_3c06ac:
    // 0x3c06ac: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3c06acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3c06b0:
    // 0x3c06b0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3c06b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3c06b4:
    // 0x3c06b4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3c06b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3c06b8:
    // 0x3c06b8: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_3c06bc:
    if (ctx->pc == 0x3C06BCu) {
        ctx->pc = 0x3C06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06B8u;
        // 0x3c06bc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C06C0u;
        goto label_3c06c0;
    }
    ctx->pc = 0x3C06B8u;
    {
        const bool branch_taken_0x3c06b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3C06BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06B8u;
        // 0x3c06bc: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c06b8) {
            ctx->pc = 0x3C06D0u;
            goto label_3c06d0;
        }
    }
    ctx->pc = 0x3C06C0u;
label_3c06c0:
    // 0x3c06c0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3c06c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_3c06c4:
    // 0x3c06c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c06c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c06c8:
    // 0x3c06c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c06cc:
    if (ctx->pc == 0x3C06CCu) {
        ctx->pc = 0x3C06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06C8u;
        // 0x3c06cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C06D0u;
        goto label_3c06d0;
    }
    ctx->pc = 0x3C06C8u;
    {
        const bool branch_taken_0x3c06c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06C8u;
        // 0x3c06cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c06c8) {
            ctx->pc = 0x3C06E0u;
            goto label_3c06e0;
        }
    }
    ctx->pc = 0x3C06D0u;
label_3c06d0:
    // 0x3c06d0: 0xc0efe76  jal         func_3BF9D8
label_3c06d4:
    if (ctx->pc == 0x3C06D4u) {
        ctx->pc = 0x3C06D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06D0u;
        // 0x3c06d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C06D8u;
        goto label_3c06d8;
    }
    ctx->pc = 0x3C06D0u;
    SET_GPR_U32(ctx, 31, 0x3C06D8u);
    ctx->pc = 0x3C06D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C06D0u;
    // 0x3c06d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF9D8u, 0x3C06D0u, 0x3C06D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C06D8u;
label_3c06d8:
    // 0x3c06d8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_3c06dc:
    if (ctx->pc == 0x3C06DCu) {
        ctx->pc = 0x3C06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06D8u;
        // 0x3c06dc: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C06E0u;
        goto label_3c06e0;
    }
    ctx->pc = 0x3C06D8u;
    {
        const bool branch_taken_0x3c06d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C06DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06D8u;
        // 0x3c06dc: 0x32620080  andi        $v0, $s3, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c06d8) {
            ctx->pc = 0x3C06F0u;
            goto label_3c06f0;
        }
    }
    ctx->pc = 0x3C06E0u;
label_3c06e0:
    // 0x3c06e0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x3c06e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
label_3c06e4:
    // 0x3c06e4: 0x5680ffd2  bnel        $s4, $zero, . + 4 + (-0x2E << 2)
label_3c06e8:
    if (ctx->pc == 0x3C06E8u) {
        ctx->pc = 0x3C06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06E4u;
        // 0x3c06e8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C06ECu;
        goto label_3c06ec;
    }
    ctx->pc = 0x3C06E4u;
    {
        const bool branch_taken_0x3c06e4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c06e4) {
            ctx->pc = 0x3C06E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C06E4u;
            // 0x3c06e8: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C0630u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0630;
        }
    }
    ctx->pc = 0x3C06ECu;
label_3c06ec:
    // 0x3c06ec: 0x32620080  andi        $v0, $s3, 0x80
    ctx->pc = 0x3c06ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)128);
label_3c06f0:
    // 0x3c06f0: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_3c06f4:
    if (ctx->pc == 0x3C06F4u) {
        ctx->pc = 0x3C06F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06F0u;
        // 0x3c06f4: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C06F8u;
        goto label_3c06f8;
    }
    ctx->pc = 0x3C06F0u;
    {
        const bool branch_taken_0x3c06f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C06F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06F0u;
        // 0x3c06f4: 0x32620200  andi        $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c06f0) {
            ctx->pc = 0x3C0768u;
            goto label_3c0768;
        }
    }
    ctx->pc = 0x3C06F8u;
label_3c06f8:
    // 0x3c06f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3c06fc:
    if (ctx->pc == 0x3C06FCu) {
        ctx->pc = 0x3C06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06F8u;
        // 0x3c06fc: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0700u;
        goto label_3c0700;
    }
    ctx->pc = 0x3C06F8u;
    {
        const bool branch_taken_0x3c06f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C06FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C06F8u;
        // 0x3c06fc: 0x2d1102b  sltu        $v0, $s6, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c06f8) {
            ctx->pc = 0x3C0730u;
            goto label_3c0730;
        }
    }
    ctx->pc = 0x3C0700u;
label_3c0700:
    // 0x3c0700: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_3c0704:
    if (ctx->pc == 0x3C0704u) {
        ctx->pc = 0x3C0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0700u;
        // 0x3c0704: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0708u;
        goto label_3c0708;
    }
    ctx->pc = 0x3C0700u;
    {
        const bool branch_taken_0x3c0700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C0704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0700u;
        // 0x3c0704: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0700) {
            ctx->pc = 0x3C07E8u;
            goto label_3c07e8;
        }
    }
    ctx->pc = 0x3C0708u;
label_3c0708:
    // 0x3c0708: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3c0708u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3c070c:
    // 0x3c070c: 0x0  nop
    ctx->pc = 0x3c070cu;
    // NOP
label_3c0710:
    // 0x3c0710: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3c0710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3c0714:
    // 0x3c0714: 0xc0f1c72  jal         func_3C71C8
label_3c0718:
    if (ctx->pc == 0x3C0718u) {
        ctx->pc = 0x3C0718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0714u;
        // 0x3c0718: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C071Cu;
        goto label_3c071c;
    }
    ctx->pc = 0x3C0714u;
    SET_GPR_U32(ctx, 31, 0x3C071Cu);
    ctx->pc = 0x3C0718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0714u;
    // 0x3c0718: 0x82240000  lb          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C71C8u, 0x3C0714u, 0x3C071Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C071Cu;
label_3c071c:
    // 0x3c071c: 0x2d1182b  sltu        $v1, $s6, $s1
    ctx->pc = 0x3c071cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3c0720:
    // 0x3c0720: 0x1460fffb  bnez        $v1, . + 4 + (-0x5 << 2)
label_3c0724:
    if (ctx->pc == 0x3C0724u) {
        ctx->pc = 0x3C0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0720u;
        // 0x3c0724: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0728u;
        goto label_3c0728;
    }
    ctx->pc = 0x3C0720u;
    {
        const bool branch_taken_0x3c0720 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0720u;
        // 0x3c0724: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0720) {
            ctx->pc = 0x3C0710u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3c0710;
        }
    }
    ctx->pc = 0x3C0728u;
label_3c0728:
    // 0x3c0728: 0x1000002f  b           . + 4 + (0x2F << 2)
label_3c072c:
    if (ctx->pc == 0x3C072Cu) {
        ctx->pc = 0x3C072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0728u;
        // 0x3c072c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0730u;
        goto label_3c0730;
    }
    ctx->pc = 0x3C0728u;
    {
        const bool branch_taken_0x3c0728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0728u;
        // 0x3c072c: 0x8fa2026c  lw          $v0, 0x26C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0728) {
            ctx->pc = 0x3C07E8u;
            goto label_3c07e8;
        }
    }
    ctx->pc = 0x3C0730u;
label_3c0730:
    // 0x3c0730: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3c0730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3c0734:
    // 0x3c0734: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x3c0734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_3c0738:
    // 0x3c0738: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3c0738u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3c073c:
    // 0x3c073c: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
label_3c0740:
    if (ctx->pc == 0x3C0740u) {
        ctx->pc = 0x3C0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C073Cu;
        // 0x3c0740: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0744u;
        goto label_3c0744;
    }
    ctx->pc = 0x3C073Cu;
    {
        const bool branch_taken_0x3c073c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C073Cu;
        // 0x3c0740: 0x24020045  addiu       $v0, $zero, 0x45 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c073c) {
            ctx->pc = 0x3C075Cu;
            goto label_3c075c;
        }
    }
    ctx->pc = 0x3C0744u;
label_3c0744:
    // 0x3c0744: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_3c0748:
    if (ctx->pc == 0x3C0748u) {
        ctx->pc = 0x3C0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0744u;
        // 0x3c0748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C074Cu;
        goto label_3c074c;
    }
    ctx->pc = 0x3C0744u;
    {
        const bool branch_taken_0x3c0744 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3C0748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0744u;
        // 0x3c0748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c0744) {
            ctx->pc = 0x3C075Cu;
            goto label_3c075c;
        }
    }
    ctx->pc = 0x3C074Cu;
label_3c074c:
    // 0x3c074c: 0xc0f1c72  jal         func_3C71C8
label_3c0750:
    if (ctx->pc == 0x3C0750u) {
        ctx->pc = 0x3C0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C074Cu;
        // 0x3c0750: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0754u;
        goto label_3c0754;
    }
    ctx->pc = 0x3C074Cu;
    SET_GPR_U32(ctx, 31, 0x3C0754u);
    ctx->pc = 0x3C0750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C074Cu;
    // 0x3c0750: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C71C8u, 0x3C074Cu, 0x3C0754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0754u;
label_3c0754:
    // 0x3c0754: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x3c0754u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_3c0758:
    // 0x3c0758: 0x82300000  lb          $s0, 0x0($s1)
    ctx->pc = 0x3c0758u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3c075c:
    // 0x3c075c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3c075cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3c0760:
    // 0x3c0760: 0xc0f1c72  jal         func_3C71C8
label_3c0764:
    if (ctx->pc == 0x3C0764u) {
        ctx->pc = 0x3C0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0760u;
        // 0x3c0764: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0768u;
        goto label_3c0768;
    }
    ctx->pc = 0x3C0760u;
    SET_GPR_U32(ctx, 31, 0x3C0768u);
    ctx->pc = 0x3C0764u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0760u;
    // 0x3c0764: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C71C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C71C8u, 0x3C0760u, 0x3C0768u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0768u;
label_3c0768:
    // 0x3c0768: 0x32620008  andi        $v0, $s3, 0x8
    ctx->pc = 0x3c0768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)8);
label_3c076c:
    // 0x3c076c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_3c0770:
    if (ctx->pc == 0x3C0770u) {
        ctx->pc = 0x3C0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C076Cu;
        // 0x3c0770: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0774u;
        goto label_3c0774;
    }
    ctx->pc = 0x3C076Cu;
    {
        const bool branch_taken_0x3c076c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3C0770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C076Cu;
        // 0x3c0770: 0x2361023  subu        $v0, $s1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c076c) {
            ctx->pc = 0x3C07CCu;
            goto label_3c07cc;
        }
    }
    ctx->pc = 0x3C0774u;
label_3c0774:
    // 0x3c0774: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x3c0774u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_3c0778:
    // 0x3c0778: 0xc0f02a0  jal         func_3C0A80
label_3c077c:
    if (ctx->pc == 0x3C077Cu) {
        ctx->pc = 0x3C077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0778u;
        // 0x3c077c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0780u;
        goto label_3c0780;
    }
    ctx->pc = 0x3C0778u;
    SET_GPR_U32(ctx, 31, 0x3C0780u);
    ctx->pc = 0x3C077Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C0778u;
    // 0x3c077c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0A80u, 0x3C0778u, 0x3C0780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C0780u;
label_3c0780:
    // 0x3c0780: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3c0780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3c0784:
    // 0x3c0784: 0x32620001  andi        $v0, $s3, 0x1
    ctx->pc = 0x3c0784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)1);
label_3c0788:
    // 0x3c0788: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_3c078c:
    if (ctx->pc == 0x3C078Cu) {
        ctx->pc = 0x3C078Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0788u;
        // 0x3c078c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0790u;
        goto label_3c0790;
    }
    ctx->pc = 0x3C0788u;
    {
        const bool branch_taken_0x3c0788 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c0788) {
            ctx->pc = 0x3C078Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C0788u;
            // 0x3c078c: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C07A0u;
            goto label_3c07a0;
        }
    }
    ctx->pc = 0x3C0790u;
label_3c0790:
    // 0x3c0790: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x3c0790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
label_3c0794:
    // 0x3c0794: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_3c0798:
    if (ctx->pc == 0x3C0798u) {
        ctx->pc = 0x3C079Cu;
        goto label_3c079c;
    }
    ctx->pc = 0x3C0794u;
    {
        const bool branch_taken_0x3c0794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c0794) {
            ctx->pc = 0x3C07ACu;
            goto label_3c07ac;
        }
    }
    ctx->pc = 0x3C079Cu;
label_3c079c:
    // 0x3c079c: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x3c079cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_3c07a0:
    // 0x3c07a0: 0x8ea2fff8  lw          $v0, -0x8($s5)
    ctx->pc = 0x3c07a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c07a4:
    // 0x3c07a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_3c07a8:
    if (ctx->pc == 0x3C07A8u) {
        ctx->pc = 0x3C07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07A4u;
        // 0x3c07a8: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07ACu;
        goto label_3c07ac;
    }
    ctx->pc = 0x3C07A4u;
    {
        const bool branch_taken_0x3c07a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C07A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07A4u;
        // 0x3c07a8: 0xfc440000  sd          $a0, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c07a4) {
            ctx->pc = 0x3C07BCu;
            goto label_3c07bc;
        }
    }
    ctx->pc = 0x3C07ACu;
label_3c07ac:
    // 0x3c07ac: 0xc0f517c  jal         func_3D45F0
label_3c07b0:
    if (ctx->pc == 0x3C07B0u) {
        ctx->pc = 0x3C07B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07ACu;
        // 0x3c07b0: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07B4u;
        goto label_3c07b4;
    }
    ctx->pc = 0x3C07ACu;
    SET_GPR_U32(ctx, 31, 0x3C07B4u);
    ctx->pc = 0x3C07B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C07ACu;
    // 0x3c07b0: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x3C07ACu, 0x3C07B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C07B4u;
label_3c07b4:
    // 0x3c07b4: 0x8eb0fff8  lw          $s0, -0x8($s5)
    ctx->pc = 0x3c07b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294967288)));
label_3c07b8:
    // 0x3c07b8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x3c07b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_3c07bc:
    // 0x3c07bc: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x3c07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3c07c0:
    // 0x3c07c0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3c07c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3c07c4:
    // 0x3c07c4: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x3c07c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_3c07c8:
    // 0x3c07c8: 0x2361023  subu        $v0, $s1, $s6
    ctx->pc = 0x3c07c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
label_3c07cc:
    // 0x3c07cc: 0x1000fd66  b           . + 4 + (-0x29A << 2)
label_3c07d0:
    if (ctx->pc == 0x3C07D0u) {
        ctx->pc = 0x3C07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07CCu;
        // 0x3c07d0: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07D4u;
        goto label_3c07d4;
    }
    ctx->pc = 0x3C07CCu;
    {
        const bool branch_taken_0x3c07cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C07D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07CCu;
        // 0x3c07d0: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c07cc) {
            ctx->pc = 0x3BFD68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3bfd68;
        }
    }
    ctx->pc = 0x3C07D4u;
label_3c07d4:
    // 0x3c07d4: 0x8fa3026c  lw          $v1, 0x26C($sp)
    ctx->pc = 0x3c07d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3c07d8:
    // 0x3c07d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3c07d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3c07dc:
    // 0x3c07dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3c07e0:
    if (ctx->pc == 0x3C07E0u) {
        ctx->pc = 0x3C07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07DCu;
        // 0x3c07e0: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C07E4u;
        goto label_3c07e4;
    }
    ctx->pc = 0x3C07DCu;
    {
        const bool branch_taken_0x3c07dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C07E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C07DCu;
        // 0x3c07e0: 0x63100b  movn        $v0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c07dc) {
            ctx->pc = 0x3C07E8u;
            goto label_3c07e8;
        }
    }
    ctx->pc = 0x3C07E4u;
label_3c07e4:
    // 0x3c07e4: 0x8fa2026c  lw          $v0, 0x26C($sp)
    ctx->pc = 0x3c07e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 620)));
label_3c07e8:
    // 0x3c07e8: 0x7bb00310  lq          $s0, 0x310($sp)
    ctx->pc = 0x3c07e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 784)));
label_3c07ec:
    // 0x3c07ec: 0x7bb10300  lq          $s1, 0x300($sp)
    ctx->pc = 0x3c07ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 768)));
label_3c07f0:
    // 0x3c07f0: 0x7bb202f0  lq          $s2, 0x2F0($sp)
    ctx->pc = 0x3c07f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 752)));
label_3c07f4:
    // 0x3c07f4: 0x7bb302e0  lq          $s3, 0x2E0($sp)
    ctx->pc = 0x3c07f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 736)));
label_3c07f8:
    // 0x3c07f8: 0x7bb402d0  lq          $s4, 0x2D0($sp)
    ctx->pc = 0x3c07f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_3c07fc:
    // 0x3c07fc: 0x7bb502c0  lq          $s5, 0x2C0($sp)
    ctx->pc = 0x3c07fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_3c0800:
    // 0x3c0800: 0x7bb602b0  lq          $s6, 0x2B0($sp)
    ctx->pc = 0x3c0800u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_3c0804:
    // 0x3c0804: 0x7bb702a0  lq          $s7, 0x2A0($sp)
    ctx->pc = 0x3c0804u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_3c0808:
    // 0x3c0808: 0x7bbe0290  lq          $fp, 0x290($sp)
    ctx->pc = 0x3c0808u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_3c080c:
    // 0x3c080c: 0xdfbf0280  ld          $ra, 0x280($sp)
    ctx->pc = 0x3c080cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_3c0810:
    // 0x3c0810: 0x3e00008  jr          $ra
label_3c0814:
    if (ctx->pc == 0x3C0814u) {
        ctx->pc = 0x3C0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0810u;
        // 0x3c0814: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3C0818u;
        goto label_fallthrough_0x3c0810;
    }
    ctx->pc = 0x3C0810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C0814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C0810u;
        // 0x3c0814: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C0810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3c0810:
    ctx->pc = 0x3C0818u;
}
