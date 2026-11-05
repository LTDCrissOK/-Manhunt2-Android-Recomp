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

// Function: sub_00377C58
// Address: 0x377c58 - 0x377db0
void sub_00377C58_0x377c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377C58_0x377c58");
#endif

    switch (ctx->pc) {
        case 0x377c74u: goto label_377c74;
        case 0x377c7cu: goto label_377c7c;
        case 0x377cb4u: goto label_377cb4;
        default: break;
    }

    ctx->pc = 0x377c58u;

    // 0x377c58: 0x9020022  j           func_4080088
    ctx->pc = 0x377C58u;
    ctx->pc = 0x377C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C58u;
    // 0x377c5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4080088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4080088u, 0x377C58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377C60u;
    // 0x377c60: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377c60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377c64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c68: 0x8810022  j           func_2040088
    ctx->pc = 0x377C68u;
    ctx->pc = 0x377C6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C68u;
    // 0x377c6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040088u, 0x377C68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377C70u;
    // 0x377c70: 0x9020023  j           func_408008C
label_377c74:
    if (ctx->pc == 0x377C74u) {
        ctx->pc = 0x377C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C70u;
        // 0x377c74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377C78u;
        goto label_fallthrough_0x377c70;
    }
    ctx->pc = 0x377C70u;
    ctx->pc = 0x377C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C70u;
    // 0x377c74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408008Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408008Cu, 0x377C70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x377c70:
    ctx->pc = 0x377C78u;
    // 0x377c78: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377c78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_377c7c:
    // 0x377c7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c80: 0x8810023  j           func_204008C
    ctx->pc = 0x377C80u;
    ctx->pc = 0x377C84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C80u;
    // 0x377c84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204008Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204008Cu, 0x377C80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377C88u;
    // 0x377c88: 0x9020024  j           func_4080090
    ctx->pc = 0x377C88u;
    ctx->pc = 0x377C8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C88u;
    // 0x377c8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4080090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4080090u, 0x377C88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377C90u;
    // 0x377c90: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377c90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377c94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c98: 0x8810024  j           func_2040090
    ctx->pc = 0x377C98u;
    ctx->pc = 0x377C9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377C98u;
    // 0x377c9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040090u, 0x377C98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377CA0u;
    // 0x377ca0: 0x9020025  j           func_4080094
    ctx->pc = 0x377CA0u;
    ctx->pc = 0x377CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377CA0u;
    // 0x377ca4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4080094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4080094u, 0x377CA0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377CA8u;
    // 0x377ca8: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377ca8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377cac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377cacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377cb0: 0x8810025  j           func_2040094
label_377cb4:
    if (ctx->pc == 0x377CB4u) {
        ctx->pc = 0x377CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377CB0u;
        // 0x377cb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377CB8u;
        goto label_fallthrough_0x377cb0;
    }
    ctx->pc = 0x377CB0u;
    ctx->pc = 0x377CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377CB0u;
    // 0x377cb4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040094u, 0x377CB0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x377cb0:
    ctx->pc = 0x377CB8u;
    // 0x377cb8: 0x400007d8  .word       0x400007D8                   # mfc0        $zero, Index # 000007D8 <InstrIdType: R5900_COP0>
    ctx->pc = 0x377cb8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x377cbc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377cbcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377cc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377cc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377cc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377cc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377cc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377cc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377ccc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377cccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377cd0: 0x800606bc  lb          $a2, 0x6BC($zero)
    ctx->pc = 0x377cd0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x6BCu));
    // 0x377cd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377cd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377cd8: 0x1e13000  .word       0x01E13000                   # sll         $a2, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377cd8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x377cdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377cdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ce0: 0x1e23001  .word       0x01E23001                   # INVALID     $t7, $v0, 0x3001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377ce0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x377CE0 raw=0x01E23001");
    // 0x377ce4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377ce4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ce8: 0x1e33002  .word       0x01E33002                   # srl         $a2, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377ce8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
    // 0x377cec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377cecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377cf0: 0x1e43003  .word       0x01E43003                   # sra         $a2, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377cf0u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 0));
    // 0x377cf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377cf8: 0x3e00800  .word       0x03E00800                   # sll         $at, $zero, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377cf8u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x377cfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377cfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377d00: 0x3e01001  .word       0x03E01001                   # INVALID     $ra, $zero, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377d00u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x377D00 raw=0x03E01001");
    // 0x377d04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377d08: 0x3e01802  .word       0x03E01802                   # srl         $v1, $zero, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377d08u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x377d0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377d0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377d10: 0x3e02003  .word       0x03E02003                   # sra         $a0, $zero, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377d10u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), 0));
    // 0x377d14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377d18: 0x10010000  beq         $zero, $at, . + 4 + (0x0 << 2)
label_377d1c:
    if (ctx->pc == 0x377D1Cu) {
        ctx->pc = 0x377D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D18u;
        // 0x377d1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377D20u;
        goto label_fallthrough_0x377d18;
    }
    ctx->pc = 0x377D18u;
    {
        const bool branch_taken_0x377d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x377D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D18u;
        // 0x377d1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377d18) {
            ctx->pc = 0x377D1Cu;
            goto label_377d1c;
        }
    }
label_fallthrough_0x377d18:
    ctx->pc = 0x377D20u;
    // 0x377d20: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x377D20u;
    {
        const bool branch_taken_0x377d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x377D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D20u;
        // 0x377d24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377d20) {
            ctx->pc = 0x377D64u;
            goto label_377d64;
        }
    }
    ctx->pc = 0x377D28u;
    // 0x377d28: 0x1003000c  beq         $zero, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x377D28u;
    {
        const bool branch_taken_0x377d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x377D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D28u;
        // 0x377d2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377d28) {
            ctx->pc = 0x377D5Cu;
            goto label_377d5c;
        }
    }
    ctx->pc = 0x377D30u;
    // 0x377d30: 0x420f0035  .word       0x420F0035                   # INVALID     $s0, $t7, 0x35 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x377d30u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x35 at 0x377D30 raw=0x420F0035");
    // 0x377d34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377d34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377d38: 0x10040018  beq         $zero, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x377D38u;
    {
        const bool branch_taken_0x377d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x377D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D38u;
        // 0x377d3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377d38) {
            ctx->pc = 0x377D9Cu;
            goto label_377d9c;
        }
    }
    ctx->pc = 0x377D40u;
    // 0x377d40: 0x9020022  j           func_4080088
    ctx->pc = 0x377D40u;
    ctx->pc = 0x377D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D40u;
    // 0x377d44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4080088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4080088u, 0x377D40u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377D48u;
    // 0x377d48: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377d4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377d4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377d50: 0x8810022  j           func_2040088
    ctx->pc = 0x377D50u;
    ctx->pc = 0x377D54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D50u;
    // 0x377d54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040088u, 0x377D50u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377D58u;
    // 0x377d58: 0x9020023  j           func_408008C
label_377d5c:
    if (ctx->pc == 0x377D5Cu) {
        ctx->pc = 0x377D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D58u;
        // 0x377d5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377D60u;
        goto label_fallthrough_0x377d58;
    }
    ctx->pc = 0x377D58u;
    ctx->pc = 0x377D5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D58u;
    // 0x377d5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x408008Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x408008Cu, 0x377D58u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x377d58:
    ctx->pc = 0x377D60u;
    // 0x377d60: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
label_377d64:
    // 0x377d64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377d64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377d68: 0x8810023  j           func_204008C
    ctx->pc = 0x377D68u;
    ctx->pc = 0x377D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D68u;
    // 0x377d6c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x204008Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x204008Cu, 0x377D68u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377D70u;
    // 0x377d70: 0x9020024  j           func_4080090
    ctx->pc = 0x377D70u;
    ctx->pc = 0x377D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D70u;
    // 0x377d74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4080090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4080090u, 0x377D70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377D78u;
    // 0x377d78: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377d7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377d7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377d80: 0x8810024  j           func_2040090
    ctx->pc = 0x377D80u;
    ctx->pc = 0x377D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D80u;
    // 0x377d84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040090u, 0x377D80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377D88u;
    // 0x377d88: 0x9020025  j           func_4080094
    ctx->pc = 0x377D88u;
    ctx->pc = 0x377D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D88u;
    // 0x377d8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4080094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4080094u, 0x377D88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377D90u;
    // 0x377d90: 0x4a0f1000  vaddx       $vf0, $vf2, $vf15x
    ctx->pc = 0x377d90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[15], ctx->vu0_vf[15], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, 0); ctx->vu0_vf[0] = _mm_blendv_ps(ctx->vu0_vf[0], res, _mm_castsi128_ps(mask)); }
    // 0x377d94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377d98: 0x8810025  j           func_2040094
label_377d9c:
    if (ctx->pc == 0x377D9Cu) {
        ctx->pc = 0x377D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377D98u;
        // 0x377d9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377DA0u;
        goto label_fallthrough_0x377d98;
    }
    ctx->pc = 0x377D98u;
    ctx->pc = 0x377D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377D98u;
    // 0x377d9c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2040094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2040094u, 0x377D98u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x377d98:
    ctx->pc = 0x377DA0u;
    // 0x377da0: 0x40000783  .word       0x40000783                   # mfc0        $zero, Index # 00000783 <InstrIdType: R5900_COP0>
    ctx->pc = 0x377da0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x377da4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377da4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377da8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377da8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377dac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377dacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->pc = 0x377db0u;
}
