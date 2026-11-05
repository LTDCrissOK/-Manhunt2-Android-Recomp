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

// Function: sub_00262680
// Address: 0x262680 - 0x262c50
void sub_00262680_0x262680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262680_0x262680");
#endif

    switch (ctx->pc) {
        case 0x262680u: goto label_262680;
        case 0x262684u: goto label_262684;
        case 0x262688u: goto label_262688;
        case 0x26268cu: goto label_26268c;
        case 0x262690u: goto label_262690;
        case 0x262694u: goto label_262694;
        case 0x262698u: goto label_262698;
        case 0x26269cu: goto label_26269c;
        case 0x2626a0u: goto label_2626a0;
        case 0x2626a4u: goto label_2626a4;
        case 0x2626a8u: goto label_2626a8;
        case 0x2626acu: goto label_2626ac;
        case 0x2626b0u: goto label_2626b0;
        case 0x2626b4u: goto label_2626b4;
        case 0x2626b8u: goto label_2626b8;
        case 0x2626bcu: goto label_2626bc;
        case 0x2626c0u: goto label_2626c0;
        case 0x2626c4u: goto label_2626c4;
        case 0x2626c8u: goto label_2626c8;
        case 0x2626ccu: goto label_2626cc;
        case 0x2626d0u: goto label_2626d0;
        case 0x2626d4u: goto label_2626d4;
        case 0x2626d8u: goto label_2626d8;
        case 0x2626dcu: goto label_2626dc;
        case 0x2626e0u: goto label_2626e0;
        case 0x2626e4u: goto label_2626e4;
        case 0x2626e8u: goto label_2626e8;
        case 0x2626ecu: goto label_2626ec;
        case 0x2626f0u: goto label_2626f0;
        case 0x2626f4u: goto label_2626f4;
        case 0x2626f8u: goto label_2626f8;
        case 0x2626fcu: goto label_2626fc;
        case 0x262700u: goto label_262700;
        case 0x262704u: goto label_262704;
        case 0x262708u: goto label_262708;
        case 0x26270cu: goto label_26270c;
        case 0x262710u: goto label_262710;
        case 0x262714u: goto label_262714;
        case 0x262718u: goto label_262718;
        case 0x26271cu: goto label_26271c;
        case 0x262720u: goto label_262720;
        case 0x262724u: goto label_262724;
        case 0x262728u: goto label_262728;
        case 0x26272cu: goto label_26272c;
        case 0x262730u: goto label_262730;
        case 0x262734u: goto label_262734;
        case 0x262738u: goto label_262738;
        case 0x26273cu: goto label_26273c;
        case 0x262740u: goto label_262740;
        case 0x262744u: goto label_262744;
        case 0x262748u: goto label_262748;
        case 0x26274cu: goto label_26274c;
        case 0x262750u: goto label_262750;
        case 0x262754u: goto label_262754;
        case 0x262758u: goto label_262758;
        case 0x26275cu: goto label_26275c;
        case 0x262760u: goto label_262760;
        case 0x262764u: goto label_262764;
        case 0x262768u: goto label_262768;
        case 0x26276cu: goto label_26276c;
        case 0x262770u: goto label_262770;
        case 0x262774u: goto label_262774;
        case 0x262778u: goto label_262778;
        case 0x26277cu: goto label_26277c;
        case 0x262780u: goto label_262780;
        case 0x262784u: goto label_262784;
        case 0x262788u: goto label_262788;
        case 0x26278cu: goto label_26278c;
        case 0x262790u: goto label_262790;
        case 0x262794u: goto label_262794;
        case 0x262798u: goto label_262798;
        case 0x26279cu: goto label_26279c;
        case 0x2627a0u: goto label_2627a0;
        case 0x2627a4u: goto label_2627a4;
        case 0x2627a8u: goto label_2627a8;
        case 0x2627acu: goto label_2627ac;
        case 0x2627b0u: goto label_2627b0;
        case 0x2627b4u: goto label_2627b4;
        case 0x2627b8u: goto label_2627b8;
        case 0x2627bcu: goto label_2627bc;
        case 0x2627c0u: goto label_2627c0;
        case 0x2627c4u: goto label_2627c4;
        case 0x2627c8u: goto label_2627c8;
        case 0x2627ccu: goto label_2627cc;
        case 0x2627d0u: goto label_2627d0;
        case 0x2627d4u: goto label_2627d4;
        case 0x2627d8u: goto label_2627d8;
        case 0x2627dcu: goto label_2627dc;
        case 0x2627e0u: goto label_2627e0;
        case 0x2627e4u: goto label_2627e4;
        case 0x2627e8u: goto label_2627e8;
        case 0x2627ecu: goto label_2627ec;
        case 0x2627f0u: goto label_2627f0;
        case 0x2627f4u: goto label_2627f4;
        case 0x2627f8u: goto label_2627f8;
        case 0x2627fcu: goto label_2627fc;
        case 0x262800u: goto label_262800;
        case 0x262804u: goto label_262804;
        case 0x262808u: goto label_262808;
        case 0x26280cu: goto label_26280c;
        case 0x262810u: goto label_262810;
        case 0x262814u: goto label_262814;
        case 0x262818u: goto label_262818;
        case 0x26281cu: goto label_26281c;
        case 0x262820u: goto label_262820;
        case 0x262824u: goto label_262824;
        case 0x262828u: goto label_262828;
        case 0x26282cu: goto label_26282c;
        case 0x262830u: goto label_262830;
        case 0x262834u: goto label_262834;
        case 0x262838u: goto label_262838;
        case 0x26283cu: goto label_26283c;
        case 0x262840u: goto label_262840;
        case 0x262844u: goto label_262844;
        case 0x262848u: goto label_262848;
        case 0x26284cu: goto label_26284c;
        case 0x262850u: goto label_262850;
        case 0x262854u: goto label_262854;
        case 0x262858u: goto label_262858;
        case 0x26285cu: goto label_26285c;
        case 0x262860u: goto label_262860;
        case 0x262864u: goto label_262864;
        case 0x262868u: goto label_262868;
        case 0x26286cu: goto label_26286c;
        case 0x262870u: goto label_262870;
        case 0x262874u: goto label_262874;
        case 0x262878u: goto label_262878;
        case 0x26287cu: goto label_26287c;
        case 0x262880u: goto label_262880;
        case 0x262884u: goto label_262884;
        case 0x262888u: goto label_262888;
        case 0x26288cu: goto label_26288c;
        case 0x262890u: goto label_262890;
        case 0x262894u: goto label_262894;
        case 0x262898u: goto label_262898;
        case 0x26289cu: goto label_26289c;
        case 0x2628a0u: goto label_2628a0;
        case 0x2628a4u: goto label_2628a4;
        case 0x2628a8u: goto label_2628a8;
        case 0x2628acu: goto label_2628ac;
        case 0x2628b0u: goto label_2628b0;
        case 0x2628b4u: goto label_2628b4;
        case 0x2628b8u: goto label_2628b8;
        case 0x2628bcu: goto label_2628bc;
        case 0x2628c0u: goto label_2628c0;
        case 0x2628c4u: goto label_2628c4;
        case 0x2628c8u: goto label_2628c8;
        case 0x2628ccu: goto label_2628cc;
        case 0x2628d0u: goto label_2628d0;
        case 0x2628d4u: goto label_2628d4;
        case 0x2628d8u: goto label_2628d8;
        case 0x2628dcu: goto label_2628dc;
        case 0x2628e0u: goto label_2628e0;
        case 0x2628e4u: goto label_2628e4;
        case 0x2628e8u: goto label_2628e8;
        case 0x2628ecu: goto label_2628ec;
        case 0x2628f0u: goto label_2628f0;
        case 0x2628f4u: goto label_2628f4;
        case 0x2628f8u: goto label_2628f8;
        case 0x2628fcu: goto label_2628fc;
        case 0x262900u: goto label_262900;
        case 0x262904u: goto label_262904;
        case 0x262908u: goto label_262908;
        case 0x26290cu: goto label_26290c;
        case 0x262910u: goto label_262910;
        case 0x262914u: goto label_262914;
        case 0x262918u: goto label_262918;
        case 0x26291cu: goto label_26291c;
        case 0x262920u: goto label_262920;
        case 0x262924u: goto label_262924;
        case 0x262928u: goto label_262928;
        case 0x26292cu: goto label_26292c;
        case 0x262930u: goto label_262930;
        case 0x262934u: goto label_262934;
        case 0x262938u: goto label_262938;
        case 0x26293cu: goto label_26293c;
        case 0x262940u: goto label_262940;
        case 0x262944u: goto label_262944;
        case 0x262948u: goto label_262948;
        case 0x26294cu: goto label_26294c;
        case 0x262950u: goto label_262950;
        case 0x262954u: goto label_262954;
        case 0x262958u: goto label_262958;
        case 0x26295cu: goto label_26295c;
        case 0x262960u: goto label_262960;
        case 0x262964u: goto label_262964;
        case 0x262968u: goto label_262968;
        case 0x26296cu: goto label_26296c;
        case 0x262970u: goto label_262970;
        case 0x262974u: goto label_262974;
        case 0x262978u: goto label_262978;
        case 0x26297cu: goto label_26297c;
        case 0x262980u: goto label_262980;
        case 0x262984u: goto label_262984;
        case 0x262988u: goto label_262988;
        case 0x26298cu: goto label_26298c;
        case 0x262990u: goto label_262990;
        case 0x262994u: goto label_262994;
        case 0x262998u: goto label_262998;
        case 0x26299cu: goto label_26299c;
        case 0x2629a0u: goto label_2629a0;
        case 0x2629a4u: goto label_2629a4;
        case 0x2629a8u: goto label_2629a8;
        case 0x2629acu: goto label_2629ac;
        case 0x2629b0u: goto label_2629b0;
        case 0x2629b4u: goto label_2629b4;
        case 0x2629b8u: goto label_2629b8;
        case 0x2629bcu: goto label_2629bc;
        case 0x2629c0u: goto label_2629c0;
        case 0x2629c4u: goto label_2629c4;
        case 0x2629c8u: goto label_2629c8;
        case 0x2629ccu: goto label_2629cc;
        case 0x2629d0u: goto label_2629d0;
        case 0x2629d4u: goto label_2629d4;
        case 0x2629d8u: goto label_2629d8;
        case 0x2629dcu: goto label_2629dc;
        case 0x2629e0u: goto label_2629e0;
        case 0x2629e4u: goto label_2629e4;
        case 0x2629e8u: goto label_2629e8;
        case 0x2629ecu: goto label_2629ec;
        case 0x2629f0u: goto label_2629f0;
        case 0x2629f4u: goto label_2629f4;
        case 0x2629f8u: goto label_2629f8;
        case 0x2629fcu: goto label_2629fc;
        case 0x262a00u: goto label_262a00;
        case 0x262a04u: goto label_262a04;
        case 0x262a08u: goto label_262a08;
        case 0x262a0cu: goto label_262a0c;
        case 0x262a10u: goto label_262a10;
        case 0x262a14u: goto label_262a14;
        case 0x262a18u: goto label_262a18;
        case 0x262a1cu: goto label_262a1c;
        case 0x262a20u: goto label_262a20;
        case 0x262a24u: goto label_262a24;
        case 0x262a28u: goto label_262a28;
        case 0x262a2cu: goto label_262a2c;
        case 0x262a30u: goto label_262a30;
        case 0x262a34u: goto label_262a34;
        case 0x262a38u: goto label_262a38;
        case 0x262a3cu: goto label_262a3c;
        case 0x262a40u: goto label_262a40;
        case 0x262a44u: goto label_262a44;
        case 0x262a48u: goto label_262a48;
        case 0x262a4cu: goto label_262a4c;
        case 0x262a50u: goto label_262a50;
        case 0x262a54u: goto label_262a54;
        case 0x262a58u: goto label_262a58;
        case 0x262a5cu: goto label_262a5c;
        case 0x262a60u: goto label_262a60;
        case 0x262a64u: goto label_262a64;
        case 0x262a68u: goto label_262a68;
        case 0x262a6cu: goto label_262a6c;
        case 0x262a70u: goto label_262a70;
        case 0x262a74u: goto label_262a74;
        case 0x262a78u: goto label_262a78;
        case 0x262a7cu: goto label_262a7c;
        case 0x262a80u: goto label_262a80;
        case 0x262a84u: goto label_262a84;
        case 0x262a88u: goto label_262a88;
        case 0x262a8cu: goto label_262a8c;
        case 0x262a90u: goto label_262a90;
        case 0x262a94u: goto label_262a94;
        case 0x262a98u: goto label_262a98;
        case 0x262a9cu: goto label_262a9c;
        case 0x262aa0u: goto label_262aa0;
        case 0x262aa4u: goto label_262aa4;
        case 0x262aa8u: goto label_262aa8;
        case 0x262aacu: goto label_262aac;
        case 0x262ab0u: goto label_262ab0;
        case 0x262ab4u: goto label_262ab4;
        case 0x262ab8u: goto label_262ab8;
        case 0x262abcu: goto label_262abc;
        case 0x262ac0u: goto label_262ac0;
        case 0x262ac4u: goto label_262ac4;
        case 0x262ac8u: goto label_262ac8;
        case 0x262accu: goto label_262acc;
        case 0x262ad0u: goto label_262ad0;
        case 0x262ad4u: goto label_262ad4;
        case 0x262ad8u: goto label_262ad8;
        case 0x262adcu: goto label_262adc;
        case 0x262ae0u: goto label_262ae0;
        case 0x262ae4u: goto label_262ae4;
        case 0x262ae8u: goto label_262ae8;
        case 0x262aecu: goto label_262aec;
        case 0x262af0u: goto label_262af0;
        case 0x262af4u: goto label_262af4;
        case 0x262af8u: goto label_262af8;
        case 0x262afcu: goto label_262afc;
        case 0x262b00u: goto label_262b00;
        case 0x262b04u: goto label_262b04;
        case 0x262b08u: goto label_262b08;
        case 0x262b0cu: goto label_262b0c;
        case 0x262b10u: goto label_262b10;
        case 0x262b14u: goto label_262b14;
        case 0x262b18u: goto label_262b18;
        case 0x262b1cu: goto label_262b1c;
        case 0x262b20u: goto label_262b20;
        case 0x262b24u: goto label_262b24;
        case 0x262b28u: goto label_262b28;
        case 0x262b2cu: goto label_262b2c;
        case 0x262b30u: goto label_262b30;
        case 0x262b34u: goto label_262b34;
        case 0x262b38u: goto label_262b38;
        case 0x262b3cu: goto label_262b3c;
        case 0x262b40u: goto label_262b40;
        case 0x262b44u: goto label_262b44;
        case 0x262b48u: goto label_262b48;
        case 0x262b4cu: goto label_262b4c;
        case 0x262b50u: goto label_262b50;
        case 0x262b54u: goto label_262b54;
        case 0x262b58u: goto label_262b58;
        case 0x262b5cu: goto label_262b5c;
        case 0x262b60u: goto label_262b60;
        case 0x262b64u: goto label_262b64;
        case 0x262b68u: goto label_262b68;
        case 0x262b6cu: goto label_262b6c;
        case 0x262b70u: goto label_262b70;
        case 0x262b74u: goto label_262b74;
        case 0x262b78u: goto label_262b78;
        case 0x262b7cu: goto label_262b7c;
        case 0x262b80u: goto label_262b80;
        case 0x262b84u: goto label_262b84;
        case 0x262b88u: goto label_262b88;
        case 0x262b8cu: goto label_262b8c;
        case 0x262b90u: goto label_262b90;
        case 0x262b94u: goto label_262b94;
        case 0x262b98u: goto label_262b98;
        case 0x262b9cu: goto label_262b9c;
        case 0x262ba0u: goto label_262ba0;
        case 0x262ba4u: goto label_262ba4;
        case 0x262ba8u: goto label_262ba8;
        case 0x262bacu: goto label_262bac;
        case 0x262bb0u: goto label_262bb0;
        case 0x262bb4u: goto label_262bb4;
        case 0x262bb8u: goto label_262bb8;
        case 0x262bbcu: goto label_262bbc;
        case 0x262bc0u: goto label_262bc0;
        case 0x262bc4u: goto label_262bc4;
        case 0x262bc8u: goto label_262bc8;
        case 0x262bccu: goto label_262bcc;
        case 0x262bd0u: goto label_262bd0;
        case 0x262bd4u: goto label_262bd4;
        case 0x262bd8u: goto label_262bd8;
        case 0x262bdcu: goto label_262bdc;
        case 0x262be0u: goto label_262be0;
        case 0x262be4u: goto label_262be4;
        case 0x262be8u: goto label_262be8;
        case 0x262becu: goto label_262bec;
        case 0x262bf0u: goto label_262bf0;
        case 0x262bf4u: goto label_262bf4;
        case 0x262bf8u: goto label_262bf8;
        case 0x262bfcu: goto label_262bfc;
        case 0x262c00u: goto label_262c00;
        case 0x262c04u: goto label_262c04;
        case 0x262c08u: goto label_262c08;
        case 0x262c0cu: goto label_262c0c;
        case 0x262c10u: goto label_262c10;
        case 0x262c14u: goto label_262c14;
        case 0x262c18u: goto label_262c18;
        case 0x262c1cu: goto label_262c1c;
        case 0x262c20u: goto label_262c20;
        case 0x262c24u: goto label_262c24;
        case 0x262c28u: goto label_262c28;
        case 0x262c2cu: goto label_262c2c;
        case 0x262c30u: goto label_262c30;
        case 0x262c34u: goto label_262c34;
        case 0x262c38u: goto label_262c38;
        case 0x262c3cu: goto label_262c3c;
        case 0x262c40u: goto label_262c40;
        case 0x262c44u: goto label_262c44;
        case 0x262c48u: goto label_262c48;
        case 0x262c4cu: goto label_262c4c;
        default: break;
    }

    ctx->pc = 0x262680u;

label_262680:
    // 0x262680: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x262680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_262684:
    // 0x262684: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x262684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_262688:
    // 0x262688: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x262688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_26268c:
    // 0x26268c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26268cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_262690:
    // 0x262690: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x262690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_262694:
    // 0x262694: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x262694u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262698:
    // 0x262698: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x262698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_26269c:
    // 0x26269c: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x26269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2626a0:
    // 0x2626a0: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
label_2626a4:
    if (ctx->pc == 0x2626A4u) {
        ctx->pc = 0x2626A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626A0u;
        // 0x2626a4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626A8u;
        goto label_2626a8;
    }
    ctx->pc = 0x2626A0u;
    {
        const bool branch_taken_0x2626a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2626A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626A0u;
        // 0x2626a4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626a0) {
            ctx->pc = 0x2626ACu;
            goto label_2626ac;
        }
    }
    ctx->pc = 0x2626A8u;
label_2626a8:
    // 0x2626a8: 0xae250290  sw          $a1, 0x290($s1)
    ctx->pc = 0x2626a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 5));
label_2626ac:
    // 0x2626ac: 0x8e300274  lw          $s0, 0x274($s1)
    ctx->pc = 0x2626acu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_2626b0:
    // 0x2626b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2626b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2626b4:
    // 0x2626b4: 0x8e340234  lw          $s4, 0x234($s1)
    ctx->pc = 0x2626b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_2626b8:
    // 0x2626b8: 0xae300280  sw          $s0, 0x280($s1)
    ctx->pc = 0x2626b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 640), GPR_U32(ctx, 16));
label_2626bc:
    // 0x2626bc: 0xc0d8de2  jal         func_363788
label_2626c0:
    if (ctx->pc == 0x2626C0u) {
        ctx->pc = 0x2626C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626BCu;
        // 0x2626c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626C4u;
        goto label_2626c4;
    }
    ctx->pc = 0x2626BCu;
    SET_GPR_U32(ctx, 31, 0x2626C4u);
    ctx->pc = 0x2626C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626BCu;
    // 0x2626c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2626BCu, 0x2626C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626C4u;
label_2626c4:
    // 0x2626c4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_2626c8:
    if (ctx->pc == 0x2626C8u) {
        ctx->pc = 0x2626C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626C4u;
        // 0x2626c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626CCu;
        goto label_2626cc;
    }
    ctx->pc = 0x2626C4u;
    {
        const bool branch_taken_0x2626c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2626c4) {
            ctx->pc = 0x2626C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2626C4u;
            // 0x2626c8: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2626E0u;
            goto label_2626e0;
        }
    }
    ctx->pc = 0x2626CCu;
label_2626cc:
    // 0x2626cc: 0xc0d8de2  jal         func_363788
label_2626d0:
    if (ctx->pc == 0x2626D0u) {
        ctx->pc = 0x2626D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626CCu;
        // 0x2626d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626D4u;
        goto label_2626d4;
    }
    ctx->pc = 0x2626CCu;
    SET_GPR_U32(ctx, 31, 0x2626D4u);
    ctx->pc = 0x2626D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2626CCu;
    // 0x2626d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x2626CCu, 0x2626D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2626D4u;
label_2626d4:
    // 0x2626d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2626d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2626d8:
    // 0x2626d8: 0x50430001  beql        $v0, $v1, . + 4 + (0x1 << 2)
label_2626dc:
    if (ctx->pc == 0x2626DCu) {
        ctx->pc = 0x2626DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626D8u;
        // 0x2626dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626E0u;
        goto label_2626e0;
    }
    ctx->pc = 0x2626D8u;
    {
        const bool branch_taken_0x2626d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2626d8) {
            ctx->pc = 0x2626DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2626D8u;
            // 0x2626dc: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2626E0u;
            goto label_2626e0;
        }
    }
    ctx->pc = 0x2626E0u;
label_2626e0:
    // 0x2626e0: 0x1240008b  beqz        $s2, . + 4 + (0x8B << 2)
label_2626e4:
    if (ctx->pc == 0x2626E4u) {
        ctx->pc = 0x2626E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626E0u;
        // 0x2626e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626E8u;
        goto label_2626e8;
    }
    ctx->pc = 0x2626E0u;
    {
        const bool branch_taken_0x2626e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2626E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626E0u;
        // 0x2626e4: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626e0) {
            ctx->pc = 0x262910u;
            goto label_262910;
        }
    }
    ctx->pc = 0x2626E8u;
label_2626e8:
    // 0x2626e8: 0x8e840338  lw          $a0, 0x338($s4)
    ctx->pc = 0x2626e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 824)));
label_2626ec:
    // 0x2626ec: 0x8c830088  lw          $v1, 0x88($a0)
    ctx->pc = 0x2626ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
label_2626f0:
    // 0x2626f0: 0x14620043  bne         $v1, $v0, . + 4 + (0x43 << 2)
label_2626f4:
    if (ctx->pc == 0x2626F4u) {
        ctx->pc = 0x2626F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626F0u;
        // 0x2626f4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2626F8u;
        goto label_2626f8;
    }
    ctx->pc = 0x2626F0u;
    {
        const bool branch_taken_0x2626f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2626F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2626F0u;
        // 0x2626f4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2626f0) {
            ctx->pc = 0x262800u;
            goto label_262800;
        }
    }
    ctx->pc = 0x2626F8u;
label_2626f8:
    // 0x2626f8: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x2626f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_2626fc:
    // 0x2626fc: 0x2842006f  slti        $v0, $v0, 0x6F
    ctx->pc = 0x2626fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)111) ? 1 : 0);
label_262700:
    // 0x262700: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_262704:
    if (ctx->pc == 0x262704u) {
        ctx->pc = 0x262704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262700u;
        // 0x262704: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262708u;
        goto label_262708;
    }
    ctx->pc = 0x262700u;
    {
        const bool branch_taken_0x262700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262700u;
        // 0x262704: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262700) {
            ctx->pc = 0x262740u;
            goto label_262740;
        }
    }
    ctx->pc = 0x262708u;
label_262708:
    // 0x262708: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_26270c:
    // 0x26270c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26270cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_262710:
    // 0x262710: 0x40f809  jalr        $v0
label_262714:
    if (ctx->pc == 0x262714u) {
        ctx->pc = 0x262714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262710u;
        // 0x262714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262718u;
        goto label_262718;
    }
    ctx->pc = 0x262710u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262718u);
        ctx->pc = 0x262714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262710u;
        // 0x262714: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262710u, 0x262718u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262718u;
label_262718:
    // 0x262718: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x262718u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_26271c:
    // 0x26271c: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x26271cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_262720:
    // 0x262720: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_262724:
    // 0x262724: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x262724u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262728:
    // 0x262728: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x262728u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26272c:
    // 0x26272c: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x26272cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_262730:
    // 0x262730: 0xc07f4c2  jal         func_1FD308
label_262734:
    if (ctx->pc == 0x262734u) {
        ctx->pc = 0x262734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262730u;
        // 0x262734: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262738u;
        goto label_262738;
    }
    ctx->pc = 0x262730u;
    SET_GPR_U32(ctx, 31, 0x262738u);
    ctx->pc = 0x262734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262730u;
    // 0x262734: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x262730u, 0x262738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262738u;
label_262738:
    // 0x262738: 0x1000000c  b           . + 4 + (0xC << 2)
label_26273c:
    if (ctx->pc == 0x26273Cu) {
        ctx->pc = 0x262740u;
        goto label_262740;
    }
    ctx->pc = 0x262738u;
    {
        const bool branch_taken_0x262738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x262738) {
            ctx->pc = 0x26276Cu;
            goto label_26276c;
        }
    }
    ctx->pc = 0x262740u;
label_262740:
    // 0x262740: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_262744:
    // 0x262744: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x262744u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_262748:
    // 0x262748: 0x40f809  jalr        $v0
label_26274c:
    if (ctx->pc == 0x26274Cu) {
        ctx->pc = 0x26274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262748u;
        // 0x26274c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262750u;
        goto label_262750;
    }
    ctx->pc = 0x262748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262750u);
        ctx->pc = 0x26274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262748u;
        // 0x26274c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262748u, 0x262750u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262750u;
label_262750:
    // 0x262750: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x262750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_262754:
    // 0x262754: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x262754u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_262758:
    // 0x262758: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x262758u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_26275c:
    // 0x26275c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26275cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262760:
    // 0x262760: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x262760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_262764:
    // 0x262764: 0xc07f4c2  jal         func_1FD308
label_262768:
    if (ctx->pc == 0x262768u) {
        ctx->pc = 0x262768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262764u;
        // 0x262768: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26276Cu;
        goto label_26276c;
    }
    ctx->pc = 0x262764u;
    SET_GPR_U32(ctx, 31, 0x26276Cu);
    ctx->pc = 0x262768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262764u;
    // 0x262768: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x262764u, 0x26276Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26276Cu;
label_26276c:
    // 0x26276c: 0xc097f26  jal         func_25FC98
label_262770:
    if (ctx->pc == 0x262770u) {
        ctx->pc = 0x262770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26276Cu;
        // 0x262770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262774u;
        goto label_262774;
    }
    ctx->pc = 0x26276Cu;
    SET_GPR_U32(ctx, 31, 0x262774u);
    ctx->pc = 0x262770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26276Cu;
    // 0x262770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x26276Cu, 0x262774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262774u;
label_262774:
    // 0x262774: 0x24030074  addiu       $v1, $zero, 0x74
    ctx->pc = 0x262774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_262778:
    // 0x262778: 0x1443005d  bne         $v0, $v1, . + 4 + (0x5D << 2)
label_26277c:
    if (ctx->pc == 0x26277Cu) {
        ctx->pc = 0x26277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262778u;
        // 0x26277c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262780u;
        goto label_262780;
    }
    ctx->pc = 0x262778u;
    {
        const bool branch_taken_0x262778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26277Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262778u;
        // 0x26277c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262778) {
            ctx->pc = 0x2628F0u;
            goto label_2628f0;
        }
    }
    ctx->pc = 0x262780u;
label_262780:
    // 0x262780: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x262780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_262784:
    // 0x262784: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x262784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_262788:
    // 0x262788: 0x5060005a  beql        $v1, $zero, . + 4 + (0x5A << 2)
label_26278c:
    if (ctx->pc == 0x26278Cu) {
        ctx->pc = 0x26278Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262788u;
        // 0x26278c: 0x8e260234  lw          $a2, 0x234($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262790u;
        goto label_262790;
    }
    ctx->pc = 0x262788u;
    {
        const bool branch_taken_0x262788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x262788) {
            ctx->pc = 0x26278Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262788u;
            // 0x26278c: 0x8e260234  lw          $a2, 0x234($s1) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2628F4u;
            goto label_2628f4;
        }
    }
    ctx->pc = 0x262790u;
label_262790:
    // 0x262790: 0x8e3002a8  lw          $s0, 0x2A8($s1)
    ctx->pc = 0x262790u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 680)));
label_262794:
    // 0x262794: 0xc0f70ce  jal         func_3DC338
label_262798:
    if (ctx->pc == 0x262798u) {
        ctx->pc = 0x262798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262794u;
        // 0x262798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26279Cu;
        goto label_26279c;
    }
    ctx->pc = 0x262794u;
    SET_GPR_U32(ctx, 31, 0x26279Cu);
    ctx->pc = 0x262798u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262794u;
    // 0x262798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x262794u, 0x26279Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26279Cu;
label_26279c:
    // 0x26279c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2627a0:
    if (ctx->pc == 0x2627A0u) {
        ctx->pc = 0x2627A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26279Cu;
        // 0x2627a0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2627A4u;
        goto label_2627a4;
    }
    ctx->pc = 0x26279Cu;
    {
        const bool branch_taken_0x26279c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26279Cu;
        // 0x2627a0: 0x3c040057  lui         $a0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26279c) {
            ctx->pc = 0x2627B0u;
            goto label_2627b0;
        }
    }
    ctx->pc = 0x2627A4u;
label_2627a4:
    // 0x2627a4: 0xc0c4900  jal         func_312400
label_2627a8:
    if (ctx->pc == 0x2627A8u) {
        ctx->pc = 0x2627A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627A4u;
        // 0x2627a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2627ACu;
        goto label_2627ac;
    }
    ctx->pc = 0x2627A4u;
    SET_GPR_U32(ctx, 31, 0x2627ACu);
    ctx->pc = 0x2627A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2627A4u;
    // 0x2627a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x2627A4u, 0x2627ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2627ACu;
label_2627ac:
    // 0x2627ac: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2627acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
label_2627b0:
    // 0x2627b0: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2627b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_2627b4:
    // 0x2627b4: 0x26070080  addiu       $a3, $s0, 0x80
    ctx->pc = 0x2627b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2627b8:
    // 0x2627b8: 0x24844f20  addiu       $a0, $a0, 0x4F20
    ctx->pc = 0x2627b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20256));
label_2627bc:
    // 0x2627bc: 0x24a577e0  addiu       $a1, $a1, 0x77E0
    ctx->pc = 0x2627bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30688));
label_2627c0:
    // 0x2627c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2627c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_2627c4:
    // 0x2627c4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2627c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2627c8:
    // 0x2627c8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2627c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2627cc:
    // 0x2627cc: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2627ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2627d0:
    // 0x2627d0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2627d0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2627d4:
    // 0x2627d4: 0xc0b0a34  jal         func_2C28D0
label_2627d8:
    if (ctx->pc == 0x2627D8u) {
        ctx->pc = 0x2627D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627D4u;
        // 0x2627d8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2627DCu;
        goto label_2627dc;
    }
    ctx->pc = 0x2627D4u;
    SET_GPR_U32(ctx, 31, 0x2627DCu);
    ctx->pc = 0x2627D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2627D4u;
    // 0x2627d8: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C28D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C28D0u, 0x2627D4u, 0x2627DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2627DCu;
label_2627dc:
    // 0x2627dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2627dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2627e0:
    // 0x2627e0: 0x12000043  beqz        $s0, . + 4 + (0x43 << 2)
label_2627e4:
    if (ctx->pc == 0x2627E4u) {
        ctx->pc = 0x2627E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627E0u;
        // 0x2627e4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2627E8u;
        goto label_2627e8;
    }
    ctx->pc = 0x2627E0u;
    {
        const bool branch_taken_0x2627e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627E0u;
        // 0x2627e4: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627e0) {
            ctx->pc = 0x2628F0u;
            goto label_2628f0;
        }
    }
    ctx->pc = 0x2627E8u;
label_2627e8:
    // 0x2627e8: 0xc0b1080  jal         func_2C4200
label_2627ec:
    if (ctx->pc == 0x2627ECu) {
        ctx->pc = 0x2627ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627E8u;
        // 0x2627ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2627F0u;
        goto label_2627f0;
    }
    ctx->pc = 0x2627E8u;
    SET_GPR_U32(ctx, 31, 0x2627F0u);
    ctx->pc = 0x2627ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2627E8u;
    // 0x2627ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4200u, 0x2627E8u, 0x2627F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2627F0u;
label_2627f0:
    // 0x2627f0: 0xc0b0ef2  jal         func_2C3BC8
label_2627f4:
    if (ctx->pc == 0x2627F4u) {
        ctx->pc = 0x2627F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627F0u;
        // 0x2627f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2627F8u;
        goto label_2627f8;
    }
    ctx->pc = 0x2627F0u;
    SET_GPR_U32(ctx, 31, 0x2627F8u);
    ctx->pc = 0x2627F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2627F0u;
    // 0x2627f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C3BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3BC8u, 0x2627F0u, 0x2627F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2627F8u;
label_2627f8:
    // 0x2627f8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_2627fc:
    if (ctx->pc == 0x2627FCu) {
        ctx->pc = 0x2627FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627F8u;
        // 0x2627fc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262800u;
        goto label_262800;
    }
    ctx->pc = 0x2627F8u;
    {
        const bool branch_taken_0x2627f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2627FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2627F8u;
        // 0x2627fc: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2627f8) {
            ctx->pc = 0x2628F0u;
            goto label_2628f0;
        }
    }
    ctx->pc = 0x262800u;
label_262800:
    // 0x262800: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
label_262804:
    if (ctx->pc == 0x262804u) {
        ctx->pc = 0x262804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262800u;
        // 0x262804: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262808u;
        goto label_262808;
    }
    ctx->pc = 0x262800u;
    {
        const bool branch_taken_0x262800 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262800u;
        // 0x262804: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262800) {
            ctx->pc = 0x26283Cu;
            goto label_26283c;
        }
    }
    ctx->pc = 0x262808u;
label_262808:
    // 0x262808: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x262808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_26280c:
    // 0x26280c: 0x28420083  slti        $v0, $v0, 0x83
    ctx->pc = 0x26280cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)131) ? 1 : 0);
label_262810:
    // 0x262810: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_262814:
    if (ctx->pc == 0x262814u) {
        ctx->pc = 0x262814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262810u;
        // 0x262814: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262818u;
        goto label_262818;
    }
    ctx->pc = 0x262810u;
    {
        const bool branch_taken_0x262810 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262810u;
        // 0x262814: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262810) {
            ctx->pc = 0x262878u;
            goto label_262878;
        }
    }
    ctx->pc = 0x262818u;
label_262818:
    // 0x262818: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_26281c:
    // 0x26281c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x26281cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_262820:
    // 0x262820: 0x40f809  jalr        $v0
label_262824:
    if (ctx->pc == 0x262824u) {
        ctx->pc = 0x262824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262820u;
        // 0x262824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262828u;
        goto label_262828;
    }
    ctx->pc = 0x262820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262828u);
        ctx->pc = 0x262824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262820u;
        // 0x262824: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262820u, 0x262828u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262828u;
label_262828:
    // 0x262828: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x262828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_26282c:
    // 0x26282c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_262830:
    // 0x262830: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x262830u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262834:
    // 0x262834: 0x10000017  b           . + 4 + (0x17 << 2)
label_262838:
    if (ctx->pc == 0x262838u) {
        ctx->pc = 0x262838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262834u;
        // 0x262838: 0x8e2500d4  lw          $a1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26283Cu;
        goto label_26283c;
    }
    ctx->pc = 0x262834u;
    {
        const bool branch_taken_0x262834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262834u;
        // 0x262838: 0x8e2500d4  lw          $a1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262834) {
            ctx->pc = 0x262894u;
            goto label_262894;
        }
    }
    ctx->pc = 0x26283Cu;
label_26283c:
    // 0x26283c: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
label_262840:
    if (ctx->pc == 0x262840u) {
        ctx->pc = 0x262840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26283Cu;
        // 0x262840: 0x8e820334  lw          $v0, 0x334($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262844u;
        goto label_262844;
    }
    ctx->pc = 0x26283Cu;
    {
        const bool branch_taken_0x26283c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26283c) {
            ctx->pc = 0x262840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26283Cu;
            // 0x262840: 0x8e820334  lw          $v0, 0x334($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 820)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2628ACu;
            goto label_2628ac;
        }
    }
    ctx->pc = 0x262844u;
label_262844:
    // 0x262844: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x262844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_262848:
    // 0x262848: 0x28420097  slti        $v0, $v0, 0x97
    ctx->pc = 0x262848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)151) ? 1 : 0);
label_26284c:
    // 0x26284c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_262850:
    if (ctx->pc == 0x262850u) {
        ctx->pc = 0x262850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26284Cu;
        // 0x262850: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262854u;
        goto label_262854;
    }
    ctx->pc = 0x26284Cu;
    {
        const bool branch_taken_0x26284c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26284Cu;
        // 0x262850: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26284c) {
            ctx->pc = 0x262878u;
            goto label_262878;
        }
    }
    ctx->pc = 0x262854u;
label_262854:
    // 0x262854: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262854u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_262858:
    // 0x262858: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x262858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_26285c:
    // 0x26285c: 0x40f809  jalr        $v0
label_262860:
    if (ctx->pc == 0x262860u) {
        ctx->pc = 0x262860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26285Cu;
        // 0x262860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262864u;
        goto label_262864;
    }
    ctx->pc = 0x26285Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262864u);
        ctx->pc = 0x262860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26285Cu;
        // 0x262860: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26285Cu, 0x262864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262864u;
label_262864:
    // 0x262864: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x262864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_262868:
    // 0x262868: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x262868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_26286c:
    // 0x26286c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x26286cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262870:
    // 0x262870: 0x10000008  b           . + 4 + (0x8 << 2)
label_262874:
    if (ctx->pc == 0x262874u) {
        ctx->pc = 0x262874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262870u;
        // 0x262874: 0x8e2500d4  lw          $a1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262878u;
        goto label_262878;
    }
    ctx->pc = 0x262870u;
    {
        const bool branch_taken_0x262870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262870u;
        // 0x262874: 0x8e2500d4  lw          $a1, 0xD4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262870) {
            ctx->pc = 0x262894u;
            goto label_262894;
        }
    }
    ctx->pc = 0x262878u;
label_262878:
    // 0x262878: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_26287c:
    // 0x26287c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x26287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_262880:
    // 0x262880: 0x40f809  jalr        $v0
label_262884:
    if (ctx->pc == 0x262884u) {
        ctx->pc = 0x262884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262880u;
        // 0x262884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262888u;
        goto label_262888;
    }
    ctx->pc = 0x262880u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262888u);
        ctx->pc = 0x262884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262880u;
        // 0x262884: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262880u, 0x262888u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262888u;
label_262888:
    // 0x262888: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x262888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_26288c:
    // 0x26288c: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x26288cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_262890:
    // 0x262890: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x262890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262894:
    // 0x262894: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x262894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262898:
    // 0x262898: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x262898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_26289c:
    // 0x26289c: 0xc07f4c2  jal         func_1FD308
label_2628a0:
    if (ctx->pc == 0x2628A0u) {
        ctx->pc = 0x2628A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26289Cu;
        // 0x2628a0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2628A4u;
        goto label_2628a4;
    }
    ctx->pc = 0x26289Cu;
    SET_GPR_U32(ctx, 31, 0x2628A4u);
    ctx->pc = 0x2628A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26289Cu;
    // 0x2628a0: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x26289Cu, 0x2628A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628A4u;
label_2628a4:
    // 0x2628a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2628a8:
    if (ctx->pc == 0x2628A8u) {
        ctx->pc = 0x2628A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628A4u;
        // 0x2628a8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2628ACu;
        goto label_2628ac;
    }
    ctx->pc = 0x2628A4u;
    {
        const bool branch_taken_0x2628a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2628A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628A4u;
        // 0x2628a8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628a4) {
            ctx->pc = 0x2628F0u;
            goto label_2628f0;
        }
    }
    ctx->pc = 0x2628ACu;
label_2628ac:
    // 0x2628ac: 0x24040037  addiu       $a0, $zero, 0x37
    ctx->pc = 0x2628acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
label_2628b0:
    // 0x2628b0: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x2628b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
label_2628b4:
    // 0x2628b4: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
label_2628b8:
    if (ctx->pc == 0x2628B8u) {
        ctx->pc = 0x2628B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628B4u;
        // 0x2628b8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2628BCu;
        goto label_2628bc;
    }
    ctx->pc = 0x2628B4u;
    {
        const bool branch_taken_0x2628b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2628B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628B4u;
        // 0x2628b8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628b4) {
            ctx->pc = 0x2628F0u;
            goto label_2628f0;
        }
    }
    ctx->pc = 0x2628BCu;
label_2628bc:
    // 0x2628bc: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x2628bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_2628c0:
    // 0x2628c0: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x2628c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_2628c4:
    // 0x2628c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2628c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2628c8:
    // 0x2628c8: 0x40f809  jalr        $v0
label_2628cc:
    if (ctx->pc == 0x2628CCu) {
        ctx->pc = 0x2628CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628C8u;
        // 0x2628cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2628D0u;
        goto label_2628d0;
    }
    ctx->pc = 0x2628C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2628D0u);
        ctx->pc = 0x2628CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628C8u;
        // 0x2628cc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2628C8u, 0x2628D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2628D0u;
label_2628d0:
    // 0x2628d0: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x2628d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_2628d4:
    // 0x2628d4: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x2628d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_2628d8:
    // 0x2628d8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2628d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2628dc:
    // 0x2628dc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2628dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2628e0:
    // 0x2628e0: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2628e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_2628e4:
    // 0x2628e4: 0xc07f4c2  jal         func_1FD308
label_2628e8:
    if (ctx->pc == 0x2628E8u) {
        ctx->pc = 0x2628E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628E4u;
        // 0x2628e8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2628ECu;
        goto label_2628ec;
    }
    ctx->pc = 0x2628E4u;
    SET_GPR_U32(ctx, 31, 0x2628ECu);
    ctx->pc = 0x2628E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2628E4u;
    // 0x2628e8: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x2628E4u, 0x2628ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2628ECu;
label_2628ec:
    // 0x2628ec: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x2628ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
label_2628f0:
    // 0x2628f0: 0x8e260234  lw          $a2, 0x234($s1)
    ctx->pc = 0x2628f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_2628f4:
    // 0x2628f4: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2628f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_2628f8:
    // 0x2628f8: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x2628f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_2628fc:
    // 0x2628fc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2628fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262900:
    // 0x262900: 0xc046642  jal         func_119908
label_262904:
    if (ctx->pc == 0x262904u) {
        ctx->pc = 0x262904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262900u;
        // 0x262904: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262908u;
        goto label_262908;
    }
    ctx->pc = 0x262900u;
    SET_GPR_U32(ctx, 31, 0x262908u);
    ctx->pc = 0x262904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262900u;
    // 0x262904: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x262900u, 0x262908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262908u;
label_262908:
    // 0x262908: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_26290c:
    if (ctx->pc == 0x26290Cu) {
        ctx->pc = 0x26290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262908u;
        // 0x26290c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262910u;
        goto label_262910;
    }
    ctx->pc = 0x262908u;
    {
        const bool branch_taken_0x262908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26290Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262908u;
        // 0x26290c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262908) {
            ctx->pc = 0x262C2Cu;
            goto label_262c2c;
        }
    }
    ctx->pc = 0x262910u;
label_262910:
    // 0x262910: 0xc0d8de2  jal         func_363788
label_262914:
    if (ctx->pc == 0x262914u) {
        ctx->pc = 0x262914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262910u;
        // 0x262914: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262918u;
        goto label_262918;
    }
    ctx->pc = 0x262910u;
    SET_GPR_U32(ctx, 31, 0x262918u);
    ctx->pc = 0x262914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262910u;
    // 0x262914: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x363788u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363788u, 0x262910u, 0x262918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262918u;
label_262918:
    // 0x262918: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x262918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
label_26291c:
    // 0x26291c: 0x144000b0  bnez        $v0, . + 4 + (0xB0 << 2)
label_262920:
    if (ctx->pc == 0x262920u) {
        ctx->pc = 0x262920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26291Cu;
        // 0x262920: 0x8e230290  lw          $v1, 0x290($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262924u;
        goto label_262924;
    }
    ctx->pc = 0x26291Cu;
    {
        const bool branch_taken_0x26291c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26291Cu;
        // 0x262920: 0x8e230290  lw          $v1, 0x290($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 656)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26291c) {
            ctx->pc = 0x262BE0u;
            goto label_262be0;
        }
    }
    ctx->pc = 0x262924u;
label_262924:
    // 0x262924: 0x106000c0  beqz        $v1, . + 4 + (0xC0 << 2)
label_262928:
    if (ctx->pc == 0x262928u) {
        ctx->pc = 0x262928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262924u;
        // 0x262928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26292Cu;
        goto label_26292c;
    }
    ctx->pc = 0x262924u;
    {
        const bool branch_taken_0x262924 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262924u;
        // 0x262928: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262924) {
            ctx->pc = 0x262C28u;
            goto label_262c28;
        }
    }
    ctx->pc = 0x26292Cu;
label_26292c:
    // 0x26292c: 0x546200b7  bnel        $v1, $v0, . + 4 + (0xB7 << 2)
label_262930:
    if (ctx->pc == 0x262930u) {
        ctx->pc = 0x262930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26292Cu;
        // 0x262930: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262934u;
        goto label_262934;
    }
    ctx->pc = 0x26292Cu;
    {
        const bool branch_taken_0x26292c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x26292c) {
            ctx->pc = 0x262930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26292Cu;
            // 0x262930: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262C0Cu;
            goto label_262c0c;
        }
    }
    ctx->pc = 0x262934u;
label_262934:
    // 0x262934: 0x8e2500d4  lw          $a1, 0xD4($s1)
    ctx->pc = 0x262934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
label_262938:
    // 0x262938: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x262938u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
label_26293c:
    // 0x26293c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x26293cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_262940:
    // 0x262940: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x262940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_262944:
    // 0x262944: 0xc07f4c2  jal         func_1FD308
label_262948:
    if (ctx->pc == 0x262948u) {
        ctx->pc = 0x262948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262944u;
        // 0x262948: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26294Cu;
        goto label_26294c;
    }
    ctx->pc = 0x262944u;
    SET_GPR_U32(ctx, 31, 0x26294Cu);
    ctx->pc = 0x262948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262944u;
    // 0x262948: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FD308u, 0x262944u, 0x26294Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26294Cu;
label_26294c:
    // 0x26294c: 0xc097f26  jal         func_25FC98
label_262950:
    if (ctx->pc == 0x262950u) {
        ctx->pc = 0x262950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26294Cu;
        // 0x262950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262954u;
        goto label_262954;
    }
    ctx->pc = 0x26294Cu;
    SET_GPR_U32(ctx, 31, 0x262954u);
    ctx->pc = 0x262950u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26294Cu;
    // 0x262950: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x26294Cu, 0x262954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262954u;
label_262954:
    // 0x262954: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x262954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_262958:
    // 0x262958: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
label_26295c:
    if (ctx->pc == 0x26295Cu) {
        ctx->pc = 0x26295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262958u;
        // 0x26295c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262960u;
        goto label_262960;
    }
    ctx->pc = 0x262958u;
    {
        const bool branch_taken_0x262958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262958u;
        // 0x26295c: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262958) {
            ctx->pc = 0x262988u;
            goto label_262988;
        }
    }
    ctx->pc = 0x262960u;
label_262960:
    // 0x262960: 0xc097f26  jal         func_25FC98
label_262964:
    if (ctx->pc == 0x262964u) {
        ctx->pc = 0x262964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262960u;
        // 0x262964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262968u;
        goto label_262968;
    }
    ctx->pc = 0x262960u;
    SET_GPR_U32(ctx, 31, 0x262968u);
    ctx->pc = 0x262964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262960u;
    // 0x262964: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x262960u, 0x262968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262968u;
label_262968:
    // 0x262968: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x262968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_26296c:
    // 0x26296c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
label_262970:
    if (ctx->pc == 0x262970u) {
        ctx->pc = 0x262970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26296Cu;
        // 0x262970: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262974u;
        goto label_262974;
    }
    ctx->pc = 0x26296Cu;
    {
        const bool branch_taken_0x26296c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x262970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26296Cu;
        // 0x262970: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26296c) {
            ctx->pc = 0x262988u;
            goto label_262988;
        }
    }
    ctx->pc = 0x262974u;
label_262974:
    // 0x262974: 0xc097f26  jal         func_25FC98
label_262978:
    if (ctx->pc == 0x262978u) {
        ctx->pc = 0x262978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262974u;
        // 0x262978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26297Cu;
        goto label_26297c;
    }
    ctx->pc = 0x262974u;
    SET_GPR_U32(ctx, 31, 0x26297Cu);
    ctx->pc = 0x262978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262974u;
    // 0x262978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x262974u, 0x26297Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26297Cu;
label_26297c:
    // 0x26297c: 0x24030083  addiu       $v1, $zero, 0x83
    ctx->pc = 0x26297cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
label_262980:
    // 0x262980: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
label_262984:
    if (ctx->pc == 0x262984u) {
        ctx->pc = 0x262984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262980u;
        // 0x262984: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262988u;
        goto label_262988;
    }
    ctx->pc = 0x262980u;
    {
        const bool branch_taken_0x262980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x262984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262980u;
        // 0x262984: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262980) {
            ctx->pc = 0x2629A8u;
            goto label_2629a8;
        }
    }
    ctx->pc = 0x262988u;
label_262988:
    // 0x262988: 0x8e260234  lw          $a2, 0x234($s1)
    ctx->pc = 0x262988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_26298c:
    // 0x26298c: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x26298cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_262990:
    // 0x262990: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x262990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_262994:
    // 0x262994: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x262994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262998:
    // 0x262998: 0xc046642  jal         func_119908
label_26299c:
    if (ctx->pc == 0x26299Cu) {
        ctx->pc = 0x26299Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262998u;
        // 0x26299c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2629A0u;
        goto label_2629a0;
    }
    ctx->pc = 0x262998u;
    SET_GPR_U32(ctx, 31, 0x2629A0u);
    ctx->pc = 0x26299Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262998u;
    // 0x26299c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x262998u, 0x2629A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629A0u;
label_2629a0:
    // 0x2629a0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2629a4:
    if (ctx->pc == 0x2629A4u) {
        ctx->pc = 0x2629A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629A0u;
        // 0x2629a4: 0x8e22028c  lw          $v0, 0x28C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2629A8u;
        goto label_2629a8;
    }
    ctx->pc = 0x2629A0u;
    {
        const bool branch_taken_0x2629a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629A0u;
        // 0x2629a4: 0x8e22028c  lw          $v0, 0x28C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629a0) {
            ctx->pc = 0x2629D8u;
            goto label_2629d8;
        }
    }
    ctx->pc = 0x2629A8u;
label_2629a8:
    // 0x2629a8: 0xc097f26  jal         func_25FC98
label_2629ac:
    if (ctx->pc == 0x2629ACu) {
        ctx->pc = 0x2629ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629A8u;
        // 0x2629ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2629B0u;
        goto label_2629b0;
    }
    ctx->pc = 0x2629A8u;
    SET_GPR_U32(ctx, 31, 0x2629B0u);
    ctx->pc = 0x2629ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629A8u;
    // 0x2629ac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x2629A8u, 0x2629B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629B0u;
label_2629b0:
    // 0x2629b0: 0x2403006e  addiu       $v1, $zero, 0x6E
    ctx->pc = 0x2629b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
label_2629b4:
    // 0x2629b4: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_2629b8:
    if (ctx->pc == 0x2629B8u) {
        ctx->pc = 0x2629B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629B4u;
        // 0x2629b8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2629BCu;
        goto label_2629bc;
    }
    ctx->pc = 0x2629B4u;
    {
        const bool branch_taken_0x2629b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2629B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629B4u;
        // 0x2629b8: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629b4) {
            ctx->pc = 0x2629D4u;
            goto label_2629d4;
        }
    }
    ctx->pc = 0x2629BCu;
label_2629bc:
    // 0x2629bc: 0x8e260234  lw          $a2, 0x234($s1)
    ctx->pc = 0x2629bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_2629c0:
    // 0x2629c0: 0x248487a0  addiu       $a0, $a0, -0x7860
    ctx->pc = 0x2629c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936480));
label_2629c4:
    // 0x2629c4: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2629c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2629c8:
    // 0x2629c8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2629c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2629cc:
    // 0x2629cc: 0xc046642  jal         func_119908
label_2629d0:
    if (ctx->pc == 0x2629D0u) {
        ctx->pc = 0x2629D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629CCu;
        // 0x2629d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2629D4u;
        goto label_2629d4;
    }
    ctx->pc = 0x2629CCu;
    SET_GPR_U32(ctx, 31, 0x2629D4u);
    ctx->pc = 0x2629D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2629CCu;
    // 0x2629d0: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x119908u, 0x2629CCu, 0x2629D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2629D4u;
label_2629d4:
    // 0x2629d4: 0x8e22028c  lw          $v0, 0x28C($s1)
    ctx->pc = 0x2629d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 652)));
label_2629d8:
    // 0x2629d8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_2629dc:
    if (ctx->pc == 0x2629DCu) {
        ctx->pc = 0x2629DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629D8u;
        // 0x2629dc: 0x8e220230  lw          $v0, 0x230($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2629E0u;
        goto label_2629e0;
    }
    ctx->pc = 0x2629D8u;
    {
        const bool branch_taken_0x2629d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2629d8) {
            ctx->pc = 0x2629DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2629D8u;
            // 0x2629dc: 0x8e220230  lw          $v0, 0x230($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2629F8u;
            goto label_2629f8;
        }
    }
    ctx->pc = 0x2629E0u;
label_2629e0:
    // 0x2629e0: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x2629e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_2629e4:
    // 0x2629e4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2629e4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2629e8:
    // 0x2629e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2629e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2629ec:
    // 0x2629ec: 0x0  nop
    ctx->pc = 0x2629ecu;
    // NOP
label_2629f0:
    // 0x2629f0: 0xe6200294  swc1        $f0, 0x294($s1)
    ctx->pc = 0x2629f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 660), bits); }
label_2629f4:
    // 0x2629f4: 0x8e220230  lw          $v0, 0x230($s1)
    ctx->pc = 0x2629f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 560)));
label_2629f8:
    // 0x2629f8: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2629f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_2629fc:
    // 0x2629fc: 0x8e240234  lw          $a0, 0x234($s1)
    ctx->pc = 0x2629fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_262a00:
    // 0x262a00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_262a04:
    // 0x262a04: 0xae220230  sw          $v0, 0x230($s1)
    ctx->pc = 0x262a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 560), GPR_U32(ctx, 2));
label_262a08:
    // 0x262a08: 0x8c8300bc  lw          $v1, 0xBC($a0)
    ctx->pc = 0x262a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 188)));
label_262a0c:
    // 0x262a0c: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x262a0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_262a10:
    // 0x262a10: 0x5460000e  bnel        $v1, $zero, . + 4 + (0xE << 2)
label_262a14:
    if (ctx->pc == 0x262A14u) {
        ctx->pc = 0x262A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A10u;
        // 0x262a14: 0x8e250274  lw          $a1, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262A18u;
        goto label_262a18;
    }
    ctx->pc = 0x262A10u;
    {
        const bool branch_taken_0x262a10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x262a10) {
            ctx->pc = 0x262A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262A10u;
            // 0x262a14: 0x8e250274  lw          $a1, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A4Cu;
            goto label_262a4c;
        }
    }
    ctx->pc = 0x262A18u;
label_262a18:
    // 0x262a18: 0x8c84121c  lw          $a0, 0x121C($a0)
    ctx->pc = 0x262a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4636)));
label_262a1c:
    // 0x262a1c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_262a20:
    if (ctx->pc == 0x262A20u) {
        ctx->pc = 0x262A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A1Cu;
        // 0x262a20: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262A24u;
        goto label_262a24;
    }
    ctx->pc = 0x262A1Cu;
    {
        const bool branch_taken_0x262a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A1Cu;
        // 0x262a20: 0x3c030800  lui         $v1, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a1c) {
            ctx->pc = 0x262A48u;
            goto label_262a48;
        }
    }
    ctx->pc = 0x262A24u;
label_262a24:
    // 0x262a24: 0x8c82036c  lw          $v0, 0x36C($a0)
    ctx->pc = 0x262a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 876)));
label_262a28:
    // 0x262a28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x262a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_262a2c:
    // 0x262a2c: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
label_262a30:
    if (ctx->pc == 0x262A30u) {
        ctx->pc = 0x262A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A2Cu;
        // 0x262a30: 0x8e250274  lw          $a1, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262A34u;
        goto label_262a34;
    }
    ctx->pc = 0x262A2Cu;
    {
        const bool branch_taken_0x262a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x262a2c) {
            ctx->pc = 0x262A30u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262A2Cu;
            // 0x262a30: 0x8e250274  lw          $a1, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A4Cu;
            goto label_262a4c;
        }
    }
    ctx->pc = 0x262A34u;
label_262a34:
    // 0x262a34: 0x90820fb8  lbu         $v0, 0xFB8($a0)
    ctx->pc = 0x262a34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4024)));
label_262a38:
    // 0x262a38: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_262a3c:
    if (ctx->pc == 0x262A3Cu) {
        ctx->pc = 0x262A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A38u;
        // 0x262a3c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262A40u;
        goto label_262a40;
    }
    ctx->pc = 0x262A38u;
    {
        const bool branch_taken_0x262a38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A38u;
        // 0x262a3c: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a38) {
            ctx->pc = 0x262A48u;
            goto label_262a48;
        }
    }
    ctx->pc = 0x262A40u;
label_262a40:
    // 0x262a40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262a44:
    // 0x262a44: 0xa062cb24  sb          $v0, -0x34DC($v1)
    ctx->pc = 0x262a44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294953764), (uint8_t)GPR_U32(ctx, 2));
label_262a48:
    // 0x262a48: 0x8e250274  lw          $a1, 0x274($s1)
    ctx->pc = 0x262a48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_262a4c:
    // 0x262a4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x262a4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_262a50:
    // 0x262a50: 0x8ca3005c  lw          $v1, 0x5C($a1)
    ctx->pc = 0x262a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 92)));
label_262a54:
    // 0x262a54: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x262a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_262a58:
    // 0x262a58: 0x40f809  jalr        $v0
label_262a5c:
    if (ctx->pc == 0x262A5Cu) {
        ctx->pc = 0x262A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A58u;
        // 0x262a5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262A60u;
        goto label_262a60;
    }
    ctx->pc = 0x262A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262A60u);
        ctx->pc = 0x262A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A58u;
        // 0x262a5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262A58u, 0x262A60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262A60u;
label_262a60:
    // 0x262a60: 0x8e230274  lw          $v1, 0x274($s1)
    ctx->pc = 0x262a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_262a64:
    // 0x262a64: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x262a64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_262a68:
    // 0x262a68: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x262a68u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_262a6c:
    // 0x262a6c: 0x8e230234  lw          $v1, 0x234($s1)
    ctx->pc = 0x262a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_262a70:
    // 0x262a70: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x262a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
label_262a74:
    // 0x262a74: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x262a74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_262a78:
    // 0x262a78: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_262a7c:
    if (ctx->pc == 0x262A7Cu) {
        ctx->pc = 0x262A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A78u;
        // 0x262a7c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262A80u;
        goto label_262a80;
    }
    ctx->pc = 0x262A78u;
    {
        const bool branch_taken_0x262a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A78u;
        // 0x262a7c: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a78) {
            ctx->pc = 0x262ACCu;
            goto label_262acc;
        }
    }
    ctx->pc = 0x262A80u;
label_262a80:
    // 0x262a80: 0x8c630104  lw          $v1, 0x104($v1)
    ctx->pc = 0x262a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
label_262a84:
    // 0x262a84: 0xc442c61c  lwc1        $f2, -0x39E4($v0)
    ctx->pc = 0x262a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_262a88:
    // 0x262a88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262a88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_262a8c:
    // 0x262a8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x262a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_262a90:
    // 0x262a90: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x262a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_262a94:
    // 0x262a94: 0xc4400070  lwc1        $f0, 0x70($v0)
    ctx->pc = 0x262a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262a98:
    // 0x262a98: 0x24420070  addiu       $v0, $v0, 0x70
    ctx->pc = 0x262a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
label_262a9c:
    // 0x262a9c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x262a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_262aa0:
    // 0x262aa0: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x262aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262aa4:
    // 0x262aa4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x262aa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_262aa8:
    // 0x262aa8: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x262aa8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_262aac:
    // 0x262aac: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x262aacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262ab0:
    // 0x262ab0: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x262ab0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_262ab4:
    // 0x262ab4: 0xc442000c  lwc1        $f2, 0xC($v0)
    ctx->pc = 0x262ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_262ab8:
    // 0x262ab8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x262ab8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_262abc:
    // 0x262abc: 0xc0d8e20  jal         func_363880
label_262ac0:
    if (ctx->pc == 0x262AC0u) {
        ctx->pc = 0x262AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262ABCu;
        // 0x262ac0: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262AC4u;
        goto label_262ac4;
    }
    ctx->pc = 0x262ABCu;
    SET_GPR_U32(ctx, 31, 0x262AC4u);
    ctx->pc = 0x262AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262ABCu;
    // 0x262ac0: 0xe7a2000c  swc1        $f2, 0xC($sp) (Delay Slot)
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x363880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363880u, 0x262ABCu, 0x262AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AC4u;
label_262ac4:
    // 0x262ac4: 0x10000019  b           . + 4 + (0x19 << 2)
label_262ac8:
    if (ctx->pc == 0x262AC8u) {
        ctx->pc = 0x262AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AC4u;
        // 0x262ac8: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262ACCu;
        goto label_262acc;
    }
    ctx->pc = 0x262AC4u;
    {
        const bool branch_taken_0x262ac4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AC4u;
        // 0x262ac8: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ac4) {
            ctx->pc = 0x262B2Cu;
            goto label_262b2c;
        }
    }
    ctx->pc = 0x262ACCu;
label_262acc:
    // 0x262acc: 0xc092432  jal         func_2490C8
label_262ad0:
    if (ctx->pc == 0x262AD0u) {
        ctx->pc = 0x262AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262ACCu;
        // 0x262ad0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262AD4u;
        goto label_262ad4;
    }
    ctx->pc = 0x262ACCu;
    SET_GPR_U32(ctx, 31, 0x262AD4u);
    ctx->pc = 0x262AD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262ACCu;
    // 0x262ad0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2490C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2490C8u, 0x262ACCu, 0x262AD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262AD4u;
label_262ad4:
    // 0x262ad4: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_262ad8:
    if (ctx->pc == 0x262AD8u) {
        ctx->pc = 0x262AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AD4u;
        // 0x262ad8: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262ADCu;
        goto label_262adc;
    }
    ctx->pc = 0x262AD4u;
    {
        const bool branch_taken_0x262ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262ad4) {
            ctx->pc = 0x262AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262AD4u;
            // 0x262ad8: 0x8e240274  lw          $a0, 0x274($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262B2Cu;
            goto label_262b2c;
        }
    }
    ctx->pc = 0x262ADCu;
label_262adc:
    // 0x262adc: 0x8e220234  lw          $v0, 0x234($s1)
    ctx->pc = 0x262adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 564)));
label_262ae0:
    // 0x262ae0: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x262ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
label_262ae4:
    // 0x262ae4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x262ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_262ae8:
    // 0x262ae8: 0xc4810070  lwc1        $f1, 0x70($a0)
    ctx->pc = 0x262ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262aec:
    // 0x262aec: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x262aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
label_262af0:
    // 0x262af0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x262af0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_262af4:
    // 0x262af4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x262af4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262af8:
    // 0x262af8: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x262af8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_262afc:
    // 0x262afc: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x262afcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262b00:
    // 0x262b00: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x262b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_262b04:
    // 0x262b04: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x262b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262b08:
    // 0x262b08: 0xc0924f2  jal         func_2493C8
label_262b0c:
    if (ctx->pc == 0x262B0Cu) {
        ctx->pc = 0x262B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B08u;
        // 0x262b0c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B10u;
        goto label_262b10;
    }
    ctx->pc = 0x262B08u;
    SET_GPR_U32(ctx, 31, 0x262B10u);
    ctx->pc = 0x262B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B08u;
    // 0x262b0c: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2493C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2493C8u, 0x262B08u, 0x262B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B10u;
label_262b10:
    // 0x262b10: 0xc7a10004  lwc1        $f1, 0x4($sp)
    ctx->pc = 0x262b10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_262b14:
    // 0x262b14: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262b14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_262b18:
    // 0x262b18: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x262b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_262b1c:
    // 0x262b1c: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x262b1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_262b20:
    // 0x262b20: 0xc0d8e20  jal         func_363880
label_262b24:
    if (ctx->pc == 0x262B24u) {
        ctx->pc = 0x262B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B20u;
        // 0x262b24: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B28u;
        goto label_262b28;
    }
    ctx->pc = 0x262B20u;
    SET_GPR_U32(ctx, 31, 0x262B28u);
    ctx->pc = 0x262B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B20u;
    // 0x262b24: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x363880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x363880u, 0x262B20u, 0x262B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B28u;
label_262b28:
    // 0x262b28: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x262b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_262b2c:
    // 0x262b2c: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_262b30:
    // 0x262b30: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x262b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_262b34:
    // 0x262b34: 0x40f809  jalr        $v0
label_262b38:
    if (ctx->pc == 0x262B38u) {
        ctx->pc = 0x262B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B34u;
        // 0x262b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B3Cu;
        goto label_262b3c;
    }
    ctx->pc = 0x262B34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262B3Cu);
        ctx->pc = 0x262B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B34u;
        // 0x262b38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262B34u, 0x262B3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262B3Cu;
label_262b3c:
    // 0x262b3c: 0x8e8300bc  lw          $v1, 0xBC($s4)
    ctx->pc = 0x262b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 188)));
label_262b40:
    // 0x262b40: 0x3863020f  xori        $v1, $v1, 0x20F
    ctx->pc = 0x262b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)527);
label_262b44:
    // 0x262b44: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_262b48:
    if (ctx->pc == 0x262B48u) {
        ctx->pc = 0x262B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B44u;
        // 0x262b48: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B4Cu;
        goto label_262b4c;
    }
    ctx->pc = 0x262B44u;
    {
        const bool branch_taken_0x262b44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x262B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B44u;
        // 0x262b48: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b44) {
            ctx->pc = 0x262BCCu;
            goto label_262bcc;
        }
    }
    ctx->pc = 0x262B4Cu;
label_262b4c:
    // 0x262b4c: 0x8e220274  lw          $v0, 0x274($s1)
    ctx->pc = 0x262b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_262b50:
    // 0x262b50: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x262b50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_262b54:
    // 0x262b54: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_262b58:
    // 0x262b58: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x262b58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_262b5c:
    // 0x262b5c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x262b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_262b60:
    // 0x262b60: 0xc600007c  lwc1        $f0, 0x7C($s0)
    ctx->pc = 0x262b60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_262b64:
    // 0x262b64: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x262b64u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_262b68:
    // 0x262b68: 0xc097f26  jal         func_25FC98
label_262b6c:
    if (ctx->pc == 0x262B6Cu) {
        ctx->pc = 0x262B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B68u;
        // 0x262b6c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B70u;
        goto label_262b70;
    }
    ctx->pc = 0x262B68u;
    SET_GPR_U32(ctx, 31, 0x262B70u);
    ctx->pc = 0x262B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B68u;
    // 0x262b6c: 0xe7a00000  swc1        $f0, 0x0($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x262B68u, 0x262B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B70u;
label_262b70:
    // 0x262b70: 0x2403002c  addiu       $v1, $zero, 0x2C
    ctx->pc = 0x262b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_262b74:
    // 0x262b74: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
label_262b78:
    if (ctx->pc == 0x262B78u) {
        ctx->pc = 0x262B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B74u;
        // 0x262b78: 0xc60d0080  lwc1        $f13, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B7Cu;
        goto label_262b7c;
    }
    ctx->pc = 0x262B74u;
    {
        const bool branch_taken_0x262b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x262b74) {
            ctx->pc = 0x262B78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262B74u;
            // 0x262b78: 0xc60d0080  lwc1        $f13, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x262BACu;
            goto label_262bac;
        }
    }
    ctx->pc = 0x262B7Cu;
label_262b7c:
    // 0x262b7c: 0xc097f26  jal         func_25FC98
label_262b80:
    if (ctx->pc == 0x262B80u) {
        ctx->pc = 0x262B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B7Cu;
        // 0x262b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B84u;
        goto label_262b84;
    }
    ctx->pc = 0x262B7Cu;
    SET_GPR_U32(ctx, 31, 0x262B84u);
    ctx->pc = 0x262B80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B7Cu;
    // 0x262b80: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x262B7Cu, 0x262B84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B84u;
label_262b84:
    // 0x262b84: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x262b84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_262b88:
    // 0x262b88: 0x50430008  beql        $v0, $v1, . + 4 + (0x8 << 2)
label_262b8c:
    if (ctx->pc == 0x262B8Cu) {
        ctx->pc = 0x262B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B88u;
        // 0x262b8c: 0xc60d0080  lwc1        $f13, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B90u;
        goto label_262b90;
    }
    ctx->pc = 0x262B88u;
    {
        const bool branch_taken_0x262b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x262b88) {
            ctx->pc = 0x262B8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262B88u;
            // 0x262b8c: 0xc60d0080  lwc1        $f13, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x262BACu;
            goto label_262bac;
        }
    }
    ctx->pc = 0x262B90u;
label_262b90:
    // 0x262b90: 0xc097f26  jal         func_25FC98
label_262b94:
    if (ctx->pc == 0x262B94u) {
        ctx->pc = 0x262B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B90u;
        // 0x262b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262B98u;
        goto label_262b98;
    }
    ctx->pc = 0x262B90u;
    SET_GPR_U32(ctx, 31, 0x262B98u);
    ctx->pc = 0x262B94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262B90u;
    // 0x262b94: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25FC98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25FC98u, 0x262B90u, 0x262B98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262B98u;
label_262b98:
    // 0x262b98: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x262b98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
label_262b9c:
    // 0x262b9c: 0x50430003  beql        $v0, $v1, . + 4 + (0x3 << 2)
label_262ba0:
    if (ctx->pc == 0x262BA0u) {
        ctx->pc = 0x262BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B9Cu;
        // 0x262ba0: 0xc60d0080  lwc1        $f13, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BA4u;
        goto label_262ba4;
    }
    ctx->pc = 0x262B9Cu;
    {
        const bool branch_taken_0x262b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x262b9c) {
            ctx->pc = 0x262BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262B9Cu;
            // 0x262ba0: 0xc60d0080  lwc1        $f13, 0x80($s0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x262BACu;
            goto label_262bac;
        }
    }
    ctx->pc = 0x262BA4u;
label_262ba4:
    // 0x262ba4: 0x10000003  b           . + 4 + (0x3 << 2)
label_262ba8:
    if (ctx->pc == 0x262BA8u) {
        ctx->pc = 0x262BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BA4u;
        // 0x262ba8: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BACu;
        goto label_262bac;
    }
    ctx->pc = 0x262BA4u;
    {
        const bool branch_taken_0x262ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BA4u;
        // 0x262ba8: 0xc6000080  lwc1        $f0, 0x80($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ba4) {
            ctx->pc = 0x262BB4u;
            goto label_262bb4;
        }
    }
    ctx->pc = 0x262BACu;
label_262bac:
    // 0x262bac: 0xc0b12b0  jal         func_2C4AC0
label_262bb0:
    if (ctx->pc == 0x262BB0u) {
        ctx->pc = 0x262BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BACu;
        // 0x262bb0: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BB4u;
        goto label_262bb4;
    }
    ctx->pc = 0x262BACu;
    SET_GPR_U32(ctx, 31, 0x262BB4u);
    ctx->pc = 0x262BB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262BACu;
    // 0x262bb0: 0x46006b07  neg.s       $f12, $f13 (Delay Slot)
    ctx->f[12] = FPU_NEG_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C4AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C4AC0u, 0x262BACu, 0x262BB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BB4u;
label_262bb4:
    // 0x262bb4: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x262bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_262bb8:
    // 0x262bb8: 0xc60c0084  lwc1        $f12, 0x84($s0)
    ctx->pc = 0x262bb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_262bbc:
    // 0x262bbc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x262bbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_262bc0:
    // 0x262bc0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x262bc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_262bc4:
    // 0x262bc4: 0xc0b98b0  jal         func_2E62C0
label_262bc8:
    if (ctx->pc == 0x262BC8u) {
        ctx->pc = 0x262BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BC4u;
        // 0x262bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BCCu;
        goto label_262bcc;
    }
    ctx->pc = 0x262BC4u;
    SET_GPR_U32(ctx, 31, 0x262BCCu);
    ctx->pc = 0x262BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262BC4u;
    // 0x262bc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E62C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E62C0u, 0x262BC4u, 0x262BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BCCu;
label_262bcc:
    // 0x262bcc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x262bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_262bd0:
    // 0x262bd0: 0xc0cda26  jal         func_336898
label_262bd4:
    if (ctx->pc == 0x262BD4u) {
        ctx->pc = 0x262BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BD0u;
        // 0x262bd4: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BD8u;
        goto label_262bd8;
    }
    ctx->pc = 0x262BD0u;
    SET_GPR_U32(ctx, 31, 0x262BD8u);
    ctx->pc = 0x262BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x262BD0u;
    // 0x262bd4: 0x24050060  addiu       $a1, $zero, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336898u, 0x262BD0u, 0x262BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x262BD8u;
label_262bd8:
    // 0x262bd8: 0x10000013  b           . + 4 + (0x13 << 2)
label_262bdc:
    if (ctx->pc == 0x262BDCu) {
        ctx->pc = 0x262BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BD8u;
        // 0x262bdc: 0xae200290  sw          $zero, 0x290($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BE0u;
        goto label_262be0;
    }
    ctx->pc = 0x262BD8u;
    {
        const bool branch_taken_0x262bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BD8u;
        // 0x262bdc: 0xae200290  sw          $zero, 0x290($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bd8) {
            ctx->pc = 0x262C28u;
            goto label_262c28;
        }
    }
    ctx->pc = 0x262BE0u;
label_262be0:
    // 0x262be0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x262be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_262be4:
    // 0x262be4: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_262be8:
    if (ctx->pc == 0x262BE8u) {
        ctx->pc = 0x262BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BE4u;
        // 0x262be8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262BECu;
        goto label_262bec;
    }
    ctx->pc = 0x262BE4u;
    {
        const bool branch_taken_0x262be4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x262BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BE4u;
        // 0x262be8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262be4) {
            ctx->pc = 0x262C00u;
            goto label_262c00;
        }
    }
    ctx->pc = 0x262BECu;
label_262bec:
    // 0x262bec: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x262becu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_262bf0:
    // 0x262bf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262bf4:
    // 0x262bf4: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_262bf8:
    // 0x262bf8: 0x10000007  b           . + 4 + (0x7 << 2)
label_262bfc:
    if (ctx->pc == 0x262BFCu) {
        ctx->pc = 0x262BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BF8u;
        // 0x262bfc: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C00u;
        goto label_262c00;
    }
    ctx->pc = 0x262BF8u;
    {
        const bool branch_taken_0x262bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BF8u;
        // 0x262bfc: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bf8) {
            ctx->pc = 0x262C18u;
            goto label_262c18;
        }
    }
    ctx->pc = 0x262C00u;
label_262c00:
    // 0x262c00: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_262c04:
    if (ctx->pc == 0x262C04u) {
        ctx->pc = 0x262C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C00u;
        // 0x262c04: 0xae200290  sw          $zero, 0x290($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C08u;
        goto label_262c08;
    }
    ctx->pc = 0x262C00u;
    {
        const bool branch_taken_0x262c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x262c00) {
            ctx->pc = 0x262C04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262C00u;
            // 0x262c04: 0xae200290  sw          $zero, 0x290($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262C28u;
            goto label_262c28;
        }
    }
    ctx->pc = 0x262C08u;
label_262c08:
    // 0x262c08: 0x8e240274  lw          $a0, 0x274($s1)
    ctx->pc = 0x262c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 628)));
label_262c0c:
    // 0x262c0c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x262c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_262c10:
    // 0x262c10: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x262c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_262c14:
    // 0x262c14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x262c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_262c18:
    // 0x262c18: 0x40f809  jalr        $v0
label_262c1c:
    if (ctx->pc == 0x262C1Cu) {
        ctx->pc = 0x262C20u;
        goto label_262c20;
    }
    ctx->pc = 0x262C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x262C20u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262C18u, 0x262C20u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x262C20u;
label_262c20:
    // 0x262c20: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x262c20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_262c24:
    // 0x262c24: 0xae200290  sw          $zero, 0x290($s1)
    ctx->pc = 0x262c24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 656), GPR_U32(ctx, 0));
label_262c28:
    // 0x262c28: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x262c28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_262c2c:
    // 0x262c2c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x262c2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_262c30:
    // 0x262c30: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x262c30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_262c34:
    // 0x262c34: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x262c34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_262c38:
    // 0x262c38: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x262c38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_262c3c:
    // 0x262c3c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x262c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_262c40:
    // 0x262c40: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x262c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_262c44:
    // 0x262c44: 0x3e00008  jr          $ra
label_262c48:
    if (ctx->pc == 0x262C48u) {
        ctx->pc = 0x262C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C44u;
        // 0x262c48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x262C4Cu;
        goto label_262c4c;
    }
    ctx->pc = 0x262C44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x262C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C44u;
        // 0x262c48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x262C44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x262C4Cu;
label_262c4c:
    // 0x262c4c: 0x0  nop
    ctx->pc = 0x262c4cu;
    // NOP
    ctx->pc = 0x262c50u;
}
