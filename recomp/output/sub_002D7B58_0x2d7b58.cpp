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

// Function: sub_002D7B58
// Address: 0x2d7b58 - 0x2d7bd8
void sub_002D7B58_0x2d7b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D7B58_0x2d7b58");
#endif

    switch (ctx->pc) {
        case 0x2d7b7cu: goto label_2d7b7c;
        case 0x2d7ba8u: goto label_2d7ba8;
        case 0x2d7bb8u: goto label_2d7bb8;
        default: break;
    }

    ctx->pc = 0x2d7b58u;

    // 0x2d7b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d7b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d7b5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d7b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d7b60: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d7b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d7b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2d7b68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2d7b68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b6c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d7b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2d7b70: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2d7b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x2d7b74: 0xc0b6750  jal         func_2D9D40
    ctx->pc = 0x2D7B74u;
    SET_GPR_U32(ctx, 31, 0x2D7B7Cu);
    ctx->pc = 0x2D7B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7B74u;
    // 0x2d7b78: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9D40u, 0x2D7B74u, 0x2D7B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7B7Cu;
label_2d7b7c:
    // 0x2d7b7c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7b7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7b80: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2d7b80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2d7b84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7b84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7b88: 0x24a51040  addiu       $a1, $a1, 0x1040
    ctx->pc = 0x2d7b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4160));
    // 0x2d7b8c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2d7b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7b90: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2d7b90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2d7b94: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2d7b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2d7b98: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2d7b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2d7b9c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2d7b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7ba0: 0xc0b5f56  jal         func_2D7D58
    ctx->pc = 0x2D7BA0u;
    SET_GPR_U32(ctx, 31, 0x2D7BA8u);
    ctx->pc = 0x2D7BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7BA0u;
    // 0x2d7ba4: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D58u, 0x2D7BA0u, 0x2D7BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BA8u;
label_2d7ba8:
    // 0x2d7ba8: 0x24510004  addiu       $s1, $v0, 0x4
    ctx->pc = 0x2d7ba8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2d7bac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2d7bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d7bb0: 0xc0b5f56  jal         func_2D7D58
    ctx->pc = 0x2D7BB0u;
    SET_GPR_U32(ctx, 31, 0x2D7BB8u);
    ctx->pc = 0x2D7BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D7BB0u;
    // 0x2d7bb4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D7D58u, 0x2D7BB0u, 0x2D7BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D7BB8u;
label_2d7bb8:
    // 0x2d7bb8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x2d7bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2d7bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d7bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d7bc0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d7bc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d7bc4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d7bc4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d7bc8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2d7bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d7bcc: 0x3e00008  jr          $ra
    ctx->pc = 0x2D7BCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D7BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D7BCCu;
        // 0x2d7bd0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D7BCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D7BD4u;
    // 0x2d7bd4: 0x0  nop
    ctx->pc = 0x2d7bd4u;
    // NOP
    ctx->pc = 0x2d7bd8u;
}
