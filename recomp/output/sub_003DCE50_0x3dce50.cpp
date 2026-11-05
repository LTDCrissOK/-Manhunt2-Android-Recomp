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

// Function: sub_003DCE50
// Address: 0x3dce50 - 0x3dcf30
void sub_003DCE50_0x3dce50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DCE50_0x3dce50");
#endif

    switch (ctx->pc) {
        case 0x3dce74u: goto label_3dce74;
        default: break;
    }

    ctx->pc = 0x3dce50u;

    // 0x3dce50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3dce50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x3dce54: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x3dce54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x3dce58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3dce58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3dce5c: 0x244213b0  addiu       $v0, $v0, 0x13B0
    ctx->pc = 0x3dce5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5040));
    // 0x3dce60: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x3dce60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x3dce64: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3DCE64u;
    {
        const bool branch_taken_0x3dce64 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3DCE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE64u;
        // 0x3dce68: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dce64) {
            ctx->pc = 0x3DCE74u;
            goto label_3dce74;
        }
    }
    ctx->pc = 0x3DCE6Cu;
    // 0x3dce6c: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x3DCE6Cu;
    SET_GPR_U32(ctx, 31, 0x3DCE74u);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x3DCE6Cu, 0x3DCE74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DCE74u;
label_3dce74:
    // 0x3dce74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3dce74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3dce78: 0x3e00008  jr          $ra
    ctx->pc = 0x3DCE78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DCE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DCE78u;
        // 0x3dce7c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DCE78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DCE80u;
    // 0x3dce80: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x3dce80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
    // 0x3dce84: 0x0  nop
    ctx->pc = 0x3dce84u;
    // NOP
    // 0x3dce88: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x3dce88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x3dce8c: 0x0  nop
    ctx->pc = 0x3dce8cu;
    // NOP
    // 0x3dce90: 0xac820044  sw          $v0, 0x44($a0)
    ctx->pc = 0x3dce90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 2));
    // 0x3dce94: 0x0  nop
    ctx->pc = 0x3dce94u;
    // NOP
    // 0x3dce98: 0x2c620001  sltiu       $v0, $v1, 0x1
    ctx->pc = 0x3dce98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dce9c: 0x0  nop
    ctx->pc = 0x3dce9cu;
    // NOP
    // 0x3dcea0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3dcea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3dcea4: 0x0  nop
    ctx->pc = 0x3dcea4u;
    // NOP
    // 0x3dcea8: 0x0  nop
    ctx->pc = 0x3dcea8u;
    // NOP
    // 0x3dceac: 0x0  nop
    ctx->pc = 0x3dceacu;
    // NOP
    // 0x3dceb0: 0x0  nop
    ctx->pc = 0x3dceb0u;
    // NOP
    // 0x3dceb4: 0x0  nop
    ctx->pc = 0x3dceb4u;
    // NOP
    // 0x3dceb8: 0x0  nop
    ctx->pc = 0x3dceb8u;
    // NOP
    // 0x3dcebc: 0x0  nop
    ctx->pc = 0x3dcebcu;
    // NOP
    // 0x3dcec0: 0x0  nop
    ctx->pc = 0x3dcec0u;
    // NOP
    // 0x3dcec4: 0x0  nop
    ctx->pc = 0x3dcec4u;
    // NOP
    // 0x3dcec8: 0x0  nop
    ctx->pc = 0x3dcec8u;
    // NOP
    // 0x3dcecc: 0x0  nop
    ctx->pc = 0x3dceccu;
    // NOP
    // 0x3dced0: 0x0  nop
    ctx->pc = 0x3dced0u;
    // NOP
    // 0x3dced4: 0x0  nop
    ctx->pc = 0x3dced4u;
    // NOP
    // 0x3dced8: 0x0  nop
    ctx->pc = 0x3dced8u;
    // NOP
    // 0x3dcedc: 0x0  nop
    ctx->pc = 0x3dcedcu;
    // NOP
    // 0x3dcee0: 0x0  nop
    ctx->pc = 0x3dcee0u;
    // NOP
    // 0x3dcee4: 0x0  nop
    ctx->pc = 0x3dcee4u;
    // NOP
    // 0x3dcee8: 0x0  nop
    ctx->pc = 0x3dcee8u;
    // NOP
    // 0x3dceec: 0x0  nop
    ctx->pc = 0x3dceecu;
    // NOP
    // 0x3dcef0: 0x0  nop
    ctx->pc = 0x3dcef0u;
    // NOP
    // 0x3dcef4: 0x0  nop
    ctx->pc = 0x3dcef4u;
    // NOP
    // 0x3dcef8: 0x0  nop
    ctx->pc = 0x3dcef8u;
    // NOP
    // 0x3dcefc: 0x0  nop
    ctx->pc = 0x3dcefcu;
    // NOP
    // 0x3dcf00: 0x0  nop
    ctx->pc = 0x3dcf00u;
    // NOP
    // 0x3dcf04: 0x0  nop
    ctx->pc = 0x3dcf04u;
    // NOP
    // 0x3dcf08: 0x0  nop
    ctx->pc = 0x3dcf08u;
    // NOP
    // 0x3dcf0c: 0x0  nop
    ctx->pc = 0x3dcf0cu;
    // NOP
    // 0x3dcf10: 0x0  nop
    ctx->pc = 0x3dcf10u;
    // NOP
    // 0x3dcf14: 0x0  nop
    ctx->pc = 0x3dcf14u;
    // NOP
    // 0x3dcf18: 0x0  nop
    ctx->pc = 0x3dcf18u;
    // NOP
    // 0x3dcf1c: 0x0  nop
    ctx->pc = 0x3dcf1cu;
    // NOP
    // 0x3dcf20: 0x0  nop
    ctx->pc = 0x3dcf20u;
    // NOP
    // 0x3dcf24: 0x0  nop
    ctx->pc = 0x3dcf24u;
    // NOP
    // 0x3dcf28: 0x0  nop
    ctx->pc = 0x3dcf28u;
    // NOP
    // 0x3dcf2c: 0x0  nop
    ctx->pc = 0x3dcf2cu;
    // NOP
    ctx->pc = 0x3dcf30u;
}
