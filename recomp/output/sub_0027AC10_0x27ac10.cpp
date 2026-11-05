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

// Function: sub_0027AC10
// Address: 0x27ac10 - 0x27ac80
void sub_0027AC10_0x27ac10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027AC10_0x27ac10");
#endif

    switch (ctx->pc) {
        case 0x27ac34u: goto label_27ac34;
        case 0x27ac58u: goto label_27ac58;
        case 0x27ac68u: goto label_27ac68;
        default: break;
    }

    ctx->pc = 0x27ac10u;

    // 0x27ac10: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27ac10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x27ac14: 0x3c05004c  lui         $a1, 0x4C
    ctx->pc = 0x27ac14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)76 << 16));
    // 0x27ac18: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27ac18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27ac1c: 0x24a5ee20  addiu       $a1, $a1, -0x11E0
    ctx->pc = 0x27ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962720));
    // 0x27ac20: 0x3c10004c  lui         $s0, 0x4C
    ctx->pc = 0x27ac20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)76 << 16));
    // 0x27ac24: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x27ac24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x27ac28: 0x2610edd8  addiu       $s0, $s0, -0x1228
    ctx->pc = 0x27ac28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962648));
    // 0x27ac2c: 0xc0d745c  jal         func_35D170
    ctx->pc = 0x27AC2Cu;
    SET_GPR_U32(ctx, 31, 0x27AC34u);
    ctx->pc = 0x27AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AC2Cu;
    // 0x27ac30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D170u, 0x27AC2Cu, 0x27AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC34u;
label_27ac34:
    // 0x27ac34: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x27ac34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x27ac38: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x27ac38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x27ac3c: 0x8c629160  lw          $v0, -0x6EA0($v1)
    ctx->pc = 0x27ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3F9160u));
    // 0x27ac40: 0x3c050067  lui         $a1, 0x67
    ctx->pc = 0x27ac40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)103 << 16));
    // 0x27ac44: 0x24a59920  addiu       $a1, $a1, -0x66E0
    ctx->pc = 0x27ac44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940960));
    // 0x27ac48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ac48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac4c: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x27ac4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x27ac50: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x27AC50u;
    SET_GPR_U32(ctx, 31, 0x27AC58u);
    ctx->pc = 0x27AC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AC50u;
    // 0x27ac54: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x27AC50u, 0x27AC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC58u;
label_27ac58:
    // 0x27ac58: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x27ac58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x27ac5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27ac5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac60: 0xc0d754c  jal         func_35D530
    ctx->pc = 0x27AC60u;
    SET_GPR_U32(ctx, 31, 0x27AC68u);
    ctx->pc = 0x27AC64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27AC60u;
    // 0x27ac64: 0x24a59428  addiu       $a1, $a1, -0x6BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939688));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D530u, 0x27AC60u, 0x27AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27AC68u;
label_27ac68:
    // 0x27ac68: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27ac68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27ac6c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x27ac6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27ac70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27ac70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ac74: 0x3e00008  jr          $ra
    ctx->pc = 0x27AC74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27AC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27AC74u;
        // 0x27ac78: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27AC74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27AC7Cu;
    // 0x27ac7c: 0x0  nop
    ctx->pc = 0x27ac7cu;
    // NOP
    ctx->pc = 0x27ac80u;
}
