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

// Function: sub_003A57C0
// Address: 0x3a57c0 - 0x3a57f8
void sub_003A57C0_0x3a57c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A57C0_0x3a57c0");
#endif

    switch (ctx->pc) {
        case 0x3a57dcu: goto label_3a57dc;
        case 0x3a57e4u: goto label_3a57e4;
        default: break;
    }

    ctx->pc = 0x3a57c0u;

    // 0x3a57c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a57c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a57c4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a57c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a57c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a57c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a57cc: 0x24423928  addiu       $v0, $v0, 0x3928
    ctx->pc = 0x3a57ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14632));
    // 0x3a57d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3a57d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a57d4: 0xc0e9ab6  jal         func_3A6AD8
    ctx->pc = 0x3A57D4u;
    SET_GPR_U32(ctx, 31, 0x3A57DCu);
    ctx->pc = 0x3A57D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A57D4u;
    // 0x3a57d8: 0x8c430000  lw          $v1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6AD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6AD8u, 0x3A57D4u, 0x3A57DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A57DCu;
label_3a57dc:
    // 0x3a57dc: 0xc0e9ad8  jal         func_3A6B60
    ctx->pc = 0x3A57DCu;
    SET_GPR_U32(ctx, 31, 0x3A57E4u);
    ctx->pc = 0x3A57E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A57DCu;
    // 0x3a57e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A6B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A6B60u, 0x3A57DCu, 0x3A57E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A57E4u;
label_3a57e4:
    // 0x3a57e4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a57e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a57e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a57e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a57ec: 0x24423938  addiu       $v0, $v0, 0x3938
    ctx->pc = 0x3a57ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14648));
    // 0x3a57f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3A57F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A57F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A57F0u;
        // 0x3a57f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A57F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A57F8u;
}
