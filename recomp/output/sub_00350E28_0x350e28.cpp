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

// Function: sub_00350E28
// Address: 0x350e28 - 0x350f38
void sub_00350E28_0x350e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350E28_0x350e28");
#endif

    switch (ctx->pc) {
        case 0x350e44u: goto label_350e44;
        case 0x350e58u: goto label_350e58;
        case 0x350e84u: goto label_350e84;
        case 0x350ec0u: goto label_350ec0;
        case 0x350efcu: goto label_350efc;
        case 0x350f0cu: goto label_350f0c;
        case 0x350f18u: goto label_350f18;
        default: break;
    }

    ctx->pc = 0x350e28u;

    // 0x350e28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x350e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x350e2c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x350e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x350e30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x350e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x350e34: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x350e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x350e38: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x350e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x350e3c: 0xc0d22dc  jal         func_348B70
    ctx->pc = 0x350E3Cu;
    SET_GPR_U32(ctx, 31, 0x350E44u);
    ctx->pc = 0x350E40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E3Cu;
    // 0x350e40: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348B70u, 0x350E3Cu, 0x350E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E44u;
label_350e44:
    // 0x350e44: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x350e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x350e48: 0x10430021  beq         $v0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x350E48u;
    {
        const bool branch_taken_0x350e48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x350E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E48u;
        // 0x350e4c: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e48) {
            ctx->pc = 0x350ED0u;
            goto label_350ed0;
        }
    }
    ctx->pc = 0x350E50u;
    // 0x350e50: 0xc0d22dc  jal         func_348B70
    ctx->pc = 0x350E50u;
    SET_GPR_U32(ctx, 31, 0x350E58u);
    ctx->pc = 0x350E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E50u;
    // 0x350e54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x348B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x348B70u, 0x350E50u, 0x350E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E58u;
label_350e58:
    // 0x350e58: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x350e58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x350e5c: 0x1043001b  beq         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x350E5Cu;
    {
        const bool branch_taken_0x350e5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x350E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350E5Cu;
        // 0x350e60: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350e5c) {
            ctx->pc = 0x350ECCu;
            goto label_350ecc;
        }
    }
    ctx->pc = 0x350E64u;
    // 0x350e64: 0x8e230038  lw          $v1, 0x38($s1)
    ctx->pc = 0x350e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x350e68: 0x8c47bd48  lw          $a3, -0x42B8($v0)
    ctx->pc = 0x350e68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950216)));
    // 0x350e6c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x350e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350e70: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x350e70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x350e74: 0x8ce50100  lw          $a1, 0x100($a3)
    ctx->pc = 0x350e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 256)));
    // 0x350e78: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x350e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x350e7c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x350E7Cu;
    SET_GPR_U32(ctx, 31, 0x350E84u);
    ctx->pc = 0x350E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350E7Cu;
    // 0x350e80: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x350E7Cu, 0x350E84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350E84u;
label_350e84:
    // 0x350e84: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x350e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x350e88: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x350e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x350e8c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x350e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x350e90: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x350e90u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x350e94: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x350e94u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x350e98: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x350e98u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x350e9c: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x350e9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x350ea0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x350ea0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x350ea4: 0x0  nop
    ctx->pc = 0x350ea4u;
    // NOP
    // 0x350ea8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x350ea8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x350eac: 0x0  nop
    ctx->pc = 0x350eacu;
    // NOP
    // 0x350eb0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x350EB0u;
    {
        const bool branch_taken_0x350eb0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x350EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EB0u;
        // 0x350eb4: 0x3c03005c  lui         $v1, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350eb0) {
            ctx->pc = 0x350ED0u;
            goto label_350ed0;
        }
    }
    ctx->pc = 0x350EB8u;
    // 0x350eb8: 0xc0a03d8  jal         func_280F60
    ctx->pc = 0x350EB8u;
    SET_GPR_U32(ctx, 31, 0x350EC0u);
    ctx->pc = 0x280F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x280F60u, 0x350EB8u, 0x350EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EC0u;
label_350ec0:
    // 0x350ec0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x350ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x350ec4: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x350EC4u;
    {
        const bool branch_taken_0x350ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x350EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EC4u;
        // 0x350ec8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ec4) {
            ctx->pc = 0x350F1Cu;
            goto label_350f1c;
        }
    }
    ctx->pc = 0x350ECCu;
label_350ecc:
    // 0x350ecc: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x350eccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
label_350ed0:
    // 0x350ed0: 0x8c62be70  lw          $v0, -0x4190($v1)
    ctx->pc = 0x350ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950512)));
    // 0x350ed4: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x350ed4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x350ed8: 0x28420032  slti        $v0, $v0, 0x32
    ctx->pc = 0x350ed8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)50) ? 1 : 0);
    // 0x350edc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x350EDCu;
    {
        const bool branch_taken_0x350edc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x350EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EDCu;
        // 0x350ee0: 0x2464be70  addiu       $a0, $v1, -0x4190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350edc) {
            ctx->pc = 0x350F0Cu;
            goto label_350f0c;
        }
    }
    ctx->pc = 0x350EE4u;
    // 0x350ee4: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x350ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x350ee8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x350EE8u;
    {
        const bool branch_taken_0x350ee8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x350EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EE8u;
        // 0x350eec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350ee8) {
            ctx->pc = 0x350EF4u;
            goto label_350ef4;
        }
    }
    ctx->pc = 0x350EF0u;
    // 0x350ef0: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x350ef0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_350ef4:
    // 0x350ef4: 0xc0fbc50  jal         func_3EF140
    ctx->pc = 0x350EF4u;
    SET_GPR_U32(ctx, 31, 0x350EFCu);
    ctx->pc = 0x3EF140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF140u, 0x350EF4u, 0x350EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350EFCu;
label_350efc:
    // 0x350efc: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x350EFCu;
    {
        const bool branch_taken_0x350efc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x350F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350EFCu;
        // 0x350f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x350efc) {
            ctx->pc = 0x350F0Cu;
            goto label_350f0c;
        }
    }
    ctx->pc = 0x350F04u;
    // 0x350f04: 0xc0d1e40  jal         func_347900
    ctx->pc = 0x350F04u;
    SET_GPR_U32(ctx, 31, 0x350F0Cu);
    ctx->pc = 0x350F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F04u;
    // 0x350f08: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x347900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x347900u, 0x350F04u, 0x350F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F0Cu;
label_350f0c:
    // 0x350f0c: 0x2644be70  addiu       $a0, $s2, -0x4190
    ctx->pc = 0x350f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294950512));
    // 0x350f10: 0xc0fbc74  jal         func_3EF1D0
    ctx->pc = 0x350F10u;
    SET_GPR_U32(ctx, 31, 0x350F18u);
    ctx->pc = 0x350F14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x350F10u;
    // 0x350f14: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3EF1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3EF1D0u, 0x350F10u, 0x350F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x350F18u;
label_350f18:
    // 0x350f18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x350f18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_350f1c:
    // 0x350f1c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x350f1cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x350f20: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x350f20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x350f24: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x350f24u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x350f28: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x350f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x350f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x350F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x350F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x350F2Cu;
        // 0x350f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x350F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x350F34u;
    // 0x350f34: 0x0  nop
    ctx->pc = 0x350f34u;
    // NOP
    ctx->pc = 0x350f38u;
}
