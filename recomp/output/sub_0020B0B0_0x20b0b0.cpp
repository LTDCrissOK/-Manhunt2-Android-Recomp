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

// Function: sub_0020B0B0
// Address: 0x20b0b0 - 0x20b198
void sub_0020B0B0_0x20b0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B0B0_0x20b0b0");
#endif

    switch (ctx->pc) {
        case 0x20b0f4u: goto label_20b0f4;
        case 0x20b118u: goto label_20b118;
        case 0x20b174u: goto label_20b174;
        default: break;
    }

    ctx->pc = 0x20b0b0u;

    // 0x20b0b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b0b4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20b0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20b0b8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20b0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b0bc: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x20b0bcu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x20b0c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20b0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b0c4: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x20b0c4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x20b0c8: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x20b0c8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x20b0cc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x20b0ccu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x20b0d0: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20b0d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20b0d4: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20b0d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20b0d8: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x20b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x20b0dc: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x20b0dcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x20b0e0: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x20b0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x20b0e4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x20b0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x20b0e8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20b0e8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20b0ec: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x20B0ECu;
    SET_GPR_U32(ctx, 31, 0x20B0F4u);
    ctx->pc = 0x20B0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B0ECu;
    // 0x20b0f0: 0xe7b50004  swc1        $f21, 0x4($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x20B0ECu, 0x20B0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B0F4u;
label_20b0f4:
    // 0x20b0f4: 0x8e30bd50  lw          $s0, -0x42B0($s1)
    ctx->pc = 0x20b0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    // 0x20b0f8: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x20B0F8u;
    {
        const bool branch_taken_0x20b0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B0F8u;
        // 0x20b0fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b0f8) {
            ctx->pc = 0x20B138u;
            goto label_20b138;
        }
    }
    ctx->pc = 0x20B100u;
    // 0x20b100: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x20b100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x20b104: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20b104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b108: 0x260610f8  addiu       $a2, $s0, 0x10F8
    ctx->pc = 0x20b108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4344));
    // 0x20b10c: 0xc44c149c  lwc1        $f12, 0x149C($v0)
    ctx->pc = 0x20b10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b110: 0xc082d8e  jal         func_20B638
    ctx->pc = 0x20B110u;
    SET_GPR_U32(ctx, 31, 0x20B118u);
    ctx->pc = 0x20B114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B110u;
    // 0x20b114: 0x2407005a  addiu       $a3, $zero, 0x5A (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 90));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B638u, 0x20B110u, 0x20B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B118u;
label_20b118:
    // 0x20b118: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b118u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b11c: 0x0  nop
    ctx->pc = 0x20b11cu;
    // NOP
    // 0x20b120: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20b120u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20b124: 0xe6001100  swc1        $f0, 0x1100($s0)
    ctx->pc = 0x20b124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4352), bits); }
    // 0x20b128: 0x8e22bd50  lw          $v0, -0x42B0($s1)
    ctx->pc = 0x20b128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    // 0x20b12c: 0xe45410e8  swc1        $f20, 0x10E8($v0)
    ctx->pc = 0x20b12cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4328), bits); }
    // 0x20b130: 0x8e23bd50  lw          $v1, -0x42B0($s1)
    ctx->pc = 0x20b130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    // 0x20b134: 0xe47510ec  swc1        $f21, 0x10EC($v1)
    ctx->pc = 0x20b134u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4332), bits); }
label_20b138:
    // 0x20b138: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20b138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b13c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20b13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b140: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20b140u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20b144: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20b144u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b148: 0x0  nop
    ctx->pc = 0x20b148u;
    // NOP
    // 0x20b14c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20B14Cu;
    {
        const bool branch_taken_0x20b14c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B14Cu;
        // 0x20b150: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b14c) {
            ctx->pc = 0x20B168u;
            goto label_20b168;
        }
    }
    ctx->pc = 0x20B154u;
    // 0x20b154: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20b154u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20b158: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20b158u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b15c: 0x0  nop
    ctx->pc = 0x20b15cu;
    // NOP
    // 0x20b160: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x20B160u;
    {
        const bool branch_taken_0x20b160 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B160u;
        // 0x20b164: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b160) {
            ctx->pc = 0x20B178u;
            goto label_20b178;
        }
    }
    ctx->pc = 0x20B168u;
label_20b168:
    // 0x20b168: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20b168u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b16c: 0xc0abc30  jal         func_2AF0C0
    ctx->pc = 0x20B16Cu;
    SET_GPR_U32(ctx, 31, 0x20B174u);
    ctx->pc = 0x20B170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B16Cu;
    // 0x20b170: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0C0u, 0x20B16Cu, 0x20B174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B174u;
label_20b174:
    // 0x20b174: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20b174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20b178:
    // 0x20b178: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b17c: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20b17cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20b180: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20b180u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b184: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20b184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20b188: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x20b188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20b18c: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x20b18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20b190: 0x3e00008  jr          $ra
    ctx->pc = 0x20B190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B190u;
        // 0x20b194: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B190u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B198u;
}
