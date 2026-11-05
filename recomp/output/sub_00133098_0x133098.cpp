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

// Function: sub_00133098
// Address: 0x133098 - 0x1330f0
void sub_00133098_0x133098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133098_0x133098");
#endif

    switch (ctx->pc) {
        case 0x1330c0u: goto label_1330c0;
        default: break;
    }

    ctx->pc = 0x133098u;

    // 0x133098: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x133098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13309c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x13309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1330a0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1330a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1330a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1330a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1330a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1330a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1330ac: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1330acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1330b0: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1330B0u;
    {
        const bool branch_taken_0x1330b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1330B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330B0u;
        // 0x1330b4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330b0) {
            ctx->pc = 0x1330D4u;
            goto label_1330d4;
        }
    }
    ctx->pc = 0x1330B8u;
    // 0x1330b8: 0xc04561a  jal         func_115868
    ctx->pc = 0x1330B8u;
    SET_GPR_U32(ctx, 31, 0x1330C0u);
    ctx->pc = 0x115868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115868u, 0x1330B8u, 0x1330C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1330C0u;
label_1330c0:
    // 0x1330c0: 0x14510005  bne         $v0, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1330C0u;
    {
        const bool branch_taken_0x1330c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x1330C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330C0u;
        // 0x1330c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330c0) {
            ctx->pc = 0x1330D8u;
            goto label_1330d8;
        }
    }
    ctx->pc = 0x1330C8u;
    // 0x1330c8: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1330c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1330cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1330CCu;
    {
        const bool branch_taken_0x1330cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1330D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330CCu;
        // 0x1330d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330cc) {
            ctx->pc = 0x1330D8u;
            goto label_1330d8;
        }
    }
    ctx->pc = 0x1330D4u;
label_1330d4:
    // 0x1330d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1330d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1330d8:
    // 0x1330d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1330d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1330dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1330dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1330e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1330e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1330e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1330E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1330E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1330E4u;
        // 0x1330e8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1330E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1330ECu;
    // 0x1330ec: 0x0  nop
    ctx->pc = 0x1330ecu;
    // NOP
    ctx->pc = 0x1330f0u;
}
