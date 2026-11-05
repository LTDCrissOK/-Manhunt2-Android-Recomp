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

// Function: sub_0030C8C8
// Address: 0x30c8c8 - 0x30c910
void sub_0030C8C8_0x30c8c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030C8C8_0x30c8c8");
#endif

    switch (ctx->pc) {
        case 0x30c8ecu: goto label_30c8ec;
        default: break;
    }

    ctx->pc = 0x30c8c8u;

    // 0x30c8c8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x30c8c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x30c8cc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30C8CCu;
    {
        const bool branch_taken_0x30c8cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30C8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8CCu;
        // 0x30c8d0: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8cc) {
            ctx->pc = 0x30C8DCu;
            goto label_30c8dc;
        }
    }
    ctx->pc = 0x30C8D4u;
    // 0x30c8d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x30C8D4u;
    {
        const bool branch_taken_0x30c8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30C8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8D4u;
        // 0x30c8d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30c8d4) {
            ctx->pc = 0x30C8F0u;
            goto label_30c8f0;
        }
    }
    ctx->pc = 0x30C8DCu;
label_30c8dc:
    // 0x30c8dc: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x30c8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x30c8e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30c8e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30c8e4: 0xc0c3164  jal         func_30C590
    ctx->pc = 0x30C8E4u;
    SET_GPR_U32(ctx, 31, 0x30C8ECu);
    ctx->pc = 0x30C8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30C8E4u;
    // 0x30c8e8: 0x24a5c718  addiu       $a1, $a1, -0x38E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30C590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30C590u, 0x30C8E4u, 0x30C8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30C8ECu;
label_30c8ec:
    // 0x30c8ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30c8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30c8f0:
    // 0x30c8f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x30c8f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30c8f4: 0x3e00008  jr          $ra
    ctx->pc = 0x30C8F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30C8F4u;
        // 0x30c8f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30C8F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30C8FCu;
    // 0x30c8fc: 0x0  nop
    ctx->pc = 0x30c8fcu;
    // NOP
    // 0x30c900: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x30c900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x30c904: 0x0  nop
    ctx->pc = 0x30c904u;
    // NOP
    // 0x30c908: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x30c908u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x30c90c: 0x0  nop
    ctx->pc = 0x30c90cu;
    // NOP
    ctx->pc = 0x30c910u;
}
