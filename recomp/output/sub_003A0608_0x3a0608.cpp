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

// Function: sub_003A0608
// Address: 0x3a0608 - 0x3a0670
void sub_003A0608_0x3a0608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A0608_0x3a0608");
#endif

    switch (ctx->pc) {
        case 0x3a0638u: goto label_3a0638;
        case 0x3a0644u: goto label_3a0644;
        default: break;
    }

    ctx->pc = 0x3a0608u;

    // 0x3a0608: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3a0608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3a060c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x3a060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x3a0610: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0610u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a0614: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x3a0614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x3a0618: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3a0618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3a061c: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3a061cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3a0620: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x3a0620u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0624: 0x1840000b  blez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3A0624u;
    {
        const bool branch_taken_0x3a0624 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3A0628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0624u;
        // 0x3a0628: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0624) {
            ctx->pc = 0x3A0654u;
            goto label_3a0654;
        }
    }
    ctx->pc = 0x3A062Cu;
    // 0x3a062c: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x3a062cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3a0630: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3a0630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3a0634: 0x0  nop
    ctx->pc = 0x3a0634u;
    // NOP
label_3a0638:
    // 0x3a0638: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x3a0638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x3a063c: 0xc0e6e04  jal         func_39B810
    ctx->pc = 0x3A063Cu;
    SET_GPR_U32(ctx, 31, 0x3A0644u);
    ctx->pc = 0x3A0640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A063Cu;
    // 0x3a0640: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39B810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39B810u, 0x3A063Cu, 0x3A0644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A0644u;
label_3a0644:
    // 0x3a0644: 0x82220003  lb          $v0, 0x3($s1)
    ctx->pc = 0x3a0644u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x3a0648: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x3a0648u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x3a064c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3A064Cu;
    {
        const bool branch_taken_0x3a064c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a064c) {
            ctx->pc = 0x3A0650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A064Cu;
            // 0x3a0650: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A0638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a0638;
        }
    }
    ctx->pc = 0x3A0654u;
label_3a0654:
    // 0x3a0654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3a0654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3a0658: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x3a0658u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3a065c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x3a065cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3a0660: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3a0660u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3a0664: 0x3e00008  jr          $ra
    ctx->pc = 0x3A0664u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A0664u;
        // 0x3a0668: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A0664u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A066Cu;
    // 0x3a066c: 0x0  nop
    ctx->pc = 0x3a066cu;
    // NOP
    ctx->pc = 0x3a0670u;
}
