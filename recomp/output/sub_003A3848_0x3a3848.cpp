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

// Function: sub_003A3848
// Address: 0x3a3848 - 0x3a3898
void sub_003A3848_0x3a3848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3848_0x3a3848");
#endif

    switch (ctx->pc) {
        case 0x3a3888u: goto label_3a3888;
        default: break;
    }

    ctx->pc = 0x3a3848u;

    // 0x3a3848: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x3a3848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
    // 0x3a384c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a384cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a3850: 0x24e76ac0  addiu       $a3, $a3, 0x6AC0
    ctx->pc = 0x3a3850u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 27328));
    // 0x3a3854: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a3854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3a3858: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a385c: 0x3c090065  lui         $t1, 0x65
    ctx->pc = 0x3a385cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)101 << 16));
    // 0x3a3860: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x3a3860u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x656AC0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x656AC0u, _value); } while (0);
    // 0x3a3864: 0x24442700  addiu       $a0, $v0, 0x2700
    ctx->pc = 0x3a3864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9984));
    // 0x3a3868: 0x25296bc0  addiu       $t1, $t1, 0x6BC0
    ctx->pc = 0x3a3868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 27584));
    // 0x3a386c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x3a386cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3a3870: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3a3870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3874: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x3a3874u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3a3878: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3a3878u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a387c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x3a387cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a3880: 0xc0f347c  jal         func_3CD1F0
    ctx->pc = 0x3A3880u;
    SET_GPR_U32(ctx, 31, 0x3A3888u);
    ctx->pc = 0x3A3884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A3880u;
    // 0x3a3884: 0xafa00000  sw          $zero, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CD1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CD1F0u, 0x3A3880u, 0x3A3888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3888u;
label_3a3888:
    // 0x3a3888: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a3888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a388c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A388Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A388Cu;
        // 0x3a3890: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A388Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3894u;
    // 0x3a3894: 0x0  nop
    ctx->pc = 0x3a3894u;
    // NOP
    ctx->pc = 0x3a3898u;
}
