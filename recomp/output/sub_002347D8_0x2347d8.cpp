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

// Function: sub_002347D8
// Address: 0x2347d8 - 0x234ce0
void sub_002347D8_0x2347d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002347D8_0x2347d8");
#endif

    switch (ctx->pc) {
        case 0x2347d8u: goto label_2347d8;
        case 0x2347dcu: goto label_2347dc;
        case 0x2347e0u: goto label_2347e0;
        case 0x2347e4u: goto label_2347e4;
        case 0x2347e8u: goto label_2347e8;
        case 0x2347ecu: goto label_2347ec;
        case 0x2347f0u: goto label_2347f0;
        case 0x2347f4u: goto label_2347f4;
        case 0x2347f8u: goto label_2347f8;
        case 0x2347fcu: goto label_2347fc;
        case 0x234800u: goto label_234800;
        case 0x234804u: goto label_234804;
        case 0x234808u: goto label_234808;
        case 0x23480cu: goto label_23480c;
        case 0x234810u: goto label_234810;
        case 0x234814u: goto label_234814;
        case 0x234818u: goto label_234818;
        case 0x23481cu: goto label_23481c;
        case 0x234820u: goto label_234820;
        case 0x234824u: goto label_234824;
        case 0x234828u: goto label_234828;
        case 0x23482cu: goto label_23482c;
        case 0x234830u: goto label_234830;
        case 0x234834u: goto label_234834;
        case 0x234838u: goto label_234838;
        case 0x23483cu: goto label_23483c;
        case 0x234840u: goto label_234840;
        case 0x234844u: goto label_234844;
        case 0x234848u: goto label_234848;
        case 0x23484cu: goto label_23484c;
        case 0x234850u: goto label_234850;
        case 0x234854u: goto label_234854;
        case 0x234858u: goto label_234858;
        case 0x23485cu: goto label_23485c;
        case 0x234860u: goto label_234860;
        case 0x234864u: goto label_234864;
        case 0x234868u: goto label_234868;
        case 0x23486cu: goto label_23486c;
        case 0x234870u: goto label_234870;
        case 0x234874u: goto label_234874;
        case 0x234878u: goto label_234878;
        case 0x23487cu: goto label_23487c;
        case 0x234880u: goto label_234880;
        case 0x234884u: goto label_234884;
        case 0x234888u: goto label_234888;
        case 0x23488cu: goto label_23488c;
        case 0x234890u: goto label_234890;
        case 0x234894u: goto label_234894;
        case 0x234898u: goto label_234898;
        case 0x23489cu: goto label_23489c;
        case 0x2348a0u: goto label_2348a0;
        case 0x2348a4u: goto label_2348a4;
        case 0x2348a8u: goto label_2348a8;
        case 0x2348acu: goto label_2348ac;
        case 0x2348b0u: goto label_2348b0;
        case 0x2348b4u: goto label_2348b4;
        case 0x2348b8u: goto label_2348b8;
        case 0x2348bcu: goto label_2348bc;
        case 0x2348c0u: goto label_2348c0;
        case 0x2348c4u: goto label_2348c4;
        case 0x2348c8u: goto label_2348c8;
        case 0x2348ccu: goto label_2348cc;
        case 0x2348d0u: goto label_2348d0;
        case 0x2348d4u: goto label_2348d4;
        case 0x2348d8u: goto label_2348d8;
        case 0x2348dcu: goto label_2348dc;
        case 0x2348e0u: goto label_2348e0;
        case 0x2348e4u: goto label_2348e4;
        case 0x2348e8u: goto label_2348e8;
        case 0x2348ecu: goto label_2348ec;
        case 0x2348f0u: goto label_2348f0;
        case 0x2348f4u: goto label_2348f4;
        case 0x2348f8u: goto label_2348f8;
        case 0x2348fcu: goto label_2348fc;
        case 0x234900u: goto label_234900;
        case 0x234904u: goto label_234904;
        case 0x234908u: goto label_234908;
        case 0x23490cu: goto label_23490c;
        case 0x234910u: goto label_234910;
        case 0x234914u: goto label_234914;
        case 0x234918u: goto label_234918;
        case 0x23491cu: goto label_23491c;
        case 0x234920u: goto label_234920;
        case 0x234924u: goto label_234924;
        case 0x234928u: goto label_234928;
        case 0x23492cu: goto label_23492c;
        case 0x234930u: goto label_234930;
        case 0x234934u: goto label_234934;
        case 0x234938u: goto label_234938;
        case 0x23493cu: goto label_23493c;
        case 0x234940u: goto label_234940;
        case 0x234944u: goto label_234944;
        case 0x234948u: goto label_234948;
        case 0x23494cu: goto label_23494c;
        case 0x234950u: goto label_234950;
        case 0x234954u: goto label_234954;
        case 0x234958u: goto label_234958;
        case 0x23495cu: goto label_23495c;
        case 0x234960u: goto label_234960;
        case 0x234964u: goto label_234964;
        case 0x234968u: goto label_234968;
        case 0x23496cu: goto label_23496c;
        case 0x234970u: goto label_234970;
        case 0x234974u: goto label_234974;
        case 0x234978u: goto label_234978;
        case 0x23497cu: goto label_23497c;
        case 0x234980u: goto label_234980;
        case 0x234984u: goto label_234984;
        case 0x234988u: goto label_234988;
        case 0x23498cu: goto label_23498c;
        case 0x234990u: goto label_234990;
        case 0x234994u: goto label_234994;
        case 0x234998u: goto label_234998;
        case 0x23499cu: goto label_23499c;
        case 0x2349a0u: goto label_2349a0;
        case 0x2349a4u: goto label_2349a4;
        case 0x2349a8u: goto label_2349a8;
        case 0x2349acu: goto label_2349ac;
        case 0x2349b0u: goto label_2349b0;
        case 0x2349b4u: goto label_2349b4;
        case 0x2349b8u: goto label_2349b8;
        case 0x2349bcu: goto label_2349bc;
        case 0x2349c0u: goto label_2349c0;
        case 0x2349c4u: goto label_2349c4;
        case 0x2349c8u: goto label_2349c8;
        case 0x2349ccu: goto label_2349cc;
        case 0x2349d0u: goto label_2349d0;
        case 0x2349d4u: goto label_2349d4;
        case 0x2349d8u: goto label_2349d8;
        case 0x2349dcu: goto label_2349dc;
        case 0x2349e0u: goto label_2349e0;
        case 0x2349e4u: goto label_2349e4;
        case 0x2349e8u: goto label_2349e8;
        case 0x2349ecu: goto label_2349ec;
        case 0x2349f0u: goto label_2349f0;
        case 0x2349f4u: goto label_2349f4;
        case 0x2349f8u: goto label_2349f8;
        case 0x2349fcu: goto label_2349fc;
        case 0x234a00u: goto label_234a00;
        case 0x234a04u: goto label_234a04;
        case 0x234a08u: goto label_234a08;
        case 0x234a0cu: goto label_234a0c;
        case 0x234a10u: goto label_234a10;
        case 0x234a14u: goto label_234a14;
        case 0x234a18u: goto label_234a18;
        case 0x234a1cu: goto label_234a1c;
        case 0x234a20u: goto label_234a20;
        case 0x234a24u: goto label_234a24;
        case 0x234a28u: goto label_234a28;
        case 0x234a2cu: goto label_234a2c;
        case 0x234a30u: goto label_234a30;
        case 0x234a34u: goto label_234a34;
        case 0x234a38u: goto label_234a38;
        case 0x234a3cu: goto label_234a3c;
        case 0x234a40u: goto label_234a40;
        case 0x234a44u: goto label_234a44;
        case 0x234a48u: goto label_234a48;
        case 0x234a4cu: goto label_234a4c;
        case 0x234a50u: goto label_234a50;
        case 0x234a54u: goto label_234a54;
        case 0x234a58u: goto label_234a58;
        case 0x234a5cu: goto label_234a5c;
        case 0x234a60u: goto label_234a60;
        case 0x234a64u: goto label_234a64;
        case 0x234a68u: goto label_234a68;
        case 0x234a6cu: goto label_234a6c;
        case 0x234a70u: goto label_234a70;
        case 0x234a74u: goto label_234a74;
        case 0x234a78u: goto label_234a78;
        case 0x234a7cu: goto label_234a7c;
        case 0x234a80u: goto label_234a80;
        case 0x234a84u: goto label_234a84;
        case 0x234a88u: goto label_234a88;
        case 0x234a8cu: goto label_234a8c;
        case 0x234a90u: goto label_234a90;
        case 0x234a94u: goto label_234a94;
        case 0x234a98u: goto label_234a98;
        case 0x234a9cu: goto label_234a9c;
        case 0x234aa0u: goto label_234aa0;
        case 0x234aa4u: goto label_234aa4;
        case 0x234aa8u: goto label_234aa8;
        case 0x234aacu: goto label_234aac;
        case 0x234ab0u: goto label_234ab0;
        case 0x234ab4u: goto label_234ab4;
        case 0x234ab8u: goto label_234ab8;
        case 0x234abcu: goto label_234abc;
        case 0x234ac0u: goto label_234ac0;
        case 0x234ac4u: goto label_234ac4;
        case 0x234ac8u: goto label_234ac8;
        case 0x234accu: goto label_234acc;
        case 0x234ad0u: goto label_234ad0;
        case 0x234ad4u: goto label_234ad4;
        case 0x234ad8u: goto label_234ad8;
        case 0x234adcu: goto label_234adc;
        case 0x234ae0u: goto label_234ae0;
        case 0x234ae4u: goto label_234ae4;
        case 0x234ae8u: goto label_234ae8;
        case 0x234aecu: goto label_234aec;
        case 0x234af0u: goto label_234af0;
        case 0x234af4u: goto label_234af4;
        case 0x234af8u: goto label_234af8;
        case 0x234afcu: goto label_234afc;
        case 0x234b00u: goto label_234b00;
        case 0x234b04u: goto label_234b04;
        case 0x234b08u: goto label_234b08;
        case 0x234b0cu: goto label_234b0c;
        case 0x234b10u: goto label_234b10;
        case 0x234b14u: goto label_234b14;
        case 0x234b18u: goto label_234b18;
        case 0x234b1cu: goto label_234b1c;
        case 0x234b20u: goto label_234b20;
        case 0x234b24u: goto label_234b24;
        case 0x234b28u: goto label_234b28;
        case 0x234b2cu: goto label_234b2c;
        case 0x234b30u: goto label_234b30;
        case 0x234b34u: goto label_234b34;
        case 0x234b38u: goto label_234b38;
        case 0x234b3cu: goto label_234b3c;
        case 0x234b40u: goto label_234b40;
        case 0x234b44u: goto label_234b44;
        case 0x234b48u: goto label_234b48;
        case 0x234b4cu: goto label_234b4c;
        case 0x234b50u: goto label_234b50;
        case 0x234b54u: goto label_234b54;
        case 0x234b58u: goto label_234b58;
        case 0x234b5cu: goto label_234b5c;
        case 0x234b60u: goto label_234b60;
        case 0x234b64u: goto label_234b64;
        case 0x234b68u: goto label_234b68;
        case 0x234b6cu: goto label_234b6c;
        case 0x234b70u: goto label_234b70;
        case 0x234b74u: goto label_234b74;
        case 0x234b78u: goto label_234b78;
        case 0x234b7cu: goto label_234b7c;
        case 0x234b80u: goto label_234b80;
        case 0x234b84u: goto label_234b84;
        case 0x234b88u: goto label_234b88;
        case 0x234b8cu: goto label_234b8c;
        case 0x234b90u: goto label_234b90;
        case 0x234b94u: goto label_234b94;
        case 0x234b98u: goto label_234b98;
        case 0x234b9cu: goto label_234b9c;
        case 0x234ba0u: goto label_234ba0;
        case 0x234ba4u: goto label_234ba4;
        case 0x234ba8u: goto label_234ba8;
        case 0x234bacu: goto label_234bac;
        case 0x234bb0u: goto label_234bb0;
        case 0x234bb4u: goto label_234bb4;
        case 0x234bb8u: goto label_234bb8;
        case 0x234bbcu: goto label_234bbc;
        case 0x234bc0u: goto label_234bc0;
        case 0x234bc4u: goto label_234bc4;
        case 0x234bc8u: goto label_234bc8;
        case 0x234bccu: goto label_234bcc;
        case 0x234bd0u: goto label_234bd0;
        case 0x234bd4u: goto label_234bd4;
        case 0x234bd8u: goto label_234bd8;
        case 0x234bdcu: goto label_234bdc;
        case 0x234be0u: goto label_234be0;
        case 0x234be4u: goto label_234be4;
        case 0x234be8u: goto label_234be8;
        case 0x234becu: goto label_234bec;
        case 0x234bf0u: goto label_234bf0;
        case 0x234bf4u: goto label_234bf4;
        case 0x234bf8u: goto label_234bf8;
        case 0x234bfcu: goto label_234bfc;
        case 0x234c00u: goto label_234c00;
        case 0x234c04u: goto label_234c04;
        case 0x234c08u: goto label_234c08;
        case 0x234c0cu: goto label_234c0c;
        case 0x234c10u: goto label_234c10;
        case 0x234c14u: goto label_234c14;
        case 0x234c18u: goto label_234c18;
        case 0x234c1cu: goto label_234c1c;
        case 0x234c20u: goto label_234c20;
        case 0x234c24u: goto label_234c24;
        case 0x234c28u: goto label_234c28;
        case 0x234c2cu: goto label_234c2c;
        case 0x234c30u: goto label_234c30;
        case 0x234c34u: goto label_234c34;
        case 0x234c38u: goto label_234c38;
        case 0x234c3cu: goto label_234c3c;
        case 0x234c40u: goto label_234c40;
        case 0x234c44u: goto label_234c44;
        case 0x234c48u: goto label_234c48;
        case 0x234c4cu: goto label_234c4c;
        case 0x234c50u: goto label_234c50;
        case 0x234c54u: goto label_234c54;
        case 0x234c58u: goto label_234c58;
        case 0x234c5cu: goto label_234c5c;
        case 0x234c60u: goto label_234c60;
        case 0x234c64u: goto label_234c64;
        case 0x234c68u: goto label_234c68;
        case 0x234c6cu: goto label_234c6c;
        case 0x234c70u: goto label_234c70;
        case 0x234c74u: goto label_234c74;
        case 0x234c78u: goto label_234c78;
        case 0x234c7cu: goto label_234c7c;
        case 0x234c80u: goto label_234c80;
        case 0x234c84u: goto label_234c84;
        case 0x234c88u: goto label_234c88;
        case 0x234c8cu: goto label_234c8c;
        case 0x234c90u: goto label_234c90;
        case 0x234c94u: goto label_234c94;
        case 0x234c98u: goto label_234c98;
        case 0x234c9cu: goto label_234c9c;
        case 0x234ca0u: goto label_234ca0;
        case 0x234ca4u: goto label_234ca4;
        case 0x234ca8u: goto label_234ca8;
        case 0x234cacu: goto label_234cac;
        case 0x234cb0u: goto label_234cb0;
        case 0x234cb4u: goto label_234cb4;
        case 0x234cb8u: goto label_234cb8;
        case 0x234cbcu: goto label_234cbc;
        case 0x234cc0u: goto label_234cc0;
        case 0x234cc4u: goto label_234cc4;
        case 0x234cc8u: goto label_234cc8;
        case 0x234cccu: goto label_234ccc;
        case 0x234cd0u: goto label_234cd0;
        case 0x234cd4u: goto label_234cd4;
        case 0x234cd8u: goto label_234cd8;
        case 0x234cdcu: goto label_234cdc;
        default: break;
    }

    ctx->pc = 0x2347d8u;

label_2347d8:
    // 0x2347d8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2347d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2347dc:
    // 0x2347dc: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2347dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2347e0:
    // 0x2347e0: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x2347e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_2347e4:
    // 0x2347e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2347e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2347e8:
    // 0x2347e8: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x2347e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_2347ec:
    // 0x2347ec: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x2347ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
label_2347f0:
    // 0x2347f0: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x2347f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_2347f4:
    // 0x2347f4: 0xffbf0088  sd          $ra, 0x88($sp)
    ctx->pc = 0x2347f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 31));
label_2347f8:
    // 0x2347f8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x2347f8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_2347fc:
    // 0x2347fc: 0x8e440fc8  lw          $a0, 0xFC8($s2)
    ctx->pc = 0x2347fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4040)));
label_234800:
    // 0x234800: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
label_234804:
    if (ctx->pc == 0x234804u) {
        ctx->pc = 0x234804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234800u;
        // 0x234804: 0x8e4300b8  lw          $v1, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234808u;
        goto label_234808;
    }
    ctx->pc = 0x234800u;
    {
        const bool branch_taken_0x234800 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234800) {
            ctx->pc = 0x234804u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234800u;
            // 0x234804: 0x8e4300b8  lw          $v1, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234824u;
            goto label_234824;
        }
    }
    ctx->pc = 0x234808u;
label_234808:
    // 0x234808: 0x90820010  lbu         $v0, 0x10($a0)
    ctx->pc = 0x234808u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_23480c:
    // 0x23480c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_234810:
    if (ctx->pc == 0x234810u) {
        ctx->pc = 0x234810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23480Cu;
        // 0x234810: 0x8e4300b8  lw          $v1, 0xB8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234814u;
        goto label_234814;
    }
    ctx->pc = 0x23480Cu;
    {
        const bool branch_taken_0x23480c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23480c) {
            ctx->pc = 0x234810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23480Cu;
            // 0x234810: 0x8e4300b8  lw          $v1, 0xB8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234824u;
            goto label_234824;
        }
    }
    ctx->pc = 0x234814u;
label_234814:
    // 0x234814: 0xc0d59f8  jal         func_3567E0
label_234818:
    if (ctx->pc == 0x234818u) {
        ctx->pc = 0x23481Cu;
        goto label_23481c;
    }
    ctx->pc = 0x234814u;
    SET_GPR_U32(ctx, 31, 0x23481Cu);
    ctx->pc = 0x3567E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3567E0u, 0x234814u, 0x23481Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23481Cu;
label_23481c:
    // 0x23481c: 0x10000127  b           . + 4 + (0x127 << 2)
label_234820:
    if (ctx->pc == 0x234820u) {
        ctx->pc = 0x234820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23481Cu;
        // 0x234820: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234824u;
        goto label_234824;
    }
    ctx->pc = 0x23481Cu;
    {
        const bool branch_taken_0x23481c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23481Cu;
        // 0x234820: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23481c) {
            ctx->pc = 0x234CBCu;
            goto label_234cbc;
        }
    }
    ctx->pc = 0x234824u;
label_234824:
    // 0x234824: 0x8c6213f8  lw          $v0, 0x13F8($v1)
    ctx->pc = 0x234824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5112)));
label_234828:
    // 0x234828: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x234828u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_23482c:
    // 0x23482c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_234830:
    if (ctx->pc == 0x234830u) {
        ctx->pc = 0x234830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23482Cu;
        // 0x234830: 0x8e42036c  lw          $v0, 0x36C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234834u;
        goto label_234834;
    }
    ctx->pc = 0x23482Cu;
    {
        const bool branch_taken_0x23482c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23482c) {
            ctx->pc = 0x234830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23482Cu;
            // 0x234830: 0x8e42036c  lw          $v0, 0x36C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234878u;
            goto label_234878;
        }
    }
    ctx->pc = 0x234834u;
label_234834:
    // 0x234834: 0xc0c3158  jal         func_30C560
label_234838:
    if (ctx->pc == 0x234838u) {
        ctx->pc = 0x234838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234834u;
        // 0x234838: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23483Cu;
        goto label_23483c;
    }
    ctx->pc = 0x234834u;
    SET_GPR_U32(ctx, 31, 0x23483Cu);
    ctx->pc = 0x234838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234834u;
    // 0x234838: 0x8e440104  lw          $a0, 0x104($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C560u, 0x234834u, 0x23483Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23483Cu;
label_23483c:
    // 0x23483c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x23483cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_234840:
    // 0x234840: 0xc0c49d2  jal         func_312748
label_234844:
    if (ctx->pc == 0x234844u) {
        ctx->pc = 0x234844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234840u;
        // 0x234844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234848u;
        goto label_234848;
    }
    ctx->pc = 0x234840u;
    SET_GPR_U32(ctx, 31, 0x234848u);
    ctx->pc = 0x234844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234840u;
    // 0x234844: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312748u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312748u, 0x234840u, 0x234848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234848u;
label_234848:
    // 0x234848: 0x8e430478  lw          $v1, 0x478($s2)
    ctx->pc = 0x234848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1144)));
label_23484c:
    // 0x23484c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23484cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_234850:
    // 0x234850: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x234850u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_234854:
    // 0x234854: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_234858:
    if (ctx->pc == 0x234858u) {
        ctx->pc = 0x234858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234854u;
        // 0x234858: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23485Cu;
        goto label_23485c;
    }
    ctx->pc = 0x234854u;
    {
        const bool branch_taken_0x234854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234854u;
        // 0x234858: 0x31880  sll         $v1, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234854) {
            ctx->pc = 0x234868u;
            goto label_234868;
        }
    }
    ctx->pc = 0x23485Cu;
label_23485c:
    // 0x23485c: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x23485cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_234860:
    // 0x234860: 0x10000002  b           . + 4 + (0x2 << 2)
label_234864:
    if (ctx->pc == 0x234864u) {
        ctx->pc = 0x234864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234860u;
        // 0x234864: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234868u;
        goto label_234868;
    }
    ctx->pc = 0x234860u;
    {
        const bool branch_taken_0x234860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234860u;
        // 0x234864: 0x431021  addu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234860) {
            ctx->pc = 0x23486Cu;
            goto label_23486c;
        }
    }
    ctx->pc = 0x234868u;
label_234868:
    // 0x234868: 0x8e4200b8  lw          $v0, 0xB8($s2)
    ctx->pc = 0x234868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 184)));
label_23486c:
    // 0x23486c: 0x8c4213e8  lw          $v0, 0x13E8($v0)
    ctx->pc = 0x23486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5096)));
label_234870:
    // 0x234870: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x234870u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_234874:
    // 0x234874: 0x8e42036c  lw          $v0, 0x36C($s2)
    ctx->pc = 0x234874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 876)));
label_234878:
    // 0x234878: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x234878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_23487c:
    // 0x23487c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23487cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234880:
    // 0x234880: 0x1043010e  beq         $v0, $v1, . + 4 + (0x10E << 2)
label_234884:
    if (ctx->pc == 0x234884u) {
        ctx->pc = 0x234884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234880u;
        // 0x234884: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234888u;
        goto label_234888;
    }
    ctx->pc = 0x234880u;
    {
        const bool branch_taken_0x234880 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x234884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234880u;
        // 0x234884: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234880) {
            ctx->pc = 0x234CBCu;
            goto label_234cbc;
        }
    }
    ctx->pc = 0x234888u;
label_234888:
    // 0x234888: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x234888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_23488c:
    // 0x23488c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x23488cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_234890:
    // 0x234890: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_234894:
    if (ctx->pc == 0x234894u) {
        ctx->pc = 0x234898u;
        goto label_234898;
    }
    ctx->pc = 0x234890u;
    {
        const bool branch_taken_0x234890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234890) {
            ctx->pc = 0x2348A8u;
            goto label_2348a8;
        }
    }
    ctx->pc = 0x234898u;
label_234898:
    // 0x234898: 0x3c014248  lui         $at, 0x4248
    ctx->pc = 0x234898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16968 << 16));
label_23489c:
    // 0x23489c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x23489cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2348a0:
    // 0x2348a0: 0xc0c4e50  jal         func_313940
label_2348a4:
    if (ctx->pc == 0x2348A4u) {
        ctx->pc = 0x2348A8u;
        goto label_2348a8;
    }
    ctx->pc = 0x2348A0u;
    SET_GPR_U32(ctx, 31, 0x2348A8u);
    ctx->pc = 0x313940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313940u, 0x2348A0u, 0x2348A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348A8u;
label_2348a8:
    // 0x2348a8: 0xc0897cc  jal         func_225F30
label_2348ac:
    if (ctx->pc == 0x2348ACu) {
        ctx->pc = 0x2348ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348A8u;
        // 0x2348ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348B0u;
        goto label_2348b0;
    }
    ctx->pc = 0x2348A8u;
    SET_GPR_U32(ctx, 31, 0x2348B0u);
    ctx->pc = 0x2348ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348A8u;
    // 0x2348ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F30u, 0x2348A8u, 0x2348B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348B0u;
label_2348b0:
    // 0x2348b0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2348b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2348b4:
    // 0x2348b4: 0x3c03004a  lui         $v1, 0x4A
    ctx->pc = 0x2348b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)74 << 16));
label_2348b8:
    // 0x2348b8: 0x8c50bd50  lw          $s0, -0x42B0($v0)
    ctx->pc = 0x2348b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950224)));
label_2348bc:
    // 0x2348bc: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2348bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2348c0:
    // 0x2348c0: 0x8e02121c  lw          $v0, 0x121C($s0)
    ctx->pc = 0x2348c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
label_2348c4:
    // 0x2348c4: 0x14520026  bne         $v0, $s2, . + 4 + (0x26 << 2)
label_2348c8:
    if (ctx->pc == 0x2348C8u) {
        ctx->pc = 0x2348C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348C4u;
        // 0x2348c8: 0x247145c0  addiu       $s1, $v1, 0x45C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 17856));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348CCu;
        goto label_2348cc;
    }
    ctx->pc = 0x2348C4u;
    {
        const bool branch_taken_0x2348c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2348C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348C4u;
        // 0x2348c8: 0x247145c0  addiu       $s1, $v1, 0x45C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 17856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348c4) {
            ctx->pc = 0x234960u;
            goto label_234960;
        }
    }
    ctx->pc = 0x2348CCu;
label_2348cc:
    // 0x2348cc: 0x8e0211c0  lw          $v0, 0x11C0($s0)
    ctx->pc = 0x2348ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
label_2348d0:
    // 0x2348d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2348d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2348d4:
    // 0x2348d4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2348d8:
    if (ctx->pc == 0x2348D8u) {
        ctx->pc = 0x2348DCu;
        goto label_2348dc;
    }
    ctx->pc = 0x2348D4u;
    {
        const bool branch_taken_0x2348d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2348d4) {
            ctx->pc = 0x234960u;
            goto label_234960;
        }
    }
    ctx->pc = 0x2348DCu;
label_2348dc:
    // 0x2348dc: 0x8e021208  lw          $v0, 0x1208($s0)
    ctx->pc = 0x2348dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4616)));
label_2348e0:
    // 0x2348e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2348e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2348e4:
    // 0x2348e4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_2348e8:
    if (ctx->pc == 0x2348E8u) {
        ctx->pc = 0x2348E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348E4u;
        // 0x2348e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348ECu;
        goto label_2348ec;
    }
    ctx->pc = 0x2348E4u;
    {
        const bool branch_taken_0x2348e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2348E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348E4u;
        // 0x2348e8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2348e4) {
            ctx->pc = 0x234960u;
            goto label_234960;
        }
    }
    ctx->pc = 0x2348ECu;
label_2348ec:
    // 0x2348ec: 0xc0f7da4  jal         func_3DF690
label_2348f0:
    if (ctx->pc == 0x2348F0u) {
        ctx->pc = 0x2348F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348ECu;
        // 0x2348f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348F4u;
        goto label_2348f4;
    }
    ctx->pc = 0x2348ECu;
    SET_GPR_U32(ctx, 31, 0x2348F4u);
    ctx->pc = 0x2348F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348ECu;
    // 0x2348f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF690u, 0x2348ECu, 0x2348F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2348F4u;
label_2348f4:
    // 0x2348f4: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_2348f8:
    if (ctx->pc == 0x2348F8u) {
        ctx->pc = 0x2348F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348F4u;
        // 0x2348f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2348FCu;
        goto label_2348fc;
    }
    ctx->pc = 0x2348F4u;
    {
        const bool branch_taken_0x2348f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2348f4) {
            ctx->pc = 0x2348F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2348F4u;
            // 0x2348f8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23491Cu;
            goto label_23491c;
        }
    }
    ctx->pc = 0x2348FCu;
label_2348fc:
    // 0x2348fc: 0xc0f7da0  jal         func_3DF680
label_234900:
    if (ctx->pc == 0x234900u) {
        ctx->pc = 0x234900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2348FCu;
        // 0x234900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234904u;
        goto label_234904;
    }
    ctx->pc = 0x2348FCu;
    SET_GPR_U32(ctx, 31, 0x234904u);
    ctx->pc = 0x234900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2348FCu;
    // 0x234900: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF680u, 0x2348FCu, 0x234904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234904u;
label_234904:
    // 0x234904: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_234908:
    if (ctx->pc == 0x234908u) {
        ctx->pc = 0x234908u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234904u;
        // 0x234908: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23490Cu;
        goto label_23490c;
    }
    ctx->pc = 0x234904u;
    {
        const bool branch_taken_0x234904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234904) {
            ctx->pc = 0x234908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234904u;
            // 0x234908: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23491Cu;
            goto label_23491c;
        }
    }
    ctx->pc = 0x23490Cu;
label_23490c:
    // 0x23490c: 0xc0f7da8  jal         func_3DF6A0
label_234910:
    if (ctx->pc == 0x234910u) {
        ctx->pc = 0x234910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23490Cu;
        // 0x234910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234914u;
        goto label_234914;
    }
    ctx->pc = 0x23490Cu;
    SET_GPR_U32(ctx, 31, 0x234914u);
    ctx->pc = 0x234910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23490Cu;
    // 0x234910: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DF6A0u, 0x23490Cu, 0x234914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234914u;
label_234914:
    // 0x234914: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_234918:
    if (ctx->pc == 0x234918u) {
        ctx->pc = 0x234918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234914u;
        // 0x234918: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23491Cu;
        goto label_23491c;
    }
    ctx->pc = 0x234914u;
    {
        const bool branch_taken_0x234914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x234914) {
            ctx->pc = 0x234918u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234914u;
            // 0x234918: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x23491Cu;
            goto label_23491c;
        }
    }
    ctx->pc = 0x23491Cu;
label_23491c:
    // 0x23491c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_234920:
    if (ctx->pc == 0x234920u) {
        ctx->pc = 0x234920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23491Cu;
        // 0x234920: 0x8e82bd50  lw          $v0, -0x42B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234924u;
        goto label_234924;
    }
    ctx->pc = 0x23491Cu;
    {
        const bool branch_taken_0x23491c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x234920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23491Cu;
        // 0x234920: 0x8e82bd50  lw          $v0, -0x42B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23491c) {
            ctx->pc = 0x234944u;
            goto label_234944;
        }
    }
    ctx->pc = 0x234924u;
label_234924:
    // 0x234924: 0x8c4311e8  lw          $v1, 0x11E8($v0)
    ctx->pc = 0x234924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4584)));
label_234928:
    // 0x234928: 0x56430007  bnel        $s2, $v1, . + 4 + (0x7 << 2)
label_23492c:
    if (ctx->pc == 0x23492Cu) {
        ctx->pc = 0x23492Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234928u;
        // 0x23492c: 0x8c4311d8  lw          $v1, 0x11D8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4568)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234930u;
        goto label_234930;
    }
    ctx->pc = 0x234928u;
    {
        const bool branch_taken_0x234928 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        if (branch_taken_0x234928) {
            ctx->pc = 0x23492Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234928u;
            // 0x23492c: 0x8c4311d8  lw          $v1, 0x11D8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4568)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234948u;
            goto label_234948;
        }
    }
    ctx->pc = 0x234930u;
label_234930:
    // 0x234930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x234930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234934:
    // 0x234934: 0xae32006c  sw          $s2, 0x6C($s1)
    ctx->pc = 0x234934u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 18));
label_234938:
    // 0x234938: 0xa2220088  sb          $v0, 0x88($s1)
    ctx->pc = 0x234938u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 2));
label_23493c:
    // 0x23493c: 0x10000007  b           . + 4 + (0x7 << 2)
label_234940:
    if (ctx->pc == 0x234940u) {
        ctx->pc = 0x234940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23493Cu;
        // 0x234940: 0xa2220078  sb          $v0, 0x78($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234944u;
        goto label_234944;
    }
    ctx->pc = 0x23493Cu;
    {
        const bool branch_taken_0x23493c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23493Cu;
        // 0x234940: 0xa2220078  sb          $v0, 0x78($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23493c) {
            ctx->pc = 0x23495Cu;
            goto label_23495c;
        }
    }
    ctx->pc = 0x234944u;
label_234944:
    // 0x234944: 0x8c4311d8  lw          $v1, 0x11D8($v0)
    ctx->pc = 0x234944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4568)));
label_234948:
    // 0x234948: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
label_23494c:
    if (ctx->pc == 0x23494Cu) {
        ctx->pc = 0x23494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234948u;
        // 0x23494c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234950u;
        goto label_234950;
    }
    ctx->pc = 0x234948u;
    {
        const bool branch_taken_0x234948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x23494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234948u;
        // 0x23494c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234948) {
            ctx->pc = 0x234960u;
            goto label_234960;
        }
    }
    ctx->pc = 0x234950u;
label_234950:
    // 0x234950: 0xae32006c  sw          $s2, 0x6C($s1)
    ctx->pc = 0x234950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 18));
label_234954:
    // 0x234954: 0xa2220078  sb          $v0, 0x78($s1)
    ctx->pc = 0x234954u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 2));
label_234958:
    // 0x234958: 0xa2200088  sb          $zero, 0x88($s1)
    ctx->pc = 0x234958u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 0));
label_23495c:
    // 0x23495c: 0xa2200089  sb          $zero, 0x89($s1)
    ctx->pc = 0x23495cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 0));
label_234960:
    // 0x234960: 0xc0f6a96  jal         func_3DAA58
label_234964:
    if (ctx->pc == 0x234964u) {
        ctx->pc = 0x234964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234960u;
        // 0x234964: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234968u;
        goto label_234968;
    }
    ctx->pc = 0x234960u;
    SET_GPR_U32(ctx, 31, 0x234968u);
    ctx->pc = 0x234964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234960u;
    // 0x234964: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x234960u, 0x234968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234968u;
label_234968:
    // 0x234968: 0x8e84bd50  lw          $a0, -0x42B0($s4)
    ctx->pc = 0x234968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950224)));
label_23496c:
    // 0x23496c: 0xc0bcd36  jal         func_2F34D8
label_234970:
    if (ctx->pc == 0x234970u) {
        ctx->pc = 0x234970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23496Cu;
        // 0x234970: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234974u;
        goto label_234974;
    }
    ctx->pc = 0x23496Cu;
    SET_GPR_U32(ctx, 31, 0x234974u);
    ctx->pc = 0x234970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23496Cu;
    // 0x234970: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F34D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F34D8u, 0x23496Cu, 0x234974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234974u;
label_234974:
    // 0x234974: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_234978:
    if (ctx->pc == 0x234978u) {
        ctx->pc = 0x234978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234974u;
        // 0x234978: 0x8e83bd50  lw          $v1, -0x42B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23497Cu;
        goto label_23497c;
    }
    ctx->pc = 0x234974u;
    {
        const bool branch_taken_0x234974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234974u;
        // 0x234978: 0x8e83bd50  lw          $v1, -0x42B0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234974) {
            ctx->pc = 0x2349ACu;
            goto label_2349ac;
        }
    }
    ctx->pc = 0x23497Cu;
label_23497c:
    // 0x23497c: 0x8c62121c  lw          $v0, 0x121C($v1)
    ctx->pc = 0x23497cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4636)));
label_234980:
    // 0x234980: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_234984:
    if (ctx->pc == 0x234984u) {
        ctx->pc = 0x234984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234980u;
        // 0x234984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234988u;
        goto label_234988;
    }
    ctx->pc = 0x234980u;
    {
        const bool branch_taken_0x234980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234980u;
        // 0x234984: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234980) {
            ctx->pc = 0x2349A0u;
            goto label_2349a0;
        }
    }
    ctx->pc = 0x234988u;
label_234988:
    // 0x234988: 0x8c62036c  lw          $v0, 0x36C($v1)
    ctx->pc = 0x234988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 876)));
label_23498c:
    // 0x23498c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x23498cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_234990:
    // 0x234990: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x234990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_234994:
    // 0x234994: 0x54430006  bnel        $v0, $v1, . + 4 + (0x6 << 2)
label_234998:
    if (ctx->pc == 0x234998u) {
        ctx->pc = 0x234998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234994u;
        // 0x234998: 0x8e4200c0  lw          $v0, 0xC0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23499Cu;
        goto label_23499c;
    }
    ctx->pc = 0x234994u;
    {
        const bool branch_taken_0x234994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x234994) {
            ctx->pc = 0x234998u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234994u;
            // 0x234998: 0x8e4200c0  lw          $v0, 0xC0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2349B0u;
            goto label_2349b0;
        }
    }
    ctx->pc = 0x23499Cu;
label_23499c:
    // 0x23499c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2349a0:
    // 0x2349a0: 0xa2200088  sb          $zero, 0x88($s1)
    ctx->pc = 0x2349a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 0));
label_2349a4:
    // 0x2349a4: 0xa2220089  sb          $v0, 0x89($s1)
    ctx->pc = 0x2349a4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 137), (uint8_t)GPR_U32(ctx, 2));
label_2349a8:
    // 0x2349a8: 0xa2220078  sb          $v0, 0x78($s1)
    ctx->pc = 0x2349a8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 120), (uint8_t)GPR_U32(ctx, 2));
label_2349ac:
    // 0x2349ac: 0x8e4200c0  lw          $v0, 0xC0($s2)
    ctx->pc = 0x2349acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_2349b0:
    // 0x2349b0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2349b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_2349b4:
    // 0x2349b4: 0x5440003d  bnel        $v0, $zero, . + 4 + (0x3D << 2)
label_2349b8:
    if (ctx->pc == 0x2349B8u) {
        ctx->pc = 0x2349B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349B4u;
        // 0x2349b8: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349BCu;
        goto label_2349bc;
    }
    ctx->pc = 0x2349B4u;
    {
        const bool branch_taken_0x2349b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2349b4) {
            ctx->pc = 0x2349B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2349B4u;
            // 0x2349b8: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234AACu;
            goto label_234aac;
        }
    }
    ctx->pc = 0x2349BCu;
label_2349bc:
    // 0x2349bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2349bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2349c0:
    // 0x2349c0: 0xc0899bc  jal         func_2266F0
label_2349c4:
    if (ctx->pc == 0x2349C4u) {
        ctx->pc = 0x2349C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349C0u;
        // 0x2349c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349C8u;
        goto label_2349c8;
    }
    ctx->pc = 0x2349C0u;
    SET_GPR_U32(ctx, 31, 0x2349C8u);
    ctx->pc = 0x2349C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349C0u;
    // 0x2349c4: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x2349C0u, 0x2349C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349C8u;
label_2349c8:
    // 0x2349c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2349c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2349cc:
    // 0x2349cc: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
label_2349d0:
    if (ctx->pc == 0x2349D0u) {
        ctx->pc = 0x2349D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349CCu;
        // 0x2349d0: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349D4u;
        goto label_2349d4;
    }
    ctx->pc = 0x2349CCu;
    {
        const bool branch_taken_0x2349cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2349D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349CCu;
        // 0x2349d0: 0x260400f8  addiu       $a0, $s0, 0xF8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2349cc) {
            ctx->pc = 0x2349E8u;
            goto label_2349e8;
        }
    }
    ctx->pc = 0x2349D4u;
label_2349d4:
    // 0x2349d4: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x2349d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
label_2349d8:
    // 0x2349d8: 0xc0d73cc  jal         func_35CF30
label_2349dc:
    if (ctx->pc == 0x2349DCu) {
        ctx->pc = 0x2349DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2349D8u;
        // 0x2349dc: 0x24a54308  addiu       $a1, $a1, 0x4308 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2349E0u;
        goto label_2349e0;
    }
    ctx->pc = 0x2349D8u;
    SET_GPR_U32(ctx, 31, 0x2349E0u);
    ctx->pc = 0x2349DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2349D8u;
    // 0x2349dc: 0x24a54308  addiu       $a1, $a1, 0x4308 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35CF30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CF30u, 0x2349D8u, 0x2349E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349E0u;
label_2349e0:
    // 0x2349e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2349e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2349e4:
    // 0x2349e4: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x2349e4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_2349e8:
    // 0x2349e8: 0x8e4401a4  lw          $a0, 0x1A4($s2)
    ctx->pc = 0x2349e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 420)));
label_2349ec:
    // 0x2349ec: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2349f0:
    if (ctx->pc == 0x2349F0u) {
        ctx->pc = 0x2349F4u;
        goto label_2349f4;
    }
    ctx->pc = 0x2349ECu;
    {
        const bool branch_taken_0x2349ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2349ec) {
            ctx->pc = 0x234A18u;
            goto label_234a18;
        }
    }
    ctx->pc = 0x2349F4u;
label_2349f4:
    // 0x2349f4: 0xc0b4b34  jal         func_2D2CD0
label_2349f8:
    if (ctx->pc == 0x2349F8u) {
        ctx->pc = 0x2349FCu;
        goto label_2349fc;
    }
    ctx->pc = 0x2349F4u;
    SET_GPR_U32(ctx, 31, 0x2349FCu);
    ctx->pc = 0x2D2CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D2CD0u, 0x2349F4u, 0x2349FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2349FCu;
label_2349fc:
    // 0x2349fc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2349fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_234a00:
    // 0x234a00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x234a00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_234a04:
    // 0x234a04: 0x0  nop
    ctx->pc = 0x234a04u;
    // NOP
label_234a08:
    // 0x234a08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x234a08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_234a0c:
    // 0x234a0c: 0x0  nop
    ctx->pc = 0x234a0cu;
    // NOP
label_234a10:
    // 0x234a10: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
label_234a14:
    if (ctx->pc == 0x234A14u) {
        ctx->pc = 0x234A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A10u;
        // 0x234a14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A18u;
        goto label_234a18;
    }
    ctx->pc = 0x234A10u;
    {
        const bool branch_taken_0x234a10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x234a10) {
            ctx->pc = 0x234A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234A10u;
            // 0x234a14: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A18u;
            goto label_234a18;
        }
    }
    ctx->pc = 0x234A18u;
label_234a18:
    // 0x234a18: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_234a1c:
    if (ctx->pc == 0x234A1Cu) {
        ctx->pc = 0x234A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A18u;
        // 0x234a1c: 0x8e42032c  lw          $v0, 0x32C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A20u;
        goto label_234a20;
    }
    ctx->pc = 0x234A18u;
    {
        const bool branch_taken_0x234a18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x234a18) {
            ctx->pc = 0x234A1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234A18u;
            // 0x234a1c: 0x8e42032c  lw          $v0, 0x32C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A4Cu;
            goto label_234a4c;
        }
    }
    ctx->pc = 0x234A20u;
label_234a20:
    // 0x234a20: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
label_234a24:
    if (ctx->pc == 0x234A24u) {
        ctx->pc = 0x234A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A20u;
        // 0x234a24: 0x8e42032c  lw          $v0, 0x32C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A28u;
        goto label_234a28;
    }
    ctx->pc = 0x234A20u;
    {
        const bool branch_taken_0x234a20 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x234a20) {
            ctx->pc = 0x234A24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234A20u;
            // 0x234a24: 0x8e42032c  lw          $v0, 0x32C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234A4Cu;
            goto label_234a4c;
        }
    }
    ctx->pc = 0x234A28u;
label_234a28:
    // 0x234a28: 0xc0c313a  jal         func_30C4E8
label_234a2c:
    if (ctx->pc == 0x234A2Cu) {
        ctx->pc = 0x234A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A28u;
        // 0x234a2c: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A30u;
        goto label_234a30;
    }
    ctx->pc = 0x234A28u;
    SET_GPR_U32(ctx, 31, 0x234A30u);
    ctx->pc = 0x234A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A28u;
    // 0x234a2c: 0x8e040104  lw          $a0, 0x104($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C4E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C4E8u, 0x234A28u, 0x234A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A30u;
label_234a30:
    // 0x234a30: 0x92420144  lbu         $v0, 0x144($s2)
    ctx->pc = 0x234a30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 324)));
label_234a34:
    // 0x234a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234a38:
    // 0x234a38: 0xc0c5ce6  jal         func_317398
label_234a3c:
    if (ctx->pc == 0x234A3Cu) {
        ctx->pc = 0x234A3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A38u;
        // 0x234a3c: 0xae020144  sw          $v0, 0x144($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A40u;
        goto label_234a40;
    }
    ctx->pc = 0x234A38u;
    SET_GPR_U32(ctx, 31, 0x234A40u);
    ctx->pc = 0x234A3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A38u;
    // 0x234a3c: 0xae020144  sw          $v0, 0x144($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x317398u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x317398u, 0x234A38u, 0x234A40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A40u;
label_234a40:
    // 0x234a40: 0xc085122  jal         func_214488
label_234a44:
    if (ctx->pc == 0x234A44u) {
        ctx->pc = 0x234A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A40u;
        // 0x234a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A48u;
        goto label_234a48;
    }
    ctx->pc = 0x234A40u;
    SET_GPR_U32(ctx, 31, 0x234A48u);
    ctx->pc = 0x234A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234A40u;
    // 0x234a44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x214488u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214488u, 0x234A40u, 0x234A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A48u;
label_234a48:
    // 0x234a48: 0x8e42032c  lw          $v0, 0x32C($s2)
    ctx->pc = 0x234a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_234a4c:
    // 0x234a4c: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
label_234a50:
    if (ctx->pc == 0x234A50u) {
        ctx->pc = 0x234A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234A4Cu;
        // 0x234a50: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234A54u;
        goto label_234a54;
    }
    ctx->pc = 0x234A4Cu;
    {
        const bool branch_taken_0x234a4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234a4c) {
            ctx->pc = 0x234A50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234A4Cu;
            // 0x234a50: 0x8e4200bc  lw          $v0, 0xBC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234AACu;
            goto label_234aac;
        }
    }
    ctx->pc = 0x234A54u;
label_234a54:
    // 0x234a54: 0x3c01c120  lui         $at, 0xC120
    ctx->pc = 0x234a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49440 << 16));
label_234a58:
    // 0x234a58: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x234a58u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_234a5c:
    // 0x234a5c: 0xc0c4e50  jal         func_313940
label_234a60:
    if (ctx->pc == 0x234A60u) {
        ctx->pc = 0x234A64u;
        goto label_234a64;
    }
    ctx->pc = 0x234A5Cu;
    SET_GPR_U32(ctx, 31, 0x234A64u);
    ctx->pc = 0x313940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x313940u, 0x234A5Cu, 0x234A64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234A64u;
label_234a64:
    // 0x234a64: 0x92440144  lbu         $a0, 0x144($s2)
    ctx->pc = 0x234a64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 324)));
label_234a68:
    // 0x234a68: 0x8e42032c  lw          $v0, 0x32C($s2)
    ctx->pc = 0x234a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_234a6c:
    // 0x234a6c: 0xac440144  sw          $a0, 0x144($v0)
    ctx->pc = 0x234a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 324), GPR_U32(ctx, 4));
label_234a70:
    // 0x234a70: 0x8e43032c  lw          $v1, 0x32C($s2)
    ctx->pc = 0x234a70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_234a74:
    // 0x234a74: 0x6a420127  ldl         $v0, 0x127($s2)
    ctx->pc = 0x234a74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_234a78:
    // 0x234a78: 0x6e420120  ldr         $v0, 0x120($s2)
    ctx->pc = 0x234a78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_234a7c:
    // 0x234a7c: 0x6a44012f  ldl         $a0, 0x12F($s2)
    ctx->pc = 0x234a7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_234a80:
    // 0x234a80: 0x6e440128  ldr         $a0, 0x128($s2)
    ctx->pc = 0x234a80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_234a84:
    // 0x234a84: 0xb0620127  sdl         $v0, 0x127($v1)
    ctx->pc = 0x234a84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_234a88:
    // 0x234a88: 0xb4620120  sdr         $v0, 0x120($v1)
    ctx->pc = 0x234a88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_234a8c:
    // 0x234a8c: 0xb064012f  sdl         $a0, 0x12F($v1)
    ctx->pc = 0x234a8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 303); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_234a90:
    // 0x234a90: 0xb4640128  sdr         $a0, 0x128($v1)
    ctx->pc = 0x234a90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 296); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_234a94:
    // 0x234a94: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x234a94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_234a98:
    // 0x234a98: 0x8c830218  lw          $v1, 0x218($a0)
    ctx->pc = 0x234a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 536)));
label_234a9c:
    // 0x234a9c: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x234a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_234aa0:
    // 0x234aa0: 0x40f809  jalr        $v0
label_234aa4:
    if (ctx->pc == 0x234AA4u) {
        ctx->pc = 0x234AA8u;
        goto label_234aa8;
    }
    ctx->pc = 0x234AA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x234AA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234AA0u, 0x234AA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x234AA8u;
label_234aa8:
    // 0x234aa8: 0x8e4200bc  lw          $v0, 0xBC($s2)
    ctx->pc = 0x234aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 188)));
label_234aac:
    // 0x234aac: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x234aacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
label_234ab0:
    // 0x234ab0: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
label_234ab4:
    if (ctx->pc == 0x234AB4u) {
        ctx->pc = 0x234AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AB0u;
        // 0x234ab4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AB8u;
        goto label_234ab8;
    }
    ctx->pc = 0x234AB0u;
    {
        const bool branch_taken_0x234ab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AB0u;
        // 0x234ab4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234ab0) {
            ctx->pc = 0x234CB8u;
            goto label_234cb8;
        }
    }
    ctx->pc = 0x234AB8u;
label_234ab8:
    // 0x234ab8: 0x8c43b808  lw          $v1, -0x47F8($v0)
    ctx->pc = 0x234ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948872)));
label_234abc:
    // 0x234abc: 0x5060007f  beql        $v1, $zero, . + 4 + (0x7F << 2)
label_234ac0:
    if (ctx->pc == 0x234AC0u) {
        ctx->pc = 0x234AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ABCu;
        // 0x234ac0: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AC4u;
        goto label_234ac4;
    }
    ctx->pc = 0x234ABCu;
    {
        const bool branch_taken_0x234abc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x234abc) {
            ctx->pc = 0x234AC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234ABCu;
            // 0x234ac0: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234CBCu;
            goto label_234cbc;
        }
    }
    ctx->pc = 0x234AC4u;
label_234ac4:
    // 0x234ac4: 0x8e4300c0  lw          $v1, 0xC0($s2)
    ctx->pc = 0x234ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 192)));
label_234ac8:
    // 0x234ac8: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x234ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_234acc:
    // 0x234acc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_234ad0:
    if (ctx->pc == 0x234AD0u) {
        ctx->pc = 0x234AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ACCu;
        // 0x234ad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AD4u;
        goto label_234ad4;
    }
    ctx->pc = 0x234ACCu;
    {
        const bool branch_taken_0x234acc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234ACCu;
        // 0x234ad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234acc) {
            ctx->pc = 0x234AE0u;
            goto label_234ae0;
        }
    }
    ctx->pc = 0x234AD4u;
label_234ad4:
    // 0x234ad4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x234ad4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_234ad8:
    // 0x234ad8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_234adc:
    if (ctx->pc == 0x234ADCu) {
        ctx->pc = 0x234AE0u;
        goto label_234ae0;
    }
    ctx->pc = 0x234AD8u;
    {
        const bool branch_taken_0x234ad8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ad8) {
            ctx->pc = 0x234AE4u;
            goto label_234ae4;
        }
    }
    ctx->pc = 0x234AE0u;
label_234ae0:
    // 0x234ae0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x234ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_234ae4:
    // 0x234ae4: 0x50800075  beql        $a0, $zero, . + 4 + (0x75 << 2)
label_234ae8:
    if (ctx->pc == 0x234AE8u) {
        ctx->pc = 0x234AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AE4u;
        // 0x234ae8: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AECu;
        goto label_234aec;
    }
    ctx->pc = 0x234AE4u;
    {
        const bool branch_taken_0x234ae4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x234ae4) {
            ctx->pc = 0x234AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234AE4u;
            // 0x234ae8: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234CBCu;
            goto label_234cbc;
        }
    }
    ctx->pc = 0x234AECu;
label_234aec:
    // 0x234aec: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x234aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_234af0:
    // 0x234af0: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
label_234af4:
    if (ctx->pc == 0x234AF4u) {
        ctx->pc = 0x234AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AF0u;
        // 0x234af4: 0x26510344  addiu       $s1, $s2, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 836));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234AF8u;
        goto label_234af8;
    }
    ctx->pc = 0x234AF0u;
    {
        const bool branch_taken_0x234af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x234AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234AF0u;
        // 0x234af4: 0x26510344  addiu       $s1, $s2, 0x344 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 836));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234af0) {
            ctx->pc = 0x234BA4u;
            goto label_234ba4;
        }
    }
    ctx->pc = 0x234AF8u;
label_234af8:
    // 0x234af8: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x234af8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_234afc:
    // 0x234afc: 0x0  nop
    ctx->pc = 0x234afcu;
    // NOP
label_234b00:
    // 0x234b00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x234b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234b04:
    // 0x234b04: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_234b08:
    if (ctx->pc == 0x234B08u) {
        ctx->pc = 0x234B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B04u;
        // 0x234b08: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B0Cu;
        goto label_234b0c;
    }
    ctx->pc = 0x234B04u;
    {
        const bool branch_taken_0x234b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b04) {
            ctx->pc = 0x234B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234B04u;
            // 0x234b08: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234B94u;
            goto label_234b94;
        }
    }
    ctx->pc = 0x234B0Cu;
label_234b0c:
    // 0x234b0c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x234b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
label_234b10:
    // 0x234b10: 0x8e43033c  lw          $v1, 0x33C($s2)
    ctx->pc = 0x234b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 828)));
label_234b14:
    // 0x234b14: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_234b18:
    // 0x234b18: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234b18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234b1c:
    // 0x234b1c: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x234b1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234b20:
    // 0x234b20: 0xc0f70ce  jal         func_3DC338
label_234b24:
    if (ctx->pc == 0x234B24u) {
        ctx->pc = 0x234B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B20u;
        // 0x234b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B28u;
        goto label_234b28;
    }
    ctx->pc = 0x234B20u;
    SET_GPR_U32(ctx, 31, 0x234B28u);
    ctx->pc = 0x234B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B20u;
    // 0x234b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x234B20u, 0x234B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B28u;
label_234b28:
    // 0x234b28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_234b2c:
    if (ctx->pc == 0x234B2Cu) {
        ctx->pc = 0x234B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B28u;
        // 0x234b2c: 0x7a0200b0  lq          $v0, 0xB0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B30u;
        goto label_234b30;
    }
    ctx->pc = 0x234B28u;
    {
        const bool branch_taken_0x234b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234b28) {
            ctx->pc = 0x234B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234B28u;
            // 0x234b2c: 0x7a0200b0  lq          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234B3Cu;
            goto label_234b3c;
        }
    }
    ctx->pc = 0x234B30u;
label_234b30:
    // 0x234b30: 0xc0c4900  jal         func_312400
label_234b34:
    if (ctx->pc == 0x234B34u) {
        ctx->pc = 0x234B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B30u;
        // 0x234b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B38u;
        goto label_234b38;
    }
    ctx->pc = 0x234B30u;
    SET_GPR_U32(ctx, 31, 0x234B38u);
    ctx->pc = 0x234B34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B30u;
    // 0x234b34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x234B30u, 0x234B38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B38u;
label_234b38:
    // 0x234b38: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x234b38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
label_234b3c:
    // 0x234b3c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x234b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234b40:
    // 0x234b40: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x234b40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
label_234b44:
    // 0x234b44: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x234b44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234b48:
    // 0x234b48: 0x8e84bd50  lw          $a0, -0x42B0($s4)
    ctx->pc = 0x234b48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950224)));
label_234b4c:
    // 0x234b4c: 0xc0bf1fa  jal         func_2FC7E8
label_234b50:
    if (ctx->pc == 0x234B50u) {
        ctx->pc = 0x234B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B4Cu;
        // 0x234b50: 0xc4b40020  lwc1        $f20, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B54u;
        goto label_234b54;
    }
    ctx->pc = 0x234B4Cu;
    SET_GPR_U32(ctx, 31, 0x234B54u);
    ctx->pc = 0x234B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B4Cu;
    // 0x234b50: 0xc4b40020  lwc1        $f20, 0x20($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7E8u, 0x234B4Cu, 0x234B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B54u;
label_234b54:
    // 0x234b54: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x234b54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_234b58:
    // 0x234b58: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x234b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234b5c:
    // 0x234b5c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x234b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_234b60:
    // 0x234b60: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x234b60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_234b64:
    // 0x234b64: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x234b64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_234b68:
    // 0x234b68: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x234b68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234b6c:
    // 0x234b6c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x234b6cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_234b70:
    // 0x234b70: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x234b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_234b74:
    // 0x234b74: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x234b74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_234b78:
    // 0x234b78: 0xc07a308  jal         func_1E8C20
label_234b7c:
    if (ctx->pc == 0x234B7Cu) {
        ctx->pc = 0x234B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B78u;
        // 0x234b7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B80u;
        goto label_234b80;
    }
    ctx->pc = 0x234B78u;
    SET_GPR_U32(ctx, 31, 0x234B80u);
    ctx->pc = 0x234B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234B78u;
    // 0x234b7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8C20u, 0x234B78u, 0x234B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234B80u;
label_234b80:
    // 0x234b80: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x234b80u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_234b84:
    // 0x234b84: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x234b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234b88:
    // 0x234b88: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x234b88u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_234b8c:
    // 0x234b8c: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x234b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_234b90:
    // 0x234b90: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x234b90u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_234b94:
    // 0x234b94: 0x661ffda  bgez        $s3, . + 4 + (-0x26 << 2)
label_234b98:
    if (ctx->pc == 0x234B98u) {
        ctx->pc = 0x234B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B94u;
        // 0x234b98: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234B9Cu;
        goto label_234b9c;
    }
    ctx->pc = 0x234B94u;
    {
        const bool branch_taken_0x234b94 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x234B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B94u;
        // 0x234b98: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b94) {
            ctx->pc = 0x234B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234b00;
        }
    }
    ctx->pc = 0x234B9Cu;
label_234b9c:
    // 0x234b9c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_234ba0:
    if (ctx->pc == 0x234BA0u) {
        ctx->pc = 0x234BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B9Cu;
        // 0x234ba0: 0x8e42032c  lw          $v0, 0x32C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BA4u;
        goto label_234ba4;
    }
    ctx->pc = 0x234B9Cu;
    {
        const bool branch_taken_0x234b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x234BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234B9Cu;
        // 0x234ba0: 0x8e42032c  lw          $v0, 0x32C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234b9c) {
            ctx->pc = 0x234C48u;
            goto label_234c48;
        }
    }
    ctx->pc = 0x234BA4u;
label_234ba4:
    // 0x234ba4: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x234ba4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_234ba8:
    // 0x234ba8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x234ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234bac:
    // 0x234bac: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
label_234bb0:
    if (ctx->pc == 0x234BB0u) {
        ctx->pc = 0x234BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BACu;
        // 0x234bb0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BB4u;
        goto label_234bb4;
    }
    ctx->pc = 0x234BACu;
    {
        const bool branch_taken_0x234bac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234bac) {
            ctx->pc = 0x234BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234BACu;
            // 0x234bb0: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234C3Cu;
            goto label_234c3c;
        }
    }
    ctx->pc = 0x234BB4u;
label_234bb4:
    // 0x234bb4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x234bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_234bb8:
    // 0x234bb8: 0x8e430340  lw          $v1, 0x340($s2)
    ctx->pc = 0x234bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 832)));
label_234bbc:
    // 0x234bbc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x234bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_234bc0:
    // 0x234bc0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x234bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_234bc4:
    // 0x234bc4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x234bc4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_234bc8:
    // 0x234bc8: 0xc0f70ce  jal         func_3DC338
label_234bcc:
    if (ctx->pc == 0x234BCCu) {
        ctx->pc = 0x234BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BC8u;
        // 0x234bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BD0u;
        goto label_234bd0;
    }
    ctx->pc = 0x234BC8u;
    SET_GPR_U32(ctx, 31, 0x234BD0u);
    ctx->pc = 0x234BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BC8u;
    // 0x234bcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC338u, 0x234BC8u, 0x234BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BD0u;
label_234bd0:
    // 0x234bd0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_234bd4:
    if (ctx->pc == 0x234BD4u) {
        ctx->pc = 0x234BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BD0u;
        // 0x234bd4: 0x7a0200b0  lq          $v0, 0xB0($s0) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BD8u;
        goto label_234bd8;
    }
    ctx->pc = 0x234BD0u;
    {
        const bool branch_taken_0x234bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x234bd0) {
            ctx->pc = 0x234BD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x234BD0u;
            // 0x234bd4: 0x7a0200b0  lq          $v0, 0xB0($s0) (Delay Slot)
            SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x234BE4u;
            goto label_234be4;
        }
    }
    ctx->pc = 0x234BD8u;
label_234bd8:
    // 0x234bd8: 0xc0c4900  jal         func_312400
label_234bdc:
    if (ctx->pc == 0x234BDCu) {
        ctx->pc = 0x234BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BD8u;
        // 0x234bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BE0u;
        goto label_234be0;
    }
    ctx->pc = 0x234BD8u;
    SET_GPR_U32(ctx, 31, 0x234BE0u);
    ctx->pc = 0x234BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BD8u;
    // 0x234bdc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x312400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312400u, 0x234BD8u, 0x234BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BE0u;
label_234be0:
    // 0x234be0: 0x7a0200b0  lq          $v0, 0xB0($s0)
    ctx->pc = 0x234be0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 176)));
label_234be4:
    // 0x234be4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x234be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234be8:
    // 0x234be8: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x234be8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
label_234bec:
    // 0x234bec: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x234becu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234bf0:
    // 0x234bf0: 0x8e84bd50  lw          $a0, -0x42B0($s4)
    ctx->pc = 0x234bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950224)));
label_234bf4:
    // 0x234bf4: 0xc0bf1fa  jal         func_2FC7E8
label_234bf8:
    if (ctx->pc == 0x234BF8u) {
        ctx->pc = 0x234BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234BF4u;
        // 0x234bf8: 0xc4b40020  lwc1        $f20, 0x20($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x234BFCu;
        goto label_234bfc;
    }
    ctx->pc = 0x234BF4u;
    SET_GPR_U32(ctx, 31, 0x234BFCu);
    ctx->pc = 0x234BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234BF4u;
    // 0x234bf8: 0xc4b40020  lwc1        $f20, 0x20($a1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7E8u, 0x234BF4u, 0x234BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234BFCu;
label_234bfc:
    // 0x234bfc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x234bfcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_234c00:
    // 0x234c00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x234c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234c04:
    // 0x234c04: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x234c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_234c08:
    // 0x234c08: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x234c08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_234c0c:
    // 0x234c0c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x234c0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_234c10:
    // 0x234c10: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x234c10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234c14:
    // 0x234c14: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x234c14u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_234c18:
    // 0x234c18: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x234c18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_234c1c:
    // 0x234c1c: 0xe4410030  swc1        $f1, 0x30($v0)
    ctx->pc = 0x234c1cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_234c20:
    // 0x234c20: 0xc07a308  jal         func_1E8C20
label_234c24:
    if (ctx->pc == 0x234C24u) {
        ctx->pc = 0x234C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C20u;
        // 0x234c24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C28u;
        goto label_234c28;
    }
    ctx->pc = 0x234C20u;
    SET_GPR_U32(ctx, 31, 0x234C28u);
    ctx->pc = 0x234C24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C20u;
    // 0x234c24: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8C20u, 0x234C20u, 0x234C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C28u;
label_234c28:
    // 0x234c28: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x234c28u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_234c2c:
    // 0x234c2c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x234c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_234c30:
    // 0x234c30: 0xe4540020  swc1        $f20, 0x20($v0)
    ctx->pc = 0x234c30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
label_234c34:
    // 0x234c34: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x234c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
label_234c38:
    // 0x234c38: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x234c38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_234c3c:
    // 0x234c3c: 0x661ffda  bgez        $s3, . + 4 + (-0x26 << 2)
label_234c40:
    if (ctx->pc == 0x234C40u) {
        ctx->pc = 0x234C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C3Cu;
        // 0x234c40: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C44u;
        goto label_234c44;
    }
    ctx->pc = 0x234C3Cu;
    {
        const bool branch_taken_0x234c3c = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x234C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C3Cu;
        // 0x234c40: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c3c) {
            ctx->pc = 0x234BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_234ba8;
        }
    }
    ctx->pc = 0x234C44u;
label_234c44:
    // 0x234c44: 0x8e42032c  lw          $v0, 0x32C($s2)
    ctx->pc = 0x234c44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_234c48:
    // 0x234c48: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_234c4c:
    if (ctx->pc == 0x234C4Cu) {
        ctx->pc = 0x234C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C48u;
        // 0x234c4c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C50u;
        goto label_234c50;
    }
    ctx->pc = 0x234C48u;
    {
        const bool branch_taken_0x234c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x234C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C48u;
        // 0x234c4c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x234c48) {
            ctx->pc = 0x234CBCu;
            goto label_234cbc;
        }
    }
    ctx->pc = 0x234C50u;
label_234c50:
    // 0x234c50: 0xc0f6a96  jal         func_3DAA58
label_234c54:
    if (ctx->pc == 0x234C54u) {
        ctx->pc = 0x234C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C50u;
        // 0x234c54: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C58u;
        goto label_234c58;
    }
    ctx->pc = 0x234C50u;
    SET_GPR_U32(ctx, 31, 0x234C58u);
    ctx->pc = 0x234C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C50u;
    // 0x234c54: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x234C50u, 0x234C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C58u;
label_234c58:
    // 0x234c58: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x234c58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_234c5c:
    // 0x234c5c: 0xafa00040  sw          $zero, 0x40($sp)
    ctx->pc = 0x234c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
label_234c60:
    // 0x234c60: 0x7fa00020  sq          $zero, 0x20($sp)
    ctx->pc = 0x234c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 0));
label_234c64:
    // 0x234c64: 0x7fa00050  sq          $zero, 0x50($sp)
    ctx->pc = 0x234c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 0));
label_234c68:
    // 0x234c68: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x234c68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_234c6c:
    // 0x234c6c: 0x8e44032c  lw          $a0, 0x32C($s2)
    ctx->pc = 0x234c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 812)));
label_234c70:
    // 0x234c70: 0xc096664  jal         func_259990
label_234c74:
    if (ctx->pc == 0x234C74u) {
        ctx->pc = 0x234C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C70u;
        // 0x234c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C78u;
        goto label_234c78;
    }
    ctx->pc = 0x234C70u;
    SET_GPR_U32(ctx, 31, 0x234C78u);
    ctx->pc = 0x234C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C70u;
    // 0x234c74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x259990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259990u, 0x234C70u, 0x234C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C78u;
label_234c78:
    // 0x234c78: 0x8e84bd50  lw          $a0, -0x42B0($s4)
    ctx->pc = 0x234c78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294950224)));
label_234c7c:
    // 0x234c7c: 0xc0bf1fa  jal         func_2FC7E8
label_234c80:
    if (ctx->pc == 0x234C80u) {
        ctx->pc = 0x234C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234C7Cu;
        // 0x234c80: 0xc7b40030  lwc1        $f20, 0x30($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x234C84u;
        goto label_234c84;
    }
    ctx->pc = 0x234C7Cu;
    SET_GPR_U32(ctx, 31, 0x234C84u);
    ctx->pc = 0x234C80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234C7Cu;
    // 0x234c80: 0xc7b40030  lwc1        $f20, 0x30($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FC7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC7E8u, 0x234C7Cu, 0x234C84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234C84u;
label_234c84:
    // 0x234c84: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x234c84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_234c88:
    // 0x234c88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x234c88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_234c8c:
    // 0x234c8c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x234c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_234c90:
    // 0x234c90: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x234c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_234c94:
    // 0x234c94: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x234c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_234c98:
    // 0x234c98: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x234c98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_234c9c:
    // 0x234c9c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x234c9cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_234ca0:
    // 0x234ca0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x234ca0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_234ca4:
    // 0x234ca4: 0xc07a308  jal         func_1E8C20
label_234ca8:
    if (ctx->pc == 0x234CA8u) {
        ctx->pc = 0x234CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CA4u;
        // 0x234ca8: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x234CACu;
        goto label_234cac;
    }
    ctx->pc = 0x234CA4u;
    SET_GPR_U32(ctx, 31, 0x234CACu);
    ctx->pc = 0x234CA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x234CA4u;
    // 0x234ca8: 0xe7a10040  swc1        $f1, 0x40($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E8C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E8C20u, 0x234CA4u, 0x234CACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x234CACu;
label_234cac:
    // 0x234cac: 0x4614a002  mul.s       $f0, $f20, $f20
    ctx->pc = 0x234cacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
label_234cb0:
    // 0x234cb0: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x234cb0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
label_234cb4:
    // 0x234cb4: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x234cb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_234cb8:
    // 0x234cb8: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x234cb8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_234cbc:
    // 0x234cbc: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x234cbcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_234cc0:
    // 0x234cc0: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x234cc0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_234cc4:
    // 0x234cc4: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x234cc4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_234cc8:
    // 0x234cc8: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x234cc8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_234ccc:
    // 0x234ccc: 0xdfbf0088  ld          $ra, 0x88($sp)
    ctx->pc = 0x234cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_234cd0:
    // 0x234cd0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x234cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_234cd4:
    // 0x234cd4: 0x3e00008  jr          $ra
label_234cd8:
    if (ctx->pc == 0x234CD8u) {
        ctx->pc = 0x234CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CD4u;
        // 0x234cd8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x234CDCu;
        goto label_234cdc;
    }
    ctx->pc = 0x234CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x234CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x234CD4u;
        // 0x234cd8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x234CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x234CDCu;
label_234cdc:
    // 0x234cdc: 0x0  nop
    ctx->pc = 0x234cdcu;
    // NOP
    ctx->pc = 0x234ce0u;
}
