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

// Function: sub_002B9B98
// Address: 0x2b9b98 - 0x2b9c00
void sub_002B9B98_0x2b9b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9B98_0x2b9b98");
#endif

    switch (ctx->pc) {
        case 0x2b9bb8u: goto label_2b9bb8;
        case 0x2b9bd4u: goto label_2b9bd4;
        default: break;
    }

    ctx->pc = 0x2b9b98u;

    // 0x2b9b98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2b9b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2b9b9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2b9b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2b9ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2b9ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9ba4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2b9ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2b9ba8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2b9ba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9bac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b9bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b9bb0: 0xc0ee43c  jal         func_3B90F0
    ctx->pc = 0x2B9BB0u;
    SET_GPR_U32(ctx, 31, 0x2B9BB8u);
    ctx->pc = 0x2B9BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BB0u;
    // 0x2b9bb4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B90F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B90F0u, 0x2B9BB0u, 0x2B9BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BB8u;
label_2b9bb8:
    // 0x2b9bb8: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x2b9bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x2b9bbc: 0x111200  sll         $v0, $s1, 8
    ctx->pc = 0x2b9bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 8));
    // 0x2b9bc0: 0x24c64d80  addiu       $a2, $a2, 0x4D80
    ctx->pc = 0x2b9bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19840));
    // 0x2b9bc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b9bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b9bc8: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2b9bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2b9bcc: 0xc0ee528  jal         func_3B94A0
    ctx->pc = 0x2B9BCCu;
    SET_GPR_U32(ctx, 31, 0x2B9BD4u);
    ctx->pc = 0x2B9BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BCCu;
    // 0x2b9bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B94A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B94A0u, 0x2B9BCCu, 0x2B9BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BD4u;
label_2b9bd4:
    // 0x2b9bd4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2b9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2b9bd8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2b9bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2b9bdc: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x2b9bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x2b9be0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x2b9be0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x2b9be4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2b9be4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x2b9be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2b9be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b9bec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2b9becu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2b9bf0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b9bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b9bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x2B9BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BF4u;
        // 0x2b9bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B9BFCu;
    // 0x2b9bfc: 0x0  nop
    ctx->pc = 0x2b9bfcu;
    // NOP
    ctx->pc = 0x2b9c00u;
}
