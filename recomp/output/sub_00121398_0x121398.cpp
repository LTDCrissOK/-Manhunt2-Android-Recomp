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

// Function: sub_00121398
// Address: 0x121398 - 0x1213f0
void sub_00121398_0x121398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00121398_0x121398");
#endif

    switch (ctx->pc) {
        case 0x1213b8u: goto label_1213b8;
        case 0x1213ccu: goto label_1213cc;
        case 0x1213d8u: goto label_1213d8;
        default: break;
    }

    ctx->pc = 0x121398u;

    // 0x121398: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x121398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12139c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12139cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1213a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1213a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1213a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1213a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213a8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1213a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213ac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1213acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1213b0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1213B0u;
    SET_GPR_U32(ctx, 31, 0x1213B8u);
    ctx->pc = 0x1213B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213B0u;
    // 0x1213b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1213B0u, 0x1213B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213B8u;
label_1213b8:
    // 0x1213b8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1213B8u;
    {
        const bool branch_taken_0x1213b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1213BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213B8u;
        // 0x1213bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1213b8) {
            ctx->pc = 0x1213DCu;
            goto label_1213dc;
        }
    }
    ctx->pc = 0x1213C0u;
    // 0x1213c0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1213c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1213c4: 0xc04253e  jal         func_1094F8
    ctx->pc = 0x1213C4u;
    SET_GPR_U32(ctx, 31, 0x1213CCu);
    ctx->pc = 0x1213C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213C4u;
    // 0x1213c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1094F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1094F8u, 0x1213C4u, 0x1213CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213CCu;
label_1213cc:
    // 0x1213cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1213ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1213d0: 0xc048ea0  jal         func_123A80
    ctx->pc = 0x1213D0u;
    SET_GPR_U32(ctx, 31, 0x1213D8u);
    ctx->pc = 0x1213D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1213D0u;
    // 0x1213d4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123A80u, 0x1213D0u, 0x1213D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1213D8u;
label_1213d8:
    // 0x1213d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1213d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1213dc:
    // 0x1213dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1213dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1213e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1213e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1213e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1213e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1213e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1213E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1213ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1213E8u;
        // 0x1213ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1213E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1213F0u;
}
