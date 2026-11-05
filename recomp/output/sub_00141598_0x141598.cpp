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

// Function: sub_00141598
// Address: 0x141598 - 0x1415e8
void sub_00141598_0x141598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00141598_0x141598");
#endif

    switch (ctx->pc) {
        case 0x1415b4u: goto label_1415b4;
        case 0x1415bcu: goto label_1415bc;
        case 0x1415d0u: goto label_1415d0;
        default: break;
    }

    ctx->pc = 0x141598u;

    // 0x141598: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x141598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14159c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x14159cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1415a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1415a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1415a4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1415a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1415a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1415a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1415ac: 0xc050636  jal         func_1418D8
    ctx->pc = 0x1415ACu;
    SET_GPR_U32(ctx, 31, 0x1415B4u);
    ctx->pc = 0x1415B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1415ACu;
    // 0x1415b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1418D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1418D8u, 0x1415ACu, 0x1415B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1415B4u;
label_1415b4:
    // 0x1415b4: 0xc04e56a  jal         func_1395A8
    ctx->pc = 0x1415B4u;
    SET_GPR_U32(ctx, 31, 0x1415BCu);
    ctx->pc = 0x1415B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1415B4u;
    // 0x1415b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1395A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1395A8u, 0x1415B4u, 0x1415BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1415BCu;
label_1415bc:
    // 0x1415bc: 0xae110464  sw          $s1, 0x464($s0)
    ctx->pc = 0x1415bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1124), GPR_U32(ctx, 17));
    // 0x1415c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1415c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1415c4: 0xae020460  sw          $v0, 0x460($s0)
    ctx->pc = 0x1415c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1120), GPR_U32(ctx, 2));
    // 0x1415c8: 0xc04d89a  jal         func_136268
    ctx->pc = 0x1415C8u;
    SET_GPR_U32(ctx, 31, 0x1415D0u);
    ctx->pc = 0x1415CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1415C8u;
    // 0x1415cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x136268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x136268u, 0x1415C8u, 0x1415D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1415D0u;
label_1415d0:
    // 0x1415d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1415d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1415d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1415d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1415d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1415d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1415dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1415DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1415E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1415DCu;
        // 0x1415e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1415DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1415E4u;
    // 0x1415e4: 0x0  nop
    ctx->pc = 0x1415e4u;
    // NOP
    ctx->pc = 0x1415e8u;
}
