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

// Function: sub_00172060
// Address: 0x172060 - 0x172090
void sub_00172060_0x172060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00172060_0x172060");
#endif

    switch (ctx->pc) {
        case 0x172074u: goto label_172074;
        case 0x17207cu: goto label_17207c;
        default: break;
    }

    ctx->pc = 0x172060u;

    // 0x172060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x172060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x172064: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x172064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x172068: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x172068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x17206c: 0xc04f820  jal         func_13E080
    ctx->pc = 0x17206Cu;
    SET_GPR_U32(ctx, 31, 0x172074u);
    ctx->pc = 0x172070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17206Cu;
    // 0x172070: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13E080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13E080u, 0x17206Cu, 0x172074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x172074u;
label_172074:
    // 0x172074: 0xc05cd68  jal         func_1735A0
    ctx->pc = 0x172074u;
    SET_GPR_U32(ctx, 31, 0x17207Cu);
    ctx->pc = 0x172078u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x172074u;
    // 0x172078: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1735A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1735A0u, 0x172074u, 0x17207Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17207Cu;
label_17207c:
    // 0x17207c: 0xae000270  sw          $zero, 0x270($s0)
    ctx->pc = 0x17207cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 624), GPR_U32(ctx, 0));
    // 0x172080: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x172080u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x172084: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x172084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x172088: 0x3e00008  jr          $ra
    ctx->pc = 0x172088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17208Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x172088u;
        // 0x17208c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x172088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x172090u;
}
