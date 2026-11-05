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

// Function: sub_003A9E60
// Address: 0x3a9e60 - 0x3a9ec8
void sub_003A9E60_0x3a9e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A9E60_0x3a9e60");
#endif

    switch (ctx->pc) {
        case 0x3a9e94u: goto label_3a9e94;
        default: break;
    }

    ctx->pc = 0x3a9e60u;

    // 0x3a9e60: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3a9e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3a9e64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a9e64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a9e68: 0x8c43a0d0  lw          $v1, -0x5F30($v0)
    ctx->pc = 0x3a9e68u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0D0u));
    // 0x3a9e6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3a9e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a9e70: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9E70u;
    {
        const bool branch_taken_0x3a9e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x3A9E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E70u;
        // 0x3a9e74: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9e70) {
            ctx->pc = 0x3A9E88u;
            goto label_3a9e88;
        }
    }
    ctx->pc = 0x3A9E78u;
    // 0x3a9e78: 0x3c040042  lui         $a0, 0x42
    ctx->pc = 0x3a9e78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)66 << 16));
    // 0x3a9e7c: 0x8c83a0c8  lw          $v1, -0x5F38($a0)
    ctx->pc = 0x3a9e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x41A0C8u));
    // 0x3a9e80: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3A9E80u;
    {
        const bool branch_taken_0x3a9e80 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3A9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E80u;
        // 0x3a9e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a9e80) {
            ctx->pc = 0x3A9E98u;
            goto label_3a9e98;
        }
    }
    ctx->pc = 0x3A9E88u;
label_3a9e88:
    // 0x3a9e88: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a9e88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a9e8c: 0xc0e5ebe  jal         func_397AF8
    ctx->pc = 0x3A9E8Cu;
    SET_GPR_U32(ctx, 31, 0x3A9E94u);
    ctx->pc = 0x3A9E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A9E8Cu;
    // 0x3a9e90: 0x2484ed38  addiu       $a0, $a0, -0x12C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397AF8u, 0x3A9E8Cu, 0x3A9E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A9E94u;
label_3a9e94:
    // 0x3a9e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a9e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a9e98:
    // 0x3a9e98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a9e98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a9e9c: 0x3e00008  jr          $ra
    ctx->pc = 0x3A9E9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A9E9Cu;
        // 0x3a9ea0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A9E9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A9EA4u;
    // 0x3a9ea4: 0x0  nop
    ctx->pc = 0x3a9ea4u;
    // NOP
    // 0x3a9ea8: 0x0  nop
    ctx->pc = 0x3a9ea8u;
    // NOP
    // 0x3a9eac: 0x0  nop
    ctx->pc = 0x3a9eacu;
    // NOP
    // 0x3a9eb0: 0x0  nop
    ctx->pc = 0x3a9eb0u;
    // NOP
    // 0x3a9eb4: 0x0  nop
    ctx->pc = 0x3a9eb4u;
    // NOP
    // 0x3a9eb8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a9eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a9ebc: 0x0  nop
    ctx->pc = 0x3a9ebcu;
    // NOP
    // 0x3a9ec0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a9ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x3a9ec4: 0x0  nop
    ctx->pc = 0x3a9ec4u;
    // NOP
    ctx->pc = 0x3a9ec8u;
}
