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

// Function: sub_00265078
// Address: 0x265078 - 0x2650e0
void sub_00265078_0x265078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00265078_0x265078");
#endif

    switch (ctx->pc) {
        case 0x2650b4u: goto label_2650b4;
        case 0x2650c0u: goto label_2650c0;
        case 0x2650ccu: goto label_2650cc;
        default: break;
    }

    ctx->pc = 0x265078u;

    // 0x265078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x265078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26507c: 0x3c020043  lui         $v0, 0x43
    ctx->pc = 0x26507cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)67 << 16));
    // 0x265080: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x265080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x265084: 0x24422530  addiu       $v0, $v0, 0x2530
    ctx->pc = 0x265084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9520));
    // 0x265088: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x265088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x26508c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26508cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x265090: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x265090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x265094: 0xae020218  sw          $v0, 0x218($s0)
    ctx->pc = 0x265094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 2));
    // 0x265098: 0x8e0302d4  lw          $v1, 0x2D4($s0)
    ctx->pc = 0x265098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 724)));
    // 0x26509c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26509Cu;
    {
        const bool branch_taken_0x26509c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2650A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26509Cu;
        // 0x2650a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26509c) {
            ctx->pc = 0x2650B4u;
            goto label_2650b4;
        }
    }
    ctx->pc = 0x2650A4u;
    // 0x2650a4: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2650a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2650a8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x2650a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650ac: 0xc0b2b08  jal         func_2CAC20
    ctx->pc = 0x2650ACu;
    SET_GPR_U32(ctx, 31, 0x2650B4u);
    ctx->pc = 0x2650B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650ACu;
    // 0x2650b0: 0x24845ad0  addiu       $a0, $a0, 0x5AD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2CAC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2CAC20u, 0x2650ACu, 0x2650B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2650B4u;
label_2650b4:
    // 0x2650b4: 0x26040324  addiu       $a0, $s0, 0x324
    ctx->pc = 0x2650b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 804));
    // 0x2650b8: 0xc0d7412  jal         func_35D048
    ctx->pc = 0x2650B8u;
    SET_GPR_U32(ctx, 31, 0x2650C0u);
    ctx->pc = 0x2650BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650B8u;
    // 0x2650bc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D048u, 0x2650B8u, 0x2650C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2650C0u;
label_2650c0:
    // 0x2650c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2650c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2650c4: 0xc09bb06  jal         func_26EC18
    ctx->pc = 0x2650C4u;
    SET_GPR_U32(ctx, 31, 0x2650CCu);
    ctx->pc = 0x2650C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2650C4u;
    // 0x2650c8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26EC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26EC18u, 0x2650C4u, 0x2650CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2650CCu;
label_2650cc:
    // 0x2650cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2650ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2650d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2650d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2650d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2650d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2650d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2650D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2650DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2650D8u;
        // 0x2650dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2650D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2650E0u;
}
