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

// Function: sub_00111178
// Address: 0x111178 - 0x1111a8
void sub_00111178_0x111178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00111178_0x111178");
#endif

    switch (ctx->pc) {
        case 0x11118cu: goto label_11118c;
        case 0x11119cu: goto label_11119c;
        default: break;
    }

    ctx->pc = 0x111178u;

    // 0x111178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x111178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11117c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11117Cu;
    {
        const bool branch_taken_0x11117c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x111180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11117Cu;
        // 0x111180: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11117c) {
            ctx->pc = 0x111194u;
            goto label_111194;
        }
    }
    ctx->pc = 0x111184u;
    // 0x111184: 0xc045098  jal         func_114260
    ctx->pc = 0x111184u;
    SET_GPR_U32(ctx, 31, 0x11118Cu);
    ctx->pc = 0x114260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114260u, 0x111184u, 0x11118Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11118Cu;
label_11118c:
    // 0x11118c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11118Cu;
    {
        const bool branch_taken_0x11118c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x111190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11118Cu;
        // 0x111190: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11118c) {
            ctx->pc = 0x1111A0u;
            goto label_1111a0;
        }
    }
    ctx->pc = 0x111194u;
label_111194:
    // 0x111194: 0xc0450b0  jal         func_1142C0
    ctx->pc = 0x111194u;
    SET_GPR_U32(ctx, 31, 0x11119Cu);
    ctx->pc = 0x1142C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1142C0u, 0x111194u, 0x11119Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11119Cu;
label_11119c:
    // 0x11119c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11119cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1111a0:
    // 0x1111a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1111A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1111A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1111A0u;
        // 0x1111a4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1111A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1111A8u;
}
