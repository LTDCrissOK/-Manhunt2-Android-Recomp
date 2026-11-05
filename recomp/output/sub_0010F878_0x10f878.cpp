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

// Function: sub_0010F878
// Address: 0x10f878 - 0x10f8b0
void sub_0010F878_0x10f878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010F878_0x10f878");
#endif

    switch (ctx->pc) {
        case 0x10f894u: goto label_10f894;
        default: break;
    }

    ctx->pc = 0x10f878u;

    // 0x10f878: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10f878u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10f87c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10f87cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10f880: 0x8c8501c8  lw          $a1, 0x1C8($a0)
    ctx->pc = 0x10f880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 456)));
    // 0x10f884: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x10F884u;
    {
        const bool branch_taken_0x10f884 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F888u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F884u;
        // 0x10f888: 0x3c040049  lui         $a0, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f884) {
            ctx->pc = 0x10F89Cu;
            goto label_10f89c;
        }
    }
    ctx->pc = 0x10F88Cu;
    // 0x10f88c: 0xc047860  jal         func_11E180
    ctx->pc = 0x10F88Cu;
    SET_GPR_U32(ctx, 31, 0x10F894u);
    ctx->pc = 0x10F890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F88Cu;
    // 0x10f890: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E180u, 0x10F88Cu, 0x10F894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10F894u;
label_10f894:
    // 0x10f894: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x10F894u;
    {
        const bool branch_taken_0x10f894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10F898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F894u;
        // 0x10f898: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f894) {
            ctx->pc = 0x10F8A4u;
            goto label_10f8a4;
        }
    }
    ctx->pc = 0x10F89Cu;
label_10f89c:
    // 0x10f89c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x10f89cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10f8a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10f8a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_10f8a4:
    // 0x10f8a4: 0x3e00008  jr          $ra
    ctx->pc = 0x10F8A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10F8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F8A4u;
        // 0x10f8a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10F8A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10F8ACu;
    // 0x10f8ac: 0x0  nop
    ctx->pc = 0x10f8acu;
    // NOP
    ctx->pc = 0x10f8b0u;
}
