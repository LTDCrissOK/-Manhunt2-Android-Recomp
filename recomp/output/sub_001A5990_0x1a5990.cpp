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

// Function: sub_001A5990
// Address: 0x1a5990 - 0x1a59c0
void sub_001A5990_0x1a5990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5990_0x1a5990");
#endif

    ctx->pc = 0x1a5990u;

    // 0x1a5990: 0x28820056  slti        $v0, $a0, 0x56
    ctx->pc = 0x1a5990u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)86) ? 1 : 0);
    // 0x1a5994: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A5994u;
    {
        const bool branch_taken_0x1a5994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5994u;
        // 0x1a5998: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5994) {
            ctx->pc = 0x1A59B4u;
            goto label_1a59b4;
        }
    }
    ctx->pc = 0x1A599Cu;
    // 0x1a599c: 0x28820029  slti        $v0, $a0, 0x29
    ctx->pc = 0x1a599cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)41) ? 1 : 0);
    // 0x1a59a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A59A0u;
    {
        const bool branch_taken_0x1a59a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59A0u;
        // 0x1a59a4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59a0) {
            ctx->pc = 0x1A59B0u;
            goto label_1a59b0;
        }
    }
    ctx->pc = 0x1A59A8u;
    // 0x1a59a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1A59A8u;
    {
        const bool branch_taken_0x1a59a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59A8u;
        // 0x1a59ac: 0x451821  addu        $v1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59a8) {
            ctx->pc = 0x1A59B4u;
            goto label_1a59b4;
        }
    }
    ctx->pc = 0x1A59B0u;
label_1a59b0:
    // 0x1a59b0: 0x2483007b  addiu       $v1, $a0, 0x7B
    ctx->pc = 0x1a59b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 123));
label_1a59b4:
    // 0x1a59b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1A59B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A59B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A59B4u;
        // 0x1a59b8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A59B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A59BCu;
    // 0x1a59bc: 0x0  nop
    ctx->pc = 0x1a59bcu;
    // NOP
    ctx->pc = 0x1a59c0u;
}
