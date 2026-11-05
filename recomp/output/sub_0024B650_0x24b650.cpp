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

// Function: sub_0024B650
// Address: 0x24b650 - 0x24b6c0
void sub_0024B650_0x24b650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024B650_0x24b650");
#endif

    ctx->pc = 0x24b650u;

    // 0x24b650: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x24B650u;
    {
        const bool branch_taken_0x24b650 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B650u;
        // 0x24b654: 0x3c020048  lui         $v0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)72 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b650) {
            ctx->pc = 0x24B6ACu;
            goto label_24b6ac;
        }
    }
    ctx->pc = 0x24B658u;
    // 0x24b658: 0x8c422b00  lw          $v0, 0x2B00($v0)
    ctx->pc = 0x24b658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11008)));
    // 0x24b65c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x24B65Cu;
    {
        const bool branch_taken_0x24b65c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x24B660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B65Cu;
        // 0x24b660: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b65c) {
            ctx->pc = 0x24B678u;
            goto label_24b678;
        }
    }
    ctx->pc = 0x24B664u;
    // 0x24b664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b668: 0x0  nop
    ctx->pc = 0x24b668u;
    // NOP
    // 0x24b66c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b66cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b670: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x24B670u;
    {
        const bool branch_taken_0x24b670 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24b670) {
            ctx->pc = 0x24B690u;
            goto label_24b690;
        }
    }
    ctx->pc = 0x24B678u;
label_24b678:
    // 0x24b678: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24b678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x24b67c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24b67cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x24b680: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x24b680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24b684: 0x0  nop
    ctx->pc = 0x24b684u;
    // NOP
    // 0x24b688: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24b688u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24b68c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x24b68cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_24b690:
    // 0x24b690: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x24b690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x24b694: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x24b694u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x24b698: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x24b698u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24b69c: 0x0  nop
    ctx->pc = 0x24b69cu;
    // NOP
    // 0x24b6a0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x24b6a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x24b6a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x24B6A4u;
    {
        const bool branch_taken_0x24b6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24B6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6A4u;
        // 0x24b6a8: 0xe48000a4  swc1        $f0, 0xA4($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 164), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24b6a4) {
            ctx->pc = 0x24B6B0u;
            goto label_24b6b0;
        }
    }
    ctx->pc = 0x24B6ACu;
label_24b6ac:
    // 0x24b6ac: 0xac8000a4  sw          $zero, 0xA4($a0)
    ctx->pc = 0x24b6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 164), GPR_U32(ctx, 0));
label_24b6b0:
    // 0x24b6b0: 0x5102b  sltu        $v0, $zero, $a1
    ctx->pc = 0x24b6b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x24b6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x24B6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24B6B4u;
        // 0x24b6b8: 0xac8200a0  sw          $v0, 0xA0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24B6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24B6BCu;
    // 0x24b6bc: 0x0  nop
    ctx->pc = 0x24b6bcu;
    // NOP
    ctx->pc = 0x24b6c0u;
}
