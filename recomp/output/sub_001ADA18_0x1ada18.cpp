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

// Function: sub_001ADA18
// Address: 0x1ada18 - 0x1ada48
void sub_001ADA18_0x1ada18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ADA18_0x1ada18");
#endif

    ctx->pc = 0x1ada18u;

    // 0x1ada18: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x1ada18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x1ada1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ada1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ada20: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x1ada20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1ada24: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1ada24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1ada28: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1ada28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1ada2c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1ADA2Cu;
    {
        const bool branch_taken_0x1ada2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1ADA30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA2Cu;
        // 0x1ada30: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ada2c) {
            ctx->pc = 0x1ADA3Cu;
            goto label_1ada3c;
        }
    }
    ctx->pc = 0x1ADA34u;
    // 0x1ada34: 0x38420788  xori        $v0, $v0, 0x788
    ctx->pc = 0x1ada34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1928);
    // 0x1ada38: 0x2c460001  sltiu       $a2, $v0, 0x1
    ctx->pc = 0x1ada38u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ada3c:
    // 0x1ada3c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ADA3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ADA40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ADA3Cu;
        // 0x1ada40: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ADA3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ADA44u;
    // 0x1ada44: 0x0  nop
    ctx->pc = 0x1ada44u;
    // NOP
    ctx->pc = 0x1ada48u;
}
