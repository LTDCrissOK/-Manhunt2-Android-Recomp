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

// Function: sub_00291110
// Address: 0x291110 - 0x291138
void sub_00291110_0x291110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00291110_0x291110");
#endif

    ctx->pc = 0x291110u;

    // 0x291110: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x291110u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x291114: 0xc53021  addu        $a2, $a2, $a1
    ctx->pc = 0x291114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x291118: 0x90c20008  lbu         $v0, 0x8($a2)
    ctx->pc = 0x291118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x29111c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x29111Cu;
    {
        const bool branch_taken_0x29111c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29111c) {
            ctx->pc = 0x291120u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29111Cu;
            // 0x291120: 0xc48001e4  lwc1        $f0, 0x1E4($a0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x291130u;
            goto label_291130;
        }
    }
    ctx->pc = 0x291124u;
    // 0x291124: 0xc48001e0  lwc1        $f0, 0x1E0($a0)
    ctx->pc = 0x291124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x291128: 0x3e00008  jr          $ra
    ctx->pc = 0x291128u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29112Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291128u;
        // 0x29112c: 0x46006002  mul.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291128u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291130u;
label_291130:
    // 0x291130: 0x3e00008  jr          $ra
    ctx->pc = 0x291130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x291130u;
        // 0x291134: 0x46006002  mul.s       $f0, $f12, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x291130u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x291138u;
}
