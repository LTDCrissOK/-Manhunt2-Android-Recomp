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

// Function: sub_0016EB30
// Address: 0x16eb30 - 0x16eca0
void sub_0016EB30_0x16eb30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016EB30_0x16eb30");
#endif

    switch (ctx->pc) {
        case 0x16eb80u: goto label_16eb80;
        case 0x16eb9cu: goto label_16eb9c;
        case 0x16ebb8u: goto label_16ebb8;
        case 0x16ebc8u: goto label_16ebc8;
        case 0x16ebd0u: goto label_16ebd0;
        case 0x16ec28u: goto label_16ec28;
        case 0x16ec64u: goto label_16ec64;
        default: break;
    }

    ctx->pc = 0x16eb30u;

    // 0x16eb30: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x16eb30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x16eb34: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x16eb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x16eb38: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x16eb38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x16eb3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16eb3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb40: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x16eb40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x16eb44: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x16eb44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x16eb48: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x16eb48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
    // 0x16eb4c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x16eb4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x16eb50: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x16eb50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x16eb54: 0x8e22010c  lw          $v0, 0x10C($s1)
    ctx->pc = 0x16eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
    // 0x16eb58: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x16EB58u;
    {
        const bool branch_taken_0x16eb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB58u;
        // 0x16eb5c: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb58) {
            ctx->pc = 0x16EC50u;
            goto label_16ec50;
        }
    }
    ctx->pc = 0x16EB60u;
    // 0x16eb60: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x16eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x16eb64: 0x3c020049  lui         $v0, 0x49
    ctx->pc = 0x16eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)73 << 16));
    // 0x16eb68: 0x2452b060  addiu       $s2, $v0, -0x4FA0
    ctx->pc = 0x16eb68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946912));
    // 0x16eb6c: 0x8e2600fc  lw          $a2, 0xFC($s1)
    ctx->pc = 0x16eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x16eb70: 0x8c700010  lw          $s0, 0x10($v1)
    ctx->pc = 0x16eb70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16eb74: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16eb74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb78: 0xc04ae20  jal         func_12B880
    ctx->pc = 0x16EB78u;
    SET_GPR_U32(ctx, 31, 0x16EB80u);
    ctx->pc = 0x16EB7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB78u;
    // 0x16eb7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12B880u, 0x16EB78u, 0x16EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB80u;
label_16eb80:
    // 0x16eb80: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x16EB80u;
    {
        const bool branch_taken_0x16eb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EB80u;
        // 0x16eb84: 0x3c070049  lui         $a3, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eb80) {
            ctx->pc = 0x16EC50u;
            goto label_16ec50;
        }
    }
    ctx->pc = 0x16EB88u;
    // 0x16eb88: 0x8e2600fc  lw          $a2, 0xFC($s1)
    ctx->pc = 0x16eb88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x16eb8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16eb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16eb90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eb94: 0xc04ae84  jal         func_12BA10
    ctx->pc = 0x16EB94u;
    SET_GPR_U32(ctx, 31, 0x16EB9Cu);
    ctx->pc = 0x16EB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EB94u;
    // 0x16eb98: 0x24e78738  addiu       $a3, $a3, -0x78C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936376));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12BA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12BA10u, 0x16EB94u, 0x16EB9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EB9Cu;
label_16eb9c:
    // 0x16eb9c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16eb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16eba0: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
    ctx->pc = 0x16EBA0u;
    {
        const bool branch_taken_0x16eba0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBA0u;
        // 0x16eba4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16eba0) {
            ctx->pc = 0x16EC50u;
            goto label_16ec50;
        }
    }
    ctx->pc = 0x16EBA8u;
    // 0x16eba8: 0x8e120008  lw          $s2, 0x8($s0)
    ctx->pc = 0x16eba8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16ebac: 0x8e130004  lw          $s3, 0x4($s0)
    ctx->pc = 0x16ebacu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16ebb0: 0xc045e9c  jal         func_117A70
    ctx->pc = 0x16EBB0u;
    SET_GPR_U32(ctx, 31, 0x16EBB8u);
    ctx->pc = 0x16EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EBB0u;
    // 0x16ebb4: 0x8e140010  lw          $s4, 0x10($s0) (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117A70u, 0x16EBB0u, 0x16EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBB8u;
label_16ebb8:
    // 0x16ebb8: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16ebb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16ebbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16ebbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ebc0: 0xc042128  jal         func_1084A0
    ctx->pc = 0x16EBC0u;
    SET_GPR_U32(ctx, 31, 0x16EBC8u);
    ctx->pc = 0x16EBC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EBC0u;
    // 0x16ebc4: 0x24848758  addiu       $a0, $a0, -0x78A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1084A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1084A0u, 0x16EBC0u, 0x16EBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBC8u;
label_16ebc8:
    // 0x16ebc8: 0xc05a618  jal         func_169860
    ctx->pc = 0x16EBC8u;
    SET_GPR_U32(ctx, 31, 0x16EBD0u);
    ctx->pc = 0x16EBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EBC8u;
    // 0x16ebcc: 0x8e24005c  lw          $a0, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x169860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x169860u, 0x16EBC8u, 0x16EBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EBD0u;
label_16ebd0:
    // 0x16ebd0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x16ebd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x16ebd4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ebd8: 0x24849a08  addiu       $a0, $a0, -0x65F8
    ctx->pc = 0x16ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    // 0x16ebdc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16ebdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16ebe0: 0x8c43020c  lw          $v1, 0x20C($v0)
    ctx->pc = 0x16ebe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x16ebe4: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x16ebe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x16ebe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ebe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ebec: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16ebecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16ebf0: 0x8c820108  lw          $v0, 0x108($a0)
    ctx->pc = 0x16ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x16ebf4: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EBF4u;
    {
        const bool branch_taken_0x16ebf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ebf4) {
            ctx->pc = 0x16EBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EBF4u;
            // 0x16ebf8: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EC04u;
            goto label_16ec04;
        }
    }
    ctx->pc = 0x16EBFCu;
    // 0x16ebfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x16EBFCu;
    {
        const bool branch_taken_0x16ebfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EBFCu;
        // 0x16ec00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ebfc) {
            ctx->pc = 0x16EC0Cu;
            goto label_16ec0c;
        }
    }
    ctx->pc = 0x16EC04u;
label_16ec04:
    // 0x16ec04: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16ec04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ec08: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x16ec08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_16ec0c:
    // 0x16ec0c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x16ec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x16ec10: 0x16420003  bne         $s2, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16EC10u;
    {
        const bool branch_taken_0x16ec10 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x16EC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC10u;
        // 0x16ec14: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec10) {
            ctx->pc = 0x16EC20u;
            goto label_16ec20;
        }
    }
    ctx->pc = 0x16EC18u;
    // 0x16ec18: 0x12720018  beq         $s3, $s2, . + 4 + (0x18 << 2)
    ctx->pc = 0x16EC18u;
    {
        const bool branch_taken_0x16ec18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x16EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC18u;
        // 0x16ec1c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec18) {
            ctx->pc = 0x16EC7Cu;
            goto label_16ec7c;
        }
    }
    ctx->pc = 0x16EC20u;
label_16ec20:
    // 0x16ec20: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x16EC20u;
    SET_GPR_U32(ctx, 31, 0x16EC28u);
    ctx->pc = 0x16EC24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EC20u;
    // 0x16ec24: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x16EC20u, 0x16EC28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC28u;
label_16ec28:
    // 0x16ec28: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x16ec28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x16ec2c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x16ec2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x16ec30: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x16ec30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x16ec34: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x16ec34u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x16ec38: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x16ec38u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x16ec3c: 0x4604201c  madd.s      $f0, $f4, $f4
    ctx->pc = 0x16ec3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x16ec40: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16ec40u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ec44: 0x0  nop
    ctx->pc = 0x16ec44u;
    // NOP
    // 0x16ec48: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x16EC48u;
    {
        const bool branch_taken_0x16ec48 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ec48) {
            ctx->pc = 0x16EC4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EC48u;
            // 0x16ec4c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EC58u;
            goto label_16ec58;
        }
    }
    ctx->pc = 0x16EC50u;
label_16ec50:
    // 0x16ec50: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x16EC50u;
    {
        const bool branch_taken_0x16ec50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC50u;
        // 0x16ec54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ec50) {
            ctx->pc = 0x16EC7Cu;
            goto label_16ec7c;
        }
    }
    ctx->pc = 0x16EC58u;
label_16ec58:
    // 0x16ec58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ec58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec5c: 0xc05bb28  jal         func_16ECA0
    ctx->pc = 0x16EC5Cu;
    SET_GPR_U32(ctx, 31, 0x16EC64u);
    ctx->pc = 0x16EC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16EC5Cu;
    // 0x16ec60: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16ECA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16ECA0u, 0x16EC5Cu, 0x16EC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16EC64u;
label_16ec64:
    // 0x16ec64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x16ec64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ec68: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x16EC68u;
    {
        const bool branch_taken_0x16ec68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ec68) {
            ctx->pc = 0x16EC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16EC68u;
            // 0x16ec6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16EC7Cu;
            goto label_16ec7c;
        }
    }
    ctx->pc = 0x16EC70u;
    // 0x16ec70: 0x8e2200fc  lw          $v0, 0xFC($s1)
    ctx->pc = 0x16ec70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 252)));
    // 0x16ec74: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x16ec74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x16ec78: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x16ec78u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_16ec7c:
    // 0x16ec7c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x16ec7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16ec80: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x16ec80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x16ec84: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x16ec84u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16ec88: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x16ec88u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x16ec8c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x16ec8cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16ec90: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x16ec90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x16ec94: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x16ec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x16ec98: 0x3e00008  jr          $ra
    ctx->pc = 0x16EC98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16EC98u;
        // 0x16ec9c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16EC98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16ECA0u;
}
