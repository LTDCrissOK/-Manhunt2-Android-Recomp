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

// Function: sub_00370630
// Address: 0x370630 - 0x370658
void sub_00370630_0x370630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00370630_0x370630");
#endif

    switch (ctx->pc) {
        case 0x370644u: goto label_370644;
        default: break;
    }

    ctx->pc = 0x370630u;

    // 0x370630: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x370630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x370634: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x370634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x370638: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x370638u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37063c: 0xc0dc196  jal         func_370658
    ctx->pc = 0x37063Cu;
    SET_GPR_U32(ctx, 31, 0x370644u);
    ctx->pc = 0x370640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37063Cu;
    // 0x370640: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x370658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x370658u, 0x37063Cu, 0x370644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x370644u;
label_370644:
    // 0x370644: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x370644u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x370648: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x370648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37064c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37064cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x370650: 0x3e00008  jr          $ra
    ctx->pc = 0x370650u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x370654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x370650u;
        // 0x370654: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x370650u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x370658u;
}
