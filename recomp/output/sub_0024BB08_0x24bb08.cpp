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

// Function: sub_0024BB08
// Address: 0x24bb08 - 0x24bb68
void sub_0024BB08_0x24bb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024BB08_0x24bb08");
#endif

    switch (ctx->pc) {
        case 0x24bb4cu: goto label_24bb4c;
        default: break;
    }

    ctx->pc = 0x24bb08u;

    // 0x24bb08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x24bb08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x24bb0c: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x24bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x24bb10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x24bb10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x24bb14: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x24bb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x24bb18: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x24bb18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24bb1c: 0x8e040334  lw          $a0, 0x334($s0)
    ctx->pc = 0x24bb1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 820)));
    // 0x24bb20: 0x8c830150  lw          $v1, 0x150($a0)
    ctx->pc = 0x24bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 336)));
    // 0x24bb24: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x24BB24u;
    {
        const bool branch_taken_0x24bb24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BB28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB24u;
        // 0x24bb28: 0x2402004d  addiu       $v0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb24) {
            ctx->pc = 0x24BB54u;
            goto label_24bb54;
        }
    }
    ctx->pc = 0x24BB2Cu;
    // 0x24bb2c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x24BB2Cu;
    {
        const bool branch_taken_0x24bb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24BB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB2Cu;
        // 0x24bb30: 0x24020467  addiu       $v0, $zero, 0x467 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24bb2c) {
            ctx->pc = 0x24BB54u;
            goto label_24bb54;
        }
    }
    ctx->pc = 0x24BB34u;
    // 0x24bb34: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x24bb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x24bb38: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x24BB38u;
    {
        const bool branch_taken_0x24bb38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x24bb38) {
            ctx->pc = 0x24BB3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24BB38u;
            // 0x24bb3c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24BB58u;
            goto label_24bb58;
        }
    }
    ctx->pc = 0x24BB40u;
    // 0x24bb40: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x24bb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x24bb44: 0xc092d94  jal         func_24B650
    ctx->pc = 0x24BB44u;
    SET_GPR_U32(ctx, 31, 0x24BB4Cu);
    ctx->pc = 0x24BB48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24BB44u;
    // 0x24bb48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B650u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B650u, 0x24BB44u, 0x24BB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24BB4Cu;
label_24bb4c:
    // 0x24bb4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24bb50: 0xae020428  sw          $v0, 0x428($s0)
    ctx->pc = 0x24bb50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1064), GPR_U32(ctx, 2));
label_24bb54:
    // 0x24bb54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24bb54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24bb58:
    // 0x24bb58: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x24bb58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x24bb5c: 0x3e00008  jr          $ra
    ctx->pc = 0x24BB5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24BB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24BB5Cu;
        // 0x24bb60: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24BB5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24BB64u;
    // 0x24bb64: 0x0  nop
    ctx->pc = 0x24bb64u;
    // NOP
    ctx->pc = 0x24bb68u;
}
