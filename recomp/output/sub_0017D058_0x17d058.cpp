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

// Function: sub_0017D058
// Address: 0x17d058 - 0x17d078
void sub_0017D058_0x17d058(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017D058_0x17d058");
#endif

    switch (ctx->pc) {
        case 0x17d06cu: goto label_17d06c;
        default: break;
    }

    ctx->pc = 0x17d058u;

    // 0x17d058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17d058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17d05c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x17d05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17d060: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17d060u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17d064: 0xc05f406  jal         func_17D018
    ctx->pc = 0x17D064u;
    SET_GPR_U32(ctx, 31, 0x17D06Cu);
    ctx->pc = 0x17D068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17D064u;
    // 0x17d068: 0x3405ffff  ori         $a1, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D018u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D018u, 0x17D064u, 0x17D06Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17D06Cu;
label_17d06c:
    // 0x17d06c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17d06cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17d070: 0x3e00008  jr          $ra
    ctx->pc = 0x17D070u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17D074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17D070u;
        // 0x17d074: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17D070u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17D078u;
}
