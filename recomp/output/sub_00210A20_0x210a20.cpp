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

// Function: sub_00210A20
// Address: 0x210a20 - 0x210dc8
void sub_00210A20_0x210a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00210A20_0x210a20");
#endif

    switch (ctx->pc) {
        case 0x210a20u: goto label_210a20;
        case 0x210a24u: goto label_210a24;
        case 0x210a28u: goto label_210a28;
        case 0x210a2cu: goto label_210a2c;
        case 0x210a30u: goto label_210a30;
        case 0x210a34u: goto label_210a34;
        case 0x210a38u: goto label_210a38;
        case 0x210a3cu: goto label_210a3c;
        case 0x210a40u: goto label_210a40;
        case 0x210a44u: goto label_210a44;
        case 0x210a48u: goto label_210a48;
        case 0x210a4cu: goto label_210a4c;
        case 0x210a50u: goto label_210a50;
        case 0x210a54u: goto label_210a54;
        case 0x210a58u: goto label_210a58;
        case 0x210a5cu: goto label_210a5c;
        case 0x210a60u: goto label_210a60;
        case 0x210a64u: goto label_210a64;
        case 0x210a68u: goto label_210a68;
        case 0x210a6cu: goto label_210a6c;
        case 0x210a70u: goto label_210a70;
        case 0x210a74u: goto label_210a74;
        case 0x210a78u: goto label_210a78;
        case 0x210a7cu: goto label_210a7c;
        case 0x210a80u: goto label_210a80;
        case 0x210a84u: goto label_210a84;
        case 0x210a88u: goto label_210a88;
        case 0x210a8cu: goto label_210a8c;
        case 0x210a90u: goto label_210a90;
        case 0x210a94u: goto label_210a94;
        case 0x210a98u: goto label_210a98;
        case 0x210a9cu: goto label_210a9c;
        case 0x210aa0u: goto label_210aa0;
        case 0x210aa4u: goto label_210aa4;
        case 0x210aa8u: goto label_210aa8;
        case 0x210aacu: goto label_210aac;
        case 0x210ab0u: goto label_210ab0;
        case 0x210ab4u: goto label_210ab4;
        case 0x210ab8u: goto label_210ab8;
        case 0x210abcu: goto label_210abc;
        case 0x210ac0u: goto label_210ac0;
        case 0x210ac4u: goto label_210ac4;
        case 0x210ac8u: goto label_210ac8;
        case 0x210accu: goto label_210acc;
        case 0x210ad0u: goto label_210ad0;
        case 0x210ad4u: goto label_210ad4;
        case 0x210ad8u: goto label_210ad8;
        case 0x210adcu: goto label_210adc;
        case 0x210ae0u: goto label_210ae0;
        case 0x210ae4u: goto label_210ae4;
        case 0x210ae8u: goto label_210ae8;
        case 0x210aecu: goto label_210aec;
        case 0x210af0u: goto label_210af0;
        case 0x210af4u: goto label_210af4;
        case 0x210af8u: goto label_210af8;
        case 0x210afcu: goto label_210afc;
        case 0x210b00u: goto label_210b00;
        case 0x210b04u: goto label_210b04;
        case 0x210b08u: goto label_210b08;
        case 0x210b0cu: goto label_210b0c;
        case 0x210b10u: goto label_210b10;
        case 0x210b14u: goto label_210b14;
        case 0x210b18u: goto label_210b18;
        case 0x210b1cu: goto label_210b1c;
        case 0x210b20u: goto label_210b20;
        case 0x210b24u: goto label_210b24;
        case 0x210b28u: goto label_210b28;
        case 0x210b2cu: goto label_210b2c;
        case 0x210b30u: goto label_210b30;
        case 0x210b34u: goto label_210b34;
        case 0x210b38u: goto label_210b38;
        case 0x210b3cu: goto label_210b3c;
        case 0x210b40u: goto label_210b40;
        case 0x210b44u: goto label_210b44;
        case 0x210b48u: goto label_210b48;
        case 0x210b4cu: goto label_210b4c;
        case 0x210b50u: goto label_210b50;
        case 0x210b54u: goto label_210b54;
        case 0x210b58u: goto label_210b58;
        case 0x210b5cu: goto label_210b5c;
        case 0x210b60u: goto label_210b60;
        case 0x210b64u: goto label_210b64;
        case 0x210b68u: goto label_210b68;
        case 0x210b6cu: goto label_210b6c;
        case 0x210b70u: goto label_210b70;
        case 0x210b74u: goto label_210b74;
        case 0x210b78u: goto label_210b78;
        case 0x210b7cu: goto label_210b7c;
        case 0x210b80u: goto label_210b80;
        case 0x210b84u: goto label_210b84;
        case 0x210b88u: goto label_210b88;
        case 0x210b8cu: goto label_210b8c;
        case 0x210b90u: goto label_210b90;
        case 0x210b94u: goto label_210b94;
        case 0x210b98u: goto label_210b98;
        case 0x210b9cu: goto label_210b9c;
        case 0x210ba0u: goto label_210ba0;
        case 0x210ba4u: goto label_210ba4;
        case 0x210ba8u: goto label_210ba8;
        case 0x210bacu: goto label_210bac;
        case 0x210bb0u: goto label_210bb0;
        case 0x210bb4u: goto label_210bb4;
        case 0x210bb8u: goto label_210bb8;
        case 0x210bbcu: goto label_210bbc;
        case 0x210bc0u: goto label_210bc0;
        case 0x210bc4u: goto label_210bc4;
        case 0x210bc8u: goto label_210bc8;
        case 0x210bccu: goto label_210bcc;
        case 0x210bd0u: goto label_210bd0;
        case 0x210bd4u: goto label_210bd4;
        case 0x210bd8u: goto label_210bd8;
        case 0x210bdcu: goto label_210bdc;
        case 0x210be0u: goto label_210be0;
        case 0x210be4u: goto label_210be4;
        case 0x210be8u: goto label_210be8;
        case 0x210becu: goto label_210bec;
        case 0x210bf0u: goto label_210bf0;
        case 0x210bf4u: goto label_210bf4;
        case 0x210bf8u: goto label_210bf8;
        case 0x210bfcu: goto label_210bfc;
        case 0x210c00u: goto label_210c00;
        case 0x210c04u: goto label_210c04;
        case 0x210c08u: goto label_210c08;
        case 0x210c0cu: goto label_210c0c;
        case 0x210c10u: goto label_210c10;
        case 0x210c14u: goto label_210c14;
        case 0x210c18u: goto label_210c18;
        case 0x210c1cu: goto label_210c1c;
        case 0x210c20u: goto label_210c20;
        case 0x210c24u: goto label_210c24;
        case 0x210c28u: goto label_210c28;
        case 0x210c2cu: goto label_210c2c;
        case 0x210c30u: goto label_210c30;
        case 0x210c34u: goto label_210c34;
        case 0x210c38u: goto label_210c38;
        case 0x210c3cu: goto label_210c3c;
        case 0x210c40u: goto label_210c40;
        case 0x210c44u: goto label_210c44;
        case 0x210c48u: goto label_210c48;
        case 0x210c4cu: goto label_210c4c;
        case 0x210c50u: goto label_210c50;
        case 0x210c54u: goto label_210c54;
        case 0x210c58u: goto label_210c58;
        case 0x210c5cu: goto label_210c5c;
        case 0x210c60u: goto label_210c60;
        case 0x210c64u: goto label_210c64;
        case 0x210c68u: goto label_210c68;
        case 0x210c6cu: goto label_210c6c;
        case 0x210c70u: goto label_210c70;
        case 0x210c74u: goto label_210c74;
        case 0x210c78u: goto label_210c78;
        case 0x210c7cu: goto label_210c7c;
        case 0x210c80u: goto label_210c80;
        case 0x210c84u: goto label_210c84;
        case 0x210c88u: goto label_210c88;
        case 0x210c8cu: goto label_210c8c;
        case 0x210c90u: goto label_210c90;
        case 0x210c94u: goto label_210c94;
        case 0x210c98u: goto label_210c98;
        case 0x210c9cu: goto label_210c9c;
        case 0x210ca0u: goto label_210ca0;
        case 0x210ca4u: goto label_210ca4;
        case 0x210ca8u: goto label_210ca8;
        case 0x210cacu: goto label_210cac;
        case 0x210cb0u: goto label_210cb0;
        case 0x210cb4u: goto label_210cb4;
        case 0x210cb8u: goto label_210cb8;
        case 0x210cbcu: goto label_210cbc;
        case 0x210cc0u: goto label_210cc0;
        case 0x210cc4u: goto label_210cc4;
        case 0x210cc8u: goto label_210cc8;
        case 0x210cccu: goto label_210ccc;
        case 0x210cd0u: goto label_210cd0;
        case 0x210cd4u: goto label_210cd4;
        case 0x210cd8u: goto label_210cd8;
        case 0x210cdcu: goto label_210cdc;
        case 0x210ce0u: goto label_210ce0;
        case 0x210ce4u: goto label_210ce4;
        case 0x210ce8u: goto label_210ce8;
        case 0x210cecu: goto label_210cec;
        case 0x210cf0u: goto label_210cf0;
        case 0x210cf4u: goto label_210cf4;
        case 0x210cf8u: goto label_210cf8;
        case 0x210cfcu: goto label_210cfc;
        case 0x210d00u: goto label_210d00;
        case 0x210d04u: goto label_210d04;
        case 0x210d08u: goto label_210d08;
        case 0x210d0cu: goto label_210d0c;
        case 0x210d10u: goto label_210d10;
        case 0x210d14u: goto label_210d14;
        case 0x210d18u: goto label_210d18;
        case 0x210d1cu: goto label_210d1c;
        case 0x210d20u: goto label_210d20;
        case 0x210d24u: goto label_210d24;
        case 0x210d28u: goto label_210d28;
        case 0x210d2cu: goto label_210d2c;
        case 0x210d30u: goto label_210d30;
        case 0x210d34u: goto label_210d34;
        case 0x210d38u: goto label_210d38;
        case 0x210d3cu: goto label_210d3c;
        case 0x210d40u: goto label_210d40;
        case 0x210d44u: goto label_210d44;
        case 0x210d48u: goto label_210d48;
        case 0x210d4cu: goto label_210d4c;
        case 0x210d50u: goto label_210d50;
        case 0x210d54u: goto label_210d54;
        case 0x210d58u: goto label_210d58;
        case 0x210d5cu: goto label_210d5c;
        case 0x210d60u: goto label_210d60;
        case 0x210d64u: goto label_210d64;
        case 0x210d68u: goto label_210d68;
        case 0x210d6cu: goto label_210d6c;
        case 0x210d70u: goto label_210d70;
        case 0x210d74u: goto label_210d74;
        case 0x210d78u: goto label_210d78;
        case 0x210d7cu: goto label_210d7c;
        case 0x210d80u: goto label_210d80;
        case 0x210d84u: goto label_210d84;
        case 0x210d88u: goto label_210d88;
        case 0x210d8cu: goto label_210d8c;
        case 0x210d90u: goto label_210d90;
        case 0x210d94u: goto label_210d94;
        case 0x210d98u: goto label_210d98;
        case 0x210d9cu: goto label_210d9c;
        case 0x210da0u: goto label_210da0;
        case 0x210da4u: goto label_210da4;
        case 0x210da8u: goto label_210da8;
        case 0x210dacu: goto label_210dac;
        case 0x210db0u: goto label_210db0;
        case 0x210db4u: goto label_210db4;
        case 0x210db8u: goto label_210db8;
        case 0x210dbcu: goto label_210dbc;
        case 0x210dc0u: goto label_210dc0;
        case 0x210dc4u: goto label_210dc4;
        default: break;
    }

    ctx->pc = 0x210a20u;

label_210a20:
    // 0x210a20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x210a20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_210a24:
    // 0x210a24: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x210a24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_210a28:
    // 0x210a28: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x210a28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_210a2c:
    // 0x210a2c: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x210a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_210a30:
    // 0x210a30: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x210a30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_210a34:
    // 0x210a34: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x210a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_210a38:
    // 0x210a38: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x210a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_210a3c:
    // 0x210a3c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x210a3cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_210a40:
    // 0x210a40: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x210a40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_210a44:
    // 0x210a44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x210a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_210a48:
    // 0x210a48: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x210a48u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210a4c:
    // 0x210a4c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x210a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_210a50:
    // 0x210a50: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x210a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_210a54:
    // 0x210a54: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x210a54u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_210a58:
    // 0x210a58: 0x8c43bd48  lw          $v1, -0x42B8($v0)
    ctx->pc = 0x210a58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
label_210a5c:
    // 0x210a5c: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x210a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_210a60:
    // 0x210a60: 0x8c660100  lw          $a2, 0x100($v1)
    ctx->pc = 0x210a60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
label_210a64:
    // 0x210a64: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x210a64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_210a68:
    // 0x210a68: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x210a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
label_210a6c:
    // 0x210a6c: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x210a6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_210a70:
    // 0x210a70: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x210a70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_210a74:
    // 0x210a74: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x210a74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_210a78:
    // 0x210a78: 0xc0f6a9a  jal         func_3DAA68
label_210a7c:
    if (ctx->pc == 0x210A7Cu) {
        ctx->pc = 0x210A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210A78u;
        // 0x210a7c: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210A80u;
        goto label_210a80;
    }
    ctx->pc = 0x210A78u;
    SET_GPR_U32(ctx, 31, 0x210A80u);
    ctx->pc = 0x210A7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210A78u;
    // 0x210a7c: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x210A78u, 0x210A80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A80u;
label_210a80:
    // 0x210a80: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x210a80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_210a84:
    // 0x210a84: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x210a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_210a88:
    // 0x210a88: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x210a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_210a8c:
    // 0x210a8c: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x210a8cu;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
label_210a90:
    // 0x210a90: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x210a90u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
label_210a94:
    // 0x210a94: 0x4604255c  madd.s      $f21, $f4, $f4
    ctx->pc = 0x210a94u;
    ctx->f[21] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
label_210a98:
    // 0x210a98: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x210a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_210a9c:
    // 0x210a9c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x210a9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_210aa0:
    // 0x210aa0: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_210aa4:
    if (ctx->pc == 0x210AA4u) {
        ctx->pc = 0x210AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AA0u;
        // 0x210aa4: 0x8e2400b8  lw          $a0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AA8u;
        goto label_210aa8;
    }
    ctx->pc = 0x210AA0u;
    {
        const bool branch_taken_0x210aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210aa0) {
            ctx->pc = 0x210AA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210AA0u;
            // 0x210aa4: 0x8e2400b8  lw          $a0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210ABCu;
            goto label_210abc;
        }
    }
    ctx->pc = 0x210AA8u;
label_210aa8:
    // 0x210aa8: 0x8e230138  lw          $v1, 0x138($s1)
    ctx->pc = 0x210aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 312)));
label_210aac:
    // 0x210aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x210aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_210ab0:
    // 0x210ab0: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_210ab4:
    if (ctx->pc == 0x210AB4u) {
        ctx->pc = 0x210AB8u;
        goto label_210ab8;
    }
    ctx->pc = 0x210AB0u;
    {
        const bool branch_taken_0x210ab0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x210ab0) {
            ctx->pc = 0x210B04u;
            goto label_210b04;
        }
    }
    ctx->pc = 0x210AB8u;
label_210ab8:
    // 0x210ab8: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x210ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_210abc:
    // 0x210abc: 0xc0878a4  jal         func_21E290
label_210ac0:
    if (ctx->pc == 0x210AC0u) {
        ctx->pc = 0x210AC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210ABCu;
        // 0x210ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AC4u;
        goto label_210ac4;
    }
    ctx->pc = 0x210ABCu;
    SET_GPR_U32(ctx, 31, 0x210AC4u);
    ctx->pc = 0x210AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210ABCu;
    // 0x210ac0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E290u, 0x210ABCu, 0x210AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210AC4u;
label_210ac4:
    // 0x210ac4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x210ac4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210ac8:
    // 0x210ac8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x210ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_210acc:
    // 0x210acc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_210ad0:
    if (ctx->pc == 0x210AD0u) {
        ctx->pc = 0x210AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210ACCu;
        // 0x210ad0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AD4u;
        goto label_210ad4;
    }
    ctx->pc = 0x210ACCu;
    {
        const bool branch_taken_0x210acc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x210AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210ACCu;
        // 0x210ad0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210acc) {
            ctx->pc = 0x210AE8u;
            goto label_210ae8;
        }
    }
    ctx->pc = 0x210AD4u;
label_210ad4:
    // 0x210ad4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x210ad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_210ad8:
    // 0x210ad8: 0x0  nop
    ctx->pc = 0x210ad8u;
    // NOP
label_210adc:
    // 0x210adc: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x210adcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_210ae0:
    // 0x210ae0: 0x1000007d  b           . + 4 + (0x7D << 2)
label_210ae4:
    if (ctx->pc == 0x210AE4u) {
        ctx->pc = 0x210AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AE0u;
        // 0x210ae4: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210AE8u;
        goto label_210ae8;
    }
    ctx->pc = 0x210AE0u;
    {
        const bool branch_taken_0x210ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AE0u;
        // 0x210ae4: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210ae0) {
            ctx->pc = 0x210CD8u;
            goto label_210cd8;
        }
    }
    ctx->pc = 0x210AE8u;
label_210ae8:
    // 0x210ae8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210ae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_210aec:
    // 0x210aec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x210aecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_210af0:
    // 0x210af0: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x210af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_210af4:
    // 0x210af4: 0x0  nop
    ctx->pc = 0x210af4u;
    // NOP
label_210af8:
    // 0x210af8: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x210af8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_210afc:
    // 0x210afc: 0x10000075  b           . + 4 + (0x75 << 2)
label_210b00:
    if (ctx->pc == 0x210B00u) {
        ctx->pc = 0x210B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AFCu;
        // 0x210b00: 0x4614a500  add.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B04u;
        goto label_210b04;
    }
    ctx->pc = 0x210AFCu;
    {
        const bool branch_taken_0x210afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210AFCu;
        // 0x210b00: 0x4614a500  add.s       $f20, $f20, $f20 (Delay Slot)
        ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210afc) {
            ctx->pc = 0x210CD4u;
            goto label_210cd4;
        }
    }
    ctx->pc = 0x210B04u;
label_210b04:
    // 0x210b04: 0x50600074  beql        $v1, $zero, . + 4 + (0x74 << 2)
label_210b08:
    if (ctx->pc == 0x210B08u) {
        ctx->pc = 0x210B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B04u;
        // 0x210b08: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B0Cu;
        goto label_210b0c;
    }
    ctx->pc = 0x210B04u;
    {
        const bool branch_taken_0x210b04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b04) {
            ctx->pc = 0x210B08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210B04u;
            // 0x210b08: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210CD8u;
            goto label_210cd8;
        }
    }
    ctx->pc = 0x210B0Cu;
label_210b0c:
    // 0x210b0c: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x210b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_210b10:
    // 0x210b10: 0xc0878a4  jal         func_21E290
label_210b14:
    if (ctx->pc == 0x210B14u) {
        ctx->pc = 0x210B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B10u;
        // 0x210b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B18u;
        goto label_210b18;
    }
    ctx->pc = 0x210B10u;
    SET_GPR_U32(ctx, 31, 0x210B18u);
    ctx->pc = 0x210B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B10u;
    // 0x210b14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E290u, 0x210B10u, 0x210B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B18u;
label_210b18:
    // 0x210b18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x210b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_210b1c:
    // 0x210b1c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_210b20:
    if (ctx->pc == 0x210B20u) {
        ctx->pc = 0x210B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B1Cu;
        // 0x210b20: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B24u;
        goto label_210b24;
    }
    ctx->pc = 0x210B1Cu;
    {
        const bool branch_taken_0x210b1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B1Cu;
        // 0x210b20: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b1c) {
            ctx->pc = 0x210BC4u;
            goto label_210bc4;
        }
    }
    ctx->pc = 0x210B24u;
label_210b24:
    // 0x210b24: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210b24u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210b28:
    // 0x210b28: 0xc62100d0  lwc1        $f1, 0xD0($s1)
    ctx->pc = 0x210b28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_210b2c:
    // 0x210b2c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x210b2cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_210b30:
    // 0x210b30: 0x0  nop
    ctx->pc = 0x210b30u;
    // NOP
label_210b34:
    // 0x210b34: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_210b38:
    if (ctx->pc == 0x210B38u) {
        ctx->pc = 0x210B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B34u;
        // 0x210b38: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B3Cu;
        goto label_210b3c;
    }
    ctx->pc = 0x210B34u;
    {
        const bool branch_taken_0x210b34 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B34u;
        // 0x210b38: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b34) {
            ctx->pc = 0x210B40u;
            goto label_210b40;
        }
    }
    ctx->pc = 0x210B3Cu;
label_210b3c:
    // 0x210b3c: 0x46000886  mov.s       $f2, $f1
    ctx->pc = 0x210b3cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[1]);
label_210b40:
    // 0x210b40: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x210b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
label_210b44:
    // 0x210b44: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x210b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_210b48:
    // 0x210b48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x210b48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210b4c:
    // 0x210b4c: 0x8e3000b8  lw          $s0, 0xB8($s1)
    ctx->pc = 0x210b4cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_210b50:
    // 0x210b50: 0xc0dde53  jal         func_37794C
label_210b54:
    if (ctx->pc == 0x210B54u) {
        ctx->pc = 0x210B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B50u;
        // 0x210b54: 0x460c1302  mul.s       $f12, $f2, $f12 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B58u;
        goto label_210b58;
    }
    ctx->pc = 0x210B50u;
    SET_GPR_U32(ctx, 31, 0x210B58u);
    ctx->pc = 0x210B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210B50u;
    // 0x210b54: 0x460c1302  mul.s       $f12, $f2, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x210B50u, 0x210B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B58u;
label_210b58:
    // 0x210b58: 0x8e0300a4  lw          $v1, 0xA4($s0)
    ctx->pc = 0x210b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 164)));
label_210b5c:
    // 0x210b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x210b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_210b60:
    // 0x210b60: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x210b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_210b64:
    // 0x210b64: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x210b64u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_210b68:
    // 0x210b68: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_210b6c:
    if (ctx->pc == 0x210B6Cu) {
        ctx->pc = 0x210B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B68u;
        // 0x210b6c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B70u;
        goto label_210b70;
    }
    ctx->pc = 0x210B68u;
    {
        const bool branch_taken_0x210b68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b68) {
            ctx->pc = 0x210B6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210B68u;
            // 0x210b6c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x210B70u;
            goto label_210b70;
        }
    }
    ctx->pc = 0x210B70u;
label_210b70:
    // 0x210b70: 0x8012  mflo        $s0
    ctx->pc = 0x210b70u;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_210b74:
    // 0x210b74: 0xc0878a4  jal         func_21E290
label_210b78:
    if (ctx->pc == 0x210B78u) {
        ctx->pc = 0x210B7Cu;
        goto label_210b7c;
    }
    ctx->pc = 0x210B74u;
    SET_GPR_U32(ctx, 31, 0x210B7Cu);
    ctx->pc = 0x21E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E290u, 0x210B74u, 0x210B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210B7Cu;
label_210b7c:
    // 0x210b7c: 0x10000003  b           . + 4 + (0x3 << 2)
label_210b80:
    if (ctx->pc == 0x210B80u) {
        ctx->pc = 0x210B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B7Cu;
        // 0x210b80: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210B84u;
        goto label_210b84;
    }
    ctx->pc = 0x210B7Cu;
    {
        const bool branch_taken_0x210b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B7Cu;
        // 0x210b80: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210b7c) {
            ctx->pc = 0x210B8Cu;
            goto label_210b8c;
        }
    }
    ctx->pc = 0x210B84u;
label_210b84:
    // 0x210b84: 0x0  nop
    ctx->pc = 0x210b84u;
    // NOP
label_210b88:
    // 0x210b88: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x210b88u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_210b8c:
    // 0x210b8c: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x210b8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_210b90:
    // 0x210b90: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x210b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_210b94:
    // 0x210b94: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x210b94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_210b98:
    // 0x210b98: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
label_210b9c:
    if (ctx->pc == 0x210B9Cu) {
        ctx->pc = 0x210B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210B98u;
        // 0x210b9c: 0x8c850060  lw          $a1, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BA0u;
        goto label_210ba0;
    }
    ctx->pc = 0x210B98u;
    {
        const bool branch_taken_0x210b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210b98) {
            ctx->pc = 0x210B9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210B98u;
            // 0x210b9c: 0x8c850060  lw          $a1, 0x60($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210C0Cu;
            goto label_210c0c;
        }
    }
    ctx->pc = 0x210BA0u;
label_210ba0:
    // 0x210ba0: 0xc0878a4  jal         func_21E290
label_210ba4:
    if (ctx->pc == 0x210BA4u) {
        ctx->pc = 0x210BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BA0u;
        // 0x210ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BA8u;
        goto label_210ba8;
    }
    ctx->pc = 0x210BA0u;
    SET_GPR_U32(ctx, 31, 0x210BA8u);
    ctx->pc = 0x210BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210BA0u;
    // 0x210ba4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E290u, 0x210BA0u, 0x210BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BA8u;
label_210ba8:
    // 0x210ba8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x210ba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210bac:
    // 0x210bac: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x210bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_210bb0:
    // 0x210bb0: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x210bb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_210bb4:
    // 0x210bb4: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_210bb8:
    if (ctx->pc == 0x210BB8u) {
        ctx->pc = 0x210BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BB4u;
        // 0x210bb8: 0x8e2400b8  lw          $a0, 0xB8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BBCu;
        goto label_210bbc;
    }
    ctx->pc = 0x210BB4u;
    {
        const bool branch_taken_0x210bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x210bb4) {
            ctx->pc = 0x210BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210BB4u;
            // 0x210bb8: 0x8e2400b8  lw          $a0, 0xB8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210C08u;
            goto label_210c08;
        }
    }
    ctx->pc = 0x210BBCu;
label_210bbc:
    // 0x210bbc: 0x1000fff2  b           . + 4 + (-0xE << 2)
label_210bc0:
    if (ctx->pc == 0x210BC0u) {
        ctx->pc = 0x210BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BBCu;
        // 0x210bc0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BC4u;
        goto label_210bc4;
    }
    ctx->pc = 0x210BBCu;
    {
        const bool branch_taken_0x210bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BBCu;
        // 0x210bc0: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210bbc) {
            ctx->pc = 0x210B88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210b88;
        }
    }
    ctx->pc = 0x210BC4u;
label_210bc4:
    // 0x210bc4: 0xc0dde53  jal         func_37794C
label_210bc8:
    if (ctx->pc == 0x210BC8u) {
        ctx->pc = 0x210BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BC4u;
        // 0x210bc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BCCu;
        goto label_210bcc;
    }
    ctx->pc = 0x210BC4u;
    SET_GPR_U32(ctx, 31, 0x210BCCu);
    ctx->pc = 0x210BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210BC4u;
    // 0x210bc8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37794Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37794Cu, 0x210BC4u, 0x210BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BCCu;
label_210bcc:
    // 0x210bcc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x210bccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210bd0:
    // 0x210bd0: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x210bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_210bd4:
    // 0x210bd4: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x210bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_210bd8:
    // 0x210bd8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x210bd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_210bdc:
    // 0x210bdc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_210be0:
    if (ctx->pc == 0x210BE0u) {
        ctx->pc = 0x210BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BDCu;
        // 0x210be0: 0x8c850060  lw          $a1, 0x60($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BE4u;
        goto label_210be4;
    }
    ctx->pc = 0x210BDCu;
    {
        const bool branch_taken_0x210bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210bdc) {
            ctx->pc = 0x210BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210BDCu;
            // 0x210be0: 0x8c850060  lw          $a1, 0x60($a0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210C0Cu;
            goto label_210c0c;
        }
    }
    ctx->pc = 0x210BE4u;
label_210be4:
    // 0x210be4: 0xc0878a4  jal         func_21E290
label_210be8:
    if (ctx->pc == 0x210BE8u) {
        ctx->pc = 0x210BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BE4u;
        // 0x210be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210BECu;
        goto label_210bec;
    }
    ctx->pc = 0x210BE4u;
    SET_GPR_U32(ctx, 31, 0x210BECu);
    ctx->pc = 0x210BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210BE4u;
    // 0x210be8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E290u, 0x210BE4u, 0x210BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210BECu;
label_210bec:
    // 0x210bec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x210becu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210bf0:
    // 0x210bf0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x210bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_210bf4:
    // 0x210bf4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x210bf4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_210bf8:
    // 0x210bf8: 0x5040fff5  beql        $v0, $zero, . + 4 + (-0xB << 2)
label_210bfc:
    if (ctx->pc == 0x210BFCu) {
        ctx->pc = 0x210BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210BF8u;
        // 0x210bfc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C00u;
        goto label_210c00;
    }
    ctx->pc = 0x210BF8u;
    {
        const bool branch_taken_0x210bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210bf8) {
            ctx->pc = 0x210BFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210BF8u;
            // 0x210bfc: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_210bd0;
        }
    }
    ctx->pc = 0x210C00u;
label_210c00:
    // 0x210c00: 0x60982d  daddu       $s3, $v1, $zero
    ctx->pc = 0x210c00u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_210c04:
    // 0x210c04: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x210c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_210c08:
    // 0x210c08: 0x8c850060  lw          $a1, 0x60($a0)
    ctx->pc = 0x210c08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_210c0c:
    // 0x210c0c: 0xc0878a4  jal         func_21E290
label_210c10:
    if (ctx->pc == 0x210C10u) {
        ctx->pc = 0x210C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C0Cu;
        // 0x210c10: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C14u;
        goto label_210c14;
    }
    ctx->pc = 0x210C0Cu;
    SET_GPR_U32(ctx, 31, 0x210C14u);
    ctx->pc = 0x210C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C0Cu;
    // 0x210c10: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21E290u, 0x210C0Cu, 0x210C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C14u;
label_210c14:
    // 0x210c14: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x210c14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_210c18:
    // 0x210c18: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x210c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_210c1c:
    // 0x210c1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_210c20:
    if (ctx->pc == 0x210C20u) {
        ctx->pc = 0x210C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C1Cu;
        // 0x210c20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C24u;
        goto label_210c24;
    }
    ctx->pc = 0x210C1Cu;
    {
        const bool branch_taken_0x210c1c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x210C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C1Cu;
        // 0x210c20: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c1c) {
            ctx->pc = 0x210C38u;
            goto label_210c38;
        }
    }
    ctx->pc = 0x210C24u;
label_210c24:
    // 0x210c24: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x210c24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_210c28:
    // 0x210c28: 0x0  nop
    ctx->pc = 0x210c28u;
    // NOP
label_210c2c:
    // 0x210c2c: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x210c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_210c30:
    // 0x210c30: 0x10000008  b           . + 4 + (0x8 << 2)
label_210c34:
    if (ctx->pc == 0x210C34u) {
        ctx->pc = 0x210C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C30u;
        // 0x210c34: 0x93980a  movz        $s3, $a0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C38u;
        goto label_210c38;
    }
    ctx->pc = 0x210C30u;
    {
        const bool branch_taken_0x210c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C30u;
        // 0x210c34: 0x93980a  movz        $s3, $a0, $s3 (Delay Slot)
        if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c30) {
            ctx->pc = 0x210C54u;
            goto label_210c54;
        }
    }
    ctx->pc = 0x210C38u;
label_210c38:
    // 0x210c38: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x210c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_210c3c:
    // 0x210c3c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x210c3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_210c40:
    // 0x210c40: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x210c40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_210c44:
    // 0x210c44: 0x0  nop
    ctx->pc = 0x210c44u;
    // NOP
label_210c48:
    // 0x210c48: 0x4680a520  cvt.s.w     $f20, $f20
    ctx->pc = 0x210c48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[20], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_210c4c:
    // 0x210c4c: 0x4614a500  add.s       $f20, $f20, $f20
    ctx->pc = 0x210c4cu;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
label_210c50:
    // 0x210c50: 0x93980a  movz        $s3, $a0, $s3
    ctx->pc = 0x210c50u;
    if (GPR_U64(ctx, 19) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 4));
label_210c54:
    // 0x210c54: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x210c54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_210c58:
    // 0x210c58: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x210c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_210c5c:
    // 0x210c5c: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
label_210c60:
    if (ctx->pc == 0x210C60u) {
        ctx->pc = 0x210C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C5Cu;
        // 0x210c60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C64u;
        goto label_210c64;
    }
    ctx->pc = 0x210C5Cu;
    {
        const bool branch_taken_0x210c5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x210C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C5Cu;
        // 0x210c60: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210c5c) {
            ctx->pc = 0x210CD4u;
            goto label_210cd4;
        }
    }
    ctx->pc = 0x210C64u;
label_210c64:
    // 0x210c64: 0xc0841fa  jal         func_2107E8
label_210c68:
    if (ctx->pc == 0x210C68u) {
        ctx->pc = 0x210C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C64u;
        // 0x210c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C6Cu;
        goto label_210c6c;
    }
    ctx->pc = 0x210C64u;
    SET_GPR_U32(ctx, 31, 0x210C6Cu);
    ctx->pc = 0x210C68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x210C64u;
    // 0x210c68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2107E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2107E8u, 0x210C64u, 0x210C6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210C6Cu;
label_210c6c:
    // 0x210c6c: 0x8e230218  lw          $v1, 0x218($s1)
    ctx->pc = 0x210c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 536)));
label_210c70:
    // 0x210c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x210c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_210c74:
    // 0x210c74: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x210c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_210c78:
    // 0x210c78: 0x40f809  jalr        $v0
label_210c7c:
    if (ctx->pc == 0x210C7Cu) {
        ctx->pc = 0x210C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C78u;
        // 0x210c7c: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C80u;
        goto label_210c80;
    }
    ctx->pc = 0x210C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x210C80u);
        ctx->pc = 0x210C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C78u;
        // 0x210c7c: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210C78u, 0x210C80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x210C80u;
label_210c80:
    // 0x210c80: 0x8e2400b8  lw          $a0, 0xB8($s1)
    ctx->pc = 0x210c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 184)));
label_210c84:
    // 0x210c84: 0x8e23013c  lw          $v1, 0x13C($s1)
    ctx->pc = 0x210c84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
label_210c88:
    // 0x210c88: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x210c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_210c8c:
    // 0x210c8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x210c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_210c90:
    // 0x210c90: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x210c90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_210c94:
    // 0x210c94: 0x54600010  bnel        $v1, $zero, . + 4 + (0x10 << 2)
label_210c98:
    if (ctx->pc == 0x210C98u) {
        ctx->pc = 0x210C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210C94u;
        // 0x210c98: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210C9Cu;
        goto label_210c9c;
    }
    ctx->pc = 0x210C94u;
    {
        const bool branch_taken_0x210c94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x210c94) {
            ctx->pc = 0x210C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210C94u;
            // 0x210c98: 0x8e2400c0  lw          $a0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210CD8u;
            goto label_210cd8;
        }
    }
    ctx->pc = 0x210C9Cu;
label_210c9c:
    // 0x210c9c: 0x8c8200b0  lw          $v0, 0xB0($a0)
    ctx->pc = 0x210c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 176)));
label_210ca0:
    // 0x210ca0: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x210ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
label_210ca4:
    // 0x210ca4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x210ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_210ca8:
    // 0x210ca8: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_210cac:
    if (ctx->pc == 0x210CACu) {
        ctx->pc = 0x210CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CA8u;
        // 0x210cac: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CB0u;
        goto label_210cb0;
    }
    ctx->pc = 0x210CA8u;
    {
        const bool branch_taken_0x210ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x210ca8) {
            ctx->pc = 0x210CACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210CA8u;
            // 0x210cac: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210CCCu;
            goto label_210ccc;
        }
    }
    ctx->pc = 0x210CB0u;
label_210cb0:
    // 0x210cb0: 0x8e2300c4  lw          $v1, 0xC4($s1)
    ctx->pc = 0x210cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_210cb4:
    // 0x210cb4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_210cb8:
    if (ctx->pc == 0x210CB8u) {
        ctx->pc = 0x210CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CB4u;
        // 0x210cb8: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CBCu;
        goto label_210cbc;
    }
    ctx->pc = 0x210CB4u;
    {
        const bool branch_taken_0x210cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x210cb4) {
            ctx->pc = 0x210CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210CB4u;
            // 0x210cb8: 0x8e2200c0  lw          $v0, 0xC0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210CCCu;
            goto label_210ccc;
        }
    }
    ctx->pc = 0x210CBCu;
label_210cbc:
    // 0x210cbc: 0x90620032  lbu         $v0, 0x32($v1)
    ctx->pc = 0x210cbcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 50)));
label_210cc0:
    // 0x210cc0: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x210cc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_210cc4:
    // 0x210cc4: 0x10000003  b           . + 4 + (0x3 << 2)
label_210cc8:
    if (ctx->pc == 0x210CC8u) {
        ctx->pc = 0x210CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CC4u;
        // 0x210cc8: 0xa0620032  sb          $v0, 0x32($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CCCu;
        goto label_210ccc;
    }
    ctx->pc = 0x210CC4u;
    {
        const bool branch_taken_0x210cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CC4u;
        // 0x210cc8: 0xa0620032  sb          $v0, 0x32($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 50), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cc4) {
            ctx->pc = 0x210CD4u;
            goto label_210cd4;
        }
    }
    ctx->pc = 0x210CCCu;
label_210ccc:
    // 0x210ccc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x210cccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_210cd0:
    // 0x210cd0: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x210cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_210cd4:
    // 0x210cd4: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x210cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_210cd8:
    // 0x210cd8: 0x30820080  andi        $v0, $a0, 0x80
    ctx->pc = 0x210cd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
label_210cdc:
    // 0x210cdc: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
label_210ce0:
    if (ctx->pc == 0x210CE0u) {
        ctx->pc = 0x210CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CDCu;
        // 0x210ce0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CE4u;
        goto label_210ce4;
    }
    ctx->pc = 0x210CDCu;
    {
        const bool branch_taken_0x210cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x210CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CDCu;
        // 0x210ce0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cdc) {
            ctx->pc = 0x210DA0u;
            goto label_210da0;
        }
    }
    ctx->pc = 0x210CE4u;
label_210ce4:
    // 0x210ce4: 0x8e230140  lw          $v1, 0x140($s1)
    ctx->pc = 0x210ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_210ce8:
    // 0x210ce8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x210ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_210cec:
    // 0x210cec: 0x5062002d  beql        $v1, $v0, . + 4 + (0x2D << 2)
label_210cf0:
    if (ctx->pc == 0x210CF0u) {
        ctx->pc = 0x210CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CECu;
        // 0x210cf0: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CF4u;
        goto label_210cf4;
    }
    ctx->pc = 0x210CECu;
    {
        const bool branch_taken_0x210cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x210cec) {
            ctx->pc = 0x210CF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x210CECu;
            // 0x210cf0: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
            SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x210DA4u;
            goto label_210da4;
        }
    }
    ctx->pc = 0x210CF4u;
label_210cf4:
    // 0x210cf4: 0x12600017  beqz        $s3, . + 4 + (0x17 << 2)
label_210cf8:
    if (ctx->pc == 0x210CF8u) {
        ctx->pc = 0x210CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CF4u;
        // 0x210cf8: 0x30822000  andi        $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        ctx->pc = 0x210CFCu;
        goto label_210cfc;
    }
    ctx->pc = 0x210CF4u;
    {
        const bool branch_taken_0x210cf4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x210CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210CF4u;
        // 0x210cf8: 0x30822000  andi        $v0, $a0, 0x2000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8192);
        ctx->in_delay_slot = false;
        if (branch_taken_0x210cf4) {
            ctx->pc = 0x210D54u;
            goto label_210d54;
        }
    }
    ctx->pc = 0x210CFCu;
label_210cfc:
    // 0x210cfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_210d00:
    if (ctx->pc == 0x210D00u) {
        ctx->pc = 0x210D04u;
        goto label_210d04;
    }
    ctx->pc = 0x210CFCu;
    {
        const bool branch_taken_0x210cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x210cfc) {
            ctx->pc = 0x210D0Cu;
            goto label_210d0c;
        }
    }
    ctx->pc = 0x210D04u;
label_210d04:
    // 0x210d04: 0xc6200180  lwc1        $f0, 0x180($s1)
    ctx->pc = 0x210d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_210d08:
    // 0x210d08: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x210d08u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
label_210d0c:
    // 0x210d0c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x210d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_210d10:
    // 0x210d10: 0x0  nop
    ctx->pc = 0x210d10u;
    // NOP
label_210d14:
    // 0x210d14: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x210d14u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_210d18:
    // 0x210d18: 0x0  nop
    ctx->pc = 0x210d18u;
    // NOP
label_210d1c:
    // 0x210d1c: 0x4500001e  bc1f        . + 4 + (0x1E << 2)
label_210d20:
    if (ctx->pc == 0x210D20u) {
        ctx->pc = 0x210D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D1Cu;
        // 0x210d20: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D24u;
        goto label_210d24;
    }
    ctx->pc = 0x210D1Cu;
    {
        const bool branch_taken_0x210d1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x210D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D1Cu;
        // 0x210d20: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d1c) {
            ctx->pc = 0x210D98u;
            goto label_210d98;
        }
    }
    ctx->pc = 0x210D24u;
label_210d24:
    // 0x210d24: 0x0  nop
    ctx->pc = 0x210d24u;
    // NOP
label_210d28:
    // 0x210d28: 0x0  nop
    ctx->pc = 0x210d28u;
    // NOP
label_210d2c:
    // 0x210d2c: 0x4614a843  div.s       $f1, $f21, $f20
    ctx->pc = 0x210d2cu;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[20]); }
label_210d30:
    // 0x210d30: 0x3c013fc0  lui         $at, 0x3FC0
    ctx->pc = 0x210d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16320 << 16));
label_210d34:
    // 0x210d34: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210d34u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210d38:
    // 0x210d38: 0x0  nop
    ctx->pc = 0x210d38u;
    // NOP
label_210d3c:
    // 0x210d3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x210d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_210d40:
    // 0x210d40: 0x46000040  add.s       $f1, $f0, $f0
    ctx->pc = 0x210d40u;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_210d44:
    // 0x210d44: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x210d44u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_210d48:
    // 0x210d48: 0x0  nop
    ctx->pc = 0x210d48u;
    // NOP
label_210d4c:
    // 0x210d4c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_210d50:
    if (ctx->pc == 0x210D50u) {
        ctx->pc = 0x210D54u;
        goto label_210d54;
    }
    ctx->pc = 0x210D4Cu;
    {
        const bool branch_taken_0x210d4c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x210d4c) {
            ctx->pc = 0x210D5Cu;
            goto label_210d5c;
        }
    }
    ctx->pc = 0x210D54u;
label_210d54:
    // 0x210d54: 0x10000011  b           . + 4 + (0x11 << 2)
label_210d58:
    if (ctx->pc == 0x210D58u) {
        ctx->pc = 0x210D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D54u;
        // 0x210d58: 0xae200144  sw          $zero, 0x144($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D5Cu;
        goto label_210d5c;
    }
    ctx->pc = 0x210D54u;
    {
        const bool branch_taken_0x210d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D54u;
        // 0x210d58: 0xae200144  sw          $zero, 0x144($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d54) {
            ctx->pc = 0x210D9Cu;
            goto label_210d9c;
        }
    }
    ctx->pc = 0x210D5Cu;
label_210d5c:
    // 0x210d5c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x210d5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_210d60:
    // 0x210d60: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210d60u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210d64:
    // 0x210d64: 0x0  nop
    ctx->pc = 0x210d64u;
    // NOP
label_210d68:
    // 0x210d68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x210d68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_210d6c:
    // 0x210d6c: 0x0  nop
    ctx->pc = 0x210d6cu;
    // NOP
label_210d70:
    // 0x210d70: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_210d74:
    if (ctx->pc == 0x210D74u) {
        ctx->pc = 0x210D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D70u;
        // 0x210d74: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D78u;
        goto label_210d78;
    }
    ctx->pc = 0x210D70u;
    {
        const bool branch_taken_0x210d70 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x210D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D70u;
        // 0x210d74: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d70) {
            ctx->pc = 0x210D98u;
            goto label_210d98;
        }
    }
    ctx->pc = 0x210D78u;
label_210d78:
    // 0x210d78: 0x3c01437f  lui         $at, 0x437F
    ctx->pc = 0x210d78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17279 << 16));
label_210d7c:
    // 0x210d7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x210d7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_210d80:
    // 0x210d80: 0x0  nop
    ctx->pc = 0x210d80u;
    // NOP
label_210d84:
    // 0x210d84: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210d84u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_210d88:
    // 0x210d88: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x210d88u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_210d8c:
    // 0x210d8c: 0xe6210144  swc1        $f1, 0x144($s1)
    ctx->pc = 0x210d8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 324), bits); }
label_210d90:
    // 0x210d90: 0x10000003  b           . + 4 + (0x3 << 2)
label_210d94:
    if (ctx->pc == 0x210D94u) {
        ctx->pc = 0x210D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D90u;
        // 0x210d94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210D98u;
        goto label_210d98;
    }
    ctx->pc = 0x210D90u;
    {
        const bool branch_taken_0x210d90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x210D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210D90u;
        // 0x210d94: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x210d90) {
            ctx->pc = 0x210DA0u;
            goto label_210da0;
        }
    }
    ctx->pc = 0x210D98u;
label_210d98:
    // 0x210d98: 0xae220144  sw          $v0, 0x144($s1)
    ctx->pc = 0x210d98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 324), GPR_U32(ctx, 2));
label_210d9c:
    // 0x210d9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x210d9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_210da0:
    // 0x210da0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x210da0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_210da4:
    // 0x210da4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x210da4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_210da8:
    // 0x210da8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x210da8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_210dac:
    // 0x210dac: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x210dacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_210db0:
    // 0x210db0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x210db0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_210db4:
    // 0x210db4: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x210db4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_210db8:
    // 0x210db8: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x210db8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_210dbc:
    // 0x210dbc: 0x3e00008  jr          $ra
label_210dc0:
    if (ctx->pc == 0x210DC0u) {
        ctx->pc = 0x210DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DBCu;
        // 0x210dc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x210DC4u;
        goto label_210dc4;
    }
    ctx->pc = 0x210DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x210DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x210DBCu;
        // 0x210dc0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x210DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x210DC4u;
label_210dc4:
    // 0x210dc4: 0x0  nop
    ctx->pc = 0x210dc4u;
    // NOP
    ctx->pc = 0x210dc8u;
}
