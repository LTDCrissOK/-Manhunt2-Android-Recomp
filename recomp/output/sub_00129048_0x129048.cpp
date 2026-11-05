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

// Function: sub_00129048
// Address: 0x129048 - 0x129100
void sub_00129048_0x129048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129048_0x129048");
#endif

    switch (ctx->pc) {
        case 0x129068u: goto label_129068;
        case 0x129070u: goto label_129070;
        default: break;
    }

    ctx->pc = 0x129048u;

    // 0x129048: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x129048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12904c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12904cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x129050: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x129050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x129054: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x129054u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129058: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x129058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x12905c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x12905Cu;
    {
        const bool branch_taken_0x12905c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x129060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12905Cu;
        // 0x129060: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12905c) {
            ctx->pc = 0x129080u;
            goto label_129080;
        }
    }
    ctx->pc = 0x129064u;
    // 0x129064: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x129064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_129068:
    // 0x129068: 0xc0f6e9c  jal         func_3DBA70
    ctx->pc = 0x129068u;
    SET_GPR_U32(ctx, 31, 0x129070u);
    ctx->pc = 0x12906Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x129068u;
    // 0x12906c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DBA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DBA70u, 0x129068u, 0x129070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x129070u;
label_129070:
    // 0x129070: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x129070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x129074: 0x0  nop
    ctx->pc = 0x129074u;
    // NOP
    // 0x129078: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x129078u;
    {
        const bool branch_taken_0x129078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x129078) {
            ctx->pc = 0x12907Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x129078u;
            // 0x12907c: 0x8e050004  lw          $a1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x129068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_129068;
        }
    }
    ctx->pc = 0x129080u;
label_129080:
    // 0x129080: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x129080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x129084: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x129084u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x129088: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x129088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x12908c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x12908cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x129090: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x129090u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129094: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x129094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x129098: 0x3e00008  jr          $ra
    ctx->pc = 0x129098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12909Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x129098u;
        // 0x12909c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x129098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1290A0u;
    // 0x1290a0: 0x2ca2004c  sltiu       $v0, $a1, 0x4C
    ctx->pc = 0x1290a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)76) ? 1 : 0);
    // 0x1290a4: 0x10400463  beqz        $v0, . + 4 + (0x463 << 2)
    ctx->pc = 0x1290A4u;
    {
        const bool branch_taken_0x1290a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1290A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1290A4u;
        // 0x1290a8: 0x3c020044  lui         $v0, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1290a4) {
            ctx->pc = 0x12A234u;
            return;
        }
    }
    ctx->pc = 0x1290ACu;
    // 0x1290ac: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1290acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1290b0: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x1290b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x1290b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1290b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1290b8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1290b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1290bc: 0x800008  jr          $a0
    ctx->pc = 0x1290BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1290C4u: goto label_1290c4;
            case 0x1290ECu: goto label_1290ec;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1290BCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1290C4u;
label_1290c4:
    // 0x1290c4: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1290c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1290c8: 0x2447cee0  addiu       $a3, $v0, -0x3120
    ctx->pc = 0x1290c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954720));
    // 0x1290cc: 0x88e30003  lwl         $v1, 0x3($a3)
    ctx->pc = 0x1290ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x1290d0: 0x98e30000  lwr         $v1, 0x0($a3)
    ctx->pc = 0x1290d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x1290d4: 0x80e40004  lb          $a0, 0x4($a3)
    ctx->pc = 0x1290d4u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43CEE4u));
    // 0x1290d8: 0xa8c30003  swl         $v1, 0x3($a2)
    ctx->pc = 0x1290d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1290dc: 0xb8c30000  swr         $v1, 0x0($a2)
    ctx->pc = 0x1290dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x1290e0: 0xa0c40004  sb          $a0, 0x4($a2)
    ctx->pc = 0x1290e0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 4), (uint8_t)GPR_U32(ctx, 4));
    // 0x1290e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1290E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1290E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1290ECu;
label_1290ec:
    // 0x1290ec: 0x3c020044  lui         $v0, 0x44
    ctx->pc = 0x1290ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)68 << 16));
    // 0x1290f0: 0x2447cee8  addiu       $a3, $v0, -0x3118
    ctx->pc = 0x1290f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954728));
    // 0x1290f4: 0x68e30007  ldl         $v1, 0x7($a3)
    ctx->pc = 0x1290f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1290f8: 0x6ce30000  ldr         $v1, 0x0($a3)
    ctx->pc = 0x1290f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1290fc: 0x80e40008  lb          $a0, 0x8($a3)
    ctx->pc = 0x1290fcu;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x43CEF0u));
    ctx->pc = 0x129100u;
}
