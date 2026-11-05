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

// Function: sub_001FB2C0
// Address: 0x1fb2c0 - 0x1fb328
void sub_001FB2C0_0x1fb2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FB2C0_0x1fb2c0");
#endif

    switch (ctx->pc) {
        case 0x1fb2f0u: goto label_1fb2f0;
        case 0x1fb318u: goto label_1fb318;
        default: break;
    }

    ctx->pc = 0x1fb2c0u;

    // 0x1fb2c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1fb2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1fb2c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1fb2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1fb2c8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1fb2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1fb2cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1fb2ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb2d0: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x1fb2d0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fb2d4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1fb2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1fb2d8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1fb2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1fb2dc: 0x84820006  lh          $v0, 0x6($a0)
    ctx->pc = 0x1fb2dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x1fb2e0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FB2E0u;
    {
        const bool branch_taken_0x1fb2e0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1fb2e0) {
            ctx->pc = 0x1FB2E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1FB2E0u;
            // 0x1fb2e4: 0xae000034  sw          $zero, 0x34($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1FB2F4u;
            goto label_1fb2f4;
        }
    }
    ctx->pc = 0x1FB2E8u;
    // 0x1fb2e8: 0xc0d73fc  jal         func_35CFF0
    ctx->pc = 0x1FB2E8u;
    SET_GPR_U32(ctx, 31, 0x1FB2F0u);
    ctx->pc = 0x35CFF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35CFF0u, 0x1FB2E8u, 0x1FB2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB2F0u;
label_1fb2f0:
    // 0x1fb2f0: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1fb2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1fb2f4:
    // 0x1fb2f4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x1fb2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x1fb2f8: 0x7e000020  sq          $zero, 0x20($s0)
    ctx->pc = 0x1fb2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), GPR_VEC(ctx, 0));
    // 0x1fb2fc: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1fb2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fb300: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1fb300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
    // 0x1fb304: 0xa2000038  sb          $zero, 0x38($s0)
    ctx->pc = 0x1fb304u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 56), (uint8_t)GPR_U32(ctx, 0));
    // 0x1fb308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1fb308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fb30c: 0xa600003a  sh          $zero, 0x3A($s0)
    ctx->pc = 0x1fb30cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 58), (uint16_t)GPR_U32(ctx, 0));
    // 0x1fb310: 0xc07ecca  jal         func_1FB328
    ctx->pc = 0x1FB310u;
    SET_GPR_U32(ctx, 31, 0x1FB318u);
    ctx->pc = 0x1FB314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FB310u;
    // 0x1fb314: 0xa202003c  sb          $v0, 0x3C($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 60), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB328u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB328u, 0x1FB310u, 0x1FB318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FB318u;
label_1fb318:
    // 0x1fb318: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fb318u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fb31c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1fb31cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fb320: 0x3e00008  jr          $ra
    ctx->pc = 0x1FB320u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FB324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FB320u;
        // 0x1fb324: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FB320u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FB328u;
}
