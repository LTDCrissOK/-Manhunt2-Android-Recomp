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

// Function: sub_002889A0
// Address: 0x2889a0 - 0x288a60
void sub_002889A0_0x2889a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002889A0_0x2889a0");
#endif

    switch (ctx->pc) {
        case 0x288a08u: goto label_288a08;
        case 0x288a10u: goto label_288a10;
        case 0x288a1cu: goto label_288a1c;
        case 0x288a3cu: goto label_288a3c;
        default: break;
    }

    ctx->pc = 0x2889a0u;

    // 0x2889a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2889a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2889a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2889a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2889a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2889a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2889ac: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x2889acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x2889b0: 0xe7b70048  swc1        $f23, 0x48($sp)
    ctx->pc = 0x2889b0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x2889b4: 0x2610b0e0  addiu       $s0, $s0, -0x4F20
    ctx->pc = 0x2889b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947040));
    // 0x2889b8: 0xe7b60040  swc1        $f22, 0x40($sp)
    ctx->pc = 0x2889b8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2889bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2889bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2889c0: 0xe7b50038  swc1        $f21, 0x38($sp)
    ctx->pc = 0x2889c0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2889c4: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x2889c4u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
    // 0x2889c8: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x2889c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2889cc: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x2889ccu;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
    // 0x2889d0: 0xffa60070  sd          $a2, 0x70($sp)
    ctx->pc = 0x2889d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 6));
    // 0x2889d4: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x2889d4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x2889d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2889d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2889dc: 0x46007dc6  mov.s       $f23, $f15
    ctx->pc = 0x2889dcu;
    ctx->f[23] = FPU_MOV_S(ctx->f[15]);
    // 0x2889e0: 0xe7b00068  swc1        $f16, 0x68($sp)
    ctx->pc = 0x2889e0u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x2889e4: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x2889e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x2889e8: 0xffa70078  sd          $a3, 0x78($sp)
    ctx->pc = 0x2889e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 7));
    // 0x2889ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2889ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2889f0: 0xffa80080  sd          $t0, 0x80($sp)
    ctx->pc = 0x2889f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 8));
    // 0x2889f4: 0xffa90088  sd          $t1, 0x88($sp)
    ctx->pc = 0x2889f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 9));
    // 0x2889f8: 0xffaa0090  sd          $t2, 0x90($sp)
    ctx->pc = 0x2889f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 10));
    // 0x2889fc: 0xffab0098  sd          $t3, 0x98($sp)
    ctx->pc = 0x2889fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 11));
    // 0x288a00: 0xc0f0242  jal         func_3C0908
    ctx->pc = 0x288A00u;
    SET_GPR_U32(ctx, 31, 0x288A08u);
    ctx->pc = 0x288A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A00u;
    // 0x288a04: 0xe7b2006c  swc1        $f18, 0x6C($sp) (Delay Slot)
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C0908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C0908u, 0x288A00u, 0x288A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A08u;
label_288a08:
    // 0x288a08: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x288A08u;
    SET_GPR_U32(ctx, 31, 0x288A10u);
    ctx->pc = 0x288A0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A08u;
    // 0x288a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x288A08u, 0x288A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A10u;
label_288a10:
    // 0x288a10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x288a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a14: 0xc0aed9c  jal         func_2BB670
    ctx->pc = 0x288A14u;
    SET_GPR_U32(ctx, 31, 0x288A1Cu);
    ctx->pc = 0x288A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A14u;
    // 0x288a18: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB670u, 0x288A14u, 0x288A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A1Cu;
label_288a1c:
    // 0x288a1c: 0x44808000  mtc1        $zero, $f16
    ctx->pc = 0x288a1cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[16], &bits, sizeof(bits)); }
    // 0x288a20: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x288a20u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x288a24: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x288a24u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
    // 0x288a28: 0x4600b386  mov.s       $f14, $f22
    ctx->pc = 0x288a28u;
    ctx->f[14] = FPU_MOV_S(ctx->f[22]);
    // 0x288a2c: 0x4600bbc6  mov.s       $f15, $f23
    ctx->pc = 0x288a2cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[23]);
    // 0x288a30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x288a30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288a34: 0xc09f662  jal         func_27D988
    ctx->pc = 0x288A34u;
    SET_GPR_U32(ctx, 31, 0x288A3Cu);
    ctx->pc = 0x288A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288A34u;
    // 0x288a38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27D988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27D988u, 0x288A34u, 0x288A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x288A3Cu;
label_288a3c:
    // 0x288a3c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x288a3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288a40: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x288a40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288a44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288a44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288a48: 0xc7b70048  lwc1        $f23, 0x48($sp)
    ctx->pc = 0x288a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x288a4c: 0xc7b60040  lwc1        $f22, 0x40($sp)
    ctx->pc = 0x288a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x288a50: 0xc7b50038  lwc1        $f21, 0x38($sp)
    ctx->pc = 0x288a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x288a54: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x288a54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x288a58: 0x3e00008  jr          $ra
    ctx->pc = 0x288A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288A58u;
        // 0x288a5c: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288A60u;
}
