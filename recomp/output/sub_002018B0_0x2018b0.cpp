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

// Function: sub_002018B0
// Address: 0x2018b0 - 0x2018d8
void sub_002018B0_0x2018b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002018B0_0x2018b0");
#endif

    switch (ctx->pc) {
        case 0x2018c4u: goto label_2018c4;
        default: break;
    }

    ctx->pc = 0x2018b0u;

    // 0x2018b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2018b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2018b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2018b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2018b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2018b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2018bc: 0xc080676  jal         func_2019D8
    ctx->pc = 0x2018BCu;
    SET_GPR_U32(ctx, 31, 0x2018C4u);
    ctx->pc = 0x2018C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2018BCu;
    // 0x2018c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2019D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2019D8u, 0x2018BCu, 0x2018C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2018C4u;
label_2018c4:
    // 0x2018c4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2018c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2018c8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2018c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2018cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2018ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2018d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2018D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2018D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2018D0u;
        // 0x2018d4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2018D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2018D8u;
}
