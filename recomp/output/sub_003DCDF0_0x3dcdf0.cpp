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

// Function: sub_003DCDF0
// Address: 0x3dcdf0 - 0x3dce20
void sub_003DCDF0_0x3dcdf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCDF0_0x3dcdf0");
#endif

    switch (ctx->pc) {
        case 0x3dce14u: goto label_3dce14;
        default: break;
    }

    ctx->pc = 0x3dcdf0u;

    // 0x3dcdf0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dcdf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dcdf4: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dcdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dcdf8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dcdf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dcdfc: 0x24421370  addiu       $v0, $v0, 0x1370
    ctx->pc = 0x3dcdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4976));
    // 0x3dce00: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dce00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dce04: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCE04u;
    {
        const bool branch_taken_0x3dce04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE04u;
        // 0x3dce08: 0xac820044  sw          $v0, 0x44($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dce04) {
            ctx->pc = 0x3DCE14u;
            goto label_3dce14;
        }
    }
    ctx->pc = 0x3DCE0Cu;
    // 0x3dce0c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DCE0Cu;
    SET_GPR_U32(ctx, 31, 0x3DCE14u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DCE0Cu, 0x3DCE14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE14u;
label_3dce14:
    // 0x3dce14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dce14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dce18: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCE18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE18u;
        // 0x3dce1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCE18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCE20u;
}
