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

// Function: sub_003BF908
// Address: 0x3bf908 - 0x3bf990
void sub_003BF908_0x3bf908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003BF908_0x3bf908");
#endif

    switch (ctx->pc) {
        case 0x3bf928u: goto label_3bf928;
        case 0x3bf968u: goto label_3bf968;
        default: break;
    }

    ctx->pc = 0x3bf908u;

    // 0x3bf908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3bf908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3bf90c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x3bf90cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x3bf910: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x3bf910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x3bf914: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3bf914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf918: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3bf918u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf91c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3bf91cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3bf920: 0xc0efc2e  jal         func_3BF0B8
    ctx->pc = 0x3BF920u;
    SET_GPR_U32(ctx, 31, 0x3BF928u);
    ctx->pc = 0x3BF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF920u;
    // 0x3bf924: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BF0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BF0B8u, 0x3BF920u, 0x3BF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF928u;
label_3bf928:
    // 0x3bf928: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x3bf928u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x3bf92c: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x3bf92cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3bf930: 0x24630d20  addiu       $v1, $v1, 0xD20
    ctx->pc = 0x3bf930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3360));
    // 0x3bf934: 0x24490001  addiu       $t1, $v0, 0x1
    ctx->pc = 0x3bf934u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3bf938: 0x27a80010  addiu       $t0, $sp, 0x10
    ctx->pc = 0x3bf938u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3bf93c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3bf93cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3bf940: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x3bf940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3bf944: 0xafb10010  sw          $s1, 0x10($sp)
    ctx->pc = 0x3bf944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 17));
    // 0x3bf948: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x3bf948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x3bf94c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3bf94cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf950: 0xafa6001c  sw          $a2, 0x1C($sp)
    ctx->pc = 0x3bf950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 6));
    // 0x3bf954: 0xafa90008  sw          $t1, 0x8($sp)
    ctx->pc = 0x3bf954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 9));
    // 0x3bf958: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x3bf958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x3bf95c: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x3bf95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
    // 0x3bf960: 0xc0f1acc  jal         func_3C6B30
    ctx->pc = 0x3BF960u;
    SET_GPR_U32(ctx, 31, 0x3BF968u);
    ctx->pc = 0x3BF964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3BF960u;
    // 0x3bf964: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C6B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C6B30u, 0x3BF960u, 0x3BF968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3BF968u;
label_3bf968:
    // 0x3bf968: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x3bf968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3bf96c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x3bf96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3bf970: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x3bf970u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x3bf974: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x3bf974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3bf978: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x3bf978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3bf97c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3bf97cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3bf980: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3bf980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3bf984: 0x3e00008  jr          $ra
    ctx->pc = 0x3BF984u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3BF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3BF984u;
        // 0x3bf988: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3BF984u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3BF98Cu;
    // 0x3bf98c: 0x0  nop
    ctx->pc = 0x3bf98cu;
    // NOP
    ctx->pc = 0x3bf990u;
}
