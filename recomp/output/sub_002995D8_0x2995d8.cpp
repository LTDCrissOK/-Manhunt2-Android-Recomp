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

// Function: sub_002995D8
// Address: 0x2995d8 - 0x299640
void sub_002995D8_0x2995d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002995D8_0x2995d8");
#endif

    switch (ctx->pc) {
        case 0x2995ecu: goto label_2995ec;
        case 0x2995f8u: goto label_2995f8;
        case 0x299610u: goto label_299610;
        case 0x29961cu: goto label_29961c;
        default: break;
    }

    ctx->pc = 0x2995d8u;

    // 0x2995d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2995d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2995dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2995dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2995e0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2995e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2995e4: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x2995E4u;
    SET_GPR_U32(ctx, 31, 0x2995ECu);
    ctx->pc = 0x2995E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2995E4u;
    // 0x2995e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x2995E4u, 0x2995ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995ECu;
label_2995ec:
    // 0x2995ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2995ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2995f0: 0xc0a71f8  jal         func_29C7E0
    ctx->pc = 0x2995F0u;
    SET_GPR_U32(ctx, 31, 0x2995F8u);
    ctx->pc = 0x2995F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2995F0u;
    // 0x2995f4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C7E0u, 0x2995F0u, 0x2995F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2995F8u;
label_2995f8:
    // 0x2995f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2995f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2995fc: 0x0  nop
    ctx->pc = 0x2995fcu;
    // NOP
    // 0x299600: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299604: 0xe6000080  swc1        $f0, 0x80($s0)
    ctx->pc = 0x299604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 128), bits); }
    // 0x299608: 0xc0a71e0  jal         func_29C780
    ctx->pc = 0x299608u;
    SET_GPR_U32(ctx, 31, 0x299610u);
    ctx->pc = 0x29960Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299608u;
    // 0x29960c: 0xe600007c  swc1        $f0, 0x7C($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 124), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C780u, 0x299608u, 0x299610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x299610u;
label_299610:
    // 0x299610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x299610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299614: 0xc0a7214  jal         func_29C850
    ctx->pc = 0x299614u;
    SET_GPR_U32(ctx, 31, 0x29961Cu);
    ctx->pc = 0x299618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x299614u;
    // 0x299618: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29C850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C850u, 0x299614u, 0x29961Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29961Cu;
label_29961c:
    // 0x29961c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29961cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x299620: 0x0  nop
    ctx->pc = 0x299620u;
    // NOP
    // 0x299624: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x299624u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x299628: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x299628u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x29962c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x29962cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x299630: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x299630u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x299634: 0x3e00008  jr          $ra
    ctx->pc = 0x299634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x299638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x299634u;
        // 0x299638: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x299634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29963Cu;
    // 0x29963c: 0x0  nop
    ctx->pc = 0x29963cu;
    // NOP
    ctx->pc = 0x299640u;
}
