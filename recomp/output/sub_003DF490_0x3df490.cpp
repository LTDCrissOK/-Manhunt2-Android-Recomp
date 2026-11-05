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

// Function: sub_003DF490
// Address: 0x3df490 - 0x3df4c8
void sub_003DF490_0x3df490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DF490_0x3df490");
#endif

    ctx->pc = 0x3df490u;

    // 0x3df490: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x3df490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x3df494: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3df494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3df498: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x3DF498u;
    {
        const bool branch_taken_0x3df498 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3DF49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF498u;
        // 0x3df49c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df498) {
            ctx->pc = 0x3DF4BCu;
            goto label_3df4bc;
        }
    }
    ctx->pc = 0x3DF4A0u;
    // 0x3df4a0: 0x8c840038  lw          $a0, 0x38($a0)
    ctx->pc = 0x3df4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3df4a4: 0x28820374  slti        $v0, $a0, 0x374
    ctx->pc = 0x3df4a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)884) ? 1 : 0);
    // 0x3df4a8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3DF4A8u;
    {
        const bool branch_taken_0x3df4a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3DF4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4A8u;
        // 0x3df4ac: 0x2882041d  slti        $v0, $a0, 0x41D (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)1053) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df4a8) {
            ctx->pc = 0x3DF4BCu;
            goto label_3df4bc;
        }
    }
    ctx->pc = 0x3DF4B0u;
    // 0x3df4b0: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3DF4B0u;
    {
        const bool branch_taken_0x3df4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DF4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4B0u;
        // 0x3df4b4: 0x30820003  andi        $v0, $a0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3df4b0) {
            ctx->pc = 0x3DF4BCu;
            goto label_3df4bc;
        }
    }
    ctx->pc = 0x3DF4B8u;
    // 0x3df4b8: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x3df4b8u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_3df4bc:
    // 0x3df4bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3DF4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DF4BCu;
        // 0x3df4c0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DF4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DF4C4u;
    // 0x3df4c4: 0x0  nop
    ctx->pc = 0x3df4c4u;
    // NOP
    ctx->pc = 0x3df4c8u;
}
