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

// Function: sub_00228770
// Address: 0x228770 - 0x2287c8
void sub_00228770_0x228770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00228770_0x228770");
#endif

    switch (ctx->pc) {
        case 0x228788u: goto label_228788;
        case 0x22879cu: goto label_22879c;
        default: break;
    }

    ctx->pc = 0x228770u;

    // 0x228770: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x228770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x228774: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x228774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x228778: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x228778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22877c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22877cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x228780: 0x244397f8  addiu       $v1, $v0, -0x6808
    ctx->pc = 0x228780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940664));
    // 0x228784: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x228784u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_228788:
    // 0x228788: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x228788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22878c: 0x54460005  bnel        $v0, $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x22878Cu;
    {
        const bool branch_taken_0x22878c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        if (branch_taken_0x22878c) {
            ctx->pc = 0x228790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22878Cu;
            // 0x228790: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2287A4u;
            goto label_2287a4;
        }
    }
    ctx->pc = 0x228794u;
    // 0x228794: 0xc08a1ae  jal         func_2286B8
    ctx->pc = 0x228794u;
    SET_GPR_U32(ctx, 31, 0x22879Cu);
    ctx->pc = 0x2286B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2286B8u, 0x228794u, 0x22879Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22879Cu;
label_22879c:
    // 0x22879c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x22879Cu;
    {
        const bool branch_taken_0x22879c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2287A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22879Cu;
        // 0x2287a0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22879c) {
            ctx->pc = 0x2287B8u;
            goto label_2287b8;
        }
    }
    ctx->pc = 0x2287A4u;
label_2287a4:
    // 0x2287a4: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x2287a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2287a8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2287A8u;
    {
        const bool branch_taken_0x2287a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2287ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287A8u;
        // 0x2287ac: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2287a8) {
            ctx->pc = 0x228788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_228788;
        }
    }
    ctx->pc = 0x2287B0u;
    // 0x2287b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2287b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2287b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2287b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2287b8:
    // 0x2287b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2287B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2287BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2287B8u;
        // 0x2287bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2287B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2287C0u;
    // 0x2287c0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2287c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2287c4: 0x0  nop
    ctx->pc = 0x2287c4u;
    // NOP
    ctx->pc = 0x2287c8u;
}
