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

// Function: sub_003AC320
// Address: 0x3ac320 - 0x3ac370
void sub_003AC320_0x3ac320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AC320_0x3ac320");
#endif

    switch (ctx->pc) {
        case 0x3ac354u: goto label_3ac354;
        default: break;
    }

    ctx->pc = 0x3ac320u;

    // 0x3ac320: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3ac320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3ac324: 0x3c020042  lui         $v0, 0x42
    ctx->pc = 0x3ac324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)66 << 16));
    // 0x3ac328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x3ac328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x3ac32c: 0x2450278c  addiu       $s0, $v0, 0x278C
    ctx->pc = 0x3ac32cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 10124));
    // 0x3ac330: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x3ac330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x3ac334: 0x3c030042  lui         $v1, 0x42
    ctx->pc = 0x3ac334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)66 << 16));
    // 0x3ac338: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ac338u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x42278Cu));
    // 0x3ac33c: 0x24632788  addiu       $v1, $v1, 0x2788
    ctx->pc = 0x3ac33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10120));
    // 0x3ac340: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3ac340u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x422788u));
    // 0x3ac344: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3AC344u;
    {
        const bool branch_taken_0x3ac344 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3AC348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC344u;
        // 0x3ac348: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3ac344) {
            ctx->pc = 0x3AC35Cu;
            goto label_3ac35c;
        }
    }
    ctx->pc = 0x3AC34Cu;
    // 0x3ac34c: 0xc0e8f30  jal         func_3A3CC0
    ctx->pc = 0x3AC34Cu;
    SET_GPR_U32(ctx, 31, 0x3AC354u);
    ctx->pc = 0x3A3CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3CC0u, 0x3AC34Cu, 0x3AC354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AC354u;
label_3ac354:
    // 0x3ac354: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3ac354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3ac358: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3ac358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_3ac35c:
    // 0x3ac35c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x3ac35cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3ac360: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x3ac360u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x3ac364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3ac364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3ac368: 0x3e00008  jr          $ra
    ctx->pc = 0x3AC368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AC36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AC368u;
        // 0x3ac36c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AC368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3AC370u;
}
