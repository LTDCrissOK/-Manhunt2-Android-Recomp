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

// Function: sub_00177A68
// Address: 0x177a68 - 0x177af8
void sub_00177A68_0x177a68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00177A68_0x177a68");
#endif

    switch (ctx->pc) {
        case 0x177aa8u: goto label_177aa8;
        case 0x177ac4u: goto label_177ac4;
        default: break;
    }

    ctx->pc = 0x177a68u;

    // 0x177a68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x177a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x177a6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x177a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x177a70: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x177a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x177a74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x177a74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x177a78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x177a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x177a7c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x177a7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x177a80: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x177a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x177a84: 0x90820158  lbu         $v0, 0x158($a0)
    ctx->pc = 0x177a84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 344)));
    // 0x177a88: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x177A88u;
    {
        const bool branch_taken_0x177a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x177A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177A88u;
        // 0x177a8c: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177a88) {
            ctx->pc = 0x177AD8u;
            goto label_177ad8;
        }
    }
    ctx->pc = 0x177A90u;
    // 0x177a90: 0x249200dc  addiu       $s2, $a0, 0xDC
    ctx->pc = 0x177a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), 220));
    // 0x177a94: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x177a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177a98: 0x249100d8  addiu       $s1, $a0, 0xD8
    ctx->pc = 0x177a98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 216));
    // 0x177a9c: 0x24140021  addiu       $s4, $zero, 0x21
    ctx->pc = 0x177a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x177aa0: 0x1020c0  sll         $a0, $s0, 3
    ctx->pc = 0x177aa0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x177aa4: 0x0  nop
    ctx->pc = 0x177aa4u;
    // NOP
label_177aa8:
    // 0x177aa8: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x177aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x177aac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x177aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x177ab0: 0x10740004  beq         $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x177AB0u;
    {
        const bool branch_taken_0x177ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x177AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AB0u;
        // 0x177ab4: 0x2441021  addu        $v0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x177ab0) {
            ctx->pc = 0x177AC4u;
            goto label_177ac4;
        }
    }
    ctx->pc = 0x177AB8u;
    // 0x177ab8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x177ab8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x177abc: 0xc05e54c  jal         func_179530
    ctx->pc = 0x177ABCu;
    SET_GPR_U32(ctx, 31, 0x177AC4u);
    ctx->pc = 0x177AC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x177ABCu;
    // 0x177ac0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x179530u, 0x177ABCu, 0x177AC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x177AC4u;
label_177ac4:
    // 0x177ac4: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x177ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x177ac8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x177ac8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x177acc: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x177accu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x177ad0: 0x5460fff5  bnel        $v1, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x177AD0u;
    {
        const bool branch_taken_0x177ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x177ad0) {
            ctx->pc = 0x177AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x177AD0u;
            // 0x177ad4: 0x1020c0  sll         $a0, $s0, 3 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x177AA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_177aa8;
        }
    }
    ctx->pc = 0x177AD8u;
label_177ad8:
    // 0x177ad8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x177ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x177adc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x177adcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x177ae0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x177ae0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x177ae4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x177ae4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x177ae8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x177ae8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x177aec: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x177aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x177af0: 0x3e00008  jr          $ra
    ctx->pc = 0x177AF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x177AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x177AF0u;
        // 0x177af4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x177AF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x177AF8u;
}
