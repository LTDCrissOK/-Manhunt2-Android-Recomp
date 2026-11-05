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

// Function: sub_003E41C8
// Address: 0x3e41c8 - 0x3e41f8
void sub_003E41C8_0x3e41c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E41C8_0x3e41c8");
#endif

    switch (ctx->pc) {
        case 0x3e41ecu: goto label_3e41ec;
        default: break;
    }

    ctx->pc = 0x3e41c8u;

    // 0x3e41c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e41c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e41cc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3e41ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3e41d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e41d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e41d4: 0x24423900  addiu       $v0, $v0, 0x3900
    ctx->pc = 0x3e41d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14592));
    // 0x3e41d8: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3e41d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e41dc: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E41DCu;
    {
        const bool branch_taken_0x3e41dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E41E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41DCu;
        // 0x3e41e0: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e41dc) {
            ctx->pc = 0x3E41ECu;
            goto label_3e41ec;
        }
    }
    ctx->pc = 0x3E41E4u;
    // 0x3e41e4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E41E4u;
    SET_GPR_U32(ctx, 31, 0x3E41ECu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E41E4u, 0x3E41ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E41ECu;
label_3e41ec:
    // 0x3e41ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e41ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e41f0: 0x3e00008  jr          $ra
    ctx->pc = 0x3E41F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E41F0u;
        // 0x3e41f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E41F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E41F8u;
}
