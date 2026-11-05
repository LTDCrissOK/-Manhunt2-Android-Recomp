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

// Function: sub_0028DC08
// Address: 0x28dc08 - 0x28dc70
void sub_0028DC08_0x28dc08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DC08_0x28dc08");
#endif

    switch (ctx->pc) {
        case 0x28dc20u: goto label_28dc20;
        default: break;
    }

    ctx->pc = 0x28dc08u;

    // 0x28dc08: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x28dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x28dc0c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x28dc0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
    // 0x28dc10: 0x2445ca10  addiu       $a1, $v0, -0x35F0
    ctx->pc = 0x28dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953488));
    // 0x28dc14: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x28dc14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x28dc18: 0x24070009  addiu       $a3, $zero, 0x9
    ctx->pc = 0x28dc18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x28dc1c: 0x0  nop
    ctx->pc = 0x28dc1cu;
    // NOP
label_28dc20:
    // 0x28dc20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x28dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28dc24: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28DC24u;
    {
        const bool branch_taken_0x28dc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x28DC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC24u;
        // 0x28dc28: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc24) {
            ctx->pc = 0x28DC30u;
            goto label_28dc30;
        }
    }
    ctx->pc = 0x28DC2Cu;
    // 0x28dc2c: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x28dc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_28dc30:
    // 0x28dc30: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x28dc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28dc34: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28DC34u;
    {
        const bool branch_taken_0x28dc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc34) {
            ctx->pc = 0x28DC5Cu;
            goto label_28dc5c;
        }
    }
    ctx->pc = 0x28DC3Cu;
    // 0x28dc3c: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x28dc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x28dc40: 0x14460006  bne         $v0, $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x28DC40u;
    {
        const bool branch_taken_0x28dc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x28dc40) {
            ctx->pc = 0x28DC5Cu;
            goto label_28dc5c;
        }
    }
    ctx->pc = 0x28DC48u;
    // 0x28dc48: 0x8c620270  lw          $v0, 0x270($v1)
    ctx->pc = 0x28dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 624)));
    // 0x28dc4c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28DC4Cu;
    {
        const bool branch_taken_0x28dc4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dc4c) {
            ctx->pc = 0x28DC5Cu;
            goto label_28dc5c;
        }
    }
    ctx->pc = 0x28DC54u;
    // 0x28dc54: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x28DC54u;
    {
        const bool branch_taken_0x28dc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x28dc54) {
            ctx->pc = 0x28DC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28DC54u;
            // 0x28dc58: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28DC5Cu;
            goto label_28dc5c;
        }
    }
    ctx->pc = 0x28DC5Cu;
label_28dc5c:
    // 0x28dc5c: 0x4e1fff0  bgez        $a3, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28DC5Cu;
    {
        const bool branch_taken_0x28dc5c = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x28DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28DC5Cu;
        // 0x28dc60: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dc5c) {
            ctx->pc = 0x28DC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28dc20;
        }
    }
    ctx->pc = 0x28DC64u;
    // 0x28dc64: 0x3e00008  jr          $ra
    ctx->pc = 0x28DC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28DC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28DC6Cu;
    // 0x28dc6c: 0x0  nop
    ctx->pc = 0x28dc6cu;
    // NOP
    ctx->pc = 0x28dc70u;
}
