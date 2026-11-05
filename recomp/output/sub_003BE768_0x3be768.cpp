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

// Function: sub_003BE768
// Address: 0x3be768 - 0x3be880
void sub_003BE768_0x3be768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BE768_0x3be768");
#endif

    switch (ctx->pc) {
        case 0x3be78cu: goto label_3be78c;
        case 0x3be7a4u: goto label_3be7a4;
        case 0x3be7dcu: goto label_3be7dc;
        case 0x3be818u: goto label_3be818;
        case 0x3be828u: goto label_3be828;
        case 0x3be844u: goto label_3be844;
        case 0x3be854u: goto label_3be854;
        default: break;
    }

    ctx->pc = 0x3be768u;

    // 0x3be768: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3be768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x3be76c: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x3be76cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x3be770: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3be770u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3be774: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x3be774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x3be778: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x3be778u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x3be77c: 0xe7b50068  swc1        $f21, 0x68($sp)
    ctx->pc = 0x3be77cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x3be780: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x3be780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x3be784: 0xc0e4a5e  jal         func_392978
    ctx->pc = 0x3BE784u;
    SET_GPR_U32(ctx, 31, 0x3BE78Cu);
    ctx->pc = 0x3BE788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE784u;
    // 0x3be788: 0x3c110048  lui         $s1, 0x48 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)72 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x392978u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x392978u, 0x3BE784u, 0x3BE78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE78Cu;
label_3be78c:
    // 0x3be78c: 0x8e30a478  lw          $s0, -0x5B88($s1)
    ctx->pc = 0x3be78cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x3be790: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x3be790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3be794: 0x12020031  beq         $s0, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3BE794u;
    {
        const bool branch_taken_0x3be794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3BE798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE794u;
        // 0x3be798: 0x46000546  mov.s       $f21, $f0 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be794) {
            ctx->pc = 0x3BE85Cu;
            goto label_3be85c;
        }
    }
    ctx->pc = 0x3BE79Cu;
    // 0x3be79c: 0xc0e4ee0  jal         func_393B80
    ctx->pc = 0x3BE79Cu;
    SET_GPR_U32(ctx, 31, 0x3BE7A4u);
    ctx->pc = 0x3BE7A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE79Cu;
    // 0x3be7a0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x393B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393B80u, 0x3BE79Cu, 0x3BE7A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE7A4u;
label_3be7a4:
    // 0x3be7a4: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x3BE7A4u;
    {
        const bool branch_taken_0x3be7a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE7A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7A4u;
        // 0x3be7a8: 0x4600a806  mov.s       $f0, $f21 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be7a4) {
            ctx->pc = 0x3BE860u;
            goto label_3be860;
        }
    }
    ctx->pc = 0x3BE7ACu;
    // 0x3be7ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3be7acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3be7b0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x3be7b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3be7b4: 0x0  nop
    ctx->pc = 0x3be7b4u;
    // NOP
    // 0x3be7b8: 0x45000028  bc1f        . + 4 + (0x28 << 2)
    ctx->pc = 0x3BE7B8u;
    {
        const bool branch_taken_0x3be7b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3BE7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7B8u;
        // 0x3be7bc: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be7b8) {
            ctx->pc = 0x3BE85Cu;
            goto label_3be85c;
        }
    }
    ctx->pc = 0x3BE7C0u;
    // 0x3be7c0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3be7c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3be7c4: 0x24420c00  addiu       $v0, $v0, 0xC00
    ctx->pc = 0x3be7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3072));
    // 0x3be7c8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3be7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3be7cc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3be7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3be7d0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x3be7d0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x3be7d4: 0xc0f5212  jal         func_3D4848
    ctx->pc = 0x3BE7D4u;
    SET_GPR_U32(ctx, 31, 0x3BE7DCu);
    ctx->pc = 0x3BE7D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE7D4u;
    // 0x3be7d8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4848u, 0x3BE7D4u, 0x3BE7DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE7DCu;
label_3be7dc:
    // 0x3be7dc: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x3be7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x3be7e0: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE7E0u;
    {
        const bool branch_taken_0x3be7e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE7E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7E0u;
        // 0x3be7e4: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be7e0) {
            ctx->pc = 0x3BE7F4u;
            goto label_3be7f4;
        }
    }
    ctx->pc = 0x3BE7E8u;
    // 0x3be7e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3be7e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3be7ec: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3BE7ECu;
    {
        const bool branch_taken_0x3be7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE7ECu;
        // 0x3be7f0: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be7ec) {
            ctx->pc = 0x3BE800u;
            goto label_3be800;
        }
    }
    ctx->pc = 0x3BE7F4u;
label_3be7f4:
    // 0x3be7f4: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x3be7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x3be7f8: 0xdc430c08  ld          $v1, 0xC08($v0)
    ctx->pc = 0x3be7f8u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x480C08u));
    // 0x3be7fc: 0xffa30018  sd          $v1, 0x18($sp)
    ctx->pc = 0x3be7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 3));
label_3be800:
    // 0x3be800: 0x8e23a478  lw          $v1, -0x5B88($s1)
    ctx->pc = 0x3be800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294943864)));
    // 0x3be804: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3be804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3be808: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BE808u;
    {
        const bool branch_taken_0x3be808 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3be808) {
            ctx->pc = 0x3BE820u;
            goto label_3be820;
        }
    }
    ctx->pc = 0x3BE810u;
    // 0x3be810: 0xc0e4e4a  jal         func_393928
    ctx->pc = 0x3BE810u;
    SET_GPR_U32(ctx, 31, 0x3BE818u);
    ctx->pc = 0x3BE814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE810u;
    // 0x3be814: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x393928u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x393928u, 0x3BE810u, 0x3BE818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE818u;
label_3be818:
    // 0x3be818: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3BE818u;
    {
        const bool branch_taken_0x3be818 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3BE81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE818u;
        // 0x3be81c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be818) {
            ctx->pc = 0x3BE834u;
            goto label_3be834;
        }
    }
    ctx->pc = 0x3BE820u;
label_3be820:
    // 0x3be820: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x3BE820u;
    SET_GPR_U32(ctx, 31, 0x3BE828u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x3BE820u, 0x3BE828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE828u;
label_3be828:
    // 0x3be828: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x3be828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x3be82c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3be82cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x3be830: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3be830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3be834:
    // 0x3be834: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3BE834u;
    {
        const bool branch_taken_0x3be834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3be834) {
            ctx->pc = 0x3BE84Cu;
            goto label_3be84c;
        }
    }
    ctx->pc = 0x3BE83Cu;
    // 0x3be83c: 0xc0efa20  jal         func_3BE880
    ctx->pc = 0x3BE83Cu;
    SET_GPR_U32(ctx, 31, 0x3BE844u);
    ctx->pc = 0x3BE880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BE880u, 0x3BE83Cu, 0x3BE844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE844u;
label_3be844:
    // 0x3be844: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x3be844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3be848: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3be848u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_3be84c:
    // 0x3be84c: 0xc0f517c  jal         func_3D45F0
    ctx->pc = 0x3BE84Cu;
    SET_GPR_U32(ctx, 31, 0x3BE854u);
    ctx->pc = 0x3BE850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BE84Cu;
    // 0x3be850: 0xdfa40018  ld          $a0, 0x18($sp) (Delay Slot)
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D45F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D45F0u, 0x3BE84Cu, 0x3BE854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BE854u;
label_3be854:
    // 0x3be854: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3BE854u;
    {
        const bool branch_taken_0x3be854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3BE858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE854u;
        // 0x3be858: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3be854) {
            ctx->pc = 0x3BE864u;
            goto label_3be864;
        }
    }
    ctx->pc = 0x3BE85Cu;
label_3be85c:
    // 0x3be85c: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x3be85cu;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
label_3be860:
    // 0x3be860: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3be860u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3be864:
    // 0x3be864: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x3be864u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3be868: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x3be868u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3be86c: 0xc7b50068  lwc1        $f21, 0x68($sp)
    ctx->pc = 0x3be86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3be870: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x3be870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3be874: 0x3e00008  jr          $ra
    ctx->pc = 0x3BE874u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BE878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BE874u;
        // 0x3be878: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BE874u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BE87Cu;
    // 0x3be87c: 0x0  nop
    ctx->pc = 0x3be87cu;
    // NOP
    ctx->pc = 0x3be880u;
}
