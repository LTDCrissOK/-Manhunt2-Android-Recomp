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

// Function: sub_0037C9D8
// Address: 0x37c9d8 - 0x37cc30
void sub_0037C9D8_0x37c9d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037C9D8_0x37c9d8");
#endif

    ctx->pc = 0x37c9d8u;

    // 0x37c9d8: 0x800506bc  lb          $a1, 0x6BC($zero)
    ctx->pc = 0x37c9d8u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x6BCu));
    // 0x37c9dc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c9dcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c9e0: 0x8460034  j           func_11800D0
    ctx->pc = 0x37C9E0u;
    ctx->pc = 0x37C9E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9E0u;
    // 0x37c9e4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11800D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11800D0u, 0x37C9E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C9E8u;
    // 0x37c9e8: 0x80053174  lb          $a1, 0x3174($zero)
    ctx->pc = 0x37c9e8u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x3174u));
    // 0x37c9ec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c9ecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37c9f0: 0x9020033  j           func_40800CC
    ctx->pc = 0x37C9F0u;
    ctx->pc = 0x37C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37C9F0u;
    // 0x37c9f4: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x37C9F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37C9F8u;
    // 0x37c9f8: 0x800510b0  lb          $a1, 0x10B0($zero)
    ctx->pc = 0x37c9f8u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x10B0u));
    // 0x37c9fc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37c9fcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ca00: 0x8830033  j           func_20C00CC
    ctx->pc = 0x37CA00u;
    ctx->pc = 0x37CA04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA00u;
    // 0x37ca04: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20C00CCu, 0x37CA00u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37CA08u;
    // 0x37ca08: 0x800518f0  lb          $a1, 0x18F0($zero)
    ctx->pc = 0x37ca08u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x18F0u));
    // 0x37ca0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ca0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ca10: 0x9040034  j           func_41000D0
    ctx->pc = 0x37CA10u;
    ctx->pc = 0x37CA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA10u;
    // 0x37ca14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41000D0u, 0x37CA10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37CA18u;
    // 0x37ca18: 0x80052130  lb          $a1, 0x2130($zero)
    ctx->pc = 0x37ca18u;
    SET_GPR_S32(ctx, 5, (int8_t)FAST_READ8(0x2130u));
    // 0x37ca1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ca1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ca20: 0x84517ff  j           func_1145FFC
    ctx->pc = 0x37CA20u;
    ctx->pc = 0x37CA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA20u;
    // 0x37ca24: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1145FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1145FFCu, 0x37CA20u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37CA28u;
    // 0x37ca28: 0x80022970  lb          $v0, 0x2970($zero)
    ctx->pc = 0x37ca28u;
    SET_GPR_S32(ctx, 2, (int8_t)FAST_READ8(0x2970u));
    // 0x37ca2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ca2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ca30: 0x8860800  j           func_2182000
    ctx->pc = 0x37CA30u;
    ctx->pc = 0x37CA34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA30u;
    // 0x37ca34: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2182000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2182000u, 0x37CA30u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37CA38u;
    // 0x37ca38: 0x10010801  beq         $zero, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x37CA38u;
    {
        const bool branch_taken_0x37ca38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37CA38u;
        // 0x37ca3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37ca38) {
            ctx->pc = 0x37EA40u;
            return;
        }
    }
    ctx->pc = 0x37CA40u;
    // 0x37ca40: 0x1fe002e  dsub        $zero, $t7, $fp
    ctx->pc = 0x37ca40u;
    { int64_t a = (int64_t)GPR_S64(ctx, 15); int64_t b = (int64_t)GPR_S64(ctx, 30); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
    // 0x37ca44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ca44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ca48: 0x1ff002f  dsubu       $zero, $t7, $ra
    ctx->pc = 0x37ca48u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 15) - GPR_U64(ctx, 31));
    // 0x37ca4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ca4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ca50: 0x3c000000  lui         $zero, 0x0
    ctx->pc = 0x37ca50u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)0 << 16));
    // 0x37ca54: 0x800002ff  lb          $zero, 0x2FF($zero)
    ctx->pc = 0x37ca54u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x2FFu));
    // 0x37ca58: 0x803f73fd  lb          $ra, 0x73FD($at)
    ctx->pc = 0x37ca58u;
    SET_GPR_S32(ctx, 31, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 29693)));
    // 0x37ca5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ca5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ca60: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37ca60u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37ca64: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ca64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ca68: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37ca68u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37ca6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37ca6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37ca70: 0x9072000  j           func_41C8000
    ctx->pc = 0x37CA70u;
    ctx->pc = 0x37CA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA70u;
    // 0x37ca74: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C8000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C8000u, 0x37CA70u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37CA78u;
    // 0x37ca78: 0x8882000  j           func_2208000
    ctx->pc = 0x37CA78u;
    ctx->pc = 0x37CA7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA78u;
    // 0x37ca7c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2208000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2208000u, 0x37CA78u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37CA80u;
    // 0x37ca80: 0x8492000  j           func_1248000
    ctx->pc = 0x37CA80u;
    ctx->pc = 0x37CA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA80u;
    // 0x37ca84: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1248000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1248000u, 0x37CA80u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37CA88u;
    // 0x37ca88: 0x82a2000  j           func_A88000
    ctx->pc = 0x37CA88u;
    ctx->pc = 0x37CA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37CA88u;
    // 0x37ca8c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA88000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA88000u, 0x37CA88u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37CA90u;
    // 0x37ca90: 0x80063af4  lb          $a2, 0x3AF4($zero)
    ctx->pc = 0x37ca90u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x3AF4u));
    // 0x37ca94: 0x1c3093c  .word       0x01C3093C                   # dsll32      $at, $v1, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ca94u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 3) << (32 + 4));
    // 0x37ca98: 0x80064334  lb          $a2, 0x4334($zero)
    ctx->pc = 0x37ca98u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x4334u));
    // 0x37ca9c: 0x1c4113c  .word       0x01C4113C                   # dsll32      $v0, $a0, 4 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37ca9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 4));
    // 0x37caa0: 0x80064b74  lb          $a2, 0x4B74($zero)
    ctx->pc = 0x37caa0u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x4B74u));
    // 0x37caa4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37caa4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37caa8: 0x800653b4  lb          $a2, 0x53B4($zero)
    ctx->pc = 0x37caa8u;
    SET_GPR_S32(ctx, 6, (int8_t)FAST_READ8(0x53B4u));
    // 0x37caac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37caacu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cab0: 0x80015af0  lb          $at, 0x5AF0($zero)
    ctx->pc = 0x37cab0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x5AF0u));
    // 0x37cab4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cab4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cab8: 0x80016330  lb          $at, 0x6330($zero)
    ctx->pc = 0x37cab8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6330u));
    // 0x37cabc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cabcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cac0: 0x80016b70  lb          $at, 0x6B70($zero)
    ctx->pc = 0x37cac0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6B70u));
    // 0x37cac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cac8: 0x800173b0  lb          $at, 0x73B0($zero)
    ctx->pc = 0x37cac8u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x73B0u));
    // 0x37cacc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37caccu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cad0: 0x1e75800  .word       0x01E75800                   # sll         $t3, $a3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cad0u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
    // 0x37cad4: 0x1de1abe  .word       0x01DE1ABE                   # dsrl32      $v1, $fp, 10 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cad4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 30) >> (32 + 10));
    // 0x37cad8: 0x1e85801  .word       0x01E85801                   # INVALID     $t7, $t0, 0x5801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cad8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37CAD8 raw=0x01E85801");
    // 0x37cadc: 0x1c0f94b  .word       0x01C0F94B                   # movn        $ra, $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cadcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 14));
    // 0x37cae0: 0x1e95802  .word       0x01E95802                   # srl         $t3, $t1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cae0u;
    SET_GPR_S32(ctx, 11, (int32_t)SRL32(GPR_U32(ctx, 9), 0));
    // 0x37cae4: 0x1c0219e  .word       0x01C0219E                   # ddiv        $a0, $t6, $zero # 00000180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cae4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37CAE4 raw=0x01C0219E");
    // 0x37cae8: 0x1ea5803  .word       0x01EA5803                   # sra         $t3, $t2, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cae8u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 10), 0));
    // 0x37caec: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37caecu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37caf0: 0x1eb6000  .word       0x01EB6000                   # sll         $t4, $t3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37caf0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 11), 0));
    // 0x37caf4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37caf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37caf8: 0x1ec6001  .word       0x01EC6001                   # INVALID     $t7, $t4, 0x6001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37caf8u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37CAF8 raw=0x01EC6001");
    // 0x37cafc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cafcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb00: 0x1ed6002  .word       0x01ED6002                   # srl         $t4, $t5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb00u;
    SET_GPR_S32(ctx, 12, (int32_t)SRL32(GPR_U32(ctx, 13), 0));
    // 0x37cb04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb08: 0x1ee6003  .word       0x01EE6003                   # sra         $t4, $t6, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb08u;
    SET_GPR_S32(ctx, 12, SRA32(GPR_S32(ctx, 14), 0));
    // 0x37cb0c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb0cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb10: 0x1ef6800  .word       0x01EF6800                   # sll         $t5, $t7, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb10u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 15), 0));
    // 0x37cb14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb18: 0x1f06801  .word       0x01F06801                   # INVALID     $t7, $s0, 0x6801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb18u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37CB18 raw=0x01F06801");
    // 0x37cb1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb20: 0x1f16802  .word       0x01F16802                   # srl         $t5, $s1, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb20u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 17), 0));
    // 0x37cb24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb28: 0x1f26803  .word       0x01F26803                   # sra         $t5, $s2, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb28u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 18), 0));
    // 0x37cb2c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb2cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb30: 0x1f37000  .word       0x01F37000                   # sll         $t6, $s3, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb30u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 19), 0));
    // 0x37cb34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb38: 0x1f47001  .word       0x01F47001                   # INVALID     $t7, $s4, 0x7001 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb38u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x37CB38 raw=0x01F47001");
    // 0x37cb3c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb3cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb40: 0x1f57002  .word       0x01F57002                   # srl         $t6, $s5, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb40u;
    SET_GPR_S32(ctx, 14, (int32_t)SRL32(GPR_U32(ctx, 21), 0));
    // 0x37cb44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb48: 0x1f67003  .word       0x01F67003                   # sra         $t6, $s6, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb48u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 22), 0));
    // 0x37cb4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cb4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cb50: 0x81fc237c  lb          $gp, 0x237C($t7)
    ctx->pc = 0x37cb50u;
    SET_GPR_S32(ctx, 28, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 9084)));
    // 0x37cb54: 0x1c539bc  .word       0x01C539BC                   # dsll32      $a3, $a1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb54u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) << (32 + 6));
    // 0x37cb58: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cb58u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cb5c: 0x1c540bd  .word       0x01C540BD                   # INVALID     $t6, $a1, 0x40BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37CB5C raw=0x01C540BD");
    // 0x37cb60: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cb60u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cb64: 0x1c548be  .word       0x01C548BE                   # dsrl32      $t1, $a1, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) >> (32 + 2));
    // 0x37cb68: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cb68u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cb6c: 0x1c055cb  .word       0x01C055CB                   # movn        $t2, $t6, $zero # 000005C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb6cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 14));
    // 0x37cb70: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cb70u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cb74: 0x1c559bc  .word       0x01C559BC                   # dsll32      $t3, $a1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb74u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 5) << (32 + 6));
    // 0x37cb78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cb78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cb7c: 0x1c560bd  .word       0x01C560BD                   # INVALID     $t6, $a1, 0x60BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37CB7C raw=0x01C560BD");
    // 0x37cb80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cb80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cb84: 0x1c568be  .word       0x01C568BE                   # dsrl32      $t5, $a1, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb84u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 5) >> (32 + 2));
    // 0x37cb88: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cb88u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cb8c: 0x1c0760b  .word       0x01C0760B                   # movn        $t6, $t6, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb8cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 14, GPR_VEC(ctx, 14));
    // 0x37cb90: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cb90u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cb94: 0x1c579bc  .word       0x01C579BC                   # dsll32      $t7, $a1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb94u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) << (32 + 6));
    // 0x37cb98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cb98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cb9c: 0x1c580bd  .word       0x01C580BD                   # INVALID     $t6, $a1, -0x7F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cb9cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37CB9C raw=0x01C580BD");
    // 0x37cba0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cba0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cba4: 0x1c588be  .word       0x01C588BE                   # dsrl32      $s1, $a1, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cba4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) >> (32 + 2));
    // 0x37cba8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cba8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbac: 0x1c0964b  .word       0x01C0964B                   # movn        $s2, $t6, $zero # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbacu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 14));
    // 0x37cbb0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cbb0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbb4: 0x1c599bc  .word       0x01C599BC                   # dsll32      $s3, $a1, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbb4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 5) << (32 + 6));
    // 0x37cbb8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cbb8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbbc: 0x1c5a0bd  .word       0x01C5A0BD                   # INVALID     $t6, $a1, -0x5F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbbcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37CBBC raw=0x01C5A0BD");
    // 0x37cbc0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cbc0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbc4: 0x1c5a8be  .word       0x01C5A8BE                   # dsrl32      $s5, $a1, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbc4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 5) >> (32 + 2));
    // 0x37cbc8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cbc8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbcc: 0x1c0b68b  .word       0x01C0B68B                   # movn        $s6, $t6, $zero # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbccu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 14));
    // 0x37cbd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cbd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbd4: 0x1c639bc  .word       0x01C639BC                   # dsll32      $a3, $a2, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbd4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) << (32 + 6));
    // 0x37cbd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cbd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbdc: 0x1c640bd  .word       0x01C640BD                   # INVALID     $t6, $a2, 0x40BD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbdcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37CBDC raw=0x01C640BD");
    // 0x37cbe0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cbe0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbe4: 0x1c64eca  .word       0x01C64ECA                   # movz        $t1, $t6, $a2 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbe4u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 14));
    // 0x37cbe8: 0x3e3dfff  .word       0x03E3DFFF                   # dsra32      $k1, $v1, 31 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbe8u;
    SET_GPR_S64(ctx, 27, GPR_S64(ctx, 3) >> (32 + 31));
    // 0x37cbec: 0x1dcb9bc  .word       0x01DCB9BC                   # dsll32      $s7, $gp, 6 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 28) << (32 + 6));
    // 0x37cbf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cbf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbf4: 0x1dcc0bd  .word       0x01DCC0BD                   # INVALID     $t6, $gp, -0x3F43 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbf4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37CBF4 raw=0x01DCC0BD");
    // 0x37cbf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cbf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cbfc: 0x1dcc8be  .word       0x01DCC8BE                   # dsrl32      $t9, $gp, 2 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cbfcu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 28) >> (32 + 2));
    // 0x37cc00: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37cc00u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37cc04: 0x1dcd74b  .word       0x01DCD74B                   # movn        $k0, $t6, $gp # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cc04u;
    if (GPR_U64(ctx, 28) != 0) SET_GPR_VEC(ctx, 26, GPR_VEC(ctx, 14));
    // 0x37cc08: 0x520517ca  beql        $s0, $a1, . + 4 + (0x17CA << 2)
    ctx->pc = 0x37CC08u;
    {
        const bool branch_taken_0x37cc08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 5));
        if (branch_taken_0x37cc08) {
            ctx->pc = 0x37CC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37CC08u;
            // 0x37cc0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x382B34u;
            return;
        }
    }
    ctx->pc = 0x37CC10u;
    // 0x37cc10: 0x3c2efff  .word       0x03C2EFFF                   # dsra32      $sp, $v0, 31 # 03C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37cc10u;
    SET_GPR_S64(ctx, 29, GPR_S64(ctx, 2) >> (32 + 31));
    // 0x37cc14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cc14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cc18: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37cc18u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37CC18 raw=0x48007800");
    // 0x37cc1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cc1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cc20: 0x806ef3fc  lb          $t6, -0xC04($v1)
    ctx->pc = 0x37cc20u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964220)));
    // 0x37cc24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37cc24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37cc28: 0x0  nop
    ctx->pc = 0x37cc28u;
    // NOP
    // 0x37cc2c: 0x0  nop
    ctx->pc = 0x37cc2cu;
    // NOP
    ctx->pc = 0x37cc30u;
}
