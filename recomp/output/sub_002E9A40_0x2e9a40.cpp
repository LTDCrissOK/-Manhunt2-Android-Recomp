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

// Function: sub_002E9A40
// Address: 0x2e9a40 - 0x2e9a80
void sub_002E9A40_0x2e9a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9A40_0x2e9a40");
#endif

    switch (ctx->pc) {
        case 0x2e9a50u: goto label_2e9a50;
        default: break;
    }

    ctx->pc = 0x2e9a40u;

    // 0x2e9a40: 0xc48111c8  lwc1        $f1, 0x11C8($a0)
    ctx->pc = 0x2e9a40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e9a44: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e9a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2e9a48: 0x2444b9f0  addiu       $a0, $v0, -0x4610
    ctx->pc = 0x2e9a48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949360));
    // 0x2e9a4c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2e9a4cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e9a50:
    // 0x2e9a50: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2e9a50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e9a54: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e9a54u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e9a58: 0x0  nop
    ctx->pc = 0x2e9a58u;
    // NOP
    // 0x2e9a5c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9A5Cu;
    {
        const bool branch_taken_0x2e9a5c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e9a5c) {
            ctx->pc = 0x2E9A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E9A5Cu;
            // 0x2e9a60: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E9A6Cu;
            goto label_2e9a6c;
        }
    }
    ctx->pc = 0x2E9A64u;
    // 0x2e9a64: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9A64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A64u;
        // 0x2e9a68: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9A64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9A6Cu;
label_2e9a6c:
    // 0x2e9a6c: 0x2862000a  slti        $v0, $v1, 0xA
    ctx->pc = 0x2e9a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x2e9a70: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2E9A70u;
    {
        const bool branch_taken_0x2e9a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A70u;
        // 0x2e9a74: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9a70) {
            ctx->pc = 0x2E9A50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2e9a50;
        }
    }
    ctx->pc = 0x2E9A78u;
    // 0x2e9a78: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E9A78u;
        // 0x2e9a7c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E9A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E9A80u;
}
