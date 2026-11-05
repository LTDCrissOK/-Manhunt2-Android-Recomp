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

// Function: sub_00254290
// Address: 0x254290 - 0x2542e8
void sub_00254290_0x254290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254290_0x254290");
#endif

    switch (ctx->pc) {
        case 0x2542ccu: goto label_2542cc;
        case 0x2542d4u: goto label_2542d4;
        default: break;
    }

    ctx->pc = 0x254290u;

    // 0x254290: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x254290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x254294: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x254294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x254298: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x254298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x25429c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x25429cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2542a0: 0x8e0200c0  lw          $v0, 0xC0($s0)
    ctx->pc = 0x2542a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2542a4: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x2542a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x2542a8: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2542A8u;
    {
        const bool branch_taken_0x2542a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2542a8) {
            ctx->pc = 0x2542ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2542A8u;
            // 0x2542ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2542D8u;
            goto label_2542d8;
        }
    }
    ctx->pc = 0x2542B0u;
    // 0x2542b0: 0x8e020fe8  lw          $v0, 0xFE8($s0)
    ctx->pc = 0x2542b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4072)));
    // 0x2542b4: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x2542b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x2542b8: 0xae031060  sw          $v1, 0x1060($s0)
    ctx->pc = 0x2542b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4192), GPR_U32(ctx, 3));
    // 0x2542bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2542bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2542c0: 0xac44035c  sw          $a0, 0x35C($v0)
    ctx->pc = 0x2542c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 860), GPR_U32(ctx, 4));
    // 0x2542c4: 0xc061ca4  jal         func_187290
    ctx->pc = 0x2542C4u;
    SET_GPR_U32(ctx, 31, 0x2542CCu);
    ctx->pc = 0x2542C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542C4u;
    // 0x2542c8: 0x8e040fe4  lw          $a0, 0xFE4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4068)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187290u, 0x2542C4u, 0x2542CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542CCu;
label_2542cc:
    // 0x2542cc: 0xc0944f6  jal         func_2513D8
    ctx->pc = 0x2542CCu;
    SET_GPR_U32(ctx, 31, 0x2542D4u);
    ctx->pc = 0x2542D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2542CCu;
    // 0x2542d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2513D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2513D8u, 0x2542CCu, 0x2542D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2542D4u;
label_2542d4:
    // 0x2542d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2542d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2542d8:
    // 0x2542d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2542d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2542dc: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2542dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2542e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2542E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2542E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2542E0u;
        // 0x2542e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2542E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2542E8u;
}
