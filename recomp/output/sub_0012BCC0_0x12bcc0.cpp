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

// Function: sub_0012BCC0
// Address: 0x12bcc0 - 0x12bd08
void sub_0012BCC0_0x12bcc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BCC0_0x12bcc0");
#endif

    switch (ctx->pc) {
        case 0x12bcd4u: goto label_12bcd4;
        default: break;
    }

    ctx->pc = 0x12bcc0u;

    // 0x12bcc0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bcc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bcc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bcc8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12bcc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12bccc: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BCCCu;
    SET_GPR_U32(ctx, 31, 0x12BCD4u);
    ctx->pc = 0x12BCD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BCCCu;
    // 0x12bcd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BCCCu, 0x12BCD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BCD4u;
label_12bcd4:
    // 0x12bcd4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12bcd4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bcd8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12bcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12bcdc: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x12BCDCu;
    {
        const bool branch_taken_0x12bcdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BCDCu;
        // 0x12bce0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bcdc) {
            ctx->pc = 0x12BCF8u;
            goto label_12bcf8;
        }
    }
    ctx->pc = 0x12BCE4u;
    // 0x12bce4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12bce8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12bce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bcec: 0x908300c6  lbu         $v1, 0xC6($a0)
    ctx->pc = 0x12bcecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x12bcf0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x12bcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12bcf4: 0xa08300c6  sb          $v1, 0xC6($a0)
    ctx->pc = 0x12bcf4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 198), (uint8_t)GPR_U32(ctx, 3));
label_12bcf8:
    // 0x12bcf8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bcf8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bcfc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12bcfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bd00: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD00u;
        // 0x12bd04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BD00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BD08u;
}
