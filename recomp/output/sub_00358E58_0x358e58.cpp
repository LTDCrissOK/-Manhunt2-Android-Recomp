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

// Function: sub_00358E58
// Address: 0x358e58 - 0x358ea0
void sub_00358E58_0x358e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00358E58_0x358e58");
#endif

    switch (ctx->pc) {
        case 0x358e80u: goto label_358e80;
        default: break;
    }

    ctx->pc = 0x358e58u;

    // 0x358e58: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x358e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x358e5c: 0x14a2000e  bne         $a1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x358E5Cu;
    {
        const bool branch_taken_0x358e5c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x358E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E5Cu;
        // 0x358e60: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e5c) {
            ctx->pc = 0x358E98u;
            goto label_358e98;
        }
    }
    ctx->pc = 0x358E64u;
    // 0x358e64: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x358E64u;
    {
        const bool branch_taken_0x358e64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x358e64) {
            ctx->pc = 0x358E98u;
            goto label_358e98;
        }
    }
    ctx->pc = 0x358E6Cu;
    // 0x358e6c: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x358e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x358e70: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x358e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x358e74: 0x2442d3c0  addiu       $v0, $v0, -0x2C40
    ctx->pc = 0x358e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955968));
    // 0x358e78: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x358e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x358e7c: 0x0  nop
    ctx->pc = 0x358e7cu;
    // NOP
label_358e80:
    // 0x358e80: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x358e80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x358e84: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x358e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x358e88: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x358e88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x358e8c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x358e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x358e90: 0x1464fffb  bne         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x358E90u;
    {
        const bool branch_taken_0x358e90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x358E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E90u;
        // 0x358e94: 0x24420010  addiu       $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e90) {
            ctx->pc = 0x358E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_358e80;
        }
    }
    ctx->pc = 0x358E98u;
label_358e98:
    // 0x358e98: 0x3e00008  jr          $ra
    ctx->pc = 0x358E98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x358E98u;
        // 0x358e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x358E98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x358EA0u;
}
