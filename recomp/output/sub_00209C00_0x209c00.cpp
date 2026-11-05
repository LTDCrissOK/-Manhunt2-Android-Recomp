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

// Function: sub_00209C00
// Address: 0x209c00 - 0x209c78
void sub_00209C00_0x209c00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209C00_0x209c00");
#endif

    switch (ctx->pc) {
        case 0x209c40u: goto label_209c40;
        default: break;
    }

    ctx->pc = 0x209c00u;

    // 0x209c00: 0x3c070048  lui         $a3, 0x48
    ctx->pc = 0x209c00u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)72 << 16));
    // 0x209c04: 0x3c080048  lui         $t0, 0x48
    ctx->pc = 0x209c04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)72 << 16));
    // 0x209c08: 0x8ce22b64  lw          $v0, 0x2B64($a3)
    ctx->pc = 0x209c08u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x482B64u));
    // 0x209c0c: 0x100582d  daddu       $t3, $t0, $zero
    ctx->pc = 0x209c0cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c10: 0x8d032b5c  lw          $v1, 0x2B5C($t0)
    ctx->pc = 0x209c10u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x482B5Cu));
    // 0x209c14: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x209c14u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c18: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x209c18u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x209c1c: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x209c1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x209c20: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x209c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x209c24: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x209c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x209c28: 0xace22b64  sw          $v0, 0x2B64($a3)
    ctx->pc = 0x209c28u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11108), GPR_U32(ctx, 2));
    // 0x209c2c: 0xa0680001  sb          $t0, 0x1($v1)
    ctx->pc = 0x209c2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 8));
    // 0x209c30: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x209c30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x209c34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x209c34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x209c38: 0xa4650002  sh          $a1, 0x2($v1)
    ctx->pc = 0x209c38u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x209c3c: 0x0  nop
    ctx->pc = 0x209c3cu;
    // NOP
label_209c40:
    // 0x209c40: 0x8d432b64  lw          $v1, 0x2B64($t2)
    ctx->pc = 0x209c40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 11108)));
    // 0x209c44: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x209c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x209c48: 0x8d642b5c  lw          $a0, 0x2B5C($t3)
    ctx->pc = 0x209c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 11100)));
    // 0x209c4c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x209c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x209c50: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x209c50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x209c54: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x209c54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x209c58: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x209c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x209c5c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x209c5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x209c60: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x209c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x209c64: 0x4e1fff6  bgez        $a3, . + 4 + (-0xA << 2)
    ctx->pc = 0x209C64u;
    {
        const bool branch_taken_0x209c64 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x209C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x209C64u;
        // 0x209c68: 0xad432b64  sw          $v1, 0x2B64($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 11108), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c64) {
            ctx->pc = 0x209C40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_209c40;
        }
    }
    ctx->pc = 0x209C6Cu;
    // 0x209c6c: 0x3e00008  jr          $ra
    ctx->pc = 0x209C6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x209C6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x209C74u;
    // 0x209c74: 0x0  nop
    ctx->pc = 0x209c74u;
    // NOP
    ctx->pc = 0x209c78u;
}
