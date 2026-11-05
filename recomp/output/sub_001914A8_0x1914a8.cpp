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

// Function: sub_001914A8
// Address: 0x1914a8 - 0x191518
void sub_001914A8_0x1914a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001914A8_0x1914a8");
#endif

    switch (ctx->pc) {
        case 0x1914fcu: goto label_1914fc;
        case 0x191508u: goto label_191508;
        default: break;
    }

    ctx->pc = 0x1914a8u;

    // 0x1914a8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1914a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1914ac: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1914acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1914b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1914b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1914b4: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1914b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1914b8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1914b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1914bc: 0xe60c0098  swc1        $f12, 0x98($s0)
    ctx->pc = 0x1914bcu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 152), bits); }
    // 0x1914c0: 0x26060030  addiu       $a2, $s0, 0x30
    ctx->pc = 0x1914c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x1914c4: 0xae020090  sw          $v0, 0x90($s0)
    ctx->pc = 0x1914c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 2));
    // 0x1914c8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1914c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1914cc: 0xae000094  sw          $zero, 0x94($s0)
    ctx->pc = 0x1914ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 0));
    // 0x1914d0: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x1914d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1914d4: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1914d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x1914d8: 0xc4a10004  lwc1        $f1, 0x4($a1)
    ctx->pc = 0x1914d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1914dc: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x1914dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x1914e0: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1914e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1914e4: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x1914e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x1914e8: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x1914e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1914ec: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x1914ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x1914f0: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x1914f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x1914f4: 0xc061a12  jal         func_186848
    ctx->pc = 0x1914F4u;
    SET_GPR_U32(ctx, 31, 0x1914FCu);
    ctx->pc = 0x1914F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1914F4u;
    // 0x1914f8: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x186848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x186848u, 0x1914F4u, 0x1914FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1914FCu;
label_1914fc:
    // 0x1914fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1914fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191500: 0xc064700  jal         func_191C00
    ctx->pc = 0x191500u;
    SET_GPR_U32(ctx, 31, 0x191508u);
    ctx->pc = 0x191504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191500u;
    // 0x191504: 0xac400338  sw          $zero, 0x338($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 824), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191C00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191C00u, 0x191500u, 0x191508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191508u;
label_191508:
    // 0x191508: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x191508u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19150c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x19150cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x191510: 0x3e00008  jr          $ra
    ctx->pc = 0x191510u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x191510u;
        // 0x191514: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x191510u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191518u;
}
