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

// Function: sub_00201970
// Address: 0x201970 - 0x2019d8
void sub_00201970_0x201970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201970_0x201970");
#endif

    switch (ctx->pc) {
        case 0x201990u: goto label_201990;
        default: break;
    }

    ctx->pc = 0x201970u;

    // 0x201970: 0x3c013e99  lui         $at, 0x3E99
    ctx->pc = 0x201970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16025 << 16));
    // 0x201974: 0x3421999a  ori         $at, $at, 0x999A
    ctx->pc = 0x201974u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39322);
    // 0x201978: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x201978u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20197c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x20197cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x201980: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x201980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x201984: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x201984u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x201988: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x201988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20198c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20198cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_201990:
    // 0x201990: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x201990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x201994: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x201994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x201998: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x201998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x20199c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x20199cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2019a0: 0x461fffb  bgez        $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2019A0u;
    {
        const bool branch_taken_0x2019a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2019A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019A0u;
        // 0x2019a4: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2019a0) {
            ctx->pc = 0x201990u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_201990;
        }
    }
    ctx->pc = 0x2019A8u;
    // 0x2019a8: 0x3c013fcc  lui         $at, 0x3FCC
    ctx->pc = 0x2019a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16332 << 16));
    // 0x2019ac: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2019acu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x2019b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2019b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2019b4: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x2019b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x2019b8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2019b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2019bc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2019bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2019c0: 0x24020032  addiu       $v0, $zero, 0x32
    ctx->pc = 0x2019c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x2019c4: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x2019c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x2019c8: 0xe4800010  swc1        $f0, 0x10($a0)
    ctx->pc = 0x2019c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x2019cc: 0xac830030  sw          $v1, 0x30($a0)
    ctx->pc = 0x2019ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 3));
    // 0x2019d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2019D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2019D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2019D0u;
        // 0x2019d4: 0xe4810034  swc1        $f1, 0x34($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 52), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2019D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2019D8u;
}
