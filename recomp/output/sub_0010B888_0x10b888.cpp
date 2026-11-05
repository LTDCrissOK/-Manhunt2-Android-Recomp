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

// Function: sub_0010B888
// Address: 0x10b888 - 0x10b8f0
void sub_0010B888_0x10b888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010B888_0x10b888");
#endif

    switch (ctx->pc) {
        case 0x10b8a4u: goto label_10b8a4;
        case 0x10b8d0u: goto label_10b8d0;
        default: break;
    }

    ctx->pc = 0x10b888u;

    // 0x10b888: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10b888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10b88c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b890: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x10b890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x10b894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x10b894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b898: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10b89c: 0xc043366  jal         func_10CD98
    ctx->pc = 0x10B89Cu;
    SET_GPR_U32(ctx, 31, 0x10B8A4u);
    ctx->pc = 0x10B8A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B89Cu;
    // 0x10b8a0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD98u, 0x10B89Cu, 0x10B8A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8A4u;
label_10b8a4:
    // 0x10b8a4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x10b8a4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10b8a8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x10b8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x10b8ac: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10B8ACu;
    {
        const bool branch_taken_0x10b8ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x10B8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8ACu;
        // 0x10b8b0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8ac) {
            ctx->pc = 0x10B8D8u;
            goto label_10b8d8;
        }
    }
    ctx->pc = 0x10B8B4u;
    // 0x10b8b4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x10b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x10b8b8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x10b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x10b8bc: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x10b8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x10b8c0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10B8C0u;
    {
        const bool branch_taken_0x10b8c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8C0u;
        // 0x10b8c4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8c0) {
            ctx->pc = 0x10B8DCu;
            goto label_10b8dc;
        }
    }
    ctx->pc = 0x10B8C8u;
    // 0x10b8c8: 0xc043ea8  jal         func_10FAA0
    ctx->pc = 0x10B8C8u;
    SET_GPR_U32(ctx, 31, 0x10B8D0u);
    ctx->pc = 0x10B8CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B8C8u;
    // 0x10b8cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FAA0u, 0x10B8C8u, 0x10B8D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B8D0u;
label_10b8d0:
    // 0x10b8d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10B8D0u;
    {
        const bool branch_taken_0x10b8d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B8D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8D0u;
        // 0x10b8d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b8d0) {
            ctx->pc = 0x10B8DCu;
            goto label_10b8dc;
        }
    }
    ctx->pc = 0x10B8D8u;
label_10b8d8:
    // 0x10b8d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x10b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_10b8dc:
    // 0x10b8dc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b8dcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b8e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x10b8e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x10b8e4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10b8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10B8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B8E8u;
        // 0x10b8ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B8F0u;
}
