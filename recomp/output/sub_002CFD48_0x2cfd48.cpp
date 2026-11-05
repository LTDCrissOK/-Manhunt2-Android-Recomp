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

// Function: sub_002CFD48
// Address: 0x2cfd48 - 0x2cfe20
void sub_002CFD48_0x2cfd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CFD48_0x2cfd48");
#endif

    switch (ctx->pc) {
        case 0x2cfd84u: goto label_2cfd84;
        case 0x2cfdd4u: goto label_2cfdd4;
        case 0x2cfdf0u: goto label_2cfdf0;
        case 0x2cfdf8u: goto label_2cfdf8;
        default: break;
    }

    ctx->pc = 0x2cfd48u;

    // 0x2cfd48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2cfd48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2cfd4c: 0x3c020047  lui         $v0, 0x47
    ctx->pc = 0x2cfd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)71 << 16));
    // 0x2cfd50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2cfd50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2cfd54: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2cfd54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2cfd58: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x2cfd58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x2cfd5c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2cfd5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfd60: 0x27a70018  addiu       $a3, $sp, 0x18
    ctx->pc = 0x2cfd60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x2cfd64: 0x244b0b08  addiu       $t3, $v0, 0xB08
    ctx->pc = 0x2cfd64u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 2824));
    // 0x2cfd68: 0x89630003  lwl         $v1, 0x3($t3)
    ctx->pc = 0x2cfd68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x2cfd6c: 0x99630000  lwr         $v1, 0x0($t3)
    ctx->pc = 0x2cfd6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x2cfd70: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x2cfd70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2cfd74: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x2cfd74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2cfd78: 0x27a60014  addiu       $a2, $sp, 0x14
    ctx->pc = 0x2cfd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    // 0x2cfd7c: 0xc0b3f0e  jal         func_2CFC38
    ctx->pc = 0x2CFD7Cu;
    SET_GPR_U32(ctx, 31, 0x2CFD84u);
    ctx->pc = 0x2CFD80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFD7Cu;
    // 0x2cfd80: 0x27a8001c  addiu       $t0, $sp, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC38u, 0x2CFD7Cu, 0x2CFD84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFD84u;
label_2cfd84:
    // 0x2cfd84: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x2cfd84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2cfd88: 0x8fa7001c  lw          $a3, 0x1C($sp)
    ctx->pc = 0x2cfd88u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x2cfd8c: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x2cfd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x2cfd90: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x2cfd90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2cfd94: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2CFD94u;
    {
        const bool branch_taken_0x2cfd94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFD98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFD94u;
        // 0x2cfd98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfd94) {
            ctx->pc = 0x2CFE10u;
            goto label_2cfe10;
        }
    }
    ctx->pc = 0x2CFD9Cu;
    // 0x2cfd9c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2cfd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cfda0: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x2cfda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x2cfda4: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x2cfda4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2cfda8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2cfda8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2cfdac: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x2cfdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x2cfdb0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2cfdb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x2cfdb4: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2cfdb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2cfdb8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2cfdb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2cfdbc: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2cfdbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2cfdc0: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2cfdc0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdc4: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x2cfdc4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2cfdc8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2cfdc8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfdcc: 0xc0b40ae  jal         func_2D02B8
    ctx->pc = 0x2CFDCCu;
    SET_GPR_U32(ctx, 31, 0x2CFDD4u);
    ctx->pc = 0x2CFDD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFDCCu;
    // 0x2cfdd0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D02B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D02B8u, 0x2CFDCCu, 0x2CFDD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFDD4u;
label_2cfdd4:
    // 0x2cfdd4: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2cfdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x2cfdd8: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cfdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cfddc: 0x8c66b4a8  lw          $a2, -0x4B58($v1)
    ctx->pc = 0x2cfddcu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cfde0: 0x34842f80  ori         $a0, $a0, 0x2F80
    ctx->pc = 0x2cfde0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12160);
    // 0x2cfde4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2cfde4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cfde8: 0xc0b3f16  jal         func_2CFC58
    ctx->pc = 0x2CFDE8u;
    SET_GPR_U32(ctx, 31, 0x2CFDF0u);
    ctx->pc = 0x2CFDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFDE8u;
    // 0x2cfdec: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CFC58u, 0x2CFDE8u, 0x2CFDF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFDF0u;
label_2cfdf0:
    // 0x2cfdf0: 0xc0b3da8  jal         func_2CF6A0
    ctx->pc = 0x2CFDF0u;
    SET_GPR_U32(ctx, 31, 0x2CFDF8u);
    ctx->pc = 0x2CFDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CFDF0u;
    // 0x2cfdf4: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CF6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CF6A0u, 0x2CFDF0u, 0x2CFDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CFDF8u;
label_2cfdf8:
    // 0x2cfdf8: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x2cfdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x2cfdfc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CFDFCu;
    {
        const bool branch_taken_0x2cfdfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CFE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFDFCu;
        // 0x2cfe00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cfdfc) {
            ctx->pc = 0x2CFE10u;
            goto label_2cfe10;
        }
    }
    ctx->pc = 0x2CFE04u;
    // 0x2cfe04: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2cfe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2cfe08: 0xae0200a8  sw          $v0, 0xA8($s0)
    ctx->pc = 0x2cfe08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 168), GPR_U32(ctx, 2));
    // 0x2cfe0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2cfe0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2cfe10:
    // 0x2cfe10: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x2cfe10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cfe14: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2cfe14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2cfe18: 0x3e00008  jr          $ra
    ctx->pc = 0x2CFE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CFE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CFE18u;
        // 0x2cfe1c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CFE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CFE20u;
}
