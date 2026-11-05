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

// Function: sub_0020A370
// Address: 0x20a370 - 0x20a418
void sub_0020A370_0x20a370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020A370_0x20a370");
#endif

    switch (ctx->pc) {
        case 0x20a3a0u: goto label_20a3a0;
        case 0x20a3f8u: goto label_20a3f8;
        default: break;
    }

    ctx->pc = 0x20a370u;

    // 0x20a370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20a370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x20a374: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20a374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20a378: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20a378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20a37c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x20a37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a380: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20a380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20a384: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x20a384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a388: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x20a388u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x20a38c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x20a38cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a390: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20a390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x20a394: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x20a394u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x20a398: 0xc0827c2  jal         func_209F08
    ctx->pc = 0x20A398u;
    SET_GPR_U32(ctx, 31, 0x20A3A0u);
    ctx->pc = 0x20A39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A398u;
    // 0x20a39c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209F08u, 0x20A398u, 0x20A3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A3A0u;
label_20a3a0:
    // 0x20a3a0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x20a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x20a3a4: 0x54430015  bnel        $v0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x20A3A4u;
    {
        const bool branch_taken_0x20a3a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20a3a4) {
            ctx->pc = 0x20A3A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20A3A4u;
            // 0x20a3a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20A3FCu;
            goto label_20a3fc;
        }
    }
    ctx->pc = 0x20A3ACu;
    // 0x20a3ac: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x20a3acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20a3b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20a3b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a3b4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x20a3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20a3b8: 0x3c01459c  lui         $at, 0x459C
    ctx->pc = 0x20a3b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17820 << 16));
    // 0x20a3bc: 0x34214000  ori         $at, $at, 0x4000
    ctx->pc = 0x20a3bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16384);
    // 0x20a3c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20a3c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20a3c4: 0x2405400e  addiu       $a1, $zero, 0x400E
    ctx->pc = 0x20a3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16398));
    // 0x20a3c8: 0x4600a001  sub.s       $f0, $f20, $f0
    ctx->pc = 0x20a3c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
    // 0x20a3cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20a3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x20a3d0: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x20a3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x20a3d4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x20a3d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a3d8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x20a3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x20a3dc: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x20a3dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20a3e0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a3e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a3e4: 0xafb20008  sw          $s2, 0x8($sp)
    ctx->pc = 0x20a3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 18));
    // 0x20a3e8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x20a3e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x20a3ec: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x20a3ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x20a3f0: 0xc08271e  jal         func_209C78
    ctx->pc = 0x20A3F0u;
    SET_GPR_U32(ctx, 31, 0x20A3F8u);
    ctx->pc = 0x20A3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20A3F0u;
    // 0x20a3f4: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x209C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x209C78u, 0x20A3F0u, 0x20A3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20A3F8u;
label_20a3f8:
    // 0x20a3f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20a3f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20a3fc:
    // 0x20a3fc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20a3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20a400: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20a400u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20a404: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x20a404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20a408: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x20a408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x20a40c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A40Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20A40Cu;
        // 0x20a410: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20A40Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20A414u;
    // 0x20a414: 0x0  nop
    ctx->pc = 0x20a414u;
    // NOP
    ctx->pc = 0x20a418u;
}
