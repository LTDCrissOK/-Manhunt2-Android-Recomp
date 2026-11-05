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

// Function: sub_001B67D8
// Address: 0x1b67d8 - 0x1b6858
void sub_001B67D8_0x1b67d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B67D8_0x1b67d8");
#endif

    switch (ctx->pc) {
        case 0x1b6814u: goto label_1b6814;
        default: break;
    }

    ctx->pc = 0x1b67d8u;

    // 0x1b67d8: 0xc4810134  lwc1        $f1, 0x134($a0)
    ctx->pc = 0x1b67d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b67dc: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1b67dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b67e0: 0x0  nop
    ctx->pc = 0x1b67e0u;
    // NOP
    // 0x1b67e4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1B67E4u;
    {
        const bool branch_taken_0x1b67e4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b67e4) {
            ctx->pc = 0x1B67E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B67E4u;
            // 0x1b67e8: 0xc484013c  lwc1        $f4, 0x13C($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B67F4u;
            goto label_1b67f4;
        }
    }
    ctx->pc = 0x1B67ECu;
    // 0x1b67ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1B67ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B67F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B67ECu;
        // 0x1b67f0: 0xc4800138  lwc1        $f0, 0x138($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B67ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B67F4u;
label_1b67f4:
    // 0x1b67f4: 0x46046034  c.lt.s      $f12, $f4
    ctx->pc = 0x1b67f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b67f8: 0x0  nop
    ctx->pc = 0x1b67f8u;
    // NOP
    // 0x1b67fc: 0x4502000a  bc1fl       . + 4 + (0xA << 2)
    ctx->pc = 0x1B67FCu;
    {
        const bool branch_taken_0x1b67fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b67fc) {
            ctx->pc = 0x1B6800u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1B67FCu;
            // 0x1b6800: 0xc4810144  lwc1        $f1, 0x144($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x1B6828u;
            goto label_1b6828;
        }
    }
    ctx->pc = 0x1B6804u;
    // 0x1b6804: 0xc4830138  lwc1        $f3, 0x138($a0)
    ctx->pc = 0x1b6804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b6808: 0x46016081  sub.s       $f2, $f12, $f1
    ctx->pc = 0x1b6808u;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[1]);
    // 0x1b680c: 0xc4800140  lwc1        $f0, 0x140($a0)
    ctx->pc = 0x1b680cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6810: 0x46012041  sub.s       $f1, $f4, $f1
    ctx->pc = 0x1b6810u;
    ctx->f[1] = FPU_SUB_S(ctx->f[4], ctx->f[1]);
label_1b6814:
    // 0x1b6814: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x1b6814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x1b6818: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1b6818u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1b681c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1b681cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x1b6820: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6820u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6824u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6820u;
        // 0x1b6824: 0x46001800  add.s       $f0, $f3, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6820u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6828u;
label_1b6828:
    // 0x1b6828: 0x46016034  c.lt.s      $f12, $f1
    ctx->pc = 0x1b6828u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b682c: 0x0  nop
    ctx->pc = 0x1b682cu;
    // NOP
    // 0x1b6830: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6830u;
    {
        const bool branch_taken_0x1b6830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b6830) {
            ctx->pc = 0x1B684Cu;
            goto label_1b684c;
        }
    }
    ctx->pc = 0x1B6838u;
    // 0x1b6838: 0xc4830140  lwc1        $f3, 0x140($a0)
    ctx->pc = 0x1b6838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1b683c: 0x46046081  sub.s       $f2, $f12, $f4
    ctx->pc = 0x1b683cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[12], ctx->f[4]);
    // 0x1b6840: 0xc4800148  lwc1        $f0, 0x148($a0)
    ctx->pc = 0x1b6840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1b6844: 0x1000fff3  b           . + 4 + (-0xD << 2)
    ctx->pc = 0x1B6844u;
    {
        const bool branch_taken_0x1b6844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B6848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6844u;
        // 0x1b6848: 0x46040841  sub.s       $f1, $f1, $f4 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[4]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6844) {
            ctx->pc = 0x1B6814u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1b6814;
        }
    }
    ctx->pc = 0x1B684Cu;
label_1b684c:
    // 0x1b684c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B684Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B684Cu;
        // 0x1b6850: 0xc4800148  lwc1        $f0, 0x148($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B684Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B6854u;
    // 0x1b6854: 0x0  nop
    ctx->pc = 0x1b6854u;
    // NOP
    ctx->pc = 0x1b6858u;
}
