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

// Function: sub_002E40F8
// Address: 0x2e40f8 - 0x2e4188
void sub_002E40F8_0x2e40f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E40F8_0x2e40f8");
#endif

    switch (ctx->pc) {
        case 0x2e4120u: goto label_2e4120;
        case 0x2e416cu: goto label_2e416c;
        default: break;
    }

    ctx->pc = 0x2e40f8u;

    // 0x2e40f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e40f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e40fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e40fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e4100: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2e4100u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x2e4104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2e4104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2e4108: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2e4108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2e410c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2e410cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2e4110: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e4110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4114: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2e4114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2e4118: 0xc0b906c  jal         func_2E41B0
    ctx->pc = 0x2E4118u;
    SET_GPR_U32(ctx, 31, 0x2E4120u);
    ctx->pc = 0x2E411Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4118u;
    // 0x2e411c: 0xe6140018  swc1        $f20, 0x18($s0) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E41B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E41B0u, 0x2E4118u, 0x2E4120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E4120u;
label_2e4120:
    // 0x2e4120: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2e4120u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2e4124: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x2e4124u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2e4128: 0x4600a406  mov.s       $f16, $f20
    ctx->pc = 0x2e4128u;
    ctx->f[16] = FPU_MOV_S(ctx->f[20]);
    // 0x2e412c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2e412cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2e4130: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2e4130u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e4134: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e4134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4138: 0xe6140024  swc1        $f20, 0x24($s0)
    ctx->pc = 0x2e4138u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x2e413c: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x2e413cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
    // 0x2e4140: 0xe6140028  swc1        $f20, 0x28($s0)
    ctx->pc = 0x2e4140u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x2e4144: 0x46008486  mov.s       $f18, $f16
    ctx->pc = 0x2e4144u;
    ctx->f[18] = FPU_MOV_S(ctx->f[16]);
    // 0x2e4148: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x2e4148u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x2e414c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2e414cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2e4150: 0x3c014120  lui         $at, 0x4120
    ctx->pc = 0x2e4150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16672 << 16));
    // 0x2e4154: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x2e4154u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x2e4158: 0x3c013f66  lui         $at, 0x3F66
    ctx->pc = 0x2e4158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16230 << 16));
    // 0x2e415c: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x2e415cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
    // 0x2e4160: 0x44818800  mtc1        $at, $f17
    ctx->pc = 0x2e4160u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[17], &bits, sizeof(bits)); }
    // 0x2e4164: 0xc0b906e  jal         func_2E41B8
    ctx->pc = 0x2E4164u;
    SET_GPR_U32(ctx, 31, 0x2E416Cu);
    ctx->pc = 0x2E4168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E4164u;
    // 0x2e4168: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E41B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E41B8u, 0x2E4164u, 0x2E416Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E416Cu;
label_2e416c:
    // 0x2e416c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2e416cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e4170: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2e4170u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2e4174: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2e4174u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e4178: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x2e4178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e417c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E417Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E4180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E417Cu;
        // 0x2e4180: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E417Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E4184u;
    // 0x2e4184: 0x0  nop
    ctx->pc = 0x2e4184u;
    // NOP
    ctx->pc = 0x2e4188u;
}
