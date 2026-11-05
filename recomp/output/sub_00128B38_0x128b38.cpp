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

// Function: sub_00128B38
// Address: 0x128b38 - 0x128b80
void sub_00128B38_0x128b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00128B38_0x128b38");
#endif

    switch (ctx->pc) {
        case 0x128b58u: goto label_128b58;
        case 0x128b68u: goto label_128b68;
        default: break;
    }

    ctx->pc = 0x128b38u;

    // 0x128b38: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x128b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x128b3c: 0x3c040049  lui         $a0, 0x49
    ctx->pc = 0x128b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)73 << 16));
    // 0x128b40: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x128b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x128b44: 0x24848758  addiu       $a0, $a0, -0x78A8
    ctx->pc = 0x128b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936408));
    // 0x128b48: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x128b48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x128b4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x128b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x128b50: 0xc041ea4  jal         func_107A90
    ctx->pc = 0x128B50u;
    SET_GPR_U32(ctx, 31, 0x128B58u);
    ctx->pc = 0x128B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B50u;
    // 0x128b54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107A90u, 0x128B50u, 0x128B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B58u;
label_128b58:
    // 0x128b58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x128b58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x128b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b60: 0xc045edc  jal         func_117B70
    ctx->pc = 0x128B60u;
    SET_GPR_U32(ctx, 31, 0x128B68u);
    ctx->pc = 0x128B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x128B60u;
    // 0x128b64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117B70u, 0x128B60u, 0x128B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x128B68u;
label_128b68:
    // 0x128b68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x128b68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x128b6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x128b6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x128b70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x128b70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x128b74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x128b74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x128b78: 0x3e00008  jr          $ra
    ctx->pc = 0x128B78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x128B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x128B78u;
        // 0x128b7c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x128B78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x128B80u;
}
