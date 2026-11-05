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

// Function: sub_002CBE90
// Address: 0x2cbe90 - 0x2cbee8
void sub_002CBE90_0x2cbe90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CBE90_0x2cbe90");
#endif

    switch (ctx->pc) {
        case 0x2cbec0u: goto label_2cbec0;
        default: break;
    }

    ctx->pc = 0x2cbe90u;

    // 0x2cbe90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2cbe90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2cbe94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2cbe94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2cbe98: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2cbe98u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
    // 0x2cbe9c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2cbe9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2cbea0: 0x8e03b4a8  lw          $v1, -0x4B58($s0)
    ctx->pc = 0x2cbea0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x3FB4A8u));
    // 0x2cbea4: 0x8c620808  lw          $v0, 0x808($v1)
    ctx->pc = 0x2cbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2056)));
    // 0x2cbea8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CBEA8u;
    {
        const bool branch_taken_0x2cbea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbea8) {
            ctx->pc = 0x2CBEC8u;
            goto label_2cbec8;
        }
    }
    ctx->pc = 0x2CBEB0u;
    // 0x2cbeb0: 0x3c040067  lui         $a0, 0x67
    ctx->pc = 0x2cbeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)103 << 16));
    // 0x2cbeb4: 0x34843094  ori         $a0, $a0, 0x3094
    ctx->pc = 0x2cbeb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12436);
    // 0x2cbeb8: 0xc0b4166  jal         func_2D0598
    ctx->pc = 0x2CBEB8u;
    SET_GPR_U32(ctx, 31, 0x2CBEC0u);
    ctx->pc = 0x2CBEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CBEB8u;
    // 0x2cbebc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D0598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D0598u, 0x2CBEB8u, 0x2CBEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CBEC0u;
label_2cbec0:
    // 0x2cbec0: 0x8e02b4a8  lw          $v0, -0x4B58($s0)
    ctx->pc = 0x2cbec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294948008)));
    // 0x2cbec4: 0xac400808  sw          $zero, 0x808($v0)
    ctx->pc = 0x2cbec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2056), GPR_U32(ctx, 0));
label_2cbec8:
    // 0x2cbec8: 0xf  sync
    ctx->pc = 0x2cbec8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2cbecc: 0x42000038  ei
    ctx->pc = 0x2cbeccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2cbed0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2cbed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2cbed4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2cbed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbed8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2cbed8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2cbedc: 0x3e00008  jr          $ra
    ctx->pc = 0x2CBEDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CBEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CBEDCu;
        // 0x2cbee0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CBEDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2CBEE4u;
    // 0x2cbee4: 0x0  nop
    ctx->pc = 0x2cbee4u;
    // NOP
    ctx->pc = 0x2cbee8u;
}
