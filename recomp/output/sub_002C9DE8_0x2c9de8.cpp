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

// Function: sub_002C9DE8
// Address: 0x2c9de8 - 0x2c9e70
void sub_002C9DE8_0x2c9de8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C9DE8_0x2c9de8");
#endif

    switch (ctx->pc) {
        case 0x2c9e50u: goto label_2c9e50;
        default: break;
    }

    ctx->pc = 0x2c9de8u;

    // 0x2c9de8: 0x3c06006d  lui         $a2, 0x6D
    ctx->pc = 0x2c9de8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)109 << 16));
    // 0x2c9dec: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x2c9decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x2c9df0: 0x24c6b280  addiu       $a2, $a2, -0x4D80
    ctx->pc = 0x2c9df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294947456));
    // 0x2c9df4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2c9df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2c9df8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2c9df8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c9dfc: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x2c9dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
    // 0x2c9e00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2c9e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2c9e04: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2c9e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2c9e08: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2c9e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2c9e0c: 0x3c05fe80  lui         $a1, 0xFE80
    ctx->pc = 0x2c9e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65152 << 16));
    // 0x2c9e10: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x2c9e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x2c9e14: 0x3c0b0040  lui         $t3, 0x40
    ctx->pc = 0x2c9e14u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)64 << 16));
    // 0x2c9e18: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x2c9e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2c9e1c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2c9e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
    // 0x2c9e20: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x2c9e20u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x2c9e24: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2c9e24u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x2c9e28: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2c9e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x2c9e2c: 0xac86b41c  sw          $a2, -0x4BE4($a0)
    ctx->pc = 0x2c9e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294947868), GPR_U32(ctx, 6));
    // 0x2c9e30: 0xac45b430  sw          $a1, -0x4BD0($v0)
    ctx->pc = 0x2c9e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x3FB430u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB430u, _value); } while (0);
    // 0x2c9e34: 0x3c040057  lui         $a0, 0x57
    ctx->pc = 0x2c9e34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)87 << 16));
    // 0x2c9e38: 0xad06b418  sw          $a2, -0x4BE8($t0)
    ctx->pc = 0x2c9e38u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 6)); ps2TraceGuestWrite(rdram, 0x3FB418u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB418u, _value); } while (0);
    // 0x2c9e3c: 0x24845d50  addiu       $a0, $a0, 0x5D50
    ctx->pc = 0x2c9e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23888));
    // 0x2c9e40: 0xad63b420  sw          $v1, -0x4BE0($t3)
    ctx->pc = 0x2c9e40u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x3FB420u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB420u, _value); } while (0);
    // 0x2c9e44: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c9e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c9e48: 0xad27b438  sw          $a3, -0x4BC8($t1)
    ctx->pc = 0x2c9e48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3FB438u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB438u, _value); } while (0);
    // 0x2c9e4c: 0xad47b434  sw          $a3, -0x4BCC($t2)
    ctx->pc = 0x2c9e4cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 7)); ps2TraceGuestWrite(rdram, 0x3FB434u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3FB434u, _value); } while (0);
label_2c9e50:
    // 0x2c9e50: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x2c9e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x2c9e54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2c9e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2c9e58: 0x2ca21800  sltiu       $v0, $a1, 0x1800
    ctx->pc = 0x2c9e58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6144) ? 1 : 0);
    // 0x2c9e5c: 0x0  nop
    ctx->pc = 0x2c9e5cu;
    // NOP
    // 0x2c9e60: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2C9E60u;
    {
        const bool branch_taken_0x2c9e60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C9E60u;
        // 0x2c9e64: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9e60) {
            ctx->pc = 0x2C9E50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2c9e50;
        }
    }
    ctx->pc = 0x2C9E68u;
    // 0x2c9e68: 0x3e00008  jr          $ra
    ctx->pc = 0x2C9E68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C9E68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C9E70u;
}
