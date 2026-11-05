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

// Function: sub_00356128
// Address: 0x356128 - 0x356180
void sub_00356128_0x356128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356128_0x356128");
#endif

    switch (ctx->pc) {
        case 0x356150u: goto label_356150;
        case 0x356164u: goto label_356164;
        default: break;
    }

    ctx->pc = 0x356128u;

    // 0x356128: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x356128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x35612c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x35612cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x356130: 0x3c11005c  lui         $s1, 0x5C
    ctx->pc = 0x356130u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)92 << 16));
    // 0x356134: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x356134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x356138: 0x8e22cd58  lw          $v0, -0x32A8($s1)
    ctx->pc = 0x356138u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5BCD58u));
    // 0x35613c: 0x3c10005c  lui         $s0, 0x5C
    ctx->pc = 0x35613cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)92 << 16));
    // 0x356140: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x356140u;
    {
        const bool branch_taken_0x356140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x356144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356140u;
        // 0x356144: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356140) {
            ctx->pc = 0x356164u;
            goto label_356164;
        }
    }
    ctx->pc = 0x356148u;
    // 0x356148: 0xc0d5860  jal         func_356180
    ctx->pc = 0x356148u;
    SET_GPR_U32(ctx, 31, 0x356150u);
    ctx->pc = 0x35614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356148u;
    // 0x35614c: 0x2604c530  addiu       $a0, $s0, -0x3AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x356180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x356180u, 0x356148u, 0x356150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356150u;
label_356150:
    // 0x356150: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x356150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x356154: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x356154u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x356158: 0xae22cd58  sw          $v0, -0x32A8($s1)
    ctx->pc = 0x356158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294954328), GPR_U32(ctx, 2));
    // 0x35615c: 0xc0f0278  jal         func_3C09E0
    ctx->pc = 0x35615Cu;
    SET_GPR_U32(ctx, 31, 0x356164u);
    ctx->pc = 0x356160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35615Cu;
    // 0x356160: 0x24846100  addiu       $a0, $a0, 0x6100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C09E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C09E0u, 0x35615Cu, 0x356164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356164u;
label_356164:
    // 0x356164: 0x2602c530  addiu       $v0, $s0, -0x3AD0
    ctx->pc = 0x356164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294952240));
    // 0x356168: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356168u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x35616c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x35616cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356170: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x356170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356174: 0x3e00008  jr          $ra
    ctx->pc = 0x356174u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356174u;
        // 0x356178: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356174u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35617Cu;
    // 0x35617c: 0x0  nop
    ctx->pc = 0x35617cu;
    // NOP
    ctx->pc = 0x356180u;
}
