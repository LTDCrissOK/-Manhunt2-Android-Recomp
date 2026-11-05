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

// Function: sub_0025D628
// Address: 0x25d628 - 0x25d660
void sub_0025D628_0x25d628(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0025D628_0x25d628");
#endif

    switch (ctx->pc) {
        case 0x25d63cu: goto label_25d63c;
        case 0x25d650u: goto label_25d650;
        default: break;
    }

    ctx->pc = 0x25d628u;

    // 0x25d628: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x25d628u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x25d62c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x25d62cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x25d630: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x25d630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25d634: 0xc0848ca  jal         func_212328
    ctx->pc = 0x25D634u;
    SET_GPR_U32(ctx, 31, 0x25D63Cu);
    ctx->pc = 0x25D638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D634u;
    // 0x25d638: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x212328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212328u, 0x25D634u, 0x25D63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D63Cu;
label_25d63c:
    // 0x25d63c: 0x8e040224  lw          $a0, 0x224($s0)
    ctx->pc = 0x25d63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 548)));
    // 0x25d640: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x25D640u;
    {
        const bool branch_taken_0x25d640 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x25d640) {
            ctx->pc = 0x25D644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x25D640u;
            // 0x25d644: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25D654u;
            goto label_25d654;
        }
    }
    ctx->pc = 0x25D648u;
    // 0x25d648: 0xc097484  jal         func_25D210
    ctx->pc = 0x25D648u;
    SET_GPR_U32(ctx, 31, 0x25D650u);
    ctx->pc = 0x25D64Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25D648u;
    // 0x25d64c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25D210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D210u, 0x25D648u, 0x25D650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25D650u;
label_25d650:
    // 0x25d650: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x25d650u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_25d654:
    // 0x25d654: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x25d654u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x25d658: 0x3e00008  jr          $ra
    ctx->pc = 0x25D658u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25D65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25D658u;
        // 0x25d65c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25D658u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25D660u;
}
