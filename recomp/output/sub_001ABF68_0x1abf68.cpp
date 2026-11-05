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

// Function: sub_001ABF68
// Address: 0x1abf68 - 0x1abfb0
void sub_001ABF68_0x1abf68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ABF68_0x1abf68");
#endif

    switch (ctx->pc) {
        case 0x1abf84u: goto label_1abf84;
        default: break;
    }

    ctx->pc = 0x1abf68u;

    // 0x1abf68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1abf68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1abf6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1abf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf70: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1abf70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1abf74: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1abf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1abf78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1abf78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1abf7c: 0xc06a4c2  jal         func_1A9308
    ctx->pc = 0x1ABF7Cu;
    SET_GPR_U32(ctx, 31, 0x1ABF84u);
    ctx->pc = 0x1ABF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ABF7Cu;
    // 0x1abf80: 0x8e060190  lw          $a2, 0x190($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9308u, 0x1ABF7Cu, 0x1ABF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1ABF84u;
label_1abf84:
    // 0x1abf84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1abf84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1abf88: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1abf88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1abf8c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1abf8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1abf90: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1abf90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1abf94: 0xe6010170  swc1        $f1, 0x170($s0)
    ctx->pc = 0x1abf94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 368), bits); }
    // 0x1abf98: 0xe600016c  swc1        $f0, 0x16C($s0)
    ctx->pc = 0x1abf98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 364), bits); }
    // 0x1abf9c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1abf9cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1abfa0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1abfa0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1abfa4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x1abfa4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1abfa8: 0x3e00008  jr          $ra
    ctx->pc = 0x1ABFA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ABFA8u;
        // 0x1abfac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ABFA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ABFB0u;
}
