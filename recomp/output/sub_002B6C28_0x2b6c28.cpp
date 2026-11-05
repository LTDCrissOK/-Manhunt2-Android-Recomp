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

// Function: sub_002B6C28
// Address: 0x2b6c28 - 0x2b6df8
void sub_002B6C28_0x2b6c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6C28_0x2b6c28");
#endif

    switch (ctx->pc) {
        case 0x2b6c40u: goto label_2b6c40;
        case 0x2b6cb0u: goto label_2b6cb0;
        case 0x2b6cc4u: goto label_2b6cc4;
        case 0x2b6cccu: goto label_2b6ccc;
        case 0x2b6cf4u: goto label_2b6cf4;
        case 0x2b6cfcu: goto label_2b6cfc;
        case 0x2b6d04u: goto label_2b6d04;
        case 0x2b6d20u: goto label_2b6d20;
        case 0x2b6d4cu: goto label_2b6d4c;
        case 0x2b6d60u: goto label_2b6d60;
        case 0x2b6dbcu: goto label_2b6dbc;
        case 0x2b6dd8u: goto label_2b6dd8;
        default: break;
    }

    ctx->pc = 0x2b6c28u;

    // 0x2b6c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6c2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b6c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b6c30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6c34: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6c38: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B6C38u;
    SET_GPR_U32(ctx, 31, 0x2B6C40u);
    ctx->pc = 0x2B6C3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6C38u;
    // 0x2b6c3c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B6C38u, 0x2B6C40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6C40u;
label_2b6c40:
    // 0x2b6c40: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6C40u;
    {
        const bool branch_taken_0x2b6c40 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B6C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6C40u;
        // 0x2b6c44: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6c40) {
            ctx->pc = 0x2B6C5Cu;
            goto label_2b6c5c;
        }
    }
    ctx->pc = 0x2B6C48u;
    // 0x2b6c48: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6c4c: 0x0  nop
    ctx->pc = 0x2b6c4cu;
    // NOP
    // 0x2b6c50: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6c50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6c54: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6C54u;
    {
        const bool branch_taken_0x2b6c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6c54) {
            ctx->pc = 0x2B6C74u;
            goto label_2b6c74;
        }
    }
    ctx->pc = 0x2B6C5Cu;
label_2b6c5c:
    // 0x2b6c5c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6c60: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b6c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b6c64: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6c64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6c68: 0x0  nop
    ctx->pc = 0x2b6c68u;
    // NOP
    // 0x2b6c6c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6c6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6c70: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b6c70u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b6c74:
    // 0x2b6c74: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b6c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b6c78: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b6c78u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b6c7c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6c7cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6c80: 0xc6215900  lwc1        $f1, 0x5900($s1)
    ctx->pc = 0x2b6c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6c84: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6c84u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6c88: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b6c88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b6c8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b6c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6c90: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b6c90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b6c94: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b6c94u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b6c98: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b6c98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6c9c: 0x0  nop
    ctx->pc = 0x2b6c9cu;
    // NOP
    // 0x2b6ca0: 0x45000050  bc1f        . + 4 + (0x50 << 2)
    ctx->pc = 0x2B6CA0u;
    {
        const bool branch_taken_0x2b6ca0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CA0u;
        // 0x2b6ca4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ca0) {
            ctx->pc = 0x2B6DE4u;
            goto label_2b6de4;
        }
    }
    ctx->pc = 0x2B6CA8u;
    // 0x2b6ca8: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B6CA8u;
    SET_GPR_U32(ctx, 31, 0x2B6CB0u);
    ctx->pc = 0x2B6CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CA8u;
    // 0x2b6cac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B6CA8u, 0x2B6CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6CB0u;
label_2b6cb0:
    // 0x2b6cb0: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x2b6cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x2b6cb4: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6CB4u;
    {
        const bool branch_taken_0x2b6cb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6cb4) {
            ctx->pc = 0x2B6CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6CB4u;
            // 0x2b6cb8: 0x8e2358f8  lw          $v1, 0x58F8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6CD8u;
            goto label_2b6cd8;
        }
    }
    ctx->pc = 0x2B6CBCu;
    // 0x2b6cbc: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B6CBCu;
    SET_GPR_U32(ctx, 31, 0x2B6CC4u);
    ctx->pc = 0x2B6CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CBCu;
    // 0x2b6cc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B6CBCu, 0x2B6CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6CC4u;
label_2b6cc4:
    // 0x2b6cc4: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B6CC4u;
    SET_GPR_U32(ctx, 31, 0x2B6CCCu);
    ctx->pc = 0x2B6CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CC4u;
    // 0x2b6cc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B6CC4u, 0x2B6CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6CCCu;
label_2b6ccc:
    // 0x2b6ccc: 0x5440003f  bnel        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x2B6CCCu;
    {
        const bool branch_taken_0x2b6ccc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6ccc) {
            ctx->pc = 0x2B6CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6CCCu;
            // 0x2b6cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6DCCu;
            goto label_2b6dcc;
        }
    }
    ctx->pc = 0x2B6CD4u;
    // 0x2b6cd4: 0x8e2358f8  lw          $v1, 0x58F8($s1)
    ctx->pc = 0x2b6cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22776)));
label_2b6cd8:
    // 0x2b6cd8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b6cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b6cdc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6CDCu;
    {
        const bool branch_taken_0x2b6cdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CDCu;
        // 0x2b6ce0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6cdc) {
            ctx->pc = 0x2B6CECu;
            goto label_2b6cec;
        }
    }
    ctx->pc = 0x2B6CE4u;
    // 0x2b6ce4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6CE4u;
    {
        const bool branch_taken_0x2b6ce4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6CE4u;
        // 0x2b6ce8: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ce4) {
            ctx->pc = 0x2B6D0Cu;
            goto label_2b6d0c;
        }
    }
    ctx->pc = 0x2B6CECu;
label_2b6cec:
    // 0x2b6cec: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B6CECu;
    SET_GPR_U32(ctx, 31, 0x2B6CF4u);
    ctx->pc = 0x2B6CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CECu;
    // 0x2b6cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B6CECu, 0x2B6CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6CF4u;
label_2b6cf4:
    // 0x2b6cf4: 0xc0ad336  jal         func_2B4CD8
    ctx->pc = 0x2B6CF4u;
    SET_GPR_U32(ctx, 31, 0x2B6CFCu);
    ctx->pc = 0x2B6CF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CF4u;
    // 0x2b6cf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B4CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B4CD8u, 0x2B6CF4u, 0x2B6CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6CFCu;
label_2b6cfc:
    // 0x2b6cfc: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6CFCu;
    SET_GPR_U32(ctx, 31, 0x2B6D04u);
    ctx->pc = 0x2B6D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6CFCu;
    // 0x2b6d00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6CFCu, 0x2B6D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D04u;
label_2b6d04:
    // 0x2b6d04: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x2B6D04u;
    {
        const bool branch_taken_0x2b6d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D04u;
        // 0x2b6d08: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d04) {
            ctx->pc = 0x2B6DE8u;
            goto label_2b6de8;
        }
    }
    ctx->pc = 0x2B6D0Cu;
label_2b6d0c:
    // 0x2b6d0c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B6D0Cu;
    {
        const bool branch_taken_0x2b6d0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6d0c) {
            ctx->pc = 0x2B6D44u;
            goto label_2b6d44;
        }
    }
    ctx->pc = 0x2B6D14u;
    // 0x2b6d14: 0x8e305908  lw          $s0, 0x5908($s1)
    ctx->pc = 0x2b6d14u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22792)));
    // 0x2b6d18: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B6D18u;
    SET_GPR_U32(ctx, 31, 0x2B6D20u);
    ctx->pc = 0x2B6D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6D18u;
    // 0x2b6d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B6D18u, 0x2B6D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D20u;
label_2b6d20:
    // 0x2b6d20: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x2b6d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x2b6d24: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x2b6d24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2b6d28: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b6d28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2b6d2c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x2b6d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x2b6d30: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6D30u;
    {
        const bool branch_taken_0x2b6d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D30u;
        // 0x2b6d34: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d30) {
            ctx->pc = 0x2B6D44u;
            goto label_2b6d44;
        }
    }
    ctx->pc = 0x2B6D38u;
    // 0x2b6d38: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2b6d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b6d3c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x2B6D3Cu;
    {
        const bool branch_taken_0x2b6d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D3Cu;
        // 0x2b6d40: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d3c) {
            ctx->pc = 0x2B6DE4u;
            goto label_2b6de4;
        }
    }
    ctx->pc = 0x2B6D44u;
label_2b6d44:
    // 0x2b6d44: 0xc0addb6  jal         func_2B76D8
    ctx->pc = 0x2B6D44u;
    SET_GPR_U32(ctx, 31, 0x2B6D4Cu);
    ctx->pc = 0x2B6D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6D44u;
    // 0x2b6d48: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B76D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B76D8u, 0x2B6D44u, 0x2B6D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D4Cu;
label_2b6d4c:
    // 0x2b6d4c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x2b6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b6d50: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B6D50u;
    {
        const bool branch_taken_0x2b6d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B6D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D50u;
        // 0x2b6d54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d50) {
            ctx->pc = 0x2B6DCCu;
            goto label_2b6dcc;
        }
    }
    ctx->pc = 0x2B6D58u;
    // 0x2b6d58: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B6D58u;
    SET_GPR_U32(ctx, 31, 0x2B6D60u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B6D58u, 0x2B6D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6D60u;
label_2b6d60:
    // 0x2b6d60: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6D60u;
    {
        const bool branch_taken_0x2b6d60 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B6D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6D60u;
        // 0x2b6d64: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6d60) {
            ctx->pc = 0x2B6D7Cu;
            goto label_2b6d7c;
        }
    }
    ctx->pc = 0x2B6D68u;
    // 0x2b6d68: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b6d68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6d6c: 0x0  nop
    ctx->pc = 0x2b6d6cu;
    // NOP
    // 0x2b6d70: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6d74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6D74u;
    {
        const bool branch_taken_0x2b6d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6d74) {
            ctx->pc = 0x2B6D94u;
            goto label_2b6d94;
        }
    }
    ctx->pc = 0x2B6D7Cu;
label_2b6d7c:
    // 0x2b6d7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6d80: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b6d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b6d84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b6d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6d88: 0x0  nop
    ctx->pc = 0x2b6d88u;
    // NOP
    // 0x2b6d8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6d8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6d90: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b6d90u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b6d94:
    // 0x2b6d94: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b6d94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b6d98: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b6d98u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b6d9c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6d9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b6da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6da4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x2b6da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b6da8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b6da8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6dac: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6dacu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6db0: 0xe6215900  swc1        $f1, 0x5900($s1)
    ctx->pc = 0x2b6db0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 22784), bits); }
    // 0x2b6db4: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B6DB4u;
    SET_GPR_U32(ctx, 31, 0x2B6DBCu);
    ctx->pc = 0x2B6DB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6DB4u;
    // 0x2b6db8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B6DB4u, 0x2B6DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6DBCu;
label_2b6dbc:
    // 0x2b6dbc: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x2b6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2b6dc0: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x2b6dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2b6dc4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6DC4u;
    {
        const bool branch_taken_0x2b6dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DC4u;
        // 0x2b6dc8: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6dc4) {
            ctx->pc = 0x2B6DE4u;
            goto label_2b6de4;
        }
    }
    ctx->pc = 0x2B6DCCu;
label_2b6dcc:
    // 0x2b6dcc: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x2b6dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2b6dd0: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B6DD0u;
    SET_GPR_U32(ctx, 31, 0x2B6DD8u);
    ctx->pc = 0x2B6DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6DD0u;
    // 0x2b6dd4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B6DD0u, 0x2B6DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6DD8u;
label_2b6dd8:
    // 0x2b6dd8: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x2b6dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2b6ddc: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x2b6ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2b6de0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x2b6de0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_2b6de4:
    // 0x2b6de4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b6de4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2b6de8:
    // 0x2b6de8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b6de8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b6dec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b6decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6df0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6DF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6DF0u;
        // 0x2b6df4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6DF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6DF8u;
}
