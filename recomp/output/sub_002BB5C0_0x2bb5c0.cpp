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

// Function: sub_002BB5C0
// Address: 0x2bb5c0 - 0x2bb608
void sub_002BB5C0_0x2bb5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BB5C0_0x2bb5c0");
#endif

    switch (ctx->pc) {
        case 0x2bb5e4u: goto label_2bb5e4;
        case 0x2bb5f0u: goto label_2bb5f0;
        case 0x2bb5fcu: goto label_2bb5fc;
        default: break;
    }

    ctx->pc = 0x2bb5c0u;

    // 0x2bb5c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bb5c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bb5c4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2bb5c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2bb5c8: 0x14a2000c  bne         $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2BB5C8u;
    {
        const bool branch_taken_0x2bb5c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BB5CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5C8u;
        // 0x2bb5cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb5c8) {
            ctx->pc = 0x2BB5FCu;
            goto label_2bb5fc;
        }
    }
    ctx->pc = 0x2BB5D0u;
    // 0x2bb5d0: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x2BB5D0u;
    {
        const bool branch_taken_0x2bb5d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BB5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB5D0u;
        // 0x2bb5d4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bb5d0) {
            ctx->pc = 0x2BB600u;
            goto label_2bb600;
        }
    }
    ctx->pc = 0x2BB5D8u;
    // 0x2bb5d8: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bb5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bb5dc: 0xc0aebf6  jal         func_2BAFD8
    ctx->pc = 0x2BB5DCu;
    SET_GPR_U32(ctx, 31, 0x2BB5E4u);
    ctx->pc = 0x2BB5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5DCu;
    // 0x2bb5e0: 0x24844ec0  addiu       $a0, $a0, 0x4EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFD8u, 0x2BB5DCu, 0x2BB5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5E4u;
label_2bb5e4:
    // 0x2bb5e4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bb5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bb5e8: 0xc0aebf6  jal         func_2BAFD8
    ctx->pc = 0x2BB5E8u;
    SET_GPR_U32(ctx, 31, 0x2BB5F0u);
    ctx->pc = 0x2BB5ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5E8u;
    // 0x2bb5ec: 0x24844ed8  addiu       $a0, $a0, 0x4ED8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BAFD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BAFD8u, 0x2BB5E8u, 0x2BB5F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5F0u;
label_2bb5f0:
    // 0x2bb5f0: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bb5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bb5f4: 0xc0aec7c  jal         func_2BB1F0
    ctx->pc = 0x2BB5F4u;
    SET_GPR_U32(ctx, 31, 0x2BB5FCu);
    ctx->pc = 0x2BB5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BB5F4u;
    // 0x2bb5f8: 0x24844ef0  addiu       $a0, $a0, 0x4EF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB1F0u, 0x2BB5F4u, 0x2BB5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BB5FCu;
label_2bb5fc:
    // 0x2bb5fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2bb5fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2bb600:
    // 0x2bb600: 0x3e00008  jr          $ra
    ctx->pc = 0x2BB600u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BB604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BB600u;
        // 0x2bb604: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BB600u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BB608u;
}
