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

// Function: sub_002B5DF8
// Address: 0x2b5df8 - 0x2b5f48
void sub_002B5DF8_0x2b5df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5DF8_0x2b5df8");
#endif

    switch (ctx->pc) {
        case 0x2b5e40u: goto label_2b5e40;
        case 0x2b5e48u: goto label_2b5e48;
        case 0x2b5e50u: goto label_2b5e50;
        case 0x2b5e60u: goto label_2b5e60;
        case 0x2b5e68u: goto label_2b5e68;
        case 0x2b5e70u: goto label_2b5e70;
        case 0x2b5e88u: goto label_2b5e88;
        case 0x2b5e98u: goto label_2b5e98;
        case 0x2b5eacu: goto label_2b5eac;
        case 0x2b5f08u: goto label_2b5f08;
        case 0x2b5f24u: goto label_2b5f24;
        default: break;
    }

    ctx->pc = 0x2b5df8u;

    // 0x2b5df8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b5df8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b5dfc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b5dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2b5e00: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b5e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b5e04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b5e04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b5e08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b5e08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e0c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b5e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b5e10: 0x8e0358f8  lw          $v1, 0x58F8($s0)
    ctx->pc = 0x2b5e10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 22776)));
    // 0x2b5e14: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5E14u;
    {
        const bool branch_taken_0x2b5e14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E14u;
        // 0x2b5e18: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e14) {
            ctx->pc = 0x2B5E24u;
            goto label_2b5e24;
        }
    }
    ctx->pc = 0x2B5E1Cu;
    // 0x2b5e1c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5E1Cu;
    {
        const bool branch_taken_0x2b5e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E1Cu;
        // 0x2b5e20: 0x2411fffe  addiu       $s1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e1c) {
            ctx->pc = 0x2B5E34u;
            goto label_2b5e34;
        }
    }
    ctx->pc = 0x2B5E24u;
label_2b5e24:
    // 0x2b5e24: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B5E24u;
    {
        const bool branch_taken_0x2b5e24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B5E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E24u;
        // 0x2b5e28: 0x2411ffff  addiu       $s1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e24) {
            ctx->pc = 0x2B5E34u;
            goto label_2b5e34;
        }
    }
    ctx->pc = 0x2B5E2Cu;
    // 0x2b5e2c: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2b5e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2b5e30: 0x8c51259c  lw          $s1, 0x259C($v0)
    ctx->pc = 0x2b5e30u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x4C259Cu));
label_2b5e34:
    // 0x2b5e34: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b5e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2b5e38: 0xc0c29a4  jal         func_30A690
    ctx->pc = 0x2B5E38u;
    SET_GPR_U32(ctx, 31, 0x2B5E40u);
    ctx->pc = 0x2B5E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E38u;
    // 0x2b5e3c: 0x8c44a300  lw          $a0, -0x5D00($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943488)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30A690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30A690u, 0x2B5E38u, 0x2B5E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E40u;
label_2b5e40:
    // 0x2b5e40: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B5E40u;
    SET_GPR_U32(ctx, 31, 0x2B5E48u);
    ctx->pc = 0x2B5E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E40u;
    // 0x2b5e44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B5E40u, 0x2B5E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E48u;
label_2b5e48:
    // 0x2b5e48: 0xc0ace90  jal         func_2B3A40
    ctx->pc = 0x2B5E48u;
    SET_GPR_U32(ctx, 31, 0x2B5E50u);
    ctx->pc = 0x2B5E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E48u;
    // 0x2b5e4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3A40u, 0x2B5E48u, 0x2B5E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E50u;
label_2b5e50:
    // 0x2b5e50: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2B5E50u;
    {
        const bool branch_taken_0x2b5e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E50u;
        // 0x2b5e54: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e50) {
            ctx->pc = 0x2B5E90u;
            goto label_2b5e90;
        }
    }
    ctx->pc = 0x2B5E58u;
    // 0x2b5e58: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B5E58u;
    SET_GPR_U32(ctx, 31, 0x2B5E60u);
    ctx->pc = 0x2B5E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E58u;
    // 0x2b5e5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B5E58u, 0x2B5E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E60u;
label_2b5e60:
    // 0x2b5e60: 0xc0acf9c  jal         func_2B3E70
    ctx->pc = 0x2B5E60u;
    SET_GPR_U32(ctx, 31, 0x2B5E68u);
    ctx->pc = 0x2B5E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E60u;
    // 0x2b5e64: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3E70u, 0x2B5E60u, 0x2B5E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E68u;
label_2b5e68:
    // 0x2b5e68: 0xc0ade76  jal         func_2B79D8
    ctx->pc = 0x2B5E68u;
    SET_GPR_U32(ctx, 31, 0x2B5E70u);
    ctx->pc = 0x2B5E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E68u;
    // 0x2b5e6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B79D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B79D8u, 0x2B5E68u, 0x2B5E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E70u;
label_2b5e70:
    // 0x2b5e70: 0x3c060002  lui         $a2, 0x2
    ctx->pc = 0x2b5e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)2 << 16));
    // 0x2b5e74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b5e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5e78: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2b5e78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2b5e7c: 0x34c6c788  ori         $a2, $a2, 0xC788
    ctx->pc = 0x2b5e7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51080);
    // 0x2b5e80: 0xc0acf0c  jal         func_2B3C30
    ctx->pc = 0x2B5E80u;
    SET_GPR_U32(ctx, 31, 0x2B5E88u);
    ctx->pc = 0x2B5E84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E80u;
    // 0x2b5e84: 0x240700b1  addiu       $a3, $zero, 0xB1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B3C30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B3C30u, 0x2B5E80u, 0x2B5E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E88u;
label_2b5e88:
    // 0x2b5e88: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2B5E88u;
    {
        const bool branch_taken_0x2b5e88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E88u;
        // 0x2b5e8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e88) {
            ctx->pc = 0x2B5F14u;
            goto label_2b5f14;
        }
    }
    ctx->pc = 0x2B5E90u;
label_2b5e90:
    // 0x2b5e90: 0xc0ad7d2  jal         func_2B5F48
    ctx->pc = 0x2B5E90u;
    SET_GPR_U32(ctx, 31, 0x2B5E98u);
    ctx->pc = 0x2B5E94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5E90u;
    // 0x2b5e94: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5F48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5F48u, 0x2B5E90u, 0x2B5E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5E98u;
label_2b5e98:
    // 0x2b5e98: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x2b5e98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x2b5e9c: 0x1443001e  bne         $v0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B5E9Cu;
    {
        const bool branch_taken_0x2b5e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2B5EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5E9Cu;
        // 0x2b5ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5e9c) {
            ctx->pc = 0x2B5F18u;
            goto label_2b5f18;
        }
    }
    ctx->pc = 0x2B5EA4u;
    // 0x2b5ea4: 0xc076100  jal         func_1D8400
    ctx->pc = 0x2B5EA4u;
    SET_GPR_U32(ctx, 31, 0x2B5EACu);
    ctx->pc = 0x1D8400u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8400u, 0x2B5EA4u, 0x2B5EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5EACu;
label_2b5eac:
    // 0x2b5eac: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2B5EACu;
    {
        const bool branch_taken_0x2b5eac = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2B5EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5EACu;
        // 0x2b5eb0: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5eac) {
            ctx->pc = 0x2B5EC8u;
            goto label_2b5ec8;
        }
    }
    ctx->pc = 0x2B5EB4u;
    // 0x2b5eb4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b5eb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5eb8: 0x0  nop
    ctx->pc = 0x2b5eb8u;
    // NOP
    // 0x2b5ebc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b5ebcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b5ec0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5EC0u;
    {
        const bool branch_taken_0x2b5ec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5ec0) {
            ctx->pc = 0x2B5EE0u;
            goto label_2b5ee0;
        }
    }
    ctx->pc = 0x2B5EC8u;
label_2b5ec8:
    // 0x2b5ec8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2b5ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2b5ecc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2b5eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2b5ed0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2b5ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2b5ed4: 0x0  nop
    ctx->pc = 0x2b5ed4u;
    // NOP
    // 0x2b5ed8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2b5ed8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2b5edc: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2b5edcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2b5ee0:
    // 0x2b5ee0: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2b5ee0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2b5ee4: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2b5ee4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2b5ee8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b5ee8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b5eec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5eecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5ef0: 0x24050027  addiu       $a1, $zero, 0x27
    ctx->pc = 0x2b5ef0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x2b5ef4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2b5ef4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2b5ef8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2b5ef8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x2b5efc: 0xe6015900  swc1        $f1, 0x5900($s0)
    ctx->pc = 0x2b5efcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 22784), bits); }
    // 0x2b5f00: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B5F00u;
    SET_GPR_U32(ctx, 31, 0x2B5F08u);
    ctx->pc = 0x2B5F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F00u;
    // 0x2b5f04: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B5F00u, 0x2B5F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F08u;
label_2b5f08:
    // 0x2b5f08: 0x24030016  addiu       $v1, $zero, 0x16
    ctx->pc = 0x2b5f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x2b5f0c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2B5F0Cu;
    {
        const bool branch_taken_0x2b5f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F0Cu;
        // 0x2b5f10: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5f0c) {
            ctx->pc = 0x2B5F2Cu;
            goto label_2b5f2c;
        }
    }
    ctx->pc = 0x2B5F14u;
label_2b5f14:
    // 0x2b5f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b5f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b5f18:
    // 0x2b5f18: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x2b5f18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x2b5f1c: 0xc0ad6cc  jal         func_2B5B30
    ctx->pc = 0x2B5F1Cu;
    SET_GPR_U32(ctx, 31, 0x2B5F24u);
    ctx->pc = 0x2B5F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B5F1Cu;
    // 0x2b5f20: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B30u, 0x2B5F1Cu, 0x2B5F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B5F24u;
label_2b5f24:
    // 0x2b5f24: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2b5f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2b5f28: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x2b5f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_2b5f2c:
    // 0x2b5f2c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2b5f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2b5f30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b5f30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5f34: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b5f34u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b5f38: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b5f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5f3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5F3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B5F3Cu;
        // 0x2b5f40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B5F3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B5F44u;
    // 0x2b5f44: 0x0  nop
    ctx->pc = 0x2b5f44u;
    // NOP
    ctx->pc = 0x2b5f48u;
}
