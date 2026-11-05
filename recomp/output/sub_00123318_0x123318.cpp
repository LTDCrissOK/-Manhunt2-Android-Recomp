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

// Function: sub_00123318
// Address: 0x123318 - 0x123388
void sub_00123318_0x123318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123318_0x123318");
#endif

    switch (ctx->pc) {
        case 0x123340u: goto label_123340;
        case 0x123350u: goto label_123350;
        case 0x123364u: goto label_123364;
        default: break;
    }

    ctx->pc = 0x123318u;

    // 0x123318: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12331c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12331cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123320: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x123320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x123324: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123328: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12332c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12332cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123330: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x123330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x123334: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x123334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123338: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123338u;
    SET_GPR_U32(ctx, 31, 0x123340u);
    ctx->pc = 0x12333Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123338u;
    // 0x12333c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123338u, 0x123340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123340u;
label_123340:
    // 0x123340: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x123340u;
    {
        const bool branch_taken_0x123340 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123340u;
        // 0x123344: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123340) {
            ctx->pc = 0x123370u;
            goto label_123370;
        }
    }
    ctx->pc = 0x123348u;
    // 0x123348: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123348u;
    SET_GPR_U32(ctx, 31, 0x123350u);
    ctx->pc = 0x12334Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123348u;
    // 0x12334c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123348u, 0x123350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123350u;
label_123350:
    // 0x123350: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123350u;
    {
        const bool branch_taken_0x123350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x123354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123350u;
        // 0x123354: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123350) {
            ctx->pc = 0x12336Cu;
            goto label_12336c;
        }
    }
    ctx->pc = 0x123358u;
    // 0x123358: 0x8e440078  lw          $a0, 0x78($s2)
    ctx->pc = 0x123358u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
    // 0x12335c: 0xc0429e8  jal         func_10A7A0
    ctx->pc = 0x12335Cu;
    SET_GPR_U32(ctx, 31, 0x123364u);
    ctx->pc = 0x123360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x12335Cu;
    // 0x123360: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10A7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A7A0u, 0x12335Cu, 0x123364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123364u;
label_123364:
    // 0x123364: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x123364u;
    {
        const bool branch_taken_0x123364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123364u;
        // 0x123368: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123364) {
            ctx->pc = 0x123374u;
            goto label_123374;
        }
    }
    ctx->pc = 0x12336Cu;
label_12336c:
    // 0x12336c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x12336cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_123370:
    // 0x123370: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123370u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123374:
    // 0x123374: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123374u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x123378: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x123378u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12337c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x12337cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x123380: 0x3e00008  jr          $ra
    ctx->pc = 0x123380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123380u;
        // 0x123384: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123388u;
}
