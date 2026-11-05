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

// Function: sub_00122568
// Address: 0x122568 - 0x122590
void sub_00122568_0x122568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00122568_0x122568");
#endif

    switch (ctx->pc) {
        case 0x122584u: goto label_122584;
        default: break;
    }

    ctx->pc = 0x122568u;

    // 0x122568: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x122568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12256c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12256cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x122570: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x122570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x122574: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x122574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x122578: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x122578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x12257c: 0xc048994  jal         func_122650
    ctx->pc = 0x12257Cu;
    SET_GPR_U32(ctx, 31, 0x122584u);
    ctx->pc = 0x122580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12257Cu;
    // 0x122580: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122650u, 0x12257Cu, 0x122584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x122584u;
label_122584:
    // 0x122584: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x122584u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x122588: 0x3e00008  jr          $ra
    ctx->pc = 0x122588u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12258Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x122588u;
        // 0x12258c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x122588u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x122590u;
}
