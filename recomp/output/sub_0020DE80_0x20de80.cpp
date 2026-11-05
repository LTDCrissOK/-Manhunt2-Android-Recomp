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

// Function: sub_0020DE80
// Address: 0x20de80 - 0x20ded0
void sub_0020DE80_0x20de80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DE80_0x20de80");
#endif

    switch (ctx->pc) {
        case 0x20de98u: goto label_20de98;
        case 0x20deb0u: goto label_20deb0;
        default: break;
    }

    ctx->pc = 0x20de80u;

    // 0x20de80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20de80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20de84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20de84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20de88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20de88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20de8c: 0x249001d8  addiu       $s0, $a0, 0x1D8
    ctx->pc = 0x20de8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
    // 0x20de90: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20de90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20de94: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x20de94u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_20de98:
    // 0x20de98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20de98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20de9c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x20de9cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x20dea0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20DEA0u;
    {
        const bool branch_taken_0x20dea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEA0u;
        // 0x20dea4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dea0) {
            ctx->pc = 0x20DEB4u;
            goto label_20deb4;
        }
    }
    ctx->pc = 0x20DEA8u;
    // 0x20dea8: 0xc0b0f1a  jal         func_2C3C68
    ctx->pc = 0x20DEA8u;
    SET_GPR_U32(ctx, 31, 0x20DEB0u);
    ctx->pc = 0x2C3C68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C3C68u, 0x20DEA8u, 0x20DEB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20DEB0u;
label_20deb0:
    // 0x20deb0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20deb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_20deb4:
    // 0x20deb4: 0x621fff8  bgez        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x20DEB4u;
    {
        const bool branch_taken_0x20deb4 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x20DEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEB4u;
        // 0x20deb8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20deb4) {
            ctx->pc = 0x20DE98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_20de98;
        }
    }
    ctx->pc = 0x20DEBCu;
    // 0x20debc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20debcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dec0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20dec0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20dec4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20dec4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dec8: 0x3e00008  jr          $ra
    ctx->pc = 0x20DEC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20DEC8u;
        // 0x20decc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20DEC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20DED0u;
}
