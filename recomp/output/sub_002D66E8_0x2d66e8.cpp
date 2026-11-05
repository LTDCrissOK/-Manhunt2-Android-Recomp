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

// Function: sub_002D66E8
// Address: 0x2d66e8 - 0x2d6750
void sub_002D66E8_0x2d66e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D66E8_0x2d66e8");
#endif

    switch (ctx->pc) {
        case 0x2d6710u: goto label_2d6710;
        case 0x2d6720u: goto label_2d6720;
        default: break;
    }

    ctx->pc = 0x2d66e8u;

    // 0x2d66e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d66e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2d66ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d66ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2d66f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2d66f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x2d66f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d66f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d66f8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2d66f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2d66fc: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2D66FCu;
    {
        const bool branch_taken_0x2d66fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d66fc) {
            ctx->pc = 0x2D6700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D66FCu;
            // 0x2d6700: 0x8e020018  lw          $v0, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D6714u;
            goto label_2d6714;
        }
    }
    ctx->pc = 0x2D6704u;
    // 0x2d6704: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x2d6704u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d6708: 0xc0754f2  jal         func_1D53C8
    ctx->pc = 0x2D6708u;
    SET_GPR_U32(ctx, 31, 0x2D6710u);
    ctx->pc = 0x2D670Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D6708u;
    // 0x2d670c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D53C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D53C8u, 0x2D6708u, 0x2D6710u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D6710u;
label_2d6710:
    // 0x2d6710: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d6710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2d6714:
    // 0x2d6714: 0x18400008  blez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D6714u;
    {
        const bool branch_taken_0x2d6714 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D6718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6714u;
        // 0x2d6718: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6714) {
            ctx->pc = 0x2D6738u;
            goto label_2d6738;
        }
    }
    ctx->pc = 0x2D671Cu;
    // 0x2d671c: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x2d671cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2d6720:
    // 0x2d6720: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x2d6720u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x2d6724: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2d6724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x2d6728: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2d6728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2d672c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x2d672cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d6730: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2D6730u;
    {
        const bool branch_taken_0x2d6730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D6734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6730u;
        // 0x2d6734: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d6730) {
            ctx->pc = 0x2D6720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2d6720;
        }
    }
    ctx->pc = 0x2D6738u;
label_2d6738:
    // 0x2d6738: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2d6738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2d673c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d673cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d6740: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2d6740u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2d6744: 0x3e00008  jr          $ra
    ctx->pc = 0x2D6744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D6748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D6744u;
        // 0x2d6748: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D6744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D674Cu;
    // 0x2d674c: 0x0  nop
    ctx->pc = 0x2d674cu;
    // NOP
    ctx->pc = 0x2d6750u;
}
