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

// Function: sub_0010B7B8
// Address: 0x10b7b8 - 0x10b820
void sub_0010B7B8_0x10b7b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B7B8_0x10b7b8");
#endif

    switch (ctx->pc) {
        case 0x10b7ccu: goto label_10b7cc;
        case 0x10b7f8u: goto label_10b7f8;
        case 0x10b800u: goto label_10b800;
        default: break;
    }

    ctx->pc = 0x10b7b8u;

    // 0x10b7b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x10b7b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x10b7bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b7bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b7c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x10b7c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x10b7c4: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B7C4u;
    SET_GPR_U32(ctx, 31, 0x10B7CCu);
    ctx->pc = 0x10B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7C4u;
    // 0x10b7c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B7C4u, 0x10B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7CCu;
label_10b7cc:
    // 0x10b7cc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b7ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b7d0: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b7d4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x10B7D4u;
    {
        const bool branch_taken_0x10b7d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B7D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7D4u;
        // 0x10b7d8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7d4) {
            ctx->pc = 0x10B808u;
            goto label_10b808;
        }
    }
    ctx->pc = 0x10B7DCu;
    // 0x10b7dc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b7e0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b7e4: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b7e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b7e8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10B7E8u;
    {
        const bool branch_taken_0x10b7e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B7E8u;
        // 0x10b7ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b7e8) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B7F0u;
    // 0x10b7f0: 0xc044432  jal         func_1110C8
    ctx->pc = 0x10B7F0u;
    SET_GPR_U32(ctx, 31, 0x10B7F8u);
    ctx->pc = 0x1110C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1110C8u, 0x10B7F0u, 0x10B7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B7F8u;
label_10b7f8:
    // 0x10b7f8: 0xc043108  jal         func_10C420
    ctx->pc = 0x10B7F8u;
    SET_GPR_U32(ctx, 31, 0x10B800u);
    ctx->pc = 0x10B7FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B7F8u;
    // 0x10b7fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C420u, 0x10B7F8u, 0x10B800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B800u;
label_10b800:
    // 0x10b800: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B800u;
    {
        const bool branch_taken_0x10b800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B800u;
        // 0x10b804: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b800) {
            ctx->pc = 0x10B80Cu;
            goto label_10b80c;
        }
    }
    ctx->pc = 0x10B808u;
label_10b808:
    // 0x10b808: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b80c:
    // 0x10b80c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b80cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b810: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x10b810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b814: 0x3e00008  jr          $ra
    ctx->pc = 0x10B814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B814u;
        // 0x10b818: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B81Cu;
    // 0x10b81c: 0x0  nop
    ctx->pc = 0x10b81cu;
    // NOP
    ctx->pc = 0x10b820u;
}
