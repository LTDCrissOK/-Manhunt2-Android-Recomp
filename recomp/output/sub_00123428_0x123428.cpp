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

// Function: sub_00123428
// Address: 0x123428 - 0x123478
void sub_00123428_0x123428(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123428_0x123428");
#endif

    switch (ctx->pc) {
        case 0x123448u: goto label_123448;
        case 0x12345cu: goto label_12345c;
        default: break;
    }

    ctx->pc = 0x123428u;

    // 0x123428: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123428u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x12342c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x12342cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x123434: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x123434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x123438: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x123438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12343c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x12343cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x123440: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x123440u;
    SET_GPR_U32(ctx, 31, 0x123448u);
    ctx->pc = 0x123444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123440u;
    // 0x123444: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x123440u, 0x123448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x123448u;
label_123448:
    // 0x123448: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x123448u;
    {
        const bool branch_taken_0x123448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12344Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123448u;
        // 0x12344c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x123448) {
            ctx->pc = 0x123464u;
            goto label_123464;
        }
    }
    ctx->pc = 0x123450u;
    // 0x123450: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x123450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x123454: 0xc042b52  jal         func_10AD48
    ctx->pc = 0x123454u;
    SET_GPR_U32(ctx, 31, 0x12345Cu);
    ctx->pc = 0x123458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x123454u;
    // 0x123458: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AD48u, 0x123454u, 0x12345Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12345Cu;
label_12345c:
    // 0x12345c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x12345Cu;
    {
        const bool branch_taken_0x12345c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x123460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12345Cu;
        // 0x123460: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12345c) {
            ctx->pc = 0x123468u;
            goto label_123468;
        }
    }
    ctx->pc = 0x123464u;
label_123464:
    // 0x123464: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x123464u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_123468:
    // 0x123468: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x123468u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x12346c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x12346cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x123470: 0x3e00008  jr          $ra
    ctx->pc = 0x123470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x123474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x123470u;
        // 0x123474: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x123470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x123478u;
}
