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

// Function: sub_001A32E8
// Address: 0x1a32e8 - 0x1a33b8
void sub_001A32E8_0x1a32e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A32E8_0x1a32e8");
#endif

    switch (ctx->pc) {
        case 0x1a32fcu: goto label_1a32fc;
        case 0x1a330cu: goto label_1a330c;
        case 0x1a3380u: goto label_1a3380;
        case 0x1a3390u: goto label_1a3390;
        case 0x1a33a0u: goto label_1a33a0;
        default: break;
    }

    ctx->pc = 0x1a32e8u;

    // 0x1a32e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a32e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a32ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a32ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1a32f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1a32f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1a32f4: 0xc061a1e  jal         func_186878
    ctx->pc = 0x1A32F4u;
    SET_GPR_U32(ctx, 31, 0x1A32FCu);
    ctx->pc = 0x1A32F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A32F4u;
    // 0x1a32f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186878u, 0x1A32F4u, 0x1A32FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A32FCu;
label_1a32fc:
    // 0x1a32fc: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1a32fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3300: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1a3300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a3304: 0xc06cdda  jal         func_1B3768
    ctx->pc = 0x1A3304u;
    SET_GPR_U32(ctx, 31, 0x1A330Cu);
    ctx->pc = 0x1A3308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3304u;
    // 0x1a3308: 0x8c651004  lw          $a1, 0x1004($v1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4100)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B3768u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3768u, 0x1A3304u, 0x1A330Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A330Cu;
label_1a330c:
    // 0x1a330c: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x1a330cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x1a3310: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x1a3310u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B00u));
    // 0x1a3314: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A3314u;
    {
        const bool branch_taken_0x1a3314 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A3318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3314u;
        // 0x1a3318: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3314) {
            ctx->pc = 0x1A3330u;
            goto label_1a3330;
        }
    }
    ctx->pc = 0x1A331Cu;
    // 0x1a331c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a331cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a3320: 0x0  nop
    ctx->pc = 0x1a3320u;
    // NOP
    // 0x1a3324: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a3324u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a3328: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1A3328u;
    {
        const bool branch_taken_0x1a3328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3328) {
            ctx->pc = 0x1A3348u;
            goto label_1a3348;
        }
    }
    ctx->pc = 0x1A3330u;
label_1a3330:
    // 0x1a3330: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1a3330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1a3334: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1a3334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1a3338: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1a3338u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1a333c: 0x0  nop
    ctx->pc = 0x1a333cu;
    // NOP
    // 0x1a3340: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x1a3340u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x1a3344: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1a3344u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
label_1a3348:
    // 0x1a3348: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1a3348u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1a334c: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1a334cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1a3350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1a3350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a3354: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1a3354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a3358: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1a3358u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1a335c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1a335cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a3360: 0x0  nop
    ctx->pc = 0x1a3360u;
    // NOP
    // 0x1a3364: 0x4500000e  bc1f        . + 4 + (0xE << 2)
    ctx->pc = 0x1A3364u;
    {
        const bool branch_taken_0x1a3364 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A3368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3364u;
        // 0x1a3368: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3364) {
            ctx->pc = 0x1A33A0u;
            goto label_1a33a0;
        }
    }
    ctx->pc = 0x1A336Cu;
    // 0x1a336c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1a3370: 0x8c431004  lw          $v1, 0x1004($v0)
    ctx->pc = 0x1a3370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4100)));
    // 0x1a3374: 0x8c640ff8  lw          $a0, 0xFF8($v1)
    ctx->pc = 0x1a3374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4088)));
    // 0x1a3378: 0xc0f6da6  jal         func_3DB698
    ctx->pc = 0x1A3378u;
    SET_GPR_U32(ctx, 31, 0x1A3380u);
    ctx->pc = 0x1A337Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3378u;
    // 0x1a337c: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DB698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DB698u, 0x1A3378u, 0x1A3380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3380u;
label_1a3380:
    // 0x1a3380: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A3380u;
    {
        const bool branch_taken_0x1a3380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a3380) {
            ctx->pc = 0x1A3398u;
            goto label_1a3398;
        }
    }
    ctx->pc = 0x1A3388u;
    // 0x1a3388: 0xc068fc6  jal         func_1A3F18
    ctx->pc = 0x1A3388u;
    SET_GPR_U32(ctx, 31, 0x1A3390u);
    ctx->pc = 0x1A338Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3388u;
    // 0x1a338c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3F18u, 0x1A3388u, 0x1A3390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A3390u;
label_1a3390:
    // 0x1a3390: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A3390u;
    {
        const bool branch_taken_0x1a3390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A3394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A3390u;
        // 0x1a3394: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a3390) {
            ctx->pc = 0x1A33A4u;
            goto label_1a33a4;
        }
    }
    ctx->pc = 0x1A3398u;
label_1a3398:
    // 0x1a3398: 0xc068f6e  jal         func_1A3DB8
    ctx->pc = 0x1A3398u;
    SET_GPR_U32(ctx, 31, 0x1A33A0u);
    ctx->pc = 0x1A339Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A3398u;
    // 0x1a339c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3DB8u, 0x1A3398u, 0x1A33A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A33A0u;
label_1a33a0:
    // 0x1a33a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a33a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a33a4:
    // 0x1a33a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a33a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a33a8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1a33a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1a33ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1A33ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A33B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A33ACu;
        // 0x1a33b0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A33ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A33B4u;
    // 0x1a33b4: 0x0  nop
    ctx->pc = 0x1a33b4u;
    // NOP
    ctx->pc = 0x1a33b8u;
}
