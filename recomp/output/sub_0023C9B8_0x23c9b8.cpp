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

// Function: sub_0023C9B8
// Address: 0x23c9b8 - 0x23d6d0
void sub_0023C9B8_0x23c9b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023C9B8_0x23c9b8");
#endif

    switch (ctx->pc) {
        case 0x23c9b8u: goto label_23c9b8;
        case 0x23c9bcu: goto label_23c9bc;
        case 0x23c9c0u: goto label_23c9c0;
        case 0x23c9c4u: goto label_23c9c4;
        case 0x23c9c8u: goto label_23c9c8;
        case 0x23c9ccu: goto label_23c9cc;
        case 0x23c9d0u: goto label_23c9d0;
        case 0x23c9d4u: goto label_23c9d4;
        case 0x23c9d8u: goto label_23c9d8;
        case 0x23c9dcu: goto label_23c9dc;
        case 0x23c9e0u: goto label_23c9e0;
        case 0x23c9e4u: goto label_23c9e4;
        case 0x23c9e8u: goto label_23c9e8;
        case 0x23c9ecu: goto label_23c9ec;
        case 0x23c9f0u: goto label_23c9f0;
        case 0x23c9f4u: goto label_23c9f4;
        case 0x23c9f8u: goto label_23c9f8;
        case 0x23c9fcu: goto label_23c9fc;
        case 0x23ca00u: goto label_23ca00;
        case 0x23ca04u: goto label_23ca04;
        case 0x23ca08u: goto label_23ca08;
        case 0x23ca0cu: goto label_23ca0c;
        case 0x23ca10u: goto label_23ca10;
        case 0x23ca14u: goto label_23ca14;
        case 0x23ca18u: goto label_23ca18;
        case 0x23ca1cu: goto label_23ca1c;
        case 0x23ca20u: goto label_23ca20;
        case 0x23ca24u: goto label_23ca24;
        case 0x23ca28u: goto label_23ca28;
        case 0x23ca2cu: goto label_23ca2c;
        case 0x23ca30u: goto label_23ca30;
        case 0x23ca34u: goto label_23ca34;
        case 0x23ca38u: goto label_23ca38;
        case 0x23ca3cu: goto label_23ca3c;
        case 0x23ca40u: goto label_23ca40;
        case 0x23ca44u: goto label_23ca44;
        case 0x23ca48u: goto label_23ca48;
        case 0x23ca4cu: goto label_23ca4c;
        case 0x23ca50u: goto label_23ca50;
        case 0x23ca54u: goto label_23ca54;
        case 0x23ca58u: goto label_23ca58;
        case 0x23ca5cu: goto label_23ca5c;
        case 0x23ca60u: goto label_23ca60;
        case 0x23ca64u: goto label_23ca64;
        case 0x23ca68u: goto label_23ca68;
        case 0x23ca6cu: goto label_23ca6c;
        case 0x23ca70u: goto label_23ca70;
        case 0x23ca74u: goto label_23ca74;
        case 0x23ca78u: goto label_23ca78;
        case 0x23ca7cu: goto label_23ca7c;
        case 0x23ca80u: goto label_23ca80;
        case 0x23ca84u: goto label_23ca84;
        case 0x23ca88u: goto label_23ca88;
        case 0x23ca8cu: goto label_23ca8c;
        case 0x23ca90u: goto label_23ca90;
        case 0x23ca94u: goto label_23ca94;
        case 0x23ca98u: goto label_23ca98;
        case 0x23ca9cu: goto label_23ca9c;
        case 0x23caa0u: goto label_23caa0;
        case 0x23caa4u: goto label_23caa4;
        case 0x23caa8u: goto label_23caa8;
        case 0x23caacu: goto label_23caac;
        case 0x23cab0u: goto label_23cab0;
        case 0x23cab4u: goto label_23cab4;
        case 0x23cab8u: goto label_23cab8;
        case 0x23cabcu: goto label_23cabc;
        case 0x23cac0u: goto label_23cac0;
        case 0x23cac4u: goto label_23cac4;
        case 0x23cac8u: goto label_23cac8;
        case 0x23caccu: goto label_23cacc;
        case 0x23cad0u: goto label_23cad0;
        case 0x23cad4u: goto label_23cad4;
        case 0x23cad8u: goto label_23cad8;
        case 0x23cadcu: goto label_23cadc;
        case 0x23cae0u: goto label_23cae0;
        case 0x23cae4u: goto label_23cae4;
        case 0x23cae8u: goto label_23cae8;
        case 0x23caecu: goto label_23caec;
        case 0x23caf0u: goto label_23caf0;
        case 0x23caf4u: goto label_23caf4;
        case 0x23caf8u: goto label_23caf8;
        case 0x23cafcu: goto label_23cafc;
        case 0x23cb00u: goto label_23cb00;
        case 0x23cb04u: goto label_23cb04;
        case 0x23cb08u: goto label_23cb08;
        case 0x23cb0cu: goto label_23cb0c;
        case 0x23cb10u: goto label_23cb10;
        case 0x23cb14u: goto label_23cb14;
        case 0x23cb18u: goto label_23cb18;
        case 0x23cb1cu: goto label_23cb1c;
        case 0x23cb20u: goto label_23cb20;
        case 0x23cb24u: goto label_23cb24;
        case 0x23cb28u: goto label_23cb28;
        case 0x23cb2cu: goto label_23cb2c;
        case 0x23cb30u: goto label_23cb30;
        case 0x23cb34u: goto label_23cb34;
        case 0x23cb38u: goto label_23cb38;
        case 0x23cb3cu: goto label_23cb3c;
        case 0x23cb40u: goto label_23cb40;
        case 0x23cb44u: goto label_23cb44;
        case 0x23cb48u: goto label_23cb48;
        case 0x23cb4cu: goto label_23cb4c;
        case 0x23cb50u: goto label_23cb50;
        case 0x23cb54u: goto label_23cb54;
        case 0x23cb58u: goto label_23cb58;
        case 0x23cb5cu: goto label_23cb5c;
        case 0x23cb60u: goto label_23cb60;
        case 0x23cb64u: goto label_23cb64;
        case 0x23cb68u: goto label_23cb68;
        case 0x23cb6cu: goto label_23cb6c;
        case 0x23cb70u: goto label_23cb70;
        case 0x23cb74u: goto label_23cb74;
        case 0x23cb78u: goto label_23cb78;
        case 0x23cb7cu: goto label_23cb7c;
        case 0x23cb80u: goto label_23cb80;
        case 0x23cb84u: goto label_23cb84;
        case 0x23cb88u: goto label_23cb88;
        case 0x23cb8cu: goto label_23cb8c;
        case 0x23cb90u: goto label_23cb90;
        case 0x23cb94u: goto label_23cb94;
        case 0x23cb98u: goto label_23cb98;
        case 0x23cb9cu: goto label_23cb9c;
        case 0x23cba0u: goto label_23cba0;
        case 0x23cba4u: goto label_23cba4;
        case 0x23cba8u: goto label_23cba8;
        case 0x23cbacu: goto label_23cbac;
        case 0x23cbb0u: goto label_23cbb0;
        case 0x23cbb4u: goto label_23cbb4;
        case 0x23cbb8u: goto label_23cbb8;
        case 0x23cbbcu: goto label_23cbbc;
        case 0x23cbc0u: goto label_23cbc0;
        case 0x23cbc4u: goto label_23cbc4;
        case 0x23cbc8u: goto label_23cbc8;
        case 0x23cbccu: goto label_23cbcc;
        case 0x23cbd0u: goto label_23cbd0;
        case 0x23cbd4u: goto label_23cbd4;
        case 0x23cbd8u: goto label_23cbd8;
        case 0x23cbdcu: goto label_23cbdc;
        case 0x23cbe0u: goto label_23cbe0;
        case 0x23cbe4u: goto label_23cbe4;
        case 0x23cbe8u: goto label_23cbe8;
        case 0x23cbecu: goto label_23cbec;
        case 0x23cbf0u: goto label_23cbf0;
        case 0x23cbf4u: goto label_23cbf4;
        case 0x23cbf8u: goto label_23cbf8;
        case 0x23cbfcu: goto label_23cbfc;
        case 0x23cc00u: goto label_23cc00;
        case 0x23cc04u: goto label_23cc04;
        case 0x23cc08u: goto label_23cc08;
        case 0x23cc0cu: goto label_23cc0c;
        case 0x23cc10u: goto label_23cc10;
        case 0x23cc14u: goto label_23cc14;
        case 0x23cc18u: goto label_23cc18;
        case 0x23cc1cu: goto label_23cc1c;
        case 0x23cc20u: goto label_23cc20;
        case 0x23cc24u: goto label_23cc24;
        case 0x23cc28u: goto label_23cc28;
        case 0x23cc2cu: goto label_23cc2c;
        case 0x23cc30u: goto label_23cc30;
        case 0x23cc34u: goto label_23cc34;
        case 0x23cc38u: goto label_23cc38;
        case 0x23cc3cu: goto label_23cc3c;
        case 0x23cc40u: goto label_23cc40;
        case 0x23cc44u: goto label_23cc44;
        case 0x23cc48u: goto label_23cc48;
        case 0x23cc4cu: goto label_23cc4c;
        case 0x23cc50u: goto label_23cc50;
        case 0x23cc54u: goto label_23cc54;
        case 0x23cc58u: goto label_23cc58;
        case 0x23cc5cu: goto label_23cc5c;
        case 0x23cc60u: goto label_23cc60;
        case 0x23cc64u: goto label_23cc64;
        case 0x23cc68u: goto label_23cc68;
        case 0x23cc6cu: goto label_23cc6c;
        case 0x23cc70u: goto label_23cc70;
        case 0x23cc74u: goto label_23cc74;
        case 0x23cc78u: goto label_23cc78;
        case 0x23cc7cu: goto label_23cc7c;
        case 0x23cc80u: goto label_23cc80;
        case 0x23cc84u: goto label_23cc84;
        case 0x23cc88u: goto label_23cc88;
        case 0x23cc8cu: goto label_23cc8c;
        case 0x23cc90u: goto label_23cc90;
        case 0x23cc94u: goto label_23cc94;
        case 0x23cc98u: goto label_23cc98;
        case 0x23cc9cu: goto label_23cc9c;
        case 0x23cca0u: goto label_23cca0;
        case 0x23cca4u: goto label_23cca4;
        case 0x23cca8u: goto label_23cca8;
        case 0x23ccacu: goto label_23ccac;
        case 0x23ccb0u: goto label_23ccb0;
        case 0x23ccb4u: goto label_23ccb4;
        case 0x23ccb8u: goto label_23ccb8;
        case 0x23ccbcu: goto label_23ccbc;
        case 0x23ccc0u: goto label_23ccc0;
        case 0x23ccc4u: goto label_23ccc4;
        case 0x23ccc8u: goto label_23ccc8;
        case 0x23ccccu: goto label_23cccc;
        case 0x23ccd0u: goto label_23ccd0;
        case 0x23ccd4u: goto label_23ccd4;
        case 0x23ccd8u: goto label_23ccd8;
        case 0x23ccdcu: goto label_23ccdc;
        case 0x23cce0u: goto label_23cce0;
        case 0x23cce4u: goto label_23cce4;
        case 0x23cce8u: goto label_23cce8;
        case 0x23ccecu: goto label_23ccec;
        case 0x23ccf0u: goto label_23ccf0;
        case 0x23ccf4u: goto label_23ccf4;
        case 0x23ccf8u: goto label_23ccf8;
        case 0x23ccfcu: goto label_23ccfc;
        case 0x23cd00u: goto label_23cd00;
        case 0x23cd04u: goto label_23cd04;
        case 0x23cd08u: goto label_23cd08;
        case 0x23cd0cu: goto label_23cd0c;
        case 0x23cd10u: goto label_23cd10;
        case 0x23cd14u: goto label_23cd14;
        case 0x23cd18u: goto label_23cd18;
        case 0x23cd1cu: goto label_23cd1c;
        case 0x23cd20u: goto label_23cd20;
        case 0x23cd24u: goto label_23cd24;
        case 0x23cd28u: goto label_23cd28;
        case 0x23cd2cu: goto label_23cd2c;
        case 0x23cd30u: goto label_23cd30;
        case 0x23cd34u: goto label_23cd34;
        case 0x23cd38u: goto label_23cd38;
        case 0x23cd3cu: goto label_23cd3c;
        case 0x23cd40u: goto label_23cd40;
        case 0x23cd44u: goto label_23cd44;
        case 0x23cd48u: goto label_23cd48;
        case 0x23cd4cu: goto label_23cd4c;
        case 0x23cd50u: goto label_23cd50;
        case 0x23cd54u: goto label_23cd54;
        case 0x23cd58u: goto label_23cd58;
        case 0x23cd5cu: goto label_23cd5c;
        case 0x23cd60u: goto label_23cd60;
        case 0x23cd64u: goto label_23cd64;
        case 0x23cd68u: goto label_23cd68;
        case 0x23cd6cu: goto label_23cd6c;
        case 0x23cd70u: goto label_23cd70;
        case 0x23cd74u: goto label_23cd74;
        case 0x23cd78u: goto label_23cd78;
        case 0x23cd7cu: goto label_23cd7c;
        case 0x23cd80u: goto label_23cd80;
        case 0x23cd84u: goto label_23cd84;
        case 0x23cd88u: goto label_23cd88;
        case 0x23cd8cu: goto label_23cd8c;
        case 0x23cd90u: goto label_23cd90;
        case 0x23cd94u: goto label_23cd94;
        case 0x23cd98u: goto label_23cd98;
        case 0x23cd9cu: goto label_23cd9c;
        case 0x23cda0u: goto label_23cda0;
        case 0x23cda4u: goto label_23cda4;
        case 0x23cda8u: goto label_23cda8;
        case 0x23cdacu: goto label_23cdac;
        case 0x23cdb0u: goto label_23cdb0;
        case 0x23cdb4u: goto label_23cdb4;
        case 0x23cdb8u: goto label_23cdb8;
        case 0x23cdbcu: goto label_23cdbc;
        case 0x23cdc0u: goto label_23cdc0;
        case 0x23cdc4u: goto label_23cdc4;
        case 0x23cdc8u: goto label_23cdc8;
        case 0x23cdccu: goto label_23cdcc;
        case 0x23cdd0u: goto label_23cdd0;
        case 0x23cdd4u: goto label_23cdd4;
        case 0x23cdd8u: goto label_23cdd8;
        case 0x23cddcu: goto label_23cddc;
        case 0x23cde0u: goto label_23cde0;
        case 0x23cde4u: goto label_23cde4;
        case 0x23cde8u: goto label_23cde8;
        case 0x23cdecu: goto label_23cdec;
        case 0x23cdf0u: goto label_23cdf0;
        case 0x23cdf4u: goto label_23cdf4;
        case 0x23cdf8u: goto label_23cdf8;
        case 0x23cdfcu: goto label_23cdfc;
        case 0x23ce00u: goto label_23ce00;
        case 0x23ce04u: goto label_23ce04;
        case 0x23ce08u: goto label_23ce08;
        case 0x23ce0cu: goto label_23ce0c;
        case 0x23ce10u: goto label_23ce10;
        case 0x23ce14u: goto label_23ce14;
        case 0x23ce18u: goto label_23ce18;
        case 0x23ce1cu: goto label_23ce1c;
        case 0x23ce20u: goto label_23ce20;
        case 0x23ce24u: goto label_23ce24;
        case 0x23ce28u: goto label_23ce28;
        case 0x23ce2cu: goto label_23ce2c;
        case 0x23ce30u: goto label_23ce30;
        case 0x23ce34u: goto label_23ce34;
        case 0x23ce38u: goto label_23ce38;
        case 0x23ce3cu: goto label_23ce3c;
        case 0x23ce40u: goto label_23ce40;
        case 0x23ce44u: goto label_23ce44;
        case 0x23ce48u: goto label_23ce48;
        case 0x23ce4cu: goto label_23ce4c;
        case 0x23ce50u: goto label_23ce50;
        case 0x23ce54u: goto label_23ce54;
        case 0x23ce58u: goto label_23ce58;
        case 0x23ce5cu: goto label_23ce5c;
        case 0x23ce60u: goto label_23ce60;
        case 0x23ce64u: goto label_23ce64;
        case 0x23ce68u: goto label_23ce68;
        case 0x23ce6cu: goto label_23ce6c;
        case 0x23ce70u: goto label_23ce70;
        case 0x23ce74u: goto label_23ce74;
        case 0x23ce78u: goto label_23ce78;
        case 0x23ce7cu: goto label_23ce7c;
        case 0x23ce80u: goto label_23ce80;
        case 0x23ce84u: goto label_23ce84;
        case 0x23ce88u: goto label_23ce88;
        case 0x23ce8cu: goto label_23ce8c;
        case 0x23ce90u: goto label_23ce90;
        case 0x23ce94u: goto label_23ce94;
        case 0x23ce98u: goto label_23ce98;
        case 0x23ce9cu: goto label_23ce9c;
        case 0x23cea0u: goto label_23cea0;
        case 0x23cea4u: goto label_23cea4;
        case 0x23cea8u: goto label_23cea8;
        case 0x23ceacu: goto label_23ceac;
        case 0x23ceb0u: goto label_23ceb0;
        case 0x23ceb4u: goto label_23ceb4;
        case 0x23ceb8u: goto label_23ceb8;
        case 0x23cebcu: goto label_23cebc;
        case 0x23cec0u: goto label_23cec0;
        case 0x23cec4u: goto label_23cec4;
        case 0x23cec8u: goto label_23cec8;
        case 0x23ceccu: goto label_23cecc;
        case 0x23ced0u: goto label_23ced0;
        case 0x23ced4u: goto label_23ced4;
        case 0x23ced8u: goto label_23ced8;
        case 0x23cedcu: goto label_23cedc;
        case 0x23cee0u: goto label_23cee0;
        case 0x23cee4u: goto label_23cee4;
        case 0x23cee8u: goto label_23cee8;
        case 0x23ceecu: goto label_23ceec;
        case 0x23cef0u: goto label_23cef0;
        case 0x23cef4u: goto label_23cef4;
        case 0x23cef8u: goto label_23cef8;
        case 0x23cefcu: goto label_23cefc;
        case 0x23cf00u: goto label_23cf00;
        case 0x23cf04u: goto label_23cf04;
        case 0x23cf08u: goto label_23cf08;
        case 0x23cf0cu: goto label_23cf0c;
        case 0x23cf10u: goto label_23cf10;
        case 0x23cf14u: goto label_23cf14;
        case 0x23cf18u: goto label_23cf18;
        case 0x23cf1cu: goto label_23cf1c;
        case 0x23cf20u: goto label_23cf20;
        case 0x23cf24u: goto label_23cf24;
        case 0x23cf28u: goto label_23cf28;
        case 0x23cf2cu: goto label_23cf2c;
        case 0x23cf30u: goto label_23cf30;
        case 0x23cf34u: goto label_23cf34;
        case 0x23cf38u: goto label_23cf38;
        case 0x23cf3cu: goto label_23cf3c;
        case 0x23cf40u: goto label_23cf40;
        case 0x23cf44u: goto label_23cf44;
        case 0x23cf48u: goto label_23cf48;
        case 0x23cf4cu: goto label_23cf4c;
        case 0x23cf50u: goto label_23cf50;
        case 0x23cf54u: goto label_23cf54;
        case 0x23cf58u: goto label_23cf58;
        case 0x23cf5cu: goto label_23cf5c;
        case 0x23cf60u: goto label_23cf60;
        case 0x23cf64u: goto label_23cf64;
        case 0x23cf68u: goto label_23cf68;
        case 0x23cf6cu: goto label_23cf6c;
        case 0x23cf70u: goto label_23cf70;
        case 0x23cf74u: goto label_23cf74;
        case 0x23cf78u: goto label_23cf78;
        case 0x23cf7cu: goto label_23cf7c;
        case 0x23cf80u: goto label_23cf80;
        case 0x23cf84u: goto label_23cf84;
        case 0x23cf88u: goto label_23cf88;
        case 0x23cf8cu: goto label_23cf8c;
        case 0x23cf90u: goto label_23cf90;
        case 0x23cf94u: goto label_23cf94;
        case 0x23cf98u: goto label_23cf98;
        case 0x23cf9cu: goto label_23cf9c;
        case 0x23cfa0u: goto label_23cfa0;
        case 0x23cfa4u: goto label_23cfa4;
        case 0x23cfa8u: goto label_23cfa8;
        case 0x23cfacu: goto label_23cfac;
        case 0x23cfb0u: goto label_23cfb0;
        case 0x23cfb4u: goto label_23cfb4;
        case 0x23cfb8u: goto label_23cfb8;
        case 0x23cfbcu: goto label_23cfbc;
        case 0x23cfc0u: goto label_23cfc0;
        case 0x23cfc4u: goto label_23cfc4;
        case 0x23cfc8u: goto label_23cfc8;
        case 0x23cfccu: goto label_23cfcc;
        case 0x23cfd0u: goto label_23cfd0;
        case 0x23cfd4u: goto label_23cfd4;
        case 0x23cfd8u: goto label_23cfd8;
        case 0x23cfdcu: goto label_23cfdc;
        case 0x23cfe0u: goto label_23cfe0;
        case 0x23cfe4u: goto label_23cfe4;
        case 0x23cfe8u: goto label_23cfe8;
        case 0x23cfecu: goto label_23cfec;
        case 0x23cff0u: goto label_23cff0;
        case 0x23cff4u: goto label_23cff4;
        case 0x23cff8u: goto label_23cff8;
        case 0x23cffcu: goto label_23cffc;
        case 0x23d000u: goto label_23d000;
        case 0x23d004u: goto label_23d004;
        case 0x23d008u: goto label_23d008;
        case 0x23d00cu: goto label_23d00c;
        case 0x23d010u: goto label_23d010;
        case 0x23d014u: goto label_23d014;
        case 0x23d018u: goto label_23d018;
        case 0x23d01cu: goto label_23d01c;
        case 0x23d020u: goto label_23d020;
        case 0x23d024u: goto label_23d024;
        case 0x23d028u: goto label_23d028;
        case 0x23d02cu: goto label_23d02c;
        case 0x23d030u: goto label_23d030;
        case 0x23d034u: goto label_23d034;
        case 0x23d038u: goto label_23d038;
        case 0x23d03cu: goto label_23d03c;
        case 0x23d040u: goto label_23d040;
        case 0x23d044u: goto label_23d044;
        case 0x23d048u: goto label_23d048;
        case 0x23d04cu: goto label_23d04c;
        case 0x23d050u: goto label_23d050;
        case 0x23d054u: goto label_23d054;
        case 0x23d058u: goto label_23d058;
        case 0x23d05cu: goto label_23d05c;
        case 0x23d060u: goto label_23d060;
        case 0x23d064u: goto label_23d064;
        case 0x23d068u: goto label_23d068;
        case 0x23d06cu: goto label_23d06c;
        case 0x23d070u: goto label_23d070;
        case 0x23d074u: goto label_23d074;
        case 0x23d078u: goto label_23d078;
        case 0x23d07cu: goto label_23d07c;
        case 0x23d080u: goto label_23d080;
        case 0x23d084u: goto label_23d084;
        case 0x23d088u: goto label_23d088;
        case 0x23d08cu: goto label_23d08c;
        case 0x23d090u: goto label_23d090;
        case 0x23d094u: goto label_23d094;
        case 0x23d098u: goto label_23d098;
        case 0x23d09cu: goto label_23d09c;
        case 0x23d0a0u: goto label_23d0a0;
        case 0x23d0a4u: goto label_23d0a4;
        case 0x23d0a8u: goto label_23d0a8;
        case 0x23d0acu: goto label_23d0ac;
        case 0x23d0b0u: goto label_23d0b0;
        case 0x23d0b4u: goto label_23d0b4;
        case 0x23d0b8u: goto label_23d0b8;
        case 0x23d0bcu: goto label_23d0bc;
        case 0x23d0c0u: goto label_23d0c0;
        case 0x23d0c4u: goto label_23d0c4;
        case 0x23d0c8u: goto label_23d0c8;
        case 0x23d0ccu: goto label_23d0cc;
        case 0x23d0d0u: goto label_23d0d0;
        case 0x23d0d4u: goto label_23d0d4;
        case 0x23d0d8u: goto label_23d0d8;
        case 0x23d0dcu: goto label_23d0dc;
        case 0x23d0e0u: goto label_23d0e0;
        case 0x23d0e4u: goto label_23d0e4;
        case 0x23d0e8u: goto label_23d0e8;
        case 0x23d0ecu: goto label_23d0ec;
        case 0x23d0f0u: goto label_23d0f0;
        case 0x23d0f4u: goto label_23d0f4;
        case 0x23d0f8u: goto label_23d0f8;
        case 0x23d0fcu: goto label_23d0fc;
        case 0x23d100u: goto label_23d100;
        case 0x23d104u: goto label_23d104;
        case 0x23d108u: goto label_23d108;
        case 0x23d10cu: goto label_23d10c;
        case 0x23d110u: goto label_23d110;
        case 0x23d114u: goto label_23d114;
        case 0x23d118u: goto label_23d118;
        case 0x23d11cu: goto label_23d11c;
        case 0x23d120u: goto label_23d120;
        case 0x23d124u: goto label_23d124;
        case 0x23d128u: goto label_23d128;
        case 0x23d12cu: goto label_23d12c;
        case 0x23d130u: goto label_23d130;
        case 0x23d134u: goto label_23d134;
        case 0x23d138u: goto label_23d138;
        case 0x23d13cu: goto label_23d13c;
        case 0x23d140u: goto label_23d140;
        case 0x23d144u: goto label_23d144;
        case 0x23d148u: goto label_23d148;
        case 0x23d14cu: goto label_23d14c;
        case 0x23d150u: goto label_23d150;
        case 0x23d154u: goto label_23d154;
        case 0x23d158u: goto label_23d158;
        case 0x23d15cu: goto label_23d15c;
        case 0x23d160u: goto label_23d160;
        case 0x23d164u: goto label_23d164;
        case 0x23d168u: goto label_23d168;
        case 0x23d16cu: goto label_23d16c;
        case 0x23d170u: goto label_23d170;
        case 0x23d174u: goto label_23d174;
        case 0x23d178u: goto label_23d178;
        case 0x23d17cu: goto label_23d17c;
        case 0x23d180u: goto label_23d180;
        case 0x23d184u: goto label_23d184;
        case 0x23d188u: goto label_23d188;
        case 0x23d18cu: goto label_23d18c;
        case 0x23d190u: goto label_23d190;
        case 0x23d194u: goto label_23d194;
        case 0x23d198u: goto label_23d198;
        case 0x23d19cu: goto label_23d19c;
        case 0x23d1a0u: goto label_23d1a0;
        case 0x23d1a4u: goto label_23d1a4;
        case 0x23d1a8u: goto label_23d1a8;
        case 0x23d1acu: goto label_23d1ac;
        case 0x23d1b0u: goto label_23d1b0;
        case 0x23d1b4u: goto label_23d1b4;
        case 0x23d1b8u: goto label_23d1b8;
        case 0x23d1bcu: goto label_23d1bc;
        case 0x23d1c0u: goto label_23d1c0;
        case 0x23d1c4u: goto label_23d1c4;
        case 0x23d1c8u: goto label_23d1c8;
        case 0x23d1ccu: goto label_23d1cc;
        case 0x23d1d0u: goto label_23d1d0;
        case 0x23d1d4u: goto label_23d1d4;
        case 0x23d1d8u: goto label_23d1d8;
        case 0x23d1dcu: goto label_23d1dc;
        case 0x23d1e0u: goto label_23d1e0;
        case 0x23d1e4u: goto label_23d1e4;
        case 0x23d1e8u: goto label_23d1e8;
        case 0x23d1ecu: goto label_23d1ec;
        case 0x23d1f0u: goto label_23d1f0;
        case 0x23d1f4u: goto label_23d1f4;
        case 0x23d1f8u: goto label_23d1f8;
        case 0x23d1fcu: goto label_23d1fc;
        case 0x23d200u: goto label_23d200;
        case 0x23d204u: goto label_23d204;
        case 0x23d208u: goto label_23d208;
        case 0x23d20cu: goto label_23d20c;
        case 0x23d210u: goto label_23d210;
        case 0x23d214u: goto label_23d214;
        case 0x23d218u: goto label_23d218;
        case 0x23d21cu: goto label_23d21c;
        case 0x23d220u: goto label_23d220;
        case 0x23d224u: goto label_23d224;
        case 0x23d228u: goto label_23d228;
        case 0x23d22cu: goto label_23d22c;
        case 0x23d230u: goto label_23d230;
        case 0x23d234u: goto label_23d234;
        case 0x23d238u: goto label_23d238;
        case 0x23d23cu: goto label_23d23c;
        case 0x23d240u: goto label_23d240;
        case 0x23d244u: goto label_23d244;
        case 0x23d248u: goto label_23d248;
        case 0x23d24cu: goto label_23d24c;
        case 0x23d250u: goto label_23d250;
        case 0x23d254u: goto label_23d254;
        case 0x23d258u: goto label_23d258;
        case 0x23d25cu: goto label_23d25c;
        case 0x23d260u: goto label_23d260;
        case 0x23d264u: goto label_23d264;
        case 0x23d268u: goto label_23d268;
        case 0x23d26cu: goto label_23d26c;
        case 0x23d270u: goto label_23d270;
        case 0x23d274u: goto label_23d274;
        case 0x23d278u: goto label_23d278;
        case 0x23d27cu: goto label_23d27c;
        case 0x23d280u: goto label_23d280;
        case 0x23d284u: goto label_23d284;
        case 0x23d288u: goto label_23d288;
        case 0x23d28cu: goto label_23d28c;
        case 0x23d290u: goto label_23d290;
        case 0x23d294u: goto label_23d294;
        case 0x23d298u: goto label_23d298;
        case 0x23d29cu: goto label_23d29c;
        case 0x23d2a0u: goto label_23d2a0;
        case 0x23d2a4u: goto label_23d2a4;
        case 0x23d2a8u: goto label_23d2a8;
        case 0x23d2acu: goto label_23d2ac;
        case 0x23d2b0u: goto label_23d2b0;
        case 0x23d2b4u: goto label_23d2b4;
        case 0x23d2b8u: goto label_23d2b8;
        case 0x23d2bcu: goto label_23d2bc;
        case 0x23d2c0u: goto label_23d2c0;
        case 0x23d2c4u: goto label_23d2c4;
        case 0x23d2c8u: goto label_23d2c8;
        case 0x23d2ccu: goto label_23d2cc;
        case 0x23d2d0u: goto label_23d2d0;
        case 0x23d2d4u: goto label_23d2d4;
        case 0x23d2d8u: goto label_23d2d8;
        case 0x23d2dcu: goto label_23d2dc;
        case 0x23d2e0u: goto label_23d2e0;
        case 0x23d2e4u: goto label_23d2e4;
        case 0x23d2e8u: goto label_23d2e8;
        case 0x23d2ecu: goto label_23d2ec;
        case 0x23d2f0u: goto label_23d2f0;
        case 0x23d2f4u: goto label_23d2f4;
        case 0x23d2f8u: goto label_23d2f8;
        case 0x23d2fcu: goto label_23d2fc;
        case 0x23d300u: goto label_23d300;
        case 0x23d304u: goto label_23d304;
        case 0x23d308u: goto label_23d308;
        case 0x23d30cu: goto label_23d30c;
        case 0x23d310u: goto label_23d310;
        case 0x23d314u: goto label_23d314;
        case 0x23d318u: goto label_23d318;
        case 0x23d31cu: goto label_23d31c;
        case 0x23d320u: goto label_23d320;
        case 0x23d324u: goto label_23d324;
        case 0x23d328u: goto label_23d328;
        case 0x23d32cu: goto label_23d32c;
        case 0x23d330u: goto label_23d330;
        case 0x23d334u: goto label_23d334;
        case 0x23d338u: goto label_23d338;
        case 0x23d33cu: goto label_23d33c;
        case 0x23d340u: goto label_23d340;
        case 0x23d344u: goto label_23d344;
        case 0x23d348u: goto label_23d348;
        case 0x23d34cu: goto label_23d34c;
        case 0x23d350u: goto label_23d350;
        case 0x23d354u: goto label_23d354;
        case 0x23d358u: goto label_23d358;
        case 0x23d35cu: goto label_23d35c;
        case 0x23d360u: goto label_23d360;
        case 0x23d364u: goto label_23d364;
        case 0x23d368u: goto label_23d368;
        case 0x23d36cu: goto label_23d36c;
        case 0x23d370u: goto label_23d370;
        case 0x23d374u: goto label_23d374;
        case 0x23d378u: goto label_23d378;
        case 0x23d37cu: goto label_23d37c;
        case 0x23d380u: goto label_23d380;
        case 0x23d384u: goto label_23d384;
        case 0x23d388u: goto label_23d388;
        case 0x23d38cu: goto label_23d38c;
        case 0x23d390u: goto label_23d390;
        case 0x23d394u: goto label_23d394;
        case 0x23d398u: goto label_23d398;
        case 0x23d39cu: goto label_23d39c;
        case 0x23d3a0u: goto label_23d3a0;
        case 0x23d3a4u: goto label_23d3a4;
        case 0x23d3a8u: goto label_23d3a8;
        case 0x23d3acu: goto label_23d3ac;
        case 0x23d3b0u: goto label_23d3b0;
        case 0x23d3b4u: goto label_23d3b4;
        case 0x23d3b8u: goto label_23d3b8;
        case 0x23d3bcu: goto label_23d3bc;
        case 0x23d3c0u: goto label_23d3c0;
        case 0x23d3c4u: goto label_23d3c4;
        case 0x23d3c8u: goto label_23d3c8;
        case 0x23d3ccu: goto label_23d3cc;
        case 0x23d3d0u: goto label_23d3d0;
        case 0x23d3d4u: goto label_23d3d4;
        case 0x23d3d8u: goto label_23d3d8;
        case 0x23d3dcu: goto label_23d3dc;
        case 0x23d3e0u: goto label_23d3e0;
        case 0x23d3e4u: goto label_23d3e4;
        case 0x23d3e8u: goto label_23d3e8;
        case 0x23d3ecu: goto label_23d3ec;
        case 0x23d3f0u: goto label_23d3f0;
        case 0x23d3f4u: goto label_23d3f4;
        case 0x23d3f8u: goto label_23d3f8;
        case 0x23d3fcu: goto label_23d3fc;
        case 0x23d400u: goto label_23d400;
        case 0x23d404u: goto label_23d404;
        case 0x23d408u: goto label_23d408;
        case 0x23d40cu: goto label_23d40c;
        case 0x23d410u: goto label_23d410;
        case 0x23d414u: goto label_23d414;
        case 0x23d418u: goto label_23d418;
        case 0x23d41cu: goto label_23d41c;
        case 0x23d420u: goto label_23d420;
        case 0x23d424u: goto label_23d424;
        case 0x23d428u: goto label_23d428;
        case 0x23d42cu: goto label_23d42c;
        case 0x23d430u: goto label_23d430;
        case 0x23d434u: goto label_23d434;
        case 0x23d438u: goto label_23d438;
        case 0x23d43cu: goto label_23d43c;
        case 0x23d440u: goto label_23d440;
        case 0x23d444u: goto label_23d444;
        case 0x23d448u: goto label_23d448;
        case 0x23d44cu: goto label_23d44c;
        case 0x23d450u: goto label_23d450;
        case 0x23d454u: goto label_23d454;
        case 0x23d458u: goto label_23d458;
        case 0x23d45cu: goto label_23d45c;
        case 0x23d460u: goto label_23d460;
        case 0x23d464u: goto label_23d464;
        case 0x23d468u: goto label_23d468;
        case 0x23d46cu: goto label_23d46c;
        case 0x23d470u: goto label_23d470;
        case 0x23d474u: goto label_23d474;
        case 0x23d478u: goto label_23d478;
        case 0x23d47cu: goto label_23d47c;
        case 0x23d480u: goto label_23d480;
        case 0x23d484u: goto label_23d484;
        case 0x23d488u: goto label_23d488;
        case 0x23d48cu: goto label_23d48c;
        case 0x23d490u: goto label_23d490;
        case 0x23d494u: goto label_23d494;
        case 0x23d498u: goto label_23d498;
        case 0x23d49cu: goto label_23d49c;
        case 0x23d4a0u: goto label_23d4a0;
        case 0x23d4a4u: goto label_23d4a4;
        case 0x23d4a8u: goto label_23d4a8;
        case 0x23d4acu: goto label_23d4ac;
        case 0x23d4b0u: goto label_23d4b0;
        case 0x23d4b4u: goto label_23d4b4;
        case 0x23d4b8u: goto label_23d4b8;
        case 0x23d4bcu: goto label_23d4bc;
        case 0x23d4c0u: goto label_23d4c0;
        case 0x23d4c4u: goto label_23d4c4;
        case 0x23d4c8u: goto label_23d4c8;
        case 0x23d4ccu: goto label_23d4cc;
        case 0x23d4d0u: goto label_23d4d0;
        case 0x23d4d4u: goto label_23d4d4;
        case 0x23d4d8u: goto label_23d4d8;
        case 0x23d4dcu: goto label_23d4dc;
        case 0x23d4e0u: goto label_23d4e0;
        case 0x23d4e4u: goto label_23d4e4;
        case 0x23d4e8u: goto label_23d4e8;
        case 0x23d4ecu: goto label_23d4ec;
        case 0x23d4f0u: goto label_23d4f0;
        case 0x23d4f4u: goto label_23d4f4;
        case 0x23d4f8u: goto label_23d4f8;
        case 0x23d4fcu: goto label_23d4fc;
        case 0x23d500u: goto label_23d500;
        case 0x23d504u: goto label_23d504;
        case 0x23d508u: goto label_23d508;
        case 0x23d50cu: goto label_23d50c;
        case 0x23d510u: goto label_23d510;
        case 0x23d514u: goto label_23d514;
        case 0x23d518u: goto label_23d518;
        case 0x23d51cu: goto label_23d51c;
        case 0x23d520u: goto label_23d520;
        case 0x23d524u: goto label_23d524;
        case 0x23d528u: goto label_23d528;
        case 0x23d52cu: goto label_23d52c;
        case 0x23d530u: goto label_23d530;
        case 0x23d534u: goto label_23d534;
        case 0x23d538u: goto label_23d538;
        case 0x23d53cu: goto label_23d53c;
        case 0x23d540u: goto label_23d540;
        case 0x23d544u: goto label_23d544;
        case 0x23d548u: goto label_23d548;
        case 0x23d54cu: goto label_23d54c;
        case 0x23d550u: goto label_23d550;
        case 0x23d554u: goto label_23d554;
        case 0x23d558u: goto label_23d558;
        case 0x23d55cu: goto label_23d55c;
        case 0x23d560u: goto label_23d560;
        case 0x23d564u: goto label_23d564;
        case 0x23d568u: goto label_23d568;
        case 0x23d56cu: goto label_23d56c;
        case 0x23d570u: goto label_23d570;
        case 0x23d574u: goto label_23d574;
        case 0x23d578u: goto label_23d578;
        case 0x23d57cu: goto label_23d57c;
        case 0x23d580u: goto label_23d580;
        case 0x23d584u: goto label_23d584;
        case 0x23d588u: goto label_23d588;
        case 0x23d58cu: goto label_23d58c;
        case 0x23d590u: goto label_23d590;
        case 0x23d594u: goto label_23d594;
        case 0x23d598u: goto label_23d598;
        case 0x23d59cu: goto label_23d59c;
        case 0x23d5a0u: goto label_23d5a0;
        case 0x23d5a4u: goto label_23d5a4;
        case 0x23d5a8u: goto label_23d5a8;
        case 0x23d5acu: goto label_23d5ac;
        case 0x23d5b0u: goto label_23d5b0;
        case 0x23d5b4u: goto label_23d5b4;
        case 0x23d5b8u: goto label_23d5b8;
        case 0x23d5bcu: goto label_23d5bc;
        case 0x23d5c0u: goto label_23d5c0;
        case 0x23d5c4u: goto label_23d5c4;
        case 0x23d5c8u: goto label_23d5c8;
        case 0x23d5ccu: goto label_23d5cc;
        case 0x23d5d0u: goto label_23d5d0;
        case 0x23d5d4u: goto label_23d5d4;
        case 0x23d5d8u: goto label_23d5d8;
        case 0x23d5dcu: goto label_23d5dc;
        case 0x23d5e0u: goto label_23d5e0;
        case 0x23d5e4u: goto label_23d5e4;
        case 0x23d5e8u: goto label_23d5e8;
        case 0x23d5ecu: goto label_23d5ec;
        case 0x23d5f0u: goto label_23d5f0;
        case 0x23d5f4u: goto label_23d5f4;
        case 0x23d5f8u: goto label_23d5f8;
        case 0x23d5fcu: goto label_23d5fc;
        case 0x23d600u: goto label_23d600;
        case 0x23d604u: goto label_23d604;
        case 0x23d608u: goto label_23d608;
        case 0x23d60cu: goto label_23d60c;
        case 0x23d610u: goto label_23d610;
        case 0x23d614u: goto label_23d614;
        case 0x23d618u: goto label_23d618;
        case 0x23d61cu: goto label_23d61c;
        case 0x23d620u: goto label_23d620;
        case 0x23d624u: goto label_23d624;
        case 0x23d628u: goto label_23d628;
        case 0x23d62cu: goto label_23d62c;
        case 0x23d630u: goto label_23d630;
        case 0x23d634u: goto label_23d634;
        case 0x23d638u: goto label_23d638;
        case 0x23d63cu: goto label_23d63c;
        case 0x23d640u: goto label_23d640;
        case 0x23d644u: goto label_23d644;
        case 0x23d648u: goto label_23d648;
        case 0x23d64cu: goto label_23d64c;
        case 0x23d650u: goto label_23d650;
        case 0x23d654u: goto label_23d654;
        case 0x23d658u: goto label_23d658;
        case 0x23d65cu: goto label_23d65c;
        case 0x23d660u: goto label_23d660;
        case 0x23d664u: goto label_23d664;
        case 0x23d668u: goto label_23d668;
        case 0x23d66cu: goto label_23d66c;
        case 0x23d670u: goto label_23d670;
        case 0x23d674u: goto label_23d674;
        case 0x23d678u: goto label_23d678;
        case 0x23d67cu: goto label_23d67c;
        case 0x23d680u: goto label_23d680;
        case 0x23d684u: goto label_23d684;
        case 0x23d688u: goto label_23d688;
        case 0x23d68cu: goto label_23d68c;
        case 0x23d690u: goto label_23d690;
        case 0x23d694u: goto label_23d694;
        case 0x23d698u: goto label_23d698;
        case 0x23d69cu: goto label_23d69c;
        case 0x23d6a0u: goto label_23d6a0;
        case 0x23d6a4u: goto label_23d6a4;
        case 0x23d6a8u: goto label_23d6a8;
        case 0x23d6acu: goto label_23d6ac;
        case 0x23d6b0u: goto label_23d6b0;
        case 0x23d6b4u: goto label_23d6b4;
        case 0x23d6b8u: goto label_23d6b8;
        case 0x23d6bcu: goto label_23d6bc;
        case 0x23d6c0u: goto label_23d6c0;
        case 0x23d6c4u: goto label_23d6c4;
        case 0x23d6c8u: goto label_23d6c8;
        case 0x23d6ccu: goto label_23d6cc;
        default: break;
    }

    ctx->pc = 0x23c9b8u;

label_23c9b8:
    // 0x23c9b8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x23c9b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_23c9bc:
    // 0x23c9bc: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x23c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_23c9c0:
    // 0x23c9c0: 0xffb20160  sd          $s2, 0x160($sp)
    ctx->pc = 0x23c9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 18));
label_23c9c4:
    // 0x23c9c4: 0xffb00150  sd          $s0, 0x150($sp)
    ctx->pc = 0x23c9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 16));
label_23c9c8:
    // 0x23c9c8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x23c9c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_23c9cc:
    // 0x23c9cc: 0xffb10158  sd          $s1, 0x158($sp)
    ctx->pc = 0x23c9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 17));
label_23c9d0:
    // 0x23c9d0: 0xffb30168  sd          $s3, 0x168($sp)
    ctx->pc = 0x23c9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 19));
label_23c9d4:
    // 0x23c9d4: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x23c9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
label_23c9d8:
    // 0x23c9d8: 0xffb50178  sd          $s5, 0x178($sp)
    ctx->pc = 0x23c9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 376), GPR_U64(ctx, 21));
label_23c9dc:
    // 0x23c9dc: 0xffb60180  sd          $s6, 0x180($sp)
    ctx->pc = 0x23c9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 22));
label_23c9e0:
    // 0x23c9e0: 0xffb70188  sd          $s7, 0x188($sp)
    ctx->pc = 0x23c9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 392), GPR_U64(ctx, 23));
label_23c9e4:
    // 0x23c9e4: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x23c9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
label_23c9e8:
    // 0x23c9e8: 0xffbf0198  sd          $ra, 0x198($sp)
    ctx->pc = 0x23c9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 408), GPR_U64(ctx, 31));
label_23c9ec:
    // 0x23c9ec: 0xe7b901c8  swc1        $f25, 0x1C8($sp)
    ctx->pc = 0x23c9ecu;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_23c9f0:
    // 0x23c9f0: 0xe7b801c0  swc1        $f24, 0x1C0($sp)
    ctx->pc = 0x23c9f0u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_23c9f4:
    // 0x23c9f4: 0xe7b701b8  swc1        $f23, 0x1B8($sp)
    ctx->pc = 0x23c9f4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_23c9f8:
    // 0x23c9f8: 0xe7b601b0  swc1        $f22, 0x1B0($sp)
    ctx->pc = 0x23c9f8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_23c9fc:
    // 0x23c9fc: 0xe7b501a8  swc1        $f21, 0x1A8($sp)
    ctx->pc = 0x23c9fcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 424), bits); }
label_23ca00:
    // 0x23ca00: 0xe7b401a0  swc1        $f20, 0x1A0($sp)
    ctx->pc = 0x23ca00u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
label_23ca04:
    // 0x23ca04: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x23ca04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_23ca08:
    // 0x23ca08: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23ca08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23ca0c:
    // 0x23ca0c: 0x1043031e  beq         $v0, $v1, . + 4 + (0x31E << 2)
label_23ca10:
    if (ctx->pc == 0x23CA10u) {
        ctx->pc = 0x23CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA0Cu;
        // 0x23ca10: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA14u;
        goto label_23ca14;
    }
    ctx->pc = 0x23CA0Cu;
    {
        const bool branch_taken_0x23ca0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x23CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA0Cu;
        // 0x23ca10: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca0c) {
            ctx->pc = 0x23D688u;
            goto label_23d688;
        }
    }
    ctx->pc = 0x23CA14u;
label_23ca14:
    // 0x23ca14: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x23ca14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
label_23ca18:
    // 0x23ca18: 0x1460031c  bnez        $v1, . + 4 + (0x31C << 2)
label_23ca1c:
    if (ctx->pc == 0x23CA1Cu) {
        ctx->pc = 0x23CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA18u;
        // 0x23ca1c: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA20u;
        goto label_23ca20;
    }
    ctx->pc = 0x23CA18u;
    {
        const bool branch_taken_0x23ca18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA18u;
        // 0x23ca1c: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca18) {
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23CA20u;
label_23ca20:
    // 0x23ca20: 0x8e420370  lw          $v0, 0x370($s2)
    ctx->pc = 0x23ca20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
label_23ca24:
    // 0x23ca24: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x23ca24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_23ca28:
    // 0x23ca28: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23ca28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23ca2c:
    // 0x23ca2c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_23ca30:
    if (ctx->pc == 0x23CA30u) {
        ctx->pc = 0x23CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA2Cu;
        // 0x23ca30: 0xc4749700  lwc1        $f20, -0x6900($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CA34u;
        goto label_23ca34;
    }
    ctx->pc = 0x23CA2Cu;
    {
        const bool branch_taken_0x23ca2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CA2Cu;
        // 0x23ca30: 0xc4749700  lwc1        $f20, -0x6900($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294940416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ca2c) {
            ctx->pc = 0x23CA48u;
            goto label_23ca48;
        }
    }
    ctx->pc = 0x23CA34u;
label_23ca34:
    // 0x23ca34: 0x3c013e4c  lui         $at, 0x3E4C
    ctx->pc = 0x23ca34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15948 << 16));
label_23ca38:
    // 0x23ca38: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x23ca38u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_23ca3c:
    // 0x23ca3c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ca3cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23ca40:
    // 0x23ca40: 0x0  nop
    ctx->pc = 0x23ca40u;
    // NOP
label_23ca44:
    // 0x23ca44: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x23ca44u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_23ca48:
    // 0x23ca48: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x23ca48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_23ca4c:
    // 0x23ca4c: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x23ca4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23ca50:
    // 0x23ca50: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x23ca50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_23ca54:
    // 0x23ca54: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ca54u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23ca58:
    // 0x23ca58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23ca58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23ca5c:
    // 0x23ca5c: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x23ca5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_23ca60:
    // 0x23ca60: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x23ca60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
label_23ca64:
    // 0x23ca64: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_23ca68:
    // 0x23ca68: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x23ca68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_23ca6c:
    // 0x23ca6c: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x23ca6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
label_23ca70:
    // 0x23ca70: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23ca70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23ca74:
    // 0x23ca74: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x23ca74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_23ca78:
    // 0x23ca78: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23ca78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23ca7c:
    // 0x23ca7c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x23ca7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_23ca80:
    // 0x23ca80: 0xc7a30020  lwc1        $f3, 0x20($sp)
    ctx->pc = 0x23ca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23ca84:
    // 0x23ca84: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x23ca84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_23ca88:
    // 0x23ca88: 0xc7a00024  lwc1        $f0, 0x24($sp)
    ctx->pc = 0x23ca88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23ca8c:
    // 0x23ca8c: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x23ca8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ca90:
    // 0x23ca90: 0xc7a2002c  lwc1        $f2, 0x2C($sp)
    ctx->pc = 0x23ca90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ca94:
    // 0x23ca94: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x23ca94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_23ca98:
    // 0x23ca98: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x23ca98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_23ca9c:
    // 0x23ca9c: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x23ca9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_23caa0:
    // 0x23caa0: 0xc0f6a96  jal         func_3DAA58
label_23caa4:
    if (ctx->pc == 0x23CAA4u) {
        ctx->pc = 0x23CAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAA0u;
        // 0x23caa4: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAA8u;
        goto label_23caa8;
    }
    ctx->pc = 0x23CAA0u;
    SET_GPR_U32(ctx, 31, 0x23CAA8u);
    ctx->pc = 0x23CAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CAA0u;
    // 0x23caa4: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23CAA0u, 0x23CAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CAA8u;
label_23caa8:
    // 0x23caa8: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x23caa8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_23caac:
    // 0x23caac: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x23caacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23cab0:
    // 0x23cab0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x23cab0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
label_23cab4:
    // 0x23cab4: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x23cab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
label_23cab8:
    // 0x23cab8: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x23cab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_23cabc:
    // 0x23cabc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x23cabcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23cac0:
    // 0x23cac0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x23cac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23cac4:
    // 0x23cac4: 0xc7a20048  lwc1        $f2, 0x48($sp)
    ctx->pc = 0x23cac4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cac8:
    // 0x23cac8: 0xc7a3004c  lwc1        $f3, 0x4C($sp)
    ctx->pc = 0x23cac8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23cacc:
    // 0x23cacc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x23caccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_23cad0:
    // 0x23cad0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x23cad0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_23cad4:
    // 0x23cad4: 0xe7a20018  swc1        $f2, 0x18($sp)
    ctx->pc = 0x23cad4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_23cad8:
    // 0x23cad8: 0xe7a3001c  swc1        $f3, 0x1C($sp)
    ctx->pc = 0x23cad8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_23cadc:
    // 0x23cadc: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x23cadcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_23cae0:
    // 0x23cae0: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x23cae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
label_23cae4:
    // 0x23cae4: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x23cae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_23cae8:
    // 0x23cae8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23cae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23caec:
    // 0x23caec: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23caf0:
    if (ctx->pc == 0x23CAF0u) {
        ctx->pc = 0x23CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CAECu;
        // 0x23caf0: 0x8e420370  lw          $v0, 0x370($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CAF4u;
        goto label_23caf4;
    }
    ctx->pc = 0x23CAECu;
    {
        const bool branch_taken_0x23caec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23caec) {
            ctx->pc = 0x23CAF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CAECu;
            // 0x23caf0: 0x8e420370  lw          $v0, 0x370($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 880)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CB10u;
            goto label_23cb10;
        }
    }
    ctx->pc = 0x23CAF4u;
label_23caf4:
    // 0x23caf4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x23caf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_23caf8:
    // 0x23caf8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23caf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23cafc:
    // 0x23cafc: 0x34a5ffef  ori         $a1, $a1, 0xFFEF
    ctx->pc = 0x23cafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65519);
label_23cb00:
    // 0x23cb00: 0xc07a592  jal         func_1E9648
label_23cb04:
    if (ctx->pc == 0x23CB04u) {
        ctx->pc = 0x23CB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB00u;
        // 0x23cb04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB08u;
        goto label_23cb08;
    }
    ctx->pc = 0x23CB00u;
    SET_GPR_U32(ctx, 31, 0x23CB08u);
    ctx->pc = 0x23CB04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB00u;
    // 0x23cb04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x23CB00u, 0x23CB08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB08u;
label_23cb08:
    // 0x23cb08: 0x10000016  b           . + 4 + (0x16 << 2)
label_23cb0c:
    if (ctx->pc == 0x23CB0Cu) {
        ctx->pc = 0x23CB10u;
        goto label_23cb10;
    }
    ctx->pc = 0x23CB08u;
    {
        const bool branch_taken_0x23cb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb08) {
            ctx->pc = 0x23CB64u;
            goto label_23cb64;
        }
    }
    ctx->pc = 0x23CB10u;
label_23cb10:
    // 0x23cb10: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x23cb10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_23cb14:
    // 0x23cb14: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_23cb18:
    if (ctx->pc == 0x23CB18u) {
        ctx->pc = 0x23CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB14u;
        // 0x23cb18: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB1Cu;
        goto label_23cb1c;
    }
    ctx->pc = 0x23CB14u;
    {
        const bool branch_taken_0x23cb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB14u;
        // 0x23cb18: 0x27b00080  addiu       $s0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cb14) {
            ctx->pc = 0x23CB50u;
            goto label_23cb50;
        }
    }
    ctx->pc = 0x23CB1Cu;
label_23cb1c:
    // 0x23cb1c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23cb1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23cb20:
    // 0x23cb20: 0xc076e46  jal         func_1DB918
label_23cb24:
    if (ctx->pc == 0x23CB24u) {
        ctx->pc = 0x23CB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB20u;
        // 0x23cb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB28u;
        goto label_23cb28;
    }
    ctx->pc = 0x23CB20u;
    SET_GPR_U32(ctx, 31, 0x23CB28u);
    ctx->pc = 0x23CB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB20u;
    // 0x23cb24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x23CB20u, 0x23CB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB28u;
label_23cb28:
    // 0x23cb28: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x23cb28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_23cb2c:
    // 0x23cb2c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23cb2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23cb30:
    // 0x23cb30: 0x34a5fdef  ori         $a1, $a1, 0xFDEF
    ctx->pc = 0x23cb30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65007);
label_23cb34:
    // 0x23cb34: 0xc07a592  jal         func_1E9648
label_23cb38:
    if (ctx->pc == 0x23CB38u) {
        ctx->pc = 0x23CB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB34u;
        // 0x23cb38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB3Cu;
        goto label_23cb3c;
    }
    ctx->pc = 0x23CB34u;
    SET_GPR_U32(ctx, 31, 0x23CB3Cu);
    ctx->pc = 0x23CB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB34u;
    // 0x23cb38: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x23CB34u, 0x23CB3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB3Cu;
label_23cb3c:
    // 0x23cb3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23cb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23cb40:
    // 0x23cb40: 0xc076e38  jal         func_1DB8E0
label_23cb44:
    if (ctx->pc == 0x23CB44u) {
        ctx->pc = 0x23CB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB40u;
        // 0x23cb44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB48u;
        goto label_23cb48;
    }
    ctx->pc = 0x23CB40u;
    SET_GPR_U32(ctx, 31, 0x23CB48u);
    ctx->pc = 0x23CB44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB40u;
    // 0x23cb44: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x23CB40u, 0x23CB48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB48u;
label_23cb48:
    // 0x23cb48: 0x10000006  b           . + 4 + (0x6 << 2)
label_23cb4c:
    if (ctx->pc == 0x23CB4Cu) {
        ctx->pc = 0x23CB50u;
        goto label_23cb50;
    }
    ctx->pc = 0x23CB48u;
    {
        const bool branch_taken_0x23cb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cb48) {
            ctx->pc = 0x23CB64u;
            goto label_23cb64;
        }
    }
    ctx->pc = 0x23CB50u;
label_23cb50:
    // 0x23cb50: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x23cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_23cb54:
    // 0x23cb54: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x23cb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_23cb58:
    // 0x23cb58: 0x34a5fdff  ori         $a1, $a1, 0xFDFF
    ctx->pc = 0x23cb58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65023);
label_23cb5c:
    // 0x23cb5c: 0xc07a592  jal         func_1E9648
label_23cb60:
    if (ctx->pc == 0x23CB60u) {
        ctx->pc = 0x23CB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB5Cu;
        // 0x23cb60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB64u;
        goto label_23cb64;
    }
    ctx->pc = 0x23CB5Cu;
    SET_GPR_U32(ctx, 31, 0x23CB64u);
    ctx->pc = 0x23CB60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB5Cu;
    // 0x23cb60: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x23CB5Cu, 0x23CB64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB64u;
label_23cb64:
    // 0x23cb64: 0x4480c800  mtc1        $zero, $f25
    ctx->pc = 0x23cb64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[25], &bits, sizeof(bits)); }
label_23cb68:
    // 0x23cb68: 0xc0f6a96  jal         func_3DAA58
label_23cb6c:
    if (ctx->pc == 0x23CB6Cu) {
        ctx->pc = 0x23CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB68u;
        // 0x23cb6c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB70u;
        goto label_23cb70;
    }
    ctx->pc = 0x23CB68u;
    SET_GPR_U32(ctx, 31, 0x23CB70u);
    ctx->pc = 0x23CB6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB68u;
    // 0x23cb6c: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23CB68u, 0x23CB70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB70u;
label_23cb70:
    // 0x23cb70: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x23cb70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cb74:
    // 0x23cb74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x23cb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23cb78:
    // 0x23cb78: 0xc0f6a96  jal         func_3DAA58
label_23cb7c:
    if (ctx->pc == 0x23CB7Cu) {
        ctx->pc = 0x23CB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CB78u;
        // 0x23cb7c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CB80u;
        goto label_23cb80;
    }
    ctx->pc = 0x23CB78u;
    SET_GPR_U32(ctx, 31, 0x23CB80u);
    ctx->pc = 0x23CB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CB78u;
    // 0x23cb7c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23CB78u, 0x23CB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CB80u;
label_23cb80:
    // 0x23cb80: 0x8e440104  lw          $a0, 0x104($s2)
    ctx->pc = 0x23cb80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_23cb84:
    // 0x23cb84: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x23cb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
label_23cb88:
    // 0x23cb88: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x23cb88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_23cb8c:
    // 0x23cb8c: 0x8c662b1c  lw          $a2, 0x2B1C($v1)
    ctx->pc = 0x23cb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11036)));
label_23cb90:
    // 0x23cb90: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x23cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cb94:
    // 0x23cb94: 0x60f02d  daddu       $fp, $v1, $zero
    ctx->pc = 0x23cb94u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_23cb98:
    // 0x23cb98: 0xc4b6970c  lwc1        $f22, -0x68F4($a1)
    ctx->pc = 0x23cb98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294940428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_23cb9c:
    // 0x23cb9c: 0xc4410060  lwc1        $f1, 0x60($v0)
    ctx->pc = 0x23cb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23cba0:
    // 0x23cba0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x23cba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_23cba4:
    // 0x23cba4: 0xe7a10090  swc1        $f1, 0x90($sp)
    ctx->pc = 0x23cba4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_23cba8:
    // 0x23cba8: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x23cba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23cbac:
    // 0x23cbac: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x23cbacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
label_23cbb0:
    // 0x23cbb0: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x23cbb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23cbb4:
    // 0x23cbb4: 0xe7a10098  swc1        $f1, 0x98($sp)
    ctx->pc = 0x23cbb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_23cbb8:
    // 0x23cbb8: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x23cbb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23cbbc:
    // 0x23cbbc: 0x10c0016a  beqz        $a2, . + 4 + (0x16A << 2)
label_23cbc0:
    if (ctx->pc == 0x23CBC0u) {
        ctx->pc = 0x23CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBBCu;
        // 0x23cbc0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CBC4u;
        goto label_23cbc4;
    }
    ctx->pc = 0x23CBBCu;
    {
        const bool branch_taken_0x23cbbc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CBBCu;
        // 0x23cbc0: 0xe7a0009c  swc1        $f0, 0x9C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cbbc) {
            ctx->pc = 0x23D168u;
            goto label_23d168;
        }
    }
    ctx->pc = 0x23CBC4u;
label_23cbc4:
    // 0x23cbc4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23cbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_23cbc8:
    // 0x23cbc8: 0x4481c000  mtc1        $at, $f24
    ctx->pc = 0x23cbc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[24], &bits, sizeof(bits)); }
label_23cbcc:
    // 0x23cbcc: 0x3c170004  lui         $s7, 0x4
    ctx->pc = 0x23cbccu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4 << 16));
label_23cbd0:
    // 0x23cbd0: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x23cbd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_23cbd4:
    // 0x23cbd4: 0x4481b800  mtc1        $at, $f23
    ctx->pc = 0x23cbd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[23], &bits, sizeof(bits)); }
label_23cbd8:
    // 0x23cbd8: 0x27b600a0  addiu       $s6, $sp, 0xA0
    ctx->pc = 0x23cbd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_23cbdc:
    // 0x23cbdc: 0x27b500d0  addiu       $s5, $sp, 0xD0
    ctx->pc = 0x23cbdcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_23cbe0:
    // 0x23cbe0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x23cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_23cbe4:
    // 0x23cbe4: 0x0  nop
    ctx->pc = 0x23cbe4u;
    // NOP
label_23cbe8:
    // 0x23cbe8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x23cbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_23cbec:
    // 0x23cbec: 0x8c442b20  lw          $a0, 0x2B20($v0)
    ctx->pc = 0x23cbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11040)));
label_23cbf0:
    // 0x23cbf0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x23cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_23cbf4:
    // 0x23cbf4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x23cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23cbf8:
    // 0x23cbf8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x23cbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_23cbfc:
    // 0x23cbfc: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x23cbfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_23cc00:
    // 0x23cc00: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_23cc04:
    if (ctx->pc == 0x23CC04u) {
        ctx->pc = 0x23CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC00u;
        // 0x23cc04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC08u;
        goto label_23cc08;
    }
    ctx->pc = 0x23CC00u;
    {
        const bool branch_taken_0x23cc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC00u;
        // 0x23cc04: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc00) {
            ctx->pc = 0x23CC0Cu;
            goto label_23cc0c;
        }
    }
    ctx->pc = 0x23CC08u;
label_23cc08:
    // 0x23cc08: 0x8c710034  lw          $s1, 0x34($v1)
    ctx->pc = 0x23cc08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_23cc0c:
    // 0x23cc0c: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x23cc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_23cc10:
    // 0x23cc10: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23cc10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23cc14:
    // 0x23cc14: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_23cc18:
    if (ctx->pc == 0x23CC18u) {
        ctx->pc = 0x23CC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC14u;
        // 0x23cc18: 0x8e250104  lw          $a1, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC1Cu;
        goto label_23cc1c;
    }
    ctx->pc = 0x23CC14u;
    {
        const bool branch_taken_0x23cc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cc14) {
            ctx->pc = 0x23CC18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC14u;
            // 0x23cc18: 0x8e250104  lw          $a1, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CC54u;
            goto label_23cc54;
        }
    }
    ctx->pc = 0x23CC1Cu;
label_23cc1c:
    // 0x23cc1c: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23cc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23cc20:
    // 0x23cc20: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x23cc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_23cc24:
    // 0x23cc24: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x23cc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
label_23cc28:
    // 0x23cc28: 0x1440014b  bnez        $v0, . + 4 + (0x14B << 2)
label_23cc2c:
    if (ctx->pc == 0x23CC2Cu) {
        ctx->pc = 0x23CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC28u;
        // 0x23cc2c: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC30u;
        goto label_23cc30;
    }
    ctx->pc = 0x23CC28u;
    {
        const bool branch_taken_0x23cc28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC28u;
        // 0x23cc2c: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc28) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CC30u;
label_23cc30:
    // 0x23cc30: 0x8e22036c  lw          $v0, 0x36C($s1)
    ctx->pc = 0x23cc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 876)));
label_23cc34:
    // 0x23cc34: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x23cc34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_23cc38:
    // 0x23cc38: 0x14400147  bnez        $v0, . + 4 + (0x147 << 2)
label_23cc3c:
    if (ctx->pc == 0x23CC3Cu) {
        ctx->pc = 0x23CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC38u;
        // 0x23cc3c: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC40u;
        goto label_23cc40;
    }
    ctx->pc = 0x23CC38u;
    {
        const bool branch_taken_0x23cc38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC38u;
        // 0x23cc3c: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc38) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CC40u;
label_23cc40:
    // 0x23cc40: 0x8e220370  lw          $v0, 0x370($s1)
    ctx->pc = 0x23cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 880)));
label_23cc44:
    // 0x23cc44: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23cc44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23cc48:
    // 0x23cc48: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
label_23cc4c:
    if (ctx->pc == 0x23CC4Cu) {
        ctx->pc = 0x23CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC48u;
        // 0x23cc4c: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC50u;
        goto label_23cc50;
    }
    ctx->pc = 0x23CC48u;
    {
        const bool branch_taken_0x23cc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC48u;
        // 0x23cc4c: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc48) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CC50u;
label_23cc50:
    // 0x23cc50: 0x8e250104  lw          $a1, 0x104($s1)
    ctx->pc = 0x23cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23cc54:
    // 0x23cc54: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x23cc54u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_23cc58:
    // 0x23cc58: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x23cc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_23cc5c:
    // 0x23cc5c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23cc5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23cc60:
    // 0x23cc60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23cc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23cc64:
    // 0x23cc64: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x23cc64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23cc68:
    // 0x23cc68: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x23cc68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23cc6c:
    // 0x23cc6c: 0xc4c29704  lwc1        $f2, -0x68FC($a2)
    ctx->pc = 0x23cc6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294940420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cc70:
    // 0x23cc70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x23cc70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_23cc74:
    // 0x23cc74: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x23cc74u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_23cc78:
    // 0x23cc78: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x23cc78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23cc7c:
    // 0x23cc7c: 0x0  nop
    ctx->pc = 0x23cc7cu;
    // NOP
label_23cc80:
    // 0x23cc80: 0x45010135  bc1t        . + 4 + (0x135 << 2)
label_23cc84:
    if (ctx->pc == 0x23CC84u) {
        ctx->pc = 0x23CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC80u;
        // 0x23cc84: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC88u;
        goto label_23cc88;
    }
    ctx->pc = 0x23CC80u;
    {
        const bool branch_taken_0x23cc80 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC80u;
        // 0x23cc84: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cc80) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CC88u;
label_23cc88:
    // 0x23cc88: 0x9222036c  lbu         $v0, 0x36C($s1)
    ctx->pc = 0x23cc88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 876)));
label_23cc8c:
    // 0x23cc8c: 0x211fa  dsrl        $v0, $v0, 7
    ctx->pc = 0x23cc8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 7);
label_23cc90:
    // 0x23cc90: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_23cc94:
    if (ctx->pc == 0x23CC94u) {
        ctx->pc = 0x23CC94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CC90u;
        // 0x23cc94: 0x92220371  lbu         $v0, 0x371($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 881)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CC98u;
        goto label_23cc98;
    }
    ctx->pc = 0x23CC90u;
    {
        const bool branch_taken_0x23cc90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cc90) {
            ctx->pc = 0x23CC94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CC90u;
            // 0x23cc94: 0x92220371  lbu         $v0, 0x371($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 881)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CCC4u;
            goto label_23ccc4;
        }
    }
    ctx->pc = 0x23CC98u;
label_23cc98:
    // 0x23cc98: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23cc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23cc9c:
    // 0x23cc9c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23cc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23cca0:
    // 0x23cca0: 0x1440012d  bnez        $v0, . + 4 + (0x12D << 2)
label_23cca4:
    if (ctx->pc == 0x23CCA4u) {
        ctx->pc = 0x23CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA0u;
        // 0x23cca4: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCA8u;
        goto label_23cca8;
    }
    ctx->pc = 0x23CCA0u;
    {
        const bool branch_taken_0x23cca0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCA0u;
        // 0x23cca4: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cca0) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CCA8u;
label_23cca8:
    // 0x23cca8: 0x8e2211c0  lw          $v0, 0x11C0($s1)
    ctx->pc = 0x23cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4544)));
label_23ccac:
    // 0x23ccac: 0x571024  and         $v0, $v0, $s7
    ctx->pc = 0x23ccacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 23));
label_23ccb0:
    // 0x23ccb0: 0x14570129  bne         $v0, $s7, . + 4 + (0x129 << 2)
label_23ccb4:
    if (ctx->pc == 0x23CCB4u) {
        ctx->pc = 0x23CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCB0u;
        // 0x23ccb4: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCB8u;
        goto label_23ccb8;
    }
    ctx->pc = 0x23CCB0u;
    {
        const bool branch_taken_0x23ccb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        ctx->pc = 0x23CCB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCB0u;
        // 0x23ccb4: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccb0) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CCB8u;
label_23ccb8:
    // 0x23ccb8: 0xc0bb688  jal         func_2EDA20
label_23ccbc:
    if (ctx->pc == 0x23CCBCu) {
        ctx->pc = 0x23CCBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCB8u;
        // 0x23ccbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCC0u;
        goto label_23ccc0;
    }
    ctx->pc = 0x23CCB8u;
    SET_GPR_U32(ctx, 31, 0x23CCC0u);
    ctx->pc = 0x23CCBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23CCB8u;
    // 0x23ccbc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDA20u, 0x23CCB8u, 0x23CCC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CCC0u;
label_23ccc0:
    // 0x23ccc0: 0x92220371  lbu         $v0, 0x371($s1)
    ctx->pc = 0x23ccc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 881)));
label_23ccc4:
    // 0x23ccc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23ccc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_23ccc8:
    // 0x23ccc8: 0x14400123  bnez        $v0, . + 4 + (0x123 << 2)
label_23cccc:
    if (ctx->pc == 0x23CCCCu) {
        ctx->pc = 0x23CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC8u;
        // 0x23cccc: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCD0u;
        goto label_23ccd0;
    }
    ctx->pc = 0x23CCC8u;
    {
        const bool branch_taken_0x23ccc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CCCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCC8u;
        // 0x23cccc: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccc8) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CCD0u;
label_23ccd0:
    // 0x23ccd0: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
label_23ccd4:
    if (ctx->pc == 0x23CCD4u) {
        ctx->pc = 0x23CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCD0u;
        // 0x23ccd4: 0x8e250334  lw          $a1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCD8u;
        goto label_23ccd8;
    }
    ctx->pc = 0x23CCD0u;
    {
        const bool branch_taken_0x23ccd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CCD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCD0u;
        // 0x23ccd4: 0x8e250334  lw          $a1, 0x334($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccd0) {
            ctx->pc = 0x23CD1Cu;
            goto label_23cd1c;
        }
    }
    ctx->pc = 0x23CCD8u;
label_23ccd8:
    // 0x23ccd8: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23ccd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23ccdc:
    // 0x23ccdc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23ccdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23cce0:
    // 0x23cce0: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_23cce4:
    if (ctx->pc == 0x23CCE4u) {
        ctx->pc = 0x23CCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCE0u;
        // 0x23cce4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCE8u;
        goto label_23cce8;
    }
    ctx->pc = 0x23CCE0u;
    {
        const bool branch_taken_0x23cce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cce0) {
            ctx->pc = 0x23CCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CCE0u;
            // 0x23cce4: 0x8e230218  lw          $v1, 0x218($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD20u;
            goto label_23cd20;
        }
    }
    ctx->pc = 0x23CCE8u;
label_23cce8:
    // 0x23cce8: 0x8ca30150  lw          $v1, 0x150($a1)
    ctx->pc = 0x23cce8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_23ccec:
    // 0x23ccec: 0x2462ffbd  addiu       $v0, $v1, -0x43
    ctx->pc = 0x23ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967229));
label_23ccf0:
    // 0x23ccf0: 0x2c420005  sltiu       $v0, $v0, 0x5
    ctx->pc = 0x23ccf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_23ccf4:
    // 0x23ccf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_23ccf8:
    if (ctx->pc == 0x23CCF8u) {
        ctx->pc = 0x23CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF4u;
        // 0x23ccf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CCFCu;
        goto label_23ccfc;
    }
    ctx->pc = 0x23CCF4u;
    {
        const bool branch_taken_0x23ccf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CCF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CCF4u;
        // 0x23ccf8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ccf4) {
            ctx->pc = 0x23CD10u;
            goto label_23cd10;
        }
    }
    ctx->pc = 0x23CCFCu;
label_23ccfc:
    // 0x23ccfc: 0x24020049  addiu       $v0, $zero, 0x49
    ctx->pc = 0x23ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_23cd00:
    // 0x23cd00: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23cd04:
    if (ctx->pc == 0x23CD04u) {
        ctx->pc = 0x23CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD00u;
        // 0x23cd04: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD08u;
        goto label_23cd08;
    }
    ctx->pc = 0x23CD00u;
    {
        const bool branch_taken_0x23cd00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD00u;
        // 0x23cd04: 0x2402004a  addiu       $v0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd00) {
            ctx->pc = 0x23CD10u;
            goto label_23cd10;
        }
    }
    ctx->pc = 0x23CD08u;
label_23cd08:
    // 0x23cd08: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23cd0c:
    if (ctx->pc == 0x23CD0Cu) {
        ctx->pc = 0x23CD10u;
        goto label_23cd10;
    }
    ctx->pc = 0x23CD08u;
    {
        const bool branch_taken_0x23cd08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23cd08) {
            ctx->pc = 0x23CD14u;
            goto label_23cd14;
        }
    }
    ctx->pc = 0x23CD10u;
label_23cd10:
    // 0x23cd10: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x23cd10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23cd14:
    // 0x23cd14: 0x14800110  bnez        $a0, . + 4 + (0x110 << 2)
label_23cd18:
    if (ctx->pc == 0x23CD18u) {
        ctx->pc = 0x23CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD14u;
        // 0x23cd18: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD1Cu;
        goto label_23cd1c;
    }
    ctx->pc = 0x23CD14u;
    {
        const bool branch_taken_0x23cd14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD14u;
        // 0x23cd18: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd14) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CD1Cu;
label_23cd1c:
    // 0x23cd1c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x23cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_23cd20:
    // 0x23cd20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x23cd20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23cd24:
    // 0x23cd24: 0x8cb00150  lw          $s0, 0x150($a1)
    ctx->pc = 0x23cd24u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 336)));
label_23cd28:
    // 0x23cd28: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23cd28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23cd2c:
    // 0x23cd2c: 0x8c6201e0  lw          $v0, 0x1E0($v1)
    ctx->pc = 0x23cd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 480)));
label_23cd30:
    // 0x23cd30: 0x40f809  jalr        $v0
label_23cd34:
    if (ctx->pc == 0x23CD34u) {
        ctx->pc = 0x23CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD30u;
        // 0x23cd34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD38u;
        goto label_23cd38;
    }
    ctx->pc = 0x23CD30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23CD38u);
        ctx->pc = 0x23CD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD30u;
        // 0x23cd34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23CD30u, 0x23CD38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23CD38u;
label_23cd38:
    // 0x23cd38: 0x5440000f  bnel        $v0, $zero, . + 4 + (0xF << 2)
label_23cd3c:
    if (ctx->pc == 0x23CD3Cu) {
        ctx->pc = 0x23CD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD38u;
        // 0x23cd3c: 0x8e220338  lw          $v0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD40u;
        goto label_23cd40;
    }
    ctx->pc = 0x23CD38u;
    {
        const bool branch_taken_0x23cd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23cd38) {
            ctx->pc = 0x23CD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CD38u;
            // 0x23cd3c: 0x8e220338  lw          $v0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD78u;
            goto label_23cd78;
        }
    }
    ctx->pc = 0x23CD40u;
label_23cd40:
    // 0x23cd40: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x23cd40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_23cd44:
    // 0x23cd44: 0x1202000b  beq         $s0, $v0, . + 4 + (0xB << 2)
label_23cd48:
    if (ctx->pc == 0x23CD48u) {
        ctx->pc = 0x23CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD44u;
        // 0x23cd48: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD4Cu;
        goto label_23cd4c;
    }
    ctx->pc = 0x23CD44u;
    {
        const bool branch_taken_0x23cd44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD44u;
        // 0x23cd48: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd44) {
            ctx->pc = 0x23CD74u;
            goto label_23cd74;
        }
    }
    ctx->pc = 0x23CD4Cu;
label_23cd4c:
    // 0x23cd4c: 0x12020009  beq         $s0, $v0, . + 4 + (0x9 << 2)
label_23cd50:
    if (ctx->pc == 0x23CD50u) {
        ctx->pc = 0x23CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD4Cu;
        // 0x23cd50: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD54u;
        goto label_23cd54;
    }
    ctx->pc = 0x23CD4Cu;
    {
        const bool branch_taken_0x23cd4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD4Cu;
        // 0x23cd50: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd4c) {
            ctx->pc = 0x23CD74u;
            goto label_23cd74;
        }
    }
    ctx->pc = 0x23CD54u;
label_23cd54:
    // 0x23cd54: 0x52020008  beql        $s0, $v0, . + 4 + (0x8 << 2)
label_23cd58:
    if (ctx->pc == 0x23CD58u) {
        ctx->pc = 0x23CD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD54u;
        // 0x23cd58: 0x8e220338  lw          $v0, 0x338($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD5Cu;
        goto label_23cd5c;
    }
    ctx->pc = 0x23CD54u;
    {
        const bool branch_taken_0x23cd54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x23cd54) {
            ctx->pc = 0x23CD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CD54u;
            // 0x23cd58: 0x8e220338  lw          $v0, 0x338($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CD78u;
            goto label_23cd78;
        }
    }
    ctx->pc = 0x23CD5Cu;
label_23cd5c:
    // 0x23cd5c: 0x8e230334  lw          $v1, 0x334($s1)
    ctx->pc = 0x23cd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 820)));
label_23cd60:
    // 0x23cd60: 0x8c620150  lw          $v0, 0x150($v1)
    ctx->pc = 0x23cd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 336)));
label_23cd64:
    // 0x23cd64: 0x2442ffe3  addiu       $v0, $v0, -0x1D
    ctx->pc = 0x23cd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967267));
label_23cd68:
    // 0x23cd68: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23cd68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23cd6c:
    // 0x23cd6c: 0x104000fa  beqz        $v0, . + 4 + (0xFA << 2)
label_23cd70:
    if (ctx->pc == 0x23CD70u) {
        ctx->pc = 0x23CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD6Cu;
        // 0x23cd70: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD74u;
        goto label_23cd74;
    }
    ctx->pc = 0x23CD6Cu;
    {
        const bool branch_taken_0x23cd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CD70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD6Cu;
        // 0x23cd70: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd6c) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CD74u;
label_23cd74:
    // 0x23cd74: 0x8e220338  lw          $v0, 0x338($s1)
    ctx->pc = 0x23cd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 824)));
label_23cd78:
    // 0x23cd78: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x23cd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_23cd7c:
    // 0x23cd7c: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x23cd7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_23cd80:
    // 0x23cd80: 0x108300f4  beq         $a0, $v1, . + 4 + (0xF4 << 2)
label_23cd84:
    if (ctx->pc == 0x23CD84u) {
        ctx->pc = 0x23CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD80u;
        // 0x23cd84: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD88u;
        goto label_23cd88;
    }
    ctx->pc = 0x23CD80u;
    {
        const bool branch_taken_0x23cd80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x23CD84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD80u;
        // 0x23cd84: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd80) {
            ctx->pc = 0x23D154u;
            goto label_23d154;
        }
    }
    ctx->pc = 0x23CD88u;
label_23cd88:
    // 0x23cd88: 0x108200f3  beq         $a0, $v0, . + 4 + (0xF3 << 2)
label_23cd8c:
    if (ctx->pc == 0x23CD8Cu) {
        ctx->pc = 0x23CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD88u;
        // 0x23cd8c: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CD90u;
        goto label_23cd90;
    }
    ctx->pc = 0x23CD88u;
    {
        const bool branch_taken_0x23cd88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x23CD8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CD88u;
        // 0x23cd8c: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cd88) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CD90u;
label_23cd90:
    // 0x23cd90: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x23cd90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23cd94:
    // 0x23cd94: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x23cd94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_23cd98:
    // 0x23cd98: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cd9c:
    // 0x23cd9c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23cda0:
    // 0x23cda0: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x23cda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_23cda4:
    // 0x23cda4: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23cda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_23cda8:
    // 0x23cda8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23cda8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23cdac:
    // 0x23cdac: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23cdacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23cdb0:
    // 0x23cdb0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23cdb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23cdb4:
    // 0x23cdb4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x23cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_23cdb8:
    // 0x23cdb8: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x23cdb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23cdbc:
    // 0x23cdbc: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x23cdbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23cdc0:
    // 0x23cdc0: 0xc7a200bc  lwc1        $f2, 0xBC($sp)
    ctx->pc = 0x23cdc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cdc4:
    // 0x23cdc4: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x23cdc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_23cdc8:
    // 0x23cdc8: 0xe7a100a8  swc1        $f1, 0xA8($sp)
    ctx->pc = 0x23cdc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_23cdcc:
    // 0x23cdcc: 0xe7a200ac  swc1        $f2, 0xAC($sp)
    ctx->pc = 0x23cdccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_23cdd0:
    // 0x23cdd0: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x23cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_23cdd4:
    // 0x23cdd4: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x23cdd4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_23cdd8:
    // 0x23cdd8: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x23cdd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23cddc:
    // 0x23cddc: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x23cddcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23cde0:
    // 0x23cde0: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x23cde0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23cde4:
    // 0x23cde4: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x23cde4u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_23cde8:
    // 0x23cde8: 0x4a0003bf  vwaitq
    ctx->pc = 0x23cde8u;
    // VWAITQ (Q already resolved in this runtime)
label_23cdec:
    // 0x23cdec: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x23cdecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23cdf0:
    // 0x23cdf0: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x23cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_23cdf4:
    // 0x23cdf4: 0x27a20090  addiu       $v0, $sp, 0x90
    ctx->pc = 0x23cdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_23cdf8:
    // 0x23cdf8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x23cdf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cdfc:
    // 0x23cdfc: 0xc6c30000  lwc1        $f3, 0x0($s6)
    ctx->pc = 0x23cdfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23ce00:
    // 0x23ce00: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x23ce00u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_23ce04:
    // 0x23ce04: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x23ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ce08:
    // 0x23ce08: 0xc6c30004  lwc1        $f3, 0x4($s6)
    ctx->pc = 0x23ce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23ce0c:
    // 0x23ce0c: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x23ce0cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_23ce10:
    // 0x23ce10: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x23ce10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ce14:
    // 0x23ce14: 0xc6c30008  lwc1        $f3, 0x8($s6)
    ctx->pc = 0x23ce14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23ce18:
    // 0x23ce18: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x23ce18u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_23ce1c:
    // 0x23ce1c: 0x46186834  c.lt.s      $f13, $f24
    ctx->pc = 0x23ce1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23ce20:
    // 0x23ce20: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23ce20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23ce24:
    // 0x23ce24: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x23ce24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23ce28:
    // 0x23ce28: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_23ce2c:
    if (ctx->pc == 0x23CE2Cu) {
        ctx->pc = 0x23CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE28u;
        // 0x23ce2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE30u;
        goto label_23ce30;
    }
    ctx->pc = 0x23CE28u;
    {
        const bool branch_taken_0x23ce28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE28u;
        // 0x23ce2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce28) {
            ctx->pc = 0x23CE40u;
            goto label_23ce40;
        }
    }
    ctx->pc = 0x23CE30u;
label_23ce30:
    // 0x23ce30: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23ce30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_23ce34:
    // 0x23ce34: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x23ce34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_23ce38:
    // 0x23ce38: 0x10000006  b           . + 4 + (0x6 << 2)
label_23ce3c:
    if (ctx->pc == 0x23CE3Cu) {
        ctx->pc = 0x23CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE38u;
        // 0x23ce3c: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE40u;
        goto label_23ce40;
    }
    ctx->pc = 0x23CE38u;
    {
        const bool branch_taken_0x23ce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CE3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE38u;
        // 0x23ce3c: 0x460d6b02  mul.s       $f12, $f13, $f13 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce38) {
            ctx->pc = 0x23CE54u;
            goto label_23ce54;
        }
    }
    ctx->pc = 0x23CE40u;
label_23ce40:
    // 0x23ce40: 0x460d0034  c.lt.s      $f0, $f13
    ctx->pc = 0x23ce40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23ce44:
    // 0x23ce44: 0x0  nop
    ctx->pc = 0x23ce44u;
    // NOP
label_23ce48:
    // 0x23ce48: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_23ce4c:
    if (ctx->pc == 0x23CE4Cu) {
        ctx->pc = 0x23CE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE48u;
        // 0x23ce4c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE50u;
        goto label_23ce50;
    }
    ctx->pc = 0x23CE48u;
    {
        const bool branch_taken_0x23ce48 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23ce48) {
            ctx->pc = 0x23CE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CE48u;
            // 0x23ce4c: 0x46000346  mov.s       $f13, $f0 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[0]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CE50u;
            goto label_23ce50;
        }
    }
    ctx->pc = 0x23CE50u;
label_23ce50:
    // 0x23ce50: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x23ce50u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_23ce54:
    // 0x23ce54: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23ce54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23ce58:
    // 0x23ce58: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x23ce58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_23ce5c:
    // 0x23ce5c: 0x0  nop
    ctx->pc = 0x23ce5cu;
    // NOP
label_23ce60:
    // 0x23ce60: 0x460ca301  sub.s       $f12, $f20, $f12
    ctx->pc = 0x23ce60u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
label_23ce64:
    // 0x23ce64: 0x460c0304  c1          0xC0304
    ctx->pc = 0x23ce64u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_23ce68:
    // 0x23ce68: 0xc0e404c  jal         func_390130
label_23ce6c:
    if (ctx->pc == 0x23CE6Cu) {
        ctx->pc = 0x23CE70u;
        goto label_23ce70;
    }
    ctx->pc = 0x23CE68u;
    SET_GPR_U32(ctx, 31, 0x23CE70u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x23CE68u, 0x23CE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CE70u;
label_23ce70:
    // 0x23ce70: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x23ce70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_23ce74:
    // 0x23ce74: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x23ce74u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_23ce78:
    // 0x23ce78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x23ce78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_23ce7c:
    // 0x23ce7c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23ce7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23ce80:
    // 0x23ce80: 0xc4419708  lwc1        $f1, -0x68F8($v0)
    ctx->pc = 0x23ce80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23ce84:
    // 0x23ce84: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x23ce84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_23ce88:
    // 0x23ce88: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x23ce88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23ce8c:
    // 0x23ce8c: 0x0  nop
    ctx->pc = 0x23ce8cu;
    // NOP
label_23ce90:
    // 0x23ce90: 0x450000b1  bc1f        . + 4 + (0xB1 << 2)
label_23ce94:
    if (ctx->pc == 0x23CE94u) {
        ctx->pc = 0x23CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE90u;
        // 0x23ce94: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CE98u;
        goto label_23ce98;
    }
    ctx->pc = 0x23CE90u;
    {
        const bool branch_taken_0x23ce90 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CE90u;
        // 0x23ce94: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ce90) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CE98u;
label_23ce98:
    // 0x23ce98: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x23ce98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23ce9c:
    // 0x23ce9c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23ce9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23cea0:
    // 0x23cea0: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x23cea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_23cea4:
    // 0x23cea4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23cea4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23cea8:
    // 0x23cea8: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x23cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_23ceac:
    // 0x23ceac: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x23ceacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_23ceb0:
    // 0x23ceb0: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x23ceb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23ceb4:
    // 0x23ceb4: 0xc6030000  lwc1        $f3, 0x0($s0)
    ctx->pc = 0x23ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23ceb8:
    // 0x23ceb8: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x23ceb8u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_23cebc:
    // 0x23cebc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x23cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cec0:
    // 0x23cec0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x23cec0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23cec4:
    // 0x23cec4: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x23cec4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_23cec8:
    // 0x23cec8: 0xc4420008  lwc1        $f2, 0x8($v0)
    ctx->pc = 0x23cec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cecc:
    // 0x23cecc: 0xc6030008  lwc1        $f3, 0x8($s0)
    ctx->pc = 0x23ceccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23ced0:
    // 0x23ced0: 0x4603135c  madd.s      $f13, $f2, $f3
    ctx->pc = 0x23ced0u;
    ctx->f[13] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_23ced4:
    // 0x23ced4: 0x46186834  c.lt.s      $f13, $f24
    ctx->pc = 0x23ced4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23ced8:
    // 0x23ced8: 0x0  nop
    ctx->pc = 0x23ced8u;
    // NOP
label_23cedc:
    // 0x23cedc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_23cee0:
    if (ctx->pc == 0x23CEE0u) {
        ctx->pc = 0x23CEE4u;
        goto label_23cee4;
    }
    ctx->pc = 0x23CEDCu;
    {
        const bool branch_taken_0x23cedc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cedc) {
            ctx->pc = 0x23CEF4u;
            goto label_23cef4;
        }
    }
    ctx->pc = 0x23CEE4u;
label_23cee4:
    // 0x23cee4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x23cee4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_23cee8:
    // 0x23cee8: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x23cee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_23ceec:
    // 0x23ceec: 0x10000006  b           . + 4 + (0x6 << 2)
label_23cef0:
    if (ctx->pc == 0x23CEF0u) {
        ctx->pc = 0x23CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEECu;
        // 0x23cef0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CEF4u;
        goto label_23cef4;
    }
    ctx->pc = 0x23CEECu;
    {
        const bool branch_taken_0x23ceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23CEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEECu;
        // 0x23cef0: 0x8e2200bc  lw          $v0, 0xBC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23ceec) {
            ctx->pc = 0x23CF08u;
            goto label_23cf08;
        }
    }
    ctx->pc = 0x23CEF4u;
label_23cef4:
    // 0x23cef4: 0x460da034  c.lt.s      $f20, $f13
    ctx->pc = 0x23cef4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23cef8:
    // 0x23cef8: 0x0  nop
    ctx->pc = 0x23cef8u;
    // NOP
label_23cefc:
    // 0x23cefc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_23cf00:
    if (ctx->pc == 0x23CF00u) {
        ctx->pc = 0x23CF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CEFCu;
        // 0x23cf00: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF04u;
        goto label_23cf04;
    }
    ctx->pc = 0x23CEFCu;
    {
        const bool branch_taken_0x23cefc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23cefc) {
            ctx->pc = 0x23CF00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CEFCu;
            // 0x23cf00: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
            ctx->f[13] = FPU_MOV_S(ctx->f[20]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CF04u;
            goto label_23cf04;
        }
    }
    ctx->pc = 0x23CF04u;
label_23cf04:
    // 0x23cf04: 0x8e2200bc  lw          $v0, 0xBC($s1)
    ctx->pc = 0x23cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 188)));
label_23cf08:
    // 0x23cf08: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23cf08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23cf0c:
    // 0x23cf0c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23cf10:
    if (ctx->pc == 0x23CF10u) {
        ctx->pc = 0x23CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF0Cu;
        // 0x23cf10: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF14u;
        goto label_23cf14;
    }
    ctx->pc = 0x23CF0Cu;
    {
        const bool branch_taken_0x23cf0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23CF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF0Cu;
        // 0x23cf10: 0x46006b47  neg.s       $f13, $f13 (Delay Slot)
        ctx->f[13] = FPU_NEG_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf0c) {
            ctx->pc = 0x23CF1Cu;
            goto label_23cf1c;
        }
    }
    ctx->pc = 0x23CF14u;
label_23cf14:
    // 0x23cf14: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x23cf14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
label_23cf18:
    // 0x23cf18: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x23cf18u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_23cf1c:
    // 0x23cf1c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x23cf1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_23cf20:
    // 0x23cf20: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x23cf20u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_23cf24:
    // 0x23cf24: 0x460d6b02  mul.s       $f12, $f13, $f13
    ctx->pc = 0x23cf24u;
    ctx->f[12] = FPU_MUL_S(ctx->f[13], ctx->f[13]);
label_23cf28:
    // 0x23cf28: 0x460cab01  sub.s       $f12, $f21, $f12
    ctx->pc = 0x23cf28u;
    ctx->f[12] = FPU_SUB_S(ctx->f[21], ctx->f[12]);
label_23cf2c:
    // 0x23cf2c: 0x460c0304  c1          0xC0304
    ctx->pc = 0x23cf2cu;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_23cf30:
    // 0x23cf30: 0xc0e404c  jal         func_390130
label_23cf34:
    if (ctx->pc == 0x23CF34u) {
        ctx->pc = 0x23CF38u;
        goto label_23cf38;
    }
    ctx->pc = 0x23CF30u;
    SET_GPR_U32(ctx, 31, 0x23CF38u);
    ctx->pc = 0x390130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390130u, 0x23CF30u, 0x23CF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23CF38u;
label_23cf38:
    // 0x23cf38: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x23cf38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_23cf3c:
    // 0x23cf3c: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x23cf3cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_23cf40:
    // 0x23cf40: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x23cf40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_23cf44:
    // 0x23cf44: 0x0  nop
    ctx->pc = 0x23cf44u;
    // NOP
label_23cf48:
    // 0x23cf48: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x23cf48u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_23cf4c:
    // 0x23cf4c: 0x46160034  c.lt.s      $f0, $f22
    ctx->pc = 0x23cf4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23cf50:
    // 0x23cf50: 0x0  nop
    ctx->pc = 0x23cf50u;
    // NOP
label_23cf54:
    // 0x23cf54: 0x45000080  bc1f        . + 4 + (0x80 << 2)
label_23cf58:
    if (ctx->pc == 0x23CF58u) {
        ctx->pc = 0x23CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF54u;
        // 0x23cf58: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CF5Cu;
        goto label_23cf5c;
    }
    ctx->pc = 0x23CF54u;
    {
        const bool branch_taken_0x23cf54 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CF54u;
        // 0x23cf58: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cf54) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CF5Cu;
label_23cf5c:
    // 0x23cf5c: 0x8e240104  lw          $a0, 0x104($s1)
    ctx->pc = 0x23cf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23cf60:
    // 0x23cf60: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x23cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_23cf64:
    // 0x23cf64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23cf68:
    // 0x23cf68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23cf6c:
    // 0x23cf6c: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x23cf6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_23cf70:
    // 0x23cf70: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_23cf74:
    // 0x23cf74: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23cf74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23cf78:
    // 0x23cf78: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23cf78u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23cf7c:
    // 0x23cf7c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23cf7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23cf80:
    // 0x23cf80: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x23cf80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_23cf84:
    // 0x23cf84: 0xc7a200c0  lwc1        $f2, 0xC0($sp)
    ctx->pc = 0x23cf84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cf88:
    // 0x23cf88: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x23cf88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_23cf8c:
    // 0x23cf8c: 0xc7a300c4  lwc1        $f3, 0xC4($sp)
    ctx->pc = 0x23cf8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23cf90:
    // 0x23cf90: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x23cf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_23cf94:
    // 0x23cf94: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x23cf94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23cf98:
    // 0x23cf98: 0xc7a100cc  lwc1        $f1, 0xCC($sp)
    ctx->pc = 0x23cf98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23cf9c:
    // 0x23cf9c: 0xe7a200b0  swc1        $f2, 0xB0($sp)
    ctx->pc = 0x23cf9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_23cfa0:
    // 0x23cfa0: 0xe7a300b4  swc1        $f3, 0xB4($sp)
    ctx->pc = 0x23cfa0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_23cfa4:
    // 0x23cfa4: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x23cfa4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_23cfa8:
    // 0x23cfa8: 0xe7a100bc  swc1        $f1, 0xBC($sp)
    ctx->pc = 0x23cfa8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_23cfac:
    // 0x23cfac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23cfacu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23cfb0:
    // 0x23cfb0: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x23cfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_23cfb4:
    // 0x23cfb4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x23cfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23cfb8:
    // 0x23cfb8: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x23cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23cfbc:
    // 0x23cfbc: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x23cfbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23cfc0:
    // 0x23cfc0: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x23cfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_23cfc4:
    // 0x23cfc4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23cfc4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_23cfc8:
    // 0x23cfc8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23cfc8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_23cfcc:
    // 0x23cfcc: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x23cfccu;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_23cfd0:
    // 0x23cfd0: 0x52600006  beql        $s3, $zero, . + 4 + (0x6 << 2)
label_23cfd4:
    if (ctx->pc == 0x23CFD4u) {
        ctx->pc = 0x23CFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFD0u;
        // 0x23cfd4: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFD8u;
        goto label_23cfd8;
    }
    ctx->pc = 0x23CFD0u;
    {
        const bool branch_taken_0x23cfd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x23cfd0) {
            ctx->pc = 0x23CFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23CFD0u;
            // 0x23cfd4: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23CFECu;
            goto label_23cfec;
        }
    }
    ctx->pc = 0x23CFD8u;
label_23cfd8:
    // 0x23cfd8: 0x4619a034  c.lt.s      $f20, $f25
    ctx->pc = 0x23cfd8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[25])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23cfdc:
    // 0x23cfdc: 0x0  nop
    ctx->pc = 0x23cfdcu;
    // NOP
label_23cfe0:
    // 0x23cfe0: 0x4500005d  bc1f        . + 4 + (0x5D << 2)
label_23cfe4:
    if (ctx->pc == 0x23CFE4u) {
        ctx->pc = 0x23CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFE0u;
        // 0x23cfe4: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23CFE8u;
        goto label_23cfe8;
    }
    ctx->pc = 0x23CFE0u;
    {
        const bool branch_taken_0x23cfe0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23CFE0u;
        // 0x23cfe4: 0x8fc22b1c  lw          $v0, 0x2B1C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23cfe0) {
            ctx->pc = 0x23D158u;
            goto label_23d158;
        }
    }
    ctx->pc = 0x23CFE8u;
label_23cfe8:
    // 0x23cfe8: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x23cfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_23cfec:
    // 0x23cfec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x23cfecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23cff0:
    // 0x23cff0: 0xafa000c0  sw          $zero, 0xC0($sp)
    ctx->pc = 0x23cff0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
label_23cff4:
    // 0x23cff4: 0xe4970004  swc1        $f23, 0x4($a0)
    ctx->pc = 0x23cff4u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_23cff8:
    // 0x23cff8: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x23cff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_23cffc:
    // 0x23cffc: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x23cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_23d000:
    // 0x23d000: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x23d000u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_23d004:
    // 0x23d004: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23d004u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23d008:
    // 0x23d008: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x23d008u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23d00c:
    // 0x23d00c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23d00cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23d010:
    // 0x23d010: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x23d010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d014:
    // 0x23d014: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x23d014u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d018:
    // 0x23d018: 0xc7a200d8  lwc1        $f2, 0xD8($sp)
    ctx->pc = 0x23d018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d01c:
    // 0x23d01c: 0xc7a300dc  lwc1        $f3, 0xDC($sp)
    ctx->pc = 0x23d01cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d020:
    // 0x23d020: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x23d020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d024:
    // 0x23d024: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x23d024u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_23d028:
    // 0x23d028: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x23d028u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_23d02c:
    // 0x23d02c: 0xe7a200b8  swc1        $f2, 0xB8($sp)
    ctx->pc = 0x23d02cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_23d030:
    // 0x23d030: 0xe7a300bc  swc1        $f3, 0xBC($sp)
    ctx->pc = 0x23d030u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
label_23d034:
    // 0x23d034: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23d034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23d038:
    // 0x23d038: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x23d038u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_23d03c:
    // 0x23d03c: 0xe6b70004  swc1        $f23, 0x4($s5)
    ctx->pc = 0x23d03cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
label_23d040:
    // 0x23d040: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23d040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_23d044:
    // 0x23d044: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x23d044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
label_23d048:
    // 0x23d048: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x23d048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
label_23d04c:
    // 0x23d04c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23d04cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23d050:
    // 0x23d050: 0xdaa20000  lqc2        $vf2, 0x0($s5)
    ctx->pc = 0x23d050u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_23d054:
    // 0x23d054: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23d054u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23d058:
    // 0x23d058: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x23d058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d05c:
    // 0x23d05c: 0xc7a300e0  lwc1        $f3, 0xE0($sp)
    ctx->pc = 0x23d05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d060:
    // 0x23d060: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x23d060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_23d064:
    // 0x23d064: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x23d064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d068:
    // 0x23d068: 0xc7a100e8  lwc1        $f1, 0xE8($sp)
    ctx->pc = 0x23d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d06c:
    // 0x23d06c: 0xc7a200ec  lwc1        $f2, 0xEC($sp)
    ctx->pc = 0x23d06cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 236)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d070:
    // 0x23d070: 0xe7a300c0  swc1        $f3, 0xC0($sp)
    ctx->pc = 0x23d070u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_23d074:
    // 0x23d074: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x23d074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_23d078:
    // 0x23d078: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x23d078u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_23d07c:
    // 0x23d07c: 0xc0f6a96  jal         func_3DAA58
label_23d080:
    if (ctx->pc == 0x23D080u) {
        ctx->pc = 0x23D080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D07Cu;
        // 0x23d080: 0xe7a200cc  swc1        $f2, 0xCC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D084u;
        goto label_23d084;
    }
    ctx->pc = 0x23D07Cu;
    SET_GPR_U32(ctx, 31, 0x23D084u);
    ctx->pc = 0x23D080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D07Cu;
    // 0x23d080: 0xe7a200cc  swc1        $f2, 0xCC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23D07Cu, 0x23D084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D084u;
label_23d084:
    // 0x23d084: 0xc0f6a96  jal         func_3DAA58
label_23d088:
    if (ctx->pc == 0x23D088u) {
        ctx->pc = 0x23D088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D084u;
        // 0x23d088: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D08Cu;
        goto label_23d08c;
    }
    ctx->pc = 0x23D084u;
    SET_GPR_U32(ctx, 31, 0x23D08Cu);
    ctx->pc = 0x23D088u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D084u;
    // 0x23d088: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x23D084u, 0x23D08Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D08Cu;
label_23d08c:
    // 0x23d08c: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x23d08cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_23d090:
    // 0x23d090: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x23d090u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_23d094:
    // 0x23d094: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x23d094u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_23d098:
    // 0x23d098: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x23d098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_23d09c:
    // 0x23d09c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x23d09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
label_23d0a0:
    // 0x23d0a0: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x23d0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_23d0a4:
    // 0x23d0a4: 0x7fa30110  sq          $v1, 0x110($sp)
    ctx->pc = 0x23d0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 3));
label_23d0a8:
    // 0x23d0a8: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x23d0a8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_23d0ac:
    // 0x23d0ac: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x23d0acu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_23d0b0:
    // 0x23d0b0: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23d0b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23d0b4:
    // 0x23d0b4: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x23d0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d0b8:
    // 0x23d0b8: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x23d0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d0bc:
    // 0x23d0bc: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x23d0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d0c0:
    // 0x23d0c0: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x23d0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_23d0c4:
    // 0x23d0c4: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x23d0c4u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_23d0c8:
    // 0x23d0c8: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x23d0c8u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_23d0cc:
    // 0x23d0cc: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x23d0ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_23d0d0:
    // 0x23d0d0: 0x0  nop
    ctx->pc = 0x23d0d0u;
    // NOP
label_23d0d4:
    // 0x23d0d4: 0x0  nop
    ctx->pc = 0x23d0d4u;
    // NOP
label_23d0d8:
    // 0x23d0d8: 0x46010304  c1          0x10304
    ctx->pc = 0x23d0d8u;
    ctx->f[12] = FPU_SQRT_S(ctx->f[0]);
label_23d0dc:
    // 0x23d0dc: 0xe7a10144  swc1        $f1, 0x144($sp)
    ctx->pc = 0x23d0dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 324), bits); }
label_23d0e0:
    // 0x23d0e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x23d0e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_23d0e4:
    // 0x23d0e4: 0x0  nop
    ctx->pc = 0x23d0e4u;
    // NOP
label_23d0e8:
    // 0x23d0e8: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x23d0e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d0ec:
    // 0x23d0ec: 0x0  nop
    ctx->pc = 0x23d0ecu;
    // NOP
label_23d0f0:
    // 0x23d0f0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
label_23d0f4:
    if (ctx->pc == 0x23D0F4u) {
        ctx->pc = 0x23D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0F0u;
        // 0x23d0f4: 0xe7ac0140  swc1        $f12, 0x140($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D0F8u;
        goto label_23d0f8;
    }
    ctx->pc = 0x23D0F0u;
    {
        const bool branch_taken_0x23d0f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D0F0u;
        // 0x23d0f4: 0xe7ac0140  swc1        $f12, 0x140($sp) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d0f0) {
            ctx->pc = 0x23D118u;
            goto label_23d118;
        }
    }
    ctx->pc = 0x23D0F8u;
label_23d0f8:
    // 0x23d0f8: 0x0  nop
    ctx->pc = 0x23d0f8u;
    // NOP
label_23d0fc:
    // 0x23d0fc: 0x0  nop
    ctx->pc = 0x23d0fcu;
    // NOP
label_23d100:
    // 0x23d100: 0x460ca803  div.s       $f0, $f21, $f12
    ctx->pc = 0x23d100u;
    { if (ctx->f[12] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[21], ctx->f[12]); }
label_23d104:
    // 0x23d104: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x23d104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_23d108:
    // 0x23d108: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x23d108u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_23d10c:
    // 0x23d10c: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x23d10cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_23d110:
    // 0x23d110: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x23d110u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23d114:
    // 0x23d114: 0xfba10130  sqc2        $vf1, 0x130($sp)
    ctx->pc = 0x23d114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d118:
    // 0x23d118: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x23d118u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_23d11c:
    // 0x23d11c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x23d11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d120:
    // 0x23d120: 0xc076e46  jal         func_1DB918
label_23d124:
    if (ctx->pc == 0x23D124u) {
        ctx->pc = 0x23D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D120u;
        // 0x23d124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D128u;
        goto label_23d128;
    }
    ctx->pc = 0x23D120u;
    SET_GPR_U32(ctx, 31, 0x23D128u);
    ctx->pc = 0x23D124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D120u;
    // 0x23d124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x23D120u, 0x23D128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D128u;
label_23d128:
    // 0x23d128: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x23d128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23d12c:
    // 0x23d12c: 0xc076e46  jal         func_1DB918
label_23d130:
    if (ctx->pc == 0x23D130u) {
        ctx->pc = 0x23D130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D12Cu;
        // 0x23d130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D134u;
        goto label_23d134;
    }
    ctx->pc = 0x23D12Cu;
    SET_GPR_U32(ctx, 31, 0x23D134u);
    ctx->pc = 0x23D130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D12Cu;
    // 0x23d130: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB918u, 0x23D12Cu, 0x23D134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D134u;
label_23d134:
    // 0x23d134: 0xc07783e  jal         func_1DE0F8
label_23d138:
    if (ctx->pc == 0x23D138u) {
        ctx->pc = 0x23D138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D134u;
        // 0x23d138: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D13Cu;
        goto label_23d13c;
    }
    ctx->pc = 0x23D134u;
    SET_GPR_U32(ctx, 31, 0x23D13Cu);
    ctx->pc = 0x23D138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D134u;
    // 0x23d138: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE0F8u, 0x23D134u, 0x23D13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D13Cu;
label_23d13c:
    // 0x23d13c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_23d140:
    if (ctx->pc == 0x23D140u) {
        ctx->pc = 0x23D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D13Cu;
        // 0x23d140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D144u;
        goto label_23d144;
    }
    ctx->pc = 0x23D13Cu;
    {
        const bool branch_taken_0x23d13c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D13Cu;
        // 0x23d140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d13c) {
            ctx->pc = 0x23D14Cu;
            goto label_23d14c;
        }
    }
    ctx->pc = 0x23D144u;
label_23d144:
    // 0x23d144: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x23d144u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23d148:
    // 0x23d148: 0x4600a646  mov.s       $f25, $f20
    ctx->pc = 0x23d148u;
    ctx->f[25] = FPU_MOV_S(ctx->f[20]);
label_23d14c:
    // 0x23d14c: 0xc076e38  jal         func_1DB8E0
label_23d150:
    if (ctx->pc == 0x23D150u) {
        ctx->pc = 0x23D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D14Cu;
        // 0x23d150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D154u;
        goto label_23d154;
    }
    ctx->pc = 0x23D14Cu;
    SET_GPR_U32(ctx, 31, 0x23D154u);
    ctx->pc = 0x23D150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D14Cu;
    // 0x23d150: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB8E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB8E0u, 0x23D14Cu, 0x23D154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D154u;
label_23d154:
    // 0x23d154: 0x8fc22b1c  lw          $v0, 0x2B1C($fp)
    ctx->pc = 0x23d154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 11036)));
label_23d158:
    // 0x23d158: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x23d158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_23d15c:
    // 0x23d15c: 0x282102b  sltu        $v0, $s4, $v0
    ctx->pc = 0x23d15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_23d160:
    // 0x23d160: 0x1440fea1  bnez        $v0, . + 4 + (-0x15F << 2)
label_23d164:
    if (ctx->pc == 0x23D164u) {
        ctx->pc = 0x23D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D160u;
        // 0x23d164: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D168u;
        goto label_23d168;
    }
    ctx->pc = 0x23D160u;
    {
        const bool branch_taken_0x23d160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D160u;
        // 0x23d164: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d160) {
            ctx->pc = 0x23CBE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23cbe8;
        }
    }
    ctx->pc = 0x23D168u;
label_23d168:
    // 0x23d168: 0x12600147  beqz        $s3, . + 4 + (0x147 << 2)
label_23d16c:
    if (ctx->pc == 0x23D16Cu) {
        ctx->pc = 0x23D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D168u;
        // 0x23d16c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D170u;
        goto label_23d170;
    }
    ctx->pc = 0x23D168u;
    {
        const bool branch_taken_0x23d168 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D168u;
        // 0x23d16c: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d168) {
            ctx->pc = 0x23D688u;
            goto label_23d688;
        }
    }
    ctx->pc = 0x23D170u;
label_23d170:
    // 0x23d170: 0x8e620338  lw          $v0, 0x338($s3)
    ctx->pc = 0x23d170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 824)));
label_23d174:
    // 0x23d174: 0x8c430088  lw          $v1, 0x88($v0)
    ctx->pc = 0x23d174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_23d178:
    // 0x23d178: 0x14640043  bne         $v1, $a0, . + 4 + (0x43 << 2)
label_23d17c:
    if (ctx->pc == 0x23D17Cu) {
        ctx->pc = 0x23D180u;
        goto label_23d180;
    }
    ctx->pc = 0x23D178u;
    {
        const bool branch_taken_0x23d178 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x23d178) {
            ctx->pc = 0x23D288u;
            goto label_23d288;
        }
    }
    ctx->pc = 0x23D180u;
label_23d180:
    // 0x23d180: 0x8e700334  lw          $s0, 0x334($s3)
    ctx->pc = 0x23d180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_23d184:
    // 0x23d184: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23d184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23d188:
    // 0x23d188: 0x2462fffa  addiu       $v0, $v1, -0x6
    ctx->pc = 0x23d188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967290));
label_23d18c:
    // 0x23d18c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x23d18cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23d190:
    // 0x23d190: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_23d194:
    if (ctx->pc == 0x23D194u) {
        ctx->pc = 0x23D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D190u;
        // 0x23d194: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D198u;
        goto label_23d198;
    }
    ctx->pc = 0x23D190u;
    {
        const bool branch_taken_0x23d190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D190u;
        // 0x23d194: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d190) {
            ctx->pc = 0x23D1CCu;
            goto label_23d1cc;
        }
    }
    ctx->pc = 0x23D198u;
label_23d198:
    // 0x23d198: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x23d198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
label_23d19c:
    // 0x23d19c: 0x5062000c  beql        $v1, $v0, . + 4 + (0xC << 2)
label_23d1a0:
    if (ctx->pc == 0x23D1A0u) {
        ctx->pc = 0x23D1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D19Cu;
        // 0x23d1a0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1A4u;
        goto label_23d1a4;
    }
    ctx->pc = 0x23D19Cu;
    {
        const bool branch_taken_0x23d19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x23d19c) {
            ctx->pc = 0x23D1A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D19Cu;
            // 0x23d1a0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D1D0u;
            goto label_23d1d0;
        }
    }
    ctx->pc = 0x23D1A4u;
label_23d1a4:
    // 0x23d1a4: 0xc0924a8  jal         func_2492A0
label_23d1a8:
    if (ctx->pc == 0x23D1A8u) {
        ctx->pc = 0x23D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1A4u;
        // 0x23d1a8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1ACu;
        goto label_23d1ac;
    }
    ctx->pc = 0x23D1A4u;
    SET_GPR_U32(ctx, 31, 0x23D1ACu);
    ctx->pc = 0x23D1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1A4u;
    // 0x23d1a8: 0x8e040148  lw          $a0, 0x148($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2492A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2492A0u, 0x23D1A4u, 0x23D1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1ACu;
label_23d1ac:
    // 0x23d1ac: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_23d1b0:
    if (ctx->pc == 0x23D1B0u) {
        ctx->pc = 0x23D1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1ACu;
        // 0x23d1b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1B4u;
        goto label_23d1b4;
    }
    ctx->pc = 0x23D1ACu;
    {
        const bool branch_taken_0x23d1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d1ac) {
            ctx->pc = 0x23D1B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D1ACu;
            // 0x23d1b0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D1D0u;
            goto label_23d1d0;
        }
    }
    ctx->pc = 0x23D1B4u;
label_23d1b4:
    // 0x23d1b4: 0x8e030150  lw          $v1, 0x150($s0)
    ctx->pc = 0x23d1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 336)));
label_23d1b8:
    // 0x23d1b8: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x23d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_23d1bc:
    // 0x23d1bc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_23d1c0:
    if (ctx->pc == 0x23D1C0u) {
        ctx->pc = 0x23D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1BCu;
        // 0x23d1c0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1C4u;
        goto label_23d1c4;
    }
    ctx->pc = 0x23D1BCu;
    {
        const bool branch_taken_0x23d1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23D1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1BCu;
        // 0x23d1c0: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1bc) {
            ctx->pc = 0x23D1CCu;
            goto label_23d1cc;
        }
    }
    ctx->pc = 0x23D1C4u;
label_23d1c4:
    // 0x23d1c4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23d1c8:
    if (ctx->pc == 0x23D1C8u) {
        ctx->pc = 0x23D1CCu;
        goto label_23d1cc;
    }
    ctx->pc = 0x23D1C4u;
    {
        const bool branch_taken_0x23d1c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23d1c4) {
            ctx->pc = 0x23D1D0u;
            goto label_23d1d0;
        }
    }
    ctx->pc = 0x23D1CCu;
label_23d1cc:
    // 0x23d1cc: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x23d1ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d1d0:
    // 0x23d1d0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_23d1d4:
    if (ctx->pc == 0x23D1D4u) {
        ctx->pc = 0x23D1D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1D0u;
        // 0x23d1d4: 0x8e640334  lw          $a0, 0x334($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1D8u;
        goto label_23d1d8;
    }
    ctx->pc = 0x23D1D0u;
    {
        const bool branch_taken_0x23d1d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d1d0) {
            ctx->pc = 0x23D1D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D1D0u;
            // 0x23d1d4: 0x8e640334  lw          $a0, 0x334($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D1F8u;
            goto label_23d1f8;
        }
    }
    ctx->pc = 0x23D1D8u;
label_23d1d8:
    // 0x23d1d8: 0x8e640338  lw          $a0, 0x338($s3)
    ctx->pc = 0x23d1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 824)));
label_23d1dc:
    // 0x23d1dc: 0xc06beba  jal         func_1AFAE8
label_23d1e0:
    if (ctx->pc == 0x23D1E0u) {
        ctx->pc = 0x23D1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1DCu;
        // 0x23d1e0: 0x2405017e  addiu       $a1, $zero, 0x17E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1E4u;
        goto label_23d1e4;
    }
    ctx->pc = 0x23D1DCu;
    SET_GPR_U32(ctx, 31, 0x23D1E4u);
    ctx->pc = 0x23D1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1DCu;
    // 0x23d1e0: 0x2405017e  addiu       $a1, $zero, 0x17E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 382));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AFAE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFAE8u, 0x23D1DCu, 0x23D1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1E4u;
label_23d1e4:
    // 0x23d1e4: 0x8e640338  lw          $a0, 0x338($s3)
    ctx->pc = 0x23d1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 824)));
label_23d1e8:
    // 0x23d1e8: 0xc06c546  jal         func_1B1518
label_23d1ec:
    if (ctx->pc == 0x23D1ECu) {
        ctx->pc = 0x23D1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1E8u;
        // 0x23d1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1F0u;
        goto label_23d1f0;
    }
    ctx->pc = 0x23D1E8u;
    SET_GPR_U32(ctx, 31, 0x23D1F0u);
    ctx->pc = 0x23D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1E8u;
    // 0x23d1ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1518u, 0x23D1E8u, 0x23D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D1F0u;
label_23d1f0:
    // 0x23d1f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_23d1f4:
    if (ctx->pc == 0x23D1F4u) {
        ctx->pc = 0x23D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1F0u;
        // 0x23d1f4: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D1F8u;
        goto label_23d1f8;
    }
    ctx->pc = 0x23D1F0u;
    {
        const bool branch_taken_0x23d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1F0u;
        // 0x23d1f4: 0x8e440338  lw          $a0, 0x338($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d1f0) {
            ctx->pc = 0x23D214u;
            goto label_23d214;
        }
    }
    ctx->pc = 0x23D1F8u;
label_23d1f8:
    // 0x23d1f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23d1f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23d1fc:
    // 0x23d1fc: 0xc069892  jal         func_1A6248
label_23d200:
    if (ctx->pc == 0x23D200u) {
        ctx->pc = 0x23D200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D1FCu;
        // 0x23d200: 0x24050260  addiu       $a1, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D204u;
        goto label_23d204;
    }
    ctx->pc = 0x23D1FCu;
    SET_GPR_U32(ctx, 31, 0x23D204u);
    ctx->pc = 0x23D200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D1FCu;
    // 0x23d200: 0x24050260  addiu       $a1, $zero, 0x260 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6248u, 0x23D1FCu, 0x23D204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D204u;
label_23d204:
    // 0x23d204: 0x8e640334  lw          $a0, 0x334($s3)
    ctx->pc = 0x23d204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
label_23d208:
    // 0x23d208: 0xc06a23e  jal         func_1A88F8
label_23d20c:
    if (ctx->pc == 0x23D20Cu) {
        ctx->pc = 0x23D20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D208u;
        // 0x23d20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D210u;
        goto label_23d210;
    }
    ctx->pc = 0x23D208u;
    SET_GPR_U32(ctx, 31, 0x23D210u);
    ctx->pc = 0x23D20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D208u;
    // 0x23d20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A88F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A88F8u, 0x23D208u, 0x23D210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D210u;
label_23d210:
    // 0x23d210: 0x8e440338  lw          $a0, 0x338($s2)
    ctx->pc = 0x23d210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_23d214:
    // 0x23d214: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x23d214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_23d218:
    // 0x23d218: 0xc06c45e  jal         func_1B1178
label_23d21c:
    if (ctx->pc == 0x23D21Cu) {
        ctx->pc = 0x23D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D218u;
        // 0x23d21c: 0x240600a3  addiu       $a2, $zero, 0xA3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D220u;
        goto label_23d220;
    }
    ctx->pc = 0x23D218u;
    SET_GPR_U32(ctx, 31, 0x23D220u);
    ctx->pc = 0x23D21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D218u;
    // 0x23d21c: 0x240600a3  addiu       $a2, $zero, 0xA3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 163));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B1178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B1178u, 0x23D218u, 0x23D220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D220u;
label_23d220:
    // 0x23d220: 0x8e420338  lw          $v0, 0x338($s2)
    ctx->pc = 0x23d220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 824)));
label_23d224:
    // 0x23d224: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23d224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23d228:
    // 0x23d228: 0xc073e86  jal         func_1CFA18
label_23d22c:
    if (ctx->pc == 0x23D22Cu) {
        ctx->pc = 0x23D22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D228u;
        // 0x23d22c: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D230u;
        goto label_23d230;
    }
    ctx->pc = 0x23D228u;
    SET_GPR_U32(ctx, 31, 0x23D230u);
    ctx->pc = 0x23D22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D228u;
    // 0x23d22c: 0x8c4400a0  lw          $a0, 0xA0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x23D228u, 0x23D230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D230u;
label_23d230:
    // 0x23d230: 0x8e440334  lw          $a0, 0x334($s2)
    ctx->pc = 0x23d230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_23d234:
    // 0x23d234: 0x24050022  addiu       $a1, $zero, 0x22
    ctx->pc = 0x23d234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_23d238:
    // 0x23d238: 0xc06a0cc  jal         func_1A8330
label_23d23c:
    if (ctx->pc == 0x23D23Cu) {
        ctx->pc = 0x23D23Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D238u;
        // 0x23d23c: 0x240604e6  addiu       $a2, $zero, 0x4E6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1254));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D240u;
        goto label_23d240;
    }
    ctx->pc = 0x23D238u;
    SET_GPR_U32(ctx, 31, 0x23D240u);
    ctx->pc = 0x23D23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D238u;
    // 0x23d23c: 0x240604e6  addiu       $a2, $zero, 0x4E6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1254));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8330u, 0x23D238u, 0x23D240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D240u;
label_23d240:
    // 0x23d240: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x23d240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_23d244:
    // 0x23d244: 0x8ca401e4  lw          $a0, 0x1E4($a1)
    ctx->pc = 0x23d244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_23d248:
    // 0x23d248: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
label_23d24c:
    if (ctx->pc == 0x23D24Cu) {
        ctx->pc = 0x23D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D248u;
        // 0x23d24c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D250u;
        goto label_23d250;
    }
    ctx->pc = 0x23D248u;
    {
        const bool branch_taken_0x23d248 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D248u;
        // 0x23d24c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d248) {
            ctx->pc = 0x23D274u;
            goto label_23d274;
        }
    }
    ctx->pc = 0x23D250u;
label_23d250:
    // 0x23d250: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x23d250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_23d254:
    // 0x23d254: 0x0  nop
    ctx->pc = 0x23d254u;
    // NOP
label_23d258:
    // 0x23d258: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23d258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23d25c:
    // 0x23d25c: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_23d260:
    if (ctx->pc == 0x23D260u) {
        ctx->pc = 0x23D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D25Cu;
        // 0x23d260: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D264u;
        goto label_23d264;
    }
    ctx->pc = 0x23D25Cu;
    {
        const bool branch_taken_0x23d25c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D25Cu;
        // 0x23d260: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d25c) {
            ctx->pc = 0x23D274u;
            goto label_23d274;
        }
    }
    ctx->pc = 0x23D264u;
label_23d264:
    // 0x23d264: 0x28c20004  slti        $v0, $a2, 0x4
    ctx->pc = 0x23d264u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
label_23d268:
    // 0x23d268: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_23d26c:
    if (ctx->pc == 0x23D26Cu) {
        ctx->pc = 0x23D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D268u;
        // 0x23d26c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D270u;
        goto label_23d270;
    }
    ctx->pc = 0x23D268u;
    {
        const bool branch_taken_0x23d268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D268u;
        // 0x23d26c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d268) {
            ctx->pc = 0x23D258u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d258;
        }
    }
    ctx->pc = 0x23D270u;
label_23d270:
    // 0x23d270: 0x8ca401e8  lw          $a0, 0x1E8($a1)
    ctx->pc = 0x23d270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_23d274:
    // 0x23d274: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x23d274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_23d278:
    // 0x23d278: 0xc073e86  jal         func_1CFA18
label_23d27c:
    if (ctx->pc == 0x23D27Cu) {
        ctx->pc = 0x23D280u;
        goto label_23d280;
    }
    ctx->pc = 0x23D278u;
    SET_GPR_U32(ctx, 31, 0x23D280u);
    ctx->pc = 0x1CFA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CFA18u, 0x23D278u, 0x23D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D280u;
label_23d280:
    // 0x23d280: 0x10000102  b           . + 4 + (0x102 << 2)
label_23d284:
    if (ctx->pc == 0x23D284u) {
        ctx->pc = 0x23D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D280u;
        // 0x23d284: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D288u;
        goto label_23d288;
    }
    ctx->pc = 0x23D280u;
    {
        const bool branch_taken_0x23d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D280u;
        // 0x23d284: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d280) {
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D288u;
label_23d288:
    // 0x23d288: 0xc0899bc  jal         func_2266F0
label_23d28c:
    if (ctx->pc == 0x23D28Cu) {
        ctx->pc = 0x23D28Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D288u;
        // 0x23d28c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D290u;
        goto label_23d290;
    }
    ctx->pc = 0x23D288u;
    SET_GPR_U32(ctx, 31, 0x23D290u);
    ctx->pc = 0x23D28Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D288u;
    // 0x23d28c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x23D288u, 0x23D290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D290u;
label_23d290:
    // 0x23d290: 0x8c430274  lw          $v1, 0x274($v0)
    ctx->pc = 0x23d290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 628)));
label_23d294:
    // 0x23d294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d298:
    // 0x23d298: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x23d298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d29c:
    // 0x23d29c: 0xc08e3b2  jal         func_238EC8
label_23d2a0:
    if (ctx->pc == 0x23D2A0u) {
        ctx->pc = 0x23D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D29Cu;
        // 0x23d2a0: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2A4u;
        goto label_23d2a4;
    }
    ctx->pc = 0x23D29Cu;
    SET_GPR_U32(ctx, 31, 0x23D2A4u);
    ctx->pc = 0x23D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D29Cu;
    // 0x23d2a0: 0x8c700000  lw          $s0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238EC8u, 0x23D29Cu, 0x23D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2A4u;
label_23d2a4:
    // 0x23d2a4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x23d2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_23d2a8:
    // 0x23d2a8: 0xc069a8c  jal         func_1A6A30
label_23d2ac:
    if (ctx->pc == 0x23D2ACu) {
        ctx->pc = 0x23D2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2A8u;
        // 0x23d2ac: 0x8e640334  lw          $a0, 0x334($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2B0u;
        goto label_23d2b0;
    }
    ctx->pc = 0x23D2A8u;
    SET_GPR_U32(ctx, 31, 0x23D2B0u);
    ctx->pc = 0x23D2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2A8u;
    // 0x23d2ac: 0x8e640334  lw          $a0, 0x334($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6A30u, 0x23D2A8u, 0x23D2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2B0u;
label_23d2b0:
    // 0x23d2b0: 0x504000f6  beql        $v0, $zero, . + 4 + (0xF6 << 2)
label_23d2b4:
    if (ctx->pc == 0x23D2B4u) {
        ctx->pc = 0x23D2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2B0u;
        // 0x23d2b4: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2B8u;
        goto label_23d2b8;
    }
    ctx->pc = 0x23D2B0u;
    {
        const bool branch_taken_0x23d2b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d2b0) {
            ctx->pc = 0x23D2B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D2B0u;
            // 0x23d2b4: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D2B8u;
label_23d2b8:
    // 0x23d2b8: 0xc069a60  jal         func_1A6980
label_23d2bc:
    if (ctx->pc == 0x23D2BCu) {
        ctx->pc = 0x23D2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2B8u;
        // 0x23d2bc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2C0u;
        goto label_23d2c0;
    }
    ctx->pc = 0x23D2B8u;
    SET_GPR_U32(ctx, 31, 0x23D2C0u);
    ctx->pc = 0x23D2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2B8u;
    // 0x23d2bc: 0x8e440334  lw          $a0, 0x334($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A6980u, 0x23D2B8u, 0x23D2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2C0u;
label_23d2c0:
    // 0x23d2c0: 0x504000f2  beql        $v0, $zero, . + 4 + (0xF2 << 2)
label_23d2c4:
    if (ctx->pc == 0x23D2C4u) {
        ctx->pc = 0x23D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2C0u;
        // 0x23d2c4: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2C8u;
        goto label_23d2c8;
    }
    ctx->pc = 0x23D2C0u;
    {
        const bool branch_taken_0x23d2c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d2c0) {
            ctx->pc = 0x23D2C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D2C0u;
            // 0x23d2c4: 0xdfb00150  ld          $s0, 0x150($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D68Cu;
            goto label_23d68c;
        }
    }
    ctx->pc = 0x23D2C8u;
label_23d2c8:
    // 0x23d2c8: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x23d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_23d2cc:
    // 0x23d2cc: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23d2ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23d2d0:
    // 0x23d2d0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_23d2d4:
    if (ctx->pc == 0x23D2D4u) {
        ctx->pc = 0x23D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2D0u;
        // 0x23d2d4: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2D8u;
        goto label_23d2d8;
    }
    ctx->pc = 0x23D2D0u;
    {
        const bool branch_taken_0x23d2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d2d0) {
            ctx->pc = 0x23D2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D2D0u;
            // 0x23d2d4: 0x8e6200bc  lw          $v0, 0xBC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D2E8u;
            goto label_23d2e8;
        }
    }
    ctx->pc = 0x23D2D8u;
label_23d2d8:
    // 0x23d2d8: 0xc0bd62c  jal         func_2F58B0
label_23d2dc:
    if (ctx->pc == 0x23D2DCu) {
        ctx->pc = 0x23D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2D8u;
        // 0x23d2dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2E0u;
        goto label_23d2e0;
    }
    ctx->pc = 0x23D2D8u;
    SET_GPR_U32(ctx, 31, 0x23D2E0u);
    ctx->pc = 0x23D2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2D8u;
    // 0x23d2dc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x23D2D8u, 0x23D2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2E0u;
label_23d2e0:
    // 0x23d2e0: 0x10000007  b           . + 4 + (0x7 << 2)
label_23d2e4:
    if (ctx->pc == 0x23D2E4u) {
        ctx->pc = 0x23D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2E0u;
        // 0x23d2e4: 0xae53038c  sw          $s3, 0x38C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 908), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2E8u;
        goto label_23d2e8;
    }
    ctx->pc = 0x23D2E0u;
    {
        const bool branch_taken_0x23d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2E0u;
        // 0x23d2e4: 0xae53038c  sw          $s3, 0x38C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 908), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d2e0) {
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D2E8u;
label_23d2e8:
    // 0x23d2e8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23d2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23d2ec:
    // 0x23d2ec: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_23d2f0:
    if (ctx->pc == 0x23D2F0u) {
        ctx->pc = 0x23D2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2ECu;
        // 0x23d2f0: 0xae53038c  sw          $s3, 0x38C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 908), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2F4u;
        goto label_23d2f4;
    }
    ctx->pc = 0x23D2ECu;
    {
        const bool branch_taken_0x23d2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d2ec) {
            ctx->pc = 0x23D2F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D2ECu;
            // 0x23d2f0: 0xae53038c  sw          $s3, 0x38C($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 908), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D300u;
            goto label_23d300;
        }
    }
    ctx->pc = 0x23D2F4u;
label_23d2f4:
    // 0x23d2f4: 0xc0bd62c  jal         func_2F58B0
label_23d2f8:
    if (ctx->pc == 0x23D2F8u) {
        ctx->pc = 0x23D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D2F4u;
        // 0x23d2f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D2FCu;
        goto label_23d2fc;
    }
    ctx->pc = 0x23D2F4u;
    SET_GPR_U32(ctx, 31, 0x23D2FCu);
    ctx->pc = 0x23D2F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D2F4u;
    // 0x23d2f8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F58B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F58B0u, 0x23D2F4u, 0x23D2FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D2FCu;
label_23d2fc:
    // 0x23d2fc: 0xae53038c  sw          $s3, 0x38C($s2)
    ctx->pc = 0x23d2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 908), GPR_U32(ctx, 19));
label_23d300:
    // 0x23d300: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d304:
    // 0x23d304: 0x3c050004  lui         $a1, 0x4
    ctx->pc = 0x23d304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4 << 16));
label_23d308:
    // 0x23d308: 0xc08fed2  jal         func_23FB48
label_23d30c:
    if (ctx->pc == 0x23D30Cu) {
        ctx->pc = 0x23D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D308u;
        // 0x23d30c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D310u;
        goto label_23d310;
    }
    ctx->pc = 0x23D308u;
    SET_GPR_U32(ctx, 31, 0x23D310u);
    ctx->pc = 0x23D30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D308u;
    // 0x23d30c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D308u, 0x23D310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D310u;
label_23d310:
    // 0x23d310: 0x3c1e0049  lui         $fp, 0x49
    ctx->pc = 0x23d310u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)73 << 16));
label_23d314:
    // 0x23d314: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d314u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d318:
    // 0x23d318: 0x3c050008  lui         $a1, 0x8
    ctx->pc = 0x23d318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)8 << 16));
label_23d31c:
    // 0x23d31c: 0xc08fed2  jal         func_23FB48
label_23d320:
    if (ctx->pc == 0x23D320u) {
        ctx->pc = 0x23D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D31Cu;
        // 0x23d320: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D324u;
        goto label_23d324;
    }
    ctx->pc = 0x23D31Cu;
    SET_GPR_U32(ctx, 31, 0x23D324u);
    ctx->pc = 0x23D320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D31Cu;
    // 0x23d320: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D31Cu, 0x23D324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D324u;
label_23d324:
    // 0x23d324: 0xae72038c  sw          $s2, 0x38C($s3)
    ctx->pc = 0x23d324u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 908), GPR_U32(ctx, 18));
label_23d328:
    // 0x23d328: 0x27b500a0  addiu       $s5, $sp, 0xA0
    ctx->pc = 0x23d328u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_23d32c:
    // 0x23d32c: 0x27b400b0  addiu       $s4, $sp, 0xB0
    ctx->pc = 0x23d32cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_23d330:
    // 0x23d330: 0x27b70100  addiu       $s7, $sp, 0x100
    ctx->pc = 0x23d330u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_23d334:
    // 0x23d334: 0x8e43038c  lw          $v1, 0x38C($s2)
    ctx->pc = 0x23d334u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 908)));
label_23d338:
    // 0x23d338: 0x27b100f0  addiu       $s1, $sp, 0xF0
    ctx->pc = 0x23d338u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_23d33c:
    // 0x23d33c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x23d33cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_23d340:
    // 0x23d340: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23d340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23d344:
    // 0x23d344: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_23d348:
    if (ctx->pc == 0x23D348u) {
        ctx->pc = 0x23D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D344u;
        // 0x23d348: 0x27b600e0  addiu       $s6, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D34Cu;
        goto label_23d34c;
    }
    ctx->pc = 0x23D344u;
    {
        const bool branch_taken_0x23d344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D344u;
        // 0x23d348: 0x27b600e0  addiu       $s6, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d344) {
            ctx->pc = 0x23D394u;
            goto label_23d394;
        }
    }
    ctx->pc = 0x23D34Cu;
label_23d34c:
    // 0x23d34c: 0x8e450334  lw          $a1, 0x334($s2)
    ctx->pc = 0x23d34cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 820)));
label_23d350:
    // 0x23d350: 0x8ca201e4  lw          $v0, 0x1E4($a1)
    ctx->pc = 0x23d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 484)));
label_23d354:
    // 0x23d354: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_23d358:
    if (ctx->pc == 0x23D358u) {
        ctx->pc = 0x23D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D354u;
        // 0x23d358: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D35Cu;
        goto label_23d35c;
    }
    ctx->pc = 0x23D354u;
    {
        const bool branch_taken_0x23d354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D354u;
        // 0x23d358: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d354) {
            ctx->pc = 0x23D388u;
            goto label_23d388;
        }
    }
    ctx->pc = 0x23D35Cu;
label_23d35c:
    // 0x23d35c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23d35cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d360:
    // 0x23d360: 0x24a301ec  addiu       $v1, $a1, 0x1EC
    ctx->pc = 0x23d360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 492));
label_23d364:
    // 0x23d364: 0x0  nop
    ctx->pc = 0x23d364u;
    // NOP
label_23d368:
    // 0x23d368: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23d36c:
    // 0x23d36c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_23d370:
    if (ctx->pc == 0x23D370u) {
        ctx->pc = 0x23D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D36Cu;
        // 0x23d370: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D374u;
        goto label_23d374;
    }
    ctx->pc = 0x23D36Cu;
    {
        const bool branch_taken_0x23d36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23d36c) {
            ctx->pc = 0x23D370u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D36Cu;
            // 0x23d370: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D38Cu;
            goto label_23d38c;
        }
    }
    ctx->pc = 0x23D374u;
label_23d374:
    // 0x23d374: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x23d374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_23d378:
    // 0x23d378: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x23d378u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_23d37c:
    // 0x23d37c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_23d380:
    if (ctx->pc == 0x23D380u) {
        ctx->pc = 0x23D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D37Cu;
        // 0x23d380: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D384u;
        goto label_23d384;
    }
    ctx->pc = 0x23D37Cu;
    {
        const bool branch_taken_0x23d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23D380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D37Cu;
        // 0x23d380: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d37c) {
            ctx->pc = 0x23D368u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_23d368;
        }
    }
    ctx->pc = 0x23D384u;
label_23d384:
    // 0x23d384: 0x8ca201e8  lw          $v0, 0x1E8($a1)
    ctx->pc = 0x23d384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 488)));
label_23d388:
    // 0x23d388: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23d388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_23d38c:
    // 0x23d38c: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x23d38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d390:
    // 0x23d390: 0xe4c012b0  swc1        $f0, 0x12B0($a2)
    ctx->pc = 0x23d390u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4784), bits); }
label_23d394:
    // 0x23d394: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x23d394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
label_23d398:
    // 0x23d398: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x23d398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23d39c:
    // 0x23d39c: 0xac500028  sw          $s0, 0x28($v0)
    ctx->pc = 0x23d39cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 16));
label_23d3a0:
    // 0x23d3a0: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x23d3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_23d3a4:
    // 0x23d3a4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23d3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23d3a8:
    // 0x23d3a8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23d3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_23d3ac:
    // 0x23d3ac: 0x40f809  jalr        $v0
label_23d3b0:
    if (ctx->pc == 0x23D3B0u) {
        ctx->pc = 0x23D3B4u;
        goto label_23d3b4;
    }
    ctx->pc = 0x23D3ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D3B4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D3ACu, 0x23D3B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D3B4u;
label_23d3b4:
    // 0x23d3b4: 0x8e44010c  lw          $a0, 0x10C($s2)
    ctx->pc = 0x23d3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 268)));
label_23d3b8:
    // 0x23d3b8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23d3bc:
    // 0x23d3bc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x23d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_23d3c0:
    // 0x23d3c0: 0x40f809  jalr        $v0
label_23d3c4:
    if (ctx->pc == 0x23D3C4u) {
        ctx->pc = 0x23D3C8u;
        goto label_23d3c8;
    }
    ctx->pc = 0x23D3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D3C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D3C0u, 0x23D3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D3C8u;
label_23d3c8:
    // 0x23d3c8: 0x8e6300c4  lw          $v1, 0xC4($s3)
    ctx->pc = 0x23d3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 196)));
label_23d3cc:
    // 0x23d3cc: 0xac700028  sw          $s0, 0x28($v1)
    ctx->pc = 0x23d3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 16));
label_23d3d0:
    // 0x23d3d0: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x23d3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_23d3d4:
    // 0x23d3d4: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23d3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23d3d8:
    // 0x23d3d8: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x23d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_23d3dc:
    // 0x23d3dc: 0x40f809  jalr        $v0
label_23d3e0:
    if (ctx->pc == 0x23D3E0u) {
        ctx->pc = 0x23D3E4u;
        goto label_23d3e4;
    }
    ctx->pc = 0x23D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D3E4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D3DCu, 0x23D3E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D3E4u;
label_23d3e4:
    // 0x23d3e4: 0x8e64010c  lw          $a0, 0x10C($s3)
    ctx->pc = 0x23d3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_23d3e8:
    // 0x23d3e8: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x23d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_23d3ec:
    // 0x23d3ec: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x23d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_23d3f0:
    // 0x23d3f0: 0x40f809  jalr        $v0
label_23d3f4:
    if (ctx->pc == 0x23D3F4u) {
        ctx->pc = 0x23D3F8u;
        goto label_23d3f8;
    }
    ctx->pc = 0x23D3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23D3F8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D3F0u, 0x23D3F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23D3F8u;
label_23d3f8:
    // 0x23d3f8: 0xc0953c0  jal         func_254F00
label_23d3fc:
    if (ctx->pc == 0x23D3FCu) {
        ctx->pc = 0x23D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D3F8u;
        // 0x23d3fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D400u;
        goto label_23d400;
    }
    ctx->pc = 0x23D3F8u;
    SET_GPR_U32(ctx, 31, 0x23D400u);
    ctx->pc = 0x23D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D3F8u;
    // 0x23d3fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254F00u, 0x23D3F8u, 0x23D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D400u;
label_23d400:
    // 0x23d400: 0x27c4a080  addiu       $a0, $fp, -0x5F80
    ctx->pc = 0x23d400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294942848));
label_23d404:
    // 0x23d404: 0xc049548  jal         func_125520
label_23d408:
    if (ctx->pc == 0x23D408u) {
        ctx->pc = 0x23D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D404u;
        // 0x23d408: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D40Cu;
        goto label_23d40c;
    }
    ctx->pc = 0x23D404u;
    SET_GPR_U32(ctx, 31, 0x23D40Cu);
    ctx->pc = 0x23D408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D404u;
    // 0x23d408: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x125520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x125520u, 0x23D404u, 0x23D40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D40Cu;
label_23d40c:
    // 0x23d40c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d40cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d410:
    // 0x23d410: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x23d410u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_23d414:
    // 0x23d414: 0xc08fed2  jal         func_23FB48
label_23d418:
    if (ctx->pc == 0x23D418u) {
        ctx->pc = 0x23D418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D414u;
        // 0x23d418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D41Cu;
        goto label_23d41c;
    }
    ctx->pc = 0x23D414u;
    SET_GPR_U32(ctx, 31, 0x23D41Cu);
    ctx->pc = 0x23D418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D414u;
    // 0x23d418: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D414u, 0x23D41Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D41Cu;
label_23d41c:
    // 0x23d41c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d420:
    // 0x23d420: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x23d420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_23d424:
    // 0x23d424: 0xc08fed2  jal         func_23FB48
label_23d428:
    if (ctx->pc == 0x23D428u) {
        ctx->pc = 0x23D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D424u;
        // 0x23d428: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D42Cu;
        goto label_23d42c;
    }
    ctx->pc = 0x23D424u;
    SET_GPR_U32(ctx, 31, 0x23D42Cu);
    ctx->pc = 0x23D428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D424u;
    // 0x23d428: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D424u, 0x23D42Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D42Cu;
label_23d42c:
    // 0x23d42c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d430:
    // 0x23d430: 0x24050400  addiu       $a1, $zero, 0x400
    ctx->pc = 0x23d430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_23d434:
    // 0x23d434: 0xc08fed2  jal         func_23FB48
label_23d438:
    if (ctx->pc == 0x23D438u) {
        ctx->pc = 0x23D438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D434u;
        // 0x23d438: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D43Cu;
        goto label_23d43c;
    }
    ctx->pc = 0x23D434u;
    SET_GPR_U32(ctx, 31, 0x23D43Cu);
    ctx->pc = 0x23D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D434u;
    // 0x23d438: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D434u, 0x23D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D43Cu;
label_23d43c:
    // 0x23d43c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d43cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d440:
    // 0x23d440: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x23d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_23d444:
    // 0x23d444: 0xc08fed2  jal         func_23FB48
label_23d448:
    if (ctx->pc == 0x23D448u) {
        ctx->pc = 0x23D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D444u;
        // 0x23d448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D44Cu;
        goto label_23d44c;
    }
    ctx->pc = 0x23D444u;
    SET_GPR_U32(ctx, 31, 0x23D44Cu);
    ctx->pc = 0x23D448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D444u;
    // 0x23d448: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23FB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23FB48u, 0x23D444u, 0x23D44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D44Cu;
label_23d44c:
    // 0x23d44c: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x23d44cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
label_23d450:
    // 0x23d450: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23d450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_23d454:
    // 0x23d454: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_23d458:
    if (ctx->pc == 0x23D458u) {
        ctx->pc = 0x23D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D454u;
        // 0x23d458: 0x8e640104  lw          $a0, 0x104($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D45Cu;
        goto label_23d45c;
    }
    ctx->pc = 0x23D454u;
    {
        const bool branch_taken_0x23d454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23d454) {
            ctx->pc = 0x23D458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23D454u;
            // 0x23d458: 0x8e640104  lw          $a0, 0x104($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23D468u;
            goto label_23d468;
        }
    }
    ctx->pc = 0x23D45Cu;
label_23d45c:
    // 0x23d45c: 0xc08f956  jal         func_23E558
label_23d460:
    if (ctx->pc == 0x23D460u) {
        ctx->pc = 0x23D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D45Cu;
        // 0x23d460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D464u;
        goto label_23d464;
    }
    ctx->pc = 0x23D45Cu;
    SET_GPR_U32(ctx, 31, 0x23D464u);
    ctx->pc = 0x23D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D45Cu;
    // 0x23d460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x23E558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23E558u, 0x23D45Cu, 0x23D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D464u;
label_23d464:
    // 0x23d464: 0x8e640104  lw          $a0, 0x104($s3)
    ctx->pc = 0x23d464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_23d468:
    // 0x23d468: 0x8e450104  lw          $a1, 0x104($s2)
    ctx->pc = 0x23d468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_23d46c:
    // 0x23d46c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x23d46cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23d470:
    // 0x23d470: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x23d470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23d474:
    // 0x23d474: 0x24630070  addiu       $v1, $v1, 0x70
    ctx->pc = 0x23d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_23d478:
    // 0x23d478: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23d478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_23d47c:
    // 0x23d47c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x23d47cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_23d480:
    // 0x23d480: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x23d480u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23d484:
    // 0x23d484: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23d484u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23d488:
    // 0x23d488: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x23d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d48c:
    // 0x23d48c: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x23d48cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d490:
    // 0x23d490: 0xc7a100b4  lwc1        $f1, 0xB4($sp)
    ctx->pc = 0x23d490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d494:
    // 0x23d494: 0xc7a200b8  lwc1        $f2, 0xB8($sp)
    ctx->pc = 0x23d494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d498:
    // 0x23d498: 0xc7a300bc  lwc1        $f3, 0xBC($sp)
    ctx->pc = 0x23d498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d49c:
    // 0x23d49c: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x23d49cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_23d4a0:
    // 0x23d4a0: 0xe7a100a4  swc1        $f1, 0xA4($sp)
    ctx->pc = 0x23d4a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
label_23d4a4:
    // 0x23d4a4: 0xe7a200a8  swc1        $f2, 0xA8($sp)
    ctx->pc = 0x23d4a4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
label_23d4a8:
    // 0x23d4a8: 0xe7a300ac  swc1        $f3, 0xAC($sp)
    ctx->pc = 0x23d4a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 172), bits); }
label_23d4ac:
    // 0x23d4ac: 0x8e620104  lw          $v0, 0x104($s3)
    ctx->pc = 0x23d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 260)));
label_23d4b0:
    // 0x23d4b0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x23d4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_23d4b4:
    // 0x23d4b4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x23d4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_23d4b8:
    // 0x23d4b8: 0xc4600074  lwc1        $f0, 0x74($v1)
    ctx->pc = 0x23d4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d4bc:
    // 0x23d4bc: 0xc4810074  lwc1        $f1, 0x74($a0)
    ctx->pc = 0x23d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d4c0:
    // 0x23d4c0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x23d4c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_23d4c4:
    // 0x23d4c4: 0x0  nop
    ctx->pc = 0x23d4c4u;
    // NOP
label_23d4c8:
    // 0x23d4c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_23d4cc:
    if (ctx->pc == 0x23D4CCu) {
        ctx->pc = 0x23D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C8u;
        // 0x23d4cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D4D0u;
        goto label_23d4d0;
    }
    ctx->pc = 0x23D4C8u;
    {
        const bool branch_taken_0x23d4c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x23D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4C8u;
        // 0x23d4cc: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23d4c8) {
            ctx->pc = 0x23D4D4u;
            goto label_23d4d4;
        }
    }
    ctx->pc = 0x23D4D0u;
label_23d4d0:
    // 0x23d4d0: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x23d4d0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_23d4d4:
    // 0x23d4d4: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x23d4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_23d4d8:
    // 0x23d4d8: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x23d4d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_23d4dc:
    // 0x23d4dc: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x23d4dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23d4e0:
    // 0x23d4e0: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x23d4e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23d4e4:
    // 0x23d4e4: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x23d4e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_23d4e8:
    // 0x23d4e8: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x23d4e8u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_23d4ec:
    // 0x23d4ec: 0x4a0003bf  vwaitq
    ctx->pc = 0x23d4ecu;
    // VWAITQ (Q already resolved in this runtime)
label_23d4f0:
    // 0x23d4f0: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x23d4f0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23d4f4:
    // 0x23d4f4: 0xfba100a0  sqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x23d4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d4f8:
    // 0x23d4f8: 0xc0b1488  jal         func_2C5220
label_23d4fc:
    if (ctx->pc == 0x23D4FCu) {
        ctx->pc = 0x23D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D4F8u;
        // 0x23d4fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D500u;
        goto label_23d500;
    }
    ctx->pc = 0x23D4F8u;
    SET_GPR_U32(ctx, 31, 0x23D500u);
    ctx->pc = 0x23D4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D4F8u;
    // 0x23d4fc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5220u, 0x23D4F8u, 0x23D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D500u;
label_23d500:
    // 0x23d500: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x23d500u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_23d504:
    // 0x23d504: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x23d504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d508:
    // 0x23d508: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x23d508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d50c:
    // 0x23d50c: 0xc7a100a8  lwc1        $f1, 0xA8($sp)
    ctx->pc = 0x23d50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d510:
    // 0x23d510: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23d510u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_23d514:
    // 0x23d514: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x23d514u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_23d518:
    // 0x23d518: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x23d518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_23d51c:
    // 0x23d51c: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x23d51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_23d520:
    // 0x23d520: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x23d520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_23d524:
    // 0x23d524: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x23d524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_23d528:
    // 0x23d528: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x23d528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d52c:
    // 0x23d52c: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x23d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
label_23d530:
    // 0x23d530: 0x24505b40  addiu       $s0, $v0, 0x5B40
    ctx->pc = 0x23d530u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 23360));
label_23d534:
    // 0x23d534: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x23d534u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_23d538:
    // 0x23d538: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x23d538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d53c:
    // 0x23d53c: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x23d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_23d540:
    // 0x23d540: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23d540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23d544:
    // 0x23d544: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_23d548:
    // 0x23d548: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23d548u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23d54c:
    // 0x23d54c: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x23d54cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d550:
    // 0x23d550: 0xe6d40004  swc1        $f20, 0x4($s6)
    ctx->pc = 0x23d550u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_23d554:
    // 0x23d554: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23d554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23d558:
    // 0x23d558: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d55c:
    // 0x23d55c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d55cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23d560:
    // 0x23d560: 0xc44c96ac  lwc1        $f12, -0x6954($v0)
    ctx->pc = 0x23d560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23d564:
    // 0x23d564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d568:
    // 0x23d568: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23d568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d56c:
    // 0x23d56c: 0xc08e23a  jal         func_2388E8
label_23d570:
    if (ctx->pc == 0x23D570u) {
        ctx->pc = 0x23D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D56Cu;
        // 0x23d570: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D574u;
        goto label_23d574;
    }
    ctx->pc = 0x23D56Cu;
    SET_GPR_U32(ctx, 31, 0x23D574u);
    ctx->pc = 0x23D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D56Cu;
    // 0x23d570: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x23D56Cu, 0x23D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D574u;
label_23d574:
    // 0x23d574: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x23d574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d578:
    // 0x23d578: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x23d578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d57c:
    // 0x23d57c: 0xc7a200a8  lwc1        $f2, 0xA8($sp)
    ctx->pc = 0x23d57cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d580:
    // 0x23d580: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23d580u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_23d584:
    // 0x23d584: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x23d584u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_23d588:
    // 0x23d588: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x23d588u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_23d58c:
    // 0x23d58c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x23d58cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_23d590:
    // 0x23d590: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x23d590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_23d594:
    // 0x23d594: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x23d594u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_23d598:
    // 0x23d598: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x23d598u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_23d59c:
    // 0x23d59c: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x23d59cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_23d5a0:
    // 0x23d5a0: 0xfba100d0  sqc2        $vf1, 0xD0($sp)
    ctx->pc = 0x23d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d5a4:
    // 0x23d5a4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x23d5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d5a8:
    // 0x23d5a8: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x23d5a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d5ac:
    // 0x23d5ac: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x23d5acu;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_23d5b0:
    // 0x23d5b0: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x23d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_23d5b4:
    // 0x23d5b4: 0xe7a100f8  swc1        $f1, 0xF8($sp)
    ctx->pc = 0x23d5b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_23d5b8:
    // 0x23d5b8: 0xafa000fc  sw          $zero, 0xFC($sp)
    ctx->pc = 0x23d5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 0));
label_23d5bc:
    // 0x23d5bc: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x23d5bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_23d5c0:
    // 0x23d5c0: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x23d5c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_23d5c4:
    // 0x23d5c4: 0xfba100b0  sqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x23d5c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d5c8:
    // 0x23d5c8: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x23d5c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_23d5cc:
    // 0x23d5cc: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x23d5ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d5d0:
    // 0x23d5d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23d5d4:
    // 0x23d5d4: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x23d5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d5d8:
    // 0x23d5d8: 0xc4409710  lwc1        $f0, -0x68F0($v0)
    ctx->pc = 0x23d5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d5dc:
    // 0x23d5dc: 0xc7a200a4  lwc1        $f2, 0xA4($sp)
    ctx->pc = 0x23d5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d5e0:
    // 0x23d5e0: 0xc7a300a8  lwc1        $f3, 0xA8($sp)
    ctx->pc = 0x23d5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d5e4:
    // 0x23d5e4: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x23d5e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_23d5e8:
    // 0x23d5e8: 0xc7a400ac  lwc1        $f4, 0xAC($sp)
    ctx->pc = 0x23d5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_23d5ec:
    // 0x23d5ec: 0x46020082  mul.s       $f2, $f0, $f2
    ctx->pc = 0x23d5ecu;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_23d5f0:
    // 0x23d5f0: 0x8e430104  lw          $v1, 0x104($s2)
    ctx->pc = 0x23d5f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_23d5f4:
    // 0x23d5f4: 0x460300c2  mul.s       $f3, $f0, $f3
    ctx->pc = 0x23d5f4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
label_23d5f8:
    // 0x23d5f8: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x23d5f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
label_23d5fc:
    // 0x23d5fc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x23d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_23d600:
    // 0x23d600: 0xe7a10100  swc1        $f1, 0x100($sp)
    ctx->pc = 0x23d600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_23d604:
    // 0x23d604: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x23d604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_23d608:
    // 0x23d608: 0xe7a20104  swc1        $f2, 0x104($sp)
    ctx->pc = 0x23d608u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
label_23d60c:
    // 0x23d60c: 0xe7a30108  swc1        $f3, 0x108($sp)
    ctx->pc = 0x23d60cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
label_23d610:
    // 0x23d610: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x23d610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
label_23d614:
    // 0x23d614: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x23d614u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_23d618:
    // 0x23d618: 0xdae20000  lqc2        $vf2, 0x0($s7)
    ctx->pc = 0x23d618u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_23d61c:
    // 0x23d61c: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x23d61cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_23d620:
    // 0x23d620: 0xfba10110  sqc2        $vf1, 0x110($sp)
    ctx->pc = 0x23d620u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d624:
    // 0x23d624: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x23d624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_23d628:
    // 0x23d628: 0xc7a10114  lwc1        $f1, 0x114($sp)
    ctx->pc = 0x23d628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_23d62c:
    // 0x23d62c: 0xc7a20118  lwc1        $f2, 0x118($sp)
    ctx->pc = 0x23d62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_23d630:
    // 0x23d630: 0xc7a3011c  lwc1        $f3, 0x11C($sp)
    ctx->pc = 0x23d630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_23d634:
    // 0x23d634: 0xe7a000f0  swc1        $f0, 0xF0($sp)
    ctx->pc = 0x23d634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_23d638:
    // 0x23d638: 0xe7a100f4  swc1        $f1, 0xF4($sp)
    ctx->pc = 0x23d638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
label_23d63c:
    // 0x23d63c: 0xe7a200f8  swc1        $f2, 0xF8($sp)
    ctx->pc = 0x23d63cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_23d640:
    // 0x23d640: 0xe7a300fc  swc1        $f3, 0xFC($sp)
    ctx->pc = 0x23d640u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
label_23d644:
    // 0x23d644: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x23d644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
label_23d648:
    // 0x23d648: 0xfba100e0  sqc2        $vf1, 0xE0($sp)
    ctx->pc = 0x23d648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[1]));
label_23d64c:
    // 0x23d64c: 0xe6d40004  swc1        $f20, 0x4($s6)
    ctx->pc = 0x23d64cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 4), bits); }
label_23d650:
    // 0x23d650: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x23d650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_23d654:
    // 0x23d654: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x23d654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_23d658:
    // 0x23d658: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d65c:
    // 0x23d65c: 0xc44c96ac  lwc1        $f12, -0x6954($v0)
    ctx->pc = 0x23d65cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294940332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_23d660:
    // 0x23d660: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x23d660u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d664:
    // 0x23d664: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23d664u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23d668:
    // 0x23d668: 0xc08e23a  jal         func_2388E8
label_23d66c:
    if (ctx->pc == 0x23D66Cu) {
        ctx->pc = 0x23D66Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D668u;
        // 0x23d66c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D670u;
        goto label_23d670;
    }
    ctx->pc = 0x23D668u;
    SET_GPR_U32(ctx, 31, 0x23D670u);
    ctx->pc = 0x23D66Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D668u;
    // 0x23d66c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2388E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2388E8u, 0x23D668u, 0x23D670u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D670u;
label_23d670:
    // 0x23d670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x23d670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_23d674:
    // 0x23d674: 0xc0cda26  jal         func_336898
label_23d678:
    if (ctx->pc == 0x23D678u) {
        ctx->pc = 0x23D678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D674u;
        // 0x23d678: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D67Cu;
        goto label_23d67c;
    }
    ctx->pc = 0x23D674u;
    SET_GPR_U32(ctx, 31, 0x23D67Cu);
    ctx->pc = 0x23D678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D674u;
    // 0x23d678: 0x2405003e  addiu       $a1, $zero, 0x3E (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x23D674u, 0x23D67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D67Cu;
label_23d67c:
    // 0x23d67c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23d67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_23d680:
    // 0x23d680: 0xc0cda26  jal         func_336898
label_23d684:
    if (ctx->pc == 0x23D684u) {
        ctx->pc = 0x23D684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D680u;
        // 0x23d684: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D688u;
        goto label_23d688;
    }
    ctx->pc = 0x23D680u;
    SET_GPR_U32(ctx, 31, 0x23D688u);
    ctx->pc = 0x23D684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23D680u;
    // 0x23d684: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x23D680u, 0x23D688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23D688u;
label_23d688:
    // 0x23d688: 0xdfb00150  ld          $s0, 0x150($sp)
    ctx->pc = 0x23d688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_23d68c:
    // 0x23d68c: 0xdfb10158  ld          $s1, 0x158($sp)
    ctx->pc = 0x23d68cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_23d690:
    // 0x23d690: 0xdfb20160  ld          $s2, 0x160($sp)
    ctx->pc = 0x23d690u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_23d694:
    // 0x23d694: 0xdfb30168  ld          $s3, 0x168($sp)
    ctx->pc = 0x23d694u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_23d698:
    // 0x23d698: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x23d698u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_23d69c:
    // 0x23d69c: 0xdfb50178  ld          $s5, 0x178($sp)
    ctx->pc = 0x23d69cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 376)));
label_23d6a0:
    // 0x23d6a0: 0xdfb60180  ld          $s6, 0x180($sp)
    ctx->pc = 0x23d6a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_23d6a4:
    // 0x23d6a4: 0xdfb70188  ld          $s7, 0x188($sp)
    ctx->pc = 0x23d6a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 392)));
label_23d6a8:
    // 0x23d6a8: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x23d6a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_23d6ac:
    // 0x23d6ac: 0xdfbf0198  ld          $ra, 0x198($sp)
    ctx->pc = 0x23d6acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 408)));
label_23d6b0:
    // 0x23d6b0: 0xc7b901c8  lwc1        $f25, 0x1C8($sp)
    ctx->pc = 0x23d6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_23d6b4:
    // 0x23d6b4: 0xc7b801c0  lwc1        $f24, 0x1C0($sp)
    ctx->pc = 0x23d6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_23d6b8:
    // 0x23d6b8: 0xc7b701b8  lwc1        $f23, 0x1B8($sp)
    ctx->pc = 0x23d6b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_23d6bc:
    // 0x23d6bc: 0xc7b601b0  lwc1        $f22, 0x1B0($sp)
    ctx->pc = 0x23d6bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_23d6c0:
    // 0x23d6c0: 0xc7b501a8  lwc1        $f21, 0x1A8($sp)
    ctx->pc = 0x23d6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_23d6c4:
    // 0x23d6c4: 0xc7b401a0  lwc1        $f20, 0x1A0($sp)
    ctx->pc = 0x23d6c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_23d6c8:
    // 0x23d6c8: 0x3e00008  jr          $ra
label_23d6cc:
    if (ctx->pc == 0x23D6CCu) {
        ctx->pc = 0x23D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6C8u;
        // 0x23d6cc: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23D6D0u;
        goto label_fallthrough_0x23d6c8;
    }
    ctx->pc = 0x23D6C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23D6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23D6C8u;
        // 0x23d6cc: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23D6C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23d6c8:
    ctx->pc = 0x23D6D0u;
}
