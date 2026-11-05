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

// Function: sub_002C4870
// Address: 0x2c4870 - 0x2c4940
void sub_002C4870_0x2c4870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C4870_0x2c4870");
#endif

    ctx->pc = 0x2c4870u;

    // 0x2c4870: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2c4870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4874: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2c4874u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c4878: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2c4878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c487c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c487cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c4880: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c4880u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c4884: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2c4884u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4888: 0x0  nop
    ctx->pc = 0x2c4888u;
    // NOP
    // 0x2c488c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C488Cu;
    {
        const bool branch_taken_0x2c488c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C488Cu;
        // 0x2c4890: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c488c) {
            ctx->pc = 0x2C4898u;
            goto label_2c4898;
        }
    }
    ctx->pc = 0x2C4894u;
    // 0x2c4894: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4894u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4898:
    // 0x2c4898: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c4898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c489c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x2C489Cu;
    {
        const bool branch_taken_0x2c489c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c489c) {
            ctx->pc = 0x2C4934u;
            goto label_2c4934;
        }
    }
    ctx->pc = 0x2C48A4u;
    // 0x2c48a4: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x2c48a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c48a8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x2c48a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c48ac: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c48acu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c48b0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c48b0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c48b4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2c48b4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c48b8: 0x0  nop
    ctx->pc = 0x2c48b8u;
    // NOP
    // 0x2c48bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C48BCu;
    {
        const bool branch_taken_0x2c48bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C48C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48BCu;
        // 0x2c48c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c48bc) {
            ctx->pc = 0x2C48C8u;
            goto label_2c48c8;
        }
    }
    ctx->pc = 0x2C48C4u;
    // 0x2c48c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c48c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c48c8:
    // 0x2c48c8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c48c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c48cc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2C48CCu;
    {
        const bool branch_taken_0x2c48cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c48cc) {
            ctx->pc = 0x2C4934u;
            goto label_2c4934;
        }
    }
    ctx->pc = 0x2C48D4u;
    // 0x2c48d4: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x2c48d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c48d8: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x2c48d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c48dc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c48dcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c48e0: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c48e0u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c48e4: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2c48e4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c48e8: 0x0  nop
    ctx->pc = 0x2c48e8u;
    // NOP
    // 0x2c48ec: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C48ECu;
    {
        const bool branch_taken_0x2c48ec = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C48F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C48ECu;
        // 0x2c48f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c48ec) {
            ctx->pc = 0x2C48F8u;
            goto label_2c48f8;
        }
    }
    ctx->pc = 0x2C48F4u;
    // 0x2c48f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c48f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c48f8:
    // 0x2c48f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c48f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c48fc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2C48FCu;
    {
        const bool branch_taken_0x2c48fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c48fc) {
            ctx->pc = 0x2C4934u;
            goto label_2c4934;
        }
    }
    ctx->pc = 0x2C4904u;
    // 0x2c4904: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2c4904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2c4908: 0xc4a1000c  lwc1        $f1, 0xC($a1)
    ctx->pc = 0x2c4908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2c490c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2c490cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2c4910: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x2c4910u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x2c4914: 0x460c0036  c.le.s      $f0, $f12
    ctx->pc = 0x2c4914u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2c4918: 0x0  nop
    ctx->pc = 0x2c4918u;
    // NOP
    // 0x2c491c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x2C491Cu;
    {
        const bool branch_taken_0x2c491c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2C4920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C491Cu;
        // 0x2c4920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c491c) {
            ctx->pc = 0x2C4928u;
            goto label_2c4928;
        }
    }
    ctx->pc = 0x2C4924u;
    // 0x2c4924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c4924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c4928:
    // 0x2c4928: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2c4928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2c492c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2C492Cu;
    {
        const bool branch_taken_0x2c492c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c492c) {
            ctx->pc = 0x2C4930u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C492Cu;
            // 0x2c4930: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C4934u;
            goto label_2c4934;
        }
    }
    ctx->pc = 0x2C4934u;
label_2c4934:
    // 0x2c4934: 0x3e00008  jr          $ra
    ctx->pc = 0x2C4934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C4938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C4934u;
        // 0x2c4938: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C4934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C493Cu;
    // 0x2c493c: 0x0  nop
    ctx->pc = 0x2c493cu;
    // NOP
    ctx->pc = 0x2c4940u;
}
