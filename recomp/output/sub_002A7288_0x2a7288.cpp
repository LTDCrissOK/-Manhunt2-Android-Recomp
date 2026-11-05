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

// Function: sub_002A7288
// Address: 0x2a7288 - 0x2a7318
void sub_002A7288_0x2a7288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A7288_0x2a7288");
#endif

    switch (ctx->pc) {
        case 0x2a72a8u: goto label_2a72a8;
        case 0x2a72d0u: goto label_2a72d0;
        case 0x2a7300u: goto label_2a7300;
        default: break;
    }

    ctx->pc = 0x2a7288u;

    // 0x2a7288: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2a7288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2a728c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2a728cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2a7290: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2a7290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2a7294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2a7294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a7298: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a7298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a729c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2a729cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72a0: 0xc0a9f48  jal         func_2A7D20
    ctx->pc = 0x2A72A0u;
    SET_GPR_U32(ctx, 31, 0x2A72A8u);
    ctx->pc = 0x2A72A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72A0u;
    // 0x2a72a4: 0xe7b40030  swc1        $f20, 0x30($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A7D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7D20u, 0x2A72A0u, 0x2A72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72A8u;
label_2a72a8:
    // 0x2a72a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2a72a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2a72ac: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2a72acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2a72b0: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x2a72b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a72b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a72b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a72b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a72bc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a72bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72c0: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a72c0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a72c4: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x2a72c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a72c8: 0xc0a9c6c  jal         func_2A71B0
    ctx->pc = 0x2A72C8u;
    SET_GPR_U32(ctx, 31, 0x2A72D0u);
    ctx->pc = 0x2A72CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72C8u;
    // 0x2a72cc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71B0u, 0x2A72C8u, 0x2A72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A72D0u;
label_2a72d0:
    // 0x2a72d0: 0xc6030004  lwc1        $f3, 0x4($s0)
    ctx->pc = 0x2a72d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a72d4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a72d4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a72d8: 0xc6020000  lwc1        $f2, 0x0($s0)
    ctx->pc = 0x2a72d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a72dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a72dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72e0: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2a72e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a72e4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2a72e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a72e8: 0xc7a00004  lwc1        $f0, 0x4($sp)
    ctx->pc = 0x2a72e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a72ec: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2a72ecu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x2a72f0: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x2a72f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x2a72f4: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x2a72f4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a72f8: 0xc0a9c6c  jal         func_2A71B0
    ctx->pc = 0x2A72F8u;
    SET_GPR_U32(ctx, 31, 0x2A7300u);
    ctx->pc = 0x2A72FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A72F8u;
    // 0x2a72fc: 0xe7a00004  swc1        $f0, 0x4($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A71B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A71B0u, 0x2A72F8u, 0x2A7300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A7300u;
label_2a7300:
    // 0x2a7300: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2a7300u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a7304: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2a7304u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2a7308: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a7308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a730c: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2a730cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a7310: 0x3e00008  jr          $ra
    ctx->pc = 0x2A7310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A7310u;
        // 0x2a7314: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A7310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A7318u;
}
