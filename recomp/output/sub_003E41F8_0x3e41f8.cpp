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

// Function: sub_003E41F8
// Address: 0x3e41f8 - 0x3e4228
void sub_003E41F8_0x3e41f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E41F8_0x3e41f8");
#endif

    switch (ctx->pc) {
        case 0x3e421cu: goto label_3e421c;
        default: break;
    }

    ctx->pc = 0x3e41f8u;

    // 0x3e41f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e41f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e41fc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e41fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e4200: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e4200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e4204: 0x24423920  addiu       $v0, $v0, 0x3920
    ctx->pc = 0x3e4204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14624));
    // 0x3e4208: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3e4208u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e420c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E420Cu;
    {
        const bool branch_taken_0x3e420c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E4210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E420Cu;
        // 0x3e4210: 0xac820014  sw          $v0, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e420c) {
            ctx->pc = 0x3E421Cu;
            goto label_3e421c;
        }
    }
    ctx->pc = 0x3E4214u;
    // 0x3e4214: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E4214u;
    SET_GPR_U32(ctx, 31, 0x3E421Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E4214u, 0x3E421Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E421Cu;
label_3e421c:
    // 0x3e421c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e421cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e4220: 0x3e00008  jr          $ra
    ctx->pc = 0x3E4220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E4224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E4220u;
        // 0x3e4224: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E4220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4228u;
}
