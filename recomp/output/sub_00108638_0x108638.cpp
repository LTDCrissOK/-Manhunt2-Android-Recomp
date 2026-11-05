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

// Function: sub_00108638
// Address: 0x108638 - 0x108678
void sub_00108638_0x108638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00108638_0x108638");
#endif

    switch (ctx->pc) {
        case 0x108654u: goto label_108654;
        case 0x108664u: goto label_108664;
        default: break;
    }

    ctx->pc = 0x108638u;

    // 0x108638: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x108638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10863c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10863cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x108640: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x108640u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x108644: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x108644u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108648: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x108648u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10864c: 0xc042240  jal         func_108900
    ctx->pc = 0x10864Cu;
    SET_GPR_U32(ctx, 31, 0x108654u);
    ctx->pc = 0x108650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10864Cu;
    // 0x108650: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108900u, 0x10864Cu, 0x108654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108654u;
label_108654:
    // 0x108654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x108654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x108658: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x108658u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x10865c: 0xc0422a8  jal         func_108AA0
    ctx->pc = 0x10865Cu;
    SET_GPR_U32(ctx, 31, 0x108664u);
    ctx->pc = 0x108660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10865Cu;
    // 0x108660: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x108AA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x108AA0u, 0x10865Cu, 0x108664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x108664u;
label_108664:
    // 0x108664: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x108664u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x108668: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x108668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10866c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10866cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x108670: 0x3e00008  jr          $ra
    ctx->pc = 0x108670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x108674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108670u;
        // 0x108674: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x108670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x108678u;
}
