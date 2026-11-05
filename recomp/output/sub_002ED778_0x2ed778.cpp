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

// Function: sub_002ED778
// Address: 0x2ed778 - 0x2ed7c8
void sub_002ED778_0x2ed778(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ED778_0x2ed778");
#endif

    switch (ctx->pc) {
        case 0x2ed7bcu: goto label_2ed7bc;
        default: break;
    }

    ctx->pc = 0x2ed778u;

    // 0x2ed778: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ed778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ed77c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2ed77cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed780: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x2ed780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x2ed784: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ed784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ed788: 0x2442c758  addiu       $v0, $v0, -0x38A8
    ctx->pc = 0x2ed788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952792));
    // 0x2ed78c: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2ed78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2ed790: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ed790u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2ed794: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2ed794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2ed798: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ED798u;
    {
        const bool branch_taken_0x2ed798 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ED79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED798u;
        // 0x2ed79c: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed798) {
            ctx->pc = 0x2ED7A8u;
            goto label_2ed7a8;
        }
    }
    ctx->pc = 0x2ED7A0u;
    // 0x2ed7a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2ED7A0u;
    {
        const bool branch_taken_0x2ed7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ED7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7A0u;
        // 0x2ed7a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ed7a0) {
            ctx->pc = 0x2ED7BCu;
            goto label_2ed7bc;
        }
    }
    ctx->pc = 0x2ED7A8u;
label_2ed7a8:
    // 0x2ed7a8: 0x3c040059  lui         $a0, 0x59
    ctx->pc = 0x2ed7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)89 << 16));
    // 0x2ed7ac: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x2ed7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ed7b0: 0x24844dd0  addiu       $a0, $a0, 0x4DD0
    ctx->pc = 0x2ed7b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19920));
    // 0x2ed7b4: 0xc0abfc6  jal         func_2AFF18
    ctx->pc = 0x2ED7B4u;
    SET_GPR_U32(ctx, 31, 0x2ED7BCu);
    ctx->pc = 0x2ED7B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2ED7B4u;
    // 0x2ed7b8: 0x6302b  sltu        $a2, $zero, $a2 (Delay Slot)
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2AFF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2AFF18u, 0x2ED7B4u, 0x2ED7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2ED7BCu;
label_2ed7bc:
    // 0x2ed7bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ed7bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ed7c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2ED7C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ED7C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2ED7C0u;
        // 0x2ed7c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2ED7C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2ED7C8u;
}
