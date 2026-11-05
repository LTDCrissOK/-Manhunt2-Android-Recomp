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

// Function: sub_0036A280
// Address: 0x36a280 - 0x36a3a8
void sub_0036A280_0x36a280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036A280_0x36a280");
#endif

    switch (ctx->pc) {
        case 0x36a2f0u: goto label_36a2f0;
        case 0x36a364u: goto label_36a364;
        case 0x36a36cu: goto label_36a36c;
        default: break;
    }

    ctx->pc = 0x36a280u;

    // 0x36a280: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x36a280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x36a284: 0xffb30078  sd          $s3, 0x78($sp)
    ctx->pc = 0x36a284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 19));
    // 0x36a288: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x36a288u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a28c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x36a28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    // 0x36a290: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x36a290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
    // 0x36a294: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36a294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a298: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x36a298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x36a29c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x36a29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2a0: 0xe7bb00c8  swc1        $f27, 0xC8($sp)
    ctx->pc = 0x36a2a0u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x36a2a4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x36a2a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2a8: 0xe7ba00c0  swc1        $f26, 0xC0($sp)
    ctx->pc = 0x36a2a8u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x36a2ac: 0x46009ec6  mov.s       $f27, $f19
    ctx->pc = 0x36a2acu;
    ctx->f[27] = FPU_MOV_S(ctx->f[19]);
    // 0x36a2b0: 0xe7b900b8  swc1        $f25, 0xB8($sp)
    ctx->pc = 0x36a2b0u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x36a2b4: 0x46008686  mov.s       $f26, $f16
    ctx->pc = 0x36a2b4u;
    ctx->f[26] = FPU_MOV_S(ctx->f[16]);
    // 0x36a2b8: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x36a2b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x36a2bc: 0x46009646  mov.s       $f25, $f18
    ctx->pc = 0x36a2bcu;
    ctx->f[25] = FPU_MOV_S(ctx->f[18]);
    // 0x36a2c0: 0xe7b700a8  swc1        $f23, 0xA8($sp)
    ctx->pc = 0x36a2c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x36a2c4: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x36a2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2c8: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x36a2c8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x36a2cc: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x36a2ccu;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x36a2d0: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x36a2d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x36a2d4: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x36a2d4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x36a2d8: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x36a2d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x36a2dc: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x36a2dcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x36a2e0: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x36a2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x36a2e4: 0x46007e06  mov.s       $f24, $f15
    ctx->pc = 0x36a2e4u;
    ctx->f[24] = FPU_MOV_S(ctx->f[15]);
    // 0x36a2e8: 0xc0da81e  jal         func_36A078
    ctx->pc = 0x36A2E8u;
    SET_GPR_U32(ctx, 31, 0x36A2F0u);
    ctx->pc = 0x36A2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A2E8u;
    // 0x36a2ec: 0x46008d06  mov.s       $f20, $f17 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[17]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A078u, 0x36A2E8u, 0x36A2F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A2F0u;
label_36a2f0:
    // 0x36a2f0: 0x4600a446  mov.s       $f17, $f20
    ctx->pc = 0x36a2f0u;
    ctx->f[17] = FPU_MOV_S(ctx->f[20]);
    // 0x36a2f4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x36a2f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2f8: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x36a2f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a2fc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x36a2fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a300: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x36a300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a304: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x36a304u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x36a308: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x36a308u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x36a30c: 0x4600bb86  mov.s       $f14, $f23
    ctx->pc = 0x36a30cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[23]);
    // 0x36a310: 0x4600c3c6  mov.s       $f15, $f24
    ctx->pc = 0x36a310u;
    ctx->f[15] = FPU_MOV_S(ctx->f[24]);
    // 0x36a314: 0x4600d406  mov.s       $f16, $f26
    ctx->pc = 0x36a314u;
    ctx->f[16] = FPU_MOV_S(ctx->f[26]);
    // 0x36a318: 0x4600cc86  mov.s       $f18, $f25
    ctx->pc = 0x36a318u;
    ctx->f[18] = FPU_MOV_S(ctx->f[25]);
    // 0x36a31c: 0xe7bb0018  swc1        $f27, 0x18($sp)
    ctx->pc = 0x36a31cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x36a320: 0xe7b90000  swc1        $f25, 0x0($sp)
    ctx->pc = 0x36a320u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36a324: 0x46008cc6  mov.s       $f19, $f17
    ctx->pc = 0x36a324u;
    ctx->f[19] = FPU_MOV_S(ctx->f[17]);
    // 0x36a328: 0xe7bb0008  swc1        $f27, 0x8($sp)
    ctx->pc = 0x36a328u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36a32c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x36a32cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a330: 0xe7ba0010  swc1        $f26, 0x10($sp)
    ctx->pc = 0x36a330u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x36a334: 0xc0502d  daddu       $t2, $a2, $zero
    ctx->pc = 0x36a334u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a338: 0xafb30020  sw          $s3, 0x20($sp)
    ctx->pc = 0x36a338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 19));
    // 0x36a33c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x36a33cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a340: 0xafb00028  sw          $s0, 0x28($sp)
    ctx->pc = 0x36a340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 16));
    // 0x36a344: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x36a344u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36a348: 0xafb10030  sw          $s1, 0x30($sp)
    ctx->pc = 0x36a348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 17));
    // 0x36a34c: 0xafb20038  sw          $s2, 0x38($sp)
    ctx->pc = 0x36a34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 18));
    // 0x36a350: 0xafb30040  sw          $s3, 0x40($sp)
    ctx->pc = 0x36a350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 19));
    // 0x36a354: 0xafb00048  sw          $s0, 0x48($sp)
    ctx->pc = 0x36a354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 16));
    // 0x36a358: 0xafb10050  sw          $s1, 0x50($sp)
    ctx->pc = 0x36a358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 17));
    // 0x36a35c: 0xc0da852  jal         func_36A148
    ctx->pc = 0x36A35Cu;
    SET_GPR_U32(ctx, 31, 0x36A364u);
    ctx->pc = 0x36A360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36A35Cu;
    // 0x36a360: 0xafb20058  sw          $s2, 0x58($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36A148u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A148u, 0x36A35Cu, 0x36A364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A364u;
label_36a364:
    // 0x36a364: 0xc0da828  jal         func_36A0A0
    ctx->pc = 0x36A364u;
    SET_GPR_U32(ctx, 31, 0x36A36Cu);
    ctx->pc = 0x36A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36A0A0u, 0x36A364u, 0x36A36Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36A36Cu;
label_36a36c:
    // 0x36a36c: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x36a36cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36a370: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x36a370u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x36a374: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x36a374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36a378: 0xdfb30078  ld          $s3, 0x78($sp)
    ctx->pc = 0x36a378u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x36a37c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x36a37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36a380: 0xc7bb00c8  lwc1        $f27, 0xC8($sp)
    ctx->pc = 0x36a380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
    // 0x36a384: 0xc7ba00c0  lwc1        $f26, 0xC0($sp)
    ctx->pc = 0x36a384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x36a388: 0xc7b900b8  lwc1        $f25, 0xB8($sp)
    ctx->pc = 0x36a388u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x36a38c: 0xc7b800b0  lwc1        $f24, 0xB0($sp)
    ctx->pc = 0x36a38cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x36a390: 0xc7b700a8  lwc1        $f23, 0xA8($sp)
    ctx->pc = 0x36a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x36a394: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x36a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x36a398: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x36a398u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x36a39c: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x36a39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36a3a0: 0x3e00008  jr          $ra
    ctx->pc = 0x36A3A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36A3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36A3A0u;
        // 0x36a3a4: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36A3A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36A3A8u;
}
