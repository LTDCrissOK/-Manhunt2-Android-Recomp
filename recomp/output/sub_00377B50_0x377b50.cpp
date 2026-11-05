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

// Function: sub_00377B50
// Address: 0x377b50 - 0x377c58
void sub_00377B50_0x377b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377B50_0x377b50");
#endif

    ctx->pc = 0x377b50u;

    // 0x377b50: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377b50u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377b54: 0x1e00058  .word       0x01E00058                   # mult        $zero, $t7, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x377b54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x377b58: 0x11e207ff  beq         $t7, $v0, . + 4 + (0x7FF << 2)
    ctx->pc = 0x377B58u;
    {
        const bool branch_taken_0x377b58 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 2));
        ctx->pc = 0x377B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B58u;
        // 0x377b5c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b58) {
            ctx->pc = 0x379B58u;
            return;
        }
    }
    ctx->pc = 0x377B60u;
    // 0x377b60: 0x10021001  beq         $zero, $v0, . + 4 + (0x1001 << 2)
    ctx->pc = 0x377B60u;
    {
        const bool branch_taken_0x377b60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x377B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B60u;
        // 0x377b64: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b60) {
            ctx->pc = 0x37BB68u;
            return;
        }
    }
    ctx->pc = 0x377B68u;
    // 0x377b68: 0x3e0083e  .word       0x03E0083E                   # dsrl32      $at, $zero, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377b68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) >> (32 + 0));
    // 0x377b6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377b6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377b70: 0xb02003e  j           func_C0800F8
    ctx->pc = 0x377B70u;
    ctx->pc = 0x377B74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x377B70u;
    // 0x377b74: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0> (Delay Slot)
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    ctx->in_delay_slot = false;
    ctx->pc = 0xC0800F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xC0800F8u, 0x377B70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x377B78u;
    // 0x377b78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377b78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377b7c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377b7cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377b80: 0x1001003e  beq         $zero, $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x377B80u;
    {
        const bool branch_taken_0x377b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x377B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377B80u;
        // 0x377b84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377b80) {
            ctx->pc = 0x377C7Cu;
            return;
        }
    }
    ctx->pc = 0x377B88u;
    // 0x377b88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377b88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377b8c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377b8cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377b90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377b90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377b94: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377b94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377b98: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x377b98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
    // 0x377b9c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377b9cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ba0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377ba0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377ba4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377ba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377ba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377bac: 0x400002ff  .word       0x400002FF                   # mfc0        $zero, Index # 000002FF <InstrIdType: R5900_COP0>
    ctx->pc = 0x377bacu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x377bb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377bb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377bb4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377bb8: 0x1001003e  beq         $zero, $at, . + 4 + (0x3E << 2)
    ctx->pc = 0x377BB8u;
    {
        const bool branch_taken_0x377bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x377BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377BB8u;
        // 0x377bbc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377bb8) {
            ctx->pc = 0x377CB4u;
            return;
        }
    }
    ctx->pc = 0x377BC0u;
    // 0x377bc0: 0x80000efc  lb          $zero, 0xEFC($zero)
    ctx->pc = 0x377bc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0xEFCu));
    // 0x377bc4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377bc8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x377bc8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x377BC8 raw=0x48007800");
    // 0x377bcc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377bccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377bd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377bd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377bd4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377bd4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377bd8: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x377bd8u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x377BD8 raw=0x48007800");
    // 0x377bdc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377bdcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377be0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x377be0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x377be4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377be4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377be8: 0x800606bc  lb          $a2, 0x6BC($zero)
    ctx->pc = 0x377be8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x6BCu));
    // 0x377bec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377becu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377bf0: 0x1e13000  .word       0x01E13000                   # sll         $a2, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x377bf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377bf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377bf8: 0x1e23001  .word       0x01E23001                   # INVALID     $t7, $v0, 0x3001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377bf8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x377BF8 raw=0x01E23001");
    // 0x377bfc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377bfcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c00: 0x1e33002  .word       0x01E33002                   # srl         $a2, $v1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377c00u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 3), 0));
    // 0x377c04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c08: 0x1e43003  .word       0x01E43003                   # sra         $a2, $a0, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377c08u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 4), 0));
    // 0x377c0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c10: 0x3e00800  .word       0x03E00800                   # sll         $at, $zero, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377c10u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
    // 0x377c14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c18: 0x3e01001  .word       0x03E01001                   # INVALID     $ra, $zero, 0x1001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377c18u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x377C18 raw=0x03E01001");
    // 0x377c1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c20: 0x3e01802  .word       0x03E01802                   # srl         $v1, $zero, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x377c24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c28: 0x3e02003  .word       0x03E02003                   # sra         $a0, $zero, 0 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377c28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 0), 0));
    // 0x377c2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c30: 0x10010000  beq         $zero, $at, . + 4 + (0x0 << 2)
label_377c34:
    if (ctx->pc == 0x377C34u) {
        ctx->pc = 0x377C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C30u;
        // 0x377c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377C38u;
        goto label_fallthrough_0x377c30;
    }
    ctx->pc = 0x377C30u;
    {
        const bool branch_taken_0x377c30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x377C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C30u;
        // 0x377c34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377c30) {
            ctx->pc = 0x377C34u;
            goto label_377c34;
        }
    }
label_fallthrough_0x377c30:
    ctx->pc = 0x377C38u;
    // 0x377c38: 0x10020010  beq         $zero, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x377C38u;
    {
        const bool branch_taken_0x377c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        ctx->pc = 0x377C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C38u;
        // 0x377c3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377c38) {
            ctx->pc = 0x377C7Cu;
            return;
        }
    }
    ctx->pc = 0x377C40u;
    // 0x377c40: 0x1003000c  beq         $zero, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x377C40u;
    {
        const bool branch_taken_0x377c40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        ctx->pc = 0x377C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C40u;
        // 0x377c44: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377c40) {
            ctx->pc = 0x377C74u;
            return;
        }
    }
    ctx->pc = 0x377C48u;
    // 0x377c48: 0x420f0052  .word       0x420F0052                   # INVALID     $s0, $t7, 0x52 # 00000000 <InstrIdType: CPU_COP0_TLB>
    ctx->pc = 0x377c48u;
    throw std::runtime_error("Unhandled COP0 CO-OP: 0x12 at 0x377C48 raw=0x420F0052");
    // 0x377c4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377c4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377c50: 0x10040018  beq         $zero, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x377C50u;
    {
        const bool branch_taken_0x377c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x377C54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377C50u;
        // 0x377c54: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377c50) {
            ctx->pc = 0x377CB4u;
            return;
        }
    }
    ctx->pc = 0x377C58u;
}
