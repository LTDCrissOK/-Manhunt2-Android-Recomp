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

// Function: sub_001086C0
// Address: 0x1086c0 - 0x108708
void sub_001086C0_0x1086c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001086C0_0x1086c0");
#endif

    switch (ctx->pc) {
        case 0x1086dcu: goto label_1086dc;
        case 0x1086f4u: goto label_1086f4;
        default: break;
    }

    ctx->pc = 0x1086c0u;

    // 0x1086c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1086c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1086c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1086c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1086c8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1086c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1086cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1086ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1086d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1086d4: 0xc042240  jal         func_108900
    ctx->pc = 0x1086D4u;
    SET_GPR_U32(ctx, 31, 0x1086DCu);
    ctx->pc = 0x1086D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086D4u;
    // 0x1086d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108900u, 0x1086D4u, 0x1086DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086DCu;
label_1086dc:
    // 0x1086dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1086dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1086e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1086e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086e4: 0xac510010  sw          $s1, 0x10($v0)
    ctx->pc = 0x1086e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 17));
    // 0x1086e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1086e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1086ec: 0xc0422a8  jal         func_108AA0
    ctx->pc = 0x1086ECu;
    SET_GPR_U32(ctx, 31, 0x1086F4u);
    ctx->pc = 0x1086F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1086ECu;
    // 0x1086f0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x1086ECu, 0x1086F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1086F4u;
label_1086f4:
    // 0x1086f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1086f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1086f8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1086f8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1086fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1086fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108700: 0x3e00008  jr          $ra
    ctx->pc = 0x108700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108700u;
        // 0x108704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108708u;
}
