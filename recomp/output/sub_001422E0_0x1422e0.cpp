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

// Function: sub_001422E0
// Address: 0x1422e0 - 0x142418
void sub_001422E0_0x1422e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001422E0_0x1422e0");
#endif

    switch (ctx->pc) {
        case 0x142358u: goto label_142358;
        default: break;
    }

    ctx->pc = 0x1422e0u;

    // 0x1422e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1422e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1422e4: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1422e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1422e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1422e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1422ec: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x1422ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x1422f0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x1422f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1422f4: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x1422f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1422f8: 0x8ce30bd0  lw          $v1, 0xBD0($a3)
    ctx->pc = 0x1422f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 3024)));
    // 0x1422fc: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1422fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x142300: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x142300u;
    {
        const bool branch_taken_0x142300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x142304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142300u;
        // 0x142304: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142300) {
            ctx->pc = 0x142310u;
            goto label_142310;
        }
    }
    ctx->pc = 0x142308u;
    // 0x142308: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x142308u;
    {
        const bool branch_taken_0x142308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14230Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142308u;
        // 0x14230c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142308) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x142310u;
label_142310:
    // 0x142310: 0x3c050049  lui         $a1, 0x49
    ctx->pc = 0x142310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)73 << 16));
    // 0x142314: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x142314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x142318: 0x24a59a08  addiu       $a1, $a1, -0x65F8
    ctx->pc = 0x142318u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941192));
    // 0x14231c: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x14231cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x142320: 0x8c64020c  lw          $a0, 0x20C($v1)
    ctx->pc = 0x142320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x142324: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x142324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x142328: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x142328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14232c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x14232cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x142330: 0x8ca30108  lw          $v1, 0x108($a1)
    ctx->pc = 0x142330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 264)));
    // 0x142334: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x142334u;
    {
        const bool branch_taken_0x142334 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x142334) {
            ctx->pc = 0x142338u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x142334u;
            // 0x142338: 0x8c620104  lw          $v0, 0x104($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x142344u;
            goto label_142344;
        }
    }
    ctx->pc = 0x14233Cu;
    // 0x14233c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x14233Cu;
    {
        const bool branch_taken_0x14233c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x142340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14233Cu;
        // 0x142340: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14233c) {
            ctx->pc = 0x14234Cu;
            goto label_14234c;
        }
    }
    ctx->pc = 0x142344u;
label_142344:
    // 0x142344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x142344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x142348: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x142348u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
label_14234c:
    // 0x14234c: 0x24e50be0  addiu       $a1, $a3, 0xBE0
    ctx->pc = 0x14234cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 3040));
    // 0x142350: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x142350u;
    SET_GPR_U32(ctx, 31, 0x142358u);
    ctx->pc = 0x142354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x142350u;
    // 0x142354: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x142350u, 0x142358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x142358u;
label_142358:
    // 0x142358: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x142358u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14235c: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x14235cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x142360: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x142360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x142364: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x142364u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x142368: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x142368u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x14236c: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x14236cu;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x142370: 0x3c014280  lui         $at, 0x4280
    ctx->pc = 0x142370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17024 << 16));
    // 0x142374: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142374u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142378: 0x0  nop
    ctx->pc = 0x142378u;
    // NOP
    // 0x14237c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14237cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x142380: 0x0  nop
    ctx->pc = 0x142380u;
    // NOP
    // 0x142384: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
    ctx->pc = 0x142384u;
    {
        const bool branch_taken_0x142384 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x142388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142384u;
        // 0x142388: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142384) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x14238Cu;
    // 0x14238c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x14238cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
    // 0x142390: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x142390u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x142394: 0x0  nop
    ctx->pc = 0x142394u;
    // NOP
    // 0x142398: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x142398u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14239c: 0x0  nop
    ctx->pc = 0x14239cu;
    // NOP
    // 0x1423a0: 0x45010018  bc1t        . + 4 + (0x18 << 2)
    ctx->pc = 0x1423A0u;
    {
        const bool branch_taken_0x1423a0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1423A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423A0u;
        // 0x1423a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423a0) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x1423A8u;
    // 0x1423a8: 0x3c0143c8  lui         $at, 0x43C8
    ctx->pc = 0x1423a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17352 << 16));
    // 0x1423ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1423acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1423b0: 0x0  nop
    ctx->pc = 0x1423b0u;
    // NOP
    // 0x1423b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1423b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1423b8: 0x0  nop
    ctx->pc = 0x1423b8u;
    // NOP
    // 0x1423bc: 0x45010011  bc1t        . + 4 + (0x11 << 2)
    ctx->pc = 0x1423BCu;
    {
        const bool branch_taken_0x1423bc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1423C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423BCu;
        // 0x1423c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423bc) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x1423C4u;
    // 0x1423c4: 0x3c01441c  lui         $at, 0x441C
    ctx->pc = 0x1423c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17436 << 16));
    // 0x1423c8: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x1423c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x1423cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1423ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1423d0: 0x0  nop
    ctx->pc = 0x1423d0u;
    // NOP
    // 0x1423d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1423d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1423d8: 0x0  nop
    ctx->pc = 0x1423d8u;
    // NOP
    // 0x1423dc: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x1423DCu;
    {
        const bool branch_taken_0x1423dc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1423E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423DCu;
        // 0x1423e0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423dc) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x1423E4u;
    // 0x1423e4: 0x3c0144a2  lui         $at, 0x44A2
    ctx->pc = 0x1423e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17570 << 16));
    // 0x1423e8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1423e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1423ec: 0x0  nop
    ctx->pc = 0x1423ecu;
    // NOP
    // 0x1423f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1423f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1423f4: 0x0  nop
    ctx->pc = 0x1423f4u;
    // NOP
    // 0x1423f8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1423F8u;
    {
        const bool branch_taken_0x1423f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1423FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1423F8u;
        // 0x1423fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1423f8) {
            ctx->pc = 0x142404u;
            goto label_142404;
        }
    }
    ctx->pc = 0x142400u;
    // 0x142400: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x142400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_142404:
    // 0x142404: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x142404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x142408: 0x3e00008  jr          $ra
    ctx->pc = 0x142408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14240Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x142408u;
        // 0x14240c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x142408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x142410u;
    // 0x142410: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x142410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x142414: 0x0  nop
    ctx->pc = 0x142414u;
    // NOP
    ctx->pc = 0x142418u;
}
