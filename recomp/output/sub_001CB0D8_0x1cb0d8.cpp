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

// Function: sub_001CB0D8
// Address: 0x1cb0d8 - 0x1cb208
void sub_001CB0D8_0x1cb0d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CB0D8_0x1cb0d8");
#endif

    switch (ctx->pc) {
        case 0x1cb0ecu: goto label_1cb0ec;
        default: break;
    }

    ctx->pc = 0x1cb0d8u;

    // 0x1cb0d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cb0d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cb0dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cb0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1cb0e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1cb0e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1cb0e4: 0xc072a14  jal         func_1CA850
    ctx->pc = 0x1CB0E4u;
    SET_GPR_U32(ctx, 31, 0x1CB0ECu);
    ctx->pc = 0x1CB0E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CB0E4u;
    // 0x1cb0e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA850u, 0x1CB0E4u, 0x1CB0ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CB0ECu;
label_1cb0ec:
    // 0x1cb0ec: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1cb0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb0f0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1cb0f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1cb0f4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb0f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb0f8: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1cb0f8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1cb0fc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cb0fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb100: 0x0  nop
    ctx->pc = 0x1cb100u;
    // NOP
    // 0x1cb104: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB104u;
    {
        const bool branch_taken_0x1cb104 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB104u;
        // 0x1cb108: 0x3c030010  lui         $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb104) {
            ctx->pc = 0x1CB118u;
            goto label_1cb118;
        }
    }
    ctx->pc = 0x1CB10Cu;
    // 0x1cb10c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cb10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cb110: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cb110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cb114: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cb114u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1cb118:
    // 0x1cb118: 0xc6010018  lwc1        $f1, 0x18($s0)
    ctx->pc = 0x1cb118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb11c: 0x3c014434  lui         $at, 0x4434
    ctx->pc = 0x1cb11cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17460 << 16));
    // 0x1cb120: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb120u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb124: 0x0  nop
    ctx->pc = 0x1cb124u;
    // NOP
    // 0x1cb128: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cb128u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb12c: 0x0  nop
    ctx->pc = 0x1cb12cu;
    // NOP
    // 0x1cb130: 0x4501000b  bc1t        . + 4 + (0xB << 2)
    ctx->pc = 0x1CB130u;
    {
        const bool branch_taken_0x1cb130 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB130u;
        // 0x1cb134: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb130) {
            ctx->pc = 0x1CB160u;
            goto label_1cb160;
        }
    }
    ctx->pc = 0x1CB138u;
    // 0x1cb138: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x1cb138u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x1cb13c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cb13cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb140: 0x0  nop
    ctx->pc = 0x1cb140u;
    // NOP
    // 0x1cb144: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB144u;
    {
        const bool branch_taken_0x1cb144 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb144) {
            ctx->pc = 0x1CB154u;
            goto label_1cb154;
        }
    }
    ctx->pc = 0x1CB14Cu;
    // 0x1cb14c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1CB14Cu;
    {
        const bool branch_taken_0x1cb14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB14Cu;
        // 0x1cb150: 0x34428000  ori         $v0, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb14c) {
            ctx->pc = 0x1CB178u;
            goto label_1cb178;
        }
    }
    ctx->pc = 0x1CB154u;
label_1cb154:
    // 0x1cb154: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1cb154u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1cb158: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CB158u;
    {
        const bool branch_taken_0x1cb158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB158u;
        // 0x1cb15c: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb158) {
            ctx->pc = 0x1CB178u;
            goto label_1cb178;
        }
    }
    ctx->pc = 0x1CB160u;
label_1cb160:
    // 0x1cb160: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1cb160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1cb164: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x1cb164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x1cb168: 0x3c04fffe  lui         $a0, 0xFFFE
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65534 << 16));
    // 0x1cb16c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1cb16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1cb170: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1cb170u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1cb174: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1cb174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1cb178:
    // 0x1cb178: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1cb17c: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1cb17cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cb180: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1cb180u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1cb184: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1cb184u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1cb188: 0x46000005  abs.s       $f0, $f0
    ctx->pc = 0x1cb188u;
    ctx->f[0] = FPU_ABS_S(ctx->f[0]);
    // 0x1cb18c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cb18cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb190: 0x0  nop
    ctx->pc = 0x1cb190u;
    // NOP
    // 0x1cb194: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1CB194u;
    {
        const bool branch_taken_0x1cb194 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB194u;
        // 0x1cb198: 0x3c030020  lui         $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb194) {
            ctx->pc = 0x1CB1A8u;
            goto label_1cb1a8;
        }
    }
    ctx->pc = 0x1CB19Cu;
    // 0x1cb19c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1cb19cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1cb1a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cb1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cb1a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cb1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cb1a8:
    // 0x1cb1a8: 0xc601001c  lwc1        $f1, 0x1C($s0)
    ctx->pc = 0x1cb1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb1ac: 0x3c014434  lui         $at, 0x4434
    ctx->pc = 0x1cb1acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17460 << 16));
    // 0x1cb1b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cb1b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb1b4: 0x0  nop
    ctx->pc = 0x1cb1b4u;
    // NOP
    // 0x1cb1b8: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x1cb1b8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb1bc: 0x0  nop
    ctx->pc = 0x1cb1bcu;
    // NOP
    // 0x1cb1c0: 0x4503000d  bc1tl       . + 4 + (0xD << 2)
    ctx->pc = 0x1CB1C0u;
    {
        const bool branch_taken_0x1cb1c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb1c0) {
            ctx->pc = 0x1CB1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CB1C0u;
            // 0x1cb1c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CB1F8u;
            goto label_1cb1f8;
        }
    }
    ctx->pc = 0x1CB1C8u;
    // 0x1cb1c8: 0x46000805  abs.s       $f0, $f1
    ctx->pc = 0x1cb1c8u;
    ctx->f[0] = FPU_ABS_S(ctx->f[1]);
    // 0x1cb1cc: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x1cb1ccu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb1d0: 0x0  nop
    ctx->pc = 0x1cb1d0u;
    // NOP
    // 0x1cb1d4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB1D4u;
    {
        const bool branch_taken_0x1cb1d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CB1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1D4u;
        // 0x1cb1d8: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1d4) {
            ctx->pc = 0x1CB1E4u;
            goto label_1cb1e4;
        }
    }
    ctx->pc = 0x1CB1DCu;
    // 0x1cb1dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CB1DCu;
    {
        const bool branch_taken_0x1cb1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CB1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1DCu;
        // 0x1cb1e0: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cb1dc) {
            ctx->pc = 0x1CB1ECu;
            goto label_1cb1ec;
        }
    }
    ctx->pc = 0x1CB1E4u;
label_1cb1e4:
    // 0x1cb1e4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cb1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1cb1e8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1cb1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1cb1ec:
    // 0x1cb1ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cb1ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cb1f0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1cb1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1cb1f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cb1f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cb1f8:
    // 0x1cb1f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1cb1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1cb1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1CB1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CB200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CB1FCu;
        // 0x1cb200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CB1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CB204u;
    // 0x1cb204: 0x0  nop
    ctx->pc = 0x1cb204u;
    // NOP
    ctx->pc = 0x1cb208u;
}
