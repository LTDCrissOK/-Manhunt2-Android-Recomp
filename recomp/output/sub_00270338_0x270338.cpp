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

// Function: sub_00270338
// Address: 0x270338 - 0x270370
void sub_00270338_0x270338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270338_0x270338");
#endif

    ctx->pc = 0x270338u;

    // 0x270338: 0x8c830250  lw          $v1, 0x250($a0)
    ctx->pc = 0x270338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 592)));
    // 0x27033c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27033Cu;
    {
        const bool branch_taken_0x27033c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27033c) {
            ctx->pc = 0x270340u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27033Cu;
            // 0x270340: 0x8c62000c  lw          $v0, 0xC($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270350u;
            goto label_270350;
        }
    }
    ctx->pc = 0x270344u;
    // 0x270344: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x270344u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x270348: 0x3e00008  jr          $ra
    ctx->pc = 0x270348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270350u;
label_270350:
    // 0x270350: 0xc461001c  lwc1        $f1, 0x1C($v1)
    ctx->pc = 0x270350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x270354: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x270354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x270358: 0x0  nop
    ctx->pc = 0x270358u;
    // NOP
    // 0x27035c: 0x0  nop
    ctx->pc = 0x27035cu;
    // NOP
    // 0x270360: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x270360u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x270364: 0x3e00008  jr          $ra
    ctx->pc = 0x270364u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270364u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27036Cu;
    // 0x27036c: 0x0  nop
    ctx->pc = 0x27036cu;
    // NOP
    ctx->pc = 0x270370u;
}
