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

// Function: sub_002A1C80
// Address: 0x2a1c80 - 0x2a1cf8
void sub_002A1C80_0x2a1c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1C80_0x2a1c80");
#endif

    switch (ctx->pc) {
        case 0x2a1ce8u: goto label_2a1ce8;
        default: break;
    }

    ctx->pc = 0x2a1c80u;

    // 0x2a1c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2a1c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2a1c84: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2a1c84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2a1c88: 0x14a20017  bne         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2A1C88u;
    {
        const bool branch_taken_0x2a1c88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A1C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C88u;
        // 0x2a1c8c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c88) {
            ctx->pc = 0x2A1CE8u;
            goto label_2a1ce8;
        }
    }
    ctx->pc = 0x2A1C90u;
    // 0x2a1c90: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x2A1C90u;
    {
        const bool branch_taken_0x2a1c90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1C90u;
        // 0x2a1c94: 0x3c07004c  lui         $a3, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)76 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1c90) {
            ctx->pc = 0x2A1CE8u;
            goto label_2a1ce8;
        }
    }
    ctx->pc = 0x2A1C98u;
    // 0x2a1c98: 0x3c013cc6  lui         $at, 0x3CC6
    ctx->pc = 0x2a1c98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15558 << 16));
    // 0x2a1c9c: 0x3421a7f0  ori         $at, $at, 0xA7F0
    ctx->pc = 0x2a1c9cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)42992);
    // 0x2a1ca0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2a1ca0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2a1ca4: 0x3c013d00  lui         $at, 0x3D00
    ctx->pc = 0x2a1ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15616 << 16));
    // 0x2a1ca8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2a1ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1cac: 0x3c02004c  lui         $v0, 0x4C
    ctx->pc = 0x2a1cacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)76 << 16));
    // 0x2a1cb0: 0x24e31858  addiu       $v1, $a3, 0x1858
    ctx->pc = 0x2a1cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 6232));
    // 0x2a1cb4: 0x3c013d08  lui         $at, 0x3D08
    ctx->pc = 0x2a1cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15624 << 16));
    // 0x2a1cb8: 0x3421850a  ori         $at, $at, 0x850A
    ctx->pc = 0x2a1cb8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34058);
    // 0x2a1cbc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2a1cbcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2a1cc0: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x2a1cc0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x2a1cc4: 0x24461860  addiu       $a2, $v0, 0x1860
    ctx->pc = 0x2a1cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6240));
    // 0x2a1cc8: 0xe4401860  swc1        $f0, 0x1860($v0)
    ctx->pc = 0x2a1cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4C1860u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C1860u, _value); } while (0); }
    // 0x2a1ccc: 0x3c04004c  lui         $a0, 0x4C
    ctx->pc = 0x2a1cccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)76 << 16));
    // 0x2a1cd0: 0x3c050047  lui         $a1, 0x47
    ctx->pc = 0x2a1cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)71 << 16));
    // 0x2a1cd4: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x2a1cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x4C1864u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x4C1864u, _value); } while (0); }
    // 0x2a1cd8: 0x24841868  addiu       $a0, $a0, 0x1868
    ctx->pc = 0x2a1cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6248));
    // 0x2a1cdc: 0x24a5c938  addiu       $a1, $a1, -0x36C8
    ctx->pc = 0x2a1cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953272));
    // 0x2a1ce0: 0xc0d7424  jal         func_35D090
    ctx->pc = 0x2A1CE0u;
    SET_GPR_U32(ctx, 31, 0x2A1CE8u);
    ctx->pc = 0x2A1CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A1CE0u;
    // 0x2a1ce4: 0xace01858  sw          $zero, 0x1858($a3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 7), 6232), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x35D090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x35D090u, 0x2A1CE0u, 0x2A1CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A1CE8u;
label_2a1ce8:
    // 0x2a1ce8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2a1ce8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1cec: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1CECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A1CECu;
        // 0x2a1cf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A1CECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A1CF4u;
    // 0x2a1cf4: 0x0  nop
    ctx->pc = 0x2a1cf4u;
    // NOP
    ctx->pc = 0x2a1cf8u;
}
