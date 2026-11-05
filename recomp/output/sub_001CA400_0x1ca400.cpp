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

// Function: sub_001CA400
// Address: 0x1ca400 - 0x1ca498
void sub_001CA400_0x1ca400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CA400_0x1ca400");
#endif

    ctx->pc = 0x1ca400u;

    // 0x1ca400: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1ca400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca404: 0x3c030048  lui         $v1, 0x48
    ctx->pc = 0x1ca404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)72 << 16));
    // 0x1ca408: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x1ca408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
    // 0x1ca40c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ca40cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ca410: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1ca410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1ca414: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1ca414u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1ca418: 0x8c622b00  lw          $v0, 0x2B00($v1)
    ctx->pc = 0x1ca418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 11008)));
    // 0x1ca41c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1CA41Cu;
    {
        const bool branch_taken_0x1ca41c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1CA420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA41Cu;
        // 0x1ca420: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca41c) {
            ctx->pc = 0x1CA438u;
            goto label_1ca438;
        }
    }
    ctx->pc = 0x1CA424u;
    // 0x1ca424: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca428: 0x0  nop
    ctx->pc = 0x1ca428u;
    // NOP
    // 0x1ca42c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca42cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ca430: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1CA430u;
    {
        const bool branch_taken_0x1ca430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca430) {
            ctx->pc = 0x1CA450u;
            goto label_1ca450;
        }
    }
    ctx->pc = 0x1CA438u;
label_1ca438:
    // 0x1ca438: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1ca438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1ca43c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ca43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ca440: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ca440u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1ca444: 0x0  nop
    ctx->pc = 0x1ca444u;
    // NOP
    // 0x1ca448: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1ca448u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1ca44c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1ca44cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1ca450:
    // 0x1ca450: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x1ca450u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x1ca454: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x1ca454u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x1ca458: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1ca458u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1ca45c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x1ca45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x1ca460: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x1ca460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
    // 0x1ca464: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1ca464u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1ca468: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ca46c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1ca46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1ca470: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x1ca470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x1ca474: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1CA474u;
    {
        const bool branch_taken_0x1ca474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca474) {
            ctx->pc = 0x1CA478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CA474u;
            // 0x1ca478: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CA47Cu;
            goto label_1ca47c;
        }
    }
    ctx->pc = 0x1CA47Cu;
label_1ca47c:
    // 0x1ca47c: 0x8cc200a4  lw          $v0, 0xA4($a2)
    ctx->pc = 0x1ca47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 164)));
    // 0x1ca480: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ca480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1ca484: 0x44001b  divu        $zero, $v0, $a0
    ctx->pc = 0x1ca484u;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x1ca488: 0x1810  mfhi        $v1
    ctx->pc = 0x1ca488u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x1ca48c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CA48Cu;
        // 0x1ca490: 0xacc300a4  sw          $v1, 0xA4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CA48Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CA494u;
    // 0x1ca494: 0x0  nop
    ctx->pc = 0x1ca494u;
    // NOP
    ctx->pc = 0x1ca498u;
}
