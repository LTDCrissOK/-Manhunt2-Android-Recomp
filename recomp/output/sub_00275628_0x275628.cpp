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

// Function: sub_00275628
// Address: 0x275628 - 0x275660
void sub_00275628_0x275628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275628_0x275628");
#endif

    switch (ctx->pc) {
        case 0x275640u: goto label_275640;
        default: break;
    }

    ctx->pc = 0x275628u;

    // 0x275628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x275628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27562c: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x27562cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x275630: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275630u;
    {
        const bool branch_taken_0x275630 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x275634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275630u;
        // 0x275634: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275630) {
            ctx->pc = 0x275640u;
            goto label_275640;
        }
    }
    ctx->pc = 0x275638u;
    // 0x275638: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x275638u;
    SET_GPR_U32(ctx, 31, 0x275640u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x275638u, 0x275640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275640u;
label_275640:
    // 0x275640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275644: 0x3e00008  jr          $ra
    ctx->pc = 0x275644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x275648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x275644u;
        // 0x275648: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27564Cu;
    // 0x27564c: 0x0  nop
    ctx->pc = 0x27564cu;
    // NOP
    // 0x275650: 0x27bd0250  addiu       $sp, $sp, 0x250
    ctx->pc = 0x275650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
    // 0x275654: 0x0  nop
    ctx->pc = 0x275654u;
    // NOP
    // 0x275658: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x275658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27565c: 0x0  nop
    ctx->pc = 0x27565cu;
    // NOP
    ctx->pc = 0x275660u;
}
