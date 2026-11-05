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

// Function: sub_003913A8
// Address: 0x3913a8 - 0x391660
void sub_003913A8_0x3913a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003913A8_0x3913a8");
#endif

    ctx->pc = 0x3913a8u;

    // 0x3913a8: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x3913a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3913ac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3913acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3913b0: 0x43fc2  srl         $a3, $a0, 31
    ctx->pc = 0x3913b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3913b4: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x3913b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x3913b8: 0x3c0242b1  lui         $v0, 0x42B1
    ctx->pc = 0x3913b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17073 << 16));
    // 0x3913bc: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3913bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x3913c0: 0x34427217  ori         $v0, $v0, 0x7217
    ctx->pc = 0x3913c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29207);
    // 0x3913c4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x3913c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x3913c8: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x3913c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3913cc: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x3913CCu;
    {
        const bool branch_taken_0x3913cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3913D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913CCu;
        // 0x3913d0: 0x3c037f80  lui         $v1, 0x7F80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32640 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3913cc) {
            ctx->pc = 0x391450u;
            goto label_391450;
        }
    }
    ctx->pc = 0x3913D4u;
    // 0x3913d4: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x3913d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x3913d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3913D8u;
    {
        const bool branch_taken_0x3913d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3913d8) {
            ctx->pc = 0x3913E8u;
            goto label_3913e8;
        }
    }
    ctx->pc = 0x3913E0u;
    // 0x3913e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3913E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3913E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3913E0u;
        // 0x3913e4: 0x460c6000  add.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3913E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3913E8u;
label_3913e8:
    // 0x3913e8: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3913E8u;
    {
        const bool branch_taken_0x3913e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3913e8) {
            ctx->pc = 0x391404u;
            goto label_391404;
        }
    }
    ctx->pc = 0x3913F0u;
    // 0x3913f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3913f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3913f4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3913F4u;
    {
        const bool branch_taken_0x3913f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x3913f4) {
            ctx->pc = 0x3913F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3913F4u;
            // 0x3913f8: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
            ctx->f[0] = FPU_MOV_S(ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3913FCu;
            goto label_3913fc;
        }
    }
    ctx->pc = 0x3913FCu;
label_3913fc:
    // 0x3913fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3913FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3913FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391404u;
label_391404:
    // 0x391404: 0x3c0142b1  lui         $at, 0x42B1
    ctx->pc = 0x391404u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17073 << 16));
    // 0x391408: 0x34217180  ori         $at, $at, 0x7180
    ctx->pc = 0x391408u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)29056);
    // 0x39140c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x39140cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391410: 0x460c0034  c.lt.s      $f0, $f12
    ctx->pc = 0x391410u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x391414: 0x0  nop
    ctx->pc = 0x391414u;
    // NOP
    // 0x391418: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x391418u;
    {
        const bool branch_taken_0x391418 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x39141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391418u;
        // 0x39141c: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x391418) {
            ctx->pc = 0x391428u;
            goto label_391428;
        }
    }
    ctx->pc = 0x391420u;
    // 0x391420: 0x3e00008  jr          $ra
    ctx->pc = 0x391420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391420u;
        // 0x391424: 0xc4409dd8  lwc1        $f0, -0x6228($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294942168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391428u;
label_391428:
    // 0x391428: 0x3c01c2cf  lui         $at, 0xC2CF
    ctx->pc = 0x391428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49871 << 16));
    // 0x39142c: 0x3421f1b5  ori         $at, $at, 0xF1B5
    ctx->pc = 0x39142cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)61877);
    // 0x391430: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391430u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391434: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x391434u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x391438: 0x0  nop
    ctx->pc = 0x391438u;
    // NOP
    // 0x39143c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x39143Cu;
    {
        const bool branch_taken_0x39143c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x391440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39143Cu;
        // 0x391440: 0x3c023eb1  lui         $v0, 0x3EB1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39143c) {
            ctx->pc = 0x391454u;
            goto label_391454;
        }
    }
    ctx->pc = 0x391444u;
    // 0x391444: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x391444u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391448: 0x3e00008  jr          $ra
    ctx->pc = 0x391448u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391448u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391450u;
label_391450:
    // 0x391450: 0x3c023eb1  lui         $v0, 0x3EB1
    ctx->pc = 0x391450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16049 << 16));
label_391454:
    // 0x391454: 0x34427218  ori         $v0, $v0, 0x7218
    ctx->pc = 0x391454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29208);
    // 0x391458: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x391458u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x39145c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x39145Cu;
    {
        const bool branch_taken_0x39145c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x391460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39145Cu;
        // 0x391460: 0x3c023f85  lui         $v0, 0x3F85 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16261 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39145c) {
            ctx->pc = 0x391504u;
            goto label_391504;
        }
    }
    ctx->pc = 0x391464u;
    // 0x391464: 0x34421591  ori         $v0, $v0, 0x1591
    ctx->pc = 0x391464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5521);
    // 0x391468: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x391468u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x39146c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x39146Cu;
    {
        const bool branch_taken_0x39146c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39146Cu;
        // 0x391470: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39146c) {
            ctx->pc = 0x3914ACu;
            goto label_3914ac;
        }
    }
    ctx->pc = 0x391474u;
    // 0x391474: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x391474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x391478: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x391478u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x39147c: 0x24429db0  addiu       $v0, $v0, -0x6250
    ctx->pc = 0x39147cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942128));
    // 0x391480: 0x3c040048  lui         $a0, 0x48
    ctx->pc = 0x391480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)72 << 16));
    // 0x391484: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x391484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x391488: 0x24849db8  addiu       $a0, $a0, -0x6248
    ctx->pc = 0x391488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942136));
    // 0x39148c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x39148cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x391490: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x391490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x391494: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x391494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x391498: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x391498u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x39149c: 0x460061c1  sub.s       $f7, $f12, $f0
    ctx->pc = 0x39149cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3914a0: 0x673023  subu        $a2, $v1, $a3
    ctx->pc = 0x3914a0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3914a4: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x3914A4u;
    {
        const bool branch_taken_0x3914a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3914A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914A4u;
        // 0x3914a8: 0xc4a60000  lwc1        $f6, 0x0($a1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914a4) {
            ctx->pc = 0x3914FCu;
            goto label_3914fc;
        }
    }
    ctx->pc = 0x3914ACu;
label_3914ac:
    // 0x3914ac: 0x3c013fb8  lui         $at, 0x3FB8
    ctx->pc = 0x3914acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16312 << 16));
    // 0x3914b0: 0x3421aa3b  ori         $at, $at, 0xAA3B
    ctx->pc = 0x3914b0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43579);
    // 0x3914b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3914b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3914b8: 0x24429d98  addiu       $v0, $v0, -0x6268
    ctx->pc = 0x3914b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294942104));
    // 0x3914bc: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x3914bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x3914c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x3914c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x3914c4: 0x46006002  mul.s       $f0, $f12, $f0
    ctx->pc = 0x3914c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
    // 0x3914c8: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3914c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3914cc: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3914ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3914d0: 0xc4419db0  lwc1        $f1, -0x6250($v0)
    ctx->pc = 0x3914d0u;
    { uint32_t bits = FAST_READ32(0x479DB0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3914d4: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3914d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3914d8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3914d8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3914dc: 0xc4639db8  lwc1        $f3, -0x6248($v1)
    ctx->pc = 0x3914dcu;
    { uint32_t bits = FAST_READ32(0x479DB8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3914e0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3914e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3914e4: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x3914e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3914e8: 0x44862800  mtc1        $a2, $f5
    ctx->pc = 0x3914e8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x3914ec: 0x46802960  cvt.s.w     $f5, $f5
    ctx->pc = 0x3914ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[5], sizeof(tmp)); ctx->f[5] = FPU_CVT_S_W(tmp); }
    // 0x3914f0: 0x46012842  mul.s       $f1, $f5, $f1
    ctx->pc = 0x3914f0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[5], ctx->f[1]);
    // 0x3914f4: 0x46032982  mul.s       $f6, $f5, $f3
    ctx->pc = 0x3914f4u;
    ctx->f[6] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
    // 0x3914f8: 0x460161c1  sub.s       $f7, $f12, $f1
    ctx->pc = 0x3914f8u;
    ctx->f[7] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
label_3914fc:
    // 0x3914fc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x3914FCu;
    {
        const bool branch_taken_0x3914fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x391500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3914FCu;
        // 0x391500: 0x46063b01  sub.s       $f12, $f7, $f6 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[7], ctx->f[6]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3914fc) {
            ctx->pc = 0x391548u;
            goto label_391548;
        }
    }
    ctx->pc = 0x391504u;
label_391504:
    // 0x391504: 0x3c02317f  lui         $v0, 0x317F
    ctx->pc = 0x391504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12671 << 16));
    // 0x391508: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x391508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x39150c: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x39150cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x391510: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x391510u;
    {
        const bool branch_taken_0x391510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x391510) {
            ctx->pc = 0x391514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391510u;
            // 0x391514: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x391548u;
            goto label_391548;
        }
    }
    ctx->pc = 0x391518u;
    // 0x391518: 0x3c017149  lui         $at, 0x7149
    ctx->pc = 0x391518u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)29001 << 16));
    // 0x39151c: 0x3421f2ca  ori         $at, $at, 0xF2CA
    ctx->pc = 0x39151cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)62154);
    // 0x391520: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391520u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391524: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x391524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x391528: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x39152c: 0x46006000  add.s       $f0, $f12, $f0
    ctx->pc = 0x39152cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[0]);
    // 0x391530: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x391530u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x391534: 0x0  nop
    ctx->pc = 0x391534u;
    // NOP
    // 0x391538: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x391538u;
    {
        const bool branch_taken_0x391538 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x391538) {
            ctx->pc = 0x39153Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x391538u;
            // 0x39153c: 0x460c6142  mul.s       $f5, $f12, $f12 (Delay Slot)
            ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
            ctx->in_delay_slot = false;
            ctx->pc = 0x39154Cu;
            goto label_39154c;
        }
    }
    ctx->pc = 0x391540u;
    // 0x391540: 0x3e00008  jr          $ra
    ctx->pc = 0x391540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x391544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x391540u;
        // 0x391544: 0x46016000  add.s       $f0, $f12, $f1 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391548u;
label_391548:
    // 0x391548: 0x460c6142  mul.s       $f5, $f12, $f12
    ctx->pc = 0x391548u;
    ctx->f[5] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
label_39154c:
    // 0x39154c: 0x3c013331  lui         $at, 0x3331
    ctx->pc = 0x39154cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13105 << 16));
    // 0x391550: 0x3421bb4c  ori         $at, $at, 0xBB4C
    ctx->pc = 0x391550u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47948);
    // 0x391554: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391554u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391558: 0x3c01b5dd  lui         $at, 0xB5DD
    ctx->pc = 0x391558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46557 << 16));
    // 0x39155c: 0x3421ea0e  ori         $at, $at, 0xEA0E
    ctx->pc = 0x39155cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)59918);
    // 0x391560: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x391560u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391564: 0x3c01388a  lui         $at, 0x388A
    ctx->pc = 0x391564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14474 << 16));
    // 0x391568: 0x3421b355  ori         $at, $at, 0xB355
    ctx->pc = 0x391568u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)45909);
    // 0x39156c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x39156cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x391570: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x391570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x391574: 0x3c01bb36  lui         $at, 0xBB36
    ctx->pc = 0x391574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47926 << 16));
    // 0x391578: 0x34210b61  ori         $at, $at, 0xB61
    ctx->pc = 0x391578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)2913);
    // 0x39157c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x39157cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x391580: 0x3c013e2a  lui         $at, 0x3E2A
    ctx->pc = 0x391580u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15914 << 16));
    // 0x391584: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x391584u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x391588: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x391588u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x39158c: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x39158cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x391590: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x391590u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x391594: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x391594u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x391598: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x391598u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x39159c: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x39159cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x3915a0: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3915a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3915a4: 0x46040000  add.s       $f0, $f0, $f4
    ctx->pc = 0x3915a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[4]);
    // 0x3915a8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x3915a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x3915ac: 0x14c0000d  bnez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x3915ACu;
    {
        const bool branch_taken_0x3915ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3915B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915ACu;
        // 0x3915b0: 0x460060c1  sub.s       $f3, $f12, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3915ac) {
            ctx->pc = 0x3915E4u;
            goto label_3915e4;
        }
    }
    ctx->pc = 0x3915B4u;
    // 0x3915b4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3915b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3915b8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3915b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3915bc: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x3915bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x3915c0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3915c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3915c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3915c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3915c8: 0x46011841  sub.s       $f1, $f3, $f1
    ctx->pc = 0x3915c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3915cc: 0x0  nop
    ctx->pc = 0x3915ccu;
    // NOP
    // 0x3915d0: 0x0  nop
    ctx->pc = 0x3915d0u;
    // NOP
    // 0x3915d4: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x3915d4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3915d8: 0x460c0001  sub.s       $f0, $f0, $f12
    ctx->pc = 0x3915d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
    // 0x3915dc: 0x3e00008  jr          $ra
    ctx->pc = 0x3915DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3915E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3915DCu;
        // 0x3915e0: 0x46001001  sub.s       $f0, $f2, $f0 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3915DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3915E4u;
label_3915e4:
    // 0x3915e4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x3915e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x3915e8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3915e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3915ec: 0x46036002  mul.s       $f0, $f12, $f3
    ctx->pc = 0x3915ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[3]);
    // 0x3915f0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3915f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3915f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3915f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3915f8: 0x28c2ff83  slti        $v0, $a2, -0x7D
    ctx->pc = 0x3915f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967171) ? 1 : 0);
    // 0x3915fc: 0x46030841  sub.s       $f1, $f1, $f3
    ctx->pc = 0x3915fcu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x391600: 0x0  nop
    ctx->pc = 0x391600u;
    // NOP
    // 0x391604: 0x0  nop
    ctx->pc = 0x391604u;
    // NOP
    // 0x391608: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x391608u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x39160c: 0x46003001  sub.s       $f0, $f6, $f0
    ctx->pc = 0x39160cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[6], ctx->f[0]);
    // 0x391610: 0x46070001  sub.s       $f0, $f0, $f7
    ctx->pc = 0x391610u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[7]);
    // 0x391614: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x391614u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x391618: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x391618u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x39161c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x39161Cu;
    {
        const bool branch_taken_0x39161c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x391620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39161Cu;
        // 0x391620: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39161c) {
            ctx->pc = 0x391638u;
            goto label_391638;
        }
    }
    ctx->pc = 0x391624u;
    // 0x391624: 0x615c0  sll         $v0, $a2, 23
    ctx->pc = 0x391624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 23));
    // 0x391628: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x391628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x39162c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x39162cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x391630: 0x3e00008  jr          $ra
    ctx->pc = 0x391630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x391638u;
label_391638:
    // 0x391638: 0x24c30064  addiu       $v1, $a2, 0x64
    ctx->pc = 0x391638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 100));
    // 0x39163c: 0x31dc0  sll         $v1, $v1, 23
    ctx->pc = 0x39163cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 23));
    // 0x391640: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x391640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x391644: 0x3c010d80  lui         $at, 0xD80
    ctx->pc = 0x391644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)3456 << 16));
    // 0x391648: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x391648u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x39164c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x39164cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x391650: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x391650u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x391654: 0x3e00008  jr          $ra
    ctx->pc = 0x391654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x391654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39165Cu;
    // 0x39165c: 0x0  nop
    ctx->pc = 0x39165cu;
    // NOP
    ctx->pc = 0x391660u;
}
