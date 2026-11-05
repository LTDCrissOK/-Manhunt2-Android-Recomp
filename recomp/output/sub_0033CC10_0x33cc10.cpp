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

// Function: sub_0033CC10
// Address: 0x33cc10 - 0x33cc70
void sub_0033CC10_0x33cc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033CC10_0x33cc10");
#endif

    switch (ctx->pc) {
        case 0x33cc3cu: goto label_33cc3c;
        case 0x33cc5cu: goto label_33cc5c;
        default: break;
    }

    ctx->pc = 0x33cc10u;

    // 0x33cc10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x33cc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x33cc14: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x33cc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x33cc18: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x33cc18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x33cc1c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x33cc1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc20: 0x9202003a  lbu         $v0, 0x3A($s0)
    ctx->pc = 0x33cc20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 58)));
    // 0x33cc24: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x33CC24u;
    {
        const bool branch_taken_0x33cc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33cc24) {
            ctx->pc = 0x33CC28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33CC24u;
            // 0x33cc28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33CC60u;
            goto label_33cc60;
        }
    }
    ctx->pc = 0x33CC2Cu;
    // 0x33cc2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33cc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33cc30: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33cc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33cc34: 0xc0cf374  jal         func_33CDD0
    ctx->pc = 0x33CC34u;
    SET_GPR_U32(ctx, 31, 0x33CC3Cu);
    ctx->pc = 0x33CC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC34u;
    // 0x33cc38: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CDD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CDD0u, 0x33CC34u, 0x33CC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC3Cu;
label_33cc3c:
    // 0x33cc3c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x33cc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x33cc40: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33cc40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33cc44: 0x2463c210  addiu       $v1, $v1, -0x3DF0
    ctx->pc = 0x33cc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951440));
    // 0x33cc48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33cc48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33cc4c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33cc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33cc50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x33cc50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33cc54: 0xc0cf2da  jal         func_33CB68
    ctx->pc = 0x33CC54u;
    SET_GPR_U32(ctx, 31, 0x33CC5Cu);
    ctx->pc = 0x33CC58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33CC54u;
    // 0x33cc58: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x33CB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33CB68u, 0x33CC54u, 0x33CC5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33CC5Cu;
label_33cc5c:
    // 0x33cc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33cc60:
    // 0x33cc60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x33cc60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33cc64: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x33cc64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33cc68: 0x3e00008  jr          $ra
    ctx->pc = 0x33CC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33CC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33CC68u;
        // 0x33cc6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33CC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33CC70u;
}
