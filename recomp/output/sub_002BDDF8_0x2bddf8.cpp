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

// Function: sub_002BDDF8
// Address: 0x2bddf8 - 0x2bde28
void sub_002BDDF8_0x2bddf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BDDF8_0x2bddf8");
#endif

    switch (ctx->pc) {
        case 0x2bde1cu: goto label_2bde1c;
        default: break;
    }

    ctx->pc = 0x2bddf8u;

    // 0x2bddf8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bddf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bddfc: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2bddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2bde00: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2bde00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2bde04: 0x24423ca8  addiu       $v0, $v0, 0x3CA8
    ctx->pc = 0x2bde04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15528));
    // 0x2bde08: 0x30a50001  andi        $a1, $a1, 0x1
    ctx->pc = 0x2bde08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x2bde0c: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2BDE0Cu;
    {
        const bool branch_taken_0x2bde0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BDE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE0Cu;
        // 0x2bde10: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bde0c) {
            ctx->pc = 0x2BDE1Cu;
            goto label_2bde1c;
        }
    }
    ctx->pc = 0x2BDE14u;
    // 0x2bde14: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x2BDE14u;
    SET_GPR_U32(ctx, 31, 0x2BDE1Cu);
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x2BDE14u, 0x2BDE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BDE1Cu;
label_2bde1c:
    // 0x2bde1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bde1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bde20: 0x3e00008  jr          $ra
    ctx->pc = 0x2BDE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BDE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BDE20u;
        // 0x2bde24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BDE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BDE28u;
}
