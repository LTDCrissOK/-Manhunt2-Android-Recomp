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

// Function: sub_00121CC8
// Address: 0x121cc8 - 0x121d30
void sub_00121CC8_0x121cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121CC8_0x121cc8");
#endif

    switch (ctx->pc) {
        case 0x121cecu: goto label_121cec;
        case 0x121d08u: goto label_121d08;
        case 0x121d14u: goto label_121d14;
        default: break;
    }

    ctx->pc = 0x121cc8u;

    // 0x121cc8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x121cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x121ccc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x121cccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x121cd0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x121cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x121cd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x121cd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cd8: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x121cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x121cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x121ce0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x121ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x121ce4: 0xc048784  jal         func_121E10
    ctx->pc = 0x121CE4u;
    SET_GPR_U32(ctx, 31, 0x121CECu);
    ctx->pc = 0x121CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121CE4u;
    // 0x121ce8: 0x3a0482d  daddu       $t1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x121E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x121E10u, 0x121CE4u, 0x121CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121CECu;
label_121cec:
    // 0x121cec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x121cecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x121cf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x121cf4: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x121CF4u;
    {
        const bool branch_taken_0x121cf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x121CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121CF4u;
        // 0x121cf8: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x121cf4) {
            ctx->pc = 0x121D18u;
            goto label_121d18;
        }
    }
    ctx->pc = 0x121CFCu;
    // 0x121cfc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x121cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121d00: 0xc05a6fa  jal         func_169BE8
    ctx->pc = 0x121D00u;
    SET_GPR_U32(ctx, 31, 0x121D08u);
    ctx->pc = 0x121D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D00u;
    // 0x121d04: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169BE8u, 0x121D00u, 0x121D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D08u;
label_121d08:
    // 0x121d08: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x121d08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x121d0c: 0xc049944  jal         func_126510
    ctx->pc = 0x121D0Cu;
    SET_GPR_U32(ctx, 31, 0x121D14u);
    ctx->pc = 0x121D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x121D0Cu;
    // 0x121d10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x126510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x126510u, 0x121D0Cu, 0x121D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x121D14u;
label_121d14:
    // 0x121d14: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x121d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_121d18:
    // 0x121d18: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x121d18u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x121d1c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x121d1cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x121d20: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x121d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x121d24: 0x3e00008  jr          $ra
    ctx->pc = 0x121D24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x121D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x121D24u;
        // 0x121d28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x121D24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x121D2Cu;
    // 0x121d2c: 0x0  nop
    ctx->pc = 0x121d2cu;
    // NOP
    ctx->pc = 0x121d30u;
}
