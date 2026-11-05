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

// Function: sub_0030D7D0
// Address: 0x30d7d0 - 0x30d848
void sub_0030D7D0_0x30d7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030D7D0_0x30d7d0");
#endif

    switch (ctx->pc) {
        case 0x30d7f8u: goto label_30d7f8;
        case 0x30d814u: goto label_30d814;
        default: break;
    }

    ctx->pc = 0x30d7d0u;

    // 0x30d7d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30d7d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x30d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x30d7d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x30d7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x30d7dc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x30d7dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7e0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x30d7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x30d7e4: 0x26900090  addiu       $s0, $s4, 0x90
    ctx->pc = 0x30d7e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
    // 0x30d7e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x30d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x30d7ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x30d7ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30d7f0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x30d7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x30d7f4: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x30d7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_30d7f8:
    // 0x30d7f8: 0x1390c0  sll         $s2, $s3, 3
    ctx->pc = 0x30d7f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x30d7fc: 0x8e02fffc  lw          $v0, -0x4($s0)
    ctx->pc = 0x30d7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x30d800: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x30d800u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x30d804: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30D804u;
    {
        const bool branch_taken_0x30d804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x30D808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D804u;
        // 0x30d808: 0x26910090  addiu       $s1, $s4, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d804) {
            ctx->pc = 0x30D814u;
            goto label_30d814;
        }
    }
    ctx->pc = 0x30D80Cu;
    // 0x30d80c: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x30D80Cu;
    SET_GPR_U32(ctx, 31, 0x30D814u);
    ctx->pc = 0x30D810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30D80Cu;
    // 0x30d810: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x30D80Cu, 0x30D814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30D814u;
label_30d814:
    // 0x30d814: 0x2321821  addu        $v1, $s1, $s2
    ctx->pc = 0x30d814u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x30d818: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x30d818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x30d81c: 0x2a620045  slti        $v0, $s3, 0x45
    ctx->pc = 0x30d81cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)69) ? 1 : 0);
    // 0x30d820: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x30D820u;
    {
        const bool branch_taken_0x30d820 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x30D824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D820u;
        // 0x30d824: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30d820) {
            ctx->pc = 0x30D7F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_30d7f8;
        }
    }
    ctx->pc = 0x30D828u;
    // 0x30d828: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x30d828u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30d82c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x30d82cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x30d830: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x30d830u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30d834: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x30d834u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x30d838: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x30d838u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x30d83c: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x30d83cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30d840: 0x3e00008  jr          $ra
    ctx->pc = 0x30D840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30D840u;
        // 0x30d844: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30D840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30D848u;
}
