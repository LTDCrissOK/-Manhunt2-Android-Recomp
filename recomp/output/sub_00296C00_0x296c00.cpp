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

// Function: sub_00296C00
// Address: 0x296c00 - 0x296cf0
void sub_00296C00_0x296c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296C00_0x296c00");
#endif

    switch (ctx->pc) {
        case 0x296c00u: goto label_296c00;
        case 0x296c04u: goto label_296c04;
        case 0x296c08u: goto label_296c08;
        case 0x296c0cu: goto label_296c0c;
        case 0x296c10u: goto label_296c10;
        case 0x296c14u: goto label_296c14;
        case 0x296c18u: goto label_296c18;
        case 0x296c1cu: goto label_296c1c;
        case 0x296c20u: goto label_296c20;
        case 0x296c24u: goto label_296c24;
        case 0x296c28u: goto label_296c28;
        case 0x296c2cu: goto label_296c2c;
        case 0x296c30u: goto label_296c30;
        case 0x296c34u: goto label_296c34;
        case 0x296c38u: goto label_296c38;
        case 0x296c3cu: goto label_296c3c;
        case 0x296c40u: goto label_296c40;
        case 0x296c44u: goto label_296c44;
        case 0x296c48u: goto label_296c48;
        case 0x296c4cu: goto label_296c4c;
        case 0x296c50u: goto label_296c50;
        case 0x296c54u: goto label_296c54;
        case 0x296c58u: goto label_296c58;
        case 0x296c5cu: goto label_296c5c;
        case 0x296c60u: goto label_296c60;
        case 0x296c64u: goto label_296c64;
        case 0x296c68u: goto label_296c68;
        case 0x296c6cu: goto label_296c6c;
        case 0x296c70u: goto label_296c70;
        case 0x296c74u: goto label_296c74;
        case 0x296c78u: goto label_296c78;
        case 0x296c7cu: goto label_296c7c;
        case 0x296c80u: goto label_296c80;
        case 0x296c84u: goto label_296c84;
        case 0x296c88u: goto label_296c88;
        case 0x296c8cu: goto label_296c8c;
        case 0x296c90u: goto label_296c90;
        case 0x296c94u: goto label_296c94;
        case 0x296c98u: goto label_296c98;
        case 0x296c9cu: goto label_296c9c;
        case 0x296ca0u: goto label_296ca0;
        case 0x296ca4u: goto label_296ca4;
        case 0x296ca8u: goto label_296ca8;
        case 0x296cacu: goto label_296cac;
        case 0x296cb0u: goto label_296cb0;
        case 0x296cb4u: goto label_296cb4;
        case 0x296cb8u: goto label_296cb8;
        case 0x296cbcu: goto label_296cbc;
        case 0x296cc0u: goto label_296cc0;
        case 0x296cc4u: goto label_296cc4;
        case 0x296cc8u: goto label_296cc8;
        case 0x296cccu: goto label_296ccc;
        case 0x296cd0u: goto label_296cd0;
        case 0x296cd4u: goto label_296cd4;
        case 0x296cd8u: goto label_296cd8;
        case 0x296cdcu: goto label_296cdc;
        case 0x296ce0u: goto label_296ce0;
        case 0x296ce4u: goto label_296ce4;
        case 0x296ce8u: goto label_296ce8;
        case 0x296cecu: goto label_296cec;
        default: break;
    }

    ctx->pc = 0x296c00u;

label_296c00:
    // 0x296c00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x296c00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_296c04:
    // 0x296c04: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x296c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_296c08:
    // 0x296c08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x296c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_296c0c:
    // 0x296c0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x296c0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_296c10:
    // 0x296c10: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x296c10u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_296c14:
    // 0x296c14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x296c14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_296c18:
    // 0x296c18: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x296c18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_296c1c:
    // 0x296c1c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x296c1cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_296c20:
    // 0x296c20: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x296c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_296c24:
    // 0x296c24: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x296c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_296c28:
    // 0x296c28: 0x60f809  jalr        $v1
label_296c2c:
    if (ctx->pc == 0x296C2Cu) {
        ctx->pc = 0x296C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C28u;
        // 0x296c2c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C30u;
        goto label_296c30;
    }
    ctx->pc = 0x296C28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x296C30u);
        ctx->pc = 0x296C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C28u;
        // 0x296c2c: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296C28u, 0x296C30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296C30u;
label_296c30:
    // 0x296c30: 0x92020034  lbu         $v0, 0x34($s0)
    ctx->pc = 0x296c30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 52)));
label_296c34:
    // 0x296c34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_296c38:
    if (ctx->pc == 0x296C38u) {
        ctx->pc = 0x296C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C34u;
        // 0x296c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C3Cu;
        goto label_296c3c;
    }
    ctx->pc = 0x296C34u;
    {
        const bool branch_taken_0x296c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C34u;
        // 0x296c38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c34) {
            ctx->pc = 0x296C48u;
            goto label_296c48;
        }
    }
    ctx->pc = 0x296C3Cu;
label_296c3c:
    // 0x296c3c: 0xc6140038  lwc1        $f20, 0x38($s0)
    ctx->pc = 0x296c3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_296c40:
    // 0x296c40: 0x10000004  b           . + 4 + (0x4 << 2)
label_296c44:
    if (ctx->pc == 0x296C44u) {
        ctx->pc = 0x296C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C40u;
        // 0x296c44: 0x8e11003c  lw          $s1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C48u;
        goto label_296c48;
    }
    ctx->pc = 0x296C40u;
    {
        const bool branch_taken_0x296c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C40u;
        // 0x296c44: 0x8e11003c  lw          $s1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c40) {
            ctx->pc = 0x296C54u;
            goto label_296c54;
        }
    }
    ctx->pc = 0x296C48u;
label_296c48:
    // 0x296c48: 0xe6140038  swc1        $f20, 0x38($s0)
    ctx->pc = 0x296c48u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_296c4c:
    // 0x296c4c: 0xa2020034  sb          $v0, 0x34($s0)
    ctx->pc = 0x296c4cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 52), (uint8_t)GPR_U32(ctx, 2));
label_296c50:
    // 0x296c50: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x296c50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
label_296c54:
    // 0x296c54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x296c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_296c58:
    // 0x296c58: 0x1222000b  beq         $s1, $v0, . + 4 + (0xB << 2)
label_296c5c:
    if (ctx->pc == 0x296C5Cu) {
        ctx->pc = 0x296C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C58u;
        // 0x296c5c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C60u;
        goto label_296c60;
    }
    ctx->pc = 0x296C58u;
    {
        const bool branch_taken_0x296c58 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x296C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C58u;
        // 0x296c5c: 0x2a220002  slti        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c58) {
            ctx->pc = 0x296C88u;
            goto label_296c88;
        }
    }
    ctx->pc = 0x296C60u;
label_296c60:
    // 0x296c60: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_296c64:
    if (ctx->pc == 0x296C64u) {
        ctx->pc = 0x296C64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C60u;
        // 0x296c64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C68u;
        goto label_296c68;
    }
    ctx->pc = 0x296C60u;
    {
        const bool branch_taken_0x296c60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c60) {
            ctx->pc = 0x296C64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296C60u;
            // 0x296c64: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296C78u;
            goto label_296c78;
        }
    }
    ctx->pc = 0x296C68u;
label_296c68:
    // 0x296c68: 0x52200011  beql        $s1, $zero, . + 4 + (0x11 << 2)
label_296c6c:
    if (ctx->pc == 0x296C6Cu) {
        ctx->pc = 0x296C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C68u;
        // 0x296c6c: 0x8e030074  lw          $v1, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C70u;
        goto label_296c70;
    }
    ctx->pc = 0x296C68u;
    {
        const bool branch_taken_0x296c68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x296c68) {
            ctx->pc = 0x296C6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296C68u;
            // 0x296c6c: 0x8e030074  lw          $v1, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296CB0u;
            goto label_296cb0;
        }
    }
    ctx->pc = 0x296C70u;
label_296c70:
    // 0x296c70: 0x1000001a  b           . + 4 + (0x1A << 2)
label_296c74:
    if (ctx->pc == 0x296C74u) {
        ctx->pc = 0x296C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C70u;
        // 0x296c74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C78u;
        goto label_296c78;
    }
    ctx->pc = 0x296C70u;
    {
        const bool branch_taken_0x296c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C70u;
        // 0x296c74: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c70) {
            ctx->pc = 0x296CDCu;
            goto label_296cdc;
        }
    }
    ctx->pc = 0x296C78u;
label_296c78:
    // 0x296c78: 0x52220013  beql        $s1, $v0, . + 4 + (0x13 << 2)
label_296c7c:
    if (ctx->pc == 0x296C7Cu) {
        ctx->pc = 0x296C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C78u;
        // 0x296c7c: 0x8e030074  lw          $v1, 0x74($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C80u;
        goto label_296c80;
    }
    ctx->pc = 0x296C78u;
    {
        const bool branch_taken_0x296c78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x296c78) {
            ctx->pc = 0x296C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x296C78u;
            // 0x296c7c: 0x8e030074  lw          $v1, 0x74($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x296CC8u;
            goto label_296cc8;
        }
    }
    ctx->pc = 0x296C80u;
label_296c80:
    // 0x296c80: 0x10000016  b           . + 4 + (0x16 << 2)
label_296c84:
    if (ctx->pc == 0x296C84u) {
        ctx->pc = 0x296C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C80u;
        // 0x296c84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296C88u;
        goto label_296c88;
    }
    ctx->pc = 0x296C80u;
    {
        const bool branch_taken_0x296c80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296C80u;
        // 0x296c84: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296c80) {
            ctx->pc = 0x296CDCu;
            goto label_296cdc;
        }
    }
    ctx->pc = 0x296C88u;
label_296c88:
    // 0x296c88: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x296c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_296c8c:
    // 0x296c8c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x296c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_296c90:
    // 0x296c90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296c90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_296c94:
    // 0x296c94: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x296c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
label_296c98:
    // 0x296c98: 0x460c0302  mul.s       $f12, $f0, $f12
    ctx->pc = 0x296c98u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
label_296c9c:
    // 0x296c9c: 0x8c43002c  lw          $v1, 0x2C($v0)
    ctx->pc = 0x296c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_296ca0:
    // 0x296ca0: 0x60f809  jalr        $v1
label_296ca4:
    if (ctx->pc == 0x296CA4u) {
        ctx->pc = 0x296CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CA0u;
        // 0x296ca4: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x296CA8u;
        goto label_296ca8;
    }
    ctx->pc = 0x296CA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x296CA8u);
        ctx->pc = 0x296CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CA0u;
        // 0x296ca4: 0x460ca301  sub.s       $f12, $f20, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296CA0u, 0x296CA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296CA8u;
label_296ca8:
    // 0x296ca8: 0x1000000c  b           . + 4 + (0xC << 2)
label_296cac:
    if (ctx->pc == 0x296CACu) {
        ctx->pc = 0x296CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CA8u;
        // 0x296cac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296CB0u;
        goto label_296cb0;
    }
    ctx->pc = 0x296CA8u;
    {
        const bool branch_taken_0x296ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CA8u;
        // 0x296cac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296ca8) {
            ctx->pc = 0x296CDCu;
            goto label_296cdc;
        }
    }
    ctx->pc = 0x296CB0u;
label_296cb0:
    // 0x296cb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x296cb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_296cb4:
    // 0x296cb4: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x296cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_296cb8:
    // 0x296cb8: 0x40f809  jalr        $v0
label_296cbc:
    if (ctx->pc == 0x296CBCu) {
        ctx->pc = 0x296CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CB8u;
        // 0x296cbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x296CC0u;
        goto label_296cc0;
    }
    ctx->pc = 0x296CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296CC0u);
        ctx->pc = 0x296CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CB8u;
        // 0x296cbc: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296CB8u, 0x296CC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296CC0u;
label_296cc0:
    // 0x296cc0: 0x10000006  b           . + 4 + (0x6 << 2)
label_296cc4:
    if (ctx->pc == 0x296CC4u) {
        ctx->pc = 0x296CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CC0u;
        // 0x296cc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296CC8u;
        goto label_296cc8;
    }
    ctx->pc = 0x296CC0u;
    {
        const bool branch_taken_0x296cc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CC0u;
        // 0x296cc4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296cc0) {
            ctx->pc = 0x296CDCu;
            goto label_296cdc;
        }
    }
    ctx->pc = 0x296CC8u;
label_296cc8:
    // 0x296cc8: 0x4600a301  sub.s       $f12, $f20, $f0
    ctx->pc = 0x296cc8u;
    ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_296ccc:
    // 0x296ccc: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x296cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_296cd0:
    // 0x296cd0: 0x40f809  jalr        $v0
label_296cd4:
    if (ctx->pc == 0x296CD4u) {
        ctx->pc = 0x296CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CD0u;
        // 0x296cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296CD8u;
        goto label_296cd8;
    }
    ctx->pc = 0x296CD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x296CD8u);
        ctx->pc = 0x296CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CD0u;
        // 0x296cd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296CD0u, 0x296CD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x296CD8u;
label_296cd8:
    // 0x296cd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x296cd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_296cdc:
    // 0x296cdc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x296cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_296ce0:
    // 0x296ce0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x296ce0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_296ce4:
    // 0x296ce4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x296ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_296ce8:
    // 0x296ce8: 0x3e00008  jr          $ra
label_296cec:
    if (ctx->pc == 0x296CECu) {
        ctx->pc = 0x296CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CE8u;
        // 0x296cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x296CF0u;
        goto label_fallthrough_0x296ce8;
    }
    ctx->pc = 0x296CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x296CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296CE8u;
        // 0x296cec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x296CE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x296ce8:
    ctx->pc = 0x296CF0u;
}
