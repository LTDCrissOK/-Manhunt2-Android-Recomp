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

// Function: sub_00113F00
// Address: 0x113f00 - 0x114008
void sub_00113F00_0x113f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113F00_0x113f00");
#endif

    switch (ctx->pc) {
        case 0x113f64u: goto label_113f64;
        case 0x113f7cu: goto label_113f7c;
        case 0x113fb8u: goto label_113fb8;
        case 0x113fc8u: goto label_113fc8;
        case 0x113fd8u: goto label_113fd8;
        case 0x113fecu: goto label_113fec;
        default: break;
    }

    ctx->pc = 0x113f00u;

    // 0x113f00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x113f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x113f04: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x113f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x113f08: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x113f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x113f0c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113f0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f10: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x113f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x113f14: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x113f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x113f18: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x113f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x113f1c: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x113F1Cu;
    {
        const bool branch_taken_0x113f1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F1Cu;
        // 0x113f20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f1c) {
            ctx->pc = 0x113FF0u;
            goto label_113ff0;
        }
    }
    ctx->pc = 0x113F24u;
    // 0x113f24: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x113f24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x113f28: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x113f28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x113f2c: 0x24429a08  addiu       $v0, $v0, -0x65F8
    ctx->pc = 0x113f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941192));
    // 0x113f30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x113f30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x113f34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x113f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x113f38: 0x8c420108  lw          $v0, 0x108($v0)
    ctx->pc = 0x113f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 264)));
    // 0x113f3c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x113F3Cu;
    {
        const bool branch_taken_0x113f3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113f3c) {
            ctx->pc = 0x113F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113F3Cu;
            // 0x113f40: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113F4Cu;
            goto label_113f4c;
        }
    }
    ctx->pc = 0x113F44u;
    // 0x113f44: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x113F44u;
    {
        const bool branch_taken_0x113f44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F44u;
        // 0x113f48: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f44) {
            ctx->pc = 0x113F54u;
            goto label_113f54;
        }
    }
    ctx->pc = 0x113F4Cu;
label_113f4c:
    // 0x113f4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x113f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x113f50: 0x24720070  addiu       $s2, $v1, 0x70
    ctx->pc = 0x113f50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_113f54:
    // 0x113f54: 0x12400026  beqz        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x113F54u;
    {
        const bool branch_taken_0x113f54 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F54u;
        // 0x113f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f54) {
            ctx->pc = 0x113FF0u;
            goto label_113ff0;
        }
    }
    ctx->pc = 0x113F5Cu;
    // 0x113f5c: 0xc045002  jal         func_114008
    ctx->pc = 0x113F5Cu;
    SET_GPR_U32(ctx, 31, 0x113F64u);
    ctx->pc = 0x113F60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F5Cu;
    // 0x113f60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114008u, 0x113F5Cu, 0x113F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F64u;
label_113f64:
    // 0x113f64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x113f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f68: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x113F68u;
    {
        const bool branch_taken_0x113f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x113F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113F68u;
        // 0x113f6c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113f68) {
            ctx->pc = 0x113FECu;
            goto label_113fec;
        }
    }
    ctx->pc = 0x113F70u;
    // 0x113f70: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x113f70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113f74: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x113F74u;
    SET_GPR_U32(ctx, 31, 0x113F7Cu);
    ctx->pc = 0x113F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113F74u;
    // 0x113f78: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x113F74u, 0x113F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113F7Cu;
label_113f7c:
    // 0x113f7c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x113f7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x113f80: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x113f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x113f84: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x113f84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x113f88: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x113f88u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x113f8c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x113f8cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x113f90: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x113f90u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x113f94: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x113f94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x113f98: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x113f98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x113f9c: 0x0  nop
    ctx->pc = 0x113f9cu;
    // NOP
    // 0x113fa0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x113fa0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x113fa4: 0x0  nop
    ctx->pc = 0x113fa4u;
    // NOP
    // 0x113fa8: 0x4500000d  bc1f        . + 4 + (0xD << 2)
    ctx->pc = 0x113FA8u;
    {
        const bool branch_taken_0x113fa8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x113FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FA8u;
        // 0x113fac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fa8) {
            ctx->pc = 0x113FE0u;
            goto label_113fe0;
        }
    }
    ctx->pc = 0x113FB0u;
    // 0x113fb0: 0xc045070  jal         func_1141C0
    ctx->pc = 0x113FB0u;
    SET_GPR_U32(ctx, 31, 0x113FB8u);
    ctx->pc = 0x113FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FB0u;
    // 0x113fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1141C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1141C0u, 0x113FB0u, 0x113FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FB8u;
label_113fb8:
    // 0x113fb8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x113FB8u;
    {
        const bool branch_taken_0x113fb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x113fb8) {
            ctx->pc = 0x113FD0u;
            goto label_113fd0;
        }
    }
    ctx->pc = 0x113FC0u;
    // 0x113fc0: 0xc04507e  jal         func_1141F8
    ctx->pc = 0x113FC0u;
    SET_GPR_U32(ctx, 31, 0x113FC8u);
    ctx->pc = 0x113FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FC0u;
    // 0x113fc4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1141F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1141F8u, 0x113FC0u, 0x113FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FC8u;
label_113fc8:
    // 0x113fc8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x113FC8u;
    {
        const bool branch_taken_0x113fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FC8u;
        // 0x113fcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fc8) {
            ctx->pc = 0x113FF0u;
            goto label_113ff0;
        }
    }
    ctx->pc = 0x113FD0u;
label_113fd0:
    // 0x113fd0: 0xc044f66  jal         func_113D98
    ctx->pc = 0x113FD0u;
    SET_GPR_U32(ctx, 31, 0x113FD8u);
    ctx->pc = 0x113FD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FD0u;
    // 0x113fd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113D98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x113D98u, 0x113FD0u, 0x113FD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FD8u;
label_113fd8:
    // 0x113fd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x113FD8u;
    {
        const bool branch_taken_0x113fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113FD8u;
        // 0x113fdc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113fd8) {
            ctx->pc = 0x113FF0u;
            goto label_113ff0;
        }
    }
    ctx->pc = 0x113FE0u;
label_113fe0:
    // 0x113fe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x113fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113fe4: 0xc04500c  jal         func_114030
    ctx->pc = 0x113FE4u;
    SET_GPR_U32(ctx, 31, 0x113FECu);
    ctx->pc = 0x113FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113FE4u;
    // 0x113fe8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x114030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x114030u, 0x113FE4u, 0x113FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113FECu;
label_113fec:
    // 0x113fec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x113fecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113ff0:
    // 0x113ff0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x113ff0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x113ff4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x113ff4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x113ff8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x113ff8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x113ffc: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x113ffcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x114000: 0x3e00008  jr          $ra
    ctx->pc = 0x114000u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x114004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x114000u;
        // 0x114004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x114000u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x114008u;
}
