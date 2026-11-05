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

// Function: sub_003732B8
// Address: 0x3732b8 - 0x373340
void sub_003732B8_0x3732b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003732B8_0x3732b8");
#endif

    switch (ctx->pc) {
        case 0x373320u: goto label_373320;
        default: break;
    }

    ctx->pc = 0x3732b8u;

    // 0x3732b8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3732b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3732bc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3732bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3732c0: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x3732c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x3732c4: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3732c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3732c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3732c8u;
    runtime->Store32(rdram, ctx, 0x1000E000u, GPR_U32(ctx, 3)); // MMIO: 0x1000e000
    // 0x3732cc: 0x34a5e010  ori         $a1, $a1, 0xE010
    ctx->pc = 0x3732ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)57360);
    // 0x3732d0: 0x3c02631f  lui         $v0, 0x631F
    ctx->pc = 0x3732d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25375 << 16));
    // 0x3732d4: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x3732d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3732d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3732d8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000E010u)); // MMIO: 0x1000e010
    // 0x3732dc: 0x34c6e020  ori         $a2, $a2, 0xE020
    ctx->pc = 0x3732dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)57376);
    // 0x3732e0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3732e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3732e4: 0x3c080065  lui         $t0, 0x65
    ctx->pc = 0x3732e4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)101 << 16));
    // 0x3732e8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3732e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3732ec: 0x3484f590  ori         $a0, $a0, 0xF590
    ctx->pc = 0x3732ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)62864);
    // 0x3732f0: 0x3463e31f  ori         $v1, $v1, 0xE31F
    ctx->pc = 0x3732f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)58143);
    // 0x3732f4: 0x3c070065  lui         $a3, 0x65
    ctx->pc = 0x3732f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)101 << 16));
    // 0x3732f8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x3732f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x3732fc: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3732fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x373300: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x373300u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x373304: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x373304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
    // 0x373308: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x373308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x37330c: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x37330cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
    // 0x373310: 0xad005b28  sw          $zero, 0x5B28($t0)
    ctx->pc = 0x373310u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 23336), GPR_U32(ctx, 0));
    // 0x373314: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x373314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x373318: 0xace05b2c  sw          $zero, 0x5B2C($a3)
    ctx->pc = 0x373318u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x655B2Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x655B2Cu, _value); } while (0);
    // 0x37331c: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x37331cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_373320:
    // 0x373320: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x373320u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x373324: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x373324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x373328: 0x0  nop
    ctx->pc = 0x373328u;
    // NOP
    // 0x37332c: 0x0  nop
    ctx->pc = 0x37332cu;
    // NOP
    // 0x373330: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x373330u;
    {
        const bool branch_taken_0x373330 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x373334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x373330u;
        // 0x373334: 0x2442fffc  addiu       $v0, $v0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x373330) {
            ctx->pc = 0x373320u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_373320;
        }
    }
    ctx->pc = 0x373338u;
    // 0x373338: 0x3e00008  jr          $ra
    ctx->pc = 0x373338u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x373338u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x373340u;
}
