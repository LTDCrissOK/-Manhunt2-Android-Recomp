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

// Function: sub_00312668
// Address: 0x312668 - 0x312688
void sub_00312668_0x312668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312668_0x312668");
#endif

    switch (ctx->pc) {
        case 0x31267cu: goto label_31267c;
        default: break;
    }

    ctx->pc = 0x312668u;

    // 0x312668: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x312668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31266c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x31266cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x312670: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x312670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x312674: 0xc0c498c  jal         func_312630
    ctx->pc = 0x312674u;
    SET_GPR_U32(ctx, 31, 0x31267Cu);
    ctx->pc = 0x312678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312674u;
    // 0x312678: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x312630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x312630u, 0x312674u, 0x31267Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31267Cu;
label_31267c:
    // 0x31267c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x31267cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x312680: 0x3e00008  jr          $ra
    ctx->pc = 0x312680u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312680u;
        // 0x312684: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312680u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312688u;
}
