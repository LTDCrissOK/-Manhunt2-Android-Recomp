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

// Function: sub_003C9A50
// Address: 0x3c9a50 - 0x3c9c20
void sub_003C9A50_0x3c9a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C9A50_0x3c9a50");
#endif

    switch (ctx->pc) {
        case 0x3c9a58u: goto label_3c9a58;
        case 0x3c9a68u: goto label_3c9a68;
        case 0x3c9a78u: goto label_3c9a78;
        case 0x3c9a88u: goto label_3c9a88;
        case 0x3c9a98u: goto label_3c9a98;
        case 0x3c9aa8u: goto label_3c9aa8;
        case 0x3c9ab8u: goto label_3c9ab8;
        case 0x3c9ac8u: goto label_3c9ac8;
        case 0x3c9ad8u: goto label_3c9ad8;
        case 0x3c9ae8u: goto label_3c9ae8;
        case 0x3c9af8u: goto label_3c9af8;
        case 0x3c9b08u: goto label_3c9b08;
        case 0x3c9b18u: goto label_3c9b18;
        case 0x3c9b28u: goto label_3c9b28;
        case 0x3c9b38u: goto label_3c9b38;
        case 0x3c9b48u: goto label_3c9b48;
        case 0x3c9b58u: goto label_3c9b58;
        case 0x3c9b68u: goto label_3c9b68;
        case 0x3c9b78u: goto label_3c9b78;
        case 0x3c9b88u: goto label_3c9b88;
        case 0x3c9b98u: goto label_3c9b98;
        case 0x3c9ba8u: goto label_3c9ba8;
        case 0x3c9bb8u: goto label_3c9bb8;
        case 0x3c9bc8u: goto label_3c9bc8;
        case 0x3c9bd8u: goto label_3c9bd8;
        case 0x3c9be8u: goto label_3c9be8;
        case 0x3c9bf8u: goto label_3c9bf8;
        case 0x3c9c08u: goto label_3c9c08;
        case 0x3c9c18u: goto label_3c9c18;
        default: break;
    }

    ctx->pc = 0x3c9a50u;

    // 0x3c9a50: 0x2403004b  addiu       $v1, $zero, 0x4B
    ctx->pc = 0x3c9a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
    // 0x3c9a54: 0xc  syscall     0
    ctx->pc = 0x3c9a54u;
    ctx->pc = 0x3C9A58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a58:
    // 0x3c9a58: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A60u;
    // 0x3c9a60: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x3c9a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x3c9a64: 0xc  syscall     0
    ctx->pc = 0x3c9a64u;
    ctx->pc = 0x3C9A68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a68:
    // 0x3c9a68: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A70u;
    // 0x3c9a70: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x3c9a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x3c9a74: 0xc  syscall     0
    ctx->pc = 0x3c9a74u;
    ctx->pc = 0x3C9A78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a78:
    // 0x3c9a78: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A80u;
    // 0x3c9a80: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x3c9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x3c9a84: 0xc  syscall     0
    ctx->pc = 0x3c9a84u;
    ctx->pc = 0x3C9A88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a88:
    // 0x3c9a88: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9A90u;
    // 0x3c9a90: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x3c9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3c9a94: 0xc  syscall     0
    ctx->pc = 0x3c9a94u;
    ctx->pc = 0x3C9A98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9a98:
    // 0x3c9a98: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9A98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9A98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9AA0u;
    // 0x3c9aa0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x3c9aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x3c9aa4: 0xc  syscall     0
    ctx->pc = 0x3c9aa4u;
    ctx->pc = 0x3C9AA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9aa8:
    // 0x3c9aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9AB0u;
    // 0x3c9ab0: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x3c9ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x3c9ab4: 0xc  syscall     0
    ctx->pc = 0x3c9ab4u;
    ctx->pc = 0x3C9AB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9ab8:
    // 0x3c9ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9AC0u;
    // 0x3c9ac0: 0x24030052  addiu       $v1, $zero, 0x52
    ctx->pc = 0x3c9ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x3c9ac4: 0xc  syscall     0
    ctx->pc = 0x3c9ac4u;
    ctx->pc = 0x3C9AC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9ac8:
    // 0x3c9ac8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9AC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9AC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9AD0u;
    // 0x3c9ad0: 0x2403ffad  addiu       $v1, $zero, -0x53
    ctx->pc = 0x3c9ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967213));
    // 0x3c9ad4: 0xc  syscall     0
    ctx->pc = 0x3c9ad4u;
    ctx->pc = 0x3C9AD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9ad8:
    // 0x3c9ad8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9AD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9AD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9AE0u;
    // 0x3c9ae0: 0x24030054  addiu       $v1, $zero, 0x54
    ctx->pc = 0x3c9ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x3c9ae4: 0xc  syscall     0
    ctx->pc = 0x3c9ae4u;
    ctx->pc = 0x3C9AE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9ae8:
    // 0x3c9ae8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9AE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9AE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9AF0u;
    // 0x3c9af0: 0x2403ffab  addiu       $v1, $zero, -0x55
    ctx->pc = 0x3c9af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967211));
    // 0x3c9af4: 0xc  syscall     0
    ctx->pc = 0x3c9af4u;
    ctx->pc = 0x3C9AF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9af8:
    // 0x3c9af8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9AF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9AF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B00u;
    // 0x3c9b00: 0x24030056  addiu       $v1, $zero, 0x56
    ctx->pc = 0x3c9b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 86));
    // 0x3c9b04: 0xc  syscall     0
    ctx->pc = 0x3c9b04u;
    ctx->pc = 0x3C9B08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b08:
    // 0x3c9b08: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B10u;
    // 0x3c9b10: 0x24030057  addiu       $v1, $zero, 0x57
    ctx->pc = 0x3c9b10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
    // 0x3c9b14: 0xc  syscall     0
    ctx->pc = 0x3c9b14u;
    ctx->pc = 0x3C9B18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b18:
    // 0x3c9b18: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B20u;
    // 0x3c9b20: 0x2403ffa8  addiu       $v1, $zero, -0x58
    ctx->pc = 0x3c9b20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967208));
    // 0x3c9b24: 0xc  syscall     0
    ctx->pc = 0x3c9b24u;
    ctx->pc = 0x3C9B28u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b28:
    // 0x3c9b28: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B30u;
    // 0x3c9b30: 0x24030059  addiu       $v1, $zero, 0x59
    ctx->pc = 0x3c9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
    // 0x3c9b34: 0xc  syscall     0
    ctx->pc = 0x3c9b34u;
    ctx->pc = 0x3C9B38u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b38:
    // 0x3c9b38: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B40u;
    // 0x3c9b40: 0x2403ffa6  addiu       $v1, $zero, -0x5A
    ctx->pc = 0x3c9b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967206));
    // 0x3c9b44: 0xc  syscall     0
    ctx->pc = 0x3c9b44u;
    ctx->pc = 0x3C9B48u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b48:
    // 0x3c9b48: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B50u;
    // 0x3c9b50: 0x2403005b  addiu       $v1, $zero, 0x5B
    ctx->pc = 0x3c9b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x3c9b54: 0xc  syscall     0
    ctx->pc = 0x3c9b54u;
    ctx->pc = 0x3C9B58u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b58:
    // 0x3c9b58: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B60u;
    // 0x3c9b60: 0x2403005c  addiu       $v1, $zero, 0x5C
    ctx->pc = 0x3c9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x3c9b64: 0xc  syscall     0
    ctx->pc = 0x3c9b64u;
    ctx->pc = 0x3C9B68u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b68:
    // 0x3c9b68: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B70u;
    // 0x3c9b70: 0x2403ffa4  addiu       $v1, $zero, -0x5C
    ctx->pc = 0x3c9b70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967204));
    // 0x3c9b74: 0xc  syscall     0
    ctx->pc = 0x3c9b74u;
    ctx->pc = 0x3C9B78u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b78:
    // 0x3c9b78: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B80u;
    // 0x3c9b80: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x3c9b80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x3c9b84: 0xc  syscall     0
    ctx->pc = 0x3c9b84u;
    ctx->pc = 0x3C9B88u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b88:
    // 0x3c9b88: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9B90u;
    // 0x3c9b90: 0x2403ffa3  addiu       $v1, $zero, -0x5D
    ctx->pc = 0x3c9b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967203));
    // 0x3c9b94: 0xc  syscall     0
    ctx->pc = 0x3c9b94u;
    ctx->pc = 0x3C9B98u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9b98:
    // 0x3c9b98: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9BA0u;
    // 0x3c9ba0: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x3c9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
    // 0x3c9ba4: 0xc  syscall     0
    ctx->pc = 0x3c9ba4u;
    ctx->pc = 0x3C9BA8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9ba8:
    // 0x3c9ba8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9BA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9BA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9BB0u;
    // 0x3c9bb0: 0x2403ffa2  addiu       $v1, $zero, -0x5E
    ctx->pc = 0x3c9bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967202));
    // 0x3c9bb4: 0xc  syscall     0
    ctx->pc = 0x3c9bb4u;
    ctx->pc = 0x3C9BB8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9bb8:
    // 0x3c9bb8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9BB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9BB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9BC0u;
    // 0x3c9bc0: 0x2403005f  addiu       $v1, $zero, 0x5F
    ctx->pc = 0x3c9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
    // 0x3c9bc4: 0xc  syscall     0
    ctx->pc = 0x3c9bc4u;
    ctx->pc = 0x3C9BC8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9bc8:
    // 0x3c9bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9BD0u;
    // 0x3c9bd0: 0x2403ffa1  addiu       $v1, $zero, -0x5F
    ctx->pc = 0x3c9bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967201));
    // 0x3c9bd4: 0xc  syscall     0
    ctx->pc = 0x3c9bd4u;
    ctx->pc = 0x3C9BD8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9bd8:
    // 0x3c9bd8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9BD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9BD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9BE0u;
    // 0x3c9be0: 0x24030060  addiu       $v1, $zero, 0x60
    ctx->pc = 0x3c9be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x3c9be4: 0xc  syscall     0
    ctx->pc = 0x3c9be4u;
    ctx->pc = 0x3C9BE8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9be8:
    // 0x3c9be8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9BE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9BF0u;
    // 0x3c9bf0: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x3c9bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x3c9bf4: 0xc  syscall     0
    ctx->pc = 0x3c9bf4u;
    ctx->pc = 0x3C9BF8u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9bf8:
    // 0x3c9bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C00u;
    // 0x3c9c00: 0x24030062  addiu       $v1, $zero, 0x62
    ctx->pc = 0x3c9c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 98));
    // 0x3c9c04: 0xc  syscall     0
    ctx->pc = 0x3c9c04u;
    ctx->pc = 0x3C9C08u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c08:
    // 0x3c9c08: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C10u;
    // 0x3c9c10: 0x24030063  addiu       $v1, $zero, 0x63
    ctx->pc = 0x3c9c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x3c9c14: 0xc  syscall     0
    ctx->pc = 0x3c9c14u;
    ctx->pc = 0x3C9C18u;
runtime->handleSyscall(rdram, ctx, 0x0u);
label_3c9c18:
    // 0x3c9c18: 0x3e00008  jr          $ra
    ctx->pc = 0x3C9C18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C9C18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C9C20u;
}
