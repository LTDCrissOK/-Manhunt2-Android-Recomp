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

// Function: sub_0037D9C0
// Address: 0x37d9c0 - 0x37dc60
void sub_0037D9C0_0x37d9c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0037D9C0_0x37d9c0");
#endif

    switch (ctx->pc) {
        case 0x37daa8u: goto label_37daa8;
        case 0x37dbb0u: goto label_37dbb0;
        default: break;
    }

    ctx->pc = 0x37d9c0u;

    // 0x37d9c0: 0x800106bc  lb          $at, 0x6BC($zero)
    ctx->pc = 0x37d9c0u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x6BCu));
    // 0x37d9c4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d9c4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d9c8: 0x8440034  j           func_11000D0
    ctx->pc = 0x37D9C8u;
    ctx->pc = 0x37D9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D9C8u;
    // 0x37d9cc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11000D0u, 0x37D9C8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37D9D0u;
    // 0x37d9d0: 0x80040934  lb          $a0, 0x934($zero)
    ctx->pc = 0x37d9d0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x934u));
    // 0x37d9d4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d9d4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d9d8: 0x9020033  j           func_40800CC
    ctx->pc = 0x37D9D8u;
    ctx->pc = 0x37D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D9D8u;
    // 0x37d9dc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40800CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40800CCu, 0x37D9D8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37D9E0u;
    // 0x37d9e0: 0x800410b0  lb          $a0, 0x10B0($zero)
    ctx->pc = 0x37d9e0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x10B0u));
    // 0x37d9e4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d9e4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d9e8: 0x8430033  j           func_10C00CC
    ctx->pc = 0x37D9E8u;
    ctx->pc = 0x37D9ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D9E8u;
    // 0x37d9ec: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10C00CCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10C00CCu, 0x37D9E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37D9F0u;
    // 0x37d9f0: 0x800418f0  lb          $a0, 0x18F0($zero)
    ctx->pc = 0x37d9f0u;
    SET_GPR_S32(ctx, 4, (int8_t)FAST_READ8(0x18F0u));
    // 0x37d9f4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37d9f4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37d9f8: 0x8240034  j           func_9000D0
    ctx->pc = 0x37D9F8u;
    ctx->pc = 0x37D9FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37D9F8u;
    // 0x37d9fc: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x9000D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x9000D0u, 0x37D9F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DA00u;
    // 0x37da00: 0x80012130  lb          $at, 0x2130($zero)
    ctx->pc = 0x37da00u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x2130u));
    // 0x37da04: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37da04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37da08: 0x10042001  beq         $zero, $a0, . + 4 + (0x2001 << 2)
    ctx->pc = 0x37DA08u;
    {
        const bool branch_taken_0x37da08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 4));
        ctx->pc = 0x37DA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA08u;
        // 0x37da0c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da08) {
            ctx->pc = 0x385A10u;
            return;
        }
    }
    ctx->pc = 0x37DA10u;
    // 0x37da10: 0x84117ff  j           func_1045FFC
    ctx->pc = 0x37DA10u;
    ctx->pc = 0x37DA14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x37DA10u;
    // 0x37da14: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1045FFCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1045FFCu, 0x37DA10u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x37DA18u;
    // 0x37da18: 0x12080806  beq         $s0, $t0, . + 4 + (0x806 << 2)
    ctx->pc = 0x37DA18u;
    {
        const bool branch_taken_0x37da18 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x37DA1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA18u;
        // 0x37da1c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da18) {
            ctx->pc = 0x37FA34u;
            return;
        }
    }
    ctx->pc = 0x37DA20u;
    // 0x37da20: 0x1f60037  .word       0x01F60037                   # INVALID     $t7, $s6, 0x37 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37da20u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x37DA20 raw=0x01F60037");
    // 0x37da24: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37da24u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37da28: 0x5a004002  blezl       $s0, . + 4 + (0x4002 << 2)
    ctx->pc = 0x37DA28u;
    {
        const bool branch_taken_0x37da28 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x37da28) {
            ctx->pc = 0x37DA2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DA28u;
            // 0x37da2c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
            SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38DA34u;
            return;
        }
    }
    ctx->pc = 0x37DA30u;
    // 0x37da30: 0x1fc001c  dmult       $t7, $gp
    ctx->pc = 0x37da30u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DA30 raw=0x01FC001C");
    // 0x37da34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37da34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37da38: 0x10010006  beq         $zero, $at, . + 4 + (0x6 << 2)
    ctx->pc = 0x37DA38u;
    {
        const bool branch_taken_0x37da38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 1));
        ctx->pc = 0x37DA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA38u;
        // 0x37da3c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da38) {
            ctx->pc = 0x37DA54u;
            goto label_37da54;
        }
    }
    ctx->pc = 0x37DA40u;
    // 0x37da40: 0x80011070  lb          $at, 0x1070($zero)
    ctx->pc = 0x37da40u;
    SET_GPR_S32(ctx, 1, (int8_t)FAST_READ8(0x1070u));
    // 0x37da44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37da44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37da48: 0x12010801  beq         $s0, $at, . + 4 + (0x801 << 2)
    ctx->pc = 0x37DA48u;
    {
        const bool branch_taken_0x37da48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        ctx->pc = 0x37DA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37DA48u;
        // 0x37da4c: 0x2ff  dsra32      $zero, $zero, 11 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37da48) {
            ctx->pc = 0x37FA50u;
            return;
        }
    }
    ctx->pc = 0x37DA50u;
    // 0x37da50: 0x1fd001d  dmultu      $t7, $sp
    ctx->pc = 0x37da50u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1D at 0x37DA50 raw=0x01FD001D");
label_37da54:
    // 0x37da54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37da54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37da58: 0x1fe001e  ddiv        $zero, $t7, $fp
    ctx->pc = 0x37da58u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1E at 0x37DA58 raw=0x01FE001E");
    // 0x37da5c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37da5cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37da60: 0x1ff001f  ddivu       $zero, $t7, $ra
    ctx->pc = 0x37da60u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1F at 0x37DA60 raw=0x01FF001F");
    // 0x37da64: 0x1e00218  .word       0x01E00218                   # mult        $zero, $t7, $zero # 00000200 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x37da64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 15) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x37da68: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37da68u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37da6c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37da6cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37da70: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37da70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37da74: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37da74u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37da78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37da78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37da7c: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37da7cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DA7C raw=0x01E1E8BD");
    // 0x37da80: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37da80u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37da84: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37da84u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37da88: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37da88u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37da8c: 0x1e0f8cb  .word       0x01E0F8CB                   # movn        $ra, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37da8cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37da90: 0x81e303bc  lb          $v1, 0x3BC($t7)
    ctx->pc = 0x37da90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37da94: 0x1e0191b  .word       0x01E0191B                   # divu        $v1, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37da94u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37da98: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37da98u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37da9c: 0x1c0115b  .word       0x01C0115B                   # divu        $v0, $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37da9cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37daa0: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37daa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37daa4: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37daa4u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
label_37daa8:
    // 0x37daa8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37daa8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37daac: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37daacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DAAC raw=0x01E1E8BD");
    // 0x37dab0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dab0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dab4: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dab4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37dab8: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37dab8u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37dabc: 0x1e0f8cb  .word       0x01E0F8CB                   # movn        $ra, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dabcu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37dac0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dac0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dac4: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dac4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dac8: 0x8027233c  lb          $a3, 0x233C($at)
    ctx->pc = 0x37dac8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 9020)));
    // 0x37dacc: 0x1c0219c  .word       0x01C0219C                   # dmult       $t6, $zero # 00002180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37daccu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DACC raw=0x01C0219C");
    // 0x37dad0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dad0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dad4: 0x1c029dc  .word       0x01C029DC                   # dmult       $t6, $zero # 000029C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dad4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DAD4 raw=0x01C029DC");
    // 0x37dad8: 0x81e303bc  lb          $v1, 0x3BC($t7)
    ctx->pc = 0x37dad8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37dadc: 0x1e0191b  .word       0x01E0191B                   # divu        $v1, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dadcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37dae0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dae0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dae4: 0x1c0115b  .word       0x01C0115B                   # divu        $v0, $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dae4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37dae8: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37dae8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37daec: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37daecu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37daf0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37daf0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37daf4: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37daf4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DAF4 raw=0x01E1E8BD");
    // 0x37daf8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37daf8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dafc: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dafcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37db00: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37db00u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37db04: 0x1e0f8cb  .word       0x01E0F8CB                   # movn        $ra, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db04u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37db08: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37db08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37db0c: 0x1e8317d  .word       0x01E8317D                   # INVALID     $t7, $t0, 0x317D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DB0C raw=0x01E8317D");
    // 0x37db10: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37db10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37db14: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37db14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37db18: 0x8027233c  lb          $a3, 0x233C($at)
    ctx->pc = 0x37db18u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 9020)));
    // 0x37db1c: 0x1c0219c  .word       0x01C0219C                   # dmult       $t6, $zero # 00002180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db1cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DB1C raw=0x01C0219C");
    // 0x37db20: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37db20u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37db24: 0x1c029dc  .word       0x01C029DC                   # dmult       $t6, $zero # 000029C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DB24 raw=0x01C029DC");
    // 0x37db28: 0x81e303bc  lb          $v1, 0x3BC($t7)
    ctx->pc = 0x37db28u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37db2c: 0x1e0191b  .word       0x01E0191B                   # divu        $v1, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db2cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37db30: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37db30u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37db34: 0x1c0115b  .word       0x01C0115B                   # divu        $v0, $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db34u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37db38: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37db38u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37db3c: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db3cu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37db40: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37db40u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37db44: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db44u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DB44 raw=0x01E1E8BD");
    // 0x37db48: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37db48u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37db4c: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db4cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37db50: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37db50u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37db54: 0x1e0f8cb  .word       0x01E0F8CB                   # movn        $ra, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db54u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37db58: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37db58u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37db5c: 0x1e8317d  .word       0x01E8317D                   # INVALID     $t7, $t0, 0x317D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db5cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DB5C raw=0x01E8317D");
    // 0x37db60: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37db60u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37db64: 0x1c029dc  .word       0x01C029DC                   # dmult       $t6, $zero # 000029C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db64u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DB64 raw=0x01C029DC");
    // 0x37db68: 0x8027233c  lb          $a3, 0x233C($at)
    ctx->pc = 0x37db68u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 9020)));
    // 0x37db6c: 0x1c0219c  .word       0x01C0219C                   # dmult       $t6, $zero # 00002180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db6cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DB6C raw=0x01C0219C");
    // 0x37db70: 0x81e303bc  lb          $v1, 0x3BC($t7)
    ctx->pc = 0x37db70u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37db74: 0x1e0191b  .word       0x01E0191B                   # divu        $v1, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db74u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37db78: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37db78u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37db7c: 0x1c0115b  .word       0x01C0115B                   # divu        $v0, $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db7cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37db80: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37db80u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37db84: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db84u;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37db88: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37db88u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37db8c: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db8cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DB8C raw=0x01E1E8BD");
    // 0x37db90: 0x520117f8  beql        $s0, $at, . + 4 + (0x17F8 << 2)
    ctx->pc = 0x37DB90u;
    {
        const bool branch_taken_0x37db90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 1));
        if (branch_taken_0x37db90) {
            ctx->pc = 0x37DB94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x37DB90u;
            // 0x37db94: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383B74u;
            return;
        }
    }
    ctx->pc = 0x37DB98u;
    // 0x37db98: 0x81e1137c  lb          $at, 0x137C($t7)
    ctx->pc = 0x37db98u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4988)));
    // 0x37db9c: 0x1e0f8cb  .word       0x01E0F8CB                   # movn        $ra, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37db9cu;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37dba0: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37dba0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37dba4: 0x1e8317d  .word       0x01E8317D                   # INVALID     $t7, $t0, 0x317D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dba4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DBA4 raw=0x01E8317D");
    // 0x37dba8: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37dba8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37dbac: 0x1c029dc  .word       0x01C029DC                   # dmult       $t6, $zero # 000029C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbacu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DBAC raw=0x01C029DC");
label_37dbb0:
    // 0x37dbb0: 0x8027233c  lb          $a3, 0x233C($at)
    ctx->pc = 0x37dbb0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 9020)));
    // 0x37dbb4: 0x1c0219c  .word       0x01C0219C                   # dmult       $t6, $zero # 00002180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbb4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DBB4 raw=0x01C0219C");
    // 0x37dbb8: 0x81e303bc  lb          $v1, 0x3BC($t7)
    ctx->pc = 0x37dbb8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37dbbc: 0x1e0191b  .word       0x01E0191B                   # divu        $v1, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbbcu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37dbc0: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37dbc0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37dbc4: 0x1c0115b  .word       0x01C0115B                   # divu        $v0, $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbc4u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37dbc8: 0x81e21b7c  lb          $v0, 0x1B7C($t7)
    ctx->pc = 0x37dbc8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 7036)));
    // 0x37dbcc: 0x1e1e1bc  .word       0x01E1E1BC                   # dsll32      $gp, $at, 6 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbccu;
    SET_GPR_U64(ctx, 28, GPR_U64(ctx, 1) << (32 + 6));
    // 0x37dbd0: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dbd0u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dbd4: 0x1e1e8bd  .word       0x01E1E8BD                   # INVALID     $t7, $at, -0x1743 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbd4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DBD4 raw=0x01E1E8BD");
    // 0x37dbd8: 0x8000033c  lb          $zero, 0x33C($zero)
    ctx->pc = 0x37dbd8u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x33Cu));
    // 0x37dbdc: 0x1e1f0be  .word       0x01E1F0BE                   # dsrl32      $fp, $at, 2 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbdcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 1) >> (32 + 2));
    // 0x37dbe0: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37dbe0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37dbe4: 0x1e0f8cb  .word       0x01E0F8CB                   # movn        $ra, $t7, $zero # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbe4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 31, GPR_VEC(ctx, 15));
    // 0x37dbe8: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37dbe8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37dbec: 0x1e8317d  .word       0x01E8317D                   # INVALID     $t7, $t0, 0x317D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbecu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DBEC raw=0x01E8317D");
    // 0x37dbf0: 0x8027233c  lb          $a3, 0x233C($at)
    ctx->pc = 0x37dbf0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 9020)));
    // 0x37dbf4: 0x1c0219c  .word       0x01C0219C                   # dmult       $t6, $zero # 00002180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbf4u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DBF4 raw=0x01C0219C");
    // 0x37dbf8: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37dbf8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37dbfc: 0x1c029dc  .word       0x01C029DC                   # dmult       $t6, $zero # 000029C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dbfcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DBFC raw=0x01C029DC");
    // 0x37dc00: 0x81e303bc  lb          $v1, 0x3BC($t7)
    ctx->pc = 0x37dc00u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 956)));
    // 0x37dc04: 0x1e0191b  .word       0x01E0191B                   # divu        $v1, $t7, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dc04u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 15) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,15); } }
    // 0x37dc08: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37dc08u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37dc0c: 0x1c0115b  .word       0x01C0115B                   # divu        $v0, $t6, $zero # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dc0cu;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 14) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,14); } }
    // 0x37dc10: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37dc10u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37dc14: 0x1e8317d  .word       0x01E8317D                   # INVALID     $t7, $t0, 0x317D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dc14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DC14 raw=0x01E8317D");
    // 0x37dc18: 0x800003bf  lb          $zero, 0x3BF($zero)
    ctx->pc = 0x37dc18u;
    SET_GPR_S32(ctx, 0, (int8_t)FAST_READ8(0x3BFu));
    // 0x37dc1c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dc1cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dc20: 0x8027233c  lb          $a3, 0x233C($at)
    ctx->pc = 0x37dc20u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 1), 9020)));
    // 0x37dc24: 0x1c0219c  .word       0x01C0219C                   # dmult       $t6, $zero # 00002180 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dc24u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DC24 raw=0x01C0219C");
    // 0x37dc28: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37dc28u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37dc2c: 0x1c029dc  .word       0x01C029DC                   # dmult       $t6, $zero # 000029C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dc2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1C at 0x37DC2C raw=0x01C029DC");
    // 0x37dc30: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37dc30u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37dc34: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dc34u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dc38: 0x81e43b7d  lb          $a0, 0x3B7D($t7)
    ctx->pc = 0x37dc38u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 15229)));
    // 0x37dc3c: 0x1e8317d  .word       0x01E8317D                   # INVALID     $t7, $t0, 0x317D # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x37dc3cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x3D at 0x37DC3C raw=0x01E8317D");
    // 0x37dc40: 0x81e4b37d  lb          $a0, -0x4C83($t7)
    ctx->pc = 0x37dc40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 4294947709)));
    // 0x37dc44: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dc44u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dc48: 0x48007800  .word       0x48007800                   # INVALID     $zero, $zero, 0x7800 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x37dc48u;
    throw std::runtime_error("Unhandled COP2 format: 0x0 at 0x37DC48 raw=0x48007800");
    // 0x37dc4c: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dc4cu;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dc50: 0x81e4437d  lb          $a0, 0x437D($t7)
    ctx->pc = 0x37dc50u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 15), 17277)));
    // 0x37dc54: 0x2ff  dsra32      $zero, $zero, 11
    ctx->pc = 0x37dc54u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 11));
    // 0x37dc58: 0x0  nop
    ctx->pc = 0x37dc58u;
    // NOP
    // 0x37dc5c: 0x0  nop
    ctx->pc = 0x37dc5cu;
    // NOP
    ctx->pc = 0x37dc60u;
}
