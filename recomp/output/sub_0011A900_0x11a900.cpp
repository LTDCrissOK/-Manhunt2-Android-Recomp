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

// Function: sub_0011A900
// Address: 0x11a900 - 0x11a950
void sub_0011A900_0x11a900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011A900_0x11a900");
#endif

    switch (ctx->pc) {
        case 0x11a918u: goto label_11a918;
        default: break;
    }

    ctx->pc = 0x11a900u;

    // 0x11a900: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x11a900u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a904: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11a904u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11a908: 0x24ea0028  addiu       $t2, $a3, 0x28
    ctx->pc = 0x11a908u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 7), 40));
    // 0x11a90c: 0x24e9002c  addiu       $t1, $a3, 0x2C
    ctx->pc = 0x11a90cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
    // 0x11a910: 0x240b000c  addiu       $t3, $zero, 0xC
    ctx->pc = 0x11a910u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x11a914: 0x24080009  addiu       $t0, $zero, 0x9
    ctx->pc = 0x11a914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_11a918:
    // 0x11a918: 0xcb1818  mult        $v1, $a2, $t3
    ctx->pc = 0x11a918u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11a91c: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x11a91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x11a920: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x11a920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x11a924: 0x2cc50020  sltiu       $a1, $a2, 0x20
    ctx->pc = 0x11a924u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x11a928: 0x1431021  addu        $v0, $t2, $v1
    ctx->pc = 0x11a928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x11a92c: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x11a92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x11a930: 0xac480000  sw          $t0, 0x0($v0)
    ctx->pc = 0x11a930u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
    // 0x11a934: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x11a934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x11a938: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x11a938u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
    // 0x11a93c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
    ctx->pc = 0x11A93Cu;
    {
        const bool branch_taken_0x11a93c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x11A940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11A93Cu;
        // 0x11a940: 0xac600030  sw          $zero, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11a93c) {
            ctx->pc = 0x11A918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11a918;
        }
    }
    ctx->pc = 0x11A944u;
    // 0x11a944: 0x3e00008  jr          $ra
    ctx->pc = 0x11A944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11A944u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11A94Cu;
    // 0x11a94c: 0x0  nop
    ctx->pc = 0x11a94cu;
    // NOP
    ctx->pc = 0x11a950u;
}
