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

// Function: sub_003E40C8
// Address: 0x3e40c8 - 0x3e4100
void sub_003E40C8_0x3e40c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E40C8_0x3e40c8");
#endif

    switch (ctx->pc) {
        case 0x3e40f4u: goto label_3e40f4;
        default: break;
    }

    ctx->pc = 0x3e40c8u;

    // 0x3e40c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3e40c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3e40cc: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3e40ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3e40d0: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x3e40d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x3e40d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e40d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e40d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3e40d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3e40dc: 0x246338d0  addiu       $v1, $v1, 0x38D0
    ctx->pc = 0x3e40dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14544));
    // 0x3e40e0: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3e40e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3e40e4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E40E4u;
    {
        const bool branch_taken_0x3e40e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E40E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40E4u;
        // 0x3e40e8: 0xac432e4c  sw          $v1, 0x2E4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e40e4) {
            ctx->pc = 0x3E40F4u;
            goto label_3e40f4;
        }
    }
    ctx->pc = 0x3E40ECu;
    // 0x3e40ec: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3E40ECu;
    SET_GPR_U32(ctx, 31, 0x3E40F4u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3E40ECu, 0x3E40F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E40F4u;
label_3e40f4:
    // 0x3e40f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e40f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e40f8: 0x3e00008  jr          $ra
    ctx->pc = 0x3E40F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E40F8u;
        // 0x3e40fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E40F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E4100u;
}
