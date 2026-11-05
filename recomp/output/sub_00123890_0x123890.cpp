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

// Function: sub_00123890
// Address: 0x123890 - 0x1238f0
void sub_00123890_0x123890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00123890_0x123890");
#endif

    switch (ctx->pc) {
        case 0x1238b8u: goto label_1238b8;
        case 0x1238ccu: goto label_1238cc;
        default: break;
    }

    ctx->pc = 0x123890u;

    // 0x123890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x123890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x123894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x123894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x123898: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x123898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x12389c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x12389cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238a0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1238a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1238a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1238a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238a8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1238a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1238ac: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1238acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1238b0: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x1238B0u;
    SET_GPR_U32(ctx, 31, 0x1238B8u);
    ctx->pc = 0x1238B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1238B0u;
    // 0x1238b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x1238B0u, 0x1238B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238B8u;
label_1238b8:
    // 0x1238b8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1238B8u;
    {
        const bool branch_taken_0x1238b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238B8u;
        // 0x1238bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238b8) {
            ctx->pc = 0x1238D4u;
            goto label_1238d4;
        }
    }
    ctx->pc = 0x1238C0u;
    // 0x1238c0: 0x8e240078  lw          $a0, 0x78($s1)
    ctx->pc = 0x1238c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 120)));
    // 0x1238c4: 0xc042baa  jal         func_10AEA8
    ctx->pc = 0x1238C4u;
    SET_GPR_U32(ctx, 31, 0x1238CCu);
    ctx->pc = 0x1238C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1238C4u;
    // 0x1238c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10AEA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AEA8u, 0x1238C4u, 0x1238CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1238CCu;
label_1238cc:
    // 0x1238cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1238CCu;
    {
        const bool branch_taken_0x1238cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1238D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238CCu;
        // 0x1238d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1238cc) {
            ctx->pc = 0x1238D8u;
            goto label_1238d8;
        }
    }
    ctx->pc = 0x1238D4u;
label_1238d4:
    // 0x1238d4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1238d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1238d8:
    // 0x1238d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1238d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1238dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1238dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1238e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1238e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1238e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1238e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1238e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1238E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1238ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1238E8u;
        // 0x1238ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1238E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1238F0u;
}
