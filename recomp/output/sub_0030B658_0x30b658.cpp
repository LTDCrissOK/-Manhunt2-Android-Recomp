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

// Function: sub_0030B658
// Address: 0x30b658 - 0x30b6c0
void sub_0030B658_0x30b658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0030B658_0x30b658");
#endif

    ctx->pc = 0x30b658u;

    // 0x30b658: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x30b658u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x30b65c: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x30b65cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b660: 0x90a20001  lbu         $v0, 0x1($a1)
    ctx->pc = 0x30b660u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x30b664: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x30b664u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x30b668: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x30b668u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x30b66c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x30b66cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x30b670: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x30b670u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x30b674: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x30b674u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b678: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x30b678u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30b67c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x30b67cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x30b680: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x30b680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x30b684: 0xc2200b  movn        $a0, $a2, $v0
    ctx->pc = 0x30b684u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x30b688: 0xc7102a  slt         $v0, $a2, $a3
    ctx->pc = 0x30b688u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x30b68c: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x30b68cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x30b690: 0xc8102a  slt         $v0, $a2, $t0
    ctx->pc = 0x30b690u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x30b694: 0xc2280b  movn        $a1, $a2, $v0
    ctx->pc = 0x30b694u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x30b698: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x30b698u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x30b69c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x30b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x30b6a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x30b6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x30b6a4: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x30b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x30b6a8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x30b6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x30b6ac: 0xac82f158  sw          $v0, -0xEA8($a0)
    ctx->pc = 0x30b6acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x5BF158u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5BF158u, _value); } while (0);
    // 0x30b6b0: 0xe52d00fc  swc1        $f13, 0xFC($t1)
    ctx->pc = 0x30b6b0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 252), bits); }
    // 0x30b6b4: 0x3e00008  jr          $ra
    ctx->pc = 0x30B6B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30B6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30B6B4u;
        // 0x30b6b8: 0xe52c00f8  swc1        $f12, 0xF8($t1) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 248), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30B6B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30B6BCu;
    // 0x30b6bc: 0x0  nop
    ctx->pc = 0x30b6bcu;
    // NOP
    ctx->pc = 0x30b6c0u;
}
