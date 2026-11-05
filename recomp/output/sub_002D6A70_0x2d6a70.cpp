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

// Function: sub_002D6A70
// Address: 0x2d6a70 - 0x2d6b10
void sub_002D6A70_0x2d6a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D6A70_0x2d6a70");
#endif

    switch (ctx->pc) {
        case 0x2d6aa8u: goto label_2d6aa8;
        case 0x2d6ab4u: goto label_2d6ab4;
        case 0x2d6ad8u: goto label_2d6ad8;
        case 0x2d6ae4u: goto label_2d6ae4;
        default: break;
    }

    ctx->pc = 0x2d6a70u;

    // 0x2d6a70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d6a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d6a74: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x2d6a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x2d6a78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d6a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d6a7c: 0x24423e08  addiu       $v0, $v0, 0x3E08
    ctx->pc = 0x2d6a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15880));
    // 0x2d6a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d6a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d6a84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2d6a84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a88: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d6a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d6a8c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x2d6a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a90: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d6a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2d6a94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2d6a94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6a98: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d6a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d6a9c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2d6a9cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6aa0: 0xae420af0  sw          $v0, 0xAF0($s2)
    ctx->pc = 0x2d6aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2800), GPR_U32(ctx, 2));
    // 0x2d6aa4: 0x0  nop
    ctx->pc = 0x2d6aa4u;
    // NOP
label_2d6aa8:
    // 0x2d6aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6aac: 0xc0b595c  jal         func_2D6570
    ctx->pc = 0x2D6AACu;
    SET_GPR_U32(ctx, 31, 0x2D6AB4u);
    ctx->pc = 0x2D6AB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6AACu;
    // 0x2d6ab0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6570u, 0x2D6AACu, 0x2D6AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AB4u;
label_2d6ab4:
    // 0x2d6ab4: 0x0  nop
    ctx->pc = 0x2d6ab4u;
    // NOP
    // 0x2d6ab8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6AB8u;
    {
        const bool branch_taken_0x2d6ab8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D6ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AB8u;
        // 0x2d6abc: 0x2610002c  addiu       $s0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ab8) {
            ctx->pc = 0x2D6AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6aa8;
        }
    }
    ctx->pc = 0x2D6AC0u;
    // 0x2d6ac0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2d6ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6ac4: 0x26500030  addiu       $s0, $s2, 0x30
    ctx->pc = 0x2d6ac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x2d6ac8: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x2d6ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x2d6acc: 0x24110055  addiu       $s1, $zero, 0x55
    ctx->pc = 0x2d6accu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x2d6ad0: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2d6ad0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2d6ad4: 0x0  nop
    ctx->pc = 0x2d6ad4u;
    // NOP
label_2d6ad8:
    // 0x2d6ad8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d6ad8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6adc: 0xc0b5a84  jal         func_2D6A10
    ctx->pc = 0x2D6ADCu;
    SET_GPR_U32(ctx, 31, 0x2D6AE4u);
    ctx->pc = 0x2D6AE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6ADCu;
    // 0x2d6ae0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D6A10u, 0x2D6ADCu, 0x2D6AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6AE4u;
label_2d6ae4:
    // 0x2d6ae4: 0x0  nop
    ctx->pc = 0x2d6ae4u;
    // NOP
    // 0x2d6ae8: 0x1633fffb  bne         $s1, $s3, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6AE8u;
    {
        const bool branch_taken_0x2d6ae8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 19));
        ctx->pc = 0x2D6AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6AE8u;
        // 0x2d6aec: 0x26100020  addiu       $s0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6ae8) {
            ctx->pc = 0x2D6AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6ad8;
        }
    }
    ctx->pc = 0x2D6AF0u;
    // 0x2d6af0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2d6af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d6af4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d6af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6af8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d6af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6afc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d6afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d6b00: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d6b00u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d6b04: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d6b04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d6b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6B0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6B08u;
        // 0x2d6b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D6B10u;
}
