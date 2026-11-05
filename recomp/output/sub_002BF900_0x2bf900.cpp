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

// Function: sub_002BF900
// Address: 0x2bf900 - 0x2bf960
void sub_002BF900_0x2bf900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF900_0x2bf900");
#endif

    switch (ctx->pc) {
        case 0x2bf914u: goto label_2bf914;
        case 0x2bf928u: goto label_2bf928;
        case 0x2bf948u: goto label_2bf948;
        default: break;
    }

    ctx->pc = 0x2bf900u;

    // 0x2bf900: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2bf900u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2bf904: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bf904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bf908: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2bf908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2bf90c: 0xc0af778  jal         func_2BDDE0
    ctx->pc = 0x2BF90Cu;
    SET_GPR_U32(ctx, 31, 0x2BF914u);
    ctx->pc = 0x2BF910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF90Cu;
    // 0x2bf910: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BDDE0u, 0x2BF90Cu, 0x2BF914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF914u;
label_2bf914:
    // 0x2bf914: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x2bf914u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x2bf918: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x2bf918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2bf91c: 0x24633aa8  addiu       $v1, $v1, 0x3AA8
    ctx->pc = 0x2bf91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15016));
    // 0x2bf920: 0xc0b0210  jal         func_2C0840
    ctx->pc = 0x2BF920u;
    SET_GPR_U32(ctx, 31, 0x2BF928u);
    ctx->pc = 0x2BF924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF920u;
    // 0x2bf924: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2C0840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C0840u, 0x2BF920u, 0x2BF928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF928u;
label_2bf928:
    // 0x2bf928: 0x24034001  addiu       $v1, $zero, 0x4001
    ctx->pc = 0x2bf928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16385));
    // 0x2bf92c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2bf92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2bf930: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2bf930u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2bf934: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x2bf934u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x2bf938: 0xa202000d  sb          $v0, 0xD($s0)
    ctx->pc = 0x2bf938u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 13), (uint8_t)GPR_U32(ctx, 2));
    // 0x2bf93c: 0x248450f0  addiu       $a0, $a0, 0x50F0
    ctx->pc = 0x2bf93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20720));
    // 0x2bf940: 0xc0f9f40  jal         func_3E7D00
    ctx->pc = 0x2BF940u;
    SET_GPR_U32(ctx, 31, 0x2BF948u);
    ctx->pc = 0x2BF944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BF940u;
    // 0x2bf944: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E7D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E7D00u, 0x2BF940u, 0x2BF948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BF948u;
label_2bf948:
    // 0x2bf948: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2bf948u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2bf94c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2bf94cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bf950: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2bf950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2bf954: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bf954u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bf958: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF958u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF958u;
        // 0x2bf95c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF958u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF960u;
}
