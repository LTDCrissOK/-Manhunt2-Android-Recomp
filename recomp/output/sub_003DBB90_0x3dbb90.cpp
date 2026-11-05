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

// Function: sub_003DBB90
// Address: 0x3dbb90 - 0x3dbbc0
void sub_003DBB90_0x3dbb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DBB90_0x3dbb90");
#endif

    switch (ctx->pc) {
        case 0x3dbbb4u: goto label_3dbbb4;
        default: break;
    }

    ctx->pc = 0x3dbb90u;

    // 0x3dbb90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dbb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dbb94: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dbb94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dbb98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dbb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dbb9c: 0x24420510  addiu       $v0, $v0, 0x510
    ctx->pc = 0x3dbb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1296));
    // 0x3dbba0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dbba0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dbba4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DBBA4u;
    {
        const bool branch_taken_0x3dbba4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DBBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBA4u;
        // 0x3dbba8: 0xac820020  sw          $v0, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dbba4) {
            ctx->pc = 0x3DBBB4u;
            goto label_3dbbb4;
        }
    }
    ctx->pc = 0x3DBBACu;
    // 0x3dbbac: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DBBACu;
    SET_GPR_U32(ctx, 31, 0x3DBBB4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DBBACu, 0x3DBBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DBBB4u;
label_3dbbb4:
    // 0x3dbbb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dbbb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dbbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3DBBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DBBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DBBB8u;
        // 0x3dbbbc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DBBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DBBC0u;
}
