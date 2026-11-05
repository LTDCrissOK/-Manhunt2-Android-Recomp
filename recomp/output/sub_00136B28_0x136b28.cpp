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

// Function: sub_00136B28
// Address: 0x136b28 - 0x136b88
void sub_00136B28_0x136b28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00136B28_0x136b28");
#endif

    switch (ctx->pc) {
        case 0x136b5cu: goto label_136b5c;
        case 0x136b6cu: goto label_136b6c;
        default: break;
    }

    ctx->pc = 0x136b28u;

    // 0x136b28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x136b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x136b2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x136b2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x136b30: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x136b30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b34: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x136b34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x136b38: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x136b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x136b3c: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x136b3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x136b40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x136b44: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x136b44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b48: 0xae060054  sw          $a2, 0x54($s0)
    ctx->pc = 0x136b48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 6));
    // 0x136b4c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x136b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b50: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x136b50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b54: 0xc045f02  jal         func_117C08
    ctx->pc = 0x136B54u;
    SET_GPR_U32(ctx, 31, 0x136B5Cu);
    ctx->pc = 0x136B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B54u;
    // 0x136b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117C08u, 0x136B54u, 0x136B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B5Cu;
label_136b5c:
    // 0x136b5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x136b5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b60: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x136b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x136b64: 0xc045ef8  jal         func_117BE0
    ctx->pc = 0x136B64u;
    SET_GPR_U32(ctx, 31, 0x136B6Cu);
    ctx->pc = 0x136B68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x136B64u;
    // 0x136b68: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117BE0u, 0x136B64u, 0x136B6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x136B6Cu;
label_136b6c:
    // 0x136b6c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x136b6cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x136b70: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x136b70u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x136b74: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x136b74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x136b78: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x136b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x136b7c: 0x3e00008  jr          $ra
    ctx->pc = 0x136B7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x136B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x136B7Cu;
        // 0x136b80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x136B7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x136B84u;
    // 0x136b84: 0x0  nop
    ctx->pc = 0x136b84u;
    // NOP
    ctx->pc = 0x136b88u;
}
