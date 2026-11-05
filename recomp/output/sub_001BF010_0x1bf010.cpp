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

// Function: sub_001BF010
// Address: 0x1bf010 - 0x1bf068
void sub_001BF010_0x1bf010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BF010_0x1bf010");
#endif

    switch (ctx->pc) {
        case 0x1bf02cu: goto label_1bf02c;
        case 0x1bf040u: goto label_1bf040;
        default: break;
    }

    ctx->pc = 0x1bf010u;

    // 0x1bf010: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1bf010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1bf014: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1bf018: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1bf018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1bf01c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf020: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1bf020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1bf024: 0xc06faee  jal         func_1BEBB8
    ctx->pc = 0x1BF024u;
    SET_GPR_U32(ctx, 31, 0x1BF02Cu);
    ctx->pc = 0x1BF028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF024u;
    // 0x1bf028: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEBB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEBB8u, 0x1BF024u, 0x1BF02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF02Cu;
label_1bf02c:
    // 0x1bf02c: 0x3c030043  lui         $v1, 0x43
    ctx->pc = 0x1bf02cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)67 << 16));
    // 0x1bf030: 0x26040020  addiu       $a0, $s0, 0x20
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1bf034: 0x24631408  addiu       $v1, $v1, 0x1408
    ctx->pc = 0x1bf034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5128));
    // 0x1bf038: 0xc0f6a96  jal         func_3DAA58
    ctx->pc = 0x1BF038u;
    SET_GPR_U32(ctx, 31, 0x1BF040u);
    ctx->pc = 0x1BF03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF038u;
    // 0x1bf03c: 0xae030018  sw          $v1, 0x18($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DAA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DAA58u, 0x1BF038u, 0x1BF040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF040u;
label_1bf040:
    // 0x1bf040: 0x263103b0  addiu       $s1, $s1, 0x3B0
    ctx->pc = 0x1bf040u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 944));
    // 0x1bf044: 0xda210000  lqc2        $vf1, 0x0($s1)
    ctx->pc = 0x1bf044u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1bf048: 0xfa010020  sqc2        $vf1, 0x20($s0)
    ctx->pc = 0x1bf048u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1bf04c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bf04cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bf050: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1bf050u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1bf054: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf054u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bf058: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1bf058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bf05c: 0x3e00008  jr          $ra
    ctx->pc = 0x1BF05Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF05Cu;
        // 0x1bf060: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF05Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF064u;
    // 0x1bf064: 0x0  nop
    ctx->pc = 0x1bf064u;
    // NOP
    ctx->pc = 0x1bf068u;
}
