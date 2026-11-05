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

// Function: sub_00123388
// Address: 0x123388 - 0x1233d8
void sub_00123388_0x123388(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123388_0x123388");
#endif

    switch (ctx->pc) {
        case 0x1233a8u: goto label_1233a8;
        case 0x1233bcu: goto label_1233bc;
        default: break;
    }

    ctx->pc = 0x123388u;

    // 0x123388: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12338c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12338cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123390: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123394: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123394u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123398: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123398u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12339c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12339cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1233a0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1233A0u;
    SET_GPR_U32(ctx, 31, 0x1233A8u);
    ctx->pc = 0x1233A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233A0u;
    // 0x1233a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1233A0u, 0x1233A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233A8u;
label_1233a8:
    // 0x1233a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1233A8u;
    {
        const bool branch_taken_0x1233a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233A8u;
        // 0x1233ac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233a8) {
            ctx->pc = 0x1233C4u;
            goto label_1233c4;
        }
    }
    ctx->pc = 0x1233B0u;
    // 0x1233b0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1233b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1233b4: 0xc042b18  jal         func_10AC60
    ctx->pc = 0x1233B4u;
    SET_GPR_U32(ctx, 31, 0x1233BCu);
    ctx->pc = 0x1233B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1233B4u;
    // 0x1233b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC60u, 0x1233B4u, 0x1233BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1233BCu;
label_1233bc:
    // 0x1233bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1233BCu;
    {
        const bool branch_taken_0x1233bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1233C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233BCu;
        // 0x1233c0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1233bc) {
            ctx->pc = 0x1233C8u;
            goto label_1233c8;
        }
    }
    ctx->pc = 0x1233C4u;
label_1233c4:
    // 0x1233c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1233c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1233c8:
    // 0x1233c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1233c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1233cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1233ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1233d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1233D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1233D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1233D0u;
        // 0x1233d4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1233D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1233D8u;
}
