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

// Function: sub_001369A0
// Address: 0x1369a0 - 0x1369d0
void sub_001369A0_0x1369a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001369A0_0x1369a0");
#endif

    switch (ctx->pc) {
        case 0x1369c0u: goto label_1369c0;
        default: break;
    }

    ctx->pc = 0x1369a0u;

    // 0x1369a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1369a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1369a4: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x1369a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x1369a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1369a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1369ac: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1369acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1369b0: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x1369b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x1369b4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1369b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1369b8: 0xc043958  jal         func_10E560
    ctx->pc = 0x1369B8u;
    SET_GPR_U32(ctx, 31, 0x1369C0u);
    ctx->pc = 0x1369BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1369B8u;
    // 0x1369bc: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10E560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E560u, 0x1369B8u, 0x1369C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1369C0u;
label_1369c0:
    // 0x1369c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1369c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1369c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1369C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1369C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1369C4u;
        // 0x1369c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1369C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1369CCu;
    // 0x1369cc: 0x0  nop
    ctx->pc = 0x1369ccu;
    // NOP
    ctx->pc = 0x1369d0u;
}
