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

// Function: sub_002BF0E0
// Address: 0x2bf0e0 - 0x2bf158
void sub_002BF0E0_0x2bf0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF0E0_0x2bf0e0");
#endif

    switch (ctx->pc) {
        case 0x2bf104u: goto label_2bf104;
        default: break;
    }

    ctx->pc = 0x2bf0e0u;

    // 0x2bf0e0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2bf0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2bf0e4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2bf0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2bf0e8: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2bf0e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x2bf0ec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2bf0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0f0: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x2bf0f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x2bf0f4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2bf0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf0f8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2bf0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x2bf0fc: 0xc0b0370  jal         func_2C0DC0
    ctx->pc = 0x2BF0FCu;
    SET_GPR_U32(ctx, 31, 0x2BF104u);
    ctx->pc = 0x2BF100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF0FCu;
    // 0x2bf100: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0DC0u, 0x2BF0FCu, 0x2BF104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF104u;
label_2bf104:
    // 0x2bf104: 0xc7a20004  lwc1        $f2, 0x4($sp)
    ctx->pc = 0x2bf104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2bf108: 0xc7a50000  lwc1        $f5, 0x0($sp)
    ctx->pc = 0x2bf108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2bf10c: 0x46001087  neg.s       $f2, $f2
    ctx->pc = 0x2bf10cu;
    ctx->f[2] = FPU_NEG_S(ctx->f[2]);
    // 0x2bf110: 0xc7a30008  lwc1        $f3, 0x8($sp)
    ctx->pc = 0x2bf110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2bf114: 0x46142942  mul.s       $f5, $f5, $f20
    ctx->pc = 0x2bf114u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x2bf118: 0xc6040010  lwc1        $f4, 0x10($s0)
    ctx->pc = 0x2bf118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2bf11c: 0x461418c2  mul.s       $f3, $f3, $f20
    ctx->pc = 0x2bf11cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x2bf120: 0xc6010014  lwc1        $f1, 0x14($s0)
    ctx->pc = 0x2bf120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2bf124: 0x46141082  mul.s       $f2, $f2, $f20
    ctx->pc = 0x2bf124u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x2bf128: 0xc6000018  lwc1        $f0, 0x18($s0)
    ctx->pc = 0x2bf128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2bf12c: 0x46052100  add.s       $f4, $f4, $f5
    ctx->pc = 0x2bf12cu;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[5]);
    // 0x2bf130: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2bf130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2bf134: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x2bf134u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x2bf138: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x2bf138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2bf13c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2bf13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2bf140: 0xe6040010  swc1        $f4, 0x10($s0)
    ctx->pc = 0x2bf140u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x2bf144: 0xe6010014  swc1        $f1, 0x14($s0)
    ctx->pc = 0x2bf144u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x2bf148: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x2bf148u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x2bf14c: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x2bf14cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2bf150: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF150u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF150u;
        // 0x2bf154: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF150u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF158u;
}
