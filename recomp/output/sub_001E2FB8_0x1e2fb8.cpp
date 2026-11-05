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

// Function: sub_001E2FB8
// Address: 0x1e2fb8 - 0x1e3058
void sub_001E2FB8_0x1e2fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2FB8_0x1e2fb8");
#endif

    switch (ctx->pc) {
        case 0x1e2fd0u: goto label_1e2fd0;
        default: break;
    }

    ctx->pc = 0x1e2fb8u;

    // 0x1e2fb8: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1e2fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2fbc: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x1e2fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2fc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2fc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2fc4: 0x0  nop
    ctx->pc = 0x1e2fc4u;
    // NOP
    // 0x1e2fc8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E2FC8u;
    {
        const bool branch_taken_0x1e2fc8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FC8u;
        // 0x1e2fcc: 0x24a20010  addiu       $v0, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fc8) {
            ctx->pc = 0x1E2FD8u;
            goto label_1e2fd8;
        }
    }
    ctx->pc = 0x1E2FD0u;
label_1e2fd0:
    // 0x1e2fd0: 0x3e00008  jr          $ra
    ctx->pc = 0x1E2FD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FD0u;
        // 0x1e2fd4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E2FD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2FD8u;
label_1e2fd8:
    // 0x1e2fd8: 0xc4a00020  lwc1        $f0, 0x20($a1)
    ctx->pc = 0x1e2fd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2fdc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e2fdcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2fe0: 0x0  nop
    ctx->pc = 0x1e2fe0u;
    // NOP
    // 0x1e2fe4: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x1E2FE4u;
    {
        const bool branch_taken_0x1e2fe4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2FE4u;
        // 0x1e2fe8: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2fe4) {
            ctx->pc = 0x1E2FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2fd0;
        }
    }
    ctx->pc = 0x1E2FECu;
    // 0x1e2fec: 0xc4810008  lwc1        $f1, 0x8($a0)
    ctx->pc = 0x1e2fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e2ff0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e2ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e2ff4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e2ff4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e2ff8: 0x0  nop
    ctx->pc = 0x1e2ff8u;
    // NOP
    // 0x1e2ffc: 0x4501fff4  bc1t        . + 4 + (-0xC << 2)
    ctx->pc = 0x1E2FFCu;
    {
        const bool branch_taken_0x1e2ffc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e2ffc) {
            ctx->pc = 0x1E2FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2fd0;
        }
    }
    ctx->pc = 0x1E3004u;
    // 0x1e3004: 0xc4a00008  lwc1        $f0, 0x8($a1)
    ctx->pc = 0x1e3004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3008: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e3008u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e300c: 0x0  nop
    ctx->pc = 0x1e300cu;
    // NOP
    // 0x1e3010: 0x4501ffef  bc1t        . + 4 + (-0x11 << 2)
    ctx->pc = 0x1E3010u;
    {
        const bool branch_taken_0x1e3010 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e3010) {
            ctx->pc = 0x1E2FD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1e2fd0;
        }
    }
    ctx->pc = 0x1E3018u;
    // 0x1e3018: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x1e3018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e301c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e301cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3020: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1e3020u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3024: 0x0  nop
    ctx->pc = 0x1e3024u;
    // NOP
    // 0x1e3028: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1E3028u;
    {
        const bool branch_taken_0x1e3028 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1E302Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3028u;
        // 0x1e302c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e3028) {
            ctx->pc = 0x1E304Cu;
            goto label_1e304c;
        }
    }
    ctx->pc = 0x1E3030u;
    // 0x1e3030: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x1e3030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e3034: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1e3034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e3038: 0x0  nop
    ctx->pc = 0x1e3038u;
    // NOP
    // 0x1e303c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x1E303Cu;
    {
        const bool branch_taken_0x1e303c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e303c) {
            ctx->pc = 0x1E304Cu;
            goto label_1e304c;
        }
    }
    ctx->pc = 0x1E3044u;
    // 0x1e3044: 0x3e00008  jr          $ra
    ctx->pc = 0x1E3044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E3048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E3044u;
        // 0x1e3048: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E3044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E304Cu;
label_1e304c:
    // 0x1e304c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E304Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E304Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E3054u;
    // 0x1e3054: 0x0  nop
    ctx->pc = 0x1e3054u;
    // NOP
    ctx->pc = 0x1e3058u;
}
