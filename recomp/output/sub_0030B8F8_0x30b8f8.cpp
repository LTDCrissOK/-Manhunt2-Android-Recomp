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

// Function: sub_0030B8F8
// Address: 0x30b8f8 - 0x30b940
void sub_0030B8F8_0x30b8f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B8F8_0x30b8f8");
#endif

    switch (ctx->pc) {
        case 0x30b914u: goto label_30b914;
        default: break;
    }

    ctx->pc = 0x30b8f8u;

    // 0x30b8f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x30b8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x30b8fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30b8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30b900: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30b900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30b904: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30b904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30b908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30b90c: 0xc0c24ea  jal         func_3093A8
    ctx->pc = 0x30B90Cu;
    SET_GPR_U32(ctx, 31, 0x30B914u);
    ctx->pc = 0x30B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30B90Cu;
    // 0x30b910: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3093A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3093A8u, 0x30B90Cu, 0x30B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30B914u;
label_30b914:
    // 0x30b914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30B914u;
    {
        const bool branch_taken_0x30b914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B914u;
        // 0x30b918: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b914) {
            ctx->pc = 0x30B924u;
            goto label_30b924;
        }
    }
    ctx->pc = 0x30B91Cu;
    // 0x30b91c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x30B91Cu;
    {
        const bool branch_taken_0x30b91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B91Cu;
        // 0x30b920: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30b91c) {
            ctx->pc = 0x30B92Cu;
            goto label_30b92c;
        }
    }
    ctx->pc = 0x30B924u;
label_30b924:
    // 0x30b924: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x30b924u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b928: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x30b928u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_30b92c:
    // 0x30b92c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30b92cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30b930: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30b930u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30b934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30b934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30b938: 0x3e00008  jr          $ra
    ctx->pc = 0x30B938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B938u;
        // 0x30b93c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B940u;
}
