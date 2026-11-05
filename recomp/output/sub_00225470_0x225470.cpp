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

// Function: sub_00225470
// Address: 0x225470 - 0x2254b0
void sub_00225470_0x225470(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225470_0x225470");
#endif

    switch (ctx->pc) {
        case 0x225480u: goto label_225480;
        default: break;
    }

    ctx->pc = 0x225470u;

    // 0x225470: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x225470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x225474: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x225478: 0xc0899bc  jal         func_2266F0
    ctx->pc = 0x225478u;
    SET_GPR_U32(ctx, 31, 0x225480u);
    ctx->pc = 0x2266F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2266F0u, 0x225478u, 0x225480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225480u;
label_225480:
    // 0x225480: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x225480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x225484: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x225484u;
    {
        const bool branch_taken_0x225484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x225488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225484u;
        // 0x225488: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225484) {
            ctx->pc = 0x2254A4u;
            goto label_2254a4;
        }
    }
    ctx->pc = 0x22548Cu;
    // 0x22548c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x22548cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x225490: 0x30423001  andi        $v0, $v0, 0x3001
    ctx->pc = 0x225490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12289);
    // 0x225494: 0x38423001  xori        $v0, $v0, 0x3001
    ctx->pc = 0x225494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)12289);
    // 0x225498: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x225498u;
    {
        const bool branch_taken_0x225498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22549Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x225498u;
        // 0x22549c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x225498) {
            ctx->pc = 0x2254A4u;
            goto label_2254a4;
        }
    }
    ctx->pc = 0x2254A0u;
    // 0x2254a0: 0x8c620274  lw          $v0, 0x274($v1)
    ctx->pc = 0x2254a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 628)));
label_2254a4:
    // 0x2254a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2254a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2254a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2254A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2254ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2254A8u;
        // 0x2254ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2254A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2254B0u;
}
