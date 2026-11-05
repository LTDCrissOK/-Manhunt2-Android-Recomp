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

// Function: sub_0026BF00
// Address: 0x26bf00 - 0x26bf60
void sub_0026BF00_0x26bf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BF00_0x26bf00");
#endif

    switch (ctx->pc) {
        case 0x26bf2cu: goto label_26bf2c;
        case 0x26bf40u: goto label_26bf40;
        default: break;
    }

    ctx->pc = 0x26bf00u;

    // 0x26bf00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26bf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26bf04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x26bf04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x26bf08: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x26bf08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf0c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x26bf0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf10: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x26bf10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x26bf14: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26bf14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf18: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26bf18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26bf1c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x26bf1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x26bf20: 0x24a57bb8  addiu       $a1, $a1, 0x7BB8
    ctx->pc = 0x26bf20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31672));
    // 0x26bf24: 0xc0b5dc4  jal         func_2D7710
    ctx->pc = 0x26BF24u;
    SET_GPR_U32(ctx, 31, 0x26BF2Cu);
    ctx->pc = 0x26BF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF24u;
    // 0x26bf28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7710u, 0x26BF24u, 0x26BF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF2Cu;
label_26bf2c:
    // 0x26bf2c: 0x3c050046  lui         $a1, 0x46
    ctx->pc = 0x26bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)70 << 16));
    // 0x26bf30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf34: 0x26260274  addiu       $a2, $s1, 0x274
    ctx->pc = 0x26bf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 628));
    // 0x26bf38: 0xc0b5df8  jal         func_2D77E0
    ctx->pc = 0x26BF38u;
    SET_GPR_U32(ctx, 31, 0x26BF40u);
    ctx->pc = 0x26BF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26BF38u;
    // 0x26bf3c: 0x24a57bc0  addiu       $a1, $a1, 0x7BC0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D77E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D77E0u, 0x26BF38u, 0x26BF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26BF40u;
label_26bf40:
    // 0x26bf40: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x26bf40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bf44: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x26bf44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bf48: 0xae230254  sw          $v1, 0x254($s1)
    ctx->pc = 0x26bf48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 596), GPR_U32(ctx, 3));
    // 0x26bf4c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x26bf4cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26bf50: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x26bf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bf54: 0x3e00008  jr          $ra
    ctx->pc = 0x26BF54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26BF54u;
        // 0x26bf58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26BF54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26BF5Cu;
    // 0x26bf5c: 0x0  nop
    ctx->pc = 0x26bf5cu;
    // NOP
    ctx->pc = 0x26bf60u;
}
