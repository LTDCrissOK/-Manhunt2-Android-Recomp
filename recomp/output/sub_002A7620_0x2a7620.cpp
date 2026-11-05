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

// Function: sub_002A7620
// Address: 0x2a7620 - 0x2a7740
void sub_002A7620_0x2a7620(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7620_0x2a7620");
#endif

    switch (ctx->pc) {
        case 0x2a765cu: goto label_2a765c;
        case 0x2a7668u: goto label_2a7668;
        case 0x2a76c0u: goto label_2a76c0;
        case 0x2a7704u: goto label_2a7704;
        default: break;
    }

    ctx->pc = 0x2a7620u;

    // 0x2a7620: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a7620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a7624: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2a7624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2a7628: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a7628u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a762c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a762cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a7630: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2a7630u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2a7634: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2a7634u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2a7638: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a7638u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a763c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2a763cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2a7640: 0x26300014  addiu       $s0, $s1, 0x14
    ctx->pc = 0x2a7640u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x2a7644: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2a7644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2a7648: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x2a7648u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a764c: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x2a764cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2a7650: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2a7650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2a7654: 0xc0a9e18  jal         func_2A7860
    ctx->pc = 0x2A7654u;
    SET_GPR_U32(ctx, 31, 0x2A765Cu);
    ctx->pc = 0x2A7658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A7654u;
    // 0x2a7658: 0x3c150048  lui         $s5, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7860u, 0x2A7654u, 0x2A765Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A765Cu;
label_2a765c:
    // 0x2a765c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2a765cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a7660: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2a7660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2a7664: 0x2453ca60  addiu       $s3, $v0, -0x35A0
    ctx->pc = 0x2a7664u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953568));
label_2a7668:
    // 0x2a7668: 0xc6a12b30  lwc1        $f1, 0x2B30($s5)
    ctx->pc = 0x2a7668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a766c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x2a766cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7670: 0xc6020010  lwc1        $f2, 0x10($s0)
    ctx->pc = 0x2a7670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a7674: 0x46010041  sub.s       $f1, $f0, $f1
    ctx->pc = 0x2a7674u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x2a7678: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x2a7678u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a767c: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2a767cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2a7680: 0xc6a02b30  lwc1        $f0, 0x2B30($s5)
    ctx->pc = 0x2a7680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 11056)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a7684: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x2a7684u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x2a7688: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A7688u;
    {
        const bool branch_taken_0x2a7688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A768Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7688u;
        // 0x2a768c: 0xe6020010  swc1        $f2, 0x10($s0) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7688) {
            ctx->pc = 0x2A76A0u;
            goto label_2a76a0;
        }
    }
    ctx->pc = 0x2A7690u;
    // 0x2a7690: 0x46140834  c.lt.s      $f1, $f20
    ctx->pc = 0x2a7690u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a7694: 0x0  nop
    ctx->pc = 0x2a7694u;
    // NOP
    // 0x2a7698: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2A7698u;
    {
        const bool branch_taken_0x2a7698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A769Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7698u;
        // 0x2a769c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7698) {
            ctx->pc = 0x2A76B8u;
            goto label_2a76b8;
        }
    }
    ctx->pc = 0x2A76A0u;
label_2a76a0:
    // 0x2a76a0: 0x54540008  bnel        $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2A76A0u;
    {
        const bool branch_taken_0x2a76a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2a76a0) {
            ctx->pc = 0x2A76A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A76A0u;
            // 0x2a76a4: 0x92020018  lbu         $v0, 0x18($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A76C4u;
            goto label_2a76c4;
        }
    }
    ctx->pc = 0x2A76A8u;
    // 0x2a76a8: 0x46141034  c.lt.s      $f2, $f20
    ctx->pc = 0x2a76a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2a76ac: 0x0  nop
    ctx->pc = 0x2a76acu;
    // NOP
    // 0x2a76b0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2A76B0u;
    {
        const bool branch_taken_0x2a76b0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2A76B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76B0u;
        // 0x2a76b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76b0) {
            ctx->pc = 0x2A76C0u;
            goto label_2a76c0;
        }
    }
    ctx->pc = 0x2A76B8u;
label_2a76b8:
    // 0x2a76b8: 0xc0a9dd0  jal         func_2A7740
    ctx->pc = 0x2A76B8u;
    SET_GPR_U32(ctx, 31, 0x2A76C0u);
    ctx->pc = 0x2A76BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A76B8u;
    // 0x2a76bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7740u, 0x2A76B8u, 0x2A76C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A76C0u;
label_2a76c0:
    // 0x2a76c0: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x2a76c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_2a76c4:
    // 0x2a76c4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A76C4u;
    {
        const bool branch_taken_0x2a76c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a76c4) {
            ctx->pc = 0x2A76C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2A76C4u;
            // 0x2a76c8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2A770Cu;
            goto label_2a770c;
        }
    }
    ctx->pc = 0x2A76CCu;
    // 0x2a76cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2a76ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2a76d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2A76D0u;
    {
        const bool branch_taken_0x2a76d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A76D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A76D0u;
        // 0x2a76d4: 0x240400ff  addiu       $a0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a76d0) {
            ctx->pc = 0x2A7708u;
            goto label_2a7708;
        }
    }
    ctx->pc = 0x2A76D8u;
    // 0x2a76d8: 0xa2740004  sb          $s4, 0x4($s3)
    ctx->pc = 0x2a76d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 20));
    // 0x2a76dc: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x2a76dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a76e0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a76e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a76e4: 0xc60e000c  lwc1        $f14, 0xC($s0)
    ctx->pc = 0x2a76e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x2a76e8: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2a76e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2a76ec: 0xc60c0004  lwc1        $f12, 0x4($s0)
    ctx->pc = 0x2a76ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2a76f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a76f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a76f4: 0xc60d0008  lwc1        $f13, 0x8($s0)
    ctx->pc = 0x2a76f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x2a76f8: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x2a76f8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
    // 0x2a76fc: 0xc0da874  jal         func_36A1D0
    ctx->pc = 0x2A76FCu;
    SET_GPR_U32(ctx, 31, 0x2A7704u);
    ctx->pc = 0x2A7700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A76FCu;
    // 0x2a7700: 0x8e080000  lw          $t0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A1D0u, 0x2A76FCu, 0x2A7704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7704u;
label_2a7704:
    // 0x2a7704: 0xa2600004  sb          $zero, 0x4($s3)
    ctx->pc = 0x2a7704u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 4), (uint8_t)GPR_U32(ctx, 0));
label_2a7708:
    // 0x2a7708: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2a7708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2a770c:
    // 0x2a770c: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x2a770cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x2a7710: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2A7710u;
    {
        const bool branch_taken_0x2a7710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A7714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7710u;
        // 0x2a7714: 0x2610001c  addiu       $s0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a7710) {
            ctx->pc = 0x2A7668u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2a7668;
        }
    }
    ctx->pc = 0x2A7718u;
    // 0x2a7718: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a7718u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a771c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2a771cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2a7720: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2a7720u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7724: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2a7724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7728: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2a7728u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a772c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2a772cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2a7730: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2a7730u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a7734: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x2a7734u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7738: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A773Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7738u;
        // 0x2a773c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7740u;
}
