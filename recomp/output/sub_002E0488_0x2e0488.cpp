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

// Function: sub_002E0488
// Address: 0x2e0488 - 0x2e04e0
void sub_002E0488_0x2e0488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E0488_0x2e0488");
#endif

    switch (ctx->pc) {
        case 0x2e04d4u: goto label_2e04d4;
        default: break;
    }

    ctx->pc = 0x2e0488u;

    // 0x2e0488: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2e0488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2e048c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x2e048cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e0490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e0490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e0494: 0xc48000c4  lwc1        $f0, 0xC4($a0)
    ctx->pc = 0x2e0494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e0498: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2e0498u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e049c: 0x0  nop
    ctx->pc = 0x2e049cu;
    // NOP
    // 0x2e04a0: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x2E04A0u;
    {
        const bool branch_taken_0x2e04a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2E04A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04A0u;
        // 0x2e04a4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e04a0) {
            ctx->pc = 0x2E04D8u;
            goto label_2e04d8;
        }
    }
    ctx->pc = 0x2E04A8u;
    // 0x2e04a8: 0x8c82009c  lw          $v0, 0x9C($a0)
    ctx->pc = 0x2e04a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x2e04ac: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2E04ACu;
    {
        const bool branch_taken_0x2e04ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e04ac) {
            ctx->pc = 0x2E04D8u;
            goto label_2e04d8;
        }
    }
    ctx->pc = 0x2E04B4u;
    // 0x2e04b4: 0x8c8200a0  lw          $v0, 0xA0($a0)
    ctx->pc = 0x2e04b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 160)));
    // 0x2e04b8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2E04B8u;
    {
        const bool branch_taken_0x2e04b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e04b8) {
            ctx->pc = 0x2E04D8u;
            goto label_2e04d8;
        }
    }
    ctx->pc = 0x2E04C0u;
    // 0x2e04c0: 0x908200a8  lbu         $v0, 0xA8($a0)
    ctx->pc = 0x2e04c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 168)));
    // 0x2e04c4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2E04C4u;
    {
        const bool branch_taken_0x2e04c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e04c4) {
            ctx->pc = 0x2E04D8u;
            goto label_2e04d8;
        }
    }
    ctx->pc = 0x2E04CCu;
    // 0x2e04cc: 0xc0b72fc  jal         func_2DCBF0
    ctx->pc = 0x2E04CCu;
    SET_GPR_U32(ctx, 31, 0x2E04D4u);
    ctx->pc = 0x2DCBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCBF0u, 0x2E04CCu, 0x2E04D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E04D4u;
label_2e04d4:
    // 0x2e04d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e04d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2e04d8:
    // 0x2e04d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E04D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E04DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E04D8u;
        // 0x2e04dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E04D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E04E0u;
}
