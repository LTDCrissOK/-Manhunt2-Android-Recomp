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

// Function: sub_0037B390
// Address: 0x37b390 - 0x37b458
void sub_0037B390_0x37b390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037B390_0x37b390");
#endif

    switch (ctx->pc) {
        case 0x37b3c4u: goto label_37b3c4;
        default: break;
    }

    ctx->pc = 0x37b390u;

    // 0x37b390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x37b390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x37b394: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x37b394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x37b398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x37b398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37b39c: 0xe7b70028  swc1        $f23, 0x28($sp)
    ctx->pc = 0x37b39cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x37b3a0: 0xe7b60020  swc1        $f22, 0x20($sp)
    ctx->pc = 0x37b3a0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x37b3a4: 0x460075c6  mov.s       $f23, $f14
    ctx->pc = 0x37b3a4u;
    ctx->f[23] = FPU_MOV_S(ctx->f[14]);
    // 0x37b3a8: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x37b3a8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x37b3ac: 0x46007d86  mov.s       $f22, $f15
    ctx->pc = 0x37b3acu;
    ctx->f[22] = FPU_MOV_S(ctx->f[15]);
    // 0x37b3b0: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x37b3b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x37b3b4: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x37b3b4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x37b3b8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x37b3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x37b3bc: 0xc0dec2c  jal         func_37B0B0
    ctx->pc = 0x37B3BCu;
    SET_GPR_U32(ctx, 31, 0x37B3C4u);
    ctx->pc = 0x37B3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37B3BCu;
    // 0x37b3c0: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x37B0B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37B0B0u, 0x37B3BCu, 0x37B3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37B3C4u;
label_37b3c4:
    // 0x37b3c4: 0x4615a000  add.s       $f0, $f20, $f21
    ctx->pc = 0x37b3c4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[21]);
    // 0x37b3c8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x37b3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x37b3cc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x37b3ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x37b3d0: 0x4614a040  add.s       $f1, $f20, $f20
    ctx->pc = 0x37b3d0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[20]);
    // 0x37b3d4: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x37b3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x37b3d8: 0x4614ad01  sub.s       $f20, $f21, $f20
    ctx->pc = 0x37b3d8u;
    ctx->f[20] = FPU_SUB_S(ctx->f[21], ctx->f[20]);
    // 0x37b3dc: 0xe602002c  swc1        $f2, 0x2C($s0)
    ctx->pc = 0x37b3dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 44), bits); }
    // 0x37b3e0: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x37b3e0u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x37b3e4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x37b3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x37b3e8: 0x46150842  mul.s       $f1, $f1, $f21
    ctx->pc = 0x37b3e8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[21]);
    // 0x37b3ec: 0x0  nop
    ctx->pc = 0x37b3ecu;
    // NOP
    // 0x37b3f0: 0x0  nop
    ctx->pc = 0x37b3f0u;
    // NOP
    // 0x37b3f4: 0x4617b583  div.s       $f22, $f22, $f23
    ctx->pc = 0x37b3f4u;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[22], ctx->f[23]); }
    // 0x37b3f8: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x37b3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x37b3fc: 0x0  nop
    ctx->pc = 0x37b3fcu;
    // NOP
    // 0x37b400: 0x0  nop
    ctx->pc = 0x37b400u;
    // NOP
    // 0x37b404: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x37b404u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x37b408: 0x0  nop
    ctx->pc = 0x37b408u;
    // NOP
    // 0x37b40c: 0x0  nop
    ctx->pc = 0x37b40cu;
    // NOP
    // 0x37b410: 0x46140843  div.s       $f1, $f1, $f20
    ctx->pc = 0x37b410u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[20]); }
    // 0x37b414: 0x0  nop
    ctx->pc = 0x37b414u;
    // NOP
    // 0x37b418: 0x0  nop
    ctx->pc = 0x37b418u;
    // NOP
    // 0x37b41c: 0x46171083  div.s       $f2, $f2, $f23
    ctx->pc = 0x37b41cu;
    { if (ctx->f[23] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[23]); }
    // 0x37b420: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x37b420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x37b424: 0xc7b70028  lwc1        $f23, 0x28($sp)
    ctx->pc = 0x37b424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x37b428: 0xe6160014  swc1        $f22, 0x14($s0)
    ctx->pc = 0x37b428u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x37b42c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x37b42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x37b430: 0xe6010038  swc1        $f1, 0x38($s0)
    ctx->pc = 0x37b430u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x37b434: 0xe6020000  swc1        $f2, 0x0($s0)
    ctx->pc = 0x37b434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x37b438: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x37b438u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37b43c: 0xc7b60020  lwc1        $f22, 0x20($sp)
    ctx->pc = 0x37b43cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x37b440: 0x3e00008  jr          $ra
    ctx->pc = 0x37B440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37B444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37B440u;
        // 0x37b444: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37B440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x37B448u;
    // 0x37b448: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x37b448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x37b44c: 0x0  nop
    ctx->pc = 0x37b44cu;
    // NOP
    // 0x37b450: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x37b450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x37b454: 0x0  nop
    ctx->pc = 0x37b454u;
    // NOP
    ctx->pc = 0x37b458u;
}
