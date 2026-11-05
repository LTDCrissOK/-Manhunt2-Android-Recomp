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

// Function: sub_00154A88
// Address: 0x154a88 - 0x154b08
void sub_00154A88_0x154a88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154A88_0x154a88");
#endif

    switch (ctx->pc) {
        case 0x154ac0u: goto label_154ac0;
        case 0x154accu: goto label_154acc;
        case 0x154ae0u: goto label_154ae0;
        case 0x154af0u: goto label_154af0;
        default: break;
    }

    ctx->pc = 0x154a88u;

    // 0x154a88: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x154a88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x154a8c: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x154a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154a90: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x154a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x154a94: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x154a94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x154a98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x154a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x154a9c: 0x248404f0  addiu       $a0, $a0, 0x4F0
    ctx->pc = 0x154a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1264));
    // 0x154aa0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x154aa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x154aa4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x154aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x154aa8: 0x858821  addu        $s1, $a0, $a1
    ctx->pc = 0x154aa8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x154aac: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x154aacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x154ab0: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x154AB0u;
    {
        const bool branch_taken_0x154ab0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x154AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AB0u;
        // 0x154ab4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ab0) {
            ctx->pc = 0x154AF4u;
            goto label_154af4;
        }
    }
    ctx->pc = 0x154AB8u;
    // 0x154ab8: 0xc0aafa6  jal         func_2ABE98
    ctx->pc = 0x154AB8u;
    SET_GPR_U32(ctx, 31, 0x154AC0u);
    ctx->pc = 0x154ABCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AB8u;
    // 0x154abc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABE98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABE98u, 0x154AB8u, 0x154AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AC0u;
label_154ac0:
    // 0x154ac0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x154ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ac4: 0xc0aafd2  jal         func_2ABF48
    ctx->pc = 0x154AC4u;
    SET_GPR_U32(ctx, 31, 0x154ACCu);
    ctx->pc = 0x154AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AC4u;
    // 0x154ac8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABF48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABF48u, 0x154AC4u, 0x154ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154ACCu;
label_154acc:
    // 0x154acc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x154ACCu;
    {
        const bool branch_taken_0x154acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154ACCu;
        // 0x154ad0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154acc) {
            ctx->pc = 0x154AE8u;
            goto label_154ae8;
        }
    }
    ctx->pc = 0x154AD4u;
    // 0x154ad4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x154ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x154ad8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154AD8u;
    SET_GPR_U32(ctx, 31, 0x154AE0u);
    ctx->pc = 0x154ADCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AD8u;
    // 0x154adc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154AD8u, 0x154AE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AE0u;
label_154ae0:
    // 0x154ae0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x154AE0u;
    {
        const bool branch_taken_0x154ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x154AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154AE0u;
        // 0x154ae4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ae0) {
            ctx->pc = 0x154AF4u;
            goto label_154af4;
        }
    }
    ctx->pc = 0x154AE8u;
label_154ae8:
    // 0x154ae8: 0xc0aafac  jal         func_2ABEB0
    ctx->pc = 0x154AE8u;
    SET_GPR_U32(ctx, 31, 0x154AF0u);
    ctx->pc = 0x154AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x154AE8u;
    // 0x154aec: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ABEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ABEB0u, 0x154AE8u, 0x154AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x154AF0u;
label_154af0:
    // 0x154af0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x154af0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_154af4:
    // 0x154af4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x154af4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x154af8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x154af8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x154afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x154afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x154b00: 0x3e00008  jr          $ra
    ctx->pc = 0x154B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x154B00u;
        // 0x154b04: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x154B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x154B08u;
}
