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

// Function: sub_001C0668
// Address: 0x1c0668 - 0x1c0748
void sub_001C0668_0x1c0668(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C0668_0x1c0668");
#endif

    switch (ctx->pc) {
        case 0x1c06b4u: goto label_1c06b4;
        case 0x1c06fcu: goto label_1c06fc;
        case 0x1c0720u: goto label_1c0720;
        default: break;
    }

    ctx->pc = 0x1c0668u;

    // 0x1c0668: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c0668u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c066c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1c0670: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c0670u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1c0674: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c0674u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0678: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1c0678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1c067c: 0x24110003  addiu       $s1, $zero, 0x3
    ctx->pc = 0x1c067cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1c0680: 0x8e0304bc  lw          $v1, 0x4BC($s0)
    ctx->pc = 0x1c0680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
    // 0x1c0684: 0x1060002a  beqz        $v1, . + 4 + (0x2A << 2)
    ctx->pc = 0x1C0684u;
    {
        const bool branch_taken_0x1c0684 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0684u;
        // 0x1c0688: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0684) {
            ctx->pc = 0x1C0730u;
            goto label_1c0730;
        }
    }
    ctx->pc = 0x1C068Cu;
    // 0x1c068c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1c068cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1c0690: 0x8c630104  lw          $v1, 0x104($v1)
    ctx->pc = 0x1c0690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x1c0694: 0x8c45bd50  lw          $a1, -0x42B0($v0)
    ctx->pc = 0x1c0694u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x3FBD50u));
    // 0x1c0698: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1c0698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c069c: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1c069cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1c06a0: 0x8ca20104  lw          $v0, 0x104($a1)
    ctx->pc = 0x1c06a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 260)));
    // 0x1c06a4: 0x24c60070  addiu       $a2, $a2, 0x70
    ctx->pc = 0x1c06a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x1c06a8: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1c06a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c06ac: 0xc0f6a9a  jal         func_3DAA68
    ctx->pc = 0x1C06ACu;
    SET_GPR_U32(ctx, 31, 0x1C06B4u);
    ctx->pc = 0x1C06B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06ACu;
    // 0x1c06b0: 0x24a50070  addiu       $a1, $a1, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA68u, 0x1C06ACu, 0x1C06B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06B4u;
label_1c06b4:
    // 0x1c06b4: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x1c06b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c06b8: 0xc7a30004  lwc1        $f3, 0x4($sp)
    ctx->pc = 0x1c06b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1c06bc: 0xc7a40008  lwc1        $f4, 0x8($sp)
    ctx->pc = 0x1c06bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x1c06c0: 0x4602101a  mula.s      $f2, $f2
    ctx->pc = 0x1c06c0u;
    FPU_SET_ACC(ctx, FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x1c06c4: 0x4603181e  madda.s     $f3, $f3
    ctx->pc = 0x1c06c4u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[3])));
    // 0x1c06c8: 0x4604205c  madd.s      $f1, $f4, $f4
    ctx->pc = 0x1c06c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[4], ctx->f[4]));
    // 0x1c06cc: 0x46010044  c1          0x10044
    ctx->pc = 0x1c06ccu;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1c06d0: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1c06d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1c06d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c06d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c06d8: 0x0  nop
    ctx->pc = 0x1c06d8u;
    // NOP
    // 0x1c06dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c06dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c06e0: 0x0  nop
    ctx->pc = 0x1c06e0u;
    // NOP
    // 0x1c06e4: 0x45010012  bc1t        . + 4 + (0x12 << 2)
    ctx->pc = 0x1C06E4u;
    {
        const bool branch_taken_0x1c06e4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C06E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C06E4u;
        // 0x1c06e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c06e4) {
            ctx->pc = 0x1C0730u;
            goto label_1c0730;
        }
    }
    ctx->pc = 0x1C06ECu;
    // 0x1c06ec: 0x8e0504bc  lw          $a1, 0x4BC($s0)
    ctx->pc = 0x1c06ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1212)));
    // 0x1c06f0: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x1c06f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x1c06f4: 0xc04785a  jal         func_11E168
    ctx->pc = 0x1C06F4u;
    SET_GPR_U32(ctx, 31, 0x1C06FCu);
    ctx->pc = 0x1C06F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C06F4u;
    // 0x1c06f8: 0x24849a08  addiu       $a0, $a0, -0x65F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E168u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E168u, 0x1C06F4u, 0x1C06FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C06FCu;
label_1c06fc:
    // 0x1c06fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1c06fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c0700: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0700u;
    {
        const bool branch_taken_0x1c0700 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0700) {
            ctx->pc = 0x1C0704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0700u;
            // 0x1c0704: 0x8c8200a8  lw          $v0, 0xA8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C0710u;
            goto label_1c0710;
        }
    }
    ctx->pc = 0x1C0708u;
    // 0x1c0708: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C0708u;
    {
        const bool branch_taken_0x1c0708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0708u;
        // 0x1c070c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0708) {
            ctx->pc = 0x1C0730u;
            goto label_1c0730;
        }
    }
    ctx->pc = 0x1C0710u;
label_1c0710:
    // 0x1c0710: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C0710u;
    {
        const bool branch_taken_0x1c0710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c0710) {
            ctx->pc = 0x1C0714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C0710u;
            // 0x1c0714: 0x24110023  addiu       $s1, $zero, 0x23 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C072Cu;
            goto label_1c072c;
        }
    }
    ctx->pc = 0x1C0718u;
    // 0x1c0718: 0xc0443e2  jal         func_110F88
    ctx->pc = 0x1C0718u;
    SET_GPR_U32(ctx, 31, 0x1C0720u);
    ctx->pc = 0x110F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x110F88u, 0x1C0718u, 0x1C0720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C0720u;
label_1c0720:
    // 0x1c0720: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C0720u;
    {
        const bool branch_taken_0x1c0720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C0720u;
        // 0x1c0724: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c0720) {
            ctx->pc = 0x1C0730u;
            goto label_1c0730;
        }
    }
    ctx->pc = 0x1C0728u;
    // 0x1c0728: 0x24110023  addiu       $s1, $zero, 0x23
    ctx->pc = 0x1c0728u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_1c072c:
    // 0x1c072c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1c072cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1c0730:
    // 0x1c0730: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c0730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c0734: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c0734u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1c0738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c0738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c073c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C073Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C0740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C073Cu;
        // 0x1c0740: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C073Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C0744u;
    // 0x1c0744: 0x0  nop
    ctx->pc = 0x1c0744u;
    // NOP
    ctx->pc = 0x1c0748u;
}
