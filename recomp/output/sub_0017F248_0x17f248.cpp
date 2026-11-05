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

// Function: sub_0017F248
// Address: 0x17f248 - 0x17f278
void sub_0017F248_0x17f248(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F248_0x17f248");
#endif

    switch (ctx->pc) {
        case 0x17f264u: goto label_17f264;
        default: break;
    }

    ctx->pc = 0x17f248u;

    // 0x17f248: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f24c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f24cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f250: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x17f250u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x17f254: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F254u;
    {
        const bool branch_taken_0x17f254 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F254u;
        // 0x17f258: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f254) {
            ctx->pc = 0x17F268u;
            goto label_17f268;
        }
    }
    ctx->pc = 0x17F25Cu;
    // 0x17f25c: 0xc05f012  jal         func_17C048
    ctx->pc = 0x17F25Cu;
    SET_GPR_U32(ctx, 31, 0x17F264u);
    ctx->pc = 0x17C048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C048u, 0x17F25Cu, 0x17F264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F264u;
label_17f264:
    // 0x17f264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f268:
    // 0x17f268: 0x3e00008  jr          $ra
    ctx->pc = 0x17F268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F268u;
        // 0x17f26c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F270u;
    // 0x17f270: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17f274: 0x0  nop
    ctx->pc = 0x17f274u;
    // NOP
    ctx->pc = 0x17f278u;
}
