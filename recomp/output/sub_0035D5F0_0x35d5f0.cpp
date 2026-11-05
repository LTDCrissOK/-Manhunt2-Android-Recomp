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

// Function: sub_0035D5F0
// Address: 0x35d5f0 - 0x35d638
void sub_0035D5F0_0x35d5f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D5F0_0x35d5f0");
#endif

    switch (ctx->pc) {
        case 0x35d610u: goto label_35d610;
        default: break;
    }

    ctx->pc = 0x35d5f0u;

    // 0x35d5f0: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x35d5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x35d5f4: 0x84820004  lh          $v0, 0x4($a0)
    ctx->pc = 0x35d5f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35d5f8: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x35d5f8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x35d5fc: 0x440000c  bltz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35D5FCu;
    {
        const bool branch_taken_0x35d5fc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x35D600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D5FCu;
        // 0x35d600: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d5fc) {
            ctx->pc = 0x35D630u;
            goto label_35d630;
        }
    }
    ctx->pc = 0x35D604u;
    // 0x35d604: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x35d604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d608: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x35d608u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d60c: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x35d60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_35d610:
    // 0x35d610: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x35d610u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d614: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x35D614u;
    {
        const bool branch_taken_0x35d614 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x35d614) {
            ctx->pc = 0x35D618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35D614u;
            // 0x35d618: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x35D624u;
            goto label_35d624;
        }
    }
    ctx->pc = 0x35D61Cu;
    // 0x35d61c: 0x3e00008  jr          $ra
    ctx->pc = 0x35D61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D61Cu;
        // 0x35d620: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D624u;
label_35d624:
    // 0x35d624: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x35d624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x35d628: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x35D628u;
    {
        const bool branch_taken_0x35d628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D62Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D628u;
        // 0x35d62c: 0x861021  addu        $v0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d628) {
            ctx->pc = 0x35D610u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d610;
        }
    }
    ctx->pc = 0x35D630u;
label_35d630:
    // 0x35d630: 0x3e00008  jr          $ra
    ctx->pc = 0x35D630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35D634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D630u;
        // 0x35d634: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35D630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35D638u;
}
