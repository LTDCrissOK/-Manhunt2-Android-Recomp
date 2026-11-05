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

// Function: sub_002F28B8
// Address: 0x2f28b8 - 0x2f2900
void sub_002F28B8_0x2f28b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F28B8_0x2f28b8");
#endif

    switch (ctx->pc) {
        case 0x2f28ccu: goto label_2f28cc;
        default: break;
    }

    ctx->pc = 0x2f28b8u;

    // 0x2f28b8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2f28b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2f28bc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f28bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f28c0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2f28c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2f28c4: 0xc08b7c6  jal         func_22DF18
    ctx->pc = 0x2F28C4u;
    SET_GPR_U32(ctx, 31, 0x2F28CCu);
    ctx->pc = 0x2F28C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F28C4u;
    // 0x2f28c8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22DF18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22DF18u, 0x2F28C4u, 0x2F28CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F28CCu;
label_2f28cc:
    // 0x2f28cc: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F28CCu;
    {
        const bool branch_taken_0x2f28cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f28cc) {
            ctx->pc = 0x2F28D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F28CCu;
            // 0x2f28d0: 0x8e0311c0  lw          $v1, 0x11C0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4544)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F28DCu;
            goto label_2f28dc;
        }
    }
    ctx->pc = 0x2F28D4u;
    // 0x2f28d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2F28D4u;
    {
        const bool branch_taken_0x2f28d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F28D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28D4u;
        // 0x2f28d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f28d4) {
            ctx->pc = 0x2F28ECu;
            goto label_2f28ec;
        }
    }
    ctx->pc = 0x2F28DCu;
label_2f28dc:
    // 0x2f28dc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2f28dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2f28e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f28e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2f28e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2f28e8: 0xae0311c0  sw          $v1, 0x11C0($s0)
    ctx->pc = 0x2f28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4544), GPR_U32(ctx, 3));
label_2f28ec:
    // 0x2f28ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f28ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f28f0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2f28f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f28f4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F28F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F28F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F28F4u;
        // 0x2f28f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F28F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F28FCu;
    // 0x2f28fc: 0x0  nop
    ctx->pc = 0x2f28fcu;
    // NOP
    ctx->pc = 0x2f2900u;
}
