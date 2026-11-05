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

// Function: sub_001AEE20
// Address: 0x1aee20 - 0x1aeed8
void sub_001AEE20_0x1aee20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AEE20_0x1aee20");
#endif

    switch (ctx->pc) {
        case 0x1aee40u: goto label_1aee40;
        case 0x1aeea8u: goto label_1aeea8;
        case 0x1aeec0u: goto label_1aeec0;
        default: break;
    }

    ctx->pc = 0x1aee20u;

    // 0x1aee20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aee20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1aee24: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aee24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1aee28: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aee28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1aee2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1aee2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee30: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aee30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1aee34: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aee34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1aee38: 0xc06c148  jal         func_1B0520
    ctx->pc = 0x1AEE38u;
    SET_GPR_U32(ctx, 31, 0x1AEE40u);
    ctx->pc = 0x1AEE3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEE38u;
    // 0x1aee3c: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B0520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B0520u, 0x1AEE38u, 0x1AEE40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEE40u;
label_1aee40:
    // 0x1aee40: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1aee40u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aee44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aee44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1aee48: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1AEE48u;
    {
        const bool branch_taken_0x1aee48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE48u;
        // 0x1aee4c: 0x241001ba  addiu       $s0, $zero, 0x1BA (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee48) {
            ctx->pc = 0x1AEE7Cu;
            goto label_1aee7c;
        }
    }
    ctx->pc = 0x1AEE50u;
    // 0x1aee50: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x1aee50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1aee54: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1AEE54u;
    {
        const bool branch_taken_0x1aee54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEE58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE54u;
        // 0x1aee58: 0x28620008  slti        $v0, $v1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee54) {
            ctx->pc = 0x1AEE7Cu;
            goto label_1aee7c;
        }
    }
    ctx->pc = 0x1AEE5Cu;
    // 0x1aee5c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEE5Cu;
    {
        const bool branch_taken_0x1aee5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE5Cu;
        // 0x1aee60: 0x24020109  addiu       $v0, $zero, 0x109 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 265));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee5c) {
            ctx->pc = 0x1AEE6Cu;
            goto label_1aee6c;
        }
    }
    ctx->pc = 0x1AEE64u;
    // 0x1aee64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1AEE64u;
    {
        const bool branch_taken_0x1aee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE64u;
        // 0x1aee68: 0x241000fb  addiu       $s0, $zero, 0xFB (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 251));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee64) {
            ctx->pc = 0x1AEE78u;
            goto label_1aee78;
        }
    }
    ctx->pc = 0x1AEE6Cu;
label_1aee6c:
    // 0x1aee6c: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AEE6Cu;
    {
        const bool branch_taken_0x1aee6c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1AEE70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE6Cu;
        // 0x1aee70: 0x24020105  addiu       $v0, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee6c) {
            ctx->pc = 0x1AEE7Cu;
            goto label_1aee7c;
        }
    }
    ctx->pc = 0x1AEE74u;
    // 0x1aee74: 0x241000f8  addiu       $s0, $zero, 0xF8
    ctx->pc = 0x1aee74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_1aee78:
    // 0x1aee78: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x1aee78u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1aee7c:
    // 0x1aee7c: 0x240201ba  addiu       $v0, $zero, 0x1BA
    ctx->pc = 0x1aee7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 442));
    // 0x1aee80: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEE80u;
    {
        const bool branch_taken_0x1aee80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x1AEE84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE80u;
        // 0x1aee84: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee80) {
            ctx->pc = 0x1AEE9Cu;
            goto label_1aee9c;
        }
    }
    ctx->pc = 0x1AEE88u;
    // 0x1aee88: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x1aee88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x1aee8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1aee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1aee90: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1aee90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1aee94: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEE94u;
    {
        const bool branch_taken_0x1aee94 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AEE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEE94u;
        // 0x1aee98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aee94) {
            ctx->pc = 0x1AEEB0u;
            goto label_1aeeb0;
        }
    }
    ctx->pc = 0x1AEE9Cu;
label_1aee9c:
    // 0x1aee9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aee9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeea0: 0xc06b85c  jal         func_1AE170
    ctx->pc = 0x1AEEA0u;
    SET_GPR_U32(ctx, 31, 0x1AEEA8u);
    ctx->pc = 0x1AEEA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEEA0u;
    // 0x1aeea4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE170u, 0x1AEEA0u, 0x1AEEA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEA8u;
label_1aeea8:
    // 0x1aeea8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1AEEA8u;
    {
        const bool branch_taken_0x1aeea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEEA8u;
        // 0x1aeeac: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aeea8) {
            ctx->pc = 0x1AEEC4u;
            goto label_1aeec4;
        }
    }
    ctx->pc = 0x1AEEB0u;
label_1aeeb0:
    // 0x1aeeb0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aeeb0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1aeeb4: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x1aeeb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1aeeb8: 0xc06b808  jal         func_1AE020
    ctx->pc = 0x1AEEB8u;
    SET_GPR_U32(ctx, 31, 0x1AEEC0u);
    ctx->pc = 0x1AEEBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AEEB8u;
    // 0x1aeebc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AE020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE020u, 0x1AEEB8u, 0x1AEEC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AEEC0u;
label_1aeec0:
    // 0x1aeec0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aeec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aeec4:
    // 0x1aeec4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aeec4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1aeec8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aeec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1aeecc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aeeccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1aeed0: 0x3e00008  jr          $ra
    ctx->pc = 0x1AEED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AEED0u;
        // 0x1aeed4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AEED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AEED8u;
}
