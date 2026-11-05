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

// Function: sub_00377974
// Address: 0x377974 - 0x3779e0
void sub_00377974_0x377974(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377974_0x377974");
#endif

    ctx->pc = 0x377974u;

    // 0x377974: 0x246350a0  addiu       $v1, $v1, 0x50A0
    ctx->pc = 0x377974u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20640));
    // 0x377978: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x377978u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x37797c: 0x3e00008  jr          $ra
    ctx->pc = 0x37797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x377980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37797Cu;
        // 0x377980: 0x21102  srl         $v0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x37797Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x377984u;
    // 0x377984: 0x0  nop
    ctx->pc = 0x377984u;
    // NOP
    // 0x377988: 0x0  nop
    ctx->pc = 0x377988u;
    // NOP
    // 0x37798c: 0x0  nop
    ctx->pc = 0x37798cu;
    // NOP
    // 0x377990: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x377990u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x377994: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x377994u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x377998: 0x1e10800  .word       0x01E10800                   # sll         $at, $at, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x377998u;
    SET_GPR_S32(ctx, 1, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
    // 0x37799c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37799cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3779a0: 0x1e20801  .word       0x01E20801                   # INVALID     $t7, $v0, 0x801 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3779a0u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x3779A0 raw=0x01E20801");
    // 0x3779a4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3779a4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3779a8: 0x3e0082e  dsub        $at, $ra, $zero
    ctx->pc = 0x3779a8u;
    { int64_t a = (int64_t)GPR_S64(ctx, 31); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, r); }
    // 0x3779ac: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3779acu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3779b0: 0x40000039  .word       0x40000039                   # mfc0        $zero, Index # 00000039 <InstrIdType: R5900_COP0>
    ctx->pc = 0x3779b0u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_index);
    // 0x3779b4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3779b4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3779b8: 0x3e0102f  dsubu       $v0, $ra, $zero
    ctx->pc = 0x3779b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 31) - GPR_U64(ctx, 0));
    // 0x3779bc: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3779bcu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3779c0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x3779c0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x3779c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3779c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3779c8: 0x9010026  j           func_4040098
    ctx->pc = 0x3779C8u;
    ctx->pc = 0x3779CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3779C8u;
    // 0x3779cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4040098u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4040098u, 0x3779C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x3779D0u;
    // 0x3779d0: 0x48000800  .word       0x48000800                   # INVALID     $zero, $zero, 0x800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x3779d0u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x3779D0 raw=0x48000800");
    // 0x3779d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x3779d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x3779d8: 0x100e003a  beq         $zero, $t6, . + 4 + (0x3A << 2)
    ctx->pc = 0x3779D8u;
    {
        const bool branch_taken_0x3779d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 14));
        ctx->pc = 0x3779DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3779D8u;
        // 0x3779dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3779d8) {
            ctx->pc = 0x377AC4u;
            return;
        }
    }
    ctx->pc = 0x3779E0u;
}
