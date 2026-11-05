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

// Function: sub_00110900
// Address: 0x110900 - 0x110930
void sub_00110900_0x110900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110900_0x110900");
#endif

    switch (ctx->pc) {
        case 0x11091cu: goto label_11091c;
        default: break;
    }

    ctx->pc = 0x110900u;

    // 0x110900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x110904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x110908: 0x8c840020  lw          $a0, 0x20($a0)
    ctx->pc = 0x110908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x11090c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11090Cu;
    {
        const bool branch_taken_0x11090c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x110910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11090Cu;
        // 0x110910: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11090c) {
            ctx->pc = 0x110924u;
            goto label_110924;
        }
    }
    ctx->pc = 0x110914u;
    // 0x110914: 0xc05fc4a  jal         func_17F128
    ctx->pc = 0x110914u;
    SET_GPR_U32(ctx, 31, 0x11091Cu);
    ctx->pc = 0x17F128u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F128u, 0x110914u, 0x11091Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11091Cu;
label_11091c:
    // 0x11091c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11091Cu;
    {
        const bool branch_taken_0x11091c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x110920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11091Cu;
        // 0x110920: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11091c) {
            ctx->pc = 0x110928u;
            goto label_110928;
        }
    }
    ctx->pc = 0x110924u;
label_110924:
    // 0x110924: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x110924u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_110928:
    // 0x110928: 0x3e00008  jr          $ra
    ctx->pc = 0x110928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x110928u;
        // 0x11092c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x110928u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x110930u;
}
