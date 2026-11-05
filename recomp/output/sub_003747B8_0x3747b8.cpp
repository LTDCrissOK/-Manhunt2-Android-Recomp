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

// Function: sub_003747B8
// Address: 0x3747b8 - 0x374820
void sub_003747B8_0x3747b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003747B8_0x3747b8");
#endif

    ctx->pc = 0x3747b8u;

    // 0x3747b8: 0x3c0a0040  lui         $t2, 0x40
    ctx->pc = 0x3747b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)64 << 16));
    // 0x3747bc: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x3747bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3747c0: 0x8d42cd14  lw          $v0, -0x32EC($t2)
    ctx->pc = 0x3747c0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3FCD14u));
    // 0x3747c4: 0x10490011  beq         $v0, $t1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3747C4u;
    {
        const bool branch_taken_0x3747c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x3747C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3747C4u;
        // 0x3747c8: 0x3c080040  lui         $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3747c4) {
            ctx->pc = 0x37480Cu;
            goto label_37480c;
        }
    }
    ctx->pc = 0x3747CCu;
    // 0x3747cc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3747ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3747d0: 0x8d03cd00  lw          $v1, -0x3300($t0)
    ctx->pc = 0x3747d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294954240)));
    // 0x3747d4: 0x24426050  addiu       $v0, $v0, 0x6050
    ctx->pc = 0x3747d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24656));
    // 0x3747d8: 0x93602  srl         $a2, $t1, 24
    ctx->pc = 0x3747d8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
    // 0x3747dc: 0x92202  srl         $a0, $t1, 8
    ctx->pc = 0x3747dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 8));
    // 0x3747e0: 0xac46002c  sw          $a2, 0x2C($v0)
    ctx->pc = 0x3747e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 6));
    // 0x3747e4: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x3747e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x3747e8: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x3747e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x3747ec: 0xad49cd14  sw          $t1, -0x32EC($t2)
    ctx->pc = 0x3747ecu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294954260), GPR_U32(ctx, 9));
    // 0x3747f0: 0xad03cd00  sw          $v1, -0x3300($t0)
    ctx->pc = 0x3747f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294954240), GPR_U32(ctx, 3));
    // 0x3747f4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x3747f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x3747f8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x3747f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x3747fc: 0x312700ff  andi        $a3, $t1, 0xFF
    ctx->pc = 0x3747fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x374800: 0xac470020  sw          $a3, 0x20($v0)
    ctx->pc = 0x374800u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 7));
    // 0x374804: 0xac440024  sw          $a0, 0x24($v0)
    ctx->pc = 0x374804u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 4));
    // 0x374808: 0xac450028  sw          $a1, 0x28($v0)
    ctx->pc = 0x374808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 5));
label_37480c:
    // 0x37480c: 0x3e00008  jr          $ra
    ctx->pc = 0x37480Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37480Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x374814u;
    // 0x374814: 0x0  nop
    ctx->pc = 0x374814u;
    // NOP
    // 0x374818: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x374818u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x37481c: 0x0  nop
    ctx->pc = 0x37481cu;
    // NOP
    ctx->pc = 0x374820u;
}
