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

// Function: sub_001557D8
// Address: 0x1557d8 - 0x155828
void sub_001557D8_0x1557d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001557D8_0x1557d8");
#endif

    switch (ctx->pc) {
        case 0x155818u: goto label_155818;
        default: break;
    }

    ctx->pc = 0x1557d8u;

    // 0x1557d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1557d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1557dc: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1557dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1557e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1557e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1557e4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1557e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1557e8: 0x3c030049  lui         $v1, 0x49
    ctx->pc = 0x1557e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
    // 0x1557ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1557ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1557f0: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x1557f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x1557f4: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1557f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1557f8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1557f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1557fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1557fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x155800: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x155800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x155804: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x155804u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x155808: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x155808u;
    {
        const bool branch_taken_0x155808 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15580Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x155808u;
        // 0x15580c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x155808) {
            ctx->pc = 0x15581Cu;
            goto label_15581c;
        }
    }
    ctx->pc = 0x155810u;
    // 0x155810: 0xc043f84  jal         func_10FE10
    ctx->pc = 0x155810u;
    SET_GPR_U32(ctx, 31, 0x155818u);
    ctx->pc = 0x155814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x155810u;
    // 0x155814: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FE10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FE10u, 0x155810u, 0x155818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x155818u;
label_155818:
    // 0x155818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x155818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15581c:
    // 0x15581c: 0x3e00008  jr          $ra
    ctx->pc = 0x15581Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x155820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15581Cu;
        // 0x155820: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15581Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x155824u;
    // 0x155824: 0x0  nop
    ctx->pc = 0x155824u;
    // NOP
    ctx->pc = 0x155828u;
}
