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

// Function: sub_003C9710
// Address: 0x3c9710 - 0x3c97a0
void sub_003C9710_0x3c9710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9710_0x3c9710");
#endif

    switch (ctx->pc) {
        case 0x3c9718u: goto label_3c9718;
        case 0x3c9728u: goto label_3c9728;
        case 0x3c9738u: goto label_3c9738;
        case 0x3c9748u: goto label_3c9748;
        case 0x3c9758u: goto label_3c9758;
        case 0x3c9768u: goto label_3c9768;
        case 0x3c9778u: goto label_3c9778;
        case 0x3c9788u: goto label_3c9788;
        case 0x3c9798u: goto label_3c9798;
        default: break;
    }

    ctx->pc = 0x3c9710u;

    // 0x3c9710: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x3c9710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x3c9714: 0xc  syscall     0
    ctx->pc = 0x3c9714u;
    ctx->pc = 0x3C9718u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9718:
    // 0x3c9718: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9718u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9718u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9720u;
    // 0x3c9720: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x3c9720u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x3c9724: 0xc  syscall     0
    ctx->pc = 0x3c9724u;
    ctx->pc = 0x3C9728u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9728:
    // 0x3c9728: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9728u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9728u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9730u;
    // 0x3c9730: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x3c9730u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x3c9734: 0xc  syscall     0
    ctx->pc = 0x3c9734u;
    ctx->pc = 0x3C9738u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9738:
    // 0x3c9738: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9738u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9738u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9740u;
    // 0x3c9740: 0x2403ffe6  addiu       $v1, $zero, -0x1A
    ctx->pc = 0x3c9740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967270));
    // 0x3c9744: 0xc  syscall     0
    ctx->pc = 0x3c9744u;
    ctx->pc = 0x3C9748u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9748:
    // 0x3c9748: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9748u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9748u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9750u;
    // 0x3c9750: 0x2403ffe5  addiu       $v1, $zero, -0x1B
    ctx->pc = 0x3c9750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
    // 0x3c9754: 0xc  syscall     0
    ctx->pc = 0x3c9754u;
    ctx->pc = 0x3C9758u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9758:
    // 0x3c9758: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9760u;
    // 0x3c9760: 0x2403ffe4  addiu       $v1, $zero, -0x1C
    ctx->pc = 0x3c9760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
    // 0x3c9764: 0xc  syscall     0
    ctx->pc = 0x3c9764u;
    ctx->pc = 0x3C9768u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9768:
    // 0x3c9768: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9768u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9768u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9770u;
    // 0x3c9770: 0x2403ffe3  addiu       $v1, $zero, -0x1D
    ctx->pc = 0x3c9770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x3c9774: 0xc  syscall     0
    ctx->pc = 0x3c9774u;
    ctx->pc = 0x3C9778u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9778:
    // 0x3c9778: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9780u;
    // 0x3c9780: 0x2403ff02  addiu       $v1, $zero, -0xFE
    ctx->pc = 0x3c9780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967042));
    // 0x3c9784: 0xc  syscall     0
    ctx->pc = 0x3c9784u;
    ctx->pc = 0x3C9788u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9788:
    // 0x3c9788: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9788u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9788u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9790u;
    // 0x3c9790: 0x2403ff01  addiu       $v1, $zero, -0xFF
    ctx->pc = 0x3c9790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967041));
    // 0x3c9794: 0xc  syscall     0
    ctx->pc = 0x3c9794u;
    ctx->pc = 0x3C9798u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9798:
    // 0x3c9798: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C97A0u;
}
