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

// Function: sub_00375988
// Address: 0x375988 - 0x375a10
void sub_00375988_0x375988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00375988_0x375988");
#endif

    switch (ctx->pc) {
        case 0x3759f0u: goto label_3759f0;
        default: break;
    }

    ctx->pc = 0x375988u;

    // 0x375988: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x375988u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x37598c: 0x44036000  mfc1        $v1, $f12
    ctx->pc = 0x37598cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x375990: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x375990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x375994: 0x3c02c07f  lui         $v0, 0xC07F
    ctx->pc = 0x375994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49279 << 16));
    // 0x375998: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x375998u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x37599c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x37599cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3759a0: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3759a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x3759a4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x3759a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x3759a8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3759a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3759ac: 0x1085c3  sra         $s0, $s0, 23
    ctx->pc = 0x3759acu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 23));
    // 0x3759b0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3759b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3759b4: 0x3210007f  andi        $s0, $s0, 0x7F
    ctx->pc = 0x3759b4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)127);
    // 0x3759b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3759b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3759bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3759bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3759c0: 0x3c050065  lui         $a1, 0x65
    ctx->pc = 0x3759c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)101 << 16));
    // 0x3759c4: 0x460c6082  mul.s       $f2, $f12, $f12
    ctx->pc = 0x3759c4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[12], ctx->f[12]);
    // 0x3759c8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x3759c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x3759cc: 0x2610ff81  addiu       $s0, $s0, -0x7F
    ctx->pc = 0x3759ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967169));
    // 0x3759d0: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x3759d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x3759d4: 0x24a56030  addiu       $a1, $a1, 0x6030
    ctx->pc = 0x3759d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24624));
    // 0x3759d8: 0xe7ac0008  swc1        $f12, 0x8($sp)
    ctx->pc = 0x3759d8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3759dc: 0x460c1042  mul.s       $f1, $f2, $f12
    ctx->pc = 0x3759dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[12]);
    // 0x3759e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3759e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3759e4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3759e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3759e8: 0xc0df50e  jal         func_37D438
    ctx->pc = 0x3759E8u;
    SET_GPR_U32(ctx, 31, 0x3759F0u);
    ctx->pc = 0x3759ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3759E8u;
    // 0x3759ec: 0xe7a10000  swc1        $f1, 0x0($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x37D438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37D438u, 0x3759E8u, 0x3759F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3759F0u;
label_3759f0:
    // 0x3759f0: 0x44900800  mtc1        $s0, $f1
    ctx->pc = 0x3759f0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3759f4: 0x0  nop
    ctx->pc = 0x3759f4u;
    // NOP
    // 0x3759f8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3759f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3759fc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x3759fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x375a00: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x375a00u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x375a04: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x375a04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x375a08: 0x3e00008  jr          $ra
    ctx->pc = 0x375A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x375A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x375A08u;
        // 0x375a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x375A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x375A10u;
}
