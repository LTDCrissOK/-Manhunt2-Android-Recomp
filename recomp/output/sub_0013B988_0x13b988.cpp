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

// Function: sub_0013B988
// Address: 0x13b988 - 0x13baa0
void sub_0013B988_0x13b988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B988_0x13b988");
#endif

    switch (ctx->pc) {
        case 0x13b9f8u: goto label_13b9f8;
        case 0x13ba3cu: goto label_13ba3c;
        case 0x13ba5cu: goto label_13ba5c;
        case 0x13ba68u: goto label_13ba68;
        default: break;
    }

    ctx->pc = 0x13b988u;

    // 0x13b988: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13b988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13b98c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x13b98cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b990: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x13b990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x13b994: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x13b994u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x13b998: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x13b998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x13b99c: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x13b99cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x13b9a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13b9a4: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x13b9a4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x13b9a8: 0x90c3046c  lbu         $v1, 0x46C($a2)
    ctx->pc = 0x13b9a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1132)));
    // 0x13b9ac: 0x8cc50004  lw          $a1, 0x4($a2)
    ctx->pc = 0x13b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x13b9b0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13b9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13b9b4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13b9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13b9b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13b9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13b9bc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13b9c0: 0x821821  addu        $v1, $a0, $v0
    ctx->pc = 0x13b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x13b9c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13b9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9c8: 0x8c700108  lw          $s0, 0x108($v1)
    ctx->pc = 0x13b9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x13b9cc: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x13B9CCu;
    {
        const bool branch_taken_0x13b9cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9CCu;
        // 0x13b9d0: 0x8c82020c  lw          $v0, 0x20C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9cc) {
            ctx->pc = 0x13BA18u;
            goto label_13ba18;
        }
    }
    ctx->pc = 0x13B9D4u;
    // 0x13b9d4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x13B9D4u;
    {
        const bool branch_taken_0x13b9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13B9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9D4u;
        // 0x13b9d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9d4) {
            ctx->pc = 0x13BA88u;
            goto label_13ba88;
        }
    }
    ctx->pc = 0x13B9DCu;
    // 0x13b9dc: 0x8e0200bc  lw          $v0, 0xBC($s0)
    ctx->pc = 0x13b9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 188)));
    // 0x13b9e0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x13b9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x13b9e4: 0x3842001f  xori        $v0, $v0, 0x1F
    ctx->pc = 0x13b9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)31);
    // 0x13b9e8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x13B9E8u;
    {
        const bool branch_taken_0x13b9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13B9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9E8u;
        // 0x13b9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9e8) {
            ctx->pc = 0x13BA88u;
            goto label_13ba88;
        }
    }
    ctx->pc = 0x13B9F0u;
    // 0x13b9f0: 0xc04eb10  jal         func_13AC40
    ctx->pc = 0x13B9F0u;
    SET_GPR_U32(ctx, 31, 0x13B9F8u);
    ctx->pc = 0x13B9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B9F0u;
    // 0x13b9f4: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13AC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13AC40u, 0x13B9F0u, 0x13B9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13B9F8u;
label_13b9f8:
    // 0x13b9f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13b9f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b9fc: 0x10600022  beqz        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x13B9FCu;
    {
        const bool branch_taken_0x13b9fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B9FCu;
        // 0x13ba00: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13b9fc) {
            ctx->pc = 0x13BA88u;
            goto label_13ba88;
        }
    }
    ctx->pc = 0x13BA04u;
    // 0x13ba04: 0x8c6200bc  lw          $v0, 0xBC($v1)
    ctx->pc = 0x13ba04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 188)));
    // 0x13ba08: 0x3042020f  andi        $v0, $v0, 0x20F
    ctx->pc = 0x13ba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)527);
    // 0x13ba0c: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x13ba0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x13ba10: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13BA10u;
    {
        const bool branch_taken_0x13ba10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ba10) {
            ctx->pc = 0x13BA14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13BA10u;
            // 0x13ba14: 0x8c630104  lw          $v1, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13BA20u;
            goto label_13ba20;
        }
    }
    ctx->pc = 0x13BA18u;
label_13ba18:
    // 0x13ba18: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x13BA18u;
    {
        const bool branch_taken_0x13ba18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13BA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA18u;
        // 0x13ba1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba18) {
            ctx->pc = 0x13BA88u;
            goto label_13ba88;
        }
    }
    ctx->pc = 0x13BA20u;
label_13ba20:
    // 0x13ba20: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x13ba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba24: 0x8e020104  lw          $v0, 0x104($s0)
    ctx->pc = 0x13ba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 260)));
    // 0x13ba28: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x13ba28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13ba2c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x13ba2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13ba30: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x13ba30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x13ba34: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x13BA34u;
    SET_GPR_U32(ctx, 31, 0x13BA3Cu);
    ctx->pc = 0x13BA38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA34u;
    // 0x13ba38: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x13BA34u, 0x13BA3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA3Cu;
label_13ba3c:
    // 0x13ba3c: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x13ba3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13ba40: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x13ba40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x13ba44: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x13ba44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x13ba48: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x13ba48u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x13ba4c: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x13ba4cu;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x13ba50: 0x4604251c  madd.s      $f20, $f4, $f4
    ctx->pc = 0x13ba50u;
    ctx->f[20] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x13ba54: 0xc0964b6  jal         func_2592D8
    ctx->pc = 0x13BA54u;
    SET_GPR_U32(ctx, 31, 0x13BA5Cu);
    ctx->pc = 0x13BA58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA54u;
    // 0x13ba58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2592D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2592D8u, 0x13BA54u, 0x13BA5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA5Cu;
label_13ba5c:
    // 0x13ba5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13ba5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ba60: 0xc0964be  jal         func_2592F8
    ctx->pc = 0x13BA60u;
    SET_GPR_U32(ctx, 31, 0x13BA68u);
    ctx->pc = 0x13BA64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13BA60u;
    // 0x13ba64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2592F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2592F8u, 0x13BA60u, 0x13BA68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13BA68u;
label_13ba68:
    // 0x13ba68: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x13ba68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x13ba6c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13ba6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13ba70: 0x0  nop
    ctx->pc = 0x13ba70u;
    // NOP
    // 0x13ba74: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x13ba74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13ba78: 0x0  nop
    ctx->pc = 0x13ba78u;
    // NOP
    // 0x13ba7c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x13BA7Cu;
    {
        const bool branch_taken_0x13ba7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x13BA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA7Cu;
        // 0x13ba80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ba7c) {
            ctx->pc = 0x13BA88u;
            goto label_13ba88;
        }
    }
    ctx->pc = 0x13BA84u;
    // 0x13ba84: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x13ba84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_13ba88:
    // 0x13ba88: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x13ba88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13ba8c: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x13ba8cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x13ba90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13ba94: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x13ba94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13ba98: 0x3e00008  jr          $ra
    ctx->pc = 0x13BA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13BA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13BA98u;
        // 0x13ba9c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13BA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13BAA0u;
}
