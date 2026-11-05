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

// Function: sub_003A33A8
// Address: 0x3a33a8 - 0x3a3430
void sub_003A33A8_0x3a33a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A33A8_0x3a33a8");
#endif

    switch (ctx->pc) {
        case 0x3a33d8u: goto label_3a33d8;
        case 0x3a3404u: goto label_3a3404;
        default: break;
    }

    ctx->pc = 0x3a33a8u;

    // 0x3a33a8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a33a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x3a33ac: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a33acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3a33b0: 0x24421e18  addiu       $v0, $v0, 0x1E18
    ctx->pc = 0x3a33b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7704));
    // 0x3a33b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3a33b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3a33b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x3a33b8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x411E18u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x411E18u, _value); } while (0);
    // 0x3a33bc: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x3a33bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
    // 0x3a33c0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3a33c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3a33c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a33c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3a33c8: 0x3c061964  lui         $a2, 0x1964
    ctx->pc = 0x3a33c8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)6500 << 16));
    // 0x3a33cc: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x3a33ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x3a33d0: 0x8d021e04  lw          $v0, 0x1E04($t0)
    ctx->pc = 0x3a33d0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x411E04u));
    // 0x3a33d4: 0x0  nop
    ctx->pc = 0x3a33d4u;
    // NOP
label_3a33d8:
    // 0x3a33d8: 0x1447000b  bne         $v0, $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x3A33D8u;
    {
        const bool branch_taken_0x3a33d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x3A33DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A33D8u;
        // 0x3a33dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a33d8) {
            ctx->pc = 0x3A3408u;
            goto label_3a3408;
        }
    }
    ctx->pc = 0x3A33E0u;
    // 0x3a33e0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x3a33e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a33e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3a33e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3a33e8: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3a33e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x3a33ec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a33ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3a33f0: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x3a33f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3a33f4: 0x5060fff8  beql        $v1, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x3A33F4u;
    {
        const bool branch_taken_0x3a33f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a33f4) {
            ctx->pc = 0x3A33F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A33F4u;
            // 0x3a33f8: 0x8d021e04  lw          $v0, 0x1E04($t0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 7684)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A33D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3a33d8;
        }
    }
    ctx->pc = 0x3A33FCu;
    // 0x3a33fc: 0xc0f3050  jal         func_3CC140
    ctx->pc = 0x3A33FCu;
    SET_GPR_U32(ctx, 31, 0x3A3404u);
    ctx->pc = 0x3A3400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A33FCu;
    // 0x3a3400: 0x2484d408  addiu       $a0, $a0, -0x2BF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CC140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CC140u, 0x3A33FCu, 0x3A3404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A3404u;
label_3a3404:
    // 0x3a3404: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3408:
    // 0x3a3408: 0x3e00008  jr          $ra
    ctx->pc = 0x3A3408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A340Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3408u;
        // 0x3a340c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3A3410u;
    // 0x3a3410: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a3410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a3414: 0x0  nop
    ctx->pc = 0x3a3414u;
    // NOP
    // 0x3a3418: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3a3418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3a341c: 0x0  nop
    ctx->pc = 0x3a341cu;
    // NOP
    // 0x3a3420: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a3420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a3424: 0x0  nop
    ctx->pc = 0x3a3424u;
    // NOP
    // 0x3a3428: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x3a3428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3a342c: 0x0  nop
    ctx->pc = 0x3a342cu;
    // NOP
    ctx->pc = 0x3a3430u;
}
