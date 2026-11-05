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

// Function: sub_00115470
// Address: 0x115470 - 0x1154a0
void sub_00115470_0x115470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00115470_0x115470");
#endif

    switch (ctx->pc) {
        case 0x115490u: goto label_115490;
        default: break;
    }

    ctx->pc = 0x115470u;

    // 0x115470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x115470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x115474: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x115474u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115478: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x115478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11547c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x115480: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x115480u;
    {
        const bool branch_taken_0x115480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115480u;
        // 0x115484: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115480) {
            ctx->pc = 0x115494u;
            goto label_115494;
        }
    }
    ctx->pc = 0x115488u;
    // 0x115488: 0xc042170  jal         func_1085C0
    ctx->pc = 0x115488u;
    SET_GPR_U32(ctx, 31, 0x115490u);
    ctx->pc = 0x11548Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115488u;
    // 0x11548c: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1085C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1085C0u, 0x115488u, 0x115490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115490u;
label_115490:
    // 0x115490: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x115490u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_115494:
    // 0x115494: 0x3e00008  jr          $ra
    ctx->pc = 0x115494u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x115498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115494u;
        // 0x115498: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x115494u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11549Cu;
    // 0x11549c: 0x0  nop
    ctx->pc = 0x11549cu;
    // NOP
    ctx->pc = 0x1154a0u;
}
