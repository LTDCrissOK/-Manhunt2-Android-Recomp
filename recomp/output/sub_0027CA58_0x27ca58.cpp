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

// Function: sub_0027CA58
// Address: 0x27ca58 - 0x27d1e0
void sub_0027CA58_0x27ca58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027CA58_0x27ca58");
#endif

    switch (ctx->pc) {
        case 0x27ca58u: goto label_27ca58;
        case 0x27ca5cu: goto label_27ca5c;
        case 0x27ca60u: goto label_27ca60;
        case 0x27ca64u: goto label_27ca64;
        case 0x27ca68u: goto label_27ca68;
        case 0x27ca6cu: goto label_27ca6c;
        case 0x27ca70u: goto label_27ca70;
        case 0x27ca74u: goto label_27ca74;
        case 0x27ca78u: goto label_27ca78;
        case 0x27ca7cu: goto label_27ca7c;
        case 0x27ca80u: goto label_27ca80;
        case 0x27ca84u: goto label_27ca84;
        case 0x27ca88u: goto label_27ca88;
        case 0x27ca8cu: goto label_27ca8c;
        case 0x27ca90u: goto label_27ca90;
        case 0x27ca94u: goto label_27ca94;
        case 0x27ca98u: goto label_27ca98;
        case 0x27ca9cu: goto label_27ca9c;
        case 0x27caa0u: goto label_27caa0;
        case 0x27caa4u: goto label_27caa4;
        case 0x27caa8u: goto label_27caa8;
        case 0x27caacu: goto label_27caac;
        case 0x27cab0u: goto label_27cab0;
        case 0x27cab4u: goto label_27cab4;
        case 0x27cab8u: goto label_27cab8;
        case 0x27cabcu: goto label_27cabc;
        case 0x27cac0u: goto label_27cac0;
        case 0x27cac4u: goto label_27cac4;
        case 0x27cac8u: goto label_27cac8;
        case 0x27caccu: goto label_27cacc;
        case 0x27cad0u: goto label_27cad0;
        case 0x27cad4u: goto label_27cad4;
        case 0x27cad8u: goto label_27cad8;
        case 0x27cadcu: goto label_27cadc;
        case 0x27cae0u: goto label_27cae0;
        case 0x27cae4u: goto label_27cae4;
        case 0x27cae8u: goto label_27cae8;
        case 0x27caecu: goto label_27caec;
        case 0x27caf0u: goto label_27caf0;
        case 0x27caf4u: goto label_27caf4;
        case 0x27caf8u: goto label_27caf8;
        case 0x27cafcu: goto label_27cafc;
        case 0x27cb00u: goto label_27cb00;
        case 0x27cb04u: goto label_27cb04;
        case 0x27cb08u: goto label_27cb08;
        case 0x27cb0cu: goto label_27cb0c;
        case 0x27cb10u: goto label_27cb10;
        case 0x27cb14u: goto label_27cb14;
        case 0x27cb18u: goto label_27cb18;
        case 0x27cb1cu: goto label_27cb1c;
        case 0x27cb20u: goto label_27cb20;
        case 0x27cb24u: goto label_27cb24;
        case 0x27cb28u: goto label_27cb28;
        case 0x27cb2cu: goto label_27cb2c;
        case 0x27cb30u: goto label_27cb30;
        case 0x27cb34u: goto label_27cb34;
        case 0x27cb38u: goto label_27cb38;
        case 0x27cb3cu: goto label_27cb3c;
        case 0x27cb40u: goto label_27cb40;
        case 0x27cb44u: goto label_27cb44;
        case 0x27cb48u: goto label_27cb48;
        case 0x27cb4cu: goto label_27cb4c;
        case 0x27cb50u: goto label_27cb50;
        case 0x27cb54u: goto label_27cb54;
        case 0x27cb58u: goto label_27cb58;
        case 0x27cb5cu: goto label_27cb5c;
        case 0x27cb60u: goto label_27cb60;
        case 0x27cb64u: goto label_27cb64;
        case 0x27cb68u: goto label_27cb68;
        case 0x27cb6cu: goto label_27cb6c;
        case 0x27cb70u: goto label_27cb70;
        case 0x27cb74u: goto label_27cb74;
        case 0x27cb78u: goto label_27cb78;
        case 0x27cb7cu: goto label_27cb7c;
        case 0x27cb80u: goto label_27cb80;
        case 0x27cb84u: goto label_27cb84;
        case 0x27cb88u: goto label_27cb88;
        case 0x27cb8cu: goto label_27cb8c;
        case 0x27cb90u: goto label_27cb90;
        case 0x27cb94u: goto label_27cb94;
        case 0x27cb98u: goto label_27cb98;
        case 0x27cb9cu: goto label_27cb9c;
        case 0x27cba0u: goto label_27cba0;
        case 0x27cba4u: goto label_27cba4;
        case 0x27cba8u: goto label_27cba8;
        case 0x27cbacu: goto label_27cbac;
        case 0x27cbb0u: goto label_27cbb0;
        case 0x27cbb4u: goto label_27cbb4;
        case 0x27cbb8u: goto label_27cbb8;
        case 0x27cbbcu: goto label_27cbbc;
        case 0x27cbc0u: goto label_27cbc0;
        case 0x27cbc4u: goto label_27cbc4;
        case 0x27cbc8u: goto label_27cbc8;
        case 0x27cbccu: goto label_27cbcc;
        case 0x27cbd0u: goto label_27cbd0;
        case 0x27cbd4u: goto label_27cbd4;
        case 0x27cbd8u: goto label_27cbd8;
        case 0x27cbdcu: goto label_27cbdc;
        case 0x27cbe0u: goto label_27cbe0;
        case 0x27cbe4u: goto label_27cbe4;
        case 0x27cbe8u: goto label_27cbe8;
        case 0x27cbecu: goto label_27cbec;
        case 0x27cbf0u: goto label_27cbf0;
        case 0x27cbf4u: goto label_27cbf4;
        case 0x27cbf8u: goto label_27cbf8;
        case 0x27cbfcu: goto label_27cbfc;
        case 0x27cc00u: goto label_27cc00;
        case 0x27cc04u: goto label_27cc04;
        case 0x27cc08u: goto label_27cc08;
        case 0x27cc0cu: goto label_27cc0c;
        case 0x27cc10u: goto label_27cc10;
        case 0x27cc14u: goto label_27cc14;
        case 0x27cc18u: goto label_27cc18;
        case 0x27cc1cu: goto label_27cc1c;
        case 0x27cc20u: goto label_27cc20;
        case 0x27cc24u: goto label_27cc24;
        case 0x27cc28u: goto label_27cc28;
        case 0x27cc2cu: goto label_27cc2c;
        case 0x27cc30u: goto label_27cc30;
        case 0x27cc34u: goto label_27cc34;
        case 0x27cc38u: goto label_27cc38;
        case 0x27cc3cu: goto label_27cc3c;
        case 0x27cc40u: goto label_27cc40;
        case 0x27cc44u: goto label_27cc44;
        case 0x27cc48u: goto label_27cc48;
        case 0x27cc4cu: goto label_27cc4c;
        case 0x27cc50u: goto label_27cc50;
        case 0x27cc54u: goto label_27cc54;
        case 0x27cc58u: goto label_27cc58;
        case 0x27cc5cu: goto label_27cc5c;
        case 0x27cc60u: goto label_27cc60;
        case 0x27cc64u: goto label_27cc64;
        case 0x27cc68u: goto label_27cc68;
        case 0x27cc6cu: goto label_27cc6c;
        case 0x27cc70u: goto label_27cc70;
        case 0x27cc74u: goto label_27cc74;
        case 0x27cc78u: goto label_27cc78;
        case 0x27cc7cu: goto label_27cc7c;
        case 0x27cc80u: goto label_27cc80;
        case 0x27cc84u: goto label_27cc84;
        case 0x27cc88u: goto label_27cc88;
        case 0x27cc8cu: goto label_27cc8c;
        case 0x27cc90u: goto label_27cc90;
        case 0x27cc94u: goto label_27cc94;
        case 0x27cc98u: goto label_27cc98;
        case 0x27cc9cu: goto label_27cc9c;
        case 0x27cca0u: goto label_27cca0;
        case 0x27cca4u: goto label_27cca4;
        case 0x27cca8u: goto label_27cca8;
        case 0x27ccacu: goto label_27ccac;
        case 0x27ccb0u: goto label_27ccb0;
        case 0x27ccb4u: goto label_27ccb4;
        case 0x27ccb8u: goto label_27ccb8;
        case 0x27ccbcu: goto label_27ccbc;
        case 0x27ccc0u: goto label_27ccc0;
        case 0x27ccc4u: goto label_27ccc4;
        case 0x27ccc8u: goto label_27ccc8;
        case 0x27ccccu: goto label_27cccc;
        case 0x27ccd0u: goto label_27ccd0;
        case 0x27ccd4u: goto label_27ccd4;
        case 0x27ccd8u: goto label_27ccd8;
        case 0x27ccdcu: goto label_27ccdc;
        case 0x27cce0u: goto label_27cce0;
        case 0x27cce4u: goto label_27cce4;
        case 0x27cce8u: goto label_27cce8;
        case 0x27ccecu: goto label_27ccec;
        case 0x27ccf0u: goto label_27ccf0;
        case 0x27ccf4u: goto label_27ccf4;
        case 0x27ccf8u: goto label_27ccf8;
        case 0x27ccfcu: goto label_27ccfc;
        case 0x27cd00u: goto label_27cd00;
        case 0x27cd04u: goto label_27cd04;
        case 0x27cd08u: goto label_27cd08;
        case 0x27cd0cu: goto label_27cd0c;
        case 0x27cd10u: goto label_27cd10;
        case 0x27cd14u: goto label_27cd14;
        case 0x27cd18u: goto label_27cd18;
        case 0x27cd1cu: goto label_27cd1c;
        case 0x27cd20u: goto label_27cd20;
        case 0x27cd24u: goto label_27cd24;
        case 0x27cd28u: goto label_27cd28;
        case 0x27cd2cu: goto label_27cd2c;
        case 0x27cd30u: goto label_27cd30;
        case 0x27cd34u: goto label_27cd34;
        case 0x27cd38u: goto label_27cd38;
        case 0x27cd3cu: goto label_27cd3c;
        case 0x27cd40u: goto label_27cd40;
        case 0x27cd44u: goto label_27cd44;
        case 0x27cd48u: goto label_27cd48;
        case 0x27cd4cu: goto label_27cd4c;
        case 0x27cd50u: goto label_27cd50;
        case 0x27cd54u: goto label_27cd54;
        case 0x27cd58u: goto label_27cd58;
        case 0x27cd5cu: goto label_27cd5c;
        case 0x27cd60u: goto label_27cd60;
        case 0x27cd64u: goto label_27cd64;
        case 0x27cd68u: goto label_27cd68;
        case 0x27cd6cu: goto label_27cd6c;
        case 0x27cd70u: goto label_27cd70;
        case 0x27cd74u: goto label_27cd74;
        case 0x27cd78u: goto label_27cd78;
        case 0x27cd7cu: goto label_27cd7c;
        case 0x27cd80u: goto label_27cd80;
        case 0x27cd84u: goto label_27cd84;
        case 0x27cd88u: goto label_27cd88;
        case 0x27cd8cu: goto label_27cd8c;
        case 0x27cd90u: goto label_27cd90;
        case 0x27cd94u: goto label_27cd94;
        case 0x27cd98u: goto label_27cd98;
        case 0x27cd9cu: goto label_27cd9c;
        case 0x27cda0u: goto label_27cda0;
        case 0x27cda4u: goto label_27cda4;
        case 0x27cda8u: goto label_27cda8;
        case 0x27cdacu: goto label_27cdac;
        case 0x27cdb0u: goto label_27cdb0;
        case 0x27cdb4u: goto label_27cdb4;
        case 0x27cdb8u: goto label_27cdb8;
        case 0x27cdbcu: goto label_27cdbc;
        case 0x27cdc0u: goto label_27cdc0;
        case 0x27cdc4u: goto label_27cdc4;
        case 0x27cdc8u: goto label_27cdc8;
        case 0x27cdccu: goto label_27cdcc;
        case 0x27cdd0u: goto label_27cdd0;
        case 0x27cdd4u: goto label_27cdd4;
        case 0x27cdd8u: goto label_27cdd8;
        case 0x27cddcu: goto label_27cddc;
        case 0x27cde0u: goto label_27cde0;
        case 0x27cde4u: goto label_27cde4;
        case 0x27cde8u: goto label_27cde8;
        case 0x27cdecu: goto label_27cdec;
        case 0x27cdf0u: goto label_27cdf0;
        case 0x27cdf4u: goto label_27cdf4;
        case 0x27cdf8u: goto label_27cdf8;
        case 0x27cdfcu: goto label_27cdfc;
        case 0x27ce00u: goto label_27ce00;
        case 0x27ce04u: goto label_27ce04;
        case 0x27ce08u: goto label_27ce08;
        case 0x27ce0cu: goto label_27ce0c;
        case 0x27ce10u: goto label_27ce10;
        case 0x27ce14u: goto label_27ce14;
        case 0x27ce18u: goto label_27ce18;
        case 0x27ce1cu: goto label_27ce1c;
        case 0x27ce20u: goto label_27ce20;
        case 0x27ce24u: goto label_27ce24;
        case 0x27ce28u: goto label_27ce28;
        case 0x27ce2cu: goto label_27ce2c;
        case 0x27ce30u: goto label_27ce30;
        case 0x27ce34u: goto label_27ce34;
        case 0x27ce38u: goto label_27ce38;
        case 0x27ce3cu: goto label_27ce3c;
        case 0x27ce40u: goto label_27ce40;
        case 0x27ce44u: goto label_27ce44;
        case 0x27ce48u: goto label_27ce48;
        case 0x27ce4cu: goto label_27ce4c;
        case 0x27ce50u: goto label_27ce50;
        case 0x27ce54u: goto label_27ce54;
        case 0x27ce58u: goto label_27ce58;
        case 0x27ce5cu: goto label_27ce5c;
        case 0x27ce60u: goto label_27ce60;
        case 0x27ce64u: goto label_27ce64;
        case 0x27ce68u: goto label_27ce68;
        case 0x27ce6cu: goto label_27ce6c;
        case 0x27ce70u: goto label_27ce70;
        case 0x27ce74u: goto label_27ce74;
        case 0x27ce78u: goto label_27ce78;
        case 0x27ce7cu: goto label_27ce7c;
        case 0x27ce80u: goto label_27ce80;
        case 0x27ce84u: goto label_27ce84;
        case 0x27ce88u: goto label_27ce88;
        case 0x27ce8cu: goto label_27ce8c;
        case 0x27ce90u: goto label_27ce90;
        case 0x27ce94u: goto label_27ce94;
        case 0x27ce98u: goto label_27ce98;
        case 0x27ce9cu: goto label_27ce9c;
        case 0x27cea0u: goto label_27cea0;
        case 0x27cea4u: goto label_27cea4;
        case 0x27cea8u: goto label_27cea8;
        case 0x27ceacu: goto label_27ceac;
        case 0x27ceb0u: goto label_27ceb0;
        case 0x27ceb4u: goto label_27ceb4;
        case 0x27ceb8u: goto label_27ceb8;
        case 0x27cebcu: goto label_27cebc;
        case 0x27cec0u: goto label_27cec0;
        case 0x27cec4u: goto label_27cec4;
        case 0x27cec8u: goto label_27cec8;
        case 0x27ceccu: goto label_27cecc;
        case 0x27ced0u: goto label_27ced0;
        case 0x27ced4u: goto label_27ced4;
        case 0x27ced8u: goto label_27ced8;
        case 0x27cedcu: goto label_27cedc;
        case 0x27cee0u: goto label_27cee0;
        case 0x27cee4u: goto label_27cee4;
        case 0x27cee8u: goto label_27cee8;
        case 0x27ceecu: goto label_27ceec;
        case 0x27cef0u: goto label_27cef0;
        case 0x27cef4u: goto label_27cef4;
        case 0x27cef8u: goto label_27cef8;
        case 0x27cefcu: goto label_27cefc;
        case 0x27cf00u: goto label_27cf00;
        case 0x27cf04u: goto label_27cf04;
        case 0x27cf08u: goto label_27cf08;
        case 0x27cf0cu: goto label_27cf0c;
        case 0x27cf10u: goto label_27cf10;
        case 0x27cf14u: goto label_27cf14;
        case 0x27cf18u: goto label_27cf18;
        case 0x27cf1cu: goto label_27cf1c;
        case 0x27cf20u: goto label_27cf20;
        case 0x27cf24u: goto label_27cf24;
        case 0x27cf28u: goto label_27cf28;
        case 0x27cf2cu: goto label_27cf2c;
        case 0x27cf30u: goto label_27cf30;
        case 0x27cf34u: goto label_27cf34;
        case 0x27cf38u: goto label_27cf38;
        case 0x27cf3cu: goto label_27cf3c;
        case 0x27cf40u: goto label_27cf40;
        case 0x27cf44u: goto label_27cf44;
        case 0x27cf48u: goto label_27cf48;
        case 0x27cf4cu: goto label_27cf4c;
        case 0x27cf50u: goto label_27cf50;
        case 0x27cf54u: goto label_27cf54;
        case 0x27cf58u: goto label_27cf58;
        case 0x27cf5cu: goto label_27cf5c;
        case 0x27cf60u: goto label_27cf60;
        case 0x27cf64u: goto label_27cf64;
        case 0x27cf68u: goto label_27cf68;
        case 0x27cf6cu: goto label_27cf6c;
        case 0x27cf70u: goto label_27cf70;
        case 0x27cf74u: goto label_27cf74;
        case 0x27cf78u: goto label_27cf78;
        case 0x27cf7cu: goto label_27cf7c;
        case 0x27cf80u: goto label_27cf80;
        case 0x27cf84u: goto label_27cf84;
        case 0x27cf88u: goto label_27cf88;
        case 0x27cf8cu: goto label_27cf8c;
        case 0x27cf90u: goto label_27cf90;
        case 0x27cf94u: goto label_27cf94;
        case 0x27cf98u: goto label_27cf98;
        case 0x27cf9cu: goto label_27cf9c;
        case 0x27cfa0u: goto label_27cfa0;
        case 0x27cfa4u: goto label_27cfa4;
        case 0x27cfa8u: goto label_27cfa8;
        case 0x27cfacu: goto label_27cfac;
        case 0x27cfb0u: goto label_27cfb0;
        case 0x27cfb4u: goto label_27cfb4;
        case 0x27cfb8u: goto label_27cfb8;
        case 0x27cfbcu: goto label_27cfbc;
        case 0x27cfc0u: goto label_27cfc0;
        case 0x27cfc4u: goto label_27cfc4;
        case 0x27cfc8u: goto label_27cfc8;
        case 0x27cfccu: goto label_27cfcc;
        case 0x27cfd0u: goto label_27cfd0;
        case 0x27cfd4u: goto label_27cfd4;
        case 0x27cfd8u: goto label_27cfd8;
        case 0x27cfdcu: goto label_27cfdc;
        case 0x27cfe0u: goto label_27cfe0;
        case 0x27cfe4u: goto label_27cfe4;
        case 0x27cfe8u: goto label_27cfe8;
        case 0x27cfecu: goto label_27cfec;
        case 0x27cff0u: goto label_27cff0;
        case 0x27cff4u: goto label_27cff4;
        case 0x27cff8u: goto label_27cff8;
        case 0x27cffcu: goto label_27cffc;
        case 0x27d000u: goto label_27d000;
        case 0x27d004u: goto label_27d004;
        case 0x27d008u: goto label_27d008;
        case 0x27d00cu: goto label_27d00c;
        case 0x27d010u: goto label_27d010;
        case 0x27d014u: goto label_27d014;
        case 0x27d018u: goto label_27d018;
        case 0x27d01cu: goto label_27d01c;
        case 0x27d020u: goto label_27d020;
        case 0x27d024u: goto label_27d024;
        case 0x27d028u: goto label_27d028;
        case 0x27d02cu: goto label_27d02c;
        case 0x27d030u: goto label_27d030;
        case 0x27d034u: goto label_27d034;
        case 0x27d038u: goto label_27d038;
        case 0x27d03cu: goto label_27d03c;
        case 0x27d040u: goto label_27d040;
        case 0x27d044u: goto label_27d044;
        case 0x27d048u: goto label_27d048;
        case 0x27d04cu: goto label_27d04c;
        case 0x27d050u: goto label_27d050;
        case 0x27d054u: goto label_27d054;
        case 0x27d058u: goto label_27d058;
        case 0x27d05cu: goto label_27d05c;
        case 0x27d060u: goto label_27d060;
        case 0x27d064u: goto label_27d064;
        case 0x27d068u: goto label_27d068;
        case 0x27d06cu: goto label_27d06c;
        case 0x27d070u: goto label_27d070;
        case 0x27d074u: goto label_27d074;
        case 0x27d078u: goto label_27d078;
        case 0x27d07cu: goto label_27d07c;
        case 0x27d080u: goto label_27d080;
        case 0x27d084u: goto label_27d084;
        case 0x27d088u: goto label_27d088;
        case 0x27d08cu: goto label_27d08c;
        case 0x27d090u: goto label_27d090;
        case 0x27d094u: goto label_27d094;
        case 0x27d098u: goto label_27d098;
        case 0x27d09cu: goto label_27d09c;
        case 0x27d0a0u: goto label_27d0a0;
        case 0x27d0a4u: goto label_27d0a4;
        case 0x27d0a8u: goto label_27d0a8;
        case 0x27d0acu: goto label_27d0ac;
        case 0x27d0b0u: goto label_27d0b0;
        case 0x27d0b4u: goto label_27d0b4;
        case 0x27d0b8u: goto label_27d0b8;
        case 0x27d0bcu: goto label_27d0bc;
        case 0x27d0c0u: goto label_27d0c0;
        case 0x27d0c4u: goto label_27d0c4;
        case 0x27d0c8u: goto label_27d0c8;
        case 0x27d0ccu: goto label_27d0cc;
        case 0x27d0d0u: goto label_27d0d0;
        case 0x27d0d4u: goto label_27d0d4;
        case 0x27d0d8u: goto label_27d0d8;
        case 0x27d0dcu: goto label_27d0dc;
        case 0x27d0e0u: goto label_27d0e0;
        case 0x27d0e4u: goto label_27d0e4;
        case 0x27d0e8u: goto label_27d0e8;
        case 0x27d0ecu: goto label_27d0ec;
        case 0x27d0f0u: goto label_27d0f0;
        case 0x27d0f4u: goto label_27d0f4;
        case 0x27d0f8u: goto label_27d0f8;
        case 0x27d0fcu: goto label_27d0fc;
        case 0x27d100u: goto label_27d100;
        case 0x27d104u: goto label_27d104;
        case 0x27d108u: goto label_27d108;
        case 0x27d10cu: goto label_27d10c;
        case 0x27d110u: goto label_27d110;
        case 0x27d114u: goto label_27d114;
        case 0x27d118u: goto label_27d118;
        case 0x27d11cu: goto label_27d11c;
        case 0x27d120u: goto label_27d120;
        case 0x27d124u: goto label_27d124;
        case 0x27d128u: goto label_27d128;
        case 0x27d12cu: goto label_27d12c;
        case 0x27d130u: goto label_27d130;
        case 0x27d134u: goto label_27d134;
        case 0x27d138u: goto label_27d138;
        case 0x27d13cu: goto label_27d13c;
        case 0x27d140u: goto label_27d140;
        case 0x27d144u: goto label_27d144;
        case 0x27d148u: goto label_27d148;
        case 0x27d14cu: goto label_27d14c;
        case 0x27d150u: goto label_27d150;
        case 0x27d154u: goto label_27d154;
        case 0x27d158u: goto label_27d158;
        case 0x27d15cu: goto label_27d15c;
        case 0x27d160u: goto label_27d160;
        case 0x27d164u: goto label_27d164;
        case 0x27d168u: goto label_27d168;
        case 0x27d16cu: goto label_27d16c;
        case 0x27d170u: goto label_27d170;
        case 0x27d174u: goto label_27d174;
        case 0x27d178u: goto label_27d178;
        case 0x27d17cu: goto label_27d17c;
        case 0x27d180u: goto label_27d180;
        case 0x27d184u: goto label_27d184;
        case 0x27d188u: goto label_27d188;
        case 0x27d18cu: goto label_27d18c;
        case 0x27d190u: goto label_27d190;
        case 0x27d194u: goto label_27d194;
        case 0x27d198u: goto label_27d198;
        case 0x27d19cu: goto label_27d19c;
        case 0x27d1a0u: goto label_27d1a0;
        case 0x27d1a4u: goto label_27d1a4;
        case 0x27d1a8u: goto label_27d1a8;
        case 0x27d1acu: goto label_27d1ac;
        case 0x27d1b0u: goto label_27d1b0;
        case 0x27d1b4u: goto label_27d1b4;
        case 0x27d1b8u: goto label_27d1b8;
        case 0x27d1bcu: goto label_27d1bc;
        case 0x27d1c0u: goto label_27d1c0;
        case 0x27d1c4u: goto label_27d1c4;
        case 0x27d1c8u: goto label_27d1c8;
        case 0x27d1ccu: goto label_27d1cc;
        case 0x27d1d0u: goto label_27d1d0;
        case 0x27d1d4u: goto label_27d1d4;
        case 0x27d1d8u: goto label_27d1d8;
        case 0x27d1dcu: goto label_27d1dc;
        default: break;
    }

    ctx->pc = 0x27ca58u;

label_27ca58:
    // 0x27ca58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x27ca58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_27ca5c:
    // 0x27ca5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x27ca5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_27ca60:
    // 0x27ca60: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27ca60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_27ca64:
    // 0x27ca64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27ca64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_27ca68:
    // 0x27ca68: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27ca68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27ca6c:
    // 0x27ca6c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x27ca6cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_27ca70:
    // 0x27ca70: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x27ca70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
label_27ca74:
    // 0x27ca74: 0x8e45a300  lw          $a1, -0x5D00($s2)
    ctx->pc = 0x27ca74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
label_27ca78:
    // 0x27ca78: 0x2484ac50  addiu       $a0, $a0, -0x53B0
    ctx->pc = 0x27ca78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945872));
label_27ca7c:
    // 0x27ca7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ca7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_27ca80:
    // 0x27ca80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x27ca80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_27ca84:
    // 0x27ca84: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x27ca84u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_27ca88:
    // 0x27ca88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27ca88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_27ca8c:
    // 0x27ca8c: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x27ca8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27ca90:
    // 0x27ca90: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27ca90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_27ca94:
    // 0x27ca94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x27ca94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_27ca98:
    // 0x27ca98: 0xc0a8760  jal         func_2A1D80
label_27ca9c:
    if (ctx->pc == 0x27CA9Cu) {
        ctx->pc = 0x27CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CA98u;
        // 0x27ca9c: 0xa040a366  sb          $zero, -0x5C9A($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943590), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CAA0u;
        goto label_27caa0;
    }
    ctx->pc = 0x27CA98u;
    SET_GPR_U32(ctx, 31, 0x27CAA0u);
    ctx->pc = 0x27CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CA98u;
    // 0x27ca9c: 0xa040a366  sb          $zero, -0x5C9A($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294943590), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A1D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A1D80u, 0x27CA98u, 0x27CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAA0u;
label_27caa0:
    // 0x27caa0: 0x8e02cba8  lw          $v0, -0x3458($s0)
    ctx->pc = 0x27caa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953896)));
label_27caa4:
    // 0x27caa4: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x27caa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_27caa8:
    // 0x27caa8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27caa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27caac:
    // 0x27caac: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x27caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_27cab0:
    // 0x27cab0: 0x40f809  jalr        $v0
label_27cab4:
    if (ctx->pc == 0x27CAB4u) {
        ctx->pc = 0x27CAB8u;
        goto label_27cab8;
    }
    ctx->pc = 0x27CAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27CAB8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27CAB0u, 0x27CAB8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27CAB8u;
label_27cab8:
    // 0x27cab8: 0xc09f240  jal         func_27C900
label_27cabc:
    if (ctx->pc == 0x27CABCu) {
        ctx->pc = 0x27CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAB8u;
        // 0x27cabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CAC0u;
        goto label_27cac0;
    }
    ctx->pc = 0x27CAB8u;
    SET_GPR_U32(ctx, 31, 0x27CAC0u);
    ctx->pc = 0x27CABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CAB8u;
    // 0x27cabc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27C900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27C900u, 0x27CAB8u, 0x27CAC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAC0u;
label_27cac0:
    // 0x27cac0: 0xc0a08ce  jal         func_282338
label_27cac4:
    if (ctx->pc == 0x27CAC4u) {
        ctx->pc = 0x27CAC8u;
        goto label_27cac8;
    }
    ctx->pc = 0x27CAC0u;
    SET_GPR_U32(ctx, 31, 0x27CAC8u);
    ctx->pc = 0x282338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282338u, 0x27CAC0u, 0x27CAC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAC8u;
label_27cac8:
    // 0x27cac8: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_27cacc:
    // 0x27cacc: 0xc0a09e6  jal         func_282798
label_27cad0:
    if (ctx->pc == 0x27CAD0u) {
        ctx->pc = 0x27CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CACCu;
        // 0x27cad0: 0x8c44efd8  lw          $a0, -0x1028($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CAD4u;
        goto label_27cad4;
    }
    ctx->pc = 0x27CACCu;
    SET_GPR_U32(ctx, 31, 0x27CAD4u);
    ctx->pc = 0x27CAD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CACCu;
    // 0x27cad0: 0x8c44efd8  lw          $a0, -0x1028($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x282798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x282798u, 0x27CACCu, 0x27CAD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CAD4u;
label_27cad4:
    // 0x27cad4: 0x1040018a  beqz        $v0, . + 4 + (0x18A << 2)
label_27cad8:
    if (ctx->pc == 0x27CAD8u) {
        ctx->pc = 0x27CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAD4u;
        // 0x27cad8: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CADCu;
        goto label_27cadc;
    }
    ctx->pc = 0x27CAD4u;
    {
        const bool branch_taken_0x27cad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CAD4u;
        // 0x27cad8: 0x3c03004c  lui         $v1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cad4) {
            ctx->pc = 0x27D100u;
            goto label_27d100;
        }
    }
    ctx->pc = 0x27CADCu;
label_27cadc:
    // 0x27cadc: 0x3c014316  lui         $at, 0x4316
    ctx->pc = 0x27cadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17174 << 16));
label_27cae0:
    // 0x27cae0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27cae0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27cae4:
    // 0x27cae4: 0x8e42a300  lw          $v0, -0x5D00($s2)
    ctx->pc = 0x27cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
label_27cae8:
    // 0x27cae8: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27caec:
    // 0x27caec: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x27caecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_27caf0:
    // 0x27caf0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27caf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27caf4:
    // 0x27caf4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27caf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27caf8:
    // 0x27caf8: 0x24a53f98  addiu       $a1, $a1, 0x3F98
    ctx->pc = 0x27caf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16280));
label_27cafc:
    // 0x27cafc: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x27cafcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
label_27cb00:
    // 0x27cb00: 0x3c13004c  lui         $s3, 0x4C
    ctx->pc = 0x27cb00u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)76 << 16));
label_27cb04:
    // 0x27cb04: 0x3c140067  lui         $s4, 0x67
    ctx->pc = 0x27cb04u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)103 << 16));
label_27cb08:
    // 0x27cb08: 0x24110005  addiu       $s1, $zero, 0x5
    ctx->pc = 0x27cb08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27cb0c:
    // 0x27cb0c: 0x8e42a300  lw          $v0, -0x5D00($s2)
    ctx->pc = 0x27cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294943488)));
label_27cb10:
    // 0x27cb10: 0xe44100f0  swc1        $f1, 0xF0($v0)
    ctx->pc = 0x27cb10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_27cb14:
    // 0x27cb14: 0xc0a0e90  jal         func_283A40
label_27cb18:
    if (ctx->pc == 0x27CB18u) {
        ctx->pc = 0x27CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB14u;
        // 0x27cb18: 0x8c64f020  lw          $a0, -0xFE0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB1Cu;
        goto label_27cb1c;
    }
    ctx->pc = 0x27CB14u;
    SET_GPR_U32(ctx, 31, 0x27CB1Cu);
    ctx->pc = 0x27CB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB14u;
    // 0x27cb18: 0x8c64f020  lw          $a0, -0xFE0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963232)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A40u, 0x27CB14u, 0x27CB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB1Cu;
label_27cb1c:
    // 0x27cb1c: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x27cb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_27cb20:
    // 0x27cb20: 0x3c100028  lui         $s0, 0x28
    ctx->pc = 0x27cb20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)40 << 16));
label_27cb24:
    // 0x27cb24: 0x26103f78  addiu       $s0, $s0, 0x3F78
    ctx->pc = 0x27cb24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16248));
label_27cb28:
    // 0x27cb28: 0x8c64eff0  lw          $a0, -0x1010($v1)
    ctx->pc = 0x27cb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963184)));
label_27cb2c:
    // 0x27cb2c: 0xc0a0e90  jal         func_283A40
label_27cb30:
    if (ctx->pc == 0x27CB30u) {
        ctx->pc = 0x27CB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB2Cu;
        // 0x27cb30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB34u;
        goto label_27cb34;
    }
    ctx->pc = 0x27CB2Cu;
    SET_GPR_U32(ctx, 31, 0x27CB34u);
    ctx->pc = 0x27CB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB2Cu;
    // 0x27cb30: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A40u, 0x27CB2Cu, 0x27CB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB34u;
label_27cb34:
    // 0x27cb34: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x27cb34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_27cb38:
    // 0x27cb38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27cb38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27cb3c:
    // 0x27cb3c: 0xc0a0e90  jal         func_283A40
label_27cb40:
    if (ctx->pc == 0x27CB40u) {
        ctx->pc = 0x27CB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB3Cu;
        // 0x27cb40: 0x8c64efe0  lw          $a0, -0x1020($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963168)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB44u;
        goto label_27cb44;
    }
    ctx->pc = 0x27CB3Cu;
    SET_GPR_U32(ctx, 31, 0x27CB44u);
    ctx->pc = 0x27CB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB3Cu;
    // 0x27cb40: 0x8c64efe0  lw          $a0, -0x1020($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963168)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A40u, 0x27CB3Cu, 0x27CB44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB44u;
label_27cb44:
    // 0x27cb44: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x27cb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
label_27cb48:
    // 0x27cb48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27cb48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27cb4c:
    // 0x27cb4c: 0xc0ac834  jal         func_2B20D0
label_27cb50:
    if (ctx->pc == 0x27CB50u) {
        ctx->pc = 0x27CB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB4Cu;
        // 0x27cb50: 0x24844dd0  addiu       $a0, $a0, 0x4DD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB54u;
        goto label_27cb54;
    }
    ctx->pc = 0x27CB4Cu;
    SET_GPR_U32(ctx, 31, 0x27CB54u);
    ctx->pc = 0x27CB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB4Cu;
    // 0x27cb50: 0x24844dd0  addiu       $a0, $a0, 0x4DD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B20D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B20D0u, 0x27CB4Cu, 0x27CB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB54u;
label_27cb54:
    // 0x27cb54: 0xc0a172a  jal         func_285CA8
label_27cb58:
    if (ctx->pc == 0x27CB58u) {
        ctx->pc = 0x27CB5Cu;
        goto label_27cb5c;
    }
    ctx->pc = 0x27CB54u;
    SET_GPR_U32(ctx, 31, 0x27CB5Cu);
    ctx->pc = 0x285CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285CA8u, 0x27CB54u, 0x27CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB5Cu;
label_27cb5c:
    // 0x27cb5c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x27cb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
label_27cb60:
    // 0x27cb60: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27cb60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27cb64:
    // 0x27cb64: 0x8c44f028  lw          $a0, -0xFD8($v0)
    ctx->pc = 0x27cb64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963240)));
label_27cb68:
    // 0x27cb68: 0xc0a0e90  jal         func_283A40
label_27cb6c:
    if (ctx->pc == 0x27CB6Cu) {
        ctx->pc = 0x27CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB68u;
        // 0x27cb6c: 0x24a54f98  addiu       $a1, $a1, 0x4F98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB70u;
        goto label_27cb70;
    }
    ctx->pc = 0x27CB68u;
    SET_GPR_U32(ctx, 31, 0x27CB70u);
    ctx->pc = 0x27CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB68u;
    // 0x27cb6c: 0x24a54f98  addiu       $a1, $a1, 0x4F98 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A40u, 0x27CB68u, 0x27CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB70u;
label_27cb70:
    // 0x27cb70: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x27cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_27cb74:
    // 0x27cb74: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27cb74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27cb78:
    // 0x27cb78: 0x8c64f030  lw          $a0, -0xFD0($v1)
    ctx->pc = 0x27cb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963248)));
label_27cb7c:
    // 0x27cb7c: 0xc0a0e90  jal         func_283A40
label_27cb80:
    if (ctx->pc == 0x27CB80u) {
        ctx->pc = 0x27CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB7Cu;
        // 0x27cb80: 0x24a54fb8  addiu       $a1, $a1, 0x4FB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB84u;
        goto label_27cb84;
    }
    ctx->pc = 0x27CB7Cu;
    SET_GPR_U32(ctx, 31, 0x27CB84u);
    ctx->pc = 0x27CB80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB7Cu;
    // 0x27cb80: 0x24a54fb8  addiu       $a1, $a1, 0x4FB8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A40u, 0x27CB7Cu, 0x27CB84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB84u;
label_27cb84:
    // 0x27cb84: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x27cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_27cb88:
    // 0x27cb88: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
label_27cb8c:
    // 0x27cb8c: 0x8c64f038  lw          $a0, -0xFC8($v1)
    ctx->pc = 0x27cb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963256)));
label_27cb90:
    // 0x27cb90: 0xc0a0e90  jal         func_283A40
label_27cb94:
    if (ctx->pc == 0x27CB94u) {
        ctx->pc = 0x27CB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CB90u;
        // 0x27cb94: 0x24a54fd8  addiu       $a1, $a1, 0x4FD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CB98u;
        goto label_27cb98;
    }
    ctx->pc = 0x27CB90u;
    SET_GPR_U32(ctx, 31, 0x27CB98u);
    ctx->pc = 0x27CB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CB90u;
    // 0x27cb94: 0x24a54fd8  addiu       $a1, $a1, 0x4FD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283A40u, 0x27CB90u, 0x27CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CB98u;
label_27cb98:
    // 0x27cb98: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x27cb98u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
label_27cb9c:
    // 0x27cb9c: 0x3c0a006c  lui         $t2, 0x6C
    ctx->pc = 0x27cb9cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)108 << 16));
label_27cba0:
    // 0x27cba0: 0x2502af50  addiu       $v0, $t0, -0x50B0
    ctx->pc = 0x27cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946640));
label_27cba4:
    // 0x27cba4: 0x2442002c  addiu       $v0, $v0, 0x2C
    ctx->pc = 0x27cba4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 44));
label_27cba8:
    // 0x27cba8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27cba8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_27cbac:
    // 0x27cbac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x27cbacu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_27cbb0:
    // 0x27cbb0: 0x0  nop
    ctx->pc = 0x27cbb0u;
    // NOP
label_27cbb4:
    // 0x27cbb4: 0x0  nop
    ctx->pc = 0x27cbb4u;
    // NOP
label_27cbb8:
    // 0x27cbb8: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
label_27cbbc:
    if (ctx->pc == 0x27CBBCu) {
        ctx->pc = 0x27CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBB8u;
        // 0x27cbbc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CBC0u;
        goto label_27cbc0;
    }
    ctx->pc = 0x27CBB8u;
    {
        const bool branch_taken_0x27cbb8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27CBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CBB8u;
        // 0x27cbbc: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cbb8) {
            ctx->pc = 0x27CBA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cba8;
        }
    }
    ctx->pc = 0x27CBC0u;
label_27cbc0:
    // 0x27cbc0: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x27cbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
label_27cbc4:
    // 0x27cbc4: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x27cbc4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_27cbc8:
    // 0x27cbc8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27cbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27cbcc:
    // 0x27cbcc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_27cbd0:
    // 0x27cbd0: 0x8c492bb8  lw          $t1, 0x2BB8($v0)
    ctx->pc = 0x27cbd0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11192)));
label_27cbd4:
    // 0x27cbd4: 0x2543aff0  addiu       $v1, $t2, -0x5010
    ctx->pc = 0x27cbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294946800));
label_27cbd8:
    // 0x27cbd8: 0xe4610068  swc1        $f1, 0x68($v1)
    ctx->pc = 0x27cbd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 104), bits); }
label_27cbdc:
    // 0x27cbdc: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x27cbdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27cbe0:
    // 0x27cbe0: 0xad05af50  sw          $a1, -0x50B0($t0)
    ctx->pc = 0x27cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294946640), GPR_U32(ctx, 5));
label_27cbe4:
    // 0x27cbe4: 0x2504af50  addiu       $a0, $t0, -0x50B0
    ctx->pc = 0x27cbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946640));
label_27cbe8:
    // 0x27cbe8: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x27cbe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27cbec:
    // 0x27cbec: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x27cbecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
label_27cbf0:
    // 0x27cbf0: 0xac870014  sw          $a3, 0x14($a0)
    ctx->pc = 0x27cbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 7));
label_27cbf4:
    // 0x27cbf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27cbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27cbf8:
    // 0x27cbf8: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x27cbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
label_27cbfc:
    // 0x27cbfc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x27cbfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27cc00:
    // 0x27cc00: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27cc00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27cc04:
    // 0x27cc04: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27cc04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27cc08:
    // 0x27cc08: 0xad40aff0  sw          $zero, -0x5010($t2)
    ctx->pc = 0x27cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294946800), GPR_U32(ctx, 0));
label_27cc0c:
    // 0x27cc0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x27cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_27cc10:
    // 0x27cc10: 0xe46000ac  swc1        $f0, 0xAC($v1)
    ctx->pc = 0x27cc10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 172), bits); }
label_27cc14:
    // 0x27cc14: 0xac660078  sw          $a2, 0x78($v1)
    ctx->pc = 0x27cc14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 6));
label_27cc18:
    // 0x27cc18: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x27cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_27cc1c:
    // 0x27cc1c: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x27cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
label_27cc20:
    // 0x27cc20: 0xac870010  sw          $a3, 0x10($a0)
    ctx->pc = 0x27cc20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 7));
label_27cc24:
    // 0x27cc24: 0xac6000a8  sw          $zero, 0xA8($v1)
    ctx->pc = 0x27cc24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 168), GPR_U32(ctx, 0));
label_27cc28:
    // 0x27cc28: 0xe46000b0  swc1        $f0, 0xB0($v1)
    ctx->pc = 0x27cc28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 176), bits); }
label_27cc2c:
    // 0x27cc2c: 0xac6000b4  sw          $zero, 0xB4($v1)
    ctx->pc = 0x27cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 180), GPR_U32(ctx, 0));
label_27cc30:
    // 0x27cc30: 0xac600060  sw          $zero, 0x60($v1)
    ctx->pc = 0x27cc30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 0));
label_27cc34:
    // 0x27cc34: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x27cc34u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
label_27cc38:
    // 0x27cc38: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x27cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
label_27cc3c:
    // 0x27cc3c: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x27cc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
label_27cc40:
    // 0x27cc40: 0x5200003  bltz        $t1, . + 4 + (0x3 << 2)
label_27cc44:
    if (ctx->pc == 0x27CC44u) {
        ctx->pc = 0x27CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC40u;
        // 0x27cc44: 0xe4610064  swc1        $f1, 0x64($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC48u;
        goto label_27cc48;
    }
    ctx->pc = 0x27CC40u;
    {
        const bool branch_taken_0x27cc40 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x27CC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC40u;
        // 0x27cc44: 0xe4610064  swc1        $f1, 0x64($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 100), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc40) {
            ctx->pc = 0x27CC50u;
            goto label_27cc50;
        }
    }
    ctx->pc = 0x27CC48u;
label_27cc48:
    // 0x27cc48: 0xc075ce0  jal         func_1D7380
label_27cc4c:
    if (ctx->pc == 0x27CC4Cu) {
        ctx->pc = 0x27CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC48u;
        // 0x27cc4c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC50u;
        goto label_27cc50;
    }
    ctx->pc = 0x27CC48u;
    SET_GPR_U32(ctx, 31, 0x27CC50u);
    ctx->pc = 0x27CC4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC48u;
    // 0x27cc4c: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D7380u, 0x27CC48u, 0x27CC50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC50u;
label_27cc50:
    // 0x27cc50: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x27cc50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_27cc54:
    // 0x27cc54: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x27cc54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_27cc58:
    // 0x27cc58: 0x2450b0b0  addiu       $s0, $v0, -0x4F50
    ctx->pc = 0x27cc58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946992));
label_27cc5c:
    // 0x27cc5c: 0x0  nop
    ctx->pc = 0x27cc5cu;
    // NOP
label_27cc60:
    // 0x27cc60: 0xc076100  jal         func_1D8400
label_27cc64:
    if (ctx->pc == 0x27CC64u) {
        ctx->pc = 0x27CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC60u;
        // 0x27cc64: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC68u;
        goto label_27cc68;
    }
    ctx->pc = 0x27CC60u;
    SET_GPR_U32(ctx, 31, 0x27CC68u);
    ctx->pc = 0x27CC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27CC60u;
    // 0x27cc64: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x27CC60u, 0x27CC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27CC68u;
label_27cc68:
    // 0x27cc68: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x27cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_27cc6c:
    // 0x27cc6c: 0x0  nop
    ctx->pc = 0x27cc6cu;
    // NOP
label_27cc70:
    // 0x27cc70: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
label_27cc74:
    if (ctx->pc == 0x27CC74u) {
        ctx->pc = 0x27CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC70u;
        // 0x27cc74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CC78u;
        goto label_27cc78;
    }
    ctx->pc = 0x27CC70u;
    {
        const bool branch_taken_0x27cc70 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC70u;
        // 0x27cc74: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc70) {
            ctx->pc = 0x27CC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cc60;
        }
    }
    ctx->pc = 0x27CC78u;
label_27cc78:
    // 0x27cc78: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x27cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_27cc7c:
    // 0x27cc7c: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x27cc7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27cc80:
    // 0x27cc80: 0x2442b0b0  addiu       $v0, $v0, -0x4F50
    ctx->pc = 0x27cc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946992));
label_27cc84:
    // 0x27cc84: 0x24420028  addiu       $v0, $v0, 0x28
    ctx->pc = 0x27cc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
label_27cc88:
    // 0x27cc88: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27cc88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_27cc8c:
    // 0x27cc8c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x27cc8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_27cc90:
    // 0x27cc90: 0x0  nop
    ctx->pc = 0x27cc90u;
    // NOP
label_27cc94:
    // 0x27cc94: 0x0  nop
    ctx->pc = 0x27cc94u;
    // NOP
label_27cc98:
    // 0x27cc98: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
label_27cc9c:
    if (ctx->pc == 0x27CC9Cu) {
        ctx->pc = 0x27CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC98u;
        // 0x27cc9c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CCA0u;
        goto label_27cca0;
    }
    ctx->pc = 0x27CC98u;
    {
        const bool branch_taken_0x27cc98 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27CC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CC98u;
        // 0x27cc9c: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27cc98) {
            ctx->pc = 0x27CC88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27cc88;
        }
    }
    ctx->pc = 0x27CCA0u;
label_27cca0:
    // 0x27cca0: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x27cca0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_27cca4:
    // 0x27cca4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27cca4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27cca8:
    // 0x27cca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27cca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27ccac:
    // 0x27ccac: 0x2663f130  addiu       $v1, $s3, -0xED0
    ctx->pc = 0x27ccacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294963504));
label_27ccb0:
    // 0x27ccb0: 0x3c013f33  lui         $at, 0x3F33
    ctx->pc = 0x27ccb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16179 << 16));
label_27ccb4:
    // 0x27ccb4: 0x34213333  ori         $at, $at, 0x3333
    ctx->pc = 0x27ccb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)13107);
label_27ccb8:
    // 0x27ccb8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27ccb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27ccbc:
    // 0x27ccbc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27ccbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27ccc0:
    // 0x27ccc0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x27ccc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27ccc4:
    // 0x27ccc4: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x27ccc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_27ccc8:
    // 0x27ccc8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27ccc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27cccc:
    // 0x27cccc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x27ccccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_27ccd0:
    // 0x27ccd0: 0x2682cb28  addiu       $v0, $s4, -0x34D8
    ctx->pc = 0x27ccd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953768));
label_27ccd4:
    // 0x27ccd4: 0xe46000f0  swc1        $f0, 0xF0($v1)
    ctx->pc = 0x27ccd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 240), bits); }
label_27ccd8:
    // 0x27ccd8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x27ccd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_27ccdc:
    // 0x27ccdc: 0x3c013c13  lui         $at, 0x3C13
    ctx->pc = 0x27ccdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15379 << 16));
label_27cce0:
    // 0x27cce0: 0x342174bc  ori         $at, $at, 0x74BC
    ctx->pc = 0x27cce0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29884);
label_27cce4:
    // 0x27cce4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27cce4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_27cce8:
    // 0x27cce8: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x27cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_27ccec:
    // 0x27ccec: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x27ccecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_27ccf0:
    // 0x27ccf0: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x27ccf0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_27ccf4:
    // 0x27ccf4: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x27ccf4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_27ccf8:
    // 0x27ccf8: 0x24060078  addiu       $a2, $zero, 0x78
    ctx->pc = 0x27ccf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_27ccfc:
    // 0x27ccfc: 0xe661f130  swc1        $f1, -0xED0($s3)
    ctx->pc = 0x27ccfcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4294963504), bits); }
label_27cd00:
    // 0x27cd00: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x27cd00u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_27cd04:
    // 0x27cd04: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x27cd04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27cd08:
    // 0x27cd08: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x27cd08u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27cd0c:
    // 0x27cd0c: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x27cd0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_27cd10:
    // 0x27cd10: 0x240cffff  addiu       $t4, $zero, -0x1
    ctx->pc = 0x27cd10u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_27cd14:
    // 0x27cd14: 0xe4640034  swc1        $f4, 0x34($v1)
    ctx->pc = 0x27cd14u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 52), bits); }
label_27cd18:
    // 0x27cd18: 0x240a0030  addiu       $t2, $zero, 0x30
    ctx->pc = 0x27cd18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_27cd1c:
    // 0x27cd1c: 0xac6000c8  sw          $zero, 0xC8($v1)
    ctx->pc = 0x27cd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 200), GPR_U32(ctx, 0));
label_27cd20:
    // 0x27cd20: 0x240d0032  addiu       $t5, $zero, 0x32
    ctx->pc = 0x27cd20u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_27cd24:
    // 0x27cd24: 0xac6000c4  sw          $zero, 0xC4($v1)
    ctx->pc = 0x27cd24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 0));
label_27cd28:
    // 0x27cd28: 0x240efffe  addiu       $t6, $zero, -0x2
    ctx->pc = 0x27cd28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_27cd2c:
    // 0x27cd2c: 0xac6000c0  sw          $zero, 0xC0($v1)
    ctx->pc = 0x27cd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 192), GPR_U32(ctx, 0));
label_27cd30:
    // 0x27cd30: 0x240f0002  addiu       $t7, $zero, 0x2
    ctx->pc = 0x27cd30u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27cd34:
    // 0x27cd34: 0xe46200dc  swc1        $f2, 0xDC($v1)
    ctx->pc = 0x27cd34u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 220), bits); }
label_27cd38:
    // 0x27cd38: 0x245003d8  addiu       $s0, $v0, 0x3D8
    ctx->pc = 0x27cd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 984));
label_27cd3c:
    // 0x27cd3c: 0xe46200d8  swc1        $f2, 0xD8($v1)
    ctx->pc = 0x27cd3cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 216), bits); }
label_27cd40:
    // 0x27cd40: 0x24110019  addiu       $s1, $zero, 0x19
    ctx->pc = 0x27cd40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_27cd44:
    // 0x27cd44: 0xe46200d4  swc1        $f2, 0xD4($v1)
    ctx->pc = 0x27cd44u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 212), bits); }
label_27cd48:
    // 0x27cd48: 0xac6000e8  sw          $zero, 0xE8($v1)
    ctx->pc = 0x27cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 232), GPR_U32(ctx, 0));
label_27cd4c:
    // 0x27cd4c: 0xac6000ec  sw          $zero, 0xEC($v1)
    ctx->pc = 0x27cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 236), GPR_U32(ctx, 0));
label_27cd50:
    // 0x27cd50: 0xe4620008  swc1        $f2, 0x8($v1)
    ctx->pc = 0x27cd50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27cd54:
    // 0x27cd54: 0xac65000c  sw          $a1, 0xC($v1)
    ctx->pc = 0x27cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 5));
label_27cd58:
    // 0x27cd58: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x27cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_27cd5c:
    // 0x27cd5c: 0xac680018  sw          $t0, 0x18($v1)
    ctx->pc = 0x27cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 8));
label_27cd60:
    // 0x27cd60: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x27cd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
label_27cd64:
    // 0x27cd64: 0xe465002c  swc1        $f5, 0x2C($v1)
    ctx->pc = 0x27cd64u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
label_27cd68:
    // 0x27cd68: 0xe4650030  swc1        $f5, 0x30($v1)
    ctx->pc = 0x27cd68u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 48), bits); }
label_27cd6c:
    // 0x27cd6c: 0xac650038  sw          $a1, 0x38($v1)
    ctx->pc = 0x27cd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 5));
label_27cd70:
    // 0x27cd70: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x27cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
label_27cd74:
    // 0x27cd74: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x27cd74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
label_27cd78:
    // 0x27cd78: 0xac600044  sw          $zero, 0x44($v1)
    ctx->pc = 0x27cd78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 0));
label_27cd7c:
    // 0x27cd7c: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x27cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_27cd80:
    // 0x27cd80: 0xac65004c  sw          $a1, 0x4C($v1)
    ctx->pc = 0x27cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 76), GPR_U32(ctx, 5));
label_27cd84:
    // 0x27cd84: 0xac600050  sw          $zero, 0x50($v1)
    ctx->pc = 0x27cd84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 80), GPR_U32(ctx, 0));
label_27cd88:
    // 0x27cd88: 0xe4620058  swc1        $f2, 0x58($v1)
    ctx->pc = 0x27cd88u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 88), bits); }
label_27cd8c:
    // 0x27cd8c: 0xe462005c  swc1        $f2, 0x5C($v1)
    ctx->pc = 0x27cd8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 92), bits); }
label_27cd90:
    // 0x27cd90: 0xe4620060  swc1        $f2, 0x60($v1)
    ctx->pc = 0x27cd90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 96), bits); }
label_27cd94:
    // 0x27cd94: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x27cd94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_27cd98:
    // 0x27cd98: 0xac600068  sw          $zero, 0x68($v1)
    ctx->pc = 0x27cd98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 104), GPR_U32(ctx, 0));
label_27cd9c:
    // 0x27cd9c: 0xac60006c  sw          $zero, 0x6C($v1)
    ctx->pc = 0x27cd9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 0));
label_27cda0:
    // 0x27cda0: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x27cda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
label_27cda4:
    // 0x27cda4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x27cda4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_27cda8:
    // 0x27cda8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x27cda8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_27cdac:
    // 0x27cdac: 0x3c013b44  lui         $at, 0x3B44
    ctx->pc = 0x27cdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15172 << 16));
label_27cdb0:
    // 0x27cdb0: 0x34219ba6  ori         $at, $at, 0x9BA6
    ctx->pc = 0x27cdb0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39846);
label_27cdb4:
    // 0x27cdb4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27cdb4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27cdb8:
    // 0x27cdb8: 0xac650110  sw          $a1, 0x110($v1)
    ctx->pc = 0x27cdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 272), GPR_U32(ctx, 5));
label_27cdbc:
    // 0x27cdbc: 0xe4410078  swc1        $f1, 0x78($v0)
    ctx->pc = 0x27cdbcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 120), bits); }
label_27cdc0:
    // 0x27cdc0: 0xe4430038  swc1        $f3, 0x38($v0)
    ctx->pc = 0x27cdc0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
label_27cdc4:
    // 0x27cdc4: 0xac600074  sw          $zero, 0x74($v1)
    ctx->pc = 0x27cdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
label_27cdc8:
    // 0x27cdc8: 0xac600078  sw          $zero, 0x78($v1)
    ctx->pc = 0x27cdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 120), GPR_U32(ctx, 0));
label_27cdcc:
    // 0x27cdcc: 0xac600100  sw          $zero, 0x100($v1)
    ctx->pc = 0x27cdccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 0));
label_27cdd0:
    // 0x27cdd0: 0xac600104  sw          $zero, 0x104($v1)
    ctx->pc = 0x27cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 260), GPR_U32(ctx, 0));
label_27cdd4:
    // 0x27cdd4: 0xae85cb28  sw          $a1, -0x34D8($s4)
    ctx->pc = 0x27cdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294953768), GPR_U32(ctx, 5));
label_27cdd8:
    // 0x27cdd8: 0x3c013b03  lui         $at, 0x3B03
    ctx->pc = 0x27cdd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15107 << 16));
label_27cddc:
    // 0x27cddc: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x27cddcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_27cde0:
    // 0x27cde0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27cde0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27cde4:
    // 0x27cde4: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x27cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_27cde8:
    // 0x27cde8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x27cde8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_27cdec:
    // 0x27cdec: 0xac400014  sw          $zero, 0x14($v0)
    ctx->pc = 0x27cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 0));
label_27cdf0:
    // 0x27cdf0: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x27cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_27cdf4:
    // 0x27cdf4: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x27cdf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_27cdf8:
    // 0x27cdf8: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x27cdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
label_27cdfc:
    // 0x27cdfc: 0xac450024  sw          $a1, 0x24($v0)
    ctx->pc = 0x27cdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 5));
label_27ce00:
    // 0x27ce00: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x27ce00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_27ce04:
    // 0x27ce04: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x27ce04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
label_27ce08:
    // 0x27ce08: 0xe4420030  swc1        $f2, 0x30($v0)
    ctx->pc = 0x27ce08u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_27ce0c:
    // 0x27ce0c: 0xe4430034  swc1        $f3, 0x34($v0)
    ctx->pc = 0x27ce0cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
label_27ce10:
    // 0x27ce10: 0xac40003c  sw          $zero, 0x3C($v0)
    ctx->pc = 0x27ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 0));
label_27ce14:
    // 0x27ce14: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x27ce14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
label_27ce18:
    // 0x27ce18: 0xac400048  sw          $zero, 0x48($v0)
    ctx->pc = 0x27ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 0));
label_27ce1c:
    // 0x27ce1c: 0xac40004c  sw          $zero, 0x4C($v0)
    ctx->pc = 0x27ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
label_27ce20:
    // 0x27ce20: 0xac470050  sw          $a3, 0x50($v0)
    ctx->pc = 0x27ce20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 7));
label_27ce24:
    // 0x27ce24: 0xac400058  sw          $zero, 0x58($v0)
    ctx->pc = 0x27ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 0));
label_27ce28:
    // 0x27ce28: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x27ce28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_27ce2c:
    // 0x27ce2c: 0xac400064  sw          $zero, 0x64($v0)
    ctx->pc = 0x27ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 0));
label_27ce30:
    // 0x27ce30: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x27ce30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_27ce34:
    // 0x27ce34: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x27ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_27ce38:
    // 0x27ce38: 0xac400470  sw          $zero, 0x470($v0)
    ctx->pc = 0x27ce38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1136), GPR_U32(ctx, 0));
label_27ce3c:
    // 0x27ce3c: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x27ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
label_27ce40:
    // 0x27ce40: 0xac40007c  sw          $zero, 0x7C($v0)
    ctx->pc = 0x27ce40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 0));
label_27ce44:
    // 0x27ce44: 0xac400080  sw          $zero, 0x80($v0)
    ctx->pc = 0x27ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
label_27ce48:
    // 0x27ce48: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x27ce48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
label_27ce4c:
    // 0x27ce4c: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x27ce4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_27ce50:
    // 0x27ce50: 0xe44000a4  swc1        $f0, 0xA4($v0)
    ctx->pc = 0x27ce50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 164), bits); }
label_27ce54:
    // 0x27ce54: 0xe44000a0  swc1        $f0, 0xA0($v0)
    ctx->pc = 0x27ce54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 160), bits); }
label_27ce58:
    // 0x27ce58: 0xe440009c  swc1        $f0, 0x9C($v0)
    ctx->pc = 0x27ce58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 156), bits); }
label_27ce5c:
    // 0x27ce5c: 0xe4400098  swc1        $f0, 0x98($v0)
    ctx->pc = 0x27ce5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 152), bits); }
label_27ce60:
    // 0x27ce60: 0xe44000f8  swc1        $f0, 0xF8($v0)
    ctx->pc = 0x27ce60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 248), bits); }
label_27ce64:
    // 0x27ce64: 0xe44000f4  swc1        $f0, 0xF4($v0)
    ctx->pc = 0x27ce64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 244), bits); }
label_27ce68:
    // 0x27ce68: 0xe44000f0  swc1        $f0, 0xF0($v0)
    ctx->pc = 0x27ce68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 240), bits); }
label_27ce6c:
    // 0x27ce6c: 0xe44000ec  swc1        $f0, 0xEC($v0)
    ctx->pc = 0x27ce6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 236), bits); }
label_27ce70:
    // 0x27ce70: 0xe44000e8  swc1        $f0, 0xE8($v0)
    ctx->pc = 0x27ce70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 232), bits); }
label_27ce74:
    // 0x27ce74: 0xac470088  sw          $a3, 0x88($v0)
    ctx->pc = 0x27ce74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 7));
label_27ce78:
    // 0x27ce78: 0xac40008c  sw          $zero, 0x8C($v0)
    ctx->pc = 0x27ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 140), GPR_U32(ctx, 0));
label_27ce7c:
    // 0x27ce7c: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x27ce7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
label_27ce80:
    // 0x27ce80: 0xac4400bc  sw          $a0, 0xBC($v0)
    ctx->pc = 0x27ce80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 188), GPR_U32(ctx, 4));
label_27ce84:
    // 0x27ce84: 0xac4400b8  sw          $a0, 0xB8($v0)
    ctx->pc = 0x27ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 4));
label_27ce88:
    // 0x27ce88: 0xac4400b4  sw          $a0, 0xB4($v0)
    ctx->pc = 0x27ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 180), GPR_U32(ctx, 4));
label_27ce8c:
    // 0x27ce8c: 0xac4400b0  sw          $a0, 0xB0($v0)
    ctx->pc = 0x27ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 4));
label_27ce90:
    // 0x27ce90: 0xac4400ac  sw          $a0, 0xAC($v0)
    ctx->pc = 0x27ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 172), GPR_U32(ctx, 4));
label_27ce94:
    // 0x27ce94: 0xac4600d0  sw          $a2, 0xD0($v0)
    ctx->pc = 0x27ce94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 208), GPR_U32(ctx, 6));
label_27ce98:
    // 0x27ce98: 0xac4600cc  sw          $a2, 0xCC($v0)
    ctx->pc = 0x27ce98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 6));
label_27ce9c:
    // 0x27ce9c: 0xac4600c8  sw          $a2, 0xC8($v0)
    ctx->pc = 0x27ce9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 6));
label_27cea0:
    // 0x27cea0: 0xac4600c4  sw          $a2, 0xC4($v0)
    ctx->pc = 0x27cea0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
label_27cea4:
    // 0x27cea4: 0xac4600c0  sw          $a2, 0xC0($v0)
    ctx->pc = 0x27cea4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 6));
label_27cea8:
    // 0x27cea8: 0xac4400e4  sw          $a0, 0xE4($v0)
    ctx->pc = 0x27cea8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 228), GPR_U32(ctx, 4));
label_27ceac:
    // 0x27ceac: 0xac4400e0  sw          $a0, 0xE0($v0)
    ctx->pc = 0x27ceacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 4));
label_27ceb0:
    // 0x27ceb0: 0xac4400dc  sw          $a0, 0xDC($v0)
    ctx->pc = 0x27ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 4));
label_27ceb4:
    // 0x27ceb4: 0xac4400d8  sw          $a0, 0xD8($v0)
    ctx->pc = 0x27ceb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 216), GPR_U32(ctx, 4));
label_27ceb8:
    // 0x27ceb8: 0xac4400d4  sw          $a0, 0xD4($v0)
    ctx->pc = 0x27ceb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 4));
label_27cebc:
    // 0x27cebc: 0xac44010c  sw          $a0, 0x10C($v0)
    ctx->pc = 0x27cebcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 268), GPR_U32(ctx, 4));
label_27cec0:
    // 0x27cec0: 0xac440108  sw          $a0, 0x108($v0)
    ctx->pc = 0x27cec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 264), GPR_U32(ctx, 4));
label_27cec4:
    // 0x27cec4: 0xac440104  sw          $a0, 0x104($v0)
    ctx->pc = 0x27cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 260), GPR_U32(ctx, 4));
label_27cec8:
    // 0x27cec8: 0xac440100  sw          $a0, 0x100($v0)
    ctx->pc = 0x27cec8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 256), GPR_U32(ctx, 4));
label_27cecc:
    // 0x27cecc: 0xac4400fc  sw          $a0, 0xFC($v0)
    ctx->pc = 0x27ceccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 252), GPR_U32(ctx, 4));
label_27ced0:
    // 0x27ced0: 0xac460120  sw          $a2, 0x120($v0)
    ctx->pc = 0x27ced0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 288), GPR_U32(ctx, 6));
label_27ced4:
    // 0x27ced4: 0x3c013f0f  lui         $at, 0x3F0F
    ctx->pc = 0x27ced4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16143 << 16));
label_27ced8:
    // 0x27ced8: 0x34215c2a  ori         $at, $at, 0x5C2A
    ctx->pc = 0x27ced8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)23594);
label_27cedc:
    // 0x27cedc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x27cedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27cee0:
    // 0x27cee0: 0xe4400138  swc1        $f0, 0x138($v0)
    ctx->pc = 0x27cee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 312), bits); }
label_27cee4:
    // 0x27cee4: 0x3c014005  lui         $at, 0x4005
    ctx->pc = 0x27cee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16389 << 16));
label_27cee8:
    // 0x27cee8: 0x34211eb9  ori         $at, $at, 0x1EB9
    ctx->pc = 0x27cee8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)7865);
label_27ceec:
    // 0x27ceec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27ceecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27cef0:
    // 0x27cef0: 0xac460140  sw          $a2, 0x140($v0)
    ctx->pc = 0x27cef0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 320), GPR_U32(ctx, 6));
label_27cef4:
    // 0x27cef4: 0xac440158  sw          $a0, 0x158($v0)
    ctx->pc = 0x27cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 344), GPR_U32(ctx, 4));
label_27cef8:
    // 0x27cef8: 0xac4b0184  sw          $t3, 0x184($v0)
    ctx->pc = 0x27cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 388), GPR_U32(ctx, 11));
label_27cefc:
    // 0x27cefc: 0xac49018c  sw          $t1, 0x18C($v0)
    ctx->pc = 0x27cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 396), GPR_U32(ctx, 9));
label_27cf00:
    // 0x27cf00: 0xac4c0194  sw          $t4, 0x194($v0)
    ctx->pc = 0x27cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 404), GPR_U32(ctx, 12));
label_27cf04:
    // 0x27cf04: 0xe441019c  swc1        $f1, 0x19C($v0)
    ctx->pc = 0x27cf04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 412), bits); }
label_27cf08:
    // 0x27cf08: 0xac46011c  sw          $a2, 0x11C($v0)
    ctx->pc = 0x27cf08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 284), GPR_U32(ctx, 6));
label_27cf0c:
    // 0x27cf0c: 0xac460118  sw          $a2, 0x118($v0)
    ctx->pc = 0x27cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 280), GPR_U32(ctx, 6));
label_27cf10:
    // 0x27cf10: 0xac460114  sw          $a2, 0x114($v0)
    ctx->pc = 0x27cf10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 276), GPR_U32(ctx, 6));
label_27cf14:
    // 0x27cf14: 0xac460110  sw          $a2, 0x110($v0)
    ctx->pc = 0x27cf14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 272), GPR_U32(ctx, 6));
label_27cf18:
    // 0x27cf18: 0xac440134  sw          $a0, 0x134($v0)
    ctx->pc = 0x27cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 4));
label_27cf1c:
    // 0x27cf1c: 0xac440130  sw          $a0, 0x130($v0)
    ctx->pc = 0x27cf1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 304), GPR_U32(ctx, 4));
label_27cf20:
    // 0x27cf20: 0xac44012c  sw          $a0, 0x12C($v0)
    ctx->pc = 0x27cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 300), GPR_U32(ctx, 4));
label_27cf24:
    // 0x27cf24: 0xac440128  sw          $a0, 0x128($v0)
    ctx->pc = 0x27cf24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 296), GPR_U32(ctx, 4));
label_27cf28:
    // 0x27cf28: 0xac440124  sw          $a0, 0x124($v0)
    ctx->pc = 0x27cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 292), GPR_U32(ctx, 4));
label_27cf2c:
    // 0x27cf2c: 0xac44013c  sw          $a0, 0x13C($v0)
    ctx->pc = 0x27cf2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 316), GPR_U32(ctx, 4));
label_27cf30:
    // 0x27cf30: 0xac440144  sw          $a0, 0x144($v0)
    ctx->pc = 0x27cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 4));
label_27cf34:
    // 0x27cf34: 0xac400148  sw          $zero, 0x148($v0)
    ctx->pc = 0x27cf34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 328), GPR_U32(ctx, 0));
label_27cf38:
    // 0x27cf38: 0xac40014c  sw          $zero, 0x14C($v0)
    ctx->pc = 0x27cf38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 332), GPR_U32(ctx, 0));
label_27cf3c:
    // 0x27cf3c: 0xac400150  sw          $zero, 0x150($v0)
    ctx->pc = 0x27cf3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 336), GPR_U32(ctx, 0));
label_27cf40:
    // 0x27cf40: 0xac400154  sw          $zero, 0x154($v0)
    ctx->pc = 0x27cf40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 340), GPR_U32(ctx, 0));
label_27cf44:
    // 0x27cf44: 0xac47015c  sw          $a3, 0x15C($v0)
    ctx->pc = 0x27cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 348), GPR_U32(ctx, 7));
label_27cf48:
    // 0x27cf48: 0xac470160  sw          $a3, 0x160($v0)
    ctx->pc = 0x27cf48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 352), GPR_U32(ctx, 7));
label_27cf4c:
    // 0x27cf4c: 0xac470164  sw          $a3, 0x164($v0)
    ctx->pc = 0x27cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 356), GPR_U32(ctx, 7));
label_27cf50:
    // 0x27cf50: 0xac470168  sw          $a3, 0x168($v0)
    ctx->pc = 0x27cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 360), GPR_U32(ctx, 7));
label_27cf54:
    // 0x27cf54: 0xac40016c  sw          $zero, 0x16C($v0)
    ctx->pc = 0x27cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 364), GPR_U32(ctx, 0));
label_27cf58:
    // 0x27cf58: 0xe4450178  swc1        $f5, 0x178($v0)
    ctx->pc = 0x27cf58u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 376), bits); }
label_27cf5c:
    // 0x27cf5c: 0xac40017c  sw          $zero, 0x17C($v0)
    ctx->pc = 0x27cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 380), GPR_U32(ctx, 0));
label_27cf60:
    // 0x27cf60: 0xac490180  sw          $t1, 0x180($v0)
    ctx->pc = 0x27cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 9));
label_27cf64:
    // 0x27cf64: 0xac400188  sw          $zero, 0x188($v0)
    ctx->pc = 0x27cf64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 392), GPR_U32(ctx, 0));
label_27cf68:
    // 0x27cf68: 0xac450190  sw          $a1, 0x190($v0)
    ctx->pc = 0x27cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 400), GPR_U32(ctx, 5));
label_27cf6c:
    // 0x27cf6c: 0xac450198  sw          $a1, 0x198($v0)
    ctx->pc = 0x27cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 408), GPR_U32(ctx, 5));
label_27cf70:
    // 0x27cf70: 0xac4001a0  sw          $zero, 0x1A0($v0)
    ctx->pc = 0x27cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 416), GPR_U32(ctx, 0));
label_27cf74:
    // 0x27cf74: 0xe44001c8  swc1        $f0, 0x1C8($v0)
    ctx->pc = 0x27cf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 456), bits); }
label_27cf78:
    // 0x27cf78: 0xac4d01a8  sw          $t5, 0x1A8($v0)
    ctx->pc = 0x27cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 424), GPR_U32(ctx, 13));
label_27cf7c:
    // 0x27cf7c: 0xac4a01b0  sw          $t2, 0x1B0($v0)
    ctx->pc = 0x27cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 432), GPR_U32(ctx, 10));
label_27cf80:
    // 0x27cf80: 0xac4e01b8  sw          $t6, 0x1B8($v0)
    ctx->pc = 0x27cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 14));
label_27cf84:
    // 0x27cf84: 0xac4a01a4  sw          $t2, 0x1A4($v0)
    ctx->pc = 0x27cf84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 420), GPR_U32(ctx, 10));
label_27cf88:
    // 0x27cf88: 0xac4001ac  sw          $zero, 0x1AC($v0)
    ctx->pc = 0x27cf88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 428), GPR_U32(ctx, 0));
label_27cf8c:
    // 0x27cf8c: 0xac4501b4  sw          $a1, 0x1B4($v0)
    ctx->pc = 0x27cf8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 436), GPR_U32(ctx, 5));
label_27cf90:
    // 0x27cf90: 0xac4501bc  sw          $a1, 0x1BC($v0)
    ctx->pc = 0x27cf90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 444), GPR_U32(ctx, 5));
label_27cf94:
    // 0x27cf94: 0xac4001c0  sw          $zero, 0x1C0($v0)
    ctx->pc = 0x27cf94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 448), GPR_U32(ctx, 0));
label_27cf98:
    // 0x27cf98: 0xac4001c4  sw          $zero, 0x1C4($v0)
    ctx->pc = 0x27cf98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 452), GPR_U32(ctx, 0));
label_27cf9c:
    // 0x27cf9c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x27cf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_27cfa0:
    // 0x27cfa0: 0x34210001  ori         $at, $at, 0x1
    ctx->pc = 0x27cfa0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)1);
label_27cfa4:
    // 0x27cfa4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27cfa4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27cfa8:
    // 0x27cfa8: 0x51e00001  beql        $t7, $zero, . + 4 + (0x1 << 2)
label_27cfac:
    if (ctx->pc == 0x27CFACu) {
        ctx->pc = 0x27CFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27CFA8u;
        // 0x27cfac: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27CFB0u;
        goto label_27cfb0;
    }
    ctx->pc = 0x27CFA8u;
    {
        const bool branch_taken_0x27cfa8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x27cfa8) {
            ctx->pc = 0x27CFACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27CFA8u;
            // 0x27cfac: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x27CFB0u;
            goto label_27cfb0;
        }
    }
    ctx->pc = 0x27CFB0u;
label_27cfb0:
    // 0x27cfb0: 0xac4801d4  sw          $t0, 0x1D4($v0)
    ctx->pc = 0x27cfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 468), GPR_U32(ctx, 8));
label_27cfb4:
    // 0x27cfb4: 0xe44001cc  swc1        $f0, 0x1CC($v0)
    ctx->pc = 0x27cfb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 460), bits); }
label_27cfb8:
    // 0x27cfb8: 0xe44501e8  swc1        $f5, 0x1E8($v0)
    ctx->pc = 0x27cfb8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 488), bits); }
label_27cfbc:
    // 0x27cfbc: 0xe4420204  swc1        $f2, 0x204($v0)
    ctx->pc = 0x27cfbcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 516), bits); }
label_27cfc0:
    // 0x27cfc0: 0xac470220  sw          $a3, 0x220($v0)
    ctx->pc = 0x27cfc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 7));
label_27cfc4:
    // 0x27cfc4: 0xac4001d0  sw          $zero, 0x1D0($v0)
    ctx->pc = 0x27cfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
label_27cfc8:
    // 0x27cfc8: 0xac4801d8  sw          $t0, 0x1D8($v0)
    ctx->pc = 0x27cfc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 472), GPR_U32(ctx, 8));
label_27cfcc:
    // 0x27cfcc: 0xac4001ec  sw          $zero, 0x1EC($v0)
    ctx->pc = 0x27cfccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 492), GPR_U32(ctx, 0));
label_27cfd0:
    // 0x27cfd0: 0xe44201dc  swc1        $f2, 0x1DC($v0)
    ctx->pc = 0x27cfd0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 476), bits); }
label_27cfd4:
    // 0x27cfd4: 0xe44201e0  swc1        $f2, 0x1E0($v0)
    ctx->pc = 0x27cfd4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 480), bits); }
label_27cfd8:
    // 0x27cfd8: 0xe44501e4  swc1        $f5, 0x1E4($v0)
    ctx->pc = 0x27cfd8u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 484), bits); }
label_27cfdc:
    // 0x27cfdc: 0xac4701f0  sw          $a3, 0x1F0($v0)
    ctx->pc = 0x27cfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 496), GPR_U32(ctx, 7));
label_27cfe0:
    // 0x27cfe0: 0xac4701f4  sw          $a3, 0x1F4($v0)
    ctx->pc = 0x27cfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 500), GPR_U32(ctx, 7));
label_27cfe4:
    // 0x27cfe4: 0xac4701f8  sw          $a3, 0x1F8($v0)
    ctx->pc = 0x27cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 504), GPR_U32(ctx, 7));
label_27cfe8:
    // 0x27cfe8: 0xac4701fc  sw          $a3, 0x1FC($v0)
    ctx->pc = 0x27cfe8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 508), GPR_U32(ctx, 7));
label_27cfec:
    // 0x27cfec: 0xe4420200  swc1        $f2, 0x200($v0)
    ctx->pc = 0x27cfecu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 512), bits); }
label_27cff0:
    // 0x27cff0: 0xac400208  sw          $zero, 0x208($v0)
    ctx->pc = 0x27cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 520), GPR_U32(ctx, 0));
label_27cff4:
    // 0x27cff4: 0xac400210  sw          $zero, 0x210($v0)
    ctx->pc = 0x27cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 528), GPR_U32(ctx, 0));
label_27cff8:
    // 0x27cff8: 0xac400214  sw          $zero, 0x214($v0)
    ctx->pc = 0x27cff8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 532), GPR_U32(ctx, 0));
label_27cffc:
    // 0x27cffc: 0xac450218  sw          $a1, 0x218($v0)
    ctx->pc = 0x27cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 536), GPR_U32(ctx, 5));
label_27d000:
    // 0x27d000: 0xac40021c  sw          $zero, 0x21C($v0)
    ctx->pc = 0x27d000u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 540), GPR_U32(ctx, 0));
label_27d004:
    // 0x27d004: 0xac400224  sw          $zero, 0x224($v0)
    ctx->pc = 0x27d004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 548), GPR_U32(ctx, 0));
label_27d008:
    // 0x27d008: 0xac400228  sw          $zero, 0x228($v0)
    ctx->pc = 0x27d008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 0));
label_27d00c:
    // 0x27d00c: 0xac40022c  sw          $zero, 0x22C($v0)
    ctx->pc = 0x27d00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 556), GPR_U32(ctx, 0));
label_27d010:
    // 0x27d010: 0xac450230  sw          $a1, 0x230($v0)
    ctx->pc = 0x27d010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 560), GPR_U32(ctx, 5));
label_27d014:
    // 0x27d014: 0xac450234  sw          $a1, 0x234($v0)
    ctx->pc = 0x27d014u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 564), GPR_U32(ctx, 5));
label_27d018:
    // 0x27d018: 0xac400238  sw          $zero, 0x238($v0)
    ctx->pc = 0x27d018u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 568), GPR_U32(ctx, 0));
label_27d01c:
    // 0x27d01c: 0xac40023c  sw          $zero, 0x23C($v0)
    ctx->pc = 0x27d01cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 572), GPR_U32(ctx, 0));
label_27d020:
    // 0x27d020: 0xac450240  sw          $a1, 0x240($v0)
    ctx->pc = 0x27d020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 576), GPR_U32(ctx, 5));
label_27d024:
    // 0x27d024: 0xac450244  sw          $a1, 0x244($v0)
    ctx->pc = 0x27d024u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 580), GPR_U32(ctx, 5));
label_27d028:
    // 0x27d028: 0xac400248  sw          $zero, 0x248($v0)
    ctx->pc = 0x27d028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 584), GPR_U32(ctx, 0));
label_27d02c:
    // 0x27d02c: 0xac400250  sw          $zero, 0x250($v0)
    ctx->pc = 0x27d02cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 592), GPR_U32(ctx, 0));
label_27d030:
    // 0x27d030: 0xac450254  sw          $a1, 0x254($v0)
    ctx->pc = 0x27d030u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 596), GPR_U32(ctx, 5));
label_27d034:
    // 0x27d034: 0xac400258  sw          $zero, 0x258($v0)
    ctx->pc = 0x27d034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 600), GPR_U32(ctx, 0));
label_27d038:
    // 0x27d038: 0xac45029c  sw          $a1, 0x29C($v0)
    ctx->pc = 0x27d038u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 668), GPR_U32(ctx, 5));
label_27d03c:
    // 0x27d03c: 0xac40025c  sw          $zero, 0x25C($v0)
    ctx->pc = 0x27d03cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 604), GPR_U32(ctx, 0));
label_27d040:
    // 0x27d040: 0xac40046c  sw          $zero, 0x46C($v0)
    ctx->pc = 0x27d040u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1132), GPR_U32(ctx, 0));
label_27d044:
    // 0x27d044: 0xac400260  sw          $zero, 0x260($v0)
    ctx->pc = 0x27d044u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 608), GPR_U32(ctx, 0));
label_27d048:
    // 0x27d048: 0xac400264  sw          $zero, 0x264($v0)
    ctx->pc = 0x27d048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 612), GPR_U32(ctx, 0));
label_27d04c:
    // 0x27d04c: 0xac400268  sw          $zero, 0x268($v0)
    ctx->pc = 0x27d04cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 616), GPR_U32(ctx, 0));
label_27d050:
    // 0x27d050: 0xac45026c  sw          $a1, 0x26C($v0)
    ctx->pc = 0x27d050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 5));
label_27d054:
    // 0x27d054: 0xac450270  sw          $a1, 0x270($v0)
    ctx->pc = 0x27d054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 624), GPR_U32(ctx, 5));
label_27d058:
    // 0x27d058: 0xac450274  sw          $a1, 0x274($v0)
    ctx->pc = 0x27d058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 628), GPR_U32(ctx, 5));
label_27d05c:
    // 0x27d05c: 0xac400278  sw          $zero, 0x278($v0)
    ctx->pc = 0x27d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 632), GPR_U32(ctx, 0));
label_27d060:
    // 0x27d060: 0xac40027c  sw          $zero, 0x27C($v0)
    ctx->pc = 0x27d060u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 636), GPR_U32(ctx, 0));
label_27d064:
    // 0x27d064: 0xac400280  sw          $zero, 0x280($v0)
    ctx->pc = 0x27d064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 640), GPR_U32(ctx, 0));
label_27d068:
    // 0x27d068: 0xac400284  sw          $zero, 0x284($v0)
    ctx->pc = 0x27d068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 644), GPR_U32(ctx, 0));
label_27d06c:
    // 0x27d06c: 0xac400288  sw          $zero, 0x288($v0)
    ctx->pc = 0x27d06cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 648), GPR_U32(ctx, 0));
label_27d070:
    // 0x27d070: 0xac400290  sw          $zero, 0x290($v0)
    ctx->pc = 0x27d070u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 656), GPR_U32(ctx, 0));
label_27d074:
    // 0x27d074: 0xac400294  sw          $zero, 0x294($v0)
    ctx->pc = 0x27d074u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 660), GPR_U32(ctx, 0));
label_27d078:
    // 0x27d078: 0xac400298  sw          $zero, 0x298($v0)
    ctx->pc = 0x27d078u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 664), GPR_U32(ctx, 0));
label_27d07c:
    // 0x27d07c: 0x0  nop
    ctx->pc = 0x27d07cu;
    // NOP
label_27d080:
    // 0x27d080: 0xae00fec8  sw          $zero, -0x138($s0)
    ctx->pc = 0x27d080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294966984), GPR_U32(ctx, 0));
label_27d084:
    // 0x27d084: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x27d084u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_27d088:
    // 0x27d088: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x27d088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_27d08c:
    // 0x27d08c: 0x0  nop
    ctx->pc = 0x27d08cu;
    // NOP
label_27d090:
    // 0x27d090: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
label_27d094:
    if (ctx->pc == 0x27D094u) {
        ctx->pc = 0x27D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D090u;
        // 0x27d094: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D098u;
        goto label_27d098;
    }
    ctx->pc = 0x27D090u;
    {
        const bool branch_taken_0x27d090 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D090u;
        // 0x27d094: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d090) {
            ctx->pc = 0x27D080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d080;
        }
    }
    ctx->pc = 0x27D098u;
label_27d098:
    // 0x27d098: 0x2682cb28  addiu       $v0, $s4, -0x34D8
    ctx->pc = 0x27d098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953768));
label_27d09c:
    // 0x27d09c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x27d09cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_27d0a0:
    // 0x27d0a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x27d0a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d0a4:
    // 0x27d0a4: 0xac400440  sw          $zero, 0x440($v0)
    ctx->pc = 0x27d0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1088), GPR_U32(ctx, 0));
label_27d0a8:
    // 0x27d0a8: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x27d0a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27d0ac:
    // 0x27d0ac: 0x2442045c  addiu       $v0, $v0, 0x45C
    ctx->pc = 0x27d0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1116));
label_27d0b0:
    // 0x27d0b0: 0xe440fff4  swc1        $f0, -0xC($v0)
    ctx->pc = 0x27d0b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294967284), bits); }
label_27d0b4:
    // 0x27d0b4: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x27d0b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_27d0b8:
    // 0x27d0b8: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x27d0b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27d0bc:
    // 0x27d0bc: 0x0  nop
    ctx->pc = 0x27d0bcu;
    // NOP
label_27d0c0:
    // 0x27d0c0: 0x621fffb  bgez        $s1, . + 4 + (-0x5 << 2)
label_27d0c4:
    if (ctx->pc == 0x27D0C4u) {
        ctx->pc = 0x27D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0C0u;
        // 0x27d0c4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0C8u;
        goto label_27d0c8;
    }
    ctx->pc = 0x27D0C0u;
    {
        const bool branch_taken_0x27d0c0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x27D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0C0u;
        // 0x27d0c4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0c0) {
            ctx->pc = 0x27D0B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_27d0b0;
        }
    }
    ctx->pc = 0x27D0C8u;
label_27d0c8:
    // 0x27d0c8: 0xc0a040c  jal         func_281030
label_27d0cc:
    if (ctx->pc == 0x27D0CCu) {
        ctx->pc = 0x27D0D0u;
        goto label_27d0d0;
    }
    ctx->pc = 0x27D0C8u;
    SET_GPR_U32(ctx, 31, 0x27D0D0u);
    ctx->pc = 0x281030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x281030u, 0x27D0C8u, 0x27D0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0D0u;
label_27d0d0:
    // 0x27d0d0: 0xc0a0362  jal         func_280D88
label_27d0d4:
    if (ctx->pc == 0x27D0D4u) {
        ctx->pc = 0x27D0D8u;
        goto label_27d0d8;
    }
    ctx->pc = 0x27D0D0u;
    SET_GPR_U32(ctx, 31, 0x27D0D8u);
    ctx->pc = 0x280D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280D88u, 0x27D0D0u, 0x27D0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0D8u;
label_27d0d8:
    // 0x27d0d8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_27d0dc:
    if (ctx->pc == 0x27D0DCu) {
        ctx->pc = 0x27D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0D8u;
        // 0x27d0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0E0u;
        goto label_27d0e0;
    }
    ctx->pc = 0x27D0D8u;
    {
        const bool branch_taken_0x27d0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0D8u;
        // 0x27d0dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0d8) {
            ctx->pc = 0x27D1B8u;
            goto label_27d1b8;
        }
    }
    ctx->pc = 0x27D0E0u;
label_27d0e0:
    // 0x27d0e0: 0xc0a03a6  jal         func_280E98
label_27d0e4:
    if (ctx->pc == 0x27D0E4u) {
        ctx->pc = 0x27D0E8u;
        goto label_27d0e8;
    }
    ctx->pc = 0x27D0E0u;
    SET_GPR_U32(ctx, 31, 0x27D0E8u);
    ctx->pc = 0x280E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E98u, 0x27D0E0u, 0x27D0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0E8u;
label_27d0e8:
    // 0x27d0e8: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_27d0ec:
    if (ctx->pc == 0x27D0ECu) {
        ctx->pc = 0x27D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0E8u;
        // 0x27d0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D0F0u;
        goto label_27d0f0;
    }
    ctx->pc = 0x27D0E8u;
    {
        const bool branch_taken_0x27d0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D0E8u;
        // 0x27d0ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d0e8) {
            ctx->pc = 0x27D1B8u;
            goto label_27d1b8;
        }
    }
    ctx->pc = 0x27D0F0u;
label_27d0f0:
    // 0x27d0f0: 0xc0a0382  jal         func_280E08
label_27d0f4:
    if (ctx->pc == 0x27D0F4u) {
        ctx->pc = 0x27D0F8u;
        goto label_27d0f8;
    }
    ctx->pc = 0x27D0F0u;
    SET_GPR_U32(ctx, 31, 0x27D0F8u);
    ctx->pc = 0x280E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280E08u, 0x27D0F0u, 0x27D0F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D0F8u;
label_27d0f8:
    // 0x27d0f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27d0fc:
    if (ctx->pc == 0x27D0FCu) {
        ctx->pc = 0x27D100u;
        goto label_27d100;
    }
    ctx->pc = 0x27D0F8u;
    {
        const bool branch_taken_0x27d0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d0f8) {
            ctx->pc = 0x27D108u;
            goto label_27d108;
        }
    }
    ctx->pc = 0x27D100u;
label_27d100:
    // 0x27d100: 0x1000002d  b           . + 4 + (0x2D << 2)
label_27d104:
    if (ctx->pc == 0x27D104u) {
        ctx->pc = 0x27D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D100u;
        // 0x27d104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D108u;
        goto label_27d108;
    }
    ctx->pc = 0x27D100u;
    {
        const bool branch_taken_0x27d100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D100u;
        // 0x27d104: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d100) {
            ctx->pc = 0x27D1B8u;
            goto label_27d1b8;
        }
    }
    ctx->pc = 0x27D108u;
label_27d108:
    // 0x27d108: 0xc0d9caa  jal         func_3672A8
label_27d10c:
    if (ctx->pc == 0x27D10Cu) {
        ctx->pc = 0x27D110u;
        goto label_27d110;
    }
    ctx->pc = 0x27D108u;
    SET_GPR_U32(ctx, 31, 0x27D110u);
    ctx->pc = 0x3672A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672A8u, 0x27D108u, 0x27D110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D110u;
label_27d110:
    // 0x27d110: 0xc0d9cb6  jal         func_3672D8
label_27d114:
    if (ctx->pc == 0x27D114u) {
        ctx->pc = 0x27D114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D110u;
        // 0x27d114: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D118u;
        goto label_27d118;
    }
    ctx->pc = 0x27D110u;
    SET_GPR_U32(ctx, 31, 0x27D118u);
    ctx->pc = 0x27D114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D110u;
    // 0x27d114: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3672D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3672D8u, 0x27D110u, 0x27D118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D118u;
label_27d118:
    // 0x27d118: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27d118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
label_27d11c:
    // 0x27d11c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x27d11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_27d120:
    // 0x27d120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27d120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d124:
    // 0x27d124: 0x24a59788  addiu       $a1, $a1, -0x6878
    ctx->pc = 0x27d124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940552));
label_27d128:
    // 0x27d128: 0xc0d9cc2  jal         func_367308
label_27d12c:
    if (ctx->pc == 0x27D12Cu) {
        ctx->pc = 0x27D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D128u;
        // 0x27d12c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D130u;
        goto label_27d130;
    }
    ctx->pc = 0x27D128u;
    SET_GPR_U32(ctx, 31, 0x27D130u);
    ctx->pc = 0x27D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D128u;
    // 0x27d12c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x367308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x367308u, 0x27D128u, 0x27D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D130u;
label_27d130:
    // 0x27d130: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27d130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_27d134:
    // 0x27d134: 0x3c03004c  lui         $v1, 0x4C
    ctx->pc = 0x27d134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)76 << 16));
label_27d138:
    // 0x27d138: 0x8c442b9c  lw          $a0, 0x2B9C($v0)
    ctx->pc = 0x27d138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11164)));
label_27d13c:
    // 0x27d13c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_27d140:
    if (ctx->pc == 0x27D140u) {
        ctx->pc = 0x27D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D13Cu;
        // 0x27d140: 0xac60f620  sw          $zero, -0x9E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D144u;
        goto label_27d144;
    }
    ctx->pc = 0x27D13Cu;
    {
        const bool branch_taken_0x27d13c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D13Cu;
        // 0x27d140: 0xac60f620  sw          $zero, -0x9E0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964768), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d13c) {
            ctx->pc = 0x27D14Cu;
            goto label_27d14c;
        }
    }
    ctx->pc = 0x27D144u;
label_27d144:
    // 0x27d144: 0xc0a04f0  jal         func_2813C0
label_27d148:
    if (ctx->pc == 0x27D148u) {
        ctx->pc = 0x27D14Cu;
        goto label_27d14c;
    }
    ctx->pc = 0x27D144u;
    SET_GPR_U32(ctx, 31, 0x27D14Cu);
    ctx->pc = 0x2813C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813C0u, 0x27D144u, 0x27D14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D14Cu;
label_27d14c:
    // 0x27d14c: 0xc0a186a  jal         func_2861A8
label_27d150:
    if (ctx->pc == 0x27D150u) {
        ctx->pc = 0x27D154u;
        goto label_27d154;
    }
    ctx->pc = 0x27D14Cu;
    SET_GPR_U32(ctx, 31, 0x27D154u);
    ctx->pc = 0x2861A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2861A8u, 0x27D14Cu, 0x27D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D154u;
label_27d154:
    // 0x27d154: 0xc0a013a  jal         func_2804E8
label_27d158:
    if (ctx->pc == 0x27D158u) {
        ctx->pc = 0x27D15Cu;
        goto label_27d15c;
    }
    ctx->pc = 0x27D154u;
    SET_GPR_U32(ctx, 31, 0x27D15Cu);
    ctx->pc = 0x2804E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2804E8u, 0x27D154u, 0x27D15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D15Cu;
label_27d15c:
    // 0x27d15c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x27d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_27d160:
    // 0x27d160: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x27d160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_27d164:
    // 0x27d164: 0x8c462bbc  lw          $a2, 0x2BBC($v0)
    ctx->pc = 0x27d164u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11196)));
label_27d168:
    // 0x27d168: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27d168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d16c:
    // 0x27d16c: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x27d16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
label_27d170:
    // 0x27d170: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x27d170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_27d174:
    // 0x27d174: 0xaca3a304  sw          $v1, -0x5CFC($a1)
    ctx->pc = 0x27d174u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294943492), GPR_U32(ctx, 3));
label_27d178:
    // 0x27d178: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_27d17c:
    if (ctx->pc == 0x27D17Cu) {
        ctx->pc = 0x27D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D178u;
        // 0x27d17c: 0xac822b34  sw          $v0, 0x2B34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D180u;
        goto label_27d180;
    }
    ctx->pc = 0x27D178u;
    {
        const bool branch_taken_0x27d178 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D178u;
        // 0x27d17c: 0xac822b34  sw          $v0, 0x2B34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 11060), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d178) {
            ctx->pc = 0x27D19Cu;
            goto label_27d19c;
        }
    }
    ctx->pc = 0x27D180u;
label_27d180:
    // 0x27d180: 0xc0a71e0  jal         func_29C780
label_27d184:
    if (ctx->pc == 0x27D184u) {
        ctx->pc = 0x27D188u;
        goto label_27d188;
    }
    ctx->pc = 0x27D180u;
    SET_GPR_U32(ctx, 31, 0x27D188u);
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x27D180u, 0x27D188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D188u;
label_27d188:
    // 0x27d188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27d188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27d18c:
    // 0x27d18c: 0xc0a7428  jal         func_29D0A0
label_27d190:
    if (ctx->pc == 0x27D190u) {
        ctx->pc = 0x27D190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D18Cu;
        // 0x27d190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D194u;
        goto label_27d194;
    }
    ctx->pc = 0x27D18Cu;
    SET_GPR_U32(ctx, 31, 0x27D194u);
    ctx->pc = 0x27D190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27D18Cu;
    // 0x27d190: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D0A0u, 0x27D18Cu, 0x27D194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D194u;
label_27d194:
    // 0x27d194: 0xc0a04f0  jal         func_2813C0
label_27d198:
    if (ctx->pc == 0x27D198u) {
        ctx->pc = 0x27D19Cu;
        goto label_27d19c;
    }
    ctx->pc = 0x27D194u;
    SET_GPR_U32(ctx, 31, 0x27D19Cu);
    ctx->pc = 0x2813C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2813C0u, 0x27D194u, 0x27D19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27D19Cu;
label_27d19c:
    // 0x27d19c: 0x8ea2cba8  lw          $v0, -0x3458($s5)
    ctx->pc = 0x27d19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294953896)));
label_27d1a0:
    // 0x27d1a0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x27d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_27d1a4:
    // 0x27d1a4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x27d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27d1a8:
    // 0x27d1a8: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x27d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_27d1ac:
    // 0x27d1ac: 0x40f809  jalr        $v0
label_27d1b0:
    if (ctx->pc == 0x27D1B0u) {
        ctx->pc = 0x27D1B4u;
        goto label_27d1b4;
    }
    ctx->pc = 0x27D1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27D1B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D1ACu, 0x27D1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27D1B4u;
label_27d1b4:
    // 0x27d1b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d1b8:
    // 0x27d1b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d1b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27d1bc:
    // 0x27d1bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27d1bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_27d1c0:
    // 0x27d1c0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27d1c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_27d1c4:
    // 0x27d1c4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27d1c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_27d1c8:
    // 0x27d1c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27d1c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27d1cc:
    // 0x27d1cc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x27d1ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_27d1d0:
    // 0x27d1d0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x27d1d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_27d1d4:
    // 0x27d1d4: 0x3e00008  jr          $ra
label_27d1d8:
    if (ctx->pc == 0x27D1D8u) {
        ctx->pc = 0x27D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1D4u;
        // 0x27d1d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27D1DCu;
        goto label_27d1dc;
    }
    ctx->pc = 0x27D1D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27D1D4u;
        // 0x27d1d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27D1D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27D1DCu;
label_27d1dc:
    // 0x27d1dc: 0x0  nop
    ctx->pc = 0x27d1dcu;
    // NOP
    ctx->pc = 0x27d1e0u;
}
