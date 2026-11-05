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

// Function: sub_002FF3F8
// Address: 0x2ff3f8 - 0x2ff470
void sub_002FF3F8_0x2ff3f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FF3F8_0x2ff3f8");
#endif

    ctx->pc = 0x2ff3f8u;

    // 0x2ff3f8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2ff3f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ff3fc: 0x90a202f0  lbu         $v0, 0x2F0($a1)
    ctx->pc = 0x2ff3fcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 752)));
    // 0x2ff400: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2FF400u;
    {
        const bool branch_taken_0x2ff400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FF404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF400u;
        // 0x2ff404: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff400) {
            ctx->pc = 0x2FF468u;
            goto label_2ff468;
        }
    }
    ctx->pc = 0x2FF408u;
    // 0x2ff408: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x2ff408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x2ff40c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x2ff40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2ff410: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x2ff410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x2ff414: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2FF414u;
    {
        const bool branch_taken_0x2ff414 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2FF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FF414u;
        // 0x2ff418: 0xac83d2d0  sw          $v1, -0x2D30($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294955728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff414) {
            ctx->pc = 0x2FF430u;
            goto label_2ff430;
        }
    }
    ctx->pc = 0x2FF41Cu;
    // 0x2ff41c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff41cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff420: 0x0  nop
    ctx->pc = 0x2ff420u;
    // NOP
    // 0x2ff424: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ff424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ff428: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2FF428u;
    {
        const bool branch_taken_0x2ff428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff428) {
            ctx->pc = 0x2FF44Cu;
            goto label_2ff44c;
        }
    }
    ctx->pc = 0x2FF430u;
label_2ff430:
    // 0x2ff430: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x2ff430u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2ff434: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2ff434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2ff438: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2ff438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2ff43c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2ff440: 0x0  nop
    ctx->pc = 0x2ff440u;
    // NOP
    // 0x2ff444: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2ff444u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2ff448: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x2ff448u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_2ff44c:
    // 0x2ff44c: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x2ff44cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x2ff450: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x2ff450u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x2ff454: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ff454u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2ff458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ff45c: 0xa0a202f0  sb          $v0, 0x2F0($a1)
    ctx->pc = 0x2ff45cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 752), (uint8_t)GPR_U32(ctx, 2));
    // 0x2ff460: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff460u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2ff464: 0xe4a002ec  swc1        $f0, 0x2EC($a1)
    ctx->pc = 0x2ff464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 748), bits); }
label_2ff468:
    // 0x2ff468: 0x3e00008  jr          $ra
    ctx->pc = 0x2FF468u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FF468u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FF470u;
}
