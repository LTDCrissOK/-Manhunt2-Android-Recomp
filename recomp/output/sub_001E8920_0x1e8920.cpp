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

// Function: sub_001E8920
// Address: 0x1e8920 - 0x1e8970
void sub_001E8920_0x1e8920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E8920_0x1e8920");
#endif

    switch (ctx->pc) {
        case 0x1e8940u: goto label_1e8940;
        default: break;
    }

    ctx->pc = 0x1e8920u;

    // 0x1e8920: 0x3c060048  lui         $a2, 0x48
    ctx->pc = 0x1e8920u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)72 << 16));
    // 0x1e8924: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1e8924u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e8928: 0x8cc22b1c  lw          $v0, 0x2B1C($a2)
    ctx->pc = 0x1e8928u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B1Cu));
    // 0x1e892c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1E892Cu;
    {
        const bool branch_taken_0x1e892c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E8930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E892Cu;
        // 0x1e8930: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e892c) {
            ctx->pc = 0x1E8964u;
            goto label_1e8964;
        }
    }
    ctx->pc = 0x1E8934u;
    // 0x1e8934: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x1e8934u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x1e8938: 0x8ce42b20  lw          $a0, 0x2B20($a3)
    ctx->pc = 0x1e8938u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x482B20u));
    // 0x1e893c: 0x0  nop
    ctx->pc = 0x1e893cu;
    // NOP
label_1e8940:
    // 0x1e8940: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x1e8940u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1e8944: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1e8944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1e8948: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e8948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e894c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1e894cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e8950: 0xac60002c  sw          $zero, 0x2C($v1)
    ctx->pc = 0x1e8950u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 0));
    // 0x1e8954: 0x8cc22b1c  lw          $v0, 0x2B1C($a2)
    ctx->pc = 0x1e8954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 11036)));
    // 0x1e8958: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1e8958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1e895c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1E895Cu;
    {
        const bool branch_taken_0x1e895c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E8960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E895Cu;
        // 0x1e8960: 0x8ce42b20  lw          $a0, 0x2B20($a3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 11040)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e895c) {
            ctx->pc = 0x1E8940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e8940;
        }
    }
    ctx->pc = 0x1E8964u;
label_1e8964:
    // 0x1e8964: 0x3e00008  jr          $ra
    ctx->pc = 0x1E8964u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E8968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E8964u;
        // 0x1e8968: 0xad002b1c  sw          $zero, 0x2B1C($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 11036), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E8964u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E896Cu;
    // 0x1e896c: 0x0  nop
    ctx->pc = 0x1e896cu;
    // NOP
    ctx->pc = 0x1e8970u;
}
