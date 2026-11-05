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

// Function: sub_0017F158
// Address: 0x17f158 - 0x17f188
void sub_0017F158_0x17f158(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F158_0x17f158");
#endif

    switch (ctx->pc) {
        case 0x17f174u: goto label_17f174;
        default: break;
    }

    ctx->pc = 0x17f158u;

    // 0x17f158: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f158u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f15c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f160: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17f160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f164: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F164u;
    {
        const bool branch_taken_0x17f164 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F164u;
        // 0x17f168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f164) {
            ctx->pc = 0x17F17Cu;
            goto label_17f17c;
        }
    }
    ctx->pc = 0x17F16Cu;
    // 0x17f16c: 0xc05effe  jal         func_17BFF8
    ctx->pc = 0x17F16Cu;
    SET_GPR_U32(ctx, 31, 0x17F174u);
    ctx->pc = 0x17BFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17BFF8u, 0x17F16Cu, 0x17F174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F174u;
label_17f174:
    // 0x17f174: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F174u;
    {
        const bool branch_taken_0x17f174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F174u;
        // 0x17f178: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f174) {
            ctx->pc = 0x17F180u;
            goto label_17f180;
        }
    }
    ctx->pc = 0x17F17Cu;
label_17f17c:
    // 0x17f17c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f17cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f180:
    // 0x17f180: 0x3e00008  jr          $ra
    ctx->pc = 0x17F180u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F180u;
        // 0x17f184: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F180u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F188u;
}
