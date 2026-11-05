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

// Function: sub_0016A7A0
// Address: 0x16a7a0 - 0x16a810
void sub_0016A7A0_0x16a7a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A7A0_0x16a7a0");
#endif

    switch (ctx->pc) {
        case 0x16a7d4u: goto label_16a7d4;
        case 0x16a7ecu: goto label_16a7ec;
        case 0x16a7f8u: goto label_16a7f8;
        default: break;
    }

    ctx->pc = 0x16a7a0u;

    // 0x16a7a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x16a7a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x16a7a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a7a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a7a8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x16a7a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x16a7ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a7acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7b0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16a7b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16a7b4: 0x8e03019c  lw          $v1, 0x19C($s0)
    ctx->pc = 0x16a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 412)));
    // 0x16a7b8: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x16A7B8u;
    {
        const bool branch_taken_0x16a7b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A7BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A7B8u;
        // 0x16a7bc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a7b8) {
            ctx->pc = 0x16A7F8u;
            goto label_16a7f8;
        }
    }
    ctx->pc = 0x16A7C0u;
    // 0x16a7c0: 0x8e0201a4  lw          $v0, 0x1A4($s0)
    ctx->pc = 0x16a7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 420)));
    // 0x16a7c4: 0x5043000d  beql        $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x16A7C4u;
    {
        const bool branch_taken_0x16a7c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x16a7c4) {
            ctx->pc = 0x16A7C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A7C4u;
            // 0x16a7c8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A7FCu;
            goto label_16a7fc;
        }
    }
    ctx->pc = 0x16A7CCu;
    // 0x16a7cc: 0xc05b08a  jal         func_16C228
    ctx->pc = 0x16A7CCu;
    SET_GPR_U32(ctx, 31, 0x16A7D4u);
    ctx->pc = 0x16C228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C228u, 0x16A7CCu, 0x16A7D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7D4u;
label_16a7d4:
    // 0x16a7d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x16a7d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a7d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a7dc: 0x50a20007  beql        $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A7DCu;
    {
        const bool branch_taken_0x16a7dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x16a7dc) {
            ctx->pc = 0x16A7E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16A7DCu;
            // 0x16a7e0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16A7FCu;
            goto label_16a7fc;
        }
    }
    ctx->pc = 0x16A7E4u;
    // 0x16a7e4: 0xc05b0a4  jal         func_16C290
    ctx->pc = 0x16A7E4u;
    SET_GPR_U32(ctx, 31, 0x16A7ECu);
    ctx->pc = 0x16A7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7E4u;
    // 0x16a7e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C290u, 0x16A7E4u, 0x16A7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7ECu;
label_16a7ec:
    // 0x16a7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a7f0: 0xc05b0b4  jal         func_16C2D0
    ctx->pc = 0x16A7F0u;
    SET_GPR_U32(ctx, 31, 0x16A7F8u);
    ctx->pc = 0x16A7F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A7F0u;
    // 0x16a7f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x16C2D0u, 0x16A7F0u, 0x16A7F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16A7F8u;
label_16a7f8:
    // 0x16a7f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a7f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_16a7fc:
    // 0x16a7fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x16a7fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a800: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16a800u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a804: 0x3e00008  jr          $ra
    ctx->pc = 0x16A804u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A804u;
        // 0x16a808: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A804u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A80Cu;
    // 0x16a80c: 0x0  nop
    ctx->pc = 0x16a80cu;
    // NOP
    ctx->pc = 0x16a810u;
}
