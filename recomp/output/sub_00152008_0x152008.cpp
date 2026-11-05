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

// Function: sub_00152008
// Address: 0x152008 - 0x152058
void sub_00152008_0x152008(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152008_0x152008");
#endif

    switch (ctx->pc) {
        case 0x152018u: goto label_152018;
        default: break;
    }

    ctx->pc = 0x152008u;

    // 0x152008: 0x2487093c  addiu       $a3, $a0, 0x93C
    ctx->pc = 0x152008u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 2364));
    // 0x15200c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15200cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152010: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x152010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x152014: 0x0  nop
    ctx->pc = 0x152014u;
    // NOP
label_152018:
    // 0x152018: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x152018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x15201c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15201cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x152020: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x152020u;
    {
        const bool branch_taken_0x152020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x152020) {
            ctx->pc = 0x152024u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x152020u;
            // 0x152024: 0x24c20001  addiu       $v0, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15203Cu;
            goto label_15203c;
        }
    }
    ctx->pc = 0x152028u;
    // 0x152028: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x152028u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x15202c: 0x9082095c  lbu         $v0, 0x95C($a0)
    ctx->pc = 0x15202cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2396)));
    // 0x152030: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x152030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x152034: 0x3e00008  jr          $ra
    ctx->pc = 0x152034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x152038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152034u;
        // 0x152038: 0xa082095c  sb          $v0, 0x95C($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 2396), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x152034u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15203Cu;
label_15203c:
    // 0x15203c: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15203cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x152040: 0x2cc30008  sltiu       $v1, $a2, 0x8
    ctx->pc = 0x152040u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x152044: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x152044u;
    {
        const bool branch_taken_0x152044 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x152048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x152044u;
        // 0x152048: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x152044) {
            ctx->pc = 0x152018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_152018;
        }
    }
    ctx->pc = 0x15204Cu;
    // 0x15204c: 0x3e00008  jr          $ra
    ctx->pc = 0x15204Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15204Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x152054u;
    // 0x152054: 0x0  nop
    ctx->pc = 0x152054u;
    // NOP
    ctx->pc = 0x152058u;
}
