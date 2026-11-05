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

// Function: sub_00334830
// Address: 0x334830 - 0x3348c8
void sub_00334830_0x334830(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334830_0x334830");
#endif

    switch (ctx->pc) {
        case 0x334860u: goto label_334860;
        case 0x334888u: goto label_334888;
        default: break;
    }

    ctx->pc = 0x334830u;

    // 0x334830: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x334830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x334834: 0x3c02005b  lui         $v0, 0x5B
    ctx->pc = 0x334834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)91 << 16));
    // 0x334838: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x334838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x33483c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33483cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x334840: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x334840u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334844: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x334844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x334848: 0x24446e70  addiu       $a0, $v0, 0x6E70
    ctx->pc = 0x334848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 28272));
    // 0x33484c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x33484cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x334850: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x334850u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5B6E74u));
    // 0x334854: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x334854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x5B6E7Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5B6E7Cu, _value); } while (0);
    // 0x334858: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x334858u;
    {
        const bool branch_taken_0x334858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33485Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334858u;
        // 0x33485c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334858) {
            ctx->pc = 0x334890u;
            goto label_334890;
        }
    }
    ctx->pc = 0x334860u;
label_334860:
    // 0x334860: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334860u;
    {
        const bool branch_taken_0x334860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334860u;
        // 0x334864: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334860) {
            ctx->pc = 0x33486Cu;
            goto label_33486c;
        }
    }
    ctx->pc = 0x334868u;
    // 0x334868: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x334868u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33486c:
    // 0x33486c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33486Cu;
    {
        const bool branch_taken_0x33486c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x334870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33486Cu;
        // 0x334870: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33486c) {
            ctx->pc = 0x33487Cu;
            goto label_33487c;
        }
    }
    ctx->pc = 0x334874u;
    // 0x334874: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x334874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x334878: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x334878u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_33487c:
    // 0x33487c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x33487cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334880: 0xc0c9bf0  jal         func_326FC0
    ctx->pc = 0x334880u;
    SET_GPR_U32(ctx, 31, 0x334888u);
    ctx->pc = 0x334884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334880u;
    // 0x334884: 0x26040014  addiu       $a0, $s0, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326FC0u, 0x334880u, 0x334888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334888u;
label_334888:
    // 0x334888: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x334888u;
    {
        const bool branch_taken_0x334888 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33488Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334888u;
        // 0x33488c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334888) {
            ctx->pc = 0x3348B0u;
            goto label_3348b0;
        }
    }
    ctx->pc = 0x334890u;
label_334890:
    // 0x334890: 0x26236e70  addiu       $v1, $s1, 0x6E70
    ctx->pc = 0x334890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 28272));
    // 0x334894: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x334894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x334898: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x334898u;
    {
        const bool branch_taken_0x334898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33489Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x334898u;
        // 0x33489c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x334898) {
            ctx->pc = 0x3348A4u;
            goto label_3348a4;
        }
    }
    ctx->pc = 0x3348A0u;
    // 0x3348a0: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x3348a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3348a4:
    // 0x3348a4: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x3348A4u;
    {
        const bool branch_taken_0x3348a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3348a4) {
            ctx->pc = 0x334860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_334860;
        }
    }
    ctx->pc = 0x3348ACu;
    // 0x3348ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3348acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3348b0:
    // 0x3348b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3348b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3348b4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3348b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3348b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3348b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3348bc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3348bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3348c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3348C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3348C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3348C0u;
        // 0x3348c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3348C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3348C8u;
}
