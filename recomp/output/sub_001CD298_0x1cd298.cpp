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

// Function: sub_001CD298
// Address: 0x1cd298 - 0x1cd318
void sub_001CD298_0x1cd298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD298_0x1cd298");
#endif

    ctx->pc = 0x1cd298u;

    // 0x1cd298: 0x8c820048  lw          $v0, 0x48($a0)
    ctx->pc = 0x1cd298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
    // 0x1cd29c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1CD29Cu;
    {
        const bool branch_taken_0x1cd29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd29c) {
            ctx->pc = 0x1CD300u;
            goto label_1cd300;
        }
    }
    ctx->pc = 0x1CD2A4u;
    // 0x1cd2a4: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x1cd2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x1cd2a8: 0x3842020f  xori        $v0, $v0, 0x20F
    ctx->pc = 0x1cd2a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)527);
    // 0x1cd2ac: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1CD2ACu;
    {
        const bool branch_taken_0x1cd2ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd2ac) {
            ctx->pc = 0x1CD300u;
            goto label_1cd300;
        }
    }
    ctx->pc = 0x1CD2B4u;
    // 0x1cd2b4: 0x8c820088  lw          $v0, 0x88($a0)
    ctx->pc = 0x1cd2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 136)));
    // 0x1cd2b8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CD2B8u;
    {
        const bool branch_taken_0x1cd2b8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2B8u;
        // 0x1cd2bc: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd2b8) {
            ctx->pc = 0x1CD2D4u;
            goto label_1cd2d4;
        }
    }
    ctx->pc = 0x1CD2C0u;
    // 0x1cd2c0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd2c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd2c4: 0x0  nop
    ctx->pc = 0x1cd2c4u;
    // NOP
    // 0x1cd2c8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd2c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cd2cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CD2CCu;
    {
        const bool branch_taken_0x1cd2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd2cc) {
            ctx->pc = 0x1CD2ECu;
            goto label_1cd2ec;
        }
    }
    ctx->pc = 0x1CD2D4u;
label_1cd2d4:
    // 0x1cd2d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1cd2d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1cd2d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1cd2d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1cd2dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cd2dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1cd2e0: 0x0  nop
    ctx->pc = 0x1cd2e0u;
    // NOP
    // 0x1cd2e4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1cd2e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1cd2e8: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1cd2e8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1cd2ec:
    // 0x1cd2ec: 0x3c013eaa  lui         $at, 0x3EAA
    ctx->pc = 0x1cd2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16042 << 16));
    // 0x1cd2f0: 0x3421aaab  ori         $at, $at, 0xAAAB
    ctx->pc = 0x1cd2f0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)43691);
    // 0x1cd2f4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1cd2f4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD2F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CD2F8u;
        // 0x1cd2fc: 0x46000802  mul.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD2F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD300u;
label_1cd300:
    // 0x1cd300: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cd300u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cd304: 0x3e00008  jr          $ra
    ctx->pc = 0x1CD304u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CD304u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CD30Cu;
    // 0x1cd30c: 0x0  nop
    ctx->pc = 0x1cd30cu;
    // NOP
    // 0x1cd310: 0x0  nop
    ctx->pc = 0x1cd310u;
    // NOP
    // 0x1cd314: 0x0  nop
    ctx->pc = 0x1cd314u;
    // NOP
    ctx->pc = 0x1cd318u;
}
