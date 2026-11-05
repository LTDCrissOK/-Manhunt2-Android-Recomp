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

// Function: sub_001F17F8
// Address: 0x1f17f8 - 0x1f1830
void sub_001F17F8_0x1f17f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F17F8_0x1f17f8");
#endif

    switch (ctx->pc) {
        case 0x1f1824u: goto label_1f1824;
        default: break;
    }

    ctx->pc = 0x1f17f8u;

    // 0x1f17f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f17f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f17fc: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x1f17fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x1f1800: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1f1800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1f1804: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F1804u;
    {
        const bool branch_taken_0x1f1804 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1804u;
        // 0x1f1808: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1804) {
            ctx->pc = 0x1F1824u;
            goto label_1f1824;
        }
    }
    ctx->pc = 0x1F180Cu;
    // 0x1f180c: 0x3c070046  lui         $a3, 0x46
    ctx->pc = 0x1f180cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)70 << 16));
    // 0x1f1810: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x1f1810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1f1814: 0x24e7edd0  addiu       $a3, $a3, -0x1230
    ctx->pc = 0x1f1814u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962640));
    // 0x1f1818: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1f1818u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f181c: 0xc07c638  jal         func_1F18E0
    ctx->pc = 0x1F181Cu;
    SET_GPR_U32(ctx, 31, 0x1F1824u);
    ctx->pc = 0x1F1820u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F181Cu;
    // 0x1f1820: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F18E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F18E0u, 0x1F181Cu, 0x1F1824u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F1824u;
label_1f1824:
    // 0x1f1824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f1824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f1828: 0x3e00008  jr          $ra
    ctx->pc = 0x1F1828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F182Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F1828u;
        // 0x1f182c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F1828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F1830u;
}
