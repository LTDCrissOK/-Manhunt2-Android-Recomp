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

// Function: sub_002FD3B8
// Address: 0x2fd3b8 - 0x2fd4c0
void sub_002FD3B8_0x2fd3b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FD3B8_0x2fd3b8");
#endif

    switch (ctx->pc) {
        case 0x2fd3ecu: goto label_2fd3ec;
        case 0x2fd404u: goto label_2fd404;
        case 0x2fd410u: goto label_2fd410;
        case 0x2fd418u: goto label_2fd418;
        case 0x2fd440u: goto label_2fd440;
        case 0x2fd448u: goto label_2fd448;
        case 0x2fd480u: goto label_2fd480;
        case 0x2fd488u: goto label_2fd488;
        default: break;
    }

    ctx->pc = 0x2fd3b8u;

    // 0x2fd3b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fd3b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fd3bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fd3bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd3c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fd3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2fd3c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2fd3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2fd3c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2fd3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2fd3cc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2fd3ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd3d0: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2fd3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2fd3d4: 0xe7b50028  swc1        $f21, 0x28($sp)
    ctx->pc = 0x2fd3d4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2fd3d8: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x2fd3d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x2fd3dc: 0x8e2213c4  lw          $v0, 0x13C4($s1)
    ctx->pc = 0x2fd3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5060)));
    // 0x2fd3e0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2fd3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2fd3e4: 0xc079848  jal         func_1E6120
    ctx->pc = 0x2FD3E4u;
    SET_GPR_U32(ctx, 31, 0x2FD3ECu);
    ctx->pc = 0x2FD3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD3E4u;
    // 0x2fd3e8: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x2FD3E4u, 0x2FD3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD3ECu;
label_2fd3ec:
    // 0x2fd3ec: 0x8e2313c4  lw          $v1, 0x13C4($s1)
    ctx->pc = 0x2fd3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5060)));
    // 0x2fd3f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fd3f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd3f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fd3f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fd3f8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2fd3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x2fd3fc: 0xc079848  jal         func_1E6120
    ctx->pc = 0x2FD3FCu;
    SET_GPR_U32(ctx, 31, 0x2FD404u);
    ctx->pc = 0x2FD400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD3FCu;
    // 0x2fd400: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6120u, 0x2FD3FCu, 0x2FD404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD404u;
label_2fd404:
    // 0x2fd404: 0x8e2413c4  lw          $a0, 0x13C4($s1)
    ctx->pc = 0x2fd404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5060)));
    // 0x2fd408: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x2FD408u;
    SET_GPR_U32(ctx, 31, 0x2FD410u);
    ctx->pc = 0x2FD40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD408u;
    // 0x2fd40c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x2FD408u, 0x2FD410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD410u;
label_2fd410:
    // 0x2fd410: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD410u;
    SET_GPR_U32(ctx, 31, 0x2FD418u);
    ctx->pc = 0x2FD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD410u;
    // 0x2fd414: 0x8e2413c4  lw          $a0, 0x13C4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD410u, 0x2FD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD418u;
label_2fd418:
    // 0x2fd418: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2fd418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2fd41c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2fd41cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2fd420: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2fd420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2fd424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd428: 0x0  nop
    ctx->pc = 0x2fd428u;
    // NOP
    // 0x2fd42c: 0x4500001b  bc1f        . + 4 + (0x1B << 2)
    ctx->pc = 0x2FD42Cu;
    {
        const bool branch_taken_0x2fd42c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FD430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD42Cu;
        // 0x2fd430: 0x46000d46  mov.s       $f21, $f1 (Delay Slot)
        ctx->f[21] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd42c) {
            ctx->pc = 0x2FD49Cu;
            goto label_2fd49c;
        }
    }
    ctx->pc = 0x2FD434u;
    // 0x2fd434: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x2fd434u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x2fd438: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2fd438u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2fd43c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2fd43cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2fd440:
    // 0x2fd440: 0xc0bf470  jal         func_2FD1C0
    ctx->pc = 0x2FD440u;
    SET_GPR_U32(ctx, 31, 0x2FD448u);
    ctx->pc = 0x2FD444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD440u;
    // 0x2fd444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FD1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD1C0u, 0x2FD440u, 0x2FD448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD448u;
label_2fd448:
    // 0x2fd448: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2FD448u;
    {
        const bool branch_taken_0x2fd448 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD448u;
        // 0x2fd44c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd448) {
            ctx->pc = 0x2FD4A0u;
            goto label_2fd4a0;
        }
    }
    ctx->pc = 0x2FD450u;
    // 0x2fd450: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2fd450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd454: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2fd454u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2fd458: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fd458u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fd45c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x2fd45cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x2fd460: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x2fd460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x2fd464: 0xc6400020  lwc1        $f0, 0x20($s2)
    ctx->pc = 0x2fd464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd468: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2fd468u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x2fd46c: 0x46000042  mul.s       $f1, $f0, $f0
    ctx->pc = 0x2fd46cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2fd470: 0xe6400020  swc1        $f0, 0x20($s2)
    ctx->pc = 0x2fd470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 32), bits); }
    // 0x2fd474: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x2fd474u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 48), bits); }
    // 0x2fd478: 0xc076dd0  jal         func_1DB740
    ctx->pc = 0x2FD478u;
    SET_GPR_U32(ctx, 31, 0x2FD480u);
    ctx->pc = 0x2FD47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD478u;
    // 0x2fd47c: 0x8e2413c4  lw          $a0, 0x13C4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DB740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DB740u, 0x2FD478u, 0x2FD480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD480u;
label_2fd480:
    // 0x2fd480: 0xc0767f2  jal         func_1D9FC8
    ctx->pc = 0x2FD480u;
    SET_GPR_U32(ctx, 31, 0x2FD488u);
    ctx->pc = 0x2FD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FD480u;
    // 0x2fd484: 0x8e2413c4  lw          $a0, 0x13C4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 5060)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D9FC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D9FC8u, 0x2FD480u, 0x2FD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FD488u;
label_2fd488:
    // 0x2fd488: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x2fd488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2fd48c: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x2fd48cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2fd490: 0x0  nop
    ctx->pc = 0x2fd490u;
    // NOP
    // 0x2fd494: 0x4501ffea  bc1t        . + 4 + (-0x16 << 2)
    ctx->pc = 0x2FD494u;
    {
        const bool branch_taken_0x2fd494 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2fd494) {
            ctx->pc = 0x2FD440u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2fd440;
        }
    }
    ctx->pc = 0x2FD49Cu;
label_2fd49c:
    // 0x2fd49c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2fd49cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd4a0:
    // 0x2fd4a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fd4a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fd4a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2fd4a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2fd4a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2fd4a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fd4ac: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2fd4acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2fd4b0: 0xc7b50028  lwc1        $f21, 0x28($sp)
    ctx->pc = 0x2fd4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2fd4b4: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x2fd4b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2fd4b8: 0x3e00008  jr          $ra
    ctx->pc = 0x2FD4B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FD4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FD4B8u;
        // 0x2fd4bc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FD4B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FD4C0u;
}
