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

// Function: sub_001A6FF0
// Address: 0x1a6ff0 - 0x1a7050
void sub_001A6FF0_0x1a6ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A6FF0_0x1a6ff0");
#endif

    switch (ctx->pc) {
        case 0x1a700cu: goto label_1a700c;
        case 0x1a701cu: goto label_1a701c;
        case 0x1a7034u: goto label_1a7034;
        case 0x1a7044u: goto label_1a7044;
        default: break;
    }

    ctx->pc = 0x1a6ff0u;

    // 0x1a6ff0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a6ff4: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x1A6FF4u;
    {
        const bool branch_taken_0x1a6ff4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A6FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FF4u;
        // 0x1a6ff8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ff4) {
            ctx->pc = 0x1A7024u;
            goto label_1a7024;
        }
    }
    ctx->pc = 0x1A6FFCu;
    // 0x1a6ffc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A6FFCu;
    {
        const bool branch_taken_0x1a6ffc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A6FFCu;
        // 0x1a7000: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a6ffc) {
            ctx->pc = 0x1A7014u;
            goto label_1a7014;
        }
    }
    ctx->pc = 0x1A7004u;
    // 0x1a7004: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A7004u;
    SET_GPR_U32(ctx, 31, 0x1A700Cu);
    ctx->pc = 0x1A7008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7004u;
    // 0x1a7008: 0x24060793  addiu       $a2, $zero, 0x793 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1939));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A7004u, 0x1A700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A700Cu;
label_1a700c:
    // 0x1a700c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1A700Cu;
    {
        const bool branch_taken_0x1a700c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A700Cu;
        // 0x1a7010: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a700c) {
            ctx->pc = 0x1A7048u;
            goto label_1a7048;
        }
    }
    ctx->pc = 0x1A7014u;
label_1a7014:
    // 0x1a7014: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A7014u;
    SET_GPR_U32(ctx, 31, 0x1A701Cu);
    ctx->pc = 0x1A7018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A7014u;
    // 0x1a7018: 0x24060792  addiu       $a2, $zero, 0x792 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1938));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A7014u, 0x1A701Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A701Cu;
label_1a701c:
    // 0x1a701c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A701Cu;
    {
        const bool branch_taken_0x1a701c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A701Cu;
        // 0x1a7020: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a701c) {
            ctx->pc = 0x1A7048u;
            goto label_1a7048;
        }
    }
    ctx->pc = 0x1A7024u;
label_1a7024:
    // 0x1a7024: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A7024u;
    {
        const bool branch_taken_0x1a7024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7024u;
        // 0x1a7028: 0x24050030  addiu       $a1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7024) {
            ctx->pc = 0x1A703Cu;
            goto label_1a703c;
        }
    }
    ctx->pc = 0x1A702Cu;
    // 0x1a702c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A702Cu;
    SET_GPR_U32(ctx, 31, 0x1A7034u);
    ctx->pc = 0x1A7030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A702Cu;
    // 0x1a7030: 0x24060791  addiu       $a2, $zero, 0x791 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1937));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A702Cu, 0x1A7034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7034u;
label_1a7034:
    // 0x1a7034: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1A7034u;
    {
        const bool branch_taken_0x1a7034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A7038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7034u;
        // 0x1a7038: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a7034) {
            ctx->pc = 0x1A7048u;
            goto label_1a7048;
        }
    }
    ctx->pc = 0x1A703Cu;
label_1a703c:
    // 0x1a703c: 0xc069712  jal         func_1A5C48
    ctx->pc = 0x1A703Cu;
    SET_GPR_U32(ctx, 31, 0x1A7044u);
    ctx->pc = 0x1A7040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A703Cu;
    // 0x1a7040: 0x24060790  addiu       $a2, $zero, 0x790 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A5C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A5C48u, 0x1A703Cu, 0x1A7044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A7044u;
label_1a7044:
    // 0x1a7044: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a7044u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a7048:
    // 0x1a7048: 0x3e00008  jr          $ra
    ctx->pc = 0x1A7048u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A704Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A7048u;
        // 0x1a704c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A7048u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A7050u;
}
