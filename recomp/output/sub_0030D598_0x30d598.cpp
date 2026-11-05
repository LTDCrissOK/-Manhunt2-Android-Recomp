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

// Function: sub_0030D598
// Address: 0x30d598 - 0x30d5c0
void sub_0030D598_0x30d598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D598_0x30d598");
#endif

    switch (ctx->pc) {
        case 0x30d5b0u: goto label_30d5b0;
        default: break;
    }

    ctx->pc = 0x30d598u;

    // 0x30d598: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30d598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30d59c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x30d59cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x30d5a0: 0x84850000  lh          $a1, 0x0($a0)
    ctx->pc = 0x30d5a0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30d5a4: 0x3c04005a  lui         $a0, 0x5A
    ctx->pc = 0x30d5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)90 << 16));
    // 0x30d5a8: 0xc0c3672  jal         func_30D9C8
    ctx->pc = 0x30D5A8u;
    SET_GPR_U32(ctx, 31, 0x30D5B0u);
    ctx->pc = 0x30D5ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D5A8u;
    // 0x30d5ac: 0x24847ee0  addiu       $a0, $a0, 0x7EE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32480));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30D9C8u, 0x30D5A8u, 0x30D5B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D5B0u;
label_30d5b0:
    // 0x30d5b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30d5b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d5b4: 0x24420009  addiu       $v0, $v0, 0x9
    ctx->pc = 0x30d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9));
    // 0x30d5b8: 0x3e00008  jr          $ra
    ctx->pc = 0x30D5B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D5B8u;
        // 0x30d5bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D5B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D5C0u;
}
