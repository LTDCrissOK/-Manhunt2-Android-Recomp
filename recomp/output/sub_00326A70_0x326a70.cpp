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

// Function: sub_00326A70
// Address: 0x326a70 - 0x326ac0
void sub_00326A70_0x326a70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326A70_0x326a70");
#endif

    switch (ctx->pc) {
        case 0x326a98u: goto label_326a98;
        case 0x326aacu: goto label_326aac;
        default: break;
    }

    ctx->pc = 0x326a70u;

    // 0x326a70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326a74: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x326a74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x326a78: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x326a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x326a7c: 0x24424460  addiu       $v0, $v0, 0x4460
    ctx->pc = 0x326a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17504));
    // 0x326a80: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x326a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x326a84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326a84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a88: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326a8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x326a8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326a90: 0xc0c9ac2  jal         func_326B08
    ctx->pc = 0x326A90u;
    SET_GPR_U32(ctx, 31, 0x326A98u);
    ctx->pc = 0x326A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326A90u;
    // 0x326a94: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326B08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x326B08u, 0x326A90u, 0x326A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326A98u;
label_326a98:
    // 0x326a98: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x326a98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x326a9c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326A9Cu;
    {
        const bool branch_taken_0x326a9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x326AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326A9Cu;
        // 0x326aa0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326a9c) {
            ctx->pc = 0x326AB0u;
            goto label_326ab0;
        }
    }
    ctx->pc = 0x326AA4u;
    // 0x326aa4: 0xc0f5222  jal         func_3D4888
    ctx->pc = 0x326AA4u;
    SET_GPR_U32(ctx, 31, 0x326AACu);
    ctx->pc = 0x326AA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326AA4u;
    // 0x326aa8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4888u, 0x326AA4u, 0x326AACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x326AACu;
label_326aac:
    // 0x326aac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x326aacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_326ab0:
    // 0x326ab0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x326ab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x326ab4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x326ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x326AB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x326ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326AB8u;
        // 0x326abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x326AB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x326AC0u;
}
