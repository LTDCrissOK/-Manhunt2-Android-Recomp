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

// Function: sub_0031EBC8
// Address: 0x31ebc8 - 0x31ec08
void sub_0031EBC8_0x31ebc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EBC8_0x31ebc8");
#endif

    switch (ctx->pc) {
        case 0x31ebecu: goto label_31ebec;
        default: break;
    }

    ctx->pc = 0x31ebc8u;

    // 0x31ebc8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x31ebc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x31ebcc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x31ebccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x31ebd0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x31ebd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x31ebd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31ebd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31ebd8: 0x8e040030  lw          $a0, 0x30($s0)
    ctx->pc = 0x31ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x31ebdc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31EBDCu;
    {
        const bool branch_taken_0x31ebdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBDCu;
        // 0x31ebe0: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebdc) {
            ctx->pc = 0x31EBF0u;
            goto label_31ebf0;
        }
    }
    ctx->pc = 0x31EBE4u;
    // 0x31ebe4: 0xc0b2524  jal         func_2C9490
    ctx->pc = 0x31EBE4u;
    SET_GPR_U32(ctx, 31, 0x31EBECu);
    ctx->pc = 0x2C9490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9490u, 0x31EBE4u, 0x31EBECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EBECu;
label_31ebec:
    // 0x31ebec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x31ebecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31ebf0:
    // 0x31ebf0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x31ebf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x31ebf4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x31ebf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31ebf8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x31ebf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x31ebfc: 0x3e00008  jr          $ra
    ctx->pc = 0x31EBFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBFCu;
        // 0x31ec00: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EBFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31EC04u;
    // 0x31ec04: 0x0  nop
    ctx->pc = 0x31ec04u;
    // NOP
    ctx->pc = 0x31ec08u;
}
