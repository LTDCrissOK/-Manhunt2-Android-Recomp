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

// Function: sub_003A3FC0
// Address: 0x3a3fc0 - 0x3a3ff0
void sub_003A3FC0_0x3a3fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A3FC0_0x3a3fc0");
#endif

    switch (ctx->pc) {
        case 0x3a3fc0u: goto label_3a3fc0;
        case 0x3a3fc4u: goto label_3a3fc4;
        case 0x3a3fc8u: goto label_3a3fc8;
        case 0x3a3fccu: goto label_3a3fcc;
        case 0x3a3fd0u: goto label_3a3fd0;
        case 0x3a3fd4u: goto label_3a3fd4;
        case 0x3a3fd8u: goto label_3a3fd8;
        case 0x3a3fdcu: goto label_3a3fdc;
        case 0x3a3fe0u: goto label_3a3fe0;
        case 0x3a3fe4u: goto label_3a3fe4;
        case 0x3a3fe8u: goto label_3a3fe8;
        case 0x3a3fecu: goto label_3a3fec;
        default: break;
    }

    ctx->pc = 0x3a3fc0u;

label_3a3fc0:
    // 0x3a3fc0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a3fc4:
    // 0x3a3fc4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3a3fc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3a3fc8:
    // 0x3a3fc8: 0x8c432a94  lw          $v1, 0x2A94($v0)
    ctx->pc = 0x3a3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10900)));
label_3a3fcc:
    // 0x3a3fcc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3a3fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a3fd0:
    // 0x3a3fd0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_3a3fd4:
    if (ctx->pc == 0x3A3FD4u) {
        ctx->pc = 0x3A3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FD0u;
        // 0x3a3fd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3FD8u;
        goto label_3a3fd8;
    }
    ctx->pc = 0x3A3FD0u;
    {
        const bool branch_taken_0x3a3fd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FD0u;
        // 0x3a3fd4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a3fd0) {
            ctx->pc = 0x3A3FE4u;
            goto label_3a3fe4;
        }
    }
    ctx->pc = 0x3A3FD8u;
label_3a3fd8:
    // 0x3a3fd8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x3a3fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_3a3fdc:
    // 0x3a3fdc: 0x60f809  jalr        $v1
label_3a3fe0:
    if (ctx->pc == 0x3A3FE0u) {
        ctx->pc = 0x3A3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FDCu;
        // 0x3a3fe0: 0x8c442a98  lw          $a0, 0x2A98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10904)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3FE4u;
        goto label_3a3fe4;
    }
    ctx->pc = 0x3A3FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3A3FE4u);
        ctx->pc = 0x3A3FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FDCu;
        // 0x3a3fe0: 0x8c442a98  lw          $a0, 0x2A98($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10904)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3FDCu, 0x3A3FE4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A3FE4u;
label_3a3fe4:
    // 0x3a3fe4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3a3fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3a3fe8:
    // 0x3a3fe8: 0x3e00008  jr          $ra
label_3a3fec:
    if (ctx->pc == 0x3A3FECu) {
        ctx->pc = 0x3A3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FE8u;
        // 0x3a3fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A3FF0u;
        goto label_fallthrough_0x3a3fe8;
    }
    ctx->pc = 0x3A3FE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A3FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A3FE8u;
        // 0x3a3fec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A3FE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a3fe8:
    ctx->pc = 0x3A3FF0u;
}
