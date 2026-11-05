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

// Function: sub_00253060
// Address: 0x253060 - 0x2530b0
void sub_00253060_0x253060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253060_0x253060");
#endif

    switch (ctx->pc) {
        case 0x253074u: goto label_253074;
        default: break;
    }

    ctx->pc = 0x253060u;

    // 0x253060: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x253060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x253064: 0x2406001a  addiu       $a2, $zero, 0x1A
    ctx->pc = 0x253064u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x253068: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x253068u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x25306c: 0xc0952e8  jal         func_254BA0
    ctx->pc = 0x25306Cu;
    SET_GPR_U32(ctx, 31, 0x253074u);
    ctx->pc = 0x253070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25306Cu;
    // 0x253070: 0x8c850fe4  lw          $a1, 0xFE4($a0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x254BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254BA0u, 0x25306Cu, 0x253074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x253074u;
label_253074:
    // 0x253074: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x253074u;
    {
        const bool branch_taken_0x253074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x253074) {
            ctx->pc = 0x253078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x253074u;
            // 0x253078: 0xc4410074  lwc1        $f1, 0x74($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x253084u;
            goto label_253084;
        }
    }
    ctx->pc = 0x25307Cu;
    // 0x25307c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x25307Cu;
    {
        const bool branch_taken_0x25307c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x253080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25307Cu;
        // 0x253080: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25307c) {
            ctx->pc = 0x2530A4u;
            goto label_2530a4;
        }
    }
    ctx->pc = 0x253084u;
label_253084:
    // 0x253084: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x253084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x253088: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x253088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25308c: 0x0  nop
    ctx->pc = 0x25308cu;
    // NOP
    // 0x253090: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x253090u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253094: 0x0  nop
    ctx->pc = 0x253094u;
    // NOP
    // 0x253098: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x253098u;
    {
        const bool branch_taken_0x253098 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x25309Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253098u;
        // 0x25309c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x253098) {
            ctx->pc = 0x2530A4u;
            goto label_2530a4;
        }
    }
    ctx->pc = 0x2530A0u;
    // 0x2530a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2530a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2530a4:
    // 0x2530a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2530a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2530a8: 0x3e00008  jr          $ra
    ctx->pc = 0x2530A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2530ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530A8u;
        // 0x2530ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2530A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2530B0u;
}
