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

// Function: sub_00266C80
// Address: 0x266c80 - 0x266d18
void sub_00266C80_0x266c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266C80_0x266c80");
#endif

    switch (ctx->pc) {
        case 0x266c94u: goto label_266c94;
        case 0x266cb0u: goto label_266cb0;
        case 0x266cd0u: goto label_266cd0;
        case 0x266d04u: goto label_266d04;
        default: break;
    }

    ctx->pc = 0x266c80u;

    // 0x266c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x266c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x266c84: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x266c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x266c88: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x266c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x266c8c: 0xc0835aa  jal         func_20D6A8
    ctx->pc = 0x266C8Cu;
    SET_GPR_U32(ctx, 31, 0x266C94u);
    ctx->pc = 0x266C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266C8Cu;
    // 0x266c90: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20D6A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20D6A8u, 0x266C8Cu, 0x266C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266C94u;
label_266c94:
    // 0x266c94: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x266c94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x266c98: 0xae000220  sw          $zero, 0x220($s0)
    ctx->pc = 0x266c98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 544), GPR_U32(ctx, 0));
    // 0x266c9c: 0x246325c8  addiu       $v1, $v1, 0x25C8
    ctx->pc = 0x266c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9672));
    // 0x266ca0: 0xae000278  sw          $zero, 0x278($s0)
    ctx->pc = 0x266ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 0));
    // 0x266ca4: 0xae030218  sw          $v1, 0x218($s0)
    ctx->pc = 0x266ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 536), GPR_U32(ctx, 3));
    // 0x266ca8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x266CA8u;
    SET_GPR_U32(ctx, 31, 0x266CB0u);
    ctx->pc = 0x266CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266CA8u;
    // 0x266cac: 0x26040280  addiu       $a0, $s0, 0x280 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 640));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x266CA8u, 0x266CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CB0u;
label_266cb0:
    // 0x266cb0: 0xa2000292  sb          $zero, 0x292($s0)
    ctx->pc = 0x266cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 658), (uint8_t)GPR_U32(ctx, 0));
    // 0x266cb4: 0x260402b0  addiu       $a0, $s0, 0x2B0
    ctx->pc = 0x266cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 688));
    // 0x266cb8: 0xa2000293  sb          $zero, 0x293($s0)
    ctx->pc = 0x266cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 659), (uint8_t)GPR_U32(ctx, 0));
    // 0x266cbc: 0xa2000294  sb          $zero, 0x294($s0)
    ctx->pc = 0x266cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 660), (uint8_t)GPR_U32(ctx, 0));
    // 0x266cc0: 0xa2000295  sb          $zero, 0x295($s0)
    ctx->pc = 0x266cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 661), (uint8_t)GPR_U32(ctx, 0));
    // 0x266cc4: 0xa2000296  sb          $zero, 0x296($s0)
    ctx->pc = 0x266cc4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 662), (uint8_t)GPR_U32(ctx, 0));
    // 0x266cc8: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x266CC8u;
    SET_GPR_U32(ctx, 31, 0x266CD0u);
    ctx->pc = 0x266CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266CC8u;
    // 0x266ccc: 0xa2000297  sb          $zero, 0x297($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 663), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x266CC8u, 0x266CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266CD0u;
label_266cd0:
    // 0x266cd0: 0xae0002c0  sw          $zero, 0x2C0($s0)
    ctx->pc = 0x266cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 0));
    // 0x266cd4: 0x260202c4  addiu       $v0, $s0, 0x2C4
    ctx->pc = 0x266cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 708));
    // 0x266cd8: 0xae0002c4  sw          $zero, 0x2C4($s0)
    ctx->pc = 0x266cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 0));
    // 0x266cdc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x266cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x266ce0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x266ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x266ce4: 0x26040224  addiu       $a0, $s0, 0x224
    ctx->pc = 0x266ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 548));
    // 0x266ce8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x266ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x266cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x266cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266cf0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x266cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x266cf4: 0x24060054  addiu       $a2, $zero, 0x54
    ctx->pc = 0x266cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x266cf8: 0xae0002d8  sw          $zero, 0x2D8($s0)
    ctx->pc = 0x266cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 728), GPR_U32(ctx, 0));
    // 0x266cfc: 0xc0efab3  jal         func_3BEACC
    ctx->pc = 0x266CFCu;
    SET_GPR_U32(ctx, 31, 0x266D04u);
    ctx->pc = 0x266D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x266CFCu;
    // 0x266d00: 0xa20302d4  sb          $v1, 0x2D4($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 724), (uint8_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BEACCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BEACCu, 0x266CFCu, 0x266D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x266D04u;
label_266d04:
    // 0x266d04: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x266d04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266d08: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x266d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x266d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x266d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x266d10: 0x3e00008  jr          $ra
    ctx->pc = 0x266D10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x266D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x266D10u;
        // 0x266d14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x266D10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x266D18u;
}
