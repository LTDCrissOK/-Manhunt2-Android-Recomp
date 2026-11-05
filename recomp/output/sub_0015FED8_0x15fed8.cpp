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

// Function: sub_0015FED8
// Address: 0x15fed8 - 0x15ff50
void sub_0015FED8_0x15fed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015FED8_0x15fed8");
#endif

    switch (ctx->pc) {
        case 0x15ff0cu: goto label_15ff0c;
        case 0x15ff14u: goto label_15ff14;
        case 0x15ff20u: goto label_15ff20;
        case 0x15ff30u: goto label_15ff30;
        case 0x15ff3cu: goto label_15ff3c;
        default: break;
    }

    ctx->pc = 0x15fed8u;

    // 0x15fed8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x15fed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x15fedc: 0x24070022  addiu       $a3, $zero, 0x22
    ctx->pc = 0x15fedcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x15fee0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x15fee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x15fee4: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x15fee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x15fee8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x15fee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x15feec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15feecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15fef0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15fef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15fef4: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x15fef4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x15fef8: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x15fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15fefc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x15fefcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x15ff00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15ff04: 0xc04f4d4  jal         func_13D350
    ctx->pc = 0x15FF04u;
    SET_GPR_U32(ctx, 31, 0x15FF0Cu);
    ctx->pc = 0x15FF08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF04u;
    // 0x15ff08: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13D350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D350u, 0x15FF04u, 0x15FF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF0Cu;
label_15ff0c:
    // 0x15ff0c: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x15FF0Cu;
    SET_GPR_U32(ctx, 31, 0x15FF14u);
    ctx->pc = 0x15FF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF0Cu;
    // 0x15ff10: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x15FF0Cu, 0x15FF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF14u;
label_15ff14:
    // 0x15ff14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15ff14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff18: 0xc0aafc8  jal         func_2ABF20
    ctx->pc = 0x15FF18u;
    SET_GPR_U32(ctx, 31, 0x15FF20u);
    ctx->pc = 0x15FF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF18u;
    // 0x15ff1c: 0x2405fffb  addiu       $a1, $zero, -0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF20u, 0x15FF18u, 0x15FF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF20u;
label_15ff20:
    // 0x15ff20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15ff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff24: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15ff24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff28: 0xc056af8  jal         func_15ABE0
    ctx->pc = 0x15FF28u;
    SET_GPR_U32(ctx, 31, 0x15FF30u);
    ctx->pc = 0x15FF2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF28u;
    // 0x15ff2c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x15ABE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15ABE0u, 0x15FF28u, 0x15FF30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF30u;
label_15ff30:
    // 0x15ff30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x15ff30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ff34: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x15FF34u;
    SET_GPR_U32(ctx, 31, 0x15FF3Cu);
    ctx->pc = 0x15FF38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15FF34u;
    // 0x15ff38: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x15FF34u, 0x15FF3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15FF3Cu;
label_15ff3c:
    // 0x15ff3c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x15ff3cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15ff40: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x15ff40u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15ff44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15ff44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15ff48: 0x3e00008  jr          $ra
    ctx->pc = 0x15FF48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15FF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15FF48u;
        // 0x15ff4c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15FF48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15FF50u;
}
