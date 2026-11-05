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

// Function: sub_00277730
// Address: 0x277730 - 0x277780
void sub_00277730_0x277730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00277730_0x277730");
#endif

    switch (ctx->pc) {
        case 0x277748u: goto label_277748;
        default: break;
    }

    ctx->pc = 0x277730u;

    // 0x277730: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x277730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x277734: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x277734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x277738: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x277738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27773c: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27773cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x277740: 0xc0b241a  jal         func_2C9068
    ctx->pc = 0x277740u;
    SET_GPR_U32(ctx, 31, 0x277748u);
    ctx->pc = 0x277744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277740u;
    // 0x277744: 0x24a40041  addiu       $a0, $a1, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C9068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C9068u, 0x277740u, 0x277748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277748u;
label_277748:
    // 0x277748: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x277748u;
    {
        const bool branch_taken_0x277748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27774Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277748u;
        // 0x27774c: 0xae020108  sw          $v0, 0x108($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277748) {
            ctx->pc = 0x27776Cu;
            goto label_27776c;
        }
    }
    ctx->pc = 0x277750u;
    // 0x277750: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x277750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x277754: 0x2444003f  addiu       $a0, $v0, 0x3F
    ctx->pc = 0x277754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 63));
    // 0x277758: 0x3463ffc0  ori         $v1, $v1, 0xFFC0
    ctx->pc = 0x277758u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65472);
    // 0x27775c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27775cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277760: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x277760u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x277764: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x277764u;
    {
        const bool branch_taken_0x277764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277764u;
        // 0x277768: 0xae040000  sw          $a0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277764) {
            ctx->pc = 0x277770u;
            goto label_277770;
        }
    }
    ctx->pc = 0x27776Cu;
label_27776c:
    // 0x27776c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27776cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277770:
    // 0x277770: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277770u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277774: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x277774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x277778: 0x3e00008  jr          $ra
    ctx->pc = 0x277778u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27777Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277778u;
        // 0x27777c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277778u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277780u;
}
