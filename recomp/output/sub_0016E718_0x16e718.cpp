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

// Function: sub_0016E718
// Address: 0x16e718 - 0x16e750
void sub_0016E718_0x16e718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016E718_0x16e718");
#endif

    switch (ctx->pc) {
        case 0x16e72cu: goto label_16e72c;
        case 0x16e734u: goto label_16e734;
        case 0x16e73cu: goto label_16e73c;
        default: break;
    }

    ctx->pc = 0x16e718u;

    // 0x16e718: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16e718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16e71c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16e71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16e720: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16e720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16e724: 0xc04f820  jal         func_13E080
    ctx->pc = 0x16E724u;
    SET_GPR_U32(ctx, 31, 0x16E72Cu);
    ctx->pc = 0x16E728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E724u;
    // 0x16e728: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x16E724u, 0x16E72Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E72Cu;
label_16e72c:
    // 0x16e72c: 0xc05b3da  jal         func_16CF68
    ctx->pc = 0x16E72Cu;
    SET_GPR_U32(ctx, 31, 0x16E734u);
    ctx->pc = 0x16E730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E72Cu;
    // 0x16e730: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16CF68u, 0x16E72Cu, 0x16E734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E734u;
label_16e734:
    // 0x16e734: 0xc05ba08  jal         func_16E820
    ctx->pc = 0x16E734u;
    SET_GPR_U32(ctx, 31, 0x16E73Cu);
    ctx->pc = 0x16E738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16E734u;
    // 0x16e738: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16E820u, 0x16E734u, 0x16E73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16E73Cu;
label_16e73c:
    // 0x16e73c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16e73cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16e740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16e740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16e744: 0x3e00008  jr          $ra
    ctx->pc = 0x16E744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16E744u;
        // 0x16e748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16E744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16E74Cu;
    // 0x16e74c: 0x0  nop
    ctx->pc = 0x16e74cu;
    // NOP
    ctx->pc = 0x16e750u;
}
