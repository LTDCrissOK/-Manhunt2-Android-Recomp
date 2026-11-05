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

// Function: sub_0017BEB0
// Address: 0x17beb0 - 0x17bfd0
void sub_0017BEB0_0x17beb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017BEB0_0x17beb0");
#endif

    switch (ctx->pc) {
        case 0x17bf44u: goto label_17bf44;
        case 0x17bf84u: goto label_17bf84;
        case 0x17bf8cu: goto label_17bf8c;
        case 0x17bf94u: goto label_17bf94;
        case 0x17bf9cu: goto label_17bf9c;
        case 0x17bfa4u: goto label_17bfa4;
        case 0x17bfb4u: goto label_17bfb4;
        default: break;
    }

    ctx->pc = 0x17beb0u;

    // 0x17beb0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17beb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17beb4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x17beb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x17beb8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x17beb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x17bebc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17bebcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bec0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x17bec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x17bec4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17bec4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bec8: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x17bec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x17becc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x17beccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x17bed0: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x17BED0u;
    {
        const bool branch_taken_0x17bed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BED0u;
        // 0x17bed4: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bed0) {
            ctx->pc = 0x17BFB4u;
            goto label_17bfb4;
        }
    }
    ctx->pc = 0x17BED8u;
    // 0x17bed8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17bedc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x17bedcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bee0: 0x8c4294cc  lw          $v0, -0x6B34($v0)
    ctx->pc = 0x17bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F94CCu));
    // 0x17bee4: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17BEE4u;
    {
        const bool branch_taken_0x17bee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17bee4) {
            ctx->pc = 0x17BF84u;
            goto label_17bf84;
        }
    }
    ctx->pc = 0x17BEECu;
    // 0x17beec: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x17beecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x17bef0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x17bef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x17bef4: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x17BEF4u;
    {
        const bool branch_taken_0x17bef4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17BEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BEF4u;
        // 0x17bef8: 0x3c030049  lui         $v1, 0x49 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)73 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bef4) {
            ctx->pc = 0x17BF84u;
            goto label_17bf84;
        }
    }
    ctx->pc = 0x17BEFCu;
    // 0x17befc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x17befcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x17bf00: 0x24639a08  addiu       $v1, $v1, -0x65F8
    ctx->pc = 0x17bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941192));
    // 0x17bf04: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x17bf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x17bf08: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17bf0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17bf10: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x17bf10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
    // 0x17bf14: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17BF14u;
    {
        const bool branch_taken_0x17bf14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17bf14) {
            ctx->pc = 0x17BF18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17BF14u;
            // 0x17bf18: 0x8c420104  lw          $v0, 0x104($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17BF24u;
            goto label_17bf24;
        }
    }
    ctx->pc = 0x17BF1Cu;
    // 0x17bf1c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17BF1Cu;
    {
        const bool branch_taken_0x17bf1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17BF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF1Cu;
        // 0x17bf20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf1c) {
            ctx->pc = 0x17BF2Cu;
            goto label_17bf2c;
        }
    }
    ctx->pc = 0x17BF24u;
label_17bf24:
    // 0x17bf24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17bf24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bf28: 0x24650070  addiu       $a1, $v1, 0x70
    ctx->pc = 0x17bf28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_17bf2c:
    // 0x17bf2c: 0x8cc394cc  lw          $v1, -0x6B34($a2)
    ctx->pc = 0x17bf2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294939852)));
    // 0x17bf30: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x17bf30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bf34: 0x8c620104  lw          $v0, 0x104($v1)
    ctx->pc = 0x17bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x17bf38: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x17bf38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x17bf3c: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x17BF3Cu;
    SET_GPR_U32(ctx, 31, 0x17BF44u);
    ctx->pc = 0x17BF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF3Cu;
    // 0x17bf40: 0x24c60070  addiu       $a2, $a2, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x17BF3Cu, 0x17BF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF44u;
label_17bf44:
    // 0x17bf44: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x17bf44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x17bf48: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x17bf48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x17bf4c: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x17bf4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x17bf50: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x17bf50u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x17bf54: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x17bf54u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x17bf58: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x17bf58u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x17bf5c: 0x46010044  c1          0x10044
    ctx->pc = 0x17bf5cu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x17bf60: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x17bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x17bf64: 0xc44094d0  lwc1        $f0, -0x6B30($v0)
    ctx->pc = 0x17bf64u;
    { uint32_t bits = FAST_READ32(0x3F94D0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17bf68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17bf68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17bf6c: 0x0  nop
    ctx->pc = 0x17bf6cu;
    // NOP
    // 0x17bf70: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x17BF70u;
    {
        const bool branch_taken_0x17bf70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17BF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BF70u;
        // 0x17bf74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17bf70) {
            ctx->pc = 0x17BF84u;
            goto label_17bf84;
        }
    }
    ctx->pc = 0x17BF78u;
    // 0x17bf78: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17bf78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17bf7c: 0xc05f012  jal         func_17C048
    ctx->pc = 0x17BF7Cu;
    SET_GPR_U32(ctx, 31, 0x17BF84u);
    ctx->pc = 0x17BF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF7Cu;
    // 0x17bf80: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C048u, 0x17BF7Cu, 0x17BF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF84u;
label_17bf84:
    // 0x17bf84: 0xc05f062  jal         func_17C188
    ctx->pc = 0x17BF84u;
    SET_GPR_U32(ctx, 31, 0x17BF8Cu);
    ctx->pc = 0x17BF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF84u;
    // 0x17bf88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C188u, 0x17BF84u, 0x17BF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF8Cu;
label_17bf8c:
    // 0x17bf8c: 0xc05f322  jal         func_17CC88
    ctx->pc = 0x17BF8Cu;
    SET_GPR_U32(ctx, 31, 0x17BF94u);
    ctx->pc = 0x17BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF8Cu;
    // 0x17bf90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CC88u, 0x17BF8Cu, 0x17BF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF94u;
label_17bf94:
    // 0x17bf94: 0xc05f348  jal         func_17CD20
    ctx->pc = 0x17BF94u;
    SET_GPR_U32(ctx, 31, 0x17BF9Cu);
    ctx->pc = 0x17BF98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF94u;
    // 0x17bf98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CD20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CD20u, 0x17BF94u, 0x17BF9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BF9Cu;
label_17bf9c:
    // 0x17bf9c: 0xc05f3d0  jal         func_17CF40
    ctx->pc = 0x17BF9Cu;
    SET_GPR_U32(ctx, 31, 0x17BFA4u);
    ctx->pc = 0x17BFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BF9Cu;
    // 0x17bfa0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CF40u, 0x17BF9Cu, 0x17BFA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFA4u;
label_17bfa4:
    // 0x17bfa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17bfa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfa8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17bfa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17bfac: 0xc05f07e  jal         func_17C1F8
    ctx->pc = 0x17BFACu;
    SET_GPR_U32(ctx, 31, 0x17BFB4u);
    ctx->pc = 0x17BFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17BFACu;
    // 0x17bfb0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C1F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C1F8u, 0x17BFACu, 0x17BFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17BFB4u;
label_17bfb4:
    // 0x17bfb4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x17bfb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17bfb8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x17bfb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x17bfbc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x17bfbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17bfc0: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x17bfc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x17bfc4: 0x3e00008  jr          $ra
    ctx->pc = 0x17BFC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17BFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17BFC4u;
        // 0x17bfc8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17BFC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17BFCCu;
    // 0x17bfcc: 0x0  nop
    ctx->pc = 0x17bfccu;
    // NOP
    ctx->pc = 0x17bfd0u;
}
