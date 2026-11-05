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

// Function: sub_00131ED8
// Address: 0x131ed8 - 0x131f20
void sub_00131ED8_0x131ed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00131ED8_0x131ed8");
#endif

    switch (ctx->pc) {
        case 0x131ef8u: goto label_131ef8;
        case 0x131f04u: goto label_131f04;
        default: break;
    }

    ctx->pc = 0x131ed8u;

    // 0x131ed8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x131ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x131edc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x131edcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x131ee0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x131ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x131ee4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x131ee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131ee8: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x131ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x131eec: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x131EECu;
    {
        const bool branch_taken_0x131eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x131eec) {
            ctx->pc = 0x131EF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131EECu;
            // 0x131ef0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131F14u;
            goto label_131f14;
        }
    }
    ctx->pc = 0x131EF4u;
    // 0x131ef4: 0x8e050218  lw          $a1, 0x218($s0)
    ctx->pc = 0x131ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
label_131ef8:
    // 0x131ef8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x131ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x131efc: 0xc04c7c8  jal         func_131F20
    ctx->pc = 0x131EFCu;
    SET_GPR_U32(ctx, 31, 0x131F04u);
    ctx->pc = 0x131F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x131EFCu;
    // 0x131f00: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x131F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x131F20u, 0x131EFCu, 0x131F04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131F04u;
label_131f04:
    // 0x131f04: 0x8e020218  lw          $v0, 0x218($s0)
    ctx->pc = 0x131f04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x131f08: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x131F08u;
    {
        const bool branch_taken_0x131f08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x131f08) {
            ctx->pc = 0x131F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x131F08u;
            // 0x131f0c: 0x8e050218  lw          $a1, 0x218($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x131EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_131ef8;
        }
    }
    ctx->pc = 0x131F10u;
    // 0x131f10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x131f10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_131f14:
    // 0x131f14: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x131f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x131f18: 0x3e00008  jr          $ra
    ctx->pc = 0x131F18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x131F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x131F18u;
        // 0x131f1c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x131F18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x131F20u;
}
