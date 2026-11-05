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

// Function: sub_0026C868
// Address: 0x26c868 - 0x26da78
void sub_0026C868_0x26c868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C868_0x26c868");
#endif

    switch (ctx->pc) {
        case 0x26c868u: goto label_26c868;
        case 0x26c86cu: goto label_26c86c;
        case 0x26c870u: goto label_26c870;
        case 0x26c874u: goto label_26c874;
        case 0x26c878u: goto label_26c878;
        case 0x26c87cu: goto label_26c87c;
        case 0x26c880u: goto label_26c880;
        case 0x26c884u: goto label_26c884;
        case 0x26c888u: goto label_26c888;
        case 0x26c88cu: goto label_26c88c;
        case 0x26c890u: goto label_26c890;
        case 0x26c894u: goto label_26c894;
        case 0x26c898u: goto label_26c898;
        case 0x26c89cu: goto label_26c89c;
        case 0x26c8a0u: goto label_26c8a0;
        case 0x26c8a4u: goto label_26c8a4;
        case 0x26c8a8u: goto label_26c8a8;
        case 0x26c8acu: goto label_26c8ac;
        case 0x26c8b0u: goto label_26c8b0;
        case 0x26c8b4u: goto label_26c8b4;
        case 0x26c8b8u: goto label_26c8b8;
        case 0x26c8bcu: goto label_26c8bc;
        case 0x26c8c0u: goto label_26c8c0;
        case 0x26c8c4u: goto label_26c8c4;
        case 0x26c8c8u: goto label_26c8c8;
        case 0x26c8ccu: goto label_26c8cc;
        case 0x26c8d0u: goto label_26c8d0;
        case 0x26c8d4u: goto label_26c8d4;
        case 0x26c8d8u: goto label_26c8d8;
        case 0x26c8dcu: goto label_26c8dc;
        case 0x26c8e0u: goto label_26c8e0;
        case 0x26c8e4u: goto label_26c8e4;
        case 0x26c8e8u: goto label_26c8e8;
        case 0x26c8ecu: goto label_26c8ec;
        case 0x26c8f0u: goto label_26c8f0;
        case 0x26c8f4u: goto label_26c8f4;
        case 0x26c8f8u: goto label_26c8f8;
        case 0x26c8fcu: goto label_26c8fc;
        case 0x26c900u: goto label_26c900;
        case 0x26c904u: goto label_26c904;
        case 0x26c908u: goto label_26c908;
        case 0x26c90cu: goto label_26c90c;
        case 0x26c910u: goto label_26c910;
        case 0x26c914u: goto label_26c914;
        case 0x26c918u: goto label_26c918;
        case 0x26c91cu: goto label_26c91c;
        case 0x26c920u: goto label_26c920;
        case 0x26c924u: goto label_26c924;
        case 0x26c928u: goto label_26c928;
        case 0x26c92cu: goto label_26c92c;
        case 0x26c930u: goto label_26c930;
        case 0x26c934u: goto label_26c934;
        case 0x26c938u: goto label_26c938;
        case 0x26c93cu: goto label_26c93c;
        case 0x26c940u: goto label_26c940;
        case 0x26c944u: goto label_26c944;
        case 0x26c948u: goto label_26c948;
        case 0x26c94cu: goto label_26c94c;
        case 0x26c950u: goto label_26c950;
        case 0x26c954u: goto label_26c954;
        case 0x26c958u: goto label_26c958;
        case 0x26c95cu: goto label_26c95c;
        case 0x26c960u: goto label_26c960;
        case 0x26c964u: goto label_26c964;
        case 0x26c968u: goto label_26c968;
        case 0x26c96cu: goto label_26c96c;
        case 0x26c970u: goto label_26c970;
        case 0x26c974u: goto label_26c974;
        case 0x26c978u: goto label_26c978;
        case 0x26c97cu: goto label_26c97c;
        case 0x26c980u: goto label_26c980;
        case 0x26c984u: goto label_26c984;
        case 0x26c988u: goto label_26c988;
        case 0x26c98cu: goto label_26c98c;
        case 0x26c990u: goto label_26c990;
        case 0x26c994u: goto label_26c994;
        case 0x26c998u: goto label_26c998;
        case 0x26c99cu: goto label_26c99c;
        case 0x26c9a0u: goto label_26c9a0;
        case 0x26c9a4u: goto label_26c9a4;
        case 0x26c9a8u: goto label_26c9a8;
        case 0x26c9acu: goto label_26c9ac;
        case 0x26c9b0u: goto label_26c9b0;
        case 0x26c9b4u: goto label_26c9b4;
        case 0x26c9b8u: goto label_26c9b8;
        case 0x26c9bcu: goto label_26c9bc;
        case 0x26c9c0u: goto label_26c9c0;
        case 0x26c9c4u: goto label_26c9c4;
        case 0x26c9c8u: goto label_26c9c8;
        case 0x26c9ccu: goto label_26c9cc;
        case 0x26c9d0u: goto label_26c9d0;
        case 0x26c9d4u: goto label_26c9d4;
        case 0x26c9d8u: goto label_26c9d8;
        case 0x26c9dcu: goto label_26c9dc;
        case 0x26c9e0u: goto label_26c9e0;
        case 0x26c9e4u: goto label_26c9e4;
        case 0x26c9e8u: goto label_26c9e8;
        case 0x26c9ecu: goto label_26c9ec;
        case 0x26c9f0u: goto label_26c9f0;
        case 0x26c9f4u: goto label_26c9f4;
        case 0x26c9f8u: goto label_26c9f8;
        case 0x26c9fcu: goto label_26c9fc;
        case 0x26ca00u: goto label_26ca00;
        case 0x26ca04u: goto label_26ca04;
        case 0x26ca08u: goto label_26ca08;
        case 0x26ca0cu: goto label_26ca0c;
        case 0x26ca10u: goto label_26ca10;
        case 0x26ca14u: goto label_26ca14;
        case 0x26ca18u: goto label_26ca18;
        case 0x26ca1cu: goto label_26ca1c;
        case 0x26ca20u: goto label_26ca20;
        case 0x26ca24u: goto label_26ca24;
        case 0x26ca28u: goto label_26ca28;
        case 0x26ca2cu: goto label_26ca2c;
        case 0x26ca30u: goto label_26ca30;
        case 0x26ca34u: goto label_26ca34;
        case 0x26ca38u: goto label_26ca38;
        case 0x26ca3cu: goto label_26ca3c;
        case 0x26ca40u: goto label_26ca40;
        case 0x26ca44u: goto label_26ca44;
        case 0x26ca48u: goto label_26ca48;
        case 0x26ca4cu: goto label_26ca4c;
        case 0x26ca50u: goto label_26ca50;
        case 0x26ca54u: goto label_26ca54;
        case 0x26ca58u: goto label_26ca58;
        case 0x26ca5cu: goto label_26ca5c;
        case 0x26ca60u: goto label_26ca60;
        case 0x26ca64u: goto label_26ca64;
        case 0x26ca68u: goto label_26ca68;
        case 0x26ca6cu: goto label_26ca6c;
        case 0x26ca70u: goto label_26ca70;
        case 0x26ca74u: goto label_26ca74;
        case 0x26ca78u: goto label_26ca78;
        case 0x26ca7cu: goto label_26ca7c;
        case 0x26ca80u: goto label_26ca80;
        case 0x26ca84u: goto label_26ca84;
        case 0x26ca88u: goto label_26ca88;
        case 0x26ca8cu: goto label_26ca8c;
        case 0x26ca90u: goto label_26ca90;
        case 0x26ca94u: goto label_26ca94;
        case 0x26ca98u: goto label_26ca98;
        case 0x26ca9cu: goto label_26ca9c;
        case 0x26caa0u: goto label_26caa0;
        case 0x26caa4u: goto label_26caa4;
        case 0x26caa8u: goto label_26caa8;
        case 0x26caacu: goto label_26caac;
        case 0x26cab0u: goto label_26cab0;
        case 0x26cab4u: goto label_26cab4;
        case 0x26cab8u: goto label_26cab8;
        case 0x26cabcu: goto label_26cabc;
        case 0x26cac0u: goto label_26cac0;
        case 0x26cac4u: goto label_26cac4;
        case 0x26cac8u: goto label_26cac8;
        case 0x26caccu: goto label_26cacc;
        case 0x26cad0u: goto label_26cad0;
        case 0x26cad4u: goto label_26cad4;
        case 0x26cad8u: goto label_26cad8;
        case 0x26cadcu: goto label_26cadc;
        case 0x26cae0u: goto label_26cae0;
        case 0x26cae4u: goto label_26cae4;
        case 0x26cae8u: goto label_26cae8;
        case 0x26caecu: goto label_26caec;
        case 0x26caf0u: goto label_26caf0;
        case 0x26caf4u: goto label_26caf4;
        case 0x26caf8u: goto label_26caf8;
        case 0x26cafcu: goto label_26cafc;
        case 0x26cb00u: goto label_26cb00;
        case 0x26cb04u: goto label_26cb04;
        case 0x26cb08u: goto label_26cb08;
        case 0x26cb0cu: goto label_26cb0c;
        case 0x26cb10u: goto label_26cb10;
        case 0x26cb14u: goto label_26cb14;
        case 0x26cb18u: goto label_26cb18;
        case 0x26cb1cu: goto label_26cb1c;
        case 0x26cb20u: goto label_26cb20;
        case 0x26cb24u: goto label_26cb24;
        case 0x26cb28u: goto label_26cb28;
        case 0x26cb2cu: goto label_26cb2c;
        case 0x26cb30u: goto label_26cb30;
        case 0x26cb34u: goto label_26cb34;
        case 0x26cb38u: goto label_26cb38;
        case 0x26cb3cu: goto label_26cb3c;
        case 0x26cb40u: goto label_26cb40;
        case 0x26cb44u: goto label_26cb44;
        case 0x26cb48u: goto label_26cb48;
        case 0x26cb4cu: goto label_26cb4c;
        case 0x26cb50u: goto label_26cb50;
        case 0x26cb54u: goto label_26cb54;
        case 0x26cb58u: goto label_26cb58;
        case 0x26cb5cu: goto label_26cb5c;
        case 0x26cb60u: goto label_26cb60;
        case 0x26cb64u: goto label_26cb64;
        case 0x26cb68u: goto label_26cb68;
        case 0x26cb6cu: goto label_26cb6c;
        case 0x26cb70u: goto label_26cb70;
        case 0x26cb74u: goto label_26cb74;
        case 0x26cb78u: goto label_26cb78;
        case 0x26cb7cu: goto label_26cb7c;
        case 0x26cb80u: goto label_26cb80;
        case 0x26cb84u: goto label_26cb84;
        case 0x26cb88u: goto label_26cb88;
        case 0x26cb8cu: goto label_26cb8c;
        case 0x26cb90u: goto label_26cb90;
        case 0x26cb94u: goto label_26cb94;
        case 0x26cb98u: goto label_26cb98;
        case 0x26cb9cu: goto label_26cb9c;
        case 0x26cba0u: goto label_26cba0;
        case 0x26cba4u: goto label_26cba4;
        case 0x26cba8u: goto label_26cba8;
        case 0x26cbacu: goto label_26cbac;
        case 0x26cbb0u: goto label_26cbb0;
        case 0x26cbb4u: goto label_26cbb4;
        case 0x26cbb8u: goto label_26cbb8;
        case 0x26cbbcu: goto label_26cbbc;
        case 0x26cbc0u: goto label_26cbc0;
        case 0x26cbc4u: goto label_26cbc4;
        case 0x26cbc8u: goto label_26cbc8;
        case 0x26cbccu: goto label_26cbcc;
        case 0x26cbd0u: goto label_26cbd0;
        case 0x26cbd4u: goto label_26cbd4;
        case 0x26cbd8u: goto label_26cbd8;
        case 0x26cbdcu: goto label_26cbdc;
        case 0x26cbe0u: goto label_26cbe0;
        case 0x26cbe4u: goto label_26cbe4;
        case 0x26cbe8u: goto label_26cbe8;
        case 0x26cbecu: goto label_26cbec;
        case 0x26cbf0u: goto label_26cbf0;
        case 0x26cbf4u: goto label_26cbf4;
        case 0x26cbf8u: goto label_26cbf8;
        case 0x26cbfcu: goto label_26cbfc;
        case 0x26cc00u: goto label_26cc00;
        case 0x26cc04u: goto label_26cc04;
        case 0x26cc08u: goto label_26cc08;
        case 0x26cc0cu: goto label_26cc0c;
        case 0x26cc10u: goto label_26cc10;
        case 0x26cc14u: goto label_26cc14;
        case 0x26cc18u: goto label_26cc18;
        case 0x26cc1cu: goto label_26cc1c;
        case 0x26cc20u: goto label_26cc20;
        case 0x26cc24u: goto label_26cc24;
        case 0x26cc28u: goto label_26cc28;
        case 0x26cc2cu: goto label_26cc2c;
        case 0x26cc30u: goto label_26cc30;
        case 0x26cc34u: goto label_26cc34;
        case 0x26cc38u: goto label_26cc38;
        case 0x26cc3cu: goto label_26cc3c;
        case 0x26cc40u: goto label_26cc40;
        case 0x26cc44u: goto label_26cc44;
        case 0x26cc48u: goto label_26cc48;
        case 0x26cc4cu: goto label_26cc4c;
        case 0x26cc50u: goto label_26cc50;
        case 0x26cc54u: goto label_26cc54;
        case 0x26cc58u: goto label_26cc58;
        case 0x26cc5cu: goto label_26cc5c;
        case 0x26cc60u: goto label_26cc60;
        case 0x26cc64u: goto label_26cc64;
        case 0x26cc68u: goto label_26cc68;
        case 0x26cc6cu: goto label_26cc6c;
        case 0x26cc70u: goto label_26cc70;
        case 0x26cc74u: goto label_26cc74;
        case 0x26cc78u: goto label_26cc78;
        case 0x26cc7cu: goto label_26cc7c;
        case 0x26cc80u: goto label_26cc80;
        case 0x26cc84u: goto label_26cc84;
        case 0x26cc88u: goto label_26cc88;
        case 0x26cc8cu: goto label_26cc8c;
        case 0x26cc90u: goto label_26cc90;
        case 0x26cc94u: goto label_26cc94;
        case 0x26cc98u: goto label_26cc98;
        case 0x26cc9cu: goto label_26cc9c;
        case 0x26cca0u: goto label_26cca0;
        case 0x26cca4u: goto label_26cca4;
        case 0x26cca8u: goto label_26cca8;
        case 0x26ccacu: goto label_26ccac;
        case 0x26ccb0u: goto label_26ccb0;
        case 0x26ccb4u: goto label_26ccb4;
        case 0x26ccb8u: goto label_26ccb8;
        case 0x26ccbcu: goto label_26ccbc;
        case 0x26ccc0u: goto label_26ccc0;
        case 0x26ccc4u: goto label_26ccc4;
        case 0x26ccc8u: goto label_26ccc8;
        case 0x26ccccu: goto label_26cccc;
        case 0x26ccd0u: goto label_26ccd0;
        case 0x26ccd4u: goto label_26ccd4;
        case 0x26ccd8u: goto label_26ccd8;
        case 0x26ccdcu: goto label_26ccdc;
        case 0x26cce0u: goto label_26cce0;
        case 0x26cce4u: goto label_26cce4;
        case 0x26cce8u: goto label_26cce8;
        case 0x26ccecu: goto label_26ccec;
        case 0x26ccf0u: goto label_26ccf0;
        case 0x26ccf4u: goto label_26ccf4;
        case 0x26ccf8u: goto label_26ccf8;
        case 0x26ccfcu: goto label_26ccfc;
        case 0x26cd00u: goto label_26cd00;
        case 0x26cd04u: goto label_26cd04;
        case 0x26cd08u: goto label_26cd08;
        case 0x26cd0cu: goto label_26cd0c;
        case 0x26cd10u: goto label_26cd10;
        case 0x26cd14u: goto label_26cd14;
        case 0x26cd18u: goto label_26cd18;
        case 0x26cd1cu: goto label_26cd1c;
        case 0x26cd20u: goto label_26cd20;
        case 0x26cd24u: goto label_26cd24;
        case 0x26cd28u: goto label_26cd28;
        case 0x26cd2cu: goto label_26cd2c;
        case 0x26cd30u: goto label_26cd30;
        case 0x26cd34u: goto label_26cd34;
        case 0x26cd38u: goto label_26cd38;
        case 0x26cd3cu: goto label_26cd3c;
        case 0x26cd40u: goto label_26cd40;
        case 0x26cd44u: goto label_26cd44;
        case 0x26cd48u: goto label_26cd48;
        case 0x26cd4cu: goto label_26cd4c;
        case 0x26cd50u: goto label_26cd50;
        case 0x26cd54u: goto label_26cd54;
        case 0x26cd58u: goto label_26cd58;
        case 0x26cd5cu: goto label_26cd5c;
        case 0x26cd60u: goto label_26cd60;
        case 0x26cd64u: goto label_26cd64;
        case 0x26cd68u: goto label_26cd68;
        case 0x26cd6cu: goto label_26cd6c;
        case 0x26cd70u: goto label_26cd70;
        case 0x26cd74u: goto label_26cd74;
        case 0x26cd78u: goto label_26cd78;
        case 0x26cd7cu: goto label_26cd7c;
        case 0x26cd80u: goto label_26cd80;
        case 0x26cd84u: goto label_26cd84;
        case 0x26cd88u: goto label_26cd88;
        case 0x26cd8cu: goto label_26cd8c;
        case 0x26cd90u: goto label_26cd90;
        case 0x26cd94u: goto label_26cd94;
        case 0x26cd98u: goto label_26cd98;
        case 0x26cd9cu: goto label_26cd9c;
        case 0x26cda0u: goto label_26cda0;
        case 0x26cda4u: goto label_26cda4;
        case 0x26cda8u: goto label_26cda8;
        case 0x26cdacu: goto label_26cdac;
        case 0x26cdb0u: goto label_26cdb0;
        case 0x26cdb4u: goto label_26cdb4;
        case 0x26cdb8u: goto label_26cdb8;
        case 0x26cdbcu: goto label_26cdbc;
        case 0x26cdc0u: goto label_26cdc0;
        case 0x26cdc4u: goto label_26cdc4;
        case 0x26cdc8u: goto label_26cdc8;
        case 0x26cdccu: goto label_26cdcc;
        case 0x26cdd0u: goto label_26cdd0;
        case 0x26cdd4u: goto label_26cdd4;
        case 0x26cdd8u: goto label_26cdd8;
        case 0x26cddcu: goto label_26cddc;
        case 0x26cde0u: goto label_26cde0;
        case 0x26cde4u: goto label_26cde4;
        case 0x26cde8u: goto label_26cde8;
        case 0x26cdecu: goto label_26cdec;
        case 0x26cdf0u: goto label_26cdf0;
        case 0x26cdf4u: goto label_26cdf4;
        case 0x26cdf8u: goto label_26cdf8;
        case 0x26cdfcu: goto label_26cdfc;
        case 0x26ce00u: goto label_26ce00;
        case 0x26ce04u: goto label_26ce04;
        case 0x26ce08u: goto label_26ce08;
        case 0x26ce0cu: goto label_26ce0c;
        case 0x26ce10u: goto label_26ce10;
        case 0x26ce14u: goto label_26ce14;
        case 0x26ce18u: goto label_26ce18;
        case 0x26ce1cu: goto label_26ce1c;
        case 0x26ce20u: goto label_26ce20;
        case 0x26ce24u: goto label_26ce24;
        case 0x26ce28u: goto label_26ce28;
        case 0x26ce2cu: goto label_26ce2c;
        case 0x26ce30u: goto label_26ce30;
        case 0x26ce34u: goto label_26ce34;
        case 0x26ce38u: goto label_26ce38;
        case 0x26ce3cu: goto label_26ce3c;
        case 0x26ce40u: goto label_26ce40;
        case 0x26ce44u: goto label_26ce44;
        case 0x26ce48u: goto label_26ce48;
        case 0x26ce4cu: goto label_26ce4c;
        case 0x26ce50u: goto label_26ce50;
        case 0x26ce54u: goto label_26ce54;
        case 0x26ce58u: goto label_26ce58;
        case 0x26ce5cu: goto label_26ce5c;
        case 0x26ce60u: goto label_26ce60;
        case 0x26ce64u: goto label_26ce64;
        case 0x26ce68u: goto label_26ce68;
        case 0x26ce6cu: goto label_26ce6c;
        case 0x26ce70u: goto label_26ce70;
        case 0x26ce74u: goto label_26ce74;
        case 0x26ce78u: goto label_26ce78;
        case 0x26ce7cu: goto label_26ce7c;
        case 0x26ce80u: goto label_26ce80;
        case 0x26ce84u: goto label_26ce84;
        case 0x26ce88u: goto label_26ce88;
        case 0x26ce8cu: goto label_26ce8c;
        case 0x26ce90u: goto label_26ce90;
        case 0x26ce94u: goto label_26ce94;
        case 0x26ce98u: goto label_26ce98;
        case 0x26ce9cu: goto label_26ce9c;
        case 0x26cea0u: goto label_26cea0;
        case 0x26cea4u: goto label_26cea4;
        case 0x26cea8u: goto label_26cea8;
        case 0x26ceacu: goto label_26ceac;
        case 0x26ceb0u: goto label_26ceb0;
        case 0x26ceb4u: goto label_26ceb4;
        case 0x26ceb8u: goto label_26ceb8;
        case 0x26cebcu: goto label_26cebc;
        case 0x26cec0u: goto label_26cec0;
        case 0x26cec4u: goto label_26cec4;
        case 0x26cec8u: goto label_26cec8;
        case 0x26ceccu: goto label_26cecc;
        case 0x26ced0u: goto label_26ced0;
        case 0x26ced4u: goto label_26ced4;
        case 0x26ced8u: goto label_26ced8;
        case 0x26cedcu: goto label_26cedc;
        case 0x26cee0u: goto label_26cee0;
        case 0x26cee4u: goto label_26cee4;
        case 0x26cee8u: goto label_26cee8;
        case 0x26ceecu: goto label_26ceec;
        case 0x26cef0u: goto label_26cef0;
        case 0x26cef4u: goto label_26cef4;
        case 0x26cef8u: goto label_26cef8;
        case 0x26cefcu: goto label_26cefc;
        case 0x26cf00u: goto label_26cf00;
        case 0x26cf04u: goto label_26cf04;
        case 0x26cf08u: goto label_26cf08;
        case 0x26cf0cu: goto label_26cf0c;
        case 0x26cf10u: goto label_26cf10;
        case 0x26cf14u: goto label_26cf14;
        case 0x26cf18u: goto label_26cf18;
        case 0x26cf1cu: goto label_26cf1c;
        case 0x26cf20u: goto label_26cf20;
        case 0x26cf24u: goto label_26cf24;
        case 0x26cf28u: goto label_26cf28;
        case 0x26cf2cu: goto label_26cf2c;
        case 0x26cf30u: goto label_26cf30;
        case 0x26cf34u: goto label_26cf34;
        case 0x26cf38u: goto label_26cf38;
        case 0x26cf3cu: goto label_26cf3c;
        case 0x26cf40u: goto label_26cf40;
        case 0x26cf44u: goto label_26cf44;
        case 0x26cf48u: goto label_26cf48;
        case 0x26cf4cu: goto label_26cf4c;
        case 0x26cf50u: goto label_26cf50;
        case 0x26cf54u: goto label_26cf54;
        case 0x26cf58u: goto label_26cf58;
        case 0x26cf5cu: goto label_26cf5c;
        case 0x26cf60u: goto label_26cf60;
        case 0x26cf64u: goto label_26cf64;
        case 0x26cf68u: goto label_26cf68;
        case 0x26cf6cu: goto label_26cf6c;
        case 0x26cf70u: goto label_26cf70;
        case 0x26cf74u: goto label_26cf74;
        case 0x26cf78u: goto label_26cf78;
        case 0x26cf7cu: goto label_26cf7c;
        case 0x26cf80u: goto label_26cf80;
        case 0x26cf84u: goto label_26cf84;
        case 0x26cf88u: goto label_26cf88;
        case 0x26cf8cu: goto label_26cf8c;
        case 0x26cf90u: goto label_26cf90;
        case 0x26cf94u: goto label_26cf94;
        case 0x26cf98u: goto label_26cf98;
        case 0x26cf9cu: goto label_26cf9c;
        case 0x26cfa0u: goto label_26cfa0;
        case 0x26cfa4u: goto label_26cfa4;
        case 0x26cfa8u: goto label_26cfa8;
        case 0x26cfacu: goto label_26cfac;
        case 0x26cfb0u: goto label_26cfb0;
        case 0x26cfb4u: goto label_26cfb4;
        case 0x26cfb8u: goto label_26cfb8;
        case 0x26cfbcu: goto label_26cfbc;
        case 0x26cfc0u: goto label_26cfc0;
        case 0x26cfc4u: goto label_26cfc4;
        case 0x26cfc8u: goto label_26cfc8;
        case 0x26cfccu: goto label_26cfcc;
        case 0x26cfd0u: goto label_26cfd0;
        case 0x26cfd4u: goto label_26cfd4;
        case 0x26cfd8u: goto label_26cfd8;
        case 0x26cfdcu: goto label_26cfdc;
        case 0x26cfe0u: goto label_26cfe0;
        case 0x26cfe4u: goto label_26cfe4;
        case 0x26cfe8u: goto label_26cfe8;
        case 0x26cfecu: goto label_26cfec;
        case 0x26cff0u: goto label_26cff0;
        case 0x26cff4u: goto label_26cff4;
        case 0x26cff8u: goto label_26cff8;
        case 0x26cffcu: goto label_26cffc;
        case 0x26d000u: goto label_26d000;
        case 0x26d004u: goto label_26d004;
        case 0x26d008u: goto label_26d008;
        case 0x26d00cu: goto label_26d00c;
        case 0x26d010u: goto label_26d010;
        case 0x26d014u: goto label_26d014;
        case 0x26d018u: goto label_26d018;
        case 0x26d01cu: goto label_26d01c;
        case 0x26d020u: goto label_26d020;
        case 0x26d024u: goto label_26d024;
        case 0x26d028u: goto label_26d028;
        case 0x26d02cu: goto label_26d02c;
        case 0x26d030u: goto label_26d030;
        case 0x26d034u: goto label_26d034;
        case 0x26d038u: goto label_26d038;
        case 0x26d03cu: goto label_26d03c;
        case 0x26d040u: goto label_26d040;
        case 0x26d044u: goto label_26d044;
        case 0x26d048u: goto label_26d048;
        case 0x26d04cu: goto label_26d04c;
        case 0x26d050u: goto label_26d050;
        case 0x26d054u: goto label_26d054;
        case 0x26d058u: goto label_26d058;
        case 0x26d05cu: goto label_26d05c;
        case 0x26d060u: goto label_26d060;
        case 0x26d064u: goto label_26d064;
        case 0x26d068u: goto label_26d068;
        case 0x26d06cu: goto label_26d06c;
        case 0x26d070u: goto label_26d070;
        case 0x26d074u: goto label_26d074;
        case 0x26d078u: goto label_26d078;
        case 0x26d07cu: goto label_26d07c;
        case 0x26d080u: goto label_26d080;
        case 0x26d084u: goto label_26d084;
        case 0x26d088u: goto label_26d088;
        case 0x26d08cu: goto label_26d08c;
        case 0x26d090u: goto label_26d090;
        case 0x26d094u: goto label_26d094;
        case 0x26d098u: goto label_26d098;
        case 0x26d09cu: goto label_26d09c;
        case 0x26d0a0u: goto label_26d0a0;
        case 0x26d0a4u: goto label_26d0a4;
        case 0x26d0a8u: goto label_26d0a8;
        case 0x26d0acu: goto label_26d0ac;
        case 0x26d0b0u: goto label_26d0b0;
        case 0x26d0b4u: goto label_26d0b4;
        case 0x26d0b8u: goto label_26d0b8;
        case 0x26d0bcu: goto label_26d0bc;
        case 0x26d0c0u: goto label_26d0c0;
        case 0x26d0c4u: goto label_26d0c4;
        case 0x26d0c8u: goto label_26d0c8;
        case 0x26d0ccu: goto label_26d0cc;
        case 0x26d0d0u: goto label_26d0d0;
        case 0x26d0d4u: goto label_26d0d4;
        case 0x26d0d8u: goto label_26d0d8;
        case 0x26d0dcu: goto label_26d0dc;
        case 0x26d0e0u: goto label_26d0e0;
        case 0x26d0e4u: goto label_26d0e4;
        case 0x26d0e8u: goto label_26d0e8;
        case 0x26d0ecu: goto label_26d0ec;
        case 0x26d0f0u: goto label_26d0f0;
        case 0x26d0f4u: goto label_26d0f4;
        case 0x26d0f8u: goto label_26d0f8;
        case 0x26d0fcu: goto label_26d0fc;
        case 0x26d100u: goto label_26d100;
        case 0x26d104u: goto label_26d104;
        case 0x26d108u: goto label_26d108;
        case 0x26d10cu: goto label_26d10c;
        case 0x26d110u: goto label_26d110;
        case 0x26d114u: goto label_26d114;
        case 0x26d118u: goto label_26d118;
        case 0x26d11cu: goto label_26d11c;
        case 0x26d120u: goto label_26d120;
        case 0x26d124u: goto label_26d124;
        case 0x26d128u: goto label_26d128;
        case 0x26d12cu: goto label_26d12c;
        case 0x26d130u: goto label_26d130;
        case 0x26d134u: goto label_26d134;
        case 0x26d138u: goto label_26d138;
        case 0x26d13cu: goto label_26d13c;
        case 0x26d140u: goto label_26d140;
        case 0x26d144u: goto label_26d144;
        case 0x26d148u: goto label_26d148;
        case 0x26d14cu: goto label_26d14c;
        case 0x26d150u: goto label_26d150;
        case 0x26d154u: goto label_26d154;
        case 0x26d158u: goto label_26d158;
        case 0x26d15cu: goto label_26d15c;
        case 0x26d160u: goto label_26d160;
        case 0x26d164u: goto label_26d164;
        case 0x26d168u: goto label_26d168;
        case 0x26d16cu: goto label_26d16c;
        case 0x26d170u: goto label_26d170;
        case 0x26d174u: goto label_26d174;
        case 0x26d178u: goto label_26d178;
        case 0x26d17cu: goto label_26d17c;
        case 0x26d180u: goto label_26d180;
        case 0x26d184u: goto label_26d184;
        case 0x26d188u: goto label_26d188;
        case 0x26d18cu: goto label_26d18c;
        case 0x26d190u: goto label_26d190;
        case 0x26d194u: goto label_26d194;
        case 0x26d198u: goto label_26d198;
        case 0x26d19cu: goto label_26d19c;
        case 0x26d1a0u: goto label_26d1a0;
        case 0x26d1a4u: goto label_26d1a4;
        case 0x26d1a8u: goto label_26d1a8;
        case 0x26d1acu: goto label_26d1ac;
        case 0x26d1b0u: goto label_26d1b0;
        case 0x26d1b4u: goto label_26d1b4;
        case 0x26d1b8u: goto label_26d1b8;
        case 0x26d1bcu: goto label_26d1bc;
        case 0x26d1c0u: goto label_26d1c0;
        case 0x26d1c4u: goto label_26d1c4;
        case 0x26d1c8u: goto label_26d1c8;
        case 0x26d1ccu: goto label_26d1cc;
        case 0x26d1d0u: goto label_26d1d0;
        case 0x26d1d4u: goto label_26d1d4;
        case 0x26d1d8u: goto label_26d1d8;
        case 0x26d1dcu: goto label_26d1dc;
        case 0x26d1e0u: goto label_26d1e0;
        case 0x26d1e4u: goto label_26d1e4;
        case 0x26d1e8u: goto label_26d1e8;
        case 0x26d1ecu: goto label_26d1ec;
        case 0x26d1f0u: goto label_26d1f0;
        case 0x26d1f4u: goto label_26d1f4;
        case 0x26d1f8u: goto label_26d1f8;
        case 0x26d1fcu: goto label_26d1fc;
        case 0x26d200u: goto label_26d200;
        case 0x26d204u: goto label_26d204;
        case 0x26d208u: goto label_26d208;
        case 0x26d20cu: goto label_26d20c;
        case 0x26d210u: goto label_26d210;
        case 0x26d214u: goto label_26d214;
        case 0x26d218u: goto label_26d218;
        case 0x26d21cu: goto label_26d21c;
        case 0x26d220u: goto label_26d220;
        case 0x26d224u: goto label_26d224;
        case 0x26d228u: goto label_26d228;
        case 0x26d22cu: goto label_26d22c;
        case 0x26d230u: goto label_26d230;
        case 0x26d234u: goto label_26d234;
        case 0x26d238u: goto label_26d238;
        case 0x26d23cu: goto label_26d23c;
        case 0x26d240u: goto label_26d240;
        case 0x26d244u: goto label_26d244;
        case 0x26d248u: goto label_26d248;
        case 0x26d24cu: goto label_26d24c;
        case 0x26d250u: goto label_26d250;
        case 0x26d254u: goto label_26d254;
        case 0x26d258u: goto label_26d258;
        case 0x26d25cu: goto label_26d25c;
        case 0x26d260u: goto label_26d260;
        case 0x26d264u: goto label_26d264;
        case 0x26d268u: goto label_26d268;
        case 0x26d26cu: goto label_26d26c;
        case 0x26d270u: goto label_26d270;
        case 0x26d274u: goto label_26d274;
        case 0x26d278u: goto label_26d278;
        case 0x26d27cu: goto label_26d27c;
        case 0x26d280u: goto label_26d280;
        case 0x26d284u: goto label_26d284;
        case 0x26d288u: goto label_26d288;
        case 0x26d28cu: goto label_26d28c;
        case 0x26d290u: goto label_26d290;
        case 0x26d294u: goto label_26d294;
        case 0x26d298u: goto label_26d298;
        case 0x26d29cu: goto label_26d29c;
        case 0x26d2a0u: goto label_26d2a0;
        case 0x26d2a4u: goto label_26d2a4;
        case 0x26d2a8u: goto label_26d2a8;
        case 0x26d2acu: goto label_26d2ac;
        case 0x26d2b0u: goto label_26d2b0;
        case 0x26d2b4u: goto label_26d2b4;
        case 0x26d2b8u: goto label_26d2b8;
        case 0x26d2bcu: goto label_26d2bc;
        case 0x26d2c0u: goto label_26d2c0;
        case 0x26d2c4u: goto label_26d2c4;
        case 0x26d2c8u: goto label_26d2c8;
        case 0x26d2ccu: goto label_26d2cc;
        case 0x26d2d0u: goto label_26d2d0;
        case 0x26d2d4u: goto label_26d2d4;
        case 0x26d2d8u: goto label_26d2d8;
        case 0x26d2dcu: goto label_26d2dc;
        case 0x26d2e0u: goto label_26d2e0;
        case 0x26d2e4u: goto label_26d2e4;
        case 0x26d2e8u: goto label_26d2e8;
        case 0x26d2ecu: goto label_26d2ec;
        case 0x26d2f0u: goto label_26d2f0;
        case 0x26d2f4u: goto label_26d2f4;
        case 0x26d2f8u: goto label_26d2f8;
        case 0x26d2fcu: goto label_26d2fc;
        case 0x26d300u: goto label_26d300;
        case 0x26d304u: goto label_26d304;
        case 0x26d308u: goto label_26d308;
        case 0x26d30cu: goto label_26d30c;
        case 0x26d310u: goto label_26d310;
        case 0x26d314u: goto label_26d314;
        case 0x26d318u: goto label_26d318;
        case 0x26d31cu: goto label_26d31c;
        case 0x26d320u: goto label_26d320;
        case 0x26d324u: goto label_26d324;
        case 0x26d328u: goto label_26d328;
        case 0x26d32cu: goto label_26d32c;
        case 0x26d330u: goto label_26d330;
        case 0x26d334u: goto label_26d334;
        case 0x26d338u: goto label_26d338;
        case 0x26d33cu: goto label_26d33c;
        case 0x26d340u: goto label_26d340;
        case 0x26d344u: goto label_26d344;
        case 0x26d348u: goto label_26d348;
        case 0x26d34cu: goto label_26d34c;
        case 0x26d350u: goto label_26d350;
        case 0x26d354u: goto label_26d354;
        case 0x26d358u: goto label_26d358;
        case 0x26d35cu: goto label_26d35c;
        case 0x26d360u: goto label_26d360;
        case 0x26d364u: goto label_26d364;
        case 0x26d368u: goto label_26d368;
        case 0x26d36cu: goto label_26d36c;
        case 0x26d370u: goto label_26d370;
        case 0x26d374u: goto label_26d374;
        case 0x26d378u: goto label_26d378;
        case 0x26d37cu: goto label_26d37c;
        case 0x26d380u: goto label_26d380;
        case 0x26d384u: goto label_26d384;
        case 0x26d388u: goto label_26d388;
        case 0x26d38cu: goto label_26d38c;
        case 0x26d390u: goto label_26d390;
        case 0x26d394u: goto label_26d394;
        case 0x26d398u: goto label_26d398;
        case 0x26d39cu: goto label_26d39c;
        case 0x26d3a0u: goto label_26d3a0;
        case 0x26d3a4u: goto label_26d3a4;
        case 0x26d3a8u: goto label_26d3a8;
        case 0x26d3acu: goto label_26d3ac;
        case 0x26d3b0u: goto label_26d3b0;
        case 0x26d3b4u: goto label_26d3b4;
        case 0x26d3b8u: goto label_26d3b8;
        case 0x26d3bcu: goto label_26d3bc;
        case 0x26d3c0u: goto label_26d3c0;
        case 0x26d3c4u: goto label_26d3c4;
        case 0x26d3c8u: goto label_26d3c8;
        case 0x26d3ccu: goto label_26d3cc;
        case 0x26d3d0u: goto label_26d3d0;
        case 0x26d3d4u: goto label_26d3d4;
        case 0x26d3d8u: goto label_26d3d8;
        case 0x26d3dcu: goto label_26d3dc;
        case 0x26d3e0u: goto label_26d3e0;
        case 0x26d3e4u: goto label_26d3e4;
        case 0x26d3e8u: goto label_26d3e8;
        case 0x26d3ecu: goto label_26d3ec;
        case 0x26d3f0u: goto label_26d3f0;
        case 0x26d3f4u: goto label_26d3f4;
        case 0x26d3f8u: goto label_26d3f8;
        case 0x26d3fcu: goto label_26d3fc;
        case 0x26d400u: goto label_26d400;
        case 0x26d404u: goto label_26d404;
        case 0x26d408u: goto label_26d408;
        case 0x26d40cu: goto label_26d40c;
        case 0x26d410u: goto label_26d410;
        case 0x26d414u: goto label_26d414;
        case 0x26d418u: goto label_26d418;
        case 0x26d41cu: goto label_26d41c;
        case 0x26d420u: goto label_26d420;
        case 0x26d424u: goto label_26d424;
        case 0x26d428u: goto label_26d428;
        case 0x26d42cu: goto label_26d42c;
        case 0x26d430u: goto label_26d430;
        case 0x26d434u: goto label_26d434;
        case 0x26d438u: goto label_26d438;
        case 0x26d43cu: goto label_26d43c;
        case 0x26d440u: goto label_26d440;
        case 0x26d444u: goto label_26d444;
        case 0x26d448u: goto label_26d448;
        case 0x26d44cu: goto label_26d44c;
        case 0x26d450u: goto label_26d450;
        case 0x26d454u: goto label_26d454;
        case 0x26d458u: goto label_26d458;
        case 0x26d45cu: goto label_26d45c;
        case 0x26d460u: goto label_26d460;
        case 0x26d464u: goto label_26d464;
        case 0x26d468u: goto label_26d468;
        case 0x26d46cu: goto label_26d46c;
        case 0x26d470u: goto label_26d470;
        case 0x26d474u: goto label_26d474;
        case 0x26d478u: goto label_26d478;
        case 0x26d47cu: goto label_26d47c;
        case 0x26d480u: goto label_26d480;
        case 0x26d484u: goto label_26d484;
        case 0x26d488u: goto label_26d488;
        case 0x26d48cu: goto label_26d48c;
        case 0x26d490u: goto label_26d490;
        case 0x26d494u: goto label_26d494;
        case 0x26d498u: goto label_26d498;
        case 0x26d49cu: goto label_26d49c;
        case 0x26d4a0u: goto label_26d4a0;
        case 0x26d4a4u: goto label_26d4a4;
        case 0x26d4a8u: goto label_26d4a8;
        case 0x26d4acu: goto label_26d4ac;
        case 0x26d4b0u: goto label_26d4b0;
        case 0x26d4b4u: goto label_26d4b4;
        case 0x26d4b8u: goto label_26d4b8;
        case 0x26d4bcu: goto label_26d4bc;
        case 0x26d4c0u: goto label_26d4c0;
        case 0x26d4c4u: goto label_26d4c4;
        case 0x26d4c8u: goto label_26d4c8;
        case 0x26d4ccu: goto label_26d4cc;
        case 0x26d4d0u: goto label_26d4d0;
        case 0x26d4d4u: goto label_26d4d4;
        case 0x26d4d8u: goto label_26d4d8;
        case 0x26d4dcu: goto label_26d4dc;
        case 0x26d4e0u: goto label_26d4e0;
        case 0x26d4e4u: goto label_26d4e4;
        case 0x26d4e8u: goto label_26d4e8;
        case 0x26d4ecu: goto label_26d4ec;
        case 0x26d4f0u: goto label_26d4f0;
        case 0x26d4f4u: goto label_26d4f4;
        case 0x26d4f8u: goto label_26d4f8;
        case 0x26d4fcu: goto label_26d4fc;
        case 0x26d500u: goto label_26d500;
        case 0x26d504u: goto label_26d504;
        case 0x26d508u: goto label_26d508;
        case 0x26d50cu: goto label_26d50c;
        case 0x26d510u: goto label_26d510;
        case 0x26d514u: goto label_26d514;
        case 0x26d518u: goto label_26d518;
        case 0x26d51cu: goto label_26d51c;
        case 0x26d520u: goto label_26d520;
        case 0x26d524u: goto label_26d524;
        case 0x26d528u: goto label_26d528;
        case 0x26d52cu: goto label_26d52c;
        case 0x26d530u: goto label_26d530;
        case 0x26d534u: goto label_26d534;
        case 0x26d538u: goto label_26d538;
        case 0x26d53cu: goto label_26d53c;
        case 0x26d540u: goto label_26d540;
        case 0x26d544u: goto label_26d544;
        case 0x26d548u: goto label_26d548;
        case 0x26d54cu: goto label_26d54c;
        case 0x26d550u: goto label_26d550;
        case 0x26d554u: goto label_26d554;
        case 0x26d558u: goto label_26d558;
        case 0x26d55cu: goto label_26d55c;
        case 0x26d560u: goto label_26d560;
        case 0x26d564u: goto label_26d564;
        case 0x26d568u: goto label_26d568;
        case 0x26d56cu: goto label_26d56c;
        case 0x26d570u: goto label_26d570;
        case 0x26d574u: goto label_26d574;
        case 0x26d578u: goto label_26d578;
        case 0x26d57cu: goto label_26d57c;
        case 0x26d580u: goto label_26d580;
        case 0x26d584u: goto label_26d584;
        case 0x26d588u: goto label_26d588;
        case 0x26d58cu: goto label_26d58c;
        case 0x26d590u: goto label_26d590;
        case 0x26d594u: goto label_26d594;
        case 0x26d598u: goto label_26d598;
        case 0x26d59cu: goto label_26d59c;
        case 0x26d5a0u: goto label_26d5a0;
        case 0x26d5a4u: goto label_26d5a4;
        case 0x26d5a8u: goto label_26d5a8;
        case 0x26d5acu: goto label_26d5ac;
        case 0x26d5b0u: goto label_26d5b0;
        case 0x26d5b4u: goto label_26d5b4;
        case 0x26d5b8u: goto label_26d5b8;
        case 0x26d5bcu: goto label_26d5bc;
        case 0x26d5c0u: goto label_26d5c0;
        case 0x26d5c4u: goto label_26d5c4;
        case 0x26d5c8u: goto label_26d5c8;
        case 0x26d5ccu: goto label_26d5cc;
        case 0x26d5d0u: goto label_26d5d0;
        case 0x26d5d4u: goto label_26d5d4;
        case 0x26d5d8u: goto label_26d5d8;
        case 0x26d5dcu: goto label_26d5dc;
        case 0x26d5e0u: goto label_26d5e0;
        case 0x26d5e4u: goto label_26d5e4;
        case 0x26d5e8u: goto label_26d5e8;
        case 0x26d5ecu: goto label_26d5ec;
        case 0x26d5f0u: goto label_26d5f0;
        case 0x26d5f4u: goto label_26d5f4;
        case 0x26d5f8u: goto label_26d5f8;
        case 0x26d5fcu: goto label_26d5fc;
        case 0x26d600u: goto label_26d600;
        case 0x26d604u: goto label_26d604;
        case 0x26d608u: goto label_26d608;
        case 0x26d60cu: goto label_26d60c;
        case 0x26d610u: goto label_26d610;
        case 0x26d614u: goto label_26d614;
        case 0x26d618u: goto label_26d618;
        case 0x26d61cu: goto label_26d61c;
        case 0x26d620u: goto label_26d620;
        case 0x26d624u: goto label_26d624;
        case 0x26d628u: goto label_26d628;
        case 0x26d62cu: goto label_26d62c;
        case 0x26d630u: goto label_26d630;
        case 0x26d634u: goto label_26d634;
        case 0x26d638u: goto label_26d638;
        case 0x26d63cu: goto label_26d63c;
        case 0x26d640u: goto label_26d640;
        case 0x26d644u: goto label_26d644;
        case 0x26d648u: goto label_26d648;
        case 0x26d64cu: goto label_26d64c;
        case 0x26d650u: goto label_26d650;
        case 0x26d654u: goto label_26d654;
        case 0x26d658u: goto label_26d658;
        case 0x26d65cu: goto label_26d65c;
        case 0x26d660u: goto label_26d660;
        case 0x26d664u: goto label_26d664;
        case 0x26d668u: goto label_26d668;
        case 0x26d66cu: goto label_26d66c;
        case 0x26d670u: goto label_26d670;
        case 0x26d674u: goto label_26d674;
        case 0x26d678u: goto label_26d678;
        case 0x26d67cu: goto label_26d67c;
        case 0x26d680u: goto label_26d680;
        case 0x26d684u: goto label_26d684;
        case 0x26d688u: goto label_26d688;
        case 0x26d68cu: goto label_26d68c;
        case 0x26d690u: goto label_26d690;
        case 0x26d694u: goto label_26d694;
        case 0x26d698u: goto label_26d698;
        case 0x26d69cu: goto label_26d69c;
        case 0x26d6a0u: goto label_26d6a0;
        case 0x26d6a4u: goto label_26d6a4;
        case 0x26d6a8u: goto label_26d6a8;
        case 0x26d6acu: goto label_26d6ac;
        case 0x26d6b0u: goto label_26d6b0;
        case 0x26d6b4u: goto label_26d6b4;
        case 0x26d6b8u: goto label_26d6b8;
        case 0x26d6bcu: goto label_26d6bc;
        case 0x26d6c0u: goto label_26d6c0;
        case 0x26d6c4u: goto label_26d6c4;
        case 0x26d6c8u: goto label_26d6c8;
        case 0x26d6ccu: goto label_26d6cc;
        case 0x26d6d0u: goto label_26d6d0;
        case 0x26d6d4u: goto label_26d6d4;
        case 0x26d6d8u: goto label_26d6d8;
        case 0x26d6dcu: goto label_26d6dc;
        case 0x26d6e0u: goto label_26d6e0;
        case 0x26d6e4u: goto label_26d6e4;
        case 0x26d6e8u: goto label_26d6e8;
        case 0x26d6ecu: goto label_26d6ec;
        case 0x26d6f0u: goto label_26d6f0;
        case 0x26d6f4u: goto label_26d6f4;
        case 0x26d6f8u: goto label_26d6f8;
        case 0x26d6fcu: goto label_26d6fc;
        case 0x26d700u: goto label_26d700;
        case 0x26d704u: goto label_26d704;
        case 0x26d708u: goto label_26d708;
        case 0x26d70cu: goto label_26d70c;
        case 0x26d710u: goto label_26d710;
        case 0x26d714u: goto label_26d714;
        case 0x26d718u: goto label_26d718;
        case 0x26d71cu: goto label_26d71c;
        case 0x26d720u: goto label_26d720;
        case 0x26d724u: goto label_26d724;
        case 0x26d728u: goto label_26d728;
        case 0x26d72cu: goto label_26d72c;
        case 0x26d730u: goto label_26d730;
        case 0x26d734u: goto label_26d734;
        case 0x26d738u: goto label_26d738;
        case 0x26d73cu: goto label_26d73c;
        case 0x26d740u: goto label_26d740;
        case 0x26d744u: goto label_26d744;
        case 0x26d748u: goto label_26d748;
        case 0x26d74cu: goto label_26d74c;
        case 0x26d750u: goto label_26d750;
        case 0x26d754u: goto label_26d754;
        case 0x26d758u: goto label_26d758;
        case 0x26d75cu: goto label_26d75c;
        case 0x26d760u: goto label_26d760;
        case 0x26d764u: goto label_26d764;
        case 0x26d768u: goto label_26d768;
        case 0x26d76cu: goto label_26d76c;
        case 0x26d770u: goto label_26d770;
        case 0x26d774u: goto label_26d774;
        case 0x26d778u: goto label_26d778;
        case 0x26d77cu: goto label_26d77c;
        case 0x26d780u: goto label_26d780;
        case 0x26d784u: goto label_26d784;
        case 0x26d788u: goto label_26d788;
        case 0x26d78cu: goto label_26d78c;
        case 0x26d790u: goto label_26d790;
        case 0x26d794u: goto label_26d794;
        case 0x26d798u: goto label_26d798;
        case 0x26d79cu: goto label_26d79c;
        case 0x26d7a0u: goto label_26d7a0;
        case 0x26d7a4u: goto label_26d7a4;
        case 0x26d7a8u: goto label_26d7a8;
        case 0x26d7acu: goto label_26d7ac;
        case 0x26d7b0u: goto label_26d7b0;
        case 0x26d7b4u: goto label_26d7b4;
        case 0x26d7b8u: goto label_26d7b8;
        case 0x26d7bcu: goto label_26d7bc;
        case 0x26d7c0u: goto label_26d7c0;
        case 0x26d7c4u: goto label_26d7c4;
        case 0x26d7c8u: goto label_26d7c8;
        case 0x26d7ccu: goto label_26d7cc;
        case 0x26d7d0u: goto label_26d7d0;
        case 0x26d7d4u: goto label_26d7d4;
        case 0x26d7d8u: goto label_26d7d8;
        case 0x26d7dcu: goto label_26d7dc;
        case 0x26d7e0u: goto label_26d7e0;
        case 0x26d7e4u: goto label_26d7e4;
        case 0x26d7e8u: goto label_26d7e8;
        case 0x26d7ecu: goto label_26d7ec;
        case 0x26d7f0u: goto label_26d7f0;
        case 0x26d7f4u: goto label_26d7f4;
        case 0x26d7f8u: goto label_26d7f8;
        case 0x26d7fcu: goto label_26d7fc;
        case 0x26d800u: goto label_26d800;
        case 0x26d804u: goto label_26d804;
        case 0x26d808u: goto label_26d808;
        case 0x26d80cu: goto label_26d80c;
        case 0x26d810u: goto label_26d810;
        case 0x26d814u: goto label_26d814;
        case 0x26d818u: goto label_26d818;
        case 0x26d81cu: goto label_26d81c;
        case 0x26d820u: goto label_26d820;
        case 0x26d824u: goto label_26d824;
        case 0x26d828u: goto label_26d828;
        case 0x26d82cu: goto label_26d82c;
        case 0x26d830u: goto label_26d830;
        case 0x26d834u: goto label_26d834;
        case 0x26d838u: goto label_26d838;
        case 0x26d83cu: goto label_26d83c;
        case 0x26d840u: goto label_26d840;
        case 0x26d844u: goto label_26d844;
        case 0x26d848u: goto label_26d848;
        case 0x26d84cu: goto label_26d84c;
        case 0x26d850u: goto label_26d850;
        case 0x26d854u: goto label_26d854;
        case 0x26d858u: goto label_26d858;
        case 0x26d85cu: goto label_26d85c;
        case 0x26d860u: goto label_26d860;
        case 0x26d864u: goto label_26d864;
        case 0x26d868u: goto label_26d868;
        case 0x26d86cu: goto label_26d86c;
        case 0x26d870u: goto label_26d870;
        case 0x26d874u: goto label_26d874;
        case 0x26d878u: goto label_26d878;
        case 0x26d87cu: goto label_26d87c;
        case 0x26d880u: goto label_26d880;
        case 0x26d884u: goto label_26d884;
        case 0x26d888u: goto label_26d888;
        case 0x26d88cu: goto label_26d88c;
        case 0x26d890u: goto label_26d890;
        case 0x26d894u: goto label_26d894;
        case 0x26d898u: goto label_26d898;
        case 0x26d89cu: goto label_26d89c;
        case 0x26d8a0u: goto label_26d8a0;
        case 0x26d8a4u: goto label_26d8a4;
        case 0x26d8a8u: goto label_26d8a8;
        case 0x26d8acu: goto label_26d8ac;
        case 0x26d8b0u: goto label_26d8b0;
        case 0x26d8b4u: goto label_26d8b4;
        case 0x26d8b8u: goto label_26d8b8;
        case 0x26d8bcu: goto label_26d8bc;
        case 0x26d8c0u: goto label_26d8c0;
        case 0x26d8c4u: goto label_26d8c4;
        case 0x26d8c8u: goto label_26d8c8;
        case 0x26d8ccu: goto label_26d8cc;
        case 0x26d8d0u: goto label_26d8d0;
        case 0x26d8d4u: goto label_26d8d4;
        case 0x26d8d8u: goto label_26d8d8;
        case 0x26d8dcu: goto label_26d8dc;
        case 0x26d8e0u: goto label_26d8e0;
        case 0x26d8e4u: goto label_26d8e4;
        case 0x26d8e8u: goto label_26d8e8;
        case 0x26d8ecu: goto label_26d8ec;
        case 0x26d8f0u: goto label_26d8f0;
        case 0x26d8f4u: goto label_26d8f4;
        case 0x26d8f8u: goto label_26d8f8;
        case 0x26d8fcu: goto label_26d8fc;
        case 0x26d900u: goto label_26d900;
        case 0x26d904u: goto label_26d904;
        case 0x26d908u: goto label_26d908;
        case 0x26d90cu: goto label_26d90c;
        case 0x26d910u: goto label_26d910;
        case 0x26d914u: goto label_26d914;
        case 0x26d918u: goto label_26d918;
        case 0x26d91cu: goto label_26d91c;
        case 0x26d920u: goto label_26d920;
        case 0x26d924u: goto label_26d924;
        case 0x26d928u: goto label_26d928;
        case 0x26d92cu: goto label_26d92c;
        case 0x26d930u: goto label_26d930;
        case 0x26d934u: goto label_26d934;
        case 0x26d938u: goto label_26d938;
        case 0x26d93cu: goto label_26d93c;
        case 0x26d940u: goto label_26d940;
        case 0x26d944u: goto label_26d944;
        case 0x26d948u: goto label_26d948;
        case 0x26d94cu: goto label_26d94c;
        case 0x26d950u: goto label_26d950;
        case 0x26d954u: goto label_26d954;
        case 0x26d958u: goto label_26d958;
        case 0x26d95cu: goto label_26d95c;
        case 0x26d960u: goto label_26d960;
        case 0x26d964u: goto label_26d964;
        case 0x26d968u: goto label_26d968;
        case 0x26d96cu: goto label_26d96c;
        case 0x26d970u: goto label_26d970;
        case 0x26d974u: goto label_26d974;
        case 0x26d978u: goto label_26d978;
        case 0x26d97cu: goto label_26d97c;
        case 0x26d980u: goto label_26d980;
        case 0x26d984u: goto label_26d984;
        case 0x26d988u: goto label_26d988;
        case 0x26d98cu: goto label_26d98c;
        case 0x26d990u: goto label_26d990;
        case 0x26d994u: goto label_26d994;
        case 0x26d998u: goto label_26d998;
        case 0x26d99cu: goto label_26d99c;
        case 0x26d9a0u: goto label_26d9a0;
        case 0x26d9a4u: goto label_26d9a4;
        case 0x26d9a8u: goto label_26d9a8;
        case 0x26d9acu: goto label_26d9ac;
        case 0x26d9b0u: goto label_26d9b0;
        case 0x26d9b4u: goto label_26d9b4;
        case 0x26d9b8u: goto label_26d9b8;
        case 0x26d9bcu: goto label_26d9bc;
        case 0x26d9c0u: goto label_26d9c0;
        case 0x26d9c4u: goto label_26d9c4;
        case 0x26d9c8u: goto label_26d9c8;
        case 0x26d9ccu: goto label_26d9cc;
        case 0x26d9d0u: goto label_26d9d0;
        case 0x26d9d4u: goto label_26d9d4;
        case 0x26d9d8u: goto label_26d9d8;
        case 0x26d9dcu: goto label_26d9dc;
        case 0x26d9e0u: goto label_26d9e0;
        case 0x26d9e4u: goto label_26d9e4;
        case 0x26d9e8u: goto label_26d9e8;
        case 0x26d9ecu: goto label_26d9ec;
        case 0x26d9f0u: goto label_26d9f0;
        case 0x26d9f4u: goto label_26d9f4;
        case 0x26d9f8u: goto label_26d9f8;
        case 0x26d9fcu: goto label_26d9fc;
        case 0x26da00u: goto label_26da00;
        case 0x26da04u: goto label_26da04;
        case 0x26da08u: goto label_26da08;
        case 0x26da0cu: goto label_26da0c;
        case 0x26da10u: goto label_26da10;
        case 0x26da14u: goto label_26da14;
        case 0x26da18u: goto label_26da18;
        case 0x26da1cu: goto label_26da1c;
        case 0x26da20u: goto label_26da20;
        case 0x26da24u: goto label_26da24;
        case 0x26da28u: goto label_26da28;
        case 0x26da2cu: goto label_26da2c;
        case 0x26da30u: goto label_26da30;
        case 0x26da34u: goto label_26da34;
        case 0x26da38u: goto label_26da38;
        case 0x26da3cu: goto label_26da3c;
        case 0x26da40u: goto label_26da40;
        case 0x26da44u: goto label_26da44;
        case 0x26da48u: goto label_26da48;
        case 0x26da4cu: goto label_26da4c;
        case 0x26da50u: goto label_26da50;
        case 0x26da54u: goto label_26da54;
        case 0x26da58u: goto label_26da58;
        case 0x26da5cu: goto label_26da5c;
        case 0x26da60u: goto label_26da60;
        case 0x26da64u: goto label_26da64;
        case 0x26da68u: goto label_26da68;
        case 0x26da6cu: goto label_26da6c;
        case 0x26da70u: goto label_26da70;
        case 0x26da74u: goto label_26da74;
        default: break;
    }

    ctx->pc = 0x26c868u;

label_26c868:
    // 0x26c868: 0x27bdfd10  addiu       $sp, $sp, -0x2F0
    ctx->pc = 0x26c868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966544));
label_26c86c:
    // 0x26c86c: 0xffb20280  sd          $s2, 0x280($sp)
    ctx->pc = 0x26c86cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 18));
label_26c870:
    // 0x26c870: 0xffb00270  sd          $s0, 0x270($sp)
    ctx->pc = 0x26c870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 16));
label_26c874:
    // 0x26c874: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x26c874u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26c878:
    // 0x26c878: 0xffb10278  sd          $s1, 0x278($sp)
    ctx->pc = 0x26c878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 17));
label_26c87c:
    // 0x26c87c: 0xffb30288  sd          $s3, 0x288($sp)
    ctx->pc = 0x26c87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 19));
label_26c880:
    // 0x26c880: 0xffb40290  sd          $s4, 0x290($sp)
    ctx->pc = 0x26c880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 20));
label_26c884:
    // 0x26c884: 0xffb50298  sd          $s5, 0x298($sp)
    ctx->pc = 0x26c884u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 664), GPR_U64(ctx, 21));
label_26c888:
    // 0x26c888: 0xffb602a0  sd          $s6, 0x2A0($sp)
    ctx->pc = 0x26c888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 22));
label_26c88c:
    // 0x26c88c: 0xffb702a8  sd          $s7, 0x2A8($sp)
    ctx->pc = 0x26c88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 680), GPR_U64(ctx, 23));
label_26c890:
    // 0x26c890: 0xffbe02b0  sd          $fp, 0x2B0($sp)
    ctx->pc = 0x26c890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 688), GPR_U64(ctx, 30));
label_26c894:
    // 0x26c894: 0xffbf02b8  sd          $ra, 0x2B8($sp)
    ctx->pc = 0x26c894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 696), GPR_U64(ctx, 31));
label_26c898:
    // 0x26c898: 0xe7b802e0  swc1        $f24, 0x2E0($sp)
    ctx->pc = 0x26c898u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 736), bits); }
label_26c89c:
    // 0x26c89c: 0xe7b702d8  swc1        $f23, 0x2D8($sp)
    ctx->pc = 0x26c89cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 728), bits); }
label_26c8a0:
    // 0x26c8a0: 0xe7b602d0  swc1        $f22, 0x2D0($sp)
    ctx->pc = 0x26c8a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 720), bits); }
label_26c8a4:
    // 0x26c8a4: 0xe7b502c8  swc1        $f21, 0x2C8($sp)
    ctx->pc = 0x26c8a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 712), bits); }
label_26c8a8:
    // 0x26c8a8: 0xe7b402c0  swc1        $f20, 0x2C0($sp)
    ctx->pc = 0x26c8a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 704), bits); }
label_26c8ac:
    // 0x26c8ac: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x26c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_26c8b0:
    // 0x26c8b0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x26c8b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_26c8b4:
    // 0x26c8b4: 0x1440045f  bnez        $v0, . + 4 + (0x45F << 2)
label_26c8b8:
    if (ctx->pc == 0x26C8B8u) {
        ctx->pc = 0x26C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8B4u;
        // 0x26c8b8: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8BCu;
        goto label_26c8bc;
    }
    ctx->pc = 0x26C8B4u;
    {
        const bool branch_taken_0x26c8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8B4u;
        // 0x26c8b8: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8b4) {
            ctx->pc = 0x26DA34u;
            goto label_26da34;
        }
    }
    ctx->pc = 0x26C8BCu;
label_26c8bc:
    // 0x26c8bc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x26c8bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_26c8c0:
    // 0x26c8c0: 0x1440045d  bnez        $v0, . + 4 + (0x45D << 2)
label_26c8c4:
    if (ctx->pc == 0x26C8C4u) {
        ctx->pc = 0x26C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8C0u;
        // 0x26c8c4: 0xdfb10278  ld          $s1, 0x278($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 632)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8C8u;
        goto label_26c8c8;
    }
    ctx->pc = 0x26C8C0u;
    {
        const bool branch_taken_0x26c8c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8C0u;
        // 0x26c8c4: 0xdfb10278  ld          $s1, 0x278($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8c0) {
            ctx->pc = 0x26DA38u;
            goto label_26da38;
        }
    }
    ctx->pc = 0x26C8C8u;
label_26c8c8:
    // 0x26c8c8: 0x8e420254  lw          $v0, 0x254($s2)
    ctx->pc = 0x26c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_26c8cc:
    // 0x26c8cc: 0x5040045b  beql        $v0, $zero, . + 4 + (0x45B << 2)
label_26c8d0:
    if (ctx->pc == 0x26C8D0u) {
        ctx->pc = 0x26C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8CCu;
        // 0x26c8d0: 0xdfb20280  ld          $s2, 0x280($sp) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8D4u;
        goto label_26c8d4;
    }
    ctx->pc = 0x26C8CCu;
    {
        const bool branch_taken_0x26c8cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c8cc) {
            ctx->pc = 0x26C8D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C8CCu;
            // 0x26c8d0: 0xdfb20280  ld          $s2, 0x280($sp) (Delay Slot)
            SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26DA3Cu;
            goto label_26da3c;
        }
    }
    ctx->pc = 0x26C8D4u;
label_26c8d4:
    // 0x26c8d4: 0x8e50026c  lw          $s0, 0x26C($s2)
    ctx->pc = 0x26c8d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_26c8d8:
    // 0x26c8d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_26c8dc:
    // 0x26c8dc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_26c8e0:
    if (ctx->pc == 0x26C8E0u) {
        ctx->pc = 0x26C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8DCu;
        // 0x26c8e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8E4u;
        goto label_26c8e4;
    }
    ctx->pc = 0x26C8DCu;
    {
        const bool branch_taken_0x26c8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8DCu;
        // 0x26c8e0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c8dc) {
            ctx->pc = 0x26C900u;
            goto label_26c900;
        }
    }
    ctx->pc = 0x26C8E4u;
label_26c8e4:
    // 0x26c8e4: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x26c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_26c8e8:
    // 0x26c8e8: 0xc0f6e9c  jal         func_3DBA70
label_26c8ec:
    if (ctx->pc == 0x26C8ECu) {
        ctx->pc = 0x26C8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8E8u;
        // 0x26c8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C8F0u;
        goto label_26c8f0;
    }
    ctx->pc = 0x26C8E8u;
    SET_GPR_U32(ctx, 31, 0x26C8F0u);
    ctx->pc = 0x26C8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C8E8u;
    // 0x26c8ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x26C8E8u, 0x26C8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C8F0u;
label_26c8f0:
    // 0x26c8f0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x26c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_26c8f4:
    // 0x26c8f4: 0x0  nop
    ctx->pc = 0x26c8f4u;
    // NOP
label_26c8f8:
    // 0x26c8f8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_26c8fc:
    if (ctx->pc == 0x26C8FCu) {
        ctx->pc = 0x26C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C8F8u;
        // 0x26c8fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C900u;
        goto label_26c900;
    }
    ctx->pc = 0x26C8F8u;
    {
        const bool branch_taken_0x26c8f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c8f8) {
            ctx->pc = 0x26C8FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C8F8u;
            // 0x26c8fc: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C8E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c8e8;
        }
    }
    ctx->pc = 0x26C900u;
label_26c900:
    // 0x26c900: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x26c900u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_26c904:
    // 0x26c904: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x26c904u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26c908:
    // 0x26c908: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26c908u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_26c90c:
    // 0x26c90c: 0x3c110400  lui         $s1, 0x400
    ctx->pc = 0x26c90cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1024 << 16));
label_26c910:
    // 0x26c910: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x26c910u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_26c914:
    // 0x26c914: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x26c914u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26c918:
    // 0x26c918: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x26c918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_26c91c:
    // 0x26c91c: 0x3c140048  lui         $s4, 0x48
    ctx->pc = 0x26c91cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)72 << 16));
label_26c920:
    // 0x26c920: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x26c920u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_26c924:
    // 0x26c924: 0x3c13004a  lui         $s3, 0x4A
    ctx->pc = 0x26c924u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)74 << 16));
label_26c928:
    // 0x26c928: 0x8e430264  lw          $v1, 0x264($s2)
    ctx->pc = 0x26c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_26c92c:
    // 0x26c92c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x26c92cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_26c930:
    // 0x26c930: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x26c930u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_26c934:
    // 0x26c934: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26c934u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26c938:
    // 0x26c938: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_26c93c:
    // 0x26c93c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_26c940:
    if (ctx->pc == 0x26C940u) {
        ctx->pc = 0x26C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C93Cu;
        // 0x26c940: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C944u;
        goto label_26c944;
    }
    ctx->pc = 0x26C93Cu;
    {
        const bool branch_taken_0x26c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C93Cu;
        // 0x26c940: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c93c) {
            ctx->pc = 0x26C9E8u;
            goto label_26c9e8;
        }
    }
    ctx->pc = 0x26C944u;
label_26c944:
    // 0x26c944: 0x0  nop
    ctx->pc = 0x26c944u;
    // NOP
label_26c948:
    // 0x26c948: 0xc0f7e82  jal         func_3DFA08
label_26c94c:
    if (ctx->pc == 0x26C94Cu) {
        ctx->pc = 0x26C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C948u;
        // 0x26c94c: 0x8e46026c  lw          $a2, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C950u;
        goto label_26c950;
    }
    ctx->pc = 0x26C948u;
    SET_GPR_U32(ctx, 31, 0x26C950u);
    ctx->pc = 0x26C94Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C948u;
    // 0x26c94c: 0x8e46026c  lw          $a2, 0x26C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFA08u, 0x26C948u, 0x26C950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C950u;
label_26c950:
    // 0x26c950: 0x8e0300bc  lw          $v1, 0xBC($s0)
    ctx->pc = 0x26c950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
label_26c954:
    // 0x26c954: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x26c954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_26c958:
    // 0x26c958: 0x54600024  bnel        $v1, $zero, . + 4 + (0x24 << 2)
label_26c95c:
    if (ctx->pc == 0x26C95Cu) {
        ctx->pc = 0x26C95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C958u;
        // 0x26c95c: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C960u;
        goto label_26c960;
    }
    ctx->pc = 0x26C958u;
    {
        const bool branch_taken_0x26c958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c958) {
            ctx->pc = 0x26C95Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C958u;
            // 0x26c95c: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C9ECu;
            goto label_26c9ec;
        }
    }
    ctx->pc = 0x26C960u;
label_26c960:
    // 0x26c960: 0x8e420278  lw          $v0, 0x278($s2)
    ctx->pc = 0x26c960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_26c964:
    // 0x26c964: 0x54560021  bnel        $v0, $s6, . + 4 + (0x21 << 2)
label_26c968:
    if (ctx->pc == 0x26C968u) {
        ctx->pc = 0x26C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C964u;
        // 0x26c968: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C96Cu;
        goto label_26c96c;
    }
    ctx->pc = 0x26C964u;
    {
        const bool branch_taken_0x26c964 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x26c964) {
            ctx->pc = 0x26C968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C964u;
            // 0x26c968: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C9ECu;
            goto label_26c9ec;
        }
    }
    ctx->pc = 0x26C96Cu;
label_26c96c:
    // 0x26c96c: 0xc60000d0  lwc1        $f0, 0xD0($s0)
    ctx->pc = 0x26c96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26c970:
    // 0x26c970: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x26c970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26c974:
    // 0x26c974: 0x0  nop
    ctx->pc = 0x26c974u;
    // NOP
label_26c978:
    // 0x26c978: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
label_26c97c:
    if (ctx->pc == 0x26C97Cu) {
        ctx->pc = 0x26C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C978u;
        // 0x26c97c: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C980u;
        goto label_26c980;
    }
    ctx->pc = 0x26C978u;
    {
        const bool branch_taken_0x26c978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26c978) {
            ctx->pc = 0x26C97Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C978u;
            // 0x26c97c: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C9ECu;
            goto label_26c9ec;
        }
    }
    ctx->pc = 0x26C980u;
label_26c980:
    // 0x26c980: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x26c980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_26c984:
    // 0x26c984: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x26c984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_26c988:
    // 0x26c988: 0x54510018  bnel        $v0, $s1, . + 4 + (0x18 << 2)
label_26c98c:
    if (ctx->pc == 0x26C98Cu) {
        ctx->pc = 0x26C98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C988u;
        // 0x26c98c: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C990u;
        goto label_26c990;
    }
    ctx->pc = 0x26C988u;
    {
        const bool branch_taken_0x26c988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x26c988) {
            ctx->pc = 0x26C98Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26C988u;
            // 0x26c98c: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26C9ECu;
            goto label_26c9ec;
        }
    }
    ctx->pc = 0x26C990u;
label_26c990:
    // 0x26c990: 0xae550278  sw          $s5, 0x278($s2)
    ctx->pc = 0x26c990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 632), GPR_U32(ctx, 21));
label_26c994:
    // 0x26c994: 0x8e822b00  lw          $v0, 0x2B00($s4)
    ctx->pc = 0x26c994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11008)));
label_26c998:
    // 0x26c998: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_26c99c:
    if (ctx->pc == 0x26C99Cu) {
        ctx->pc = 0x26C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C998u;
        // 0x26c99c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9A0u;
        goto label_26c9a0;
    }
    ctx->pc = 0x26C998u;
    {
        const bool branch_taken_0x26c998 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26C99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C998u;
        // 0x26c99c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c998) {
            ctx->pc = 0x26C9B4u;
            goto label_26c9b4;
        }
    }
    ctx->pc = 0x26C9A0u;
label_26c9a0:
    // 0x26c9a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26c9a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c9a4:
    // 0x26c9a4: 0x0  nop
    ctx->pc = 0x26c9a4u;
    // NOP
label_26c9a8:
    // 0x26c9a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26c9a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_26c9ac:
    // 0x26c9ac: 0x10000008  b           . + 4 + (0x8 << 2)
label_26c9b0:
    if (ctx->pc == 0x26C9B0u) {
        ctx->pc = 0x26C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9ACu;
        // 0x26c9b0: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9B4u;
        goto label_26c9b4;
    }
    ctx->pc = 0x26C9ACu;
    {
        const bool branch_taken_0x26c9ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9ACu;
        // 0x26c9b0: 0x46140002  mul.s       $f0, $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9ac) {
            ctx->pc = 0x26C9D0u;
            goto label_26c9d0;
        }
    }
    ctx->pc = 0x26C9B4u;
label_26c9b4:
    // 0x26c9b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26c9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26c9b8:
    // 0x26c9b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26c9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26c9bc:
    // 0x26c9bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x26c9bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26c9c0:
    // 0x26c9c0: 0x0  nop
    ctx->pc = 0x26c9c0u;
    // NOP
label_26c9c4:
    // 0x26c9c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x26c9c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_26c9c8:
    // 0x26c9c8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26c9c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_26c9cc:
    // 0x26c9cc: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x26c9ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_26c9d0:
    // 0x26c9d0: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x26c9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
label_26c9d4:
    // 0x26c9d4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26c9d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26c9d8:
    // 0x26c9d8: 0x26649b10  addiu       $a0, $s3, -0x64F0
    ctx->pc = 0x26c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294941456));
label_26c9dc:
    // 0x26c9dc: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x26c9dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_26c9e0:
    // 0x26c9e0: 0xc07f540  jal         func_1FD500
label_26c9e4:
    if (ctx->pc == 0x26C9E4u) {
        ctx->pc = 0x26C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9E0u;
        // 0x26c9e4: 0xe640027c  swc1        $f0, 0x27C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 636), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9E8u;
        goto label_26c9e8;
    }
    ctx->pc = 0x26C9E0u;
    SET_GPR_U32(ctx, 31, 0x26C9E8u);
    ctx->pc = 0x26C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C9E0u;
    // 0x26c9e4: 0xe640027c  swc1        $f0, 0x27C($s2) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 636), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD500u, 0x26C9E0u, 0x26C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26C9E8u;
label_26c9e8:
    // 0x26c9e8: 0x8e440264  lw          $a0, 0x264($s2)
    ctx->pc = 0x26c9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_26c9ec:
    // 0x26c9ec: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26c9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_26c9f0:
    // 0x26c9f0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_26c9f4:
    if (ctx->pc == 0x26C9F4u) {
        ctx->pc = 0x26C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9F0u;
        // 0x26c9f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26C9F8u;
        goto label_26c9f8;
    }
    ctx->pc = 0x26C9F0u;
    {
        const bool branch_taken_0x26c9f0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C9F0u;
        // 0x26c9f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c9f0) {
            ctx->pc = 0x26C9FCu;
            goto label_26c9fc;
        }
    }
    ctx->pc = 0x26C9F8u;
label_26c9f8:
    // 0x26c9f8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x26c9f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26c9fc:
    // 0x26c9fc: 0x1600ffd2  bnez        $s0, . + 4 + (-0x2E << 2)
label_26ca00:
    if (ctx->pc == 0x26CA00u) {
        ctx->pc = 0x26CA04u;
        goto label_26ca04;
    }
    ctx->pc = 0x26C9FCu;
    {
        const bool branch_taken_0x26c9fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26c9fc) {
            ctx->pc = 0x26C948u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26c948;
        }
    }
    ctx->pc = 0x26CA04u;
label_26ca04:
    // 0x26ca04: 0x8e430268  lw          $v1, 0x268($s2)
    ctx->pc = 0x26ca04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_26ca08:
    // 0x26ca08: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26ca08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_26ca0c:
    // 0x26ca0c: 0x10000004  b           . + 4 + (0x4 << 2)
label_26ca10:
    if (ctx->pc == 0x26CA10u) {
        ctx->pc = 0x26CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA0Cu;
        // 0x26ca10: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA14u;
        goto label_26ca14;
    }
    ctx->pc = 0x26CA0Cu;
    {
        const bool branch_taken_0x26ca0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA0Cu;
        // 0x26ca10: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca0c) {
            ctx->pc = 0x26CA20u;
            goto label_26ca20;
        }
    }
    ctx->pc = 0x26CA14u;
label_26ca14:
    // 0x26ca14: 0x0  nop
    ctx->pc = 0x26ca14u;
    // NOP
label_26ca18:
    // 0x26ca18: 0xc0f7e82  jal         func_3DFA08
label_26ca1c:
    if (ctx->pc == 0x26CA1Cu) {
        ctx->pc = 0x26CA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA18u;
        // 0x26ca1c: 0x8e46026c  lw          $a2, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA20u;
        goto label_26ca20;
    }
    ctx->pc = 0x26CA18u;
    SET_GPR_U32(ctx, 31, 0x26CA20u);
    ctx->pc = 0x26CA1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA18u;
    // 0x26ca1c: 0x8e46026c  lw          $a2, 0x26C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DFA08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DFA08u, 0x26CA18u, 0x26CA20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA20u;
label_26ca20:
    // 0x26ca20: 0x8e440268  lw          $a0, 0x268($s2)
    ctx->pc = 0x26ca20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_26ca24:
    // 0x26ca24: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26ca24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_26ca28:
    // 0x26ca28: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_26ca2c:
    if (ctx->pc == 0x26CA2Cu) {
        ctx->pc = 0x26CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA28u;
        // 0x26ca2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA30u;
        goto label_26ca30;
    }
    ctx->pc = 0x26CA28u;
    {
        const bool branch_taken_0x26ca28 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA28u;
        // 0x26ca2c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca28) {
            ctx->pc = 0x26CA34u;
            goto label_26ca34;
        }
    }
    ctx->pc = 0x26CA30u;
label_26ca30:
    // 0x26ca30: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x26ca30u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26ca34:
    // 0x26ca34: 0x1600fff8  bnez        $s0, . + 4 + (-0x8 << 2)
label_26ca38:
    if (ctx->pc == 0x26CA38u) {
        ctx->pc = 0x26CA3Cu;
        goto label_26ca3c;
    }
    ctx->pc = 0x26CA34u;
    {
        const bool branch_taken_0x26ca34 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26ca34) {
            ctx->pc = 0x26CA18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26ca18;
        }
    }
    ctx->pc = 0x26CA3Cu;
label_26ca3c:
    // 0x26ca3c: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x26ca3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_26ca40:
    // 0x26ca40: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
label_26ca44:
    if (ctx->pc == 0x26CA44u) {
        ctx->pc = 0x26CA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA40u;
        // 0x26ca44: 0x8e510254  lw          $s1, 0x254($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA48u;
        goto label_26ca48;
    }
    ctx->pc = 0x26CA40u;
    {
        const bool branch_taken_0x26ca40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca40) {
            ctx->pc = 0x26CA44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CA40u;
            // 0x26ca44: 0x8e510254  lw          $s1, 0x254($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CAA4u;
            goto label_26caa4;
        }
    }
    ctx->pc = 0x26CA48u;
label_26ca48:
    // 0x26ca48: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x26ca48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
label_26ca4c:
    // 0x26ca4c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x26ca4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_26ca50:
    // 0x26ca50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26ca54:
    if (ctx->pc == 0x26CA54u) {
        ctx->pc = 0x26CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA50u;
        // 0x26ca54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA58u;
        goto label_26ca58;
    }
    ctx->pc = 0x26CA50u;
    {
        const bool branch_taken_0x26ca50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA50u;
        // 0x26ca54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca50) {
            ctx->pc = 0x26CA64u;
            goto label_26ca64;
        }
    }
    ctx->pc = 0x26CA58u;
label_26ca58:
    // 0x26ca58: 0xc0837b4  jal         func_20DED0
label_26ca5c:
    if (ctx->pc == 0x26CA5Cu) {
        ctx->pc = 0x26CA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA58u;
        // 0x26ca5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA60u;
        goto label_26ca60;
    }
    ctx->pc = 0x26CA58u;
    SET_GPR_U32(ctx, 31, 0x26CA60u);
    ctx->pc = 0x26CA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA58u;
    // 0x26ca5c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DED0u, 0x26CA58u, 0x26CA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CA60u;
label_26ca60:
    // 0x26ca60: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26ca60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ca64:
    // 0x26ca64: 0x8e430270  lw          $v1, 0x270($s2)
    ctx->pc = 0x26ca64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_26ca68:
    // 0x26ca68: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x26ca68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_26ca6c:
    // 0x26ca6c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x26ca6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_26ca70:
    // 0x26ca70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26ca74:
    if (ctx->pc == 0x26CA74u) {
        ctx->pc = 0x26CA78u;
        goto label_26ca78;
    }
    ctx->pc = 0x26CA70u;
    {
        const bool branch_taken_0x26ca70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca70) {
            ctx->pc = 0x26CA88u;
            goto label_26ca88;
        }
    }
    ctx->pc = 0x26CA78u;
label_26ca78:
    // 0x26ca78: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x26ca78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_26ca7c:
    // 0x26ca7c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ca80:
    // 0x26ca80: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x26ca80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
label_26ca84:
    // 0x26ca84: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x26ca84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
label_26ca88:
    // 0x26ca88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_26ca8c:
    if (ctx->pc == 0x26CA8Cu) {
        ctx->pc = 0x26CA90u;
        goto label_26ca90;
    }
    ctx->pc = 0x26CA88u;
    {
        const bool branch_taken_0x26ca88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ca88) {
            ctx->pc = 0x26CA98u;
            goto label_26ca98;
        }
    }
    ctx->pc = 0x26CA90u;
label_26ca90:
    // 0x26ca90: 0x100003e7  b           . + 4 + (0x3E7 << 2)
label_26ca94:
    if (ctx->pc == 0x26CA94u) {
        ctx->pc = 0x26CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA90u;
        // 0x26ca94: 0xae400270  sw          $zero, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CA98u;
        goto label_26ca98;
    }
    ctx->pc = 0x26CA90u;
    {
        const bool branch_taken_0x26ca90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA90u;
        // 0x26ca94: 0xae400270  sw          $zero, 0x270($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ca90) {
            ctx->pc = 0x26DA30u;
            goto label_26da30;
        }
    }
    ctx->pc = 0x26CA98u;
label_26ca98:
    // 0x26ca98: 0xc09b8b4  jal         func_26E2D0
label_26ca9c:
    if (ctx->pc == 0x26CA9Cu) {
        ctx->pc = 0x26CA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CA98u;
        // 0x26ca9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAA0u;
        goto label_26caa0;
    }
    ctx->pc = 0x26CA98u;
    SET_GPR_U32(ctx, 31, 0x26CAA0u);
    ctx->pc = 0x26CA9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CA98u;
    // 0x26ca9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E2D0u, 0x26CA98u, 0x26CAA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAA0u;
label_26caa0:
    // 0x26caa0: 0x8e510254  lw          $s1, 0x254($s2)
    ctx->pc = 0x26caa0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_26caa4:
    // 0x26caa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26caa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26caa8:
    // 0x26caa8: 0x1222024c  beq         $s1, $v0, . + 4 + (0x24C << 2)
label_26caac:
    if (ctx->pc == 0x26CAACu) {
        ctx->pc = 0x26CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAA8u;
        // 0x26caac: 0x2a220003  slti        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAB0u;
        goto label_26cab0;
    }
    ctx->pc = 0x26CAA8u;
    {
        const bool branch_taken_0x26caa8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAA8u;
        // 0x26caac: 0x2a220003  slti        $v0, $s1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26caa8) {
            ctx->pc = 0x26D3DCu;
            goto label_26d3dc;
        }
    }
    ctx->pc = 0x26CAB0u;
label_26cab0:
    // 0x26cab0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26cab4:
    if (ctx->pc == 0x26CAB4u) {
        ctx->pc = 0x26CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAB0u;
        // 0x26cab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAB8u;
        goto label_26cab8;
    }
    ctx->pc = 0x26CAB0u;
    {
        const bool branch_taken_0x26cab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAB0u;
        // 0x26cab4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cab0) {
            ctx->pc = 0x26CAC8u;
            goto label_26cac8;
        }
    }
    ctx->pc = 0x26CAB8u;
label_26cab8:
    // 0x26cab8: 0x1222000a  beq         $s1, $v0, . + 4 + (0xA << 2)
label_26cabc:
    if (ctx->pc == 0x26CABCu) {
        ctx->pc = 0x26CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAB8u;
        // 0x26cabc: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAC0u;
        goto label_26cac0;
    }
    ctx->pc = 0x26CAB8u;
    {
        const bool branch_taken_0x26cab8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAB8u;
        // 0x26cabc: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cab8) {
            ctx->pc = 0x26CAE4u;
            goto label_26cae4;
        }
    }
    ctx->pc = 0x26CAC0u;
label_26cac0:
    // 0x26cac0: 0x10000340  b           . + 4 + (0x340 << 2)
label_26cac4:
    if (ctx->pc == 0x26CAC4u) {
        ctx->pc = 0x26CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAC0u;
        // 0x26cac4: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAC8u;
        goto label_26cac8;
    }
    ctx->pc = 0x26CAC0u;
    {
        const bool branch_taken_0x26cac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CAC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAC0u;
        // 0x26cac4: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cac0) {
            ctx->pc = 0x26D7C4u;
            goto label_26d7c4;
        }
    }
    ctx->pc = 0x26CAC8u;
label_26cac8:
    // 0x26cac8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26cac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_26cacc:
    // 0x26cacc: 0x12220293  beq         $s1, $v0, . + 4 + (0x293 << 2)
label_26cad0:
    if (ctx->pc == 0x26CAD0u) {
        ctx->pc = 0x26CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CACCu;
        // 0x26cad0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAD4u;
        goto label_26cad4;
    }
    ctx->pc = 0x26CACCu;
    {
        const bool branch_taken_0x26cacc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CACCu;
        // 0x26cad0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cacc) {
            ctx->pc = 0x26D51Cu;
            goto label_26d51c;
        }
    }
    ctx->pc = 0x26CAD4u;
label_26cad4:
    // 0x26cad4: 0x122202d8  beq         $s1, $v0, . + 4 + (0x2D8 << 2)
label_26cad8:
    if (ctx->pc == 0x26CAD8u) {
        ctx->pc = 0x26CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAD4u;
        // 0x26cad8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CADCu;
        goto label_26cadc;
    }
    ctx->pc = 0x26CAD4u;
    {
        const bool branch_taken_0x26cad4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x26CAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAD4u;
        // 0x26cad8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cad4) {
            ctx->pc = 0x26D638u;
            goto label_26d638;
        }
    }
    ctx->pc = 0x26CADCu;
label_26cadc:
    // 0x26cadc: 0x10000339  b           . + 4 + (0x339 << 2)
label_26cae0:
    if (ctx->pc == 0x26CAE0u) {
        ctx->pc = 0x26CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CADCu;
        // 0x26cae0: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAE4u;
        goto label_26cae4;
    }
    ctx->pc = 0x26CADCu;
    {
        const bool branch_taken_0x26cadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CADCu;
        // 0x26cae0: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cadc) {
            ctx->pc = 0x26D7C4u;
            goto label_26d7c4;
        }
    }
    ctx->pc = 0x26CAE4u;
label_26cae4:
    // 0x26cae4: 0xc0f6a96  jal         func_3DAA58
label_26cae8:
    if (ctx->pc == 0x26CAE8u) {
        ctx->pc = 0x26CAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAE4u;
        // 0x26cae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAECu;
        goto label_26caec;
    }
    ctx->pc = 0x26CAE4u;
    SET_GPR_U32(ctx, 31, 0x26CAECu);
    ctx->pc = 0x26CAE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAE4u;
    // 0x26cae8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26CAE4u, 0x26CAECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAECu;
label_26caec:
    // 0x26caec: 0xc0f6a96  jal         func_3DAA58
label_26caf0:
    if (ctx->pc == 0x26CAF0u) {
        ctx->pc = 0x26CAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CAECu;
        // 0x26caf0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CAF4u;
        goto label_26caf4;
    }
    ctx->pc = 0x26CAECu;
    SET_GPR_U32(ctx, 31, 0x26CAF4u);
    ctx->pc = 0x26CAF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CAECu;
    // 0x26caf0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26CAECu, 0x26CAF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CAF4u;
label_26caf4:
    // 0x26caf4: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x26caf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_26caf8:
    // 0x26caf8: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x26caf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_26cafc:
    // 0x26cafc: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x26cafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_26cb00:
    // 0x26cb00: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x26cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_26cb04:
    // 0x26cb04: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x26cb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_26cb08:
    // 0x26cb08: 0x7ba20060  lq          $v0, 0x60($sp)
    ctx->pc = 0x26cb08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_26cb0c:
    // 0x26cb0c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x26cb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_26cb10:
    // 0x26cb10: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x26cb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_26cb14:
    // 0x26cb14: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x26cb14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
label_26cb18:
    // 0x26cb18: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x26cb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_26cb1c:
    // 0x26cb1c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x26cb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_26cb20:
    // 0x26cb20: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x26cb20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_26cb24:
    // 0x26cb24: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26cb24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26cb28:
    // 0x26cb28: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x26cb28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_26cb2c:
    // 0x26cb2c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x26cb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_26cb30:
    // 0x26cb30: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x26cb30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_26cb34:
    // 0x26cb34: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x26cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
label_26cb38:
    // 0x26cb38: 0xafa0006c  sw          $zero, 0x6C($sp)
    ctx->pc = 0x26cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 0));
label_26cb3c:
    // 0x26cb3c: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26cb3cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26cb40:
    // 0x26cb40: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x26cb40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_26cb44:
    // 0x26cb44: 0x92420251  lbu         $v0, 0x251($s2)
    ctx->pc = 0x26cb44u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 593)));
label_26cb48:
    // 0x26cb48: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x26cb48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26cb4c:
    // 0x26cb4c: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x26cb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
label_26cb50:
    // 0x26cb50: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_26cb54:
    if (ctx->pc == 0x26CB54u) {
        ctx->pc = 0x26CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB50u;
        // 0x26cb54: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB58u;
        goto label_26cb58;
    }
    ctx->pc = 0x26CB50u;
    {
        const bool branch_taken_0x26cb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB50u;
        // 0x26cb54: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb50) {
            ctx->pc = 0x26CB84u;
            goto label_26cb84;
        }
    }
    ctx->pc = 0x26CB58u;
label_26cb58:
    // 0x26cb58: 0xa2400251  sb          $zero, 0x251($s2)
    ctx->pc = 0x26cb58u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 593), (uint8_t)GPR_U32(ctx, 0));
label_26cb5c:
    // 0x26cb5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26cb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26cb60:
    // 0x26cb60: 0xc0cd984  jal         func_336610
label_26cb64:
    if (ctx->pc == 0x26CB64u) {
        ctx->pc = 0x26CB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB60u;
        // 0x26cb64: 0xa2400252  sb          $zero, 0x252($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 594), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB68u;
        goto label_26cb68;
    }
    ctx->pc = 0x26CB60u;
    SET_GPR_U32(ctx, 31, 0x26CB68u);
    ctx->pc = 0x26CB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB60u;
    // 0x26cb64: 0xa2400252  sb          $zero, 0x252($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 594), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336610u, 0x26CB60u, 0x26CB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB68u;
label_26cb68:
    // 0x26cb68: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_26cb6c:
    if (ctx->pc == 0x26CB6Cu) {
        ctx->pc = 0x26CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB68u;
        // 0x26cb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB70u;
        goto label_26cb70;
    }
    ctx->pc = 0x26CB68u;
    {
        const bool branch_taken_0x26cb68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB68u;
        // 0x26cb6c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb68) {
            ctx->pc = 0x26CB84u;
            goto label_26cb84;
        }
    }
    ctx->pc = 0x26CB70u;
label_26cb70:
    // 0x26cb70: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26cb70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_26cb74:
    // 0x26cb74: 0xc0cd5bc  jal         func_3356F0
label_26cb78:
    if (ctx->pc == 0x26CB78u) {
        ctx->pc = 0x26CB78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB74u;
        // 0x26cb78: 0x24a57bc8  addiu       $a1, $a1, 0x7BC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31688));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB7Cu;
        goto label_26cb7c;
    }
    ctx->pc = 0x26CB74u;
    SET_GPR_U32(ctx, 31, 0x26CB7Cu);
    ctx->pc = 0x26CB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CB74u;
    // 0x26cb78: 0x24a57bc8  addiu       $a1, $a1, 0x7BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3356F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3356F0u, 0x26CB74u, 0x26CB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CB7Cu;
label_26cb7c:
    // 0x26cb7c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_26cb80:
    if (ctx->pc == 0x26CB80u) {
        ctx->pc = 0x26CB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB7Cu;
        // 0x26cb80: 0xa2510252  sb          $s1, 0x252($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 594), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB84u;
        goto label_26cb84;
    }
    ctx->pc = 0x26CB7Cu;
    {
        const bool branch_taken_0x26cb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cb7c) {
            ctx->pc = 0x26CB80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB7Cu;
            // 0x26cb80: 0xa2510252  sb          $s1, 0x252($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 594), (uint8_t)GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CB84u;
            goto label_26cb84;
        }
    }
    ctx->pc = 0x26CB84u;
label_26cb84:
    // 0x26cb84: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26cb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26cb88:
    // 0x26cb88: 0x8c43be30  lw          $v1, -0x41D0($v0)
    ctx->pc = 0x26cb88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950448)));
label_26cb8c:
    // 0x26cb8c: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_26cb90:
    if (ctx->pc == 0x26CB90u) {
        ctx->pc = 0x26CB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB8Cu;
        // 0x26cb90: 0xa2400252  sb          $zero, 0x252($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 594), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CB94u;
        goto label_26cb94;
    }
    ctx->pc = 0x26CB8Cu;
    {
        const bool branch_taken_0x26cb8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cb8c) {
            ctx->pc = 0x26CB90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CB8Cu;
            // 0x26cb90: 0xa2400252  sb          $zero, 0x252($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 594), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CBC8u;
            goto label_26cbc8;
        }
    }
    ctx->pc = 0x26CB94u;
label_26cb94:
    // 0x26cb94: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26cb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26cb98:
    // 0x26cb98: 0x8c44bd50  lw          $a0, -0x42B0($v0)
    ctx->pc = 0x26cb98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_26cb9c:
    // 0x26cb9c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_26cba0:
    if (ctx->pc == 0x26CBA0u) {
        ctx->pc = 0x26CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB9Cu;
        // 0x26cba0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBA4u;
        goto label_26cba4;
    }
    ctx->pc = 0x26CB9Cu;
    {
        const bool branch_taken_0x26cb9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CB9Cu;
        // 0x26cba0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cb9c) {
            ctx->pc = 0x26CBB8u;
            goto label_26cbb8;
        }
    }
    ctx->pc = 0x26CBA4u;
label_26cba4:
    // 0x26cba4: 0xc0b9400  jal         func_2E5000
label_26cba8:
    if (ctx->pc == 0x26CBA8u) {
        ctx->pc = 0x26CBACu;
        goto label_26cbac;
    }
    ctx->pc = 0x26CBA4u;
    SET_GPR_U32(ctx, 31, 0x26CBACu);
    ctx->pc = 0x2E5000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E5000u, 0x26CBA4u, 0x26CBACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CBACu;
label_26cbac:
    // 0x26cbac: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_26cbb0:
    if (ctx->pc == 0x26CBB0u) {
        ctx->pc = 0x26CBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBACu;
        // 0x26cbb0: 0xa2400252  sb          $zero, 0x252($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 594), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBB4u;
        goto label_26cbb4;
    }
    ctx->pc = 0x26CBACu;
    {
        const bool branch_taken_0x26cbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26cbac) {
            ctx->pc = 0x26CBB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CBACu;
            // 0x26cbb0: 0xa2400252  sb          $zero, 0x252($s2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 18), 594), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26CBC8u;
            goto label_26cbc8;
        }
    }
    ctx->pc = 0x26CBB4u;
label_26cbb4:
    // 0x26cbb4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26cbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26cbb8:
    // 0x26cbb8: 0x8c43bd64  lw          $v1, -0x429C($v0)
    ctx->pc = 0x26cbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950244)));
label_26cbbc:
    // 0x26cbbc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_26cbc0:
    if (ctx->pc == 0x26CBC0u) {
        ctx->pc = 0x26CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBBCu;
        // 0x26cbc0: 0x93a20070  lbu         $v0, 0x70($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CBC4u;
        goto label_26cbc4;
    }
    ctx->pc = 0x26CBBCu;
    {
        const bool branch_taken_0x26cbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CBBCu;
        // 0x26cbc0: 0x93a20070  lbu         $v0, 0x70($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cbbc) {
            ctx->pc = 0x26CBCCu;
            goto label_26cbcc;
        }
    }
    ctx->pc = 0x26CBC4u;
label_26cbc4:
    // 0x26cbc4: 0xa2400252  sb          $zero, 0x252($s2)
    ctx->pc = 0x26cbc4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 594), (uint8_t)GPR_U32(ctx, 0));
label_26cbc8:
    // 0x26cbc8: 0x93a20070  lbu         $v0, 0x70($sp)
    ctx->pc = 0x26cbc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 112)));
label_26cbcc:
    // 0x26cbcc: 0x8e440258  lw          $a0, 0x258($s2)
    ctx->pc = 0x26cbccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
label_26cbd0:
    // 0x26cbd0: 0xa3a20060  sb          $v0, 0x60($sp)
    ctx->pc = 0x26cbd0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 2));
label_26cbd4:
    // 0x26cbd4: 0x24850040  addiu       $a1, $a0, 0x40
    ctx->pc = 0x26cbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_26cbd8:
    // 0x26cbd8: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x26cbd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
label_26cbdc:
    // 0x26cbdc: 0x92460252  lbu         $a2, 0x252($s2)
    ctx->pc = 0x26cbdcu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 594)));
label_26cbe0:
    // 0x26cbe0: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x26cbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
label_26cbe4:
    // 0x26cbe4: 0x78830020  lq          $v1, 0x20($a0)
    ctx->pc = 0x26cbe4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 32)));
label_26cbe8:
    // 0x26cbe8: 0x7fa30090  sq          $v1, 0x90($sp)
    ctx->pc = 0x26cbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 3));
label_26cbec:
    // 0x26cbec: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x26cbecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cbf0:
    // 0x26cbf0: 0xe7a000a0  swc1        $f0, 0xA0($sp)
    ctx->pc = 0x26cbf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_26cbf4:
    // 0x26cbf4: 0xc4810040  lwc1        $f1, 0x40($a0)
    ctx->pc = 0x26cbf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cbf8:
    // 0x26cbf8: 0xe7a100b0  swc1        $f1, 0xB0($sp)
    ctx->pc = 0x26cbf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_26cbfc:
    // 0x26cbfc: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x26cbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cc00:
    // 0x26cc00: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x26cc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
label_26cc04:
    // 0x26cc04: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x26cc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cc08:
    // 0x26cc08: 0xe7a100b8  swc1        $f1, 0xB8($sp)
    ctx->pc = 0x26cc08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
label_26cc0c:
    // 0x26cc0c: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x26cc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cc10:
    // 0x26cc10: 0x10c00199  beqz        $a2, . + 4 + (0x199 << 2)
label_26cc14:
    if (ctx->pc == 0x26CC14u) {
        ctx->pc = 0x26CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC10u;
        // 0x26cc14: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC18u;
        goto label_26cc18;
    }
    ctx->pc = 0x26CC10u;
    {
        const bool branch_taken_0x26cc10 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC10u;
        // 0x26cc14: 0xe7a000bc  swc1        $f0, 0xBC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc10) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26CC18u;
label_26cc18:
    // 0x26cc18: 0x3c11005a  lui         $s1, 0x5A
    ctx->pc = 0x26cc18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)90 << 16));
label_26cc1c:
    // 0x26cc1c: 0x26336830  addiu       $s3, $s1, 0x6830
    ctx->pc = 0x26cc1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 26672));
label_26cc20:
    // 0x26cc20: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x26cc20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_26cc24:
    // 0x26cc24: 0x10600194  beqz        $v1, . + 4 + (0x194 << 2)
label_26cc28:
    if (ctx->pc == 0x26CC28u) {
        ctx->pc = 0x26CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC24u;
        // 0x26cc28: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC2Cu;
        goto label_26cc2c;
    }
    ctx->pc = 0x26CC24u;
    {
        const bool branch_taken_0x26cc24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC24u;
        // 0x26cc28: 0x24620020  addiu       $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc24) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26CC2Cu;
label_26cc2c:
    // 0x26cc2c: 0x10400192  beqz        $v0, . + 4 + (0x192 << 2)
label_26cc30:
    if (ctx->pc == 0x26CC30u) {
        ctx->pc = 0x26CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC2Cu;
        // 0x26cc30: 0x24620030  addiu       $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC34u;
        goto label_26cc34;
    }
    ctx->pc = 0x26CC2Cu;
    {
        const bool branch_taken_0x26cc2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC2Cu;
        // 0x26cc30: 0x24620030  addiu       $v0, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc2c) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26CC34u;
label_26cc34:
    // 0x26cc34: 0x10400190  beqz        $v0, . + 4 + (0x190 << 2)
label_26cc38:
    if (ctx->pc == 0x26CC38u) {
        ctx->pc = 0x26CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC34u;
        // 0x26cc38: 0xc6206830  lwc1        $f0, 0x6830($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC3Cu;
        goto label_26cc3c;
    }
    ctx->pc = 0x26CC34u;
    {
        const bool branch_taken_0x26cc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC34u;
        // 0x26cc38: 0xc6206830  lwc1        $f0, 0x6830($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc34) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26CC3Cu;
label_26cc3c:
    // 0x26cc3c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x26cc3cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26cc40:
    // 0x26cc40: 0x0  nop
    ctx->pc = 0x26cc40u;
    // NOP
label_26cc44:
    // 0x26cc44: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26cc44u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26cc48:
    // 0x26cc48: 0x0  nop
    ctx->pc = 0x26cc48u;
    // NOP
label_26cc4c:
    // 0x26cc4c: 0x4502018b  bc1fl       . + 4 + (0x18B << 2)
label_26cc50:
    if (ctx->pc == 0x26CC50u) {
        ctx->pc = 0x26CC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC4Cu;
        // 0x26cc50: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC54u;
        goto label_26cc54;
    }
    ctx->pc = 0x26CC4Cu;
    {
        const bool branch_taken_0x26cc4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26cc4c) {
            ctx->pc = 0x26CC50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26CC4Cu;
            // 0x26cc50: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D27Cu;
            goto label_26d27c;
        }
    }
    ctx->pc = 0x26CC54u;
label_26cc54:
    // 0x26cc54: 0xc6600004  lwc1        $f0, 0x4($s3)
    ctx->pc = 0x26cc54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cc58:
    // 0x26cc58: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x26cc58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26cc5c:
    // 0x26cc5c: 0x0  nop
    ctx->pc = 0x26cc5cu;
    // NOP
label_26cc60:
    // 0x26cc60: 0x45000185  bc1f        . + 4 + (0x185 << 2)
label_26cc64:
    if (ctx->pc == 0x26CC64u) {
        ctx->pc = 0x26CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC60u;
        // 0x26cc64: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC68u;
        goto label_26cc68;
    }
    ctx->pc = 0x26CC60u;
    {
        const bool branch_taken_0x26cc60 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC60u;
        // 0x26cc64: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26cc60) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26CC68u;
label_26cc68:
    // 0x26cc68: 0x92420250  lbu         $v0, 0x250($s2)
    ctx->pc = 0x26cc68u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 592)));
label_26cc6c:
    // 0x26cc6c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x26cc6cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26cc70:
    // 0x26cc70: 0xc07a8b2  jal         func_1EA2C8
label_26cc74:
    if (ctx->pc == 0x26CC74u) {
        ctx->pc = 0x26CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CC70u;
        // 0x26cc74: 0xafa20234  sw          $v0, 0x234($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CC78u;
        goto label_26cc78;
    }
    ctx->pc = 0x26CC70u;
    SET_GPR_U32(ctx, 31, 0x26CC78u);
    ctx->pc = 0x26CC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CC70u;
    // 0x26cc74: 0xafa20234  sw          $v0, 0x234($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA2C8u, 0x26CC70u, 0x26CC78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CC78u;
label_26cc78:
    // 0x26cc78: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x26cc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_26cc7c:
    // 0x26cc7c: 0x8e700050  lw          $s0, 0x50($s3)
    ctx->pc = 0x26cc7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_26cc80:
    // 0x26cc80: 0xc4417bd8  lwc1        $f1, 0x7BD8($v0)
    ctx->pc = 0x26cc80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cc84:
    // 0x26cc84: 0x3c013ecc  lui         $at, 0x3ECC
    ctx->pc = 0x26cc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16076 << 16));
label_26cc88:
    // 0x26cc88: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26cc88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26cc8c:
    // 0x26cc8c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cc8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cc90:
    // 0x26cc90: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x26cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_26cc94:
    // 0x26cc94: 0xe7a10230  swc1        $f1, 0x230($sp)
    ctx->pc = 0x26cc94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_26cc98:
    // 0x26cc98: 0xc6236830  lwc1        $f3, 0x6830($s1)
    ctx->pc = 0x26cc98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 26672)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26cc9c:
    // 0x26cc9c: 0xc6010000  lwc1        $f1, 0x0($s0)
    ctx->pc = 0x26cc9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cca0:
    // 0x26cca0: 0xc6620004  lwc1        $f2, 0x4($s3)
    ctx->pc = 0x26cca0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cca4:
    // 0x26cca4: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x26cca4u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_26cca8:
    // 0x26cca8: 0xe7a10060  swc1        $f1, 0x60($sp)
    ctx->pc = 0x26cca8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
label_26ccac:
    // 0x26ccac: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x26ccacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ccb0:
    // 0x26ccb0: 0xe7a00064  swc1        $f0, 0x64($sp)
    ctx->pc = 0x26ccb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
label_26ccb4:
    // 0x26ccb4: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x26ccb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ccb8:
    // 0x26ccb8: 0xe7a10068  swc1        $f1, 0x68($sp)
    ctx->pc = 0x26ccb8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
label_26ccbc:
    // 0x26ccbc: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x26ccbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ccc0:
    // 0x26ccc0: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x26ccc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
label_26ccc4:
    // 0x26ccc4: 0xc6010010  lwc1        $f1, 0x10($s0)
    ctx->pc = 0x26ccc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ccc8:
    // 0x26ccc8: 0xe7a10120  swc1        $f1, 0x120($sp)
    ctx->pc = 0x26ccc8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_26cccc:
    // 0x26cccc: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x26ccccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ccd0:
    // 0x26ccd0: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x26ccd0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
label_26ccd4:
    // 0x26ccd4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26ccd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26ccd8:
    // 0x26ccd8: 0xe7a10128  swc1        $f1, 0x128($sp)
    ctx->pc = 0x26ccd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
label_26ccdc:
    // 0x26ccdc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x26ccdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cce0:
    // 0x26cce0: 0x44031800  mfc1        $v1, $f3
    ctx->pc = 0x26cce0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26cce4:
    // 0x26cce4: 0xe7a0012c  swc1        $f0, 0x12C($sp)
    ctx->pc = 0x26cce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 300), bits); }
label_26cce8:
    // 0x26cce8: 0xda810000  lqc2        $vf1, 0x0($s4)
    ctx->pc = 0x26cce8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_26ccec:
    // 0x26ccec: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x26ccecu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_26ccf0:
    // 0x26ccf0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26ccf0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ccf4:
    // 0x26ccf4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x26ccf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ccf8:
    // 0x26ccf8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x26ccf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_26ccfc:
    // 0x26ccfc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x26ccfcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_26cd00:
    // 0x26cd00: 0x27a20120  addiu       $v0, $sp, 0x120
    ctx->pc = 0x26cd00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_26cd04:
    // 0x26cd04: 0x46161082  mul.s       $f2, $f2, $f22
    ctx->pc = 0x26cd04u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_26cd08:
    // 0x26cd08: 0x44041000  mfc1        $a0, $f2
    ctx->pc = 0x26cd08u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_26cd0c:
    // 0x26cd0c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x26cd0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26cd10:
    // 0x26cd10: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x26cd10u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_26cd14:
    // 0x26cd14: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26cd14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26cd18:
    // 0x26cd18: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x26cd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
label_26cd1c:
    // 0x26cd1c: 0x27a30080  addiu       $v1, $sp, 0x80
    ctx->pc = 0x26cd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_26cd20:
    // 0x26cd20: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x26cd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_26cd24:
    // 0x26cd24: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26cd24u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26cd28:
    // 0x26cd28: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x26cd28u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26cd2c:
    // 0x26cd2c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26cd2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26cd30:
    // 0x26cd30: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x26cd30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
label_26cd34:
    // 0x26cd34: 0xc7a30140  lwc1        $f3, 0x140($sp)
    ctx->pc = 0x26cd34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26cd38:
    // 0x26cd38: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x26cd38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_26cd3c:
    // 0x26cd3c: 0xc7a00144  lwc1        $f0, 0x144($sp)
    ctx->pc = 0x26cd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cd40:
    // 0x26cd40: 0xc7a10148  lwc1        $f1, 0x148($sp)
    ctx->pc = 0x26cd40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cd44:
    // 0x26cd44: 0xc7a2014c  lwc1        $f2, 0x14C($sp)
    ctx->pc = 0x26cd44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cd48:
    // 0x26cd48: 0xe7a30130  swc1        $f3, 0x130($sp)
    ctx->pc = 0x26cd48u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_26cd4c:
    // 0x26cd4c: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x26cd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_26cd50:
    // 0x26cd50: 0xe7a10138  swc1        $f1, 0x138($sp)
    ctx->pc = 0x26cd50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
label_26cd54:
    // 0x26cd54: 0xe7a2013c  swc1        $f2, 0x13C($sp)
    ctx->pc = 0x26cd54u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
label_26cd58:
    // 0x26cd58: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26cd58u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26cd5c:
    // 0x26cd5c: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x26cd5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26cd60:
    // 0x26cd60: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x26cd60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26cd64:
    // 0x26cd64: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x26cd64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26cd68:
    // 0x26cd68: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x26cd68u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_26cd6c:
    // 0x26cd6c: 0x4a0003bf  vwaitq
    ctx->pc = 0x26cd6cu;
    // VWAITQ (Q already resolved in this runtime)
label_26cd70:
    // 0x26cd70: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x26cd70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26cd74:
    // 0x26cd74: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x26cd74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
label_26cd78:
    // 0x26cd78: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x26cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_26cd7c:
    // 0x26cd7c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26cd7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cd80:
    // 0x26cd80: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x26cd80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26cd84:
    // 0x26cd84: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x26cd84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26cd88:
    // 0x26cd88: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26cd88u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_26cd8c:
    // 0x26cd8c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26cd8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_26cd90:
    // 0x26cd90: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x26cd90u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_26cd94:
    // 0x26cd94: 0x46000004  c1          0x4
    ctx->pc = 0x26cd94u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
label_26cd98:
    // 0x26cd98: 0x8e430258  lw          $v1, 0x258($s2)
    ctx->pc = 0x26cd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
label_26cd9c:
    // 0x26cd9c: 0xc4610020  lwc1        $f1, 0x20($v1)
    ctx->pc = 0x26cd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cda0:
    // 0x26cda0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x26cda0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_26cda4:
    // 0x26cda4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x26cda4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_26cda8:
    // 0x26cda8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26cda8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26cdac:
    // 0x26cdac: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x26cdacu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
label_26cdb0:
    // 0x26cdb0: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26cdb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26cdb4:
    // 0x26cdb4: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x26cdb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
label_26cdb8:
    // 0x26cdb8: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26cdb8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26cdbc:
    // 0x26cdbc: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x26cdbcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26cdc0:
    // 0x26cdc0: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26cdc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26cdc4:
    // 0x26cdc4: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x26cdc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
label_26cdc8:
    // 0x26cdc8: 0xc0f6a96  jal         func_3DAA58
label_26cdcc:
    if (ctx->pc == 0x26CDCCu) {
        ctx->pc = 0x26CDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDC8u;
        // 0x26cdcc: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CDD0u;
        goto label_26cdd0;
    }
    ctx->pc = 0x26CDC8u;
    SET_GPR_U32(ctx, 31, 0x26CDD0u);
    ctx->pc = 0x26CDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDC8u;
    // 0x26cdcc: 0x27a40180  addiu       $a0, $sp, 0x180 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26CDC8u, 0x26CDD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDD0u;
label_26cdd0:
    // 0x26cdd0: 0xc0f6a96  jal         func_3DAA58
label_26cdd4:
    if (ctx->pc == 0x26CDD4u) {
        ctx->pc = 0x26CDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CDD0u;
        // 0x26cdd4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CDD8u;
        goto label_26cdd8;
    }
    ctx->pc = 0x26CDD0u;
    SET_GPR_U32(ctx, 31, 0x26CDD8u);
    ctx->pc = 0x26CDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CDD0u;
    // 0x26cdd4: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x26CDD0u, 0x26CDD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CDD8u;
label_26cdd8:
    // 0x26cdd8: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x26cdd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
label_26cddc:
    // 0x26cddc: 0x27a60180  addiu       $a2, $sp, 0x180
    ctx->pc = 0x26cddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_26cde0:
    // 0x26cde0: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x26cde0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
label_26cde4:
    // 0x26cde4: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x26cde4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_26cde8:
    // 0x26cde8: 0x7fa20160  sq          $v0, 0x160($sp)
    ctx->pc = 0x26cde8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 2));
label_26cdec:
    // 0x26cdec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x26cdecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_26cdf0:
    // 0x26cdf0: 0x7fa30170  sq          $v1, 0x170($sp)
    ctx->pc = 0x26cdf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
label_26cdf4:
    // 0x26cdf4: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x26cdf4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26cdf8:
    // 0x26cdf8: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x26cdf8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26cdfc:
    // 0x26cdfc: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26cdfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ce00:
    // 0x26ce00: 0xfba10180  sqc2        $vf1, 0x180($sp)
    ctx->pc = 0x26ce00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ce04:
    // 0x26ce04: 0xc4c20000  lwc1        $f2, 0x0($a2)
    ctx->pc = 0x26ce04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26ce08:
    // 0x26ce08: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x26ce08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26ce0c:
    // 0x26ce0c: 0xc4c40008  lwc1        $f4, 0x8($a2)
    ctx->pc = 0x26ce0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26ce10:
    // 0x26ce10: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26ce10u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_26ce14:
    // 0x26ce14: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26ce14u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_26ce18:
    // 0x26ce18: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x26ce18u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_26ce1c:
    // 0x26ce1c: 0x0  nop
    ctx->pc = 0x26ce1cu;
    // NOP
label_26ce20:
    // 0x26ce20: 0x0  nop
    ctx->pc = 0x26ce20u;
    // NOP
label_26ce24:
    // 0x26ce24: 0x46000044  c1          0x44
    ctx->pc = 0x26ce24u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_26ce28:
    // 0x26ce28: 0xe7a001a4  swc1        $f0, 0x1A4($sp)
    ctx->pc = 0x26ce28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 420), bits); }
label_26ce2c:
    // 0x26ce2c: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x26ce2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26ce30:
    // 0x26ce30: 0x0  nop
    ctx->pc = 0x26ce30u;
    // NOP
label_26ce34:
    // 0x26ce34: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_26ce38:
    if (ctx->pc == 0x26CE38u) {
        ctx->pc = 0x26CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE34u;
        // 0x26ce38: 0xe7a101a0  swc1        $f1, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE3Cu;
        goto label_26ce3c;
    }
    ctx->pc = 0x26CE34u;
    {
        const bool branch_taken_0x26ce34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26CE38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE34u;
        // 0x26ce38: 0xe7a101a0  swc1        $f1, 0x1A0($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 416), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce34) {
            ctx->pc = 0x26CE60u;
            goto label_26ce60;
        }
    }
    ctx->pc = 0x26CE3Cu;
label_26ce3c:
    // 0x26ce3c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26ce3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26ce40:
    // 0x26ce40: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26ce40u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26ce44:
    // 0x26ce44: 0x0  nop
    ctx->pc = 0x26ce44u;
    // NOP
label_26ce48:
    // 0x26ce48: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x26ce48u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_26ce4c:
    // 0x26ce4c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x26ce4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
label_26ce50:
    // 0x26ce50: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x26ce50u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_26ce54:
    // 0x26ce54: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x26ce54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
label_26ce58:
    // 0x26ce58: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26ce58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26ce5c:
    // 0x26ce5c: 0xfba10190  sqc2        $vf1, 0x190($sp)
    ctx->pc = 0x26ce5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), _mm_castps_si128(ctx->vu0_vf[1]));
label_26ce60:
    // 0x26ce60: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26ce60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26ce64:
    // 0x26ce64: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x26ce64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_26ce68:
    // 0x26ce68: 0x34a50212  ori         $a1, $a1, 0x212
    ctx->pc = 0x26ce68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)530);
label_26ce6c:
    // 0x26ce6c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26ce6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26ce70:
    // 0x26ce70: 0xc07789e  jal         func_1DE278
label_26ce74:
    if (ctx->pc == 0x26CE74u) {
        ctx->pc = 0x26CE74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE70u;
        // 0x26ce74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE78u;
        goto label_26ce78;
    }
    ctx->pc = 0x26CE70u;
    SET_GPR_U32(ctx, 31, 0x26CE78u);
    ctx->pc = 0x26CE74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26CE70u;
    // 0x26ce74: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DE278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DE278u, 0x26CE70u, 0x26CE78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26CE78u;
label_26ce78:
    // 0x26ce78: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26ce78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26ce7c:
    // 0x26ce7c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x26ce7cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26ce80:
    // 0x26ce80: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
label_26ce84:
    if (ctx->pc == 0x26CE84u) {
        ctx->pc = 0x26CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE80u;
        // 0x26ce84: 0xafa20238  sw          $v0, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26CE88u;
        goto label_26ce88;
    }
    ctx->pc = 0x26CE80u;
    {
        const bool branch_taken_0x26ce80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26CE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26CE80u;
        // 0x26ce84: 0xafa20238  sw          $v0, 0x238($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 568), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ce80) {
            ctx->pc = 0x26D248u;
            goto label_26d248;
        }
    }
    ctx->pc = 0x26CE88u;
label_26ce88:
    // 0x26ce88: 0xc7a30060  lwc1        $f3, 0x60($sp)
    ctx->pc = 0x26ce88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26ce8c:
    // 0x26ce8c: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x26ce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_26ce90:
    // 0x26ce90: 0xc7a20064  lwc1        $f2, 0x64($sp)
    ctx->pc = 0x26ce90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26ce94:
    // 0x26ce94: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x26ce94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26ce98:
    // 0x26ce98: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x26ce98u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_26ce9c:
    // 0x26ce9c: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x26ce9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cea0:
    // 0x26cea0: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x26cea0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_26cea4:
    // 0x26cea4: 0xc7a40120  lwc1        $f4, 0x120($sp)
    ctx->pc = 0x26cea4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26cea8:
    // 0x26cea8: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x26cea8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_26ceac:
    // 0x26ceac: 0xc7a60124  lwc1        $f6, 0x124($sp)
    ctx->pc = 0x26ceacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_26ceb0:
    // 0x26ceb0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26ceb0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26ceb4:
    // 0x26ceb4: 0xc7a70128  lwc1        $f7, 0x128($sp)
    ctx->pc = 0x26ceb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_26ceb8:
    // 0x26ceb8: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x26ceb8u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
label_26cebc:
    // 0x26cebc: 0xc7a8012c  lwc1        $f8, 0x12C($sp)
    ctx->pc = 0x26cebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_26cec0:
    // 0x26cec0: 0x46063180  add.s       $f6, $f6, $f6
    ctx->pc = 0x26cec0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[6], ctx->f[6]);
label_26cec4:
    // 0x26cec4: 0x460739c0  add.s       $f7, $f7, $f7
    ctx->pc = 0x26cec4u;
    ctx->f[7] = FPU_ADD_S(ctx->f[7], ctx->f[7]);
label_26cec8:
    // 0x26cec8: 0x8e630050  lw          $v1, 0x50($s3)
    ctx->pc = 0x26cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
label_26cecc:
    // 0x26cecc: 0x46084200  add.s       $f8, $f8, $f8
    ctx->pc = 0x26ceccu;
    ctx->f[8] = FPU_ADD_S(ctx->f[8], ctx->f[8]);
label_26ced0:
    // 0x26ced0: 0x3c0140e0  lui         $at, 0x40E0
    ctx->pc = 0x26ced0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16608 << 16));
label_26ced4:
    // 0x26ced4: 0x44814800  mtc1        $at, $f9
    ctx->pc = 0x26ced4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
label_26ced8:
    // 0x26ced8: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x26ced8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
label_26cedc:
    // 0x26cedc: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x26cedcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_26cee0:
    // 0x26cee0: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x26cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_26cee4:
    // 0x26cee4: 0xe7a301d0  swc1        $f3, 0x1D0($sp)
    ctx->pc = 0x26cee4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_26cee8:
    // 0x26cee8: 0x0  nop
    ctx->pc = 0x26cee8u;
    // NOP
label_26ceec:
    // 0x26ceec: 0x0  nop
    ctx->pc = 0x26ceecu;
    // NOP
label_26cef0:
    // 0x26cef0: 0x46092103  div.s       $f4, $f4, $f9
    ctx->pc = 0x26cef0u;
    { if (ctx->f[9] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[9]); }
label_26cef4:
    // 0x26cef4: 0xe7a201d4  swc1        $f2, 0x1D4($sp)
    ctx->pc = 0x26cef4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_26cef8:
    // 0x26cef8: 0x0  nop
    ctx->pc = 0x26cef8u;
    // NOP
label_26cefc:
    // 0x26cefc: 0x0  nop
    ctx->pc = 0x26cefcu;
    // NOP
label_26cf00:
    // 0x26cf00: 0x460518c3  div.s       $f3, $f3, $f5
    ctx->pc = 0x26cf00u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[3] = FPU_DIV_S(ctx->f[3], ctx->f[5]); }
label_26cf04:
    // 0x26cf04: 0xe7a001d8  swc1        $f0, 0x1D8($sp)
    ctx->pc = 0x26cf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_26cf08:
    // 0x26cf08: 0x0  nop
    ctx->pc = 0x26cf08u;
    // NOP
label_26cf0c:
    // 0x26cf0c: 0x0  nop
    ctx->pc = 0x26cf0cu;
    // NOP
label_26cf10:
    // 0x26cf10: 0x46051083  div.s       $f2, $f2, $f5
    ctx->pc = 0x26cf10u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[5]); }
label_26cf14:
    // 0x26cf14: 0xe7a101dc  swc1        $f1, 0x1DC($sp)
    ctx->pc = 0x26cf14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_26cf18:
    // 0x26cf18: 0x0  nop
    ctx->pc = 0x26cf18u;
    // NOP
label_26cf1c:
    // 0x26cf1c: 0x0  nop
    ctx->pc = 0x26cf1cu;
    // NOP
label_26cf20:
    // 0x26cf20: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x26cf20u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[5]); }
label_26cf24:
    // 0x26cf24: 0x46050843  div.s       $f1, $f1, $f5
    ctx->pc = 0x26cf24u;
    { if (ctx->f[5] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[5]); }
label_26cf28:
    // 0x26cf28: 0x24640030  addiu       $a0, $v1, 0x30
    ctx->pc = 0x26cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
label_26cf2c:
    // 0x26cf2c: 0x0  nop
    ctx->pc = 0x26cf2cu;
    // NOP
label_26cf30:
    // 0x26cf30: 0x0  nop
    ctx->pc = 0x26cf30u;
    // NOP
label_26cf34:
    // 0x26cf34: 0x46093183  div.s       $f6, $f6, $f9
    ctx->pc = 0x26cf34u;
    { if (ctx->f[9] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = FPU_DIV_S(ctx->f[6], ctx->f[9]); }
label_26cf38:
    // 0x26cf38: 0x460939c3  div.s       $f7, $f7, $f9
    ctx->pc = 0x26cf38u;
    { if (ctx->f[9] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[7] = FPU_DIV_S(ctx->f[7], ctx->f[9]); }
label_26cf3c:
    // 0x26cf3c: 0xe7a401b0  swc1        $f4, 0x1B0($sp)
    ctx->pc = 0x26cf3cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
label_26cf40:
    // 0x26cf40: 0x0  nop
    ctx->pc = 0x26cf40u;
    // NOP
label_26cf44:
    // 0x26cf44: 0x0  nop
    ctx->pc = 0x26cf44u;
    // NOP
label_26cf48:
    // 0x26cf48: 0x46094203  div.s       $f8, $f8, $f9
    ctx->pc = 0x26cf48u;
    { if (ctx->f[9] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[8], ctx->f[9]); }
label_26cf4c:
    // 0x26cf4c: 0xe7a301c0  swc1        $f3, 0x1C0($sp)
    ctx->pc = 0x26cf4cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
label_26cf50:
    // 0x26cf50: 0xe7a201c4  swc1        $f2, 0x1C4($sp)
    ctx->pc = 0x26cf50u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 452), bits); }
label_26cf54:
    // 0x26cf54: 0xe7a001c8  swc1        $f0, 0x1C8($sp)
    ctx->pc = 0x26cf54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 456), bits); }
label_26cf58:
    // 0x26cf58: 0xe7a101cc  swc1        $f1, 0x1CC($sp)
    ctx->pc = 0x26cf58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 460), bits); }
label_26cf5c:
    // 0x26cf5c: 0xe7a601b4  swc1        $f6, 0x1B4($sp)
    ctx->pc = 0x26cf5cu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 436), bits); }
label_26cf60:
    // 0x26cf60: 0xe7a701b8  swc1        $f7, 0x1B8($sp)
    ctx->pc = 0x26cf60u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 440), bits); }
label_26cf64:
    // 0x26cf64: 0xe7a801bc  swc1        $f8, 0x1BC($sp)
    ctx->pc = 0x26cf64u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 444), bits); }
label_26cf68:
    // 0x26cf68: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x26cf68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_26cf6c:
    // 0x26cf6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26cf6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26cf70:
    // 0x26cf70: 0xc4620020  lwc1        $f2, 0x20($v1)
    ctx->pc = 0x26cf70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cf74:
    // 0x26cf74: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x26cf74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26cf78:
    // 0x26cf78: 0xc4440004  lwc1        $f4, 0x4($v0)
    ctx->pc = 0x26cf78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26cf7c:
    // 0x26cf7c: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x26cf7cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_26cf80:
    // 0x26cf80: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x26cf80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cf84:
    // 0x26cf84: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x26cf84u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_26cf88:
    // 0x26cf88: 0x46002102  mul.s       $f4, $f4, $f0
    ctx->pc = 0x26cf88u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_26cf8c:
    // 0x26cf8c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x26cf8cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26cf90:
    // 0x26cf90: 0xe7a201e0  swc1        $f2, 0x1E0($sp)
    ctx->pc = 0x26cf90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_26cf94:
    // 0x26cf94: 0xe7a301ec  swc1        $f3, 0x1EC($sp)
    ctx->pc = 0x26cf94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_26cf98:
    // 0x26cf98: 0xe7a401e4  swc1        $f4, 0x1E4($sp)
    ctx->pc = 0x26cf98u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_26cf9c:
    // 0x26cf9c: 0xe7a101e8  swc1        $f1, 0x1E8($sp)
    ctx->pc = 0x26cf9cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_26cfa0:
    // 0x26cfa0: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26cfa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26cfa4:
    // 0x26cfa4: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x26cfa4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_26cfa8:
    // 0x26cfa8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26cfa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26cfac:
    // 0x26cfac: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x26cfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
label_26cfb0:
    // 0x26cfb0: 0xc7a101c0  lwc1        $f1, 0x1C0($sp)
    ctx->pc = 0x26cfb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26cfb4:
    // 0x26cfb4: 0x46004dc6  mov.s       $f23, $f9
    ctx->pc = 0x26cfb4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[9]);
label_26cfb8:
    // 0x26cfb8: 0xc7a201c4  lwc1        $f2, 0x1C4($sp)
    ctx->pc = 0x26cfb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26cfbc:
    // 0x26cfbc: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x26cfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_26cfc0:
    // 0x26cfc0: 0xc7a001c8  lwc1        $f0, 0x1C8($sp)
    ctx->pc = 0x26cfc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26cfc4:
    // 0x26cfc4: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26cfc4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_26cfc8:
    // 0x26cfc8: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x26cfc8u;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_26cfcc:
    // 0x26cfcc: 0xc7a301f0  lwc1        $f3, 0x1F0($sp)
    ctx->pc = 0x26cfccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26cfd0:
    // 0x26cfd0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26cfd0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26cfd4:
    // 0x26cfd4: 0xc7a601f4  lwc1        $f6, 0x1F4($sp)
    ctx->pc = 0x26cfd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
label_26cfd8:
    // 0x26cfd8: 0x46160ac2  mul.s       $f11, $f1, $f22
    ctx->pc = 0x26cfd8u;
    ctx->f[11] = FPU_MUL_S(ctx->f[1], ctx->f[22]);
label_26cfdc:
    // 0x26cfdc: 0xe7a301d0  swc1        $f3, 0x1D0($sp)
    ctx->pc = 0x26cfdcu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 464), bits); }
label_26cfe0:
    // 0x26cfe0: 0x46161282  mul.s       $f10, $f2, $f22
    ctx->pc = 0x26cfe0u;
    ctx->f[10] = FPU_MUL_S(ctx->f[2], ctx->f[22]);
label_26cfe4:
    // 0x26cfe4: 0xc7a701f8  lwc1        $f7, 0x1F8($sp)
    ctx->pc = 0x26cfe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
label_26cfe8:
    // 0x26cfe8: 0x46160242  mul.s       $f9, $f0, $f22
    ctx->pc = 0x26cfe8u;
    ctx->f[9] = FPU_MUL_S(ctx->f[0], ctx->f[22]);
label_26cfec:
    // 0x26cfec: 0xc7a801fc  lwc1        $f8, 0x1FC($sp)
    ctx->pc = 0x26cfecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 508)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
label_26cff0:
    // 0x26cff0: 0x46055902  mul.s       $f4, $f11, $f5
    ctx->pc = 0x26cff0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[11], ctx->f[5]);
label_26cff4:
    // 0x26cff4: 0xafa4023c  sw          $a0, 0x23C($sp)
    ctx->pc = 0x26cff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 572), GPR_U32(ctx, 4));
label_26cff8:
    // 0x26cff8: 0x460550c2  mul.s       $f3, $f10, $f5
    ctx->pc = 0x26cff8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
label_26cffc:
    // 0x26cffc: 0xe7a601d4  swc1        $f6, 0x1D4($sp)
    ctx->pc = 0x26cffcu;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
label_26d000:
    // 0x26d000: 0x46054942  mul.s       $f5, $f9, $f5
    ctx->pc = 0x26d000u;
    ctx->f[5] = FPU_MUL_S(ctx->f[9], ctx->f[5]);
label_26d004:
    // 0x26d004: 0xe7a701d8  swc1        $f7, 0x1D8($sp)
    ctx->pc = 0x26d004u;
    { float f = ctx->f[7]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 472), bits); }
label_26d008:
    // 0x26d008: 0xe7a801dc  swc1        $f8, 0x1DC($sp)
    ctx->pc = 0x26d008u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
label_26d00c:
    // 0x26d00c: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x26d00cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26d010:
    // 0x26d010: 0xe7a401e0  swc1        $f4, 0x1E0($sp)
    ctx->pc = 0x26d010u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
label_26d014:
    // 0x26d014: 0x4600b606  mov.s       $f24, $f22
    ctx->pc = 0x26d014u;
    ctx->f[24] = FPU_MOV_S(ctx->f[22]);
label_26d018:
    // 0x26d018: 0xe7a301e4  swc1        $f3, 0x1E4($sp)
    ctx->pc = 0x26d018u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
label_26d01c:
    // 0x26d01c: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x26d01cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
label_26d020:
    // 0x26d020: 0xe7a501e8  swc1        $f5, 0x1E8($sp)
    ctx->pc = 0x26d020u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
label_26d024:
    // 0x26d024: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x26d024u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d028:
    // 0x26d028: 0xe7a10200  swc1        $f1, 0x200($sp)
    ctx->pc = 0x26d028u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_26d02c:
    // 0x26d02c: 0xe7a20204  swc1        $f2, 0x204($sp)
    ctx->pc = 0x26d02cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_26d030:
    // 0x26d030: 0xe7a00208  swc1        $f0, 0x208($sp)
    ctx->pc = 0x26d030u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_26d034:
    // 0x26d034: 0xe7b4020c  swc1        $f20, 0x20C($sp)
    ctx->pc = 0x26d034u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_26d038:
    // 0x26d038: 0xe7ab01f0  swc1        $f11, 0x1F0($sp)
    ctx->pc = 0x26d038u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_26d03c:
    // 0x26d03c: 0xe7aa01f4  swc1        $f10, 0x1F4($sp)
    ctx->pc = 0x26d03cu;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_26d040:
    // 0x26d040: 0xe7a901f8  swc1        $f9, 0x1F8($sp)
    ctx->pc = 0x26d040u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_26d044:
    // 0x26d044: 0xe7b401fc  swc1        $f20, 0x1FC($sp)
    ctx->pc = 0x26d044u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_26d048:
    // 0x26d048: 0xe7b401ec  swc1        $f20, 0x1EC($sp)
    ctx->pc = 0x26d048u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
label_26d04c:
    // 0x26d04c: 0xc7a001b0  lwc1        $f0, 0x1B0($sp)
    ctx->pc = 0x26d04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d050:
    // 0x26d050: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x26d050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
label_26d054:
    // 0x26d054: 0xc7a101b4  lwc1        $f1, 0x1B4($sp)
    ctx->pc = 0x26d054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d058:
    // 0x26d058: 0x3c03005a  lui         $v1, 0x5A
    ctx->pc = 0x26d058u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)90 << 16));
label_26d05c:
    // 0x26d05c: 0xc7a201b8  lwc1        $f2, 0x1B8($sp)
    ctx->pc = 0x26d05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d060:
    // 0x26d060: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x26d060u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_26d064:
    // 0x26d064: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x26d064u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_26d068:
    // 0x26d068: 0xc4567bd8  lwc1        $f22, 0x7BD8($v0)
    ctx->pc = 0x26d068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 31704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_26d06c:
    // 0x26d06c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x26d06cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
label_26d070:
    // 0x26d070: 0xafa0021c  sw          $zero, 0x21C($sp)
    ctx->pc = 0x26d070u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 0));
label_26d074:
    // 0x26d074: 0x461800c2  mul.s       $f3, $f0, $f24
    ctx->pc = 0x26d074u;
    ctx->f[3] = FPU_MUL_S(ctx->f[0], ctx->f[24]);
label_26d078:
    // 0x26d078: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x26d078u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_26d07c:
    // 0x26d07c: 0x46180902  mul.s       $f4, $f1, $f24
    ctx->pc = 0x26d07cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[24]);
label_26d080:
    // 0x26d080: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x26d080u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_26d084:
    // 0x26d084: 0x46181142  mul.s       $f5, $f2, $f24
    ctx->pc = 0x26d084u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[24]);
label_26d088:
    // 0x26d088: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x26d088u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_26d08c:
    // 0x26d08c: 0x4603b802  mul.s       $f0, $f23, $f3
    ctx->pc = 0x26d08cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[3]);
label_26d090:
    // 0x26d090: 0xe7a30200  swc1        $f3, 0x200($sp)
    ctx->pc = 0x26d090u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_26d094:
    // 0x26d094: 0x4604b842  mul.s       $f1, $f23, $f4
    ctx->pc = 0x26d094u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[4]);
label_26d098:
    // 0x26d098: 0xe7a40204  swc1        $f4, 0x204($sp)
    ctx->pc = 0x26d098u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_26d09c:
    // 0x26d09c: 0x4605b882  mul.s       $f2, $f23, $f5
    ctx->pc = 0x26d09cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[23], ctx->f[5]);
label_26d0a0:
    // 0x26d0a0: 0xe7a50208  swc1        $f5, 0x208($sp)
    ctx->pc = 0x26d0a0u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_26d0a4:
    // 0x26d0a4: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x26d0a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
label_26d0a8:
    // 0x26d0a8: 0x24686830  addiu       $t0, $v1, 0x6830
    ctx->pc = 0x26d0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 26672));
label_26d0ac:
    // 0x26d0ac: 0xe7a101f4  swc1        $f1, 0x1F4($sp)
    ctx->pc = 0x26d0acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 500), bits); }
label_26d0b0:
    // 0x26d0b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26d0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d0b4:
    // 0x26d0b4: 0xe7a201f8  swc1        $f2, 0x1F8($sp)
    ctx->pc = 0x26d0b4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 504), bits); }
label_26d0b8:
    // 0x26d0b8: 0x27b701d0  addiu       $s7, $sp, 0x1D0
    ctx->pc = 0x26d0b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_26d0bc:
    // 0x26d0bc: 0xe7b5020c  swc1        $f21, 0x20C($sp)
    ctx->pc = 0x26d0bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_26d0c0:
    // 0x26d0c0: 0x27b001f0  addiu       $s0, $sp, 0x1F0
    ctx->pc = 0x26d0c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_26d0c4:
    // 0x26d0c4: 0xe7b501fc  swc1        $f21, 0x1FC($sp)
    ctx->pc = 0x26d0c4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 508), bits); }
label_26d0c8:
    // 0x26d0c8: 0x27b60210  addiu       $s6, $sp, 0x210
    ctx->pc = 0x26d0c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_26d0cc:
    // 0x26d0cc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26d0ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26d0d0:
    // 0x26d0d0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x26d0d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_26d0d4:
    // 0x26d0d4: 0x27b50020  addiu       $s5, $sp, 0x20
    ctx->pc = 0x26d0d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26d0d8:
    // 0x26d0d8: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x26d0d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26d0dc:
    // 0x26d0dc: 0x27b301b0  addiu       $s3, $sp, 0x1B0
    ctx->pc = 0x26d0dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_26d0e0:
    // 0x26d0e0: 0xdae10000  lqc2        $vf1, 0x0($s7)
    ctx->pc = 0x26d0e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 23), 0)));
label_26d0e4:
    // 0x26d0e4: 0xda020000  lqc2        $vf2, 0x0($s0)
    ctx->pc = 0x26d0e4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26d0e8:
    // 0x26d0e8: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26d0e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26d0ec:
    // 0x26d0ec: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x26d0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
label_26d0f0:
    // 0x26d0f0: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x26d0f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d0f4:
    // 0x26d0f4: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x26d0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d0f8:
    // 0x26d0f8: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x26d0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d0fc:
    // 0x26d0fc: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x26d0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26d100:
    // 0x26d100: 0xe7a00210  swc1        $f0, 0x210($sp)
    ctx->pc = 0x26d100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
label_26d104:
    // 0x26d104: 0xe7a10214  swc1        $f1, 0x214($sp)
    ctx->pc = 0x26d104u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 532), bits); }
label_26d108:
    // 0x26d108: 0xe7a20218  swc1        $f2, 0x218($sp)
    ctx->pc = 0x26d108u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
label_26d10c:
    // 0x26d10c: 0xe7a3021c  swc1        $f3, 0x21C($sp)
    ctx->pc = 0x26d10cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 540), bits); }
label_26d110:
    // 0x26d110: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x26d110u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
label_26d114:
    // 0x26d114: 0xd9420000  lqc2        $vf2, 0x0($t2)
    ctx->pc = 0x26d114u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_26d118:
    // 0x26d118: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26d118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26d11c:
    // 0x26d11c: 0xfba10220  sqc2        $vf1, 0x220($sp)
    ctx->pc = 0x26d11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), _mm_castps_si128(ctx->vu0_vf[1]));
label_26d120:
    // 0x26d120: 0xc7a00220  lwc1        $f0, 0x220($sp)
    ctx->pc = 0x26d120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d124:
    // 0x26d124: 0xc7a10224  lwc1        $f1, 0x224($sp)
    ctx->pc = 0x26d124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d128:
    // 0x26d128: 0xc7a20228  lwc1        $f2, 0x228($sp)
    ctx->pc = 0x26d128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d12c:
    // 0x26d12c: 0xc7a3022c  lwc1        $f3, 0x22C($sp)
    ctx->pc = 0x26d12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26d130:
    // 0x26d130: 0xe7a00200  swc1        $f0, 0x200($sp)
    ctx->pc = 0x26d130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 512), bits); }
label_26d134:
    // 0x26d134: 0xe7a10204  swc1        $f1, 0x204($sp)
    ctx->pc = 0x26d134u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 516), bits); }
label_26d138:
    // 0x26d138: 0xe7a20208  swc1        $f2, 0x208($sp)
    ctx->pc = 0x26d138u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 520), bits); }
label_26d13c:
    // 0x26d13c: 0xe7a3020c  swc1        $f3, 0x20C($sp)
    ctx->pc = 0x26d13cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 524), bits); }
label_26d140:
    // 0x26d140: 0x8d040050  lw          $a0, 0x50($t0)
    ctx->pc = 0x26d140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 80)));
label_26d144:
    // 0x26d144: 0x7ba20200  lq          $v0, 0x200($sp)
    ctx->pc = 0x26d144u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_26d148:
    // 0x26d148: 0x78830030  lq          $v1, 0x30($a0)
    ctx->pc = 0x26d148u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 48)));
label_26d14c:
    // 0x26d14c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x26d14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_26d150:
    // 0x26d150: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x26d150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
label_26d154:
    // 0x26d154: 0xdaa10000  lqc2        $vf1, 0x0($s5)
    ctx->pc = 0x26d154u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 21), 0)));
label_26d158:
    // 0x26d158: 0xda820000  lqc2        $vf2, 0x0($s4)
    ctx->pc = 0x26d158u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
label_26d15c:
    // 0x26d15c: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26d15cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26d160:
    // 0x26d160: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x26d160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
label_26d164:
    // 0x26d164: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x26d164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_26d168:
    // 0x26d168: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x26d168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d16c:
    // 0x26d16c: 0xc4430004  lwc1        $f3, 0x4($v0)
    ctx->pc = 0x26d16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26d170:
    // 0x26d170: 0xc4440008  lwc1        $f4, 0x8($v0)
    ctx->pc = 0x26d170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_26d174:
    // 0x26d174: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x26d174u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_26d178:
    // 0x26d178: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x26d178u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_26d17c:
    // 0x26d17c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x26d17cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_26d180:
    // 0x26d180: 0x0  nop
    ctx->pc = 0x26d180u;
    // NOP
label_26d184:
    // 0x26d184: 0x0  nop
    ctx->pc = 0x26d184u;
    // NOP
label_26d188:
    // 0x26d188: 0x46000044  c1          0x44
    ctx->pc = 0x26d188u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
label_26d18c:
    // 0x26d18c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x26d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
label_26d190:
    // 0x26d190: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x26d190u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d194:
    // 0x26d194: 0x0  nop
    ctx->pc = 0x26d194u;
    // NOP
label_26d198:
    // 0x26d198: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_26d19c:
    if (ctx->pc == 0x26D19Cu) {
        ctx->pc = 0x26D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D198u;
        // 0x26d19c: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1A0u;
        goto label_26d1a0;
    }
    ctx->pc = 0x26D198u;
    {
        const bool branch_taken_0x26d198 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D198u;
        // 0x26d19c: 0xe7a10050  swc1        $f1, 0x50($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d198) {
            ctx->pc = 0x26D1C4u;
            goto label_26d1c4;
        }
    }
    ctx->pc = 0x26D1A0u;
label_26d1a0:
    // 0x26d1a0: 0x0  nop
    ctx->pc = 0x26d1a0u;
    // NOP
label_26d1a4:
    // 0x26d1a4: 0x0  nop
    ctx->pc = 0x26d1a4u;
    // NOP
label_26d1a8:
    // 0x26d1a8: 0x4601a003  div.s       $f0, $f20, $f1
    ctx->pc = 0x26d1a8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[1]); }
label_26d1ac:
    // 0x26d1ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x26d1acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26d1b0:
    // 0x26d1b0: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x26d1b0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
label_26d1b4:
    // 0x26d1b4: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26d1b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26d1b8:
    // 0x26d1b8: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x26d1b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
label_26d1bc:
    // 0x26d1bc: 0x4bc20858  vmulx.xyz   $vf1, $vf1, $vf2x
    ctx->pc = 0x26d1bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26d1c0:
    // 0x26d1c0: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x26d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_26d1c4:
    // 0x26d1c4: 0x7fa80240  sq          $t0, 0x240($sp)
    ctx->pc = 0x26d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 8));
label_26d1c8:
    // 0x26d1c8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26d1c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d1cc:
    // 0x26d1cc: 0x7fa90250  sq          $t1, 0x250($sp)
    ctx->pc = 0x26d1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 9));
label_26d1d0:
    // 0x26d1d0: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x26d1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_26d1d4:
    // 0x26d1d4: 0x7faa0260  sq          $t2, 0x260($sp)
    ctx->pc = 0x26d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), GPR_VEC(ctx, 10));
label_26d1d8:
    // 0x26d1d8: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x26d1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_26d1dc:
    // 0x26d1dc: 0xe7b60230  swc1        $f22, 0x230($sp)
    ctx->pc = 0x26d1dcu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 560), bits); }
label_26d1e0:
    // 0x26d1e0: 0xc0789d6  jal         func_1E2758
label_26d1e4:
    if (ctx->pc == 0x26D1E4u) {
        ctx->pc = 0x26D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D1E0u;
        // 0x26d1e4: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D1E8u;
        goto label_26d1e8;
    }
    ctx->pc = 0x26D1E0u;
    SET_GPR_U32(ctx, 31, 0x26D1E8u);
    ctx->pc = 0x26D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D1E0u;
    // 0x26d1e4: 0x27a70230  addiu       $a3, $sp, 0x230 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2758u, 0x26D1E0u, 0x26D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D1E8u;
label_26d1e8:
    // 0x26d1e8: 0x27c30001  addiu       $v1, $fp, 0x1
    ctx->pc = 0x26d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_26d1ec:
    // 0x26d1ec: 0x7ba80240  lq          $t0, 0x240($sp)
    ctx->pc = 0x26d1ecu;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 576)));
label_26d1f0:
    // 0x26d1f0: 0x62f00b  movn        $fp, $v1, $v0
    ctx->pc = 0x26d1f0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 3));
label_26d1f4:
    // 0x26d1f4: 0x7ba90250  lq          $t1, 0x250($sp)
    ctx->pc = 0x26d1f4u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 592)));
label_26d1f8:
    // 0x26d1f8: 0x2bc20002  slti        $v0, $fp, 0x2
    ctx->pc = 0x26d1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)2) ? 1 : 0);
label_26d1fc:
    // 0x26d1fc: 0x38430001  xori        $v1, $v0, 0x1
    ctx->pc = 0x26d1fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_26d200:
    // 0x26d200: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
label_26d204:
    if (ctx->pc == 0x26D204u) {
        ctx->pc = 0x26D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D200u;
        // 0x26d204: 0x7baa0260  lq          $t2, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D208u;
        goto label_26d208;
    }
    ctx->pc = 0x26D200u;
    {
        const bool branch_taken_0x26d200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D200u;
        // 0x26d204: 0x7baa0260  lq          $t2, 0x260($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d200) {
            ctx->pc = 0x26D248u;
            goto label_26d248;
        }
    }
    ctx->pc = 0x26D208u;
label_26d208:
    // 0x26d208: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26d208u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26d20c:
    // 0x26d20c: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x26d20cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_26d210:
    // 0x26d210: 0xda620000  lqc2        $vf2, 0x0($s3)
    ctx->pc = 0x26d210u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 19), 0)));
label_26d214:
    // 0x26d214: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26d214u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26d218:
    // 0x26d218: 0xfba101f0  sqc2        $vf1, 0x1F0($sp)
    ctx->pc = 0x26d218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), _mm_castps_si128(ctx->vu0_vf[1]));
label_26d21c:
    // 0x26d21c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x26d21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_26d220:
    // 0x26d220: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
label_26d224:
    if (ctx->pc == 0x26D224u) {
        ctx->pc = 0x26D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D220u;
        // 0x26d224: 0x8fa2023c  lw          $v0, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D228u;
        goto label_26d228;
    }
    ctx->pc = 0x26D220u;
    {
        const bool branch_taken_0x26d220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D220u;
        // 0x26d224: 0x8fa2023c  lw          $v0, 0x23C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d220) {
            ctx->pc = 0x26D0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d0e0;
        }
    }
    ctx->pc = 0x26D228u;
label_26d228:
    // 0x26d228: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x26d228u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_26d22c:
    // 0x26d22c: 0xd9410000  lqc2        $vf1, 0x0($t2)
    ctx->pc = 0x26d22cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 10), 0)));
label_26d230:
    // 0x26d230: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26d230u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26d234:
    // 0x26d234: 0x4bc20868  vadd.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26d234u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26d238:
    // 0x26d238: 0xfba101e0  sqc2        $vf1, 0x1E0($sp)
    ctx->pc = 0x26d238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), _mm_castps_si128(ctx->vu0_vf[1]));
label_26d23c:
    // 0x26d23c: 0x2922000a  slti        $v0, $t1, 0xA
    ctx->pc = 0x26d23cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)10) ? 1 : 0);
label_26d240:
    // 0x26d240: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
label_26d244:
    if (ctx->pc == 0x26D244u) {
        ctx->pc = 0x26D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D240u;
        // 0x26d244: 0xc7a001b0  lwc1        $f0, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D248u;
        goto label_26d248;
    }
    ctx->pc = 0x26D240u;
    {
        const bool branch_taken_0x26d240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D240u;
        // 0x26d244: 0xc7a001b0  lwc1        $f0, 0x1B0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d240) {
            ctx->pc = 0x26D050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d050;
        }
    }
    ctx->pc = 0x26D248u;
label_26d248:
    // 0x26d248: 0x8fa40238  lw          $a0, 0x238($sp)
    ctx->pc = 0x26d248u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_26d24c:
    // 0x26d24c: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
label_26d250:
    if (ctx->pc == 0x26D250u) {
        ctx->pc = 0x26D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D24Cu;
        // 0x26d250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D254u;
        goto label_26d254;
    }
    ctx->pc = 0x26D24Cu;
    {
        const bool branch_taken_0x26d24c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D24Cu;
        // 0x26d250: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d24c) {
            ctx->pc = 0x26D258u;
            goto label_26d258;
        }
    }
    ctx->pc = 0x26D254u;
label_26d254:
    // 0x26d254: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x26d254u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_26d258:
    // 0x26d258: 0xa2420250  sb          $v0, 0x250($s2)
    ctx->pc = 0x26d258u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 592), (uint8_t)GPR_U32(ctx, 2));
label_26d25c:
    // 0x26d25c: 0x8fa30234  lw          $v1, 0x234($sp)
    ctx->pc = 0x26d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
label_26d260:
    // 0x26d260: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_26d264:
    if (ctx->pc == 0x26D264u) {
        ctx->pc = 0x26D264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D260u;
        // 0x26d264: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D268u;
        goto label_26d268;
    }
    ctx->pc = 0x26D260u;
    {
        const bool branch_taken_0x26d260 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d260) {
            ctx->pc = 0x26D264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D260u;
            // 0x26d264: 0x8e420258  lw          $v0, 0x258($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D27Cu;
            goto label_26d27c;
        }
    }
    ctx->pc = 0x26D268u;
label_26d268:
    // 0x26d268: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_26d26c:
    if (ctx->pc == 0x26D26Cu) {
        ctx->pc = 0x26D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D268u;
        // 0x26d26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D270u;
        goto label_26d270;
    }
    ctx->pc = 0x26D268u;
    {
        const bool branch_taken_0x26d268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D268u;
        // 0x26d26c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d268) {
            ctx->pc = 0x26D278u;
            goto label_26d278;
        }
    }
    ctx->pc = 0x26D270u;
label_26d270:
    // 0x26d270: 0xc0cda26  jal         func_336898
label_26d274:
    if (ctx->pc == 0x26D274u) {
        ctx->pc = 0x26D274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D270u;
        // 0x26d274: 0x24050058  addiu       $a1, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D278u;
        goto label_26d278;
    }
    ctx->pc = 0x26D270u;
    SET_GPR_U32(ctx, 31, 0x26D278u);
    ctx->pc = 0x26D274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D270u;
    // 0x26d274: 0x24050058  addiu       $a1, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x26D270u, 0x26D278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D278u;
label_26d278:
    // 0x26d278: 0x8e420258  lw          $v0, 0x258($s2)
    ctx->pc = 0x26d278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
label_26d27c:
    // 0x26d27c: 0x10400150  beqz        $v0, . + 4 + (0x150 << 2)
label_26d280:
    if (ctx->pc == 0x26D280u) {
        ctx->pc = 0x26D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D27Cu;
        // 0x26d280: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D284u;
        goto label_26d284;
    }
    ctx->pc = 0x26D27Cu;
    {
        const bool branch_taken_0x26d27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D27Cu;
        // 0x26d280: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d27c) {
            ctx->pc = 0x26D7C0u;
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D284u;
label_26d284:
    // 0x26d284: 0x8e420280  lw          $v0, 0x280($s2)
    ctx->pc = 0x26d284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_26d288:
    // 0x26d288: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26d288u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26d28c:
    // 0x26d28c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26d290:
    if (ctx->pc == 0x26D290u) {
        ctx->pc = 0x26D290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D28Cu;
        // 0x26d290: 0x8e450280  lw          $a1, 0x280($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D294u;
        goto label_26d294;
    }
    ctx->pc = 0x26D28Cu;
    {
        const bool branch_taken_0x26d28c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d28c) {
            ctx->pc = 0x26D290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D28Cu;
            // 0x26d290: 0x8e450280  lw          $a1, 0x280($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D2A0u;
            goto label_26d2a0;
        }
    }
    ctx->pc = 0x26D294u;
label_26d294:
    // 0x26d294: 0xc09ba08  jal         func_26E820
label_26d298:
    if (ctx->pc == 0x26D298u) {
        ctx->pc = 0x26D298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D294u;
        // 0x26d298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D29Cu;
        goto label_26d29c;
    }
    ctx->pc = 0x26D294u;
    SET_GPR_U32(ctx, 31, 0x26D29Cu);
    ctx->pc = 0x26D298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D294u;
    // 0x26d298: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E820u, 0x26D294u, 0x26D29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D29Cu;
label_26d29c:
    // 0x26d29c: 0x8e450280  lw          $a1, 0x280($s2)
    ctx->pc = 0x26d29cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_26d2a0:
    // 0x26d2a0: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x26d2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_26d2a4:
    // 0x26d2a4: 0x54a2001a  bnel        $a1, $v0, . + 4 + (0x1A << 2)
label_26d2a8:
    if (ctx->pc == 0x26D2A8u) {
        ctx->pc = 0x26D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2A4u;
        // 0x26d2a8: 0x8e440258  lw          $a0, 0x258($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2ACu;
        goto label_26d2ac;
    }
    ctx->pc = 0x26D2A4u;
    {
        const bool branch_taken_0x26d2a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d2a4) {
            ctx->pc = 0x26D2A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D2A4u;
            // 0x26d2a8: 0x8e440258  lw          $a0, 0x258($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D310u;
            goto label_26d310;
        }
    }
    ctx->pc = 0x26D2ACu;
label_26d2ac:
    // 0x26d2ac: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26d2b0:
    // 0x26d2b0: 0x8c50bd50  lw          $s0, -0x42B0($v0)
    ctx->pc = 0x26d2b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_26d2b4:
    // 0x26d2b4: 0x52000144  beql        $s0, $zero, . + 4 + (0x144 << 2)
label_26d2b8:
    if (ctx->pc == 0x26D2B8u) {
        ctx->pc = 0x26D2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2B4u;
        // 0x26d2b8: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2BCu;
        goto label_26d2bc;
    }
    ctx->pc = 0x26D2B4u;
    {
        const bool branch_taken_0x26d2b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d2b4) {
            ctx->pc = 0x26D2B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D2B4u;
            // 0x26d2b8: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D7C8u;
            goto label_26d7c8;
        }
    }
    ctx->pc = 0x26D2BCu;
label_26d2bc:
    // 0x26d2bc: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x26d2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_26d2c0:
    // 0x26d2c0: 0x8e440258  lw          $a0, 0x258($s2)
    ctx->pc = 0x26d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
label_26d2c4:
    // 0x26d2c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_26d2c8:
    // 0x26d2c8: 0xc0788a0  jal         func_1E2280
label_26d2cc:
    if (ctx->pc == 0x26D2CCu) {
        ctx->pc = 0x26D2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2C8u;
        // 0x26d2cc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2D0u;
        goto label_26d2d0;
    }
    ctx->pc = 0x26D2C8u;
    SET_GPR_U32(ctx, 31, 0x26D2D0u);
    ctx->pc = 0x26D2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2C8u;
    // 0x26d2cc: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x26D2C8u, 0x26D2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2D0u;
label_26d2d0:
    // 0x26d2d0: 0x5040013d  beql        $v0, $zero, . + 4 + (0x13D << 2)
label_26d2d4:
    if (ctx->pc == 0x26D2D4u) {
        ctx->pc = 0x26D2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2D0u;
        // 0x26d2d4: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2D8u;
        goto label_26d2d8;
    }
    ctx->pc = 0x26D2D0u;
    {
        const bool branch_taken_0x26d2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d2d0) {
            ctx->pc = 0x26D2D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D2D0u;
            // 0x26d2d4: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D7C8u;
            goto label_26d7c8;
        }
    }
    ctx->pc = 0x26D2D8u;
label_26d2d8:
    // 0x26d2d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d2dc:
    // 0x26d2dc: 0xc09b79c  jal         func_26DE70
label_26d2e0:
    if (ctx->pc == 0x26D2E0u) {
        ctx->pc = 0x26D2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2DCu;
        // 0x26d2e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2E4u;
        goto label_26d2e4;
    }
    ctx->pc = 0x26D2DCu;
    SET_GPR_U32(ctx, 31, 0x26D2E4u);
    ctx->pc = 0x26D2E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D2DCu;
    // 0x26d2e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE70u, 0x26D2DCu, 0x26D2E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D2E4u;
label_26d2e4:
    // 0x26d2e4: 0x544000b9  bnel        $v0, $zero, . + 4 + (0xB9 << 2)
label_26d2e8:
    if (ctx->pc == 0x26D2E8u) {
        ctx->pc = 0x26D2E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2E4u;
        // 0x26d2e8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2ECu;
        goto label_26d2ec;
    }
    ctx->pc = 0x26D2E4u;
    {
        const bool branch_taken_0x26d2e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d2e4) {
            ctx->pc = 0x26D2E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D2E4u;
            // 0x26d2e8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D5CCu;
            goto label_26d5cc;
        }
    }
    ctx->pc = 0x26D2ECu;
label_26d2ec:
    // 0x26d2ec: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x26d2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_26d2f0:
    // 0x26d2f0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x26d2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_26d2f4:
    // 0x26d2f4: 0x544000b5  bnel        $v0, $zero, . + 4 + (0xB5 << 2)
label_26d2f8:
    if (ctx->pc == 0x26D2F8u) {
        ctx->pc = 0x26D2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D2F4u;
        // 0x26d2f8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D2FCu;
        goto label_26d2fc;
    }
    ctx->pc = 0x26D2F4u;
    {
        const bool branch_taken_0x26d2f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d2f4) {
            ctx->pc = 0x26D2F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D2F4u;
            // 0x26d2f8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D5CCu;
            goto label_26d5cc;
        }
    }
    ctx->pc = 0x26D2FCu;
label_26d2fc:
    // 0x26d2fc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x26d2fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_26d300:
    // 0x26d300: 0x504000ab  beql        $v0, $zero, . + 4 + (0xAB << 2)
label_26d304:
    if (ctx->pc == 0x26D304u) {
        ctx->pc = 0x26D304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D300u;
        // 0x26d304: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D308u;
        goto label_26d308;
    }
    ctx->pc = 0x26D300u;
    {
        const bool branch_taken_0x26d300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d300) {
            ctx->pc = 0x26D304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D300u;
            // 0x26d304: 0x8e440264  lw          $a0, 0x264($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D5B0u;
            goto label_26d5b0;
        }
    }
    ctx->pc = 0x26D308u;
label_26d308:
    // 0x26d308: 0x100000b0  b           . + 4 + (0xB0 << 2)
label_26d30c:
    if (ctx->pc == 0x26D30Cu) {
        ctx->pc = 0x26D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D308u;
        // 0x26d30c: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D310u;
        goto label_26d310;
    }
    ctx->pc = 0x26D308u;
    {
        const bool branch_taken_0x26d308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D308u;
        // 0x26d30c: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d308) {
            ctx->pc = 0x26D5CCu;
            goto label_26d5cc;
        }
    }
    ctx->pc = 0x26D310u;
label_26d310:
    // 0x26d310: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x26d310u;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_26d314:
    // 0x26d314: 0xc07a592  jal         func_1E9648
label_26d318:
    if (ctx->pc == 0x26D318u) {
        ctx->pc = 0x26D318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D314u;
        // 0x26d318: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D31Cu;
        goto label_26d31c;
    }
    ctx->pc = 0x26D314u;
    SET_GPR_U32(ctx, 31, 0x26D31Cu);
    ctx->pc = 0x26D318u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D314u;
    // 0x26d318: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E9648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E9648u, 0x26D314u, 0x26D31Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D31Cu;
label_26d31c:
    // 0x26d31c: 0x10400128  beqz        $v0, . + 4 + (0x128 << 2)
label_26d320:
    if (ctx->pc == 0x26D320u) {
        ctx->pc = 0x26D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D31Cu;
        // 0x26d320: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D324u;
        goto label_26d324;
    }
    ctx->pc = 0x26D31Cu;
    {
        const bool branch_taken_0x26d31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D31Cu;
        // 0x26d320: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d31c) {
            ctx->pc = 0x26D7C0u;
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D324u;
label_26d324:
    // 0x26d324: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26d324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d328:
    // 0x26d328: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x26d328u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11036)));
label_26d32c:
    // 0x26d32c: 0x10600124  beqz        $v1, . + 4 + (0x124 << 2)
label_26d330:
    if (ctx->pc == 0x26D330u) {
        ctx->pc = 0x26D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D32Cu;
        // 0x26d330: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D334u;
        goto label_26d334;
    }
    ctx->pc = 0x26D32Cu;
    {
        const bool branch_taken_0x26d32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D32Cu;
        // 0x26d330: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d32c) {
            ctx->pc = 0x26D7C0u;
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D334u;
label_26d334:
    // 0x26d334: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x26d334u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
label_26d338:
    // 0x26d338: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x26d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
label_26d33c:
    // 0x26d33c: 0x0  nop
    ctx->pc = 0x26d33cu;
    // NOP
label_26d340:
    // 0x26d340: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x26d340u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_26d344:
    // 0x26d344: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26d348:
    // 0x26d348: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26d348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26d34c:
    // 0x26d34c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x26d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26d350:
    // 0x26d350: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x26d350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_26d354:
    // 0x26d354: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_26d358:
    if (ctx->pc == 0x26D358u) {
        ctx->pc = 0x26D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D354u;
        // 0x26d358: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D35Cu;
        goto label_26d35c;
    }
    ctx->pc = 0x26D354u;
    {
        const bool branch_taken_0x26d354 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D354u;
        // 0x26d358: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d354) {
            ctx->pc = 0x26D360u;
            goto label_26d360;
        }
    }
    ctx->pc = 0x26D35Cu;
label_26d35c:
    // 0x26d35c: 0x8c700034  lw          $s0, 0x34($v1)
    ctx->pc = 0x26d35cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_26d360:
    // 0x26d360: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x26d360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_26d364:
    // 0x26d364: 0x10500016  beq         $v0, $s0, . + 4 + (0x16 << 2)
label_26d368:
    if (ctx->pc == 0x26D368u) {
        ctx->pc = 0x26D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D364u;
        // 0x26d368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D36Cu;
        goto label_26d36c;
    }
    ctx->pc = 0x26D364u;
    {
        const bool branch_taken_0x26d364 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x26D368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D364u;
        // 0x26d368: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d364) {
            ctx->pc = 0x26D3C0u;
            goto label_26d3c0;
        }
    }
    ctx->pc = 0x26D36Cu;
label_26d36c:
    // 0x26d36c: 0xc09b79c  jal         func_26DE70
label_26d370:
    if (ctx->pc == 0x26D370u) {
        ctx->pc = 0x26D370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D36Cu;
        // 0x26d370: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D374u;
        goto label_26d374;
    }
    ctx->pc = 0x26D36Cu;
    SET_GPR_U32(ctx, 31, 0x26D374u);
    ctx->pc = 0x26D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D36Cu;
    // 0x26d370: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE70u, 0x26D36Cu, 0x26D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D374u;
label_26d374:
    // 0x26d374: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_26d378:
    if (ctx->pc == 0x26D378u) {
        ctx->pc = 0x26D378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D374u;
        // 0x26d378: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D37Cu;
        goto label_26d37c;
    }
    ctx->pc = 0x26D374u;
    {
        const bool branch_taken_0x26d374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d374) {
            ctx->pc = 0x26D378u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D374u;
            // 0x26d378: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D3B8u;
            goto label_26d3b8;
        }
    }
    ctx->pc = 0x26D37Cu;
label_26d37c:
    // 0x26d37c: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x26d37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_26d380:
    // 0x26d380: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x26d380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_26d384:
    // 0x26d384: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_26d388:
    if (ctx->pc == 0x26D388u) {
        ctx->pc = 0x26D388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D384u;
        // 0x26d388: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D38Cu;
        goto label_26d38c;
    }
    ctx->pc = 0x26D384u;
    {
        const bool branch_taken_0x26d384 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d384) {
            ctx->pc = 0x26D388u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D384u;
            // 0x26d388: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D3B8u;
            goto label_26d3b8;
        }
    }
    ctx->pc = 0x26D38Cu;
label_26d38c:
    // 0x26d38c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x26d38cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_26d390:
    // 0x26d390: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_26d394:
    if (ctx->pc == 0x26D394u) {
        ctx->pc = 0x26D394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D390u;
        // 0x26d394: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D398u;
        goto label_26d398;
    }
    ctx->pc = 0x26D390u;
    {
        const bool branch_taken_0x26d390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d390) {
            ctx->pc = 0x26D394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D390u;
            // 0x26d394: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D3B8u;
            goto label_26d3b8;
        }
    }
    ctx->pc = 0x26D398u;
label_26d398:
    // 0x26d398: 0x8e440264  lw          $a0, 0x264($s2)
    ctx->pc = 0x26d398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_26d39c:
    // 0x26d39c: 0xc0f7676  jal         func_3DD9D8
label_26d3a0:
    if (ctx->pc == 0x26D3A0u) {
        ctx->pc = 0x26D3A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D39Cu;
        // 0x26d3a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3A4u;
        goto label_26d3a4;
    }
    ctx->pc = 0x26D39Cu;
    SET_GPR_U32(ctx, 31, 0x26D3A4u);
    ctx->pc = 0x26D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D39Cu;
    // 0x26d3a0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26D39Cu, 0x26D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3A4u;
label_26d3a4:
    // 0x26d3a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d3a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d3a8:
    // 0x26d3a8: 0xc0cda74  jal         func_3369D0
label_26d3ac:
    if (ctx->pc == 0x26D3ACu) {
        ctx->pc = 0x26D3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3A8u;
        // 0x26d3ac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3B0u;
        goto label_26d3b0;
    }
    ctx->pc = 0x26D3A8u;
    SET_GPR_U32(ctx, 31, 0x26D3B0u);
    ctx->pc = 0x26D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3A8u;
    // 0x26d3ac: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369D0u, 0x26D3A8u, 0x26D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3B0u;
label_26d3b0:
    // 0x26d3b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_26d3b4:
    if (ctx->pc == 0x26D3B4u) {
        ctx->pc = 0x26D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3B0u;
        // 0x26d3b4: 0x8e822b1c  lw          $v0, 0x2B1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3B8u;
        goto label_26d3b8;
    }
    ctx->pc = 0x26D3B0u;
    {
        const bool branch_taken_0x26d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3B0u;
        // 0x26d3b4: 0x8e822b1c  lw          $v0, 0x2B1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3b0) {
            ctx->pc = 0x26D3C4u;
            goto label_26d3c4;
        }
    }
    ctx->pc = 0x26D3B8u;
label_26d3b8:
    // 0x26d3b8: 0xc0f7676  jal         func_3DD9D8
label_26d3bc:
    if (ctx->pc == 0x26D3BCu) {
        ctx->pc = 0x26D3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3B8u;
        // 0x26d3bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3C0u;
        goto label_26d3c0;
    }
    ctx->pc = 0x26D3B8u;
    SET_GPR_U32(ctx, 31, 0x26D3C0u);
    ctx->pc = 0x26D3BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3B8u;
    // 0x26d3bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26D3B8u, 0x26D3C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D3C0u;
label_26d3c0:
    // 0x26d3c0: 0x8e822b1c  lw          $v0, 0x2B1C($s4)
    ctx->pc = 0x26d3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11036)));
label_26d3c4:
    // 0x26d3c4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26d3c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26d3c8:
    // 0x26d3c8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x26d3c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26d3cc:
    // 0x26d3cc: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_26d3d0:
    if (ctx->pc == 0x26D3D0u) {
        ctx->pc = 0x26D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3CCu;
        // 0x26d3d0: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3D4u;
        goto label_26d3d4;
    }
    ctx->pc = 0x26D3CCu;
    {
        const bool branch_taken_0x26d3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3CCu;
        // 0x26d3d0: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3cc) {
            ctx->pc = 0x26D340u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d340;
        }
    }
    ctx->pc = 0x26D3D4u;
label_26d3d4:
    // 0x26d3d4: 0x100000fb  b           . + 4 + (0xFB << 2)
label_26d3d8:
    if (ctx->pc == 0x26D3D8u) {
        ctx->pc = 0x26D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3D4u;
        // 0x26d3d8: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3DCu;
        goto label_26d3dc;
    }
    ctx->pc = 0x26D3D4u;
    {
        const bool branch_taken_0x26d3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3D4u;
        // 0x26d3d8: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3d4) {
            ctx->pc = 0x26D7C4u;
            goto label_26d7c4;
        }
    }
    ctx->pc = 0x26D3DCu;
label_26d3dc:
    // 0x26d3dc: 0x8e42025c  lw          $v0, 0x25C($s2)
    ctx->pc = 0x26d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_26d3e0:
    // 0x26d3e0: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
label_26d3e4:
    if (ctx->pc == 0x26D3E4u) {
        ctx->pc = 0x26D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3E0u;
        // 0x26d3e4: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3E8u;
        goto label_26d3e8;
    }
    ctx->pc = 0x26D3E0u;
    {
        const bool branch_taken_0x26d3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3E0u;
        // 0x26d3e4: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3e0) {
            ctx->pc = 0x26D7C0u;
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D3E8u;
label_26d3e8:
    // 0x26d3e8: 0x8e420280  lw          $v0, 0x280($s2)
    ctx->pc = 0x26d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_26d3ec:
    // 0x26d3ec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26d3ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26d3f0:
    // 0x26d3f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26d3f4:
    if (ctx->pc == 0x26D3F4u) {
        ctx->pc = 0x26D3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3F0u;
        // 0x26d3f4: 0x8e510280  lw          $s1, 0x280($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D3F8u;
        goto label_26d3f8;
    }
    ctx->pc = 0x26D3F0u;
    {
        const bool branch_taken_0x26d3f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d3f0) {
            ctx->pc = 0x26D3F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D3F0u;
            // 0x26d3f4: 0x8e510280  lw          $s1, 0x280($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D404u;
            goto label_26d404;
        }
    }
    ctx->pc = 0x26D3F8u;
label_26d3f8:
    // 0x26d3f8: 0xc09ba08  jal         func_26E820
label_26d3fc:
    if (ctx->pc == 0x26D3FCu) {
        ctx->pc = 0x26D3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D3F8u;
        // 0x26d3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D400u;
        goto label_26d400;
    }
    ctx->pc = 0x26D3F8u;
    SET_GPR_U32(ctx, 31, 0x26D400u);
    ctx->pc = 0x26D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D3F8u;
    // 0x26d3fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E820u, 0x26D3F8u, 0x26D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D400u;
label_26d400:
    // 0x26d400: 0x8e510280  lw          $s1, 0x280($s2)
    ctx->pc = 0x26d400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_26d404:
    // 0x26d404: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x26d404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_26d408:
    // 0x26d408: 0x5622000c  bnel        $s1, $v0, . + 4 + (0xC << 2)
label_26d40c:
    if (ctx->pc == 0x26D40Cu) {
        ctx->pc = 0x26D40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D408u;
        // 0x26d40c: 0x118827  nor         $s1, $zero, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D410u;
        goto label_26d410;
    }
    ctx->pc = 0x26D408u;
    {
        const bool branch_taken_0x26d408 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d408) {
            ctx->pc = 0x26D40Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D408u;
            // 0x26d40c: 0x118827  nor         $s1, $zero, $s1 (Delay Slot)
            SET_GPR_U64(ctx, 17, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D43Cu;
            goto label_26d43c;
        }
    }
    ctx->pc = 0x26D410u;
label_26d410:
    // 0x26d410: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26d410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26d414:
    // 0x26d414: 0x8c50bd50  lw          $s0, -0x42B0($v0)
    ctx->pc = 0x26d414u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_26d418:
    // 0x26d418: 0x520000eb  beql        $s0, $zero, . + 4 + (0xEB << 2)
label_26d41c:
    if (ctx->pc == 0x26D41Cu) {
        ctx->pc = 0x26D41Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D418u;
        // 0x26d41c: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D420u;
        goto label_26d420;
    }
    ctx->pc = 0x26D418u;
    {
        const bool branch_taken_0x26d418 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d418) {
            ctx->pc = 0x26D41Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D418u;
            // 0x26d41c: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D7C8u;
            goto label_26d7c8;
        }
    }
    ctx->pc = 0x26D420u;
label_26d420:
    // 0x26d420: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x26d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_26d424:
    // 0x26d424: 0x8e44025c  lw          $a0, 0x25C($s2)
    ctx->pc = 0x26d424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
label_26d428:
    // 0x26d428: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26d428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_26d42c:
    // 0x26d42c: 0xc078668  jal         func_1E19A0
label_26d430:
    if (ctx->pc == 0x26D430u) {
        ctx->pc = 0x26D430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D42Cu;
        // 0x26d430: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D434u;
        goto label_26d434;
    }
    ctx->pc = 0x26D42Cu;
    SET_GPR_U32(ctx, 31, 0x26D434u);
    ctx->pc = 0x26D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D42Cu;
    // 0x26d430: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E19A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E19A0u, 0x26D42Cu, 0x26D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D434u;
label_26d434:
    // 0x26d434: 0x1000ffa6  b           . + 4 + (-0x5A << 2)
label_26d438:
    if (ctx->pc == 0x26D438u) {
        ctx->pc = 0x26D43Cu;
        goto label_26d43c;
    }
    ctx->pc = 0x26D434u;
    {
        const bool branch_taken_0x26d434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d434) {
            ctx->pc = 0x26D2D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d2d0;
        }
    }
    ctx->pc = 0x26D43Cu;
label_26d43c:
    // 0x26d43c: 0xc07a248  jal         func_1E8920
label_26d440:
    if (ctx->pc == 0x26D440u) {
        ctx->pc = 0x26D440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D43Cu;
        // 0x26d440: 0x8e50025c  lw          $s0, 0x25C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D444u;
        goto label_26d444;
    }
    ctx->pc = 0x26D43Cu;
    SET_GPR_U32(ctx, 31, 0x26D444u);
    ctx->pc = 0x26D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D43Cu;
    // 0x26d440: 0x8e50025c  lw          $s0, 0x25C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 604)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8920u, 0x26D43Cu, 0x26D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D444u;
label_26d444:
    // 0x26d444: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26d444u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26d448:
    // 0x26d448: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26d448u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_26d44c:
    // 0x26d44c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26d44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d450:
    // 0x26d450: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26d450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26d454:
    // 0x26d454: 0xc077b46  jal         func_1DED18
label_26d458:
    if (ctx->pc == 0x26D458u) {
        ctx->pc = 0x26D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D454u;
        // 0x26d458: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D45Cu;
        goto label_26d45c;
    }
    ctx->pc = 0x26D454u;
    SET_GPR_U32(ctx, 31, 0x26D45Cu);
    ctx->pc = 0x26D458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D454u;
    // 0x26d458: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DED18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DED18u, 0x26D454u, 0x26D45Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D45Cu;
label_26d45c:
    // 0x26d45c: 0x104000d8  beqz        $v0, . + 4 + (0xD8 << 2)
label_26d460:
    if (ctx->pc == 0x26D460u) {
        ctx->pc = 0x26D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D45Cu;
        // 0x26d460: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D464u;
        goto label_26d464;
    }
    ctx->pc = 0x26D45Cu;
    {
        const bool branch_taken_0x26d45c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D45Cu;
        // 0x26d460: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d45c) {
            ctx->pc = 0x26D7C0u;
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D464u;
label_26d464:
    // 0x26d464: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26d464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d468:
    // 0x26d468: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x26d468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11036)));
label_26d46c:
    // 0x26d46c: 0x106000d4  beqz        $v1, . + 4 + (0xD4 << 2)
label_26d470:
    if (ctx->pc == 0x26D470u) {
        ctx->pc = 0x26D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D46Cu;
        // 0x26d470: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D474u;
        goto label_26d474;
    }
    ctx->pc = 0x26D46Cu;
    {
        const bool branch_taken_0x26d46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D46Cu;
        // 0x26d470: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d46c) {
            ctx->pc = 0x26D7C0u;
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D474u;
label_26d474:
    // 0x26d474: 0x3c130048  lui         $s3, 0x48
    ctx->pc = 0x26d474u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)72 << 16));
label_26d478:
    // 0x26d478: 0x8e622b20  lw          $v0, 0x2B20($s3)
    ctx->pc = 0x26d478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
label_26d47c:
    // 0x26d47c: 0x0  nop
    ctx->pc = 0x26d47cu;
    // NOP
label_26d480:
    // 0x26d480: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x26d480u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_26d484:
    // 0x26d484: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26d484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26d488:
    // 0x26d488: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x26d488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26d48c:
    // 0x26d48c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x26d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_26d490:
    // 0x26d490: 0x38420008  xori        $v0, $v0, 0x8
    ctx->pc = 0x26d490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)8);
label_26d494:
    // 0x26d494: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_26d498:
    if (ctx->pc == 0x26D498u) {
        ctx->pc = 0x26D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D494u;
        // 0x26d498: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D49Cu;
        goto label_26d49c;
    }
    ctx->pc = 0x26D494u;
    {
        const bool branch_taken_0x26d494 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D494u;
        // 0x26d498: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d494) {
            ctx->pc = 0x26D4A0u;
            goto label_26d4a0;
        }
    }
    ctx->pc = 0x26D49Cu;
label_26d49c:
    // 0x26d49c: 0x8c700034  lw          $s0, 0x34($v1)
    ctx->pc = 0x26d49cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_26d4a0:
    // 0x26d4a0: 0x8e420270  lw          $v0, 0x270($s2)
    ctx->pc = 0x26d4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 624)));
label_26d4a4:
    // 0x26d4a4: 0x10500016  beq         $v0, $s0, . + 4 + (0x16 << 2)
label_26d4a8:
    if (ctx->pc == 0x26D4A8u) {
        ctx->pc = 0x26D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4A4u;
        // 0x26d4a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4ACu;
        goto label_26d4ac;
    }
    ctx->pc = 0x26D4A4u;
    {
        const bool branch_taken_0x26d4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x26D4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4A4u;
        // 0x26d4a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4a4) {
            ctx->pc = 0x26D500u;
            goto label_26d500;
        }
    }
    ctx->pc = 0x26D4ACu;
label_26d4ac:
    // 0x26d4ac: 0xc09b79c  jal         func_26DE70
label_26d4b0:
    if (ctx->pc == 0x26D4B0u) {
        ctx->pc = 0x26D4B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4ACu;
        // 0x26d4b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4B4u;
        goto label_26d4b4;
    }
    ctx->pc = 0x26D4ACu;
    SET_GPR_U32(ctx, 31, 0x26D4B4u);
    ctx->pc = 0x26D4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4ACu;
    // 0x26d4b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE70u, 0x26D4ACu, 0x26D4B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4B4u;
label_26d4b4:
    // 0x26d4b4: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_26d4b8:
    if (ctx->pc == 0x26D4B8u) {
        ctx->pc = 0x26D4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4B4u;
        // 0x26d4b8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4BCu;
        goto label_26d4bc;
    }
    ctx->pc = 0x26D4B4u;
    {
        const bool branch_taken_0x26d4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d4b4) {
            ctx->pc = 0x26D4B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D4B4u;
            // 0x26d4b8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D4F8u;
            goto label_26d4f8;
        }
    }
    ctx->pc = 0x26D4BCu;
label_26d4bc:
    // 0x26d4bc: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x26d4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_26d4c0:
    // 0x26d4c0: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x26d4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_26d4c4:
    // 0x26d4c4: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_26d4c8:
    if (ctx->pc == 0x26D4C8u) {
        ctx->pc = 0x26D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4C4u;
        // 0x26d4c8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4CCu;
        goto label_26d4cc;
    }
    ctx->pc = 0x26D4C4u;
    {
        const bool branch_taken_0x26d4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d4c4) {
            ctx->pc = 0x26D4C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D4C4u;
            // 0x26d4c8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D4F8u;
            goto label_26d4f8;
        }
    }
    ctx->pc = 0x26D4CCu;
label_26d4cc:
    // 0x26d4cc: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x26d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_26d4d0:
    // 0x26d4d0: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_26d4d4:
    if (ctx->pc == 0x26D4D4u) {
        ctx->pc = 0x26D4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4D0u;
        // 0x26d4d4: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4D8u;
        goto label_26d4d8;
    }
    ctx->pc = 0x26D4D0u;
    {
        const bool branch_taken_0x26d4d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d4d0) {
            ctx->pc = 0x26D4D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D4D0u;
            // 0x26d4d4: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D4F8u;
            goto label_26d4f8;
        }
    }
    ctx->pc = 0x26D4D8u;
label_26d4d8:
    // 0x26d4d8: 0x8e440264  lw          $a0, 0x264($s2)
    ctx->pc = 0x26d4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_26d4dc:
    // 0x26d4dc: 0xc0f7676  jal         func_3DD9D8
label_26d4e0:
    if (ctx->pc == 0x26D4E0u) {
        ctx->pc = 0x26D4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4DCu;
        // 0x26d4e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4E4u;
        goto label_26d4e4;
    }
    ctx->pc = 0x26D4DCu;
    SET_GPR_U32(ctx, 31, 0x26D4E4u);
    ctx->pc = 0x26D4E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4DCu;
    // 0x26d4e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26D4DCu, 0x26D4E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4E4u;
label_26d4e4:
    // 0x26d4e4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d4e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d4e8:
    // 0x26d4e8: 0xc0cda74  jal         func_3369D0
label_26d4ec:
    if (ctx->pc == 0x26D4ECu) {
        ctx->pc = 0x26D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4E8u;
        // 0x26d4ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4F0u;
        goto label_26d4f0;
    }
    ctx->pc = 0x26D4E8u;
    SET_GPR_U32(ctx, 31, 0x26D4F0u);
    ctx->pc = 0x26D4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4E8u;
    // 0x26d4ec: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369D0u, 0x26D4E8u, 0x26D4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D4F0u;
label_26d4f0:
    // 0x26d4f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_26d4f4:
    if (ctx->pc == 0x26D4F4u) {
        ctx->pc = 0x26D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4F0u;
        // 0x26d4f4: 0x8e822b1c  lw          $v0, 0x2B1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11036)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D4F8u;
        goto label_26d4f8;
    }
    ctx->pc = 0x26D4F0u;
    {
        const bool branch_taken_0x26d4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4F0u;
        // 0x26d4f4: 0x8e822b1c  lw          $v0, 0x2B1C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11036)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4f0) {
            ctx->pc = 0x26D504u;
            goto label_26d504;
        }
    }
    ctx->pc = 0x26D4F8u;
label_26d4f8:
    // 0x26d4f8: 0xc0f7676  jal         func_3DD9D8
label_26d4fc:
    if (ctx->pc == 0x26D4FCu) {
        ctx->pc = 0x26D4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D4F8u;
        // 0x26d4fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D500u;
        goto label_26d500;
    }
    ctx->pc = 0x26D4F8u;
    SET_GPR_U32(ctx, 31, 0x26D500u);
    ctx->pc = 0x26D4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D4F8u;
    // 0x26d4fc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26D4F8u, 0x26D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D500u;
label_26d500:
    // 0x26d500: 0x8e822b1c  lw          $v0, 0x2B1C($s4)
    ctx->pc = 0x26d500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11036)));
label_26d504:
    // 0x26d504: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26d504u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26d508:
    // 0x26d508: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x26d508u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26d50c:
    // 0x26d50c: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_26d510:
    if (ctx->pc == 0x26D510u) {
        ctx->pc = 0x26D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D50Cu;
        // 0x26d510: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D514u;
        goto label_26d514;
    }
    ctx->pc = 0x26D50Cu;
    {
        const bool branch_taken_0x26d50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D50Cu;
        // 0x26d510: 0x8e622b20  lw          $v0, 0x2B20($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d50c) {
            ctx->pc = 0x26D480u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d480;
        }
    }
    ctx->pc = 0x26D514u;
label_26d514:
    // 0x26d514: 0x100000ab  b           . + 4 + (0xAB << 2)
label_26d518:
    if (ctx->pc == 0x26D518u) {
        ctx->pc = 0x26D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D514u;
        // 0x26d518: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D51Cu;
        goto label_26d51c;
    }
    ctx->pc = 0x26D514u;
    {
        const bool branch_taken_0x26d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D514u;
        // 0x26d518: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d514) {
            ctx->pc = 0x26D7C4u;
            goto label_26d7c4;
        }
    }
    ctx->pc = 0x26D51Cu;
label_26d51c:
    // 0x26d51c: 0x8e420260  lw          $v0, 0x260($s2)
    ctx->pc = 0x26d51cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_26d520:
    // 0x26d520: 0x104000a7  beqz        $v0, . + 4 + (0xA7 << 2)
label_26d524:
    if (ctx->pc == 0x26D524u) {
        ctx->pc = 0x26D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D520u;
        // 0x26d524: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D528u;
        goto label_26d528;
    }
    ctx->pc = 0x26D520u;
    {
        const bool branch_taken_0x26d520 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D520u;
        // 0x26d524: 0x3c032000  lui         $v1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d520) {
            ctx->pc = 0x26D7C0u;
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D528u;
label_26d528:
    // 0x26d528: 0x8e420280  lw          $v0, 0x280($s2)
    ctx->pc = 0x26d528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_26d52c:
    // 0x26d52c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26d530:
    // 0x26d530: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26d534:
    if (ctx->pc == 0x26D534u) {
        ctx->pc = 0x26D534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D530u;
        // 0x26d534: 0x8e450280  lw          $a1, 0x280($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D538u;
        goto label_26d538;
    }
    ctx->pc = 0x26D530u;
    {
        const bool branch_taken_0x26d530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d530) {
            ctx->pc = 0x26D534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D530u;
            // 0x26d534: 0x8e450280  lw          $a1, 0x280($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D544u;
            goto label_26d544;
        }
    }
    ctx->pc = 0x26D538u;
label_26d538:
    // 0x26d538: 0xc09ba08  jal         func_26E820
label_26d53c:
    if (ctx->pc == 0x26D53Cu) {
        ctx->pc = 0x26D53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D538u;
        // 0x26d53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D540u;
        goto label_26d540;
    }
    ctx->pc = 0x26D538u;
    SET_GPR_U32(ctx, 31, 0x26D540u);
    ctx->pc = 0x26D53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D538u;
    // 0x26d53c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E820u, 0x26D538u, 0x26D540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D540u;
label_26d540:
    // 0x26d540: 0x8e450280  lw          $a1, 0x280($s2)
    ctx->pc = 0x26d540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 640)));
label_26d544:
    // 0x26d544: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x26d544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_26d548:
    // 0x26d548: 0x54a20024  bnel        $a1, $v0, . + 4 + (0x24 << 2)
label_26d54c:
    if (ctx->pc == 0x26D54Cu) {
        ctx->pc = 0x26D54Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D548u;
        // 0x26d54c: 0x8e440260  lw          $a0, 0x260($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D550u;
        goto label_26d550;
    }
    ctx->pc = 0x26D548u;
    {
        const bool branch_taken_0x26d548 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d548) {
            ctx->pc = 0x26D54Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D548u;
            // 0x26d54c: 0x8e440260  lw          $a0, 0x260($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D5DCu;
            goto label_26d5dc;
        }
    }
    ctx->pc = 0x26D550u;
label_26d550:
    // 0x26d550: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x26d550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_26d554:
    // 0x26d554: 0x8c50bd50  lw          $s0, -0x42B0($v0)
    ctx->pc = 0x26d554u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_26d558:
    // 0x26d558: 0x5200009b  beql        $s0, $zero, . + 4 + (0x9B << 2)
label_26d55c:
    if (ctx->pc == 0x26D55Cu) {
        ctx->pc = 0x26D55Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D558u;
        // 0x26d55c: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D560u;
        goto label_26d560;
    }
    ctx->pc = 0x26D558u;
    {
        const bool branch_taken_0x26d558 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d558) {
            ctx->pc = 0x26D55Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D558u;
            // 0x26d55c: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D7C8u;
            goto label_26d7c8;
        }
    }
    ctx->pc = 0x26D560u;
label_26d560:
    // 0x26d560: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x26d560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_26d564:
    // 0x26d564: 0x8e450260  lw          $a1, 0x260($s2)
    ctx->pc = 0x26d564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 608)));
label_26d568:
    // 0x26d568: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26d568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_26d56c:
    // 0x26d56c: 0xc078932  jal         func_1E24C8
label_26d570:
    if (ctx->pc == 0x26D570u) {
        ctx->pc = 0x26D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D56Cu;
        // 0x26d570: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D574u;
        goto label_26d574;
    }
    ctx->pc = 0x26D56Cu;
    SET_GPR_U32(ctx, 31, 0x26D574u);
    ctx->pc = 0x26D570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D56Cu;
    // 0x26d570: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E24C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E24C8u, 0x26D56Cu, 0x26D574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D574u;
label_26d574:
    // 0x26d574: 0x50400094  beql        $v0, $zero, . + 4 + (0x94 << 2)
label_26d578:
    if (ctx->pc == 0x26D578u) {
        ctx->pc = 0x26D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D574u;
        // 0x26d578: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D57Cu;
        goto label_26d57c;
    }
    ctx->pc = 0x26D574u;
    {
        const bool branch_taken_0x26d574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d574) {
            ctx->pc = 0x26D578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D574u;
            // 0x26d578: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D7C8u;
            goto label_26d7c8;
        }
    }
    ctx->pc = 0x26D57Cu;
label_26d57c:
    // 0x26d57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d580:
    // 0x26d580: 0xc09b79c  jal         func_26DE70
label_26d584:
    if (ctx->pc == 0x26D584u) {
        ctx->pc = 0x26D584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D580u;
        // 0x26d584: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D588u;
        goto label_26d588;
    }
    ctx->pc = 0x26D580u;
    SET_GPR_U32(ctx, 31, 0x26D588u);
    ctx->pc = 0x26D584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D580u;
    // 0x26d584: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE70u, 0x26D580u, 0x26D588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D588u;
label_26d588:
    // 0x26d588: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_26d58c:
    if (ctx->pc == 0x26D58Cu) {
        ctx->pc = 0x26D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D588u;
        // 0x26d58c: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D590u;
        goto label_26d590;
    }
    ctx->pc = 0x26D588u;
    {
        const bool branch_taken_0x26d588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d588) {
            ctx->pc = 0x26D58Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D588u;
            // 0x26d58c: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D5CCu;
            goto label_26d5cc;
        }
    }
    ctx->pc = 0x26D590u;
label_26d590:
    // 0x26d590: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x26d590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_26d594:
    // 0x26d594: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x26d594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_26d598:
    // 0x26d598: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_26d59c:
    if (ctx->pc == 0x26D59Cu) {
        ctx->pc = 0x26D59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D598u;
        // 0x26d59c: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5A0u;
        goto label_26d5a0;
    }
    ctx->pc = 0x26D598u;
    {
        const bool branch_taken_0x26d598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d598) {
            ctx->pc = 0x26D59Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D598u;
            // 0x26d59c: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D5CCu;
            goto label_26d5cc;
        }
    }
    ctx->pc = 0x26D5A0u;
label_26d5a0:
    // 0x26d5a0: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x26d5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_26d5a4:
    // 0x26d5a4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_26d5a8:
    if (ctx->pc == 0x26D5A8u) {
        ctx->pc = 0x26D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5A4u;
        // 0x26d5a8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5ACu;
        goto label_26d5ac;
    }
    ctx->pc = 0x26D5A4u;
    {
        const bool branch_taken_0x26d5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d5a4) {
            ctx->pc = 0x26D5A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D5A4u;
            // 0x26d5a8: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D5CCu;
            goto label_26d5cc;
        }
    }
    ctx->pc = 0x26D5ACu;
label_26d5ac:
    // 0x26d5ac: 0x8e440264  lw          $a0, 0x264($s2)
    ctx->pc = 0x26d5acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_26d5b0:
    // 0x26d5b0: 0xc0f7676  jal         func_3DD9D8
label_26d5b4:
    if (ctx->pc == 0x26D5B4u) {
        ctx->pc = 0x26D5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5B0u;
        // 0x26d5b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5B8u;
        goto label_26d5b8;
    }
    ctx->pc = 0x26D5B0u;
    SET_GPR_U32(ctx, 31, 0x26D5B8u);
    ctx->pc = 0x26D5B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5B0u;
    // 0x26d5b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26D5B0u, 0x26D5B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5B8u;
label_26d5b8:
    // 0x26d5b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d5bc:
    // 0x26d5bc: 0xc0cda74  jal         func_3369D0
label_26d5c0:
    if (ctx->pc == 0x26D5C0u) {
        ctx->pc = 0x26D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5BCu;
        // 0x26d5c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5C4u;
        goto label_26d5c4;
    }
    ctx->pc = 0x26D5BCu;
    SET_GPR_U32(ctx, 31, 0x26D5C4u);
    ctx->pc = 0x26D5C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5BCu;
    // 0x26d5c0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369D0u, 0x26D5BCu, 0x26D5C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5C4u;
label_26d5c4:
    // 0x26d5c4: 0x1000007f  b           . + 4 + (0x7F << 2)
label_26d5c8:
    if (ctx->pc == 0x26D5C8u) {
        ctx->pc = 0x26D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5C4u;
        // 0x26d5c8: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5CCu;
        goto label_26d5cc;
    }
    ctx->pc = 0x26D5C4u;
    {
        const bool branch_taken_0x26d5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5C4u;
        // 0x26d5c8: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5c4) {
            ctx->pc = 0x26D7C4u;
            goto label_26d7c4;
        }
    }
    ctx->pc = 0x26D5CCu;
label_26d5cc:
    // 0x26d5cc: 0xc0f7676  jal         func_3DD9D8
label_26d5d0:
    if (ctx->pc == 0x26D5D0u) {
        ctx->pc = 0x26D5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5CCu;
        // 0x26d5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5D4u;
        goto label_26d5d4;
    }
    ctx->pc = 0x26D5CCu;
    SET_GPR_U32(ctx, 31, 0x26D5D4u);
    ctx->pc = 0x26D5D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5CCu;
    // 0x26d5d0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26D5CCu, 0x26D5D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5D4u;
label_26d5d4:
    // 0x26d5d4: 0x1000007b  b           . + 4 + (0x7B << 2)
label_26d5d8:
    if (ctx->pc == 0x26D5D8u) {
        ctx->pc = 0x26D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5D4u;
        // 0x26d5d8: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5DCu;
        goto label_26d5dc;
    }
    ctx->pc = 0x26D5D4u;
    {
        const bool branch_taken_0x26d5d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5D4u;
        // 0x26d5d8: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5d4) {
            ctx->pc = 0x26D7C4u;
            goto label_26d7c4;
        }
    }
    ctx->pc = 0x26D5DCu;
label_26d5dc:
    // 0x26d5dc: 0x52827  nor         $a1, $zero, $a1
    ctx->pc = 0x26d5dcu;
    SET_GPR_U64(ctx, 5, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 5)));
label_26d5e0:
    // 0x26d5e0: 0xc07611a  jal         func_1D8468
label_26d5e4:
    if (ctx->pc == 0x26D5E4u) {
        ctx->pc = 0x26D5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5E0u;
        // 0x26d5e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5E8u;
        goto label_26d5e8;
    }
    ctx->pc = 0x26D5E0u;
    SET_GPR_U32(ctx, 31, 0x26D5E8u);
    ctx->pc = 0x26D5E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D5E0u;
    // 0x26d5e4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8468u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8468u, 0x26D5E0u, 0x26D5E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D5E8u;
label_26d5e8:
    // 0x26d5e8: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
label_26d5ec:
    if (ctx->pc == 0x26D5ECu) {
        ctx->pc = 0x26D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5E8u;
        // 0x26d5ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D5F0u;
        goto label_26d5f0;
    }
    ctx->pc = 0x26D5E8u;
    {
        const bool branch_taken_0x26d5e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5E8u;
        // 0x26d5ec: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5e8) {
            ctx->pc = 0x26D7C0u;
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D5F0u;
label_26d5f0:
    // 0x26d5f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26d5f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26d5f4:
    // 0x26d5f4: 0x8c432b1c  lw          $v1, 0x2B1C($v0)
    ctx->pc = 0x26d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11036)));
label_26d5f8:
    // 0x26d5f8: 0x10600071  beqz        $v1, . + 4 + (0x71 << 2)
label_26d5fc:
    if (ctx->pc == 0x26D5FCu) {
        ctx->pc = 0x26D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5F8u;
        // 0x26d5fc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D600u;
        goto label_26d600;
    }
    ctx->pc = 0x26D5F8u;
    {
        const bool branch_taken_0x26d5f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D5F8u;
        // 0x26d5fc: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5f8) {
            ctx->pc = 0x26D7C0u;
            goto label_26d7c0;
        }
    }
    ctx->pc = 0x26D600u;
label_26d600:
    // 0x26d600: 0x3c110048  lui         $s1, 0x48
    ctx->pc = 0x26d600u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
label_26d604:
    // 0x26d604: 0x8e232b20  lw          $v1, 0x2B20($s1)
    ctx->pc = 0x26d604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
label_26d608:
    // 0x26d608: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x26d608u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_26d60c:
    // 0x26d60c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d610:
    // 0x26d610: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26d610u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26d614:
    // 0x26d614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26d614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26d618:
    // 0x26d618: 0xc09b740  jal         func_26DD00
label_26d61c:
    if (ctx->pc == 0x26D61Cu) {
        ctx->pc = 0x26D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D618u;
        // 0x26d61c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D620u;
        goto label_26d620;
    }
    ctx->pc = 0x26D618u;
    SET_GPR_U32(ctx, 31, 0x26D620u);
    ctx->pc = 0x26D61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D618u;
    // 0x26d61c: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DD00u, 0x26D618u, 0x26D620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D620u;
label_26d620:
    // 0x26d620: 0x8e822b1c  lw          $v0, 0x2B1C($s4)
    ctx->pc = 0x26d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11036)));
label_26d624:
    // 0x26d624: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x26d624u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_26d628:
    // 0x26d628: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_26d62c:
    if (ctx->pc == 0x26D62Cu) {
        ctx->pc = 0x26D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D628u;
        // 0x26d62c: 0x8e232b20  lw          $v1, 0x2B20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D630u;
        goto label_26d630;
    }
    ctx->pc = 0x26D628u;
    {
        const bool branch_taken_0x26d628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D628u;
        // 0x26d62c: 0x8e232b20  lw          $v1, 0x2B20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d628) {
            ctx->pc = 0x26D608u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d608;
        }
    }
    ctx->pc = 0x26D630u;
label_26d630:
    // 0x26d630: 0x10000064  b           . + 4 + (0x64 << 2)
label_26d634:
    if (ctx->pc == 0x26D634u) {
        ctx->pc = 0x26D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D630u;
        // 0x26d634: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D638u;
        goto label_26d638;
    }
    ctx->pc = 0x26D630u;
    {
        const bool branch_taken_0x26d630 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D630u;
        // 0x26d634: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d630) {
            ctx->pc = 0x26D7C4u;
            goto label_26d7c4;
        }
    }
    ctx->pc = 0x26D638u;
label_26d638:
    // 0x26d638: 0x8c50bd50  lw          $s0, -0x42B0($v0)
    ctx->pc = 0x26d638u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_26d63c:
    // 0x26d63c: 0x52000062  beql        $s0, $zero, . + 4 + (0x62 << 2)
label_26d640:
    if (ctx->pc == 0x26D640u) {
        ctx->pc = 0x26D640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D63Cu;
        // 0x26d640: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D644u;
        goto label_26d644;
    }
    ctx->pc = 0x26D63Cu;
    {
        const bool branch_taken_0x26d63c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d63c) {
            ctx->pc = 0x26D640u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D63Cu;
            // 0x26d640: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D7C8u;
            goto label_26d7c8;
        }
    }
    ctx->pc = 0x26D644u;
label_26d644:
    // 0x26d644: 0x8e0300c4  lw          $v1, 0xC4($s0)
    ctx->pc = 0x26d644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_26d648:
    // 0x26d648: 0x8e440258  lw          $a0, 0x258($s2)
    ctx->pc = 0x26d648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 600)));
label_26d64c:
    // 0x26d64c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26d64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_26d650:
    // 0x26d650: 0xc0788a0  jal         func_1E2280
label_26d654:
    if (ctx->pc == 0x26D654u) {
        ctx->pc = 0x26D654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D650u;
        // 0x26d654: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D658u;
        goto label_26d658;
    }
    ctx->pc = 0x26D650u;
    SET_GPR_U32(ctx, 31, 0x26D658u);
    ctx->pc = 0x26D654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D650u;
    // 0x26d654: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E2280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E2280u, 0x26D650u, 0x26D658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D658u;
label_26d658:
    // 0x26d658: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
label_26d65c:
    if (ctx->pc == 0x26D65Cu) {
        ctx->pc = 0x26D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D658u;
        // 0x26d65c: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D660u;
        goto label_26d660;
    }
    ctx->pc = 0x26D658u;
    {
        const bool branch_taken_0x26d658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d658) {
            ctx->pc = 0x26D65Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D658u;
            // 0x26d65c: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D7C8u;
            goto label_26d7c8;
        }
    }
    ctx->pc = 0x26D660u;
label_26d660:
    // 0x26d660: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d664:
    // 0x26d664: 0xc09b79c  jal         func_26DE70
label_26d668:
    if (ctx->pc == 0x26D668u) {
        ctx->pc = 0x26D668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D664u;
        // 0x26d668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D66Cu;
        goto label_26d66c;
    }
    ctx->pc = 0x26D664u;
    SET_GPR_U32(ctx, 31, 0x26D66Cu);
    ctx->pc = 0x26D668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D664u;
    // 0x26d668: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DE70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DE70u, 0x26D664u, 0x26D66Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D66Cu;
label_26d66c:
    // 0x26d66c: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_26d670:
    if (ctx->pc == 0x26D670u) {
        ctx->pc = 0x26D670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D66Cu;
        // 0x26d670: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D674u;
        goto label_26d674;
    }
    ctx->pc = 0x26D66Cu;
    {
        const bool branch_taken_0x26d66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d66c) {
            ctx->pc = 0x26D670u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D66Cu;
            // 0x26d670: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D674u;
label_26d674:
    // 0x26d674: 0x8e0300c0  lw          $v1, 0xC0($s0)
    ctx->pc = 0x26d674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
label_26d678:
    // 0x26d678: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x26d678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_26d67c:
    // 0x26d67c: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_26d680:
    if (ctx->pc == 0x26D680u) {
        ctx->pc = 0x26D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D67Cu;
        // 0x26d680: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D684u;
        goto label_26d684;
    }
    ctx->pc = 0x26D67Cu;
    {
        const bool branch_taken_0x26d67c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d67c) {
            ctx->pc = 0x26D680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D67Cu;
            // 0x26d680: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D684u;
label_26d684:
    // 0x26d684: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x26d684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_26d688:
    // 0x26d688: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_26d68c:
    if (ctx->pc == 0x26D68Cu) {
        ctx->pc = 0x26D68Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D688u;
        // 0x26d68c: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D690u;
        goto label_26d690;
    }
    ctx->pc = 0x26D688u;
    {
        const bool branch_taken_0x26d688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d688) {
            ctx->pc = 0x26D68Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D688u;
            // 0x26d68c: 0x8e440268  lw          $a0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D6B0u;
            goto label_26d6b0;
        }
    }
    ctx->pc = 0x26D690u;
label_26d690:
    // 0x26d690: 0x8e440264  lw          $a0, 0x264($s2)
    ctx->pc = 0x26d690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 612)));
label_26d694:
    // 0x26d694: 0xc0f7676  jal         func_3DD9D8
label_26d698:
    if (ctx->pc == 0x26D698u) {
        ctx->pc = 0x26D698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D694u;
        // 0x26d698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D69Cu;
        goto label_26d69c;
    }
    ctx->pc = 0x26D694u;
    SET_GPR_U32(ctx, 31, 0x26D69Cu);
    ctx->pc = 0x26D698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D694u;
    // 0x26d698: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26D694u, 0x26D69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D69Cu;
label_26d69c:
    // 0x26d69c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d69cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d6a0:
    // 0x26d6a0: 0xc0cda74  jal         func_3369D0
label_26d6a4:
    if (ctx->pc == 0x26D6A4u) {
        ctx->pc = 0x26D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6A0u;
        // 0x26d6a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6A8u;
        goto label_26d6a8;
    }
    ctx->pc = 0x26D6A0u;
    SET_GPR_U32(ctx, 31, 0x26D6A8u);
    ctx->pc = 0x26D6A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6A0u;
    // 0x26d6a4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369D0u, 0x26D6A0u, 0x26D6A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6A8u;
label_26d6a8:
    // 0x26d6a8: 0x10000004  b           . + 4 + (0x4 << 2)
label_26d6ac:
    if (ctx->pc == 0x26D6ACu) {
        ctx->pc = 0x26D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6A8u;
        // 0x26d6ac: 0x26430230  addiu       $v1, $s2, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6B0u;
        goto label_26d6b0;
    }
    ctx->pc = 0x26D6A8u;
    {
        const bool branch_taken_0x26d6a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6A8u;
        // 0x26d6ac: 0x26430230  addiu       $v1, $s2, 0x230 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6a8) {
            ctx->pc = 0x26D6BCu;
            goto label_26d6bc;
        }
    }
    ctx->pc = 0x26D6B0u;
label_26d6b0:
    // 0x26d6b0: 0xc0f7676  jal         func_3DD9D8
label_26d6b4:
    if (ctx->pc == 0x26D6B4u) {
        ctx->pc = 0x26D6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D6B0u;
        // 0x26d6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D6B8u;
        goto label_26d6b8;
    }
    ctx->pc = 0x26D6B0u;
    SET_GPR_U32(ctx, 31, 0x26D6B8u);
    ctx->pc = 0x26D6B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D6B0u;
    // 0x26d6b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26D6B0u, 0x26D6B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D6B8u;
label_26d6b8:
    // 0x26d6b8: 0x26430230  addiu       $v1, $s2, 0x230
    ctx->pc = 0x26d6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 560));
label_26d6bc:
    // 0x26d6bc: 0x26420220  addiu       $v0, $s2, 0x220
    ctx->pc = 0x26d6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_26d6c0:
    // 0x26d6c0: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x26d6c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_26d6c4:
    // 0x26d6c4: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x26d6c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_26d6c8:
    // 0x26d6c8: 0x4bc2086c  vsub.xyz    $vf1, $vf1, $vf2
    ctx->pc = 0x26d6c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26d6cc:
    // 0x26d6cc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26d6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_26d6d0:
    // 0x26d6d0: 0xc7a20010  lwc1        $f2, 0x10($sp)
    ctx->pc = 0x26d6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d6d4:
    // 0x26d6d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x26d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26d6d8:
    // 0x26d6d8: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x26d6d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d6dc:
    // 0x26d6dc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x26d6dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d6e0:
    // 0x26d6e0: 0xe7a20000  swc1        $f2, 0x0($sp)
    ctx->pc = 0x26d6e0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_26d6e4:
    // 0x26d6e4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x26d6e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_26d6e8:
    // 0x26d6e8: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x26d6e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_26d6ec:
    // 0x26d6ec: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x26d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_26d6f0:
    // 0x26d6f0: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26d6f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_26d6f4:
    // 0x26d6f4: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x26d6f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26d6f8:
    // 0x26d6f8: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x26d6f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26d6fc:
    // 0x26d6fc: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x26d6fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26d700:
    // 0x26d700: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x26d700u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_26d704:
    // 0x26d704: 0x4a0003bf  vwaitq
    ctx->pc = 0x26d704u;
    // VWAITQ (Q already resolved in this runtime)
label_26d708:
    // 0x26d708: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x26d708u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26d70c:
    // 0x26d70c: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x26d70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
label_26d710:
    // 0x26d710: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x26d710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
label_26d714:
    // 0x26d714: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26d714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26d718:
    // 0x26d718: 0xc4610060  lwc1        $f1, 0x60($v1)
    ctx->pc = 0x26d718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d71c:
    // 0x26d71c: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x26d71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
label_26d720:
    // 0x26d720: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x26d720u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_26d724:
    // 0x26d724: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x26d724u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d728:
    // 0x26d728: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x26d728u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_26d72c:
    // 0x26d72c: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x26d72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_26d730:
    // 0x26d730: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x26d730u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_26d734:
    // 0x26d734: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x26d734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_26d738:
    // 0x26d738: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x26d738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_26d73c:
    // 0x26d73c: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x26d73cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
label_26d740:
    // 0x26d740: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x26d740u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
label_26d744:
    // 0x26d744: 0x4be108aa  vmul.xyzw   $vf2, $vf1, $vf1
    ctx->pc = 0x26d744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26d748:
    // 0x26d748: 0x4b021081  vaddy.x     $vf2, $vf2, $vf2y
    ctx->pc = 0x26d748u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26d74c:
    // 0x26d74c: 0x4b021082  vaddz.x     $vf2, $vf2, $vf2z
    ctx->pc = 0x26d74cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_26d750:
    // 0x26d750: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x26d750u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
label_26d754:
    // 0x26d754: 0x4a0003bf  vwaitq
    ctx->pc = 0x26d754u;
    // VWAITQ (Q already resolved in this runtime)
label_26d758:
    // 0x26d758: 0x4be0085c  vmulq.xyzw  $vf1, $vf1, $Q
    ctx->pc = 0x26d758u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_26d75c:
    // 0x26d75c: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x26d75cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_26d760:
    // 0x26d760: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x26d760u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d764:
    // 0x26d764: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x26d764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26d768:
    // 0x26d768: 0x4603101a  mula.s      $f2, $f3
    ctx->pc = 0x26d768u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_26d76c:
    // 0x26d76c: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x26d76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d770:
    // 0x26d770: 0xc4830004  lwc1        $f3, 0x4($a0)
    ctx->pc = 0x26d770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26d774:
    // 0x26d774: 0x4603101e  madda.s     $f2, $f3
    ctx->pc = 0x26d774u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3])));
label_26d778:
    // 0x26d778: 0xc7a20008  lwc1        $f2, 0x8($sp)
    ctx->pc = 0x26d778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d77c:
    // 0x26d77c: 0xc4830008  lwc1        $f3, 0x8($a0)
    ctx->pc = 0x26d77cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_26d780:
    // 0x26d780: 0x4603101c  madd.s      $f0, $f2, $f3
    ctx->pc = 0x26d780u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[2], ctx->f[3]));
label_26d784:
    // 0x26d784: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x26d784u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
label_26d788:
    // 0x26d788: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x26d788u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_26d78c:
    // 0x26d78c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26d78cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26d790:
    // 0x26d790: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d790u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d794:
    // 0x26d794: 0x0  nop
    ctx->pc = 0x26d794u;
    // NOP
label_26d798:
    // 0x26d798: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26d798u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d79c:
    // 0x26d79c: 0x0  nop
    ctx->pc = 0x26d79cu;
    // NOP
label_26d7a0:
    // 0x26d7a0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_26d7a4:
    if (ctx->pc == 0x26D7A4u) {
        ctx->pc = 0x26D7A8u;
        goto label_26d7a8;
    }
    ctx->pc = 0x26D7A0u;
    {
        const bool branch_taken_0x26d7a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26d7a0) {
            ctx->pc = 0x26D7B8u;
            goto label_26d7b8;
        }
    }
    ctx->pc = 0x26D7A8u;
label_26d7a8:
    // 0x26d7a8: 0xc09275c  jal         func_249D70
label_26d7ac:
    if (ctx->pc == 0x26D7ACu) {
        ctx->pc = 0x26D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7A8u;
        // 0x26d7ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7B0u;
        goto label_26d7b0;
    }
    ctx->pc = 0x26D7A8u;
    SET_GPR_U32(ctx, 31, 0x26D7B0u);
    ctx->pc = 0x26D7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7A8u;
    // 0x26d7ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D70u, 0x26D7A8u, 0x26D7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7B0u;
label_26d7b0:
    // 0x26d7b0: 0x10000004  b           . + 4 + (0x4 << 2)
label_26d7b4:
    if (ctx->pc == 0x26D7B4u) {
        ctx->pc = 0x26D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7B0u;
        // 0x26d7b4: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7B8u;
        goto label_26d7b8;
    }
    ctx->pc = 0x26D7B0u;
    {
        const bool branch_taken_0x26d7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7B0u;
        // 0x26d7b4: 0x8e430268  lw          $v1, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7b0) {
            ctx->pc = 0x26D7C4u;
            goto label_26d7c4;
        }
    }
    ctx->pc = 0x26D7B8u;
label_26d7b8:
    // 0x26d7b8: 0xc09275c  jal         func_249D70
label_26d7bc:
    if (ctx->pc == 0x26D7BCu) {
        ctx->pc = 0x26D7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7B8u;
        // 0x26d7bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7C0u;
        goto label_26d7c0;
    }
    ctx->pc = 0x26D7B8u;
    SET_GPR_U32(ctx, 31, 0x26D7C0u);
    ctx->pc = 0x26D7BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D7B8u;
    // 0x26d7bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D70u, 0x26D7B8u, 0x26D7C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7C0u;
label_26d7c0:
    // 0x26d7c0: 0x8e430268  lw          $v1, 0x268($s2)
    ctx->pc = 0x26d7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_26d7c4:
    // 0x26d7c4: 0x0  nop
    ctx->pc = 0x26d7c4u;
    // NOP
label_26d7c8:
    // 0x26d7c8: 0x10000019  b           . + 4 + (0x19 << 2)
label_26d7cc:
    if (ctx->pc == 0x26D7CCu) {
        ctx->pc = 0x26D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7C8u;
        // 0x26d7cc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7D0u;
        goto label_26d7d0;
    }
    ctx->pc = 0x26D7C8u;
    {
        const bool branch_taken_0x26d7c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7C8u;
        // 0x26d7cc: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7c8) {
            ctx->pc = 0x26D830u;
            goto label_26d830;
        }
    }
    ctx->pc = 0x26D7D0u;
label_26d7d0:
    // 0x26d7d0: 0x1000000a  b           . + 4 + (0xA << 2)
label_26d7d4:
    if (ctx->pc == 0x26D7D4u) {
        ctx->pc = 0x26D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7D0u;
        // 0x26d7d4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7D8u;
        goto label_26d7d8;
    }
    ctx->pc = 0x26D7D0u;
    {
        const bool branch_taken_0x26d7d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D7D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7D0u;
        // 0x26d7d4: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d7d0) {
            ctx->pc = 0x26D7FCu;
            goto label_26d7fc;
        }
    }
    ctx->pc = 0x26D7D8u;
label_26d7d8:
    // 0x26d7d8: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
label_26d7dc:
    if (ctx->pc == 0x26D7DCu) {
        ctx->pc = 0x26D7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7D8u;
        // 0x26d7dc: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7E0u;
        goto label_26d7e0;
    }
    ctx->pc = 0x26D7D8u;
    {
        const bool branch_taken_0x26d7d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26d7d8) {
            ctx->pc = 0x26D7DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D7D8u;
            // 0x26d7dc: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D7ECu;
            goto label_26d7ec;
        }
    }
    ctx->pc = 0x26D7E0u;
label_26d7e0:
    // 0x26d7e0: 0xc0f6e9c  jal         func_3DBA70
label_26d7e4:
    if (ctx->pc == 0x26D7E4u) {
        ctx->pc = 0x26D7E8u;
        goto label_26d7e8;
    }
    ctx->pc = 0x26D7E0u;
    SET_GPR_U32(ctx, 31, 0x26D7E8u);
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x26D7E0u, 0x26D7E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D7E8u;
label_26d7e8:
    // 0x26d7e8: 0x8e43026c  lw          $v1, 0x26C($s2)
    ctx->pc = 0x26d7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_26d7ec:
    // 0x26d7ec: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26d7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_26d7f0:
    // 0x26d7f0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26d7f4:
    if (ctx->pc == 0x26D7F4u) {
        ctx->pc = 0x26D7F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D7F0u;
        // 0x26d7f4: 0x8e44026c  lw          $a0, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D7F8u;
        goto label_26d7f8;
    }
    ctx->pc = 0x26D7F0u;
    {
        const bool branch_taken_0x26d7f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d7f0) {
            ctx->pc = 0x26D7F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D7F0u;
            // 0x26d7f4: 0x8e44026c  lw          $a0, 0x26C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D804u;
            goto label_26d804;
        }
    }
    ctx->pc = 0x26D7F8u;
label_26d7f8:
    // 0x26d7f8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26d7fc:
    // 0x26d7fc: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26d7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_26d800:
    // 0x26d800: 0x8e44026c  lw          $a0, 0x26C($s2)
    ctx->pc = 0x26d800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_26d804:
    // 0x26d804: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x26d804u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_26d808:
    // 0x26d808: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_26d80c:
    if (ctx->pc == 0x26D80Cu) {
        ctx->pc = 0x26D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D808u;
        // 0x26d80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D810u;
        goto label_26d810;
    }
    ctx->pc = 0x26D808u;
    {
        const bool branch_taken_0x26d808 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D808u;
        // 0x26d80c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d808) {
            ctx->pc = 0x26D814u;
            goto label_26d814;
        }
    }
    ctx->pc = 0x26D810u;
label_26d810:
    // 0x26d810: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26d810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_26d814:
    // 0x26d814: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_26d818:
    if (ctx->pc == 0x26D818u) {
        ctx->pc = 0x26D81Cu;
        goto label_26d81c;
    }
    ctx->pc = 0x26D814u;
    {
        const bool branch_taken_0x26d814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d814) {
            ctx->pc = 0x26D7D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d7d8;
        }
    }
    ctx->pc = 0x26D81Cu;
label_26d81c:
    // 0x26d81c: 0x8e430268  lw          $v1, 0x268($s2)
    ctx->pc = 0x26d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_26d820:
    // 0x26d820: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26d820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_26d824:
    // 0x26d824: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26d828:
    if (ctx->pc == 0x26D828u) {
        ctx->pc = 0x26D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D824u;
        // 0x26d828: 0x8e420268  lw          $v0, 0x268($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D82Cu;
        goto label_26d82c;
    }
    ctx->pc = 0x26D824u;
    {
        const bool branch_taken_0x26d824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d824) {
            ctx->pc = 0x26D828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D824u;
            // 0x26d828: 0x8e420268  lw          $v0, 0x268($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D838u;
            goto label_26d838;
        }
    }
    ctx->pc = 0x26D82Cu;
label_26d82c:
    // 0x26d82c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26d830:
    // 0x26d830: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26d830u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_26d834:
    // 0x26d834: 0x8e420268  lw          $v0, 0x268($s2)
    ctx->pc = 0x26d834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_26d838:
    // 0x26d838: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26d838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_26d83c:
    // 0x26d83c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26d840:
    if (ctx->pc == 0x26D840u) {
        ctx->pc = 0x26D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D83Cu;
        // 0x26d840: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D844u;
        goto label_26d844;
    }
    ctx->pc = 0x26D83Cu;
    {
        const bool branch_taken_0x26d83c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D83Cu;
        // 0x26d840: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d83c) {
            ctx->pc = 0x26D848u;
            goto label_26d848;
        }
    }
    ctx->pc = 0x26D844u;
label_26d844:
    // 0x26d844: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26d844u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26d848:
    // 0x26d848: 0x1600ffe1  bnez        $s0, . + 4 + (-0x1F << 2)
label_26d84c:
    if (ctx->pc == 0x26D84Cu) {
        ctx->pc = 0x26D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D848u;
        // 0x26d84c: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D850u;
        goto label_26d850;
    }
    ctx->pc = 0x26D848u;
    {
        const bool branch_taken_0x26d848 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D848u;
        // 0x26d84c: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d848) {
            ctx->pc = 0x26D7D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d7d0;
        }
    }
    ctx->pc = 0x26D850u;
label_26d850:
    // 0x26d850: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x26d850u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26d854:
    // 0x26d854: 0x10000018  b           . + 4 + (0x18 << 2)
label_26d858:
    if (ctx->pc == 0x26D858u) {
        ctx->pc = 0x26D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D854u;
        // 0x26d858: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D85Cu;
        goto label_26d85c;
    }
    ctx->pc = 0x26D854u;
    {
        const bool branch_taken_0x26d854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D854u;
        // 0x26d858: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d854) {
            ctx->pc = 0x26D8B8u;
            goto label_26d8b8;
        }
    }
    ctx->pc = 0x26D85Cu;
label_26d85c:
    // 0x26d85c: 0x0  nop
    ctx->pc = 0x26d85cu;
    // NOP
label_26d860:
    // 0x26d860: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_26d864:
    if (ctx->pc == 0x26D864u) {
        ctx->pc = 0x26D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D860u;
        // 0x26d864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D868u;
        goto label_26d868;
    }
    ctx->pc = 0x26D860u;
    {
        const bool branch_taken_0x26d860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D860u;
        // 0x26d864: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d860) {
            ctx->pc = 0x26D888u;
            goto label_26d888;
        }
    }
    ctx->pc = 0x26D868u;
label_26d868:
    // 0x26d868: 0x90420032  lbu         $v0, 0x32($v0)
    ctx->pc = 0x26d868u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 50)));
label_26d86c:
    // 0x26d86c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_26d870:
    if (ctx->pc == 0x26D870u) {
        ctx->pc = 0x26D874u;
        goto label_26d874;
    }
    ctx->pc = 0x26D86Cu;
    {
        const bool branch_taken_0x26d86c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d86c) {
            ctx->pc = 0x26D888u;
            goto label_26d888;
        }
    }
    ctx->pc = 0x26D874u;
label_26d874:
    // 0x26d874: 0x8e440268  lw          $a0, 0x268($s2)
    ctx->pc = 0x26d874u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 616)));
label_26d878:
    // 0x26d878: 0xc0f7676  jal         func_3DD9D8
label_26d87c:
    if (ctx->pc == 0x26D87Cu) {
        ctx->pc = 0x26D87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D878u;
        // 0x26d87c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D880u;
        goto label_26d880;
    }
    ctx->pc = 0x26D878u;
    SET_GPR_U32(ctx, 31, 0x26D880u);
    ctx->pc = 0x26D87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D878u;
    // 0x26d87c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DD9D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DD9D8u, 0x26D878u, 0x26D880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D880u;
label_26d880:
    // 0x26d880: 0x10000009  b           . + 4 + (0x9 << 2)
label_26d884:
    if (ctx->pc == 0x26D884u) {
        ctx->pc = 0x26D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D880u;
        // 0x26d884: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D888u;
        goto label_26d888;
    }
    ctx->pc = 0x26D880u;
    {
        const bool branch_taken_0x26d880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D880u;
        // 0x26d884: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d880) {
            ctx->pc = 0x26D8A8u;
            goto label_26d8a8;
        }
    }
    ctx->pc = 0x26D888u;
label_26d888:
    // 0x26d888: 0xc0cda74  jal         func_3369D0
label_26d88c:
    if (ctx->pc == 0x26D88Cu) {
        ctx->pc = 0x26D88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D888u;
        // 0x26d88c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D890u;
        goto label_26d890;
    }
    ctx->pc = 0x26D888u;
    SET_GPR_U32(ctx, 31, 0x26D890u);
    ctx->pc = 0x26D88Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D888u;
    // 0x26d88c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3369D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3369D0u, 0x26D888u, 0x26D890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D890u;
label_26d890:
    // 0x26d890: 0x8e430254  lw          $v1, 0x254($s2)
    ctx->pc = 0x26d890u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 596)));
label_26d894:
    // 0x26d894: 0x54710004  bnel        $v1, $s1, . + 4 + (0x4 << 2)
label_26d898:
    if (ctx->pc == 0x26D898u) {
        ctx->pc = 0x26D898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D894u;
        // 0x26d898: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D89Cu;
        goto label_26d89c;
    }
    ctx->pc = 0x26D894u;
    {
        const bool branch_taken_0x26d894 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        if (branch_taken_0x26d894) {
            ctx->pc = 0x26D898u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D894u;
            // 0x26d898: 0x8e43026c  lw          $v1, 0x26C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D8A8u;
            goto label_26d8a8;
        }
    }
    ctx->pc = 0x26D89Cu;
label_26d89c:
    // 0x26d89c: 0xc09275c  jal         func_249D70
label_26d8a0:
    if (ctx->pc == 0x26D8A0u) {
        ctx->pc = 0x26D8A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D89Cu;
        // 0x26d8a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8A4u;
        goto label_26d8a4;
    }
    ctx->pc = 0x26D89Cu;
    SET_GPR_U32(ctx, 31, 0x26D8A4u);
    ctx->pc = 0x26D8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D89Cu;
    // 0x26d8a0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x249D70u, 0x26D89Cu, 0x26D8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D8A4u;
label_26d8a4:
    // 0x26d8a4: 0x8e43026c  lw          $v1, 0x26C($s2)
    ctx->pc = 0x26d8a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_26d8a8:
    // 0x26d8a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x26d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_26d8ac:
    // 0x26d8ac: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_26d8b0:
    if (ctx->pc == 0x26D8B0u) {
        ctx->pc = 0x26D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8ACu;
        // 0x26d8b0: 0x8e42026c  lw          $v0, 0x26C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8B4u;
        goto label_26d8b4;
    }
    ctx->pc = 0x26D8ACu;
    {
        const bool branch_taken_0x26d8ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d8ac) {
            ctx->pc = 0x26D8B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D8ACu;
            // 0x26d8b0: 0x8e42026c  lw          $v0, 0x26C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D8C0u;
            goto label_26d8c0;
        }
    }
    ctx->pc = 0x26D8B4u;
label_26d8b4:
    // 0x26d8b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x26d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_26d8b8:
    // 0x26d8b8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x26d8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_26d8bc:
    // 0x26d8bc: 0x8e42026c  lw          $v0, 0x26C($s2)
    ctx->pc = 0x26d8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 620)));
label_26d8c0:
    // 0x26d8c0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x26d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_26d8c4:
    // 0x26d8c4: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_26d8c8:
    if (ctx->pc == 0x26D8C8u) {
        ctx->pc = 0x26D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8C4u;
        // 0x26d8c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8CCu;
        goto label_26d8cc;
    }
    ctx->pc = 0x26D8C4u;
    {
        const bool branch_taken_0x26d8c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8C4u;
        // 0x26d8c8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8c4) {
            ctx->pc = 0x26D8D0u;
            goto label_26d8d0;
        }
    }
    ctx->pc = 0x26D8CCu;
label_26d8cc:
    // 0x26d8cc: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x26d8ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26d8d0:
    // 0x26d8d0: 0x5600ffe3  bnel        $s0, $zero, . + 4 + (-0x1D << 2)
label_26d8d4:
    if (ctx->pc == 0x26D8D4u) {
        ctx->pc = 0x26D8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8D0u;
        // 0x26d8d4: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8D8u;
        goto label_26d8d8;
    }
    ctx->pc = 0x26D8D0u;
    {
        const bool branch_taken_0x26d8d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x26d8d0) {
            ctx->pc = 0x26D8D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26D8D0u;
            // 0x26d8d4: 0x8e0200c4  lw          $v0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26D860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26d860;
        }
    }
    ctx->pc = 0x26D8D8u;
label_26d8d8:
    // 0x26d8d8: 0x8e430278  lw          $v1, 0x278($s2)
    ctx->pc = 0x26d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 632)));
label_26d8dc:
    // 0x26d8dc: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
label_26d8e0:
    if (ctx->pc == 0x26D8E0u) {
        ctx->pc = 0x26D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8DCu;
        // 0x26d8e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8E4u;
        goto label_26d8e4;
    }
    ctx->pc = 0x26D8DCu;
    {
        const bool branch_taken_0x26d8dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D8E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8DCu;
        // 0x26d8e0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8dc) {
            ctx->pc = 0x26DA30u;
            goto label_26da30;
        }
    }
    ctx->pc = 0x26D8E4u;
label_26d8e4:
    // 0x26d8e4: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
label_26d8e8:
    if (ctx->pc == 0x26D8E8u) {
        ctx->pc = 0x26D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8E4u;
        // 0x26d8e8: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8ECu;
        goto label_26d8ec;
    }
    ctx->pc = 0x26D8E4u;
    {
        const bool branch_taken_0x26d8e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8E4u;
        // 0x26d8e8: 0x3c030400  lui         $v1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1024 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8e4) {
            ctx->pc = 0x26D9E8u;
            goto label_26d9e8;
        }
    }
    ctx->pc = 0x26D8ECu;
label_26d8ec:
    // 0x26d8ec: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_26d8f0:
    // 0x26d8f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26d8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26d8f4:
    // 0x26d8f4: 0x1443003c  bne         $v0, $v1, . + 4 + (0x3C << 2)
label_26d8f8:
    if (ctx->pc == 0x26D8F8u) {
        ctx->pc = 0x26D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8F4u;
        // 0x26d8f8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D8FCu;
        goto label_26d8fc;
    }
    ctx->pc = 0x26D8F4u;
    {
        const bool branch_taken_0x26d8f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26D8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D8F4u;
        // 0x26d8f8: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d8f4) {
            ctx->pc = 0x26D9E8u;
            goto label_26d9e8;
        }
    }
    ctx->pc = 0x26D8FCu;
label_26d8fc:
    // 0x26d8fc: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x26d8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
label_26d900:
    // 0x26d900: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_26d904:
    if (ctx->pc == 0x26D904u) {
        ctx->pc = 0x26D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D900u;
        // 0x26d904: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D908u;
        goto label_26d908;
    }
    ctx->pc = 0x26D900u;
    {
        const bool branch_taken_0x26d900 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26D904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D900u;
        // 0x26d904: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d900) {
            ctx->pc = 0x26D91Cu;
            goto label_26d91c;
        }
    }
    ctx->pc = 0x26D908u;
label_26d908:
    // 0x26d908: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26d908u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d90c:
    // 0x26d90c: 0x0  nop
    ctx->pc = 0x26d90cu;
    // NOP
label_26d910:
    // 0x26d910: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26d910u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_26d914:
    // 0x26d914: 0x10000007  b           . + 4 + (0x7 << 2)
label_26d918:
    if (ctx->pc == 0x26D918u) {
        ctx->pc = 0x26D91Cu;
        goto label_26d91c;
    }
    ctx->pc = 0x26D914u;
    {
        const bool branch_taken_0x26d914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d914) {
            ctx->pc = 0x26D934u;
            goto label_26d934;
        }
    }
    ctx->pc = 0x26D91Cu;
label_26d91c:
    // 0x26d91c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26d91cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_26d920:
    // 0x26d920: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26d920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_26d924:
    // 0x26d924: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x26d924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d928:
    // 0x26d928: 0x0  nop
    ctx->pc = 0x26d928u;
    // NOP
label_26d92c:
    // 0x26d92c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x26d92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_26d930:
    // 0x26d930: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x26d930u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_26d934:
    // 0x26d934: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x26d934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
label_26d938:
    // 0x26d938: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x26d938u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
label_26d93c:
    // 0x26d93c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d93cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d940:
    // 0x26d940: 0xc642027c  lwc1        $f2, 0x27C($s2)
    ctx->pc = 0x26d940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_26d944:
    // 0x26d944: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x26d944u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_26d948:
    // 0x26d948: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x26d948u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
label_26d94c:
    // 0x26d94c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x26d94cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_26d950:
    // 0x26d950: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x26d950u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_26d954:
    // 0x26d954: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x26d954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
label_26d958:
    // 0x26d958: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d958u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d95c:
    // 0x26d95c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26d95cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_26d960:
    // 0x26d960: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x26d960u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_26d964:
    // 0x26d964: 0x0  nop
    ctx->pc = 0x26d964u;
    // NOP
label_26d968:
    // 0x26d968: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_26d96c:
    if (ctx->pc == 0x26D96Cu) {
        ctx->pc = 0x26D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D968u;
        // 0x26d96c: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D970u;
        goto label_26d970;
    }
    ctx->pc = 0x26D968u;
    {
        const bool branch_taken_0x26d968 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x26D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D968u;
        // 0x26d96c: 0x46010082  mul.s       $f2, $f0, $f1 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d968) {
            ctx->pc = 0x26D9C0u;
            goto label_26d9c0;
        }
    }
    ctx->pc = 0x26D970u;
label_26d970:
    // 0x26d970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d974:
    // 0x26d974: 0xc0cda26  jal         func_336898
label_26d978:
    if (ctx->pc == 0x26D978u) {
        ctx->pc = 0x26D978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D974u;
        // 0x26d978: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D97Cu;
        goto label_26d97c;
    }
    ctx->pc = 0x26D974u;
    SET_GPR_U32(ctx, 31, 0x26D97Cu);
    ctx->pc = 0x26D978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D974u;
    // 0x26d978: 0x2405000d  addiu       $a1, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x26D974u, 0x26D97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D97Cu;
label_26d97c:
    // 0x26d97c: 0x8e430218  lw          $v1, 0x218($s2)
    ctx->pc = 0x26d97cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
label_26d980:
    // 0x26d980: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26d980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26d984:
    // 0x26d984: 0x8c620060  lw          $v0, 0x60($v1)
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
label_26d988:
    // 0x26d988: 0x40f809  jalr        $v0
label_26d98c:
    if (ctx->pc == 0x26D98Cu) {
        ctx->pc = 0x26D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D988u;
        // 0x26d98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D990u;
        goto label_26d990;
    }
    ctx->pc = 0x26D988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26D990u);
        ctx->pc = 0x26D98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D988u;
        // 0x26d98c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D988u, 0x26D990u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x26D990u;
label_26d990:
    // 0x26d990: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x26d990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_26d994:
    // 0x26d994: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26d994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_26d998:
    // 0x26d998: 0x24844ec0  addiu       $a0, $a0, 0x4EC0
    ctx->pc = 0x26d998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
label_26d99c:
    // 0x26d99c: 0x24a57bd0  addiu       $a1, $a1, 0x7BD0
    ctx->pc = 0x26d99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31696));
label_26d9a0:
    // 0x26d9a0: 0xc0aebd6  jal         func_2BAF58
label_26d9a4:
    if (ctx->pc == 0x26D9A4u) {
        ctx->pc = 0x26D9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9A0u;
        // 0x26d9a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9A8u;
        goto label_26d9a8;
    }
    ctx->pc = 0x26D9A0u;
    SET_GPR_U32(ctx, 31, 0x26D9A8u);
    ctx->pc = 0x26D9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9A0u;
    // 0x26d9a4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAF58u, 0x26D9A0u, 0x26D9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9A8u;
label_26d9a8:
    // 0x26d9a8: 0xc0b6a72  jal         func_2DA9C8
label_26d9ac:
    if (ctx->pc == 0x26D9ACu) {
        ctx->pc = 0x26D9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9A8u;
        // 0x26d9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9B0u;
        goto label_26d9b0;
    }
    ctx->pc = 0x26D9A8u;
    SET_GPR_U32(ctx, 31, 0x26D9B0u);
    ctx->pc = 0x26D9ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9A8u;
    // 0x26d9ac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DA9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DA9C8u, 0x26D9A8u, 0x26D9B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9B0u;
label_26d9b0:
    // 0x26d9b0: 0xc09b69e  jal         func_26DA78
label_26d9b4:
    if (ctx->pc == 0x26D9B4u) {
        ctx->pc = 0x26D9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9B0u;
        // 0x26d9b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9B8u;
        goto label_26d9b8;
    }
    ctx->pc = 0x26D9B0u;
    SET_GPR_U32(ctx, 31, 0x26D9B8u);
    ctx->pc = 0x26D9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D9B0u;
    // 0x26d9b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26DA78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26DA78u, 0x26D9B0u, 0x26D9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26D9B8u;
label_26d9b8:
    // 0x26d9b8: 0x1000001e  b           . + 4 + (0x1E << 2)
label_26d9bc:
    if (ctx->pc == 0x26D9BCu) {
        ctx->pc = 0x26D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9B8u;
        // 0x26d9bc: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9C0u;
        goto label_26d9c0;
    }
    ctx->pc = 0x26D9B8u;
    {
        const bool branch_taken_0x26d9b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9B8u;
        // 0x26d9bc: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d9b8) {
            ctx->pc = 0x26DA34u;
            goto label_26da34;
        }
    }
    ctx->pc = 0x26D9C0u;
label_26d9c0:
    // 0x26d9c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26d9c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26d9c4:
    // 0x26d9c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d9c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d9c8:
    // 0x26d9c8: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x26d9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_26d9cc:
    // 0x26d9cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26d9ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_26d9d0:
    // 0x26d9d0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x26d9d0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_26d9d4:
    // 0x26d9d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26d9d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_26d9d8:
    // 0x26d9d8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x26d9d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_26d9dc:
    // 0x26d9dc: 0xe6410144  swc1        $f1, 0x144($s2)
    ctx->pc = 0x26d9dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 324), bits); }
label_26d9e0:
    // 0x26d9e0: 0x10000014  b           . + 4 + (0x14 << 2)
label_26d9e4:
    if (ctx->pc == 0x26D9E4u) {
        ctx->pc = 0x26D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9E0u;
        // 0x26d9e4: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26D9E8u;
        goto label_26d9e8;
    }
    ctx->pc = 0x26D9E0u;
    {
        const bool branch_taken_0x26d9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D9E0u;
        // 0x26d9e4: 0xdfb00270  ld          $s0, 0x270($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d9e0) {
            ctx->pc = 0x26DA34u;
            goto label_26da34;
        }
    }
    ctx->pc = 0x26D9E8u;
label_26d9e8:
    // 0x26d9e8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26d9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26d9ec:
    // 0x26d9ec: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26d9ecu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26d9f0:
    // 0x26d9f0: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x26d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
label_26d9f4:
    // 0x26d9f4: 0xc44c2b30  lwc1        $f12, 0x2B30($v0)
    ctx->pc = 0x26d9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_26d9f8:
    // 0x26d9f8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x26d9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26d9fc:
    // 0x26d9fc: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x26d9fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_26da00:
    // 0x26da00: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x26da00u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_26da04:
    // 0x26da04: 0x3c014265  lui         $at, 0x4265
    ctx->pc = 0x26da04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16997 << 16));
label_26da08:
    // 0x26da08: 0x34212ee0  ori         $at, $at, 0x2EE0
    ctx->pc = 0x26da08u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)12000);
label_26da0c:
    // 0x26da0c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26da0cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_26da10:
    // 0x26da10: 0x8e420104  lw          $v0, 0x104($s2)
    ctx->pc = 0x26da10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
label_26da14:
    // 0x26da14: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26da14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_26da18:
    // 0x26da18: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x26da18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_26da1c:
    // 0x26da1c: 0x46006302  mul.s       $f12, $f12, $f0
    ctx->pc = 0x26da1cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
label_26da20:
    // 0x26da20: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x26da20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_26da24:
    // 0x26da24: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26da24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26da28:
    // 0x26da28: 0xc0b15d0  jal         func_2C5740
label_26da2c:
    if (ctx->pc == 0x26DA2Cu) {
        ctx->pc = 0x26DA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA28u;
        // 0x26da2c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA30u;
        goto label_26da30;
    }
    ctx->pc = 0x26DA28u;
    SET_GPR_U32(ctx, 31, 0x26DA30u);
    ctx->pc = 0x26DA2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26DA28u;
    // 0x26da2c: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C5740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C5740u, 0x26DA28u, 0x26DA30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26DA30u;
label_26da30:
    // 0x26da30: 0xdfb00270  ld          $s0, 0x270($sp)
    ctx->pc = 0x26da30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_26da34:
    // 0x26da34: 0xdfb10278  ld          $s1, 0x278($sp)
    ctx->pc = 0x26da34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_26da38:
    // 0x26da38: 0xdfb20280  ld          $s2, 0x280($sp)
    ctx->pc = 0x26da38u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_26da3c:
    // 0x26da3c: 0xdfb30288  ld          $s3, 0x288($sp)
    ctx->pc = 0x26da3cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_26da40:
    // 0x26da40: 0xdfb40290  ld          $s4, 0x290($sp)
    ctx->pc = 0x26da40u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 656)));
label_26da44:
    // 0x26da44: 0xdfb50298  ld          $s5, 0x298($sp)
    ctx->pc = 0x26da44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 664)));
label_26da48:
    // 0x26da48: 0xdfb602a0  ld          $s6, 0x2A0($sp)
    ctx->pc = 0x26da48u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 672)));
label_26da4c:
    // 0x26da4c: 0xdfb702a8  ld          $s7, 0x2A8($sp)
    ctx->pc = 0x26da4cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 680)));
label_26da50:
    // 0x26da50: 0xdfbe02b0  ld          $fp, 0x2B0($sp)
    ctx->pc = 0x26da50u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 688)));
label_26da54:
    // 0x26da54: 0xdfbf02b8  ld          $ra, 0x2B8($sp)
    ctx->pc = 0x26da54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 696)));
label_26da58:
    // 0x26da58: 0xc7b802e0  lwc1        $f24, 0x2E0($sp)
    ctx->pc = 0x26da58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_26da5c:
    // 0x26da5c: 0xc7b702d8  lwc1        $f23, 0x2D8($sp)
    ctx->pc = 0x26da5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_26da60:
    // 0x26da60: 0xc7b602d0  lwc1        $f22, 0x2D0($sp)
    ctx->pc = 0x26da60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_26da64:
    // 0x26da64: 0xc7b502c8  lwc1        $f21, 0x2C8($sp)
    ctx->pc = 0x26da64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_26da68:
    // 0x26da68: 0xc7b402c0  lwc1        $f20, 0x2C0($sp)
    ctx->pc = 0x26da68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_26da6c:
    // 0x26da6c: 0x3e00008  jr          $ra
label_26da70:
    if (ctx->pc == 0x26DA70u) {
        ctx->pc = 0x26DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA6Cu;
        // 0x26da70: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26DA74u;
        goto label_26da74;
    }
    ctx->pc = 0x26DA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26DA6Cu;
        // 0x26da70: 0x27bd02f0  addiu       $sp, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26DA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26DA74u;
label_26da74:
    // 0x26da74: 0x0  nop
    ctx->pc = 0x26da74u;
    // NOP
    ctx->pc = 0x26da78u;
}
