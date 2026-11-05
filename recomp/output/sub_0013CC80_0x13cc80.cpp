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

// Function: sub_0013CC80
// Address: 0x13cc80 - 0x13ccd8
void sub_0013CC80_0x13cc80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013CC80_0x13cc80");
#endif

    switch (ctx->pc) {
        case 0x13cca0u: goto label_13cca0;
        case 0x13cca8u: goto label_13cca8;
        default: break;
    }

    ctx->pc = 0x13cc80u;

    // 0x13cc80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13cc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13cc84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13cc84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x13cc88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x13cc88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x13cc8c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13cc8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x13cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x13cc94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13cc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13cc98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13cc9c: 0x0  nop
    ctx->pc = 0x13cc9cu;
    // NOP
label_13cca0:
    // 0x13cca0: 0xc04f336  jal         func_13CCD8
    ctx->pc = 0x13CCA0u;
    SET_GPR_U32(ctx, 31, 0x13CCA8u);
    ctx->pc = 0x13CCA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13CCA0u;
    // 0x13cca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13CCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13CCD8u, 0x13CCA0u, 0x13CCA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13CCA8u;
label_13cca8:
    // 0x13cca8: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x13cca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13ccac: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x13ccacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x13ccb0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x13ccb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x13ccb4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13CCB4u;
    {
        const bool branch_taken_0x13ccb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCB4u;
        // 0x13ccb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ccb4) {
            ctx->pc = 0x13CCA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_13cca0;
        }
    }
    ctx->pc = 0x13CCBCu;
    // 0x13ccbc: 0xa22002a8  sb          $zero, 0x2A8($s1)
    ctx->pc = 0x13ccbcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 680), (uint8_t)GPR_U32(ctx, 0));
    // 0x13ccc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x13ccc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13ccc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x13ccc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x13ccc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13ccc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13cccc: 0x3e00008  jr          $ra
    ctx->pc = 0x13CCCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13CCD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13CCCCu;
        // 0x13ccd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13CCCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13CCD4u;
    // 0x13ccd4: 0x0  nop
    ctx->pc = 0x13ccd4u;
    // NOP
    ctx->pc = 0x13ccd8u;
}
