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

// Function: sub_001ADA48
// Address: 0x1ada48 - 0x1ada78
void sub_001ADA48_0x1ada48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADA48_0x1ada48");
#endif

    ctx->pc = 0x1ada48u;

    // 0x1ada48: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1ada48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ada4c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ada4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada50: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x1ada50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1ada54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ada54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ada58: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ada58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ada5c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADA5Cu;
    {
        const bool branch_taken_0x1ada5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1ADA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA5Cu;
        // 0x1ada60: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada5c) {
            ctx->pc = 0x1ADA6Cu;
            goto label_1ada6c;
        }
    }
    ctx->pc = 0x1ADA64u;
    // 0x1ada64: 0x38420362  xori        $v0, $v0, 0x362
    ctx->pc = 0x1ada64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)866);
    // 0x1ada68: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1ada68u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ada6c:
    // 0x1ada6c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA6Cu;
        // 0x1ada70: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADA74u;
    // 0x1ada74: 0x0  nop
    ctx->pc = 0x1ada74u;
    // NOP
    ctx->pc = 0x1ada78u;
}
