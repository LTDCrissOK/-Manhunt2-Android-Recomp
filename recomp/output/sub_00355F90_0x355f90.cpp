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

// Function: sub_00355F90
// Address: 0x355f90 - 0x356018
void sub_00355F90_0x355f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00355F90_0x355f90");
#endif

    switch (ctx->pc) {
        case 0x355fc4u: goto label_355fc4;
        case 0x355fd8u: goto label_355fd8;
        case 0x355fe4u: goto label_355fe4;
        case 0x355fecu: goto label_355fec;
        case 0x355ff4u: goto label_355ff4;
        default: break;
    }

    ctx->pc = 0x355f90u;

    // 0x355f90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x355f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x355f94: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x355f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x355f98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x355f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x355f9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x355f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x355fa0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x355fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x355fa4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x355FA4u;
    {
        const bool branch_taken_0x355fa4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x355FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355FA4u;
        // 0x355fa8: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355fa4) {
            ctx->pc = 0x355FFCu;
            goto label_355ffc;
        }
    }
    ctx->pc = 0x355FACu;
    // 0x355fac: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x355FACu;
    {
        const bool branch_taken_0x355fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x355FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355FACu;
        // 0x355fb0: 0x3c050047  lui         $a1, 0x47 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355fac) {
            ctx->pc = 0x355FFCu;
            goto label_355ffc;
        }
    }
    ctx->pc = 0x355FB4u;
    // 0x355fb4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x355fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x355fb8: 0x2484bec8  addiu       $a0, $a0, -0x4138
    ctx->pc = 0x355fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950600));
    // 0x355fbc: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x355FBCu;
    SET_GPR_U32(ctx, 31, 0x355FC4u);
    ctx->pc = 0x355FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355FBCu;
    // 0x355fc0: 0x24a568f0  addiu       $a1, $a1, 0x68F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26864));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x355FBCu, 0x355FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FC4u;
label_355fc4:
    // 0x355fc4: 0x24110018  addiu       $s1, $zero, 0x18
    ctx->pc = 0x355fc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x355fc8: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x355fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x355fcc: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x355fccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x355fd0: 0x2450bed0  addiu       $s0, $v0, -0x4130
    ctx->pc = 0x355fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950608));
    // 0x355fd4: 0x0  nop
    ctx->pc = 0x355fd4u;
    // NOP
label_355fd8:
    // 0x355fd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x355fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x355fdc: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x355FDCu;
    SET_GPR_U32(ctx, 31, 0x355FE4u);
    ctx->pc = 0x355FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355FDCu;
    // 0x355fe0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x355FDCu, 0x355FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FE4u;
label_355fe4:
    // 0x355fe4: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x355FE4u;
    SET_GPR_U32(ctx, 31, 0x355FECu);
    ctx->pc = 0x355FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355FE4u;
    // 0x355fe8: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x355FE4u, 0x355FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FECu;
label_355fec:
    // 0x355fec: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x355FECu;
    SET_GPR_U32(ctx, 31, 0x355FF4u);
    ctx->pc = 0x355FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x355FECu;
    // 0x355ff0: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x355FECu, 0x355FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x355FF4u;
label_355ff4:
    // 0x355ff4: 0x1632fff8  bne         $s1, $s2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x355FF4u;
    {
        const bool branch_taken_0x355ff4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 18));
        ctx->pc = 0x355FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x355FF4u;
        // 0x355ff8: 0x26100040  addiu       $s0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x355ff4) {
            ctx->pc = 0x355FD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_355fd8;
        }
    }
    ctx->pc = 0x355FFCu;
label_355ffc:
    // 0x355ffc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x355ffcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x356000: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x356000u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x356004: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x356004u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x356008: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x356008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x35600c: 0x3e00008  jr          $ra
    ctx->pc = 0x35600Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35600Cu;
        // 0x356010: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35600Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356014u;
    // 0x356014: 0x0  nop
    ctx->pc = 0x356014u;
    // NOP
    ctx->pc = 0x356018u;
}
