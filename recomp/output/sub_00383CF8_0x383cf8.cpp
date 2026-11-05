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

// Function: sub_00383CF8
// Address: 0x383cf8 - 0x383d98
void sub_00383CF8_0x383cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00383CF8_0x383cf8");
#endif

    switch (ctx->pc) {
        case 0x383d34u: goto label_383d34;
        default: break;
    }

    ctx->pc = 0x383cf8u;

    // 0x383cf8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x383cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x383cfc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x383cfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x383d00: 0x34423c10  ori         $v0, $v0, 0x3C10
    ctx->pc = 0x383d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15376);
    // 0x383d04: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x383d04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x383d08: 0xac470000  sw          $a3, 0x0($v0)
    ctx->pc = 0x383d08u;
    runtime->Store32(rdram, ctx, 0x10003C10u, GPR_U32(ctx, 7)); // MMIO: 0x10003c10
    // 0x383d0c: 0x34633c20  ori         $v1, $v1, 0x3C20
    ctx->pc = 0x383d0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)15392);
    // 0x383d10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x383d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x383d14: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x383d14u;
    runtime->Store32(rdram, ctx, 0x10003C20u, GPR_U32(ctx, 2)); // MMIO: 0x10003c20
    // 0x383d18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x383d18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x383d1c: 0xf  sync
    ctx->pc = 0x383d1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x383d20: 0x4844e000  cfc2.ni     $a0, $vi28
    ctx->pc = 0x383d20u;
    SET_GPR_U32(ctx, 4, ctx->vu0_fbrst);
    // 0x383d24: 0x0  nop
    ctx->pc = 0x383d24u;
    // NOP
    // 0x383d28: 0x34840200  ori         $a0, $a0, 0x200
    ctx->pc = 0x383d28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
    // 0x383d2c: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x383d2cu;
    ctx->vu0_fbrst = GPR_U32(ctx, 4) & 0x00000C0Cu;
    // 0x383d30: 0x40f  sync.p
    ctx->pc = 0x383d30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_383d34:
    // 0x383d34: 0x4844e800  cfc2.ni     $a0, $vi29
    ctx->pc = 0x383d34u;
    SET_GPR_U32(ctx, 4, ctx->vu0_vpu_stat);
    // 0x383d38: 0x0  nop
    ctx->pc = 0x383d38u;
    // NOP
    // 0x383d3c: 0x0  nop
    ctx->pc = 0x383d3cu;
    // NOP
    // 0x383d40: 0x0  nop
    ctx->pc = 0x383d40u;
    // NOP
    // 0x383d44: 0x30840100  andi        $a0, $a0, 0x100
    ctx->pc = 0x383d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)256);
    // 0x383d48: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x383D48u;
    {
        const bool branch_taken_0x383d48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x383d48) {
            ctx->pc = 0x383D34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383d34;
        }
    }
    ctx->pc = 0x383D50u;
    // 0x383d50: 0x24040404  addiu       $a0, $zero, 0x404
    ctx->pc = 0x383d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    // 0x383d54: 0x48c4e000  ctc2.ni     $a0, $vi28
    ctx->pc = 0x383d54u;
    ctx->vu0_fbrst = GPR_U32(ctx, 4) & 0x00000C0Cu;
    // 0x383d58: 0x0  nop
    ctx->pc = 0x383d58u;
    // NOP
    // 0x383d5c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x383d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x383d60: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x383d60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x383d64: 0x2442dfb0  addiu       $v0, $v0, -0x2050
    ctx->pc = 0x383d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959024));
    // 0x383d68: 0x34a55000  ori         $a1, $a1, 0x5000
    ctx->pc = 0x383d68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)20480);
    // 0x383d6c: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x383d6cu;
    SET_GPR_VEC(ctx, 6, FAST_READ128(0x3FDFB0u));
    // 0x383d70: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x383d70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x383d74: 0x2463dfc0  addiu       $v1, $v1, -0x2040
    ctx->pc = 0x383d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959040));
    // 0x383d78: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x383d78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x383d7c: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x383d7cu;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 6));
    // 0x383d80: 0x34843000  ori         $a0, $a0, 0x3000
    ctx->pc = 0x383d80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12288);
    // 0x383d84: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x383d84u;
    SET_GPR_VEC(ctx, 2, FAST_READ128(0x3FDFC0u));
    // 0x383d88: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x383d88u;
    runtime->Store128(rdram, ctx, 0x10005000u, GPR_VEC(ctx, 2));
    // 0x383d8c: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x383d8cu;
    runtime->Store32(rdram, ctx, 0x10003000u, GPR_U32(ctx, 7)); // MMIO: 0x10003000
    // 0x383d90: 0x3e00008  jr          $ra
    ctx->pc = 0x383D90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383D90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x383D98u;
}
