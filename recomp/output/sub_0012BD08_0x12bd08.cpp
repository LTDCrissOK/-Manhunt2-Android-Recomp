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

// Function: sub_0012BD08
// Address: 0x12bd08 - 0x12bd58
void sub_0012BD08_0x12bd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012BD08_0x12bd08");
#endif

    switch (ctx->pc) {
        case 0x12bd1cu: goto label_12bd1c;
        default: break;
    }

    ctx->pc = 0x12bd08u;

    // 0x12bd08: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x12bd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x12bd0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12bd0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x12bd10: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x12bd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x12bd14: 0xc04b19a  jal         func_12C668
    ctx->pc = 0x12BD14u;
    SET_GPR_U32(ctx, 31, 0x12BD1Cu);
    ctx->pc = 0x12BD18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12BD14u;
    // 0x12bd18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12C668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12C668u, 0x12BD14u, 0x12BD1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12BD1Cu;
label_12bd1c:
    // 0x12bd1c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x12bd1cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12bd20: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x12bd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x12bd24: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x12BD24u;
    {
        const bool branch_taken_0x12bd24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x12BD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD24u;
        // 0x12bd28: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd24) {
            ctx->pc = 0x12BD44u;
            goto label_12bd44;
        }
    }
    ctx->pc = 0x12BD2Cu;
    // 0x12bd2c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x12bd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x12bd30: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x12bd30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x12bd34: 0x908200c6  lbu         $v0, 0xC6($a0)
    ctx->pc = 0x12bd34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 198)));
    // 0x12bd38: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12BD38u;
    {
        const bool branch_taken_0x12bd38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD38u;
        // 0x12bd3c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12bd38) {
            ctx->pc = 0x12BD44u;
            goto label_12bd44;
        }
    }
    ctx->pc = 0x12BD40u;
    // 0x12bd40: 0xa08200c6  sb          $v0, 0xC6($a0)
    ctx->pc = 0x12bd40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 198), (uint8_t)GPR_U32(ctx, 2));
label_12bd44:
    // 0x12bd44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x12bd44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12bd48: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x12bd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12bd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x12BD4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12BD4Cu;
        // 0x12bd50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12BD4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12BD54u;
    // 0x12bd54: 0x0  nop
    ctx->pc = 0x12bd54u;
    // NOP
    ctx->pc = 0x12bd58u;
}
