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

// Function: sub_002C6F08
// Address: 0x2c6f08 - 0x2c6f60
void sub_002C6F08_0x2c6f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6F08_0x2c6f08");
#endif

    ctx->pc = 0x2c6f08u;

    // 0x2c6f08: 0x3c070057  lui         $a3, 0x57
    ctx->pc = 0x2c6f08u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)87 << 16));
    // 0x2c6f0c: 0x24e55b70  addiu       $a1, $a3, 0x5B70
    ctx->pc = 0x2c6f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 23408));
    // 0x2c6f10: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x2c6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x575B74u));
    // 0x2c6f14: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2C6F14u;
    {
        const bool branch_taken_0x2c6f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F14u;
        // 0x2c6f18: 0x8ce25b70  lw          $v0, 0x5B70($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 23408)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f14) {
            ctx->pc = 0x2C6F54u;
            goto label_2c6f54;
        }
    }
    ctx->pc = 0x2C6F1Cu;
    // 0x2c6f1c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x2c6f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x2c6f20: 0x24061000  addiu       $a2, $zero, 0x1000
    ctx->pc = 0x2c6f20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2c6f24: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2c6f24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c6f28: 0x3c045858  lui         $a0, 0x5858
    ctx->pc = 0x2c6f28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22616 << 16));
    // 0x2c6f2c: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x2c6f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x2c6f30: 0x34845858  ori         $a0, $a0, 0x5858
    ctx->pc = 0x2c6f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22616);
    // 0x2c6f34: 0xaca60010  sw          $a2, 0x10($a1)
    ctx->pc = 0x2c6f34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 6));
    // 0x2c6f38: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C6F38u;
    {
        const bool branch_taken_0x2c6f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F38u;
        // 0x2c6f3c: 0xaca80014  sw          $t0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f38) {
            ctx->pc = 0x2C6F4Cu;
            goto label_2c6f4c;
        }
    }
    ctx->pc = 0x2C6F40u;
    // 0x2c6f40: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x2c6f40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x2c6f44: 0xace45b70  sw          $a0, 0x5B70($a3)
    ctx->pc = 0x2c6f44u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 23408), GPR_U32(ctx, 4));
    // 0x2c6f48: 0xac485d3c  sw          $t0, 0x5D3C($v0)
    ctx->pc = 0x2c6f48u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 8)); ps2TraceGuestWrite(rdram, 0x575D3Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x575D3Cu, _value); } while (0);
label_2c6f4c:
    // 0x2c6f4c: 0xaca60008  sw          $a2, 0x8($a1)
    ctx->pc = 0x2c6f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 6));
    // 0x2c6f50: 0xaca60004  sw          $a2, 0x4($a1)
    ctx->pc = 0x2c6f50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 6));
label_2c6f54:
    // 0x2c6f54: 0x3e00008  jr          $ra
    ctx->pc = 0x2C6F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C6F54u;
        // 0x2c6f58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C6F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C6F5Cu;
    // 0x2c6f5c: 0x0  nop
    ctx->pc = 0x2c6f5cu;
    // NOP
    ctx->pc = 0x2c6f60u;
}
