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

// Function: sub_001BF890
// Address: 0x1bf890 - 0x1c0458
void sub_001BF890_0x1bf890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF890_0x1bf890");
#endif

    switch (ctx->pc) {
        case 0x1bf890u: goto label_1bf890;
        case 0x1bf894u: goto label_1bf894;
        case 0x1bf898u: goto label_1bf898;
        case 0x1bf89cu: goto label_1bf89c;
        case 0x1bf8a0u: goto label_1bf8a0;
        case 0x1bf8a4u: goto label_1bf8a4;
        case 0x1bf8a8u: goto label_1bf8a8;
        case 0x1bf8acu: goto label_1bf8ac;
        case 0x1bf8b0u: goto label_1bf8b0;
        case 0x1bf8b4u: goto label_1bf8b4;
        case 0x1bf8b8u: goto label_1bf8b8;
        case 0x1bf8bcu: goto label_1bf8bc;
        case 0x1bf8c0u: goto label_1bf8c0;
        case 0x1bf8c4u: goto label_1bf8c4;
        case 0x1bf8c8u: goto label_1bf8c8;
        case 0x1bf8ccu: goto label_1bf8cc;
        case 0x1bf8d0u: goto label_1bf8d0;
        case 0x1bf8d4u: goto label_1bf8d4;
        case 0x1bf8d8u: goto label_1bf8d8;
        case 0x1bf8dcu: goto label_1bf8dc;
        case 0x1bf8e0u: goto label_1bf8e0;
        case 0x1bf8e4u: goto label_1bf8e4;
        case 0x1bf8e8u: goto label_1bf8e8;
        case 0x1bf8ecu: goto label_1bf8ec;
        case 0x1bf8f0u: goto label_1bf8f0;
        case 0x1bf8f4u: goto label_1bf8f4;
        case 0x1bf8f8u: goto label_1bf8f8;
        case 0x1bf8fcu: goto label_1bf8fc;
        case 0x1bf900u: goto label_1bf900;
        case 0x1bf904u: goto label_1bf904;
        case 0x1bf908u: goto label_1bf908;
        case 0x1bf90cu: goto label_1bf90c;
        case 0x1bf910u: goto label_1bf910;
        case 0x1bf914u: goto label_1bf914;
        case 0x1bf918u: goto label_1bf918;
        case 0x1bf91cu: goto label_1bf91c;
        case 0x1bf920u: goto label_1bf920;
        case 0x1bf924u: goto label_1bf924;
        case 0x1bf928u: goto label_1bf928;
        case 0x1bf92cu: goto label_1bf92c;
        case 0x1bf930u: goto label_1bf930;
        case 0x1bf934u: goto label_1bf934;
        case 0x1bf938u: goto label_1bf938;
        case 0x1bf93cu: goto label_1bf93c;
        case 0x1bf940u: goto label_1bf940;
        case 0x1bf944u: goto label_1bf944;
        case 0x1bf948u: goto label_1bf948;
        case 0x1bf94cu: goto label_1bf94c;
        case 0x1bf950u: goto label_1bf950;
        case 0x1bf954u: goto label_1bf954;
        case 0x1bf958u: goto label_1bf958;
        case 0x1bf95cu: goto label_1bf95c;
        case 0x1bf960u: goto label_1bf960;
        case 0x1bf964u: goto label_1bf964;
        case 0x1bf968u: goto label_1bf968;
        case 0x1bf96cu: goto label_1bf96c;
        case 0x1bf970u: goto label_1bf970;
        case 0x1bf974u: goto label_1bf974;
        case 0x1bf978u: goto label_1bf978;
        case 0x1bf97cu: goto label_1bf97c;
        case 0x1bf980u: goto label_1bf980;
        case 0x1bf984u: goto label_1bf984;
        case 0x1bf988u: goto label_1bf988;
        case 0x1bf98cu: goto label_1bf98c;
        case 0x1bf990u: goto label_1bf990;
        case 0x1bf994u: goto label_1bf994;
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf99cu: goto label_1bf99c;
        case 0x1bf9a0u: goto label_1bf9a0;
        case 0x1bf9a4u: goto label_1bf9a4;
        case 0x1bf9a8u: goto label_1bf9a8;
        case 0x1bf9acu: goto label_1bf9ac;
        case 0x1bf9b0u: goto label_1bf9b0;
        case 0x1bf9b4u: goto label_1bf9b4;
        case 0x1bf9b8u: goto label_1bf9b8;
        case 0x1bf9bcu: goto label_1bf9bc;
        case 0x1bf9c0u: goto label_1bf9c0;
        case 0x1bf9c4u: goto label_1bf9c4;
        case 0x1bf9c8u: goto label_1bf9c8;
        case 0x1bf9ccu: goto label_1bf9cc;
        case 0x1bf9d0u: goto label_1bf9d0;
        case 0x1bf9d4u: goto label_1bf9d4;
        case 0x1bf9d8u: goto label_1bf9d8;
        case 0x1bf9dcu: goto label_1bf9dc;
        case 0x1bf9e0u: goto label_1bf9e0;
        case 0x1bf9e4u: goto label_1bf9e4;
        case 0x1bf9e8u: goto label_1bf9e8;
        case 0x1bf9ecu: goto label_1bf9ec;
        case 0x1bf9f0u: goto label_1bf9f0;
        case 0x1bf9f4u: goto label_1bf9f4;
        case 0x1bf9f8u: goto label_1bf9f8;
        case 0x1bf9fcu: goto label_1bf9fc;
        case 0x1bfa00u: goto label_1bfa00;
        case 0x1bfa04u: goto label_1bfa04;
        case 0x1bfa08u: goto label_1bfa08;
        case 0x1bfa0cu: goto label_1bfa0c;
        case 0x1bfa10u: goto label_1bfa10;
        case 0x1bfa14u: goto label_1bfa14;
        case 0x1bfa18u: goto label_1bfa18;
        case 0x1bfa1cu: goto label_1bfa1c;
        case 0x1bfa20u: goto label_1bfa20;
        case 0x1bfa24u: goto label_1bfa24;
        case 0x1bfa28u: goto label_1bfa28;
        case 0x1bfa2cu: goto label_1bfa2c;
        case 0x1bfa30u: goto label_1bfa30;
        case 0x1bfa34u: goto label_1bfa34;
        case 0x1bfa38u: goto label_1bfa38;
        case 0x1bfa3cu: goto label_1bfa3c;
        case 0x1bfa40u: goto label_1bfa40;
        case 0x1bfa44u: goto label_1bfa44;
        case 0x1bfa48u: goto label_1bfa48;
        case 0x1bfa4cu: goto label_1bfa4c;
        case 0x1bfa50u: goto label_1bfa50;
        case 0x1bfa54u: goto label_1bfa54;
        case 0x1bfa58u: goto label_1bfa58;
        case 0x1bfa5cu: goto label_1bfa5c;
        case 0x1bfa60u: goto label_1bfa60;
        case 0x1bfa64u: goto label_1bfa64;
        case 0x1bfa68u: goto label_1bfa68;
        case 0x1bfa6cu: goto label_1bfa6c;
        case 0x1bfa70u: goto label_1bfa70;
        case 0x1bfa74u: goto label_1bfa74;
        case 0x1bfa78u: goto label_1bfa78;
        case 0x1bfa7cu: goto label_1bfa7c;
        case 0x1bfa80u: goto label_1bfa80;
        case 0x1bfa84u: goto label_1bfa84;
        case 0x1bfa88u: goto label_1bfa88;
        case 0x1bfa8cu: goto label_1bfa8c;
        case 0x1bfa90u: goto label_1bfa90;
        case 0x1bfa94u: goto label_1bfa94;
        case 0x1bfa98u: goto label_1bfa98;
        case 0x1bfa9cu: goto label_1bfa9c;
        case 0x1bfaa0u: goto label_1bfaa0;
        case 0x1bfaa4u: goto label_1bfaa4;
        case 0x1bfaa8u: goto label_1bfaa8;
        case 0x1bfaacu: goto label_1bfaac;
        case 0x1bfab0u: goto label_1bfab0;
        case 0x1bfab4u: goto label_1bfab4;
        case 0x1bfab8u: goto label_1bfab8;
        case 0x1bfabcu: goto label_1bfabc;
        case 0x1bfac0u: goto label_1bfac0;
        case 0x1bfac4u: goto label_1bfac4;
        case 0x1bfac8u: goto label_1bfac8;
        case 0x1bfaccu: goto label_1bfacc;
        case 0x1bfad0u: goto label_1bfad0;
        case 0x1bfad4u: goto label_1bfad4;
        case 0x1bfad8u: goto label_1bfad8;
        case 0x1bfadcu: goto label_1bfadc;
        case 0x1bfae0u: goto label_1bfae0;
        case 0x1bfae4u: goto label_1bfae4;
        case 0x1bfae8u: goto label_1bfae8;
        case 0x1bfaecu: goto label_1bfaec;
        case 0x1bfaf0u: goto label_1bfaf0;
        case 0x1bfaf4u: goto label_1bfaf4;
        case 0x1bfaf8u: goto label_1bfaf8;
        case 0x1bfafcu: goto label_1bfafc;
        case 0x1bfb00u: goto label_1bfb00;
        case 0x1bfb04u: goto label_1bfb04;
        case 0x1bfb08u: goto label_1bfb08;
        case 0x1bfb0cu: goto label_1bfb0c;
        case 0x1bfb10u: goto label_1bfb10;
        case 0x1bfb14u: goto label_1bfb14;
        case 0x1bfb18u: goto label_1bfb18;
        case 0x1bfb1cu: goto label_1bfb1c;
        case 0x1bfb20u: goto label_1bfb20;
        case 0x1bfb24u: goto label_1bfb24;
        case 0x1bfb28u: goto label_1bfb28;
        case 0x1bfb2cu: goto label_1bfb2c;
        case 0x1bfb30u: goto label_1bfb30;
        case 0x1bfb34u: goto label_1bfb34;
        case 0x1bfb38u: goto label_1bfb38;
        case 0x1bfb3cu: goto label_1bfb3c;
        case 0x1bfb40u: goto label_1bfb40;
        case 0x1bfb44u: goto label_1bfb44;
        case 0x1bfb48u: goto label_1bfb48;
        case 0x1bfb4cu: goto label_1bfb4c;
        case 0x1bfb50u: goto label_1bfb50;
        case 0x1bfb54u: goto label_1bfb54;
        case 0x1bfb58u: goto label_1bfb58;
        case 0x1bfb5cu: goto label_1bfb5c;
        case 0x1bfb60u: goto label_1bfb60;
        case 0x1bfb64u: goto label_1bfb64;
        case 0x1bfb68u: goto label_1bfb68;
        case 0x1bfb6cu: goto label_1bfb6c;
        case 0x1bfb70u: goto label_1bfb70;
        case 0x1bfb74u: goto label_1bfb74;
        case 0x1bfb78u: goto label_1bfb78;
        case 0x1bfb7cu: goto label_1bfb7c;
        case 0x1bfb80u: goto label_1bfb80;
        case 0x1bfb84u: goto label_1bfb84;
        case 0x1bfb88u: goto label_1bfb88;
        case 0x1bfb8cu: goto label_1bfb8c;
        case 0x1bfb90u: goto label_1bfb90;
        case 0x1bfb94u: goto label_1bfb94;
        case 0x1bfb98u: goto label_1bfb98;
        case 0x1bfb9cu: goto label_1bfb9c;
        case 0x1bfba0u: goto label_1bfba0;
        case 0x1bfba4u: goto label_1bfba4;
        case 0x1bfba8u: goto label_1bfba8;
        case 0x1bfbacu: goto label_1bfbac;
        case 0x1bfbb0u: goto label_1bfbb0;
        case 0x1bfbb4u: goto label_1bfbb4;
        case 0x1bfbb8u: goto label_1bfbb8;
        case 0x1bfbbcu: goto label_1bfbbc;
        case 0x1bfbc0u: goto label_1bfbc0;
        case 0x1bfbc4u: goto label_1bfbc4;
        case 0x1bfbc8u: goto label_1bfbc8;
        case 0x1bfbccu: goto label_1bfbcc;
        case 0x1bfbd0u: goto label_1bfbd0;
        case 0x1bfbd4u: goto label_1bfbd4;
        case 0x1bfbd8u: goto label_1bfbd8;
        case 0x1bfbdcu: goto label_1bfbdc;
        case 0x1bfbe0u: goto label_1bfbe0;
        case 0x1bfbe4u: goto label_1bfbe4;
        case 0x1bfbe8u: goto label_1bfbe8;
        case 0x1bfbecu: goto label_1bfbec;
        case 0x1bfbf0u: goto label_1bfbf0;
        case 0x1bfbf4u: goto label_1bfbf4;
        case 0x1bfbf8u: goto label_1bfbf8;
        case 0x1bfbfcu: goto label_1bfbfc;
        case 0x1bfc00u: goto label_1bfc00;
        case 0x1bfc04u: goto label_1bfc04;
        case 0x1bfc08u: goto label_1bfc08;
        case 0x1bfc0cu: goto label_1bfc0c;
        case 0x1bfc10u: goto label_1bfc10;
        case 0x1bfc14u: goto label_1bfc14;
        case 0x1bfc18u: goto label_1bfc18;
        case 0x1bfc1cu: goto label_1bfc1c;
        case 0x1bfc20u: goto label_1bfc20;
        case 0x1bfc24u: goto label_1bfc24;
        case 0x1bfc28u: goto label_1bfc28;
        case 0x1bfc2cu: goto label_1bfc2c;
        case 0x1bfc30u: goto label_1bfc30;
        case 0x1bfc34u: goto label_1bfc34;
        case 0x1bfc38u: goto label_1bfc38;
        case 0x1bfc3cu: goto label_1bfc3c;
        case 0x1bfc40u: goto label_1bfc40;
        case 0x1bfc44u: goto label_1bfc44;
        case 0x1bfc48u: goto label_1bfc48;
        case 0x1bfc4cu: goto label_1bfc4c;
        case 0x1bfc50u: goto label_1bfc50;
        case 0x1bfc54u: goto label_1bfc54;
        case 0x1bfc58u: goto label_1bfc58;
        case 0x1bfc5cu: goto label_1bfc5c;
        case 0x1bfc60u: goto label_1bfc60;
        case 0x1bfc64u: goto label_1bfc64;
        case 0x1bfc68u: goto label_1bfc68;
        case 0x1bfc6cu: goto label_1bfc6c;
        case 0x1bfc70u: goto label_1bfc70;
        case 0x1bfc74u: goto label_1bfc74;
        case 0x1bfc78u: goto label_1bfc78;
        case 0x1bfc7cu: goto label_1bfc7c;
        case 0x1bfc80u: goto label_1bfc80;
        case 0x1bfc84u: goto label_1bfc84;
        case 0x1bfc88u: goto label_1bfc88;
        case 0x1bfc8cu: goto label_1bfc8c;
        case 0x1bfc90u: goto label_1bfc90;
        case 0x1bfc94u: goto label_1bfc94;
        case 0x1bfc98u: goto label_1bfc98;
        case 0x1bfc9cu: goto label_1bfc9c;
        case 0x1bfca0u: goto label_1bfca0;
        case 0x1bfca4u: goto label_1bfca4;
        case 0x1bfca8u: goto label_1bfca8;
        case 0x1bfcacu: goto label_1bfcac;
        case 0x1bfcb0u: goto label_1bfcb0;
        case 0x1bfcb4u: goto label_1bfcb4;
        case 0x1bfcb8u: goto label_1bfcb8;
        case 0x1bfcbcu: goto label_1bfcbc;
        case 0x1bfcc0u: goto label_1bfcc0;
        case 0x1bfcc4u: goto label_1bfcc4;
        case 0x1bfcc8u: goto label_1bfcc8;
        case 0x1bfcccu: goto label_1bfccc;
        case 0x1bfcd0u: goto label_1bfcd0;
        case 0x1bfcd4u: goto label_1bfcd4;
        case 0x1bfcd8u: goto label_1bfcd8;
        case 0x1bfcdcu: goto label_1bfcdc;
        case 0x1bfce0u: goto label_1bfce0;
        case 0x1bfce4u: goto label_1bfce4;
        case 0x1bfce8u: goto label_1bfce8;
        case 0x1bfcecu: goto label_1bfcec;
        case 0x1bfcf0u: goto label_1bfcf0;
        case 0x1bfcf4u: goto label_1bfcf4;
        case 0x1bfcf8u: goto label_1bfcf8;
        case 0x1bfcfcu: goto label_1bfcfc;
        case 0x1bfd00u: goto label_1bfd00;
        case 0x1bfd04u: goto label_1bfd04;
        case 0x1bfd08u: goto label_1bfd08;
        case 0x1bfd0cu: goto label_1bfd0c;
        case 0x1bfd10u: goto label_1bfd10;
        case 0x1bfd14u: goto label_1bfd14;
        case 0x1bfd18u: goto label_1bfd18;
        case 0x1bfd1cu: goto label_1bfd1c;
        case 0x1bfd20u: goto label_1bfd20;
        case 0x1bfd24u: goto label_1bfd24;
        case 0x1bfd28u: goto label_1bfd28;
        case 0x1bfd2cu: goto label_1bfd2c;
        case 0x1bfd30u: goto label_1bfd30;
        case 0x1bfd34u: goto label_1bfd34;
        case 0x1bfd38u: goto label_1bfd38;
        case 0x1bfd3cu: goto label_1bfd3c;
        case 0x1bfd40u: goto label_1bfd40;
        case 0x1bfd44u: goto label_1bfd44;
        case 0x1bfd48u: goto label_1bfd48;
        case 0x1bfd4cu: goto label_1bfd4c;
        case 0x1bfd50u: goto label_1bfd50;
        case 0x1bfd54u: goto label_1bfd54;
        case 0x1bfd58u: goto label_1bfd58;
        case 0x1bfd5cu: goto label_1bfd5c;
        case 0x1bfd60u: goto label_1bfd60;
        case 0x1bfd64u: goto label_1bfd64;
        case 0x1bfd68u: goto label_1bfd68;
        case 0x1bfd6cu: goto label_1bfd6c;
        case 0x1bfd70u: goto label_1bfd70;
        case 0x1bfd74u: goto label_1bfd74;
        case 0x1bfd78u: goto label_1bfd78;
        case 0x1bfd7cu: goto label_1bfd7c;
        case 0x1bfd80u: goto label_1bfd80;
        case 0x1bfd84u: goto label_1bfd84;
        case 0x1bfd88u: goto label_1bfd88;
        case 0x1bfd8cu: goto label_1bfd8c;
        case 0x1bfd90u: goto label_1bfd90;
        case 0x1bfd94u: goto label_1bfd94;
        case 0x1bfd98u: goto label_1bfd98;
        case 0x1bfd9cu: goto label_1bfd9c;
        case 0x1bfda0u: goto label_1bfda0;
        case 0x1bfda4u: goto label_1bfda4;
        case 0x1bfda8u: goto label_1bfda8;
        case 0x1bfdacu: goto label_1bfdac;
        case 0x1bfdb0u: goto label_1bfdb0;
        case 0x1bfdb4u: goto label_1bfdb4;
        case 0x1bfdb8u: goto label_1bfdb8;
        case 0x1bfdbcu: goto label_1bfdbc;
        case 0x1bfdc0u: goto label_1bfdc0;
        case 0x1bfdc4u: goto label_1bfdc4;
        case 0x1bfdc8u: goto label_1bfdc8;
        case 0x1bfdccu: goto label_1bfdcc;
        case 0x1bfdd0u: goto label_1bfdd0;
        case 0x1bfdd4u: goto label_1bfdd4;
        case 0x1bfdd8u: goto label_1bfdd8;
        case 0x1bfddcu: goto label_1bfddc;
        case 0x1bfde0u: goto label_1bfde0;
        case 0x1bfde4u: goto label_1bfde4;
        case 0x1bfde8u: goto label_1bfde8;
        case 0x1bfdecu: goto label_1bfdec;
        case 0x1bfdf0u: goto label_1bfdf0;
        case 0x1bfdf4u: goto label_1bfdf4;
        case 0x1bfdf8u: goto label_1bfdf8;
        case 0x1bfdfcu: goto label_1bfdfc;
        case 0x1bfe00u: goto label_1bfe00;
        case 0x1bfe04u: goto label_1bfe04;
        case 0x1bfe08u: goto label_1bfe08;
        case 0x1bfe0cu: goto label_1bfe0c;
        case 0x1bfe10u: goto label_1bfe10;
        case 0x1bfe14u: goto label_1bfe14;
        case 0x1bfe18u: goto label_1bfe18;
        case 0x1bfe1cu: goto label_1bfe1c;
        case 0x1bfe20u: goto label_1bfe20;
        case 0x1bfe24u: goto label_1bfe24;
        case 0x1bfe28u: goto label_1bfe28;
        case 0x1bfe2cu: goto label_1bfe2c;
        case 0x1bfe30u: goto label_1bfe30;
        case 0x1bfe34u: goto label_1bfe34;
        case 0x1bfe38u: goto label_1bfe38;
        case 0x1bfe3cu: goto label_1bfe3c;
        case 0x1bfe40u: goto label_1bfe40;
        case 0x1bfe44u: goto label_1bfe44;
        case 0x1bfe48u: goto label_1bfe48;
        case 0x1bfe4cu: goto label_1bfe4c;
        case 0x1bfe50u: goto label_1bfe50;
        case 0x1bfe54u: goto label_1bfe54;
        case 0x1bfe58u: goto label_1bfe58;
        case 0x1bfe5cu: goto label_1bfe5c;
        case 0x1bfe60u: goto label_1bfe60;
        case 0x1bfe64u: goto label_1bfe64;
        case 0x1bfe68u: goto label_1bfe68;
        case 0x1bfe6cu: goto label_1bfe6c;
        case 0x1bfe70u: goto label_1bfe70;
        case 0x1bfe74u: goto label_1bfe74;
        case 0x1bfe78u: goto label_1bfe78;
        case 0x1bfe7cu: goto label_1bfe7c;
        case 0x1bfe80u: goto label_1bfe80;
        case 0x1bfe84u: goto label_1bfe84;
        case 0x1bfe88u: goto label_1bfe88;
        case 0x1bfe8cu: goto label_1bfe8c;
        case 0x1bfe90u: goto label_1bfe90;
        case 0x1bfe94u: goto label_1bfe94;
        case 0x1bfe98u: goto label_1bfe98;
        case 0x1bfe9cu: goto label_1bfe9c;
        case 0x1bfea0u: goto label_1bfea0;
        case 0x1bfea4u: goto label_1bfea4;
        case 0x1bfea8u: goto label_1bfea8;
        case 0x1bfeacu: goto label_1bfeac;
        case 0x1bfeb0u: goto label_1bfeb0;
        case 0x1bfeb4u: goto label_1bfeb4;
        case 0x1bfeb8u: goto label_1bfeb8;
        case 0x1bfebcu: goto label_1bfebc;
        case 0x1bfec0u: goto label_1bfec0;
        case 0x1bfec4u: goto label_1bfec4;
        case 0x1bfec8u: goto label_1bfec8;
        case 0x1bfeccu: goto label_1bfecc;
        case 0x1bfed0u: goto label_1bfed0;
        case 0x1bfed4u: goto label_1bfed4;
        case 0x1bfed8u: goto label_1bfed8;
        case 0x1bfedcu: goto label_1bfedc;
        case 0x1bfee0u: goto label_1bfee0;
        case 0x1bfee4u: goto label_1bfee4;
        case 0x1bfee8u: goto label_1bfee8;
        case 0x1bfeecu: goto label_1bfeec;
        case 0x1bfef0u: goto label_1bfef0;
        case 0x1bfef4u: goto label_1bfef4;
        case 0x1bfef8u: goto label_1bfef8;
        case 0x1bfefcu: goto label_1bfefc;
        case 0x1bff00u: goto label_1bff00;
        case 0x1bff04u: goto label_1bff04;
        case 0x1bff08u: goto label_1bff08;
        case 0x1bff0cu: goto label_1bff0c;
        case 0x1bff10u: goto label_1bff10;
        case 0x1bff14u: goto label_1bff14;
        case 0x1bff18u: goto label_1bff18;
        case 0x1bff1cu: goto label_1bff1c;
        case 0x1bff20u: goto label_1bff20;
        case 0x1bff24u: goto label_1bff24;
        case 0x1bff28u: goto label_1bff28;
        case 0x1bff2cu: goto label_1bff2c;
        case 0x1bff30u: goto label_1bff30;
        case 0x1bff34u: goto label_1bff34;
        case 0x1bff38u: goto label_1bff38;
        case 0x1bff3cu: goto label_1bff3c;
        case 0x1bff40u: goto label_1bff40;
        case 0x1bff44u: goto label_1bff44;
        case 0x1bff48u: goto label_1bff48;
        case 0x1bff4cu: goto label_1bff4c;
        case 0x1bff50u: goto label_1bff50;
        case 0x1bff54u: goto label_1bff54;
        case 0x1bff58u: goto label_1bff58;
        case 0x1bff5cu: goto label_1bff5c;
        case 0x1bff60u: goto label_1bff60;
        case 0x1bff64u: goto label_1bff64;
        case 0x1bff68u: goto label_1bff68;
        case 0x1bff6cu: goto label_1bff6c;
        case 0x1bff70u: goto label_1bff70;
        case 0x1bff74u: goto label_1bff74;
        case 0x1bff78u: goto label_1bff78;
        case 0x1bff7cu: goto label_1bff7c;
        case 0x1bff80u: goto label_1bff80;
        case 0x1bff84u: goto label_1bff84;
        case 0x1bff88u: goto label_1bff88;
        case 0x1bff8cu: goto label_1bff8c;
        case 0x1bff90u: goto label_1bff90;
        case 0x1bff94u: goto label_1bff94;
        case 0x1bff98u: goto label_1bff98;
        case 0x1bff9cu: goto label_1bff9c;
        case 0x1bffa0u: goto label_1bffa0;
        case 0x1bffa4u: goto label_1bffa4;
        case 0x1bffa8u: goto label_1bffa8;
        case 0x1bffacu: goto label_1bffac;
        case 0x1bffb0u: goto label_1bffb0;
        case 0x1bffb4u: goto label_1bffb4;
        case 0x1bffb8u: goto label_1bffb8;
        case 0x1bffbcu: goto label_1bffbc;
        case 0x1bffc0u: goto label_1bffc0;
        case 0x1bffc4u: goto label_1bffc4;
        case 0x1bffc8u: goto label_1bffc8;
        case 0x1bffccu: goto label_1bffcc;
        case 0x1bffd0u: goto label_1bffd0;
        case 0x1bffd4u: goto label_1bffd4;
        case 0x1bffd8u: goto label_1bffd8;
        case 0x1bffdcu: goto label_1bffdc;
        case 0x1bffe0u: goto label_1bffe0;
        case 0x1bffe4u: goto label_1bffe4;
        case 0x1bffe8u: goto label_1bffe8;
        case 0x1bffecu: goto label_1bffec;
        case 0x1bfff0u: goto label_1bfff0;
        case 0x1bfff4u: goto label_1bfff4;
        case 0x1bfff8u: goto label_1bfff8;
        case 0x1bfffcu: goto label_1bfffc;
        case 0x1c0000u: goto label_1c0000;
        case 0x1c0004u: goto label_1c0004;
        case 0x1c0008u: goto label_1c0008;
        case 0x1c000cu: goto label_1c000c;
        case 0x1c0010u: goto label_1c0010;
        case 0x1c0014u: goto label_1c0014;
        case 0x1c0018u: goto label_1c0018;
        case 0x1c001cu: goto label_1c001c;
        case 0x1c0020u: goto label_1c0020;
        case 0x1c0024u: goto label_1c0024;
        case 0x1c0028u: goto label_1c0028;
        case 0x1c002cu: goto label_1c002c;
        case 0x1c0030u: goto label_1c0030;
        case 0x1c0034u: goto label_1c0034;
        case 0x1c0038u: goto label_1c0038;
        case 0x1c003cu: goto label_1c003c;
        case 0x1c0040u: goto label_1c0040;
        case 0x1c0044u: goto label_1c0044;
        case 0x1c0048u: goto label_1c0048;
        case 0x1c004cu: goto label_1c004c;
        case 0x1c0050u: goto label_1c0050;
        case 0x1c0054u: goto label_1c0054;
        case 0x1c0058u: goto label_1c0058;
        case 0x1c005cu: goto label_1c005c;
        case 0x1c0060u: goto label_1c0060;
        case 0x1c0064u: goto label_1c0064;
        case 0x1c0068u: goto label_1c0068;
        case 0x1c006cu: goto label_1c006c;
        case 0x1c0070u: goto label_1c0070;
        case 0x1c0074u: goto label_1c0074;
        case 0x1c0078u: goto label_1c0078;
        case 0x1c007cu: goto label_1c007c;
        case 0x1c0080u: goto label_1c0080;
        case 0x1c0084u: goto label_1c0084;
        case 0x1c0088u: goto label_1c0088;
        case 0x1c008cu: goto label_1c008c;
        case 0x1c0090u: goto label_1c0090;
        case 0x1c0094u: goto label_1c0094;
        case 0x1c0098u: goto label_1c0098;
        case 0x1c009cu: goto label_1c009c;
        case 0x1c00a0u: goto label_1c00a0;
        case 0x1c00a4u: goto label_1c00a4;
        case 0x1c00a8u: goto label_1c00a8;
        case 0x1c00acu: goto label_1c00ac;
        case 0x1c00b0u: goto label_1c00b0;
        case 0x1c00b4u: goto label_1c00b4;
        case 0x1c00b8u: goto label_1c00b8;
        case 0x1c00bcu: goto label_1c00bc;
        case 0x1c00c0u: goto label_1c00c0;
        case 0x1c00c4u: goto label_1c00c4;
        case 0x1c00c8u: goto label_1c00c8;
        case 0x1c00ccu: goto label_1c00cc;
        case 0x1c00d0u: goto label_1c00d0;
        case 0x1c00d4u: goto label_1c00d4;
        case 0x1c00d8u: goto label_1c00d8;
        case 0x1c00dcu: goto label_1c00dc;
        case 0x1c00e0u: goto label_1c00e0;
        case 0x1c00e4u: goto label_1c00e4;
        case 0x1c00e8u: goto label_1c00e8;
        case 0x1c00ecu: goto label_1c00ec;
        case 0x1c00f0u: goto label_1c00f0;
        case 0x1c00f4u: goto label_1c00f4;
        case 0x1c00f8u: goto label_1c00f8;
        case 0x1c00fcu: goto label_1c00fc;
        case 0x1c0100u: goto label_1c0100;
        case 0x1c0104u: goto label_1c0104;
        case 0x1c0108u: goto label_1c0108;
        case 0x1c010cu: goto label_1c010c;
        case 0x1c0110u: goto label_1c0110;
        case 0x1c0114u: goto label_1c0114;
        case 0x1c0118u: goto label_1c0118;
        case 0x1c011cu: goto label_1c011c;
        case 0x1c0120u: goto label_1c0120;
        case 0x1c0124u: goto label_1c0124;
        case 0x1c0128u: goto label_1c0128;
        case 0x1c012cu: goto label_1c012c;
        case 0x1c0130u: goto label_1c0130;
        case 0x1c0134u: goto label_1c0134;
        case 0x1c0138u: goto label_1c0138;
        case 0x1c013cu: goto label_1c013c;
        case 0x1c0140u: goto label_1c0140;
        case 0x1c0144u: goto label_1c0144;
        case 0x1c0148u: goto label_1c0148;
        case 0x1c014cu: goto label_1c014c;
        case 0x1c0150u: goto label_1c0150;
        case 0x1c0154u: goto label_1c0154;
        case 0x1c0158u: goto label_1c0158;
        case 0x1c015cu: goto label_1c015c;
        case 0x1c0160u: goto label_1c0160;
        case 0x1c0164u: goto label_1c0164;
        case 0x1c0168u: goto label_1c0168;
        case 0x1c016cu: goto label_1c016c;
        case 0x1c0170u: goto label_1c0170;
        case 0x1c0174u: goto label_1c0174;
        case 0x1c0178u: goto label_1c0178;
        case 0x1c017cu: goto label_1c017c;
        case 0x1c0180u: goto label_1c0180;
        case 0x1c0184u: goto label_1c0184;
        case 0x1c0188u: goto label_1c0188;
        case 0x1c018cu: goto label_1c018c;
        case 0x1c0190u: goto label_1c0190;
        case 0x1c0194u: goto label_1c0194;
        case 0x1c0198u: goto label_1c0198;
        case 0x1c019cu: goto label_1c019c;
        case 0x1c01a0u: goto label_1c01a0;
        case 0x1c01a4u: goto label_1c01a4;
        case 0x1c01a8u: goto label_1c01a8;
        case 0x1c01acu: goto label_1c01ac;
        case 0x1c01b0u: goto label_1c01b0;
        case 0x1c01b4u: goto label_1c01b4;
        case 0x1c01b8u: goto label_1c01b8;
        case 0x1c01bcu: goto label_1c01bc;
        case 0x1c01c0u: goto label_1c01c0;
        case 0x1c01c4u: goto label_1c01c4;
        case 0x1c01c8u: goto label_1c01c8;
        case 0x1c01ccu: goto label_1c01cc;
        case 0x1c01d0u: goto label_1c01d0;
        case 0x1c01d4u: goto label_1c01d4;
        case 0x1c01d8u: goto label_1c01d8;
        case 0x1c01dcu: goto label_1c01dc;
        case 0x1c01e0u: goto label_1c01e0;
        case 0x1c01e4u: goto label_1c01e4;
        case 0x1c01e8u: goto label_1c01e8;
        case 0x1c01ecu: goto label_1c01ec;
        case 0x1c01f0u: goto label_1c01f0;
        case 0x1c01f4u: goto label_1c01f4;
        case 0x1c01f8u: goto label_1c01f8;
        case 0x1c01fcu: goto label_1c01fc;
        case 0x1c0200u: goto label_1c0200;
        case 0x1c0204u: goto label_1c0204;
        case 0x1c0208u: goto label_1c0208;
        case 0x1c020cu: goto label_1c020c;
        case 0x1c0210u: goto label_1c0210;
        case 0x1c0214u: goto label_1c0214;
        case 0x1c0218u: goto label_1c0218;
        case 0x1c021cu: goto label_1c021c;
        case 0x1c0220u: goto label_1c0220;
        case 0x1c0224u: goto label_1c0224;
        case 0x1c0228u: goto label_1c0228;
        case 0x1c022cu: goto label_1c022c;
        case 0x1c0230u: goto label_1c0230;
        case 0x1c0234u: goto label_1c0234;
        case 0x1c0238u: goto label_1c0238;
        case 0x1c023cu: goto label_1c023c;
        case 0x1c0240u: goto label_1c0240;
        case 0x1c0244u: goto label_1c0244;
        case 0x1c0248u: goto label_1c0248;
        case 0x1c024cu: goto label_1c024c;
        case 0x1c0250u: goto label_1c0250;
        case 0x1c0254u: goto label_1c0254;
        case 0x1c0258u: goto label_1c0258;
        case 0x1c025cu: goto label_1c025c;
        case 0x1c0260u: goto label_1c0260;
        case 0x1c0264u: goto label_1c0264;
        case 0x1c0268u: goto label_1c0268;
        case 0x1c026cu: goto label_1c026c;
        case 0x1c0270u: goto label_1c0270;
        case 0x1c0274u: goto label_1c0274;
        case 0x1c0278u: goto label_1c0278;
        case 0x1c027cu: goto label_1c027c;
        case 0x1c0280u: goto label_1c0280;
        case 0x1c0284u: goto label_1c0284;
        case 0x1c0288u: goto label_1c0288;
        case 0x1c028cu: goto label_1c028c;
        case 0x1c0290u: goto label_1c0290;
        case 0x1c0294u: goto label_1c0294;
        case 0x1c0298u: goto label_1c0298;
        case 0x1c029cu: goto label_1c029c;
        case 0x1c02a0u: goto label_1c02a0;
        case 0x1c02a4u: goto label_1c02a4;
        case 0x1c02a8u: goto label_1c02a8;
        case 0x1c02acu: goto label_1c02ac;
        case 0x1c02b0u: goto label_1c02b0;
        case 0x1c02b4u: goto label_1c02b4;
        case 0x1c02b8u: goto label_1c02b8;
        case 0x1c02bcu: goto label_1c02bc;
        case 0x1c02c0u: goto label_1c02c0;
        case 0x1c02c4u: goto label_1c02c4;
        case 0x1c02c8u: goto label_1c02c8;
        case 0x1c02ccu: goto label_1c02cc;
        case 0x1c02d0u: goto label_1c02d0;
        case 0x1c02d4u: goto label_1c02d4;
        case 0x1c02d8u: goto label_1c02d8;
        case 0x1c02dcu: goto label_1c02dc;
        case 0x1c02e0u: goto label_1c02e0;
        case 0x1c02e4u: goto label_1c02e4;
        case 0x1c02e8u: goto label_1c02e8;
        case 0x1c02ecu: goto label_1c02ec;
        case 0x1c02f0u: goto label_1c02f0;
        case 0x1c02f4u: goto label_1c02f4;
        case 0x1c02f8u: goto label_1c02f8;
        case 0x1c02fcu: goto label_1c02fc;
        case 0x1c0300u: goto label_1c0300;
        case 0x1c0304u: goto label_1c0304;
        case 0x1c0308u: goto label_1c0308;
        case 0x1c030cu: goto label_1c030c;
        case 0x1c0310u: goto label_1c0310;
        case 0x1c0314u: goto label_1c0314;
        case 0x1c0318u: goto label_1c0318;
        case 0x1c031cu: goto label_1c031c;
        case 0x1c0320u: goto label_1c0320;
        case 0x1c0324u: goto label_1c0324;
        case 0x1c0328u: goto label_1c0328;
        case 0x1c032cu: goto label_1c032c;
        case 0x1c0330u: goto label_1c0330;
        case 0x1c0334u: goto label_1c0334;
        case 0x1c0338u: goto label_1c0338;
        case 0x1c033cu: goto label_1c033c;
        case 0x1c0340u: goto label_1c0340;
        case 0x1c0344u: goto label_1c0344;
        case 0x1c0348u: goto label_1c0348;
        case 0x1c034cu: goto label_1c034c;
        case 0x1c0350u: goto label_1c0350;
        case 0x1c0354u: goto label_1c0354;
        case 0x1c0358u: goto label_1c0358;
        case 0x1c035cu: goto label_1c035c;
        case 0x1c0360u: goto label_1c0360;
        case 0x1c0364u: goto label_1c0364;
        case 0x1c0368u: goto label_1c0368;
        case 0x1c036cu: goto label_1c036c;
        case 0x1c0370u: goto label_1c0370;
        case 0x1c0374u: goto label_1c0374;
        case 0x1c0378u: goto label_1c0378;
        case 0x1c037cu: goto label_1c037c;
        case 0x1c0380u: goto label_1c0380;
        case 0x1c0384u: goto label_1c0384;
        case 0x1c0388u: goto label_1c0388;
        case 0x1c038cu: goto label_1c038c;
        case 0x1c0390u: goto label_1c0390;
        case 0x1c0394u: goto label_1c0394;
        case 0x1c0398u: goto label_1c0398;
        case 0x1c039cu: goto label_1c039c;
        case 0x1c03a0u: goto label_1c03a0;
        case 0x1c03a4u: goto label_1c03a4;
        case 0x1c03a8u: goto label_1c03a8;
        case 0x1c03acu: goto label_1c03ac;
        case 0x1c03b0u: goto label_1c03b0;
        case 0x1c03b4u: goto label_1c03b4;
        case 0x1c03b8u: goto label_1c03b8;
        case 0x1c03bcu: goto label_1c03bc;
        case 0x1c03c0u: goto label_1c03c0;
        case 0x1c03c4u: goto label_1c03c4;
        case 0x1c03c8u: goto label_1c03c8;
        case 0x1c03ccu: goto label_1c03cc;
        case 0x1c03d0u: goto label_1c03d0;
        case 0x1c03d4u: goto label_1c03d4;
        case 0x1c03d8u: goto label_1c03d8;
        case 0x1c03dcu: goto label_1c03dc;
        case 0x1c03e0u: goto label_1c03e0;
        case 0x1c03e4u: goto label_1c03e4;
        case 0x1c03e8u: goto label_1c03e8;
        case 0x1c03ecu: goto label_1c03ec;
        case 0x1c03f0u: goto label_1c03f0;
        case 0x1c03f4u: goto label_1c03f4;
        case 0x1c03f8u: goto label_1c03f8;
        case 0x1c03fcu: goto label_1c03fc;
        case 0x1c0400u: goto label_1c0400;
        case 0x1c0404u: goto label_1c0404;
        case 0x1c0408u: goto label_1c0408;
        case 0x1c040cu: goto label_1c040c;
        case 0x1c0410u: goto label_1c0410;
        case 0x1c0414u: goto label_1c0414;
        case 0x1c0418u: goto label_1c0418;
        case 0x1c041cu: goto label_1c041c;
        case 0x1c0420u: goto label_1c0420;
        case 0x1c0424u: goto label_1c0424;
        case 0x1c0428u: goto label_1c0428;
        case 0x1c042cu: goto label_1c042c;
        case 0x1c0430u: goto label_1c0430;
        case 0x1c0434u: goto label_1c0434;
        case 0x1c0438u: goto label_1c0438;
        case 0x1c043cu: goto label_1c043c;
        case 0x1c0440u: goto label_1c0440;
        case 0x1c0444u: goto label_1c0444;
        case 0x1c0448u: goto label_1c0448;
        case 0x1c044cu: goto label_1c044c;
        case 0x1c0450u: goto label_1c0450;
        case 0x1c0454u: goto label_1c0454;
        default: break;
    }

    ctx->pc = 0x1bf890u;

label_1bf890:
    // 0x1bf890: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1bf890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_1bf894:
    // 0x1bf894: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1bf894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_1bf898:
    // 0x1bf898: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x1bf898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_1bf89c:
    // 0x1bf89c: 0x8c62be30  lw          $v0, -0x41D0($v1)
    ctx->pc = 0x1bf89cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950448)));
label_1bf8a0:
    // 0x1bf8a0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bf8a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf8a4:
    // 0x1bf8a4: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x1bf8a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_1bf8a8:
    // 0x1bf8a8: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x1bf8a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_1bf8ac:
    // 0x1bf8ac: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x1bf8acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_1bf8b0:
    // 0x1bf8b0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1bf8b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1bf8b4:
    // 0x1bf8b4: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x1bf8b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_1bf8b8:
    // 0x1bf8b8: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x1bf8b8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_1bf8bc:
    // 0x1bf8bc: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1bf8c0:
    if (ctx->pc == 0x1BF8C0u) {
        ctx->pc = 0x1BF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8BCu;
        // 0x1bf8c0: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8C4u;
        goto label_1bf8c4;
    }
    ctx->pc = 0x1BF8BCu;
    {
        const bool branch_taken_0x1bf8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8BCu;
        // 0x1bf8c0: 0xe7b400a0  swc1        $f20, 0xA0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8bc) {
            ctx->pc = 0x1BF938u;
            goto label_1bf938;
        }
    }
    ctx->pc = 0x1BF8C4u;
label_1bf8c4:
    // 0x1bf8c4: 0x8e4304bc  lw          $v1, 0x4BC($s2)
    ctx->pc = 0x1bf8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
label_1bf8c8:
    // 0x1bf8c8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1bf8c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bf8cc:
    // 0x1bf8cc: 0x8c6300c0  lw          $v1, 0xC0($v1)
    ctx->pc = 0x1bf8ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_1bf8d0:
    // 0x1bf8d0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1bf8d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1bf8d4:
    // 0x1bf8d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1bf8d8:
    if (ctx->pc == 0x1BF8D8u) {
        ctx->pc = 0x1BF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8D4u;
        // 0x1bf8d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8DCu;
        goto label_1bf8dc;
    }
    ctx->pc = 0x1BF8D4u;
    {
        const bool branch_taken_0x1bf8d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8D4u;
        // 0x1bf8d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8d4) {
            ctx->pc = 0x1BF8E8u;
            goto label_1bf8e8;
        }
    }
    ctx->pc = 0x1BF8DCu;
label_1bf8dc:
    // 0x1bf8dc: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x1bf8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1bf8e0:
    // 0x1bf8e0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1bf8e4:
    if (ctx->pc == 0x1BF8E4u) {
        ctx->pc = 0x1BF8E8u;
        goto label_1bf8e8;
    }
    ctx->pc = 0x1BF8E0u;
    {
        const bool branch_taken_0x1bf8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf8e0) {
            ctx->pc = 0x1BF8ECu;
            goto label_1bf8ec;
        }
    }
    ctx->pc = 0x1BF8E8u;
label_1bf8e8:
    // 0x1bf8e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf8ec:
    // 0x1bf8ec: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_1bf8f0:
    if (ctx->pc == 0x1BF8F0u) {
        ctx->pc = 0x1BF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8ECu;
        // 0x1bf8f0: 0x26420210  addiu       $v0, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8F4u;
        goto label_1bf8f4;
    }
    ctx->pc = 0x1BF8ECu;
    {
        const bool branch_taken_0x1bf8ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8ECu;
        // 0x1bf8f0: 0x26420210  addiu       $v0, $s2, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8ec) {
            ctx->pc = 0x1BF938u;
            goto label_1bf938;
        }
    }
    ctx->pc = 0x1BF8F4u;
label_1bf8f4:
    // 0x1bf8f4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bf8f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf8f8:
    // 0x1bf8f8: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x1bf8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf8fc:
    // 0x1bf8fc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bf8fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf900:
    // 0x1bf900: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bf900u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf904:
    // 0x1bf904: 0x0  nop
    ctx->pc = 0x1bf904u;
    // NOP
label_1bf908:
    // 0x1bf908: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bf90c:
    if (ctx->pc == 0x1BF90Cu) {
        ctx->pc = 0x1BF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF908u;
        // 0x1bf90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF910u;
        goto label_1bf910;
    }
    ctx->pc = 0x1BF908u;
    {
        const bool branch_taken_0x1bf908 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF908u;
        // 0x1bf90c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf908) {
            ctx->pc = 0x1BF914u;
            goto label_1bf914;
        }
    }
    ctx->pc = 0x1BF910u;
label_1bf910:
    // 0x1bf910: 0x26420220  addiu       $v0, $s2, 0x220
    ctx->pc = 0x1bf910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_1bf914:
    // 0x1bf914: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1bf918:
    if (ctx->pc == 0x1BF918u) {
        ctx->pc = 0x1BF918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF914u;
        // 0x1bf918: 0xc64001e0  lwc1        $f0, 0x1E0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF91Cu;
        goto label_1bf91c;
    }
    ctx->pc = 0x1BF914u;
    {
        const bool branch_taken_0x1bf914 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf914) {
            ctx->pc = 0x1BF918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF914u;
            // 0x1bf918: 0xc64001e0  lwc1        $f0, 0x1E0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF93Cu;
            goto label_1bf93c;
        }
    }
    ctx->pc = 0x1BF91Cu;
label_1bf91c:
    // 0x1bf91c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bf91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1bf920:
    // 0x1bf920: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bf920u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bf924:
    // 0x1bf924: 0x0  nop
    ctx->pc = 0x1bf924u;
    // NOP
label_1bf928:
    // 0x1bf928: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bf928u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bf92c:
    // 0x1bf92c: 0x0  nop
    ctx->pc = 0x1bf92cu;
    // NOP
label_1bf930:
    // 0x1bf930: 0x4502001b  bc1fl       . + 4 + (0x1B << 2)
label_1bf934:
    if (ctx->pc == 0x1BF934u) {
        ctx->pc = 0x1BF934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF930u;
        // 0x1bf934: 0x8cb00334  lw          $s0, 0x334($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF938u;
        goto label_1bf938;
    }
    ctx->pc = 0x1BF930u;
    {
        const bool branch_taken_0x1bf930 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bf930) {
            ctx->pc = 0x1BF934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF930u;
            // 0x1bf934: 0x8cb00334  lw          $s0, 0x334($a1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF9A0u;
            goto label_1bf9a0;
        }
    }
    ctx->pc = 0x1BF938u;
label_1bf938:
    // 0x1bf938: 0xc64001e0  lwc1        $f0, 0x1E0($s2)
    ctx->pc = 0x1bf938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bf93c:
    // 0x1bf93c: 0x264501e0  addiu       $a1, $s2, 0x1E0
    ctx->pc = 0x1bf93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_1bf940:
    // 0x1bf940: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bf940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1bf944:
    // 0x1bf944: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bf944u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bf948:
    // 0x1bf948: 0x264403c0  addiu       $a0, $s2, 0x3C0
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
label_1bf94c:
    // 0x1bf94c: 0xe64003c0  swc1        $f0, 0x3C0($s2)
    ctx->pc = 0x1bf94cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 960), bits); }
label_1bf950:
    // 0x1bf950: 0x26460200  addiu       $a2, $s2, 0x200
    ctx->pc = 0x1bf950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_1bf954:
    // 0x1bf954: 0xe64104b8  swc1        $f1, 0x4B8($s2)
    ctx->pc = 0x1bf954u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1208), bits); }
label_1bf958:
    // 0x1bf958: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1bf958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bf95c:
    // 0x1bf95c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bf95cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1bf960:
    // 0x1bf960: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1bf960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bf964:
    // 0x1bf964: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bf964u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1bf968:
    // 0x1bf968: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bf968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1bf96c:
    // 0x1bf96c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bf96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1bf970:
    // 0x1bf970: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1bf970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1bf974:
    // 0x1bf974: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1bf974u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_1bf978:
    // 0x1bf978: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1bf978u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1bf97c:
    // 0x1bf97c: 0xfa4103e0  sqc2        $vf1, 0x3E0($s2)
    ctx->pc = 0x1bf97cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 992), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bf980:
    // 0x1bf980: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bf980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf984:
    // 0x1bf984: 0x264403f0  addiu       $a0, $s2, 0x3F0
    ctx->pc = 0x1bf984u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
label_1bf988:
    // 0x1bf988: 0xae4304b4  sw          $v1, 0x4B4($s2)
    ctx->pc = 0x1bf988u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 3));
label_1bf98c:
    // 0x1bf98c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bf98cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bf990:
    // 0x1bf990: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bf990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1bf994:
    // 0x1bf994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf998:
    // 0x1bf998: 0x100002a4  b           . + 4 + (0x2A4 << 2)
label_1bf99c:
    if (ctx->pc == 0x1BF99Cu) {
        ctx->pc = 0x1BF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF998u;
        // 0x1bf99c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9A0u;
        goto label_1bf9a0;
    }
    ctx->pc = 0x1BF998u;
    {
        const bool branch_taken_0x1bf998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF998u;
        // 0x1bf99c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf998) {
            ctx->pc = 0x1C042Cu;
            goto label_1c042c;
        }
    }
    ctx->pc = 0x1BF9A0u;
label_1bf9a0:
    // 0x1bf9a0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1bf9a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_1bf9a4:
    // 0x1bf9a4: 0x3c013e80  lui         $at, 0x3E80
    ctx->pc = 0x1bf9a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16000 << 16));
label_1bf9a8:
    // 0x1bf9a8: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bf9a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1bf9ac:
    // 0x1bf9ac: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1bf9acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1bf9b0:
    // 0x1bf9b0: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x1bf9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_1bf9b4:
    // 0x1bf9b4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1bf9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1bf9b8:
    // 0x1bf9b8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1bf9bc:
    if (ctx->pc == 0x1BF9BCu) {
        ctx->pc = 0x1BF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9B8u;
        // 0x1bf9bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9C0u;
        goto label_1bf9c0;
    }
    ctx->pc = 0x1BF9B8u;
    {
        const bool branch_taken_0x1bf9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9B8u;
        // 0x1bf9bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9b8) {
            ctx->pc = 0x1BF9F4u;
            goto label_1bf9f4;
        }
    }
    ctx->pc = 0x1BF9C0u;
label_1bf9c0:
    // 0x1bf9c0: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x1bf9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_1bf9c4:
    // 0x1bf9c4: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_1bf9c8:
    if (ctx->pc == 0x1BF9C8u) {
        ctx->pc = 0x1BF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9C4u;
        // 0x1bf9c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9CCu;
        goto label_1bf9cc;
    }
    ctx->pc = 0x1BF9C4u;
    {
        const bool branch_taken_0x1bf9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bf9c4) {
            ctx->pc = 0x1BF9C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF9C4u;
            // 0x1bf9c8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF9F8u;
            goto label_1bf9f8;
        }
    }
    ctx->pc = 0x1BF9CCu;
label_1bf9cc:
    // 0x1bf9cc: 0xc0924a8  jal         func_2492A0
label_1bf9d0:
    if (ctx->pc == 0x1BF9D0u) {
        ctx->pc = 0x1BF9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9CCu;
        // 0x1bf9d0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9D4u;
        goto label_1bf9d4;
    }
    ctx->pc = 0x1BF9CCu;
    SET_GPR_U32(ctx, 31, 0x1BF9D4u);
    ctx->pc = 0x1BF9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF9CCu;
    // 0x1bf9d0: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x1BF9CCu, 0x1BF9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF9D4u;
label_1bf9d4:
    // 0x1bf9d4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_1bf9d8:
    if (ctx->pc == 0x1BF9D8u) {
        ctx->pc = 0x1BF9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9D4u;
        // 0x1bf9d8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9DCu;
        goto label_1bf9dc;
    }
    ctx->pc = 0x1BF9D4u;
    {
        const bool branch_taken_0x1bf9d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf9d4) {
            ctx->pc = 0x1BF9D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF9D4u;
            // 0x1bf9d8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF9F8u;
            goto label_1bf9f8;
        }
    }
    ctx->pc = 0x1BF9DCu;
label_1bf9dc:
    // 0x1bf9dc: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1bf9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1bf9e0:
    // 0x1bf9e0: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x1bf9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_1bf9e4:
    // 0x1bf9e4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1bf9e8:
    if (ctx->pc == 0x1BF9E8u) {
        ctx->pc = 0x1BF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9E4u;
        // 0x1bf9e8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9ECu;
        goto label_1bf9ec;
    }
    ctx->pc = 0x1BF9E4u;
    {
        const bool branch_taken_0x1bf9e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BF9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9E4u;
        // 0x1bf9e8: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf9e4) {
            ctx->pc = 0x1BF9F4u;
            goto label_1bf9f4;
        }
    }
    ctx->pc = 0x1BF9ECu;
label_1bf9ec:
    // 0x1bf9ec: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1bf9f0:
    if (ctx->pc == 0x1BF9F0u) {
        ctx->pc = 0x1BF9F4u;
        goto label_1bf9f4;
    }
    ctx->pc = 0x1BF9ECu;
    {
        const bool branch_taken_0x1bf9ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bf9ec) {
            ctx->pc = 0x1BF9F8u;
            goto label_1bf9f8;
        }
    }
    ctx->pc = 0x1BF9F4u;
label_1bf9f4:
    // 0x1bf9f4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bf9f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bf9f8:
    // 0x1bf9f8: 0x52200056  beql        $s1, $zero, . + 4 + (0x56 << 2)
label_1bf9fc:
    if (ctx->pc == 0x1BF9FCu) {
        ctx->pc = 0x1BF9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9F8u;
        // 0x1bf9fc: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA00u;
        goto label_1bfa00;
    }
    ctx->pc = 0x1BF9F8u;
    {
        const bool branch_taken_0x1bf9f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf9f8) {
            ctx->pc = 0x1BF9FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF9F8u;
            // 0x1bf9fc: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB54u;
            goto label_1bfb54;
        }
    }
    ctx->pc = 0x1BFA00u;
label_1bfa00:
    // 0x1bfa00: 0x8e4404bc  lw          $a0, 0x4BC($s2)
    ctx->pc = 0x1bfa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
label_1bfa04:
    // 0x1bfa04: 0x8c900334  lw          $s0, 0x334($a0)
    ctx->pc = 0x1bfa04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 820)));
label_1bfa08:
    // 0x1bfa08: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1bfa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1bfa0c:
    // 0x1bfa0c: 0x2462ffdd  addiu       $v0, $v1, -0x23
    ctx->pc = 0x1bfa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967261));
label_1bfa10:
    // 0x1bfa10: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x1bfa10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_1bfa14:
    // 0x1bfa14: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_1bfa18:
    if (ctx->pc == 0x1BFA18u) {
        ctx->pc = 0x1BFA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA14u;
        // 0x1bfa18: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA1Cu;
        goto label_1bfa1c;
    }
    ctx->pc = 0x1BFA14u;
    {
        const bool branch_taken_0x1bfa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa14) {
            ctx->pc = 0x1BFA18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFA14u;
            // 0x1bfa18: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB54u;
            goto label_1bfb54;
        }
    }
    ctx->pc = 0x1BFA1Cu;
label_1bfa1c:
    // 0x1bfa1c: 0x2462ffcf  addiu       $v0, $v1, -0x31
    ctx->pc = 0x1bfa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
label_1bfa20:
    // 0x1bfa20: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x1bfa20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_1bfa24:
    // 0x1bfa24: 0x5440004b  bnel        $v0, $zero, . + 4 + (0x4B << 2)
label_1bfa28:
    if (ctx->pc == 0x1BFA28u) {
        ctx->pc = 0x1BFA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA24u;
        // 0x1bfa28: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA2Cu;
        goto label_1bfa2c;
    }
    ctx->pc = 0x1BFA24u;
    {
        const bool branch_taken_0x1bfa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa24) {
            ctx->pc = 0x1BFA28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFA24u;
            // 0x1bfa28: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB54u;
            goto label_1bfb54;
        }
    }
    ctx->pc = 0x1BFA2Cu;
label_1bfa2c:
    // 0x1bfa2c: 0x8c820fec  lw          $v0, 0xFEC($a0)
    ctx->pc = 0x1bfa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4076)));
label_1bfa30:
    // 0x1bfa30: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1bfa30u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bfa34:
    // 0x1bfa34: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1bfa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfa38:
    // 0x1bfa38: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1bfa38u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfa3c:
    // 0x1bfa3c: 0x0  nop
    ctx->pc = 0x1bfa3cu;
    // NOP
label_1bfa40:
    // 0x1bfa40: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1bfa44:
    if (ctx->pc == 0x1BFA44u) {
        ctx->pc = 0x1BFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA40u;
        // 0x1bfa44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA48u;
        goto label_1bfa48;
    }
    ctx->pc = 0x1BFA40u;
    {
        const bool branch_taken_0x1bfa40 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BFA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA40u;
        // 0x1bfa44: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa40) {
            ctx->pc = 0x1BFA4Cu;
            goto label_1bfa4c;
        }
    }
    ctx->pc = 0x1BFA48u;
label_1bfa48:
    // 0x1bfa48: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bfa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfa4c:
    // 0x1bfa4c: 0x54800041  bnel        $a0, $zero, . + 4 + (0x41 << 2)
label_1bfa50:
    if (ctx->pc == 0x1BFA50u) {
        ctx->pc = 0x1BFA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA4Cu;
        // 0x1bfa50: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA54u;
        goto label_1bfa54;
    }
    ctx->pc = 0x1BFA4Cu;
    {
        const bool branch_taken_0x1bfa4c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa4c) {
            ctx->pc = 0x1BFA50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFA4Cu;
            // 0x1bfa50: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB54u;
            goto label_1bfb54;
        }
    }
    ctx->pc = 0x1BFA54u;
label_1bfa54:
    // 0x1bfa54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1bfa54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bfa58:
    // 0x1bfa58: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_1bfa5c:
    if (ctx->pc == 0x1BFA5Cu) {
        ctx->pc = 0x1BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA58u;
        // 0x1bfa5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA60u;
        goto label_1bfa60;
    }
    ctx->pc = 0x1BFA58u;
    {
        const bool branch_taken_0x1bfa58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA58u;
        // 0x1bfa5c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa58) {
            ctx->pc = 0x1BFAA4u;
            goto label_1bfaa4;
        }
    }
    ctx->pc = 0x1BFA60u;
label_1bfa60:
    // 0x1bfa60: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1bfa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1bfa64:
    // 0x1bfa64: 0x1062000f  beq         $v1, $v0, . + 4 + (0xF << 2)
label_1bfa68:
    if (ctx->pc == 0x1BFA68u) {
        ctx->pc = 0x1BFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA64u;
        // 0x1bfa68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA6Cu;
        goto label_1bfa6c;
    }
    ctx->pc = 0x1BFA64u;
    {
        const bool branch_taken_0x1bfa64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFA68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA64u;
        // 0x1bfa68: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa64) {
            ctx->pc = 0x1BFAA4u;
            goto label_1bfaa4;
        }
    }
    ctx->pc = 0x1BFA6Cu;
label_1bfa6c:
    // 0x1bfa6c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1bfa70:
    if (ctx->pc == 0x1BFA70u) {
        ctx->pc = 0x1BFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA6Cu;
        // 0x1bfa70: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA74u;
        goto label_1bfa74;
    }
    ctx->pc = 0x1BFA6Cu;
    {
        const bool branch_taken_0x1bfa6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA6Cu;
        // 0x1bfa70: 0x24020047  addiu       $v0, $zero, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa6c) {
            ctx->pc = 0x1BFAA4u;
            goto label_1bfaa4;
        }
    }
    ctx->pc = 0x1BFA74u;
label_1bfa74:
    // 0x1bfa74: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_1bfa78:
    if (ctx->pc == 0x1BFA78u) {
        ctx->pc = 0x1BFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA74u;
        // 0x1bfa78: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA7Cu;
        goto label_1bfa7c;
    }
    ctx->pc = 0x1BFA74u;
    {
        const bool branch_taken_0x1bfa74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1BFA78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA74u;
        // 0x1bfa78: 0x24020048  addiu       $v0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfa74) {
            ctx->pc = 0x1BFAA4u;
            goto label_1bfaa4;
        }
    }
    ctx->pc = 0x1BFA7Cu;
label_1bfa7c:
    // 0x1bfa7c: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
label_1bfa80:
    if (ctx->pc == 0x1BFA80u) {
        ctx->pc = 0x1BFA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA7Cu;
        // 0x1bfa80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA84u;
        goto label_1bfa84;
    }
    ctx->pc = 0x1BFA7Cu;
    {
        const bool branch_taken_0x1bfa7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bfa7c) {
            ctx->pc = 0x1BFA80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFA7Cu;
            // 0x1bfa80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BFA84u;
label_1bfa84:
    // 0x1bfa84: 0xc0924a6  jal         func_249298
label_1bfa88:
    if (ctx->pc == 0x1BFA88u) {
        ctx->pc = 0x1BFA88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA84u;
        // 0x1bfa88: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA8Cu;
        goto label_1bfa8c;
    }
    ctx->pc = 0x1BFA84u;
    SET_GPR_U32(ctx, 31, 0x1BFA8Cu);
    ctx->pc = 0x1BFA88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFA84u;
    // 0x1bfa88: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249298u, 0x1BFA84u, 0x1BFA8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFA8Cu;
label_1bfa8c:
    // 0x1bfa8c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_1bfa90:
    if (ctx->pc == 0x1BFA90u) {
        ctx->pc = 0x1BFA90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFA8Cu;
        // 0x1bfa90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFA94u;
        goto label_1bfa94;
    }
    ctx->pc = 0x1BFA8Cu;
    {
        const bool branch_taken_0x1bfa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfa8c) {
            ctx->pc = 0x1BFA90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFA8Cu;
            // 0x1bfa90: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BFA94u;
label_1bfa94:
    // 0x1bfa94: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x1bfa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_1bfa98:
    // 0x1bfa98: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1bfa98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1bfa9c:
    // 0x1bfa9c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1bfaa0:
    if (ctx->pc == 0x1BFAA0u) {
        ctx->pc = 0x1BFAA4u;
        goto label_1bfaa4;
    }
    ctx->pc = 0x1BFA9Cu;
    {
        const bool branch_taken_0x1bfa9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1bfa9c) {
            ctx->pc = 0x1BFAA8u;
            goto label_1bfaa8;
        }
    }
    ctx->pc = 0x1BFAA4u;
label_1bfaa4:
    // 0x1bfaa4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bfaa4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfaa8:
    // 0x1bfaa8: 0x5620002a  bnel        $s1, $zero, . + 4 + (0x2A << 2)
label_1bfaac:
    if (ctx->pc == 0x1BFAACu) {
        ctx->pc = 0x1BFAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAA8u;
        // 0x1bfaac: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAB0u;
        goto label_1bfab0;
    }
    ctx->pc = 0x1BFAA8u;
    {
        const bool branch_taken_0x1bfaa8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfaa8) {
            ctx->pc = 0x1BFAACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFAA8u;
            // 0x1bfaac: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB54u;
            goto label_1bfb54;
        }
    }
    ctx->pc = 0x1BFAB0u;
label_1bfab0:
    // 0x1bfab0: 0x8e4304bc  lw          $v1, 0x4BC($s2)
    ctx->pc = 0x1bfab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
label_1bfab4:
    // 0x1bfab4: 0xdc621020  ld          $v0, 0x1020($v1)
    ctx->pc = 0x1bfab4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 4128)));
label_1bfab8:
    // 0x1bfab8: 0x21738  dsll        $v0, $v0, 28
    ctx->pc = 0x1bfab8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 28);
label_1bfabc:
    // 0x1bfabc: 0x217ff  dsra32      $v0, $v0, 31
    ctx->pc = 0x1bfabcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 31));
label_1bfac0:
    // 0x1bfac0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1bfac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1bfac4:
    // 0x1bfac4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1bfac4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1bfac8:
    // 0x1bfac8: 0x54400022  bnel        $v0, $zero, . + 4 + (0x22 << 2)
label_1bfacc:
    if (ctx->pc == 0x1BFACCu) {
        ctx->pc = 0x1BFACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAC8u;
        // 0x1bfacc: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAD0u;
        goto label_1bfad0;
    }
    ctx->pc = 0x1BFAC8u;
    {
        const bool branch_taken_0x1bfac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfac8) {
            ctx->pc = 0x1BFACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFAC8u;
            // 0x1bfacc: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB54u;
            goto label_1bfb54;
        }
    }
    ctx->pc = 0x1BFAD0u;
label_1bfad0:
    // 0x1bfad0: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x1bfad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_1bfad4:
    // 0x1bfad4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_1bfad8:
    if (ctx->pc == 0x1BFAD8u) {
        ctx->pc = 0x1BFAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAD4u;
        // 0x1bfad8: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFADCu;
        goto label_1bfadc;
    }
    ctx->pc = 0x1BFAD4u;
    {
        const bool branch_taken_0x1bfad4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfad4) {
            ctx->pc = 0x1BFAD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFAD4u;
            // 0x1bfad8: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB54u;
            goto label_1bfb54;
        }
    }
    ctx->pc = 0x1BFADCu;
label_1bfadc:
    // 0x1bfadc: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x1bfadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
label_1bfae0:
    // 0x1bfae0: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1bfae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1bfae4:
    // 0x1bfae4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfae4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bfae8:
    // 0x1bfae8: 0xc44000a0  lwc1        $f0, 0xA0($v0)
    ctx->pc = 0x1bfae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfaec:
    // 0x1bfaec: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1bfaecu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfaf0:
    // 0x1bfaf0: 0x0  nop
    ctx->pc = 0x1bfaf0u;
    // NOP
label_1bfaf4:
    // 0x1bfaf4: 0x45030017  bc1tl       . + 4 + (0x17 << 2)
label_1bfaf8:
    if (ctx->pc == 0x1BFAF8u) {
        ctx->pc = 0x1BFAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAF4u;
        // 0x1bfaf8: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFAFCu;
        goto label_1bfafc;
    }
    ctx->pc = 0x1BFAF4u;
    {
        const bool branch_taken_0x1bfaf4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfaf4) {
            ctx->pc = 0x1BFAF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFAF4u;
            // 0x1bfaf8: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB54u;
            goto label_1bfb54;
        }
    }
    ctx->pc = 0x1BFAFCu;
label_1bfafc:
    // 0x1bfafc: 0xc06b640  jal         func_1AD900
label_1bfb00:
    if (ctx->pc == 0x1BFB00u) {
        ctx->pc = 0x1BFB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFAFCu;
        // 0x1bfb00: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB04u;
        goto label_1bfb04;
    }
    ctx->pc = 0x1BFAFCu;
    SET_GPR_U32(ctx, 31, 0x1BFB04u);
    ctx->pc = 0x1BFB00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFAFCu;
    // 0x1bfb00: 0x8c640334  lw          $a0, 0x334($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AD900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AD900u, 0x1BFAFCu, 0x1BFB04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFB04u;
label_1bfb04:
    // 0x1bfb04: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_1bfb08:
    if (ctx->pc == 0x1BFB08u) {
        ctx->pc = 0x1BFB08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB04u;
        // 0x1bfb08: 0x8e4304bc  lw          $v1, 0x4BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB0Cu;
        goto label_1bfb0c;
    }
    ctx->pc = 0x1BFB04u;
    {
        const bool branch_taken_0x1bfb04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb04) {
            ctx->pc = 0x1BFB08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFB04u;
            // 0x1bfb08: 0x8e4304bc  lw          $v1, 0x4BC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB14u;
            goto label_1bfb14;
        }
    }
    ctx->pc = 0x1BFB0Cu;
label_1bfb0c:
    // 0x1bfb0c: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bfb10:
    if (ctx->pc == 0x1BFB10u) {
        ctx->pc = 0x1BFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB0Cu;
        // 0x1bfb10: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB14u;
        goto label_1bfb14;
    }
    ctx->pc = 0x1BFB0Cu;
    {
        const bool branch_taken_0x1bfb0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB0Cu;
        // 0x1bfb10: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb0c) {
            ctx->pc = 0x1BFB54u;
            goto label_1bfb54;
        }
    }
    ctx->pc = 0x1BFB14u;
label_1bfb14:
    // 0x1bfb14: 0x3c013f40  lui         $at, 0x3F40
    ctx->pc = 0x1bfb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16192 << 16));
label_1bfb18:
    // 0x1bfb18: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfb18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bfb1c:
    // 0x1bfb1c: 0x8c620fec  lw          $v0, 0xFEC($v1)
    ctx->pc = 0x1bfb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4076)));
label_1bfb20:
    // 0x1bfb20: 0xc4400030  lwc1        $f0, 0x30($v0)
    ctx->pc = 0x1bfb20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfb24:
    // 0x1bfb24: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1bfb24u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfb28:
    // 0x1bfb28: 0x0  nop
    ctx->pc = 0x1bfb28u;
    // NOP
label_1bfb2c:
    // 0x1bfb2c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_1bfb30:
    if (ctx->pc == 0x1BFB30u) {
        ctx->pc = 0x1BFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB2Cu;
        // 0x1bfb30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB34u;
        goto label_1bfb34;
    }
    ctx->pc = 0x1BFB2Cu;
    {
        const bool branch_taken_0x1bfb2c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BFB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB2Cu;
        // 0x1bfb30: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb2c) {
            ctx->pc = 0x1BFB38u;
            goto label_1bfb38;
        }
    }
    ctx->pc = 0x1BFB34u;
label_1bfb34:
    // 0x1bfb34: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1bfb34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfb38:
    // 0x1bfb38: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1bfb3c:
    if (ctx->pc == 0x1BFB3Cu) {
        ctx->pc = 0x1BFB3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB38u;
        // 0x1bfb3c: 0x8e4204d8  lw          $v0, 0x4D8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1240)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB40u;
        goto label_1bfb40;
    }
    ctx->pc = 0x1BFB38u;
    {
        const bool branch_taken_0x1bfb38 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb38) {
            ctx->pc = 0x1BFB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFB38u;
            // 0x1bfb3c: 0x8e4204d8  lw          $v0, 0x4D8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFB58u;
            goto label_1bfb58;
        }
    }
    ctx->pc = 0x1BFB40u;
label_1bfb40:
    // 0x1bfb40: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1bfb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_1bfb44:
    // 0x1bfb44: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x1bfb44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_1bfb48:
    // 0x1bfb48: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x1bfb48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_1bfb4c:
    // 0x1bfb4c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1bfb4cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_1bfb50:
    // 0x1bfb50: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1bfb50u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_1bfb54:
    // 0x1bfb54: 0x8e4204d8  lw          $v0, 0x4D8($s2)
    ctx->pc = 0x1bfb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1240)));
label_1bfb58:
    // 0x1bfb58: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1bfb5c:
    if (ctx->pc == 0x1BFB5Cu) {
        ctx->pc = 0x1BFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB58u;
        // 0x1bfb5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB60u;
        goto label_1bfb60;
    }
    ctx->pc = 0x1BFB58u;
    {
        const bool branch_taken_0x1bfb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB58u;
        // 0x1bfb5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb58) {
            ctx->pc = 0x1BFB6Cu;
            goto label_1bfb6c;
        }
    }
    ctx->pc = 0x1BFB60u;
label_1bfb60:
    // 0x1bfb60: 0xae4004d8  sw          $zero, 0x4D8($s2)
    ctx->pc = 0x1bfb60u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1240), GPR_U32(ctx, 0));
label_1bfb64:
    // 0x1bfb64: 0x100000d5  b           . + 4 + (0xD5 << 2)
label_1bfb68:
    if (ctx->pc == 0x1BFB68u) {
        ctx->pc = 0x1BFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB64u;
        // 0x1bfb68: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB6Cu;
        goto label_1bfb6c;
    }
    ctx->pc = 0x1BFB64u;
    {
        const bool branch_taken_0x1bfb64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB64u;
        // 0x1bfb68: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb64) {
            ctx->pc = 0x1BFEBCu;
            goto label_1bfebc;
        }
    }
    ctx->pc = 0x1BFB6Cu;
label_1bfb6c:
    // 0x1bfb6c: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x1bfb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_1bfb70:
    // 0x1bfb70: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
label_1bfb74:
    if (ctx->pc == 0x1BFB74u) {
        ctx->pc = 0x1BFB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB70u;
        // 0x1bfb74: 0xc6610030  lwc1        $f1, 0x30($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB78u;
        goto label_1bfb78;
    }
    ctx->pc = 0x1BFB70u;
    {
        const bool branch_taken_0x1bfb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb70) {
            ctx->pc = 0x1BFB74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFB70u;
            // 0x1bfb74: 0xc6610030  lwc1        $f1, 0x30($s3) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFBD8u;
            goto label_1bfbd8;
        }
    }
    ctx->pc = 0x1BFB78u;
label_1bfb78:
    // 0x1bfb78: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x1bfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
label_1bfb7c:
    // 0x1bfb7c: 0x504000cf  beql        $v0, $zero, . + 4 + (0xCF << 2)
label_1bfb80:
    if (ctx->pc == 0x1BFB80u) {
        ctx->pc = 0x1BFB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB7Cu;
        // 0x1bfb80: 0xae4004dc  sw          $zero, 0x4DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB84u;
        goto label_1bfb84;
    }
    ctx->pc = 0x1BFB7Cu;
    {
        const bool branch_taken_0x1bfb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bfb7c) {
            ctx->pc = 0x1BFB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFB7Cu;
            // 0x1bfb80: 0xae4004dc  sw          $zero, 0x4DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFEBCu;
            goto label_1bfebc;
        }
    }
    ctx->pc = 0x1BFB84u;
label_1bfb84:
    // 0x1bfb84: 0x8e430394  lw          $v1, 0x394($s2)
    ctx->pc = 0x1bfb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
label_1bfb88:
    // 0x1bfb88: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bfb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1bfb8c:
    // 0x1bfb8c: 0x40f809  jalr        $v0
label_1bfb90:
    if (ctx->pc == 0x1BFB90u) {
        ctx->pc = 0x1BFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB8Cu;
        // 0x1bfb90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB94u;
        goto label_1bfb94;
    }
    ctx->pc = 0x1BFB8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BFB94u);
        ctx->pc = 0x1BFB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB8Cu;
        // 0x1bfb90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFB8Cu, 0x1BFB94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BFB94u;
label_1bfb94:
    // 0x1bfb94: 0x104000c8  beqz        $v0, . + 4 + (0xC8 << 2)
label_1bfb98:
    if (ctx->pc == 0x1BFB98u) {
        ctx->pc = 0x1BFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB94u;
        // 0x1bfb98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFB9Cu;
        goto label_1bfb9c;
    }
    ctx->pc = 0x1BFB94u;
    {
        const bool branch_taken_0x1bfb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB94u;
        // 0x1bfb98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfb94) {
            ctx->pc = 0x1BFEB8u;
            goto label_1bfeb8;
        }
    }
    ctx->pc = 0x1BFB9Cu;
label_1bfb9c:
    // 0x1bfb9c: 0xc0f74be  jal         func_3DD2F8
label_1bfba0:
    if (ctx->pc == 0x1BFBA0u) {
        ctx->pc = 0x1BFBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFB9Cu;
        // 0x1bfba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBA4u;
        goto label_1bfba4;
    }
    ctx->pc = 0x1BFB9Cu;
    SET_GPR_U32(ctx, 31, 0x1BFBA4u);
    ctx->pc = 0x1BFBA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFB9Cu;
    // 0x1bfba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD2F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD2F8u, 0x1BFB9Cu, 0x1BFBA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBA4u;
label_1bfba4:
    // 0x1bfba4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1bfba8:
    if (ctx->pc == 0x1BFBA8u) {
        ctx->pc = 0x1BFBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBA4u;
        // 0x1bfba8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBACu;
        goto label_1bfbac;
    }
    ctx->pc = 0x1BFBA4u;
    {
        const bool branch_taken_0x1bfba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfba4) {
            ctx->pc = 0x1BFBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFBA4u;
            // 0x1bfba8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFBCCu;
            goto label_1bfbcc;
        }
    }
    ctx->pc = 0x1BFBACu;
label_1bfbac:
    // 0x1bfbac: 0xc0f74c2  jal         func_3DD308
label_1bfbb0:
    if (ctx->pc == 0x1BFBB0u) {
        ctx->pc = 0x1BFBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBACu;
        // 0x1bfbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBB4u;
        goto label_1bfbb4;
    }
    ctx->pc = 0x1BFBACu;
    SET_GPR_U32(ctx, 31, 0x1BFBB4u);
    ctx->pc = 0x1BFBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBACu;
    // 0x1bfbb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD308u, 0x1BFBACu, 0x1BFBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBB4u;
label_1bfbb4:
    // 0x1bfbb4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_1bfbb8:
    if (ctx->pc == 0x1BFBB8u) {
        ctx->pc = 0x1BFBB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBB4u;
        // 0x1bfbb8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBBCu;
        goto label_1bfbbc;
    }
    ctx->pc = 0x1BFBB4u;
    {
        const bool branch_taken_0x1bfbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfbb4) {
            ctx->pc = 0x1BFBB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFBB4u;
            // 0x1bfbb8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFBCCu;
            goto label_1bfbcc;
        }
    }
    ctx->pc = 0x1BFBBCu;
label_1bfbbc:
    // 0x1bfbbc: 0xc0f74c6  jal         func_3DD318
label_1bfbc0:
    if (ctx->pc == 0x1BFBC0u) {
        ctx->pc = 0x1BFBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBBCu;
        // 0x1bfbc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBC4u;
        goto label_1bfbc4;
    }
    ctx->pc = 0x1BFBBCu;
    SET_GPR_U32(ctx, 31, 0x1BFBC4u);
    ctx->pc = 0x1BFBC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFBBCu;
    // 0x1bfbc0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD318u, 0x1BFBBCu, 0x1BFBC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFBC4u;
label_1bfbc4:
    // 0x1bfbc4: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_1bfbc8:
    if (ctx->pc == 0x1BFBC8u) {
        ctx->pc = 0x1BFBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBC4u;
        // 0x1bfbc8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBCCu;
        goto label_1bfbcc;
    }
    ctx->pc = 0x1BFBC4u;
    {
        const bool branch_taken_0x1bfbc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfbc4) {
            ctx->pc = 0x1BFBC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFBC4u;
            // 0x1bfbc8: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFBCCu;
            goto label_1bfbcc;
        }
    }
    ctx->pc = 0x1BFBCCu;
label_1bfbcc:
    // 0x1bfbcc: 0x560000bb  bnel        $s0, $zero, . + 4 + (0xBB << 2)
label_1bfbd0:
    if (ctx->pc == 0x1BFBD0u) {
        ctx->pc = 0x1BFBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBCCu;
        // 0x1bfbd0: 0xae4004dc  sw          $zero, 0x4DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBD4u;
        goto label_1bfbd4;
    }
    ctx->pc = 0x1BFBCCu;
    {
        const bool branch_taken_0x1bfbcc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfbcc) {
            ctx->pc = 0x1BFBD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFBCCu;
            // 0x1bfbd0: 0xae4004dc  sw          $zero, 0x4DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFEBCu;
            goto label_1bfebc;
        }
    }
    ctx->pc = 0x1BFBD4u;
label_1bfbd4:
    // 0x1bfbd4: 0xc6610030  lwc1        $f1, 0x30($s3)
    ctx->pc = 0x1bfbd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bfbd8:
    // 0x1bfbd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1bfbd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bfbdc:
    // 0x1bfbdc: 0x0  nop
    ctx->pc = 0x1bfbdcu;
    // NOP
label_1bfbe0:
    // 0x1bfbe0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1bfbe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfbe4:
    // 0x1bfbe4: 0x0  nop
    ctx->pc = 0x1bfbe4u;
    // NOP
label_1bfbe8:
    // 0x1bfbe8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1bfbec:
    if (ctx->pc == 0x1BFBECu) {
        ctx->pc = 0x1BFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBE8u;
        // 0x1bfbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFBF0u;
        goto label_1bfbf0;
    }
    ctx->pc = 0x1BFBE8u;
    {
        const bool branch_taken_0x1bfbe8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BFBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFBE8u;
        // 0x1bfbec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfbe8) {
            ctx->pc = 0x1BFBF4u;
            goto label_1bfbf4;
        }
    }
    ctx->pc = 0x1BFBF0u;
label_1bfbf0:
    // 0x1bfbf0: 0x26420220  addiu       $v0, $s2, 0x220
    ctx->pc = 0x1bfbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_1bfbf4:
    // 0x1bfbf4: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1bfbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1bfbf8:
    // 0x1bfbf8: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bfbf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1bfbfc:
    // 0x1bfbfc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1bfbfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1bfc00:
    // 0x1bfc00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bfc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bfc04:
    // 0x1bfc04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfc04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bfc08:
    // 0x1bfc08: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x1bfc08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfc0c:
    // 0x1bfc0c: 0x0  nop
    ctx->pc = 0x1bfc0cu;
    // NOP
label_1bfc10:
    // 0x1bfc10: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_1bfc14:
    if (ctx->pc == 0x1BFC14u) {
        ctx->pc = 0x1BFC18u;
        goto label_1bfc18;
    }
    ctx->pc = 0x1BFC10u;
    {
        const bool branch_taken_0x1bfc10 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfc10) {
            ctx->pc = 0x1BFC20u;
            goto label_1bfc20;
        }
    }
    ctx->pc = 0x1BFC18u;
label_1bfc18:
    // 0x1bfc18: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bfc1c:
    if (ctx->pc == 0x1BFC1Cu) {
        ctx->pc = 0x1BFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC18u;
        // 0x1bfc1c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC20u;
        goto label_1bfc20;
    }
    ctx->pc = 0x1BFC18u;
    {
        const bool branch_taken_0x1bfc18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC18u;
        // 0x1bfc1c: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc18) {
            ctx->pc = 0x1BFC30u;
            goto label_1bfc30;
        }
    }
    ctx->pc = 0x1BFC20u;
label_1bfc20:
    // 0x1bfc20: 0x460c0834  c.lt.s      $f1, $f12
    ctx->pc = 0x1bfc20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfc24:
    // 0x1bfc24: 0x0  nop
    ctx->pc = 0x1bfc24u;
    // NOP
label_1bfc28:
    // 0x1bfc28: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_1bfc2c:
    if (ctx->pc == 0x1BFC2Cu) {
        ctx->pc = 0x1BFC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC28u;
        // 0x1bfc2c: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC30u;
        goto label_1bfc30;
    }
    ctx->pc = 0x1BFC28u;
    {
        const bool branch_taken_0x1bfc28 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfc28) {
            ctx->pc = 0x1BFC2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFC28u;
            // 0x1bfc2c: 0x46000b06  mov.s       $f12, $f1 (Delay Slot)
            ctx->f[12] = FPU_MOV_S(ctx->f[1]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFC30u;
            goto label_1bfc30;
        }
    }
    ctx->pc = 0x1BFC30u;
label_1bfc30:
    // 0x1bfc30: 0x460c6342  mul.s       $f13, $f12, $f12
    ctx->pc = 0x1bfc30u;
    ctx->f[13] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_1bfc34:
    // 0x1bfc34: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1bfc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1bfc38:
    // 0x1bfc38: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x1bfc38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1bfc3c:
    // 0x1bfc3c: 0x0  nop
    ctx->pc = 0x1bfc3cu;
    // NOP
label_1bfc40:
    // 0x1bfc40: 0x460da341  sub.s       $f13, $f20, $f13
    ctx->pc = 0x1bfc40u;
    ctx->f[13] = FPU_SUB_S(ctx->f[20], ctx->f[13]);
label_1bfc44:
    // 0x1bfc44: 0x460d0344  c1          0xD0344
    ctx->pc = 0x1bfc44u;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1bfc48:
    // 0x1bfc48: 0xc0e404c  jal         func_390130
label_1bfc4c:
    if (ctx->pc == 0x1BFC4Cu) {
        ctx->pc = 0x1BFC50u;
        goto label_1bfc50;
    }
    ctx->pc = 0x1BFC48u;
    SET_GPR_U32(ctx, 31, 0x1BFC50u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x1BFC48u, 0x1BFC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFC50u;
label_1bfc50:
    // 0x1bfc50: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x1bfc50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_1bfc54:
    // 0x1bfc54: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x1bfc54u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_1bfc58:
    // 0x1bfc58: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfc58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bfc5c:
    // 0x1bfc5c: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x1bfc5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_1bfc60:
    // 0x1bfc60: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1bfc60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bfc64:
    // 0x1bfc64: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1bfc64u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1bfc68:
    // 0x1bfc68: 0x46006005  abs.s       $f0, $f12
    ctx->pc = 0x1bfc68u;
    ctx->f[0] = FPU_ABS_S(ctx->f[12]);
label_1bfc6c:
    // 0x1bfc6c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1bfc6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfc70:
    // 0x1bfc70: 0x0  nop
    ctx->pc = 0x1bfc70u;
    // NOP
label_1bfc74:
    // 0x1bfc74: 0x45020092  bc1fl       . + 4 + (0x92 << 2)
label_1bfc78:
    if (ctx->pc == 0x1BFC78u) {
        ctx->pc = 0x1BFC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC74u;
        // 0x1bfc78: 0x8e4204dc  lw          $v0, 0x4DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC7Cu;
        goto label_1bfc7c;
    }
    ctx->pc = 0x1BFC74u;
    {
        const bool branch_taken_0x1bfc74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1bfc74) {
            ctx->pc = 0x1BFC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFC74u;
            // 0x1bfc78: 0x8e4204dc  lw          $v0, 0x4DC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFEC0u;
            goto label_1bfec0;
        }
    }
    ctx->pc = 0x1BFC7Cu;
label_1bfc7c:
    // 0x1bfc7c: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1bfc7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1bfc80:
    // 0x1bfc80: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1bfc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1bfc84:
    // 0x1bfc84: 0x38420002  xori        $v0, $v0, 0x2
    ctx->pc = 0x1bfc84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)2);
label_1bfc88:
    // 0x1bfc88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bfc8c:
    if (ctx->pc == 0x1BFC8Cu) {
        ctx->pc = 0x1BFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC88u;
        // 0x1bfc8c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFC90u;
        goto label_1bfc90;
    }
    ctx->pc = 0x1BFC88u;
    {
        const bool branch_taken_0x1bfc88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BFC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC88u;
        // 0x1bfc8c: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfc88) {
            ctx->pc = 0x1BFCA0u;
            goto label_1bfca0;
        }
    }
    ctx->pc = 0x1BFC90u;
label_1bfc90:
    // 0x1bfc90: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1bfc90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_1bfc94:
    // 0x1bfc94: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x1bfc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1bfc98:
    // 0x1bfc98: 0x50620084  beql        $v1, $v0, . + 4 + (0x84 << 2)
label_1bfc9c:
    if (ctx->pc == 0x1BFC9Cu) {
        ctx->pc = 0x1BFC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFC98u;
        // 0x1bfc9c: 0x8e4204dc  lw          $v0, 0x4DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFCA0u;
        goto label_1bfca0;
    }
    ctx->pc = 0x1BFC98u;
    {
        const bool branch_taken_0x1bfc98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1bfc98) {
            ctx->pc = 0x1BFC9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFC98u;
            // 0x1bfc9c: 0x8e4204dc  lw          $v0, 0x4DC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1244)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFEACu;
            goto label_1bfeac;
        }
    }
    ctx->pc = 0x1BFCA0u;
label_1bfca0:
    // 0x1bfca0: 0xc0f6a96  jal         func_3DAA58
label_1bfca4:
    if (ctx->pc == 0x1BFCA4u) {
        ctx->pc = 0x1BFCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCA0u;
        // 0x1bfca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFCA8u;
        goto label_1bfca8;
    }
    ctx->pc = 0x1BFCA0u;
    SET_GPR_U32(ctx, 31, 0x1BFCA8u);
    ctx->pc = 0x1BFCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFCA0u;
    // 0x1bfca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BFCA0u, 0x1BFCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCA8u;
label_1bfca8:
    // 0x1bfca8: 0xc0f6a96  jal         func_3DAA58
label_1bfcac:
    if (ctx->pc == 0x1BFCACu) {
        ctx->pc = 0x1BFCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFCA8u;
        // 0x1bfcac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFCB0u;
        goto label_1bfcb0;
    }
    ctx->pc = 0x1BFCA8u;
    SET_GPR_U32(ctx, 31, 0x1BFCB0u);
    ctx->pc = 0x1BFCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFCA8u;
    // 0x1bfcac: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BFCA8u, 0x1BFCB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFCB0u;
label_1bfcb0:
    // 0x1bfcb0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1bfcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_1bfcb4:
    // 0x1bfcb4: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x1bfcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1bfcb8:
    // 0x1bfcb8: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1bfcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1bfcbc:
    // 0x1bfcbc: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1bfcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_1bfcc0:
    // 0x1bfcc0: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1bfcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_1bfcc4:
    // 0x1bfcc4: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x1bfcc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1bfcc8:
    // 0x1bfcc8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1bfcc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_1bfccc:
    // 0x1bfccc: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1bfcccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_1bfcd0:
    // 0x1bfcd0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1bfcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1bfcd4:
    // 0x1bfcd4: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1bfcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1bfcd8:
    // 0x1bfcd8: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1bfcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_1bfcdc:
    // 0x1bfcdc: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1bfcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_1bfce0:
    // 0x1bfce0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1bfce0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1bfce4:
    // 0x1bfce4: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1bfce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bfce8:
    // 0x1bfce8: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x1bfce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_1bfcec:
    // 0x1bfcec: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x1bfcecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_1bfcf0:
    // 0x1bfcf0: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x1bfcf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_1bfcf4:
    // 0x1bfcf4: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x1bfcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_1bfcf8:
    // 0x1bfcf8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1bfcf8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1bfcfc:
    // 0x1bfcfc: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1bfcfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bfd00:
    // 0x1bfd00: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1bfd00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_1bfd04:
    // 0x1bfd04: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1bfd04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1bfd08:
    // 0x1bfd08: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x1bfd08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
label_1bfd0c:
    // 0x1bfd0c: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1bfd0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1bfd10:
    // 0x1bfd10: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1bfd10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1bfd14:
    // 0x1bfd14: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1bfd14u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1bfd18:
    // 0x1bfd18: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1bfd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_1bfd1c:
    // 0x1bfd1c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1bfd1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1bfd20:
    // 0x1bfd20: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1bfd20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1bfd24:
    // 0x1bfd24: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bfd24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bfd28:
    // 0x1bfd28: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1bfd28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bfd2c:
    // 0x1bfd2c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1bfd2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bfd30:
    // 0x1bfd30: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1bfd30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1bfd34:
    // 0x1bfd34: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1bfd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1bfd38:
    // 0x1bfd38: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bfd38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1bfd3c:
    // 0x1bfd3c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bfd3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1bfd40:
    // 0x1bfd40: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1bfd40u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1bfd44:
    // 0x1bfd44: 0x0  nop
    ctx->pc = 0x1bfd44u;
    // NOP
label_1bfd48:
    // 0x1bfd48: 0x0  nop
    ctx->pc = 0x1bfd48u;
    // NOP
label_1bfd4c:
    // 0x1bfd4c: 0x46000044  c1          0x44
    ctx->pc = 0x1bfd4cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1bfd50:
    // 0x1bfd50: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bfd50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bfd54:
    // 0x1bfd54: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1bfd54u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1bfd58:
    // 0x1bfd58: 0x0  nop
    ctx->pc = 0x1bfd58u;
    // NOP
label_1bfd5c:
    // 0x1bfd5c: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x1bfd5cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfd60:
    // 0x1bfd60: 0x0  nop
    ctx->pc = 0x1bfd60u;
    // NOP
label_1bfd64:
    // 0x1bfd64: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1bfd68:
    if (ctx->pc == 0x1BFD68u) {
        ctx->pc = 0x1BFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD64u;
        // 0x1bfd68: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFD6Cu;
        goto label_1bfd6c;
    }
    ctx->pc = 0x1BFD64u;
    {
        const bool branch_taken_0x1bfd64 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BFD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFD64u;
        // 0x1bfd68: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfd64) {
            ctx->pc = 0x1BFD8Cu;
            goto label_1bfd8c;
        }
    }
    ctx->pc = 0x1BFD6Cu;
label_1bfd6c:
    // 0x1bfd6c: 0x0  nop
    ctx->pc = 0x1bfd6cu;
    // NOP
label_1bfd70:
    // 0x1bfd70: 0x0  nop
    ctx->pc = 0x1bfd70u;
    // NOP
label_1bfd74:
    // 0x1bfd74: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x1bfd74u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_1bfd78:
    // 0x1bfd78: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1bfd78u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bfd7c:
    // 0x1bfd7c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1bfd7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1bfd80:
    // 0x1bfd80: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1bfd80u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1bfd84:
    // 0x1bfd84: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1bfd84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bfd88:
    // 0x1bfd88: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1bfd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bfd8c:
    // 0x1bfd8c: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1bfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1bfd90:
    // 0x1bfd90: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x1bfd90u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bfd94:
    // 0x1bfd94: 0x7fa30020  sq          $v1, 0x20($sp)
    ctx->pc = 0x1bfd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 3));
label_1bfd98:
    // 0x1bfd98: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1bfd98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1bfd9c:
    // 0x1bfd9c: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1bfd9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1bfda0:
    // 0x1bfda0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bfda0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bfda4:
    // 0x1bfda4: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1bfda4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bfda8:
    // 0x1bfda8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1bfda8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bfdac:
    // 0x1bfdac: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1bfdacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1bfdb0:
    // 0x1bfdb0: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1bfdb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1bfdb4:
    // 0x1bfdb4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bfdb4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1bfdb8:
    // 0x1bfdb8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bfdb8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1bfdbc:
    // 0x1bfdbc: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1bfdbcu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1bfdc0:
    // 0x1bfdc0: 0x0  nop
    ctx->pc = 0x1bfdc0u;
    // NOP
label_1bfdc4:
    // 0x1bfdc4: 0x0  nop
    ctx->pc = 0x1bfdc4u;
    // NOP
label_1bfdc8:
    // 0x1bfdc8: 0x46000044  c1          0x44
    ctx->pc = 0x1bfdc8u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_1bfdcc:
    // 0x1bfdcc: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bfdccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bfdd0:
    // 0x1bfdd0: 0x46012834  c.lt.s      $f5, $f1
    ctx->pc = 0x1bfdd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfdd4:
    // 0x1bfdd4: 0x0  nop
    ctx->pc = 0x1bfdd4u;
    // NOP
label_1bfdd8:
    // 0x1bfdd8: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1bfddc:
    if (ctx->pc == 0x1BFDDCu) {
        ctx->pc = 0x1BFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDD8u;
        // 0x1bfddc: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFDE0u;
        goto label_1bfde0;
    }
    ctx->pc = 0x1BFDD8u;
    {
        const bool branch_taken_0x1bfdd8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BFDDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFDD8u;
        // 0x1bfddc: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfdd8) {
            ctx->pc = 0x1BFE00u;
            goto label_1bfe00;
        }
    }
    ctx->pc = 0x1BFDE0u;
label_1bfde0:
    // 0x1bfde0: 0x0  nop
    ctx->pc = 0x1bfde0u;
    // NOP
label_1bfde4:
    // 0x1bfde4: 0x0  nop
    ctx->pc = 0x1bfde4u;
    // NOP
label_1bfde8:
    // 0x1bfde8: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x1bfde8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_1bfdec:
    // 0x1bfdec: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1bfdecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bfdf0:
    // 0x1bfdf0: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1bfdf0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1bfdf4:
    // 0x1bfdf4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1bfdf4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1bfdf8:
    // 0x1bfdf8: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1bfdf8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bfdfc:
    // 0x1bfdfc: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1bfdfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bfe00:
    // 0x1bfe00: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1bfe00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bfe04:
    // 0x1bfe04: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x1bfe04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
label_1bfe08:
    // 0x1bfe08: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x1bfe08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
label_1bfe0c:
    // 0x1bfe0c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bfe0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bfe10:
    // 0x1bfe10: 0x0  nop
    ctx->pc = 0x1bfe10u;
    // NOP
label_1bfe14:
    // 0x1bfe14: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1bfe14u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1bfe18:
    // 0x1bfe18: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bfe18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1bfe1c:
    // 0x1bfe1c: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x1bfe1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_1bfe20:
    // 0x1bfe20: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x1bfe20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1bfe24:
    // 0x1bfe24: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bfe24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bfe28:
    // 0x1bfe28: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x1bfe28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bfe2c:
    // 0x1bfe2c: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x1bfe2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bfe30:
    // 0x1bfe30: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x1bfe30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1bfe34:
    // 0x1bfe34: 0xc6040008  lwc1        $f4, 0x8($s0)
    ctx->pc = 0x1bfe34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1bfe38:
    // 0x1bfe38: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bfe38u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1bfe3c:
    // 0x1bfe3c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bfe3cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1bfe40:
    // 0x1bfe40: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1bfe40u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1bfe44:
    // 0x1bfe44: 0x0  nop
    ctx->pc = 0x1bfe44u;
    // NOP
label_1bfe48:
    // 0x1bfe48: 0x0  nop
    ctx->pc = 0x1bfe48u;
    // NOP
label_1bfe4c:
    // 0x1bfe4c: 0x46000344  c1          0x344
    ctx->pc = 0x1bfe4cu;
    ctx->f[13] = FPU_SQRT_S(ctx->f[0]);
label_1bfe50:
    // 0x1bfe50: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1bfe50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_1bfe54:
    // 0x1bfe54: 0x460d2834  c.lt.s      $f5, $f13
    ctx->pc = 0x1bfe54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bfe58:
    // 0x1bfe58: 0x0  nop
    ctx->pc = 0x1bfe58u;
    // NOP
label_1bfe5c:
    // 0x1bfe5c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_1bfe60:
    if (ctx->pc == 0x1BFE60u) {
        ctx->pc = 0x1BFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE5Cu;
        // 0x1bfe60: 0xe7ad0050  swc1        $f13, 0x50($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFE64u;
        goto label_1bfe64;
    }
    ctx->pc = 0x1BFE5Cu;
    {
        const bool branch_taken_0x1bfe5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BFE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE5Cu;
        // 0x1bfe60: 0xe7ad0050  swc1        $f13, 0x50($sp) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfe5c) {
            ctx->pc = 0x1BFE84u;
            goto label_1bfe84;
        }
    }
    ctx->pc = 0x1BFE64u;
label_1bfe64:
    // 0x1bfe64: 0x0  nop
    ctx->pc = 0x1bfe64u;
    // NOP
label_1bfe68:
    // 0x1bfe68: 0x0  nop
    ctx->pc = 0x1bfe68u;
    // NOP
label_1bfe6c:
    // 0x1bfe6c: 0x460da003  div.s       $f0, $f20, $f13
    ctx->pc = 0x1bfe6cu;
    { if (ctx->f[13] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[13]); }
label_1bfe70:
    // 0x1bfe70: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x1bfe70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_1bfe74:
    // 0x1bfe74: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x1bfe74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_1bfe78:
    // 0x1bfe78: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1bfe78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_1bfe7c:
    // 0x1bfe7c: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x1bfe7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bfe80:
    // 0x1bfe80: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x1bfe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bfe84:
    // 0x1bfe84: 0x3c050024  lui         $a1, 0x24
    ctx->pc = 0x1bfe84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)36 << 16));
label_1bfe88:
    // 0x1bfe88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bfe88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bfe8c:
    // 0x1bfe8c: 0x34a57000  ori         $a1, $a1, 0x7000
    ctx->pc = 0x1bfe8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)28672);
label_1bfe90:
    // 0x1bfe90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1bfe90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfe94:
    // 0x1bfe94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1bfe94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bfe98:
    // 0x1bfe98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1bfe98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bfe9c:
    // 0x1bfe9c: 0xc0778e6  jal         func_1DE398
label_1bfea0:
    if (ctx->pc == 0x1BFEA0u) {
        ctx->pc = 0x1BFEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFE9Cu;
        // 0x1bfea0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEA4u;
        goto label_1bfea4;
    }
    ctx->pc = 0x1BFE9Cu;
    SET_GPR_U32(ctx, 31, 0x1BFEA4u);
    ctx->pc = 0x1BFEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BFE9Cu;
    // 0x1bfea0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE398u, 0x1BFE9Cu, 0x1BFEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BFEA4u;
label_1bfea4:
    // 0x1bfea4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1bfea8:
    if (ctx->pc == 0x1BFEA8u) {
        ctx->pc = 0x1BFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEA4u;
        // 0x1bfea8: 0x8e4204dc  lw          $v0, 0x4DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1244)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEACu;
        goto label_1bfeac;
    }
    ctx->pc = 0x1BFEA4u;
    {
        const bool branch_taken_0x1bfea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEA4u;
        // 0x1bfea8: 0x8e4204dc  lw          $v0, 0x4DC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfea4) {
            ctx->pc = 0x1BFEC0u;
            goto label_1bfec0;
        }
    }
    ctx->pc = 0x1BFEACu;
label_1bfeac:
    // 0x1bfeac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1bfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1bfeb0:
    // 0x1bfeb0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1bfeb4:
    if (ctx->pc == 0x1BFEB4u) {
        ctx->pc = 0x1BFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEB0u;
        // 0x1bfeb4: 0xae4204dc  sw          $v0, 0x4DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEB8u;
        goto label_1bfeb8;
    }
    ctx->pc = 0x1BFEB0u;
    {
        const bool branch_taken_0x1bfeb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEB0u;
        // 0x1bfeb4: 0xae4204dc  sw          $v0, 0x4DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfeb0) {
            ctx->pc = 0x1BFEBCu;
            goto label_1bfebc;
        }
    }
    ctx->pc = 0x1BFEB8u;
label_1bfeb8:
    // 0x1bfeb8: 0xae4004dc  sw          $zero, 0x4DC($s2)
    ctx->pc = 0x1bfeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
label_1bfebc:
    // 0x1bfebc: 0x8e4204dc  lw          $v0, 0x4DC($s2)
    ctx->pc = 0x1bfebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1244)));
label_1bfec0:
    // 0x1bfec0: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x1bfec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_1bfec4:
    // 0x1bfec4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1bfec8:
    if (ctx->pc == 0x1BFEC8u) {
        ctx->pc = 0x1BFEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEC4u;
        // 0x1bfec8: 0x8e4304b4  lw          $v1, 0x4B4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1204)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFECCu;
        goto label_1bfecc;
    }
    ctx->pc = 0x1BFEC4u;
    {
        const bool branch_taken_0x1bfec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bfec4) {
            ctx->pc = 0x1BFEC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BFEC4u;
            // 0x1bfec8: 0x8e4304b4  lw          $v1, 0x4B4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1204)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BFED8u;
            goto label_1bfed8;
        }
    }
    ctx->pc = 0x1BFECCu;
label_1bfecc:
    // 0x1bfecc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bfed0:
    // 0x1bfed0: 0xae4204b4  sw          $v0, 0x4B4($s2)
    ctx->pc = 0x1bfed0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
label_1bfed4:
    // 0x1bfed4: 0x8e4304b4  lw          $v1, 0x4B4($s2)
    ctx->pc = 0x1bfed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1204)));
label_1bfed8:
    // 0x1bfed8: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x1bfed8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_1bfedc:
    // 0x1bfedc: 0x1040013d  beqz        $v0, . + 4 + (0x13D << 2)
label_1bfee0:
    if (ctx->pc == 0x1BFEE0u) {
        ctx->pc = 0x1BFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEDCu;
        // 0x1bfee0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFEE4u;
        goto label_1bfee4;
    }
    ctx->pc = 0x1BFEDCu;
    {
        const bool branch_taken_0x1bfedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFEDCu;
        // 0x1bfee0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bfedc) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1BFEE4u;
label_1bfee4:
    // 0x1bfee4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1bfee4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1bfee8:
    // 0x1bfee8: 0x2442c6d0  addiu       $v0, $v0, -0x3930
    ctx->pc = 0x1bfee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952656));
label_1bfeec:
    // 0x1bfeec: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1bfeecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1bfef0:
    // 0x1bfef0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1bfef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bfef4:
    // 0x1bfef4: 0x800008  jr          $a0
label_1bfef8:
    if (ctx->pc == 0x1BFEF8u) {
        ctx->pc = 0x1BFEFCu;
        goto label_1bfefc;
    }
    ctx->pc = 0x1BFEF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1BFEFCu: goto label_1bfefc;
            case 0x1BFF60u: goto label_1bff60;
            case 0x1C005Cu: goto label_1c005c;
            case 0x1C0128u: goto label_1c0128;
            case 0x1C03B4u: goto label_1c03b4;
            case 0x1C03C0u: goto label_1c03c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BFEF4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1BFEFCu;
label_1bfefc:
    // 0x1bfefc: 0xc64001e0  lwc1        $f0, 0x1E0($s2)
    ctx->pc = 0x1bfefcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bff00:
    // 0x1bff00: 0x264501e0  addiu       $a1, $s2, 0x1E0
    ctx->pc = 0x1bff00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_1bff04:
    // 0x1bff04: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1bff04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_1bff08:
    // 0x1bff08: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1bff08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1bff0c:
    // 0x1bff0c: 0x264403c0  addiu       $a0, $s2, 0x3C0
    ctx->pc = 0x1bff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
label_1bff10:
    // 0x1bff10: 0xe64003c0  swc1        $f0, 0x3C0($s2)
    ctx->pc = 0x1bff10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 960), bits); }
label_1bff14:
    // 0x1bff14: 0x26460200  addiu       $a2, $s2, 0x200
    ctx->pc = 0x1bff14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_1bff18:
    // 0x1bff18: 0xe64104b8  swc1        $f1, 0x4B8($s2)
    ctx->pc = 0x1bff18u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1208), bits); }
label_1bff1c:
    // 0x1bff1c: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1bff1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bff20:
    // 0x1bff20: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1bff20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1bff24:
    // 0x1bff24: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1bff24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bff28:
    // 0x1bff28: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1bff28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1bff2c:
    // 0x1bff2c: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1bff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1bff30:
    // 0x1bff30: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bff30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1bff34:
    // 0x1bff34: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1bff34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1bff38:
    // 0x1bff38: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1bff38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_1bff3c:
    // 0x1bff3c: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1bff3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1bff40:
    // 0x1bff40: 0xfa4103e0  sqc2        $vf1, 0x3E0($s2)
    ctx->pc = 0x1bff40u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 992), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bff44:
    // 0x1bff44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1bff44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bff48:
    // 0x1bff48: 0x264403f0  addiu       $a0, $s2, 0x3F0
    ctx->pc = 0x1bff48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
label_1bff4c:
    // 0x1bff4c: 0xae4304b4  sw          $v1, 0x4B4($s2)
    ctx->pc = 0x1bff4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 3));
label_1bff50:
    // 0x1bff50: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x1bff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1bff54:
    // 0x1bff54: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1bff54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1bff58:
    // 0x1bff58: 0x1000011e  b           . + 4 + (0x11E << 2)
label_1bff5c:
    if (ctx->pc == 0x1BFF5Cu) {
        ctx->pc = 0x1BFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF58u;
        // 0x1bff5c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFF60u;
        goto label_1bff60;
    }
    ctx->pc = 0x1BFF58u;
    {
        const bool branch_taken_0x1bff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BFF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFF58u;
        // 0x1bff5c: 0xac800014  sw          $zero, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bff58) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1BFF60u;
label_1bff60:
    // 0x1bff60: 0x264303c0  addiu       $v1, $s2, 0x3C0
    ctx->pc = 0x1bff60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
label_1bff64:
    // 0x1bff64: 0x264201e0  addiu       $v0, $s2, 0x1E0
    ctx->pc = 0x1bff64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_1bff68:
    // 0x1bff68: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1bff68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1bff6c:
    // 0x1bff6c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1bff6cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1bff70:
    // 0x1bff70: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1bff70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1bff74:
    // 0x1bff74: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1bff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1bff78:
    // 0x1bff78: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1bff78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1bff7c:
    // 0x1bff7c: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1bff7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1bff80:
    // 0x1bff80: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1bff80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bff84:
    // 0x1bff84: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1bff84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1bff88:
    // 0x1bff88: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1bff88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1bff8c:
    // 0x1bff8c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1bff8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1bff90:
    // 0x1bff90: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1bff90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1bff94:
    // 0x1bff94: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1bff94u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1bff98:
    // 0x1bff98: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1bff98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1bff9c:
    // 0x1bff9c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1bff9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1bffa0:
    // 0x1bffa0: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1bffa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1bffa4:
    // 0x1bffa4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1bffa4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1bffa8:
    // 0x1bffa8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1bffa8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1bffac:
    // 0x1bffac: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1bffacu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1bffb0:
    // 0x1bffb0: 0x46000004  c1          0x4
    ctx->pc = 0x1bffb0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1bffb4:
    // 0x1bffb4: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x1bffb4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1bffb8:
    // 0x1bffb8: 0x0  nop
    ctx->pc = 0x1bffb8u;
    // NOP
label_1bffbc:
    // 0x1bffbc: 0x45000105  bc1f        . + 4 + (0x105 << 2)
label_1bffc0:
    if (ctx->pc == 0x1BFFC0u) {
        ctx->pc = 0x1BFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFBCu;
        // 0x1bffc0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFFC4u;
        goto label_1bffc4;
    }
    ctx->pc = 0x1BFFBCu;
    {
        const bool branch_taken_0x1bffbc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BFFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFBCu;
        // 0x1bffc0: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffbc) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1BFFC4u;
label_1bffc4:
    // 0x1bffc4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1bffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1bffc8:
    // 0x1bffc8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1bffcc:
    if (ctx->pc == 0x1BFFCCu) {
        ctx->pc = 0x1BFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFC8u;
        // 0x1bffcc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BFFD0u;
        goto label_1bffd0;
    }
    ctx->pc = 0x1BFFC8u;
    {
        const bool branch_taken_0x1bffc8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1BFFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BFFC8u;
        // 0x1bffcc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bffc8) {
            ctx->pc = 0x1BFFE4u;
            goto label_1bffe4;
        }
    }
    ctx->pc = 0x1BFFD0u;
label_1bffd0:
    // 0x1bffd0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bffd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bffd4:
    // 0x1bffd4: 0x0  nop
    ctx->pc = 0x1bffd4u;
    // NOP
label_1bffd8:
    // 0x1bffd8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bffd8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bffdc:
    // 0x1bffdc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bffe0:
    if (ctx->pc == 0x1BFFE0u) {
        ctx->pc = 0x1BFFE4u;
        goto label_1bffe4;
    }
    ctx->pc = 0x1BFFDCu;
    {
        const bool branch_taken_0x1bffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bffdc) {
            ctx->pc = 0x1BFFFCu;
            goto label_1bfffc;
        }
    }
    ctx->pc = 0x1BFFE4u;
label_1bffe4:
    // 0x1bffe4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1bffe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1bffe8:
    // 0x1bffe8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1bffe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1bffec:
    // 0x1bffec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1bffecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1bfff0:
    // 0x1bfff0: 0x0  nop
    ctx->pc = 0x1bfff0u;
    // NOP
label_1bfff4:
    // 0x1bfff4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1bfff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1bfff8:
    // 0x1bfff8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1bfff8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1bfffc:
    // 0x1bfffc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1bfffcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1c0000:
    // 0x1c0000: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c0000u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1c0004:
    // 0x1c0004: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0004u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c0008:
    // 0x1c0008: 0x264501e0  addiu       $a1, $s2, 0x1E0
    ctx->pc = 0x1c0008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_1c000c:
    // 0x1c000c: 0xc64001e0  lwc1        $f0, 0x1E0($s2)
    ctx->pc = 0x1c000cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0010:
    // 0x1c0010: 0x264403f0  addiu       $a0, $s2, 0x3F0
    ctx->pc = 0x1c0010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
label_1c0014:
    // 0x1c0014: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1c0014u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1c0018:
    // 0x1c0018: 0x26460200  addiu       $a2, $s2, 0x200
    ctx->pc = 0x1c0018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_1c001c:
    // 0x1c001c: 0xe64003f0  swc1        $f0, 0x3F0($s2)
    ctx->pc = 0x1c001cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1008), bits); }
label_1c0020:
    // 0x1c0020: 0x46160840  add.s       $f1, $f1, $f22
    ctx->pc = 0x1c0020u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[22]);
label_1c0024:
    // 0x1c0024: 0xe64104b8  swc1        $f1, 0x4B8($s2)
    ctx->pc = 0x1c0024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1208), bits); }
label_1c0028:
    // 0x1c0028: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1c0028u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c002c:
    // 0x1c002c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1c002cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1c0030:
    // 0x1c0030: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1c0030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c0034:
    // 0x1c0034: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1c0034u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1c0038:
    // 0x1c0038: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1c0038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_1c003c:
    // 0x1c003c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x1c003cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_1c0040:
    // 0x1c0040: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1c0040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1c0044:
    // 0x1c0044: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x1c0044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_1c0048:
    // 0x1c0048: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1c0048u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1c004c:
    // 0x1c004c: 0xfa410410  sqc2        $vf1, 0x410($s2)
    ctx->pc = 0x1c004cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1040), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c0050:
    // 0x1c0050: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1c0050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c0054:
    // 0x1c0054: 0x100000df  b           . + 4 + (0xDF << 2)
label_1c0058:
    if (ctx->pc == 0x1C0058u) {
        ctx->pc = 0x1C0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0054u;
        // 0x1c0058: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C005Cu;
        goto label_1c005c;
    }
    ctx->pc = 0x1C0054u;
    {
        const bool branch_taken_0x1c0054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0054u;
        // 0x1c0058: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0054) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1C005Cu;
label_1c005c:
    // 0x1c005c: 0x264303f0  addiu       $v1, $s2, 0x3F0
    ctx->pc = 0x1c005cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1008));
label_1c0060:
    // 0x1c0060: 0x264201e0  addiu       $v0, $s2, 0x1E0
    ctx->pc = 0x1c0060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_1c0064:
    // 0x1c0064: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1c0064u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_1c0068:
    // 0x1c0068: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x1c0068u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1c006c:
    // 0x1c006c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x1c006cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_1c0070:
    // 0x1c0070: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x1c0070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c0074:
    // 0x1c0074: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1c0074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c0078:
    // 0x1c0078: 0xc7a10014  lwc1        $f1, 0x14($sp)
    ctx->pc = 0x1c0078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c007c:
    // 0x1c007c: 0xc7a20018  lwc1        $f2, 0x18($sp)
    ctx->pc = 0x1c007cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c0080:
    // 0x1c0080: 0xc7a5001c  lwc1        $f5, 0x1C($sp)
    ctx->pc = 0x1c0080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_1c0084:
    // 0x1c0084: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1c0084u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1c0088:
    // 0x1c0088: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1c0088u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1c008c:
    // 0x1c008c: 0xe7a20008  swc1        $f2, 0x8($sp)
    ctx->pc = 0x1c008cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_1c0090:
    // 0x1c0090: 0xe7a5000c  swc1        $f5, 0xC($sp)
    ctx->pc = 0x1c0090u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1c0094:
    // 0x1c0094: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c0094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1c0098:
    // 0x1c0098: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c0098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1c009c:
    // 0x1c009c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c009cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_1c00a0:
    // 0x1c00a0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c00a0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_1c00a4:
    // 0x1c00a4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c00a4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_1c00a8:
    // 0x1c00a8: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x1c00a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_1c00ac:
    // 0x1c00ac: 0x46000004  c1          0x4
    ctx->pc = 0x1c00acu;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_1c00b0:
    // 0x1c00b0: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x1c00b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c00b4:
    // 0x1c00b4: 0x0  nop
    ctx->pc = 0x1c00b4u;
    // NOP
label_1c00b8:
    // 0x1c00b8: 0x450300c6  bc1tl       . + 4 + (0xC6 << 2)
label_1c00bc:
    if (ctx->pc == 0x1C00BCu) {
        ctx->pc = 0x1C00BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00B8u;
        // 0x1c00bc: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C00C0u;
        goto label_1c00c0;
    }
    ctx->pc = 0x1C00B8u;
    {
        const bool branch_taken_0x1c00b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c00b8) {
            ctx->pc = 0x1C00BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C00B8u;
            // 0x1c00bc: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1C00C0u;
label_1c00c0:
    // 0x1c00c0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1c00c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1c00c4:
    // 0x1c00c4: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1c00c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1c00c8:
    // 0x1c00c8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1c00cc:
    if (ctx->pc == 0x1C00CCu) {
        ctx->pc = 0x1C00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00C8u;
        // 0x1c00cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C00D0u;
        goto label_1c00d0;
    }
    ctx->pc = 0x1C00C8u;
    {
        const bool branch_taken_0x1c00c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C00CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C00C8u;
        // 0x1c00cc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c00c8) {
            ctx->pc = 0x1C00E4u;
            goto label_1c00e4;
        }
    }
    ctx->pc = 0x1C00D0u;
label_1c00d0:
    // 0x1c00d0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c00d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c00d4:
    // 0x1c00d4: 0x0  nop
    ctx->pc = 0x1c00d4u;
    // NOP
label_1c00d8:
    // 0x1c00d8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c00d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c00dc:
    // 0x1c00dc: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c00e0:
    if (ctx->pc == 0x1C00E0u) {
        ctx->pc = 0x1C00E4u;
        goto label_1c00e4;
    }
    ctx->pc = 0x1C00DCu;
    {
        const bool branch_taken_0x1c00dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c00dc) {
            ctx->pc = 0x1C00FCu;
            goto label_1c00fc;
        }
    }
    ctx->pc = 0x1C00E4u;
label_1c00e4:
    // 0x1c00e4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c00e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c00e8:
    // 0x1c00e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c00e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c00ec:
    // 0x1c00ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c00ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c00f0:
    // 0x1c00f0: 0x0  nop
    ctx->pc = 0x1c00f0u;
    // NOP
label_1c00f4:
    // 0x1c00f4: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c00f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c00f8:
    // 0x1c00f8: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c00f8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c00fc:
    // 0x1c00fc: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c00fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1c0100:
    // 0x1c0100: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c0100u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1c0104:
    // 0x1c0104: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0104u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c0108:
    // 0x1c0108: 0xc64104b8  lwc1        $f1, 0x4B8($s2)
    ctx->pc = 0x1c0108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 1208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c010c:
    // 0x1c010c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c010cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1c0110:
    // 0x1c0110: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c0110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c0114:
    // 0x1c0114: 0x0  nop
    ctx->pc = 0x1c0114u;
    // NOP
label_1c0118:
    // 0x1c0118: 0x450000ae  bc1f        . + 4 + (0xAE << 2)
label_1c011c:
    if (ctx->pc == 0x1C011Cu) {
        ctx->pc = 0x1C011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0118u;
        // 0x1c011c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0120u;
        goto label_1c0120;
    }
    ctx->pc = 0x1C0118u;
    {
        const bool branch_taken_0x1c0118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C011Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0118u;
        // 0x1c011c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0118) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1C0120u;
label_1c0120:
    // 0x1c0120: 0x100000ac  b           . + 4 + (0xAC << 2)
label_1c0124:
    if (ctx->pc == 0x1C0124u) {
        ctx->pc = 0x1C0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0120u;
        // 0x1c0124: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0128u;
        goto label_1c0128;
    }
    ctx->pc = 0x1C0120u;
    {
        const bool branch_taken_0x1c0120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0120u;
        // 0x1c0124: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0120) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1C0128u;
label_1c0128:
    // 0x1c0128: 0x8e4204dc  lw          $v0, 0x4DC($s2)
    ctx->pc = 0x1c0128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1244)));
label_1c012c:
    // 0x1c012c: 0x2c420033  sltiu       $v0, $v0, 0x33
    ctx->pc = 0x1c012cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)51) ? 1 : 0);
label_1c0130:
    // 0x1c0130: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1c0134:
    if (ctx->pc == 0x1C0134u) {
        ctx->pc = 0x1C0134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0130u;
        // 0x1c0134: 0xae4004dc  sw          $zero, 0x4DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0138u;
        goto label_1c0138;
    }
    ctx->pc = 0x1C0130u;
    {
        const bool branch_taken_0x1c0130 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0130) {
            ctx->pc = 0x1C0134u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0130u;
            // 0x1c0134: 0xae4004dc  sw          $zero, 0x4DC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 1244), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0138u;
            goto label_1c0138;
        }
    }
    ctx->pc = 0x1C0138u;
label_1c0138:
    // 0x1c0138: 0xae40037c  sw          $zero, 0x37C($s2)
    ctx->pc = 0x1c0138u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 892), GPR_U32(ctx, 0));
label_1c013c:
    // 0x1c013c: 0x8e4404bc  lw          $a0, 0x4BC($s2)
    ctx->pc = 0x1c013cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1212)));
label_1c0140:
    // 0x1c0140: 0x8c82010c  lw          $v0, 0x10C($a0)
    ctx->pc = 0x1c0140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_1c0144:
    // 0x1c0144: 0x8c430098  lw          $v1, 0x98($v0)
    ctx->pc = 0x1c0144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 152)));
label_1c0148:
    // 0x1c0148: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_1c014c:
    if (ctx->pc == 0x1C014Cu) {
        ctx->pc = 0x1C014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0148u;
        // 0x1c014c: 0x264300d0  addiu       $v1, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0150u;
        goto label_1c0150;
    }
    ctx->pc = 0x1C0148u;
    {
        const bool branch_taken_0x1c0148 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0148u;
        // 0x1c014c: 0x264300d0  addiu       $v1, $s2, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0148) {
            ctx->pc = 0x1C01C4u;
            goto label_1c01c4;
        }
    }
    ctx->pc = 0x1C0150u;
label_1c0150:
    // 0x1c0150: 0x8c840ffc  lw          $a0, 0xFFC($a0)
    ctx->pc = 0x1c0150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4092)));
label_1c0154:
    // 0x1c0154: 0xc072596  jal         func_1C9658
label_1c0158:
    if (ctx->pc == 0x1C0158u) {
        ctx->pc = 0x1C0158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0154u;
        // 0x1c0158: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C015Cu;
        goto label_1c015c;
    }
    ctx->pc = 0x1C0154u;
    SET_GPR_U32(ctx, 31, 0x1C015Cu);
    ctx->pc = 0x1C0158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0154u;
    // 0x1c0158: 0x8e450030  lw          $a1, 0x30($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C9658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C9658u, 0x1C0154u, 0x1C015Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C015Cu;
label_1c015c:
    // 0x1c015c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1c0160:
    if (ctx->pc == 0x1C0160u) {
        ctx->pc = 0x1C0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C015Cu;
        // 0x1c0160: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0164u;
        goto label_1c0164;
    }
    ctx->pc = 0x1C015Cu;
    {
        const bool branch_taken_0x1c015c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C015Cu;
        // 0x1c0160: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c015c) {
            ctx->pc = 0x1C01C0u;
            goto label_1c01c0;
        }
    }
    ctx->pc = 0x1C0164u;
label_1c0164:
    // 0x1c0164: 0x8e510030  lw          $s1, 0x30($s2)
    ctx->pc = 0x1c0164u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1c0168:
    // 0x1c0168: 0x8e430394  lw          $v1, 0x394($s2)
    ctx->pc = 0x1c0168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
label_1c016c:
    // 0x1c016c: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x1c016cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_1c0170:
    // 0x1c0170: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1c0170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_1c0174:
    // 0x1c0174: 0x40f809  jalr        $v0
label_1c0178:
    if (ctx->pc == 0x1C0178u) {
        ctx->pc = 0x1C0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0174u;
        // 0x1c0178: 0x265001e0  addiu       $s0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C017Cu;
        goto label_1c017c;
    }
    ctx->pc = 0x1C0174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C017Cu);
        ctx->pc = 0x1C0178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0174u;
        // 0x1c0178: 0x265001e0  addiu       $s0, $s2, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0174u, 0x1C017Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C017Cu;
label_1c017c:
    // 0x1c017c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1c017cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0180:
    // 0x1c0180: 0x2302b  sltu        $a2, $zero, $v0
    ctx->pc = 0x1c0180u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1c0184:
    // 0x1c0184: 0xc070dd4  jal         func_1C3750
label_1c0188:
    if (ctx->pc == 0x1C0188u) {
        ctx->pc = 0x1C0188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0184u;
        // 0x1c0188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C018Cu;
        goto label_1c018c;
    }
    ctx->pc = 0x1C0184u;
    SET_GPR_U32(ctx, 31, 0x1C018Cu);
    ctx->pc = 0x1C0188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0184u;
    // 0x1c0188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C3750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3750u, 0x1C0184u, 0x1C018Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C018Cu;
label_1c018c:
    // 0x1c018c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1c018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_1c0190:
    // 0x1c0190: 0x1223001b  beq         $s1, $v1, . + 4 + (0x1B << 2)
label_1c0194:
    if (ctx->pc == 0x1C0194u) {
        ctx->pc = 0x1C0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0190u;
        // 0x1c0194: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0198u;
        goto label_1c0198;
    }
    ctx->pc = 0x1C0190u;
    {
        const bool branch_taken_0x1c0190 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C0194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0190u;
        // 0x1c0194: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0190) {
            ctx->pc = 0x1C0200u;
            goto label_1c0200;
        }
    }
    ctx->pc = 0x1C0198u;
label_1c0198:
    // 0x1c0198: 0x8e430394  lw          $v1, 0x394($s2)
    ctx->pc = 0x1c0198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
label_1c019c:
    // 0x1c019c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1c019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1c01a0:
    // 0x1c01a0: 0x40f809  jalr        $v0
label_1c01a4:
    if (ctx->pc == 0x1C01A4u) {
        ctx->pc = 0x1C01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01A0u;
        // 0x1c01a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01A8u;
        goto label_1c01a8;
    }
    ctx->pc = 0x1C01A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C01A8u);
        ctx->pc = 0x1C01A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01A0u;
        // 0x1c01a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C01A0u, 0x1C01A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C01A8u;
label_1c01a8:
    // 0x1c01a8: 0x8e430338  lw          $v1, 0x338($s2)
    ctx->pc = 0x1c01a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_1c01ac:
    // 0x1c01ac: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
label_1c01b0:
    if (ctx->pc == 0x1C01B0u) {
        ctx->pc = 0x1C01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01ACu;
        // 0x1c01b0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01B4u;
        goto label_1c01b4;
    }
    ctx->pc = 0x1C01ACu;
    {
        const bool branch_taken_0x1c01ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C01B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01ACu;
        // 0x1c01b0: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01ac) {
            ctx->pc = 0x1C0200u;
            goto label_1c0200;
        }
    }
    ctx->pc = 0x1C01B4u;
label_1c01b4:
    // 0x1c01b4: 0xae40037c  sw          $zero, 0x37C($s2)
    ctx->pc = 0x1c01b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 892), GPR_U32(ctx, 0));
label_1c01b8:
    // 0x1c01b8: 0x10000011  b           . + 4 + (0x11 << 2)
label_1c01bc:
    if (ctx->pc == 0x1C01BCu) {
        ctx->pc = 0x1C01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B8u;
        // 0x1c01bc: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01C0u;
        goto label_1c01c0;
    }
    ctx->pc = 0x1C01B8u;
    {
        const bool branch_taken_0x1c01b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01B8u;
        // 0x1c01bc: 0xae4004b4  sw          $zero, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01b8) {
            ctx->pc = 0x1C0200u;
            goto label_1c0200;
        }
    }
    ctx->pc = 0x1C01C0u;
label_1c01c0:
    // 0x1c01c0: 0x264300d0  addiu       $v1, $s2, 0xD0
    ctx->pc = 0x1c01c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 208));
label_1c01c4:
    // 0x1c01c4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1c01c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_1c01c8:
    // 0x1c01c8: 0x38420006  xori        $v0, $v0, 0x6
    ctx->pc = 0x1c01c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)6);
label_1c01cc:
    // 0x1c01cc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c01d0:
    if (ctx->pc == 0x1C01D0u) {
        ctx->pc = 0x1C01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01CCu;
        // 0x1c01d0: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01D4u;
        goto label_1c01d4;
    }
    ctx->pc = 0x1C01CCu;
    {
        const bool branch_taken_0x1c01cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01CCu;
        // 0x1c01d0: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01cc) {
            ctx->pc = 0x1C01DCu;
            goto label_1c01dc;
        }
    }
    ctx->pc = 0x1C01D4u;
label_1c01d4:
    // 0x1c01d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_1c01d8:
    if (ctx->pc == 0x1C01D8u) {
        ctx->pc = 0x1C01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01D4u;
        // 0x1c01d8: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01DCu;
        goto label_1c01dc;
    }
    ctx->pc = 0x1C01D4u;
    {
        const bool branch_taken_0x1c01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01D4u;
        // 0x1c01d8: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01d4) {
            ctx->pc = 0x1C01E0u;
            goto label_1c01e0;
        }
    }
    ctx->pc = 0x1C01DCu;
label_1c01dc:
    // 0x1c01dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c01dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c01e0:
    // 0x1c01e0: 0x14820007  bne         $a0, $v0, . + 4 + (0x7 << 2)
label_1c01e4:
    if (ctx->pc == 0x1C01E4u) {
        ctx->pc = 0x1C01E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E0u;
        // 0x1c01e4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C01E8u;
        goto label_1c01e8;
    }
    ctx->pc = 0x1C01E0u;
    {
        const bool branch_taken_0x1c01e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C01E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01E0u;
        // 0x1c01e4: 0x3c020049  lui         $v0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01e0) {
            ctx->pc = 0x1C0200u;
            goto label_1c0200;
        }
    }
    ctx->pc = 0x1C01E8u;
label_1c01e8:
    // 0x1c01e8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x1c01e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1c01ec:
    // 0x1c01ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c01ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c01f0:
    // 0x1c01f0: 0xae4204b4  sw          $v0, 0x4B4($s2)
    ctx->pc = 0x1c01f0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
label_1c01f4:
    // 0x1c01f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c01f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c01f8:
    // 0x1c01f8: 0x1000008c  b           . + 4 + (0x8C << 2)
label_1c01fc:
    if (ctx->pc == 0x1C01FCu) {
        ctx->pc = 0x1C01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01F8u;
        // 0x1c01fc: 0xae430338  sw          $v1, 0x338($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0200u;
        goto label_1c0200;
    }
    ctx->pc = 0x1C01F8u;
    {
        const bool branch_taken_0x1c01f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C01FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C01F8u;
        // 0x1c01fc: 0xae430338  sw          $v1, 0x338($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c01f8) {
            ctx->pc = 0x1C042Cu;
            goto label_1c042c;
        }
    }
    ctx->pc = 0x1C0200u;
label_1c0200:
    // 0x1c0200: 0x2451f160  addiu       $s1, $v0, -0xEA0
    ctx->pc = 0x1c0200u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963552));
label_1c0204:
    // 0x1c0204: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c0204u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c0208:
    // 0x1c0208: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c0208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c020c:
    // 0x1c020c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1c0210:
    if (ctx->pc == 0x1C0210u) {
        ctx->pc = 0x1C0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C020Cu;
        // 0x1c0210: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0214u;
        goto label_1c0214;
    }
    ctx->pc = 0x1C020Cu;
    {
        const bool branch_taken_0x1c020c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C020Cu;
        // 0x1c0210: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c020c) {
            ctx->pc = 0x1C0230u;
            goto label_1c0230;
        }
    }
    ctx->pc = 0x1C0214u;
label_1c0214:
    // 0x1c0214: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1c0214u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c0218:
    // 0x1c0218: 0xc0f6ec0  jal         func_3DBB00
label_1c021c:
    if (ctx->pc == 0x1C021Cu) {
        ctx->pc = 0x1C021Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0218u;
        // 0x1c021c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0220u;
        goto label_1c0220;
    }
    ctx->pc = 0x1C0218u;
    SET_GPR_U32(ctx, 31, 0x1C0220u);
    ctx->pc = 0x1C021Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0218u;
    // 0x1c021c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBB00u, 0x1C0218u, 0x1C0220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0220u;
label_1c0220:
    // 0x1c0220: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c0220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c0224:
    // 0x1c0224: 0x0  nop
    ctx->pc = 0x1c0224u;
    // NOP
label_1c0228:
    // 0x1c0228: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1c022c:
    if (ctx->pc == 0x1C022Cu) {
        ctx->pc = 0x1C022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0228u;
        // 0x1c022c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0230u;
        goto label_1c0230;
    }
    ctx->pc = 0x1C0228u;
    {
        const bool branch_taken_0x1c0228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0228) {
            ctx->pc = 0x1C022Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0228u;
            // 0x1c022c: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0218u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c0218;
        }
    }
    ctx->pc = 0x1C0230u;
label_1c0230:
    // 0x1c0230: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1c0230u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1c0234:
    // 0x1c0234: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c0234u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c0238:
    // 0x1c0238: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c0238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c023c:
    // 0x1c023c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c023cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1c0240:
    // 0x1c0240: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c0240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1c0244:
    // 0x1c0244: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c0244u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c0248:
    // 0x1c0248: 0xc6600030  lwc1        $f0, 0x30($s3)
    ctx->pc = 0x1c0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c024c:
    // 0x1c024c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c024cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1c0250:
    // 0x1c0250: 0x0  nop
    ctx->pc = 0x1c0250u;
    // NOP
label_1c0254:
    // 0x1c0254: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1c0258:
    if (ctx->pc == 0x1C0258u) {
        ctx->pc = 0x1C0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0254u;
        // 0x1c0258: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C025Cu;
        goto label_1c025c;
    }
    ctx->pc = 0x1C0254u;
    {
        const bool branch_taken_0x1c0254 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C0258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0254u;
        // 0x1c0258: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0254) {
            ctx->pc = 0x1C0260u;
            goto label_1c0260;
        }
    }
    ctx->pc = 0x1C025Cu;
label_1c025c:
    // 0x1c025c: 0x26460220  addiu       $a2, $s2, 0x220
    ctx->pc = 0x1c025cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_1c0260:
    // 0x1c0260: 0x2610f160  addiu       $s0, $s0, -0xEA0
    ctx->pc = 0x1c0260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294963552));
label_1c0264:
    // 0x1c0264: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c0264u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1c0268:
    // 0x1c0268: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1c0268u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1c026c:
    // 0x1c026c: 0x3c01be33  lui         $at, 0xBE33
    ctx->pc = 0x1c026cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48691 << 16));
label_1c0270:
    // 0x1c0270: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x1c0270u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_1c0274:
    // 0x1c0274: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x1c0274u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1c0278:
    // 0x1c0278: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1c0278u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c027c:
    // 0x1c027c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1c027cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c0280:
    // 0x1c0280: 0xc0416a2  jal         func_105A88
label_1c0284:
    if (ctx->pc == 0x1C0284u) {
        ctx->pc = 0x1C0284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0280u;
        // 0x1c0284: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0288u;
        goto label_1c0288;
    }
    ctx->pc = 0x1C0280u;
    SET_GPR_U32(ctx, 31, 0x1C0288u);
    ctx->pc = 0x1C0284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0280u;
    // 0x1c0284: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105A88u, 0x1C0280u, 0x1C0288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0288u;
label_1c0288:
    // 0x1c0288: 0x8e430394  lw          $v1, 0x394($s2)
    ctx->pc = 0x1c0288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 916)));
label_1c028c:
    // 0x1c028c: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x1c028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_1c0290:
    // 0x1c0290: 0x40f809  jalr        $v0
label_1c0294:
    if (ctx->pc == 0x1C0294u) {
        ctx->pc = 0x1C0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0290u;
        // 0x1c0294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0298u;
        goto label_1c0298;
    }
    ctx->pc = 0x1C0290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C0298u);
        ctx->pc = 0x1C0294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0290u;
        // 0x1c0294: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C0290u, 0x1C0298u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1C0298u;
label_1c0298:
    // 0x1c0298: 0xc041924  jal         func_106490
label_1c029c:
    if (ctx->pc == 0x1C029Cu) {
        ctx->pc = 0x1C029Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0298u;
        // 0x1c029c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02A0u;
        goto label_1c02a0;
    }
    ctx->pc = 0x1C0298u;
    SET_GPR_U32(ctx, 31, 0x1C02A0u);
    ctx->pc = 0x1C029Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C0298u;
    // 0x1c029c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106490u, 0x1C0298u, 0x1C02A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02A0u;
label_1c02a0:
    // 0x1c02a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c02a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c02a4:
    // 0x1c02a4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1c02a8:
    if (ctx->pc == 0x1C02A8u) {
        ctx->pc = 0x1C02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02A4u;
        // 0x1c02a8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02ACu;
        goto label_1c02ac;
    }
    ctx->pc = 0x1C02A4u;
    {
        const bool branch_taken_0x1c02a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02A4u;
        // 0x1c02a8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02a4) {
            ctx->pc = 0x1C02C8u;
            goto label_1c02c8;
        }
    }
    ctx->pc = 0x1C02ACu;
label_1c02ac:
    // 0x1c02ac: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1c02acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c02b0:
    // 0x1c02b0: 0xc0f6ec0  jal         func_3DBB00
label_1c02b4:
    if (ctx->pc == 0x1C02B4u) {
        ctx->pc = 0x1C02B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02B0u;
        // 0x1c02b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02B8u;
        goto label_1c02b8;
    }
    ctx->pc = 0x1C02B0u;
    SET_GPR_U32(ctx, 31, 0x1C02B8u);
    ctx->pc = 0x1C02B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C02B0u;
    // 0x1c02b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBB00u, 0x1C02B0u, 0x1C02B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C02B8u;
label_1c02b8:
    // 0x1c02b8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1c02b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c02bc:
    // 0x1c02bc: 0x0  nop
    ctx->pc = 0x1c02bcu;
    // NOP
label_1c02c0:
    // 0x1c02c0: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_1c02c4:
    if (ctx->pc == 0x1C02C4u) {
        ctx->pc = 0x1C02C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02C0u;
        // 0x1c02c4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02C8u;
        goto label_1c02c8;
    }
    ctx->pc = 0x1C02C0u;
    {
        const bool branch_taken_0x1c02c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c02c0) {
            ctx->pc = 0x1C02C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C02C0u;
            // 0x1c02c4: 0x8e250004  lw          $a1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C02B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1c02b0;
        }
    }
    ctx->pc = 0x1C02C8u;
label_1c02c8:
    // 0x1c02c8: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1c02c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_1c02cc:
    // 0x1c02cc: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1c02ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1c02d0:
    // 0x1c02d0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1c02d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1c02d4:
    // 0x1c02d4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1c02d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_1c02d8:
    // 0x1c02d8: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x1c02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_1c02dc:
    // 0x1c02dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c02e0:
    if (ctx->pc == 0x1C02E0u) {
        ctx->pc = 0x1C02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02DCu;
        // 0x1c02e0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02E4u;
        goto label_1c02e4;
    }
    ctx->pc = 0x1C02DCu;
    {
        const bool branch_taken_0x1c02dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02DCu;
        // 0x1c02e0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02dc) {
            ctx->pc = 0x1C02ECu;
            goto label_1c02ec;
        }
    }
    ctx->pc = 0x1C02E4u;
label_1c02e4:
    // 0x1c02e4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_1c02e8:
    if (ctx->pc == 0x1C02E8u) {
        ctx->pc = 0x1C02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02E4u;
        // 0x1c02e8: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02ECu;
        goto label_1c02ec;
    }
    ctx->pc = 0x1C02E4u;
    {
        const bool branch_taken_0x1c02e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C02E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02E4u;
        // 0x1c02e8: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02e4) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1C02ECu;
label_1c02ec:
    // 0x1c02ec: 0x8e4304b0  lw          $v1, 0x4B0($s2)
    ctx->pc = 0x1c02ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1200)));
label_1c02f0:
    // 0x1c02f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c02f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c02f4:
    // 0x1c02f4: 0x14620017  bne         $v1, $v0, . + 4 + (0x17 << 2)
label_1c02f8:
    if (ctx->pc == 0x1C02F8u) {
        ctx->pc = 0x1C02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02F4u;
        // 0x1c02f8: 0xae400338  sw          $zero, 0x338($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C02FCu;
        goto label_1c02fc;
    }
    ctx->pc = 0x1C02F4u;
    {
        const bool branch_taken_0x1c02f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1C02F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C02F4u;
        // 0x1c02f8: 0xae400338  sw          $zero, 0x338($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c02f4) {
            ctx->pc = 0x1C0354u;
            goto label_1c0354;
        }
    }
    ctx->pc = 0x1C02FCu;
label_1c02fc:
    // 0x1c02fc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1c02fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1c0300:
    // 0x1c0300: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1c0300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1c0304:
    // 0x1c0304: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1c0308:
    if (ctx->pc == 0x1C0308u) {
        ctx->pc = 0x1C0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0304u;
        // 0x1c0308: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C030Cu;
        goto label_1c030c;
    }
    ctx->pc = 0x1C0304u;
    {
        const bool branch_taken_0x1c0304 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C0308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0304u;
        // 0x1c0308: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0304) {
            ctx->pc = 0x1C0320u;
            goto label_1c0320;
        }
    }
    ctx->pc = 0x1C030Cu;
label_1c030c:
    // 0x1c030c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c030cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c0310:
    // 0x1c0310: 0x0  nop
    ctx->pc = 0x1c0310u;
    // NOP
label_1c0314:
    // 0x1c0314: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c0314u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c0318:
    // 0x1c0318: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c031c:
    if (ctx->pc == 0x1C031Cu) {
        ctx->pc = 0x1C0320u;
        goto label_1c0320;
    }
    ctx->pc = 0x1C0318u;
    {
        const bool branch_taken_0x1c0318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0318) {
            ctx->pc = 0x1C0338u;
            goto label_1c0338;
        }
    }
    ctx->pc = 0x1C0320u;
label_1c0320:
    // 0x1c0320: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c0324:
    // 0x1c0324: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c0324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c0328:
    // 0x1c0328: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c0328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c032c:
    // 0x1c032c: 0x0  nop
    ctx->pc = 0x1c032cu;
    // NOP
label_1c0330:
    // 0x1c0330: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c0330u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c0334:
    // 0x1c0334: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c0334u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c0338:
    // 0x1c0338: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c0338u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1c033c:
    // 0x1c033c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c033cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1c0340:
    // 0x1c0340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c0344:
    // 0x1c0344: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x1c0344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_1c0348:
    // 0x1c0348: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c0348u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c034c:
    // 0x1c034c: 0x10000016  b           . + 4 + (0x16 << 2)
label_1c0350:
    if (ctx->pc == 0x1C0350u) {
        ctx->pc = 0x1C0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C034Cu;
        // 0x1c0350: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0354u;
        goto label_1c0354;
    }
    ctx->pc = 0x1C034Cu;
    {
        const bool branch_taken_0x1c034c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C034Cu;
        // 0x1c0350: 0x46001002  mul.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c034c) {
            ctx->pc = 0x1C03A8u;
            goto label_1c03a8;
        }
    }
    ctx->pc = 0x1C0354u;
label_1c0354:
    // 0x1c0354: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1c0354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_1c0358:
    // 0x1c0358: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1c0358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_1c035c:
    // 0x1c035c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_1c0360:
    if (ctx->pc == 0x1C0360u) {
        ctx->pc = 0x1C0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C035Cu;
        // 0x1c0360: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0364u;
        goto label_1c0364;
    }
    ctx->pc = 0x1C035Cu;
    {
        const bool branch_taken_0x1c035c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1C0360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C035Cu;
        // 0x1c0360: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c035c) {
            ctx->pc = 0x1C0378u;
            goto label_1c0378;
        }
    }
    ctx->pc = 0x1C0364u;
label_1c0364:
    // 0x1c0364: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c0364u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c0368:
    // 0x1c0368: 0x0  nop
    ctx->pc = 0x1c0368u;
    // NOP
label_1c036c:
    // 0x1c036c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c036cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c0370:
    // 0x1c0370: 0x10000007  b           . + 4 + (0x7 << 2)
label_1c0374:
    if (ctx->pc == 0x1C0374u) {
        ctx->pc = 0x1C0378u;
        goto label_1c0378;
    }
    ctx->pc = 0x1C0370u;
    {
        const bool branch_taken_0x1c0370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c0370) {
            ctx->pc = 0x1C0390u;
            goto label_1c0390;
        }
    }
    ctx->pc = 0x1C0378u;
label_1c0378:
    // 0x1c0378: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1c0378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1c037c:
    // 0x1c037c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1c037cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1c0380:
    // 0x1c0380: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c0380u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1c0384:
    // 0x1c0384: 0x0  nop
    ctx->pc = 0x1c0384u;
    // NOP
label_1c0388:
    // 0x1c0388: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1c0388u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
label_1c038c:
    // 0x1c038c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1c038cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1c0390:
    // 0x1c0390: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1c0390u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_1c0394:
    // 0x1c0394: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1c0394u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_1c0398:
    // 0x1c0398: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c0398u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1c039c:
    // 0x1c039c: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x1c039cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_1c03a0:
    // 0x1c03a0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1c03a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1c03a4:
    // 0x1c03a4: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c03a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1c03a8:
    // 0x1c03a8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1c03a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1c03ac:
    // 0x1c03ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_1c03b0:
    if (ctx->pc == 0x1C03B0u) {
        ctx->pc = 0x1C03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03ACu;
        // 0x1c03b0: 0xe6400364  swc1        $f0, 0x364($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 868), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C03B4u;
        goto label_1c03b4;
    }
    ctx->pc = 0x1C03ACu;
    {
        const bool branch_taken_0x1c03ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03ACu;
        // 0x1c03b0: 0xe6400364  swc1        $f0, 0x364($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 868), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03ac) {
            ctx->pc = 0x1C03D0u;
            goto label_1c03d0;
        }
    }
    ctx->pc = 0x1C03B4u;
label_1c03b4:
    // 0x1c03b4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1c03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1c03b8:
    // 0x1c03b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1c03bc:
    if (ctx->pc == 0x1C03BCu) {
        ctx->pc = 0x1C03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03B8u;
        // 0x1c03bc: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C03C0u;
        goto label_1c03c0;
    }
    ctx->pc = 0x1C03B8u;
    {
        const bool branch_taken_0x1c03b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03B8u;
        // 0x1c03bc: 0xae4204b4  sw          $v0, 0x4B4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c03b8) {
            ctx->pc = 0x1C03D4u;
            goto label_1c03d4;
        }
    }
    ctx->pc = 0x1C03C0u;
label_1c03c0:
    // 0x1c03c0: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x1c03c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_1c03c4:
    // 0x1c03c4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_1c03c8:
    if (ctx->pc == 0x1C03C8u) {
        ctx->pc = 0x1C03C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C03C4u;
        // 0x1c03c8: 0xc64101e0  lwc1        $f1, 0x1E0($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C03CCu;
        goto label_1c03cc;
    }
    ctx->pc = 0x1C03C4u;
    {
        const bool branch_taken_0x1c03c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c03c4) {
            ctx->pc = 0x1C03C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C03C4u;
            // 0x1c03c8: 0xc64101e0  lwc1        $f1, 0x1E0($s2) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C03D8u;
            goto label_1c03d8;
        }
    }
    ctx->pc = 0x1C03CCu;
label_1c03cc:
    // 0x1c03cc: 0xae40037c  sw          $zero, 0x37C($s2)
    ctx->pc = 0x1c03ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 892), GPR_U32(ctx, 0));
label_1c03d0:
    // 0x1c03d0: 0xae4004b4  sw          $zero, 0x4B4($s2)
    ctx->pc = 0x1c03d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1204), GPR_U32(ctx, 0));
label_1c03d4:
    // 0x1c03d4: 0xc64101e0  lwc1        $f1, 0x1E0($s2)
    ctx->pc = 0x1c03d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c03d8:
    // 0x1c03d8: 0x264401e0  addiu       $a0, $s2, 0x1E0
    ctx->pc = 0x1c03d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 480));
label_1c03dc:
    // 0x1c03dc: 0x264503c0  addiu       $a1, $s2, 0x3C0
    ctx->pc = 0x1c03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 960));
label_1c03e0:
    // 0x1c03e0: 0x26460200  addiu       $a2, $s2, 0x200
    ctx->pc = 0x1c03e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
label_1c03e4:
    // 0x1c03e4: 0xe64103c0  swc1        $f1, 0x3C0($s2)
    ctx->pc = 0x1c03e4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 960), bits); }
label_1c03e8:
    // 0x1c03e8: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1c03e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c03ec:
    // 0x1c03ec: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x1c03ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
label_1c03f0:
    // 0x1c03f0: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1c03f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1c03f4:
    // 0x1c03f4: 0xe4a10008  swc1        $f1, 0x8($a1)
    ctx->pc = 0x1c03f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 8), bits); }
label_1c03f8:
    // 0x1c03f8: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1c03f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_1c03fc:
    // 0x1c03fc: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x1c03fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_1c0400:
    // 0x1c0400: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x1c0400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_1c0404:
    // 0x1c0404: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x1c0404u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_1c0408:
    // 0x1c0408: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x1c0408u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_1c040c:
    // 0x1c040c: 0xfa4103e0  sqc2        $vf1, 0x3E0($s2)
    ctx->pc = 0x1c040cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 992), _mm_castps_si128(ctx->vu0_vf[1]));
label_1c0410:
    // 0x1c0410: 0x8e4304b4  lw          $v1, 0x4B4($s2)
    ctx->pc = 0x1c0410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1204)));
label_1c0414:
    // 0x1c0414: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x1c0414u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_1c0418:
    // 0x1c0418: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c041c:
    if (ctx->pc == 0x1C041Cu) {
        ctx->pc = 0x1C041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0418u;
        // 0x1c041c: 0x28630003  slti        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0420u;
        goto label_1c0420;
    }
    ctx->pc = 0x1C0418u;
    {
        const bool branch_taken_0x1c0418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0418u;
        // 0x1c041c: 0x28630003  slti        $v1, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0418) {
            ctx->pc = 0x1C0428u;
            goto label_1c0428;
        }
    }
    ctx->pc = 0x1C0420u;
label_1c0420:
    // 0x1c0420: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1c0424:
    if (ctx->pc == 0x1C0424u) {
        ctx->pc = 0x1C0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0420u;
        // 0x1c0424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0428u;
        goto label_1c0428;
    }
    ctx->pc = 0x1C0420u;
    {
        const bool branch_taken_0x1c0420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0420u;
        // 0x1c0424: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0420) {
            ctx->pc = 0x1C042Cu;
            goto label_1c042c;
        }
    }
    ctx->pc = 0x1C0428u;
label_1c0428:
    // 0x1c0428: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1c0428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c042c:
    // 0x1c042c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1c042cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1c0430:
    // 0x1c0430: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1c0430u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1c0434:
    // 0x1c0434: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1c0434u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1c0438:
    // 0x1c0438: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1c0438u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1c043c:
    // 0x1c043c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1c043cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1c0440:
    // 0x1c0440: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x1c0440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_1c0444:
    // 0x1c0444: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x1c0444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1c0448:
    // 0x1c0448: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x1c0448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1c044c:
    // 0x1c044c: 0x3e00008  jr          $ra
label_1c0450:
    if (ctx->pc == 0x1C0450u) {
        ctx->pc = 0x1C0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C044Cu;
        // 0x1c0450: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1C0454u;
        goto label_1c0454;
    }
    ctx->pc = 0x1C044Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C044Cu;
        // 0x1c0450: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C044Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0454u;
label_1c0454:
    // 0x1c0454: 0x0  nop
    ctx->pc = 0x1c0454u;
    // NOP
    ctx->pc = 0x1c0458u;
}
