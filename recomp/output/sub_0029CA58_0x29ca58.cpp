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

// Function: sub_0029CA58
// Address: 0x29ca58 - 0x29d0a0
void sub_0029CA58_0x29ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CA58_0x29ca58");
#endif

    switch (ctx->pc) {
        case 0x29ca58u: goto label_29ca58;
        case 0x29ca5cu: goto label_29ca5c;
        case 0x29ca60u: goto label_29ca60;
        case 0x29ca64u: goto label_29ca64;
        case 0x29ca68u: goto label_29ca68;
        case 0x29ca6cu: goto label_29ca6c;
        case 0x29ca70u: goto label_29ca70;
        case 0x29ca74u: goto label_29ca74;
        case 0x29ca78u: goto label_29ca78;
        case 0x29ca7cu: goto label_29ca7c;
        case 0x29ca80u: goto label_29ca80;
        case 0x29ca84u: goto label_29ca84;
        case 0x29ca88u: goto label_29ca88;
        case 0x29ca8cu: goto label_29ca8c;
        case 0x29ca90u: goto label_29ca90;
        case 0x29ca94u: goto label_29ca94;
        case 0x29ca98u: goto label_29ca98;
        case 0x29ca9cu: goto label_29ca9c;
        case 0x29caa0u: goto label_29caa0;
        case 0x29caa4u: goto label_29caa4;
        case 0x29caa8u: goto label_29caa8;
        case 0x29caacu: goto label_29caac;
        case 0x29cab0u: goto label_29cab0;
        case 0x29cab4u: goto label_29cab4;
        case 0x29cab8u: goto label_29cab8;
        case 0x29cabcu: goto label_29cabc;
        case 0x29cac0u: goto label_29cac0;
        case 0x29cac4u: goto label_29cac4;
        case 0x29cac8u: goto label_29cac8;
        case 0x29caccu: goto label_29cacc;
        case 0x29cad0u: goto label_29cad0;
        case 0x29cad4u: goto label_29cad4;
        case 0x29cad8u: goto label_29cad8;
        case 0x29cadcu: goto label_29cadc;
        case 0x29cae0u: goto label_29cae0;
        case 0x29cae4u: goto label_29cae4;
        case 0x29cae8u: goto label_29cae8;
        case 0x29caecu: goto label_29caec;
        case 0x29caf0u: goto label_29caf0;
        case 0x29caf4u: goto label_29caf4;
        case 0x29caf8u: goto label_29caf8;
        case 0x29cafcu: goto label_29cafc;
        case 0x29cb00u: goto label_29cb00;
        case 0x29cb04u: goto label_29cb04;
        case 0x29cb08u: goto label_29cb08;
        case 0x29cb0cu: goto label_29cb0c;
        case 0x29cb10u: goto label_29cb10;
        case 0x29cb14u: goto label_29cb14;
        case 0x29cb18u: goto label_29cb18;
        case 0x29cb1cu: goto label_29cb1c;
        case 0x29cb20u: goto label_29cb20;
        case 0x29cb24u: goto label_29cb24;
        case 0x29cb28u: goto label_29cb28;
        case 0x29cb2cu: goto label_29cb2c;
        case 0x29cb30u: goto label_29cb30;
        case 0x29cb34u: goto label_29cb34;
        case 0x29cb38u: goto label_29cb38;
        case 0x29cb3cu: goto label_29cb3c;
        case 0x29cb40u: goto label_29cb40;
        case 0x29cb44u: goto label_29cb44;
        case 0x29cb48u: goto label_29cb48;
        case 0x29cb4cu: goto label_29cb4c;
        case 0x29cb50u: goto label_29cb50;
        case 0x29cb54u: goto label_29cb54;
        case 0x29cb58u: goto label_29cb58;
        case 0x29cb5cu: goto label_29cb5c;
        case 0x29cb60u: goto label_29cb60;
        case 0x29cb64u: goto label_29cb64;
        case 0x29cb68u: goto label_29cb68;
        case 0x29cb6cu: goto label_29cb6c;
        case 0x29cb70u: goto label_29cb70;
        case 0x29cb74u: goto label_29cb74;
        case 0x29cb78u: goto label_29cb78;
        case 0x29cb7cu: goto label_29cb7c;
        case 0x29cb80u: goto label_29cb80;
        case 0x29cb84u: goto label_29cb84;
        case 0x29cb88u: goto label_29cb88;
        case 0x29cb8cu: goto label_29cb8c;
        case 0x29cb90u: goto label_29cb90;
        case 0x29cb94u: goto label_29cb94;
        case 0x29cb98u: goto label_29cb98;
        case 0x29cb9cu: goto label_29cb9c;
        case 0x29cba0u: goto label_29cba0;
        case 0x29cba4u: goto label_29cba4;
        case 0x29cba8u: goto label_29cba8;
        case 0x29cbacu: goto label_29cbac;
        case 0x29cbb0u: goto label_29cbb0;
        case 0x29cbb4u: goto label_29cbb4;
        case 0x29cbb8u: goto label_29cbb8;
        case 0x29cbbcu: goto label_29cbbc;
        case 0x29cbc0u: goto label_29cbc0;
        case 0x29cbc4u: goto label_29cbc4;
        case 0x29cbc8u: goto label_29cbc8;
        case 0x29cbccu: goto label_29cbcc;
        case 0x29cbd0u: goto label_29cbd0;
        case 0x29cbd4u: goto label_29cbd4;
        case 0x29cbd8u: goto label_29cbd8;
        case 0x29cbdcu: goto label_29cbdc;
        case 0x29cbe0u: goto label_29cbe0;
        case 0x29cbe4u: goto label_29cbe4;
        case 0x29cbe8u: goto label_29cbe8;
        case 0x29cbecu: goto label_29cbec;
        case 0x29cbf0u: goto label_29cbf0;
        case 0x29cbf4u: goto label_29cbf4;
        case 0x29cbf8u: goto label_29cbf8;
        case 0x29cbfcu: goto label_29cbfc;
        case 0x29cc00u: goto label_29cc00;
        case 0x29cc04u: goto label_29cc04;
        case 0x29cc08u: goto label_29cc08;
        case 0x29cc0cu: goto label_29cc0c;
        case 0x29cc10u: goto label_29cc10;
        case 0x29cc14u: goto label_29cc14;
        case 0x29cc18u: goto label_29cc18;
        case 0x29cc1cu: goto label_29cc1c;
        case 0x29cc20u: goto label_29cc20;
        case 0x29cc24u: goto label_29cc24;
        case 0x29cc28u: goto label_29cc28;
        case 0x29cc2cu: goto label_29cc2c;
        case 0x29cc30u: goto label_29cc30;
        case 0x29cc34u: goto label_29cc34;
        case 0x29cc38u: goto label_29cc38;
        case 0x29cc3cu: goto label_29cc3c;
        case 0x29cc40u: goto label_29cc40;
        case 0x29cc44u: goto label_29cc44;
        case 0x29cc48u: goto label_29cc48;
        case 0x29cc4cu: goto label_29cc4c;
        case 0x29cc50u: goto label_29cc50;
        case 0x29cc54u: goto label_29cc54;
        case 0x29cc58u: goto label_29cc58;
        case 0x29cc5cu: goto label_29cc5c;
        case 0x29cc60u: goto label_29cc60;
        case 0x29cc64u: goto label_29cc64;
        case 0x29cc68u: goto label_29cc68;
        case 0x29cc6cu: goto label_29cc6c;
        case 0x29cc70u: goto label_29cc70;
        case 0x29cc74u: goto label_29cc74;
        case 0x29cc78u: goto label_29cc78;
        case 0x29cc7cu: goto label_29cc7c;
        case 0x29cc80u: goto label_29cc80;
        case 0x29cc84u: goto label_29cc84;
        case 0x29cc88u: goto label_29cc88;
        case 0x29cc8cu: goto label_29cc8c;
        case 0x29cc90u: goto label_29cc90;
        case 0x29cc94u: goto label_29cc94;
        case 0x29cc98u: goto label_29cc98;
        case 0x29cc9cu: goto label_29cc9c;
        case 0x29cca0u: goto label_29cca0;
        case 0x29cca4u: goto label_29cca4;
        case 0x29cca8u: goto label_29cca8;
        case 0x29ccacu: goto label_29ccac;
        case 0x29ccb0u: goto label_29ccb0;
        case 0x29ccb4u: goto label_29ccb4;
        case 0x29ccb8u: goto label_29ccb8;
        case 0x29ccbcu: goto label_29ccbc;
        case 0x29ccc0u: goto label_29ccc0;
        case 0x29ccc4u: goto label_29ccc4;
        case 0x29ccc8u: goto label_29ccc8;
        case 0x29ccccu: goto label_29cccc;
        case 0x29ccd0u: goto label_29ccd0;
        case 0x29ccd4u: goto label_29ccd4;
        case 0x29ccd8u: goto label_29ccd8;
        case 0x29ccdcu: goto label_29ccdc;
        case 0x29cce0u: goto label_29cce0;
        case 0x29cce4u: goto label_29cce4;
        case 0x29cce8u: goto label_29cce8;
        case 0x29ccecu: goto label_29ccec;
        case 0x29ccf0u: goto label_29ccf0;
        case 0x29ccf4u: goto label_29ccf4;
        case 0x29ccf8u: goto label_29ccf8;
        case 0x29ccfcu: goto label_29ccfc;
        case 0x29cd00u: goto label_29cd00;
        case 0x29cd04u: goto label_29cd04;
        case 0x29cd08u: goto label_29cd08;
        case 0x29cd0cu: goto label_29cd0c;
        case 0x29cd10u: goto label_29cd10;
        case 0x29cd14u: goto label_29cd14;
        case 0x29cd18u: goto label_29cd18;
        case 0x29cd1cu: goto label_29cd1c;
        case 0x29cd20u: goto label_29cd20;
        case 0x29cd24u: goto label_29cd24;
        case 0x29cd28u: goto label_29cd28;
        case 0x29cd2cu: goto label_29cd2c;
        case 0x29cd30u: goto label_29cd30;
        case 0x29cd34u: goto label_29cd34;
        case 0x29cd38u: goto label_29cd38;
        case 0x29cd3cu: goto label_29cd3c;
        case 0x29cd40u: goto label_29cd40;
        case 0x29cd44u: goto label_29cd44;
        case 0x29cd48u: goto label_29cd48;
        case 0x29cd4cu: goto label_29cd4c;
        case 0x29cd50u: goto label_29cd50;
        case 0x29cd54u: goto label_29cd54;
        case 0x29cd58u: goto label_29cd58;
        case 0x29cd5cu: goto label_29cd5c;
        case 0x29cd60u: goto label_29cd60;
        case 0x29cd64u: goto label_29cd64;
        case 0x29cd68u: goto label_29cd68;
        case 0x29cd6cu: goto label_29cd6c;
        case 0x29cd70u: goto label_29cd70;
        case 0x29cd74u: goto label_29cd74;
        case 0x29cd78u: goto label_29cd78;
        case 0x29cd7cu: goto label_29cd7c;
        case 0x29cd80u: goto label_29cd80;
        case 0x29cd84u: goto label_29cd84;
        case 0x29cd88u: goto label_29cd88;
        case 0x29cd8cu: goto label_29cd8c;
        case 0x29cd90u: goto label_29cd90;
        case 0x29cd94u: goto label_29cd94;
        case 0x29cd98u: goto label_29cd98;
        case 0x29cd9cu: goto label_29cd9c;
        case 0x29cda0u: goto label_29cda0;
        case 0x29cda4u: goto label_29cda4;
        case 0x29cda8u: goto label_29cda8;
        case 0x29cdacu: goto label_29cdac;
        case 0x29cdb0u: goto label_29cdb0;
        case 0x29cdb4u: goto label_29cdb4;
        case 0x29cdb8u: goto label_29cdb8;
        case 0x29cdbcu: goto label_29cdbc;
        case 0x29cdc0u: goto label_29cdc0;
        case 0x29cdc4u: goto label_29cdc4;
        case 0x29cdc8u: goto label_29cdc8;
        case 0x29cdccu: goto label_29cdcc;
        case 0x29cdd0u: goto label_29cdd0;
        case 0x29cdd4u: goto label_29cdd4;
        case 0x29cdd8u: goto label_29cdd8;
        case 0x29cddcu: goto label_29cddc;
        case 0x29cde0u: goto label_29cde0;
        case 0x29cde4u: goto label_29cde4;
        case 0x29cde8u: goto label_29cde8;
        case 0x29cdecu: goto label_29cdec;
        case 0x29cdf0u: goto label_29cdf0;
        case 0x29cdf4u: goto label_29cdf4;
        case 0x29cdf8u: goto label_29cdf8;
        case 0x29cdfcu: goto label_29cdfc;
        case 0x29ce00u: goto label_29ce00;
        case 0x29ce04u: goto label_29ce04;
        case 0x29ce08u: goto label_29ce08;
        case 0x29ce0cu: goto label_29ce0c;
        case 0x29ce10u: goto label_29ce10;
        case 0x29ce14u: goto label_29ce14;
        case 0x29ce18u: goto label_29ce18;
        case 0x29ce1cu: goto label_29ce1c;
        case 0x29ce20u: goto label_29ce20;
        case 0x29ce24u: goto label_29ce24;
        case 0x29ce28u: goto label_29ce28;
        case 0x29ce2cu: goto label_29ce2c;
        case 0x29ce30u: goto label_29ce30;
        case 0x29ce34u: goto label_29ce34;
        case 0x29ce38u: goto label_29ce38;
        case 0x29ce3cu: goto label_29ce3c;
        case 0x29ce40u: goto label_29ce40;
        case 0x29ce44u: goto label_29ce44;
        case 0x29ce48u: goto label_29ce48;
        case 0x29ce4cu: goto label_29ce4c;
        case 0x29ce50u: goto label_29ce50;
        case 0x29ce54u: goto label_29ce54;
        case 0x29ce58u: goto label_29ce58;
        case 0x29ce5cu: goto label_29ce5c;
        case 0x29ce60u: goto label_29ce60;
        case 0x29ce64u: goto label_29ce64;
        case 0x29ce68u: goto label_29ce68;
        case 0x29ce6cu: goto label_29ce6c;
        case 0x29ce70u: goto label_29ce70;
        case 0x29ce74u: goto label_29ce74;
        case 0x29ce78u: goto label_29ce78;
        case 0x29ce7cu: goto label_29ce7c;
        case 0x29ce80u: goto label_29ce80;
        case 0x29ce84u: goto label_29ce84;
        case 0x29ce88u: goto label_29ce88;
        case 0x29ce8cu: goto label_29ce8c;
        case 0x29ce90u: goto label_29ce90;
        case 0x29ce94u: goto label_29ce94;
        case 0x29ce98u: goto label_29ce98;
        case 0x29ce9cu: goto label_29ce9c;
        case 0x29cea0u: goto label_29cea0;
        case 0x29cea4u: goto label_29cea4;
        case 0x29cea8u: goto label_29cea8;
        case 0x29ceacu: goto label_29ceac;
        case 0x29ceb0u: goto label_29ceb0;
        case 0x29ceb4u: goto label_29ceb4;
        case 0x29ceb8u: goto label_29ceb8;
        case 0x29cebcu: goto label_29cebc;
        case 0x29cec0u: goto label_29cec0;
        case 0x29cec4u: goto label_29cec4;
        case 0x29cec8u: goto label_29cec8;
        case 0x29ceccu: goto label_29cecc;
        case 0x29ced0u: goto label_29ced0;
        case 0x29ced4u: goto label_29ced4;
        case 0x29ced8u: goto label_29ced8;
        case 0x29cedcu: goto label_29cedc;
        case 0x29cee0u: goto label_29cee0;
        case 0x29cee4u: goto label_29cee4;
        case 0x29cee8u: goto label_29cee8;
        case 0x29ceecu: goto label_29ceec;
        case 0x29cef0u: goto label_29cef0;
        case 0x29cef4u: goto label_29cef4;
        case 0x29cef8u: goto label_29cef8;
        case 0x29cefcu: goto label_29cefc;
        case 0x29cf00u: goto label_29cf00;
        case 0x29cf04u: goto label_29cf04;
        case 0x29cf08u: goto label_29cf08;
        case 0x29cf0cu: goto label_29cf0c;
        case 0x29cf10u: goto label_29cf10;
        case 0x29cf14u: goto label_29cf14;
        case 0x29cf18u: goto label_29cf18;
        case 0x29cf1cu: goto label_29cf1c;
        case 0x29cf20u: goto label_29cf20;
        case 0x29cf24u: goto label_29cf24;
        case 0x29cf28u: goto label_29cf28;
        case 0x29cf2cu: goto label_29cf2c;
        case 0x29cf30u: goto label_29cf30;
        case 0x29cf34u: goto label_29cf34;
        case 0x29cf38u: goto label_29cf38;
        case 0x29cf3cu: goto label_29cf3c;
        case 0x29cf40u: goto label_29cf40;
        case 0x29cf44u: goto label_29cf44;
        case 0x29cf48u: goto label_29cf48;
        case 0x29cf4cu: goto label_29cf4c;
        case 0x29cf50u: goto label_29cf50;
        case 0x29cf54u: goto label_29cf54;
        case 0x29cf58u: goto label_29cf58;
        case 0x29cf5cu: goto label_29cf5c;
        case 0x29cf60u: goto label_29cf60;
        case 0x29cf64u: goto label_29cf64;
        case 0x29cf68u: goto label_29cf68;
        case 0x29cf6cu: goto label_29cf6c;
        case 0x29cf70u: goto label_29cf70;
        case 0x29cf74u: goto label_29cf74;
        case 0x29cf78u: goto label_29cf78;
        case 0x29cf7cu: goto label_29cf7c;
        case 0x29cf80u: goto label_29cf80;
        case 0x29cf84u: goto label_29cf84;
        case 0x29cf88u: goto label_29cf88;
        case 0x29cf8cu: goto label_29cf8c;
        case 0x29cf90u: goto label_29cf90;
        case 0x29cf94u: goto label_29cf94;
        case 0x29cf98u: goto label_29cf98;
        case 0x29cf9cu: goto label_29cf9c;
        case 0x29cfa0u: goto label_29cfa0;
        case 0x29cfa4u: goto label_29cfa4;
        case 0x29cfa8u: goto label_29cfa8;
        case 0x29cfacu: goto label_29cfac;
        case 0x29cfb0u: goto label_29cfb0;
        case 0x29cfb4u: goto label_29cfb4;
        case 0x29cfb8u: goto label_29cfb8;
        case 0x29cfbcu: goto label_29cfbc;
        case 0x29cfc0u: goto label_29cfc0;
        case 0x29cfc4u: goto label_29cfc4;
        case 0x29cfc8u: goto label_29cfc8;
        case 0x29cfccu: goto label_29cfcc;
        case 0x29cfd0u: goto label_29cfd0;
        case 0x29cfd4u: goto label_29cfd4;
        case 0x29cfd8u: goto label_29cfd8;
        case 0x29cfdcu: goto label_29cfdc;
        case 0x29cfe0u: goto label_29cfe0;
        case 0x29cfe4u: goto label_29cfe4;
        case 0x29cfe8u: goto label_29cfe8;
        case 0x29cfecu: goto label_29cfec;
        case 0x29cff0u: goto label_29cff0;
        case 0x29cff4u: goto label_29cff4;
        case 0x29cff8u: goto label_29cff8;
        case 0x29cffcu: goto label_29cffc;
        case 0x29d000u: goto label_29d000;
        case 0x29d004u: goto label_29d004;
        case 0x29d008u: goto label_29d008;
        case 0x29d00cu: goto label_29d00c;
        case 0x29d010u: goto label_29d010;
        case 0x29d014u: goto label_29d014;
        case 0x29d018u: goto label_29d018;
        case 0x29d01cu: goto label_29d01c;
        case 0x29d020u: goto label_29d020;
        case 0x29d024u: goto label_29d024;
        case 0x29d028u: goto label_29d028;
        case 0x29d02cu: goto label_29d02c;
        case 0x29d030u: goto label_29d030;
        case 0x29d034u: goto label_29d034;
        case 0x29d038u: goto label_29d038;
        case 0x29d03cu: goto label_29d03c;
        case 0x29d040u: goto label_29d040;
        case 0x29d044u: goto label_29d044;
        case 0x29d048u: goto label_29d048;
        case 0x29d04cu: goto label_29d04c;
        case 0x29d050u: goto label_29d050;
        case 0x29d054u: goto label_29d054;
        case 0x29d058u: goto label_29d058;
        case 0x29d05cu: goto label_29d05c;
        case 0x29d060u: goto label_29d060;
        case 0x29d064u: goto label_29d064;
        case 0x29d068u: goto label_29d068;
        case 0x29d06cu: goto label_29d06c;
        case 0x29d070u: goto label_29d070;
        case 0x29d074u: goto label_29d074;
        case 0x29d078u: goto label_29d078;
        case 0x29d07cu: goto label_29d07c;
        case 0x29d080u: goto label_29d080;
        case 0x29d084u: goto label_29d084;
        case 0x29d088u: goto label_29d088;
        case 0x29d08cu: goto label_29d08c;
        case 0x29d090u: goto label_29d090;
        case 0x29d094u: goto label_29d094;
        case 0x29d098u: goto label_29d098;
        case 0x29d09cu: goto label_29d09c;
        default: break;
    }

    ctx->pc = 0x29ca58u;

label_29ca58:
    // 0x29ca58: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x29ca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_29ca5c:
    // 0x29ca5c: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x29ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
label_29ca60:
    // 0x29ca60: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x29ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
label_29ca64:
    // 0x29ca64: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x29ca64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
label_29ca68:
    // 0x29ca68: 0xffb700d8  sd          $s7, 0xD8($sp)
    ctx->pc = 0x29ca68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 23));
label_29ca6c:
    // 0x29ca6c: 0x2456fe40  addiu       $s6, $v0, -0x1C0
    ctx->pc = 0x29ca6cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966848));
label_29ca70:
    // 0x29ca70: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x29ca70u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29ca74:
    // 0x29ca74: 0xffb000a0  sd          $s0, 0xA0($sp)
    ctx->pc = 0x29ca74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 16));
label_29ca78:
    // 0x29ca78: 0xffb100a8  sd          $s1, 0xA8($sp)
    ctx->pc = 0x29ca78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 17));
label_29ca7c:
    // 0x29ca7c: 0x24a5f010  addiu       $a1, $a1, -0xFF0
    ctx->pc = 0x29ca7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963216));
label_29ca80:
    // 0x29ca80: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x29ca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_29ca84:
    // 0x29ca84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ca84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ca88:
    // 0x29ca88: 0xffb300b8  sd          $s3, 0xB8($sp)
    ctx->pc = 0x29ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 19));
label_29ca8c:
    // 0x29ca8c: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x29ca8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
label_29ca90:
    // 0x29ca90: 0xffb500c8  sd          $s5, 0xC8($sp)
    ctx->pc = 0x29ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 21));
label_29ca94:
    // 0x29ca94: 0xffbe00e0  sd          $fp, 0xE0($sp)
    ctx->pc = 0x29ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 30));
label_29ca98:
    // 0x29ca98: 0xffbf00e8  sd          $ra, 0xE8($sp)
    ctx->pc = 0x29ca98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 31));
label_29ca9c:
    // 0x29ca9c: 0xc09dd98  jal         func_277660
label_29caa0:
    if (ctx->pc == 0x29CAA0u) {
        ctx->pc = 0x29CAA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CA9Cu;
        // 0x29caa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAA4u;
        goto label_29caa4;
    }
    ctx->pc = 0x29CA9Cu;
    SET_GPR_U32(ctx, 31, 0x29CAA4u);
    ctx->pc = 0x29CAA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CA9Cu;
    // 0x29caa0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277660u, 0x29CA9Cu, 0x29CAA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAA4u;
label_29caa4:
    // 0x29caa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29caa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29caa8:
    // 0x29caa8: 0xc0d7384  jal         func_35CE10
label_29caac:
    if (ctx->pc == 0x29CAACu) {
        ctx->pc = 0x29CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAA8u;
        // 0x29caac: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAB0u;
        goto label_29cab0;
    }
    ctx->pc = 0x29CAA8u;
    SET_GPR_U32(ctx, 31, 0x29CAB0u);
    ctx->pc = 0x29CAACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CAA8u;
    // 0x29caac: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x29CAA8u, 0x29CAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAB0u;
label_29cab0:
    // 0x29cab0: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x29cab0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_29cab4:
    // 0x29cab4: 0x1000015a  b           . + 4 + (0x15A << 2)
label_29cab8:
    if (ctx->pc == 0x29CAB8u) {
        ctx->pc = 0x29CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAB4u;
        // 0x29cab8: 0x3c1e0047  lui         $fp, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CABCu;
        goto label_29cabc;
    }
    ctx->pc = 0x29CAB4u;
    {
        const bool branch_taken_0x29cab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAB4u;
        // 0x29cab8: 0x3c1e0047  lui         $fp, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cab4) {
            ctx->pc = 0x29D020u;
            goto label_29d020;
        }
    }
    ctx->pc = 0x29CABCu;
label_29cabc:
    // 0x29cabc: 0x0  nop
    ctx->pc = 0x29cabcu;
    // NOP
label_29cac0:
    // 0x29cac0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29cac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cac4:
    // 0x29cac4: 0xc0d73f4  jal         func_35CFD0
label_29cac8:
    if (ctx->pc == 0x29CAC8u) {
        ctx->pc = 0x29CAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAC4u;
        // 0x29cac8: 0x24a5c040  addiu       $a1, $a1, -0x3FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CACCu;
        goto label_29cacc;
    }
    ctx->pc = 0x29CAC4u;
    SET_GPR_U32(ctx, 31, 0x29CACCu);
    ctx->pc = 0x29CAC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CAC4u;
    // 0x29cac8: 0x24a5c040  addiu       $a1, $a1, -0x3FC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CAC4u, 0x29CACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CACCu;
label_29cacc:
    // 0x29cacc: 0x1440011b  bnez        $v0, . + 4 + (0x11B << 2)
label_29cad0:
    if (ctx->pc == 0x29CAD0u) {
        ctx->pc = 0x29CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CACCu;
        // 0x29cad0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAD4u;
        goto label_29cad4;
    }
    ctx->pc = 0x29CACCu;
    {
        const bool branch_taken_0x29cacc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CACCu;
        // 0x29cad0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cacc) {
            ctx->pc = 0x29CF3Cu;
            goto label_29cf3c;
        }
    }
    ctx->pc = 0x29CAD4u;
label_29cad4:
    // 0x29cad4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cad4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cad8:
    // 0x29cad8: 0xc0d7384  jal         func_35CE10
label_29cadc:
    if (ctx->pc == 0x29CADCu) {
        ctx->pc = 0x29CADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAD8u;
        // 0x29cadc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAE0u;
        goto label_29cae0;
    }
    ctx->pc = 0x29CAD8u;
    SET_GPR_U32(ctx, 31, 0x29CAE0u);
    ctx->pc = 0x29CADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CAD8u;
    // 0x29cadc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CE10u, 0x29CAD8u, 0x29CAE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAE0u;
label_29cae0:
    // 0x29cae0: 0x1000010c  b           . + 4 + (0x10C << 2)
label_29cae4:
    if (ctx->pc == 0x29CAE4u) {
        ctx->pc = 0x29CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAE0u;
        // 0x29cae4: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAE8u;
        goto label_29cae8;
    }
    ctx->pc = 0x29CAE0u;
    {
        const bool branch_taken_0x29cae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAE0u;
        // 0x29cae4: 0x27b50020  addiu       $s5, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cae0) {
            ctx->pc = 0x29CF14u;
            goto label_29cf14;
        }
    }
    ctx->pc = 0x29CAE8u;
label_29cae8:
    // 0x29cae8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29caec:
    // 0x29caec: 0xc0d73f4  jal         func_35CFD0
label_29caf0:
    if (ctx->pc == 0x29CAF0u) {
        ctx->pc = 0x29CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAECu;
        // 0x29caf0: 0x24a5c050  addiu       $a1, $a1, -0x3FB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAF4u;
        goto label_29caf4;
    }
    ctx->pc = 0x29CAECu;
    SET_GPR_U32(ctx, 31, 0x29CAF4u);
    ctx->pc = 0x29CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CAECu;
    // 0x29caf0: 0x24a5c050  addiu       $a1, $a1, -0x3FB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294950992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CAECu, 0x29CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CAF4u;
label_29caf4:
    // 0x29caf4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_29caf8:
    if (ctx->pc == 0x29CAF8u) {
        ctx->pc = 0x29CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAF4u;
        // 0x29caf8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CAFCu;
        goto label_29cafc;
    }
    ctx->pc = 0x29CAF4u;
    {
        const bool branch_taken_0x29caf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CAF4u;
        // 0x29caf8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29caf4) {
            ctx->pc = 0x29CB24u;
            goto label_29cb24;
        }
    }
    ctx->pc = 0x29CAFCu;
label_29cafc:
    // 0x29cafc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29cafcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cb00:
    // 0x29cb00: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x29cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
label_29cb04:
    // 0x29cb04: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x29cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
label_29cb08:
    // 0x29cb08: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29cb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29cb0c:
    // 0x29cb0c: 0xc09df74  jal         func_277DD0
label_29cb10:
    if (ctx->pc == 0x29CB10u) {
        ctx->pc = 0x29CB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB0Cu;
        // 0x29cb10: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB14u;
        goto label_29cb14;
    }
    ctx->pc = 0x29CB0Cu;
    SET_GPR_U32(ctx, 31, 0x29CB14u);
    ctx->pc = 0x29CB10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB0Cu;
    // 0x29cb10: 0x27a60024  addiu       $a2, $sp, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x29CB0Cu, 0x29CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB14u;
label_29cb14:
    // 0x29cb14: 0xc0a57b2  jal         func_295EC8
label_29cb18:
    if (ctx->pc == 0x29CB18u) {
        ctx->pc = 0x29CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB14u;
        // 0x29cb18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB1Cu;
        goto label_29cb1c;
    }
    ctx->pc = 0x29CB14u;
    SET_GPR_U32(ctx, 31, 0x29CB1Cu);
    ctx->pc = 0x29CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB14u;
    // 0x29cb18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EC8u, 0x29CB14u, 0x29CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB1Cu;
label_29cb1c:
    // 0x29cb1c: 0x100000fe  b           . + 4 + (0xFE << 2)
label_29cb20:
    if (ctx->pc == 0x29CB20u) {
        ctx->pc = 0x29CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB1Cu;
        // 0x29cb20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB24u;
        goto label_29cb24;
    }
    ctx->pc = 0x29CB1Cu;
    {
        const bool branch_taken_0x29cb1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB1Cu;
        // 0x29cb20: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb1c) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CB24u;
label_29cb24:
    // 0x29cb24: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cb24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cb28:
    // 0x29cb28: 0xc0d73f4  jal         func_35CFD0
label_29cb2c:
    if (ctx->pc == 0x29CB2Cu) {
        ctx->pc = 0x29CB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB28u;
        // 0x29cb2c: 0x24a5c068  addiu       $a1, $a1, -0x3F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB30u;
        goto label_29cb30;
    }
    ctx->pc = 0x29CB28u;
    SET_GPR_U32(ctx, 31, 0x29CB30u);
    ctx->pc = 0x29CB2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB28u;
    // 0x29cb2c: 0x24a5c068  addiu       $a1, $a1, -0x3F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CB28u, 0x29CB30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB30u;
label_29cb30:
    // 0x29cb30: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_29cb34:
    if (ctx->pc == 0x29CB34u) {
        ctx->pc = 0x29CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB30u;
        // 0x29cb34: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB38u;
        goto label_29cb38;
    }
    ctx->pc = 0x29CB30u;
    {
        const bool branch_taken_0x29cb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB30u;
        // 0x29cb34: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb30) {
            ctx->pc = 0x29CB54u;
            goto label_29cb54;
        }
    }
    ctx->pc = 0x29CB38u;
label_29cb38:
    // 0x29cb38: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29cb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cb3c:
    // 0x29cb3c: 0xc09e056  jal         func_278158
label_29cb40:
    if (ctx->pc == 0x29CB40u) {
        ctx->pc = 0x29CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB3Cu;
        // 0x29cb40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB44u;
        goto label_29cb44;
    }
    ctx->pc = 0x29CB3Cu;
    SET_GPR_U32(ctx, 31, 0x29CB44u);
    ctx->pc = 0x29CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB3Cu;
    // 0x29cb40: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x29CB3Cu, 0x29CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB44u;
label_29cb44:
    // 0x29cb44: 0xc0a57be  jal         func_295EF8
label_29cb48:
    if (ctx->pc == 0x29CB48u) {
        ctx->pc = 0x29CB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB44u;
        // 0x29cb48: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB4Cu;
        goto label_29cb4c;
    }
    ctx->pc = 0x29CB44u;
    SET_GPR_U32(ctx, 31, 0x29CB4Cu);
    ctx->pc = 0x29CB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB44u;
    // 0x29cb48: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295EF8u, 0x29CB44u, 0x29CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB4Cu;
label_29cb4c:
    // 0x29cb4c: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_29cb50:
    if (ctx->pc == 0x29CB50u) {
        ctx->pc = 0x29CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB4Cu;
        // 0x29cb50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB54u;
        goto label_29cb54;
    }
    ctx->pc = 0x29CB4Cu;
    {
        const bool branch_taken_0x29cb4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB4Cu;
        // 0x29cb50: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb4c) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CB54u;
label_29cb54:
    // 0x29cb54: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cb54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cb58:
    // 0x29cb58: 0xc0d73f4  jal         func_35CFD0
label_29cb5c:
    if (ctx->pc == 0x29CB5Cu) {
        ctx->pc = 0x29CB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB58u;
        // 0x29cb5c: 0x24a5c080  addiu       $a1, $a1, -0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB60u;
        goto label_29cb60;
    }
    ctx->pc = 0x29CB58u;
    SET_GPR_U32(ctx, 31, 0x29CB60u);
    ctx->pc = 0x29CB5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB58u;
    // 0x29cb5c: 0x24a5c080  addiu       $a1, $a1, -0x3F80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CB58u, 0x29CB60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB60u;
label_29cb60:
    // 0x29cb60: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_29cb64:
    if (ctx->pc == 0x29CB64u) {
        ctx->pc = 0x29CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB60u;
        // 0x29cb64: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB68u;
        goto label_29cb68;
    }
    ctx->pc = 0x29CB60u;
    {
        const bool branch_taken_0x29cb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB60u;
        // 0x29cb64: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cb60) {
            ctx->pc = 0x29CBDCu;
            goto label_29cbdc;
        }
    }
    ctx->pc = 0x29CB68u;
label_29cb68:
    // 0x29cb68: 0x27a50054  addiu       $a1, $sp, 0x54
    ctx->pc = 0x29cb68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_29cb6c:
    // 0x29cb6c: 0x27a60058  addiu       $a2, $sp, 0x58
    ctx->pc = 0x29cb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
label_29cb70:
    // 0x29cb70: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29cb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cb74:
    // 0x29cb74: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x29cb74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_29cb78:
    // 0x29cb78: 0xc09dfa0  jal         func_277E80
label_29cb7c:
    if (ctx->pc == 0x29CB7Cu) {
        ctx->pc = 0x29CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB78u;
        // 0x29cb7c: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CB80u;
        goto label_29cb80;
    }
    ctx->pc = 0x29CB78u;
    SET_GPR_U32(ctx, 31, 0x29CB80u);
    ctx->pc = 0x29CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB78u;
    // 0x29cb7c: 0x27a80060  addiu       $t0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277E80u, 0x29CB78u, 0x29CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CB80u;
label_29cb80:
    // 0x29cb80: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x29cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29cb84:
    // 0x29cb84: 0x8fb20054  lw          $s2, 0x54($sp)
    ctx->pc = 0x29cb84u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
label_29cb88:
    // 0x29cb88: 0x8fb30058  lw          $s3, 0x58($sp)
    ctx->pc = 0x29cb88u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_29cb8c:
    // 0x29cb8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29cb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cb90:
    // 0x29cb90: 0x8fb1005c  lw          $s1, 0x5C($sp)
    ctx->pc = 0x29cb90u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_29cb94:
    // 0x29cb94: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x29cb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29cb98:
    // 0x29cb98: 0xc0efab3  jal         func_3BEACC
label_29cb9c:
    if (ctx->pc == 0x29CB9Cu) {
        ctx->pc = 0x29CB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CB98u;
        // 0x29cb9c: 0x8fb00060  lw          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CBA0u;
        goto label_29cba0;
    }
    ctx->pc = 0x29CB98u;
    SET_GPR_U32(ctx, 31, 0x29CBA0u);
    ctx->pc = 0x29CB9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CB98u;
    // 0x29cb9c: 0x8fb00060  lw          $s0, 0x60($sp) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x29CB98u, 0x29CBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBA0u;
label_29cba0:
    // 0x29cba0: 0xa3b20030  sb          $s2, 0x30($sp)
    ctx->pc = 0x29cba0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 18));
label_29cba4:
    // 0x29cba4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cba8:
    // 0x29cba8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29cba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_29cbac:
    // 0x29cbac: 0xa3b30031  sb          $s3, 0x31($sp)
    ctx->pc = 0x29cbacu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 19));
label_29cbb0:
    // 0x29cbb0: 0xa3b10032  sb          $s1, 0x32($sp)
    ctx->pc = 0x29cbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 50), (uint8_t)GPR_U32(ctx, 17));
label_29cbb4:
    // 0x29cbb4: 0xa3b00033  sb          $s0, 0x33($sp)
    ctx->pc = 0x29cbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 51), (uint8_t)GPR_U32(ctx, 16));
label_29cbb8:
    // 0x29cbb8: 0x8ba30033  lwl         $v1, 0x33($sp)
    ctx->pc = 0x29cbb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_29cbbc:
    // 0x29cbbc: 0x9ba30030  lwr         $v1, 0x30($sp)
    ctx->pc = 0x29cbbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_29cbc0:
    // 0x29cbc0: 0xaba30043  swl         $v1, 0x43($sp)
    ctx->pc = 0x29cbc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_29cbc4:
    // 0x29cbc4: 0xbba30040  swr         $v1, 0x40($sp)
    ctx->pc = 0x29cbc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_29cbc8:
    // 0x29cbc8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29cbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_29cbcc:
    // 0x29cbcc: 0xc0a57d2  jal         func_295F48
label_29cbd0:
    if (ctx->pc == 0x29CBD0u) {
        ctx->pc = 0x29CBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBCCu;
        // 0x29cbd0: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CBD4u;
        goto label_29cbd4;
    }
    ctx->pc = 0x29CBCCu;
    SET_GPR_U32(ctx, 31, 0x29CBD4u);
    ctx->pc = 0x29CBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBCCu;
    // 0x29cbd0: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295F48u, 0x29CBCCu, 0x29CBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBD4u;
label_29cbd4:
    // 0x29cbd4: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_29cbd8:
    if (ctx->pc == 0x29CBD8u) {
        ctx->pc = 0x29CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBD4u;
        // 0x29cbd8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CBDCu;
        goto label_29cbdc;
    }
    ctx->pc = 0x29CBD4u;
    {
        const bool branch_taken_0x29cbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CBD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBD4u;
        // 0x29cbd8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cbd4) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CBDCu;
label_29cbdc:
    // 0x29cbdc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cbdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cbe0:
    // 0x29cbe0: 0xc0d73f4  jal         func_35CFD0
label_29cbe4:
    if (ctx->pc == 0x29CBE4u) {
        ctx->pc = 0x29CBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBE0u;
        // 0x29cbe4: 0x24a5c090  addiu       $a1, $a1, -0x3F70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CBE8u;
        goto label_29cbe8;
    }
    ctx->pc = 0x29CBE0u;
    SET_GPR_U32(ctx, 31, 0x29CBE8u);
    ctx->pc = 0x29CBE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBE0u;
    // 0x29cbe4: 0x24a5c090  addiu       $a1, $a1, -0x3F70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CBE0u, 0x29CBE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBE8u;
label_29cbe8:
    // 0x29cbe8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_29cbec:
    if (ctx->pc == 0x29CBECu) {
        ctx->pc = 0x29CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBE8u;
        // 0x29cbec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CBF0u;
        goto label_29cbf0;
    }
    ctx->pc = 0x29CBE8u;
    {
        const bool branch_taken_0x29cbe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBE8u;
        // 0x29cbec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cbe8) {
            ctx->pc = 0x29CC1Cu;
            goto label_29cc1c;
        }
    }
    ctx->pc = 0x29CBF0u;
label_29cbf0:
    // 0x29cbf0: 0xc0d737c  jal         func_35CDF0
label_29cbf4:
    if (ctx->pc == 0x29CBF4u) {
        ctx->pc = 0x29CBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBF0u;
        // 0x29cbf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CBF8u;
        goto label_29cbf8;
    }
    ctx->pc = 0x29CBF0u;
    SET_GPR_U32(ctx, 31, 0x29CBF8u);
    ctx->pc = 0x29CBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBF0u;
    // 0x29cbf4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29CBF0u, 0x29CBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CBF8u;
label_29cbf8:
    // 0x29cbf8: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29cbf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29cbfc:
    // 0x29cbfc: 0xc09e1e8  jal         func_2787A0
label_29cc00:
    if (ctx->pc == 0x29CC00u) {
        ctx->pc = 0x29CC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CBFCu;
        // 0x29cc00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC04u;
        goto label_29cc04;
    }
    ctx->pc = 0x29CBFCu;
    SET_GPR_U32(ctx, 31, 0x29CC04u);
    ctx->pc = 0x29CC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CBFCu;
    // 0x29cc00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x29CBFCu, 0x29CC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC04u;
label_29cc04:
    // 0x29cc04: 0xc0a5824  jal         func_296090
label_29cc08:
    if (ctx->pc == 0x29CC08u) {
        ctx->pc = 0x29CC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC04u;
        // 0x29cc08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC0Cu;
        goto label_29cc0c;
    }
    ctx->pc = 0x29CC04u;
    SET_GPR_U32(ctx, 31, 0x29CC0Cu);
    ctx->pc = 0x29CC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC04u;
    // 0x29cc08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296090u, 0x29CC04u, 0x29CC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC0Cu;
label_29cc0c:
    // 0x29cc0c: 0xc0a587e  jal         func_2961F8
label_29cc10:
    if (ctx->pc == 0x29CC10u) {
        ctx->pc = 0x29CC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC0Cu;
        // 0x29cc10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC14u;
        goto label_29cc14;
    }
    ctx->pc = 0x29CC0Cu;
    SET_GPR_U32(ctx, 31, 0x29CC14u);
    ctx->pc = 0x29CC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC0Cu;
    // 0x29cc10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2961F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2961F8u, 0x29CC0Cu, 0x29CC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC14u;
label_29cc14:
    // 0x29cc14: 0x10000020  b           . + 4 + (0x20 << 2)
label_29cc18:
    if (ctx->pc == 0x29CC18u) {
        ctx->pc = 0x29CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC14u;
        // 0x29cc18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC1Cu;
        goto label_29cc1c;
    }
    ctx->pc = 0x29CC14u;
    {
        const bool branch_taken_0x29cc14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC14u;
        // 0x29cc18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc14) {
            ctx->pc = 0x29CC98u;
            goto label_29cc98;
        }
    }
    ctx->pc = 0x29CC1Cu;
label_29cc1c:
    // 0x29cc1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cc1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cc20:
    // 0x29cc20: 0xc0d73f4  jal         func_35CFD0
label_29cc24:
    if (ctx->pc == 0x29CC24u) {
        ctx->pc = 0x29CC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC20u;
        // 0x29cc24: 0x24a5c0a0  addiu       $a1, $a1, -0x3F60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC28u;
        goto label_29cc28;
    }
    ctx->pc = 0x29CC20u;
    SET_GPR_U32(ctx, 31, 0x29CC28u);
    ctx->pc = 0x29CC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC20u;
    // 0x29cc24: 0x24a5c0a0  addiu       $a1, $a1, -0x3F60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CC20u, 0x29CC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC28u;
label_29cc28:
    // 0x29cc28: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_29cc2c:
    if (ctx->pc == 0x29CC2Cu) {
        ctx->pc = 0x29CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC28u;
        // 0x29cc2c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC30u;
        goto label_29cc30;
    }
    ctx->pc = 0x29CC28u;
    {
        const bool branch_taken_0x29cc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC28u;
        // 0x29cc2c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc28) {
            ctx->pc = 0x29CC5Cu;
            goto label_29cc5c;
        }
    }
    ctx->pc = 0x29CC30u;
label_29cc30:
    // 0x29cc30: 0xc0d737c  jal         func_35CDF0
label_29cc34:
    if (ctx->pc == 0x29CC34u) {
        ctx->pc = 0x29CC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC30u;
        // 0x29cc34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC38u;
        goto label_29cc38;
    }
    ctx->pc = 0x29CC30u;
    SET_GPR_U32(ctx, 31, 0x29CC38u);
    ctx->pc = 0x29CC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC30u;
    // 0x29cc34: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29CC30u, 0x29CC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC38u;
label_29cc38:
    // 0x29cc38: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29cc38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29cc3c:
    // 0x29cc3c: 0xc09e1e8  jal         func_2787A0
label_29cc40:
    if (ctx->pc == 0x29CC40u) {
        ctx->pc = 0x29CC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC3Cu;
        // 0x29cc40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC44u;
        goto label_29cc44;
    }
    ctx->pc = 0x29CC3Cu;
    SET_GPR_U32(ctx, 31, 0x29CC44u);
    ctx->pc = 0x29CC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC3Cu;
    // 0x29cc40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x29CC3Cu, 0x29CC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC44u;
label_29cc44:
    // 0x29cc44: 0xc0a5808  jal         func_296020
label_29cc48:
    if (ctx->pc == 0x29CC48u) {
        ctx->pc = 0x29CC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC44u;
        // 0x29cc48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC4Cu;
        goto label_29cc4c;
    }
    ctx->pc = 0x29CC44u;
    SET_GPR_U32(ctx, 31, 0x29CC4Cu);
    ctx->pc = 0x29CC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC44u;
    // 0x29cc48: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296020u, 0x29CC44u, 0x29CC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC4Cu;
label_29cc4c:
    // 0x29cc4c: 0xc0a5892  jal         func_296248
label_29cc50:
    if (ctx->pc == 0x29CC50u) {
        ctx->pc = 0x29CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC4Cu;
        // 0x29cc50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC54u;
        goto label_29cc54;
    }
    ctx->pc = 0x29CC4Cu;
    SET_GPR_U32(ctx, 31, 0x29CC54u);
    ctx->pc = 0x29CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC4Cu;
    // 0x29cc50: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296248u, 0x29CC4Cu, 0x29CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC54u;
label_29cc54:
    // 0x29cc54: 0x10000010  b           . + 4 + (0x10 << 2)
label_29cc58:
    if (ctx->pc == 0x29CC58u) {
        ctx->pc = 0x29CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC54u;
        // 0x29cc58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC5Cu;
        goto label_29cc5c;
    }
    ctx->pc = 0x29CC54u;
    {
        const bool branch_taken_0x29cc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC54u;
        // 0x29cc58: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc54) {
            ctx->pc = 0x29CC98u;
            goto label_29cc98;
        }
    }
    ctx->pc = 0x29CC5Cu;
label_29cc5c:
    // 0x29cc5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cc60:
    // 0x29cc60: 0xc0d73f4  jal         func_35CFD0
label_29cc64:
    if (ctx->pc == 0x29CC64u) {
        ctx->pc = 0x29CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC60u;
        // 0x29cc64: 0x24a5c0b0  addiu       $a1, $a1, -0x3F50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC68u;
        goto label_29cc68;
    }
    ctx->pc = 0x29CC60u;
    SET_GPR_U32(ctx, 31, 0x29CC68u);
    ctx->pc = 0x29CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC60u;
    // 0x29cc64: 0x24a5c0b0  addiu       $a1, $a1, -0x3F50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CC60u, 0x29CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC68u;
label_29cc68:
    // 0x29cc68: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_29cc6c:
    if (ctx->pc == 0x29CC6Cu) {
        ctx->pc = 0x29CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC68u;
        // 0x29cc6c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC70u;
        goto label_29cc70;
    }
    ctx->pc = 0x29CC68u;
    {
        const bool branch_taken_0x29cc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC68u;
        // 0x29cc6c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cc68) {
            ctx->pc = 0x29CCA8u;
            goto label_29cca8;
        }
    }
    ctx->pc = 0x29CC70u;
label_29cc70:
    // 0x29cc70: 0xc0d737c  jal         func_35CDF0
label_29cc74:
    if (ctx->pc == 0x29CC74u) {
        ctx->pc = 0x29CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC70u;
        // 0x29cc74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC78u;
        goto label_29cc78;
    }
    ctx->pc = 0x29CC70u;
    SET_GPR_U32(ctx, 31, 0x29CC78u);
    ctx->pc = 0x29CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC70u;
    // 0x29cc74: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CDF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CDF0u, 0x29CC70u, 0x29CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC78u;
label_29cc78:
    // 0x29cc78: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29cc78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29cc7c:
    // 0x29cc7c: 0xc09e1e8  jal         func_2787A0
label_29cc80:
    if (ctx->pc == 0x29CC80u) {
        ctx->pc = 0x29CC80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC7Cu;
        // 0x29cc80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC84u;
        goto label_29cc84;
    }
    ctx->pc = 0x29CC7Cu;
    SET_GPR_U32(ctx, 31, 0x29CC84u);
    ctx->pc = 0x29CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC7Cu;
    // 0x29cc80: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2787A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2787A0u, 0x29CC7Cu, 0x29CC84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC84u;
label_29cc84:
    // 0x29cc84: 0xc0a5840  jal         func_296100
label_29cc88:
    if (ctx->pc == 0x29CC88u) {
        ctx->pc = 0x29CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC84u;
        // 0x29cc88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC8Cu;
        goto label_29cc8c;
    }
    ctx->pc = 0x29CC84u;
    SET_GPR_U32(ctx, 31, 0x29CC8Cu);
    ctx->pc = 0x29CC88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC84u;
    // 0x29cc88: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296100u, 0x29CC84u, 0x29CC8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC8Cu;
label_29cc8c:
    // 0x29cc8c: 0xc0a589c  jal         func_296270
label_29cc90:
    if (ctx->pc == 0x29CC90u) {
        ctx->pc = 0x29CC90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC8Cu;
        // 0x29cc90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CC94u;
        goto label_29cc94;
    }
    ctx->pc = 0x29CC8Cu;
    SET_GPR_U32(ctx, 31, 0x29CC94u);
    ctx->pc = 0x29CC90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC8Cu;
    // 0x29cc90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296270u, 0x29CC8Cu, 0x29CC94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CC94u;
label_29cc94:
    // 0x29cc94: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x29cc94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29cc98:
    // 0x29cc98: 0xc0d7412  jal         func_35D048
label_29cc9c:
    if (ctx->pc == 0x29CC9Cu) {
        ctx->pc = 0x29CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CC98u;
        // 0x29cc9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCA0u;
        goto label_29cca0;
    }
    ctx->pc = 0x29CC98u;
    SET_GPR_U32(ctx, 31, 0x29CCA0u);
    ctx->pc = 0x29CC9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CC98u;
    // 0x29cc9c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29CC98u, 0x29CCA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCA0u;
label_29cca0:
    // 0x29cca0: 0x1000009d  b           . + 4 + (0x9D << 2)
label_29cca4:
    if (ctx->pc == 0x29CCA4u) {
        ctx->pc = 0x29CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCA0u;
        // 0x29cca4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCA8u;
        goto label_29cca8;
    }
    ctx->pc = 0x29CCA0u;
    {
        const bool branch_taken_0x29cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCA0u;
        // 0x29cca4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cca0) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CCA8u;
label_29cca8:
    // 0x29cca8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cca8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ccac:
    // 0x29ccac: 0xc0d73f4  jal         func_35CFD0
label_29ccb0:
    if (ctx->pc == 0x29CCB0u) {
        ctx->pc = 0x29CCB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCACu;
        // 0x29ccb0: 0x24a5c0c8  addiu       $a1, $a1, -0x3F38 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCB4u;
        goto label_29ccb4;
    }
    ctx->pc = 0x29CCACu;
    SET_GPR_U32(ctx, 31, 0x29CCB4u);
    ctx->pc = 0x29CCB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CCACu;
    // 0x29ccb0: 0x24a5c0c8  addiu       $a1, $a1, -0x3F38 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CCACu, 0x29CCB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCB4u;
label_29ccb4:
    // 0x29ccb4: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_29ccb8:
    if (ctx->pc == 0x29CCB8u) {
        ctx->pc = 0x29CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCB4u;
        // 0x29ccb8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCBCu;
        goto label_29ccbc;
    }
    ctx->pc = 0x29CCB4u;
    {
        const bool branch_taken_0x29ccb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCB4u;
        // 0x29ccb8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccb4) {
            ctx->pc = 0x29CCF0u;
            goto label_29ccf0;
        }
    }
    ctx->pc = 0x29CCBCu;
label_29ccbc:
    // 0x29ccbc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ccbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ccc0:
    // 0x29ccc0: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x29ccc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_29ccc4:
    // 0x29ccc4: 0x27a60068  addiu       $a2, $sp, 0x68
    ctx->pc = 0x29ccc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
label_29ccc8:
    // 0x29ccc8: 0x27a7006c  addiu       $a3, $sp, 0x6C
    ctx->pc = 0x29ccc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
label_29cccc:
    // 0x29cccc: 0xc09df8e  jal         func_277E38
label_29ccd0:
    if (ctx->pc == 0x29CCD0u) {
        ctx->pc = 0x29CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCCCu;
        // 0x29ccd0: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCD4u;
        goto label_29ccd4;
    }
    ctx->pc = 0x29CCCCu;
    SET_GPR_U32(ctx, 31, 0x29CCD4u);
    ctx->pc = 0x29CCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CCCCu;
    // 0x29ccd0: 0x27a80070  addiu       $t0, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277E38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277E38u, 0x29CCCCu, 0x29CCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCD4u;
label_29ccd4:
    // 0x29ccd4: 0xc7ac0064  lwc1        $f12, 0x64($sp)
    ctx->pc = 0x29ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29ccd8:
    // 0x29ccd8: 0xc7ad0068  lwc1        $f13, 0x68($sp)
    ctx->pc = 0x29ccd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_29ccdc:
    // 0x29ccdc: 0xc7ae006c  lwc1        $f14, 0x6C($sp)
    ctx->pc = 0x29ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_29cce0:
    // 0x29cce0: 0xc0a585c  jal         func_296170
label_29cce4:
    if (ctx->pc == 0x29CCE4u) {
        ctx->pc = 0x29CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCE0u;
        // 0x29cce4: 0xc7af0070  lwc1        $f15, 0x70($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCE8u;
        goto label_29cce8;
    }
    ctx->pc = 0x29CCE0u;
    SET_GPR_U32(ctx, 31, 0x29CCE8u);
    ctx->pc = 0x29CCE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CCE0u;
    // 0x29cce4: 0xc7af0070  lwc1        $f15, 0x70($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x296170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296170u, 0x29CCE0u, 0x29CCE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCE8u;
label_29cce8:
    // 0x29cce8: 0x1000008b  b           . + 4 + (0x8B << 2)
label_29ccec:
    if (ctx->pc == 0x29CCECu) {
        ctx->pc = 0x29CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCE8u;
        // 0x29ccec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCF0u;
        goto label_29ccf0;
    }
    ctx->pc = 0x29CCE8u;
    {
        const bool branch_taken_0x29cce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCE8u;
        // 0x29ccec: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cce8) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CCF0u;
label_29ccf0:
    // 0x29ccf0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29ccf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ccf4:
    // 0x29ccf4: 0xc0d73f4  jal         func_35CFD0
label_29ccf8:
    if (ctx->pc == 0x29CCF8u) {
        ctx->pc = 0x29CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCF4u;
        // 0x29ccf8: 0x24a5c0e0  addiu       $a1, $a1, -0x3F20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CCFCu;
        goto label_29ccfc;
    }
    ctx->pc = 0x29CCF4u;
    SET_GPR_U32(ctx, 31, 0x29CCFCu);
    ctx->pc = 0x29CCF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CCF4u;
    // 0x29ccf8: 0x24a5c0e0  addiu       $a1, $a1, -0x3F20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CCF4u, 0x29CCFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CCFCu;
label_29ccfc:
    // 0x29ccfc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_29cd00:
    if (ctx->pc == 0x29CD00u) {
        ctx->pc = 0x29CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCFCu;
        // 0x29cd00: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD04u;
        goto label_29cd04;
    }
    ctx->pc = 0x29CCFCu;
    {
        const bool branch_taken_0x29ccfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CD00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CCFCu;
        // 0x29cd00: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ccfc) {
            ctx->pc = 0x29CD28u;
            goto label_29cd28;
        }
    }
    ctx->pc = 0x29CD04u;
label_29cd04:
    // 0x29cd04: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29cd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cd08:
    // 0x29cd08: 0x27a50074  addiu       $a1, $sp, 0x74
    ctx->pc = 0x29cd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
label_29cd0c:
    // 0x29cd0c: 0xc09df74  jal         func_277DD0
label_29cd10:
    if (ctx->pc == 0x29CD10u) {
        ctx->pc = 0x29CD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD0Cu;
        // 0x29cd10: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD14u;
        goto label_29cd14;
    }
    ctx->pc = 0x29CD0Cu;
    SET_GPR_U32(ctx, 31, 0x29CD14u);
    ctx->pc = 0x29CD10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD0Cu;
    // 0x29cd10: 0x27a60078  addiu       $a2, $sp, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x29CD0Cu, 0x29CD14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD14u;
label_29cd14:
    // 0x29cd14: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x29cd14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29cd18:
    // 0x29cd18: 0xc0a75b0  jal         func_29D6C0
label_29cd1c:
    if (ctx->pc == 0x29CD1Cu) {
        ctx->pc = 0x29CD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD18u;
        // 0x29cd1c: 0xc7ad0078  lwc1        $f13, 0x78($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD20u;
        goto label_29cd20;
    }
    ctx->pc = 0x29CD18u;
    SET_GPR_U32(ctx, 31, 0x29CD20u);
    ctx->pc = 0x29CD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD18u;
    // 0x29cd1c: 0xc7ad0078  lwc1        $f13, 0x78($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D6C0u, 0x29CD18u, 0x29CD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD20u;
label_29cd20:
    // 0x29cd20: 0x1000007d  b           . + 4 + (0x7D << 2)
label_29cd24:
    if (ctx->pc == 0x29CD24u) {
        ctx->pc = 0x29CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD20u;
        // 0x29cd24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD28u;
        goto label_29cd28;
    }
    ctx->pc = 0x29CD20u;
    {
        const bool branch_taken_0x29cd20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD20u;
        // 0x29cd24: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd20) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CD28u;
label_29cd28:
    // 0x29cd28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cd28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cd2c:
    // 0x29cd2c: 0xc0d73f4  jal         func_35CFD0
label_29cd30:
    if (ctx->pc == 0x29CD30u) {
        ctx->pc = 0x29CD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD2Cu;
        // 0x29cd30: 0x24a5c0f8  addiu       $a1, $a1, -0x3F08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD34u;
        goto label_29cd34;
    }
    ctx->pc = 0x29CD2Cu;
    SET_GPR_U32(ctx, 31, 0x29CD34u);
    ctx->pc = 0x29CD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD2Cu;
    // 0x29cd30: 0x24a5c0f8  addiu       $a1, $a1, -0x3F08 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CD2Cu, 0x29CD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD34u;
label_29cd34:
    // 0x29cd34: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_29cd38:
    if (ctx->pc == 0x29CD38u) {
        ctx->pc = 0x29CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD34u;
        // 0x29cd38: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD3Cu;
        goto label_29cd3c;
    }
    ctx->pc = 0x29CD34u;
    {
        const bool branch_taken_0x29cd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD34u;
        // 0x29cd38: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd34) {
            ctx->pc = 0x29CD60u;
            goto label_29cd60;
        }
    }
    ctx->pc = 0x29CD3Cu;
label_29cd3c:
    // 0x29cd3c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29cd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cd40:
    // 0x29cd40: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x29cd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_29cd44:
    // 0x29cd44: 0xc09df74  jal         func_277DD0
label_29cd48:
    if (ctx->pc == 0x29CD48u) {
        ctx->pc = 0x29CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD44u;
        // 0x29cd48: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD4Cu;
        goto label_29cd4c;
    }
    ctx->pc = 0x29CD44u;
    SET_GPR_U32(ctx, 31, 0x29CD4Cu);
    ctx->pc = 0x29CD48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD44u;
    // 0x29cd48: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277DD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277DD0u, 0x29CD44u, 0x29CD4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD4Cu;
label_29cd4c:
    // 0x29cd4c: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x29cd4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_29cd50:
    // 0x29cd50: 0xc0a75aa  jal         func_29D6A8
label_29cd54:
    if (ctx->pc == 0x29CD54u) {
        ctx->pc = 0x29CD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD50u;
        // 0x29cd54: 0xc7ad0080  lwc1        $f13, 0x80($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD58u;
        goto label_29cd58;
    }
    ctx->pc = 0x29CD50u;
    SET_GPR_U32(ctx, 31, 0x29CD58u);
    ctx->pc = 0x29CD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD50u;
    // 0x29cd54: 0xc7ad0080  lwc1        $f13, 0x80($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D6A8u, 0x29CD50u, 0x29CD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD58u;
label_29cd58:
    // 0x29cd58: 0x1000006f  b           . + 4 + (0x6F << 2)
label_29cd5c:
    if (ctx->pc == 0x29CD5Cu) {
        ctx->pc = 0x29CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD58u;
        // 0x29cd5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD60u;
        goto label_29cd60;
    }
    ctx->pc = 0x29CD58u;
    {
        const bool branch_taken_0x29cd58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD58u;
        // 0x29cd5c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd58) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CD60u;
label_29cd60:
    // 0x29cd60: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cd60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cd64:
    // 0x29cd64: 0xc0d73f4  jal         func_35CFD0
label_29cd68:
    if (ctx->pc == 0x29CD68u) {
        ctx->pc = 0x29CD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD64u;
        // 0x29cd68: 0x24a5c108  addiu       $a1, $a1, -0x3EF8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD6Cu;
        goto label_29cd6c;
    }
    ctx->pc = 0x29CD64u;
    SET_GPR_U32(ctx, 31, 0x29CD6Cu);
    ctx->pc = 0x29CD68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD64u;
    // 0x29cd68: 0x24a5c108  addiu       $a1, $a1, -0x3EF8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CD64u, 0x29CD6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD6Cu;
label_29cd6c:
    // 0x29cd6c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_29cd70:
    if (ctx->pc == 0x29CD70u) {
        ctx->pc = 0x29CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD6Cu;
        // 0x29cd70: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD74u;
        goto label_29cd74;
    }
    ctx->pc = 0x29CD6Cu;
    {
        const bool branch_taken_0x29cd6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD6Cu;
        // 0x29cd70: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd6c) {
            ctx->pc = 0x29CD90u;
            goto label_29cd90;
        }
    }
    ctx->pc = 0x29CD74u;
label_29cd74:
    // 0x29cd74: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29cd74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cd78:
    // 0x29cd78: 0xc09debe  jal         func_277AF8
label_29cd7c:
    if (ctx->pc == 0x29CD7Cu) {
        ctx->pc = 0x29CD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD78u;
        // 0x29cd7c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD80u;
        goto label_29cd80;
    }
    ctx->pc = 0x29CD78u;
    SET_GPR_U32(ctx, 31, 0x29CD80u);
    ctx->pc = 0x29CD7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD78u;
    // 0x29cd7c: 0x27a50084  addiu       $a1, $sp, 0x84 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x29CD78u, 0x29CD80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD80u;
label_29cd80:
    // 0x29cd80: 0xc0a75b6  jal         func_29D6D8
label_29cd84:
    if (ctx->pc == 0x29CD84u) {
        ctx->pc = 0x29CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD80u;
        // 0x29cd84: 0xc7ac0084  lwc1        $f12, 0x84($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD88u;
        goto label_29cd88;
    }
    ctx->pc = 0x29CD80u;
    SET_GPR_U32(ctx, 31, 0x29CD88u);
    ctx->pc = 0x29CD84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD80u;
    // 0x29cd84: 0xc7ac0084  lwc1        $f12, 0x84($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D6D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D6D8u, 0x29CD80u, 0x29CD88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD88u;
label_29cd88:
    // 0x29cd88: 0x10000063  b           . + 4 + (0x63 << 2)
label_29cd8c:
    if (ctx->pc == 0x29CD8Cu) {
        ctx->pc = 0x29CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD88u;
        // 0x29cd8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD90u;
        goto label_29cd90;
    }
    ctx->pc = 0x29CD88u;
    {
        const bool branch_taken_0x29cd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD88u;
        // 0x29cd8c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd88) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CD90u;
label_29cd90:
    // 0x29cd90: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cd90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cd94:
    // 0x29cd94: 0xc0d73f4  jal         func_35CFD0
label_29cd98:
    if (ctx->pc == 0x29CD98u) {
        ctx->pc = 0x29CD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD94u;
        // 0x29cd98: 0x24a5c118  addiu       $a1, $a1, -0x3EE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CD9Cu;
        goto label_29cd9c;
    }
    ctx->pc = 0x29CD94u;
    SET_GPR_U32(ctx, 31, 0x29CD9Cu);
    ctx->pc = 0x29CD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CD94u;
    // 0x29cd98: 0x24a5c118  addiu       $a1, $a1, -0x3EE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CD94u, 0x29CD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CD9Cu;
label_29cd9c:
    // 0x29cd9c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_29cda0:
    if (ctx->pc == 0x29CDA0u) {
        ctx->pc = 0x29CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD9Cu;
        // 0x29cda0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDA4u;
        goto label_29cda4;
    }
    ctx->pc = 0x29CD9Cu;
    {
        const bool branch_taken_0x29cd9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CD9Cu;
        // 0x29cda0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cd9c) {
            ctx->pc = 0x29CDDCu;
            goto label_29cddc;
        }
    }
    ctx->pc = 0x29CDA4u;
label_29cda4:
    // 0x29cda4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29cda4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cda8:
    // 0x29cda8: 0xc09deca  jal         func_277B28
label_29cdac:
    if (ctx->pc == 0x29CDACu) {
        ctx->pc = 0x29CDACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDA8u;
        // 0x29cdac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDB0u;
        goto label_29cdb0;
    }
    ctx->pc = 0x29CDA8u;
    SET_GPR_U32(ctx, 31, 0x29CDB0u);
    ctx->pc = 0x29CDACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDA8u;
    // 0x29cdac: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277B28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277B28u, 0x29CDA8u, 0x29CDB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDB0u;
label_29cdb0:
    // 0x29cdb0: 0x8ba20023  lwl         $v0, 0x23($sp)
    ctx->pc = 0x29cdb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 35); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_29cdb4:
    // 0x29cdb4: 0x9ba20020  lwr         $v0, 0x20($sp)
    ctx->pc = 0x29cdb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_29cdb8:
    // 0x29cdb8: 0xaba20033  swl         $v0, 0x33($sp)
    ctx->pc = 0x29cdb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 51); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_29cdbc:
    // 0x29cdbc: 0xbba20030  swr         $v0, 0x30($sp)
    ctx->pc = 0x29cdbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_29cdc0:
    // 0x29cdc0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29cdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29cdc4:
    // 0x29cdc4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29cdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_29cdc8:
    // 0x29cdc8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x29cdc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_29cdcc:
    // 0x29cdcc: 0xc0a75ba  jal         func_29D6E8
label_29cdd0:
    if (ctx->pc == 0x29CDD0u) {
        ctx->pc = 0x29CDD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDCCu;
        // 0x29cdd0: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDD4u;
        goto label_29cdd4;
    }
    ctx->pc = 0x29CDCCu;
    SET_GPR_U32(ctx, 31, 0x29CDD4u);
    ctx->pc = 0x29CDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDCCu;
    // 0x29cdd0: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D6E8u, 0x29CDCCu, 0x29CDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDD4u;
label_29cdd4:
    // 0x29cdd4: 0x10000050  b           . + 4 + (0x50 << 2)
label_29cdd8:
    if (ctx->pc == 0x29CDD8u) {
        ctx->pc = 0x29CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDD4u;
        // 0x29cdd8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDDCu;
        goto label_29cddc;
    }
    ctx->pc = 0x29CDD4u;
    {
        const bool branch_taken_0x29cdd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDD4u;
        // 0x29cdd8: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cdd4) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CDDCu;
label_29cddc:
    // 0x29cddc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cde0:
    // 0x29cde0: 0xc0d73f4  jal         func_35CFD0
label_29cde4:
    if (ctx->pc == 0x29CDE4u) {
        ctx->pc = 0x29CDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDE0u;
        // 0x29cde4: 0x24a5c130  addiu       $a1, $a1, -0x3ED0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951216));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDE8u;
        goto label_29cde8;
    }
    ctx->pc = 0x29CDE0u;
    SET_GPR_U32(ctx, 31, 0x29CDE8u);
    ctx->pc = 0x29CDE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CDE0u;
    // 0x29cde4: 0x24a5c130  addiu       $a1, $a1, -0x3ED0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CDE0u, 0x29CDE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CDE8u;
label_29cde8:
    // 0x29cde8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_29cdec:
    if (ctx->pc == 0x29CDECu) {
        ctx->pc = 0x29CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDE8u;
        // 0x29cdec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CDF0u;
        goto label_29cdf0;
    }
    ctx->pc = 0x29CDE8u;
    {
        const bool branch_taken_0x29cde8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CDECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CDE8u;
        // 0x29cdec: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cde8) {
            ctx->pc = 0x29CE1Cu;
            goto label_29ce1c;
        }
    }
    ctx->pc = 0x29CDF0u;
label_29cdf0:
    // 0x29cdf0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x29cdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_29cdf4:
    // 0x29cdf4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x29cdf4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_29cdf8:
    // 0x29cdf8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x29cdf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29cdfc:
    // 0x29cdfc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29cdfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ce00:
    // 0x29ce00: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x29ce00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
label_29ce04:
    // 0x29ce04: 0xc09debe  jal         func_277AF8
label_29ce08:
    if (ctx->pc == 0x29CE08u) {
        ctx->pc = 0x29CE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE04u;
        // 0x29ce08: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE0Cu;
        goto label_29ce0c;
    }
    ctx->pc = 0x29CE04u;
    SET_GPR_U32(ctx, 31, 0x29CE0Cu);
    ctx->pc = 0x29CE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE04u;
    // 0x29ce08: 0xe7a00088  swc1        $f0, 0x88($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x29CE04u, 0x29CE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE0Cu;
label_29ce0c:
    // 0x29ce0c: 0xc0a81f8  jal         func_2A07E0
label_29ce10:
    if (ctx->pc == 0x29CE10u) {
        ctx->pc = 0x29CE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE0Cu;
        // 0x29ce10: 0xc7ac0088  lwc1        $f12, 0x88($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE14u;
        goto label_29ce14;
    }
    ctx->pc = 0x29CE0Cu;
    SET_GPR_U32(ctx, 31, 0x29CE14u);
    ctx->pc = 0x29CE10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE0Cu;
    // 0x29ce10: 0xc7ac0088  lwc1        $f12, 0x88($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A07E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A07E0u, 0x29CE0Cu, 0x29CE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE14u;
label_29ce14:
    // 0x29ce14: 0x10000040  b           . + 4 + (0x40 << 2)
label_29ce18:
    if (ctx->pc == 0x29CE18u) {
        ctx->pc = 0x29CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE14u;
        // 0x29ce18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE1Cu;
        goto label_29ce1c;
    }
    ctx->pc = 0x29CE14u;
    {
        const bool branch_taken_0x29ce14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE14u;
        // 0x29ce18: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce14) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CE1Cu;
label_29ce1c:
    // 0x29ce1c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29ce1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ce20:
    // 0x29ce20: 0xc0d73f4  jal         func_35CFD0
label_29ce24:
    if (ctx->pc == 0x29CE24u) {
        ctx->pc = 0x29CE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE20u;
        // 0x29ce24: 0x24a5c150  addiu       $a1, $a1, -0x3EB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE28u;
        goto label_29ce28;
    }
    ctx->pc = 0x29CE20u;
    SET_GPR_U32(ctx, 31, 0x29CE28u);
    ctx->pc = 0x29CE24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE20u;
    // 0x29ce24: 0x24a5c150  addiu       $a1, $a1, -0x3EB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CE20u, 0x29CE28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE28u;
label_29ce28:
    // 0x29ce28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_29ce2c:
    if (ctx->pc == 0x29CE2Cu) {
        ctx->pc = 0x29CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE28u;
        // 0x29ce2c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE30u;
        goto label_29ce30;
    }
    ctx->pc = 0x29CE28u;
    {
        const bool branch_taken_0x29ce28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE28u;
        // 0x29ce2c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce28) {
            ctx->pc = 0x29CE44u;
            goto label_29ce44;
        }
    }
    ctx->pc = 0x29CE30u;
label_29ce30:
    // 0x29ce30: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ce30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ce34:
    // 0x29ce34: 0xc09e2c2  jal         func_278B08
label_29ce38:
    if (ctx->pc == 0x29CE38u) {
        ctx->pc = 0x29CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE34u;
        // 0x29ce38: 0x26e505a8  addiu       $a1, $s7, 0x5A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1448));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE3Cu;
        goto label_29ce3c;
    }
    ctx->pc = 0x29CE34u;
    SET_GPR_U32(ctx, 31, 0x29CE3Cu);
    ctx->pc = 0x29CE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE34u;
    // 0x29ce38: 0x26e505a8  addiu       $a1, $s7, 0x5A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278B08u, 0x29CE34u, 0x29CE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE3Cu;
label_29ce3c:
    // 0x29ce3c: 0x10000036  b           . + 4 + (0x36 << 2)
label_29ce40:
    if (ctx->pc == 0x29CE40u) {
        ctx->pc = 0x29CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE3Cu;
        // 0x29ce40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE44u;
        goto label_29ce44;
    }
    ctx->pc = 0x29CE3Cu;
    {
        const bool branch_taken_0x29ce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE3Cu;
        // 0x29ce40: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce3c) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CE44u;
label_29ce44:
    // 0x29ce44: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29ce44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ce48:
    // 0x29ce48: 0xc0d73f4  jal         func_35CFD0
label_29ce4c:
    if (ctx->pc == 0x29CE4Cu) {
        ctx->pc = 0x29CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE48u;
        // 0x29ce4c: 0x24a5c160  addiu       $a1, $a1, -0x3EA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE50u;
        goto label_29ce50;
    }
    ctx->pc = 0x29CE48u;
    SET_GPR_U32(ctx, 31, 0x29CE50u);
    ctx->pc = 0x29CE4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE48u;
    // 0x29ce4c: 0x24a5c160  addiu       $a1, $a1, -0x3EA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CE48u, 0x29CE50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE50u;
label_29ce50:
    // 0x29ce50: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_29ce54:
    if (ctx->pc == 0x29CE54u) {
        ctx->pc = 0x29CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE50u;
        // 0x29ce54: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE58u;
        goto label_29ce58;
    }
    ctx->pc = 0x29CE50u;
    {
        const bool branch_taken_0x29ce50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE50u;
        // 0x29ce54: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce50) {
            ctx->pc = 0x29CE6Cu;
            goto label_29ce6c;
        }
    }
    ctx->pc = 0x29CE58u;
label_29ce58:
    // 0x29ce58: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ce58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ce5c:
    // 0x29ce5c: 0xc09e056  jal         func_278158
label_29ce60:
    if (ctx->pc == 0x29CE60u) {
        ctx->pc = 0x29CE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE5Cu;
        // 0x29ce60: 0x26e505b0  addiu       $a1, $s7, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE64u;
        goto label_29ce64;
    }
    ctx->pc = 0x29CE5Cu;
    SET_GPR_U32(ctx, 31, 0x29CE64u);
    ctx->pc = 0x29CE60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE5Cu;
    // 0x29ce60: 0x26e505b0  addiu       $a1, $s7, 0x5B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 1456));
    ctx->in_delay_slot = false;
    ctx->pc = 0x278158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x278158u, 0x29CE5Cu, 0x29CE64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE64u;
label_29ce64:
    // 0x29ce64: 0x1000002c  b           . + 4 + (0x2C << 2)
label_29ce68:
    if (ctx->pc == 0x29CE68u) {
        ctx->pc = 0x29CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE64u;
        // 0x29ce68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE6Cu;
        goto label_29ce6c;
    }
    ctx->pc = 0x29CE64u;
    {
        const bool branch_taken_0x29ce64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE64u;
        // 0x29ce68: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce64) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CE6Cu;
label_29ce6c:
    // 0x29ce6c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29ce6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ce70:
    // 0x29ce70: 0xc0d73f4  jal         func_35CFD0
label_29ce74:
    if (ctx->pc == 0x29CE74u) {
        ctx->pc = 0x29CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE70u;
        // 0x29ce74: 0x24a5c178  addiu       $a1, $a1, -0x3E88 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE78u;
        goto label_29ce78;
    }
    ctx->pc = 0x29CE70u;
    SET_GPR_U32(ctx, 31, 0x29CE78u);
    ctx->pc = 0x29CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE70u;
    // 0x29ce74: 0x24a5c178  addiu       $a1, $a1, -0x3E88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CE70u, 0x29CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE78u;
label_29ce78:
    // 0x29ce78: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29ce7c:
    if (ctx->pc == 0x29CE7Cu) {
        ctx->pc = 0x29CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE78u;
        // 0x29ce7c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE80u;
        goto label_29ce80;
    }
    ctx->pc = 0x29CE78u;
    {
        const bool branch_taken_0x29ce78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE78u;
        // 0x29ce7c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce78) {
            ctx->pc = 0x29CE98u;
            goto label_29ce98;
        }
    }
    ctx->pc = 0x29CE80u;
label_29ce80:
    // 0x29ce80: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ce80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ce84:
    // 0x29ce84: 0xc09debe  jal         func_277AF8
label_29ce88:
    if (ctx->pc == 0x29CE88u) {
        ctx->pc = 0x29CE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE84u;
        // 0x29ce88: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE8Cu;
        goto label_29ce8c;
    }
    ctx->pc = 0x29CE84u;
    SET_GPR_U32(ctx, 31, 0x29CE8Cu);
    ctx->pc = 0x29CE88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE84u;
    // 0x29ce88: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x29CE84u, 0x29CE8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CE8Cu;
label_29ce8c:
    // 0x29ce8c: 0xc7a0008c  lwc1        $f0, 0x8C($sp)
    ctx->pc = 0x29ce8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29ce90:
    // 0x29ce90: 0x10000020  b           . + 4 + (0x20 << 2)
label_29ce94:
    if (ctx->pc == 0x29CE94u) {
        ctx->pc = 0x29CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE90u;
        // 0x29ce94: 0xe6e005b4  swc1        $f0, 0x5B4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 1460), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CE98u;
        goto label_29ce98;
    }
    ctx->pc = 0x29CE90u;
    {
        const bool branch_taken_0x29ce90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE90u;
        // 0x29ce94: 0xe6e005b4  swc1        $f0, 0x5B4($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 1460), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ce90) {
            ctx->pc = 0x29CF14u;
            goto label_29cf14;
        }
    }
    ctx->pc = 0x29CE98u;
label_29ce98:
    // 0x29ce98: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29ce98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29ce9c:
    // 0x29ce9c: 0xc0d73f4  jal         func_35CFD0
label_29cea0:
    if (ctx->pc == 0x29CEA0u) {
        ctx->pc = 0x29CEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CE9Cu;
        // 0x29cea0: 0x24a5c190  addiu       $a1, $a1, -0x3E70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951312));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEA4u;
        goto label_29cea4;
    }
    ctx->pc = 0x29CE9Cu;
    SET_GPR_U32(ctx, 31, 0x29CEA4u);
    ctx->pc = 0x29CEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CE9Cu;
    // 0x29cea0: 0x24a5c190  addiu       $a1, $a1, -0x3E70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951312));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CE9Cu, 0x29CEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEA4u;
label_29cea4:
    // 0x29cea4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29cea8:
    if (ctx->pc == 0x29CEA8u) {
        ctx->pc = 0x29CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEA4u;
        // 0x29cea8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEACu;
        goto label_29ceac;
    }
    ctx->pc = 0x29CEA4u;
    {
        const bool branch_taken_0x29cea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CEA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEA4u;
        // 0x29cea8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cea4) {
            ctx->pc = 0x29CEC4u;
            goto label_29cec4;
        }
    }
    ctx->pc = 0x29CEACu;
label_29ceac:
    // 0x29ceac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ceacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29ceb0:
    // 0x29ceb0: 0xc09debe  jal         func_277AF8
label_29ceb4:
    if (ctx->pc == 0x29CEB4u) {
        ctx->pc = 0x29CEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEB0u;
        // 0x29ceb4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEB8u;
        goto label_29ceb8;
    }
    ctx->pc = 0x29CEB0u;
    SET_GPR_U32(ctx, 31, 0x29CEB8u);
    ctx->pc = 0x29CEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CEB0u;
    // 0x29ceb4: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x29CEB0u, 0x29CEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEB8u;
label_29ceb8:
    // 0x29ceb8: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x29ceb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cebc:
    // 0x29cebc: 0x10000015  b           . + 4 + (0x15 << 2)
label_29cec0:
    if (ctx->pc == 0x29CEC0u) {
        ctx->pc = 0x29CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEBCu;
        // 0x29cec0: 0xe6e005b8  swc1        $f0, 0x5B8($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 1464), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEC4u;
        goto label_29cec4;
    }
    ctx->pc = 0x29CEBCu;
    {
        const bool branch_taken_0x29cebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEBCu;
        // 0x29cec0: 0xe6e005b8  swc1        $f0, 0x5B8($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 1464), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cebc) {
            ctx->pc = 0x29CF14u;
            goto label_29cf14;
        }
    }
    ctx->pc = 0x29CEC4u;
label_29cec4:
    // 0x29cec4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cec4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cec8:
    // 0x29cec8: 0xc0d73f4  jal         func_35CFD0
label_29cecc:
    if (ctx->pc == 0x29CECCu) {
        ctx->pc = 0x29CECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEC8u;
        // 0x29cecc: 0x24a5c1a8  addiu       $a1, $a1, -0x3E58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CED0u;
        goto label_29ced0;
    }
    ctx->pc = 0x29CEC8u;
    SET_GPR_U32(ctx, 31, 0x29CED0u);
    ctx->pc = 0x29CECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CEC8u;
    // 0x29cecc: 0x24a5c1a8  addiu       $a1, $a1, -0x3E58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CEC8u, 0x29CED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CED0u;
label_29ced0:
    // 0x29ced0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_29ced4:
    if (ctx->pc == 0x29CED4u) {
        ctx->pc = 0x29CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CED0u;
        // 0x29ced4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CED8u;
        goto label_29ced8;
    }
    ctx->pc = 0x29CED0u;
    {
        const bool branch_taken_0x29ced0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CED0u;
        // 0x29ced4: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ced0) {
            ctx->pc = 0x29CEF0u;
            goto label_29cef0;
        }
    }
    ctx->pc = 0x29CED8u;
label_29ced8:
    // 0x29ced8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29ced8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cedc:
    // 0x29cedc: 0xc09debe  jal         func_277AF8
label_29cee0:
    if (ctx->pc == 0x29CEE0u) {
        ctx->pc = 0x29CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEDCu;
        // 0x29cee0: 0x27a50094  addiu       $a1, $sp, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEE4u;
        goto label_29cee4;
    }
    ctx->pc = 0x29CEDCu;
    SET_GPR_U32(ctx, 31, 0x29CEE4u);
    ctx->pc = 0x29CEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CEDCu;
    // 0x29cee0: 0x27a50094  addiu       $a1, $sp, 0x94 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x29CEDCu, 0x29CEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEE4u;
label_29cee4:
    // 0x29cee4: 0xc7a00094  lwc1        $f0, 0x94($sp)
    ctx->pc = 0x29cee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cee8:
    // 0x29cee8: 0x1000000a  b           . + 4 + (0xA << 2)
label_29ceec:
    if (ctx->pc == 0x29CEECu) {
        ctx->pc = 0x29CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEE8u;
        // 0x29ceec: 0xe6e005bc  swc1        $f0, 0x5BC($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 1468), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEF0u;
        goto label_29cef0;
    }
    ctx->pc = 0x29CEE8u;
    {
        const bool branch_taken_0x29cee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEE8u;
        // 0x29ceec: 0xe6e005bc  swc1        $f0, 0x5BC($s7) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 1468), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cee8) {
            ctx->pc = 0x29CF14u;
            goto label_29cf14;
        }
    }
    ctx->pc = 0x29CEF0u;
label_29cef0:
    // 0x29cef0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cef0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cef4:
    // 0x29cef4: 0xc0d73f4  jal         func_35CFD0
label_29cef8:
    if (ctx->pc == 0x29CEF8u) {
        ctx->pc = 0x29CEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEF4u;
        // 0x29cef8: 0x24a5c1c0  addiu       $a1, $a1, -0x3E40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CEFCu;
        goto label_29cefc;
    }
    ctx->pc = 0x29CEF4u;
    SET_GPR_U32(ctx, 31, 0x29CEFCu);
    ctx->pc = 0x29CEF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CEF4u;
    // 0x29cef8: 0x24a5c1c0  addiu       $a1, $a1, -0x3E40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CFD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFD0u, 0x29CEF4u, 0x29CEFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CEFCu;
label_29cefc:
    // 0x29cefc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_29cf00:
    if (ctx->pc == 0x29CF00u) {
        ctx->pc = 0x29CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEFCu;
        // 0x29cf00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF04u;
        goto label_29cf04;
    }
    ctx->pc = 0x29CEFCu;
    {
        const bool branch_taken_0x29cefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CEFCu;
        // 0x29cf00: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cefc) {
            ctx->pc = 0x29CF18u;
            goto label_29cf18;
        }
    }
    ctx->pc = 0x29CF04u;
label_29cf04:
    // 0x29cf04: 0xc09debe  jal         func_277AF8
label_29cf08:
    if (ctx->pc == 0x29CF08u) {
        ctx->pc = 0x29CF08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF04u;
        // 0x29cf08: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF0Cu;
        goto label_29cf0c;
    }
    ctx->pc = 0x29CF04u;
    SET_GPR_U32(ctx, 31, 0x29CF0Cu);
    ctx->pc = 0x29CF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF04u;
    // 0x29cf08: 0x27a50098  addiu       $a1, $sp, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x277AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x277AF8u, 0x29CF04u, 0x29CF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF0Cu;
label_29cf0c:
    // 0x29cf0c: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x29cf0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29cf10:
    // 0x29cf10: 0xe6e005c4  swc1        $f0, 0x5C4($s7)
    ctx->pc = 0x29cf10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 1476), bits); }
label_29cf14:
    // 0x29cf14: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29cf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cf18:
    // 0x29cf18: 0xc09de68  jal         func_2779A0
label_29cf1c:
    if (ctx->pc == 0x29CF1Cu) {
        ctx->pc = 0x29CF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF18u;
        // 0x29cf1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF20u;
        goto label_29cf20;
    }
    ctx->pc = 0x29CF18u;
    SET_GPR_U32(ctx, 31, 0x29CF20u);
    ctx->pc = 0x29CF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF18u;
    // 0x29cf1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2779A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2779A0u, 0x29CF18u, 0x29CF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF20u;
label_29cf20:
    // 0x29cf20: 0x1440fef1  bnez        $v0, . + 4 + (-0x10F << 2)
label_29cf24:
    if (ctx->pc == 0x29CF24u) {
        ctx->pc = 0x29CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF20u;
        // 0x29cf24: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF28u;
        goto label_29cf28;
    }
    ctx->pc = 0x29CF20u;
    {
        const bool branch_taken_0x29cf20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29CF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF20u;
        // 0x29cf24: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf20) {
            ctx->pc = 0x29CAE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cae8;
        }
    }
    ctx->pc = 0x29CF28u;
label_29cf28:
    // 0x29cf28: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29cf28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cf2c:
    // 0x29cf2c: 0xc0d7412  jal         func_35D048
label_29cf30:
    if (ctx->pc == 0x29CF30u) {
        ctx->pc = 0x29CF30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF2Cu;
        // 0x29cf30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF34u;
        goto label_29cf34;
    }
    ctx->pc = 0x29CF2Cu;
    SET_GPR_U32(ctx, 31, 0x29CF34u);
    ctx->pc = 0x29CF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF2Cu;
    // 0x29cf30: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29CF2Cu, 0x29CF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF34u;
label_29cf34:
    // 0x29cf34: 0x1000003b  b           . + 4 + (0x3B << 2)
label_29cf38:
    if (ctx->pc == 0x29CF38u) {
        ctx->pc = 0x29CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF34u;
        // 0x29cf38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF3Cu;
        goto label_29cf3c;
    }
    ctx->pc = 0x29CF34u;
    {
        const bool branch_taken_0x29cf34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF34u;
        // 0x29cf38: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf34) {
            ctx->pc = 0x29D024u;
            goto label_29d024;
        }
    }
    ctx->pc = 0x29CF3Cu;
label_29cf3c:
    // 0x29cf3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29cf3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cf40:
    // 0x29cf40: 0xc0d758e  jal         func_35D638
label_29cf44:
    if (ctx->pc == 0x29CF44u) {
        ctx->pc = 0x29CF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF40u;
        // 0x29cf44: 0x24a5c1d8  addiu       $a1, $a1, -0x3E28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF48u;
        goto label_29cf48;
    }
    ctx->pc = 0x29CF40u;
    SET_GPR_U32(ctx, 31, 0x29CF48u);
    ctx->pc = 0x29CF44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF40u;
    // 0x29cf44: 0x24a5c1d8  addiu       $a1, $a1, -0x3E28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x29CF40u, 0x29CF48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF48u;
label_29cf48:
    // 0x29cf48: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_29cf4c:
    if (ctx->pc == 0x29CF4Cu) {
        ctx->pc = 0x29CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF48u;
        // 0x29cf4c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF50u;
        goto label_29cf50;
    }
    ctx->pc = 0x29CF48u;
    {
        const bool branch_taken_0x29cf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF48u;
        // 0x29cf4c: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf48) {
            ctx->pc = 0x29CF98u;
            goto label_29cf98;
        }
    }
    ctx->pc = 0x29CF50u;
label_29cf50:
    // 0x29cf50: 0xc0a5782  jal         func_295E08
label_29cf54:
    if (ctx->pc == 0x29CF54u) {
        ctx->pc = 0x29CF58u;
        goto label_29cf58;
    }
    ctx->pc = 0x29CF50u;
    SET_GPR_U32(ctx, 31, 0x29CF58u);
    ctx->pc = 0x295E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E08u, 0x29CF50u, 0x29CF58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF58u;
label_29cf58:
    // 0x29cf58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29cf58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cf5c:
    // 0x29cf5c: 0xc0a745c  jal         func_29D170
label_29cf60:
    if (ctx->pc == 0x29CF60u) {
        ctx->pc = 0x29CF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF5Cu;
        // 0x29cf60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF64u;
        goto label_29cf64;
    }
    ctx->pc = 0x29CF5Cu;
    SET_GPR_U32(ctx, 31, 0x29CF64u);
    ctx->pc = 0x29CF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF5Cu;
    // 0x29cf60: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D170u, 0x29CF5Cu, 0x29CF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF64u;
label_29cf64:
    // 0x29cf64: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29cf64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cf68:
    // 0x29cf68: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29cf68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29cf6c:
    // 0x29cf6c: 0x8e030278  lw          $v1, 0x278($s0)
    ctx->pc = 0x29cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 632)));
label_29cf70:
    // 0x29cf70: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x29cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_29cf74:
    // 0x29cf74: 0x40f809  jalr        $v0
label_29cf78:
    if (ctx->pc == 0x29CF78u) {
        ctx->pc = 0x29CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF74u;
        // 0x29cf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF7Cu;
        goto label_29cf7c;
    }
    ctx->pc = 0x29CF74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CF7Cu);
        ctx->pc = 0x29CF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF74u;
        // 0x29cf78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29CF74u, 0x29CF7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29CF7Cu;
label_29cf7c:
    // 0x29cf7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29cf7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29cf80:
    // 0x29cf80: 0xc0a742e  jal         func_29D0B8
label_29cf84:
    if (ctx->pc == 0x29CF84u) {
        ctx->pc = 0x29CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF80u;
        // 0x29cf84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF88u;
        goto label_29cf88;
    }
    ctx->pc = 0x29CF80u;
    SET_GPR_U32(ctx, 31, 0x29CF88u);
    ctx->pc = 0x29CF84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF80u;
    // 0x29cf84: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0B8u, 0x29CF80u, 0x29CF88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF88u;
label_29cf88:
    // 0x29cf88: 0xc0a57a4  jal         func_295E90
label_29cf8c:
    if (ctx->pc == 0x29CF8Cu) {
        ctx->pc = 0x29CF90u;
        goto label_29cf90;
    }
    ctx->pc = 0x29CF88u;
    SET_GPR_U32(ctx, 31, 0x29CF90u);
    ctx->pc = 0x295E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295E90u, 0x29CF88u, 0x29CF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CF90u;
label_29cf90:
    // 0x29cf90: 0x10000024  b           . + 4 + (0x24 << 2)
label_29cf94:
    if (ctx->pc == 0x29CF94u) {
        ctx->pc = 0x29CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF90u;
        // 0x29cf94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CF98u;
        goto label_29cf98;
    }
    ctx->pc = 0x29CF90u;
    {
        const bool branch_taken_0x29cf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF90u;
        // 0x29cf94: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf90) {
            ctx->pc = 0x29D024u;
            goto label_29d024;
        }
    }
    ctx->pc = 0x29CF98u;
label_29cf98:
    // 0x29cf98: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29cf98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cf9c:
    // 0x29cf9c: 0xc0d758e  jal         func_35D638
label_29cfa0:
    if (ctx->pc == 0x29CFA0u) {
        ctx->pc = 0x29CFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CF9Cu;
        // 0x29cfa0: 0x24a5c1e0  addiu       $a1, $a1, -0x3E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951392));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFA4u;
        goto label_29cfa4;
    }
    ctx->pc = 0x29CF9Cu;
    SET_GPR_U32(ctx, 31, 0x29CFA4u);
    ctx->pc = 0x29CFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CF9Cu;
    // 0x29cfa0: 0x24a5c1e0  addiu       $a1, $a1, -0x3E20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x29CF9Cu, 0x29CFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFA4u;
label_29cfa4:
    // 0x29cfa4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29cfa8:
    if (ctx->pc == 0x29CFA8u) {
        ctx->pc = 0x29CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFA4u;
        // 0x29cfa8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFACu;
        goto label_29cfac;
    }
    ctx->pc = 0x29CFA4u;
    {
        const bool branch_taken_0x29cfa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFA4u;
        // 0x29cfa8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfa4) {
            ctx->pc = 0x29CFC8u;
            goto label_29cfc8;
        }
    }
    ctx->pc = 0x29CFACu;
label_29cfac:
    // 0x29cfac: 0xc0a3c8a  jal         func_28F228
label_29cfb0:
    if (ctx->pc == 0x29CFB0u) {
        ctx->pc = 0x29CFB4u;
        goto label_29cfb4;
    }
    ctx->pc = 0x29CFACu;
    SET_GPR_U32(ctx, 31, 0x29CFB4u);
    ctx->pc = 0x28F228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F228u, 0x29CFACu, 0x29CFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFB4u;
label_29cfb4:
    // 0x29cfb4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29cfb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cfb8:
    // 0x29cfb8: 0xc0a3ca0  jal         func_28F280
label_29cfbc:
    if (ctx->pc == 0x29CFBCu) {
        ctx->pc = 0x29CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFB8u;
        // 0x29cfbc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFC0u;
        goto label_29cfc0;
    }
    ctx->pc = 0x29CFB8u;
    SET_GPR_U32(ctx, 31, 0x29CFC0u);
    ctx->pc = 0x29CFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFB8u;
    // 0x29cfbc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F280u, 0x29CFB8u, 0x29CFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFC0u;
label_29cfc0:
    // 0x29cfc0: 0x10000018  b           . + 4 + (0x18 << 2)
label_29cfc4:
    if (ctx->pc == 0x29CFC4u) {
        ctx->pc = 0x29CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFC0u;
        // 0x29cfc4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFC8u;
        goto label_29cfc8;
    }
    ctx->pc = 0x29CFC0u;
    {
        const bool branch_taken_0x29cfc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFC0u;
        // 0x29cfc4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfc0) {
            ctx->pc = 0x29D024u;
            goto label_29d024;
        }
    }
    ctx->pc = 0x29CFC8u;
label_29cfc8:
    // 0x29cfc8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29cfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cfcc:
    // 0x29cfcc: 0xc0d758e  jal         func_35D638
label_29cfd0:
    if (ctx->pc == 0x29CFD0u) {
        ctx->pc = 0x29CFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFCCu;
        // 0x29cfd0: 0x24a5c1f0  addiu       $a1, $a1, -0x3E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFD4u;
        goto label_29cfd4;
    }
    ctx->pc = 0x29CFCCu;
    SET_GPR_U32(ctx, 31, 0x29CFD4u);
    ctx->pc = 0x29CFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFCCu;
    // 0x29cfd0: 0x24a5c1f0  addiu       $a1, $a1, -0x3E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x29CFCCu, 0x29CFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFD4u;
label_29cfd4:
    // 0x29cfd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29cfd8:
    if (ctx->pc == 0x29CFD8u) {
        ctx->pc = 0x29CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFD4u;
        // 0x29cfd8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFDCu;
        goto label_29cfdc;
    }
    ctx->pc = 0x29CFD4u;
    {
        const bool branch_taken_0x29cfd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFD4u;
        // 0x29cfd8: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cfd4) {
            ctx->pc = 0x29CFF8u;
            goto label_29cff8;
        }
    }
    ctx->pc = 0x29CFDCu;
label_29cfdc:
    // 0x29cfdc: 0xc0a9f48  jal         func_2A7D20
label_29cfe0:
    if (ctx->pc == 0x29CFE0u) {
        ctx->pc = 0x29CFE4u;
        goto label_29cfe4;
    }
    ctx->pc = 0x29CFDCu;
    SET_GPR_U32(ctx, 31, 0x29CFE4u);
    ctx->pc = 0x2A7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D20u, 0x29CFDCu, 0x29CFE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFE4u;
label_29cfe4:
    // 0x29cfe4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29cfe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29cfe8:
    // 0x29cfe8: 0xc0a9f5e  jal         func_2A7D78
label_29cfec:
    if (ctx->pc == 0x29CFECu) {
        ctx->pc = 0x29CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFE8u;
        // 0x29cfec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFF0u;
        goto label_29cff0;
    }
    ctx->pc = 0x29CFE8u;
    SET_GPR_U32(ctx, 31, 0x29CFF0u);
    ctx->pc = 0x29CFECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFE8u;
    // 0x29cfec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D78u, 0x29CFE8u, 0x29CFF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29CFF0u;
label_29cff0:
    // 0x29cff0: 0x1000000c  b           . + 4 + (0xC << 2)
label_29cff4:
    if (ctx->pc == 0x29CFF4u) {
        ctx->pc = 0x29CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFF0u;
        // 0x29cff4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29CFF8u;
        goto label_29cff8;
    }
    ctx->pc = 0x29CFF0u;
    {
        const bool branch_taken_0x29cff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFF0u;
        // 0x29cff4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cff0) {
            ctx->pc = 0x29D024u;
            goto label_29d024;
        }
    }
    ctx->pc = 0x29CFF8u;
label_29cff8:
    // 0x29cff8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29cff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cffc:
    // 0x29cffc: 0xc0d758e  jal         func_35D638
label_29d000:
    if (ctx->pc == 0x29D000u) {
        ctx->pc = 0x29D000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29CFFCu;
        // 0x29d000: 0x24a5c200  addiu       $a1, $a1, -0x3E00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D004u;
        goto label_29d004;
    }
    ctx->pc = 0x29CFFCu;
    SET_GPR_U32(ctx, 31, 0x29D004u);
    ctx->pc = 0x29D000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29CFFCu;
    // 0x29d000: 0x24a5c200  addiu       $a1, $a1, -0x3E00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D638u, 0x29CFFCu, 0x29D004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D004u;
label_29d004:
    // 0x29d004: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29d008:
    if (ctx->pc == 0x29D008u) {
        ctx->pc = 0x29D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D004u;
        // 0x29d008: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D00Cu;
        goto label_29d00c;
    }
    ctx->pc = 0x29D004u;
    {
        const bool branch_taken_0x29d004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29D008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D004u;
        // 0x29d008: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29d004) {
            ctx->pc = 0x29D024u;
            goto label_29d024;
        }
    }
    ctx->pc = 0x29D00Cu;
label_29d00c:
    // 0x29d00c: 0xc0a9344  jal         func_2A4D10
label_29d010:
    if (ctx->pc == 0x29D010u) {
        ctx->pc = 0x29D014u;
        goto label_29d014;
    }
    ctx->pc = 0x29D00Cu;
    SET_GPR_U32(ctx, 31, 0x29D014u);
    ctx->pc = 0x2A4D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4D10u, 0x29D00Cu, 0x29D014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D014u;
label_29d014:
    // 0x29d014: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29d014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29d018:
    // 0x29d018: 0xc0a935a  jal         func_2A4D68
label_29d01c:
    if (ctx->pc == 0x29D01Cu) {
        ctx->pc = 0x29D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D018u;
        // 0x29d01c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D020u;
        goto label_29d020;
    }
    ctx->pc = 0x29D018u;
    SET_GPR_U32(ctx, 31, 0x29D020u);
    ctx->pc = 0x29D01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D018u;
    // 0x29d01c: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4D68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4D68u, 0x29D018u, 0x29D020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D020u;
label_29d020:
    // 0x29d020: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29d020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29d024:
    // 0x29d024: 0xc09de3a  jal         func_2778E8
label_29d028:
    if (ctx->pc == 0x29D028u) {
        ctx->pc = 0x29D028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D024u;
        // 0x29d028: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D02Cu;
        goto label_29d02c;
    }
    ctx->pc = 0x29D024u;
    SET_GPR_U32(ctx, 31, 0x29D02Cu);
    ctx->pc = 0x29D028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D024u;
    // 0x29d028: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2778E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2778E8u, 0x29D024u, 0x29D02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D02Cu;
label_29d02c:
    // 0x29d02c: 0x5440fea4  bnel        $v0, $zero, . + 4 + (-0x15C << 2)
label_29d030:
    if (ctx->pc == 0x29D030u) {
        ctx->pc = 0x29D030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D02Cu;
        // 0x29d030: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D034u;
        goto label_29d034;
    }
    ctx->pc = 0x29D02Cu;
    {
        const bool branch_taken_0x29d02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29d02c) {
            ctx->pc = 0x29D030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29D02Cu;
            // 0x29d030: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29CAC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29cac0;
        }
    }
    ctx->pc = 0x29D034u;
label_29d034:
    // 0x29d034: 0x27c5c218  addiu       $a1, $fp, -0x3DE8
    ctx->pc = 0x29d034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294951448));
label_29d038:
    // 0x29d038: 0xc0d7424  jal         func_35D090
label_29d03c:
    if (ctx->pc == 0x29D03Cu) {
        ctx->pc = 0x29D03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D038u;
        // 0x29d03c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D040u;
        goto label_29d040;
    }
    ctx->pc = 0x29D038u;
    SET_GPR_U32(ctx, 31, 0x29D040u);
    ctx->pc = 0x29D03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D038u;
    // 0x29d03c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x29D038u, 0x29D040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D040u;
label_29d040:
    // 0x29d040: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29d040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29d044:
    // 0x29d044: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x29d044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_29d048:
    // 0x29d048: 0xc0a7096  jal         func_29C258
label_29d04c:
    if (ctx->pc == 0x29D04Cu) {
        ctx->pc = 0x29D04Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D048u;
        // 0x29d04c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D050u;
        goto label_29d050;
    }
    ctx->pc = 0x29D048u;
    SET_GPR_U32(ctx, 31, 0x29D050u);
    ctx->pc = 0x29D04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D048u;
    // 0x29d04c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C258u, 0x29D048u, 0x29D050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D050u;
label_29d050:
    // 0x29d050: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x29d050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29d054:
    // 0x29d054: 0xc0d7412  jal         func_35D048
label_29d058:
    if (ctx->pc == 0x29D058u) {
        ctx->pc = 0x29D058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D054u;
        // 0x29d058: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D05Cu;
        goto label_29d05c;
    }
    ctx->pc = 0x29D054u;
    SET_GPR_U32(ctx, 31, 0x29D05Cu);
    ctx->pc = 0x29D058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D054u;
    // 0x29d058: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29D054u, 0x29D05Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D05Cu;
label_29d05c:
    // 0x29d05c: 0xc09ddec  jal         func_2777B0
label_29d060:
    if (ctx->pc == 0x29D060u) {
        ctx->pc = 0x29D060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D05Cu;
        // 0x29d060: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D064u;
        goto label_29d064;
    }
    ctx->pc = 0x29D05Cu;
    SET_GPR_U32(ctx, 31, 0x29D064u);
    ctx->pc = 0x29D060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D05Cu;
    // 0x29d060: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2777B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2777B0u, 0x29D05Cu, 0x29D064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D064u;
label_29d064:
    // 0x29d064: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29d064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29d068:
    // 0x29d068: 0xc0d7412  jal         func_35D048
label_29d06c:
    if (ctx->pc == 0x29D06Cu) {
        ctx->pc = 0x29D06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D068u;
        // 0x29d06c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D070u;
        goto label_29d070;
    }
    ctx->pc = 0x29D068u;
    SET_GPR_U32(ctx, 31, 0x29D070u);
    ctx->pc = 0x29D06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x29D068u;
    // 0x29d06c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x29D068u, 0x29D070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29D070u;
label_29d070:
    // 0x29d070: 0xdfb000a0  ld          $s0, 0xA0($sp)
    ctx->pc = 0x29d070u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_29d074:
    // 0x29d074: 0xdfb100a8  ld          $s1, 0xA8($sp)
    ctx->pc = 0x29d074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_29d078:
    // 0x29d078: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x29d078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_29d07c:
    // 0x29d07c: 0xdfb300b8  ld          $s3, 0xB8($sp)
    ctx->pc = 0x29d07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 184)));
label_29d080:
    // 0x29d080: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x29d080u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_29d084:
    // 0x29d084: 0xdfb500c8  ld          $s5, 0xC8($sp)
    ctx->pc = 0x29d084u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 200)));
label_29d088:
    // 0x29d088: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x29d088u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_29d08c:
    // 0x29d08c: 0xdfb700d8  ld          $s7, 0xD8($sp)
    ctx->pc = 0x29d08cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_29d090:
    // 0x29d090: 0xdfbe00e0  ld          $fp, 0xE0($sp)
    ctx->pc = 0x29d090u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_29d094:
    // 0x29d094: 0xdfbf00e8  ld          $ra, 0xE8($sp)
    ctx->pc = 0x29d094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_29d098:
    // 0x29d098: 0x3e00008  jr          $ra
label_29d09c:
    if (ctx->pc == 0x29D09Cu) {
        ctx->pc = 0x29D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D098u;
        // 0x29d09c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29D0A0u;
        goto label_fallthrough_0x29d098;
    }
    ctx->pc = 0x29D098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29D098u;
        // 0x29d09c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29D098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29d098:
    ctx->pc = 0x29D0A0u;
}
