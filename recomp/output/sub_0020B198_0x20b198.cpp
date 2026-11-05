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

// Function: sub_0020B198
// Address: 0x20b198 - 0x20b280
void sub_0020B198_0x20b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B198_0x20b198");
#endif

    switch (ctx->pc) {
        case 0x20b1dcu: goto label_20b1dc;
        case 0x20b200u: goto label_20b200;
        case 0x20b25cu: goto label_20b25c;
        default: break;
    }

    ctx->pc = 0x20b198u;

    // 0x20b198: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b19c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x20b19cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x20b1a0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20b1a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1a4: 0xe7b50048  swc1        $f21, 0x48($sp)
    ctx->pc = 0x20b1a4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x20b1a8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20b1a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1ac: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x20b1acu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x20b1b0: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x20b1b0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x20b1b4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x20b1b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x20b1b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x20b1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x20b1bc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x20b1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
    // 0x20b1c0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x20b1c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x20b1c4: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x20b1c4u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
    // 0x20b1c8: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x20b1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x20b1cc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x20b1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x20b1d0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20b1d0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20b1d4: 0xc082cbc  jal         func_20B2F0
    ctx->pc = 0x20B1D4u;
    SET_GPR_U32(ctx, 31, 0x20B1DCu);
    ctx->pc = 0x20B1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1D4u;
    // 0x20b1d8: 0xe7b50004  swc1        $f21, 0x4($sp) (Delay Slot)
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B2F0u, 0x20B1D4u, 0x20B1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B1DCu;
label_20b1dc:
    // 0x20b1dc: 0x8e30bd50  lw          $s0, -0x42B0($s1)
    ctx->pc = 0x20b1dcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    // 0x20b1e0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x20B1E0u;
    {
        const bool branch_taken_0x20b1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B1E0u;
        // 0x20b1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b1e0) {
            ctx->pc = 0x20B220u;
            goto label_20b220;
        }
    }
    ctx->pc = 0x20B1E8u;
    // 0x20b1e8: 0x8e0200b8  lw          $v0, 0xB8($s0)
    ctx->pc = 0x20b1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x20b1ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x20b1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b1f0: 0x260610fc  addiu       $a2, $s0, 0x10FC
    ctx->pc = 0x20b1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4348));
    // 0x20b1f4: 0xc44c1498  lwc1        $f12, 0x1498($v0)
    ctx->pc = 0x20b1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 5272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20b1f8: 0xc082d8e  jal         func_20B638
    ctx->pc = 0x20B1F8u;
    SET_GPR_U32(ctx, 31, 0x20B200u);
    ctx->pc = 0x20B1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B1F8u;
    // 0x20b1fc: 0x2407002d  addiu       $a3, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20B638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20B638u, 0x20B1F8u, 0x20B200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B200u;
label_20b200:
    // 0x20b200: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20b200u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20b204: 0x0  nop
    ctx->pc = 0x20b204u;
    // NOP
    // 0x20b208: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20b208u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x20b20c: 0xe6001104  swc1        $f0, 0x1104($s0)
    ctx->pc = 0x20b20cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4356), bits); }
    // 0x20b210: 0x8e22bd50  lw          $v0, -0x42B0($s1)
    ctx->pc = 0x20b210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    // 0x20b214: 0xe45410f0  swc1        $f20, 0x10F0($v0)
    ctx->pc = 0x20b214u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4336), bits); }
    // 0x20b218: 0x8e23bd50  lw          $v1, -0x42B0($s1)
    ctx->pc = 0x20b218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294950224)));
    // 0x20b21c: 0xe47510f4  swc1        $f21, 0x10F4($v1)
    ctx->pc = 0x20b21cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4340), bits); }
label_20b220:
    // 0x20b220: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x20b220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20b224: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20b224u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20b228: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20b228u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20b22c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20b22cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b230: 0x0  nop
    ctx->pc = 0x20b230u;
    // NOP
    // 0x20b234: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x20B234u;
    {
        const bool branch_taken_0x20b234 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B234u;
        // 0x20b238: 0xc7a00004  lwc1        $f0, 0x4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b234) {
            ctx->pc = 0x20B250u;
            goto label_20b250;
        }
    }
    ctx->pc = 0x20B23Cu;
    // 0x20b23c: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x20b23cu;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x20b240: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x20b240u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20b244: 0x0  nop
    ctx->pc = 0x20b244u;
    // NOP
    // 0x20b248: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x20B248u;
    {
        const bool branch_taken_0x20b248 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x20B24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B248u;
        // 0x20b24c: 0xdfb00020  ld          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b248) {
            ctx->pc = 0x20B260u;
            goto label_20b260;
        }
    }
    ctx->pc = 0x20B250u;
label_20b250:
    // 0x20b250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20b250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b254: 0xc0abc30  jal         func_2AF0C0
    ctx->pc = 0x20B254u;
    SET_GPR_U32(ctx, 31, 0x20B25Cu);
    ctx->pc = 0x20B258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20B254u;
    // 0x20b258: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AF0C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AF0C0u, 0x20B254u, 0x20B25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20B25Cu;
label_20b25c:
    // 0x20b25c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x20b25cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_20b260:
    // 0x20b260: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20b260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20b264: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x20b264u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20b268: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x20b268u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b26c: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x20b26cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20b270: 0xc7b50048  lwc1        $f21, 0x48($sp)
    ctx->pc = 0x20b270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x20b274: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x20b274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20b278: 0x3e00008  jr          $ra
    ctx->pc = 0x20B278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20B278u;
        // 0x20b27c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20B278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20B280u;
}
