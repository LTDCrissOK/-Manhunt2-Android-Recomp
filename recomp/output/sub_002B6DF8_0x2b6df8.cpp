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

// Function: sub_002B6DF8
// Address: 0x2b6df8 - 0x2b7080
void sub_002B6DF8_0x2b6df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B6DF8_0x2b6df8");
#endif

    switch (ctx->pc) {
        case 0x2b6e18u: goto label_2b6e18;
        case 0x2b6e20u: goto label_2b6e20;
        case 0x2b6e90u: goto label_2b6e90;
        case 0x2b6eb4u: goto label_2b6eb4;
        case 0x2b6ec4u: goto label_2b6ec4;
        case 0x2b6ef0u: goto label_2b6ef0;
        case 0x2b6f04u: goto label_2b6f04;
        case 0x2b6f30u: goto label_2b6f30;
        case 0x2b6f64u: goto label_2b6f64;
        case 0x2b6f7cu: goto label_2b6f7c;
        case 0x2b6fd8u: goto label_2b6fd8;
        case 0x2b7018u: goto label_2b7018;
        case 0x2b7038u: goto label_2b7038;
        case 0x2b7050u: goto label_2b7050;
        default: break;
    }

    ctx->pc = 0x2b6df8u;

    // 0x2b6df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b6df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b6dfc: 0x24050017  addiu       $a1, $zero, 0x17
    ctx->pc = 0x2b6dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x2b6e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b6e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b6e04: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b6e04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b6e08: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b6e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b6e0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b6e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b6e10: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B6E10u;
    SET_GPR_U32(ctx, 31, 0x2B6E18u);
    ctx->pc = 0x2B6E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6E10u;
    // 0x2b6e14: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B6E10u, 0x2B6E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E18u;
label_2b6e18:
    // 0x2b6e18: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B6E18u;
    SET_GPR_U32(ctx, 31, 0x2B6E20u);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B6E18u, 0x2B6E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E20u;
label_2b6e20:
    // 0x2b6e20: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6E20u;
    {
        const bool branch_taken_0x2b6e20 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E20u;
        // 0x2b6e24: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e20) {
            ctx->pc = 0x2B6E3Cu;
            goto label_2b6e3c;
        }
    }
    ctx->pc = 0x2B6E28u;
    // 0x2b6e28: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6e2c: 0x0  nop
    ctx->pc = 0x2b6e2cu;
    // NOP
    // 0x2b6e30: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6e30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6e34: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6E34u;
    {
        const bool branch_taken_0x2b6e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6e34) {
            ctx->pc = 0x2B6E54u;
            goto label_2b6e54;
        }
    }
    ctx->pc = 0x2B6E3Cu;
label_2b6e3c:
    // 0x2b6e3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6e40: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b6e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b6e44: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2b6e44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x2b6e48: 0x0  nop
    ctx->pc = 0x2b6e48u;
    // NOP
    // 0x2b6e4c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x2b6e4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x2b6e50: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x2b6e50u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_2b6e54:
    // 0x2b6e54: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b6e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b6e58: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b6e58u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b6e5c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6e60: 0xc6015900  lwc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b6e60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 22784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6e64: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6e64u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6e68: 0x3c014040  lui         $at, 0x4040
    ctx->pc = 0x2b6e68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16448 << 16));
    // 0x2b6e6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2b6e6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2b6e70: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2b6e70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x2b6e74: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2b6e74u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2b6e78: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2b6e78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6e7c: 0x0  nop
    ctx->pc = 0x2b6e7cu;
    // NOP
    // 0x2b6e80: 0x45000079  bc1f        . + 4 + (0x79 << 2)
    ctx->pc = 0x2B6E80u;
    {
        const bool branch_taken_0x2b6e80 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B6E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E80u;
        // 0x2b6e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e80) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B6E88u;
    // 0x2b6e88: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B6E88u;
    SET_GPR_U32(ctx, 31, 0x2B6E90u);
    ctx->pc = 0x2B6E8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6E88u;
    // 0x2b6e8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B6E88u, 0x2B6E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6E90u;
label_2b6e90:
    // 0x2b6e90: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2b6e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2b6e94: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6E94u;
    {
        const bool branch_taken_0x2b6e94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6E94u;
        // 0x2b6e98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6e94) {
            ctx->pc = 0x2B6EACu;
            goto label_2b6eac;
        }
    }
    ctx->pc = 0x2B6E9Cu;
    // 0x2b6e9c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2b6e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b6ea0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2b6ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2b6ea4: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2B6EA4u;
    {
        const bool branch_taken_0x2b6ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EA4u;
        // 0x2b6ea8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ea4) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B6EACu;
label_2b6eac:
    // 0x2b6eac: 0xc0ad896  jal         func_2B6258
    ctx->pc = 0x2B6EACu;
    SET_GPR_U32(ctx, 31, 0x2B6EB4u);
    ctx->pc = 0x2B6EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6EACu;
    // 0x2b6eb0: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6258u, 0x2B6EACu, 0x2B6EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EB4u;
label_2b6eb4:
    // 0x2b6eb4: 0x5451004c  bnel        $v0, $s1, . + 4 + (0x4C << 2)
    ctx->pc = 0x2B6EB4u;
    {
        const bool branch_taken_0x2b6eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2b6eb4) {
            ctx->pc = 0x2B6EB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6EB4u;
            // 0x2b6eb8: 0x8e0358f8  lw          $v1, 0x58F8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6FE8u;
            goto label_2b6fe8;
        }
    }
    ctx->pc = 0x2B6EBCu;
    // 0x2b6ebc: 0xc0adc20  jal         func_2B7080
    ctx->pc = 0x2B6EBCu;
    SET_GPR_U32(ctx, 31, 0x2B6EC4u);
    ctx->pc = 0x2B6EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6EBCu;
    // 0x2b6ec0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B7080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7080u, 0x2B6EBCu, 0x2B6EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EC4u;
label_2b6ec4:
    // 0x2b6ec4: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B6EC4u;
    {
        const bool branch_taken_0x2b6ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EC4u;
        // 0x2b6ec8: 0x8e0358f8  lw          $v1, 0x58F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ec4) {
            ctx->pc = 0x2B6F14u;
            goto label_2b6f14;
        }
    }
    ctx->pc = 0x2B6ECCu;
    // 0x2b6ecc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b6eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b6ed0: 0x5062004e  beql        $v1, $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2B6ED0u;
    {
        const bool branch_taken_0x2b6ed0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b6ed0) {
            ctx->pc = 0x2B6ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6ED0u;
            // 0x2b6ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B700Cu;
            goto label_2b700c;
        }
    }
    ctx->pc = 0x2B6ED8u;
    // 0x2b6ed8: 0x10710003  beq         $v1, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6ED8u;
    {
        const bool branch_taken_0x2b6ed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x2B6EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6ED8u;
        // 0x2b6edc: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ed8) {
            ctx->pc = 0x2B6EE8u;
            goto label_2b6ee8;
        }
    }
    ctx->pc = 0x2B6EE0u;
    // 0x2b6ee0: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6EE0u;
    {
        const bool branch_taken_0x2b6ee0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EE0u;
        // 0x2b6ee4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ee0) {
            ctx->pc = 0x2B6EF8u;
            goto label_2b6ef8;
        }
    }
    ctx->pc = 0x2B6EE8u;
label_2b6ee8:
    // 0x2b6ee8: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6EE8u;
    SET_GPR_U32(ctx, 31, 0x2B6EF0u);
    ctx->pc = 0x2B6EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6EE8u;
    // 0x2b6eec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6EE8u, 0x2B6EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6EF0u;
label_2b6ef0:
    // 0x2b6ef0: 0x1000005b  b           . + 4 + (0x5B << 2)
    ctx->pc = 0x2B6EF0u;
    {
        const bool branch_taken_0x2b6ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6EF0u;
        // 0x2b6ef4: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ef0) {
            ctx->pc = 0x2B7060u;
            goto label_2b7060;
        }
    }
    ctx->pc = 0x2B6EF8u;
label_2b6ef8:
    // 0x2b6ef8: 0x24050025  addiu       $a1, $zero, 0x25
    ctx->pc = 0x2b6ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x2b6efc: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B6EFCu;
    SET_GPR_U32(ctx, 31, 0x2B6F04u);
    ctx->pc = 0x2B6F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6EFCu;
    // 0x2b6f00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B6EFCu, 0x2B6F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F04u;
label_2b6f04:
    // 0x2b6f04: 0x24030026  addiu       $v1, $zero, 0x26
    ctx->pc = 0x2b6f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2b6f08: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x2b6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x2b6f0c: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x2B6F0Cu;
    {
        const bool branch_taken_0x2b6f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F0Cu;
        // 0x2b6f10: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f0c) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B6F14u;
label_2b6f14:
    // 0x2b6f14: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2b6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2b6f18: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6F18u;
    {
        const bool branch_taken_0x2b6f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F18u;
        // 0x2b6f1c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f18) {
            ctx->pc = 0x2B6F28u;
            goto label_2b6f28;
        }
    }
    ctx->pc = 0x2B6F20u;
    // 0x2b6f20: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B6F20u;
    {
        const bool branch_taken_0x2b6f20 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F20u;
        // 0x2b6f24: 0x3c020052  lui         $v0, 0x52 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)82 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f20) {
            ctx->pc = 0x2B6F48u;
            goto label_2b6f48;
        }
    }
    ctx->pc = 0x2B6F28u;
label_2b6f28:
    // 0x2b6f28: 0xc0ad6ae  jal         func_2B5AB8
    ctx->pc = 0x2B6F28u;
    SET_GPR_U32(ctx, 31, 0x2B6F30u);
    ctx->pc = 0x2B6F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F28u;
    // 0x2b6f2c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5AB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5AB8u, 0x2B6F28u, 0x2B6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F30u;
label_2b6f30:
    // 0x2b6f30: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2b6f30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2b6f34: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x2b6f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2b6f38: 0xa060a930  sb          $zero, -0x56D0($v1)
    ctx->pc = 0x2b6f38u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FA930u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x3FA930u, _value); } while (0);
    // 0x2b6f3c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x2b6f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x2b6f40: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x2B6F40u;
    {
        const bool branch_taken_0x2b6f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F40u;
        // 0x2b6f44: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f40) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B6F48u;
label_2b6f48:
    // 0x2b6f48: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2b6f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2b6f4c: 0x8c430578  lw          $v1, 0x578($v0)
    ctx->pc = 0x2b6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1400)));
    // 0x2b6f50: 0x14640008  bne         $v1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6F50u;
    {
        const bool branch_taken_0x2b6f50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2B6F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F50u;
        // 0x2b6f54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f50) {
            ctx->pc = 0x2B6F74u;
            goto label_2b6f74;
        }
    }
    ctx->pc = 0x2B6F58u;
    // 0x2b6f58: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x2b6f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2b6f5c: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B6F5Cu;
    SET_GPR_U32(ctx, 31, 0x2B6F64u);
    ctx->pc = 0x2B6F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6F5Cu;
    // 0x2b6f60: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B6F5Cu, 0x2B6F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F64u;
label_2b6f64:
    // 0x2b6f64: 0x24030029  addiu       $v1, $zero, 0x29
    ctx->pc = 0x2b6f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2b6f68: 0x24020029  addiu       $v0, $zero, 0x29
    ctx->pc = 0x2b6f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x2b6f6c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x2B6F6Cu;
    {
        const bool branch_taken_0x2b6f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F6Cu;
        // 0x2b6f70: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f6c) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B6F74u;
label_2b6f74:
    // 0x2b6f74: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B6F74u;
    SET_GPR_U32(ctx, 31, 0x2B6F7Cu);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B6F74u, 0x2B6F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6F7Cu;
label_2b6f7c:
    // 0x2b6f7c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B6F7Cu;
    {
        const bool branch_taken_0x2b6f7c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B6F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6F7Cu;
        // 0x2b6f80: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6f7c) {
            ctx->pc = 0x2B6F98u;
            goto label_2b6f98;
        }
    }
    ctx->pc = 0x2B6F84u;
    // 0x2b6f84: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b6f84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6f88: 0x0  nop
    ctx->pc = 0x2b6f88u;
    // NOP
    // 0x2b6f8c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6f8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6f90: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B6F90u;
    {
        const bool branch_taken_0x2b6f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6f90) {
            ctx->pc = 0x2B6FB0u;
            goto label_2b6fb0;
        }
    }
    ctx->pc = 0x2B6F98u;
label_2b6f98:
    // 0x2b6f98: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b6f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b6f9c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b6f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b6fa0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b6fa0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b6fa4: 0x0  nop
    ctx->pc = 0x2b6fa4u;
    // NOP
    // 0x2b6fa8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b6fa8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b6fac: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b6facu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b6fb0:
    // 0x2b6fb0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b6fb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b6fb4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b6fb4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b6fb8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b6fb8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b6fbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6fc0: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x2b6fc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b6fc4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b6fc4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b6fc8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b6fc8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b6fcc: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b6fccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b6fd0: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B6FD0u;
    SET_GPR_U32(ctx, 31, 0x2B6FD8u);
    ctx->pc = 0x2B6FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6FD0u;
    // 0x2b6fd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B6FD0u, 0x2B6FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6FD8u;
label_2b6fd8:
    // 0x2b6fd8: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x2b6fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b6fdc: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x2b6fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x2b6fe0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x2B6FE0u;
    {
        const bool branch_taken_0x2b6fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FE0u;
        // 0x2b6fe4: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fe0) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B6FE8u;
label_2b6fe8:
    // 0x2b6fe8: 0x14710005  bne         $v1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6FE8u;
    {
        const bool branch_taken_0x2b6fe8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 17));
        ctx->pc = 0x2B6FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FE8u;
        // 0x2b6fec: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6fe8) {
            ctx->pc = 0x2B7000u;
            goto label_2b7000;
        }
    }
    ctx->pc = 0x2B6FF0u;
    // 0x2b6ff0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2b6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6ff4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2b6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2b6ff8: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2B6FF8u;
    {
        const bool branch_taken_0x2b6ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6FF8u;
        // 0x2b6ffc: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6ff8) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B7000u;
label_2b7000:
    // 0x2b7000: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7000u;
    {
        const bool branch_taken_0x2b7000 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B7004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7000u;
        // 0x2b7004: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7000) {
            ctx->pc = 0x2B7028u;
            goto label_2b7028;
        }
    }
    ctx->pc = 0x2B7008u;
    // 0x2b7008: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b700c:
    // 0x2b700c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2b700cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x2b7010: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B7010u;
    SET_GPR_U32(ctx, 31, 0x2B7018u);
    ctx->pc = 0x2B7014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7010u;
    // 0x2b7014: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B7010u, 0x2B7018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7018u;
label_2b7018:
    // 0x2b7018: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2b7018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b701c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2b701cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x2b7020: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2B7020u;
    {
        const bool branch_taken_0x2b7020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7020u;
        // 0x2b7024: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7020) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B7028u;
label_2b7028:
    // 0x2b7028: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B7028u;
    {
        const bool branch_taken_0x2b7028 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B702Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7028u;
        // 0x2b702c: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7028) {
            ctx->pc = 0x2B7060u;
            goto label_2b7060;
        }
    }
    ctx->pc = 0x2B7030u;
    // 0x2b7030: 0xc0ad844  jal         func_2B6110
    ctx->pc = 0x2B7030u;
    SET_GPR_U32(ctx, 31, 0x2B7038u);
    ctx->pc = 0x2B7034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7030u;
    // 0x2b7034: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B6110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B6110u, 0x2B7030u, 0x2B7038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7038u;
label_2b7038:
    // 0x2b7038: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2B7038u;
    {
        const bool branch_taken_0x2b7038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B703Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7038u;
        // 0x2b703c: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7038) {
            ctx->pc = 0x2B7060u;
            goto label_2b7060;
        }
    }
    ctx->pc = 0x2B7040u;
    // 0x2b7040: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7044: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2b7044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2b7048: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B7048u;
    SET_GPR_U32(ctx, 31, 0x2B7050u);
    ctx->pc = 0x2B704Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B7048u;
    // 0x2b704c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B7048u, 0x2B7050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7050u;
label_2b7050:
    // 0x2b7050: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2b7050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b7054: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x2b7054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x2b7058: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2B7058u;
    {
        const bool branch_taken_0x2b7058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7058u;
        // 0x2b705c: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b7058) {
            ctx->pc = 0x2B7068u;
            goto label_2b7068;
        }
    }
    ctx->pc = 0x2B7060u;
label_2b7060:
    // 0x2b7060: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x2b7060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x2b7064: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b7064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2b7068:
    // 0x2b7068: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b7068u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b706c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b706cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b7070: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b7070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7074: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7074u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B7078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B7074u;
        // 0x2b7078: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7074u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B707Cu;
    // 0x2b707c: 0x0  nop
    ctx->pc = 0x2b707cu;
    // NOP
    ctx->pc = 0x2b7080u;
}
