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

// Function: sub_00374440
// Address: 0x374440 - 0x374498
void sub_00374440_0x374440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00374440_0x374440");
#endif

    switch (ctx->pc) {
        case 0x374488u: goto label_374488;
        default: break;
    }

    ctx->pc = 0x374440u;

    // 0x374440: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x374440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x374444: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x374444u;
    {
        const bool branch_taken_0x374444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x374448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374444u;
        // 0x374448: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374444) {
            ctx->pc = 0x37445Cu;
            goto label_37445c;
        }
    }
    ctx->pc = 0x37444Cu;
    // 0x37444c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x37444cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x374450: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x374450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x374454: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x374454u;
    {
        const bool branch_taken_0x374454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x374458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x374454u;
        // 0x374458: 0xac62cd30  sw          $v0, -0x32D0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x374454) {
            ctx->pc = 0x374464u;
            goto label_374464;
        }
    }
    ctx->pc = 0x37445Cu;
label_37445c:
    // 0x37445c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x37445cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x374460: 0xac40cd30  sw          $zero, -0x32D0($v0)
    ctx->pc = 0x374460u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x3FCD30u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FCD30u, _value); } while (0);
label_374464:
    // 0x374464: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x374464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x374468: 0x3c020048  lui         $v0, 0x48
    ctx->pc = 0x374468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
    // 0x37446c: 0x24662d48  addiu       $a2, $v1, 0x2D48
    ctx->pc = 0x37446cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 11592));
    // 0x374470: 0x8c452d50  lw          $a1, 0x2D50($v0)
    ctx->pc = 0x374470u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x482D50u));
    // 0x374474: 0xc46c2d48  lwc1        $f12, 0x2D48($v1)
    ctx->pc = 0x374474u;
    { uint32_t bits = FAST_READ32(0x482D48u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x374478: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x374478u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x37447c: 0xc4cd0004  lwc1        $f13, 0x4($a2)
    ctx->pc = 0x37447cu;
    { uint32_t bits = FAST_READ32(0x482D4Cu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x374480: 0xc0dd076  jal         func_3741D8
    ctx->pc = 0x374480u;
    SET_GPR_U32(ctx, 31, 0x374488u);
    ctx->pc = 0x374484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x374480u;
    // 0x374484: 0x24846038  addiu       $a0, $a0, 0x6038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24632));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3741D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3741D8u, 0x374480u, 0x374488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x374488u;
label_374488:
    // 0x374488: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x374488u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x37448c: 0x3e00008  jr          $ra
    ctx->pc = 0x37448Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x374490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37448Cu;
        // 0x374490: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37448Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374494u;
    // 0x374494: 0x0  nop
    ctx->pc = 0x374494u;
    // NOP
    ctx->pc = 0x374498u;
}
